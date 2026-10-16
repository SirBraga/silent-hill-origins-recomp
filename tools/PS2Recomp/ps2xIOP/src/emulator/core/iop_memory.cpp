#include "iop_memory.h"
#include <cstdio>
#include <cstdlib>

#include <algorithm>
#include <cstring>

namespace ps2x::iop::detail
{
    namespace
    {
        constexpr uint32_t kDmaSpu0Chcr = 0x1F8010C8u;
        constexpr uint32_t kDmaSpu1Chcr = 0x1F801508u;
        constexpr uint32_t kDmaStart = 1u << 24u;
        constexpr int kDmaSpu0Irq = 0x24;
        constexpr int kDmaSpu1Irq = 0x28;

        uint32_t alignUp(uint32_t value, uint32_t alignment)
        {
            return (value + alignment - 1u) & ~(alignment - 1u);
        }
    }

    IopMemory::IopMemory()
        : m_ram(RamSize), m_owned(RamSize), m_scratch(ScratchSize)
    {
        reset();
    }

    void IopMemory::reset()
    {
        std::fill(m_ram.begin(), m_ram.end(), uint8_t{0});
        std::fill(m_owned.begin(), m_owned.end(), uint8_t{0});
        std::fill(m_scratch.begin(), m_scratch.end(), uint8_t{0});
        m_hardware.clear();
        m_allocations.clear();
        m_interruptStatus = 0;
        m_interruptMask = 0;
        m_interruptControl = 1;
        m_dmaStart.reset();
        m_spu2.reset();
        m_sio2.reset();
    }

    uint32_t IopMemory::physicalAddress(uint32_t address) noexcept
    {
        return address & 0x1FFFFFFFu;
    }

    uint8_t IopMemory::read8(uint32_t address) const
    {
        const uint32_t phys = physicalAddress(address);
        if (phys >= RamSize)
            ++m_nonRamAccesses;
        if (phys < RamSize)
            return m_ram[phys];
        if (phys >= ScratchBase && phys < ScratchBase + ScratchSize)
            return m_scratch[phys - ScratchBase];
        if (IopSpu2::isRegister(phys))
            return static_cast<uint8_t>(m_spu2.read16(phys & ~1u) >> ((phys & 1u) * 8u));
        if (IopSio2::isRegister(phys))
            return m_sio2.read8(phys);
        const uint32_t value = readHardware32(phys & ~3u);
        return static_cast<uint8_t>(value >> ((phys & 3u) * 8u));
    }

    uint16_t IopMemory::read16(uint32_t address) const
    {
        const uint32_t phys = physicalAddress(address);
        if (phys >= RamSize)
            ++m_nonRamAccesses;
        if (phys + 1u < RamSize)
        {
            uint16_t value;
            std::memcpy(&value, m_ram.data() + phys, sizeof(value));
            return value;
        }
        if ((phys & 1u) == 0u && IopSpu2::isRegister(phys))
            return m_spu2.read16(phys);
        return static_cast<uint16_t>(read8(address) | (static_cast<uint16_t>(read8(address + 1u)) << 8u));
    }

    uint32_t IopMemory::read32(uint32_t address) const
    {
        const uint32_t phys = physicalAddress(address);
        if (phys >= RamSize)
            ++m_nonRamAccesses;
        if ((phys & 3u) == 0u && phys + 3u < RamSize)
        {
            uint32_t value;
            std::memcpy(&value, m_ram.data() + phys, sizeof(value));
            return value;
        }
        if ((phys & 3u) == 0u && phys >= ScratchBase && phys + 3u < ScratchBase + ScratchSize)
        {
            uint32_t value;
            std::memcpy(&value, m_scratch.data() + (phys - ScratchBase), sizeof(value));
            return value;
        }
        if ((phys & 3u) == 0u && IopSpu2::isRegister(phys))
            return static_cast<uint32_t>(m_spu2.read16(phys)) | (static_cast<uint32_t>(m_spu2.read16(phys + 2u)) << 16u);
        if ((phys & 3u) == 0u && IopSio2::isRegister(phys))
            return m_sio2.read32(phys);
        if ((phys & 3u) == 0u && isHardwareAddress(phys))
            return readHardware32(phys);

        return static_cast<uint32_t>(read8(address)) |
               (static_cast<uint32_t>(read8(address + 1u)) << 8u) |
               (static_cast<uint32_t>(read8(address + 2u)) << 16u) |
               (static_cast<uint32_t>(read8(address + 3u)) << 24u);
    }

