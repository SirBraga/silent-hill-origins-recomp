// Based on Blackline Interactive implementation
#include <map>
#include <string>
#include "runtime/ps2_memory.h"
#include <cstring>
#include <cstdio>
#include <cstdlib>

extern thread_local bool g_ps2xPath3ReleaseOnePacket;
void ps2xOrderTrace(char kind, uint32_t value);
void ps2xPath3GateNoteUnmask();

enum VIFCmd : uint8_t
{
    VIF_NOP = 0x00,
    VIF_STCYCL = 0x01,
    VIF_OFFSET = 0x02,
    VIF_BASE = 0x03,
    VIF_ITOP = 0x04,
    VIF_STMOD = 0x05,
    VIF_MSKPATH3 = 0x06,
    VIF_MARK = 0x07,
    VIF_FLUSHE = 0x10,
    VIF_FLUSH = 0x11,
    VIF_FLUSHA = 0x13,
    VIF_MSCAL = 0x14,
    VIF_MSCALF = 0x15,
    VIF_MSCNT = 0x17,
    VIF_STMASK = 0x20,
    VIF_STROW = 0x30,
    VIF_STCOL = 0x31,
    VIF_MPG = 0x4A,
    VIF_DIRECT = 0x50,
    VIF_DIRECTHL = 0x51,
};

namespace
{
    constexpr uint8_t kGifFmtImage = 2u;

    uint32_t pendingGifImageQwc(const uint8_t *data, uint32_t sizeBytes)
    {
        if (!data || sizeBytes < 16u)
            return 0u;

        uint32_t offset = 0u;
        while (offset + 16u <= sizeBytes)
        {
            uint64_t tagLo = 0u;
            std::memcpy(&tagLo, data + offset, sizeof(tagLo));
            offset += 16u;

            const uint32_t nloop = static_cast<uint32_t>(tagLo & 0x7FFFu);
            const uint8_t flg = static_cast<uint8_t>((tagLo >> 58) & 0x3u);
            uint32_t nreg = static_cast<uint32_t>((tagLo >> 60) & 0xFu);
            if (nreg == 0u)
                nreg = 16u;

            uint64_t payloadBytes = 0u;
            if (flg == 0u) // PACKED
            {
                payloadBytes = static_cast<uint64_t>(nloop) * nreg * 16ull;
            }
            else if (flg == 1u) // REGLIST, padded to a quadword
            {
                payloadBytes = static_cast<uint64_t>(nloop) * nreg * 8ull;
                payloadBytes = (payloadBytes + 15ull) & ~15ull;
            }
            else if (flg == kGifFmtImage || flg == 3u) // IMAGE2
            {
                payloadBytes = static_cast<uint64_t>(nloop) * 16ull;
                const uint64_t availableBytes = sizeBytes - offset;
                if (payloadBytes > availableBytes)
                {
                    return static_cast<uint32_t>((payloadBytes - availableBytes) / 16ull);
                }
            }
            else
            {
                return 0u;
            }

            if (payloadBytes > static_cast<uint64_t>(sizeBytes - offset))
                return 0u;
            offset += static_cast<uint32_t>(payloadBytes);
        }

        return 0u;
    }
}

void PS2Memory::processVIF0Data(uint32_t srcPhys, uint32_t sizeBytes)
{
    if (sizeBytes == 0u || srcPhys >= PS2_RAM_SIZE)
        return;

    const uint64_t requestedEnd = static_cast<uint64_t>(srcPhys) + static_cast<uint64_t>(sizeBytes);
    if (requestedEnd > static_cast<uint64_t>(PS2_RAM_SIZE))
        sizeBytes = PS2_RAM_SIZE - srcPhys;

    processVIF0Data(m_rdram + srcPhys, sizeBytes);
}

