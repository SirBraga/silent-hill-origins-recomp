#pragma once
// SIO2 controller + attached serial devices for the ps2xIOP emulator.
//
// Real IOP drivers (SIO2MAN.IRX and everything layered on it: PADMAN/DBCMAN/DS2O,
// MCMAN/MC2_D, ...) talk to the SIO2 block at 0x1F808200. This models what they see:
//   - SEND3[16] transfer queue, SEND1/SEND2 port parameters, CTRL, RECV1..3, ISTAT
//   - byte FIFOs (PIO) and the SIO2in/SIO2out DMA channels (IOP DMA 11/12)
//   - a transfer completion interrupt (IOP irq 17)
//   - devices selected by the first command byte: DualShock 2 (0x01) and
//     PS2 memory card (0x81) on the two physical ports.
#include <array>
#include <cstddef>
#include <cstdint>
#include <deque>
#include <functional>
#include <string>
#include <vector>

namespace ps2x::iop::detail
{
    class IopSio2
    {
    public:
        static constexpr uint32_t RegBase = 0x1F808200u;
        static constexpr uint32_t RegEnd = 0x1F808300u;
        static constexpr int Irq = 17;

        struct DmaRequest
        {
            uint32_t addr = 0;
            uint32_t blockWords = 0;
            uint32_t blocks = 0;
            bool armed = false;
        };

        // 32-byte DualShock2 state like the runtime pad backend reports it:
        // [2..3] buttons (active low), [4..7] rx, ry, lx, ly.
        using PadReader = std::function<bool(int port, uint8_t *state32)>;
        // Memory card backing store: returns the path of the image for a port, "" = no card.
        using CardPath = std::function<std::string(int port)>;

        IopSio2();
        void reset();
        void setPadReader(PadReader reader) { m_padReader = std::move(reader); }
        void setCardPath(CardPath path) { m_cardPath = std::move(path); }
        // True when a memory card is inserted in slot `port` (0/1).
        [[nodiscard]] bool cardPresent(int port) { return port >= 0 && port < 2 && ensureCard(port); }

        [[nodiscard]] static bool isRegister(uint32_t phys) noexcept { return phys >= RegBase && phys < RegEnd; }
        [[nodiscard]] uint32_t read32(uint32_t phys);
        void write32(uint32_t phys, uint32_t value);
        [[nodiscard]] uint8_t read8(uint32_t phys);
        void write8(uint32_t phys, uint8_t value);

        // IOP DMA channel 11 (in) / 12 (out) requests issued through dmacman.
        void setDma(int channel, uint32_t addr, uint32_t blockWords, uint32_t blocks);
        void kickDma(int channel);

        // Called for every IOP RAM range written by the SIO2out DMA.
        using WriteNotifier = std::function<void(uint32_t addr, uint32_t size)>;

        // Performs a transfer started through CTRL bit0 against IOP RAM and latches the
        // completion interrupt.
        void service(uint8_t *iopRam, uint32_t iopRamSize, const WriteNotifier &notifyWrite);
        [[nodiscard]] bool takeIrq() noexcept;

    private:
        struct PadState
        {
            uint8_t mode = 0x41;        // 0x41 digital, 0x73 analog, 0x79 analog+pressure
            bool config = false;
            bool modeLocked = false;
            std::array<uint8_t, 6> vibrationMap{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
            uint32_t pressureMask = 0x3FFFFu;
        };

        struct Card
        {
            bool loaded = false;
            std::string path;
            std::vector<uint8_t> image; // raw, 528 bytes per page (512 data + 16 ECC)
            uint32_t sector = 0;
            uint32_t offset = 0;
            uint8_t term = 0x55;
            bool dirty = false;
            size_t dirtyFrom = 0, dirtyTo = 0; // the bytes changed since the last write to the file
        };

        void transfer(uint8_t *iopRam, uint32_t iopRamSize, const WriteNotifier &notifyWrite);
        bool devicePresent(int port);
        bool processCommand(int port, const std::vector<uint8_t> &cmd, std::vector<uint8_t> &reply);
        bool padCommand(int port, const std::vector<uint8_t> &cmd, std::vector<uint8_t> &reply);
        bool cardCommand(int port, const std::vector<uint8_t> &cmd, std::vector<uint8_t> &reply);
        bool ensureCard(int port);
        static void markDirty(Card &card, size_t from, size_t to);
        void flushCard(int port);

        std::array<uint32_t, 16> m_send3{};
        std::array<uint32_t, 4> m_send1{};
        std::array<uint32_t, 4> m_send2{};
        uint32_t m_ctrl = 0;
        uint32_t m_recv1 = 0x1D100u;
        uint32_t m_recv2 = 0xFu;
        uint32_t m_recv3 = 0;
        uint32_t m_reg278 = 0;
        uint32_t m_reg27c = 0;
        uint32_t m_istat = 0;
        std::deque<uint8_t> m_fifoIn;
        std::deque<uint8_t> m_fifoOut;
        std::array<DmaRequest, 2> m_dma{}; // [0] = ch11 in, [1] = ch12 out
        bool m_startPending = false;
        bool m_irqPending = false;

        std::array<PadState, 2> m_pads{};
        std::array<Card, 2> m_cards{};
        PadReader m_padReader;
        CardPath m_cardPath;
    };
}
