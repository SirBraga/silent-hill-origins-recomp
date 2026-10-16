#pragma once

#include "iop_cpu.h"

#include <cstddef>
#include <cstdint>
#include <map>

namespace ps2x::iop::detail
{
    class IopMemory;

    enum class IopThreadState : uint8_t
    {
        Dormant,
        Ready,
        Running,
        Sleep,
        Delay,
        Semaphore,
        EventFlag,
        Suspended,
        Dead,
    };

    struct IopThread
    {
        int id = 0;
        IopThreadState state = IopThreadState::Dormant;
        IopCpuState cpu;
        uint32_t entry = 0;
        uint32_t stackBase = 0;
        uint32_t stackSize = 0;
        uint32_t priority = 0x40;
        uint32_t initialPriority = 0x40;
        uint32_t option = 0;
        uint32_t attr = 0;
        uint64_t wakeCycle = 0;
        int waitId = 0;
        uint32_t waitBits = 0;
        uint32_t waitMode = 0;
        uint32_t waitResultAddress = 0;
        int wakeupCount = 0;
    };

    class IopKernel
    {
    public:
        explicit IopKernel(IopMemory &memory) noexcept;

        void reset();

        [[nodiscard]] bool dispatchThreadImport(uint16_t ordinal, IopCpuState &cpu, uint64_t currentCycle);
        [[nodiscard]] bool dispatchSemaphoreImport(uint16_t ordinal, IopCpuState &cpu);
        [[nodiscard]] bool dispatchEventImport(uint16_t ordinal, IopCpuState &cpu);

        [[nodiscard]] int createInternalEventFlag(uint32_t attr, uint32_t option, uint32_t bits);
        [[nodiscard]] bool setInternalEventFlag(int id, uint32_t bits);

        void sleepCurrent(IopCpuState &cpu);
        void delayCurrentUntil(uint64_t wakeCycle, IopCpuState &cpu);

        [[nodiscard]] IopThread *beginNextReady(uint64_t currentCycle);
        [[nodiscard]] uint64_t nextWakeCycle(uint64_t fallback) const;
        void endTimeslice(IopThread &thread, uint32_t returnSentinel);
        void cleanupDeadThreads();
        void terminateThreadsInRange(uint32_t base, uint32_t size);

        [[nodiscard]] size_t threadCount() const noexcept { return m_threads.size(); }

        // Creates and starts a kernel-owned thread running entry(a0, a1, a2) on a caller-provided
        // stack (not freed by the kernel); returns its id.
        [[nodiscard]] int spawnThread(uint32_t entry, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t gp,
                                      uint32_t priority, uint32_t stackTop);
        [[nodiscard]] const IopThread *findThread(int id) const;
        void destroyThread(int id);
        [[nodiscard]] uint32_t currentThreadPriority(uint32_t fallback) const noexcept
        {
            return m_currentThread != nullptr ? m_currentThread->priority : fallback;
        }
        [[nodiscard]] bool hasCurrentThread() const noexcept { return m_currentThread != nullptr; }

    private:
        struct Semaphore
        {
            int id = 0;
            uint32_t attr = 0;
            uint32_t option = 0;
            int current = 0;
            int maximum = 1;
        };

        struct EventFlag
        {
            int id = 0;
            uint32_t bits = 0;
            uint32_t attr = 0;
            uint32_t option = 0;
        };

        [[nodiscard]] bool referThreadStatus(int id, uint32_t outputAddress);
        void wakeOneSemaphore(int id);
        // A thread-context SignalSema/SetEventFlag that readies a thread of higher priority hands it the CPU at once,
        // as the IOP kernel does: the caller yields (it stays ready) and the scheduler picks the woken thread.
        void preemptIfHigherReady(IopCpuState &cpu);
        [[nodiscard]] static bool eventSatisfied(const EventFlag &event, uint32_t bits, uint32_t mode);
        void wakeEventWaiters(EventFlag &event);

        IopMemory &m_memory;
        std::map<int, IopThread> m_threads;
        std::map<int, Semaphore> m_semaphores;
        std::map<int, EventFlag> m_eventFlags;
        uint32_t m_nextThreadId = 1;
        uint32_t m_nextSemaphoreId = 1;
        uint32_t m_nextEventFlagId = 1;
        IopThread *m_currentThread = nullptr;
    };
}
