#include "runtime/gs/ps2_gif_arbiter.h"
#include <algorithm>
#include <array>
#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <cstring>

namespace
{
    bool hasLevelTextureUpload(const std::vector<uint8_t> &data)
    {
        size_t offset = 0u;
        while (offset + 16u <= data.size())
        {
            uint64_t lo = 0u, descriptors = 0u;
            std::memcpy(&lo, data.data() + offset, 8u);
            std::memcpy(&descriptors, data.data() + offset + 8u, 8u);
            offset += 16u;
            const uint32_t loops = lo & 0x7fffu, format = (lo >> 58u) & 3u;
            const uint32_t regs = ((lo >> 60u) & 15u) ? ((lo >> 60u) & 15u) : 16u;
            const uint64_t words = uint64_t(loops) * regs;
            const uint64_t bytes = format == 0u ? words * 16u :
                format == 1u ? ((words + 1u) / 2u) * 16u : uint64_t(loops) * 16u;
            if (bytes > data.size() - offset) return false;
            if (format == 0u)
                for (uint64_t word = 0u; word < words; ++word)
                    if (((descriptors >> ((word % regs) * 4u)) & 15u) == 14u)
                    {
                        uint64_t value = 0u, address = 0u;
                        std::memcpy(&value, data.data() + offset + word * 16u, 8u);
                        std::memcpy(&address, data.data() + offset + word * 16u + 8u, 8u);
                        const uint32_t bp = (value >> 32u) & 0x3fffu;
                        if ((address & 255u) == 0x50u && bp >= 11616u && bp < 16000u)
                            return true;
                    }
            offset += static_cast<size_t>(bytes);
        }
        return false;
    }

    // Raw commands at the renderer boundary, without a graphics-backend switch.
    // Begin at the first upload to the observed level-texture region.
    void captureRawGifPacket(const GifArbiterPacket &packet)
    {
        static const char *path = std::getenv("PS2X_GIF_RAW_CAPTURE");
        if (!path || !path[0]) return;
        static FILE *file = nullptr;
        static bool finished = false;
        static uint64_t bytes = 0u, events = 0u;
        if (finished) return;
        if (!file)
        {
            static const char *trigger = std::getenv("PS2X_GIF_RAW_CAPTURE_TRIGGER");
            if (trigger && trigger[0])
            {
                FILE *armed = std::fopen(trigger, "rb");
                if (!armed) return;
                std::fclose(armed);
            }
            if (packet.pathId != GifPathId::Path3 || !hasLevelTextureUpload(packet.data)) return;
            file = std::fopen(path, "wb");
            if (!file) { finished = true; return; }
            std::fprintf(stderr, "[gif-raw] recording level-texture commands to %s\n", path);
        }
        // Legacy VIF DIRECT continuation adds a synthetic IMAGE header. It is
        // not part of the hardware byte stream and must not be captured twice.
        const size_t prefix = packet.imageContinuation ? 16u : 0u;
        const size_t payloadBytes = packet.data.size() - prefix;
        if (payloadBytes == 0u) return;
        constexpr uint64_t limit = 256u * 1024u * 1024u;
        if (bytes + payloadBytes + 12u > limit)
        {
            std::fclose(file); file = nullptr; finished = true;
            std::fprintf(stderr, "[gif-raw] bounded capture complete events=%llu bytes=%llu\n",
                static_cast<unsigned long long>(events), static_cast<unsigned long long>(bytes));
            return;
        }
        const uint32_t header[3] = {1u, static_cast<uint32_t>(packet.pathId), static_cast<uint32_t>(payloadBytes)};
        if (std::fwrite(header, sizeof(header), 1u, file) != 1u ||
            std::fwrite(packet.data.data() + prefix, 1u, payloadBytes, file) != payloadBytes)
        {
            std::fclose(file); file = nullptr; finished = true;
            return;
        }
        bytes += payloadBytes + sizeof(header);
        if ((++events & 255u) == 0u) std::fflush(file);
    }
}

