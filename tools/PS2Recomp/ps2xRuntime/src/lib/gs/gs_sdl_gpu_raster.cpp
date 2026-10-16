#include "runtime/gs/gs_sdl_gpu_raster.h"
#include "runtime/gs/ps2_gs_common.h"

#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)

#include <algorithm>
#include <chrono>
#include <cmath>
#include <cstring>
#include <stdexcept>
#include <string>

namespace
{
bool sdlGpuStatsEnabled()
{
    static const bool enabled = [] { const char *v = std::getenv("PS2X_GS_SDL_GPU_STATS"); return v && v[0] == '1'; }();
    return enabled;
}

constexpr Uint32 kVramBytes = 4u * 1024u * 1024u;
constexpr Uint32 kClutBytes = 1024u;
// Slot zero is the GS's shared internal CLUT. Cached loads occupy separate
// slots and restore only the entries that the original load would change.
constexpr Uint32 kGpuClutCacheBytes = (GSSDLGpuRaster::GpuClutCacheSlots + 1u) * kClutBytes;
constexpr Uint32 kHostFrameWidth = 640u;
constexpr Uint32 kHostFrameHeight = 512u;
constexpr Uint32 kUploadBufferBytes = 128u * 1024u * 1024u;
// Ordered batches start with [count, originX, originY, pad] and 128 packed draw bounds.
constexpr Uint32 kOrderedBatchHeaderBytes = (4u + 2u * 128u) * sizeof(uint32_t);
// Ordered batches up to this size are sent as uniform data (see dispatchPendingRasterBatch).
constexpr size_t kOrderedUniformMaxDraws = 64u;

// Wide raster batches (default): draws with mip registers may share a pass
// (their mip footprints join the hazard check) and ordered batches grow up to
// PS2X_GS_ORDERED_MAX_DRAWS (128) within PS2X_GS_ORDERED_WORK_BUDGET (2^20)
// bounds tests. PS2X_GS_WIDE_BATCH=0 restores one pass per mip-register draw
// and 16-draw ordered batches.
static bool wideRasterBatchExperiment()
{
    static const bool enabled = [] { const char *v = std::getenv("PS2X_GS_WIDE_BATCH"); return !(v && v[0] == '0'); }();
    return enabled;
}

static size_t orderedBatchMaxDraws()
{
    static const size_t value = [] {
        if (!wideRasterBatchExperiment()) return size_t(16u);
        const char *v = std::getenv("PS2X_GS_ORDERED_MAX_DRAWS");
        const unsigned long n = v ? std::strtoul(v, nullptr, 10) : 0ul;
        return static_cast<size_t>(n >= 2ul ? n : kOrderedUniformMaxDraws);
    }();
    return value;
}

static uint64_t orderedBatchWorkBudget()
{
    static const uint64_t value = [] {
        if (!wideRasterBatchExperiment()) return uint64_t(0u);
        const char *v = std::getenv("PS2X_GS_ORDERED_WORK_BUDGET");
        return v ? std::strtoull(v, nullptr, 10) : uint64_t(1u << 20u);
    }();
    return value;
}

void replaceOnce(std::string &source, const char *from, const char *to)
{
    const size_t at = source.find(from);
    if (at == std::string::npos)
        throw std::runtime_error("SDL_GPU GS shader binding layout not found");
    source.replace(at, std::strlen(from), to);
}

std::string sdlShaderSource()
{
    std::string source = kGsMetalShader;
    // SDL_GPU assigns uniform slots first, then read-only storage slots, then
    // read/write storage slots. Keep the kernel arguments in that ABI order.
    replaceOnce(source,
        "kernel void clutLoad(device const uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],device ushort* clut [[buffer(3)]],uint tid",
        "kernel void clutLoad(constant Params& b [[buffer(0)]],device const uint* ram [[buffer(1)]],device const uint* lut [[buffer(2)]],device ushort* clut [[buffer(3)]],uint tid");
    replaceOnce(source,
        "kernel void imageUpload(device const uint* src [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],device const ImageUploadOp* ops [[buffer(3)]],device uint* ram [[buffer(4)]],uint3 tid [[thread_position_in_grid]]",
        "kernel void imageUpload(constant Params& b [[buffer(0)]],device const uint* src [[buffer(1)]],device const uint* lut [[buffer(2)]],device const ImageUploadOp* ops [[buffer(3)]],device uint* ram [[buffer(4)]],uint3 tid [[thread_position_in_grid]]");
    replaceOnce(source,
        "kernel void imageUploadUniform(device uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant uint* u [[buffer(2)]],uint3 tid",
        "kernel void imageUploadUniform(constant uint* u [[buffer(0)]],device const uint* lut [[buffer(1)]],device uint* ram [[buffer(2)]],uint3 tid");
    replaceOnce(source,
        "kernel void localTransfer(device uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],uint tid",
        "kernel void localTransfer(constant Params& b [[buffer(0)]],device const uint* lut [[buffer(1)]],device uint* ram [[buffer(2)]],uint tid");
    replaceOnce(source,
        "kernel void localReadback(device const uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],device uint* output [[buffer(3)]],uint tid",
        "kernel void localReadback(constant Params& b [[buffer(0)]],device const uint* lut [[buffer(1)]],device const uint* ram [[buffer(2)]],device uint* output [[buffer(3)]],uint tid");
    replaceOnce(source,
        "kernel void scanout(device const uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],device uint* output [[buffer(3)]],uint2 tid",
        "kernel void scanout(constant Params& b [[buffer(0)]],device const uint* lut [[buffer(1)]],device const uint* ram [[buffer(2)]],device uint* output [[buffer(3)]],uint2 tid");
    replaceOnce(source,
        "kernel void raster(device uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],device const ushort* clut [[buffer(3)]],uint2 tid",
        "kernel void raster(constant Params& b [[buffer(0)]],device const uint* lut [[buffer(1)]],device const ushort* clut [[buffer(2)]],device uint* ram [[buffer(3)]],uint2 tid");
    replaceOnce(source,
        "kernel void rasterOrderedUniform(device uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant uint* batch [[buffer(2)]],device const ushort* clut [[buffer(3)]],uint2 tid",
        "kernel void rasterOrderedUniform(constant uint* batch [[buffer(0)]],device const uint* lut [[buffer(1)]],device const ushort* clut [[buffer(2)]],device uint* ram [[buffer(3)]],uint2 tid");
    replaceOnce(source,
        "kernel void rasterSerial(device uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],device const ushort* clut [[buffer(3)]],uint tid",
        "kernel void rasterSerial(constant Params& b [[buffer(0)]],device const uint* lut [[buffer(1)]],device const ushort* clut [[buffer(2)]],device uint* ram [[buffer(3)]],uint tid");
    replaceOnce(source,
        "kernel void rasterSnapshot(device uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],device const ushort* clut [[buffer(3)]],device const uint* texRam [[buffer(4)]],uint2 tid",
        "kernel void rasterSnapshot(constant Params& b [[buffer(0)]],device const uint* lut [[buffer(1)]],device const ushort* clut [[buffer(2)]],device const uint* texRam [[buffer(3)]],device uint* ram [[buffer(4)]],uint2 tid");
    replaceOnce(source,
        "kernel void rasterLine(device uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],device const ushort* clut [[buffer(3)]],uint tid",
        "kernel void rasterLine(constant Params& b [[buffer(0)]],device const uint* lut [[buffer(1)]],device const ushort* clut [[buffer(2)]],device uint* ram [[buffer(3)]],uint tid");
    return source;
}

SDL_GPUBuffer *makeBuffer(SDL_GPUDevice *device, Uint32 usage, Uint32 size)
{
    SDL_GPUBufferCreateInfo info{};
    info.usage = usage;
    info.size = size;
    return SDL_CreateGPUBuffer(device, &info);
}

SDL_GPUTransferBuffer *makeTransferBuffer(SDL_GPUDevice *device, SDL_GPUTransferBufferUsage usage, Uint32 size)
{
    SDL_GPUTransferBufferCreateInfo info{};
    info.usage = usage;
    info.size = size;
    return SDL_CreateGPUTransferBuffer(device, &info);
}

bool gsTransferPsmSupported(uint psm)
{
    switch (psm)
    {
    case 0u: case 1u: case 2u: case 10u: case 19u: case 20u:
    case 27u: case 36u: case 44u: case 48u: case 49u:
        return true;
    default:
        return false;
    }
}

bool gsTransferPageSize(uint psm, uint32_t &width, uint32_t &height)
{
    width = 64u; height = 32u;
    switch (psm)
    {
    case 0u: case 1u: case 27u: case 36u: case 44u: case 48u: case 49u:
        return true;
    case 2u: case 10u:
        height = 64u; return true;
    case 19u:
        width = 128u; height = 64u; return true;
    case 20u:
        width = 128u; height = 128u; return true;
    default:
        return false;
    }
}

bool gsTransferRange(uint32_t psm, uint32_t bp, uint32_t bw, uint32_t sx, uint32_t sy,
                     uint32_t width, uint32_t height, uint64_t &begin, uint64_t &end)
{
    uint32_t pageW = 0, pageH = 0;
    if (!gsTransferPageSize(psm, pageW, pageH) || width == 0u || height == 0u)
        return false;
    const uint64_t columns = std::max<uint64_t>((uint64_t(std::max(bw, 1u)) * 64u) / pageW, 1u);
    const uint64_t lastPageX = (uint64_t(sx) + width - 1u) / pageW;
    const uint64_t lastPageY = (uint64_t(sy) + height - 1u) / pageH;
    // Keep the range conservative, but start at the first page touched by the
    // rectangle. Starting every access at BP made disjoint sub-rectangles look
    // aliased and prevented safe GPU batching.
    if (lastPageX >= columns)
        return false;
    const uint64_t firstPageX = uint64_t(sx) / pageW;
    const uint64_t firstPageY = uint64_t(sy) / pageH;
    const uint64_t base = uint64_t(bp) * 256u;
    begin = base + (firstPageY * columns + firstPageX) * 8192u;
    end = base + (lastPageY * columns + lastPageX + 1u) * 8192u;
    return end <= kVramBytes;
}

bool gsTransferChunksOverlap(const GSTransferCommand &a, uint32_t aStart, uint32_t aCount,
                             const GSTransferCommand &b, uint32_t bStart, uint32_t bCount)
{
    if (a.bitbltbuf.dbp != b.bitbltbuf.dbp || a.bitbltbuf.dbw != b.bitbltbuf.dbw ||
        a.bitbltbuf.dpsm != b.bitbltbuf.dpsm || a.trxreg.rrw == 0u || b.trxreg.rrw == 0u ||
        aCount == 0u || bCount == 0u)
        return true;
    const uint64_t aEnd = uint64_t(aStart) + aCount;
    const uint64_t bEnd = uint64_t(bStart) + bCount;
    if (aEnd > uint64_t(a.trxreg.rrw) * a.trxreg.rrh ||
        bEnd > uint64_t(b.trxreg.rrw) * b.trxreg.rrh)
        return true;

    const uint32_t aFirstRow = aStart / a.trxreg.rrw;
    const uint32_t aLastRow = static_cast<uint32_t>((aEnd - 1u) / a.trxreg.rrw);
    for (uint32_t rowA = aFirstRow; rowA <= aLastRow; ++rowA)
    {
        const uint64_t rowBeginA = uint64_t(rowA) * a.trxreg.rrw;
        const uint32_t colBeginA = rowA == aFirstRow ? aStart % a.trxreg.rrw : 0u;
        const uint32_t colEndA = static_cast<uint32_t>(std::min<uint64_t>(a.trxreg.rrw, aEnd - rowBeginA));
        const uint64_t y = uint64_t(a.trxpos.dsay) + rowA;
        if (y < b.trxpos.dsay) continue;
        const uint64_t rowB = y - b.trxpos.dsay;
        if (rowB >= b.trxreg.rrh) continue;
        const uint64_t rowBeginB = rowB * b.trxreg.rrw;
        const uint64_t rowEndB = rowBeginB + b.trxreg.rrw;
        if (rowEndB <= bStart || rowBeginB >= bEnd) continue;
        const uint32_t colBeginB = static_cast<uint32_t>(std::max<uint64_t>(bStart, rowBeginB) - rowBeginB);
        const uint32_t colEndB = static_cast<uint32_t>(std::min<uint64_t>(bEnd, rowEndB) - rowBeginB);
        const uint64_t xBeginA = uint64_t(a.trxpos.dsax) + colBeginA;
        const uint64_t xEndA = uint64_t(a.trxpos.dsax) + colEndA;
        const uint64_t xBeginB = uint64_t(b.trxpos.dsax) + colBeginB;
        const uint64_t xEndB = uint64_t(b.trxpos.dsax) + colEndB;
        if (xBeginA < xEndB && xBeginB < xEndA) return true;
    }
    return false;
}

}

void GSSDLGpuRaster::InitializeHostVideo()
{
    // SDL's Cocoa video initialization is main-thread-only. The GS renderer
    // runs on the EE worker, so initialize the subsystem from PS2Runtime first.
    if ((SDL_WasInit(SDL_INIT_VIDEO) & SDL_INIT_VIDEO) == 0 && !SDL_InitSubSystem(SDL_INIT_VIDEO))
        throw std::runtime_error(std::string("SDL video init on host thread: ") + SDL_GetError());
}

