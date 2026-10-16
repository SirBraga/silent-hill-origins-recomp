#pragma once

#include "runtime/gs/gs_cpu_backend.h"
#include "runtime/gs/gs_metal_shader.h"
#include "runtime/gs/ps2_gs_memory.h"

#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
#include <SDL3/SDL.h>
#include <SDL3/SDL_gpu.h>
#include <array>
#include <mutex>
#include <vector>

// SDL_GPU compute implementation of the same GS raster kernels as the native
// Metal prototype. It uses SDL's Metal driver directly on macOS (no Vulkan).
class GSSDLGpuRaster
{
public:
    static constexpr size_t GpuClutCacheSlots = 16;
    static void InitializeHostVideo();
    GSSDLGpuRaster(uint8_t *vram, uint16_t *initialClut);
    ~GSSDLGpuRaster();
    GSSDLGpuRaster(const GSSDLGpuRaster &) = delete;
    GSSDLGpuRaster &operator=(const GSSDLGpuRaster &) = delete;

    void sync();
    void syncForPresentation();
    void flush();
    void flushForPresentation();
    void textureFlush();
    void markHostDirty();
    void copyClut(uint16_t *out) const;
    void setClut(const uint16_t *data);
    void loadClut(const GSTex0Reg &tex, const GSTexClutReg &texClut);
    void submit(const GSPrimitiveBatch &batch, int minX, int minY, int maxX, int maxY, bool serial = false, bool snapshotTexture = false);
    bool uploadImage(const GSTransferCommand &command, uint32_t startPixel,
                     const uint8_t *data, uint32_t pixelCount);
    bool localToLocal(const GSTransferCommand &command);
    bool localToHost(const GSTransferCommand &command, std::vector<uint8_t> &result);
    bool copyFrameToHostRgba(const GSFrameReg &frame, uint32_t width, uint32_t height,
                             std::vector<uint8_t> &outPixels, bool preserveAlpha,
                             bool frameBaseIsPages, uint32_t sourceOriginX,
                             uint32_t sourceOriginY, bool asynchronous = false,
                             std::unique_lock<std::mutex> *producerLock = nullptr,
                             uint32_t fieldVariant = 0u);
    uint64_t draws() const { return m_totalDraws; }
    uint64_t clutLoadDispatches() const { return m_clutLoadDispatches; }
    uint64_t clutLoadCacheHits() const { return m_clutLoadCacheHits; }
    uint64_t batchedDraws() const { return m_rasterDrawsBatched; }
    uint64_t rasterDrawPasses() const { return m_rasterDrawPasses; }
    uint64_t rasterOrderedDrawsBatched() const { return m_rasterOrderedDrawsBatched; }
    uint64_t imageUploadBatches() const { return m_imageUploadBatches; }
    uint64_t imageUploadChunks() const { return m_imageUploadChunks; }

private:
    struct Params { uint32_t p[64]{}; float v[3][13]{}; };
    struct PendingImageUpload
    {
        GSTransferCommand command{};
        uint32_t startPixel = 0;
        uint32_t pixelCount = 0;
        uint32_t nextPixel = 0;
        uint32_t bitsPerPixel = 0;
        uint32_t sourceByteOffset = 0;
        uint64_t rangeBegin = 0;
        uint64_t rangeEnd = 0;
        bool rangeKnown = false;
    };
    struct ImageUploadOp
    {
        uint32_t sourceByteOffset = 0;
        uint32_t dbp = 0;
        uint32_t dbw = 0;
        uint32_t dpsm = 0;
        uint32_t dsax = 0;
        uint32_t dsay = 0;
        uint32_t rrw = 0;
        uint32_t startPixel = 0;
        uint32_t pixelCount = 0;
        uint32_t bitsPerPixel = 0;
    };
    enum class UploadKind : size_t { Clut = 0, HostVram, RasterParams, ImageBatch, Count };
    enum class ImageFlushReason : size_t { Overlap = 0, UnknownRange, OperationLimit, ByteLimit, ClutBarrier, VramBarrier, OtherBarrier, Count };
    struct DrawAccessRange
    {
        uint64_t begin = 0;
        uint64_t end = 0;
    };
    struct CachedClut
    {
        std::array<uint32_t, 8> key{};
        uint64_t rangeBegin = 0;
        uint64_t rangeEnd = 0;
        uint64_t lastUse = 0;
        uint32_t destinationBanks = 0;
        bool applied = false;
        bool valid = false;
        bool rangeKnown = false;
        // Shape of the load, needed to replay it into the shared CLUT later.
        uint32_t destinationBase = 0;
        uint32_t firstEntry = 0;
        uint32_t entryCount = 0;
        bool sixteen = false;
        bool fullRange = false; // the load wrote every entry a draw with this TEX0 reads
        uint32_t psm = 0, cpsm = 0, csa = 0, csm = 0;
    };
    // Cache hits are not copied into the shared CLUT (slot 0) at once: draws
    // whose TEX0 matches the latest load sample its cache slot directly, and
    // the queued loads are replayed in order only when something needs slot 0.
    std::vector<uint8_t> m_pendingClutSlots;
    uint32_t m_lastClutLoadSlot = 0; // 1-based cache slot of the latest load, 0 = none
    void materializeClut();
    void copyClutEntries(SDL_GPUCopyPass *copy, const CachedClut &shape, uint32_t fromSlot, uint32_t toSlot);
    static_assert(sizeof(ImageUploadOp) == 40);
    static constexpr size_t kMaxPendingImageUploads = 128;
    static constexpr size_t kMaxPendingRasterDraws = 128;
    static constexpr size_t kScanoutBufferCount = 3;
    static constexpr size_t kScanoutCacheCount = 8;
    struct ScanoutCacheEntry
    {
        std::array<uint32_t, 8> key{};
        std::array<uint32_t, 8> layoutKey{};
        uint64_t sequence = 0;
        std::vector<uint8_t> pixels;
        bool valid = false;
    };
    void dispatchImageUploadBatch();
    void dispatchPendingRasterBatch();
    Uint32 stageUploadData(const uint8_t *data, Uint32 byteCount, UploadKind kind);
    Uint32 stageUploadDataParts(const uint8_t *first, Uint32 firstBytes,
        const uint8_t *second, Uint32 secondBytes, Uint32 secondOffset, UploadKind kind);
    void flushPendingImageUpload(ImageFlushReason reason = ImageFlushReason::OtherBarrier);
    void uploadHostVram();
    void invalidateCachedClut(uint64_t begin, uint64_t end);
    void finishPass();
    void beginPass(SDL_GPUComputePipeline *pipeline, Params &params);
    void check(bool ok, const char *operation) const;

