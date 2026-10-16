// The GPU operations the native GS renderer needs, independent of the graphics API. One implementation per API:
// gpu_metal.mm (macOS) and gpu_vulkan.cpp (Windows). The renderer (native_gs_module) only talks to these classes.
//
// The model follows what the renderer does: textures (colour targets, depth targets, decoded textures), passes that
// draw into one colour and/or one depth texture, copies between textures and from buffers, command buffers committed
// in order, and a swapchain for the window. Shaders are referred to by name; the backends hold the compiled code.
#pragma once
#include <array>
#include <cstddef>
#include <cstdint>
#include <functional>
#include <memory>
#include <string>

namespace gpu
{
    enum class Format : uint8_t { RGBA8, BGRA8, Depth32F, BC1, BC3, Invalid };

    enum Usage : uint32_t { ShaderRead = 1u, RenderTarget = 2u };
    enum class Storage : uint8_t { Default, Private, Shared }; // Default: the CPU may write it (replaceRegion); Shared: it can also read it back

    struct TextureDesc
    {
        Format format = Format::RGBA8;
        uint32_t width = 1, height = 1, levels = 1;
        uint32_t usage = ShaderRead;
        Storage storage = Storage::Default;
    };

    class Texture
    {
    public:
        virtual ~Texture() = default;
        uint32_t width = 0, height = 0, levels = 1;
        Format format = Format::RGBA8;
    };
    using TextureRef = std::shared_ptr<Texture>;

    class Buffer
    {
    public:
        virtual ~Buffer() = default;
        void *contents = nullptr; // CPU-visible memory (every buffer here is shared)
        size_t size = 0;
    };
    using BufferRef = std::shared_ptr<Buffer>;

    // Small immutable state objects, created once per key and kept by the device.
    class Sampler { public: virtual ~Sampler() = default; };
    using SamplerRef = std::shared_ptr<Sampler>;
    struct SamplerDesc
    {
        bool linear = false;
        bool clampU = false, clampV = false; // else repeat
        bool operator==(const SamplerDesc &) const = default;
    };

    enum class Compare : uint8_t { Always, Greater, GreaterEqual };
    class DepthState { public: virtual ~DepthState() = default; };
    using DepthStateRef = std::shared_ptr<DepthState>;
    struct DepthDesc
    {
        Compare compare = Compare::Always;
        bool write = false;
    };

    // Vertex input: none (the shader makes a full-screen triangle from the vertex index) or the renderer's GpuVertex
    // layout (float3 position, uchar4 colour, float3 stq, float fog; 32 bytes).
    enum class VertexLayout : uint8_t { None, GsVertex };

    // Shader constants that pick the fragment shader's code paths (GS_SPECIALIZED): 25 values, see native_gs_module.
    using Specialization = std::array<uint32_t, 25>;

    // Fixed-function blending of the colour output: result = output * src (op) target * dst, colour channels only;
    // alpha is written as the shader gives it. Src1Alpha is the second (dual-source) output's alpha.
    enum class BlendFactor : uint8_t { Zero, One, Src1Alpha, OneMinusSrc1Alpha, DstAlpha };
    enum class BlendOp : uint8_t { Add, Subtract, ReverseSubtract };
    struct BlendDesc
    {
        bool enabled = false;
        BlendOp op = BlendOp::Add;
        BlendFactor src = BlendFactor::One, dst = BlendFactor::Zero;
        uint8_t writeMask = 0xF; // bit 0 red .. bit 3 alpha
        uint8_t passes = 1;      // the renderer draws this many times (not part of the GPU state)
    };

    struct PipelineDesc
    {
        std::string vertex, fragment; // shader function names
        Format color = Format::RGBA8; // Invalid: no colour attachment
        Format depth = Format::Invalid;
        VertexLayout layout = VertexLayout::None;
        bool specialized = false;
        Specialization constants{};
        BlendDesc blend;
    };
    class Pipeline { public: virtual ~Pipeline() = default; };
    using PipelineRef = std::shared_ptr<Pipeline>;

    enum class Load : uint8_t { Load, Clear, DontCare };
    struct PassDesc
    {
        TextureRef color; // may be empty (depth only)
        Load colorLoad = Load::Load;
        TextureRef depth;
        Load depthLoad = Load::Load;
        float clearDepth = 0.0f;
        // The render area: this many rows from the top (0: the whole attachment). Nothing below them is loaded,
        // drawn or stored, which on tiled GPUs saves moving the unused rows of an attachment in and out of memory.
        uint32_t rows = 0;
    };

    enum class Primitive : uint8_t { Point, Line, Triangle };