    void IopMemory::write8(uint32_t address, uint8_t value)
    {
        const uint32_t phys = physicalAddress(address);
        if (phys >= RamSize)
            ++m_nonRamAccesses;
        if (phys < RamSize)
        {
            m_ram[phys] = value;
            markOwned(phys, sizeof(value));
            return;
        }
        if (phys >= ScratchBase && phys < ScratchBase + ScratchSize)
        {
            m_scratch[phys - ScratchBase] = value;
            return;
        }
        if (IopSpu2::isRegister(phys))
        {
            const uint32_t half = phys & ~1u;
            uint16_t current16 = m_spu2.read16(half);
            const uint32_t shift16 = (phys & 1u) * 8u;
            current16 = static_cast<uint16_t>((current16 & ~(0xFFu << shift16)) | (static_cast<uint32_t>(value) << shift16));
            m_spu2.write16(half, current16);
            return;
        }
        if (IopSio2::isRegister(phys))
        {
            m_sio2.write8(phys, value);
            serviceSio2();
            return;
        }
        const uint32_t aligned = phys & ~3u;
        uint32_t current = readHardware32(aligned);
        const uint32_t shift = (phys & 3u) * 8u;
        current = (current & ~(0xFFu << shift)) | (static_cast<uint32_t>(value) << shift);
        writeHardware32(aligned, current);
    }

    void IopMemory::write16(uint32_t address, uint16_t value)
    {
        const uint32_t phys = physicalAddress(address);
        if (phys >= RamSize)
            ++m_nonRamAccesses;
        if (phys + 1u < RamSize)
        {
            std::memcpy(m_ram.data() + phys, &value, sizeof(value));
            markOwned(phys, sizeof(value));
            return;
        }
        if ((phys & 1u) == 0u && IopSpu2::isRegister(phys))
        {
            m_spu2.write16(phys, value);
            return;
        }
        write8(address, static_cast<uint8_t>(value));
        write8(address + 1u, static_cast<uint8_t>(value >> 8u));
    }

    void IopMemory::write32(uint32_t address, uint32_t value)
    {
        const uint32_t phys = physicalAddress(address);
        if (phys >= RamSize)
            ++m_nonRamAccesses;
        if ((phys & 3u) == 0u && phys + 3u < RamSize)
        {
            std::memcpy(m_ram.data() + phys, &value, sizeof(value));
            markOwned(phys, sizeof(value));
            return;
        }
        if ((phys & 3u) == 0u && phys >= ScratchBase && phys + 3u < ScratchBase + ScratchSize)
        {
            std::memcpy(m_scratch.data() + (phys - ScratchBase), &value, sizeof(value));
            return;
        }
        if ((phys & 3u) == 0u && IopSpu2::isRegister(phys))
        {
            m_spu2.write16(phys, static_cast<uint16_t>(value));
            m_spu2.write16(phys + 2u, static_cast<uint16_t>(value >> 16u));
            return;
        }
        if ((phys & 3u) == 0u && IopSio2::isRegister(phys))
        {
            m_sio2.write32(phys, value);
            serviceSio2();
            return;
        }
        if ((phys & 3u) == 0u)
        {
            writeHardware32(phys, value);
            return;
        }
        write8(address, static_cast<uint8_t>(value));
        write8(address + 1u, static_cast<uint8_t>(value >> 8u));
        write8(address + 2u, static_cast<uint8_t>(value >> 16u));
        write8(address + 3u, static_cast<uint8_t>(value >> 24u));
    }

    bool IopMemory::readRam(uint32_t address, void *destination, size_t size) const
    {
        const uint32_t phys = physicalAddress(address);
        if ((!destination && size != 0u) || phys > RamSize || size > RamSize - phys)
            return false;
        if (size != 0u)
            std::memcpy(destination, m_ram.data() + phys, size);
        return true;
    }

    bool IopMemory::writeRam(uint32_t address, const void *source, size_t size)
    {
        const uint32_t phys = physicalAddress(address);
        if ((!source && size != 0u) || phys > RamSize || size > RamSize - phys)
            return false;
        if (size != 0u)
        {
            std::memcpy(m_ram.data() + phys, source, size);
            markOwned(phys, size);
        }
        return true;
    }

    bool IopMemory::zeroRam(uint32_t address, size_t size)
    {
        const uint32_t phys = physicalAddress(address);
        if (phys > RamSize || size > RamSize - phys)
            return false;
        if (size != 0u)
        {
            std::memset(m_ram.data() + phys, 0, size);
            markOwned(phys, size);
        }
        return true;
    }

