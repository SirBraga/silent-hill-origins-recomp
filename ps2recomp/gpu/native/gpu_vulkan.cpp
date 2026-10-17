// Vulkan implementation of gpu.h (Windows; also builds on macOS against MoltenVK for testing). The shaders are
// gs_shaders.glsl compiled to SPIR-V by compile_shaders.sh into gs_shaders_spv.inc.
//
// How the Metal model maps here:
// - Every image lives in VK_IMAGE_LAYOUT_GENERAL (render target, texture, copy source and destination at once), so
//   no layout tracking is needed; swapchain images go to PRESENT_SRC_KHR only when presented.
// - A full memory barrier separates passes and copies (Metal orders them itself).
// - The fragment shader reading the pixel it writes (Metal's [[color(0)]]) uses the colour target as an input
//   attachment too. With VK_EXT_rasterization_order_attachment_access (AMD, most mobile GPUs, MoltenVK) the GPU keeps
//   overlapping fragments in order, as Apple GPUs do. Without it, a by-region barrier goes before each draw that reads
//   the target, and such draws are issued one primitive at a time (overlapping primitives of one draw otherwise race).
// - replaceRegion is recorded into an upload command buffer that is submitted before the next command buffer;
//   getBytes copies through a staging buffer and waits.
// - Command buffers retire on a background thread (fences), which runs the completion handlers, as Metal does.
#if defined(_WIN32)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#define VK_USE_PLATFORM_WIN32_KHR
#include <windows.h>
#endif
#define VK_NO_PROTOTYPES
#include "volk.h"

#include "gpu.h"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cmath>
#include <condition_variable>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <map>
#include <mutex>
#include <thread>
#include <unordered_map>
#include <vector>

#if !defined(_WIN32)
#include <dlfcn.h>
#endif

namespace gpu
{
    namespace
    {
        struct SpirvBlob
        {
            const char *name;
            const uint32_t *code;
            size_t size;
        };
#if __has_include("gs_shaders_spv.inc")
#include "gs_shaders_spv.inc" // defines kSpirvBlobs[] and kSpirvBlobCount
#else
        const SpirvBlob *const kSpirvBlobs = nullptr;
        const size_t kSpirvBlobCount = 0;
#endif

        double hostSeconds()
        {
            return std::chrono::duration<double>(std::chrono::steady_clock::now().time_since_epoch()).count();
        }

        VkFormat toVulkan(Format format)
        {
            switch (format)
            {
            case Format::RGBA8: return VK_FORMAT_R8G8B8A8_UNORM;
            case Format::BGRA8: return VK_FORMAT_B8G8R8A8_UNORM;
            case Format::Depth32F: return VK_FORMAT_D32_SFLOAT;
            case Format::BC1: return VK_FORMAT_BC1_RGBA_UNORM_BLOCK;
            case Format::BC3: return VK_FORMAT_BC3_UNORM_BLOCK;
            default: return VK_FORMAT_UNDEFINED;
            }
        }
        bool isCompressed(Format format) { return format == Format::BC1 || format == Format::BC3; }
        uint32_t blockBytes(Format format) { return format == Format::BC1 ? 8u : 16u; }

        bool check(VkResult result, const char *what)
        {
            if (result == VK_SUCCESS)
                return true;
            std::fprintf(stderr, "[native-gs] vulkan: %s failed (%d)\n", what, int(result));
            return false;
        }

        // ------------------------------------------------------------------------------------------- memory

        // First-fit sub-allocation out of large blocks: a game keeps thousands of textures, and drivers allow only a
        // few thousand separate allocations (4096 on many).
        struct MemoryBlock
        {
            VkDeviceMemory memory = VK_NULL_HANDLE;
            VkDeviceSize size = 0;
            void *mapped = nullptr;
            uint32_t type = 0;
            std::map<VkDeviceSize, VkDeviceSize> free; // offset -> size
        };
        struct Allocation
        {
            MemoryBlock *block = nullptr;
            VkDeviceSize offset = 0, size = 0;
            void *mapped() const { return block && block->mapped ? static_cast<uint8_t *>(block->mapped) + offset : nullptr; }
        };

        class Allocator
        {
        public:
            VkDevice device = VK_NULL_HANDLE;
            VkPhysicalDeviceMemoryProperties properties{};
            std::mutex mutex;
            std::vector<std::unique_ptr<MemoryBlock>> blocks;

            int findType(uint32_t bits, VkMemoryPropertyFlags wanted) const
            {
                for (uint32_t i = 0; i < properties.memoryTypeCount; ++i)
                    if ((bits & (1u << i)) && (properties.memoryTypes[i].propertyFlags & wanted) == wanted)
                        return int(i);
                return -1;
            }

