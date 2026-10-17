#include "iop_emulator.h"
#include "imports/iop_cdvd.h"
#include "core/iop_cpu.h"
#include "core/iop_cpu_exec.inl"
#include "imports/iop_heaplib.h"
#include "imports/iop_imports.h"
#include "imports/iop_intrman.h"
#include "imports/iop_ioman.h"
#include "core/iop_kernel.h"
#include "imports/iop_loadcore.h"
#include "core/iop_memory.h"
#include "services/iop_module_loader.h"
#include "services/iop_rpc.h"
#include "imports/iop_stdio.h"
#include "imports/iop_sysclib.h"
#include "imports/iop_sysmem.h"
#include "imports/iop_timrman.h"
#include "imports/iop_vblank.h"
#include "iop_emulator_const.h"

#include <algorithm>
#include <array>
#include <vector>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <map>
#include <optional>
#include <span>
#include <sstream>
#include <utility>

namespace ps2x::iop::detail
{
    namespace
    {
        constexpr uint32_t kRamSize = IopMemory::RamSize;
        constexpr uint32_t kKernelHeapBase = IopMemory::HeapBase;
        constexpr uint32_t kKernelHeapLimit = IopMemory::HeapLimit;
        constexpr uint32_t kCallStackBase = kKernelHeapLimit;
        constexpr uint32_t kCallStackLimit = 0x001FFF00u;
        constexpr uint32_t kCallStackSize = 0x2000u;
        // The lowest call-stack slot is reserved for RPC server threads (see executeGuestFunctionInThread).
        constexpr uint32_t kRpcThreadStackTop = kCallStackBase + kCallStackSize;
        constexpr uint32_t kCallStackCapacity = (kCallStackLimit - kCallStackBase) / kCallStackSize - 1u;
        constexpr uint64_t kCdvdCompletionCycles = 128u;

        uint32_t physicalAddress(uint32_t address)
        {
            return IopMemory::physicalAddress(address);
        }

        int32_t sign16(uint32_t value)
        {
            return static_cast<int16_t>(value & 0xFFFFu);
        }

        bool iequals(std::string_view lhs, std::string_view rhs)
        {
            if (lhs.size() != rhs.size())
                return false;
            for (size_t i = 0; i < lhs.size(); ++i)
            {
                if (std::tolower(static_cast<unsigned char>(lhs[i])) !=
                    std::tolower(static_cast<unsigned char>(rhs[i])))
                    return false;
            }
            return true;
        }

    }

    class IopEmulator::Impl final : public IopGuestExecutor
    {
    public:
        using CpuState = IopCpuState;

        struct Module
        {
            int id = 0;
            std::string path;
            std::string name;
            uint32_t base = 0;
            uint32_t size = 0;
            uint32_t entry = 0;
            uint32_t gp = 0;
            bool resident = false;
        };

        struct GuestCallback
        {
            uint32_t function = 0;
            uint32_t gp = 0;
        };

        struct ScheduledGuestCallback
        {
            uint32_t function = 0u;
            uint32_t gp = 0u;
            uint32_t argument = 0u;
            uint32_t argument2 = 0u;
        };

        // EE -> IOP SIF command delivery. Packets land in a small IOP-side ring
        // (the real sifcmd keeps its own receive buffer) and the registered
        // handler runs as an interrupt-context callback: handler(packet, data).
        static constexpr uint32_t kSifCmdSlotSize = 128u;
        static constexpr uint32_t kSifCmdSlotCount = 32u;
        static constexpr uint64_t kSifCmdDeliveryCycles = 2000u;
        uint32_t sifCmdRing = 0u;
        uint32_t sifCmdRingIndex = 0u;

        bool deliverSifCommand(uint32_t commandId, const void *packet, size_t packetSize)
        {
            if (!packet || packetSize < 16u || packetSize > kSifCmdSlotSize)
                return false;
            IopRpcBridge::CmdHandler handler{};
            if (!rpc.findCmdHandler(commandId, handler))
                return false;
            if (sifCmdRing == 0u)
            {
                sifCmdRing = allocate(kSifCmdSlotSize * kSifCmdSlotCount, 64u);
                if (sifCmdRing == 0u)
                    return false;
            }
            const uint32_t slot = sifCmdRing + (sifCmdRingIndex++ % kSifCmdSlotCount) * kSifCmdSlotSize;
            if (!writeRam(slot, packet, packetSize))
                return false;
            pendingGuestCallbacks.emplace(
                totalCycles + kSifCmdDeliveryCycles,
                ScheduledGuestCallback{handler.function, handler.gp, slot, handler.data});
            return true;
        }

        explicit Impl(IopHost &hostRef)
            : host(hostRef),
              sysmem(host, memory),
              kernel(memory),
              cdvd(host, memory, kernel),
              vblank(kernel),
              rpc(host, memory, kernel),
              sysclib(memory),
              stdio(host, memory),
              heaplib(memory),
              intrman(memory),
              timrman(),
              ioman(memory),
              cpuCore(memory),
              imports(memory),
              loadcore(memory, imports)
        {
            memory.sio2().setPadReader([this](int port, uint8_t *state)
                                       { return host.readPad(port, state); });
            memory.sio2().setCardPath([this](int port) -> std::string
                                      {
                                          const std::string root = host.hostPath(ps2x::iop::HostPathKind::MemoryCardRoot);
                                          if (root.empty())
                                              return {};
                                          // Only slot 1 holds a card, like a console with a single memory card: an
                                          // 8 MB card image in the PCSX2 raw format (528-byte pages), formatted by the
                                          // game's MC2_D on first use. PS2X_MEMCARD=0 leaves the slot empty.
                                          const char *memcard = std::getenv("PS2X_MEMCARD");
                                          if (port != 0 || (memcard && memcard[0] == '0'))
                                              return {};
                                          return root + "/Mcd001.ps2";
                                      });
            reset();
        }

        void reset()
        {
            memory.reset();
            kernel.reset();
            modules.clear();
            imports.reset();
            importCache.clear();
            rpc.reset();
            cdvd.reset();
            intrman.reset();
            timrman.reset();
            ioman.reset();
            pendingDmaInterrupts.clear();
            pendingGuestCallbacks.clear();
            nextModuleId = 1;
            moduleCursor = kModuleLoadBase;
            totalCycles = 0;
            totalInstructions = 0;
            eeCycleCarry = 0;
            activeCpu = nullptr;
            lastError.clear();
            servicingDmaInterrupts = false;
            servicingGuestCallbacks = false;
            callDepth = 0u;
            secrMcCommandHandler = {};
            secrMcDevIdHandler = {};
            checkKelfPathCallback = {};
        }

        uint8_t read8(uint32_t address) const
        {
            return memory.read8(address);
        }

        uint16_t read16(uint32_t address) const
        {
            return memory.read16(address);
        }

        uint32_t read32(uint32_t address) const
        {
            return memory.read32(address);
        }

        void write8(uint32_t address, uint8_t value)
        {
            memory.write8(address, value);
            schedulePendingDma();
        }

        void write16(uint32_t address, uint16_t value)
        {
            memory.write16(address, value);
            schedulePendingDma();
        }

        void write32(uint32_t address, uint32_t value)
        {
            memory.write32(address, value);
            schedulePendingDma();
        }

        void schedulePendingDma()
        {
            if (const auto dma = memory.takeDmaStart())
            {
                pendingDmaInterrupts[dma->irq] = totalCycles + dma->delayCycles;
                if ([] { static const bool enabled = std::getenv("PS2X_CD_TRACE") != nullptr; return enabled; }())
                {
                    char buf[128];
                    std::snprintf(buf, sizeof(buf), "[iop-dma] start irq=0x%x delay=%llu cyc=%llu", dma->irq,
                                  static_cast<unsigned long long>(dma->delayCycles),
                                  static_cast<unsigned long long>(totalCycles));
                    log(LogLevel::Info, buf);
                }
            }
        }

        bool readRam(uint32_t address, void *destination, size_t size) const
        {
            return memory.readRam(address, destination, size);
        }

