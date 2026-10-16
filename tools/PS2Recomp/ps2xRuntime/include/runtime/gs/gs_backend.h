#pragma once

#include "runtime/gs/gs_types.h"

#include <cstdint>
#include <vector>

class GSRasterBackend
{
public:
    virtual ~GSRasterBackend() = default;
    virtual bool HandlesGIF() const { return false; }
    virtual void FeedGIF(uint32_t, const uint8_t*, uint32_t) {}
    virtual void DirectRegister(uint8_t, uint64_t) {}
    virtual void NativeImage(const uint8_t*, uint32_t) {}
    virtual bool AttachNativeWindow(void*) { return false; }
    virtual bool UsesNativePresentation() const { return false; }
    // The in-game menu: hide the native picture over the window while it is open, and display options.
    virtual void SetNativeOverlay(bool) {}
    virtual void SetNativeOption(const char *, float) {}

    virtual void Initialize(uint8_t *vram, uint32_t vramSize) = 0;
    virtual void Reset() = 0;

    virtual void Submit(const GSPrimitiveBatch &batch) = 0;
    virtual void LoadClut(const GSTex0Reg &tex0, const GSTexClutReg &texclut) = 0;

    virtual void BeginTransfer(const GSTransferCommand &command) = 0;
    virtual void UploadImage(const uint8_t *data, uint32_t sizeBytes) = 0;

    virtual void Flush() = 0;
    virtual void FlushForPresentation() { Flush(); }
    virtual void TextureFlush() = 0;
    virtual void Sync(GSSyncReason reason) = 0;
    virtual PresentationFrame Present(const GSPresentationRequest &request) = 0;

    virtual bool ClearFramebuffer(const GSContext &context, uint32_t rgba) = 0;
    virtual uint32_t ConsumeLocalToHostBytes(uint8_t *dst, uint32_t maxBytes) = 0;

    virtual uint32_t ReadVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const = 0;
    virtual void WriteVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value) = 0;
    virtual void SnapshotVram(std::vector<uint8_t> &out) const = 0;
    virtual GSTransferSnapshot GetTransferSnapshot() const = 0;
};