    bool IopMemory::ownsRamRange(uint32_t address, size_t size) const
    {
        const uint32_t phys = physicalAddress(address);
        if (phys > RamSize || size > RamSize - phys)
            return false;
        return std::all_of(m_owned.begin() + phys, m_owned.begin() + phys + size,
                           [](uint8_t value)
                           { return value != 0u; });
    }

    void IopMemory::markOwned(uint32_t address, size_t size)
    {
        if (address > RamSize || size > RamSize - address)
            return;
        std::fill(m_owned.begin() + address, m_owned.begin() + address + size, uint8_t{1});
    }

    bool IopMemory::isHardwareAddress(uint32_t address) const
    {
        const uint32_t phys = physicalAddress(address);
        return (phys >= HardwareBase && phys < HardwareEnd) ||
               (phys >= Spu2Base && phys < Spu2End) ||
               (phys >= SifBase && phys < SifEnd);
    }

    uint32_t IopMemory::readHardware32(uint32_t address) const
    {
        // PS2X_SPU2_ADMA_TRACE=1 also logs reads of the SPU2 DMA address/size registers (how drivers track playback).
        static const bool admaTrace = std::getenv("PS2X_SPU2_ADMA_TRACE") != nullptr;
        if (admaTrace && (address == 0x1F8010C0u || address == 0x1F801500u || address == 0x1F8010C4u || address == 0x1F801504u))
        {
            static unsigned s_n = 0;
            if (s_n++ < 400u)
            {
                const auto it = m_hardware.find(address);
                std::fprintf(stderr, "[spu2-reg] read 0x%x = 0x%x\n", address, it != m_hardware.end() ? it->second : 0u);
            }
        }
        const auto value = m_hardware.find(address);
        if (value != m_hardware.end())
            return value->second;
        switch (address)
        {
        case 0x1F801070u:
            return m_interruptStatus;
        case 0x1F801074u:
            return m_interruptMask;
        case 0x1F801078u:
            return m_interruptControl;
        default:
            return 0u;
        }
    }

    void IopMemory::writeHardware32(uint32_t address, uint32_t value)
    {
        switch (address)
        {
        case 0x1F801070u:
            m_interruptStatus &= value;
            return;
        case 0x1F801074u:
            m_interruptMask = value;
            return;
        case 0x1F801078u:
            m_interruptControl = value & 1u;
            return;
        default:
            break;
        }

        m_hardware[address] = value;
        if ((address != kDmaSpu0Chcr && address != kDmaSpu1Chcr) || (value & kDmaStart) == 0u)
            return;

        const bool secondCore = address == kDmaSpu1Chcr;
        m_hardware[address] = value & ~kDmaStart;

        // SPU2 STATX bit7 reports the (instant) DMA as done; LIBSD polls it after kicking a transfer.
        m_spu2.markDmaComplete(secondCore ? 1 : 0);

        const uint32_t blockControlAddress = address - sizeof(uint32_t);
        uint32_t blockControl = 0u;
        if (const auto current = m_hardware.find(blockControlAddress); current != m_hardware.end())
            blockControl = current->second;
        const uint32_t wordsPerBlock = std::max<uint32_t>(blockControl & 0xFFFFu, 1u);
        const uint32_t blockCount = std::max<uint32_t>(blockControl >> 16u, 1u);
        const uint64_t transferWords = static_cast<uint64_t>(wordsPerBlock) * blockCount;

        // Move the data now (CHCR bit0: 1 = IOP RAM -> SPU2); the completion IRQ stays delayed.
        {
            const uint32_t madrAddress = address - 2u * sizeof(uint32_t);
            uint32_t madr = 0u;
            if (const auto current = m_hardware.find(madrAddress); current != m_hardware.end())
                madr = current->second;
            madr &= RamSize - 1u;
            const uint32_t bytes = static_cast<uint32_t>(std::min<uint64_t>(transferWords * 4u, RamSize - madr));
            const bool toSpu = (value & 1u) != 0u;
            m_spu2.dmaTransfer(secondCore ? 1 : 0, m_ram.data(), RamSize, madr, bytes, toSpu);
            if (!toSpu)
                markOwned(madr, bytes);
        }
        // An AutoDMA transfer completes when the SPU2 has taken it: everything queued ahead of its last block is
        // played first (the driver then sends the next half of its buffer, so this paces it at 48 kHz).
        const int core = secondCore ? 1 : 0;
        uint64_t delay = std::max<uint64_t>(transferWords * 2u, 64u);
        if ((value & 1u) != 0u && m_spu2.admaActive(core))
        {
            const uint64_t queued = m_spu2.admaQueuedSamples(core);
            delay = std::max<uint64_t>(queued > 0x100u ? (queued - 0x100u) * IopSpu2::CyclesPerSample : 0u, 64u);
        }
        // PS2X_SPU2_ADMA_TRACE=1: every SPU2 DMA kick (AutoDMA or not) with its size, queue and completion delay.
        static const bool admaTrace = std::getenv("PS2X_SPU2_ADMA_TRACE") != nullptr;
        if (admaTrace)
        {
            static unsigned s_n = 0;
            if (s_n++ < 3000u)
                std::fprintf(stderr, "[spu2-dma] c%d %s adma=%d madr=0x%x bytes=0x%llx queued=%llu delay=%llu chcr=0x%x\n", core,
                             (value & 1u) ? "->spu" : "<-spu", m_spu2.admaActive(core) ? 1 : 0, m_hardware[address - 8u],
                             static_cast<unsigned long long>(transferWords * 4u),
                             static_cast<unsigned long long>(m_spu2.admaQueuedSamples(core)), static_cast<unsigned long long>(delay), value);
        }
        m_dmaStart = DmaStart{
            secondCore ? kDmaSpu1Irq : kDmaSpu0Irq,
            delay,
        };
    }

