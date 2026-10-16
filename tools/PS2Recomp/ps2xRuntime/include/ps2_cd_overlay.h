#pragma once
// Disc overlay (PS2X_CD_OVERLAY=<file>): byte ranges of the CD image replaced by data from another file, and data
// served past the end of the image, without touching the image. Used to add a translation: a file inside an archive
// is pointed at new data placed after the end of the disc.
//
// File: "PS2XOVL1", u32 count, count x (u64 image offset, u32 length, u64 offset of the data in this file).
#include "ps2_disc_image.h"
#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <string>
#include <mutex>
#include <vector>

namespace ps2x_cd_overlay
{
    struct Range
    {
        uint64_t at;
        uint32_t length;
        std::vector<uint8_t> data;
    };

    struct State
    {
        std::vector<Range> ranges;
        uint64_t end = 0;
    };

    inline const State &state()
    {
        static const State loaded = []
        {
            State s;
            const char *path = std::getenv("PS2X_CD_OVERLAY");
            if (!path || !path[0])
                return s;
            std::FILE *file = std::fopen(path, "rb");
            if (!file)
            {
                std::fprintf(stderr, "[cd-overlay] cannot open %s\n", path);
                return s;
            }
            char magic[8];
            uint32_t count = 0;
            if (std::fread(magic, 8, 1, file) != 1 || std::memcmp(magic, "PS2XOVL1", 8) != 0 || std::fread(&count, 4, 1, file) != 1)
            {
                std::fclose(file);
                std::fprintf(stderr, "[cd-overlay] %s is not an overlay\n", path);
                return s;
            }
            for (uint32_t i = 0; i < count; ++i)
            {
                uint64_t at = 0, source = 0;
                uint32_t length = 0;
                if (std::fread(&at, 8, 1, file) != 1 || std::fread(&length, 4, 1, file) != 1 || std::fread(&source, 8, 1, file) != 1)
                    break;
                Range r{at, length, std::vector<uint8_t>(length)};
                const long back = std::ftell(file);
                std::fseek(file, static_cast<long>(source), SEEK_SET);
                if (length && std::fread(r.data.data(), length, 1, file) != 1)
                    break;
                std::fseek(file, back, SEEK_SET);
                s.end = std::max<uint64_t>(s.end, at + length);
                s.ranges.push_back(std::move(r));
            }
            std::fclose(file);
            std::fprintf(stderr, "[cd-overlay] %zu ranges from %s\n", s.ranges.size(), path);
            return s;
        }();
        return loaded;
    }

    // Overlay data reaches this far into the image (0 without an overlay): reads up to here are valid.
    inline uint64_t end() { return state().end; }

    inline uint64_t lookUp(const std::filesystem::path &image, const std::filesystem::path &root, const std::filesystem::path &file);

    // Where a file of the disc root (read from the mounted disc, PS2X_CD_ROOT) starts in the image, so the overlay
    // applies to it too; UINT64_MAX when it is not a root file of the image or there is no overlay.
    inline uint64_t fileBase(const std::filesystem::path &image, const std::filesystem::path &root, const std::filesystem::path &file)
    {
        if (state().ranges.empty() || image.empty() || root.empty())
            return UINT64_MAX;
        static std::mutex lock;
        static std::vector<std::pair<std::string, uint64_t>> known; // looked up once per file
        std::lock_guard<std::mutex> guard(lock);
        for (const auto &[path, base] : known)
            if (path == file.string())
                return base;
        const uint64_t base = lookUp(image, root, file);
        if (std::getenv("PS2X_CD_OVERLAY_TRACE"))
            std::fprintf(stderr, "[cd-overlay] file %s -> base %llx\n", file.string().c_str(), (unsigned long long)base);
        known.emplace_back(file.string(), base);
        return base;
    }

    inline uint64_t lookUp(const std::filesystem::path &image, const std::filesystem::path &root, const std::filesystem::path &file)
    {
        std::error_code ec;
        // The mount can be named /var/... in one place and /private/var/... in another.
        const std::filesystem::path relative = std::filesystem::relative(std::filesystem::weakly_canonical(file, ec), std::filesystem::weakly_canonical(root, ec), ec);
        if (ec || relative.empty() || relative.has_parent_path() || relative.string().rfind("..", 0) == 0)
            return UINT64_MAX;
        std::string wanted = relative.string();
        for (char &c : wanted)
            c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
        if (ps2x_disc::isLayout(image))
        {
            // The extracted folder: its layout says where each file was on the disc.
            const auto opened = ps2x_disc::open(image);
            const auto *folder = dynamic_cast<const ps2x_disc::FolderImage *>(opened.get());
            return folder ? folder->fileStart(wanted) : UINT64_MAX;
        }
        std::FILE *iso = std::fopen(image.string().c_str(), "rb");
        if (!iso)
            return UINT64_MAX;
        uint8_t pvd[2048];
        uint64_t found = UINT64_MAX;
        if (std::fseek(iso, 16 * 2048, SEEK_SET) == 0 && std::fread(pvd, sizeof(pvd), 1, iso) == 1)
        {
            uint32_t lba, length;
            std::memcpy(&lba, pvd + 156 + 2, 4);
            std::memcpy(&length, pvd + 156 + 10, 4);
            std::vector<uint8_t> dir(length);
            if (std::fseek(iso, static_cast<long>(lba) * 2048, SEEK_SET) == 0 && std::fread(dir.data(), length, 1, iso) == 1)
                for (uint32_t o = 0; o < length;)
                {
                    if (dir[o] == 0)
                    {
                        o = (o / 2048 + 1) * 2048;
                        continue;
                    }
                    std::string name(reinterpret_cast<const char *>(&dir[o + 33]), dir[o + 32]);
                    if (const size_t semi = name.find(';'); semi != std::string::npos)
                        name.resize(semi);
                    if (name == wanted)
                    {
                        uint32_t extent;
                        std::memcpy(&extent, &dir[o + 2], 4);
                        found = uint64_t(extent) * 2048u;
                        break;
                    }
                    o += dir[o];
                }
        }
        std::fclose(iso);
        return found;
    }

    // Applies the overlay to bytes [offset, offset + size) just read from the image (zero past its end).
    inline void apply(uint64_t offset, uint8_t *destination, size_t size)
    {
        for (const Range &r : state().ranges)
        {
            const uint64_t from = std::max(offset, r.at), to = std::min<uint64_t>(offset + size, r.at + r.length);
            if (from < to)
            {
                std::memcpy(destination + (from - offset), r.data.data() + (from - r.at), static_cast<size_t>(to - from));
                static const bool trace = std::getenv("PS2X_CD_OVERLAY_TRACE") != nullptr;
                if (trace)
                    std::fprintf(stderr, "[cd-overlay] range at 0x%llx: %llu bytes\n", (unsigned long long)r.at, (unsigned long long)(to - from));
            }
        }
    }
}