void PS2Memory::processVIF0Data(const uint8_t *data, uint32_t sizeBytes)
{
    if (sizeBytes == 0u)
        return;

    uint32_t pos = 0;
    while (pos + 4 <= sizeBytes)
    {
        uint32_t cmd = 0u;
        std::memcpy(&cmd, data + pos, sizeof(cmd));
        pos += 4u;

        const uint8_t opcode = static_cast<uint8_t>((cmd >> 24) & 0x7Fu);
        const uint16_t imm = static_cast<uint16_t>(cmd & 0xFFFFu);
        const uint8_t num = static_cast<uint8_t>((cmd >> 16) & 0xFFu);
        const bool irq = (cmd & 0x80000000u) != 0u;

        vif0_regs.code = cmd;
        vif0_regs.num = num;
        if (irq)
            vif0_regs.stat |= (1u << 11);

        if (opcode == VIF_NOP)
        {
            continue;
        }
        else if (opcode == VIF_STCYCL)
        {
            vif0_regs.cycle = imm;
            continue;
        }
        else if (opcode == VIF_ITOP)
        {
            vif0_regs.itops = imm & 0x3FFu;
            continue;
        }
        else if (opcode == VIF_STMOD)
        {
            vif0_regs.mode = imm & 3u;
            continue;
        }
        else if (opcode == VIF_MARK)
        {
            vif0_regs.mark = imm;
            vif0_regs.stat |= (1u << 6);
            continue;
        }
        else if (opcode == VIF_FLUSHE || opcode == VIF_FLUSH || opcode == VIF_FLUSHA)
        {
            continue;
        }
        else if (opcode == VIF_STMASK)
        {
            if (pos + 4u > sizeBytes)
                break;
            std::memcpy(&vif0_regs.mask, data + pos, sizeof(vif0_regs.mask));
            pos += 4u;
            continue;
        }
        else if (opcode == VIF_STROW)
        {
            if (pos + 16u > sizeBytes)
                break;
            std::memcpy(vif0_regs.row, data + pos, 16u);
            pos += 16u;
            continue;
        }
        else if (opcode == VIF_STCOL)
        {
            if (pos + 16u > sizeBytes)
                break;
            std::memcpy(vif0_regs.col, data + pos, 16u);
            pos += 16u;
            continue;
        }
        else if (opcode == VIF_MPG)
        {
            const uint32_t destAddr = static_cast<uint32_t>(imm & 0x1FFu) * 8u;
            const uint32_t instructionCount = (num == 0u) ? 256u : static_cast<uint32_t>(num);
            const uint32_t mpgBytes = instructionCount * 8u;
            uint32_t copyBytes = 0u;
            if (m_vu0Code && destAddr < PS2_VU0_CODE_SIZE && mpgBytes > 0u)
            {
                copyBytes = mpgBytes;
                if (destAddr + copyBytes > PS2_VU0_CODE_SIZE)
                    copyBytes = PS2_VU0_CODE_SIZE - destAddr;
                if (pos + copyBytes <= sizeBytes)
                {
                    std::memcpy(m_vu0Code + destAddr, data + pos, copyBytes);
                    markVU0CodeModified();
                }
            }

            pos += mpgBytes;
            if (pos > sizeBytes)
                break;
            continue;
        }
        else if ((opcode & 0x60u) == 0x60u)
        {
            const uint8_t vn = static_cast<uint8_t>((opcode >> 2) & 0x3u);
            const uint8_t vl = static_cast<uint8_t>(opcode & 0x3u);
            const int components = static_cast<int>(vn) + 1;
            int bitsPerComponent = 32;
            switch (vl)
            {
            case 0:
                bitsPerComponent = 32;
                break;
            case 1:
                bitsPerComponent = 16;
                break;
            case 2:
                bitsPerComponent = 8;
                break;
            case 3:
                bitsPerComponent = (vn == 3u) ? 4 : 16;
                break;
            default:
                break;
            }
            const int bitsPerVector = (vl == 3u && vn == 3u) ? 16 : (components * bitsPerComponent);
            uint32_t bytesPerVector = static_cast<uint32_t>((bitsPerVector + 7) / 8);
            const uint32_t writeVectorCount = (num == 0u) ? 256u : static_cast<uint32_t>(num);
            uint32_t cl = vif0_regs.cycle & 0xFFu;
            uint32_t wl = (vif0_regs.cycle >> 8) & 0xFFu;
            if (cl == 0u)
                cl = 1u;
            if (wl == 0u)
                wl = 1u;
            uint32_t sourceVectorCount = writeVectorCount;
            if (cl < wl)
            {
                const uint32_t fullBlocks = writeVectorCount / wl;
                uint32_t remainder = writeVectorCount % wl;
                if (remainder > cl)
                    remainder = cl;
                sourceVectorCount = fullBlocks * cl + remainder;
            }
            uint32_t totalBytes = sourceVectorCount * bytesPerVector;
            totalBytes = (totalBytes + 3u) & ~3u;

            if (m_vu0Data && pos + totalBytes <= sizeBytes && vl == 0u)
            {
                uint32_t vuAddr = static_cast<uint32_t>(imm & 0x3FFu);
                if ((imm & 0x8000u) != 0u)
                    vuAddr = (vuAddr + (vif0_regs.tops & 0x3FFu)) & 0x3FFu;
                const uint8_t *srcBase = data + pos;
                uint32_t srcIndex = 0u;
                for (uint32_t writeIndex = 0; writeIndex < writeVectorCount; ++writeIndex)
                {
                    const uint32_t cyclePos = writeIndex % wl;
                    const bool sourceAvailable = (cl >= wl) || (cyclePos < cl);
                    uint32_t destVec = (cl >= wl) ? ((vuAddr + (writeIndex / wl) * cl + cyclePos) & 0x3FFu)
                                                  : ((vuAddr + writeIndex) & 0x3FFu);
                    const uint32_t destOff = destVec * 16u;
                    if (destOff + 16u > PS2_VU0_DATA_SIZE)
                    {
                        if (sourceAvailable && srcIndex < sourceVectorCount)
                            ++srcIndex;
                        continue;
                    }
                    if (!sourceAvailable || srcIndex >= sourceVectorCount)
                        continue;
                    const uint8_t *srcVec = srcBase + srcIndex * bytesPerVector;
                    ++srcIndex;
                    uint32_t lanes[4] = {0u, 0u, 0u, 0u};
                    std::memcpy(lanes, m_vu0Data + destOff, sizeof(lanes));
                    const uint32_t limit = (components > 4) ? 4u : static_cast<uint32_t>(components);
                    for (uint32_t c = 0; c < limit; ++c)
                    {
                        uint32_t scalar = 0u;
                        std::memcpy(&scalar, srcVec + c * 4u, sizeof(scalar));
                        lanes[c] = scalar;
                    }
                    _mm_storeu_si128(reinterpret_cast<__m128i *>(m_vu0Data + destOff), _mm_loadu_si128(reinterpret_cast<const __m128i *>(lanes)));
                }
            }
            pos += totalBytes;
            if (pos > sizeBytes)
                break;
            continue;
        }
        else
        {
            break;
        }
    }
}

