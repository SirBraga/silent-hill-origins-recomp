#include "iop_sio2.h"

#include <algorithm>
#include <array>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <initializer_list>

namespace ps2x::iop::detail
{
    namespace
    {
        // Register offsets inside the SIO2 block (0x1F808200).
        constexpr uint32_t kSend3 = 0x00u;   // 16 x u32
        constexpr uint32_t kSend1 = 0x40u;   // 4 x (send1, send2) pairs, stride 8
        constexpr uint32_t kFifoIn = 0x60u;
        constexpr uint32_t kFifoOut = 0x64u;
        constexpr uint32_t kCtrl = 0x68u;
        constexpr uint32_t kRecv1 = 0x6Cu;
        constexpr uint32_t kRecv2 = 0x70u;
        constexpr uint32_t kRecv3 = 0x74u;
        constexpr uint32_t kReg278 = 0x78u;
        constexpr uint32_t kReg27C = 0x7Cu;
        constexpr uint32_t kIstat = 0x80u;

        constexpr uint32_t kCtrlStart = 0x1u;
        constexpr uint32_t kCtrlResetMask = 0xCu;

        // RECV1: (value & 0xF000) == 0x1000 means "device answered"; 0xD000 plus the per-port
        // bit (0x10000 << port) is what the hardware reports when nothing is attached.
        constexpr uint32_t kRecv1Connected = 0x1100u;
        constexpr uint32_t kRecv1NoDevice = 0xD100u;

        constexpr uint8_t kDevPad = 0x01u;
        constexpr uint8_t kDevMultitap = 0x21u;
        constexpr uint8_t kDevInfrared = 0x61u;
        constexpr uint8_t kDevMemcard = 0x81u;

        // 8 MB PS2 memory card geometry.
        constexpr uint32_t kCardPageData = 512u;
        constexpr uint32_t kCardPageRaw = kCardPageData + 16u;
        constexpr uint32_t kCardPages = 0x4000u;
        constexpr uint32_t kCardEraseBlock = 16u;
        constexpr uint8_t kCardDefaultTerm = 0x55u;

        // The PS2 memory card's ECC: three bytes for each 128 bytes of a page (column parity and two line parities),
        // as the card manager computes and checks them.
        void cardEcc128(const uint8_t *data, uint8_t *out)
        {
            static const std::array<uint8_t, 256> columnMasks = []
            {
                std::array<uint8_t, 256> masks{};
                static const uint8_t bits[7] = {0x55, 0x33, 0x0F, 0x00, 0xAA, 0xCC, 0xF0};
                for (int b = 0; b < 256; ++b)
                    for (int i = 0; i < 7; ++i)
                        masks[b] |= uint8_t((__builtin_popcount(unsigned(b & bits[i])) & 1) << i);
                return masks;
            }();
            uint8_t column = 0x77u, line0 = 0x7Fu, line1 = 0x7Fu;
            for (uint32_t i = 0; i < 128u; ++i)
            {
                column ^= columnMasks[data[i]];
                if (__builtin_popcount(data[i]) & 1)
                {
                    line0 ^= uint8_t(~i);
                    line1 ^= uint8_t(i);
                }
            }
            out[0] = column;
            out[1] = line0 & 0x7Fu;
            out[2] = line1 & 0x7Fu;
        }

        void cardPutPage(std::vector<uint8_t> &image, uint32_t page, const uint8_t *data)
        {
            uint8_t *raw = image.data() + static_cast<size_t>(page) * kCardPageRaw;
            std::memcpy(raw, data, kCardPageData);
            for (uint32_t k = 0; k < 4u; ++k)
                cardEcc128(raw + k * 128u, raw + kCardPageData + k * 3u);
            std::memset(raw + kCardPageData + 12u, 0xFF, 4u);
        }

