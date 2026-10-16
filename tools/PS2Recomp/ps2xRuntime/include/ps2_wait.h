// Timeouts of the runtime's short waits (between the EE, the IOP, the scheduler and the GS), in one place.
//
// PS2X_SIMULATE_WIN_TIMER: reproduce Windows' timer on other systems, for testing without a PC. Windows rounds every
// sleep and timed wait up to its timer tick: 15.6 ms by default (=1), 1 ms after timeBeginPeriod(1) (=1ms).
#pragma once
#include <chrono>
#include <cstdlib>
#include <cstring>

namespace ps2x_wait
{
    // The simulated tick, or zero when waits are left as they are.
    inline std::chrono::nanoseconds tick()
    {
        static const std::chrono::nanoseconds value = [] {
            const char *v = std::getenv("PS2X_SIMULATE_WIN_TIMER");
            if (!v || !v[0] || v[0] == '0')
                return std::chrono::nanoseconds(0);
            if (std::strcmp(v, "1ms") == 0)
                return std::chrono::nanoseconds(1000000);
            return std::chrono::nanoseconds(15625000);
        }();
        return value;
    }

    // A wait of `d`, as long as the (simulated) system would really wait.
    template <typename Rep, typename Period>
    inline std::chrono::nanoseconds duration(std::chrono::duration<Rep, Period> d)
    {
        const auto ns = std::chrono::duration_cast<std::chrono::nanoseconds>(d);
        const auto t = tick();
        if (t.count() == 0 || ns.count() <= 0)
            return ns;
        return ((ns + t - std::chrono::nanoseconds(1)) / t) * t;
    }

    // A deadline, moved as the (simulated) system would.
    template <typename Clock, typename Dur>
    inline std::chrono::time_point<Clock, Dur> deadline(std::chrono::time_point<Clock, Dur> at)
    {
        if (tick().count() == 0)
            return at;
        const auto now = Clock::now();
        if (at <= now)
            return at;
        return now + std::chrono::duration_cast<Dur>(duration(at - now));
    }
}
