#pragma once

#include "runtime/gs/gs_backend.h"
#include "runtime/gs/gs_texture_page_cache.h"

#include <array>
#include <mutex>
#include <memory>
class GSMetalRaster;
class GSSDLGpuRaster;
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
#endif
#include <vector>

#include <atomic>

// Debug: when > 0, the CPU backend dumps (once per tbp/psm/cbp) the texture of the next
// textured triangle draws exactly as it samples them, decrementing the counter per texture.
// Files: /tmp/gs_tex_<n>_{idx.pgm,rgb.ppm,clut.ppm}.
extern std::atomic<int> g_gsTextureDumpRequest;
// Debug: when > 0, each GS transfer (BITBLTBUF/TRXPOS/TRXREG/TRXDIR) is logged and the counter decremented.
extern std::atomic<int> g_gsTransferTraceBudget;

class GSCpuBackend final : public GSRasterBackend
{
public:
    GSCpuBackend();
    ~GSCpuBackend() override;
    uint64_t MetalDrawCount() const;

    void Initialize(uint8_t *vram, uint32_t vramSize) override;
    void Reset() override;

    void Submit(const GSPrimitiveBatch &batch) override;
    void LoadClut(const GSTex0Reg &tex0, const GSTexClutReg &texclut) override;
    void BeginTransfer(const GSTransferCommand &command) override;
    void UploadImage(const uint8_t *data, uint32_t sizeBytes) override;

    void Flush() override;
    void FlushForPresentation() override;
    void TextureFlush() override;
    void Sync(GSSyncReason reason) override;
    PresentationFrame Present(const GSPresentationRequest &request) override;

    bool ClearFramebuffer(const GSContext &context, uint32_t rgba) override;
    uint32_t ConsumeLocalToHostBytes(uint8_t *dst, uint32_t maxBytes) override;

    uint32_t ReadVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const override;
    void WriteVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value) override;
    void SnapshotVram(std::vector<uint8_t> &out) const override;
    GSTransferSnapshot GetTransferSnapshot() const override;
    PresentationFrame PresentFromLocalMemory(const GSPresentationRequest &request,
                                             GSSDLGpuRaster *scanoutGpu = nullptr,
                                             std::unique_lock<std::mutex> *producerLock = nullptr);

private:
    bool TryMetal(const GSPrimitiveBatch &batch);
    void EnsureSDLGpu();
    void SyncMetal() const;
    void ResetUnlocked();
    void LoadClutUnlocked(const GSTex0Reg &tex0, const GSTexClutReg &texclut);
    uint32_t ReadVramUnlocked(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const;
    uint32_t ReadTextureVramUnlocked(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y);
    void WriteVramUnlocked(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value);

    void DrawPrimitive(const GSPrimitiveBatch &batch);
    void DrawSprite(const GSPrimitiveBatch &batch);
    void DrawTriangle(const GSPrimitiveBatch &batch);
    void DrawLine(const GSPrimitiveBatch &batch);
    void WritePixel(const GSDrawState &state, int x, int y, int z, uint8_t r, uint8_t g, uint8_t b, uint8_t a, uint8_t fog);
    uint32_t SampleTexture(const GSDrawState &state, float s, float t, float q, uint16_t u, uint16_t v);
    uint32_t LookupCLUT(const GSDrawState &state, uint8_t index, uint8_t cpsm, uint8_t csm, uint8_t csa, uint8_t sourcePsm);
    uint32_t sampledTexelRgba(const GSDrawState &state, uint32_t tbp, uint32_t tbw, int x, int y);
    void bindDecodedLevel(int level, const GSDrawState &state, uint32_t tbp, uint32_t tbw, int width, int height);
    void prepareDecodedTextures(const GSDrawState &state, float q);
    void clearHotDecoded();
    void invalidateDecodedTextures();
    void invalidateDecodedOnWrite(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y);
    void invalidateDrawDestination(const GSDrawState &state, int x0, int y0, int x1, int y1);
    void rebuildDecodedPageUnion();
    void DumpTextureForDebug(const GSPrimitiveBatch &batch);

    void PerformLocalToLocalTransfer();
    void PerformLocalToHostTransfer();
    bool CopyFrameToHostRgba(const GSFrameReg &frame,
                             uint32_t width,
                             uint32_t height,
                             std::vector<uint8_t> &outPixels,
                             bool preserveAlpha,
                             bool useLocalMemoryLayout,
                             bool frameBaseIsPages,
                             uint32_t sourceOriginX,
                             uint32_t sourceOriginY) const;

    using WriteVramFunc = void (*)(uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
    using ReadVramFunc = uint32_t (*)(uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t);

    static constexpr size_t kPsmHandlerCount = 1u << 6u;
    mutable std::mutex m_mutex;
    std::unique_ptr<GSMetalRaster> m_metal;
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    std::unique_ptr<GSSDLGpuRaster> m_sdlGpu;
#endif
    bool m_metalTried = false;
    uint64_t m_cpuDraws = 0;
    uint8_t *m_vram = nullptr;
    uint32_t m_vramSize = 0;
    std::array<ReadVramFunc, kPsmHandlerCount> m_readVramFuncs{};
    std::array<WriteVramFunc, kPsmHandlerCount> m_writeVramFuncs{};
    mutable std::array<uint16_t, 512> m_clut{};
    mutable bool m_metalClutDirty = false;
    std::array<uint32_t, 2> m_clutCbp{};
    GSMem::TexturePageCache m_texturePageCache;

    struct DecodedTextureSlot
    {
        bool valid = false;
        bool indexed = false;
        uint32_t tbp = 0;
        uint32_t tbw = 0;
        uint32_t psm = 0;
        uint32_t width = 0;
        uint32_t height = 0;
        uint32_t lastUse = 0;
        std::array<uint64_t, 8> pageBits{};
        std::vector<uint32_t> rgba;
        std::vector<uint8_t> indices;
    };
    static constexpr int kDecodedTextureSlots = 32;
    std::array<DecodedTextureSlot, kDecodedTextureSlots> m_decodedTextures{};
    std::array<uint64_t, 8> m_decodedPageUnion{};
    int m_decodedValidCount = 0;
    uint32_t m_decodedUseClock = 1;
    std::array<const uint32_t *, 7> m_hotDecodedRgba{};
    std::array<const uint8_t *, 7> m_hotDecodedIdx{};
    bool m_hotLodConstant = false;
    bool m_hotNearest = false;
    unsigned m_hotClutCount = 0;
    uint8_t m_hotClutPsm = 0;
    uint8_t m_hotClutCpsm = 0;
    uint8_t m_hotClutCsm = 0;
    uint8_t m_hotClutCsa = 0;
    std::array<uint32_t, 256> m_hotClut{};
    int m_hotWidth = 1;
    int m_hotHeight = 1;
    int m_hotLevel = 0;
    bool m_hotLinear = false;
    uint32_t m_hotTbp = 0;
    uint32_t m_hotTbw = 1;
    bool m_inRaster = false;

    GSTransferCommand m_transfer{};
    GSTransferSnapshot m_transferState{};
    std::vector<uint8_t> m_localToHostBuffer;
    size_t m_localToHostReadPos = 0;
};