        bool writeRam(uint32_t address, const void *source, size_t size)
        {
            return memory.writeRam(address, source, size);
        }

        bool zeroRam(uint32_t address, size_t size)
        {
            return memory.zeroRam(address, size);
        }

        bool isHardwareAddress(uint32_t phys) const
        {
            return memory.isHardwareAddress(phys);
        }

        uint32_t allocate(uint32_t size, uint32_t alignment = 16u, std::optional<uint32_t> fixed = std::nullopt)
        {
            return memory.allocate(size, alignment, fixed);
        }

        bool freeAllocation(uint32_t address)
        {
            return memory.freeAllocation(address);
        }

        void log(LogLevel level, std::string_view text)
        {
            host.log(level, text);
        }

        bool checkInterrupt(CpuState &cpu)
        {
            const uint32_t status = cpu.cop0[12];
            if ((status & 1u) == 0u)
                return false;
            if ((status & 0x2u) != 0u)
                return false;
            const bool pending = memory.interruptControl() != 0u && (memory.interruptStatus() & memory.interruptMask()) != 0u;
            if (!pending)
                return false;
            cpu.cop0[13] |= 0x400u;
            cpuCore.raiseException(cpu, 0u, cpu.pc, false);
            return true;
        }

        enum class ImportDisposition
        {
            Handled,
            JumpToGuest,
            Missing,
        };

        void traceImport(const IopImportCall &call, const CpuState &cpu)
        {
            // PS2X_IOP_TRACE=<base_hex>:<size_hex> loga imports chamados de dentro desse range (por $ra).
            static uint32_t s_base = 0u, s_size = 0u;
            static bool s_init = false;
            static unsigned s_count = 0u;
            if (!s_init)
            {
                s_init = true;
                if (const char *env = std::getenv("PS2X_IOP_TRACE"))
                    std::sscanf(env, "%x:%x", &s_base, &s_size);
            }
            const uint32_t ra = cpu.gpr[31];
            if (s_size == 0u || ra < s_base || ra >= s_base + s_size || s_count++ > 200000u)
                return;
            char buf[200];
            std::snprintf(buf, sizeof(buf), "[iop-trace] cyc=%llu thr=%d %s:%u ra=0x%x a0=0x%x a1=0x%x a2=0x%x a3=0x%x",
                          static_cast<unsigned long long>(totalCycles), -1,
                          std::string(call.library).c_str(), call.ordinal, ra - s_base, cpu.gpr[4], cpu.gpr[5],
                          cpu.gpr[6], cpu.gpr[7]);
            log(LogLevel::Info, buf);
        }

        ImportDisposition dispatchImport(const IopImportCall &call, CpuState &cpu)
        {
            traceImport(call, cpu);
            const uint32_t a0 = cpu.gpr[4];
            auto setV0 = [&](uint32_t value)
            {
                cpu.gpr[2] = value;
            };

            if (iequals(call.library, "sysmem") && sysmem.dispatchImport(call.ordinal, cpu))
                return ImportDisposition::Handled;

            if (iequals(call.library, "cdvdman") && cdvd.dispatchImport(call.ordinal, cpu))
            {
                if (const auto callback = cdvd.takeCompletionCallback())
                {
                    static const uint64_t delay = std::getenv("PS2X_CDVD_CALLBACK_CYCLES") ? std::strtoull(std::getenv("PS2X_CDVD_CALLBACK_CYCLES"), nullptr, 0) : kCdvdCompletionCycles;
                    pendingGuestCallbacks.emplace(
                        totalCycles + delay,
                        ScheduledGuestCallback{
                            callback->address,
                            callback->gp,
                            callback->reason,
                        });
                }
                return ImportDisposition::Handled;
            }

            if (iequals(call.library, "loadcore") && loadcore.dispatchImport(call.ordinal, cpu))
                return ImportDisposition::Handled;

            if (iequals(call.library, "thbase") || iequals(call.library, "threadman"))
            {
                return kernel.dispatchThreadImport(call.ordinal, cpu, totalCycles)
                           ? ImportDisposition::Handled
                           : ImportDisposition::Missing;
            }
            if (iequals(call.library, "thsemap"))
            {
                return kernel.dispatchSemaphoreImport(call.ordinal, cpu)
                           ? ImportDisposition::Handled
                           : ImportDisposition::Missing;
            }
            if (iequals(call.library, "thevent"))
            {
                return kernel.dispatchEventImport(call.ordinal, cpu)
                           ? ImportDisposition::Handled
                           : ImportDisposition::Missing;
            }
            if (iequals(call.library, "sifcmd"))
            {
                return rpc.dispatchSifCmdImport(call.ordinal, cpu)
                           ? ImportDisposition::Handled
                           : ImportDisposition::Missing;
            }
            if (iequals(call.library, "intrman") && intrman.dispatchImport(call.ordinal, cpu, *this))
                return ImportDisposition::Handled;
            if (iequals(call.library, "secrman"))
            {
                switch (call.ordinal)
                {
                case 4: // SecrSetMcCommandHandler
                    secrMcCommandHandler = {a0, cpu.gpr[28]};
                    setV0(0);
                    return ImportDisposition::Handled;
                case 5: // SecrSetMcDevIDHandler
                    secrMcDevIdHandler = {a0, cpu.gpr[28]};
                    setV0(0);
                    return ImportDisposition::Handled;
                case 6: // SecrAuthCard(port, slot, cnum)
                {
                    // SECRMAN lives in the BIOS, which is not available, so it is modelled at its
                    // contract: the MechaCon/card challenge exchange succeeds exactly when a
                    // genuine PS2 memory card sits in the slot. The card model is always genuine.
                    const bool present = memory.sio2().cardPresent(static_cast<int>(a0 & 1u));
                    if ([] { static const bool enabled = std::getenv("PS2X_SIO2_TRACE") != nullptr; return enabled; }())
                    {
                        char buf[96];
                        std::snprintf(buf, sizeof(buf), "[secrman] SecrAuthCard port=%u slot=%u cnum=%u -> %d",
                                      a0, cpu.gpr[5], cpu.gpr[6], present ? 1 : 0);
                        log(LogLevel::Info, buf);
                    }
                    setV0(present ? 1u : 0u);
                    return ImportDisposition::Handled;
                }
                case 7: // SecrResetAuthCard(port, slot, cnum)
                    setV0(0);
                    return ImportDisposition::Handled;
                default:
                    break;
                }
            }
            if (iequals(call.library, "modload") && call.ordinal == 13u)
            {
                checkKelfPathCallback = {a0, cpu.gpr[28]};
                setV0(0);
                return ImportDisposition::Handled;
            }
            if (iequals(call.library, "ioman") && ioman.dispatchImport(call.ordinal, cpu, *this))
                return ImportDisposition::Handled;
            if (iequals(call.library, "sifman"))
            {
                const bool handled = rpc.dispatchSifManImport(call.ordinal, cpu);
                if (const auto dmaIntr = rpc.takeDmaIntrCallback())
                {
                    if ([] { static const bool enabled = std::getenv("PS2X_CD_TRACE") != nullptr; return enabled; }())
                    {
                        char buf[128];
                        std::snprintf(buf, sizeof(buf), "[sifman] SetDmaIntr id=%u handler=0x%x arg=0x%x", cpu.gpr[2],
                                      dmaIntr->function, dmaIntr->argument);
                        log(LogLevel::Info, buf);
                    }
                    // Only a successfully queued transfer (non-zero id) raises the DMA-end interrupt.
                    if (cpu.gpr[2] != 0u && dmaIntr->function != 0u)
                    {
                        pendingGuestCallbacks.emplace(
                            totalCycles + kSifCmdDeliveryCycles,
                            ScheduledGuestCallback{dmaIntr->function, dmaIntr->gp, dmaIntr->argument, 0u});
                    }
                }
                return handled ? ImportDisposition::Handled : ImportDisposition::Missing;
            }
            if (iequals(call.library, "vblank") && vblank.dispatchImport(call.ordinal, cpu, totalCycles))
                return ImportDisposition::Handled;
            if (iequals(call.library, "timrman") && timrman.dispatchImport(call.ordinal, cpu, totalCycles))
                return ImportDisposition::Handled;
            if (iequals(call.library, "dmacman"))
            {
                // Only the SIO2 channels (11 = SIO2in, 12 = SIO2out) are routed to a device model.
                const int channel = static_cast<int>(cpu.gpr[4]);
                switch (call.ordinal)
                {
                case 28: // dmac_request(ch, addr, words_per_block, blocks, dir)
                    memory.sio2().setDma(channel, cpu.gpr[5], cpu.gpr[6], cpu.gpr[7]);
                    setV0(1);
                    break;
                case 32: // dmac_transfer(ch)
                    memory.sio2().kickDma(channel);
                    setV0(0);
                    break;
                default:
                    setV0(0);
                    break;
                }
                return ImportDisposition::Handled;
            }
            if (iequals(call.library, "stdio") && stdio.dispatchImport(call.ordinal, cpu))
                return ImportDisposition::Handled;
            if (iequals(call.library, "sysclib"))
            {
                return sysclib.dispatchImport(call.ordinal, cpu)
                           ? ImportDisposition::Handled
                           : ImportDisposition::Missing;
            }
            if (iequals(call.library, "heaplib") && heaplib.dispatchImport(call.ordinal, cpu))
                return ImportDisposition::Handled;

            const uint32_t target = imports.resolve(call.library, call.ordinal, call.version);
            if (target != 0u)
            {
                cpu.pc = target;
                cpu.branchPending = false;
                return ImportDisposition::JumpToGuest;
            }

            std::ostringstream out;
            out << "[IOP] unhandled import " << call.library << ':' << call.ordinal
                << " version=0x" << std::hex << call.version << " pc=0x" << cpu.pc;
            log(LogLevel::Warning, out.str());
            setV0(0);
            return ImportDisposition::Missing;
        }

