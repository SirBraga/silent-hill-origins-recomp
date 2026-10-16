// CPU time of the runtime's threads (game, IOP, VU1, GS, window), written to the log every few seconds:
// "[cpu] GameThread 95% IOP 80% ..." (percent of one core over the interval). Shows where a slow machine spends its
// time without a profiler (Windows players send their log).
#pragma once

namespace ps2x_thread_cpu
{
    // Called by a thread once, with its name.
    void registerCurrent(const char *name);
    // Called often (the window loop); prints when PS2X_CPU_REPORT seconds passed (default 5, 0 = never).
    void reportIfDue();
}
