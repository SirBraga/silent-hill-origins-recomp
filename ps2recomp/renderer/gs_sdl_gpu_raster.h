#pragma once

#include "runtime/gs/gs_cpu_backend.h"
#include "runtime/gs/gs_metal_shader.h"
#include "runtime/gs/ps2_gs_memory.h"

#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
#include <SDL3/SDL.h>
#include <SDL3/SDL_gpu.h>
#include <array>
#include <vector>

// SDL_GPU compute implementation of the same GS raster kernels as the native
// Metal prototype. It uses SDL's Metal driver directly on macOS (no Vulkan).
class GSSDLGpuRaster
{
public:
    static void InitializeHostVideo();
    GSSDLGpuRaster(uint8_t *vram, uint16_t *initialClut);
    ~GSSDLGpuRaster();
    GSSDLGpuRaster(const GSSDLGpuRaster &) = delete;
    GSSDLGpuRaster &operator=(const GSSDLGpuRaster &) = delete;

    void sync();
    void flush();
    void markHostDirty();
    void copyClut(uint16_t *out) const;
    void setClut(const uint16_t *data);
    void loadClut(const GSTex0Reg &tex, const GSTexClutReg &texClut);
    void submit(const GSPrimitiveBatch &batch, int minX, int minY, int maxX, int maxY);
    bool uploadImage(const GSTransferCommand &command, uint32_t startPixel,
                     const uint8_t *data, uint32_t pixelCount);
    bool localToLocal(const GSTransferCommand &command);
    bool localToHost(const GSTransferCommand &command, std::vector<uint8_t> &result);
    uint64_t draws() const { return m_totalDraws; }

private:
    struct Params { uint32_t p[64]{}; float v[3][13]{}; };
    void uploadHostVram();
    void finishPass();
    void beginPass(SDL_GPUComputePipeline *pipeline, Params &params);
    void check(bool ok, const char *operation) const;

    SDL_GPUDevice *m_device = nullptr;
    SDL_GPUBuffer *m_vramBuffer = nullptr;
    SDL_GPUBuffer *m_lutBuffer = nullptr;
    SDL_GPUBuffer *m_clutBuffer = nullptr;
    SDL_GPUBuffer *m_transferDataBuffer = nullptr;
    SDL_GPUComputePipeline *m_rasterPipeline = nullptr;
    SDL_GPUComputePipeline *m_clutPipeline = nullptr;
    SDL_GPUComputePipeline *m_uploadPipeline = nullptr;
    SDL_GPUComputePipeline *m_localTransferPipeline = nullptr;
    SDL_GPUComputePipeline *m_localReadbackPipeline = nullptr;
    SDL_GPUTransferBuffer *m_uploadBuffer = nullptr;
    SDL_GPUTransferBuffer *m_initUploadBuffer = nullptr;
    SDL_GPUTransferBuffer *m_downloadBuffer = nullptr;
    SDL_GPUCommandBuffer *m_commands = nullptr;
    SDL_GPUComputePass *m_compute = nullptr;
    uint8_t *m_hostVram = nullptr;
    uint16_t *m_hostClut = nullptr;
    std::vector<uint32_t> m_lut;
    bool m_hostDirty = false;
    bool m_gpuVramDirty = false;
    bool m_gpuClutDirty = false;
    uint64_t m_totalDraws = 0;
    uint64_t m_totalClutLoads = 0;
    uint64_t m_vramUploadBytes = 0;
    uint64_t m_vramReadbackBytes = 0;
    uint64_t m_gpuWaits = 0;
};
#else
class GSSDLGpuRaster;
#endif