void traceGifTimeline(const char *event, uint64_t a, uint64_t b, uint64_t c)
{
    static FILE *destination = [] {
        const char *setting = std::getenv("PS2X_GIF_TIMELINE_TRACE");
        if (!setting || !setting[0])
            return static_cast<FILE *>(nullptr);
        if (std::strcmp(setting, "1") == 0)
            return stderr;
        FILE *file = std::fopen(setting, "w");
        return file ? file : stderr;
    }();
    if (!destination || !event)
        return;
    const bool dmaEvent = std::strcmp(event, "DMA_START") == 0 ||
                          std::strcmp(event, "DMA_CHAIN_READY") == 0 ||
                          std::strcmp(event, "DMA_COMPLETE") == 0;
    if (dmaEvent && a != 0x1000A000u && a != 0x10009000u)
        return;
    if (std::strcmp(event, "SERVICE_BEGIN") == 0 && a == 0u && b == 0u)
        return;
    if (std::strcmp(event, "SERVICE_END") == 0 && (c & 0xBu) == 0u)
        return;
    if ((std::strcmp(event, "GIF_PACKET_READY") == 0 || std::strcmp(event, "GIF_ARBITRATE") == 0) &&
        a == static_cast<uint64_t>(GifPathId::Path2))
        return;
    static std::atomic<uint64_t> sequence{0};
    const uint64_t current = sequence.fetch_add(1, std::memory_order_relaxed);
    if (current >= 500000u)
        return;
    std::fprintf(destination, "[gif-timeline] seq=%llu event=%s a=%016llx b=%016llx c=%016llx\n",
                 static_cast<unsigned long long>(current), event,
                 static_cast<unsigned long long>(a), static_cast<unsigned long long>(b),
                 static_cast<unsigned long long>(c));
}

GifArbiter::GifArbiter(ProcessPacketFn processFn)
    : m_processFn(std::move(processFn))
{
}

bool GifArbiter::isImagePacket(const uint8_t *data, uint32_t sizeBytes)
{
    if (!data || sizeBytes < 16u)
        return false;

    uint64_t tagLo = 0;
    std::memcpy(&tagLo, data, sizeof(tagLo));
    const uint8_t flg = static_cast<uint8_t>((tagLo >> 58) & 0x3u);
    return flg == 2u || flg == 3u; // IMAGE / IMAGE2
}

// A packet that would be queued and drained at once, with nothing else waiting: there is nothing to arbitrate, so it
// goes straight to the consumer from the caller's buffer. This is every VU1 packet in normal play; queuing them
// meant an allocation and two copies each. Returns false when the normal path has to be taken.
bool GifArbiter::submitDirect(GifPathId pathId, const uint8_t *data, uint32_t sizeBytes, bool imageContinuation)
{
    static const bool capturing = []
    { const char *path = std::getenv("PS2X_GIF_RAW_CAPTURE"); return path && path[0]; }();
    if (capturing || !data || sizeBytes < 16 || !m_processFn || !m_queue.empty() ||
        static_cast<unsigned>(pathId) < 1u || static_cast<unsigned>(pathId) > 3u)
        return false;
    traceGifTimeline("GIF_ARBITRATE", static_cast<uint64_t>(pathId), sizeBytes, static_cast<uint64_t>(imageContinuation));
    m_processFn(data, sizeBytes, pathId, imageContinuation);
    return true;
}

void GifArbiter::submit(GifPathId pathId, const uint8_t *data, uint32_t sizeBytes, bool path2DirectHl, bool imageContinuation)
{
    if (!data || sizeBytes < 16 || !m_processFn ||
        static_cast<unsigned>(pathId) < 1u || static_cast<unsigned>(pathId) > 3u)
        return;

    GifArbiterPacket pkt;
    pkt.pathId = pathId;
    pkt.imageContinuation = imageContinuation;
    pkt.path2DirectHl = (pathId == GifPathId::Path2) && path2DirectHl;
    pkt.path3Image = (pathId == GifPathId::Path3) && isImagePacket(data, sizeBytes);
    pkt.data.assign(data, data + sizeBytes);
    m_queue.push_back(std::move(pkt));
}

