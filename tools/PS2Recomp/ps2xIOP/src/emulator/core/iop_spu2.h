#pragma once
// SPU2 core model for the ps2xIOP emulator.
//
// Scope: what IOP-side sound drivers (sony LIBSD.IRX and anything built on it,
// e.g. RenderWare Audio's RWA.IRX) observe from the hardware:
//   - 2 MiB sound RAM and the 16-bit register file (both cores, 0x1F900000-0x1F9007FF)
//   - manual (IO) and DMA transfers into/out of sound RAM through TSA/STD
//   - voice playback bookkeeping: KON/KOFF, pitch-driven NAX progression over
//     ADPCM blocks, loop start/end/repeat flags, LSAX, ENDX
//   - the address-match interrupt (IRQA) raised by voice fetches and transfers,
//     reported through SPDIF_IRQINFO and delivered as IOP interrupt 9
//   - ADSR envelope (PS1/PS2 SPU rate tables) so ENVX reads are meaningful
//
// Audio sample output is not produced here yet (decoded mixing is a separate step).
#include <array>
#include <cstddef>
#include <cstdint>
#include <deque>
#include <vector>

namespace ps2x::iop::detail
{
    class IopSpu2
    {
    public:
        static constexpr uint32_t RegBase = 0x1F900000u;
        static constexpr uint32_t RegSize = 0x800u;
        static constexpr uint32_t RamHalfwords = 1u << 20; // 2 MiB
        static constexpr uint32_t AddressMask = RamHalfwords - 1u;
        static constexpr int Voices = 24;
        static constexpr int Irq = 9;               // IOP_IRQ_SPU
        static constexpr uint64_t CyclesPerSample = 768u; // 36.864 MHz / 48 kHz

        IopSpu2();
        void reset();

        [[nodiscard]] static bool isRegister(uint32_t phys) noexcept
        {
            return phys >= RegBase && phys < RegBase + RegSize;
        }
        [[nodiscard]] uint16_t read16(uint32_t phys);
        void write16(uint32_t phys, uint16_t value);

        // DMA channel 4 (core 0) / 7 (core 1). toSpu = IOP RAM -> sound RAM.
        void dmaTransfer(int core, uint8_t *iopRam, uint32_t iopRamSize, uint32_t madr, uint32_t bytes, bool toSpu);

        // Advance voice playback up to the given IOP cycle.
        void advanceTo(uint64_t cycle);
        [[nodiscard]] bool takeIrq() noexcept
        {
            const bool pending = m_irqPending;
            m_irqPending = false;
            return pending;
        }
        void markDmaComplete(int core) { reg(core * 0x400u + 0x344u) |= 0x80u; }
        // AutoDMA (ADMAS bit of the core set): the transfer feeds the core's sound data input instead of TSA.
        [[nodiscard]] bool admaActive(int core) const { return (regv(core * 0x400u + 0x1B0u) & (1u << core)) != 0u; }
        // Stereo samples of AutoDMA data queued for a core and not yet moved into its input area.
        [[nodiscard]] uint64_t admaQueuedSamples(int core) const { return m_admaBytes[core] / 4u; }
        // IOP address the core's AutoDMA reads next (as the channel's MADR advances on the console), 0 if none.
        [[nodiscard]] uint32_t admaReadAddress(int core) const { return m_admaLastMadr[core]; }
        // Bytes of the current AutoDMA transfer not yet played (the channel's BCR block count counts them down).
        [[nodiscard]] uint32_t admaRemainingBytes(int core) const { return m_adma[core].empty() ? 0u : m_adma[core].front().bytes; }
        // Upper bound for how far the scheduler may idle before the SPU must be stepped again.
        [[nodiscard]] uint64_t nextEventCycle(uint64_t fallback) const noexcept;

