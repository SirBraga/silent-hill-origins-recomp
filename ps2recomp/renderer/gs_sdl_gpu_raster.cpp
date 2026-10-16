#include "runtime/gs/gs_sdl_gpu_raster.h"

#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)

#include <algorithm>
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
        "kernel void imageUpload(device const uint* src [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],device uint* ram [[buffer(3)]],uint tid",
        "kernel void imageUpload(constant Params& b [[buffer(0)]],device const uint* src [[buffer(1)]],device const uint* lut [[buffer(2)]],device uint* ram [[buffer(3)]],uint tid");
    replaceOnce(source,
        "kernel void localTransfer(device uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],uint tid",
        "kernel void localTransfer(constant Params& b [[buffer(0)]],device const uint* lut [[buffer(1)]],device uint* ram [[buffer(2)]],uint tid");
    replaceOnce(source,
        "kernel void localReadback(device const uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],device uint* output [[buffer(3)]],uint tid",
        "kernel void localReadback(constant Params& b [[buffer(0)]],device const uint* lut [[buffer(1)]],device const uint* ram [[buffer(2)]],device uint* output [[buffer(3)]],uint tid");
    replaceOnce(source,
        "kernel void raster(device uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],device const ushort* clut [[buffer(3)]],uint2 tid",
        "kernel void raster(constant Params& b [[buffer(0)]],device const uint* lut [[buffer(1)]],device const ushort* clut [[buffer(2)]],device uint* ram [[buffer(3)]],uint2 tid");
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
    begin = uint64_t(bp) * 256u;
    end = begin + (lastPageY * columns + lastPageX + 1u) * 8192u;
    return end <= kVramBytes;
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
        SDL_GPU_BUFFERUSAGE_COMPUTE_STORAGE_WRITE, kClutBytes);
    m_transferDataBuffer = makeBuffer(m_device, SDL_GPU_BUFFERUSAGE_COMPUTE_STORAGE_READ |
        SDL_GPU_BUFFERUSAGE_COMPUTE_STORAGE_WRITE, kVramBytes);
    m_uploadBuffer = makeTransferBuffer(m_device, SDL_GPU_TRANSFERBUFFERUSAGE_UPLOAD, kVramBytes);
    m_downloadBuffer = makeTransferBuffer(m_device, SDL_GPU_TRANSFERBUFFERUSAGE_DOWNLOAD,
        kVramBytes + kClutBytes);
    if (!m_vramBuffer || !m_clutBuffer || !m_transferDataBuffer || !m_uploadBuffer || !m_downloadBuffer)
        throw std::runtime_error(std::string("SDL_GPU GS resource creation: ") + SDL_GetError());

    m_lut.reserve(32768u);
    GSMem::InitLookupTables();
    for (const unsigned format : {0u, 48u, 19u, 20u, 2u, 10u})
    {
        const unsigned width = (format == 19u || format == 20u) ? 128u : 64u;
        const unsigned height = format == 20u ? 128u :
            (format == 19u || format == 2u || format == 10u) ? 64u : 32u;
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
    pipeline.entrypoint = "clutLoad";
    pipeline.threadcount_x = 64;
    pipeline.threadcount_y = pipeline.threadcount_z = 1;
    m_clutPipeline = SDL_CreateGPUComputePipeline(m_device, &pipeline);
    pipeline.entrypoint = "imageUpload";
    pipeline.threadcount_x = 64;
    m_uploadPipeline = SDL_CreateGPUComputePipeline(m_device, &pipeline);
    pipeline.entrypoint = "localTransfer";
    pipeline.num_readonly_storage_buffers = 1;
    m_localTransferPipeline = SDL_CreateGPUComputePipeline(m_device, &pipeline);
    pipeline.entrypoint = "localReadback";
    pipeline.num_readonly_storage_buffers = 2;
    m_localReadbackPipeline = SDL_CreateGPUComputePipeline(m_device, &pipeline);
    if (!m_rasterPipeline || !m_clutPipeline || !m_uploadPipeline || !m_localTransferPipeline || !m_localReadbackPipeline)
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
    if (m_rasterPipeline) SDL_ReleaseGPUComputePipeline(m_device, m_rasterPipeline);
    if (m_clutPipeline) SDL_ReleaseGPUComputePipeline(m_device, m_clutPipeline);
    if (m_uploadPipeline) SDL_ReleaseGPUComputePipeline(m_device, m_uploadPipeline);
    if (m_localTransferPipeline) SDL_ReleaseGPUComputePipeline(m_device, m_localTransferPipeline);
    if (m_localReadbackPipeline) SDL_ReleaseGPUComputePipeline(m_device, m_localReadbackPipeline);
    if (m_uploadBuffer) SDL_ReleaseGPUTransferBuffer(m_device, m_uploadBuffer);
    if (m_initUploadBuffer) SDL_ReleaseGPUTransferBuffer(m_device, m_initUploadBuffer);
    if (m_downloadBuffer) SDL_ReleaseGPUTransferBuffer(m_device, m_downloadBuffer);
    if (m_vramBuffer) SDL_ReleaseGPUBuffer(m_device, m_vramBuffer);
    if (m_lutBuffer) SDL_ReleaseGPUBuffer(m_device, m_lutBuffer);
    if (m_clutBuffer) SDL_ReleaseGPUBuffer(m_device, m_clutBuffer);
    if (m_transferDataBuffer) SDL_ReleaseGPUBuffer(m_device, m_transferDataBuffer);
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
    if (!data) return;
    auto *mapped = static_cast<uint8_t *>(SDL_MapGPUTransferBuffer(m_device, m_uploadBuffer, false));
    check(mapped != nullptr, "CLUT upload map");
    std::memcpy(mapped, data, kClutBytes);
    SDL_UnmapGPUTransferBuffer(m_device, m_uploadBuffer);
    auto *commands = SDL_AcquireGPUCommandBuffer(m_device);
    check(commands != nullptr, "CLUT upload command");
    auto *copy = SDL_BeginGPUCopyPass(commands);
    SDL_GPUTransferBufferLocation source{m_uploadBuffer, 0};
    SDL_GPUBufferRegion destination{m_clutBuffer, 0, kClutBytes};
    SDL_UploadToGPUBuffer(copy, &source, &destination, false);
    SDL_EndGPUCopyPass(copy);
    check(SDL_SubmitGPUCommandBuffer(commands), "CLUT upload submit");
    check(SDL_WaitForGPUIdle(m_device), "CLUT upload wait");
}

