// SHO_LOAD_TRACE=<file>: logs every call of 0x24D518 (the loader's read from a stream: a0 stream, a1 destination,
// a2 size) with the first bytes read, and appends the bytes to <file>.bin, to compare a save being loaded with
// what is on the memory card.
#include "ps2_runtime.h"
#include "game_overrides.h"
#include "runtime/ee_scheduler.h"

#include <chrono>
#include <thread>

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <algorithm>

namespace
{
    constexpr uint32_t kStreamRead = 0x0024D518u, kDeviceRead = 0x00273C90u;
    PS2Runtime::RecompiledFunction g_read = nullptr, g_deviceRead = nullptr;
    std::FILE *g_log = nullptr, *g_bin = nullptr;
    uint32_t word(const uint8_t *rdram, uint32_t at);
    constexpr uint32_t kCallRpc = 0x00324BB8u, kNotify = 0x00274A80u;
    PS2Runtime::RecompiledFunction g_callRpc = nullptr, g_notify = nullptr;

    // The EE handler of the IOP's "transfer done" command (packet a0): file slot and sector position.
    void notifyThunk(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const bool entry = ctx->pc == kNotify;
        const uint32_t packet = getRegU32(ctx, 4);
        if (entry)
        {
            const uint32_t value = word(rdram, packet + 0x0C);
            std::fprintf(g_log, "notify slot=%u pos=%u state(file)=%u\n", value & 0xFFu, value >> 8, word(rdram, 0x343F00u + 0x38u));
            std::fflush(g_log);
        }
        g_notify(rdram, ctx, runtime);
    }

    uint32_t word(const uint8_t *rdram, uint32_t at)
    {
        uint32_t v;
        std::memcpy(&v, rdram + (at & 0x1FFFFFFu), 4);
        return v;
    }

    // The RenderWare file device read (file object a0, destination a1, size a2): the file's window, position and the
    // one-sector buffer it reads unaligned data through, before and after, and the bytes delivered.
    void deviceReadThunk(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const bool entry = ctx->pc == kDeviceRead;
        const uint32_t file = getRegU32(ctx, 4), dst = getRegU32(ctx, 5), size = getRegU32(ctx, 6);
        const uint32_t end0 = word(rdram, file), pos0 = word(rdram, file + 0x10), idx0 = word(rdram, file + 0x6C), have0 = word(rdram, file + 0x74);
        g_deviceRead(rdram, ctx, runtime);
        if (!entry)
            return;
        std::fprintf(g_log, "dev file=%08x end=%08x pos %08x->%08x idx %x->%x have %x->%x buf=%08x dst=%08x size=%u ret=%d first=", file, end0, pos0,
                     word(rdram, file + 0x10), idx0, word(rdram, file + 0x6C), have0, word(rdram, file + 0x74), word(rdram, file + 0x70), dst, size,
                     static_cast<int32_t>(getRegU32(ctx, 2)));
        for (uint32_t i = 0; i < std::min<uint32_t>(size, 16u); ++i)
            std::fprintf(g_log, "%02x", rdram[(dst + i) & 0x1FFFFFFu]);
        std::fprintf(g_log, "\n");
        std::fflush(g_log);
    }

    void readThunk(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const bool entry = ctx->pc == kStreamRead;
        const uint32_t stream = getRegU32(ctx, 4), dst = getRegU32(ctx, 5), size = getRegU32(ctx, 6), ra = getRegU32(ctx, 31);
        uint32_t s0 = 0, s1 = 0, s2 = 0, s3 = 0;
        if (entry && stream)
        {
            std::memcpy(&s0, rdram + (stream & 0x1FFFFFFu), 4);
            std::memcpy(&s1, rdram + ((stream + 4u) & 0x1FFFFFFu), 4);
            std::memcpy(&s2, rdram + ((stream + 8u) & 0x1FFFFFFu), 4);
            std::memcpy(&s3, rdram + ((stream + 12u) & 0x1FFFFFFu), 4);
        }
        g_read(rdram, ctx, runtime);
        if (entry)
        {
            const uint32_t got = getRegU32(ctx, 2);
            std::fprintf(g_log, "read stream=%08x [%08x %08x %08x %08x] dst=%08x size=%u ret=%u ra=%08x first=", stream, s0, s1, s2, s3, dst, size, got, ra);
            for (uint32_t i = 0; i < std::min<uint32_t>(size, 16u); ++i)
                std::fprintf(g_log, "%02x", rdram[(dst + i) & 0x1FFFFFFu]);
            std::fprintf(g_log, "\n");
            std::fflush(g_log);
            (void)g_bin;
        }
    }