        // A freshly formatted 8 MB card, as the game's card manager (MC2_D) lays one out: superblock in page 0, the
        // indirect FAT in cluster 8, the FAT in clusters 9-40, the root directory ("." and "..") in cluster 41, and
        // everything else erased. On the PC the card is just the save file: formatting it on first use took the game
        // minutes here and asked the player about a memory card.
        void formatCard(std::vector<uint8_t> &image)
        {
            std::fill(image.begin(), image.end(), uint8_t{0xFFu});
            uint8_t page[kCardPageData];
            auto put32 = [&page](size_t at, uint32_t v) { std::memcpy(page + at, &v, 4); };
            auto put16 = [&page](size_t at, uint16_t v) { std::memcpy(page + at, &v, 2); };

            std::memset(page, 0xFF, sizeof page);
            std::memset(page, 0, 0x28);
            std::memcpy(page, "Sony PS2 Memory Card Format 1.2.0.0", 35);
            put16(0x28, 512);    // page size
            put16(0x2A, 2);      // pages per cluster
            put16(0x2C, 16);     // pages per erase block
            put16(0x2E, 0xFF00);
            put32(0x30, 8192);   // clusters
            put32(0x34, 41);     // first allocatable cluster
            put32(0x38, 8135);   // end of the allocatable clusters
            put32(0x3C, 0);      // root directory (relative to the first allocatable one)
            put32(0x40, 1023);   // backup erase blocks
            put32(0x44, 1022);
            std::memset(page + 0x48, 0, 0xD0 - 0x48);
            put32(0x50, 8);      // indirect FAT cluster list
            std::memset(page + 0xD0, 0xFF, 0x80); // no bad blocks
            page[0x150] = 2;     // PS2 card
            page[0x151] = 0x2B;  // flags
            put16(0x152, 0xFFFF);
            put32(0x154, 0x400); // cluster size
            put32(0x158, 0x100); // FAT entries per cluster
            put32(0x15C, 8);
            put32(0x160, 0xFFFFFFFFu);
            std::memset(page + 0x164, 0, 12);
            put32(0x170, 8001);  // most clusters a save can take
            cardPutPage(image, 0, page);

            uint8_t ifc[1024];
            std::memset(ifc, 0xFF, sizeof ifc);
            for (uint32_t i = 0; i < 32u; ++i)
            {
                const uint32_t cluster = 9u + i;
                std::memcpy(ifc + 4u * i, &cluster, 4);
            }
            cardPutPage(image, 16, ifc);
            cardPutPage(image, 17, ifc + 512);

            // FAT: the root directory's cluster ends its chain, the rest is free up to the end of the allocatable area.
            for (uint32_t p = 0; p < 64u; ++p)
            {
                for (uint32_t i = 0; i < 128u; ++i)
                {
                    const uint32_t index = p * 128u + i;
                    put32(i * 4u, index == 0u || index >= 8135u ? 0xFFFFFFFFu : 0x7FFFFFFFu);
                }
                cardPutPage(image, 18u + p, page);
            }

            auto dirent = [&](uint16_t mode, uint32_t length, const char *name)
            {
                std::memset(page, 0, sizeof page);
                put16(0, mode);
                put32(4, length);
                static const uint8_t time[8] = {0, 0, 0, 0, 0, 0, 0xD0, 0x07}; // 2000, as the card manager stamps it
                std::memcpy(page + 0x08, time, 8);
                std::memcpy(page + 0x18, time, 8);
                std::memcpy(page + 0x40, name, std::strlen(name));
            };
            dirent(0x8427, 2, ".");
            cardPutPage(image, 82, page);
            dirent(0xA426, 0, "..");
            cardPutPage(image, 83, page);
        }

        bool traceEnabled()
        {
            static const bool enabled = std::getenv("PS2X_SIO2_TRACE") != nullptr;
            return enabled;
        }

        void traceBytes(const char *tag, int port, const uint8_t *data, size_t size)
        {
            static unsigned s_lines = 0;
            if (s_lines >= 400000u)
                return;
            ++s_lines;
            std::fprintf(stderr, "[sio2] %s p%d n=%zu:", tag, port, size);
            for (size_t i = 0; i < size && i < 48u; ++i)
                std::fprintf(stderr, " %02x", data[i]);
            std::fprintf(stderr, "%s\n", size > 48u ? " ..." : "");
        }
    }

