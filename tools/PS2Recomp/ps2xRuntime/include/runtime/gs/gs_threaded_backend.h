#pragma once
#include "runtime/gs/gs_backend.h"

#include <condition_variable>
#include <cstdint>
#include <deque>
#include <functional>
#include <memory>
#include <mutex>
#include <thread>
#include <vector>

// Runs a raster backend on its own thread. The GS frontend (EE thread) only records commands;
// rasterization, uploads and CLUT loads execute in submission order on the worker. Anything that
// returns data (presentation, VRAM readback, local->host transfers, snapshots) is queued as a
// fence and waited for, so results always reflect every command issued before it.
class GSThreadedBackend final : public GSRasterBackend
{
public:
    explicit GSThreadedBackend(std::unique_ptr<GSRasterBackend> inner);
    ~GSThreadedBackend() override;

    void Initialize(uint8_t *vram, uint32_t vramSize) override;
    void Reset() override;
    void Submit(const GSPrimitiveBatch &batch) override;
    void LoadClut(const GSTex0Reg &tex0, const GSTexClutReg &texclut) override;
    void BeginTransfer(const GSTransferCommand &command) override;
    void UploadImage(const uint8_t *data, uint32_t sizeBytes) override;
    void Flush() override;
    void TextureFlush() override;
    void Sync(GSSyncReason reason) override;
    PresentationFrame Present(const GSPresentationRequest &request) override;
    bool ClearFramebuffer(const GSContext &context, uint32_t rgba) override;
    uint32_t ConsumeLocalToHostBytes(uint8_t *dst, uint32_t maxBytes) override;
    uint32_t ReadVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const override;
    void WriteVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value) override;
    void SnapshotVram(std::vector<uint8_t> &out) const override;
    GSTransferSnapshot GetTransferSnapshot() const override;

private:
    using Command = std::function<void(GSRasterBackend &)>;

    uint64_t enqueue(Command command) const;
    // Queues `command` behind everything already submitted and blocks until it has run.
    void runSync(const Command &command) const;
    void workerLoop();

    std::unique_ptr<GSRasterBackend> m_inner;
    mutable std::mutex m_mutex;
    mutable std::condition_variable m_workAvailable;
    mutable std::condition_variable m_spaceAvailable;
    mutable std::condition_variable m_completedCv;
    mutable std::deque<Command> m_queue;
    mutable uint64_t m_submitted = 0;
    uint64_t m_completed = 0;
    bool m_stop = false;
    std::thread m_worker;
};