GSSDLGpuRaster::GSSDLGpuRaster(uint8_t *vram, uint16_t *initialClut)
    : m_hostVram(vram), m_hostClut(initialClut)
{
    if (!vram)
        throw std::invalid_argument("SDL_GPU GS requires PS2 VRAM");
    if ((SDL_WasInit(SDL_INIT_VIDEO) & SDL_INIT_VIDEO) == 0)
        throw std::runtime_error("SDL_GPU host video subsystem must be initialized on the main thread");
    // Restrict the device to SDL's native Metal driver on macOS; never select
    // Vulkan/MoltenVK implicitly for this backend.
    m_device = SDL_CreateGPUDevice(SDL_GPU_SHADERFORMAT_MSL, false, "metal");
    if (!m_device)
        throw std::runtime_error(std::string("SDL_GPU Metal device: ") + SDL_GetError());

    m_vramBuffer = makeBuffer(m_device, SDL_GPU_BUFFERUSAGE_COMPUTE_STORAGE_READ |
        SDL_GPU_BUFFERUSAGE_COMPUTE_STORAGE_WRITE, kVramBytes);
    m_lutBuffer = nullptr;
    m_clutBuffer = makeBuffer(m_device, SDL_GPU_BUFFERUSAGE_COMPUTE_STORAGE_READ |
        SDL_GPU_BUFFERUSAGE_COMPUTE_STORAGE_WRITE, kGpuClutCacheBytes);
    m_transferDataBuffer = makeBuffer(m_device, SDL_GPU_BUFFERUSAGE_COMPUTE_STORAGE_READ |
        SDL_GPU_BUFFERUSAGE_COMPUTE_STORAGE_WRITE, kVramBytes);
    m_uploadOpsBuffer = makeBuffer(m_device, SDL_GPU_BUFFERUSAGE_COMPUTE_STORAGE_READ |
        SDL_GPU_BUFFERUSAGE_COMPUTE_STORAGE_WRITE,
        static_cast<Uint32>(kMaxPendingImageUploads * sizeof(ImageUploadOp)));
    m_drawParamsBuffer = makeBuffer(m_device, SDL_GPU_BUFFERUSAGE_COMPUTE_STORAGE_READ,
        static_cast<Uint32>(kOrderedBatchHeaderBytes + kMaxPendingRasterDraws * sizeof(Params)));
    m_uploadBuffer = makeTransferBuffer(m_device, SDL_GPU_TRANSFERBUFFERUSAGE_UPLOAD, kUploadBufferBytes);
    m_downloadBuffer = makeTransferBuffer(m_device, SDL_GPU_TRANSFERBUFFERUSAGE_DOWNLOAD,
        kVramBytes + kClutBytes);
    m_syncScanoutBuffer = makeTransferBuffer(m_device, SDL_GPU_TRANSFERBUFFERUSAGE_DOWNLOAD,
        kHostFrameWidth * kHostFrameHeight * sizeof(uint32_t));
    for (auto &buffer : m_scanoutBuffers)
        buffer = makeTransferBuffer(m_device, SDL_GPU_TRANSFERBUFFERUSAGE_DOWNLOAD,
            kHostFrameWidth * kHostFrameHeight * sizeof(uint32_t));
    if (!m_vramBuffer || !m_clutBuffer || !m_transferDataBuffer || !m_uploadOpsBuffer || !m_drawParamsBuffer || !m_uploadBuffer || !m_downloadBuffer ||
        !m_syncScanoutBuffer ||
        std::any_of(m_scanoutBuffers.begin(), m_scanoutBuffers.end(), [](auto *buffer) { return buffer == nullptr; }))
        throw std::runtime_error(std::string("SDL_GPU GS resource creation: ") + SDL_GetError());

    m_lut.reserve(45056u);
    m_pendingRasterDraws.reserve(kMaxPendingRasterDraws);
    GSMem::InitLookupTables();
    for (const unsigned format : {0u, 48u, 19u, 20u, 2u, 10u, 50u, 58u})
    {
        const unsigned width = (format == 19u || format == 20u) ? 128u : 64u;
        const unsigned height = format == 20u ? 128u :
            (format == 19u || format == 2u || format == 10u || format == 50u || format == 58u) ? 64u : 32u; // 16-bit pages, Z included, are 64x64
        for (unsigned y = 0; y < height; ++y)
            for (unsigned x = 0; x < width; ++x)
                m_lut.push_back(GSMem::PixelBitAddress(format, 0, 2, x, y));
    }
    m_lutBuffer = makeBuffer(m_device, SDL_GPU_BUFFERUSAGE_COMPUTE_STORAGE_READ,
        static_cast<Uint32>(m_lut.size() * sizeof(uint32_t)));
    if (!m_lutBuffer)
        throw std::runtime_error(std::string("SDL_GPU GS swizzle LUT: ") + SDL_GetError());

    const std::string shader = sdlShaderSource();
    SDL_GPUComputePipelineCreateInfo pipeline{};
    pipeline.code_size = shader.size() + 1u;
    pipeline.code = reinterpret_cast<const Uint8 *>(shader.data());
    pipeline.entrypoint = "raster";
    pipeline.format = SDL_GPU_SHADERFORMAT_MSL;
    pipeline.num_uniform_buffers = 1;
    pipeline.num_readonly_storage_buffers = 2;
    pipeline.num_readwrite_storage_buffers = 1;
    pipeline.threadcount_x = 8;
    pipeline.threadcount_y = 8;
    pipeline.threadcount_z = 1;
    m_rasterPipeline = SDL_CreateGPUComputePipeline(m_device, &pipeline);
    pipeline.entrypoint = "rasterBatch";
    pipeline.num_uniform_buffers = 0;
    pipeline.num_readonly_storage_buffers = 3;
    m_rasterBatchPipeline = SDL_CreateGPUComputePipeline(m_device, &pipeline);
    pipeline.entrypoint = "rasterOrderedBatch";
    m_rasterOrderedBatchPipeline = SDL_CreateGPUComputePipeline(m_device, &pipeline);
    pipeline.num_uniform_buffers = 1;
    pipeline.num_readonly_storage_buffers = 2;
    pipeline.entrypoint = "rasterOrderedUniform";
    m_rasterOrderedUniformPipeline = SDL_CreateGPUComputePipeline(m_device, &pipeline);
    pipeline.entrypoint = "rasterSnapshot";
    pipeline.num_readonly_storage_buffers = 3;
    m_snapshotRasterPipeline = SDL_CreateGPUComputePipeline(m_device, &pipeline);
    pipeline.num_readonly_storage_buffers = 2;
    pipeline.entrypoint = "rasterSerial";
    pipeline.threadcount_x = pipeline.threadcount_y = pipeline.threadcount_z = 1;
    m_serialRasterPipeline = SDL_CreateGPUComputePipeline(m_device, &pipeline);
    pipeline.entrypoint = "rasterLine";
    pipeline.threadcount_x = 64;
    pipeline.threadcount_y = pipeline.threadcount_z = 1;
    m_linePipeline = SDL_CreateGPUComputePipeline(m_device, &pipeline);
    pipeline.entrypoint = "clutLoad";
    pipeline.threadcount_x = 64;
    pipeline.threadcount_y = pipeline.threadcount_z = 1;
    m_clutPipeline = SDL_CreateGPUComputePipeline(m_device, &pipeline);
    pipeline.entrypoint = "imageUploadUniform";
    pipeline.threadcount_x = 64;
    pipeline.threadcount_y = pipeline.threadcount_z = 1;
    pipeline.num_uniform_buffers = 1;
    pipeline.num_readonly_storage_buffers = 1;
    pipeline.num_readwrite_storage_buffers = 1;
    m_uploadUniformPipeline = SDL_CreateGPUComputePipeline(m_device, &pipeline);
    pipeline.entrypoint = "imageUpload";
    pipeline.threadcount_x = 64;
    pipeline.threadcount_y = pipeline.threadcount_z = 1;
    pipeline.num_readonly_storage_buffers = 3;
    m_uploadPipeline = SDL_CreateGPUComputePipeline(m_device, &pipeline);
    pipeline.entrypoint = "localTransfer";
    pipeline.num_readonly_storage_buffers = 1;
    m_localTransferPipeline = SDL_CreateGPUComputePipeline(m_device, &pipeline);
    pipeline.entrypoint = "localReadback";
    pipeline.num_readonly_storage_buffers = 2;
    m_localReadbackPipeline = SDL_CreateGPUComputePipeline(m_device, &pipeline);
    pipeline.entrypoint = "scanout";
    pipeline.threadcount_x = 8;
    pipeline.threadcount_y = 8;
    m_scanoutPipeline = SDL_CreateGPUComputePipeline(m_device, &pipeline);
    if (!m_rasterPipeline || !m_rasterBatchPipeline || !m_rasterOrderedBatchPipeline || !m_rasterOrderedUniformPipeline || !m_uploadUniformPipeline || !m_snapshotRasterPipeline || !m_serialRasterPipeline || !m_linePipeline || !m_clutPipeline || !m_uploadPipeline || !m_localTransferPipeline ||
        !m_localReadbackPipeline || !m_scanoutPipeline)
        throw std::runtime_error(std::string("SDL_GPU GS MSL pipeline: ") + SDL_GetError());

    // The first copy initializes the GPU's private VRAM and CLUT from the
    // runtime's canonical memory before any accelerated primitive is drawn.
    auto *mapped = static_cast<uint8_t *>(SDL_MapGPUTransferBuffer(m_device, m_uploadBuffer, false));
    if (!mapped)
        throw std::runtime_error(std::string("SDL_GPU GS upload map: ") + SDL_GetError());
    std::memcpy(mapped, vram, kVramBytes);
    SDL_UnmapGPUTransferBuffer(m_device, m_uploadBuffer);
    m_commands = SDL_AcquireGPUCommandBuffer(m_device);
    if (!m_commands)
        throw std::runtime_error(std::string("SDL_GPU GS command buffer: ") + SDL_GetError());
    auto *copy = SDL_BeginGPUCopyPass(m_commands);
    SDL_GPUTransferBufferLocation source{m_uploadBuffer, 0};
    SDL_GPUBufferRegion destination{m_vramBuffer, 0, kVramBytes};
    SDL_UploadToGPUBuffer(copy, &source, &destination, false);
    SDL_EndGPUCopyPass(copy);

    // Upload the CLUT and LUT in a second staging buffer. Reuse the download
    // buffer only after the initialization command has been submitted.
    m_initUploadBuffer = makeTransferBuffer(m_device,
        SDL_GPU_TRANSFERBUFFERUSAGE_UPLOAD, static_cast<Uint32>(m_lut.size() * sizeof(uint32_t)) + kClutBytes);
    if (!m_initUploadBuffer)
        throw std::runtime_error(std::string("SDL_GPU GS LUT staging: ") + SDL_GetError());
    mapped = static_cast<uint8_t *>(SDL_MapGPUTransferBuffer(m_device, m_initUploadBuffer, false));
    if (!mapped)
        throw std::runtime_error(std::string("SDL_GPU GS LUT map: ") + SDL_GetError());
    std::memcpy(mapped, m_lut.data(), m_lut.size() * sizeof(uint32_t));
    std::memcpy(mapped + m_lut.size() * sizeof(uint32_t), initialClut, kClutBytes);
    SDL_UnmapGPUTransferBuffer(m_device, m_initUploadBuffer);
    copy = SDL_BeginGPUCopyPass(m_commands);
    SDL_GPUTransferBufferLocation lutSource{m_initUploadBuffer, 0};
    SDL_GPUBufferRegion lutDestination{m_lutBuffer, 0, static_cast<Uint32>(m_lut.size() * sizeof(uint32_t))};
    SDL_UploadToGPUBuffer(copy, &lutSource, &lutDestination, false);
    SDL_GPUTransferBufferLocation clutSource{m_initUploadBuffer, static_cast<Uint32>(m_lut.size() * sizeof(uint32_t))};
    SDL_GPUBufferRegion clutDestination{m_clutBuffer, 0, kClutBytes};
    SDL_UploadToGPUBuffer(copy, &clutSource, &clutDestination, false);
    SDL_EndGPUCopyPass(copy);
    check(SDL_SubmitGPUCommandBuffer(m_commands), "initial VRAM upload");
    m_commands = nullptr;
    check(SDL_WaitForGPUIdle(m_device), "initial VRAM wait");
    SDL_ReleaseGPUTransferBuffer(m_device, m_initUploadBuffer);
    m_initUploadBuffer = nullptr;
    std::fprintf(stderr, "[gs-sdl-gpu] Metal compute raster ready (%s; 4 MiB GS VRAM)\n",
        SDL_GetGPUDeviceDriver(m_device));
}

GSSDLGpuRaster::~GSSDLGpuRaster()
{
    try { sync(); } catch (...) {}
    if (m_device) SDL_WaitForGPUIdle(m_device);
    for (auto *fence : m_scanoutFences)
        if (fence) SDL_ReleaseGPUFence(m_device, fence);
    for (auto *buffer : m_scanoutBuffers)
        if (buffer) SDL_ReleaseGPUTransferBuffer(m_device, buffer);
    if (m_rasterPipeline) SDL_ReleaseGPUComputePipeline(m_device, m_rasterPipeline);
    if (m_rasterBatchPipeline) SDL_ReleaseGPUComputePipeline(m_device, m_rasterBatchPipeline);
    if (m_rasterOrderedBatchPipeline) SDL_ReleaseGPUComputePipeline(m_device, m_rasterOrderedBatchPipeline);
    if (m_rasterOrderedUniformPipeline) SDL_ReleaseGPUComputePipeline(m_device, m_rasterOrderedUniformPipeline);
    if (m_uploadUniformPipeline) SDL_ReleaseGPUComputePipeline(m_device, m_uploadUniformPipeline);
    if (m_snapshotRasterPipeline) SDL_ReleaseGPUComputePipeline(m_device, m_snapshotRasterPipeline);
    if (m_serialRasterPipeline) SDL_ReleaseGPUComputePipeline(m_device, m_serialRasterPipeline);
    if (m_linePipeline) SDL_ReleaseGPUComputePipeline(m_device, m_linePipeline);
    if (m_clutPipeline) SDL_ReleaseGPUComputePipeline(m_device, m_clutPipeline);
    if (m_uploadPipeline) SDL_ReleaseGPUComputePipeline(m_device, m_uploadPipeline);
    if (m_localTransferPipeline) SDL_ReleaseGPUComputePipeline(m_device, m_localTransferPipeline);
    if (m_localReadbackPipeline) SDL_ReleaseGPUComputePipeline(m_device, m_localReadbackPipeline);
    if (m_scanoutPipeline) SDL_ReleaseGPUComputePipeline(m_device, m_scanoutPipeline);
    if (m_uploadBuffer) SDL_ReleaseGPUTransferBuffer(m_device, m_uploadBuffer);
    if (m_initUploadBuffer) SDL_ReleaseGPUTransferBuffer(m_device, m_initUploadBuffer);
    if (m_downloadBuffer) SDL_ReleaseGPUTransferBuffer(m_device, m_downloadBuffer);
    if (m_syncScanoutBuffer) SDL_ReleaseGPUTransferBuffer(m_device, m_syncScanoutBuffer);
    if (m_vramBuffer) SDL_ReleaseGPUBuffer(m_device, m_vramBuffer);
    if (m_lutBuffer) SDL_ReleaseGPUBuffer(m_device, m_lutBuffer);
    if (m_clutBuffer) SDL_ReleaseGPUBuffer(m_device, m_clutBuffer);
    if (m_transferDataBuffer) SDL_ReleaseGPUBuffer(m_device, m_transferDataBuffer);
    if (m_uploadOpsBuffer) SDL_ReleaseGPUBuffer(m_device, m_uploadOpsBuffer);
    if (m_drawParamsBuffer) SDL_ReleaseGPUBuffer(m_device, m_drawParamsBuffer);
    if (m_device)
    {
        SDL_DestroyGPUDevice(m_device);
    }
}

void GSSDLGpuRaster::check(bool ok, const char *operation) const
{
    if (!ok)
        throw std::runtime_error(std::string("SDL_GPU GS ") + operation + ": " + SDL_GetError());
}

void GSSDLGpuRaster::markHostDirty()
{
    materializeClut();
    m_lastClutLoadSlot = 0u;
    for (CachedClut &entry : m_cachedCluts) entry = {};
    m_hostDirty = true;
}

void GSSDLGpuRaster::copyClut(uint16_t *out) const
{
    if (out && m_hostClut)
        std::memcpy(out, m_hostClut, kClutBytes);
}

void GSSDLGpuRaster::setClut(const uint16_t *data)
{
    sync();
    m_lastClutLoadSlot = 0u;
    for (CachedClut &entry : m_cachedCluts) entry = {};
    m_activeClutOffset = 0u;
    if (!data) return;
    const Uint32 sourceOffset = stageUploadData(reinterpret_cast<const uint8_t *>(data), kClutBytes, UploadKind::Clut);
    auto *commands = SDL_AcquireGPUCommandBuffer(m_device);
    check(commands != nullptr, "CLUT upload command");
    auto *copy = SDL_BeginGPUCopyPass(commands);
    SDL_GPUTransferBufferLocation source{m_uploadBuffer, sourceOffset};
    SDL_GPUBufferRegion destination{m_clutBuffer, 0, kClutBytes};
    SDL_UploadToGPUBuffer(copy, &source, &destination, false);
    SDL_EndGPUCopyPass(copy);
    check(SDL_SubmitGPUCommandBuffer(commands), "CLUT upload submit");
    check(SDL_WaitForGPUIdle(m_device), "CLUT upload wait");
}

void GSSDLGpuRaster::invalidateCachedClut(uint64_t begin, uint64_t end)
{
    // Every GPU write to VRAM passes through here with its byte range.
    if (!m_scanoutSourceKnown || begin >= end || (begin < m_scanoutSourceEnd && m_scanoutSourceBegin < end))
        m_scanoutSourceDirty = true;
    for (CachedClut &entry : m_cachedCluts)
    {
        if (!entry.valid) continue;
        if (!entry.rangeKnown || begin >= end ||
            (begin < entry.rangeEnd && entry.rangeBegin < end))
            entry.valid = false;
    }
}

Uint32 GSSDLGpuRaster::stageUploadData(const uint8_t *data, Uint32 byteCount, UploadKind kind)
{
    return stageUploadDataParts(data, byteCount, nullptr, 0u, byteCount, kind);
}