void PS2Memory::processVIF1Data(uint32_t srcPhys, uint32_t sizeBytes)
{
    if (sizeBytes == 0u || srcPhys >= PS2_RAM_SIZE)
        return;

    const uint64_t requestedEnd = static_cast<uint64_t>(srcPhys) + static_cast<uint64_t>(sizeBytes);
    if (requestedEnd > static_cast<uint64_t>(PS2_RAM_SIZE))
        sizeBytes = PS2_RAM_SIZE - srcPhys;

    processVIF1Data(m_rdram + srcPhys, sizeBytes);
}

// DIRECT/DIRECTHL payload bytes go to GIF PATH2. A GIF IMAGE whose data did not fit in an
// earlier DIRECT continues in the next DIRECT payload (GIF path state persists across VIF
// commands), but the VIFcodes between the two payloads are never part of the image.
void PS2Memory::feedVif1DirectPayload(const uint8_t *data, uint32_t qwCount, bool directHl)
{
    if (m_vif1PendingPath2ImageQwc != 0u)
    {
        const uint32_t chunkQw = std::min<uint32_t>(m_vif1PendingPath2ImageQwc, qwCount);
        std::vector<uint8_t> imagePacket(16u + static_cast<size_t>(chunkQw) * 16u, 0u);
        const uint64_t imageTag =
            static_cast<uint64_t>(chunkQw & 0x7FFFu) |
            ((m_vif1PendingPath2ImageQwc == chunkQw) ? (1ull << 15) : 0ull) |
            (static_cast<uint64_t>(kGifFmtImage) << 58);
        std::memcpy(imagePacket.data(), &imageTag, sizeof(imageTag));
        std::memcpy(imagePacket.data() + 16u, data, static_cast<size_t>(chunkQw) * 16u);
        submitGifPacket(GifPathId::Path2, imagePacket.data(), static_cast<uint32_t>(imagePacket.size()), true,
                        m_vif1PendingPath2DirectHl, true);
        m_vif1PendingPath2ImageQwc -= chunkQw;
        data += chunkQw * 16u;
        qwCount -= chunkQw;
    }
    if (qwCount == 0u)
        return;
    submitGifPacket(GifPathId::Path2, data, qwCount * 16u, true, directHl);
    const uint32_t pendingImageQw = pendingGifImageQwc(data, qwCount * 16u);
    if (pendingImageQw != 0u)
    {
        m_vif1PendingPath2ImageQwc = pendingImageQw;
        m_vif1PendingPath2DirectHl = directHl;
    }
}

void PS2Memory::processVIF1Data(const uint8_t *data, uint32_t sizeBytes)
{
    (void)processVIF1DataPrefix(data, sizeBytes, UINT32_MAX);
}

namespace
{
    // Fast UNPACK body (see processVIF1DataPrefix): `count` vectors of `components` elements of the width
    // given by vl (0: 32 bits, 1: 16, 2: 8; 3: the 5-5-5-1 colour format), every lane taken from the source.
    // Always inlined into vifUnpackFastDispatch() with literal format arguments, so each format gets its
    // own loop without per-vector decisions.
    // mode 1 adds the ROW registers to every vector, mode 2 also leaves the sum in them (not for 5-5-5-1).
    inline __attribute__((always_inline)) void vifUnpackFast(uint8_t *dst, const uint8_t *src, uint32_t count, const uint32_t vl,
                                                               const uint32_t components, const bool zeroExtend, const uint8_t *end,
                                                               const uint32_t mode, uint32_t *row, const uint32_t stride)
    {
        const bool addRow = mode != 0u && vl != 3u;
        if (vl == 0u && components == 4u && !addRow && stride == 1u)
        {
            std::memcpy(dst, src, count * 16u);
            return;
        }
        const uint32_t elementBytes = vl == 0u ? 4u : (vl == 1u ? 2u : 1u);
        const uint32_t vectorBytes = vl == 3u ? 2u : elementBytes * components;
        const auto element = [vl, zeroExtend](const uint8_t *p) -> uint32_t
        {
            if (vl == 0u)
            {
                uint32_t value;
                std::memcpy(&value, p, 4);
                return value;
            }
            if (vl == 1u)
            {
                uint16_t value;
                std::memcpy(&value, p, 2);
                return zeroExtend ? value : static_cast<uint32_t>(static_cast<int32_t>(static_cast<int16_t>(value)));
            }
            return zeroExtend ? *p : static_cast<uint32_t>(static_cast<int32_t>(static_cast<int8_t>(*p)));
        };
        for (uint32_t index = 0; index < count; ++index, src += vectorBytes, dst += 16u * stride)
        {
            uint32_t out[4];
            if (vl == 3u) // V4-5
            {
                uint16_t packed;
                std::memcpy(&packed, src, 2);
                out[0] = (packed & 0x1Fu) << 3;
                out[1] = ((packed >> 5) & 0x1Fu) << 3;
                out[2] = ((packed >> 10) & 0x1Fu) << 3;
                out[3] = ((packed >> 15) & 0x01u) << 7;
            }
            else if (components == 4u)
            {
                out[0] = element(src);
                out[1] = element(src + elementBytes);
                out[2] = element(src + 2u * elementBytes);
                out[3] = element(src + 3u * elementBytes);
            }
            else if (components == 3u)
            {
                out[0] = element(src);
                out[1] = element(src + elementBytes);
                out[2] = element(src + 2u * elementBytes);
                const uint8_t *wSrc = src + 3u * elementBytes; // W: the next element, 0 at a 16-byte boundary
                out[3] = ((reinterpret_cast<uintptr_t>(wSrc) & 15u) != 0u && wSrc + elementBytes <= end) ? element(wSrc) : 0u;
            }
            else if (components == 2u)
            {
                out[0] = out[2] = element(src);
                out[1] = out[3] = element(src + elementBytes);
            }
            else
                out[0] = out[1] = out[2] = out[3] = element(src);
            if (addRow)
            {
                for (uint32_t field = 0; field < 4u; ++field)
                    out[field] += row[field];
                if (mode == 2u)
                    std::memcpy(row, out, 16);
            }
            std::memcpy(dst, out, 16);
        }
    }