void GSSDLGpuRaster::loadClut(const GSTex0Reg &tex, const GSTexClutReg &tc)
{
    if (m_hostDirty) uploadHostVram();
    if (!m_commands)
        m_commands = SDL_AcquireGPUCommandBuffer(m_device);
    check(m_commands != nullptr, "CLUT command buffer");
    Params params{};
    auto &p = params.p;
    const bool four = tex.psm == 20 || tex.psm == 36 || tex.psm == 44;
    const bool sixteen = tex.cpsm == 2 || tex.cpsm == 10;
    p[15] = tex.cbp; p[16] = tc.cbw ? tc.cbw : 1; p[17] = tex.cpsm;
    p[18] = four ? 16 : 256; p[19] = (tex.csa & (sixteen ? 31u : 15u)) << 4;
    p[24] = tex.csm == 0 && !sixteen && !four; p[20] = p[24] ? p[19] : 0;
    p[21] = tex.csm; p[22] = uint32_t(tc.cou) << 4; p[23] = tc.cov;
    finishPass();
    SDL_GPUStorageBufferReadWriteBinding writable{m_clutBuffer, false};
    SDL_GPUBuffer *readable[] = {m_vramBuffer, m_lutBuffer};
    m_compute = SDL_BeginGPUComputePass(m_commands, nullptr, 0, &writable, 1);
    check(m_compute != nullptr, "CLUT compute pass");
    SDL_BindGPUComputePipeline(m_compute, m_clutPipeline);
    SDL_PushGPUComputeUniformData(m_commands, 0, &params, sizeof(params));
    SDL_BindGPUComputeStorageBuffers(m_compute, 0, readable, 2);
    SDL_DispatchGPUCompute(m_compute, (p[18] - p[20] + 63u) / 64u, 1, 1);
    m_gpuClutDirty = true;
    if (sdlGpuStatsEnabled() && (++m_totalClutLoads & 0xffffu) == 0u)
        std::fprintf(stderr, "[gs-sdl-gpu] clut-loads=%llu gpu-draws=%llu\n",
            static_cast<unsigned long long>(m_totalClutLoads),
            static_cast<unsigned long long>(m_totalDraws));
}

void GSSDLGpuRaster::uploadHostVram()
{
    if (!m_hostDirty) return;
    finishPass();
    if (!m_commands)
        m_commands = SDL_AcquireGPUCommandBuffer(m_device);
    check(m_commands != nullptr, "VRAM upload command buffer");
    auto *mapped = static_cast<uint8_t *>(SDL_MapGPUTransferBuffer(m_device, m_uploadBuffer, false));
    check(mapped != nullptr, "VRAM upload map");
    std::memcpy(mapped, m_hostVram, kVramBytes);
    SDL_UnmapGPUTransferBuffer(m_device, m_uploadBuffer);
    auto *copy = SDL_BeginGPUCopyPass(m_commands);
    SDL_GPUTransferBufferLocation source{m_uploadBuffer, 0};
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
}