Uint32 GSSDLGpuRaster::stageUploadDataParts(const uint8_t *first, Uint32 firstBytes,
    const uint8_t *second, Uint32 secondBytes, Uint32 secondOffset, UploadKind kind)
{
    const uint64_t totalBytes = uint64_t(secondOffset) + secondBytes;
    if (!first || firstBytes == 0u ||
        (secondBytes != 0u && (!second || secondOffset < firstBytes)) ||
        totalBytes == 0u || totalBytes > kUploadBufferBytes)
        throw std::runtime_error("SDL_GPU GS upload exceeds staging arena");
    const Uint32 byteCount = static_cast<Uint32>(totalBytes);
    constexpr Uint32 alignment = 256u;
    using Clock = std::chrono::steady_clock;
    auto elapsedNs = [](Clock::time_point begin, Clock::time_point end) -> uint64_t
    {
        return static_cast<uint64_t>(std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count());
    };
    Uint32 offset = (m_uploadBufferOffset + alignment - 1u) & ~(alignment - 1u);
    if (offset > kUploadBufferBytes || byteCount > kUploadBufferBytes - offset)
    {
        // Previously recorded copies may still reference earlier, disjoint
        // regions of this transfer buffer. Retire them before wrapping around.
        const auto finishBegin = Clock::now();
        finishPass();
        const uint64_t finishNs = elapsedNs(finishBegin, Clock::now());
        uint64_t submitNs = 0;
        uint64_t waitNs = 0;
        if (m_commands)
        {
            SDL_GPUCommandBuffer *submitted = m_commands;
            m_commands = nullptr;
            const auto submitBegin = Clock::now();
            SDL_GPUFence *fence = SDL_SubmitGPUCommandBufferAndAcquireFence(submitted);
            submitNs = elapsedNs(submitBegin, Clock::now());
            check(fence != nullptr, "upload arena submit");
            const auto waitBegin = Clock::now();
            const bool completed = SDL_WaitForGPUFences(m_device, true, &fence, 1);
            waitNs = elapsedNs(waitBegin, Clock::now());
            SDL_ReleaseGPUFence(m_device, fence);
            check(completed, "upload arena wait");
            ++m_uploadWrapFenceWaits;
            m_uploadWrapFenceWaitNs += waitNs;
            m_uploadWrapFenceMaxNs = std::max(m_uploadWrapFenceMaxNs, waitNs);
        }
        else
        {
            const auto waitBegin = Clock::now();
            check(SDL_WaitForGPUIdle(m_device), "upload arena idle");
            waitNs = elapsedNs(waitBegin, Clock::now());
            ++m_uploadWrapIdleWaits;
            m_uploadWrapIdleWaitNs += waitNs;
        }
        ++m_gpuWaits;
        ++m_uploadArenaWraps;
        if (sdlGpuStatsEnabled())
            std::fprintf(stderr, "[gs-sdl-gpu] upload-arena wrap=%llu staged=%llu MiB capacity=%u MiB finish=%.3fms submit=%.3fms fence=%.3fms maps=%llu map-total=%.3fms map-max=%.3fms idle-wraps=%llu idle-total=%.3fms\n",
                static_cast<unsigned long long>(m_uploadArenaWraps),
                static_cast<unsigned long long>(m_uploadStagedBytes / (1024u * 1024u)),
                kUploadBufferBytes / (1024u * 1024u),
                finishNs / 1.0e6, submitNs / 1.0e6, waitNs / 1.0e6,
                static_cast<unsigned long long>(m_uploadMapCalls), m_uploadMapTimeNs / 1.0e6,
                m_uploadMapMaxNs / 1.0e6,
                static_cast<unsigned long long>(m_uploadWrapIdleWaits), m_uploadWrapIdleWaitNs / 1.0e6);
        if (sdlGpuStatsEnabled())
            std::fprintf(stderr, "[gs-sdl-gpu] upload-source MiB clut=%llu host-vram=%llu raster-params=%llu image-batches=%llu\n",
                static_cast<unsigned long long>(m_uploadKindBytes[static_cast<size_t>(UploadKind::Clut)] / (1024u * 1024u)),
                static_cast<unsigned long long>(m_uploadKindBytes[static_cast<size_t>(UploadKind::HostVram)] / (1024u * 1024u)),
                static_cast<unsigned long long>(m_uploadKindBytes[static_cast<size_t>(UploadKind::RasterParams)] / (1024u * 1024u)),
                static_cast<unsigned long long>(m_uploadKindBytes[static_cast<size_t>(UploadKind::ImageBatch)] / (1024u * 1024u)));
        offset = 0u;
    }

    const auto mapBegin = Clock::now();
    auto *mapped = static_cast<uint8_t *>(SDL_MapGPUTransferBuffer(m_device, m_uploadBuffer, false));
    const uint64_t mapNs = elapsedNs(mapBegin, Clock::now());
    check(mapped != nullptr, "upload staging map");
    ++m_uploadMapCalls;
    m_uploadMapTimeNs += mapNs;
    m_uploadMapMaxNs = std::max(m_uploadMapMaxNs, mapNs);
    if (sdlGpuStatsEnabled() && (m_uploadMapCalls & 4095u) == 0u)
        std::fprintf(stderr, "[gs-sdl-gpu] upload-map calls=%llu total=%.3fms max=%.3fms staged=%llu MiB\n",
            static_cast<unsigned long long>(m_uploadMapCalls), m_uploadMapTimeNs / 1.0e6,
            m_uploadMapMaxNs / 1.0e6,
            static_cast<unsigned long long>(m_uploadStagedBytes / (1024u * 1024u)));
    std::memcpy(mapped + offset, first, firstBytes);
    if (secondBytes != 0u)
        std::memcpy(mapped + offset + secondOffset, second, secondBytes);
    SDL_UnmapGPUTransferBuffer(m_device, m_uploadBuffer);
    m_uploadStagedBytes += byteCount;
    const size_t kindIndex = static_cast<size_t>(kind);
    m_uploadKindBytes[kindIndex] += byteCount;
    const Uint32 alignedSize = (byteCount + alignment - 1u) & ~(alignment - 1u);
    m_uploadBufferOffset = offset + alignedSize;
    return offset;
}

// Copies the entries one CLUT load writes between two slots of the CLUT
// buffer. Unaffected CSA banks stay intact: selecting a complete cached
// snapshot would roll back other partial loads.
void GSSDLGpuRaster::copyClutEntries(SDL_GPUCopyPass *copy, const CachedClut &shape, uint32_t fromSlot, uint32_t toSlot)
{
    const uint32_t limit = shape.sixteen ? 512u : 256u;
    const uint32_t count = shape.entryCount - shape.firstEntry;
    const uint32_t firstCount = std::min(count, limit - shape.destinationBase);
    const auto copyRange = [&](uint32_t index, uint32_t length)
    {
        if (length == 0u) return;
        SDL_GPUBufferLocation source{m_clutBuffer, (fromSlot * 512u + index) * 2u};
        SDL_GPUBufferLocation destination{m_clutBuffer, (toSlot * 512u + index) * 2u};
        SDL_CopyGPUBufferToBuffer(copy, &source, &destination, length * 2u, false);
    };
    copyRange(shape.destinationBase, firstCount);
    copyRange(0u, count - firstCount);
    if (!shape.sixteen)
    {
        copyRange(shape.destinationBase + 256u, firstCount);
        copyRange(256u, count - firstCount);
    }
}

// Replays the queued cache-hit loads into slot 0, in GS order.
void GSSDLGpuRaster::materializeClut()
{
    if (m_pendingClutSlots.empty())
        return;
    finishPass();
    if (!m_commands) m_commands = SDL_AcquireGPUCommandBuffer(m_device);
    check(m_commands != nullptr, "CLUT replay command buffer");
    SDL_GPUCopyPass *copy = SDL_BeginGPUCopyPass(m_commands);
    check(copy != nullptr, "CLUT replay copy pass");
    for (uint8_t slot : m_pendingClutSlots)
    {
        CachedClut &entry = m_cachedCluts[slot - 1u];
        copyClutEntries(copy, entry, slot, 0u);
        for (CachedClut &cached : m_cachedCluts)
            if (cached.destinationBanks & entry.destinationBanks) cached.applied = false;
        entry.applied = true;
    }
    SDL_EndGPUCopyPass(copy);
    m_pendingClutSlots.clear();
}

void GSSDLGpuRaster::loadClut(const GSTex0Reg &tex, const GSTexClutReg &tc)
{
    flushPendingImageUpload(ImageFlushReason::ClutBarrier);
    if (m_hostDirty) uploadHostVram();

    const bool four = tex.psm == 20 || tex.psm == 36 || tex.psm == 44;
    const bool sixteen = tex.cpsm == 2 || tex.cpsm == 10;
    const bool swizzledCsm1 = tex.csm == 0 && !sixteen && !four;
    const uint32_t entryCount = four ? 16u : 256u;
    const uint32_t destinationBase = (tex.csa & (sixteen ? 31u : 15u)) << 4u;
    const uint32_t firstEntry = swizzledCsm1 ? destinationBase : 0u;
    uint32_t destinationBanks = 0u;
    for (uint32_t bank = 0u; bank < (entryCount - firstEntry) / 16u; ++bank)
        destinationBanks |= 1u << (((destinationBase / 16u) + bank) & (sixteen ? 31u : 15u));
    if (!sixteen) destinationBanks |= destinationBanks << 16u;
    CachedClut shape;
    shape.destinationBase = destinationBase;
    shape.firstEntry = firstEntry;
    shape.entryCount = entryCount;
    shape.sixteen = sixteen;
    shape.destinationBanks = destinationBanks;
    shape.fullRange = four || destinationBase == 0u;
    shape.psm = tex.psm; shape.cpsm = tex.cpsm; shape.csa = tex.csa; shape.csm = tex.csm;
    const std::array<uint32_t, 8> key{{tex.cbp, tc.cbw, tex.cpsm, tex.csm,
        tex.csa, tex.psm, tc.cou, tc.cov}};
    uint64_t sourceBegin = 0u, sourceEnd = 0u;
    const bool sourceRangeKnown = gsTransferRange(tex.cpsm, tex.cbp,
        tex.csm == 0u ? 1u : std::max<uint32_t>(tc.cbw, 1u),
        tex.csm == 0u ? 0u : uint32_t(tc.cou) * 16u,
        tex.csm == 0u ? 0u : tc.cov,
        tex.csm == 0u ? 16u : entryCount,
        tex.csm == 0u ? (four ? 2u : 16u) : 1u, sourceBegin, sourceEnd);
    ++m_totalClutLoads;
    if (sourceRangeKnown)
    {
        for (size_t i = 0; i < m_cachedCluts.size(); ++i)
        {
            CachedClut &entry = m_cachedCluts[i];
            if (entry.valid && entry.rangeKnown && entry.key == key &&
                entry.rangeBegin == sourceBegin && entry.rangeEnd == sourceEnd)
            {
                entry.lastUse = ++m_clutCacheClock;
                // Defer the copy into slot 0. Later loads must be replayed after
                // this one, so once anything is queued every hit is queued too.
                const uint8_t slot = static_cast<uint8_t>(i + 1u);
                if (!entry.applied || !m_pendingClutSlots.empty())
                {
                    if (m_pendingClutSlots.empty() || m_pendingClutSlots.back() != slot)
                        m_pendingClutSlots.push_back(slot);
                    if (m_pendingClutSlots.size() >= 256u)
                        materializeClut();
                }
                m_lastClutLoadSlot = slot;
                m_activeClutOffset = 0u;
                m_gpuClutDirty = true; // The host shadow now represents a different active palette slot.
                ++m_clutLoadCacheHits;
                if (sdlGpuStatsEnabled() && (m_totalClutLoads & 0xffffu) == 0u)
                    std::fprintf(stderr, "[gs-sdl-gpu] clut-loads=%llu dispatches=%llu cache-hits=%llu gpu-draws=%llu\n",
                        static_cast<unsigned long long>(m_totalClutLoads),
                        static_cast<unsigned long long>(m_clutLoadDispatches),
                        static_cast<unsigned long long>(m_clutLoadCacheHits),
                        static_cast<unsigned long long>(m_totalDraws));
                return;
            }
        }
    }
    // A miss rewrites slot 0 and recycles a cache slot: bring slot 0 up to date first.
    materializeClut();
    size_t targetSlot = 0;
    for (size_t i = 0; i < m_cachedCluts.size(); ++i)
    {
        if (!m_cachedCluts[i].valid) { targetSlot = i; break; }
        if (m_cachedCluts[i].lastUse < m_cachedCluts[targetSlot].lastUse) targetSlot = i;
    }
    m_activeClutOffset = 0u;
    if (!m_commands)
        m_commands = SDL_AcquireGPUCommandBuffer(m_device);
    check(m_commands != nullptr, "CLUT command buffer");
    Params params{};
    auto &p = params.p;
    p[15] = tex.cbp; p[16] = tc.cbw ? tc.cbw : 1; p[17] = tex.cpsm;
    p[18] = four ? 16 : 256; p[19] = (tex.csa & (sixteen ? 31u : 15u)) << 4;
    p[24] = tex.csm == 0 && !sixteen && !four; p[20] = p[24] ? p[19] : 0;
    p[21] = tex.csm; p[22] = uint32_t(tc.cou) << 4; p[23] = tc.cov;
    p[25] = m_activeClutOffset;
    finishPass();
    SDL_GPUStorageBufferReadWriteBinding writable{m_clutBuffer, false};
    SDL_GPUBuffer *readable[] = {m_vramBuffer, m_lutBuffer};
    m_compute = SDL_BeginGPUComputePass(m_commands, nullptr, 0, &writable, 1);
    check(m_compute != nullptr, "CLUT compute pass");
    SDL_BindGPUComputePipeline(m_compute, m_clutPipeline);
    SDL_PushGPUComputeUniformData(m_commands, 0, &params, sizeof(params));
    SDL_BindGPUComputeStorageBuffers(m_compute, 0, readable, 2);
    SDL_DispatchGPUCompute(m_compute, (p[18] - p[20] + 63u) / 64u, 1, 1);
    // Fill the cache slot with a second dispatch of the same load instead of a
    // blit from slot 0 (a copy pass between compute passes stalls the GPU queue).
    p[25] = static_cast<uint32_t>((targetSlot + 1u) * 512u);
    SDL_PushGPUComputeUniformData(m_commands, 0, &params, sizeof(params));
    SDL_DispatchGPUCompute(m_compute, (p[18] - p[20] + 63u) / 64u, 1, 1);
    finishPass();
    for (CachedClut &cached : m_cachedCluts)
        if (cached.destinationBanks & destinationBanks) cached.applied = false;
    m_gpuClutDirty = true;
    ++m_clutLoadDispatches;
    CachedClut &entry = m_cachedCluts[targetSlot];
    entry = shape;
    entry.key = key;
    entry.applied = true;
    m_lastClutLoadSlot = static_cast<uint32_t>(targetSlot + 1u);
    entry.rangeBegin = sourceBegin;
    entry.rangeEnd = sourceEnd;
    entry.rangeKnown = sourceRangeKnown;
    entry.valid = sourceRangeKnown;
    entry.lastUse = ++m_clutCacheClock;
    if (sdlGpuStatsEnabled() && (m_totalClutLoads & 0xffffu) == 0u)
        std::fprintf(stderr, "[gs-sdl-gpu] clut-loads=%llu dispatches=%llu cache-hits=%llu gpu-draws=%llu\n",
            static_cast<unsigned long long>(m_totalClutLoads),
            static_cast<unsigned long long>(m_clutLoadDispatches),
            static_cast<unsigned long long>(m_clutLoadCacheHits),
            static_cast<unsigned long long>(m_totalDraws));
}