    SDL_GPUDevice *m_device = nullptr;
    SDL_GPUBuffer *m_vramBuffer = nullptr;
    SDL_GPUBuffer *m_lutBuffer = nullptr;
    SDL_GPUBuffer *m_clutBuffer = nullptr;
    SDL_GPUBuffer *m_transferDataBuffer = nullptr;
    SDL_GPUBuffer *m_uploadOpsBuffer = nullptr;
    SDL_GPUBuffer *m_drawParamsBuffer = nullptr;
    SDL_GPUComputePipeline *m_rasterPipeline = nullptr;
    SDL_GPUComputePipeline *m_rasterBatchPipeline = nullptr;
    SDL_GPUComputePipeline *m_rasterOrderedBatchPipeline = nullptr;
    SDL_GPUComputePipeline *m_rasterOrderedUniformPipeline = nullptr;
    SDL_GPUComputePipeline *m_uploadUniformPipeline = nullptr;
    // Source of the most recent scanout, to skip presents of an unchanged frame.
    uint64_t m_scanoutSourceBegin = 0, m_scanoutSourceEnd = 0;
    std::array<uint32_t, 8> m_lastScanoutKey{};
    bool m_scanoutSourceKnown = false;
    bool m_scanoutSourceDirty = true;
    uint64_t m_scanoutReuses = 0;
    uint64_t m_throttledScanoutSequence = ~uint64_t{0};
    SDL_GPUComputePipeline *m_snapshotRasterPipeline = nullptr;
    SDL_GPUComputePipeline *m_serialRasterPipeline = nullptr;
    SDL_GPUComputePipeline *m_linePipeline = nullptr;
    SDL_GPUComputePipeline *m_clutPipeline = nullptr;
    SDL_GPUComputePipeline *m_uploadPipeline = nullptr;
    SDL_GPUComputePipeline *m_localTransferPipeline = nullptr;
    SDL_GPUComputePipeline *m_localReadbackPipeline = nullptr;
    SDL_GPUComputePipeline *m_scanoutPipeline = nullptr;
    SDL_GPUTransferBuffer *m_uploadBuffer = nullptr;
    Uint32 m_uploadBufferOffset = 0;
    SDL_GPUTransferBuffer *m_initUploadBuffer = nullptr;
    SDL_GPUTransferBuffer *m_downloadBuffer = nullptr;
    SDL_GPUTransferBuffer *m_syncScanoutBuffer = nullptr;
    std::array<SDL_GPUTransferBuffer *, kScanoutBufferCount> m_scanoutBuffers{};
    std::array<SDL_GPUFence *, kScanoutBufferCount> m_scanoutFences{};
    std::array<uint64_t, kScanoutBufferCount> m_scanoutSequences{};
    std::array<std::array<uint32_t, 8>, kScanoutBufferCount> m_scanoutKeys{};
    std::array<std::array<uint32_t, 8>, kScanoutBufferCount> m_scanoutLayoutKeys{};
    SDL_GPUCommandBuffer *m_commands = nullptr;
    SDL_GPUComputePass *m_compute = nullptr;
    uint8_t *m_hostVram = nullptr;
    uint16_t *m_hostClut = nullptr;
    std::vector<uint32_t> m_lut;
    bool m_hostDirty = false;
    bool m_gpuVramDirty = false;
    bool m_gpuClutDirty = false;
    uint64_t m_totalDraws = 0;
    uint64_t m_rasterDrawPasses = 0;
    uint64_t m_rasterDrawsBatched = 0;
    uint64_t m_rasterOrderedDrawsBatched = 0;
    // Counters: considered, independent, ordered, shape, texture, target,
    // self hazard, dependency, mip reject, texture-range reject.
    std::array<uint64_t, 11> m_drawBatchDecisions{};
    std::array<uint64_t, 5> m_mipBaseOnlySmallAreaBins{};
    uint64_t m_totalClutLoads = 0;
    uint64_t m_clutLoadDispatches = 0;
    uint64_t m_clutLoadCacheHits = 0;
    std::array<CachedClut, GpuClutCacheSlots> m_cachedCluts{};
    uint64_t m_clutCacheClock = 0;
    uint32_t m_activeClutOffset = 0;
    uint64_t m_imageUploadChunks = 0;
    uint64_t m_imageUploadBatches = 0;
    uint64_t m_imageUploadPayloadBytes = 0;
    std::array<uint64_t, static_cast<size_t>(ImageFlushReason::Count)> m_imageUploadFlushReasons{};
    uint64_t m_vramUploadBytes = 0;
    uint64_t m_vramReadbackBytes = 0;
    uint64_t m_gpuWaits = 0;
    uint64_t m_uploadStagedBytes = 0;
    std::array<uint64_t, static_cast<size_t>(UploadKind::Count)> m_uploadKindBytes{};
    uint64_t m_uploadArenaWraps = 0;
    uint64_t m_uploadMapCalls = 0;
    uint64_t m_uploadMapTimeNs = 0;
    uint64_t m_uploadMapMaxNs = 0;
    uint64_t m_uploadWrapFenceWaits = 0;
    uint64_t m_uploadWrapFenceWaitNs = 0;
    uint64_t m_uploadWrapFenceMaxNs = 0;
    uint64_t m_uploadWrapIdleWaits = 0;
    uint64_t m_uploadWrapIdleWaitNs = 0;
    uint64_t m_scanoutReads = 0;
    uint64_t m_scanoutSynchronousWaits = 0;
    uint64_t m_scanoutSynchronousWaitNs = 0;
    uint64_t m_scanoutSynchronousWaitMaxNs = 0;
    uint64_t m_scanoutRingWaits = 0;
    uint64_t m_scanoutBootstrapWaits = 0;
    uint64_t m_scanoutBootstrapWaitNs = 0;
    uint64_t m_nextScanoutSequence = 1;
    size_t m_nextScanoutBuffer = 0;
    std::array<ScanoutCacheEntry, kScanoutCacheCount> m_completedScanouts{};
    std::array<uint32_t, 8> m_asyncScanoutKey{};
    bool m_hasAsyncScanoutKey = false;
    std::vector<uint8_t> m_pendingUploadData;
    std::vector<PendingImageUpload> m_pendingImageUploads;
    std::vector<DrawAccessRange> m_drawBatchRanges;
    std::vector<DrawAccessRange> m_drawBatchReadRanges;
    std::vector<DrawAccessRange> m_drawBatchDepthReadRanges;
    std::vector<Params> m_pendingRasterDraws;
    bool m_pendingRasterOrdered = false;
    bool m_flushingPendingUpload = false;
};
#else
class GSSDLGpuRaster;
#endif
