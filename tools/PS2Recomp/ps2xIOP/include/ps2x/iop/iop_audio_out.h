#pragma once
#include <cstdint>

namespace ps2x::iop
{
    // Receives the SPU2's final mix: interleaved stereo 16-bit frames at 48 kHz, in guest time, on whatever thread
    // runs the IOP. Set once by the host before the IOP starts; nullptr discards the output.
    using Spu2OutputSink = void (*)(const int16_t *stereoFrames, uint32_t frameCount);
    void setSpu2OutputSink(Spu2OutputSink sink) noexcept;
}