void GSSDLGpuRaster::uploadHostVram()
{
    if (!m_flushingPendingUpload)
        flushPendingImageUpload(ImageFlushReason::VramBarrier);
    if (!m_hostDirty) return;
    m_scanoutSourceDirty = true;
    materializeClut();
    m_lastClutLoadSlot = 0u;
    for (CachedClut &entry : m_cachedCluts) entry = {};
    m_activeClutOffset = 0u;
    finishPass();
    const Uint32 sourceOffset = stageUploadData(m_hostVram, kVramBytes, UploadKind::HostVram);
    if (!m_commands)
        m_commands = SDL_AcquireGPUCommandBuffer(m_device);
    check(m_commands != nullptr, "VRAM upload command buffer");
    auto *copy = SDL_BeginGPUCopyPass(m_commands);
    SDL_GPUTransferBufferLocation source{m_uploadBuffer, sourceOffset};
    SDL_GPUBufferRegion destination{m_vramBuffer, 0, kVramBytes};
    SDL_UploadToGPUBuffer(copy, &source, &destination, false);
    SDL_EndGPUCopyPass(copy);
    m_hostDirty = false;
    m_vramUploadBytes += kVramBytes;
}

void GSSDLGpuRaster::finishPass()
{
    if (m_compute)
    {
        SDL_EndGPUComputePass(m_compute);
        m_compute = nullptr;
    }
    dispatchPendingRasterBatch();
    m_drawBatchRanges.clear();
    m_drawBatchReadRanges.clear();
    m_drawBatchDepthReadRanges.clear();
}

void GSSDLGpuRaster::dispatchPendingRasterBatch()
{
    if (m_pendingRasterDraws.empty())
        return;

    std::vector<Params> draws;
    draws.swap(m_pendingRasterDraws);
    const bool ordered = m_pendingRasterOrdered;
    m_pendingRasterOrdered = false;
    m_pendingRasterDraws.reserve(kMaxPendingRasterDraws);
    if (draws.size() == 1u)
    {
        if (!m_commands)
            m_commands = SDL_AcquireGPUCommandBuffer(m_device);
        check(m_commands != nullptr, "single raster command buffer");
        SDL_GPUStorageBufferReadWriteBinding writable{m_vramBuffer, false};
        SDL_GPUBuffer *readable[] = {m_lutBuffer, m_clutBuffer, m_transferDataBuffer};
        m_compute = SDL_BeginGPUComputePass(m_commands, nullptr, 0, &writable, 1);
        check(m_compute != nullptr, "single raster compute pass");
        SDL_BindGPUComputePipeline(m_compute, m_rasterPipeline);
        SDL_PushGPUComputeUniformData(m_commands, 0, &draws[0], sizeof(Params));
        SDL_BindGPUComputeStorageBuffers(m_compute, 0, readable, 2);
        SDL_DispatchGPUCompute(m_compute,
            (draws[0].p[30] - draws[0].p[28] + 8u) / 8u,
            (draws[0].p[31] - draws[0].p[29] + 8u) / 8u, 1u);
        SDL_EndGPUComputePass(m_compute);
        m_compute = nullptr;
        ++m_rasterDrawPasses;
        m_gpuVramDirty = true;
        return;
    }
    if (ordered && draws.size() <= kOrderedUniformMaxDraws)
    {
        // Small ordered batches travel as uniform data: no staging copy and no
        // blit pass in front of the compute pass (a blit into the buffer the
        // next pass reads costs far more GPU time than the draws themselves).
        struct UniformBatch
        {
            uint32_t header[4u + 2u * kOrderedUniformMaxDraws];
            Params draws[kOrderedUniformMaxDraws];
        };
        static_assert(sizeof(UniformBatch) < 32768u, "must fit one SDL_GPU uniform buffer");
        static UniformBatch uniform;
        uniform.header[0] = static_cast<uint32_t>(draws.size());
        uniform.header[1] = draws[0].p[60];
        uniform.header[2] = draws[0].p[61];
        uniform.header[3] = 0u;
        Uint32 right = 0u, bottom = 0u;
        for (size_t i = 0; i < draws.size(); ++i)
        {
            uniform.header[4u + 2u * i] = (draws[i].p[28] & 0xffffu) | (draws[i].p[29] << 16u);
            uniform.header[5u + 2u * i] = (draws[i].p[30] & 0xffffu) | (draws[i].p[31] << 16u);
            right = std::max(right, draws[i].p[30]);
            bottom = std::max(bottom, draws[i].p[31]);
        }
        std::memcpy(uniform.draws, draws.data(), draws.size() * sizeof(Params));
        if (!m_commands)
            m_commands = SDL_AcquireGPUCommandBuffer(m_device);
        check(m_commands != nullptr, "ordered raster command buffer");
        SDL_GPUStorageBufferReadWriteBinding target{m_vramBuffer, false};
        SDL_GPUBuffer *inputs[] = {m_lutBuffer, m_clutBuffer};
        m_compute = SDL_BeginGPUComputePass(m_commands, nullptr, 0, &target, 1);
        check(m_compute != nullptr, "ordered raster compute pass");
        SDL_BindGPUComputePipeline(m_compute, m_rasterOrderedUniformPipeline);
        SDL_PushGPUComputeUniformData(m_commands, 0, &uniform,
            static_cast<Uint32>(sizeof(uniform.header) + draws.size() * sizeof(Params)));
        SDL_BindGPUComputeStorageBuffers(m_compute, 0, inputs, 2);
        SDL_DispatchGPUCompute(m_compute, (right - uniform.header[1] + 8u) / 8u, (bottom - uniform.header[2] + 8u) / 8u, 1u);
        SDL_EndGPUComputePass(m_compute);
        m_compute = nullptr;
        ++m_rasterDrawPasses;
        m_gpuVramDirty = true;
        return;
    }
    Uint32 byteCount = static_cast<Uint32>(draws.size() * sizeof(Params));
    Uint32 sourceOffset = 0u;
    if (ordered)
    {
        // Compact bounds table: every pixel thread tests all draws, so keep
        // what it scans contiguous instead of striding through Params.
        std::array<uint32_t, kOrderedBatchHeaderBytes / sizeof(uint32_t)> header{};
        header[0] = static_cast<uint32_t>(draws.size());
        header[1] = draws[0].p[60];
        header[2] = draws[0].p[61];
        for (size_t i = 0; i < draws.size(); ++i)
        {
            header[4u + 2u * i] = (draws[i].p[28] & 0xffffu) | (draws[i].p[29] << 16u);
            header[5u + 2u * i] = (draws[i].p[30] & 0xffffu) | (draws[i].p[31] << 16u);
        }
        sourceOffset = stageUploadDataParts(reinterpret_cast<const uint8_t *>(header.data()), kOrderedBatchHeaderBytes,
            reinterpret_cast<const uint8_t *>(draws.data()), byteCount, kOrderedBatchHeaderBytes, UploadKind::RasterParams);
        byteCount += kOrderedBatchHeaderBytes;
    }
    else
        sourceOffset = stageUploadData(
            reinterpret_cast<const uint8_t *>(draws.data()), byteCount, UploadKind::RasterParams);
    if (!m_commands)
        m_commands = SDL_AcquireGPUCommandBuffer(m_device);
    check(m_commands != nullptr, "raster batch command buffer");

    SDL_GPUCopyPass *copy = SDL_BeginGPUCopyPass(m_commands);
    check(copy != nullptr, "raster batch parameter upload");
    SDL_GPUTransferBufferLocation source{m_uploadBuffer, sourceOffset};
    SDL_GPUBufferRegion destination{m_drawParamsBuffer, 0, byteCount};
    SDL_UploadToGPUBuffer(copy, &source, &destination, false);
    SDL_EndGPUCopyPass(copy);

    SDL_GPUStorageBufferReadWriteBinding writable{m_vramBuffer, false};
    SDL_GPUBuffer *readable[] = {m_drawParamsBuffer, m_lutBuffer, m_clutBuffer};
    m_compute = SDL_BeginGPUComputePass(m_commands, nullptr, 0, &writable, 1);
    check(m_compute != nullptr, "raster batch compute pass");
    SDL_BindGPUComputePipeline(m_compute, ordered ? m_rasterOrderedBatchPipeline : m_rasterBatchPipeline);
    SDL_BindGPUComputeStorageBuffers(m_compute, 0, readable, 3);

    Uint32 maxWidth = 1u, maxHeight = 1u;
    Uint32 maxRight = 0u, maxBottom = 0u;
    for (const Params &params : draws)
    {
        maxRight = std::max(maxRight, params.p[30]);
        maxBottom = std::max(maxBottom, params.p[31]);
        if (!ordered)
        {
            maxWidth = std::max(maxWidth, params.p[30] - params.p[28] + 1u);
            maxHeight = std::max(maxHeight, params.p[31] - params.p[29] + 1u);
        }
    }
    if (ordered)
    {
        maxWidth = maxRight - draws[0].p[60] + 1u;
        maxHeight = maxBottom - draws[0].p[61] + 1u;
    }
    SDL_DispatchGPUCompute(m_compute, (maxWidth + 7u) / 8u,
        (maxHeight + 7u) / 8u, ordered ? 1u : static_cast<Uint32>(draws.size()));
    SDL_EndGPUComputePass(m_compute);
    m_compute = nullptr;
    ++m_rasterDrawPasses;
    m_gpuVramDirty = true;
}