    IopSio2::IopSio2()
    {
        reset();
    }

    void IopSio2::reset()
    {
        for (int port = 0; port < 2; ++port)
            flushCard(port);
        m_send3.fill(0u);
        m_send1.fill(0u);
        m_send2.fill(0u);
        m_ctrl = 0u;
        m_recv1 = kRecv1NoDevice | 0x10000u;
        m_recv2 = 0xFu;
        m_recv3 = 0u;
        m_reg278 = 0u;
        m_reg27c = 0u;
        m_istat = 0u;
        m_fifoIn.clear();
        m_fifoOut.clear();
        m_dma = {};
        m_startPending = false;
        m_irqPending = false;
        m_pads = {};
        m_cards = {};
    }

    uint32_t IopSio2::read32(uint32_t phys)
    {
        const uint32_t off = phys - RegBase;
        if (off < kSend1)
            return m_send3[(off - kSend3) / 4u];
        if (off < kFifoIn)
        {
            const uint32_t index = (off - kSend1) / 8u;
            return ((off - kSend1) & 4u) ? m_send2[index] : m_send1[index];
        }
        switch (off)
        {
        case kFifoOut:
            return read8(phys);
        case kCtrl:
            return m_ctrl;
        case kRecv1:
            return m_recv1;
        case kRecv2:
            return m_recv2;
        case kRecv3:
            return m_recv3;
        case kReg278:
            return m_reg278;
        case kReg27C:
            return m_reg27c;
        case kIstat:
            return m_istat;
        default:
            return 0u;
        }
    }

    void IopSio2::write32(uint32_t phys, uint32_t value)
    {
        const uint32_t off = phys - RegBase;
        if (off < kSend1)
        {
            m_send3[(off - kSend3) / 4u] = value;
            return;
        }
        if (off < kFifoIn)
        {
            const uint32_t index = (off - kSend1) / 8u;
            if ((off - kSend1) & 4u)
                m_send2[index] = value;
            else
                m_send1[index] = value;
            return;
        }
        switch (off)
        {
        case kFifoIn:
            write8(phys, static_cast<uint8_t>(value));
            return;
        case kCtrl:
            if (value & kCtrlResetMask)
            {
                m_fifoIn.clear();
                m_fifoOut.clear();
            }
            m_ctrl = value & ~(kCtrlStart | kCtrlResetMask);
            if (value & kCtrlStart)
                m_startPending = true;
            return;
        case kReg278:
            m_reg278 = value;
            return;
        case kReg27C:
            m_reg27c = value;
            return;
        case kIstat:
            m_istat &= ~value; // write-1-to-acknowledge
            return;
        default:
            return;
        }
    }

    uint8_t IopSio2::read8(uint32_t phys)
    {
        const uint32_t off = phys - RegBase;
        if (off == kFifoOut)
        {
            if (m_fifoOut.empty())
                return 0xFFu;
            const uint8_t value = m_fifoOut.front();
            m_fifoOut.pop_front();
            return value;
        }
        const uint32_t word = read32(phys & ~3u);
        return static_cast<uint8_t>(word >> ((phys & 3u) * 8u));
    }

    void IopSio2::write8(uint32_t phys, uint8_t value)
    {
        const uint32_t off = phys - RegBase;
        if (off == kFifoIn)
        {
            m_fifoIn.push_back(value);
            return;
        }
        const uint32_t aligned = phys & ~3u;
        const uint32_t shift = (phys & 3u) * 8u;
        uint32_t word = read32(aligned);
        word = (word & ~(0xFFu << shift)) | (static_cast<uint32_t>(value) << shift);
        write32(aligned, word);
    }

    void IopSio2::setDma(int channel, uint32_t addr, uint32_t blockWords, uint32_t blocks)
    {
        if (channel != 11 && channel != 12)
            return;
        DmaRequest &request = m_dma[channel == 11 ? 0 : 1];
        request.addr = addr & 0x1FFFFFu;
        request.blockWords = blockWords;
        request.blocks = blocks;
        request.armed = false;
    }