    void IopMemory::syncAdmaMadr()
    {
        for (int core = 0; core < 2; ++core)
        {
            const uint32_t madr = m_spu2.admaReadAddress(core);
            if (madr == 0u || !m_spu2.admaActive(core))
                continue;
            m_hardware[core == 0 ? kDmaSpu0Chcr - 8u : kDmaSpu1Chcr - 8u] = madr;
            // BCR: blocks still to transfer in the upper half (LIBSD derives the play position from it).
            const uint32_t bcrAddress = (core == 0 ? kDmaSpu0Chcr : kDmaSpu1Chcr) - 4u;
            const uint32_t bcr = m_hardware[bcrAddress];
            const uint32_t blockBytes = std::max<uint32_t>(bcr & 0xFFFFu, 1u) * 4u;
            m_hardware[bcrAddress] = ((m_spu2.admaRemainingBytes(core) / blockBytes) << 16) | (bcr & 0xFFFFu);
        }
    }

    // A CTRL start runs the queued SIO2 transfer right away (all DMA/FIFO input is staged
    // before the driver sets CTRL bit0); the completion IRQ is delivered by the emulator loop.
    void IopMemory::serviceSio2()
    {
        m_sio2.service(m_ram.data(), RamSize, [this](uint32_t address, uint32_t size)
                       { markOwned(address, size); });
    }

    std::optional<IopMemory::DmaStart> IopMemory::takeDmaStart() noexcept
    {
        std::optional<DmaStart> result = m_dmaStart;
        m_dmaStart.reset();
        return result;
    }

    uint32_t IopMemory::insertAllocation(uint32_t address, uint32_t size)
    {
        const auto position = std::lower_bound(m_allocations.begin(), m_allocations.end(), address,
                                               [](const Allocation &block, uint32_t value)
                                               { return block.address < value; });
        m_allocations.insert(position, Allocation{address, size});
        markOwned(address, size);
        if ([] { static const bool enabled = std::getenv("PS2X_IOPMEM_TRACE") != nullptr; return enabled; }())
            std::fprintf(stderr, "[iop-mem] alloc 0x%x -> 0x%x (blocks=%zu free=0x%x)\n", size, address, m_allocations.size(),
                         totalFreeMemory());
        return address;
    }

    void IopMemory::reportAllocationFailure(uint32_t size) const
    {
        std::fprintf(stderr, "[iop-mem] allocation of 0x%x bytes failed: %zu blocks live, largest free 0x%x, total free 0x%x\n",
                     size, m_allocations.size(), maxFreeMemory(), totalFreeMemory());
    }