        bool step(CpuState &cpu)
        {
            if (cpu.stopped)
                return false;
            if (cpu.pc == kThreadReturnSentinel || cpu.pc == kCallReturnSentinel)
            {
                cpu.stopped = true;
                return false;
            }
            if (physicalAddress(cpu.pc) >= kRamSize)
            {
                std::ostringstream out;
                out << "[IOP] execution outside RAM pc=0x" << std::hex << cpu.pc;
                log(LogLevel::Error, out.str());
                cpu.stopped = true;
                return false;
            }
            if (checkInterrupt(cpu))
                return true;

            if (cpu.pc == 0x55a9cu &&
                [] { static const bool enabled = std::getenv("SHO_DIAG_RWA") != nullptr; return enabled; }())
            {
                static uint32_t dispatchCount = 0;
                if (dispatchCount < 32u || (dispatchCount % 1000u) == 0u)
                {
                    char buf[256];
                    std::snprintf(buf, sizeof(buf),
                                  "[sho:rwa-dispatch] count=%u cyc=%llu v0=0x%x v1=0x%x a0=0x%x a1=0x%x a2=0x%x a3=0x%x t0=0x%x t1=0x%x s0=0x%x s1=0x%x s2=0x%x s3=0x%x gp=0x%x sp=0x%x ra=0x%x",
                                  dispatchCount, static_cast<unsigned long long>(totalCycles),
                                  cpu.gpr[2], cpu.gpr[3], cpu.gpr[4], cpu.gpr[5], cpu.gpr[6], cpu.gpr[7],
                                  cpu.gpr[8], cpu.gpr[9], cpu.gpr[16], cpu.gpr[17], cpu.gpr[18], cpu.gpr[19],
                                  cpu.gpr[28], cpu.gpr[29], cpu.gpr[31]);
                    log(LogLevel::Info, buf);
                }
                ++dispatchCount;
            }

            if (cpu.pc == 0x57050u &&
                [] { static const bool enabled = std::getenv("PS2X_IOP_TRACE") != nullptr || std::getenv("SHO_DIAG_RWA") != nullptr; return enabled; }())
            {
                char buf[160];
                std::snprintf(buf, sizeof(buf), "[iop-rwa-callback] pc=0x%x index=%u argument=0x%x gp=0x%x ra=0x%x",
                              cpu.pc, cpu.gpr[4], cpu.gpr[5], cpu.gpr[28], cpu.gpr[31]);
                log(LogLevel::Info, buf);
            }
            if (cpu.pc == 0x5705cu &&
                [] { static const bool enabled = std::getenv("PS2X_IOP_TRACE") != nullptr || std::getenv("SHO_DIAG_RWA") != nullptr; return enabled; }())
            {
                const uint32_t stateAddress = cpu.gpr[1] + 0x6ef0u;
                char buf[160];
                std::snprintf(buf, sizeof(buf), "[iop-rwa-state] pc=0x%x base=0x%x stateAddr=0x%x state=0x%x ra=0x%x",
                              cpu.pc, cpu.gpr[1], stateAddress, memory.read32(stateAddress), cpu.gpr[31]);
                log(LogLevel::Info, buf);
            }
            if (cpu.pc == 0x57064u &&
                [] { static const bool enabled = std::getenv("PS2X_IOP_TRACE") != nullptr || std::getenv("SHO_DIAG_RWA") != nullptr; return enabled; }())
            {
                char buf[128];
                std::snprintf(buf, sizeof(buf), "[iop-rwa-branch] pc=0x%x loadedState=0x%x ra=0x%x",
                              cpu.pc, cpu.gpr[3], cpu.gpr[31]);
                log(LogLevel::Info, buf);
            }

            if (const IopImportCall *import = importAt(cpu.pc))
            {
                const ImportDisposition disposition = dispatchImport(*import, cpu);
                ++totalInstructions;
                ++totalCycles;
                if (disposition == ImportDisposition::JumpToGuest)
                    return true;
                cpu.pc = cpu.gpr[31];
                cpu.branchPending = false;
                return !cpu.stopped;
            }

            const bool running = cpuCore.executeInstruction(cpu);
            schedulePendingDma();
            ++totalInstructions;
            ++totalCycles;
            return running;
        }

        // ---- Statically recompiled IRX code -------------------------------------------------------------
        // A module whose (relocated) text matches a generated image runs through code that calls
        // stepRecompiled() with each instruction word as a literal: fetch, decode and import lookup are
        // resolved when the runner is built. Everything else a step does (run-loop conditions, interrupt
        // check, DMA and callback service, counters) stays exactly as in step()/runCpu().
        // A word that no longer matches memory sends that instruction back to the interpreter.
        // PS2X_IOP_RECOMPILED=0 disables it; PS2X_IOP_RECOMP_CAPTURE=<dir> saves module text for the
        // generator (ps2recomp/diagnostics/iop_recompile.py).
        // One generated function per basic block; `blocks` has an entry per instruction word of the module
        // (null where no block starts). Returns whether it made progress.
        using RecompiledBlock = bool (*)(Impl &impl, CpuState &cpu, uint64_t start, uint32_t budget);
        static constexpr uint32_t kRecompiledChunkShift = 13u; // lookup granularity: 8 KiB of address space
        struct RecompiledSlot
        {
            const RecompiledBlock *blocks[2] = {nullptr, nullptr};
            uint32_t ownerBase[2] = {0u, 0u};
            uint32_t ownerSize[2] = {0u, 0u};
        };
        std::array<RecompiledSlot, (kRamSize >> kRecompiledChunkShift)> recompiledSlots{};
        bool recompiledAny = false;

        // 0: nothing done, leave the recompiled code; 1: instruction executed; 2: interrupt taken, leave.
        inline __attribute__((always_inline)) int stepRecompiled(CpuState &cpu, const uint32_t pc, const uint32_t word,
                                                                 const uint64_t start, const uint32_t budget)
        {
            if (cpu.stopped || cpu.yielded || totalInstructions - start >= budget)
                return 0;
            if (memory.read32(pc) != word)
                return 0;
            if (checkInterrupt(cpu))
                return 2;
            (void)cpuCore.executeDecoded(cpu, word);
            schedulePendingDma();
            ++totalInstructions;
            ++totalCycles;
            if (!servicingDmaInterrupts && !pendingDmaInterrupts.empty())
                servicePendingDmaInterrupts();
            if (!servicingGuestCallbacks && !pendingGuestCallbacks.empty())
                servicePendingGuestCallbacks();
            return 1;
        }