    void IopSio2::kickDma(int channel)
    {
        if (channel != 11 && channel != 12)
            return;
        DmaRequest &request = m_dma[channel == 11 ? 0 : 1];
        request.armed = request.blockWords != 0u && request.blocks != 0u;
    }

    bool IopSio2::takeIrq() noexcept
    {
        const bool pending = m_irqPending;
        m_irqPending = false;
        return pending;
    }

    void IopSio2::service(uint8_t *iopRam, uint32_t iopRamSize, const WriteNotifier &notifyWrite)
    {
        if (!m_startPending)
            return;
        m_startPending = false;
        transfer(iopRam, iopRamSize, notifyWrite);
        m_istat |= 1u;
        m_irqPending = true;
    }

    void IopSio2::transfer(uint8_t *iopRam, uint32_t iopRamSize, const WriteNotifier &notifyWrite)
    {
        // DMA cursors: each queued command starts on a DMA block boundary; padding bytes
        // between the command length and the block size are skipped (in) / zero-filled (out).
        DmaRequest &dmaIn = m_dma[0];
        DmaRequest &dmaOut = m_dma[1];
        uint32_t inCursor = dmaIn.addr;
        uint32_t inEnd = dmaIn.armed ? dmaIn.addr + dmaIn.blockWords * 4u * dmaIn.blocks : dmaIn.addr;
        uint32_t outCursor = dmaOut.addr;
        uint32_t outEnd = dmaOut.armed ? dmaOut.addr + dmaOut.blockWords * 4u * dmaOut.blocks : dmaOut.addr;
        inEnd = std::min(inEnd, iopRamSize);
        outEnd = std::min(outEnd, iopRamSize);
        const uint32_t inBlock = dmaIn.blockWords * 4u;
        const uint32_t outBlock = dmaOut.blockWords * 4u;

        uint32_t recv1 = kRecv1Connected;
        bool any = false;
        std::vector<uint8_t> cmd;
        std::vector<uint8_t> reply;

        for (size_t entry = 0; entry < m_send3.size(); ++entry)
        {
            const uint32_t send3 = m_send3[entry];
            if (send3 == 0u)
                break;
            const int port = static_cast<int>(send3 & 3u);
            const uint32_t inLen = (send3 >> 8u) & 0x1FFu;
            const uint32_t outLen = (send3 >> 18u) & 0x1FFu;

            cmd.clear();
            if (dmaIn.armed && inCursor < inEnd)
            {
                const uint32_t take = std::min(inLen, inEnd - inCursor);
                cmd.assign(iopRam + inCursor, iopRam + inCursor + take);
                const uint32_t consumed = inBlock ? ((inLen + inBlock - 1u) / inBlock) * inBlock : inLen;
                inCursor = std::min(inEnd, inCursor + std::max(consumed, inBlock));
            }
            else
            {
                for (uint32_t i = 0; i < inLen && !m_fifoIn.empty(); ++i)
                {
                    cmd.push_back(m_fifoIn.front());
                    m_fifoIn.pop_front();
                }
            }
            cmd.resize(inLen, 0u);

            reply.clear();
            // A zero-length slot clocks no bytes: the status only reflects whether something is
            // attached to the port (controllers on 0/1, memory cards on 2/3).
            const bool answered = inLen == 0u ? devicePresent(port) : processCommand(port, cmd, reply);
            any = true;
            // The status of the last queued command is what RECV1 reports.
            recv1 = answered ? kRecv1Connected : (kRecv1NoDevice | (0x10000u << port));
            reply.resize(std::max<size_t>(reply.size(), outLen), answered ? 0x00u : 0xFFu);
            reply.resize(outLen);

            if (traceEnabled())
            {
                char tag[64];
                std::snprintf(tag, sizeof(tag), "cmd s3=%08x %s", send3, dmaIn.armed ? "dma" : "pio");
                traceBytes(tag, port, cmd.data(), cmd.size());
                std::snprintf(tag, sizeof(tag), "rep %s%s", answered ? "ok" : "nodev", dmaOut.armed ? " dma" : " pio");
                traceBytes(tag, port, reply.data(), reply.size());
            }

            if (dmaOut.armed && outCursor < outEnd)
            {
                const uint32_t span = outBlock ? ((outLen + outBlock - 1u) / outBlock) * outBlock : outLen;
                const uint32_t room = std::min(std::max(span, outBlock), outEnd - outCursor);
                std::memset(iopRam + outCursor, 0, room);
                std::memcpy(iopRam + outCursor, reply.data(), std::min<uint32_t>(room, static_cast<uint32_t>(reply.size())));
                if (notifyWrite)
                    notifyWrite(outCursor, room);
                outCursor += room;
            }
            else
            {
                m_fifoOut.insert(m_fifoOut.end(), reply.begin(), reply.end());
            }
        }

        dmaIn.armed = false;
        dmaOut.armed = false;
        if (any)
            m_recv1 = recv1;
        if (traceEnabled())
            std::fprintf(stderr, "[sio2] xfer end recv1=%05x\n", m_recv1);
        m_recv2 = 0xFu;
        m_recv3 = 0u;
    }