            bool allocate(const VkMemoryRequirements &requirements, VkMemoryPropertyFlags wanted, Allocation &out)
            {
                int type = findType(requirements.memoryTypeBits, wanted);
                if (type < 0 && (wanted & VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT))
                    type = findType(requirements.memoryTypeBits, wanted & ~VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
                if (type < 0)
                    return false;
                const VkDeviceSize alignment = std::max<VkDeviceSize>(requirements.alignment, 256);
                std::lock_guard<std::mutex> lock(mutex);
                for (auto &block : blocks)
                    if (block->type == uint32_t(type) && take(*block, requirements.size, alignment, out))
                        return true;
                constexpr VkDeviceSize kBlockSize = 64ull << 20;
                auto block = std::make_unique<MemoryBlock>();
                block->size = std::max(kBlockSize, (requirements.size + alignment + 0xFFFF) & ~VkDeviceSize(0xFFFF));
                block->type = uint32_t(type);
                VkMemoryAllocateInfo info{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
                info.allocationSize = block->size;
                info.memoryTypeIndex = uint32_t(type);
                if (!check(vkAllocateMemory(device, &info, nullptr, &block->memory), "vkAllocateMemory"))
                    return false;
                if (properties.memoryTypes[type].propertyFlags & VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT)
                    vkMapMemory(device, block->memory, 0, VK_WHOLE_SIZE, 0, &block->mapped);
                block->free[0] = block->size;
                if (std::getenv("PS2X_GS_VULKAN_MEMLOG"))
                    std::fprintf(stderr, "[native-gs] vulkan: memory block %zu (%llu MB, type %d, for %llu bytes)\n", blocks.size() + 1, (unsigned long long)(block->size >> 20), type, (unsigned long long)requirements.size);
                blocks.push_back(std::move(block));
                return take(*blocks.back(), requirements.size, alignment, out);
            }

            void release(Allocation &allocation)
            {
                if (!allocation.block)
                    return;
                std::lock_guard<std::mutex> lock(mutex);
                auto &free = allocation.block->free;
                VkDeviceSize offset = allocation.offset, size = allocation.size;
                auto next = free.lower_bound(offset);
                if (next != free.end() && offset + size == next->first)
                {
                    size += next->second;
                    next = free.erase(next);
                }
                if (next != free.begin())
                {
                    auto previous = std::prev(next);
                    if (previous->first + previous->second == offset)
                    {
                        previous->second += size;
                        allocation.block = nullptr;
                        return;
                    }
                }
                free[offset] = size;
                allocation.block = nullptr;
            }

        private:
            static bool take(MemoryBlock &block, VkDeviceSize size, VkDeviceSize alignment, Allocation &out)
            {
                for (auto it = block.free.begin(); it != block.free.end(); ++it)
                {
                    const VkDeviceSize start = (it->first + alignment - 1) & ~(alignment - 1);
                    const VkDeviceSize end = it->first + it->second;
                    if (start + size > end)
                        continue;
                    const VkDeviceSize before = start - it->first, after = end - (start + size);
                    const VkDeviceSize regionStart = it->first;
                    block.free.erase(it);
                    if (before)
                        block.free[regionStart] = before;
                    if (after)
                        block.free[start + size] = after;
                    out.block = &block;
                    out.offset = start;
                    out.size = size;
                    return true;
                }
                return false;
            }
        };

        class VulkanDevice;

        // ------------------------------------------------------------------------------------------- objects

        class VulkanTexture final : public Texture
        {
        public:
            VulkanDevice *owner = nullptr;
            VkImage image = VK_NULL_HANDLE;
            VkImageView view = VK_NULL_HANDLE;
            VkImageAspectFlags aspect = VK_IMAGE_ASPECT_COLOR_BIT;
            Allocation memory;
            bool swapchainImage = false; // owned by the swapchain
            bool inputAttachment = false; // can be read as the pixel being drawn
            ~VulkanTexture() override;
        };
        VulkanTexture *vk(const TextureRef &t) { return static_cast<VulkanTexture *>(t.get()); }

        class VulkanBuffer final : public Buffer
        {
        public:
            VulkanDevice *owner = nullptr;
            VkBuffer buffer = VK_NULL_HANDLE;
            Allocation memory;
            ~VulkanBuffer() override;
        };

        class VulkanSampler final : public Sampler
        {
        public:
            VkSampler sampler = VK_NULL_HANDLE;
        };

        class VulkanDepthState final : public DepthState
        {
        public:
            DepthDesc desc;
        };

        // One VkPipeline per primitive class and per kind of pass (with or without the colour target as input
        // attachment), made when first drawn with.
        class VulkanPipeline final : public Pipeline
        {
        public:
            VulkanDevice *owner = nullptr;
            PipelineDesc desc;
            VkShaderModule vertex = VK_NULL_HANDLE, fragment = VK_NULL_HANDLE;
            bool readsDestination = false;
            std::mutex mutex;
            VkPipeline variants[3][2][6] = {}; // primitive class, with input, depth state (without extended dynamic state)
            ~VulkanPipeline() override;
            VkPipeline get(Primitive primitive, bool withInput, uint32_t depthKey = 0);
        };

        // Uniform data (setVertexBytes/setFragmentBytes) goes into 1 MB host-visible chunks owned by the command buffer.
        struct UniformChunk
        {
            BufferRef buffer;
            size_t used = 0;
        };

        struct Retired; // what a command buffer leaves to free once the GPU is done with it

        class VulkanCommandBuffer;

        // A primitive's screen footprint (the game's coordinates) and the primitives of the current run, found through
        // 16-pixel cells.
        struct Shape
        {
            float p[3][2];
            uint32_t corners = 3;
            float x0() const { float v = p[0][0]; for (uint32_t i = 1; i < corners; ++i) v = std::min(v, p[i][0]); return v; }
            float x1() const { float v = p[0][0]; for (uint32_t i = 1; i < corners; ++i) v = std::max(v, p[i][0]); return v; }
            float y0() const { float v = p[0][1]; for (uint32_t i = 1; i < corners; ++i) v = std::min(v, p[i][1]); return v; }
            float y1() const { float v = p[0][1]; for (uint32_t i = 1; i < corners; ++i) v = std::max(v, p[i][1]); return v; }
        };

        // True when the interiors of a and b share area. Triangles: separating axes along the six edge normals, with
        // touching counted as apart. Anything else: boxes grown by a pixel (points and lines cover pixels around them).
        bool shapesOverlap(const Shape &a, const Shape &b)
        {
            if (a.corners != 3 || b.corners != 3)
                return a.x0() - 1.0f < b.x1() + 1.0f && b.x0() - 1.0f < a.x1() + 1.0f && a.y0() - 1.0f < b.y1() + 1.0f && b.y0() - 1.0f < a.y1() + 1.0f;
            for (const Shape *s : {&a, &b})
                for (int e = 0; e < 3; ++e)
                {
                    const float *p0 = s->p[e], *p1 = s->p[(e + 1) % 3];
                    const float nx = p1[1] - p0[1], ny = p0[0] - p1[0];
                    float aMin = 1e30f, aMax = -1e30f, bMin = 1e30f, bMax = -1e30f;
                    for (int i = 0; i < 3; ++i)
                    {
                        const float pa = a.p[i][0] * nx + a.p[i][1] * ny, pb = b.p[i][0] * nx + b.p[i][1] * ny;
                        aMin = std::min(aMin, pa); aMax = std::max(aMax, pa);
                        bMin = std::min(bMin, pb); bMax = std::max(bMax, pb);
                    }
                    const float eps = 1e-3f * (std::fabs(nx) + std::fabs(ny));
                    if (aMax <= bMin + eps || bMax <= aMin + eps)
                        return false;
                }
            return true;
        }

        // The primitives of the current run, found through 16-pixel cells. Small shapes (mesh triangles) are kept per
        // cell and tested exactly; large ones (full-screen effects, a flashlight cone) only mark their cells: anything
        // else in those cells counts as overlapping, which costs a barrier at most and keeps the bookkeeping cheap.
        class OverlapRun
        {
        public:
            void begin()
            {
                shapes.clear();
                if (++generation == 0u)
                {
                    for (auto &c : cells)
                        c.generation = c.big = 0u;
                    generation = 1u;
                }
            }
            bool overlaps(const Shape &s)
            {
                const bool large = cellCount(s) > kLarge;
                return !visit(s, [&](Cell &c) {
                    if (c.generation != generation)
                        return true;
                    if (c.big == generation || large)
                        return c.shapes.empty() && c.big != generation;
                    for (uint32_t index : c.shapes)
                        if (shapesOverlap(shapes[index], s))
                            return false;
                    return true;
                });
            }
            void add(const Shape &s)
            {
                const bool large = cellCount(s) > kLarge;
                const uint32_t index = uint32_t(shapes.size());
                if (!large)
                    shapes.push_back(s);
                visit(s, [&](Cell &c) {
                    if (c.generation != generation)
                    {
                        c.generation = generation;
                        c.shapes.clear();
                    }
                    if (large)
                        c.big = generation;
                    else
                        c.shapes.push_back(index);
                    return true;
                });
            }

        private:
            static constexpr uint32_t kCells = 128; // 16-pixel cells over 2048x2048
            static constexpr uint32_t kLarge = ~0u; // cells (any limit made more barriers than it saved: exact tests for all)
            struct Cell
            {
                uint32_t generation = 0, big = 0;
                std::vector<uint32_t> shapes;
            };
            std::vector<Cell> cells = std::vector<Cell>(kCells * kCells);
            std::vector<Shape> shapes;
            uint32_t generation = 0;
            static uint32_t cellOf(float c) { return uint32_t(std::clamp(int(std::floor(c / 16.0f)), 0, int(kCells) - 1)); }
            static uint32_t cellCount(const Shape &s)
            {
                return (cellOf(s.x1() + 1.0f) - cellOf(s.x0() - 1.0f) + 1u) * (cellOf(s.y1() + 1.0f) - cellOf(s.y0() - 1.0f) + 1u);
            }
            // Calls f on each cell of s while it returns true; false when f stopped early.
            template <typename F> bool visit(const Shape &s, F &&f)
            {
                const uint32_t cx0 = cellOf(s.x0() - 1.0f), cx1 = cellOf(s.x1() + 1.0f), cy0 = cellOf(s.y0() - 1.0f), cy1 = cellOf(s.y1() + 1.0f);
                for (uint32_t y = cy0; y <= cy1; ++y)
                    for (uint32_t x = cx0; x <= cx1; ++x)
                        if (!f(cells[y * kCells + x]))
                            return false;
                return true;
            }
        };

        class VulkanRenderEncoder final : public RenderEncoder
        {
        public:
            VulkanCommandBuffer *owner = nullptr;
            VkCommandBuffer cb = VK_NULL_HANDLE;
            bool withInput = false;
            TextureRef color;
            uint32_t width = 0, height = 0, areaHeight = 0;

            VulkanPipeline *pipeline = nullptr;
            VkPipeline boundPipeline = VK_NULL_HANDLE;
            DepthDesc depth{};
            bool depthDirty = true;
            BufferRef vertexBuffer;
            size_t vertexOffset = 0;
            bool vertexDirty = false;
            VkBuffer uniformBuffer = VK_NULL_HANDLE;
            uint32_t uniformOffset = 0;
            TextureRef textures[2];
            SamplerRef sampler;
            bool setDirty = true, offsetDirty = true;
            VkDescriptorSet set = VK_NULL_HANDLE;

            void setPipeline(const PipelineRef &p) override;
            void setDepthState(const DepthStateRef &s) override
            {
                const DepthDesc &wanted = static_cast<VulkanDepthState *>(s.get())->desc;
                if (wanted.compare != depth.compare || wanted.write != depth.write)
                {
                    depth = wanted;
                    depthDirty = true;
                }
            }
            void setScissor(uint32_t x, uint32_t y, uint32_t w, uint32_t h) override
            {
                // Within the render area (rows below it are not part of the pass).
                x = std::min(x, width);
                y = std::min(y, areaHeight);
                w = std::min(w, width - x);
                h = std::min(h, areaHeight - y);
                VkRect2D rect{{int32_t(x), int32_t(y)}, {w, h}};
                vkCmdSetScissor(cb, 0, 1, &rect);
            }
            void setVertexBuffer(const BufferRef &b, size_t offset) override
            {
                vertexBuffer = b;
                vertexOffset = offset;
                vertexDirty = true;
            }
            void setVertexBytes(const void *data, size_t size) override { setBytes(data, size); }
            void setFragmentBytes(const void *data, size_t size) override { setBytes(data, size); }
            void setFragmentTexture(const TextureRef &t, uint32_t index) override
            {
                if (index < 2 && textures[index] != t)
                {
                    textures[index] = t;
                    setDirty = true;
                }
            }
            void setFragmentSampler(const SamplerRef &s, uint32_t) override
            {
                if (sampler != s)
                {
                    sampler = s;
                    setDirty = true;
                }
            }
            void draw(Primitive primitive, uint32_t first, uint32_t count) override;
            void end() override;

        private:
            void setBytes(const void *data, size_t size);
            void prepare(Primitive primitive);
        };

        class VulkanBlitEncoder final : public BlitEncoder
        {
        public:
            VulkanCommandBuffer *owner = nullptr;
            VkCommandBuffer cb = VK_NULL_HANDLE;
            void copyTexture(const TextureRef &from, uint32_t sx, uint32_t sy, uint32_t w, uint32_t h, const TextureRef &to, uint32_t dx, uint32_t dy) override;
            void copyBufferToTexture(const BufferRef &from, size_t offset, uint32_t rowBytes, uint32_t w, uint32_t h, const TextureRef &to, uint32_t dx, uint32_t dy) override;
            void end() override;
        };

        class VulkanSwapchain;
        class VulkanDrawable final : public Drawable
        {
        public:
            VulkanSwapchain *swapchain = nullptr;
            VkSwapchainKHR handle = VK_NULL_HANDLE;
            uint32_t index = 0;
            VkSemaphore acquired = VK_NULL_HANDLE, rendered = VK_NULL_HANDLE;
            std::vector<std::function<void(double)>> presented;
            void onPresented(std::function<void(double)> handler) override { presented.push_back(std::move(handler)); }
        };

        struct Completion
        {
            std::mutex mutex;
            std::condition_variable done;
            bool finished = false;
        };

        struct Retired
        {
            VkFence fence = VK_NULL_HANDLE;
            VkCommandPool pool = VK_NULL_HANDLE;
            VkCommandBuffer commandBuffer = VK_NULL_HANDLE; // freed back into pool before the pool is reused
            std::vector<VkDescriptorPool> descriptorPools;
            std::vector<VkFramebuffer> framebuffers;
            std::vector<std::shared_ptr<void>> keep;
            std::vector<UniformChunk> uniforms;
            std::vector<std::function<void(double, double)>> handlers;
            std::shared_ptr<Completion> completion;
            double submitted = 0.0;
        };

        class VulkanCommandBuffer final : public CommandBuffer
        {
        public:
            VulkanDevice *owner = nullptr;
            VkCommandBuffer cb = VK_NULL_HANDLE;
            std::unique_ptr<Retired> retired = std::make_unique<Retired>();
            std::shared_ptr<Completion> completion = std::make_shared<Completion>();
            std::vector<std::shared_ptr<VulkanDrawable>> drawables;
            bool committed = false;

            ~VulkanCommandBuffer() override;
            std::unique_ptr<RenderEncoder> renderPass(const PassDesc &pass) override;
            std::unique_ptr<BlitEncoder> blit() override;
            void onCompleted(std::function<void(double, double)> handler) override { retired->handlers.push_back(std::move(handler)); }
            void present(const DrawableRef &drawable) override
            {
                auto d = std::static_pointer_cast<VulkanDrawable>(drawable);
                // GENERAL -> PRESENT_SRC at the end of this command buffer.
                VkImageMemoryBarrier barrier{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
                barrier.srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
                barrier.oldLayout = VK_IMAGE_LAYOUT_GENERAL;
                barrier.newLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
                barrier.srcQueueFamilyIndex = barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
                barrier.image = vk(d->texture)->image;
                barrier.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
                vkCmdPipelineBarrier(cb, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT, VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT, 0, 0, nullptr, 0, nullptr, 1, &barrier);
                drawables.push_back(d);
            }
            void commit() override;
            void waitUntilCompleted() override
            {
                if (!committed)
                    return;
                std::unique_lock<std::mutex> lock(completion->mutex);
                completion->done.wait(lock, [&] { return completion->finished; });
            }

            // Shared helpers for the encoders.
            void fullBarrier();
            bool uniformSlice(const void *data, size_t size, VkBuffer &buffer, uint32_t &offset);
            VkDescriptorSet allocateSet();
        };

        class VulkanSwapchain final : public Swapchain
        {
        public:
            VulkanDevice *owner = nullptr;
            VkSurfaceKHR surface = VK_NULL_HANDLE;
            VkSwapchainKHR swapchain = VK_NULL_HANDLE;
            VkExtent2D extent{0, 0};
            std::vector<TextureRef> images;
            std::vector<VkSemaphore> rendered;  // per image
            std::vector<VkSemaphore> acquired;  // ring
            uint32_t nextAcquire = 0;
#if defined(_WIN32)
            HWND parent = nullptr, child = nullptr;
            std::thread windowThread;
            DWORD windowThreadId = 0;
#endif
            ~VulkanSwapchain() override;
            void pixelSize(uint32_t &width, uint32_t &height) override;
            DrawableRef nextDrawable(uint32_t width, uint32_t height) override;
            void setVisible(bool visible) override
            {
#if defined(_WIN32)
                // Hidden by moving it out of the way as well: some drivers keep showing a hidden child's last
                // swapchain image.
                if (child)
                {
                    if (visible)
                    {
                        RECT rect{};
                        GetClientRect(parent, &rect);
                        SetWindowPos(child, HWND_TOP, 0, 0, rect.right - rect.left, rect.bottom - rect.top, SWP_SHOWWINDOW | SWP_NOACTIVATE | SWP_ASYNCWINDOWPOS);
                    }
                    else
                        SetWindowPos(child, nullptr, -32000, -32000, 1, 1, SWP_HIDEWINDOW | SWP_NOZORDER | SWP_NOACTIVATE | SWP_ASYNCWINDOWPOS);
                }
#else
                (void)visible;
#endif
            }
            bool recreate();
            void destroyImages();
        };

        // ------------------------------------------------------------------------------------------- device

        class VulkanDevice final : public Device
        {
        public:
            ShaderOptions options;
            VkInstance instance = VK_NULL_HANDLE;
            VkPhysicalDevice physical = VK_NULL_HANDLE;
            VkPhysicalDeviceProperties properties{};
            VkDevice device = VK_NULL_HANDLE;
            uint32_t queueFamily = 0;
            VkQueue queue = VK_NULL_HANDLE;
            std::mutex queueMutex;
            Allocator allocator;
            bool rasterOrder = false; // VK_EXT/ARM_rasterization_order_attachment_access
            bool dynamicDepth = false; // VK_EXT_extended_dynamic_state: depth test/write/compare set per draw
            bool anisotropy = false, bc = false, dualSourceBlend = false;
            VkDeviceSize uniformAlignment = 256;

            VkDescriptorSetLayout setLayout = VK_NULL_HANDLE;
            VkPipelineLayout pipelineLayout = VK_NULL_HANDLE;
            std::mutex cacheMutex;
            std::map<uint64_t, VkRenderPass> renderPasses;
            std::map<std::string, VkShaderModule> shaderModules;
            std::map<uint32_t, SamplerRef> samplers;
            std::map<uint32_t, DepthStateRef> depthStates;
            TextureRef dummy; // fills texture slots nothing was bound to
            SamplerRef dummySampler;

            // Uploads waiting for the next submit.
            std::mutex uploadMutex;
            VkCommandPool uploadPool = VK_NULL_HANDLE;
            VkCommandBuffer uploadCb = VK_NULL_HANDLE;
            std::unique_ptr<Retired> uploadRetired;

            // Per-command-buffer objects handed back when the GPU is done with them, reset and reused (creating them
            // for every command buffer allocated GPU memory each time).
            std::mutex recycleMutex;
            std::vector<VkDescriptorPool> freeDescriptorPools;
            std::vector<VkCommandPool> freeCommandPools;
            std::vector<BufferRef> freeUniformChunks;
            VkDescriptorPool takeDescriptorPool();
            VkCommandPool takeCommandPool();

            // Retirement thread.
            std::mutex retireMutex;
            std::condition_variable retireReady;
            std::deque<std::unique_ptr<Retired>> retiring;
            std::thread retireThread;
            bool stopping = false;

            // Background pipeline compilation.
            std::mutex compileMutex;
            std::condition_variable compileReady;
            std::deque<std::function<void()>> compileQueue;
            std::thread compileThread;

            ~VulkanDevice() override
            {
                if (device)
                    vkDeviceWaitIdle(device);
                {
                    std::lock_guard<std::mutex> lock(retireMutex);
                    stopping = true;
                }
                retireReady.notify_all();
                if (retireThread.joinable())
                    retireThread.join();
                {
                    std::lock_guard<std::mutex> lock(compileMutex);
                }
                compileReady.notify_all();
                if (compileThread.joinable())
                    compileThread.join();
                // Device-level objects; textures and buffers still referenced elsewhere are leaked with the process.
                if (device)
                {
                    for (auto &[key, pass] : renderPasses)
                        vkDestroyRenderPass(device, pass, nullptr);
                    for (auto &[name, module] : shaderModules)
                        vkDestroyShaderModule(device, module, nullptr);
                }
            }

            bool initialize(const ShaderOptions &wanted);

            std::string name() const override { return properties.deviceName; }
            bool supportsBC() const override { return bc; }
            bool prefersFixedBlend() const override { return !rasterOrder && dualSourceBlend && !std::getenv("PS2X_GS_EXACT_BLEND"); }

            TextureRef newTexture(const TextureDesc &desc) override;
            void replaceRegion(const TextureRef &texture, uint32_t level, uint32_t x, uint32_t y, uint32_t width, uint32_t height, const void *data, uint32_t rowBytes) override;
            void getBytes(const TextureRef &texture, uint32_t x, uint32_t y, uint32_t width, uint32_t height, void *data, uint32_t rowBytes) override;
            BufferRef newBuffer(size_t size) override { return makeBuffer(size, VK_BUFFER_USAGE_VERTEX_BUFFER_BIT | VK_BUFFER_USAGE_TRANSFER_SRC_BIT | VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT); }
            SamplerRef sampler(const SamplerDesc &desc) override;
            DepthStateRef depthState(const DepthDesc &desc) override;
            PipelineRef pipeline(const PipelineDesc &desc) override;
            void pipelineAsync(const PipelineDesc &desc, std::function<void(PipelineRef)> ready) override;
            CommandBufferRef commandBuffer() override;
            std::unique_ptr<Swapchain> attachWindow(void *window) override;

            std::shared_ptr<VulkanBuffer> makeBuffer(size_t size, VkBufferUsageFlags usage);
            VkRenderPass renderPass(VkFormat color, VkFormat depth, Load colorLoad, Load depthLoad, bool withInput);
            VkShaderModule shader(const std::string &name);
            VkPipeline buildPipeline(VulkanPipeline &p, Primitive primitive, bool withInput, uint32_t depthKey);
            void beginUploads(); // uploadMutex held
            void flushUploads();
            void submit(VkCommandBuffer cb, std::unique_ptr<Retired> retired, const std::vector<VkSemaphore> &waits, const std::vector<VkSemaphore> &signals);
            void retireLoop();
            void compileLoop();
        };

        VulkanTexture::~VulkanTexture()
        {
            if (!owner || swapchainImage)
                return;
            if (view)
                vkDestroyImageView(owner->device, view, nullptr);
            if (image)
                vkDestroyImage(owner->device, image, nullptr);
            owner->allocator.release(memory);
        }

        VulkanBuffer::~VulkanBuffer()
        {
            if (!owner)
                return;
            if (buffer)
                vkDestroyBuffer(owner->device, buffer, nullptr);
            owner->allocator.release(memory);
        }

        VulkanPipeline::~VulkanPipeline()
        {
            if (!owner)
                return;
            for (auto &byClass : variants)
                for (auto &byInput : byClass)
                    for (VkPipeline p : byInput)
                        if (p)
                            vkDestroyPipeline(owner->device, p, nullptr);
        }

        VkPipeline VulkanPipeline::get(Primitive primitive, bool withInput, uint32_t depthKey)
        {
            if (owner->dynamicDepth)
                depthKey = 0;
            std::lock_guard<std::mutex> lock(mutex);
            VkPipeline &slot = variants[int(primitive)][withInput ? 1 : 0][depthKey];
            if (!slot)
                slot = owner->buildPipeline(*this, primitive, withInput, depthKey);
            return slot;
        }

        // ------------------------------------------------------------------------------------------- setup

        bool hasExtension(const std::vector<VkExtensionProperties> &list, const char *name)
        {
            for (const auto &e : list)
                if (std::strcmp(e.extensionName, name) == 0)
                    return true;
            return false;
        }

        bool VulkanDevice::initialize(const ShaderOptions &wanted)
        {
            options = wanted;
            if (kSpirvBlobCount == 0)
            {
                std::fprintf(stderr, "[native-gs] vulkan: built without SPIR-V shaders (run gpu/native/compile_shaders.sh)\n");
                return false;
            }
#if defined(_WIN32)
            if (volkInitialize() != VK_SUCCESS)
                return false;
#else
            // macOS testing: MoltenVK from PS2X_GS_MOLTENVK (the path the launch scripts already set).
            {
                const char *path = std::getenv("PS2X_GS_MOLTENVK");
                void *library = dlopen(path && path[0] ? path : "libMoltenVK.dylib", RTLD_NOW | RTLD_LOCAL);
                if (!library)
                    return false;
                auto getInstanceProcAddr = reinterpret_cast<PFN_vkGetInstanceProcAddr>(dlsym(library, "vkGetInstanceProcAddr"));
                if (!getInstanceProcAddr)
                    return false;
                volkInitializeCustom(getInstanceProcAddr);
            }
#endif
            uint32_t count = 0;
            vkEnumerateInstanceExtensionProperties(nullptr, &count, nullptr);
            std::vector<VkExtensionProperties> instanceExtensions(count);
            vkEnumerateInstanceExtensionProperties(nullptr, &count, instanceExtensions.data());
            std::vector<const char *> enable;
            VkInstanceCreateFlags flags = 0;
            if (hasExtension(instanceExtensions, VK_KHR_SURFACE_EXTENSION_NAME))
                enable.push_back(VK_KHR_SURFACE_EXTENSION_NAME);
#if defined(_WIN32)
            if (hasExtension(instanceExtensions, VK_KHR_WIN32_SURFACE_EXTENSION_NAME))
                enable.push_back(VK_KHR_WIN32_SURFACE_EXTENSION_NAME);
#endif
            if (hasExtension(instanceExtensions, VK_KHR_PORTABILITY_ENUMERATION_EXTENSION_NAME))
            {
                enable.push_back(VK_KHR_PORTABILITY_ENUMERATION_EXTENSION_NAME);
                flags |= VK_INSTANCE_CREATE_ENUMERATE_PORTABILITY_BIT_KHR;
            }
            if (hasExtension(instanceExtensions, VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME))
                enable.push_back(VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME);
            VkApplicationInfo app{VK_STRUCTURE_TYPE_APPLICATION_INFO};
            app.pApplicationName = "ps2recomp native GS";
            app.apiVersion = VK_API_VERSION_1_1;
            VkInstanceCreateInfo instanceInfo{VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO};
            instanceInfo.flags = flags;
            instanceInfo.pApplicationInfo = &app;
            instanceInfo.enabledExtensionCount = uint32_t(enable.size());
            instanceInfo.ppEnabledExtensionNames = enable.data();
            const char *validation = "VK_LAYER_KHRONOS_validation";
            if (std::getenv("PS2X_GS_VULKAN_VALIDATION"))
            {
                instanceInfo.enabledLayerCount = 1;
                instanceInfo.ppEnabledLayerNames = &validation;
            }
            if (!check(vkCreateInstance(&instanceInfo, nullptr, &instance), "vkCreateInstance"))
                return false;
            volkLoadInstance(instance);

            // The first discrete GPU with a graphics queue and extended dynamic state, else the first that has them.
            vkEnumeratePhysicalDevices(instance, &count, nullptr);
            std::vector<VkPhysicalDevice> physicals(count);
            vkEnumeratePhysicalDevices(instance, &count, physicals.data());
            std::vector<VkExtensionProperties> deviceExtensions;
            int bestScore = -1;
            for (VkPhysicalDevice candidate : physicals)
            {
                uint32_t n = 0;
                vkEnumerateDeviceExtensionProperties(candidate, nullptr, &n, nullptr);
                std::vector<VkExtensionProperties> extensions(n);
                vkEnumerateDeviceExtensionProperties(candidate, nullptr, &n, extensions.data());
                vkGetPhysicalDeviceQueueFamilyProperties(candidate, &n, nullptr);
                std::vector<VkQueueFamilyProperties> families(n);
                vkGetPhysicalDeviceQueueFamilyProperties(candidate, &n, families.data());
                int family = -1;
                for (uint32_t i = 0; i < n; ++i)
                    if (families[i].queueFlags & VK_QUEUE_GRAPHICS_BIT)
                    {
                        family = int(i);
                        break;
                    }
                if (family < 0)
                    continue;
                VkPhysicalDeviceProperties p{};
                vkGetPhysicalDeviceProperties(candidate, &p);
                const int score = p.deviceType == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU ? 2 : p.deviceType == VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU ? 1 : 0;
                if (score > bestScore)
                {
                    bestScore = score;
                    physical = candidate;
                    properties = p;
                    queueFamily = uint32_t(family);
                    deviceExtensions = std::move(extensions);
                }
            }
            if (!physical)
            {
                std::fprintf(stderr, "[native-gs] vulkan: no GPU with a graphics queue\n");
                return false;
            }
            uniformAlignment = std::max<VkDeviceSize>(256, properties.limits.minUniformBufferOffsetAlignment);

            dynamicDepth = hasExtension(deviceExtensions, VK_EXT_EXTENDED_DYNAMIC_STATE_EXTENSION_NAME) && !std::getenv("PS2X_GS_VULKAN_NO_DYNAMIC_DEPTH");
            std::vector<const char *> deviceEnable;
            if (dynamicDepth)
                deviceEnable.push_back(VK_EXT_EXTENDED_DYNAMIC_STATE_EXTENSION_NAME);
            if (hasExtension(deviceExtensions, VK_KHR_SWAPCHAIN_EXTENSION_NAME))
                deviceEnable.push_back(VK_KHR_SWAPCHAIN_EXTENSION_NAME);
            if (hasExtension(deviceExtensions, "VK_KHR_portability_subset"))
                deviceEnable.push_back("VK_KHR_portability_subset");
            const bool extOrder = hasExtension(deviceExtensions, VK_EXT_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_EXTENSION_NAME);
            const bool armOrder = !extOrder && hasExtension(deviceExtensions, VK_ARM_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_EXTENSION_NAME);

            VkPhysicalDeviceFeatures supported{};
            vkGetPhysicalDeviceFeatures(physical, &supported);
            VkPhysicalDeviceFeatures features{};
            features.samplerAnisotropy = supported.samplerAnisotropy;
            features.largePoints = supported.largePoints;
            features.textureCompressionBC = supported.textureCompressionBC;
            features.dualSrcBlend = supported.dualSrcBlend;
            dualSourceBlend = supported.dualSrcBlend == VK_TRUE;
            anisotropy = supported.samplerAnisotropy == VK_TRUE;
            bc = supported.textureCompressionBC == VK_TRUE;

            VkPhysicalDeviceExtendedDynamicStateFeaturesEXT dynamicState{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT};
            dynamicState.extendedDynamicState = VK_TRUE;
            VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT order{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT};
            if ((extOrder || armOrder) && vkGetPhysicalDeviceFeatures2)
            {
                VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT query{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT};
                VkPhysicalDeviceFeatures2 features2{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2};
                features2.pNext = &query;
                vkGetPhysicalDeviceFeatures2(physical, &features2);
                if (query.rasterizationOrderColorAttachmentAccess && !std::getenv("PS2X_GS_VULKAN_NO_RASTER_ORDER"))
                {
                    rasterOrder = true;
                    order.rasterizationOrderColorAttachmentAccess = VK_TRUE;
                    dynamicState.pNext = &order;
                    deviceEnable.push_back(extOrder ? VK_EXT_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_EXTENSION_NAME : VK_ARM_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_EXTENSION_NAME);
                }
            }

            const float priority = 1.0f;
            VkDeviceQueueCreateInfo queueInfo{VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO};
            queueInfo.queueFamilyIndex = queueFamily;
            queueInfo.queueCount = 1;
            queueInfo.pQueuePriorities = &priority;
            VkDeviceCreateInfo deviceInfo{VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO};
            deviceInfo.pNext = dynamicDepth ? static_cast<void *>(&dynamicState) : (dynamicState.pNext ? dynamicState.pNext : nullptr);
            deviceInfo.queueCreateInfoCount = 1;
            deviceInfo.pQueueCreateInfos = &queueInfo;
            deviceInfo.enabledExtensionCount = uint32_t(deviceEnable.size());
            deviceInfo.ppEnabledExtensionNames = deviceEnable.data();
            deviceInfo.pEnabledFeatures = &features;
            if (!check(vkCreateDevice(physical, &deviceInfo, nullptr, &device), "vkCreateDevice"))
                return false;
            volkLoadDevice(device);
            vkGetDeviceQueue(device, queueFamily, 0, &queue);
            allocator.device = device;
            vkGetPhysicalDeviceMemoryProperties(physical, &allocator.properties);

            // One layout for every pipeline: uniforms (dynamic offset), two textures, a sampler, the target as input.
            VkDescriptorSetLayoutBinding bindings[5] = {};
            bindings[0] = {0, VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC, 1, VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT, nullptr};
            bindings[1] = {1, VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE, 1, VK_SHADER_STAGE_FRAGMENT_BIT, nullptr};
            bindings[2] = {2, VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE, 1, VK_SHADER_STAGE_FRAGMENT_BIT, nullptr};
            bindings[3] = {3, VK_DESCRIPTOR_TYPE_SAMPLER, 1, VK_SHADER_STAGE_FRAGMENT_BIT, nullptr};
            bindings[4] = {4, VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT, 1, VK_SHADER_STAGE_FRAGMENT_BIT, nullptr};
            VkDescriptorSetLayoutCreateInfo setInfo{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
            setInfo.bindingCount = 5;
            setInfo.pBindings = bindings;
            if (!check(vkCreateDescriptorSetLayout(device, &setInfo, nullptr, &setLayout), "vkCreateDescriptorSetLayout"))
                return false;
            VkPipelineLayoutCreateInfo layoutInfo{VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
            layoutInfo.setLayoutCount = 1;
            layoutInfo.pSetLayouts = &setLayout;
            if (!check(vkCreatePipelineLayout(device, &layoutInfo, nullptr, &pipelineLayout), "vkCreatePipelineLayout"))
                return false;

            retireThread = std::thread([this] { retireLoop(); });
            compileThread = std::thread([this] { compileLoop(); });

            TextureDesc d;
            dummy = newTexture(d);
            const uint32_t white = 0xFFFFFFFFu;
            replaceRegion(dummy, 0, 0, 0, 1, 1, &white, 4);
            dummySampler = sampler(SamplerDesc{});
            std::fprintf(stderr, "[native-gs] vulkan: %s, rasterization order %s\n", properties.deviceName, rasterOrder ? "yes" : "no (barriers)");
            return true;
        }

        // ------------------------------------------------------------------------------------------- resources

        std::shared_ptr<VulkanBuffer> VulkanDevice::makeBuffer(size_t size, VkBufferUsageFlags usage)
        {
            auto out = std::make_shared<VulkanBuffer>();
            out->owner = this;
            VkBufferCreateInfo info{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
            info.size = size;
            info.usage = usage;
            if (!check(vkCreateBuffer(device, &info, nullptr, &out->buffer), "vkCreateBuffer"))
                return nullptr;
            VkMemoryRequirements requirements;
            vkGetBufferMemoryRequirements(device, out->buffer, &requirements);
            // Cached host memory when there is some: the renderer reads its vertex and staging buffers back on the CPU
            // (triangle placement, splitting self-sampling batches), and on discrete GPUs the plain host-visible type is
            // uncached / write-combined, where every such read stalls (the GS thread sat at ~95% of a core at 4x).
            const VkMemoryPropertyFlags hostVisible = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            if (!allocator.allocate(requirements, hostVisible | VK_MEMORY_PROPERTY_HOST_CACHED_BIT, out->memory) && !allocator.allocate(requirements, hostVisible, out->memory))
                return nullptr;
            vkBindBufferMemory(device, out->buffer, out->memory.block->memory, out->memory.offset);
            out->contents = out->memory.mapped();
            out->size = size;
            return out;
        }

        TextureRef VulkanDevice::newTexture(const TextureDesc &desc)
        {
            auto out = std::make_shared<VulkanTexture>();
            out->owner = this;
            out->width = desc.width;
            out->height = desc.height;
            out->levels = desc.levels;
            out->format = desc.format;
            const bool depth = desc.format == Format::Depth32F;
            out->aspect = depth ? VK_IMAGE_ASPECT_DEPTH_BIT : VK_IMAGE_ASPECT_COLOR_BIT;
            VkImageCreateInfo info{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO};
            info.imageType = VK_IMAGE_TYPE_2D;
            info.format = toVulkan(desc.format);
            info.extent = {desc.width, desc.height, 1};
            info.mipLevels = desc.levels;
            info.arrayLayers = 1;
            info.samples = VK_SAMPLE_COUNT_1_BIT;
            info.tiling = VK_IMAGE_TILING_OPTIMAL;
            info.usage = VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT;
            if (desc.usage & RenderTarget)
            {
                if (depth)
                    info.usage |= VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
                else
                {
                    info.usage |= VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT;
                    out->inputAttachment = true;
                }
            }
            info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            if (!check(vkCreateImage(device, &info, nullptr, &out->image), "vkCreateImage"))
                return nullptr;
            VkMemoryRequirements requirements;
            vkGetImageMemoryRequirements(device, out->image, &requirements);
            if (!allocator.allocate(requirements, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, out->memory))
                return nullptr;
            vkBindImageMemory(device, out->image, out->memory.block->memory, out->memory.offset);
            VkImageViewCreateInfo viewInfo{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
            viewInfo.image = out->image;
            viewInfo.viewType = VK_IMAGE_VIEW_TYPE_2D;
            viewInfo.format = info.format;
            viewInfo.subresourceRange = {out->aspect, 0, desc.levels, 0, 1};
            if (!check(vkCreateImageView(device, &viewInfo, nullptr, &out->view), "vkCreateImageView"))
                return nullptr;
            // To GENERAL, where it stays; the contents start as zero like a new Metal texture's (not guaranteed there
            // either, but the renderer fills every target before reading it).
            std::lock_guard<std::mutex> lock(uploadMutex);
            beginUploads();
            VkImageMemoryBarrier barrier{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
            barrier.dstAccessMask = VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT;
            barrier.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            barrier.newLayout = VK_IMAGE_LAYOUT_GENERAL;
            barrier.srcQueueFamilyIndex = barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
            barrier.image = out->image;
            barrier.subresourceRange = viewInfo.subresourceRange;
            vkCmdPipelineBarrier(uploadCb, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, 0, 0, nullptr, 0, nullptr, 1, &barrier);
            uploadRetired->keep.push_back(out);
            return out;
        }

        void VulkanDevice::beginUploads()
        {
            if (uploadCb)
                return;
            uploadPool = takeCommandPool();
            VkCommandBufferAllocateInfo allocateInfo{VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
            allocateInfo.commandPool = uploadPool;
            allocateInfo.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
            allocateInfo.commandBufferCount = 1;
            vkAllocateCommandBuffers(device, &allocateInfo, &uploadCb);
            VkCommandBufferBeginInfo begin{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
            begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
            vkBeginCommandBuffer(uploadCb, &begin);
            uploadRetired = std::make_unique<Retired>();
            uploadRetired->commandBuffer = uploadCb;
            uploadRetired->pool = uploadPool;
            // Earlier work (in submission order) is done with what these copies overwrite.
            VkMemoryBarrier barrier{VK_STRUCTURE_TYPE_MEMORY_BARRIER};
            barrier.srcAccessMask = VK_ACCESS_MEMORY_WRITE_BIT;
            barrier.dstAccessMask = VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT;
            vkCmdPipelineBarrier(uploadCb, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, 0, 1, &barrier, 0, nullptr, 0, nullptr);
        }

        void VulkanDevice::flushUploads()
        {
            std::unique_ptr<Retired> retired;
            VkCommandBuffer cb = VK_NULL_HANDLE;
            {
                std::lock_guard<std::mutex> lock(uploadMutex);
                if (!uploadCb)
                    return;
                VkMemoryBarrier barrier{VK_STRUCTURE_TYPE_MEMORY_BARRIER};
                barrier.srcAccessMask = VK_ACCESS_MEMORY_WRITE_BIT;
                barrier.dstAccessMask = VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT;
                vkCmdPipelineBarrier(uploadCb, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, 0, 1, &barrier, 0, nullptr, 0, nullptr);
                vkEndCommandBuffer(uploadCb);
                cb = uploadCb;
                retired = std::move(uploadRetired);
                uploadCb = VK_NULL_HANDLE;
                uploadPool = VK_NULL_HANDLE;
            }
            submit(cb, std::move(retired), {}, {});
        }

        void VulkanDevice::replaceRegion(const TextureRef &texture, uint32_t level, uint32_t x, uint32_t y, uint32_t width, uint32_t height, const void *data, uint32_t rowBytes)
        {
            VulkanTexture *t = vk(texture);
            const bool compressed = isCompressed(t->format);
            const uint32_t rows = compressed ? (height + 3u) / 4u : height;
            auto staging = makeBuffer(size_t(rowBytes) * rows, VK_BUFFER_USAGE_TRANSFER_SRC_BIT);
            if (!staging)
                return;
            std::memcpy(staging->contents, data, size_t(rowBytes) * rows);
            VkBufferImageCopy region{};
            region.bufferRowLength = compressed ? rowBytes / blockBytes(t->format) * 4u : rowBytes / 4u;
            region.imageSubresource = {t->aspect, level, 0, 1};
            region.imageOffset = {int32_t(x), int32_t(y), 0};
            region.imageExtent = {width, height, 1};
            std::lock_guard<std::mutex> lock(uploadMutex);
            beginUploads();
            vkCmdCopyBufferToImage(uploadCb, staging->buffer, t->image, VK_IMAGE_LAYOUT_GENERAL, 1, &region);
            uploadRetired->keep.push_back(staging);
            uploadRetired->keep.push_back(texture);
        }

        void VulkanDevice::getBytes(const TextureRef &texture, uint32_t x, uint32_t y, uint32_t width, uint32_t height, void *data, uint32_t rowBytes)
        {
            flushUploads();
            VulkanTexture *t = vk(texture);
            auto staging = makeBuffer(size_t(width) * height * 4u, VK_BUFFER_USAGE_TRANSFER_DST_BIT);
            if (!staging)
                return;
            auto cbObject = std::static_pointer_cast<VulkanCommandBuffer>(commandBuffer());
            cbObject->fullBarrier();
            VkBufferImageCopy region{};
            region.imageSubresource = {t->aspect, 0, 0, 1};
            region.imageOffset = {int32_t(x), int32_t(y), 0};
            region.imageExtent = {width, height, 1};
            vkCmdCopyImageToBuffer(cbObject->cb, t->image, VK_IMAGE_LAYOUT_GENERAL, staging->buffer, 1, &region);
            VkMemoryBarrier barrier{VK_STRUCTURE_TYPE_MEMORY_BARRIER};
            barrier.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
            barrier.dstAccessMask = VK_ACCESS_HOST_READ_BIT;
            vkCmdPipelineBarrier(cbObject->cb, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_HOST_BIT, 0, 1, &barrier, 0, nullptr, 0, nullptr);
            cbObject->retired->keep.push_back(texture);
            cbObject->commit();
            cbObject->waitUntilCompleted();
            const uint8_t *from = static_cast<const uint8_t *>(staging->contents);
            for (uint32_t row = 0; row < height; ++row)
                std::memcpy(static_cast<uint8_t *>(data) + size_t(row) * rowBytes, from + size_t(row) * width * 4u, size_t(width) * 4u);
        }

        SamplerRef VulkanDevice::sampler(const SamplerDesc &desc)
        {
            const uint32_t key = (desc.linear ? 1u : 0u) | (desc.clampU ? 2u : 0u) | (desc.clampV ? 4u : 0u);
            std::lock_guard<std::mutex> lock(cacheMutex);
            SamplerRef &entry = samplers[key];
            if (!entry)
            {
                VkSamplerCreateInfo info{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
                info.magFilter = info.minFilter = desc.linear ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
                info.mipmapMode = VK_SAMPLER_MIPMAP_MODE_LINEAR;
                info.addressModeU = desc.clampU ? VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE : VK_SAMPLER_ADDRESS_MODE_REPEAT;
                info.addressModeV = desc.clampV ? VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE : VK_SAMPLER_ADDRESS_MODE_REPEAT;
                info.addressModeW = VK_SAMPLER_ADDRESS_MODE_REPEAT;
                info.anisotropyEnable = desc.linear && anisotropy ? VK_TRUE : VK_FALSE;
                info.maxAnisotropy = 8.0f;
                info.maxLod = VK_LOD_CLAMP_NONE;
                auto s = std::make_shared<VulkanSampler>();
                vkCreateSampler(device, &info, nullptr, &s->sampler);
                entry = s;
            }
            return entry;
        }

        DepthStateRef VulkanDevice::depthState(const DepthDesc &desc)
        {
            const uint32_t key = uint32_t(desc.compare) | (desc.write ? 4u : 0u);
            std::lock_guard<std::mutex> lock(cacheMutex);
            DepthStateRef &entry = depthStates[key];
            if (!entry)
            {
                auto s = std::make_shared<VulkanDepthState>();
                s->desc = desc;
                entry = s;
            }
            return entry;
        }

        // ------------------------------------------------------------------------------------------- pipelines

        // Render passes are cached by formats, load actions and whether the colour target is also an input
        // attachment. Pipelines are built against the Load/Load pass of the same formats (load actions do not affect
        // compatibility).
        VkRenderPass VulkanDevice::renderPass(VkFormat color, VkFormat depth, Load colorLoad, Load depthLoad, bool withInput)
        {
            const uint64_t key = uint64_t(color) | (uint64_t(depth) << 20) | (uint64_t(colorLoad) << 40) | (uint64_t(depthLoad) << 44) | (uint64_t(withInput) << 48);
            std::lock_guard<std::mutex> lock(cacheMutex);
            VkRenderPass &entry = renderPasses[key];
            if (entry)
                return entry;
            const auto load = [](Load l) { return l == Load::Load ? VK_ATTACHMENT_LOAD_OP_LOAD : l == Load::Clear ? VK_ATTACHMENT_LOAD_OP_CLEAR : VK_ATTACHMENT_LOAD_OP_DONT_CARE; };
            VkAttachmentDescription attachments[2] = {};
            VkAttachmentReference colorRef{0, VK_IMAGE_LAYOUT_GENERAL}, depthRef{0, VK_IMAGE_LAYOUT_GENERAL};
            uint32_t n = 0;
            VkSubpassDescription subpass{};
            subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
            if (color != VK_FORMAT_UNDEFINED)
            {
                attachments[n].format = color;
                attachments[n].samples = VK_SAMPLE_COUNT_1_BIT;
                attachments[n].loadOp = load(colorLoad);
                attachments[n].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
                attachments[n].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
                attachments[n].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
                attachments[n].initialLayout = VK_IMAGE_LAYOUT_GENERAL;
                attachments[n].finalLayout = VK_IMAGE_LAYOUT_GENERAL;
                colorRef.attachment = n++;
                subpass.colorAttachmentCount = 1;
                subpass.pColorAttachments = &colorRef;
                if (withInput)
                {
                    subpass.inputAttachmentCount = 1;
                    subpass.pInputAttachments = &colorRef;
                    if (rasterOrder)
                        subpass.flags |= VK_SUBPASS_DESCRIPTION_RASTERIZATION_ORDER_ATTACHMENT_COLOR_ACCESS_BIT_EXT;
                }
            }
            if (depth != VK_FORMAT_UNDEFINED)
            {
                attachments[n].format = depth;
                attachments[n].samples = VK_SAMPLE_COUNT_1_BIT;
                attachments[n].loadOp = load(depthLoad);
                attachments[n].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
                attachments[n].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
                attachments[n].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
                attachments[n].initialLayout = VK_IMAGE_LAYOUT_GENERAL;
                attachments[n].finalLayout = VK_IMAGE_LAYOUT_GENERAL;
                depthRef.attachment = n++;
                subpass.pDepthStencilAttachment = &depthRef;
            }
            // The self-dependency that lets a barrier inside the pass make one draw's writes visible to the next
            // draw's input-attachment reads.
            VkSubpassDependency self{};
            self.srcSubpass = self.dstSubpass = 0;
            self.srcStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
            self.dstStageMask = VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT;
            self.srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
            self.dstAccessMask = VK_ACCESS_INPUT_ATTACHMENT_READ_BIT;
            self.dependencyFlags = VK_DEPENDENCY_BY_REGION_BIT;
            VkRenderPassCreateInfo info{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO};
            info.attachmentCount = n;
            info.pAttachments = attachments;
            info.subpassCount = 1;
            info.pSubpasses = &subpass;
            if (withInput && color != VK_FORMAT_UNDEFINED)
            {
                info.dependencyCount = 1;
                info.pDependencies = &self;
            }
            check(vkCreateRenderPass(device, &info, nullptr, &entry), "vkCreateRenderPass");
            return entry;
        }

        // Shader names as the renderer gives them (the Metal function names) to the SPIR-V blobs.
        VkShaderModule VulkanDevice::shader(const std::string &name)
        {
            std::lock_guard<std::mutex> lock(cacheMutex);
            VkShaderModule &entry = shaderModules[name];
            if (entry)
                return entry;
            for (size_t i = 0; i < kSpirvBlobCount; ++i)
                if (name == kSpirvBlobs[i].name)
                {
                    VkShaderModuleCreateInfo info{VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO};
                    info.codeSize = kSpirvBlobs[i].size;
                    info.pCode = kSpirvBlobs[i].code;
                    check(vkCreateShaderModule(device, &info, nullptr, &entry), "vkCreateShaderModule");
                    return entry;
                }
            std::fprintf(stderr, "[native-gs] vulkan: no SPIR-V for %s\n", name.c_str());
            return VK_NULL_HANDLE;
        }

        std::string blobName(const std::string &function, const ShaderOptions &options, bool specialized)
        {
            static const std::map<std::string, std::string> names = {
                {"vertexMain", "vs_main"}, {"quadVertex", "vs_quad"}, {"fragmentMain", "fs_main"}, {"fragmentOpaque", "fs_opaque"},
                {"shuffleFragment", "fs_shuffle"}, {"presentFragment", "fs_present"}, {"aoFragment", "fs_ao"}, {"aoUpsampleFragment", "fs_ao_upsample"}, {"softMaskFragment", "fs_soft_mask"}, {"aoReduceDepthFragment", "fs_ao_reduce_depth"}, {"aoReduceFragment", "fs_ao_reduce"}, {"aoMedianFragment", "fs_ao_median"}, {"aoSmoothFragment", "fs_ao_smooth"}, {"smaaEdgeFragment", "fs_smaa_edge"}, {"smaaWeightFragment", "fs_smaa_weight"}, {"smaaBlendFragment", "fs_smaa_blend"}, {"depthAsColorFragment", "fs_depth_as_color"},
                {"alphaNibbleFragment", "fs_nibble"}, {"fragmentHwBlend", "fs_hwblend"}, {"depthCopyFragment", "fs_depth_copy"}, {"depthCopyClearFragment", "fs_depth_copy_clear"}};
            const auto found = names.find(function);
            if (found == names.end())
                return function;
            std::string out = found->second;
            if (out == "fs_main" || out == "fs_opaque" || out == "fs_hwblend")
            {
                if (options.trivial)
                    return out + "_trivial";
                if (options.hwBilinear)
                    out += "_hwbil";
                if (options.noDownfilter)
                    out += "_nodown";
                if (specialized)
                    out += "_spec";
            }
            return out;
        }

        PipelineRef VulkanDevice::pipeline(const PipelineDesc &desc)
        {
            auto out = std::make_shared<VulkanPipeline>();
            out->owner = this;
            out->desc = desc;
            out->vertex = shader(blobName(desc.vertex, options, false));
            out->fragment = shader(blobName(desc.fragment, options, desc.specialized));
            out->readsDestination = desc.fragment == "fragmentMain" || desc.fragment == "shuffleFragment";
            if (!out->vertex || !out->fragment)
                return nullptr;
            // Triangles are what almost everything draws: built now, so a failure shows here.
            if (!out->get(Primitive::Triangle, out->readsDestination && desc.color != Format::Invalid))
                return nullptr;
            return out;
        }

        void VulkanDevice::pipelineAsync(const PipelineDesc &desc, std::function<void(PipelineRef)> ready)
        {
            {
                std::lock_guard<std::mutex> lock(compileMutex);
                compileQueue.push_back([this, desc, ready = std::move(ready)] { ready(pipeline(desc)); });
            }
            compileReady.notify_one();
        }

        void VulkanDevice::compileLoop()
        {
            for (;;)
            {
                std::function<void()> job;
                {
                    std::unique_lock<std::mutex> lock(compileMutex);
                    compileReady.wait(lock, [&] { return !compileQueue.empty() || stopping; });
                    if (compileQueue.empty())
                        return;
                    job = std::move(compileQueue.front());
                    compileQueue.pop_front();
                }
                job();
            }
        }

        VkPipeline VulkanDevice::buildPipeline(VulkanPipeline &p, Primitive primitive, bool withInput, uint32_t depthKey)
        {
            const PipelineDesc &desc = p.desc;
            const VkFormat color = toVulkan(desc.color), depth = toVulkan(desc.depth);
            VkPipelineShaderStageCreateInfo stages[2] = {};
            stages[0].sType = stages[1].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
            stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
            stages[0].module = p.vertex;
            stages[0].pName = "main";
            stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
            stages[1].module = p.fragment;
            stages[1].pName = "main";
            VkSpecializationMapEntry entries[25];
            for (uint32_t i = 0; i < 25; ++i)
                entries[i] = {i, i * 4u, 4u};
            VkSpecializationInfo specialization{25, entries, sizeof(uint32_t) * 25, desc.constants.data()};
            if (desc.specialized)
                stages[1].pSpecializationInfo = &specialization;

            VkVertexInputBindingDescription binding{0, 32, VK_VERTEX_INPUT_RATE_VERTEX};
            VkVertexInputAttributeDescription attributes[4] = {
                {0, 0, VK_FORMAT_R32G32B32_SFLOAT, 0}, {1, 0, VK_FORMAT_R8G8B8A8_UINT, 12}, {2, 0, VK_FORMAT_R32G32B32_SFLOAT, 16}, {3, 0, VK_FORMAT_R32_SFLOAT, 28}};
            VkPipelineVertexInputStateCreateInfo vertexInput{VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};
            if (desc.layout == VertexLayout::GsVertex)
            {
                vertexInput.vertexBindingDescriptionCount = 1;
                vertexInput.pVertexBindingDescriptions = &binding;
                vertexInput.vertexAttributeDescriptionCount = 4;
                vertexInput.pVertexAttributeDescriptions = attributes;
            }
            VkPipelineInputAssemblyStateCreateInfo assembly{VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
            assembly.topology = primitive == Primitive::Point ? VK_PRIMITIVE_TOPOLOGY_POINT_LIST : primitive == Primitive::Line ? VK_PRIMITIVE_TOPOLOGY_LINE_LIST : VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
            VkPipelineViewportStateCreateInfo viewport{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
            viewport.viewportCount = viewport.scissorCount = 1;
            VkPipelineRasterizationStateCreateInfo raster{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
            raster.polygonMode = VK_POLYGON_MODE_FILL;
            raster.cullMode = VK_CULL_MODE_NONE;
            raster.frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
            raster.lineWidth = 1.0f;
            VkPipelineMultisampleStateCreateInfo multisample{VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
            multisample.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
            VkPipelineDepthStencilStateCreateInfo depthStencil{VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO};
            // Depth key: compare (0 always, 1 greater, 2 greater-or-equal) + 3 * write. Dynamic when the device has
            // extended dynamic state; else baked in (one pipeline per combination in use).
            depthStencil.depthTestEnable = VK_TRUE; // Vulkan writes depth only with the test on (ALWAYS for none)
            depthStencil.depthCompareOp = depthKey % 3u == 0u ? VK_COMPARE_OP_ALWAYS : depthKey % 3u == 1u ? VK_COMPARE_OP_GREATER : VK_COMPARE_OP_GREATER_OR_EQUAL;
            depthStencil.depthWriteEnable = depthKey >= 3u ? VK_TRUE : VK_FALSE;
            VkPipelineColorBlendAttachmentState blend{};
            blend.colorWriteMask = ((desc.blend.writeMask & 1) ? VK_COLOR_COMPONENT_R_BIT : 0) | ((desc.blend.writeMask & 2) ? VK_COLOR_COMPONENT_G_BIT : 0) |
                                   ((desc.blend.writeMask & 4) ? VK_COLOR_COMPONENT_B_BIT : 0) | ((desc.blend.writeMask & 8) ? VK_COLOR_COMPONENT_A_BIT : 0);
            if (desc.blend.enabled)
            {
                const auto factor = [](BlendFactor f) { return f == BlendFactor::Zero ? VK_BLEND_FACTOR_ZERO : f == BlendFactor::One ? VK_BLEND_FACTOR_ONE : f == BlendFactor::Src1Alpha ? VK_BLEND_FACTOR_SRC1_ALPHA : f == BlendFactor::DstAlpha ? VK_BLEND_FACTOR_DST_ALPHA : VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA; };
                blend.blendEnable = VK_TRUE;
                blend.colorBlendOp = desc.blend.op == BlendOp::Add ? VK_BLEND_OP_ADD : desc.blend.op == BlendOp::Subtract ? VK_BLEND_OP_SUBTRACT : VK_BLEND_OP_REVERSE_SUBTRACT;
                blend.srcColorBlendFactor = factor(desc.blend.src);
                blend.dstColorBlendFactor = factor(desc.blend.dst);
                blend.alphaBlendOp = VK_BLEND_OP_ADD;
                blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
                blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
            }
            VkPipelineColorBlendStateCreateInfo colorBlend{VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
            if (color != VK_FORMAT_UNDEFINED)
            {
                colorBlend.attachmentCount = 1;
                colorBlend.pAttachments = &blend;
                if (withInput && rasterOrder)
                    colorBlend.flags |= VK_PIPELINE_COLOR_BLEND_STATE_CREATE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_BIT_EXT;
            }
            const VkDynamicState dynamic[] = {VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR, VK_DYNAMIC_STATE_DEPTH_TEST_ENABLE_EXT,
                                              VK_DYNAMIC_STATE_DEPTH_WRITE_ENABLE_EXT, VK_DYNAMIC_STATE_DEPTH_COMPARE_OP_EXT};
            VkPipelineDynamicStateCreateInfo dynamicState{VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO};
            dynamicState.dynamicStateCount = dynamicDepth ? uint32_t(sizeof(dynamic) / sizeof(dynamic[0])) : 2u;
            dynamicState.pDynamicStates = dynamic;
            VkGraphicsPipelineCreateInfo info{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
            info.stageCount = 2;
            info.pStages = stages;
            info.pVertexInputState = &vertexInput;
            info.pInputAssemblyState = &assembly;
            info.pViewportState = &viewport;
            info.pRasterizationState = &raster;
            info.pMultisampleState = &multisample;
            info.pDepthStencilState = &depthStencil;
            info.pColorBlendState = &colorBlend;
            info.pDynamicState = &dynamicState;
            info.layout = pipelineLayout;
            info.renderPass = renderPass(color, depth, Load::Load, Load::Load, withInput && color != VK_FORMAT_UNDEFINED);
            VkPipeline out = VK_NULL_HANDLE;
            if (!check(vkCreateGraphicsPipelines(device, VK_NULL_HANDLE, 1, &info, nullptr, &out), "vkCreateGraphicsPipelines"))
                std::fprintf(stderr, "[native-gs] vulkan: pipeline %s/%s\n", desc.vertex.c_str(), desc.fragment.c_str());
            return out;
        }

        // ------------------------------------------------------------------------------------------- command buffers

        CommandBufferRef VulkanDevice::commandBuffer()
        {
            auto out = std::make_shared<VulkanCommandBuffer>();
            out->owner = this;
            out->retired->pool = takeCommandPool();
            VkCommandBufferAllocateInfo allocateInfo{VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
            allocateInfo.commandPool = out->retired->pool;
            allocateInfo.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
            allocateInfo.commandBufferCount = 1;
            vkAllocateCommandBuffers(device, &allocateInfo, &out->cb);
            out->retired->commandBuffer = out->cb;
            VkCommandBufferBeginInfo begin{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
            begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
            vkBeginCommandBuffer(out->cb, &begin);
            out->retired->completion = out->completion;
            return out;
        }

        VulkanCommandBuffer::~VulkanCommandBuffer()
        {
            // Never committed: nothing reached the GPU, free at once.
            if (!committed && retired && owner)
            {
                vkEndCommandBuffer(cb);
                for (VkFramebuffer f : retired->framebuffers)
                    vkDestroyFramebuffer(owner->device, f, nullptr);
                for (VkDescriptorPool p : retired->descriptorPools)
                    vkDestroyDescriptorPool(owner->device, p, nullptr);
                vkDestroyCommandPool(owner->device, retired->pool, nullptr);
            }
        }

        void VulkanCommandBuffer::fullBarrier()
        {
            VkMemoryBarrier barrier{VK_STRUCTURE_TYPE_MEMORY_BARRIER};
            barrier.srcAccessMask = VK_ACCESS_MEMORY_WRITE_BIT;
            barrier.dstAccessMask = VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT;
            vkCmdPipelineBarrier(cb, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, 0, 1, &barrier, 0, nullptr, 0, nullptr);
        }

        bool VulkanCommandBuffer::uniformSlice(const void *data, size_t size, VkBuffer &buffer, uint32_t &offset)
        {
            constexpr size_t kChunk = 1u << 20, kRange = 256;
            size = std::min(size, kRange);
            const size_t aligned = (kRange + owner->uniformAlignment - 1) & ~size_t(owner->uniformAlignment - 1);
            if (retired->uniforms.empty() || retired->uniforms.back().used + aligned > kChunk)
            {
                UniformChunk chunk;
                {
                    std::lock_guard<std::mutex> lock(owner->recycleMutex);
                    if (!owner->freeUniformChunks.empty())
                    {
                        chunk.buffer = std::move(owner->freeUniformChunks.back());
                        owner->freeUniformChunks.pop_back();
                    }
                }
                if (!chunk.buffer)
                    chunk.buffer = owner->makeBuffer(kChunk, VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT);
                if (!chunk.buffer)
                    return false;
                retired->uniforms.push_back(std::move(chunk));
            }
            UniformChunk &chunk = retired->uniforms.back();
            std::memcpy(static_cast<uint8_t *>(chunk.buffer->contents) + chunk.used, data, size);
            buffer = static_cast<VulkanBuffer *>(chunk.buffer.get())->buffer;
            offset = uint32_t(chunk.used);
            chunk.used += aligned;
            return true;
        }

        VkDescriptorPool VulkanDevice::takeDescriptorPool()
        {
            {
                std::lock_guard<std::mutex> lock(recycleMutex);
                if (!freeDescriptorPools.empty())
                {
                    const VkDescriptorPool pool = freeDescriptorPools.back();
                    freeDescriptorPools.pop_back();
                    return pool;
                }
            }
            constexpr uint32_t kSets = 2048;
            const VkDescriptorPoolSize sizes[] = {{VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC, kSets}, {VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE, kSets * 2},
                                                  {VK_DESCRIPTOR_TYPE_SAMPLER, kSets}, {VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT, kSets}};
            VkDescriptorPoolCreateInfo poolInfo{VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO};
            poolInfo.maxSets = kSets;
            poolInfo.poolSizeCount = 4;
            poolInfo.pPoolSizes = sizes;
            VkDescriptorPool pool = VK_NULL_HANDLE;
            check(vkCreateDescriptorPool(device, &poolInfo, nullptr, &pool), "vkCreateDescriptorPool");
            return pool;
        }

        VkCommandPool VulkanDevice::takeCommandPool()
        {
            {
                std::lock_guard<std::mutex> lock(recycleMutex);
                if (!freeCommandPools.empty())
                {
                    const VkCommandPool pool = freeCommandPools.back();
                    freeCommandPools.pop_back();
                    return pool;
                }
            }
            VkCommandPoolCreateInfo poolInfo{VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO};
            poolInfo.flags = VK_COMMAND_POOL_CREATE_TRANSIENT_BIT;
            poolInfo.queueFamilyIndex = queueFamily;
            VkCommandPool pool = VK_NULL_HANDLE;
            vkCreateCommandPool(device, &poolInfo, nullptr, &pool);
            return pool;
        }

        VkDescriptorSet VulkanCommandBuffer::allocateSet()
        {
            for (int attempt = 0; attempt < 2; ++attempt)
            {
                if (!retired->descriptorPools.empty())
                {
                    VkDescriptorSetAllocateInfo info{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
                    info.descriptorPool = retired->descriptorPools.back();
                    info.descriptorSetCount = 1;
                    info.pSetLayouts = &owner->setLayout;
                    VkDescriptorSet set = VK_NULL_HANDLE;
                    if (vkAllocateDescriptorSets(owner->device, &info, &set) == VK_SUCCESS)
                        return set;
                }
                const VkDescriptorPool pool = owner->takeDescriptorPool();
                if (!pool)
                    return VK_NULL_HANDLE;
                retired->descriptorPools.push_back(pool);
            }
            return VK_NULL_HANDLE;
        }

        std::unique_ptr<RenderEncoder> VulkanCommandBuffer::renderPass(const PassDesc &pass)
        {
            VulkanDevice &d = *owner;
            auto encoder = std::make_unique<VulkanRenderEncoder>();
            encoder->owner = this;
            encoder->cb = cb;
            VulkanTexture *color = vk(pass.color), *depth = vk(pass.depth);
            if (color && color->swapchainImage)
            {
                // A swapchain image arrives in PRESENT_SRC (or undefined, first use); its old contents are not needed.
                VkImageMemoryBarrier barrier{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
                barrier.dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
                barrier.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
                barrier.newLayout = VK_IMAGE_LAYOUT_GENERAL;
                barrier.srcQueueFamilyIndex = barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
                barrier.image = color->image;
                barrier.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
                vkCmdPipelineBarrier(cb, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT, 0, 0, nullptr, 0, nullptr, 1, &barrier);
            }
            fullBarrier();
            encoder->withInput = color && color->inputAttachment;
            encoder->color = pass.color;
            const VkRenderPass renderPass = d.renderPass(color ? toVulkan(color->format) : VK_FORMAT_UNDEFINED, depth ? VK_FORMAT_D32_SFLOAT : VK_FORMAT_UNDEFINED,
                                                         pass.colorLoad, pass.depthLoad, encoder->withInput);
            VkImageView views[2];
            uint32_t n = 0;
            if (color)
                views[n++] = color->view;
            if (depth)
                views[n++] = depth->view;
            const Texture *sized = color ? static_cast<Texture *>(color) : static_cast<Texture *>(depth);
            encoder->width = sized->width;
            encoder->height = sized->height;
            encoder->areaHeight = pass.rows != 0u && pass.rows < sized->height ? pass.rows : sized->height;
            VkFramebufferCreateInfo framebufferInfo{VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO};
            framebufferInfo.renderPass = renderPass;
            framebufferInfo.attachmentCount = n;
            framebufferInfo.pAttachments = views;
            framebufferInfo.width = sized->width;
            framebufferInfo.height = sized->height;
            framebufferInfo.layers = 1;
            VkFramebuffer framebuffer = VK_NULL_HANDLE;
            vkCreateFramebuffer(d.device, &framebufferInfo, nullptr, &framebuffer);
            retired->framebuffers.push_back(framebuffer);
            if (pass.color)
                retired->keep.push_back(pass.color);
            if (pass.depth)
                retired->keep.push_back(pass.depth);

            VkClearValue clears[2] = {};
            clears[n - 1].depthStencil.depth = pass.clearDepth;
            VkRenderPassBeginInfo begin{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
            begin.renderPass = renderPass;
            begin.framebuffer = framebuffer;
            begin.renderArea = {{0, 0}, {sized->width, encoder->areaHeight}};
            begin.clearValueCount = n;
            begin.pClearValues = clears;
            vkCmdBeginRenderPass(cb, &begin, VK_SUBPASS_CONTENTS_INLINE);
            // Metal's defaults: the whole attachment as viewport and scissor, no culling (in the pipelines).
            // The whole attachment, also when the render area is only its top rows (the scissor keeps drawing inside it):
            // positions map onto it exactly (512 rows), where a 448-row viewport moved the edges of some sprites.
            VkViewport viewport{0.0f, 0.0f, float(sized->width), float(sized->height), 0.0f, 1.0f};
            vkCmdSetViewport(cb, 0, 1, &viewport);
            VkRect2D scissor{{0, 0}, {sized->width, encoder->areaHeight}};
            vkCmdSetScissor(cb, 0, 1, &scissor);
            return encoder;
        }

        void VulkanRenderEncoder::setPipeline(const PipelineRef &p)
        {
            pipeline = static_cast<VulkanPipeline *>(p.get());
            owner->retired->keep.push_back(p);
        }

        void VulkanRenderEncoder::setBytes(const void *data, size_t size)
        {
            VkBuffer buffer = VK_NULL_HANDLE;
            uint32_t offset = 0;
            if (!owner->uniformSlice(data, size, buffer, offset))
                return;
            if (buffer != uniformBuffer)
                setDirty = true;
            uniformBuffer = buffer;
            uniformOffset = offset;
            offsetDirty = true;
        }

        void VulkanRenderEncoder::prepare(Primitive primitive)
        {
            VulkanDevice &d = *owner->owner;
            const uint32_t depthKey = uint32_t(depth.compare) + (depth.write ? 3u : 0u);
            const VkPipeline wanted = pipeline->get(primitive, withInput, depthKey);
            if (wanted != boundPipeline)
            {
                vkCmdBindPipeline(cb, VK_PIPELINE_BIND_POINT_GRAPHICS, wanted);
                boundPipeline = wanted;
            }
            if (depthDirty && d.dynamicDepth)
            {
                vkCmdSetDepthTestEnableEXT(cb, VK_TRUE); // Vulkan writes depth only with the test on (ALWAYS for none)
                vkCmdSetDepthWriteEnableEXT(cb, depth.write ? VK_TRUE : VK_FALSE);
                vkCmdSetDepthCompareOpEXT(cb, depth.compare == Compare::Always ? VK_COMPARE_OP_ALWAYS : depth.compare == Compare::Greater ? VK_COMPARE_OP_GREATER : VK_COMPARE_OP_GREATER_OR_EQUAL);
                depthDirty = false;
            }
            if (vertexDirty && vertexBuffer)
            {
                const VkBuffer buffer = static_cast<VulkanBuffer *>(vertexBuffer.get())->buffer;
                const VkDeviceSize offset = vertexOffset;
                vkCmdBindVertexBuffers(cb, 0, 1, &buffer, &offset);
                owner->retired->keep.push_back(vertexBuffer);
                vertexDirty = false;
            }
            if (!uniformBuffer)
            {
                const uint32_t zero[64] = {};
                setBytes(zero, sizeof(zero));
            }
            if (setDirty)
            {
                set = owner->allocateSet();
                VkDescriptorBufferInfo bufferInfo{uniformBuffer, 0, 256};
                VulkanTexture *t0 = vk(textures[0] ? textures[0] : d.dummy), *t1 = vk(textures[1] ? textures[1] : d.dummy);
                VkDescriptorImageInfo image0{VK_NULL_HANDLE, t0->view, VK_IMAGE_LAYOUT_GENERAL}, image1{VK_NULL_HANDLE, t1->view, VK_IMAGE_LAYOUT_GENERAL};
                VkDescriptorImageInfo samplerInfo{static_cast<VulkanSampler *>((sampler ? sampler : d.dummySampler).get())->sampler, VK_NULL_HANDLE, VK_IMAGE_LAYOUT_UNDEFINED};
                VkDescriptorImageInfo input{VK_NULL_HANDLE, withInput ? vk(color)->view : VK_NULL_HANDLE, VK_IMAGE_LAYOUT_GENERAL};
                VkWriteDescriptorSet writes[5] = {};
                for (uint32_t i = 0; i < 5; ++i)
                {
                    writes[i].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
                    writes[i].dstSet = set;
                    writes[i].dstBinding = i;
                    writes[i].descriptorCount = 1;
                }
                writes[0].descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
                writes[0].pBufferInfo = &bufferInfo;
                writes[1].descriptorType = VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE;
                writes[1].pImageInfo = &image0;
                writes[2].descriptorType = VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE;
                writes[2].pImageInfo = &image1;
                writes[3].descriptorType = VK_DESCRIPTOR_TYPE_SAMPLER;
                writes[3].pImageInfo = &samplerInfo;
                writes[4].descriptorType = VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT;
                writes[4].pImageInfo = &input;
                vkUpdateDescriptorSets(d.device, withInput ? 5u : 4u, writes, 0, nullptr);
                if (textures[0])
                    owner->retired->keep.push_back(textures[0]);
                if (textures[1])
                    owner->retired->keep.push_back(textures[1]);
                setDirty = false;
                offsetDirty = true;
            }
            if (offsetDirty)
            {
                vkCmdBindDescriptorSets(cb, VK_PIPELINE_BIND_POINT_GRAPHICS, d.pipelineLayout, 0, 1, &set, 1, &uniformOffset);
                offsetDirty = false;
            }
        }

        void VulkanRenderEncoder::draw(Primitive primitive, uint32_t first, uint32_t count)
        {
            if (!pipeline || count == 0)
                return;
            prepare(primitive);
            const bool reads = pipeline->readsDestination && withInput;
            if (!reads || owner->owner->rasterOrder)
            {
                vkCmdDraw(cb, count, 1, first, 0);
                return;
            }
            // Without rasterization-order access, a fragment may read its pixel before an earlier primitive of the same
            // draw has written it. The draw is cut into runs of primitives that do not overlap on screen, with a
            // by-region barrier before each run. Triangles are tested exactly (separating axes; sharing an edge is not
            // overlapping, the rasterizer never gives a pixel to both sides), so a mesh stays one run and a stack of
            // blended layers becomes one run per layer. Points and lines use their boxes. Positions are read from the
            // vertex buffer, which the CPU wrote.
            VkMemoryBarrier barrier{VK_STRUCTURE_TYPE_MEMORY_BARRIER};
            barrier.srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
            barrier.dstAccessMask = VK_ACCESS_INPUT_ATTACHMENT_READ_BIT;
            static const bool noFence = std::getenv("PS2X_GS_VULKAN_NO_FENCE") != nullptr; // diagnostic: drops the barriers
            const auto fence = [&] {
                if (!noFence)
                    vkCmdPipelineBarrier(cb, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT, VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT, VK_DEPENDENCY_BY_REGION_BIT, 1, &barrier, 0, nullptr, 0, nullptr);
            };
            const uint32_t per = primitive == Primitive::Point ? 1u : primitive == Primitive::Line ? 2u : 3u;
            const uint8_t *vertices = vertexBuffer && pipeline->desc.layout == VertexLayout::GsVertex ? static_cast<const uint8_t *>(vertexBuffer->contents) + vertexOffset : nullptr;
            if (!vertices || count <= per)
            {
                fence();
                vkCmdDraw(cb, count, 1, first, 0);
                return;
            }
            // One grid per thread, kept: building its 16k cells for every pass cost more than the draws themselves.
            static thread_local OverlapRun run;
            uint32_t runStart = 0, runs = 0;
            run.begin();
            for (uint32_t at = 0; at + per <= count; at += per)
            {
                Shape shape;
                shape.corners = per;
                for (uint32_t v = 0; v < per; ++v)
                    std::memcpy(&shape.p[v][0], vertices + size_t(first + at + v) * 32u, sizeof(float) * 2);
                if (run.overlaps(shape))
                {
                    fence();
                    vkCmdDraw(cb, at - runStart, 1, first + runStart, 0);
                    ++runs;
                    runStart = at;
                    run.begin();
                }
                run.add(shape);
            }
            fence();
            vkCmdDraw(cb, count - runStart, 1, first + runStart, 0);
            ++runs;
            static const bool runLog = std::getenv("PS2X_GS_VULKAN_RUNLOG") != nullptr;
            if (runLog && runs > 16)
                std::fprintf(stderr, "[native-gs] vulkan: draw of %u primitives in %u runs\n", count / per, runs);
        }

        void VulkanRenderEncoder::end()
        {
            vkCmdEndRenderPass(cb);
        }

        std::unique_ptr<BlitEncoder> VulkanCommandBuffer::blit()
        {
            auto encoder = std::make_unique<VulkanBlitEncoder>();
            encoder->owner = this;
            encoder->cb = cb;
            fullBarrier();
            return encoder;
        }

        void VulkanBlitEncoder::copyTexture(const TextureRef &from, uint32_t sx, uint32_t sy, uint32_t w, uint32_t h, const TextureRef &to, uint32_t dx, uint32_t dy)
        {
            VulkanTexture *a = vk(from), *b = vk(to);
            VkImageCopy region{};
            region.srcSubresource = {a->aspect, 0, 0, 1};
            region.srcOffset = {int32_t(sx), int32_t(sy), 0};
            region.dstSubresource = {b->aspect, 0, 0, 1};
            region.dstOffset = {int32_t(dx), int32_t(dy), 0};
            region.extent = {w, h, 1};
            vkCmdCopyImage(cb, a->image, VK_IMAGE_LAYOUT_GENERAL, b->image, VK_IMAGE_LAYOUT_GENERAL, 1, &region);
            owner->retired->keep.push_back(from);
            owner->retired->keep.push_back(to);
        }

        void VulkanBlitEncoder::copyBufferToTexture(const BufferRef &from, size_t offset, uint32_t rowBytes, uint32_t w, uint32_t h, const TextureRef &to, uint32_t dx, uint32_t dy)
        {
            VulkanTexture *t = vk(to);
            VkBufferImageCopy region{};
            region.bufferOffset = offset;
            region.bufferRowLength = rowBytes / 4u;
            region.imageSubresource = {t->aspect, 0, 0, 1};
            region.imageOffset = {int32_t(dx), int32_t(dy), 0};
            region.imageExtent = {w, h, 1};
            vkCmdCopyBufferToImage(cb, static_cast<VulkanBuffer *>(from.get())->buffer, t->image, VK_IMAGE_LAYOUT_GENERAL, 1, &region);
            owner->retired->keep.push_back(from);
            owner->retired->keep.push_back(to);
        }

        void VulkanBlitEncoder::end()
        {
            owner->fullBarrier();
        }

        void VulkanCommandBuffer::commit()
        {
            if (committed)
                return;
            committed = true;
            vkEndCommandBuffer(cb);
            owner->flushUploads(); // texture contents written since the last submit go first
            std::vector<VkSemaphore> waits, signals;
            for (auto &d : drawables)
            {
                waits.push_back(d->acquired);
                signals.push_back(d->rendered);
                retired->keep.push_back(d);
            }
            owner->submit(cb, std::move(retired), waits, signals);
            for (auto &d : drawables)
            {
                VkPresentInfoKHR info{VK_STRUCTURE_TYPE_PRESENT_INFO_KHR};
                info.waitSemaphoreCount = 1;
                info.pWaitSemaphores = &d->rendered;
                info.swapchainCount = 1;
                info.pSwapchains = &d->handle;
                info.pImageIndices = &d->index;
                {
                    std::lock_guard<std::mutex> lock(owner->queueMutex);
                    vkQueuePresentKHR(owner->queue, &info);
                }
                // No presentation timing in core Vulkan: the time it was handed to the display engine.
                const double now = hostSeconds();
                for (auto &handler : d->presented)
                    handler(now);
            }
            drawables.clear();
        }

        void VulkanDevice::submit(VkCommandBuffer cb, std::unique_ptr<Retired> retired, const std::vector<VkSemaphore> &waits, const std::vector<VkSemaphore> &signals)
        {
            VkFenceCreateInfo fenceInfo{VK_STRUCTURE_TYPE_FENCE_CREATE_INFO};
            vkCreateFence(device, &fenceInfo, nullptr, &retired->fence);
            std::vector<VkPipelineStageFlags> stages(waits.size(), VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT);
            VkSubmitInfo info{VK_STRUCTURE_TYPE_SUBMIT_INFO};
            info.waitSemaphoreCount = uint32_t(waits.size());
            info.pWaitSemaphores = waits.data();
            info.pWaitDstStageMask = stages.data();
            info.commandBufferCount = 1;
            info.pCommandBuffers = &cb;
            info.signalSemaphoreCount = uint32_t(signals.size());
            info.pSignalSemaphores = signals.data();
            retired->submitted = hostSeconds();
            {
                std::lock_guard<std::mutex> lock(queueMutex);
                check(vkQueueSubmit(queue, 1, &info, retired->fence), "vkQueueSubmit");
            }
            {
                std::lock_guard<std::mutex> lock(retireMutex);
                retiring.push_back(std::move(retired));
            }
            retireReady.notify_one();
        }

        void VulkanDevice::retireLoop()
        {
            for (;;)
            {
                std::unique_ptr<Retired> next;
                {
                    std::unique_lock<std::mutex> lock(retireMutex);
                    retireReady.wait(lock, [&] { return !retiring.empty() || stopping; });
                    if (retiring.empty())
                        return;
                    next = std::move(retiring.front());
                    retiring.pop_front();
                }
                vkWaitForFences(device, 1, &next->fence, VK_TRUE, UINT64_MAX);
                const double end = hostSeconds();
                for (auto &handler : next->handlers)
                    handler(next->submitted, end);
                vkDestroyFence(device, next->fence, nullptr);
                for (VkFramebuffer f : next->framebuffers)
                    vkDestroyFramebuffer(device, f, nullptr);
                for (VkDescriptorPool p : next->descriptorPools)
                    vkResetDescriptorPool(device, p, 0);
                if (next->commandBuffer)
                    vkFreeCommandBuffers(device, next->pool, 1, &next->commandBuffer);
                vkResetCommandPool(device, next->pool, 0);
                {
                    std::lock_guard<std::mutex> lock(recycleMutex);
                    freeDescriptorPools.insert(freeDescriptorPools.end(), next->descriptorPools.begin(), next->descriptorPools.end());
                    freeCommandPools.push_back(next->pool);
                    for (UniformChunk &chunk : next->uniforms)
                        freeUniformChunks.push_back(std::move(chunk.buffer));
                }
                next->descriptorPools.clear();
                next->uniforms.clear();
                std::shared_ptr<Completion> completion = next->completion;
                next.reset(); // releases textures, buffers and pipelines the GPU was using
                if (completion)
                {
                    std::lock_guard<std::mutex> lock(completion->mutex);
                    completion->finished = true;
                    completion->done.notify_all();
                }
            }
        }

        // ------------------------------------------------------------------------------------------- window

#if defined(_WIN32)
        LRESULT CALLBACK childWindowProc(HWND window, UINT message, WPARAM wParam, LPARAM lParam)
        {
            switch (message)
            {
            case WM_NCHITTEST: return HTTRANSPARENT; // mouse goes to the game's window underneath
            case WM_ERASEBKGND: return 1;
            default: return DefWindowProcW(window, message, wParam, lParam);
            }
        }
#endif

        std::unique_ptr<Swapchain> VulkanDevice::attachWindow(void *window)
        {
#if defined(_WIN32)
            HWND parent = static_cast<HWND>(window);
            if (!parent || !vkCreateWin32SurfaceKHR)
                return nullptr;
            auto out = std::make_unique<VulkanSwapchain>();
            out->owner = this;
            out->parent = parent;
            // The picture goes into a child window covering the game window's client area (like the Metal layer over
            // the NSWindow): the game window keeps its own (OpenGL) surface. The child has its own thread and message
            // loop, so messages the parent sends it never wait on the renderer.
            SetWindowLongPtrW(parent, GWL_STYLE, GetWindowLongPtrW(parent, GWL_STYLE) | WS_CLIPCHILDREN);
            std::mutex ready;
            std::condition_variable created;
            bool done = false;
            VulkanSwapchain *raw = out.get();
            out->windowThread = std::thread([raw, &ready, &created, &done] {
                WNDCLASSW cls{};
                cls.lpfnWndProc = childWindowProc;
                cls.hInstance = GetModuleHandleW(nullptr);
                cls.lpszClassName = L"Ps2xNativeGs";
                cls.hCursor = LoadCursorW(nullptr, MAKEINTRESOURCEW(32512)); // IDC_ARROW; none left the "app starting" cursor over the game
                RegisterClassW(&cls);
                RECT rect{};
                GetClientRect(raw->parent, &rect);
                // Disabled: it only shows the picture. A child owned by another thread shares the game window's input
                // queue, and while it could take input the keyboard never reached the game (HTTRANSPARENT does not pass
                // the mouse on across threads either); a disabled child leaves mouse and keyboard to the game window.
                raw->child = CreateWindowExW(WS_EX_NOPARENTNOTIFY, L"Ps2xNativeGs", L"", WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_DISABLED, 0, 0, rect.right - rect.left,
                                             rect.bottom - rect.top, raw->parent, nullptr, cls.hInstance, nullptr);
                raw->windowThreadId = GetCurrentThreadId();
                {
                    std::lock_guard<std::mutex> lock(ready);
                    done = true;
                }
                created.notify_all();
                MSG message;
                while (GetMessageW(&message, nullptr, 0, 0) > 0)
                {
                    TranslateMessage(&message);
                    DispatchMessageW(&message);
                }
                if (raw->child)
                    DestroyWindow(raw->child);
            });
            {
                std::unique_lock<std::mutex> lock(ready);
                created.wait(lock, [&] { return done; });
            }
            if (!out->child)
                return nullptr;
            VkWin32SurfaceCreateInfoKHR surfaceInfo{VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR};
            surfaceInfo.hinstance = GetModuleHandleW(nullptr);
            surfaceInfo.hwnd = out->child;
            if (!check(vkCreateWin32SurfaceKHR(instance, &surfaceInfo, nullptr, &out->surface), "vkCreateWin32SurfaceKHR"))
                return nullptr;
            VkBool32 supported = VK_FALSE;
            vkGetPhysicalDeviceSurfaceSupportKHR(physical, queueFamily, out->surface, &supported);
            if (!supported || !out->recreate())
                return nullptr;
            return out;
#else
            (void)window;
            return nullptr; // macOS uses the Metal backend; the Vulkan one is tested there headless (gs-replay)
#endif
        }

        VulkanSwapchain::~VulkanSwapchain()
        {
            if (!owner)
                return;
            vkDeviceWaitIdle(owner->device);
            destroyImages();
            if (swapchain)
                vkDestroySwapchainKHR(owner->device, swapchain, nullptr);
            for (VkSemaphore s : acquired)
                vkDestroySemaphore(owner->device, s, nullptr);
            if (surface)
                vkDestroySurfaceKHR(owner->instance, surface, nullptr);
#if defined(_WIN32)
            if (windowThreadId)
                PostThreadMessageW(windowThreadId, WM_QUIT, 0, 0);
            if (windowThread.joinable())
                windowThread.join();
#endif
        }

        void VulkanSwapchain::destroyImages()
        {
            for (auto &image : images)
            {
                VulkanTexture *t = vk(image);
                if (t->view)
                    vkDestroyImageView(owner->device, t->view, nullptr);
                t->view = VK_NULL_HANDLE;
            }
            images.clear();
            for (VkSemaphore s : rendered)
                vkDestroySemaphore(owner->device, s, nullptr);
            rendered.clear();
        }

        void VulkanSwapchain::pixelSize(uint32_t &width, uint32_t &height)
        {
#if defined(_WIN32)
            RECT rect{};
            GetClientRect(parent, &rect);
            width = uint32_t(std::max<LONG>(rect.right - rect.left, 0));
            height = uint32_t(std::max<LONG>(rect.bottom - rect.top, 0));
#else
            width = height = 0;
#endif
        }

        bool VulkanSwapchain::recreate()
        {
            VulkanDevice &d = *owner;
            vkDeviceWaitIdle(d.device);
            destroyImages();
            VkSurfaceCapabilitiesKHR caps{};
            vkGetPhysicalDeviceSurfaceCapabilitiesKHR(d.physical, surface, &caps);
            if (caps.currentExtent.width == 0 || caps.currentExtent.height == 0)
                return false;
            uint32_t count = 0;
            vkGetPhysicalDeviceSurfaceFormatsKHR(d.physical, surface, &count, nullptr);
            std::vector<VkSurfaceFormatKHR> formats(count);
            vkGetPhysicalDeviceSurfaceFormatsKHR(d.physical, surface, &count, formats.data());
            VkColorSpaceKHR space = VK_COLOR_SPACE_SRGB_NONLINEAR_KHR;
            bool found = false;
            for (const auto &f : formats)
                if (f.format == VK_FORMAT_B8G8R8A8_UNORM)
                {
                    space = f.colorSpace;
                    found = true;
                    break;
                }
            if (!found)
            {
                std::fprintf(stderr, "[native-gs] vulkan: the window has no B8G8R8A8_UNORM format\n");
                return false;
            }
            VkSwapchainCreateInfoKHR info{VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR};
            info.surface = surface;
            info.minImageCount = std::max(caps.minImageCount, 3u);
            if (caps.maxImageCount)
                info.minImageCount = std::min(info.minImageCount, caps.maxImageCount);
            info.imageFormat = VK_FORMAT_B8G8R8A8_UNORM;
            info.imageColorSpace = space;
            info.imageExtent = caps.currentExtent;
            info.imageArrayLayers = 1;
            info.imageUsage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
            info.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
            info.preTransform = caps.currentTransform;
            info.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
            info.presentMode = VK_PRESENT_MODE_FIFO_KHR; // waits for the display, as the Metal layer does
            info.clipped = VK_TRUE;
            info.oldSwapchain = swapchain;
            VkSwapchainKHR created = VK_NULL_HANDLE;
            if (!check(vkCreateSwapchainKHR(d.device, &info, nullptr, &created), "vkCreateSwapchainKHR"))
                return false;
            if (swapchain)
                vkDestroySwapchainKHR(d.device, swapchain, nullptr);
            swapchain = created;
            extent = caps.currentExtent;
            vkGetSwapchainImagesKHR(d.device, swapchain, &count, nullptr);
            std::vector<VkImage> handles(count);
            vkGetSwapchainImagesKHR(d.device, swapchain, &count, handles.data());
            VkSemaphoreCreateInfo semaphoreInfo{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
            for (VkImage handle : handles)
            {
                auto t = std::make_shared<VulkanTexture>();
                t->owner = &d;
                t->swapchainImage = true;
                t->image = handle;
                t->width = extent.width;
                t->height = extent.height;
                t->format = Format::BGRA8;
                VkImageViewCreateInfo viewInfo{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
                viewInfo.image = handle;
                viewInfo.viewType = VK_IMAGE_VIEW_TYPE_2D;
                viewInfo.format = VK_FORMAT_B8G8R8A8_UNORM;
                viewInfo.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
                vkCreateImageView(d.device, &viewInfo, nullptr, &t->view);
                images.push_back(t);
                VkSemaphore s = VK_NULL_HANDLE;
                vkCreateSemaphore(d.device, &semaphoreInfo, nullptr, &s);
                rendered.push_back(s);
            }
            while (acquired.size() < count + 1u)
            {
                VkSemaphore s = VK_NULL_HANDLE;
                vkCreateSemaphore(d.device, &semaphoreInfo, nullptr, &s);
                acquired.push_back(s);
            }
            return true;
        }

        DrawableRef VulkanSwapchain::nextDrawable(uint32_t, uint32_t)
        {
            // The swapchain always matches the window (Vulkan on Windows requires it); the renderer reads the
            // drawable's size back from its texture.
#if defined(_WIN32)
            uint32_t w = 0, h = 0;
            pixelSize(w, h);
            if (w == 0 || h == 0)
                return nullptr;
            RECT childRect{};
            GetClientRect(child, &childRect);
            if (uint32_t(childRect.right) != w || uint32_t(childRect.bottom) != h)
                SetWindowPos(child, nullptr, 0, 0, int(w), int(h), SWP_NOZORDER | SWP_NOACTIVATE | SWP_ASYNCWINDOWPOS);
            if (extent.width != w || extent.height != h)
                if (!recreate())
                    return nullptr;
#endif
            for (int attempt = 0; attempt < 2; ++attempt)
            {
                VkSemaphore semaphore = acquired[nextAcquire];
                uint32_t index = 0;
                const VkResult result = vkAcquireNextImageKHR(owner->device, swapchain, UINT64_MAX, semaphore, VK_NULL_HANDLE, &index);
                if (result == VK_ERROR_OUT_OF_DATE_KHR)
                {
                    if (!recreate())
                        return nullptr;
                    continue;
                }
                if (result != VK_SUCCESS && result != VK_SUBOPTIMAL_KHR)
                    return nullptr;
                nextAcquire = (nextAcquire + 1u) % uint32_t(acquired.size());
                auto out = std::make_shared<VulkanDrawable>();
                out->swapchain = this;
                out->handle = swapchain;
                out->index = index;
                out->acquired = semaphore;
                out->rendered = rendered[index];
                out->texture = images[index];
                return out;
            }
            return nullptr;
        }
    }

    std::unique_ptr<Device> createVulkanDevice(const ShaderOptions &options)
    {
        auto device = std::make_unique<VulkanDevice>();
        if (!device->initialize(options))
            return nullptr;
        return device;
    }
}