        // ---- Helpers of the native recompiled code (black_iop_recompiled.inc) --------------------------------
        // RAM reads go straight to the array (the generated code checks alignment first); everything else goes
        // through IopMemory as the interpreter's accesses do.
        inline __attribute__((always_inline)) uint32_t ld32(uint32_t address) const
        {
            const uint32_t phys = address & 0x1FFFFFFFu;
            if (phys < kRamSize)
            {
                uint32_t value;
                std::memcpy(&value, memory.ram().data() + phys, sizeof(value));
                return value;
            }
            return memory.read32(address);
        }
        inline __attribute__((always_inline)) uint16_t ld16(uint32_t address) const
        {
            const uint32_t phys = address & 0x1FFFFFFFu;
            if (phys < kRamSize)
            {
                uint16_t value;
                std::memcpy(&value, memory.ram().data() + phys, sizeof(value));
                return value;
            }
            return memory.read16(address);
        }
        inline __attribute__((always_inline)) uint8_t ld8(uint32_t address) const
        {
            const uint32_t phys = address & 0x1FFFFFFFu;
            return phys < kRamSize ? memory.ram()[phys] : memory.read8(address);
        }
        // Import stubs, decoded once per address (decoding walks back through the module for its import table and ran
        // on every kernel call). Cleared whenever modules are loaded or unloaded.
        std::unordered_map<uint32_t, IopImportCall> importCache;
        uint64_t nativeImportCalls = 0;
        const IopImportCall *importAt(uint32_t pc)
        {
            if (memory.read32(pc) != 0x03E00008u)
                return nullptr;
            const auto found = importCache.find(pc);
            if (found != importCache.end())
                return &found->second;
            if (const auto decoded = imports.decode(pc))
                return &importCache.emplace(pc, *decoded).first->second;
            return nullptr;
        }
        // A call from recompiled code into an import stub: what step() does there, without going back to the loop.
        bool callImportStub(CpuState &cpu, uint32_t pc)
        {
            cpu.pc = pc;
            if (cpu.stopped || cpu.yielded || checkInterrupt(cpu))
                return true;
            const IopImportCall *call = importAt(pc);
            if (!call)
                return true; // the interpreter takes it from here
            ++nativeImportCalls;
            const ImportDisposition disposition = dispatchImport(*call, cpu);
            ++totalInstructions;
            ++totalCycles;
            if (disposition == ImportDisposition::JumpToGuest)
                return true;
            cpu.pc = cpu.gpr[31];
            cpu.branchPending = false;
            return true;
        }
        inline void st32(uint32_t address, uint32_t value) { memory.write32(address, value); schedulePendingDma(); }
        inline void st16(uint32_t address, uint16_t value) { memory.write16(address, value); schedulePendingDma(); }
        inline void st8(uint32_t address, uint8_t value) { memory.write8(address, value); schedulePendingDma(); }
        // What the interpreter does after each instruction, once per block.
        inline void recompiledRetire(uint32_t instructions)
        {
            totalInstructions += instructions;
            totalCycles += instructions;
            schedulePendingDma();
            if (!servicingDmaInterrupts && !pendingDmaInterrupts.empty())
                servicePendingDmaInterrupts();
            if (!servicingGuestCallbacks && !pendingGuestCallbacks.empty())
                servicePendingGuestCallbacks();
        }

#define IOP_STEP(PC, WORD, NEXT)                                              \
    {                                                                         \
        const int stepped = impl.stepRecompiled(cpu, PC, WORD, start, budget); \
        if (stepped != 1)                                                     \
            return progress || stepped == 2;                                  \
        progress = true;                                                      \
        if (cpu.pc != NEXT)                                                   \
            return true;                                                      \
    }
#if __has_include("black_iop_recompiled.inc")
#include "black_iop_recompiled.inc"
#define PS2X_IOP_RECOMPILED_AVAILABLE 1
#endif
#undef IOP_STEP

        static uint64_t recompiledTextHash(const uint8_t *data, size_t size)
        {
            uint64_t hash = 14695981039346656037ull;
            for (size_t index = 0; index < size; ++index)
                hash = (hash ^ data[index]) * 1099511628211ull;
            return hash;
        }

        void registerRecompiledModule(const Module &module, uint32_t textSize)
        {
            importCache.clear();
            static const bool disabled = [] { const char *value = std::getenv("PS2X_IOP_RECOMPILED"); return value && value[0] == '0'; }();
            const char *captureDir = std::getenv("PS2X_IOP_RECOMP_CAPTURE");
            if (textSize == 0u || module.base >= kRamSize || textSize > kRamSize - module.base)
                return;
            std::vector<uint8_t> text(textSize);
            if (!memory.readRam(module.base, text.data(), text.size()))
                return;
            const uint64_t hash = recompiledTextHash(text.data(), text.size());
            if (captureDir && captureDir[0])
            {
                char path[1024];
                std::snprintf(path, sizeof(path), "%s/iop-%08x-%016llx.bin", captureDir, module.base, static_cast<unsigned long long>(hash));
                if (std::FILE *file = std::fopen(path, "wb"))
                {
                    std::fwrite(text.data(), 1, text.size(), file);
                    std::fclose(file);
                }
            }
            // Whatever was registered over this range belongs to a module that is gone.
            const uint32_t firstSlot = module.base >> kRecompiledChunkShift;
            const uint32_t lastSlot = (module.base + textSize - 1u) >> kRecompiledChunkShift;
            for (uint32_t slot = firstSlot; slot <= lastSlot; ++slot)
                for (uint32_t entry = 0; entry < 2u; ++entry)
                {
                    RecompiledSlot &s = recompiledSlots[slot];
                    if (s.blocks[entry] && s.ownerBase[entry] < module.base + textSize && module.base < s.ownerBase[entry] + s.ownerSize[entry])
                        s.blocks[entry] = nullptr;
                }
#if defined(PS2X_IOP_RECOMPILED_AVAILABLE)
            const RecompiledBlock *blocks = disabled ? nullptr : findRecompiledModule(module.base, textSize, hash);
            if (!blocks)
            {
                if (!disabled)
                    log(LogLevel::Info, "[IOP] module " + module.name + " has no recompiled code; interpreting it");
                return;
            }
            for (uint32_t slot = firstSlot; slot <= lastSlot; ++slot)
            {
                RecompiledSlot &s = recompiledSlots[slot];
                const uint32_t entry = s.blocks[0] == nullptr ? 0u : 1u;
                s.blocks[entry] = blocks;
                s.ownerBase[entry] = module.base;
                s.ownerSize[entry] = textSize;
            }
            recompiledAny = true;
#else
            (void)disabled;
            (void)hash;
#endif
        }

        // Busy-waits in game modules that spin on the IOP with nothing to do. The real IOP runs them in its idle time;
        // here every IOP cycle is executed to keep pace with the EE, so a spinning thread takes a whole host core and
        // slows the game (100% of a core on a laptop). Each entry is checked word for word before it is armed; the
        // thread then sleeps 100 us (DelayThread) where it would loop. SHO_IOP_SPIN_YIELD=0 disables it.
        //   RTFSSIOP (Silent Hill Origins' RenderWare file server): its request loop polls the queue; when it is empty
        //   it jumps back at +0x2d24 ("b +0x2f0c" right after releasing the queue's semaphore).
        uint32_t spinYieldPc = 0u, spinYieldResume = 0u;
        uint64_t spinYieldCycles = 3686u; // 100 us of the 36.864 MHz IOP clock
        void armSpinYield(const Module &module)
        {
            static const bool disabled = [] { const char *v = std::getenv("SHO_IOP_SPIN_YIELD"); return v && v[0] == '0'; }();
            if (disabled || module.name.find("RTFSSIOP") == std::string::npos)
                return;
            const uint32_t at = module.base + 0x2d24u;
            if (memory.read32(at) == 0x10000079u && memory.read32(at - 8u) == (0x0c000000u | (((module.base + 0x3c34u) >> 2u) & 0x03FFFFFFu)) /* jal release (relocated) */ && memory.read32(at + 4u) == 0u)
            {
                spinYieldPc = at;
                spinYieldResume = module.base + 0x2f0cu;
                log(LogLevel::Info, "[IOP] RTFSSIOP request loop sleeps when its queue is empty");
            }
        }