    bool IopSio2::devicePresent(int port)
    {
        if (port < 2)
        {
            uint8_t state[32];
            return m_padReader && m_padReader(port, state);
        }
        return ensureCard(port & 1);
    }

    bool IopSio2::processCommand(int port, const std::vector<uint8_t> &cmd, std::vector<uint8_t> &reply)
    {
        if (cmd.empty())
            return false;
        // Ports 0/1 carry the controller connectors, 2/3 the memory card slots.
        const int slot = port & 1;
        switch (cmd[0])
        {
        case kDevPad:
            return port < 2 && padCommand(slot, cmd, reply);
        case kDevMemcard:
            return cardCommand(slot, cmd, reply);
        case kDevMultitap:
        case kDevInfrared:
        default:
            return false;
        }
    }

    bool IopSio2::padCommand(int port, const std::vector<uint8_t> &cmd, std::vector<uint8_t> &reply)
    {
        uint8_t host[32];
        std::memset(host, 0, sizeof(host));
        if (!m_padReader || !m_padReader(port, host))
            return false;

        PadState &pad = m_pads[static_cast<size_t>(port)];
        const uint8_t command = cmd.size() > 1 ? cmd[1] : 0u;
        auto arg = [&cmd](size_t i) -> uint8_t
        { return i + 3u < cmd.size() ? cmd[i + 3u] : 0u; };

        const bool inConfig = pad.config;
        reply.push_back(0xFFu);
        reply.push_back(inConfig ? 0xF3u : pad.mode);
        reply.push_back(0x5Au);

        auto pushData = [&]()
        {
            reply.push_back(host[2]);
            reply.push_back(host[3]);
            if (inConfig)
            {
                // Config mode (0xF3) reports three halfwords: buttons plus the right stick.
                reply.push_back(host[4]);
                reply.push_back(host[5]);
                reply.push_back(host[6]);
                reply.push_back(host[7]);
                return;
            }
            if (pad.mode == 0x41u)
                return;
            reply.push_back(host[4]);
            reply.push_back(host[5]);
            reply.push_back(host[6]);
            reply.push_back(host[7]);
            if (pad.mode != 0x79u)
                return;
            // Pressure bytes: right, left, up, down, triangle, circle, cross, square, L1, R1, L2, R2.
            const uint16_t buttons = static_cast<uint16_t>(host[2] | (host[3] << 8));
            static constexpr uint16_t kOrder[12] = {0x0020u, 0x0080u, 0x0010u, 0x0040u, 0x1000u, 0x2000u,
                                                    0x4000u, 0x8000u, 0x0400u, 0x0800u, 0x0100u, 0x0200u};
            for (int i = 0; i < 12; ++i)
            {
                const bool enabled = (pad.pressureMask >> (i + 6)) & 1u;
                reply.push_back((enabled && (buttons & kOrder[i]) == 0u) ? 0xFFu : 0x00u);
            }
        };
        auto pushConfig = [&](std::initializer_list<uint8_t> bytes)
        {
            reply.insert(reply.end(), bytes.begin(), bytes.end());
        };

        switch (command)
        {
        case 0x40: // set VREF parameter
            pushConfig({0x00, 0x00, 0x02, 0x00, 0x00, 0x5A});
            break;
        case 0x41: // query button mask
            if (pad.mode == 0x41u && !inConfig)
                pushConfig({0x00, 0x00, 0x00, 0x00, 0x00, 0x00});
            else
                pushConfig({0xFF, 0xFF, 0x03, 0x00, 0x00, 0x5A});
            break;
        case 0x42: // read data (answered in config mode too)
            pushData();
            break;
        case 0x43: // enter/exit config
            if (inConfig)
                pushConfig({0x00, 0x00, 0x00, 0x00, 0x00, 0x00});
            else
                pushData();
            pad.config = arg(0) == 0x01u;
            break;
        case 0x44: // set main mode (config only)
            if (inConfig)
            {
                pad.mode = arg(0) == 0x01u ? 0x73u : 0x41u;
                pad.modeLocked = arg(1) == 0x03u;
            }
            pushConfig({0x00, 0x00, 0x00, 0x00, 0x00, 0x00});
            break;
        case 0x45: // query model and mode
            pushConfig({0x03, 0x02, static_cast<uint8_t>(pad.mode == 0x41u ? 0x00u : 0x01u), 0x02, 0x01, 0x00});
            break;
        case 0x46: // query act
            if (arg(0) == 0x00u)
                pushConfig({0x00, 0x00, 0x01, 0x02, 0x00, 0x0A});
            else
                pushConfig({0x00, 0x00, 0x01, 0x01, 0x01, 0x14});
            break;
        case 0x47: // query comb
            pushConfig({0x00, 0x00, 0x02, 0x00, 0x01, 0x00});
            break;
        case 0x4C: // query mode
            if (arg(0) == 0x00u)
                pushConfig({0x00, 0x00, 0x00, 0x04, 0x00, 0x00});
            else
                pushConfig({0x00, 0x00, 0x00, 0x07, 0x00, 0x00});
            break;
        case 0x4D: // vibration mapping
            for (size_t i = 0; i < pad.vibrationMap.size(); ++i)
            {
                reply.push_back(pad.vibrationMap[i]);
                pad.vibrationMap[i] = arg(i);
            }
            break;
        case 0x4F: // set DS2 native mode (pressure buttons)
            if (inConfig)
            {
                pad.mode = 0x79u;
                pad.pressureMask = static_cast<uint32_t>(arg(0)) | (static_cast<uint32_t>(arg(1)) << 8u) |
                                   (static_cast<uint32_t>(arg(2) & 0x03u) << 16u);
            }
            pushConfig({0x00, 0x00, 0x00, 0x00, 0x00, 0x5A});
            break;
        default:
            pushConfig({0x00, 0x00, 0x00, 0x00, 0x00, 0x00});
            break;
        }
        return true;
    }