void GSSDLGpuRaster::submit(const GSPrimitiveBatch &batch, int minX, int minY, int maxX, int maxY, bool serial, bool snapshotTexture)
{
    // Backpressure: with every scanout slot still in flight the GPU is three
    // presented frames behind. Wait for the oldest one instead of queueing
    // seconds of work (which later surfaces as one long stall).
    {
        size_t oldest = kScanoutBufferCount;
        for (size_t i = 0; i < kScanoutBufferCount; ++i)
        {
            if (!m_scanoutFences[i]) { oldest = kScanoutBufferCount; break; }
            if (oldest == kScanoutBufferCount || m_scanoutSequences[i] < m_scanoutSequences[oldest]) oldest = i;
        }
        if (oldest != kScanoutBufferCount && m_scanoutSequences[oldest] != m_throttledScanoutSequence)
        {
            SDL_GPUFence *fence = m_scanoutFences[oldest];
            if (!SDL_QueryGPUFence(m_device, fence))
            {
                check(SDL_WaitForGPUFences(m_device, true, &fence, 1), "raster backpressure wait");
                ++m_gpuWaits;
            }
            m_throttledScanoutSequence = m_scanoutSequences[oldest];
        }
    }
    uploadHostVram();
    if (!m_commands)
        m_commands = SDL_AcquireGPUCommandBuffer(m_device);
    check(m_commands != nullptr, "raster command buffer");
    Params params{};
    auto &p = params.p;
    const auto &s = batch.state;
    const auto &c = s.context;
    const bool point = s.prim.type == GS_PRIM_POINT;
    const bool line = s.prim.type == GS_PRIM_LINE || s.prim.type == GS_PRIM_LINESTRIP || point;
    p[0] = point ? 2u : (line ? 1u : (s.prim.type == GS_PRIM_SPRITE ? 6u : 3u));
    p[1] = (s.prim.iip ? 1u : 0u) | (s.prim.tme ? 2u : 0u) | (s.prim.fst ? 4u : 0u) |
           (s.prim.fge ? 8u : 0u) | (s.prim.abe ? 16u : 0u) | (s.pabe ? 32u : 0u) |
           (s.linearFilter ? 64u : 0u);
    p[2] = c.frame.fbp * 32u; p[3] = std::max(c.frame.fbw, 1u); p[4] = c.frame.psm;
    p[5] = c.frame.fbmsk; p[6] = c.zbuf.zbp * 32u; p[7] = c.zbuf.psm; p[8] = c.zbuf.zmask;
    p[9] = c.test; p[10] = c.alpha & 255u; p[11] = (c.alpha >> 32) & 255u;
    p[12] = c.fba; p[13] = s.colclamp;
    p[14] = uint32_t(s.fogR) | (uint32_t(s.fogG) << 8u) | (uint32_t(s.fogB) << 16u);
    p[15] = c.tex0.tbp0; p[16] = std::max(unsigned(c.tex0.tbw), 1u); p[17] = c.tex0.psm;
    p[18] = s.textureWidth; p[19] = s.textureHeight; p[20] = c.tex0.tcc; p[21] = c.tex0.tfx;
    p[22] = c.clamp & 3u; p[23] = (c.clamp >> 2u) & 3u;
    p[24] = (c.clamp >> 4u) & 1023u; p[25] = (c.clamp >> 14u) & 1023u;
    p[26] = (c.clamp >> 24u) & 1023u; p[27] = (c.clamp >> 34u) & 1023u;
    p[28] = minX; p[29] = minY; p[30] = maxX; p[31] = maxY;
    p[32] = s.texa.ta0 | (uint32_t(s.texa.ta1) << 8u) | (uint32_t(s.texa.aem) << 16u);
    p[33] = c.tex0.cpsm; p[34] = c.tex0.csm; p[35] = c.tex0.csa;
    p[36] = uint32_t(s.dimx); p[37] = uint32_t(s.dimx >> 32u); p[38] = s.dthe ? 1u : 0u;
    p[39] = uint32_t(c.tex1); p[40] = uint32_t(c.tex1 >> 32u);
    p[41] = uint32_t(c.miptbp1); p[42] = uint32_t(c.miptbp1 >> 32u);
    p[43] = uint32_t(c.miptbp2); p[44] = uint32_t(c.miptbp2 >> 32u);
    p[45] = s.linearFilter ? 1u : 0u;
    p[46] = m_activeClutOffset;
    if (!m_pendingClutSlots.empty() && s.prim.tme)
    {
        const uint32_t psm = c.tex0.psm;
        const bool indexed = psm == 19u || psm == 20u || psm == 27u || psm == 36u || psm == 44u;
        if (indexed)
        {
            // Slot 0 is behind. A draw whose TEX0 matches the latest load reads
            // exactly the entries that load wrote, so it can sample the cache
            // slot; anything else needs the shared CLUT brought up to date.
            const CachedClut *last = m_lastClutLoadSlot ? &m_cachedCluts[m_lastClutLoadSlot - 1u] : nullptr;
            if (last && last->fullRange && last->psm == psm && last->cpsm == c.tex0.cpsm &&
                last->csa == c.tex0.csa && last->csm == c.tex0.csm)
                p[46] = m_lastClutLoadSlot * 512u;
            else
                materializeClut();
        }
    }
    for (unsigned j = 0; j < 3; ++j)
    {
        const auto &v = batch.vertices[j];
        float *o = params.v[j];
        o[0] = v.x - float(c.xyoffset.ofx >> 4); o[1] = v.y - float(c.xyoffset.ofy >> 4);
        o[2] = v.z; o[3] = v.r; o[4] = v.g; o[5] = v.b; o[6] = v.a;
        o[7] = v.s; o[8] = v.t; o[9] = v.q; o[10] = v.u; o[11] = v.v; o[12] = v.fog;
    }
    if (point)
        std::copy(params.v[0], params.v[0] + 13, params.v[1]);
    if (p[0] == 6u)
    {
        const bool rx = params.v[0][0] > params.v[1][0];
        const bool ry = params.v[0][1] > params.v[1][1];
        for (unsigned j = 0; j < 2; ++j)
        {
            float *o = params.v[j]; o[0] = float(int(o[0])); o[1] = float(int(o[1]));
            if (s.prim.fst) { o[10] = float(batch.vertices[j].u >> 4); o[11] = float(batch.vertices[j].v >> 4); }
            else { const float q = std::fabs(batch.vertices[1].q) > 1e-8f ? batch.vertices[1].q : 1.f;
                   o[10] = (o[7] / q) * p[18]; o[11] = (o[8] / q) * p[19]; }
        }
        if (rx) { std::swap(params.v[0][0], params.v[1][0]); std::swap(params.v[0][10], params.v[1][10]); }
        if (ry) { std::swap(params.v[0][1], params.v[1][1]); std::swap(params.v[0][11], params.v[1][11]); }
    }
    // Draws may share one compute pass only when conservative read/write page
    // ranges prove that no dispatch depends on another dispatch in the batch.
    struct DrawRange { uint64_t begin, end; };
    std::array<DrawRange, 2> drawRanges{};
    size_t drawRangeCount = 0;
    bool batchable = !line && !serial && !snapshotTexture &&
                     minX >= 0 && minY >= 0 && maxX >= minX && maxY >= minY;
    uint32_t batchRejectReason = batchable ? 0u : 3u;
    const uint32_t drawWidth = static_cast<uint32_t>(maxX - minX + 1);
    const uint32_t drawHeight = static_cast<uint32_t>(maxY - minY + 1);
    uint64_t rangeBegin = 0u, rangeEnd = 0u;
    std::array<DrawRange, 1> drawReadRanges{};
    size_t drawReadRangeCount = 0;
    uint32_t textureRejectKind = 0u;
    // A textured dispatch can share an encoder only if its entire possible
    // texture footprint is disjoint from every draw's writes in that pass.
    // Mipmapped and unknown layouts stay isolated until their footprints and
    // sampling semantics have an exact GPU differential test.
    if (batchable && s.prim.tme)
    {
        const bool hasMipRegs = (c.miptbp1 | c.miptbp2) != 0u;
        const uint32_t mmin = static_cast<uint32_t>((c.tex1 >> 6u) & 7u);
        const uint32_t mxl = std::min<uint32_t>(static_cast<uint32_t>((c.tex1 >> 2u) & 7u), 6u);
        int32_t kRaw = static_cast<int32_t>((c.tex1 >> 32u) & 0xfffu);
        if (kRaw & 0x800) kRaw -= 0x1000;
        const bool fixedLodNonpositive = (c.tex1 & 1u) != 0u && kRaw <= 0;
        const bool mipLevelCanRise = mxl != 0u && mmin >= 2u && !fixedLodNonpositive;
        // The sampler can only access mip levels when MMIN enables mipmapping,
        // MXL permits a nonzero level, and the LOD can be positive. Otherwise
        // MIPTBP is unreachable and the TEX0 range covers all texture reads.
        const bool baseOnly = !hasMipRegs || !mipLevelCanRise;
        bool textureRangeKnown = gsTransferRange(c.tex0.psm,
            c.tex0.tbp0, std::max<uint32_t>(c.tex0.tbw, 1u), 0u, 0u,
            s.textureWidth, s.textureHeight, rangeBegin, rangeEnd);
        uint64_t readBegin = rangeBegin, readEnd = rangeEnd;
        if (textureRangeKnown && !baseOnly)
        {
            // Widen the read footprint to every level the sampler can select,
            // using the same MIPTBP1/2 decoding as the shader.
            for (uint32_t level = 1u; level <= mxl && textureRangeKnown; ++level)
            {
                const uint64_t reg = level <= 3u ? c.miptbp1 : c.miptbp2;
                const uint32_t shift = ((level - 1u) % 3u) * 20u;
                const uint32_t bp = static_cast<uint32_t>((reg >> shift) & 0x3fffu);
                const uint32_t bw = static_cast<uint32_t>((reg >> (shift + 14u)) & 0x3fu);
                if (bp == 0u && bw == 0u)
                    continue; // the sampler falls back to level 0
                textureRangeKnown = gsTransferRange(c.tex0.psm, bp, std::max<uint32_t>(bw, 1u), 0u, 0u,
                    std::max<uint32_t>(1u, s.textureWidth >> level),
                    std::max<uint32_t>(1u, s.textureHeight >> level), rangeBegin, rangeEnd);
                readBegin = std::min(readBegin, rangeBegin);
                readEnd = std::max(readEnd, rangeEnd);
            }
        }
        batchable = textureRangeKnown;
        // Draws with mip registers stay isolated unless the wide-batch experiment
        // is on; only large base-only draws were validated in shared passes.
        if (!wideRasterBatchExperiment() && hasMipRegs && !(baseOnly && uint64_t(drawWidth) * drawHeight >= 4096u))
            batchable = false;
        if (!batchable)
            textureRejectKind = 3u;
        if (batchable)
            drawReadRanges[drawReadRangeCount++] = {readBegin, readEnd};
        if (!batchable) batchRejectReason = 4u;
    }
    if (batchable)
    {
        batchable = gsTransferRange(c.frame.psm, c.frame.fbp * 32u,
            std::max<uint32_t>(c.frame.fbw, 1u), static_cast<uint32_t>(minX),
            static_cast<uint32_t>(minY), drawWidth, drawHeight, rangeBegin, rangeEnd);
        if (!batchable) batchRejectReason = 5u;
        if (batchable)
            drawRanges[drawRangeCount++] = {rangeBegin, rangeEnd};
    }
    const bool depthUsed = !c.zbuf.zmask || ((c.test >> 17u) & 3u) >= 2u;
    std::array<DrawRange, 1> drawDepthReadRanges{};
    size_t drawDepthReadRangeCount = 0;
    if (batchable && !depthUsed)
    {
        batchable = gsTransferRange(c.zbuf.psm, c.zbuf.zbp * 32u,
            std::max<uint32_t>(c.frame.fbw, 1u), static_cast<uint32_t>(minX),
            static_cast<uint32_t>(minY), drawWidth, drawHeight, rangeBegin, rangeEnd);
        if (!batchable) batchRejectReason = 5u;
        if (batchable)
            drawDepthReadRanges[drawDepthReadRangeCount++] = {rangeBegin, rangeEnd};
    }
    if (minX >= 0 && minY >= 0 && drawWidth != 0u && drawHeight != 0u &&
        gsTransferRange(c.frame.psm, c.frame.fbp * 32u,
            std::max<uint32_t>(c.frame.fbw, 1u), static_cast<uint32_t>(minX),
            static_cast<uint32_t>(minY), drawWidth, drawHeight, rangeBegin, rangeEnd))
        invalidateCachedClut(rangeBegin, rangeEnd);
    else
        invalidateCachedClut(0u, kVramBytes);
    if (depthUsed)
    {
        if (minX >= 0 && minY >= 0 && drawWidth != 0u && drawHeight != 0u &&
            gsTransferRange(c.zbuf.psm, c.zbuf.zbp * 32u,
                std::max<uint32_t>(c.frame.fbw, 1u), static_cast<uint32_t>(minX),
                static_cast<uint32_t>(minY), drawWidth, drawHeight, rangeBegin, rangeEnd))
            invalidateCachedClut(rangeBegin, rangeEnd);
        else
            invalidateCachedClut(0u, kVramBytes);
    }
    if (batchable && depthUsed)
    {
        batchable = gsTransferRange(c.zbuf.psm, c.zbuf.zbp * 32u,
            std::max<uint32_t>(c.frame.fbw, 1u), static_cast<uint32_t>(minX),
            static_cast<uint32_t>(minY), drawWidth, drawHeight, rangeBegin, rangeEnd);
        if (!batchable) batchRejectReason = 5u;
        if (batchable)
            drawRanges[drawRangeCount++] = {rangeBegin, rangeEnd};
    }
    if (batchable)
    {
        for (const DrawRange &write : drawRanges)
            for (const DrawRange &read : drawDepthReadRanges)
                if (write.begin < read.end && read.begin < write.end)
                {
                    batchable = false;
                    batchRejectReason = 6u;
                }
        if (batchable && depthUsed && drawRangeCount == 2u &&
            drawRanges[0].begin < drawRanges[1].end && drawRanges[1].begin < drawRanges[0].end)
        {
            batchable = false;
            batchRejectReason = 6u;
        }
    }
    bool independent = batchable;
    if (independent)
    {
        // A draw must not read or write pages another dispatch in this pass
        // writes. Dispatch ordering alone is not a memory barrier in Metal.
        for (const DrawRange &candidate : drawRanges)
            for (const DrawRange &candidateRead : drawReadRanges)
                if (candidate.begin < candidateRead.end && candidateRead.begin < candidate.end)
                    independent = false;
        for (const DrawRange &candidate : drawRanges)
        {
            for (const DrawAccessRange &active : m_drawBatchRanges)
            {
                if (candidate.begin < active.end && active.begin < candidate.end)
                {
                    independent = false;
                    break;
                }
            }
            if (!independent) break;
        }
        if (independent)
        {
            for (const DrawRange &candidateRead : drawReadRanges)
                for (const DrawAccessRange &active : m_drawBatchRanges)
                    if (candidateRead.begin < active.end && active.begin < candidateRead.end)
                    {
                        independent = false;
                        break;
                    }
        }
        if (independent)
        {
            for (const DrawRange &candidate : drawRanges)
                for (const DrawAccessRange &activeRead : m_drawBatchReadRanges)
                    if (candidate.begin < activeRead.end && activeRead.begin < candidate.end)
                    {
                        independent = false;
                        break;
                    }
        }
        if (independent)
        {
            for (const DrawRange &candidate : drawRanges)
                for (const DrawAccessRange &activeRead : m_drawBatchDepthReadRanges)
                    if (candidate.begin < activeRead.end && activeRead.begin < candidate.end)
                    {
                        independent = false;
                        break;
                    }
        }
        if (independent)
        {
            for (const DrawRange &candidateRead : drawDepthReadRanges)
                for (const DrawAccessRange &active : m_drawBatchRanges)
                    if (candidateRead.begin < active.end && active.begin < candidateRead.end)
                    {
                        independent = false;
                        break;
                    }
        }
    }
    auto orderedBatchCompatible = [&]()
    {
        if (!batchable || line || serial || snapshotTexture ||
            (c.frame.psm != 0u && c.frame.psm != 1u) || m_pendingRasterDraws.empty())
            return false;
        auto depthAccessIsDisjoint = [](const Params &draw)
        {
            if (draw.p[7] != 48u && draw.p[7] != 49u) return false;
            const uint32_t width = draw.p[30] - draw.p[28] + 1u;
            const uint32_t height = draw.p[31] - draw.p[29] + 1u;
            uint64_t frameBegin = 0u, frameEnd = 0u, depthBegin = 0u, depthEnd = 0u;
            if (!gsTransferRange(draw.p[4], draw.p[2], draw.p[3], draw.p[28], draw.p[29],
                    width, height, frameBegin, frameEnd) ||
                !gsTransferRange(draw.p[7], draw.p[6], draw.p[3], draw.p[28], draw.p[29],
                    width, height, depthBegin, depthEnd))
                return false;
            return frameEnd <= depthBegin || depthEnd <= frameBegin;
        };
        if (!depthAccessIsDisjoint(params)) return false;
        for (const Params &active : m_pendingRasterDraws)
            if (active.p[2] != p[2] || active.p[3] != p[3] || active.p[4] != p[4] ||
                active.p[6] != p[6] || active.p[7] != p[7] || active.p[8] != p[8] ||
                !depthAccessIsDisjoint(active))
                return false;
        if (m_pendingRasterDraws.size() >= std::min(orderedBatchMaxDraws(), kMaxPendingRasterDraws))
            return false;
        uint32_t unionLeft = static_cast<uint32_t>(minX), unionTop = static_cast<uint32_t>(minY);
        uint32_t unionRight = static_cast<uint32_t>(maxX), unionBottom = static_cast<uint32_t>(maxY);
        uint64_t summedDrawArea = uint64_t(drawWidth) * drawHeight;
        for (const Params &active : m_pendingRasterDraws)
        {
            unionLeft = std::min(unionLeft, active.p[28]);
            unionTop = std::min(unionTop, active.p[29]);
            unionRight = std::max(unionRight, active.p[30]);
            unionBottom = std::max(unionBottom, active.p[31]);
            summedDrawArea += uint64_t(active.p[30] - active.p[28] + 1u) *
                uint64_t(active.p[31] - active.p[29] + 1u);
        }
        const uint64_t orderedPixelWork = uint64_t(unionRight - unionLeft + 1u) *
            uint64_t(unionBottom - unionTop + 1u) * (m_pendingRasterDraws.size() + 1u);
        // Every pixel of the union tests every draw's bounds. Small clustered
        // triangles are far cheaper to test than to encode as separate passes,
        // so allow a fixed amount of bounds-test work beyond the covered area.
        if (orderedPixelWork > std::max<uint64_t>(summedDrawArea * 4u, orderedBatchWorkBudget()))
            return false;
        for (const DrawRange &write : drawRanges)
        {
            for (const DrawRange &read : drawReadRanges)
                if (write.begin < read.end && read.begin < write.end) return false;
            for (const DrawAccessRange &read : m_drawBatchReadRanges)
                if (write.begin < read.end && read.begin < write.end) return false;
        }
        for (const DrawRange &read : drawReadRanges)
            for (const DrawAccessRange &write : m_drawBatchRanges)
                if (read.begin < write.end && write.begin < read.end) return false;
        return true;
    };
    bool orderedCompatible = orderedBatchCompatible();
    if (!m_pendingRasterOrdered && independent)
        orderedCompatible = false;
    if (sdlGpuStatsEnabled())
    {
        ++m_drawBatchDecisions[0];
        if (independent)
            ++m_drawBatchDecisions[1];
        else if (orderedCompatible)
            ++m_drawBatchDecisions[2];
        else if (!batchable)
        {
            ++m_drawBatchDecisions[std::min<uint32_t>(batchRejectReason, 6u)];
            if (batchRejectReason == 4u && textureRejectKind != 0u)
            {
                ++m_drawBatchDecisions[7u + textureRejectKind];
                if (textureRejectKind == 2u)
                {
                    const uint64_t area = uint64_t(drawWidth) * drawHeight;
                    const size_t bin = area <= 16u ? 0u : area <= 64u ? 1u :
                        area <= 256u ? 2u : area <= 1024u ? 3u : 4u;
                    ++m_mipBaseOnlySmallAreaBins[bin];
                }
            }
        }
        else
            ++m_drawBatchDecisions[7];
    }
    if (m_pendingRasterOrdered && !orderedCompatible)
    {
        finishPass();
        independent = batchable;
    }
    if (batchable && (independent || orderedCompatible))
    {
        if (!m_pendingRasterDraws.empty())
            ++m_rasterDrawsBatched;
        if (orderedCompatible)
        {
            if (!m_pendingRasterOrdered)
            {
                if (m_pendingRasterDraws.size() > 1u)
                    m_rasterOrderedDrawsBatched += m_pendingRasterDraws.size() - 1u;
                m_pendingRasterOrdered = true;
                uint32_t originX = p[28], originY = p[29];
                for (const Params &active : m_pendingRasterDraws)
                {
                    originX = std::min(originX, active.p[28]);
                    originY = std::min(originY, active.p[29]);
                }
                m_pendingRasterDraws.front().p[60] = originX;
                m_pendingRasterDraws.front().p[61] = originY;
            }
            m_pendingRasterDraws.front().p[60] = std::min(m_pendingRasterDraws.front().p[60], p[28]);
            m_pendingRasterDraws.front().p[61] = std::min(m_pendingRasterDraws.front().p[61], p[29]);
            ++m_rasterOrderedDrawsBatched;
        }
        else if (m_pendingRasterDraws.empty())
            m_pendingRasterOrdered = false;
        m_pendingRasterDraws.push_back(params);
        for (size_t i = 0; i < drawRangeCount; ++i)
            m_drawBatchRanges.push_back({drawRanges[i].begin, drawRanges[i].end});
        for (size_t i = 0; i < drawReadRangeCount; ++i)
            m_drawBatchReadRanges.push_back({drawReadRanges[i].begin, drawReadRanges[i].end});
        if (!orderedCompatible)
            for (size_t i = 0; i < drawDepthReadRangeCount; ++i)
                m_drawBatchDepthReadRanges.push_back({drawDepthReadRanges[i].begin, drawDepthReadRanges[i].end});
        m_gpuVramDirty = true;
        ++m_totalDraws;
        if (m_pendingRasterDraws.size() >= kMaxPendingRasterDraws)
            finishPass();
        if (sdlGpuStatsEnabled() && (m_totalDraws & 0xffffu) == 0u)
            std::fprintf(stderr, "[gs-sdl-gpu] accelerated-draws=%llu clut-loads=%llu raster-passes=%llu batched-draws=%llu ordered-batched=%llu\n"
                "[gs-sdl-gpu] batch-decisions=%llu independent=%llu ordered=%llu shape=%llu texture=%llu target=%llu self-hazard=%llu dependency=%llu mip-sampled=%llu base-only-small=%llu tex-range=%llu\n"
                "[gs-sdl-gpu] base-only-small-area<=16/64/256/1024/>1024=%llu/%llu/%llu/%llu/%llu\n",
                static_cast<unsigned long long>(m_totalDraws),
                static_cast<unsigned long long>(m_totalClutLoads),
                static_cast<unsigned long long>(m_rasterDrawPasses),
                static_cast<unsigned long long>(m_rasterDrawsBatched),
                static_cast<unsigned long long>(m_rasterOrderedDrawsBatched),
                static_cast<unsigned long long>(m_drawBatchDecisions[0]),
                static_cast<unsigned long long>(m_drawBatchDecisions[1]),
                static_cast<unsigned long long>(m_drawBatchDecisions[2]),
                static_cast<unsigned long long>(m_drawBatchDecisions[3]),
                static_cast<unsigned long long>(m_drawBatchDecisions[4]),
                static_cast<unsigned long long>(m_drawBatchDecisions[5]),
                static_cast<unsigned long long>(m_drawBatchDecisions[6]),
                static_cast<unsigned long long>(m_drawBatchDecisions[7]),
                static_cast<unsigned long long>(m_drawBatchDecisions[8]),
                static_cast<unsigned long long>(m_drawBatchDecisions[9]),
                static_cast<unsigned long long>(m_drawBatchDecisions[10]),
                static_cast<unsigned long long>(m_mipBaseOnlySmallAreaBins[0]),
                static_cast<unsigned long long>(m_mipBaseOnlySmallAreaBins[1]),
                static_cast<unsigned long long>(m_mipBaseOnlySmallAreaBins[2]),
                static_cast<unsigned long long>(m_mipBaseOnlySmallAreaBins[3]),
                static_cast<unsigned long long>(m_mipBaseOnlySmallAreaBins[4]));
        return;
    }
    finishPass();
    if (snapshotTexture)
    {
        SDL_GPUCopyPass *copy = SDL_BeginGPUCopyPass(m_commands);
        check(copy != nullptr, "texture snapshot copy pass");
        SDL_GPUBufferLocation source{m_vramBuffer, 0};
        SDL_GPUBufferLocation target{m_transferDataBuffer, 0};
        SDL_CopyGPUBufferToBuffer(copy, &source, &target, kVramBytes, false);
        SDL_EndGPUCopyPass(copy);
    }
    SDL_GPUStorageBufferReadWriteBinding writable{m_vramBuffer, false};
    SDL_GPUBuffer *readable[] = {m_lutBuffer, m_clutBuffer, m_transferDataBuffer};
    if (serial)
    {
        // Keep each ordered GPU job bounded. A 1024x256 alias otherwise puts
        // every pixel in one Metal invocation and can stall the command queue.
        constexpr int kRowsPerDispatch = 8;
        for (int row = minY; row <= maxY; row += kRowsPerDispatch)
        {
            params.p[29] = static_cast<uint32_t>(row);
            params.p[31] = static_cast<uint32_t>(std::min(row + kRowsPerDispatch - 1, maxY));
            m_compute = SDL_BeginGPUComputePass(m_commands, nullptr, 0, &writable, 1);
            check(m_compute != nullptr, "ordered raster compute pass");
            SDL_BindGPUComputePipeline(m_compute, m_serialRasterPipeline);
            SDL_PushGPUComputeUniformData(m_commands, 0, &params, sizeof(params));
            SDL_BindGPUComputeStorageBuffers(m_compute, 0, readable, 2);
            SDL_DispatchGPUCompute(m_compute, 1, 1, 1);
            finishPass();
        }
        m_gpuVramDirty = true;
        ++m_totalDraws;
        return;
    }
    if (!m_compute)
    {
        m_compute = SDL_BeginGPUComputePass(m_commands, nullptr, 0, &writable, 1);
        check(m_compute != nullptr, "raster compute pass");
        ++m_rasterDrawPasses;
    }
    SDL_BindGPUComputePipeline(m_compute, line ? m_linePipeline : (serial ? m_serialRasterPipeline : (snapshotTexture ? m_snapshotRasterPipeline : m_rasterPipeline)));
    SDL_PushGPUComputeUniformData(m_commands, 0, &params, sizeof(params));
    SDL_BindGPUComputeStorageBuffers(m_compute, 0, readable, snapshotTexture ? 3 : 2);
    if (line)
    {
        const int dx = std::abs(static_cast<int>(params.v[1][0]) - static_cast<int>(params.v[0][0]));
        const int dy = std::abs(static_cast<int>(params.v[1][1]) - static_cast<int>(params.v[0][1]));
        const Uint32 steps = static_cast<Uint32>(std::max(dx, dy));
        SDL_DispatchGPUCompute(m_compute, (steps + 1u + 63u) / 64u, 1, 1);
    }
    else
    {
        SDL_DispatchGPUCompute(m_compute, (Uint32(maxX - minX + 1) + 7u) / 8u,
            (Uint32(maxY - minY + 1) + 7u) / 8u, 1);
    }
    finishPass();
    m_gpuVramDirty = true;
    ++m_totalDraws;
    if (sdlGpuStatsEnabled() && (m_totalDraws & 0xffffu) == 0u)
        std::fprintf(stderr, "[gs-sdl-gpu] accelerated-draws=%llu clut-loads=%llu raster-passes=%llu batched-draws=%llu ordered-batched=%llu\n"
            "[gs-sdl-gpu] batch-decisions=%llu independent=%llu ordered=%llu shape=%llu texture=%llu target=%llu self-hazard=%llu dependency=%llu mip-sampled=%llu base-only-small=%llu tex-range=%llu\n"
            "[gs-sdl-gpu] base-only-small-area<=16/64/256/1024/>1024=%llu/%llu/%llu/%llu/%llu\n",
            static_cast<unsigned long long>(m_totalDraws),
            static_cast<unsigned long long>(m_totalClutLoads),
            static_cast<unsigned long long>(m_rasterDrawPasses),
            static_cast<unsigned long long>(m_rasterDrawsBatched),
            static_cast<unsigned long long>(m_rasterOrderedDrawsBatched),
            static_cast<unsigned long long>(m_drawBatchDecisions[0]),
            static_cast<unsigned long long>(m_drawBatchDecisions[1]),
            static_cast<unsigned long long>(m_drawBatchDecisions[2]),
            static_cast<unsigned long long>(m_drawBatchDecisions[3]),
            static_cast<unsigned long long>(m_drawBatchDecisions[4]),
            static_cast<unsigned long long>(m_drawBatchDecisions[5]),
            static_cast<unsigned long long>(m_drawBatchDecisions[6]),
            static_cast<unsigned long long>(m_drawBatchDecisions[7]),
            static_cast<unsigned long long>(m_drawBatchDecisions[8]),
            static_cast<unsigned long long>(m_drawBatchDecisions[9]),
            static_cast<unsigned long long>(m_drawBatchDecisions[10]),
            static_cast<unsigned long long>(m_mipBaseOnlySmallAreaBins[0]),
            static_cast<unsigned long long>(m_mipBaseOnlySmallAreaBins[1]),
            static_cast<unsigned long long>(m_mipBaseOnlySmallAreaBins[2]),
            static_cast<unsigned long long>(m_mipBaseOnlySmallAreaBins[3]),
            static_cast<unsigned long long>(m_mipBaseOnlySmallAreaBins[4]));
}

