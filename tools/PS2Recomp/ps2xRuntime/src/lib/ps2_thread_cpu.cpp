#include "ps2_thread_cpu.h"

#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <mutex>
#include <string>
#include <vector>

extern std::atomic<uint64_t> g_ps2xVu1RunNs, g_ps2xGifSubmitNs; // ps2_memory.cpp

#if defined(_WIN32)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#elif defined(__APPLE__)
#include <mach/mach.h>
#elif defined(__linux__)
#include <pthread.h>
#include <time.h>
#endif

namespace ps2x_thread_cpu
{
    namespace
    {
        struct Entry
        {
            std::string name;
#if defined(_WIN32)
            HANDLE handle = nullptr;
#elif defined(__APPLE__)
            mach_port_t port = MACH_PORT_NULL;
#elif defined(__linux__)
            clockid_t clock{};
#endif
            double last = 0.0;
        };
        std::mutex g_lock;
        std::vector<Entry> g_threads;

        // Seconds of CPU the thread used so far.
        double cpuSeconds(const Entry &e)
        {
#if defined(_WIN32)
            FILETIME created, exited, kernel, user;
            if (!GetThreadTimes(e.handle, &created, &exited, &kernel, &user))
                return e.last;
            const auto ticks = [](const FILETIME &f) { return (double(f.dwHighDateTime) * 4294967296.0 + double(f.dwLowDateTime)) * 1e-7; };
            return ticks(kernel) + ticks(user);
#elif defined(__APPLE__)
            thread_basic_info_data_t info{};
            mach_msg_type_number_t count = THREAD_BASIC_INFO_COUNT;
            if (thread_info(e.port, THREAD_BASIC_INFO, reinterpret_cast<thread_info_t>(&info), &count) != KERN_SUCCESS)
                return e.last;
            return double(info.user_time.seconds + info.system_time.seconds) + double(info.user_time.microseconds + info.system_time.microseconds) * 1e-6;
#elif defined(__linux__)
            timespec ts{};
            if (clock_gettime(e.clock, &ts) != 0)
                return e.last;
            return double(ts.tv_sec) + double(ts.tv_nsec) * 1e-9;
#else
            return 0.0;
#endif
        }
    }

    void registerCurrent(const char *name)
    {
        Entry e;
        e.name = name;
#if defined(_WIN32)
        DuplicateHandle(GetCurrentProcess(), GetCurrentThread(), GetCurrentProcess(), &e.handle, THREAD_QUERY_LIMITED_INFORMATION, FALSE, 0);
#elif defined(__APPLE__)
        e.port = mach_thread_self();
#elif defined(__linux__)
        pthread_getcpuclockid(pthread_self(), &e.clock);
#endif
        e.last = cpuSeconds(e);
        std::lock_guard<std::mutex> lock(g_lock);
        g_threads.push_back(std::move(e));
    }

    void reportIfDue()
    {
        static const double interval = [] { const char *v = std::getenv("PS2X_CPU_REPORT"); return v ? std::atof(v) : 5.0; }();
        if (interval <= 0.0)
            return;
        using clock = std::chrono::steady_clock;
        static clock::time_point last = clock::now();
        const clock::time_point now = clock::now();
        const double elapsed = std::chrono::duration<double>(now - last).count();
        if (elapsed < interval)
            return;
        last = now;
        std::string line = "[cpu]";
        std::lock_guard<std::mutex> lock(g_lock);
        for (Entry &e : g_threads)
        {
            const double used = cpuSeconds(e);
            char part[64];
            std::snprintf(part, sizeof part, " %s %.0f%%", e.name.c_str(), (used - e.last) / elapsed * 100.0);
            line += part;
            e.last = used;
        }
        // Of the VIF1/VU1 thread: VU1 microprograms (XGKICKs included) and the GS front end (any path).
        const double vu1 = double(g_ps2xVu1RunNs.exchange(0)) * 1e-9, gif = double(g_ps2xGifSubmitNs.exchange(0)) * 1e-9;
        char split[96];
        std::snprintf(split, sizeof split, " [VU1 programs %.0f%%, GS front end %.0f%%]", vu1 / elapsed * 100.0, gif / elapsed * 100.0);
        std::fprintf(stderr, "%s%s (of one core, over %.1f s)\n", line.c_str(), split, elapsed);
    }
}