    bool IopSio2::ensureCard(int port)
    {
        Card &card = m_cards[static_cast<size_t>(port)];
        if (card.loaded)
            return !card.image.empty();
        card.loaded = true;
        card.term = kCardDefaultTerm;
        card.path = m_cardPath ? m_cardPath(port) : std::string{};
        if (card.path.empty())
            return false;

        const size_t size = static_cast<size_t>(kCardPageRaw) * kCardPages;
        card.image.assign(size, 0xFFu); // erased flash = unformatted card
        std::error_code ec;
        const std::filesystem::path path{card.path};
        if (std::filesystem::exists(path, ec))
        {
            std::ifstream in(path, std::ios::binary);
            in.read(reinterpret_cast<char *>(card.image.data()), static_cast<std::streamsize>(size));
        }
        else
        {
            // A new card comes formatted (PS2X_MEMCARD_UNFORMATTED=1: erased, for the game to format).
            if (!std::getenv("PS2X_MEMCARD_UNFORMATTED"))
                formatCard(card.image);
            std::filesystem::create_directories(path.parent_path(), ec);
            {
                std::ofstream out(path, std::ios::binary | std::ios::trunc);
                out.write(reinterpret_cast<const char *>(card.image.data()), static_cast<std::streamsize>(card.image.size()));
            }
            card.dirty = false;
        }
        return true;
    }