bool GSSDLGpuRaster::uploadImage(const GSTransferCommand &command, uint32_t startPixel,
                                 const uint8_t *data, uint32_t pixelCount)
{
    const uint8_t psm = command.bitbltbuf.dpsm;
    uint32_t bitsPerPixel = 0;
    switch (psm)
    {
    case GS_PSM_CT32: case GS_PSM_Z32: bitsPerPixel = 32u; break;
    case GS_PSM_CT24: case GS_PSM_Z24: bitsPerPixel = 24u; break;
    case GS_PSM_CT16: case GS_PSM_CT16S: case GS_PSM_Z16: case GS_PSM_Z16S: bitsPerPixel = 16u; break;
    case GS_PSM_T8: case GS_PSM_T8H: bitsPerPixel = 8u; break;
    case GS_PSM_T4: case GS_PSM_T4HL: case GS_PSM_T4HH: bitsPerPixel = 4u; break;
    default: return false;
    }
    if (!data || pixelCount == 0u || uint64_t(pixelCount) * bitsPerPixel > uint64_t(kVramBytes) * 8u ||
        command.trxreg.rrw == 0u)
        return false;

    auto sameTransfer = [](const GSTransferCommand &a, const GSTransferCommand &b)
    {
        return a.bitbltbuf.dbp == b.bitbltbuf.dbp && a.bitbltbuf.dbw == b.bitbltbuf.dbw &&
               a.bitbltbuf.dpsm == b.bitbltbuf.dpsm && a.trxpos.dsax == b.trxpos.dsax &&
               a.trxpos.dsay == b.trxpos.dsay && a.trxreg.rrw == b.trxreg.rrw &&
               a.trxreg.rrh == b.trxreg.rrh && a.trxpos.dir == b.trxpos.dir;
    };
    const size_t byteCount = static_cast<size_t>((uint64_t(pixelCount) * bitsPerPixel + 7u) / 8u);
    if (byteCount > kVramBytes)
        return false;

    uint64_t rangeBegin = 0u, rangeEnd = 0u;
    const bool rangeKnown = gsTransferRange(psm, command.bitbltbuf.dbp,
        std::max<uint32_t>(command.bitbltbuf.dbw, 1u), command.trxpos.dsax,
        command.trxpos.dsay, command.trxreg.rrw, command.trxreg.rrh, rangeBegin, rangeEnd);
    if (rangeKnown) invalidateCachedClut(rangeBegin, rangeEnd);
    else invalidateCachedClut(0u, kVramBytes);

    if (!m_pendingImageUploads.empty())
    {
        PendingImageUpload &last = m_pendingImageUploads.back();
        const bool canAppendChunk = sameTransfer(command, last.command) &&
            bitsPerPixel == last.bitsPerPixel && startPixel == last.nextPixel;
        if (canAppendChunk && m_pendingUploadData.size() + byteCount <= kVramBytes)
        {
            m_pendingUploadData.insert(m_pendingUploadData.end(), data, data + byteCount);
            last.pixelCount += pixelCount;
            last.nextPixel += pixelCount;
            ++m_imageUploadChunks;
            return true;
        }

        const bool overlaps = !rangeKnown || std::any_of(m_pendingImageUploads.begin(), m_pendingImageUploads.end(),
            [&](const PendingImageUpload &pending)
            {
                if (!pending.rangeKnown) return true;
                if (!(rangeBegin < pending.rangeEnd && pending.rangeBegin < rangeEnd)) return false;
                return gsTransferChunksOverlap(command, startPixel, pixelCount,
                    pending.command, pending.startPixel, pending.pixelCount);
            });
        const size_t alignedDataBytes = (m_pendingUploadData.size() + 3u) & ~size_t(3u);
        if (canAppendChunk || overlaps || m_pendingImageUploads.size() >= kMaxPendingImageUploads ||
            alignedDataBytes + byteCount > kVramBytes)
        {
            const ImageFlushReason reason = !rangeKnown ? ImageFlushReason::UnknownRange :
                overlaps ? ImageFlushReason::Overlap :
                m_pendingImageUploads.size() >= kMaxPendingImageUploads ? ImageFlushReason::OperationLimit :
                ImageFlushReason::ByteLimit;
            flushPendingImageUpload(reason);
        }
    }

    const size_t alignedOffset = (m_pendingUploadData.size() + 3u) & ~size_t(3u);
    m_pendingUploadData.resize(alignedOffset, 0u);
    PendingImageUpload pending{};
    pending.command = command;
    pending.startPixel = startPixel;
    pending.pixelCount = pixelCount;
    pending.nextPixel = startPixel + pixelCount;
    pending.bitsPerPixel = bitsPerPixel;
    pending.sourceByteOffset = static_cast<uint32_t>(alignedOffset);
    pending.rangeBegin = rangeBegin;
    pending.rangeEnd = rangeEnd;
    pending.rangeKnown = rangeKnown;
    m_pendingImageUploads.push_back(pending);
    m_pendingUploadData.insert(m_pendingUploadData.end(), data, data + byteCount);
    ++m_imageUploadChunks;

    // Unknown or wrapping ranges cannot be proven independent from later GPU
    // writes, so keep them ordered as single-operation batches.
    if (!rangeKnown)
        flushPendingImageUpload(ImageFlushReason::UnknownRange);
    return true;
}

void GSSDLGpuRaster::flushPendingImageUpload(ImageFlushReason reason)
{
    if (m_pendingImageUploads.empty())
        return;
    ++m_imageUploadFlushReasons[static_cast<size_t>(reason)];
    m_flushingPendingUpload = true;
    try
    {
        dispatchImageUploadBatch();
    }
    catch (...)
    {
        m_flushingPendingUpload = false;
        throw;
    }
    m_flushingPendingUpload = false;
    ++m_imageUploadBatches;
    m_imageUploadPayloadBytes += m_pendingUploadData.size();
    if (sdlGpuStatsEnabled() && (m_imageUploadBatches & 0xffffu) == 0u)
        std::fprintf(stderr, "[gs-sdl-gpu] image-batches=%llu chunks=%llu avg-chunks=%.3f avg-payload=%.1fKiB flush(overlap/unknown/op-limit/byte-limit/clut/vram/barrier)=%llu/%llu/%llu/%llu/%llu/%llu/%llu\n",
            static_cast<unsigned long long>(m_imageUploadBatches),
            static_cast<unsigned long long>(m_imageUploadChunks),
            double(m_imageUploadChunks) / double(m_imageUploadBatches),
            double(m_imageUploadPayloadBytes) / double(m_imageUploadBatches) / 1024.0,
            static_cast<unsigned long long>(m_imageUploadFlushReasons[static_cast<size_t>(ImageFlushReason::Overlap)]),
            static_cast<unsigned long long>(m_imageUploadFlushReasons[static_cast<size_t>(ImageFlushReason::UnknownRange)]),
            static_cast<unsigned long long>(m_imageUploadFlushReasons[static_cast<size_t>(ImageFlushReason::OperationLimit)]),
            static_cast<unsigned long long>(m_imageUploadFlushReasons[static_cast<size_t>(ImageFlushReason::ByteLimit)]),
            static_cast<unsigned long long>(m_imageUploadFlushReasons[static_cast<size_t>(ImageFlushReason::ClutBarrier)]),
            static_cast<unsigned long long>(m_imageUploadFlushReasons[static_cast<size_t>(ImageFlushReason::VramBarrier)]),
            static_cast<unsigned long long>(m_imageUploadFlushReasons[static_cast<size_t>(ImageFlushReason::OtherBarrier)]));
    m_pendingUploadData.clear();
    m_pendingImageUploads.clear();
}