        // PS2X_IOP_RECOMP_VERIFY=<n>: every n-th recompiled block runs twice, natively and then (from the same state)
        // through the interpreter for as many instructions, and the registers, counters and all of RAM are compared.
        // Blocks that touched hardware registers or started DMA are not repeated (counted as skipped).
        uint64_t verifyCounter = 0, verifyChecked = 0, verifySkipped = 0, verifyMismatches = 0;
        std::vector<uint8_t> verifyBefore, verifyNative;
        bool verifyBlock(RecompiledBlock block, CpuState &cpu, uint64_t start, uint32_t budget)
        {
            if (!pendingDmaInterrupts.empty() || !pendingGuestCallbacks.empty())
                return block(*this, cpu, start, budget);
            const CpuState before = cpu;
            const uint64_t instructionsBefore = totalInstructions, cyclesBefore = totalCycles, io = memory.nonRamAccesses(), calls = nativeImportCalls;
            uint8_t *const ram = memory.ramData();
            verifyBefore.assign(ram, ram + kRamSize);
            if (!block(*this, cpu, start, budget))
                return false;
            // Kernel calls are host code with effects outside guest RAM (ids, allocations): not repeatable either.
            if (memory.nonRamAccesses() != io || nativeImportCalls != calls || !pendingDmaInterrupts.empty() || !pendingGuestCallbacks.empty())
            {
                ++verifySkipped;
                return true;
            }
            const CpuState native = cpu;
            const uint64_t retired = totalInstructions - instructionsBefore, nativeCycles = totalCycles;
            verifyNative.assign(ram, ram + kRamSize);
            std::memcpy(ram, verifyBefore.data(), kRamSize);
            cpu = before;
            totalInstructions = instructionsBefore;
            totalCycles = cyclesBefore;
            for (uint64_t i = 0; i < retired && !cpu.stopped; ++i)
                if (!step(cpu))
                    break;
            ++verifyChecked;
            std::string diff;
            const auto note = [&](const char *what, uint32_t a, uint32_t b) {
                char part[96];
                std::snprintf(part, sizeof part, " %s native=0x%x interp=0x%x", what, a, b);
                diff += part;
            };
            for (uint32_t i = 1; i < 32u; ++i)
                if (native.gpr[i] != cpu.gpr[i])
                {
                    char reg[8];
                    std::snprintf(reg, sizeof reg, "r%u", i);
                    note(reg, native.gpr[i], cpu.gpr[i]);
                }
            if (native.hi != cpu.hi) note("hi", native.hi, cpu.hi);
            if (native.lo != cpu.lo) note("lo", native.lo, cpu.lo);
            if (native.pc != cpu.pc) note("pc", native.pc, cpu.pc);
            if (native.branchPending != cpu.branchPending) note("branchPending", native.branchPending, cpu.branchPending);
            if (native.pendingLoad != cpu.pendingLoad || (cpu.pendingLoad && (native.pendingLoadReg != cpu.pendingLoadReg || native.pendingLoadValue != cpu.pendingLoadValue)))
                note("pendingLoad", native.pendingLoad ? native.pendingLoadReg << 1 | 1u : 0u, cpu.pendingLoad ? cpu.pendingLoadReg << 1 | 1u : 0u);
            for (const uint32_t c : {8u, 12u, 13u, 14u})
                if (native.cop0[c] != cpu.cop0[c]) note("cop0", c << 24 | (native.cop0[c] & 0xFFFFFFu), cpu.cop0[c]);
            if (nativeCycles != totalCycles) note("cycles", uint32_t(nativeCycles), uint32_t(totalCycles));
            if (std::memcmp(ram, verifyNative.data(), kRamSize) != 0)
                for (uint32_t a = 0; a < kRamSize; ++a)
                    if (ram[a] != verifyNative[a])
                    {
                        note("ram", a, ram[a] | (uint32_t(verifyNative[a]) << 8));
                        break;
                    }
            if (!diff.empty())
            {
                ++verifyMismatches;
                if (verifyMismatches <= 50u)
                {
                    char head[96];
                    std::snprintf(head, sizeof head, "[IOP verify] block 0x%x (%llu instructions):", before.pc, static_cast<unsigned long long>(retired));
                    log(LogLevel::Warning, std::string(head) + diff);
                }
            }
            if ((verifyChecked % 20000u) == 0u)
            {
                char line[160];
                std::snprintf(line, sizeof line, "[IOP verify] %llu blocks checked, %llu mismatches, %llu skipped (hardware access)",
                              static_cast<unsigned long long>(verifyChecked), static_cast<unsigned long long>(verifyMismatches), static_cast<unsigned long long>(verifySkipped));
                log(LogLevel::Info, line);
            }
            return true; // the state is the interpreter's (the reference)
        }

        // PS2X_IOP_RECOMP_STATS=1: how many instructions still go through the interpreter (import stubs, which are
        // host calls, apart), and the addresses that do it most; logged every 2^24 instructions.
        const bool statsEnabled = [] { const char *v = std::getenv("PS2X_IOP_RECOMP_STATS"); return v && v[0] == '1'; }();
        uint64_t statsInterpreted = 0, statsImports = 0, statsNextReport = 1ull << 22, statsLastTotal = 0;
        std::chrono::steady_clock::time_point statsLastTime = std::chrono::steady_clock::now();
        std::unordered_map<uint32_t, uint64_t> statsByPc;
        void noteInterpreted(uint32_t pc)
        {
            if (pc < kRamSize && memory.read32(pc) == 0x03E00008u && importAt(pc))
                ++statsImports;
            else
            {
                ++statsInterpreted;
                ++statsByPc[pc];
            }
            if (totalInstructions < statsNextReport)
                return;
            statsNextReport = totalInstructions + (1ull << 24);
            std::vector<std::pair<uint64_t, uint32_t>> top;
            for (const auto &[at, n] : statsByPc)
                top.emplace_back(n, at);
            std::sort(top.rbegin(), top.rend());
            const uint64_t window = totalInstructions - statsLastTotal;
            const auto now = std::chrono::steady_clock::now();
            const double seconds = std::chrono::duration<double>(now - statsLastTime).count();
            statsLastTime = now;
            char line[512];
            int len = std::snprintf(line, sizeof line, "[IOP stats] %llu instructions in %.2f s (%.1f M/s): %.2f%% interpreted, %llu import calls via loop; top:",
                                    static_cast<unsigned long long>(window), seconds, seconds > 0.0 ? double(window) / seconds / 1e6 : 0.0,
                                    window ? 100.0 * double(statsInterpreted) / double(window) : 0.0, static_cast<unsigned long long>(statsImports));
            for (size_t i = 0; i < top.size() && i < 8u && len < 440; ++i)
                len += std::snprintf(line + len, sizeof line - size_t(len), " %x(%llu)", top[i].second, static_cast<unsigned long long>(top[i].first));
            log(LogLevel::Info, line);
            statsByPc.clear();
            statsInterpreted = statsImports = 0;
            statsLastTotal = totalInstructions;
        }