void GSSDLGpuRaster::submit(const GSPrimitiveBatch &batch, int minX, int minY, int maxX, int maxY)
{
    uploadHostVram();
    if (!m_commands)
        m_commands = SDL_AcquireGPUCommandBuffer(m_device);
    check(m_commands != nullptr, "raster command buffer");
    Params params{};
    auto &p = params.p;
    const auto &s = batch.state;
    const auto &c = s.context;
    p[0] = s.prim.type == GS_PRIM_SPRITE ? 6u : 3u;
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
    for (unsigned j = 0; j < 3; ++j)
    {
        const auto &v = batch.vertices[j];
        float *o = params.v[j];
        o[0] = v.x - float(c.xyoffset.ofx >> 4); o[1] = v.y - float(c.xyoffset.ofy >> 4);
        o[2] = v.z; o[3] = v.r; o[4] = v.g; o[5] = v.b; o[6] = v.a;
        o[7] = v.s; o[8] = v.t; o[9] = v.q; o[10] = v.u; o[11] = v.v; o[12] = v.fog;
    }
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
    finishPass(); // SDL_GPU requires a pass boundary to order read-modify-write dispatches.
    SDL_GPUStorageBufferReadWriteBinding writable{m_vramBuffer, false};
    SDL_GPUBuffer *readable[] = {m_lutBuffer, m_clutBuffer};
    m_compute = SDL_BeginGPUComputePass(m_commands, nullptr, 0, &writable, 1);
    check(m_compute != nullptr, "raster compute pass");
    SDL_BindGPUComputePipeline(m_compute, m_rasterPipeline);
    SDL_PushGPUComputeUniformData(m_commands, 0, &params, sizeof(params));
    SDL_BindGPUComputeStorageBuffers(m_compute, 0, readable, 2);
    SDL_DispatchGPUCompute(m_compute, (Uint32(maxX - minX + 1) + 7u) / 8u,
        (Uint32(maxY - minY + 1) + 7u) / 8u, 1);
    m_gpuVramDirty = true;
    ++m_totalDraws;
    if (sdlGpuStatsEnabled() && (m_totalDraws & 0xffffu) == 0u)
        std::fprintf(stderr, "[gs-sdl-gpu] accelerated-draws=%llu clut-loads=%llu\n",
            static_cast<unsigned long long>(m_totalDraws),
            static_cast<unsigned long long>(m_totalClutLoads));
}

bool GSSDLGpuRaster::uploadImage(const GSTransferCommand &command, uint32_t startPixel,
                                 const uint8_t *data, uint32_t pixelCount)
{
    const uint8_t psm = command.bitbltbuf.dpsm;
    if (!data || pixelCount == 0u || pixelCount > kVramBytes / sizeof(uint32_t) ||
        (psm != GS_PSM_CT32 && psm != GS_PSM_Z32) || command.trxreg.rrw == 0u)
        return false;

    uploadHostVram();
    finishPass();
    if (!m_commands)
        m_commands = SDL_AcquireGPUCommandBuffer(m_device);
    check(m_commands != nullptr, "image upload command buffer");

    const Uint32 byteCount = pixelCount * sizeof(uint32_t);
    auto *mapped = static_cast<uint8_t *>(SDL_MapGPUTransferBuffer(m_device, m_uploadBuffer, true));
    check(mapped != nullptr, "image upload staging map");
    std::memcpy(mapped, data, byteCount);
    SDL_UnmapGPUTransferBuffer(m_device, m_uploadBuffer);

    auto *copy = SDL_BeginGPUCopyPass(m_commands);
    check(copy != nullptr, "image upload copy pass");
    SDL_GPUTransferBufferLocation source{m_uploadBuffer, 0};
    SDL_GPUBufferRegion destination{m_transferDataBuffer, 0, byteCount};
    SDL_UploadToGPUBuffer(copy, &source, &destination, false);
    SDL_EndGPUCopyPass(copy);

    Params params{};
    params.p[0] = command.bitbltbuf.dbp;
    params.p[1] = std::max<uint32_t>(command.bitbltbuf.dbw, 1u);
    params.p[2] = psm;
    params.p[3] = command.trxpos.dsax;
    params.p[4] = command.trxpos.dsay;
    params.p[5] = command.trxreg.rrw;
    params.p[6] = startPixel;
    params.p[7] = pixelCount;

    SDL_GPUStorageBufferReadWriteBinding writable{m_vramBuffer, false};
    SDL_GPUBuffer *readable[] = {m_transferDataBuffer, m_lutBuffer};
    m_compute = SDL_BeginGPUComputePass(m_commands, nullptr, 0, &writable, 1);
    check(m_compute != nullptr, "image upload compute pass");
    SDL_BindGPUComputePipeline(m_compute, m_uploadPipeline);
    SDL_PushGPUComputeUniformData(m_commands, 0, &params, sizeof(params));
    SDL_BindGPUComputeStorageBuffers(m_compute, 0, readable, 2);
    SDL_DispatchGPUCompute(m_compute, (pixelCount + 63u) / 64u, 1, 1);
    m_gpuVramDirty = true;
    return true;
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

void GSSDLGpuRaster::sync()
{
    finishPass();
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
            SDL_GPUBufferRegion from{m_clutBuffer, 0, kClutBytes};
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

void GSSDLGpuRaster::flush()
{
    finishPass();
    if (!m_commands)
        return;
    check(SDL_SubmitGPUCommandBuffer(m_commands), "flush submit");
    m_commands = nullptr;
    check(SDL_WaitForGPUIdle(m_device), "flush wait");
}

#endif