    class RenderEncoder
    {
    public:
        virtual ~RenderEncoder() = default;
        virtual void setPipeline(const PipelineRef &pipeline) = 0;
        virtual void setDepthState(const DepthStateRef &state) = 0;
        virtual void setScissor(uint32_t x, uint32_t y, uint32_t width, uint32_t height) = 0;
        virtual void setVertexBuffer(const BufferRef &buffer, size_t offset) = 0;
        // Uniform data, copied when called (slot 1 in the shaders, for both stages).
        virtual void setVertexBytes(const void *data, size_t size) = 0;
        virtual void setFragmentBytes(const void *data, size_t size) = 0;
        virtual void setFragmentTexture(const TextureRef &texture, uint32_t index) = 0;
        virtual void setFragmentSampler(const SamplerRef &sampler, uint32_t index) = 0;
        virtual void draw(Primitive primitive, uint32_t first, uint32_t count) = 0;
        virtual void end() = 0;
    };

    class BlitEncoder
    {
    public:
        virtual ~BlitEncoder() = default;
        virtual void copyTexture(const TextureRef &from, uint32_t sx, uint32_t sy, uint32_t width, uint32_t height, const TextureRef &to, uint32_t dx, uint32_t dy) = 0;
        virtual void copyBufferToTexture(const BufferRef &from, size_t offset, uint32_t rowBytes, uint32_t width, uint32_t height, const TextureRef &to, uint32_t dx, uint32_t dy) = 0;
        virtual void end() = 0;
    };

    // A window's picture: a texture to draw into this frame, then presented.
    class Drawable
    {
    public:
        virtual ~Drawable() = default;
        TextureRef texture;
        // Called with the time it reached the screen (seconds, the host's monotonic clock; 0 if it never did).
        virtual void onPresented(std::function<void(double)> handler) = 0;
    };
    using DrawableRef = std::shared_ptr<Drawable>;

    class CommandBuffer
    {
    public:
        virtual ~CommandBuffer() = default;
        virtual std::unique_ptr<RenderEncoder> renderPass(const PassDesc &pass) = 0;
        virtual std::unique_ptr<BlitEncoder> blit() = 0;
        // Called once the GPU finished this buffer, with its GPU start and end times (seconds).
        virtual void onCompleted(std::function<void(double, double)> handler) = 0;
        virtual void present(const DrawableRef &drawable) = 0;
        virtual void commit() = 0;
        virtual void waitUntilCompleted() = 0;
    };
    using CommandBufferRef = std::shared_ptr<CommandBuffer>;

    class Swapchain
    {
    public:
        virtual ~Swapchain() = default;
        // The window's size in pixels (0 when unknown).
        virtual void pixelSize(uint32_t &width, uint32_t &height) = 0;
        virtual DrawableRef nextDrawable(uint32_t width, uint32_t height) = 0;
        // Hides the picture (the in-game menu, drawn in the window underneath, shows through) or shows it again.
        virtual void setVisible(bool visible) = 0;
    };

    class Device
    {
    public:
        virtual ~Device() = default;
        virtual std::string name() const = 0;
        virtual bool supportsBC() const = 0;
        // True when the shader's reads of the pixel it draws are expensive (they need barriers) and the GPU can blend
        // with two source outputs: the renderer then blends in fixed function wherever the GS formula allows.
        virtual bool prefersFixedBlend() const = 0;

        virtual TextureRef newTexture(const TextureDesc &desc) = 0;
        // Writes from the CPU right away (the texture must not be in use by queued work).
        virtual void replaceRegion(const TextureRef &texture, uint32_t level, uint32_t x, uint32_t y, uint32_t width, uint32_t height, const void *data, uint32_t rowBytes) = 0;
        // Reads back (Shared storage; the work that wrote it must have completed).
        virtual void getBytes(const TextureRef &texture, uint32_t x, uint32_t y, uint32_t width, uint32_t height, void *data, uint32_t rowBytes) = 0;
        virtual BufferRef newBuffer(size_t size) = 0;

        virtual SamplerRef sampler(const SamplerDesc &desc) = 0;
        virtual DepthStateRef depthState(const DepthDesc &desc) = 0;
        // Compiled now; nullptr on failure (the error goes to stderr).
        virtual PipelineRef pipeline(const PipelineDesc &desc) = 0;
        // Compiled in the background; `ready` gets it (or nullptr).
        virtual void pipelineAsync(const PipelineDesc &desc, std::function<void(PipelineRef)> ready) = 0;

        virtual CommandBufferRef commandBuffer() = 0;
        // The renderer's own window layer/surface over `window` (NSWindow* / HWND).
        virtual std::unique_ptr<Swapchain> attachWindow(void *window) = 0;
    };

    struct ShaderOptions
    {
        bool trivial = false, hwBilinear = false, noDownfilter = false, generic = false;
    };
    std::unique_ptr<Device> createMetalDevice(const ShaderOptions &options);
    std::unique_ptr<Device> createVulkanDevice(const ShaderOptions &options);
}