    private:
        struct Voice
        {
            bool on = false;
            uint32_t nax = 0;       // current block address (halfwords, 8-aligned)
            uint32_t lsax = 0;
            bool lsaxWritten = false;
            uint32_t counter = 0;   // 12.12 fixed-point sample position inside the block
            bool blockEntered = false;
            // ADSR
            enum class Phase : uint8_t { Off, Attack, Decay, Sustain, Release } phase = Phase::Off;
            int32_t env = 0;
            int32_t envCounter = 0;
            // Decoded samples of the current ADPCM block, after the last 3 of the previous one (for interpolation).
            std::array<int16_t, 3 + 28> pcm{};
            int32_t s1 = 0, s2 = 0; // ADPCM predictor history
        };

        [[nodiscard]] uint16_t &reg(uint32_t offset) { return m_regs[(offset & (RegSize - 1u)) >> 1]; }
        [[nodiscard]] uint16_t regv(uint32_t offset) const { return m_regs[(offset & (RegSize - 1u)) >> 1]; }
        [[nodiscard]] uint32_t readAddr(uint32_t hiOffset) const;
        void writeAddr(uint32_t hiOffset, uint32_t value);
        [[nodiscard]] uint32_t voiceAddrBase(int core, int v) const { return core * 0x400u + 0x1C0u + v * 0xCu; }
        [[nodiscard]] uint32_t voiceRegBase(int core, int v) const { return core * 0x400u + v * 0x10u; }
        [[nodiscard]] bool irqEnabled(int core) const { return (regv(core * 0x400u + 0x19Au) & 0x40u) != 0u; }
        [[nodiscard]] uint32_t irqAddress(int core) const { return readAddr(core * 0x400u + 0x19Cu); }

        void keyOn(int core, int v);
        void keyOff(int core, int v);
        void stepVoice(int core, int v);
        void stepEnvelope(int core, int v);
        void enterBlock(int core, int v);
        void testIrq(int core, uint32_t address, uint32_t length);
        void raiseIrq(int core);
        void writeStd(int core, uint16_t value);
        void stepOutputAreas();
        void refillAdmaInput(int core, uint32_t half);
        void decodeBlock(Voice &v);
        [[nodiscard]] int32_t voiceSample(const Voice &v) const;
        void flushOutput();
        void mixCore(int core, int32_t &extL, int32_t &extR, int32_t &outL, int32_t &outR);
        void reverb(int core, int32_t inL, int32_t inR, int32_t &outL, int32_t &outR);

        std::vector<uint16_t> m_ram;
        std::array<uint16_t, RegSize / 2> m_regs{};
        std::array<std::array<Voice, Voices>, 2> m_voices{};
        std::array<uint32_t, 2> m_tsa{};
        std::array<uint32_t, 2> m_endx{};
        uint16_t m_irqInfo = 0;
        bool m_irqPending = false;
        uint32_t m_outPos = 0; // 0..0x1FF: write position in the per-sample output areas
        // AutoDMA transfers not yet played: IOP RAM ranges (0x200 bytes L then 0x200 R per block), read when played.
        struct AdmaRange { uint32_t madr; uint32_t bytes; };
        std::array<std::deque<AdmaRange>, 2> m_adma;
        std::array<uint64_t, 2> m_admaBytes{};
        std::array<uint32_t, 2> m_admaLastMadr{};
        const uint8_t *m_admaRam = nullptr;
        uint32_t m_admaRamSize = 0;
        uint64_t m_lastCycle = 0;
        uint64_t m_cycleCarry = 0;
        std::array<int16_t, 2 * 512> m_out{}; // mixed frames waiting for the output sink
        uint32_t m_outFrames = 0;
        struct Reverb
        {
            uint32_t pos = 0;           // current offset inside the work area (ESA..EEA)
            bool odd = false;           // the reverb runs at 24 kHz: every other output sample
            int32_t inL = 0, inR = 0;   // input of the pending tick (two 48 kHz samples summed)
            int32_t prevL = 0, prevR = 0, curL = 0, curR = 0; // last two ticks, for the in-between sample
        };
        std::array<Reverb, 2> m_reverb{};
        std::array<std::array<int32_t, 3>, 2> m_levelPeaks{}; // PS2X_SPU2_LEVELS: per core dry, wet, input
        uint32_t m_levelSamples = 0;
    };
}