void GSSDLGpuRaster::dispatchImageUploadBatch()
{
    uploadHostVram();
    finishPass();
    std::vector<ImageUploadOp> operations;
    operations.reserve(m_pendingImageUploads.size());
    uint32_t maxPixelCount = 0u;
    for (const PendingImageUpload &pending : m_pendingImageUploads)
    {
        operations.push_back({pending.sourceByteOffset, pending.command.bitbltbuf.dbp,
            std::max<uint32_t>(pending.command.bitbltbuf.dbw, 1u), pending.command.bitbltbuf.dpsm,
            pending.command.trxpos.dsax, pending.command.trxpos.dsay, pending.command.trxreg.rrw,
            pending.startPixel, pending.pixelCount, pending.bitsPerPixel});
        maxPixelCount = std::max(maxPixelCount, pending.pixelCount);
    }
    {
        // Small batches travel as uniform data: operations and pixels in one
        // push, with no blit pass in front of the compute pass.
        const size_t opsWords = operations.size() * (sizeof(ImageUploadOp) / sizeof(uint32_t));
        const size_t payloadWords = (m_pendingUploadData.size() + 3u) / 4u + 1u; // +1: the kernel may read one word ahead
        const size_t totalWords = 4u + opsWords + payloadWords;
        if (totalWords * sizeof(uint32_t) <= 32000u)
        {
            static std::vector<uint32_t> uniform;
            uniform.assign(totalWords, 0u);
            uniform[0] = static_cast<uint32_t>(operations.size());
            uniform[1] = static_cast<uint32_t>(4u + opsWords);
            std::memcpy(uniform.data() + 4u, operations.data(), opsWords * sizeof(uint32_t));
            std::memcpy(uniform.data() + 4u + opsWords, m_pendingUploadData.data(), m_pendingUploadData.size());
            if (!m_commands)
                m_commands = SDL_AcquireGPUCommandBuffer(m_device);
            check(m_commands != nullptr, "image upload command buffer");
            SDL_GPUStorageBufferReadWriteBinding target{m_vramBuffer, false};
            SDL_GPUBuffer *inputs[] = {m_lutBuffer};
            m_compute = SDL_BeginGPUComputePass(m_commands, nullptr, 0, &target, 1);
            check(m_compute != nullptr, "image upload compute pass");
            SDL_BindGPUComputePipeline(m_compute, m_uploadUniformPipeline);
            SDL_PushGPUComputeUniformData(m_commands, 0, uniform.data(), static_cast<Uint32>(totalWords * sizeof(uint32_t)));
            SDL_BindGPUComputeStorageBuffers(m_compute, 0, inputs, 1);
            SDL_DispatchGPUCompute(m_compute, (maxPixelCount + 63u) / 64u, static_cast<Uint32>(operations.size()), 1);
            m_gpuVramDirty = true;
            return;
        }
    }
    const Uint32 opsOffset = static_cast<Uint32>((m_pendingUploadData.size() + 3u) & ~size_t(3u));
    const Uint32 opsBytes = static_cast<Uint32>(operations.size() * sizeof(ImageUploadOp));
    const Uint32 sourceOffset = stageUploadDataParts(m_pendingUploadData.data(),
        static_cast<Uint32>(m_pendingUploadData.size()),
        reinterpret_cast<const uint8_t *>(operations.data()), opsBytes, opsOffset, UploadKind::ImageBatch);
    // stageUploadData may retire the current command buffer when the arena
    // wraps, so acquire only after staging has completed.
    if (!m_commands)
        m_commands = SDL_AcquireGPUCommandBuffer(m_device);
    check(m_commands != nullptr, "image upload command buffer");

    auto *copy = SDL_BeginGPUCopyPass(m_commands);
    check(copy != nullptr, "image upload copy pass");
    SDL_GPUTransferBufferLocation source{m_uploadBuffer, sourceOffset};
    SDL_GPUBufferRegion destination{m_transferDataBuffer, 0, static_cast<Uint32>(m_pendingUploadData.size())};
    SDL_UploadToGPUBuffer(copy, &source, &destination, false);
    SDL_GPUTransferBufferLocation opSource{m_uploadBuffer, sourceOffset + static_cast<Uint32>(opsOffset)};
    SDL_GPUBufferRegion opDestination{m_uploadOpsBuffer, 0,
        static_cast<Uint32>(operations.size() * sizeof(ImageUploadOp))};
    SDL_UploadToGPUBuffer(copy, &opSource, &opDestination, false);
    SDL_EndGPUCopyPass(copy);

    Params params{};
    params.p[0] = static_cast<uint32_t>(operations.size());

    SDL_GPUStorageBufferReadWriteBinding writable{m_vramBuffer, false};
    SDL_GPUBuffer *readable[] = {m_transferDataBuffer, m_lutBuffer, m_uploadOpsBuffer};
    m_compute = SDL_BeginGPUComputePass(m_commands, nullptr, 0, &writable, 1);
    check(m_compute != nullptr, "image upload compute pass");
    SDL_BindGPUComputePipeline(m_compute, m_uploadPipeline);
    SDL_PushGPUComputeUniformData(m_commands, 0, &params, sizeof(params));
    SDL_BindGPUComputeStorageBuffers(m_compute, 0, readable, 3);
    SDL_DispatchGPUCompute(m_compute, (maxPixelCount + 63u) / 64u,
        static_cast<Uint32>(operations.size()), 1);
    m_gpuVramDirty = true;
}

bool GSSDLGpuRaster::localToLocal(const GSTransferCommand &command)
{
    const uint32_t rrw = command.trxreg.rrw;
    const uint32_t rrh = command.trxreg.rrh;
    const uint64_t total64 = uint64_t(rrw) * rrh;
    if (command.direction != 2u || rrw == 0u || rrh == 0u || total64 > 1048576u ||
        !gsTransferPsmSupported(command.bitbltbuf.spsm) || !gsTransferPsmSupported(command.bitbltbuf.dpsm))
        return false;

    uint64_t sourceBegin = 0, sourceEnd = 0, destinationBegin = 0, destinationEnd = 0;
    const bool sourceRangeKnown = gsTransferRange(command.bitbltbuf.spsm, command.bitbltbuf.sbp,
        std::max<uint32_t>(command.bitbltbuf.sbw, 1u), command.trxpos.ssax, command.trxpos.ssay,
        rrw, rrh, sourceBegin, sourceEnd);
    const bool destinationRangeKnown = gsTransferRange(command.bitbltbuf.dpsm, command.bitbltbuf.dbp,
        std::max<uint32_t>(command.bitbltbuf.dbw, 1u), command.trxpos.dsax, command.trxpos.dsay,
        rrw, rrh, destinationBegin, destinationEnd);
    if (destinationRangeKnown) invalidateCachedClut(destinationBegin, destinationEnd);
    else invalidateCachedClut(0u, kVramBytes);
    const bool overlaps = !sourceRangeKnown || !destinationRangeKnown ||
        (sourceBegin < destinationEnd && destinationBegin < sourceEnd);

    uploadHostVram();
    finishPass();
    if (!m_commands)
        m_commands = SDL_AcquireGPUCommandBuffer(m_device);
    check(m_commands != nullptr, "local transfer command buffer");

    Params params{};
    params.p[0] = command.bitbltbuf.spsm;
    params.p[1] = command.bitbltbuf.sbp;
    params.p[2] = std::max<uint32_t>(command.bitbltbuf.sbw, 1u);
    params.p[3] = command.bitbltbuf.dpsm;
    params.p[4] = command.bitbltbuf.dbp;
    params.p[5] = std::max<uint32_t>(command.bitbltbuf.dbw, 1u);
    params.p[6] = command.trxpos.ssax;
    params.p[7] = command.trxpos.ssay;
    params.p[8] = command.trxpos.dsax;
    params.p[9] = command.trxpos.dsay;
    params.p[10] = rrw;
    params.p[11] = rrh;
    params.p[12] = command.trxpos.dir;
    params.p[13] = static_cast<uint32_t>(total64);
    params.p[14] = overlaps ? 1u : 0u;

    SDL_GPUStorageBufferReadWriteBinding writable{m_vramBuffer, false};
    SDL_GPUBuffer *readable[] = {m_lutBuffer};
    m_compute = SDL_BeginGPUComputePass(m_commands, nullptr, 0, &writable, 1);
    check(m_compute != nullptr, "local transfer compute pass");
    SDL_BindGPUComputePipeline(m_compute, m_localTransferPipeline);
    SDL_PushGPUComputeUniformData(m_commands, 0, &params, sizeof(params));
    SDL_BindGPUComputeStorageBuffers(m_compute, 0, readable, 1);
    SDL_DispatchGPUCompute(m_compute, overlaps ? 1u : (params.p[13] + 63u) / 64u, 1, 1);
    m_gpuVramDirty = true;
    return true;
}

bool GSSDLGpuRaster::localToHost(const GSTransferCommand &command, std::vector<uint8_t> &result)
{
    const uint32_t rrw = command.trxreg.rrw;
    const uint32_t rrh = command.trxreg.rrh;
    const uint64_t total64 = uint64_t(rrw) * rrh;
    const uint8_t psm = command.bitbltbuf.spsm;
    uint32_t bitsPerPixel = 0;
    switch (psm)
    {
    case 0u: case 48u: bitsPerPixel = 32u; break;
    case 1u: case 49u: bitsPerPixel = 24u; break;
    case 2u: case 10u: bitsPerPixel = 16u; break;
    case 19u: case 27u: bitsPerPixel = 8u; break;
    case 20u: case 36u: case 44u: bitsPerPixel = 4u; break;
    default: return false;
    }
    if (command.direction != 1u || rrw == 0u || rrh == 0u || total64 > 1048576u)
        return false;
    const uint64_t outputBytes64 = (total64 * bitsPerPixel + 7u) / 8u;
    if (outputBytes64 == 0u || outputBytes64 > kVramBytes)
        return false;
    uint64_t sourceBegin = 0, sourceEnd = 0;
    if (!gsTransferRange(psm, command.bitbltbuf.sbp,
            std::max<uint32_t>(command.bitbltbuf.sbw, 1u), command.trxpos.ssax,
            command.trxpos.ssay, rrw, rrh, sourceBegin, sourceEnd))
        return false;

    uploadHostVram();
    finishPass();
    if (!m_commands)
        m_commands = SDL_AcquireGPUCommandBuffer(m_device);
    check(m_commands != nullptr, "local readback command buffer");

    Params params{};
    params.p[0] = psm;
    params.p[1] = command.bitbltbuf.sbp;
    params.p[2] = std::max<uint32_t>(command.bitbltbuf.sbw, 1u);
    params.p[3] = command.trxpos.ssax;
    params.p[4] = command.trxpos.ssay;
    params.p[5] = rrw;
    params.p[6] = rrh;
    params.p[7] = static_cast<uint32_t>(total64);
    params.p[8] = bitsPerPixel;
    params.p[9] = static_cast<uint32_t>(outputBytes64);

    SDL_GPUStorageBufferReadWriteBinding writable{m_transferDataBuffer, false};
    SDL_GPUBuffer *readable[] = {m_lutBuffer, m_vramBuffer};
    m_compute = SDL_BeginGPUComputePass(m_commands, nullptr, 0, &writable, 1);
    check(m_compute != nullptr, "local readback compute pass");
    SDL_BindGPUComputePipeline(m_compute, m_localReadbackPipeline);
    SDL_PushGPUComputeUniformData(m_commands, 0, &params, sizeof(params));
    SDL_BindGPUComputeStorageBuffers(m_compute, 0, readable, 2);
    const uint32_t outputWords = (params.p[9] + 3u) / 4u;
    SDL_DispatchGPUCompute(m_compute, (outputWords + 63u) / 64u, 1, 1);

    finishPass();
    auto *copy = SDL_BeginGPUCopyPass(m_commands);
    check(copy != nullptr, "local readback copy pass");
    SDL_GPUBufferRegion source{m_transferDataBuffer, 0, static_cast<Uint32>(outputWords * sizeof(uint32_t))};
    SDL_GPUTransferBufferLocation destination{m_downloadBuffer, 0};
    SDL_DownloadFromGPUBuffer(copy, &source, &destination);
    SDL_EndGPUCopyPass(copy);
    SDL_GPUCommandBuffer *submitted = m_commands;
    m_commands = nullptr;
    check(SDL_SubmitGPUCommandBuffer(submitted), "local readback submit");
    check(SDL_WaitForGPUIdle(m_device), "local readback wait");
    ++m_gpuWaits;
    m_vramReadbackBytes += outputWords * sizeof(uint32_t);

    const auto *mapped = static_cast<const uint8_t *>(SDL_MapGPUTransferBuffer(m_device, m_downloadBuffer, true));
    check(mapped != nullptr, "local readback map");
    result.assign(mapped, mapped + params.p[9]);
    SDL_UnmapGPUTransferBuffer(m_device, m_downloadBuffer);
    return true;
}