    void IopSio2::markDirty(Card &card, size_t from, size_t to)
    {
        if (!card.dirty)
        {
            card.dirtyFrom = from;
            card.dirtyTo = to;
        }
        else
        {
            card.dirtyFrom = std::min(card.dirtyFrom, from);
            card.dirtyTo = std::max(card.dirtyTo, to);
        }
        card.dirty = true;
    }

    void IopSio2::flushCard(int port)
    {
        Card &card = m_cards[static_cast<size_t>(port)];
        if (!card.dirty || card.path.empty() || card.image.empty())
            return;
        // Only the bytes that changed: the whole 8.6 MB image after every page made a save stutter and a format
        // (a thousand erased blocks) take minutes.
        const size_t from = std::min(card.dirtyFrom, card.image.size()), to = std::min(card.dirtyTo, card.image.size());
        std::fstream out(card.path, std::ios::binary | std::ios::in | std::ios::out);
        if (!out)
        {
            std::ofstream whole(card.path, std::ios::binary | std::ios::trunc);
            whole.write(reinterpret_cast<const char *>(card.image.data()), static_cast<std::streamsize>(card.image.size()));
        }
        else if (to > from)
        {
            out.seekp(static_cast<std::streamoff>(from));
            out.write(reinterpret_cast<const char *>(card.image.data() + from), static_cast<std::streamsize>(to - from));
        }
        card.dirty = false;
        card.dirtyFrom = card.dirtyTo = 0;
    }

