#include "runtime/gs/gs_threaded_backend.h"

#include <utility>

namespace
{
    // Bounds memory and latency: the EE may run at most this many commands ahead of the GS.
    constexpr size_t kMaxQueuedCommands = 16384u;
}

GSThreadedBackend::GSThreadedBackend(std::unique_ptr<GSRasterBackend> inner)
    : m_inner(std::move(inner))
{
    m_worker = std::thread([this]
                           { workerLoop(); });
}

GSThreadedBackend::~GSThreadedBackend()
{

    {
        std::lock_guard<std::mutex> lock(m_mutex);
        m_stop = true;
    }
    m_workAvailable.notify_all();
    m_spaceAvailable.notify_all();
    if (m_worker.joinable())
        m_worker.join();
}

void GSThreadedBackend::workerLoop()
{
    for (;;)
    {
        Command command;
        {
            std::unique_lock<std::mutex> lock(m_mutex);
            m_workAvailable.wait(lock, [this]
                                 { return m_stop || !m_queue.empty(); });
            if (m_queue.empty())
                return; // stopping and drained
            command = std::move(m_queue.front());
            m_queue.pop_front();
        }
        m_spaceAvailable.notify_all();
        command(*m_inner);
        {
            std::lock_guard<std::mutex> lock(m_mutex);
            ++m_completed;
        }
        m_completedCv.notify_all();
    }
}

uint64_t GSThreadedBackend::enqueue(Command command) const
{
    uint64_t sequence = 0;
    {
        std::unique_lock<std::mutex> lock(m_mutex);
        m_spaceAvailable.wait(lock, [this]
                              { return m_stop || m_queue.size() < kMaxQueuedCommands; });
        if (m_stop)
            return 0;
        m_queue.push_back(std::move(command));
        sequence = ++m_submitted;
    }
    m_workAvailable.notify_one();
    return sequence;
}

void GSThreadedBackend::runSync(const Command &command) const
{
    // Commands complete strictly in order, so waiting for this command's sequence number
    // also guarantees everything submitted before it has executed.
    const uint64_t sequence = enqueue([&command](GSRasterBackend &backend)
                                      { command(backend); });
    if (sequence == 0)
        return;
    std::unique_lock<std::mutex> lock(m_mutex);
    m_completedCv.wait(lock, [&]
                       { return m_stop || m_completed >= sequence; });
}

void GSThreadedBackend::Initialize(uint8_t *vram, uint32_t vramSize)
{
    runSync([=](GSRasterBackend &b)
            { b.Initialize(vram, vramSize); });
}

void GSThreadedBackend::Reset()
{
    runSync([](GSRasterBackend &b)
            { b.Reset(); });
}

void GSThreadedBackend::Submit(const GSPrimitiveBatch &batch)
{
    enqueue([batch](GSRasterBackend &b)
            { b.Submit(batch); });
}

void GSThreadedBackend::LoadClut(const GSTex0Reg &tex0, const GSTexClutReg &texclut)
{
    enqueue([tex0, texclut](GSRasterBackend &b)
            { b.LoadClut(tex0, texclut); });
}

void GSThreadedBackend::BeginTransfer(const GSTransferCommand &command)
{
    // Local->host transfers stage their data at BeginTransfer; the frontend consumes it through
    // ConsumeLocalToHostBytes, which is a fence, so this can stay asynchronous.
    enqueue([command](GSRasterBackend &b)
            { b.BeginTransfer(command); });
}

void GSThreadedBackend::UploadImage(const uint8_t *data, uint32_t sizeBytes)
{
    if (!data || sizeBytes == 0u)
        return;
    std::vector<uint8_t> copy(data, data + sizeBytes);
    enqueue([bytes = std::move(copy)](GSRasterBackend &b)
            { b.UploadImage(bytes.data(), static_cast<uint32_t>(bytes.size())); });
}

void GSThreadedBackend::Flush()
{
    enqueue([](GSRasterBackend &b)
            { b.Flush(); });
}

void GSThreadedBackend::TextureFlush()
{
    enqueue([](GSRasterBackend &b)
            { b.TextureFlush(); });
}

void GSThreadedBackend::Sync(GSSyncReason reason)
{
    enqueue([reason](GSRasterBackend &b)
            { b.Sync(reason); });
}

PresentationFrame GSThreadedBackend::Present(const GSPresentationRequest &request)
{
    PresentationFrame frame;
    runSync([&](GSRasterBackend &b)
            { frame = b.Present(request); });
    return frame;
}

bool GSThreadedBackend::ClearFramebuffer(const GSContext &context, uint32_t rgba)
{
    bool result = false;
    runSync([&](GSRasterBackend &b)
            { result = b.ClearFramebuffer(context, rgba); });
    return result;
}

uint32_t GSThreadedBackend::ConsumeLocalToHostBytes(uint8_t *dst, uint32_t maxBytes)
{
    uint32_t result = 0u;
    runSync([&](GSRasterBackend &b)
            { result = b.ConsumeLocalToHostBytes(dst, maxBytes); });
    return result;
}

uint32_t GSThreadedBackend::ReadVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const
{
    uint32_t result = 0u;
    runSync([&](GSRasterBackend &b)
            { result = b.ReadVram(psm, base, bw, x, y); });
    return result;
}

void GSThreadedBackend::WriteVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value)
{
    enqueue([=](GSRasterBackend &b)
            { b.WriteVram(psm, base, bw, x, y, value); });
}

void GSThreadedBackend::SnapshotVram(std::vector<uint8_t> &out) const
{
    runSync([&](GSRasterBackend &b)
            { b.SnapshotVram(out); });
}

GSTransferSnapshot GSThreadedBackend::GetTransferSnapshot() const
{
    GSTransferSnapshot snapshot;
    runSync([&](GSRasterBackend &b)
            { snapshot = b.GetTransferSnapshot(); });
    return snapshot;
}
