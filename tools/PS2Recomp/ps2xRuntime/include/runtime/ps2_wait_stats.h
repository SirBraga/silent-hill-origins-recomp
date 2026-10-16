#pragma once
// How long threads spent blocked on each other, in nanoseconds since start. Read by diagnostics (the hitch log)
// to tell which stage a slow frame was waiting for; a relaxed atomic add per wait, nothing on the fast paths.
#include <atomic>
#include <chrono>
#include <cstdint>

enum Ps2xWaitKind : unsigned
{
    kPs2xWaitGameForVif1Room, // game thread: the VIF1/VU1 queue was full
    kPs2xWaitGameForVif1Done, // game thread: had to wait until VIF1/VU1 finished what was queued
    kPs2xWaitVu1ForGsRoom,    // VIF1/VU1 (or game) thread: the renderer's feed was full
    kPs2xWaitGameForIop,      // game thread: the IOP thread was too far behind
    kPs2xWaitKinds
};

extern std::atomic<uint64_t> g_ps2xWaitNs[kPs2xWaitKinds];
// Vertical blank delivery: the largest lateness against the host clock since last read (ns, reset by the reader),
// and how many blanks were late enough to have their missed time dropped.
extern std::atomic<uint64_t> g_ps2xVblankLateMaxNs, g_ps2xVblankRebased;
// steady_clock time (ns) at which the last GS FINISH write of the game's display list was reached by whoever
// processes the list: the game takes that as "the frame is drawn" before it lets the buffers be swapped.
extern std::atomic<uint64_t> g_ps2xGsFinishNs;
// steady_clock time (ns) of the last VIF1 chain the game handed to the worker, and of the last one the worker finished.
extern std::atomic<uint64_t> g_ps2xVif1KickNs, g_ps2xVif1DoneNs;

struct Ps2xWaitTimer
{
    Ps2xWaitKind kind;
    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    explicit Ps2xWaitTimer(Ps2xWaitKind which) : kind(which) {}
    ~Ps2xWaitTimer()
    {
        g_ps2xWaitNs[kind].fetch_add(uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now() - begin).count()), std::memory_order_relaxed);
    }
};

// Set when a DMA channel completion is queued for the guest's DMAC handlers; the EE scheduler picks it up at its
// next accounting point and delivers the handlers at the following checkpoint.
extern std::atomic<bool> g_ps2xDmacCompletionQueued;

// Vertical blanks delivered, and how many of them the game answered by presenting a frame (it queued new display
// registers before the next blank): the real measure of frames shown, independent of how the game's loop is built.
extern std::atomic<uint64_t> g_ps2xVblanks, g_ps2xPresents;
// Display flips: counted when the display registers the game queued (behind the frame's drawing) take effect. With
// direct presentation a thread shows the frame right then; the main loop, which only polls on its own 60 Hz
// sleep, used to pick frames up at a drifting phase and now and then skipped or repeated one.
extern std::atomic<uint64_t> g_ps2xDisplayFlips, g_ps2xFlipPresentNs;
void ps2xWaitDisplayFlip(uint64_t seen, int timeoutMs);
extern std::atomic<bool> g_ps2xPresentArmed;
// Pictures handed to the game by sceMpegGetPicture.
extern std::atomic<uint64_t> g_ps2xMpegPictures;

// A small ring of timeline marks (diagnostics): who did what when inside a frame. 'K' VIF1 chain queued by the game
// (value: bytes), 'D' VIF1 chain finished by the worker, 'P' PATH3 chain queued, 'V' vertical blank delivered.
struct Ps2xMark
{
    uint64_t ns;
    uint32_t value;
    char kind;
};
extern Ps2xMark g_ps2xMarks[256];
extern std::atomic<uint32_t> g_ps2xMarkCount;
inline void ps2xMark(char kind, uint32_t value = 0)
{
    const uint32_t at = g_ps2xMarkCount.fetch_add(1u, std::memory_order_relaxed) & 255u;
    g_ps2xMarks[at] = {uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now().time_since_epoch()).count()), value, kind};
}