    bool IopSio2::cardCommand(int port, const std::vector<uint8_t> &cmd, std::vector<uint8_t> &reply)
    {
        if (!ensureCard(port))
            return false;
        Card &card = m_cards[static_cast<size_t>(port)];
        size_t pos = 2u;
        auto next = [&cmd, &pos]() -> uint8_t
        { return pos < cmd.size() ? cmd[pos++] : 0u; };
        // Zero-pads up to `length - 2` and ends with 0x2B + terminator (the common reply shape).
        auto terminate = [&reply, &card](size_t length)
        {
            while (reply.size() + 2u < length)
                reply.push_back(0x00u);
            reply.push_back(0x2Bu);
            reply.push_back(card.term);
        };

        reply.push_back(0xFFu); // reply to the 0x81 device byte
        reply.push_back(0xFFu); // reply to the command byte
        const uint8_t command = cmd.size() > 1 ? cmd[1] : 0u;
        switch (command)
        {
        case 0x11: // probe
        case 0x12: // write/delete end
        case 0x81: // read/write end
            terminate(4);
            break;
        case 0x21: // set erase sector
        case 0x22: // set write sector
        case 0x23: // set read sector
        {
            const uint32_t b0 = next(), b1 = next(), b2 = next(), b3 = next();
            (void)next(); // checksum (b0^b1^b2^b3)
            card.sector = b0 | (b1 << 8u) | (b2 << 16u) | (b3 << 24u);
            card.offset = 0u;
            terminate(9);
            break;
        }
        case 0x26: // get specs
        {
            const uint8_t spec[8] = {
                static_cast<uint8_t>(kCardPageData & 0xFFu), static_cast<uint8_t>(kCardPageData >> 8u),
                static_cast<uint8_t>(kCardEraseBlock & 0xFFu), static_cast<uint8_t>(kCardEraseBlock >> 8u),
                static_cast<uint8_t>(kCardPages & 0xFFu), static_cast<uint8_t>((kCardPages >> 8u) & 0xFFu),
                static_cast<uint8_t>((kCardPages >> 16u) & 0xFFu), static_cast<uint8_t>(kCardPages >> 24u)};
            uint8_t checksum = 0u;
            reply.push_back(0x2Bu);
            for (uint8_t b : spec)
            {
                checksum ^= b;
                reply.push_back(b);
            }
            reply.push_back(checksum);
            reply.push_back(card.term);
            break;
        }
        case 0x27: // set terminator
        {
            const uint8_t old = card.term;
            card.term = next();
            reply.push_back(0x00u);
            reply.push_back(0x2Bu);
            reply.push_back(old);
            break;
        }
        case 0x28: // get terminator
            reply.push_back(0x2Bu);
            reply.push_back(card.term);
            reply.push_back(kCardDefaultTerm);
            break;
        case 0x42: // write data
        {
            const uint8_t length = next();
            reply.push_back(0x00u);
            reply.push_back(0x2Bu);
            uint8_t checksum = 0u;
            const size_t base = static_cast<size_t>(card.sector) * kCardPageRaw + card.offset;
            for (uint32_t i = 0; i < length; ++i)
            {
                const uint8_t b = next();
                checksum ^= b;
                // NAND programming can only clear bits.
                if (card.sector < kCardPages && base + i < card.image.size())
                    card.image[base + i] &= b;
                reply.push_back(0x00u);
            }
            card.offset += length;
            markDirty(card, base, base + length);
            reply.push_back(checksum);
            reply.push_back(card.term);
            break;
        }
        case 0x43: // read data
        {
            const uint8_t length = next();
            reply.push_back(0x00u);
            reply.push_back(0x2Bu);
            uint8_t checksum = 0u;
            const size_t base = static_cast<size_t>(card.sector) * kCardPageRaw + card.offset;
            for (uint32_t i = 0; i < length; ++i)
            {
                const uint8_t b = (card.sector < kCardPages && base + i < card.image.size()) ? card.image[base + i] : 0xFFu;
                checksum ^= b;
                reply.push_back(b);
            }
            card.offset += length;
            reply.push_back(checksum);
            reply.push_back(card.term);
            break;
        }
        case 0x82: // erase block
        {
            const uint32_t first = card.sector & ~(kCardEraseBlock - 1u);
            if (first < kCardPages)
            {
                std::fill_n(card.image.begin() + static_cast<std::ptrdiff_t>(first) * kCardPageRaw,
                            static_cast<size_t>(kCardEraseBlock) * kCardPageRaw, uint8_t{0xFFu});
                markDirty(card, static_cast<size_t>(first) * kCardPageRaw, static_cast<size_t>(first + kCardEraseBlock) * kCardPageRaw);
            }
            terminate(4);
            break;
        }
        case 0xBF: // boot-time query
            terminate(5);
            break;
        case 0xF0: // authentication (xor exchanges)
        case 0xF1:
        case 0xF2:
        {
            const uint8_t mode = next();
            switch (mode)
            {
            case 0x01: case 0x02: case 0x04: case 0x0F: case 0x11: case 0x13:
            {
                reply.push_back(0x00u);
                reply.push_back(0x2Bu);
                uint8_t x = 0u;
                for (int i = 0; i < 8; ++i)
                {
                    x ^= next();
                    reply.push_back(0x00u);
                }
                reply.push_back(x);
                reply.push_back(card.term);
                break;
            }
            case 0x06: case 0x07: case 0x0B:
                terminate(14);
                break;
            default:
                terminate(5);
                break;
            }
            break;
        }
        case 0xF3:
        case 0xF7:
            terminate(5);
            break;
        default:
            if (traceEnabled())
                std::fprintf(stderr, "[sio2] unknown memcard command 0x%02x\n", command);
            terminate(4);
            break;
        }

        // Commit finished writes so a crash never loses a completed save.
        if (command == 0x81 || command == 0x12 || command == 0x82)
            flushCard(port);
        return true;
    }
}