    void vifUnpackFastDispatch(uint8_t *dst, const uint8_t *src, uint32_t count, uint32_t vl, uint32_t components, bool zeroExtend,
                               const uint8_t *end, uint32_t mode, uint32_t *row, uint32_t stride)
    {
#define VIF_UNPACK_CASE(VL, N) \
        case (VL) * 4u + (N) - 1u: \
            if (mode == 0u) { if (zeroExtend) vifUnpackFast(dst, src, count, VL, N, true, end, 0u, row, stride); else vifUnpackFast(dst, src, count, VL, N, false, end, 0u, row, stride); } \
            else if (mode == 1u) { if (zeroExtend) vifUnpackFast(dst, src, count, VL, N, true, end, 1u, row, stride); else vifUnpackFast(dst, src, count, VL, N, false, end, 1u, row, stride); } \
            else { if (zeroExtend) vifUnpackFast(dst, src, count, VL, N, true, end, 2u, row, stride); else vifUnpackFast(dst, src, count, VL, N, false, end, 2u, row, stride); } \
            return;
        switch (vl * 4u + components - 1u)
        {
        VIF_UNPACK_CASE(0u, 1u) VIF_UNPACK_CASE(0u, 2u) VIF_UNPACK_CASE(0u, 3u) VIF_UNPACK_CASE(0u, 4u)
        VIF_UNPACK_CASE(1u, 1u) VIF_UNPACK_CASE(1u, 2u) VIF_UNPACK_CASE(1u, 3u) VIF_UNPACK_CASE(1u, 4u)
        VIF_UNPACK_CASE(2u, 1u) VIF_UNPACK_CASE(2u, 2u) VIF_UNPACK_CASE(2u, 3u) VIF_UNPACK_CASE(2u, 4u)
        VIF_UNPACK_CASE(3u, 4u)
        default:
            return;
        }
#undef VIF_UNPACK_CASE
    }
}