    // sceSifCallRpc(client a0, fno a1, mode a2, send a3, ssize t0, ...): the RenderWare file RPCs (client 0x705448).
    void callRpcThunk(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const bool entry = ctx->pc == kCallRpc;
        const uint32_t client = getRegU32(ctx, 4), fno = getRegU32(ctx, 5), send = getRegU32(ctx, 7), ssize = getRegU32(ctx, 8);
        if (entry && client == 0x705448u)
        {
            std::fprintf(g_log, "rpc fno=%u size=%u data=", fno, ssize);
            for (uint32_t i = 0; i < std::min<uint32_t>(ssize, 32u); i += 4)
                std::fprintf(g_log, "%08x ", word(rdram, send + i));
            std::fprintf(g_log, "\n");
            std::fflush(g_log);
        }
        const uint32_t buffer = word(rdram, send + 8);
        g_callRpc(rdram, ctx, runtime);
        if (entry && client == 0x705448u && fno == 5u)
        {
            std::fprintf(g_log, "rpc5 done buf=%08x first=", buffer);
            for (uint32_t i = 0; i < 16u; ++i)
                std::fprintf(g_log, "%02x", rdram[(buffer + i) & 0x1FFFFFFu]);
            std::fprintf(g_log, " at580=");
            for (uint32_t i = 0; i < 16u; ++i)
                std::fprintf(g_log, "%02x", rdram[(buffer + 0x580u + i) & 0x1FFFFFFu]);
            std::fprintf(g_log, "\n");
            std::fflush(g_log);
        }
    }

    // SHO_THREAD_DUMP=1: every 5 s, every EE thread with its status, wait reason, pc/ra, and the semaphores.
    void startThreadDump(PS2Runtime &runtime)
    {
        if (!std::getenv("SHO_THREAD_DUMP"))
            return;
        std::thread([&runtime]
        {
            for (;;)
            {
                std::this_thread::sleep_for(std::chrono::seconds(5));
                const EeKernelSnapshot snap = runtime.eeScheduler().snapshot();
                std::fprintf(stderr, "[thread-dump] running=%d\n", snap.runningThreadId);
                for (const EeThreadSnapshot &t : snap.threads)
                    std::fprintf(stderr, "[thread-dump]  id=%d status=%d wait=%d waitId=%d pc=%08x ra=%08x prio=%d entry=%08x\n", t.id, int(t.status),
                                 int(t.waitReason), t.waitId, t.pc, t.ra, t.currentPriority, t.entry);
                for (const EeSemaphoreSnapshot &m : snap.semaphores)
                    if (m.waiters)
                        std::fprintf(stderr, "[thread-dump]  sema id=%d count=%d waiters=%u\n", m.id, m.count, m.waiters);
            }
        }).detach();
    }

    void apply(PS2Runtime &runtime)
    {
        startThreadDump(runtime);
        const char *path = std::getenv("SHO_LOAD_TRACE");
        if (!path || !path[0])
            return;
        g_log = std::fopen(path, "w");
        g_bin = std::fopen((std::string(path) + ".bin").c_str(), "wb");
        g_read = runtime.lookupFunction(kStreamRead);
        g_deviceRead = runtime.lookupFunction(kDeviceRead);
        if (g_log && g_bin && g_read)
            runtime.replaceFunction(kStreamRead, &readThunk);
        if (g_log && g_deviceRead)
            runtime.replaceFunction(kDeviceRead, &deviceReadThunk);
        g_notify = runtime.lookupFunction(kNotify);
        if (g_log && g_notify)
            runtime.replaceFunction(kNotify, &notifyThunk);
        g_callRpc = runtime.lookupFunction(kCallRpc);
        if (g_log && g_callRpc)
            runtime.replaceFunction(kCallRpc, &callRpcThunk);
    }
}

PS2_REGISTER_GAME_OVERRIDE("Silent Hill Origins load trace", "SLUS_217.31", 0x001F61E0u, 0u, apply)
