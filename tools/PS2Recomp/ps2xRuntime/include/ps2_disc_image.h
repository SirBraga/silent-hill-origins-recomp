// The disc image as the game sees it (sector reads by number: sceCdRead, the IOP's own CD access), from either a
// real image (.iso) or a folder the launcher extracted the disc into: its .layout file says which sectors each
// file occupies, and .meta.bin holds the sectors that belong to no file (volume descriptors, directories). With the
// folder the ISO is no longer needed. PS2X_CD_IMAGE names the .iso or the .layout file.
#pragma once
#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <map>
#include <memory>
#include <mutex>
#include <sstream>
#include <string>
#include <vector>

namespace ps2x_disc
{
    class Image
    {
    public:
        virtual ~Image() = default;
        virtual uint64_t size() const = 0;
        // Reads [offset, offset + count): bytes past the end and unmapped sectors read as zeros. False on an I/O error.
        virtual bool read(uint64_t offset, void *destination, size_t count) = 0;
    };

    inline bool isLayout(const std::filesystem::path &path)
    {
        return path.filename() == ".layout";
    }

    class FileImage final : public Image
    {
    public:
        explicit FileImage(const std::filesystem::path &path) : file_(std::fopen(path.string().c_str(), "rb"))
        {
            std::error_code ec;
            size_ = file_ ? uint64_t(std::filesystem::file_size(path, ec)) : 0u;
        }
        ~FileImage() override
        {
            if (file_)
                std::fclose(file_);
        }
        bool ok() const { return file_ != nullptr; }
        uint64_t size() const override { return size_; }
        bool read(uint64_t offset, void *destination, size_t count) override
        {
            std::lock_guard<std::mutex> lock(mutex_);
            std::memset(destination, 0, count);
            if (offset >= size_)
                return true;
#if defined(_WIN32)
            if (_fseeki64(file_, int64_t(offset), SEEK_SET) != 0)
#else
            if (fseeko(file_, off_t(offset), SEEK_SET) != 0)
#endif
                return false;
            const size_t want = size_t(std::min<uint64_t>(count, size_ - offset));
            const size_t got = std::fread(destination, 1, want, file_);
            if (got < want && std::ferror(file_))
            {
                std::clearerr(file_);
                return false;
            }
            return true;
        }

    private:
        std::FILE *file_ = nullptr;
        uint64_t size_ = 0;
        std::mutex mutex_;
    };

    class FolderImage final : public Image
    {
    public:
        explicit FolderImage(const std::filesystem::path &layout)
        {
            const std::filesystem::path folder = layout.parent_path();
            std::ifstream in(layout);
            std::string line;
            if (!std::getline(in, line) || line.rfind("PS2XDISC 1 ", 0) != 0)
                return;
            sectors_ = std::stoull(line.substr(11));
            meta_ = std::make_unique<FileImage>(folder / ".meta.bin");
            while (std::getline(in, line))
            {
                std::istringstream fields(line);
                char kind = 0;
                Extent e;
                fields >> kind;
                if (kind == 'F')
                {
                    uint64_t bytes = 0;
                    fields >> e.lba >> bytes;
                    std::string path;
                    std::getline(fields >> std::ws, path);
                    e.sectors = (bytes + 2047u) / 2048u;
                    e.bytes = bytes;
                    e.file = folder / path;
                    names_[upper(path)] = e.lba * 2048u;
                }
                else if (kind == 'M')
                {
                    fields >> e.lba >> e.sectors >> e.metaOffset;
                    e.bytes = e.sectors * 2048u;
                }
                else
                    continue;
                extents_[e.lba] = e;
            }
            ok_ = true;
        }
        bool ok() const { return ok_; }
        uint64_t size() const override { return sectors_ * 2048u; }

        bool read(uint64_t offset, void *destination, size_t count) override
        {
            uint8_t *out = static_cast<uint8_t *>(destination);
            std::memset(out, 0, count);
            const uint64_t end = offset + count;
            // The extents that overlap [offset, end).
            auto it = extents_.upper_bound(offset / 2048u);
            if (it != extents_.begin())
                --it;
            for (; it != extents_.end() && it->second.lba * 2048u < end; ++it)
            {
                const Extent &e = it->second;
                const uint64_t start = e.lba * 2048u, stop = start + e.bytes;
                const uint64_t from = std::max(start, offset), to = std::min(stop, end);
                if (from >= to)
                    continue;
                if (!e.file.empty())
                {
                    std::lock_guard<std::mutex> lock(mutex_);
                    FileImage &f = open(e.file);
                    if (!f.ok() || !f.read(from - start, out + (from - offset), size_t(to - from)))
                        return false;
                }
                else if (!meta_->read(e.metaOffset + (from - start), out + (from - offset), size_t(to - from)))
                    return false;
            }
            return true;
        }

        // Where a file (its path in the disc, any case) starts, in bytes; UINT64_MAX when it is not on the disc.
        uint64_t fileStart(const std::string &path) const
        {
            const auto found = names_.find(upper(path));
            return found == names_.end() ? UINT64_MAX : found->second;
        }

    private:
        struct Extent
        {
            uint64_t lba = 0, sectors = 0, bytes = 0, metaOffset = 0;
            std::filesystem::path file; // empty: the bytes are in .meta.bin
        };
        static std::string upper(std::string s)
        {
            for (char &c : s)
                c = char(std::toupper(static_cast<unsigned char>(c)));
            return s;
        }
        FileImage &open(const std::filesystem::path &path)
        {
            auto &slot = open_[path.string()];
            if (!slot)
                slot = std::make_unique<FileImage>(path);
            return *slot;
        }
        bool ok_ = false;
        uint64_t sectors_ = 0;
        std::map<uint64_t, Extent> extents_; // by first sector
        std::map<std::string, uint64_t> names_;
        std::unique_ptr<FileImage> meta_;
        std::map<std::string, std::unique_ptr<FileImage>> open_;
        std::mutex mutex_;
    };

    // The image at `path` (an .iso or a .layout), opened once and shared; nullptr when it cannot be opened.
    inline std::shared_ptr<Image> open(const std::filesystem::path &path)
    {
        static std::mutex lock;
        static std::map<std::string, std::shared_ptr<Image>> opened;
        std::lock_guard<std::mutex> guard(lock);
        auto &slot = opened[path.string()];
        if (!slot)
        {
            if (isLayout(path))
            {
                auto folder = std::make_shared<FolderImage>(path);
                if (folder->ok())
                    slot = folder;
            }
            else
            {
                auto file = std::make_shared<FileImage>(path);
                if (file->ok())
                    slot = file;
            }
        }
        return slot;
    }
}