    uint32_t IopMemory::allocate(uint32_t size, uint32_t alignment, std::optional<uint32_t> fixed)
    {
        size = alignUp(std::max(size, 1u), 16u);
        alignment = std::max<uint32_t>(alignment, 4u);
        if (fixed)
        {
            const uint32_t address = *fixed;
            if (address < HeapBase || address > HeapLimit || size > HeapLimit - address)
                return 0u;
            for (const auto &block : m_allocations)
                if (address < block.address + block.size && block.address < address + size)
                    return 0u;
            return insertAllocation(address, size);
        }

        // Walk the gaps between address-ordered blocks and take the lowest one that fits, so
        // freed memory is reused (a bump pointer never gives back what modules release).
        uint32_t gapStart = HeapBase;
        for (const auto &block : m_allocations)
        {
            const uint32_t candidate = alignUp(gapStart, alignment);
            if (candidate >= gapStart && candidate <= block.address && size <= block.address - candidate)
                return insertAllocation(candidate, size);
            gapStart = std::max(gapStart, block.address + block.size);
        }
        const uint32_t candidate = alignUp(gapStart, alignment);
        if (candidate >= gapStart && candidate <= HeapLimit && size <= HeapLimit - candidate)
            return insertAllocation(candidate, size);
        reportAllocationFailure(size);
        return 0u;
    }

    uint32_t IopMemory::allocateHigh(uint32_t size, uint32_t alignment)
    {
        size = alignUp(std::max(size, 1u), 16u);
        alignment = std::max<uint32_t>(alignment, 4u);
        uint32_t gapEnd = HeapLimit;
        for (auto block = m_allocations.rbegin(); block != m_allocations.rend(); ++block)
        {
            const uint32_t blockEnd = block->address + block->size;
            if (gapEnd >= blockEnd && gapEnd - blockEnd >= size)
            {
                const uint32_t candidate = (gapEnd - size) & ~(alignment - 1u);
                if (candidate >= blockEnd)
                    return insertAllocation(candidate, size);
            }
            gapEnd = std::min(gapEnd, block->address);
        }
        if (gapEnd >= HeapBase && gapEnd - HeapBase >= size)
        {
            const uint32_t candidate = (gapEnd - size) & ~(alignment - 1u);
            if (candidate >= HeapBase)
                return insertAllocation(candidate, size);
        }
        reportAllocationFailure(size);
        return 0u;
    }

    bool IopMemory::freeAllocation(uint32_t address)
    {
        const auto block = std::find_if(m_allocations.begin(), m_allocations.end(),
                                        [&](const Allocation &candidate)
                                        { return candidate.address == address; });
        if (block == m_allocations.end())
            return false;
        if ([] { static const bool enabled = std::getenv("PS2X_IOPMEM_TRACE") != nullptr; return enabled; }())
            std::fprintf(stderr, "[iop-mem] free 0x%x (0x%x bytes)\n", block->address, block->size);
        std::fill(m_owned.begin() + block->address,
                  m_owned.begin() + block->address + block->size,
                  uint8_t{0});
        m_allocations.erase(block);
        return true;
    }

    uint32_t IopMemory::maxFreeMemory() const
    {
        uint32_t largest = 0u;
        uint32_t gapStart = HeapBase;
        for (const auto &block : m_allocations)
        {
            if (block.address > gapStart)
                largest = std::max(largest, block.address - gapStart);
            gapStart = std::max(gapStart, block.address + block.size);
        }
        if (HeapLimit > gapStart)
            largest = std::max(largest, HeapLimit - gapStart);
        return largest;
    }

    uint32_t IopMemory::totalFreeMemory() const
    {
        uint32_t total = 0u;
        uint32_t gapStart = HeapBase;
        for (const auto &block : m_allocations)
        {
            if (block.address > gapStart)
                total += block.address - gapStart;
            gapStart = std::max(gapStart, block.address + block.size);
        }
        if (HeapLimit > gapStart)
            total += HeapLimit - gapStart;
        return total;
    }

    std::optional<IopMemory::Allocation> IopMemory::allocationContaining(uint32_t address) const
    {
        const auto block = std::find_if(m_allocations.begin(), m_allocations.end(),
                                        [&](const Allocation &candidate)
                                        {
                                            return address >= candidate.address &&
                                                   address < candidate.address + candidate.size;
                                        });
        if (block == m_allocations.end())
            return std::nullopt;
        return *block;
    }

    std::string IopMemory::readString(uint32_t address, size_t limit) const
    {
        std::string result;
        result.reserve(std::min<size_t>(limit, 64u));
        for (size_t i = 0; i < limit; ++i)
        {
            const char ch = static_cast<char>(read8(address + static_cast<uint32_t>(i)));
            if (ch == '\0')
                break;
            result.push_back(ch);
        }
        return result;
    }
}