        uint32_t runCpu(CpuState &cpu, uint32_t instructionBudget)
        {
            CpuState *previous = activeCpu;
            activeCpu = &cpu;
            const uint64_t start = totalInstructions;
            while (!cpu.stopped && !cpu.yielded && totalInstructions - start < instructionBudget)
            {
                // A known busy-wait (see armSpinYield): the thread sleeps instead of spinning.
                if (cpu.pc == spinYieldPc && spinYieldPc != 0u && !cpu.branchPending)
                {
                    if (cpu.pendingLoad)
                    {
                        if (cpu.pendingLoadReg != 0u)
                            cpu.gpr[cpu.pendingLoadReg] = cpu.pendingLoadValue;
                        cpu.pendingLoad = false;
                    }
                    cpu.pc = spinYieldResume;
                    kernel.delayCurrentUntil(totalCycles + spinYieldCycles, cpu);
                    continue;
                }
                if (recompiledAny && cpu.pc < kRamSize)
                {
                    const RecompiledSlot &slot = recompiledSlots[cpu.pc >> kRecompiledChunkShift];
                    RecompiledBlock block = nullptr;
                    for (uint32_t entry = 0; entry < 2u && !block; ++entry)
                        if (slot.blocks[entry] && cpu.pc - slot.ownerBase[entry] < slot.ownerSize[entry] && (cpu.pc & 3u) == 0u)
                            block = slot.blocks[entry][(cpu.pc - slot.ownerBase[entry]) >> 2u];
                    if (block)
                    {
                        static const uint32_t verifyEvery = [] { const char *v = std::getenv("PS2X_IOP_RECOMP_VERIFY"); return v ? uint32_t(std::max(1, std::atoi(v))) : 0u; }();
                        if (verifyEvery != 0u && (++verifyCounter % verifyEvery) == 0u)
                        {
                            if (verifyBlock(block, cpu, start, instructionBudget))
                                continue;
                        }
                        else if (block(*this, cpu, start, instructionBudget))
                            continue;
                        // Budget spent at a block boundary: end the slice there, the next one resumes natively.
                        if (totalInstructions - start >= instructionBudget)
                            break;
                    }
                }
                if (statsEnabled)
                    noteInterpreted(cpu.pc);
                if (!step(cpu))
                    break;
                if (!servicingDmaInterrupts && !pendingDmaInterrupts.empty())
                    servicePendingDmaInterrupts();
                if (!servicingGuestCallbacks && !pendingGuestCallbacks.empty())
                    servicePendingGuestCallbacks();
            }
            activeCpu = previous;
            return static_cast<uint32_t>(totalInstructions - start);
        }

        uint32_t callFunction(uint32_t address,
                              uint32_t a0,
                              uint32_t a1,
                              uint32_t a2,
                              uint32_t a3,
                              uint32_t gp,
                              uint32_t budget = kMaxCallInstructions)
        {
            struct CallDepthGuard
            {
                uint32_t &depth;
                ~CallDepthGuard() { --depth; }
            };

            const uint32_t depth = callDepth++;
            const CallDepthGuard depthGuard{callDepth};
            CpuState cpu{};
            cpu.pc = address;
            cpu.gpr[4] = a0;
            cpu.gpr[5] = a1;
            cpu.gpr[6] = a2;
            cpu.gpr[7] = a3;
            cpu.gpr[28] = gp;
            if (depth < kCallStackCapacity)
            {
                const uint32_t stackTop = kCallStackLimit - depth * kCallStackSize;
                cpu.gpr[29] = stackTop - 32u;
            }
            else if (activeCpu && activeCpu->gpr[29] > kRpcThreadStackTop + kStackGuardBytes)
            {
                // Extremely deep re-entrancy borrows unused space below the
                // suspended caller's live frame. Stack growth remains away
                // from the caller, so its saved registers stay intact.
                cpu.gpr[29] = (activeCpu->gpr[29] - kStackGuardBytes) & ~15u;
            }
            else
            {
                cpu.gpr[29] = kCallStackBase - 32u;
            }
            cpu.gpr[31] = kCallReturnSentinel;
            runCpu(cpu, budget);
            return cpu.gpr[2];
        }

        uint32_t executeGuestFunction(uint32_t address,
                                      uint32_t a0,
                                      uint32_t a1,
                                      uint32_t a2,
                                      uint32_t a3,
                                      uint32_t gp) override
        {
            return callFunction(address, a0, a1, a2, a3, gp);
        }

        uint32_t executeGuestFunctionInThread(uint32_t address,
                                              uint32_t a0,
                                              uint32_t a1,
                                              uint32_t a2,
                                              uint32_t gp,
                                              uint32_t priority) override
        {
            // Nested use (from inside a running IOP thread or callback) cannot drive the
            // scheduler; keep the direct call there.
            if (inRunCycles || kernel.hasCurrentThread() || activeCpu != nullptr)
            {
                if ([] { static const bool enabled = std::getenv("PS2X_IOP_WAIT_TRACE") != nullptr; return enabled; }())
                    std::fprintf(stderr, "[iop-kern] threaded call 0x%x nested run=%d thr=%d cpu=%d\n", address,
                                 inRunCycles ? 1 : 0, kernel.hasCurrentThread() ? 1 : 0, activeCpu ? 1 : 0);
                return callFunction(address, a0, a1, a2, 0u, gp);
            }
            const int id = kernel.spawnThread(address, a0, a1, a2, gp, priority, kRpcThreadStackTop);
            if (id < 0)
                return callFunction(address, a0, a1, a2, 0u, gp);

            // The caller (EE, blocked in the RPC) waits while the IOP runs; bound it to
            // ~1 s of IOP time so a handler waiting on something that never comes is reported.
            constexpr uint64_t kSlice = 4096u;
            constexpr uint64_t kLimit = kIopClockHz;
            uint64_t ran = 0;
            uint32_t result = 0;
            for (;;)
            {
                const IopThread *thread = kernel.findThread(id);
                if (thread == nullptr)
                    break;
                if (thread->state == IopThreadState::Dormant || thread->state == IopThreadState::Dead)
                {
                    result = thread->cpu.gpr[2];
                    break;
                }
                if (ran >= kLimit)
                {
                    std::ostringstream out;
                    out << "[IOP] threaded call 0x" << std::hex << address << " still blocked after 1s (pc=0x"
                        << thread->cpu.pc << " state=" << std::dec << static_cast<int>(thread->state) << ")";
                    log(LogLevel::Warning, out.str());
                    result = thread->cpu.gpr[2];
                    break;
                }
                runCycles(kSlice);
                ran += kSlice;
            }
            kernel.destroyThread(id);
            return result;
        }

        uint32_t executeGuestFunctionWithBudget(uint32_t address,
                                                uint32_t a0,
                                                uint32_t a1,
                                                uint32_t a2,
                                                uint32_t a3,
                                                uint32_t gp,
                                                uint32_t instructionBudget) override
        {
            return callFunction(address, a0, a1, a2, a3, gp, instructionBudget);
        }

        // Interrupt handlers and SIF command handlers run in interrupt context: they are held
        // while the guest has interrupts disabled (CpuSuspendIntr critical sections) and they do
        // not nest. They stay pending and are delivered once the guest re-enables interrupts.
        [[nodiscard]] bool interruptsDeliverable() const noexcept
        {
            return interruptHandlerDepth == 0u && memory.interruptControl() != 0u;
        }

        struct InterruptHandlerScope
        {
            uint32_t &depth;
            explicit InterruptHandlerScope(uint32_t &value) noexcept : depth(value) { ++depth; }
            ~InterruptHandlerScope() { --depth; }
        };

        // Not that good to use exception handling for control flow but will do for now
        void servicePendingDmaInterrupts()
        {
            if (servicingDmaInterrupts || pendingDmaInterrupts.empty() || !interruptsDeliverable())
                return;
            InterruptHandlerScope handlerScope(interruptHandlerDepth);

            servicingDmaInterrupts = true;

            std::vector<int> completed;
            for (auto it = pendingDmaInterrupts.begin(); it != pendingDmaInterrupts.end();)
            {
                if (it->second > totalCycles)
                {
                    ++it;
                    continue;
                }
                completed.push_back(it->first);
                it = pendingDmaInterrupts.erase(it);
            }
            try
            {
                for (const int irq : completed)
                {
                    const bool delivered = intrman.dispatchInterrupt(irq, *this);
                    if ([] { static const bool enabled = std::getenv("PS2X_CD_TRACE") != nullptr; return enabled; }())
                    {
                        char buf[96];
                        std::snprintf(buf, sizeof(buf), "[iop-dma] irq=0x%x delivered=%d cyc=%llu", irq,
                                      delivered ? 1 : 0, static_cast<unsigned long long>(totalCycles));
                        log(LogLevel::Info, buf);
                    }
                }
            }
            catch (...)
            {
                servicingDmaInterrupts = false;
                throw;
            }
            servicingDmaInterrupts = false;
        }

