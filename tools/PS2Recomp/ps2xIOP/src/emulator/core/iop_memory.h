#pragma once

#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <string>
#include <unordered_map>
#include <vector>
#include "iop_spu2.h"
#include "iop_sio2.h"

namespace ps2x::iop::detail
{
    class IopMemory
    {
    public:
        static constexpr uint32_t RamSize = 2u * 1024u * 1024u;
        static constexpr uint32_t ScratchBase = 0x1F800000u;
        static constexpr uint32_t ScratchSize = 0x400u;
        static constexpr uint32_t HardwareBase = 0x1F801000u;
        static constexpr uint32_t HardwareEnd = 0x1F900000u;
        static constexpr uint32_t Spu2Base = 0x1F900000u;
        static constexpr uint32_t Spu2End = 0x1FA00000u;
        static constexpr uint32_t SifBase = 0x1D000000u;
        static constexpr uint32_t SifEnd = 0x1D001000u;
        // One pool for IRX images and AllocSysMemory, like the real sysmem: everything above
        // the (HLE) kernel area up to the emulator's private call-stack window.
        static constexpr uint32_t HeapBase = 0x00010000u;
        static constexpr uint32_t HeapLimit = 0x001F0000u;

        struct Allocation
        {
            uint32_t address = 0;
            uint32_t size = 0;
        };

        struct DmaStart
        {
            int irq = 0;
            uint64_t delayCycles = 0;
        };

        IopMemory();

        void reset();

        [[nodiscard]] uint8_t read8(uint32_t address) const;
        [[nodiscard]] uint16_t read16(uint32_t address) const;
        [[nodiscard]] uint32_t read32(uint32_t address) const;
        void write8(uint32_t address, uint8_t value);
        void write16(uint32_t address, uint16_t value);
        void write32(uint32_t address, uint32_t value);

        [[nodiscard]] bool readRam(uint32_t address, void *destination, size_t size) const;
        [[nodiscard]] bool writeRam(uint32_t address, const void *source, size_t size);
        [[nodiscard]] bool zeroRam(uint32_t address, size_t size);
        [[nodiscard]] bool ownsRamRange(uint32_t address, size_t size) const;
        [[nodiscard]] bool isHardwareAddress(uint32_t address) const;
        [[nodiscard]] std::string readString(uint32_t address, size_t limit = 1024u) const;

        // First fit from the lowest address (sysmem ALLOC_FIRST); `fixed` is ALLOC_ADDRESS.
        [[nodiscard]] uint32_t allocate(uint32_t size, uint32_t alignment = 16u, std::optional<uint32_t> fixed = std::nullopt);
        // Highest fitting address (sysmem ALLOC_LAST).
        [[nodiscard]] uint32_t allocateHigh(uint32_t size, uint32_t alignment = 16u);
        [[nodiscard]] bool freeAllocation(uint32_t address);
        // Largest free block (QueryMaxFreeMemSize) and sum of free blocks (QueryTotalFreeMemSize).
        [[nodiscard]] uint32_t maxFreeMemory() const;
        [[nodiscard]] uint32_t totalFreeMemory() const;
        [[nodiscard]] std::optional<Allocation> allocationContaining(uint32_t address) const;

        [[nodiscard]] uint32_t interruptStatus() const noexcept { return m_interruptStatus; }
        [[nodiscard]] uint32_t interruptMask() const noexcept { return m_interruptMask; }
        [[nodiscard]] uint32_t interruptControl() const noexcept { return m_interruptControl; }
        void setInterruptStatus(uint32_t value) noexcept { m_interruptStatus = value; }
        void setInterruptMask(uint32_t value) noexcept { m_interruptMask = value; }
        void setInterruptControl(uint32_t value) noexcept { m_interruptControl = value & 1u; }

        [[nodiscard]] std::optional<DmaStart> takeDmaStart() noexcept;
        [[nodiscard]] IopSpu2 &spu2() noexcept { return m_spu2; }
        // The SPU2 DMA channels' MADR follows AutoDMA playback: LIBSD's sceSdBlockTransStatus reports it as the play
        // position, and games free their sound buffers by it.
        void syncAdmaMadr();
        [[nodiscard]] IopSio2 &sio2() noexcept { return m_sio2; }
        [[nodiscard]] std::span<const uint8_t> ram() const noexcept { return m_ram; }
        // Recompiled-code checking (PS2X_IOP_RECOMP_VERIFY): direct RAM access and a count of every access outside
        // RAM (hardware registers, scratchpad), which must not be repeated.
        [[nodiscard]] uint8_t *ramData() noexcept { return m_ram.data(); }
        [[nodiscard]] uint64_t nonRamAccesses() const noexcept { return m_nonRamAccesses; }

        [[nodiscard]] static uint32_t physicalAddress(uint32_t address) noexcept;

    private:
        [[nodiscard]] uint32_t readHardware32(uint32_t address) const;
        void writeHardware32(uint32_t address, uint32_t value);
        void markOwned(uint32_t address, size_t size);

        std::vector<uint8_t> m_ram;
        std::vector<uint8_t> m_owned;
        std::vector<uint8_t> m_scratch;
        std::unordered_map<uint32_t, uint32_t> m_hardware;
        std::vector<Allocation> m_allocations; // sorted by address
        uint32_t insertAllocation(uint32_t address, uint32_t size);
        void reportAllocationFailure(uint32_t size) const;
        mutable uint64_t m_nonRamAccesses = 0;
        uint32_t m_interruptStatus = 0;
        uint32_t m_interruptMask = 0;
        uint32_t m_interruptControl = 1;
        std::optional<DmaStart> m_dmaStart;
        mutable IopSpu2 m_spu2;
        mutable IopSio2 m_sio2;
        void serviceSio2();
    };
}