uint32_t PS2Memory::processVIF1DataPrefix(const uint8_t *data, uint32_t sizeBytes, uint32_t maxCommands)
{
    if (sizeBytes == 0u)
        return 0u;

    uint32_t pos = 0;
    uint32_t commands = 0;

    while (pos + 4 <= sizeBytes && commands < maxCommands)
    {
        if (m_vif1PendingDirectQw != 0u)
        {
            // Rest of a DIRECT payload that was split across VIF1 DMA chunks.
            const uint32_t availableQw = (sizeBytes - pos) / 16u;
            if (availableQw == 0u)
                break;
            const uint32_t chunkQw = std::min<uint32_t>(m_vif1PendingDirectQw, availableQw);
            feedVif1DirectPayload(data + pos, chunkQw, m_vif1PendingPath2DirectHl);
            pos += chunkQw * 16u;
            m_vif1PendingDirectQw -= chunkQw;
            continue;
        }

        uint32_t cmd;
        memcpy(&cmd, data + pos, 4);
        pos += 4;
        ++commands;

        uint8_t opcode = (cmd >> 24) & 0x7F;
        {
            // PS2X_VIF_TRACE: histograma de VIFcodes, impresso a cada 4096 comandos.
            static const bool s_trace = std::getenv("PS2X_VIF_TRACE") != nullptr;
            static unsigned s_hist[128] = {};
            static unsigned s_total = 0;
            if (s_trace)
            {
                ++s_hist[opcode];
                if ((++s_total % 4096u) == 0u)
                {
                    std::fprintf(stderr, "[vif1] %u cmds:", s_total);
                    for (unsigned op = 0; op < 128; ++op)
                        if (s_hist[op])
                            std::fprintf(stderr, " %02x=%u", op, s_hist[op]);
                    std::fprintf(stderr, "\n");
                }
            }
        }
        uint16_t imm = cmd & 0xFFFF;
        uint8_t num = (cmd >> 16) & 0xFF;
        const bool irq = (cmd & 0x80000000u) != 0u;

        // Track most-recent command for VIFn_CODE emulation.
        vif1_regs.code = cmd;
        vif1_regs.num = num;
        if (irq)
            vif1_regs.stat |= (1u << 11); // INT

        if (opcode == VIF_NOP)
        {
            continue;
        }
        else if (opcode == VIF_STCYCL)
        {
            vif1_regs.cycle = imm;
            continue;
        }
        else if (opcode == VIF_OFFSET)
        {
            // VIF double-buffer setup. OFFSET clears DBF and resets TOPS to BASE.
            // Do not rewrite BASE from the previous TOPS value.
            vif1_regs.ofst = imm & 0x3FFu;
            vif1_regs.tops = vif1_regs.base & 0x3FFu;
            vif1_regs.stat &= ~(1u << 7); // clear DBF
            continue;
        }
        else if (opcode == VIF_BASE)
        {
            // BASE only updates the base register. TOPS changes on OFFSET/MSCAL.
            vif1_regs.base = imm & 0x3FFu;
            continue;
        }
        else if (opcode == VIF_ITOP)
        {
            // ITOP VIFcode writes pending ITOPS; VU XITOP observes it after MSCAL/MSCNT.
            vif1_regs.itops = imm & 0x3FFu;
            continue;
        }
        else if (opcode == VIF_STMOD)
        {
            vif1_regs.mode = imm & 3u;
            continue;
        }
        else if (opcode == VIF_MSKPATH3)
        {
            // VIF command docs: MSKPATH3 uses IMMEDIATE bit 15.
            const bool wasMasked = m_path3Masked;
            m_path3Masked = (imm & 0x8000u) != 0u;
            if (!wasMasked && m_path3Masked)
                ps2xOrderTrace('M', static_cast<uint32_t>(m_path3MaskedFifo.size()));
            if (wasMasked && !m_path3Masked)
            {
                // Releases one PATH3 packet (everything with PS2X_PATH3_EOP_GATE=0).
                ps2xOrderTrace('W', static_cast<uint32_t>(m_path3MaskedFifo.size()));
                ps2xPath3GateNoteUnmask();
                g_ps2xPath3ReleaseOnePacket = true;
                flushMaskedPath3Packets();
                g_ps2xPath3ReleaseOnePacket = false;
            }
            continue;
        }
        else if (opcode == VIF_MARK)
        {
            vif1_regs.mark = imm;
            vif1_regs.stat |= (1u << 6); // MRK
            continue;
        }
        else if (opcode == VIF_FLUSHE || opcode == VIF_FLUSH || opcode == VIF_FLUSHA)
        {
            if (opcode == VIF_FLUSHA)
                ps2xOrderTrace('A', static_cast<uint32_t>(m_path3MaskedFifo.size() * 2u + (m_path3Masked ? 1u : 0u)));
            continue;
        }
        else if (opcode == VIF_MSCAL || opcode == VIF_MSCALF)
        {
            uint32_t startPC = (uint32_t)imm * 8u;

            const uint32_t runTop = vif1_regs.tops & 0x3FFu;
            const uint32_t runItop = vif1_regs.itops & 0x3FFu;
            vif1_regs.top = runTop;
            vif1_regs.itop = runItop;

            const bool dbf = (vif1_regs.stat & (1u << 7)) != 0u;
            if (dbf)
                vif1_regs.tops = vif1_regs.base & 0x3FFu;
            else
                vif1_regs.tops = (vif1_regs.base + vif1_regs.ofst) & 0x3FFu;
            vif1_regs.stat ^= (1u << 7); // toggle DBF

            if (m_vu1MscalCallback)
                m_vu1MscalCallback(startPC, runTop, runItop);
            if (maxCommands != UINT32_MAX) return pos;
            continue;
        }
        else if (opcode == VIF_MSCNT)
        {
            const uint32_t runTop = vif1_regs.tops & 0x3FFu;
            const uint32_t runItop = vif1_regs.itops & 0x3FFu;
            vif1_regs.top = runTop;
            vif1_regs.itop = runItop;

            const bool dbf = (vif1_regs.stat & (1u << 7)) != 0u;
            if (dbf)
                vif1_regs.tops = vif1_regs.base & 0x3FFu;
            else
                vif1_regs.tops = (vif1_regs.base + vif1_regs.ofst) & 0x3FFu;
            vif1_regs.stat ^= (1u << 7); // toggle DBF

            if (m_vu1MscntCallback)
                m_vu1MscntCallback(runTop, runItop);
            if (maxCommands != UINT32_MAX) return pos;
            continue;
        }
        else if (opcode == VIF_STMASK)
        {
            if (pos + 4 > sizeBytes)
                break;
            uint32_t maskValue = 0;
            std::memcpy(&maskValue, data + pos, sizeof(maskValue));
            vif1_regs.mask = maskValue;
            pos += 4;
            continue;
        }
        else if (opcode == VIF_STROW)
        {
            if (pos + 16 > sizeBytes)
                break;
            std::memcpy(vif1_regs.row, data + pos, 16);
            pos += 16;
            continue;
        }
        else if (opcode == VIF_STCOL)
        {
            if (pos + 16 > sizeBytes)
                break;
            std::memcpy(vif1_regs.col, data + pos, 16);
            pos += 16;
            continue;
        }
        else if (opcode == VIF_MPG)
        {
            uint32_t destAddr = (uint32_t)imm * 8u;
            const uint32_t instructionCount = (num == 0u) ? 256u : static_cast<uint32_t>(num);
            const uint32_t mpgBytes = instructionCount * 8u;
            if (m_vu1Code && destAddr < PS2_VU1_CODE_SIZE && mpgBytes > 0)
            {
                uint32_t copyBytes = mpgBytes;
                if (destAddr + copyBytes > PS2_VU1_CODE_SIZE)
                    copyBytes = PS2_VU1_CODE_SIZE - destAddr;
                if (pos + copyBytes <= sizeBytes)
                {
                    std::memcpy(m_vu1Code + destAddr, data + pos, copyBytes);
                    markVU1CodeModified();
                }
            }
            pos += mpgBytes;
            if (pos > sizeBytes)
                break;
            continue;
        }
        else if (opcode == VIF_DIRECT || opcode == VIF_DIRECTHL)
        {
            uint32_t qwCount = imm;
            if (qwCount == 0)
                qwCount = 65536;
            const uint32_t availableQw = (sizeBytes - pos) / 16u;
            const bool truncated = qwCount > availableQw;
            if (qwCount > availableQw)
                qwCount = availableQw;

            const bool directHl = (opcode == VIF_DIRECTHL);
            if (qwCount > 0)
                feedVif1DirectPayload(data + pos, qwCount, directHl);
            if (truncated)
            {
                const uint32_t requestedQw = imm == 0u ? 65536u : imm;
                m_vif1PendingDirectQw = requestedQw - qwCount;
                m_vif1PendingPath2DirectHl = directHl;
            }

            pos += qwCount * 16;
            if (truncated)
            {
                pos = sizeBytes;
                break;
            }
            continue;
        }
        else if ((opcode & 0x60) == 0x60)
        {
            // Diagnostic A/B selector; hardware rules remain the normal path.
            static const unsigned unpackFixes = [] {
                const char* mask = std::getenv("PS2X_VIF_UNPACK_FIX_MASK");
                return mask ? unsigned(std::strtoul(mask, nullptr, 0)) : 31u;
            }();
            uint8_t vn = (opcode >> 2) & 0x3;
            uint8_t vl = opcode & 0x3;
            const bool maskEnable = (opcode & 0x10u) != 0u;
            int components = vn + 1;
            int bitsPerComponent = 32;
            switch (vl)
            {
            case 0:
                bitsPerComponent = 32;
                break;
            case 1:
                bitsPerComponent = 16;
                break;
            case 2:
                bitsPerComponent = 8;
                break;
            case 3:
                bitsPerComponent = (vn == 3) ? 4 : 16;
                break;
            default:
                break;
            }
            int bitsPerVector = (vl == 3 && vn == 3) ? 16 : (components * bitsPerComponent);
            uint32_t bytesPerVector = (bitsPerVector + 7) / 8;
            // UNPACK semantics: NUM is 8-bit and NUM==0 means 256 vectors (writes).
            const uint32_t writeVectorCount = (num == 0u) ? 256u : static_cast<uint32_t>(num);

            // STCYCL controls write cycles for UNPACK.
            uint32_t cl = vif1_regs.cycle & 0xFFu;
            uint32_t wl = (vif1_regs.cycle >> 8) & 0xFFu;
            if (cl == 0u)
                cl = 1u;
            if (wl == 0u)
                wl = (unpackFixes & 8u) ? 256u : 1u;

            uint32_t sourceVectorCount = writeVectorCount;
            if (cl < wl)
            {
                const uint32_t fullBlocks = writeVectorCount / wl;
                uint32_t remainder = writeVectorCount % wl;
                if (remainder > cl)
                    remainder = cl;
                sourceVectorCount = fullBlocks * cl + remainder;
            }

            uint32_t totalBytes = sourceVectorCount * bytesPerVector;
            totalBytes = (totalBytes + 3) & ~3u;

            uint32_t vuAddr = (uint32_t)imm & 0x3FFu;
            if ((imm & 0x8000u) != 0u)
                vuAddr = (vuAddr + (vif1_regs.tops & 0x3FFu)) & 0x3FFu;

            const bool zeroExtend = (imm & 0x4000u) != 0u;

            static const bool audit = std::getenv("PS2X_VIF_UNPACK_AUDIT") != nullptr;
            if (audit)
            {
                static unsigned calls = 0, truncated = 0, modes[4] = {};
                ++calls;
                ++modes[vif1_regs.mode & 3u];
                if (pos + totalBytes > sizeBytes)
                {
                    if (++truncated <= 32u)
                        std::fprintf(stderr, "[vif-unpack-audit] TRUNC cmd=%08x pos=%u packet=%u need=%u cycle=%04x mode=%u\n", cmd, pos, sizeBytes, totalBytes, vif1_regs.cycle, vif1_regs.mode);
                }
                if ((calls & (calls - 1u)) == 0u)
                    std::fprintf(stderr, "[vif-unpack-audit] calls=%u truncated=%u modes=%u/%u/%u/%u last=%08x cycle=%04x mask=%08x row=%08x/%08x/%08x/%08x\n", calls, truncated, modes[0], modes[1], modes[2], modes[3], cmd, vif1_regs.cycle, vif1_regs.mask, vif1_regs.row[0], vif1_regs.row[1], vif1_regs.row[2], vif1_regs.row[3]);
            }

            // The common UNPACK: no mask, one vector written per vector read (possibly CL-1 vectors skipped
            // after each, WL=1), destination inside VU memory. Every lane of every vector then comes from the source alone (with the
            // hardware quirks for V2 and V3 the general loop below applies), so there is nothing to decide
            // per vector. PS2X_VIF_UNPACK_VERIFY=1 runs it on the side and compares with the general loop.
            static const bool verifyFast = std::getenv("PS2X_VIF_UNPACK_VERIFY") != nullptr;
            const bool fastUnpack = m_vu1Data && totalBytes > 0 && pos + totalBytes <= sizeBytes && !maskEnable &&
                                    (vif1_regs.mode & 3u) != 3u && (cl == wl || wl == 1u) && (vl <= 2u || vn == 3u) && unpackFixes == 31u &&
                                    vuAddr + (writeVectorCount - 1u) * (wl == 1u ? cl : 1u) + 1u <= 0x400u;
            static uint8_t verifyBuffer[0x400 * 16];
            if (fastUnpack)
            {
                const uint8_t *src = data + pos;
                const uint32_t stride = wl == 1u ? cl : 1u;
                // The verification copy starts as the memory the general loop will write over, so that the
                // skipped vectors compare equal.
                if (verifyFast)
                    std::memcpy(verifyBuffer, m_vu1Data + vuAddr * 16u, ((writeVectorCount - 1u) * stride + 1u) * 16u);
                uint8_t *dst = verifyFast ? verifyBuffer : m_vu1Data + vuAddr * 16u;
                // (With the verification on, mode 2 must not touch the real ROW registers twice.)
                uint32_t rowCopy[4] = {vif1_regs.row[0], vif1_regs.row[1], vif1_regs.row[2], vif1_regs.row[3]};
                vifUnpackFastDispatch(dst, src, writeVectorCount, vl, static_cast<uint32_t>(components), zeroExtend, data + sizeBytes,
                                      vif1_regs.mode & 3u, verifyFast ? rowCopy : vif1_regs.row, stride);
                if (!verifyFast)
                {
                    pos += totalBytes;
                    if (pos > sizeBytes)
                        break;
                    continue;
                }
            }

            if (m_vu1Data && totalBytes > 0 && pos + totalBytes <= sizeBytes)
            {
                const uint8_t *srcBase = data + pos;
                uint32_t srcIndex = 0u;
                for (uint32_t writeIndex = 0; writeIndex < writeVectorCount; ++writeIndex)
                {
                    const uint32_t cyclePos = writeIndex % wl;
                    const bool sourceAvailable = (cl >= wl) || (cyclePos < cl);

                    uint32_t destVec = 0;
                    if (cl >= wl)
                    {
                        destVec = (vuAddr + (writeIndex / wl) * cl + cyclePos) & 0x3FFu;
                    }
                    else
                    {
                        destVec = (vuAddr + writeIndex) & 0x3FFu;
                    }

                    uint32_t destOff = destVec * 16u;
                    if (destOff + 16u > PS2_VU1_DATA_SIZE)
                    {
                        if (sourceAvailable && srcIndex < sourceVectorCount)
                            ++srcIndex;
                        continue;
                    }

                    uint32_t lanes[4] = {0u, 0u, 0u, 0u};
                    std::memcpy(lanes, m_vu1Data + destOff, sizeof(lanes));
                    uint32_t decompressed[4] = {lanes[0], lanes[1], lanes[2], lanes[3]};
                    bool decoded = false;

                    const uint8_t *srcVec = nullptr;
                    if (sourceAvailable && srcIndex < sourceVectorCount)
                    {
                        srcVec = srcBase + srcIndex * bytesPerVector;
                        ++srcIndex;
                        decoded = true;
                    }

                    auto extend16 = [&](uint16_t raw) -> uint32_t
                    {
                        if (zeroExtend)
                            return static_cast<uint32_t>(raw);
                        return static_cast<uint32_t>(static_cast<int32_t>(static_cast<int16_t>(raw)));
                    };

                    auto extend8 = [&](uint8_t raw) -> uint32_t
                    {
                        if (zeroExtend)
                            return static_cast<uint32_t>(raw);
                        return static_cast<uint32_t>(static_cast<int32_t>(static_cast<int8_t>(raw)));
                    };

                    bool handledFormat = true;
                    if (!decoded)
                    {
                        handledFormat = false;
                    }
                    else if (vl == 0u)
                    {
                        if (components == 1)
                        {
                            uint32_t scalar = 0;
                            std::memcpy(&scalar, srcVec, sizeof(scalar));
                            decompressed[0] = scalar;
                            decompressed[1] = scalar;
                            decompressed[2] = scalar;
                            decompressed[3] = scalar;
                        }
                        else
                        {
                            const uint32_t limit = (components > 4) ? 4u : static_cast<uint32_t>(components);
                            for (uint32_t c = 0; c < limit; ++c)
                            {
                                uint32_t scalar = 0;
                                std::memcpy(&scalar, srcVec + c * 4u, sizeof(scalar));
                                decompressed[c] = scalar;
                            }
                        }
                    }
                    else if (vl == 1u)
                    {
                        if (components == 1)
                        {
                            uint16_t raw = 0;
                            std::memcpy(&raw, srcVec, sizeof(raw));
                            const uint32_t scalar = extend16(raw);
                            decompressed[0] = scalar;
                            decompressed[1] = scalar;
                            decompressed[2] = scalar;
                            decompressed[3] = scalar;
                        }
                        else
                        {
                            const uint32_t limit = (components > 4) ? 4u : static_cast<uint32_t>(components);
                            for (uint32_t c = 0; c < limit; ++c)
                            {
                                uint16_t raw = 0;
                                std::memcpy(&raw, srcVec + c * 2u, sizeof(raw));
                                decompressed[c] = extend16(raw);
                            }
                        }
                    }
                    else if (vl == 2u)
                    {
                        if (components == 1)
                        {
                            const uint32_t scalar = extend8(srcVec[0]);
                            decompressed[0] = scalar;
                            decompressed[1] = scalar;
                            decompressed[2] = scalar;
                            decompressed[3] = scalar;
                        }
                        else
                        {
                            const uint32_t limit = (components > 4) ? 4u : static_cast<uint32_t>(components);
                            for (uint32_t c = 0; c < limit; ++c)
                            {
                                decompressed[c] = extend8(srcVec[c]);
                            }
                        }
                    }
                    else if (vl == 3u && vn == 3u)
                    {
                        // V4-5: packed color-like format in a single 16-bit value.
                        uint16_t packed = 0;
                        std::memcpy(&packed, srcVec, sizeof(packed));
                        decompressed[0] = (packed & 0x1Fu) << ((unpackFixes & 2u) ? 3 : 0);
                        decompressed[1] = ((packed >> 5) & 0x1Fu) << ((unpackFixes & 2u) ? 3 : 0);
                        decompressed[2] = ((packed >> 10) & 0x1Fu) << ((unpackFixes & 2u) ? 3 : 0);
                        decompressed[3] = ((packed >> 15) & 0x01u) << ((unpackFixes & 2u) ? 7 : 0);
                    }
                    else
                    {
                        handledFormat = false;
                    }

                    // V3 writes W from the next source element (the following
                    // vector's X). Hardware stores 0 when that element starts a
                    // new 16-byte block; the rest of the vector stays in place.
                    if ((unpackFixes & 16u) && decoded && components == 3 && vl <= 2u)
                    {
                        const uint32_t elemBytes = static_cast<uint32_t>(bitsPerComponent / 8);
                        const uint8_t *wSrc = srcVec + 3u * elemBytes;
                        decompressed[3] = 0;
                        if ((reinterpret_cast<uintptr_t>(wSrc) & 15u) != 0u &&
                            wSrc + elemBytes <= data + sizeBytes)
                        {
                            if (vl == 0u)
                            {
                                uint32_t raw = 0;
                                std::memcpy(&raw, wSrc, sizeof(raw));
                                decompressed[3] = raw;
                            }
                            else if (vl == 1u)
                            {
                                uint16_t raw = 0;
                                std::memcpy(&raw, wSrc, sizeof(raw));
                                decompressed[3] = extend16(raw);
                            }
                            else
                            {
                                decompressed[3] = extend8(*wSrc);
                            }
                        }
                    }

                    // V2 hardware broadcasts the first pair into Z/W.
                    if ((unpackFixes & 1u) && decoded && components == 2 && vl <= 2u)
                    {
                        decompressed[2] = decompressed[0];
                        decompressed[3] = decompressed[1];
                    }

                    // Unknown compressed format fallback: preserve legacy raw-copy behavior.
                    if (!handledFormat && decoded && !maskEnable && (vif1_regs.mode == 0u || vif1_regs.mode == 3u))
                    {
                        uint32_t copyBytes = (bytesPerVector < 16u) ? bytesPerVector : 16u;
                        std::memcpy(m_vu1Data + destOff, srcVec, copyBytes);
                        continue;
                    }

                    const bool canAdd = (vl != 3u || vn != 3u);
                    const uint32_t mode = vif1_regs.mode & 3u;
                    const uint32_t colIdx = (cyclePos > 3u) ? 3u : cyclePos;
                    const uint32_t maskCycle = (cyclePos > 3u) ? 3u : cyclePos;

                    for (uint32_t field = 0u; field < 4u; ++field)
                    {
                        uint32_t maskSpec = 0u;
                        if (maskEnable)
                        {
                            const uint32_t shift = ((maskCycle * 4u) + field) * 2u;
                            maskSpec = (vif1_regs.mask >> shift) & 0x3u;
                        }

                        // In fill-write cycles with suspended source reads, treat raw-data selections as row-fill.
                        if (!decoded && maskSpec == 0u)
                            maskSpec = 1u;

                        uint32_t writeVal = lanes[field];
                        if (maskSpec == 0u)
                        {
                            if (handledFormat)
                            {
                                writeVal = decompressed[field];
                                if (canAdd && (mode == 1u || mode == 2u))
                                {
                                    writeVal = writeVal + vif1_regs.row[field];
                                    if (mode == 2u)
                                        vif1_regs.row[field] = writeVal;
                                }
                                else if ((unpackFixes & 4u) && canAdd && mode == 3u)
                                {
                                    vif1_regs.row[field] = writeVal;
                                }
                            }
                        }
                        else if (maskSpec == 1u)
                        {
                            writeVal = vif1_regs.row[field];
                        }
                        else if (maskSpec == 2u)
                        {
                            writeVal = vif1_regs.col[colIdx];
                        }
                        else
                        {
                            continue; // write-protect
                        }

                        lanes[field] = writeVal;
                    }

                    std::memcpy(m_vu1Data + destOff, lanes, sizeof(lanes));
                }
            }
            if (fastUnpack && verifyFast)
            {
                static unsigned checked = 0, different = 0;
                ++checked;
                if (std::memcmp(verifyBuffer, m_vu1Data + vuAddr * 16u, ((writeVectorCount - 1u) * (wl == 1u ? cl : 1u) + 1u) * 16u) != 0 && ++different <= 16u)
                    std::fprintf(stderr, "[vif-unpack-verify] MISMATCH cmd=%08x num=%u cycle=%04x\n", cmd, writeVectorCount, vif1_regs.cycle);
                if ((checked & (checked - 1u)) == 0u)
                    std::fprintf(stderr, "[vif-unpack-verify] %u fast unpacks checked, %u different\n", checked, different);
            }
            pos += totalBytes;

            if (pos > sizeBytes)
                break;
            continue;
        }
        else
        {
            continue;
        }
    }
    return pos;
}
