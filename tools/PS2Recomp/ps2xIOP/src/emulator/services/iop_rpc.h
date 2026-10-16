#pragma once

#include "ps2x/iop/iop_types.h"

#include <cstddef>
#include <cstdint>
#include <optional>
#include <unordered_map>

namespace ps2x::iop
{
    class IopHost;
}

namespace ps2x::iop::detail
{
    struct IopCpuState;
    class IopKernel;
    class IopMemory;

    class IopGuestExecutor
    {
    public:
        virtual ~IopGuestExecutor() = default;

        [[nodiscard]] virtual uint32_t executeGuestFunction(uint32_t address,
                                                            uint32_t a0,
                                                            uint32_t a1,
                                                            uint32_t a2,
                                                            uint32_t a3,
                                                            uint32_t gp) = 0;
        [[nodiscard]] virtual uint32_t executeGuestFunctionWithBudget(uint32_t address,
                                                                      uint32_t a0,
                                                                      uint32_t a1,
                                                                      uint32_t a2,
                                                                      uint32_t a3,
                                                                      uint32_t gp,
                                                                      uint32_t instructionBudget)
        {
            return executeGuestFunction(address, a0, a1, a2, a3, gp);
        }
        // Runs a function as its own IOP thread (so it may block on semaphores, event flags,
        // delays...) while the rest of the IOP keeps running, and returns its $v0. This is how
        // SIF RPC server functions execute on hardware: inside the server thread's RpcLoop.
        [[nodiscard]] virtual uint32_t executeGuestFunctionInThread(uint32_t address,
                                                                    uint32_t a0,
                                                                    uint32_t a1,
                                                                    uint32_t a2,
                                                                    uint32_t gp,
                                                                    uint32_t priority)
        {
            (void)priority;
            return executeGuestFunction(address, a0, a1, a2, 0u, gp);
        }
    };

    class IopRpcBridge
    {
    public:
        IopRpcBridge(IopHost &host, IopMemory &memory, IopKernel &kernel) noexcept;

        void reset();
        [[nodiscard]] bool dispatchSifManImport(uint16_t ordinal, IopCpuState &cpu);
        [[nodiscard]] bool dispatchSifCmdImport(uint16_t ordinal, IopCpuState &cpu);
        [[nodiscard]] RpcResult handleRpc(const RpcRequest &request, IopGuestExecutor &executor);
        void onSifTransfer(const SifTransfer &transfer);
        void removeServersInRange(uint32_t base, uint32_t size);

        [[nodiscard]] bool hasServer(uint32_t sid) const noexcept;

        // IOP-side SIF command handlers registered via sifcmd:10 (sceSifAddCmdHandler).
        struct CmdHandler
        {
            uint32_t function = 0;
            uint32_t data = 0;
            uint32_t gp = 0;
        };
        [[nodiscard]] bool findCmdHandler(uint32_t commandId, CmdHandler &out) const;

        // Handler requested by the last sifman:32 (sceSifSetDmaIntr). The emulator
        // takes it after the import and runs it as an interrupt-context callback.
        struct DmaIntrCallback
        {
            uint32_t function = 0;
            uint32_t argument = 0;
            uint32_t gp = 0;
        };
        [[nodiscard]] std::optional<DmaIntrCallback> takeDmaIntrCallback()
        {
            std::optional<DmaIntrCallback> out = m_pendingDmaIntr;
            m_pendingDmaIntr.reset();
            return out;
        }
        [[nodiscard]] size_t serverCount() const noexcept { return m_servers.size(); }

    private:
        struct RpcServer
        {
            uint32_t sid = 0;
            uint32_t serverData = 0;
            uint32_t function = 0;
            uint32_t gp = 0;
            uint32_t buffer = 0;
            uint32_t callback = 0;
            uint32_t callbackBuffer = 0;
            uint32_t queue = 0;
            uint32_t threadPriority = 0x40; // priority of the thread that registered the server
        };

        IopHost &m_host;
        IopMemory &m_memory;
        IopKernel &m_kernel;
        std::unordered_map<uint32_t, RpcServer> m_servers;
        std::unordered_map<uint32_t, CmdHandler> m_cmdHandlers;
        std::optional<DmaIntrCallback> m_pendingDmaIntr;
        uint32_t m_nextDmaId = 1u;
        bool m_sifInitialized = false;
    };
}