        void servicePendingGuestCallbacks()
        {
            if (servicingGuestCallbacks || pendingGuestCallbacks.empty() || !interruptsDeliverable())
                return;
            InterruptHandlerScope handlerScope(interruptHandlerDepth);

            std::vector<ScheduledGuestCallback> callbacks;
            for (auto it = pendingGuestCallbacks.begin(); it != pendingGuestCallbacks.end();)
            {
                if (it->first > totalCycles)
                    break;
                callbacks.push_back(it->second);
                it = pendingGuestCallbacks.erase(it);
            }
            if (callbacks.empty())
                return;

            servicingGuestCallbacks = true;
            try
            {
                for (const ScheduledGuestCallback &callback : callbacks)
                {
                    if (callback.function != 0u)
                    {
                        (void)callFunction(callback.function,
                                           callback.argument,
                                           callback.argument2,
                                           0u,
                                           0u,
                                           callback.gp,
                                           100000u);
                    }
                }
            }
            catch (...)
            {
                servicingGuestCallbacks = false;
                throw;
            }
            servicingGuestCallbacks = false;
        }

        // Steps SPU2 voices to the current IOP time and delivers its address-match IRQ (IOP irq 9).
        void serviceSpu2()
        {
            IopSpu2 &spu = memory.spu2();
            spu.advanceTo(totalCycles);
            memory.syncAdmaMadr();
            if (!interruptsDeliverable())
                return;
            if (spu.takeIrq())
            {
                InterruptHandlerScope handlerScope(interruptHandlerDepth);
                const bool delivered = intrman.dispatchInterrupt(IopSpu2::Irq, *this);
                if ([] { static const bool enabled = std::getenv("PS2X_CD_TRACE") != nullptr; return enabled; }())
                {
                    static unsigned s_logged = 0;
                    if (s_logged++ < 200u)
                    {
                        char buf[96];
                        std::snprintf(buf, sizeof(buf), "[spu2] irq delivered=%d cyc=%llu", delivered ? 1 : 0,
                                      static_cast<unsigned long long>(totalCycles));
                        log(LogLevel::Info, buf);
                    }
                }
            }
        }

        // Delivers the SIO2 transfer-complete interrupt (IOP irq 17).
        void serviceSio2()
        {
            if (!interruptsDeliverable())
                return;
            if (memory.sio2().takeIrq())
            {
                InterruptHandlerScope handlerScope(interruptHandlerDepth);
                (void)intrman.dispatchInterrupt(IopSio2::Irq, *this);
            }
        }

        void runCycles(uint64_t cycles) noexcept
        {
            static uint64_t nextShoThreadSample = 0u;
            // Cached: getenv is slow on Windows and this runs for every scheduling slice.
            static const bool diagRwa = std::getenv("SHO_DIAG_RWA") != nullptr;
            if (diagRwa && totalCycles >= nextShoThreadSample)
            {
                nextShoThreadSample = totalCycles + 10000000u;
                char summary[128];
                std::snprintf(summary, sizeof(summary), "[sho:iop-threads] cyc=%llu count=%zu",
                              static_cast<unsigned long long>(totalCycles), kernel.threadCount());
                log(LogLevel::Info, summary);
                const size_t limit = kernel.threadCount() + 8u;
                for (size_t id = 1u; id <= limit; ++id)
                {
                    const IopThread *thread = kernel.findThread(static_cast<int>(id));
                    if (!thread)
                        continue;
                    char entry[192];
                    std::snprintf(entry, sizeof(entry),
                                  "[sho:iop-thread] id=%d state=%u wait=%d entry=0x%x pc=0x%x ra=0x%x gp=0x%x sp=0x%x",
                                  thread->id, static_cast<unsigned>(thread->state), thread->waitId, thread->entry,
                                  thread->cpu.pc, thread->cpu.gpr[31], thread->cpu.gpr[28], thread->cpu.gpr[29]);
                    log(LogLevel::Info, entry);
                }
            }
            struct RunGuard
            {
                bool &flag;
                bool previous;
                ~RunGuard() { flag = previous; }
            } guard{inRunCycles, inRunCycles};
            inRunCycles = true;
            try
            {
                const uint64_t target = totalCycles + cycles;
                while (totalCycles < target)
                {
                    serviceSpu2();
                    serviceSio2();
                    servicePendingDmaInterrupts();
                    servicePendingGuestCallbacks();
                    if (interruptsDeliverable())
                    {
                        InterruptHandlerScope handlerScope(interruptHandlerDepth);
                        timrman.serviceDue(totalCycles, *this);
                    }
                    IopThread *next = kernel.beginNextReady(totalCycles);
                    if (!next)
                    {
                        uint64_t nextWake = kernel.nextWakeCycle(target);
                        for (const auto &[irq, completionCycle] : pendingDmaInterrupts)
                            nextWake = std::min(nextWake, completionCycle);
                        if (!pendingGuestCallbacks.empty())
                            nextWake = std::min(nextWake, pendingGuestCallbacks.begin()->first);
                        nextWake = timrman.nextEventCycle(nextWake);
                        nextWake = memory.spu2().nextEventCycle(nextWake);
                        totalCycles = std::max(totalCycles + 1u, std::min(target, nextWake));
                        continue;
                    }
                    const uint64_t before = totalCycles;
                    runCpu(next->cpu, static_cast<uint32_t>(std::min<uint64_t>(kDefaultSlice, target - totalCycles)));
                    kernel.endTimeslice(*next, kThreadReturnSentinel);
                    if (totalCycles == before)
                        ++totalCycles;
                }
            }
            catch (...)
            {
                // Runtime scheduling must never throw through EeScheduler::accountCycles().
            }
        }

        ModuleLoadResult loadImage(std::string path, std::span<const uint8_t> image, const void *arguments, uint32_t argumentSize)
        {
            ModuleLoadResult result{true, -1, -1};
            const IopImageLoadResult loaded = IopModuleLoader::load(image, memory, moduleCursor);
            moduleCursor = loaded.nextModuleCursor;
            if (!loaded)
            {
                if (loaded.ownsAllocation && loaded.base != 0u)
                    (void)memory.freeAllocation(loaded.base);
                if (loaded.error == IopImageLoadError::InvalidElf)
                    log(LogLevel::Error, "[IOP] rejected invalid/non-MIPS IRX ELF");
                else if (loaded.error == IopImageLoadError::ArenaExhausted)
                    log(LogLevel::Error, "[IOP] module arena exhausted");
                return result;
            }
            if (!loaded.relocationsComplete)
                log(LogLevel::Warning, "[IOP] one or more IRX relocations were unsupported");

            Module module;
            module.id = nextModuleId++;
            module.path = std::move(path);
            const size_t slash = module.path.find_last_of("/\\:");
            module.name = slash == std::string::npos ? module.path : module.path.substr(slash + 1u);
            module.base = loaded.base;
            module.size = loaded.size;
            module.entry = loaded.entry;
            module.gp = loaded.gp;
            registerRecompiledModule(module, loaded.textSize);
            armSpinYield(module);

            uint32_t args = 0u;
            if (arguments && argumentSize)
            {
                args = allocate(argumentSize + 1u, 16u);
                if (args)
                {
                    writeRam(args, arguments, argumentSize);
                    write8(args + argumentSize, 0u);
                }
            }
            const uint32_t startResult = callFunction(module.entry, argumentSize, args, 0u, 0u, module.gp);
            if (args)
                freeAllocation(args);
            module.resident = startResult == 0u || startResult == 2u;
            // NO_RESIDENT_END (start result & 3 == 1): loadcore releases the image.
            if ((startResult & 3u) == 1u && loaded.ownsAllocation)
                (void)memory.freeAllocation(loaded.base);
            result.moduleId = module.id;
            result.startResult = static_cast<int32_t>(startResult);
            modules[module.id] = std::move(module);

            std::ostringstream out;
            out << "[IOP] loaded IRX id=" << result.moduleId
                << " entry=0x" << std::hex << modules[result.moduleId].entry
                << " base=0x" << modules[result.moduleId].base
                << " start=" << std::dec << result.startResult;
            log(LogLevel::Info, out.str());
            return result;
        }