void GifArbiter::submit(GifPathId pathId, std::vector<uint8_t> &&data, bool path2DirectHl, bool imageContinuation)
{
    if (data.size() < 16u || !m_processFn ||
        static_cast<unsigned>(pathId) < 1u || static_cast<unsigned>(pathId) > 3u)
        return;

    GifArbiterPacket pkt;
    pkt.pathId = pathId;
    pkt.imageContinuation = imageContinuation;
    pkt.path2DirectHl = (pathId == GifPathId::Path2) && path2DirectHl;
    pkt.path3Image = (pathId == GifPathId::Path3) && isImagePacket(data.data(), static_cast<uint32_t>(data.size()));
    pkt.data = std::move(data);
    m_queue.push_back(std::move(pkt));
}

void GifArbiter::drain()
{
    if (!m_processFn)
        return;

    if (m_queue.empty())
        return;

    // Arbitration chooses between FIFO heads, never between arbitrary packets.
    // A sort comparator mixing path priority and DIRECTHL/IMAGE exceptions is
    // not a strict weak ordering and can reorder a path's setup and payload.
    std::vector<GifArbiterPacket> packets;
    packets.swap(m_queue);
    const size_t end = packets.size();
    if (end == 1u)
    {
        const auto &pkt = packets.front();
        captureRawGifPacket(pkt);
        traceGifTimeline("GIF_ARBITRATE", static_cast<uint64_t>(pkt.pathId), pkt.data.size(),
                         (static_cast<uint64_t>(pkt.path2DirectHl) << 2u) |
                             (static_cast<uint64_t>(pkt.path3Image) << 1u) | static_cast<uint64_t>(pkt.imageContinuation));
        m_processFn(pkt.data.data(), static_cast<uint32_t>(pkt.data.size()), pkt.pathId, pkt.imageContinuation);
        packets.clear();
        if (m_queue.empty())
            packets.swap(m_queue);
        return;
    }
    std::array<size_t, 3> head{end, end, end};
    auto next = [&](size_t index, unsigned path)
    {
        while (index < end && static_cast<unsigned>(packets[index].pathId) != path + 1u)
            ++index;
        return index;
    };
    for (unsigned path = 0; path < 3; ++path)
        head[path] = next(0, path);

    static const bool trace = std::getenv("PS2X_GIF_ARBITER_TRACE") != nullptr;
    static uint64_t mixedDrains = 0;
    if (trace && (unsigned(head[0] != end) + unsigned(head[1] != end) + unsigned(head[2] != end)) > 1u)
    {
        ++mixedDrains;
        if ((mixedDrains & (mixedDrains - 1u)) == 0u)
            std::fprintf(stderr, "[gif-arbiter] mixed=%llu packets=%zu paths=%u%u%u\n",
                         static_cast<unsigned long long>(mixedDrains), end,
                         unsigned(head[0] != end), unsigned(head[1] != end), unsigned(head[2] != end));
    }
    for (size_t processed = 0; processed < end; ++processed)
    {
        unsigned path = head[0] != end ? 0u : (head[1] != end ? 1u : 2u);
        // DIRECTHL yields only to the next PATH3 IMAGE packet. An IMAGE
        // farther back must not bypass preceding PATH3 register writes.
        if (path == 1u && head[2] != end &&
            packets[head[1]].path2DirectHl && packets[head[2]].path3Image)
            path = 2u;
        const size_t index = head[path];
        head[path] = next(index + 1u, path);
        auto &pkt = packets[index];
        if (!pkt.data.empty())
        {
            captureRawGifPacket(pkt);
            traceGifTimeline("GIF_ARBITRATE", static_cast<uint64_t>(pkt.pathId), pkt.data.size(),
                             (static_cast<uint64_t>(pkt.path2DirectHl) << 2u) |
                                 (static_cast<uint64_t>(pkt.path3Image) << 1u) | static_cast<uint64_t>(pkt.imageContinuation));
            m_processFn(pkt.data.data(), static_cast<uint32_t>(pkt.data.size()), pkt.pathId, pkt.imageContinuation);
        }
    }
    packets.clear();
    // Retain storage on the common non-reentrant path; submissions made by
    // a callback remain queued instead of invalidating the packet being read.
    if (m_queue.empty())
        packets.swap(m_queue);
}

uint8_t GifArbiter::pathPriority(GifPathId id)
{
    return static_cast<uint8_t>(id);
}
