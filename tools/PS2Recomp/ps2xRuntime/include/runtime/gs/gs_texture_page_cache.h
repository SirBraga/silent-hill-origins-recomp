#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include <cstring>

namespace GSMem
{
    class TexturePageCache
    {
    public:
        static constexpr uint32_t kPageSize = 8192u;

        void Invalidate() noexcept
        {
            m_pageBase = UINT32_MAX;
        }

        // byteAddress is the wrapped, swizzled VRAM address. The returned
        // pointer is valid only until the next miss or invalidation.
        const uint8_t* Resolve(const uint8_t* vram, uint32_t byteAddress) noexcept
        {
            // VRAM is host memory already: read it in place. The former 8 KB page copy on every
            // page change thrashed whenever a bilinear footprint or a row straddled two pages
            // (e.g. full-screen video composites), costing far more than the reads it served.
            return vram + byteAddress;
        }
    private:
        alignas(64) std::array<uint8_t, kPageSize> m_bytes{};
        uint32_t m_pageBase = UINT32_MAX;
    };
}