        ModuleLoadResult loadModule(std::string_view path, const void *arguments, uint32_t argumentSize)
        {
            std::vector<uint8_t> image;
            if (!IopModuleLoader::readWholeHostFile(host, path, image))
            {
                log(LogLevel::Warning, std::string("[IOP] failed to open IRX '") + std::string(path) + "'");
                return {true, -1, -1};
            }
            return loadImage(std::string(path), image, arguments, argumentSize);
        }

        ModuleLoadResult loadModuleBuffer(uint32_t guestAddress, const void *arguments, uint32_t argumentSize)
        {
            std::vector<uint8_t> image;
            if (!IopModuleLoader::readElfFromGuest(host, guestAddress, image))
                return {true, -1, -1};
            std::ostringstream tag;
            tag << "buffer@0x" << std::hex << guestAddress;
            return loadImage(tag.str(), image, arguments, argumentSize);
        }

        bool stopModule(int32_t moduleId, int32_t *result)
        {
            auto it = modules.find(moduleId);
            if (it == modules.end())
                return false;
            // A removable IRX normally exposes a stop entry through module metadata. We do not guess it; terminate owned execution and release the image cleanly.
            kernel.terminateThreadsInRange(it->second.base, it->second.size);
            rpc.removeServersInRange(it->second.base, it->second.size);
            imports.eraseRange(it->second.base, it->second.size);
            importCache.clear();
            modules.erase(it);
            kernel.cleanupDeadThreads();
            if (result)
                *result = 0;
            return true;
        }

        IopHost &host;
        IopMemory memory;
        IopSysmem sysmem;
        IopKernel kernel;
        IopCdvd cdvd;
        IopVblank vblank;
        IopRpcBridge rpc;
        IopSysclib sysclib;
        IopStdio stdio;
        IopHeaplib heaplib;
        IopIntrman intrman;
        IopTimrman timrman;
        IopIoman ioman;
        IopCpuCore cpuCore;
        IopImportRegistry imports;
        IopLoadcore loadcore;
        std::map<int, Module> modules;
        std::map<int, uint64_t> pendingDmaInterrupts;
        std::multimap<uint64_t, ScheduledGuestCallback> pendingGuestCallbacks;
        uint32_t interruptHandlerDepth = 0u;
        uint32_t nextModuleId = 1;
        uint32_t moduleCursor = kModuleLoadBase;
        uint64_t totalCycles = 0;
        uint64_t totalInstructions = 0;
        uint64_t eeCycleCarry = 0;
        bool inRunCycles = false;
        CpuState *activeCpu = nullptr;
        std::string lastError;
        bool servicingDmaInterrupts = false;
        bool servicingGuestCallbacks = false;
        uint32_t callDepth = 0u;
        GuestCallback secrMcCommandHandler;
        GuestCallback secrMcDevIdHandler;
        GuestCallback checkKelfPathCallback;
    };

    IopEmulator::IopEmulator(IopHost &host)
        : m_impl(std::make_unique<Impl>(host))
    {
    }

    IopEmulator::~IopEmulator() = default;

    void IopEmulator::reset()
    {
        m_impl->reset();
    }

    ModuleLoadResult IopEmulator::loadModule(std::string_view path, const void *arguments, uint32_t argumentSize)
    {
        return m_impl->loadModule(path, arguments, argumentSize);
    }

    ModuleLoadResult IopEmulator::loadModuleBuffer(uint32_t guestAddress, const void *arguments, uint32_t argumentSize)
    {
        return m_impl->loadModuleBuffer(guestAddress, arguments, argumentSize);
    }

    bool IopEmulator::stopModule(int32_t moduleId, int32_t *result)
    {
        return m_impl->stopModule(moduleId, result);
    }

    void IopEmulator::runEeCycles(uint64_t eeCycles) noexcept
    {
        // The EE accounts cycles at every recompiled block checkpoint (often 1-3 IOP cycles).
        // Running the IOP scheduler per checkpoint costs far more than the emulated work, so
        // EE time is batched into IOP quanta (~3.5 us of guest time by default). Guest-visible
        // latency stays well below any SIF/RPC or interrupt timing the drivers rely on.
        static const uint64_t kQuantumIopCycles = []
        {
            const char *env = std::getenv("PS2X_IOP_QUANTUM");
            const unsigned long value = env ? std::strtoul(env, nullptr, 10) : 128ul;
            return static_cast<uint64_t>(value ? value : 1ul);
        }();
        const uint64_t total = m_impl->eeCycleCarry + eeCycles;
        if (total < kQuantumIopCycles * 8u)
        {
            m_impl->eeCycleCarry = total;
            return;
        }
        const uint64_t iopCycles = total / 8u;
        m_impl->eeCycleCarry = total % 8u;
        m_impl->runCycles(iopCycles);
    }

    RpcResult IopEmulator::handleRpc(const RpcRequest &request)
    {
        return m_impl->rpc.handleRpc(request, *m_impl);
    }

    bool IopEmulator::deliverSifCommand(uint32_t commandId, const void *packet, size_t packetSize)
    {
        return m_impl->deliverSifCommand(commandId, packet, packetSize);
    }

    bool IopEmulator::hasRpcServer(uint32_t sid) const noexcept
    {
        return m_impl->rpc.hasServer(sid);
    }

    void IopEmulator::onSifTransfer(const SifTransfer &transfer)
    {
        m_impl->rpc.onSifTransfer(transfer);
    }

    uint32_t IopEmulator::allocateMemory(uint32_t size, uint32_t alignment)
    {
        return m_impl->memory.allocate(size, alignment);
    }

    bool IopEmulator::freeMemory(uint32_t address)
    {
        return m_impl->memory.freeAllocation(address);
    }

    bool IopEmulator::readMemory(uint32_t address, void *destination, size_t size) const
    {
        return isMemoryRange(address, size) &&
               m_impl->memory.readRam(address, destination, size);
    }

    bool IopEmulator::writeMemory(uint32_t address, const void *source, size_t size)
    {
        return isMemoryRange(address, size) &&
               m_impl->memory.writeRam(address, source, size);
    }

    bool IopEmulator::zeroMemory(uint32_t address, size_t size)
    {
        return isMemoryRange(address, size) &&
               m_impl->memory.zeroRam(address, size);
    }

    bool IopEmulator::isMemoryRange(uint32_t address, size_t size) const
    {
        const bool physicalSegment = address < IopMemory::RamSize;
        const bool cachedSegment = address >= 0x80000000u && address < 0x80200000u;
        const bool uncachedSegment = address >= 0xA0000000u && address < 0xA0200000u;
        if (!physicalSegment && !cachedSegment && !uncachedSegment)
            return false;
        const uint32_t physical = IopMemory::physicalAddress(address);
        return physical <= IopMemory::RamSize && size <= IopMemory::RamSize - physical;
    }

    uint64_t IopEmulator::cycles() const noexcept
    {
        return m_impl->totalCycles;
    }

    uint64_t IopEmulator::instructions() const noexcept
    {
        return m_impl->totalInstructions;
    }

    uint32_t IopEmulator::loadedModuleCount() const noexcept
    {
        return static_cast<uint32_t>(m_impl->modules.size());
    }

    uint32_t IopEmulator::threadCount() const noexcept
    {
        return static_cast<uint32_t>(m_impl->kernel.threadCount());
    }

    uint32_t IopEmulator::rpcServerCount() const noexcept
    {
        return static_cast<uint32_t>(m_impl->rpc.serverCount());
    }

}