bool GSSDLGpuRaster::copyFrameToHostRgba(const GSFrameReg &frame, uint32_t width, uint32_t height,
                                         std::vector<uint8_t> &outPixels, bool preserveAlpha,
                                         bool frameBaseIsPages, uint32_t sourceOriginX,
                                         uint32_t sourceOriginY, bool asynchronous,
                                         std::unique_lock<std::mutex> *producerLock,
                                         uint32_t fieldVariant)
{
    if (width == 0u || height == 0u || width > kHostFrameWidth || height > kHostFrameHeight ||
        (frame.psm != GS_PSM_CT32 && frame.psm != GS_PSM_CT24 &&
         frame.psm != GS_PSM_CT16 && frame.psm != GS_PSM_CT16S))
        return false;

    uploadHostVram();
    finishPass();
    if (!m_commands)
        m_commands = SDL_AcquireGPUCommandBuffer(m_device);
    check(m_commands != nullptr, "scanout command buffer");

    Params params{};
    params.p[0] = frame.psm;
    params.p[1] = frameBaseIsPages ? GSInternal::framePageBaseToBlock(frame.fbp) : frame.fbp;
    params.p[2] = std::max<uint32_t>(frame.fbw, 1u);
    params.p[3] = width;
    params.p[4] = height;
    params.p[5] = sourceOriginX;
    params.p[6] = sourceOriginY;
    params.p[7] = preserveAlpha ? 1u : 0u;
    params.p[8] = kHostFrameWidth;
    const Uint32 readbackBytes = kHostFrameWidth * height * sizeof(uint32_t);
    const std::array<uint32_t, 8> scanoutKey{
        frame.fbp | (fieldVariant << 30u), frame.fbw, frame.psm, width, height, preserveAlpha ? 1u : 0u,
        frameBaseIsPages ? 1u : 0u, (sourceOriginX & 0xffffu) | (sourceOriginY << 16u)};
    // Framebuffer base can alternate every frame (double buffering). Treating
    // that as a new scanout mode discarded the last completed image and forced
    // a blocking bootstrap fence on every flip. Keep the full key on each
    // fence for correctness, but only invalidate cached pixels when the output
    // layout or interpretation changes.
    const std::array<uint32_t, 8> asyncScanoutKey{
        fieldVariant ? 1u : 0u, frame.fbw, frame.psm, width, height, preserveAlpha ? 1u : 0u,
        frameBaseIsPages ? 1u : 0u, (sourceOriginX & 0xffffu) | (sourceOriginY << 16u)};
    auto asyncLayoutKey = asyncScanoutKey;
    asyncLayoutKey[0] = 0u; // Keep both interlace parities cached across alternating fields.
    if (asynchronous && (!m_hasAsyncScanoutKey || asyncLayoutKey != m_asyncScanoutKey))
    {
        m_asyncScanoutKey = asyncLayoutKey;
        m_hasAsyncScanoutKey = true;
        for (auto &entry : m_completedScanouts)
        {
            entry.valid = false;
            entry.sequence = 0;
            entry.pixels.clear();
        }
    }

    const auto encodeScanout = [&]()
    {
        SDL_GPUStorageBufferReadWriteBinding writable{m_transferDataBuffer, false};
        SDL_GPUBuffer *readable[] = {m_lutBuffer, m_vramBuffer};
        m_compute = SDL_BeginGPUComputePass(m_commands, nullptr, 0, &writable, 1);
        check(m_compute != nullptr, "scanout compute pass");
        SDL_BindGPUComputePipeline(m_compute, m_scanoutPipeline);
        SDL_PushGPUComputeUniformData(m_commands, 0, &params, sizeof(params));
        SDL_BindGPUComputeStorageBuffers(m_compute, 0, readable, 2);
        SDL_DispatchGPUCompute(m_compute, (kHostFrameWidth + 7u) / 8u, (height + 7u) / 8u, 1);
        finishPass();
        // Remember what was read so later presents can tell whether the
        // displayed framebuffer has been written since.
        uint64_t sourceBegin = 0u, sourceEnd = 0u;
        m_scanoutSourceKnown = gsTransferRange(frame.psm, params.p[1], params.p[2], sourceOriginX, sourceOriginY,
                                               width, height, sourceBegin, sourceEnd);
        m_scanoutSourceBegin = sourceBegin;
        m_scanoutSourceEnd = sourceEnd;
        m_scanoutSourceDirty = false;
        m_lastScanoutKey = scanoutKey;
    };
    if (!asynchronous)
    {
        encodeScanout();
        auto *copy = SDL_BeginGPUCopyPass(m_commands);
        check(copy != nullptr, "scanout readback copy pass");
        SDL_GPUBufferRegion source{m_transferDataBuffer, 0, readbackBytes};
        SDL_GPUTransferBufferLocation destination{m_syncScanoutBuffer, 0};
        SDL_DownloadFromGPUBuffer(copy, &source, &destination);
        SDL_EndGPUCopyPass(copy);
        SDL_GPUCommandBuffer *submitted = m_commands;
        m_commands = nullptr;
        SDL_GPUFence *scanoutFence = SDL_SubmitGPUCommandBufferAndAcquireFence(submitted);
        check(scanoutFence != nullptr, "scanout submit");
        if (producerLock && producerLock->owns_lock())
            producerLock->unlock();
        const auto scanoutWaitBegin = std::chrono::steady_clock::now();
        const bool scanoutReady = SDL_WaitForGPUFences(m_device, true, &scanoutFence, 1);
        const uint64_t scanoutWaitNs = static_cast<uint64_t>(std::chrono::duration_cast<std::chrono::nanoseconds>(
            std::chrono::steady_clock::now() - scanoutWaitBegin).count());
        if (producerLock && !producerLock->owns_lock())
            producerLock->lock();
        SDL_ReleaseGPUFence(m_device, scanoutFence);
        check(scanoutReady, "scanout wait");
        ++m_gpuWaits;
        ++m_scanoutSynchronousWaits;
        m_scanoutSynchronousWaitNs += scanoutWaitNs;
        m_scanoutSynchronousWaitMaxNs = std::max(m_scanoutSynchronousWaitMaxNs, scanoutWaitNs);
        m_vramReadbackBytes += readbackBytes;
        ++m_scanoutReads;
        // The fence has completed, so keep the same backing allocation. Cycling
        // here can expose a fresh, empty allocation instead of the downloaded
        // pixels (especially visible on Metal with packed framebuffer formats).
        const auto *mapped = static_cast<const uint8_t *>(SDL_MapGPUTransferBuffer(m_device, m_syncScanoutBuffer, false));
        check(mapped != nullptr, "scanout readback map");
        outPixels.assign(static_cast<size_t>(kHostFrameWidth) * kHostFrameHeight * sizeof(uint32_t), 0u);
        std::memcpy(outPixels.data(), mapped, readbackBytes);
        SDL_UnmapGPUTransferBuffer(m_device, m_syncScanoutBuffer);
        if (sdlGpuStatsEnabled() && (m_scanoutReads == 1u || (m_scanoutReads & 127u) == 0u))
            std::fprintf(stderr, "[gs-sdl-gpu] scanout-frames=%llu frame-readback=%u KiB total-vram-readback=%llu MiB sync-waits=%llu sync-wait-total=%.3fms sync-wait-max=%.3fms\n",
                static_cast<unsigned long long>(m_scanoutReads), readbackBytes / 1024u,
                static_cast<unsigned long long>(m_vramReadbackBytes / (1024u * 1024u)),
                static_cast<unsigned long long>(m_scanoutSynchronousWaits),
                m_scanoutSynchronousWaitNs / 1.0e6, m_scanoutSynchronousWaitMaxNs / 1.0e6);
        return true;
    }

    auto cacheForKey = [&](const std::array<uint32_t, 8> &layoutKey) -> ScanoutCacheEntry *
    {
        for (auto &entry : m_completedScanouts)
            if (entry.valid && entry.layoutKey == layoutKey)
                return &entry;
        ScanoutCacheEntry *oldest = nullptr;
        for (auto &entry : m_completedScanouts)
        {
            if (!entry.valid)
                return &entry;
            if (!oldest || entry.sequence < oldest->sequence)
                oldest = &entry;
        }
        return oldest;
    };

    auto consumeCompletedScanouts = [&]()
    {
        for (size_t i = 0; i < kScanoutBufferCount; ++i)
        {
            if (m_scanoutFences[i] && SDL_QueryGPUFence(m_device, m_scanoutFences[i]))
            {
                ScanoutCacheEntry *entry = cacheForKey(m_scanoutLayoutKeys[i]);
                auto *mapped = static_cast<const uint8_t *>(
                    SDL_MapGPUTransferBuffer(m_device, m_scanoutBuffers[i], false));
                check(mapped != nullptr, "async scanout readback map");
                entry->key = m_scanoutKeys[i];
                entry->layoutKey = m_scanoutLayoutKeys[i];
                entry->sequence = m_scanoutSequences[i];
                entry->pixels.assign(
                    static_cast<size_t>(kHostFrameWidth) * kHostFrameHeight * sizeof(uint32_t), 0u);
                std::memcpy(entry->pixels.data(), mapped, static_cast<size_t>(readbackBytes));
                SDL_UnmapGPUTransferBuffer(m_device, m_scanoutBuffers[i]);
                entry->valid = true;
                SDL_ReleaseGPUFence(m_device, m_scanoutFences[i]);
                m_scanoutFences[i] = nullptr;
            }
        }
    };

    // Reap completed readbacks first. Double-buffered games change the framebuffer
    // base every frame, but the prior completed image is still a valid presentation
    // while a fresh GPU readback is queued.
    consumeCompletedScanouts();
    // The host presents far more often than the game finishes frames. When
    // nothing has written the displayed framebuffer since the last scanout of
    // this exact source, reuse that image instead of queueing identical work.
    if (m_scanoutSourceKnown && !m_scanoutSourceDirty && m_lastScanoutKey == scanoutKey)
    {
        ScanoutCacheEntry *same = cacheForKey(asyncScanoutKey);
        bool pendingSame = false;
        for (size_t i = 0; i < kScanoutBufferCount; ++i)
            pendingSame = pendingSame || (m_scanoutFences[i] && m_scanoutKeys[i] == scanoutKey);
        if (same && same->valid && same->layoutKey == asyncScanoutKey && (same->key == scanoutKey || pendingSame))
        {
            ++m_scanoutReuses;
            outPixels = same->pixels;
            return true;
        }
    }
    encodeScanout();
    size_t slot = kScanoutBufferCount;
    for (size_t offset = 0; offset < kScanoutBufferCount; ++offset)
    {
        const size_t candidate = (m_nextScanoutBuffer + offset) % kScanoutBufferCount;
        if (!m_scanoutFences[candidate])
        {
            slot = candidate;
            break;
        }
    }
    if (slot == kScanoutBufferCount)
    {
        ScanoutCacheEntry *cached = cacheForKey(asyncScanoutKey);
        if (cached && cached->valid && cached->layoutKey == asyncScanoutKey)
        {
            ++m_scanoutRingWaits; // Count avoided waits as backpressure events.
            outPixels = cached->pixels;
            return true;
        }
        // The first frame of a new scanout layout has no valid image to reuse;
        // allow the normal bootstrap path below to wait for its first GPU result.
        slot = 0;
        SDL_GPUFence *fence = m_scanoutFences[slot];
        const auto bootstrapWaitBegin = std::chrono::steady_clock::now();
        check(SDL_WaitForGPUFences(m_device, true, &fence, 1), "scanout bootstrap ring wait");
        m_scanoutBootstrapWaitNs += static_cast<uint64_t>(std::chrono::duration_cast<std::chrono::nanoseconds>(
            std::chrono::steady_clock::now() - bootstrapWaitBegin).count());
        ++m_gpuWaits;
        ++m_scanoutBootstrapWaits;
        consumeCompletedScanouts();
        if (m_scanoutFences[slot])
        {
            SDL_ReleaseGPUFence(m_device, m_scanoutFences[slot]);
            m_scanoutFences[slot] = nullptr;
        }
    }

    auto *copy = SDL_BeginGPUCopyPass(m_commands);
    check(copy != nullptr, "scanout readback copy pass");
    SDL_GPUBufferRegion source{m_transferDataBuffer, 0, readbackBytes};
    SDL_GPUTransferBufferLocation destination{m_scanoutBuffers[slot], 0};
    SDL_DownloadFromGPUBuffer(copy, &source, &destination);
    SDL_EndGPUCopyPass(copy);
    SDL_GPUCommandBuffer *submitted = m_commands;
    m_commands = nullptr;
    SDL_GPUFence *scanoutFence = SDL_SubmitGPUCommandBufferAndAcquireFence(submitted);
    check(scanoutFence != nullptr, "scanout submit");
    m_scanoutFences[slot] = scanoutFence;
    m_scanoutSequences[slot] = m_nextScanoutSequence++;
    m_scanoutKeys[slot] = scanoutKey;
    m_scanoutLayoutKeys[slot] = asyncScanoutKey;
    m_nextScanoutBuffer = (slot + 1u) % kScanoutBufferCount;
    m_vramReadbackBytes += readbackBytes;
    ++m_scanoutReads;

    consumeCompletedScanouts();
    ScanoutCacheEntry *currentCache = cacheForKey(asyncScanoutKey);
    if (!currentCache || !currentCache->valid || currentCache->layoutKey != asyncScanoutKey)
    {
        // Bootstrap each distinct CRT source once; subsequent reads remain asynchronous.
        SDL_GPUFence *firstFence = m_scanoutFences[slot];
        check(SDL_WaitForGPUFences(m_device, true, &firstFence, 1), "first scanout wait");
        ++m_gpuWaits;
        ++m_scanoutBootstrapWaits;
        consumeCompletedScanouts();
        currentCache = cacheForKey(asyncScanoutKey);
    }
    check(currentCache && currentCache->valid && currentCache->layoutKey == asyncScanoutKey,
          "async scanout cache");
    outPixels = currentCache->pixels;
    if (sdlGpuStatsEnabled() && (m_scanoutReads == 1u || (m_scanoutReads & 127u) == 0u))
        std::fprintf(stderr, "[gs-sdl-gpu] scanout-frames=%llu frame-readback=%u KiB total-vram-readback=%llu MiB waits(sync/ring/bootstrap)=%llu/%llu/%llu sync-wait-total=%.3fms max=%.3fms bootstrap-total=%.3fms image-batches/chunks=%llu/%llu\n",
            static_cast<unsigned long long>(m_scanoutReads), readbackBytes / 1024u,
            static_cast<unsigned long long>(m_vramReadbackBytes / (1024u * 1024u)),
            static_cast<unsigned long long>(m_scanoutSynchronousWaits),
            static_cast<unsigned long long>(m_scanoutRingWaits),
            static_cast<unsigned long long>(m_scanoutBootstrapWaits),
            m_scanoutSynchronousWaitNs / 1.0e6, m_scanoutSynchronousWaitMaxNs / 1.0e6,
            m_scanoutBootstrapWaitNs / 1.0e6,
            static_cast<unsigned long long>(m_imageUploadBatches),
            static_cast<unsigned long long>(m_imageUploadChunks));
    return true;
}

void GSSDLGpuRaster::sync()
{
    flushPendingImageUpload();
    materializeClut();
    finishPass();
    // An explicit GS synchronization is a coherence boundary: don't reuse an
    // older presentation image after the guest has modified the same framebuffer.
    for (auto &entry : m_completedScanouts)
        entry.valid = false;
    if (!m_commands && (m_gpuVramDirty || m_gpuClutDirty))
        m_commands = SDL_AcquireGPUCommandBuffer(m_device);
    if (!m_commands)
        return;
    if (m_gpuVramDirty || m_gpuClutDirty)
    {
        auto *copy = SDL_BeginGPUCopyPass(m_commands);
        if (m_gpuVramDirty)
        {
            SDL_GPUBufferRegion from{m_vramBuffer, 0, kVramBytes};
            SDL_GPUTransferBufferLocation to{m_downloadBuffer, 0};
            SDL_DownloadFromGPUBuffer(copy, &from, &to);
        }
        if (m_gpuClutDirty)
        {
            SDL_GPUBufferRegion from{m_clutBuffer,
                static_cast<Uint32>(m_activeClutOffset * sizeof(uint16_t)), kClutBytes};
            SDL_GPUTransferBufferLocation to{m_downloadBuffer, kVramBytes};
            SDL_DownloadFromGPUBuffer(copy, &from, &to);
        }
        SDL_EndGPUCopyPass(copy);
    }
    check(SDL_SubmitGPUCommandBuffer(m_commands), "submit");
    m_commands = nullptr;
    check(SDL_WaitForGPUIdle(m_device), "wait");
    ++m_gpuWaits;
    if (m_gpuVramDirty || m_gpuClutDirty)
    {
        const auto *mapped = static_cast<const uint8_t *>(SDL_MapGPUTransferBuffer(m_device, m_downloadBuffer, true));
        check(mapped != nullptr, "readback map");
        if (m_gpuVramDirty)
        {
            std::memcpy(m_hostVram, mapped, kVramBytes);
            m_vramReadbackBytes += kVramBytes;
        }
        if (m_gpuClutDirty && m_hostClut) std::memcpy(m_hostClut, mapped + kVramBytes, kClutBytes);
        SDL_UnmapGPUTransferBuffer(m_device, m_downloadBuffer);
        m_gpuVramDirty = false;
        m_gpuClutDirty = false;
    }
    if (sdlGpuStatsEnabled() && (m_gpuWaits & 63u) == 0u)
        std::fprintf(stderr, "[gs-sdl-gpu] transfers waits=%llu upload=%.1fMiB readback=%.1fMiB draws=%llu\n",
            static_cast<unsigned long long>(m_gpuWaits),
            double(m_vramUploadBytes) / (1024.0 * 1024.0),
            double(m_vramReadbackBytes) / (1024.0 * 1024.0),
            static_cast<unsigned long long>(m_totalDraws));
}

void GSSDLGpuRaster::syncForPresentation()
{
    // Keep draws queued for Present(), which appends scanout to the same GPU
    // command stream and tracks completion with the bounded three-slot ring.
    // Waiting for GPU idle here serialized every frame and defeated that ring.
    // Explicit GS/EE readbacks still synchronize through sync()/readLocalVram().
    finishPass();
}

void GSSDLGpuRaster::flush()
{
    flushPendingImageUpload();
    finishPass();
    if (!m_commands)
        return;
    check(SDL_SubmitGPUCommandBuffer(m_commands), "flush submit");
    m_commands = nullptr;
    check(SDL_WaitForGPUIdle(m_device), "flush wait");
}

void GSSDLGpuRaster::textureFlush()
{
    // TEXFLUSH invalidates the GS texture cache. This backend samples VRAM
    // directly, so there is no texture cache to invalidate and uploads can
    // remain queued until the next draw/transfer/readback consumes VRAM. GS
    // commands already share one ordered command stream, so no pass boundary
    // is needed here either.
}

void GSSDLGpuRaster::flushForPresentation()
{
    // Present() appends its scanout dispatch/readback to this command buffer
    // and submits it with a fence. Keep prior draws ordered without waiting.
    flushPendingImageUpload();
    finishPass();
}

#endif
