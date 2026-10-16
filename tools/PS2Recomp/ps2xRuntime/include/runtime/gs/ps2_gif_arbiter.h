#ifndef PS2_GIF_ARBITER_H
#define PS2_GIF_ARBITER_H

#include <cstdint>
#include <functional>
#include <vector>

// Opt-in cross-subsystem event sequence for diagnosing DMA/GIF/VIF ordering.
void traceGifTimeline(const char *event, uint64_t a = 0, uint64_t b = 0, uint64_t c = 0);

enum class GifPathId : uint8_t
{
    Path1 = 1,
    Path2 = 2,
    Path3 = 3,
};

struct GifArbiterPacket
{
    GifPathId pathId;
    bool path2DirectHl = false;
    bool path3Image = false;
    bool imageContinuation = false; // Auxiliary legacy GIF tag is excluded from raw transport.
    std::vector<uint8_t> data;
};

class GifArbiter
{
public:
    using ProcessPacketFn = std::function<void(const uint8_t *, uint32_t, GifPathId, bool)>;

    GifArbiter() = default;
    explicit GifArbiter(ProcessPacketFn processFn);

    void setProcessPacketFn(ProcessPacketFn fn) { m_processFn = std::move(fn); }

    void submit(GifPathId pathId, const uint8_t *data, uint32_t sizeBytes, bool path2DirectHl = false, bool imageContinuation = false);
    bool submitDirect(GifPathId pathId, const uint8_t *data, uint32_t sizeBytes, bool imageContinuation = false);
    void submit(GifPathId pathId, std::vector<uint8_t> &&data, bool path2DirectHl = false, bool imageContinuation = false);

    void drain();
    bool empty() const { return m_queue.empty(); }

private:
    ProcessPacketFn m_processFn;
    std::vector<GifArbiterPacket> m_queue;

    static bool isImagePacket(const uint8_t *data, uint32_t sizeBytes);
    static uint8_t pathPriority(GifPathId id);
};

#endif
