// Metal implementation of gpu.h (macOS). The shaders are MSL (gs_shaders_msl.inc); the fragment shaders read the
// pixel they write ([[color(0)]], programmable blending on Apple GPUs).
#import <Cocoa/Cocoa.h>
#import <Metal/Metal.h>
#import <QuartzCore/CAMetalLayer.h>

#include "gpu.h"

#include <cstdio>
#include <cstdlib>
#include <map>
#include <mutex>
#include <unordered_map>

// Sits above the window's own content and lets every event through to it.
@interface BlackNativeGSView : NSView
@end
@implementation BlackNativeGSView
- (NSView *)hitTest:(NSPoint)point
{
    (void)point;
    return nil;
}
@end

namespace gpu
{
    namespace
    {
        const char *const kShaderSource =
#include "gs_shaders_msl.inc"
            ;

        MTLPixelFormat toMetal(Format format)
        {
            switch (format)
            {
            case Format::RGBA8: return MTLPixelFormatRGBA8Unorm;
            case Format::BGRA8: return MTLPixelFormatBGRA8Unorm;
            case Format::Depth32F: return MTLPixelFormatDepth32Float;
            case Format::BC1: return MTLPixelFormatBC1_RGBA;
            case Format::BC3: return MTLPixelFormatBC3_RGBA;
            default: return MTLPixelFormatInvalid;
            }
        }

        class MetalTexture final : public Texture
        {
        public:
            id<MTLTexture> texture = nil;
        };
        id<MTLTexture> mtl(const TextureRef &t) { return t ? static_cast<MetalTexture *>(t.get())->texture : nil; }
        TextureRef wrap(id<MTLTexture> texture, Format format)
        {
            if (!texture)
                return nullptr;
            auto out = std::make_shared<MetalTexture>();
            out->texture = texture;
            out->width = uint32_t(texture.width);
            out->height = uint32_t(texture.height);
            out->levels = uint32_t(texture.mipmapLevelCount);
            out->format = format;
            return out;
        }

        class MetalBuffer final : public Buffer
        {
        public:
            id<MTLBuffer> buffer = nil;
        };
        class MetalSampler final : public Sampler
        {
        public:
            id<MTLSamplerState> state = nil;
        };
        class MetalDepthState final : public DepthState
        {
        public:
            id<MTLDepthStencilState> state = nil;
        };
        class MetalPipeline final : public Pipeline
        {
        public:
            id<MTLRenderPipelineState> state = nil;
        };

        class MetalRenderEncoder final : public RenderEncoder
        {
        public:
            id<MTLRenderCommandEncoder> encoder = nil;
            void setPipeline(const PipelineRef &p) override { [encoder setRenderPipelineState:static_cast<MetalPipeline *>(p.get())->state]; }
            void setDepthState(const DepthStateRef &s) override { [encoder setDepthStencilState:static_cast<MetalDepthState *>(s.get())->state]; }
            NSUInteger areaWidth = 0, areaHeight = 0; // the render area: the scissor must stay within it
            void setScissor(uint32_t x, uint32_t y, uint32_t w, uint32_t h) override
            {
                NSUInteger sx = x, sy = y, sw = w, sh = h;
                if (areaWidth != 0u)
                {
                    sx = std::min<NSUInteger>(sx, areaWidth);
                    sy = std::min<NSUInteger>(sy, areaHeight);
                    sw = std::min<NSUInteger>(sw, areaWidth - sx);
                    sh = std::min<NSUInteger>(sh, areaHeight - sy);
                }
                [encoder setScissorRect:(MTLScissorRect){sx, sy, sw, sh}];
            }
            void setVertexBuffer(const BufferRef &b, size_t offset) override { [encoder setVertexBuffer:static_cast<MetalBuffer *>(b.get())->buffer offset:offset atIndex:0]; }
            void setVertexBytes(const void *data, size_t size) override { [encoder setVertexBytes:data length:size atIndex:1]; }
            void setFragmentBytes(const void *data, size_t size) override { [encoder setFragmentBytes:data length:size atIndex:1]; }
            void setFragmentTexture(const TextureRef &t, uint32_t index) override { [encoder setFragmentTexture:mtl(t) atIndex:index]; }
            void setFragmentSampler(const SamplerRef &s, uint32_t index) override { [encoder setFragmentSamplerState:static_cast<MetalSampler *>(s.get())->state atIndex:index]; }
            void draw(Primitive primitive, uint32_t first, uint32_t count) override
            {
                const MTLPrimitiveType type = primitive == Primitive::Point ? MTLPrimitiveTypePoint : primitive == Primitive::Line ? MTLPrimitiveTypeLine : MTLPrimitiveTypeTriangle;
                [encoder drawPrimitives:type vertexStart:first vertexCount:count];
            }
            void end() override
            {
                [encoder endEncoding];
                encoder = nil;
            }
        };

        class MetalBlitEncoder final : public BlitEncoder
        {
        public:
            id<MTLBlitCommandEncoder> encoder = nil;
            void copyTexture(const TextureRef &from, uint32_t sx, uint32_t sy, uint32_t w, uint32_t h, const TextureRef &to, uint32_t dx, uint32_t dy) override
            {
                [encoder copyFromTexture:mtl(from) sourceSlice:0 sourceLevel:0 sourceOrigin:MTLOriginMake(sx, sy, 0) sourceSize:MTLSizeMake(w, h, 1)
                               toTexture:mtl(to) destinationSlice:0 destinationLevel:0 destinationOrigin:MTLOriginMake(dx, dy, 0)];
            }
            void copyBufferToTexture(const BufferRef &from, size_t offset, uint32_t rowBytes, uint32_t w, uint32_t h, const TextureRef &to, uint32_t dx, uint32_t dy) override
            {
                [encoder copyFromBuffer:static_cast<MetalBuffer *>(from.get())->buffer sourceOffset:offset sourceBytesPerRow:rowBytes sourceBytesPerImage:size_t(rowBytes) * h
                             sourceSize:MTLSizeMake(w, h, 1) toTexture:mtl(to) destinationSlice:0 destinationLevel:0 destinationOrigin:MTLOriginMake(dx, dy, 0)];
            }
            void end() override
            {
                [encoder endEncoding];
                encoder = nil;
            }
        };

        class MetalDrawable final : public Drawable
        {
        public:
            id<CAMetalDrawable> drawable = nil;
            void onPresented(std::function<void(double)> handler) override
            {
                [drawable addPresentedHandler:^(id<MTLDrawable> shown) { handler(shown.presentedTime); }];
            }
        };

        class MetalCommandBuffer final : public CommandBuffer
        {
        public:
            id<MTLCommandBuffer> buffer = nil;
            std::unique_ptr<RenderEncoder> renderPass(const PassDesc &pass) override
            {
                MTLRenderPassDescriptor *descriptor = [MTLRenderPassDescriptor renderPassDescriptor];
                const auto load = [](Load l) { return l == Load::Load ? MTLLoadActionLoad : l == Load::Clear ? MTLLoadActionClear : MTLLoadActionDontCare; };
                if (pass.color)
                {
                    descriptor.colorAttachments[0].texture = mtl(pass.color);
                    descriptor.colorAttachments[0].loadAction = load(pass.colorLoad);
                    descriptor.colorAttachments[0].storeAction = MTLStoreActionStore;
                }
                if (pass.depth)
                {
                    descriptor.depthAttachment.texture = mtl(pass.depth);
                    descriptor.depthAttachment.loadAction = load(pass.depthLoad);
                    descriptor.depthAttachment.clearDepth = pass.clearDepth;
                    descriptor.depthAttachment.storeAction = MTLStoreActionStore;
                }
                const TextureRef &sized = pass.color ? pass.color : pass.depth;
                auto encoder = std::make_unique<MetalRenderEncoder>();
                if (sized)
                {
                    encoder->areaWidth = mtl(sized).width;
                    encoder->areaHeight = mtl(sized).height;
                    if (pass.rows != 0u && pass.rows < encoder->areaHeight)
                    {
                        descriptor.renderTargetWidth = encoder->areaWidth;
                        descriptor.renderTargetHeight = pass.rows;
                        encoder->areaHeight = pass.rows;
                    }
                }
                encoder->encoder = [buffer renderCommandEncoderWithDescriptor:descriptor];
                // The viewport stays the whole attachment when the render area is smaller (see the Vulkan backend).
                if (sized && encoder->areaHeight < mtl(sized).height)
                    [encoder->encoder setViewport:(MTLViewport){0.0, 0.0, double(mtl(sized).width), double(mtl(sized).height), 0.0, 1.0}];
                [encoder->encoder setCullMode:MTLCullModeNone];
                return encoder;
            }
            std::unique_ptr<BlitEncoder> blit() override
            {
                auto encoder = std::make_unique<MetalBlitEncoder>();
                encoder->encoder = [buffer blitCommandEncoder];
                return encoder;
            }
            void onCompleted(std::function<void(double, double)> handler) override
            {
                [buffer addCompletedHandler:^(id<MTLCommandBuffer> done) { handler(done.GPUStartTime, done.GPUEndTime); }];
            }
            void present(const DrawableRef &drawable) override { [buffer presentDrawable:static_cast<MetalDrawable *>(drawable.get())->drawable]; }
            void commit() override { [buffer commit]; }
            void waitUntilCompleted() override { [buffer waitUntilCompleted]; }
        };

        class MetalSwapchain final : public Swapchain
        {
        public:
            BlackNativeGSView *view = nil;
            CAMetalLayer *layer = nil;
            void pixelSize(uint32_t &width, uint32_t &height) override
            {
                width = uint32_t(layer.bounds.size.width * layer.contentsScale);
                height = uint32_t(layer.bounds.size.height * layer.contentsScale);
            }
            void setVisible(bool visible) override
            {
                BlackNativeGSView *v = view;
                dispatch_async(dispatch_get_main_queue(), ^{ v.hidden = !visible; });
            }
            DrawableRef nextDrawable(uint32_t width, uint32_t height) override
            {
                layer.drawableSize = CGSizeMake(width, height);
                id<CAMetalDrawable> next = [layer nextDrawable];
                if (!next)
                    return nullptr;
                auto out = std::make_shared<MetalDrawable>();
                out->drawable = next;
                out->texture = wrap(next.texture, Format::BGRA8);
                return out;
            }
        };

        class MetalDevice final : public Device
        {
        public:
            id<MTLDevice> device = nil;
            id<MTLCommandQueue> queue = nil;
            id<MTLLibrary> library = nil, specializedLibrary = nil;
            std::map<uint32_t, SamplerRef> samplers;
            std::map<uint32_t, DepthStateRef> depthStates;
            std::mutex mutex;

            bool initialize(const ShaderOptions &options)
            {
                device = MTLCreateSystemDefaultDevice();
                if (!device)
                    return false;
                queue = [device newCommandQueue];
                NSError *error = nil;
                NSMutableDictionary *macros = [NSMutableDictionary dictionary];
                if (options.hwBilinear)
                    macros[@"GS_HW_BILINEAR"] = @1;
                if (options.noDownfilter)
                    macros[@"GS_NO_DOWNFILTER"] = @1;
                MTLCompileOptions *compileOptions = [MTLCompileOptions new];
                compileOptions.preprocessorMacros = options.trivial ? @{@"GS_TRIVIAL" : @1} : macros;
                library = [device newLibraryWithSource:[NSString stringWithUTF8String:kShaderSource] options:compileOptions error:&error];
                if (!library)
                {
                    std::fprintf(stderr, "[native-gs] shader: %s\n", error.localizedDescription.UTF8String);
                    return false;
                }
                if (!options.generic && !options.trivial)
                {
                    MTLCompileOptions *specializedOptions = [MTLCompileOptions new];
                    NSMutableDictionary *specialized = [macros mutableCopy];
                    specialized[@"GS_SPECIALIZED"] = @1;
                    specializedOptions.preprocessorMacros = specialized;
                    specializedLibrary = [device newLibraryWithSource:[NSString stringWithUTF8String:kShaderSource] options:specializedOptions error:&error];
                    if (!specializedLibrary)
                        std::fprintf(stderr, "[native-gs] specialized shader: %s\n", error.localizedDescription.UTF8String);
                }
                return true;
            }

            std::string name() const override { return device.name.UTF8String; }
            bool supportsBC() const override { return [device supportsBCTextureCompression]; }
            // Apple GPUs read the target in order at no cost; PS2X_GS_FIXED_BLEND=1 forces fixed blending (to compare).
            bool prefersFixedBlend() const override { static const bool forced = std::getenv("PS2X_GS_FIXED_BLEND") != nullptr; return forced; }

            TextureRef newTexture(const TextureDesc &desc) override
            {
                MTLTextureDescriptor *descriptor = [MTLTextureDescriptor texture2DDescriptorWithPixelFormat:toMetal(desc.format) width:desc.width height:desc.height mipmapped:NO];
                descriptor.mipmapLevelCount = desc.levels;
                descriptor.usage = ((desc.usage & ShaderRead) ? MTLTextureUsageShaderRead : 0) | ((desc.usage & RenderTarget) ? MTLTextureUsageRenderTarget : 0);
                if (desc.storage != Storage::Default)
                    descriptor.storageMode = desc.storage == Storage::Shared ? MTLStorageModeShared : MTLStorageModePrivate;
                return wrap([device newTextureWithDescriptor:descriptor], desc.format);
            }
            void replaceRegion(const TextureRef &t, uint32_t level, uint32_t x, uint32_t y, uint32_t w, uint32_t h, const void *data, uint32_t rowBytes) override
            {
                [mtl(t) replaceRegion:MTLRegionMake2D(x, y, w, h) mipmapLevel:level slice:0 withBytes:data bytesPerRow:rowBytes bytesPerImage:0];
            }
            void getBytes(const TextureRef &t, uint32_t x, uint32_t y, uint32_t w, uint32_t h, void *data, uint32_t rowBytes) override
            {
                [mtl(t) getBytes:data bytesPerRow:rowBytes fromRegion:MTLRegionMake2D(x, y, w, h) mipmapLevel:0];
            }
            BufferRef newBuffer(size_t size) override
            {
                auto out = std::make_shared<MetalBuffer>();
                out->buffer = [device newBufferWithLength:size options:MTLResourceStorageModeShared];
                if (!out->buffer)
                    return nullptr;
                out->contents = out->buffer.contents;
                out->size = size;
                return out;
            }
            SamplerRef sampler(const SamplerDesc &desc) override
            {
                const uint32_t key = (desc.linear ? 1u : 0u) | (desc.clampU ? 2u : 0u) | (desc.clampV ? 4u : 0u);
                std::lock_guard<std::mutex> lock(mutex);
                SamplerRef &entry = samplers[key];
                if (!entry)
                {
                    MTLSamplerDescriptor *descriptor = [MTLSamplerDescriptor new];
                    descriptor.minFilter = descriptor.magFilter = desc.linear ? MTLSamplerMinMagFilterLinear : MTLSamplerMinMagFilterNearest;
                    descriptor.mipFilter = MTLSamplerMipFilterLinear;
                    if (desc.linear)
                        descriptor.maxAnisotropy = 8;
                    descriptor.sAddressMode = desc.clampU ? MTLSamplerAddressModeClampToEdge : MTLSamplerAddressModeRepeat;
                    descriptor.tAddressMode = desc.clampV ? MTLSamplerAddressModeClampToEdge : MTLSamplerAddressModeRepeat;
                    auto s = std::make_shared<MetalSampler>();
                    s->state = [device newSamplerStateWithDescriptor:descriptor];
                    entry = s;
                }
                return entry;
            }
            DepthStateRef depthState(const DepthDesc &desc) override
            {
                const uint32_t key = uint32_t(desc.compare) | (desc.write ? 4u : 0u);
                std::lock_guard<std::mutex> lock(mutex);
                DepthStateRef &entry = depthStates[key];
                if (!entry)
                {
                    MTLDepthStencilDescriptor *descriptor = [MTLDepthStencilDescriptor new];
                    descriptor.depthCompareFunction = desc.compare == Compare::Always ? MTLCompareFunctionAlways : desc.compare == Compare::Greater ? MTLCompareFunctionGreater : MTLCompareFunctionGreaterEqual;
                    descriptor.depthWriteEnabled = desc.write;
                    auto s = std::make_shared<MetalDepthState>();
                    s->state = [device newDepthStencilStateWithDescriptor:descriptor];
                    entry = s;
                }
                return entry;
            }

            MTLRenderPipelineDescriptor *describe(const PipelineDesc &desc)
            {
                MTLRenderPipelineDescriptor *descriptor = [MTLRenderPipelineDescriptor new];
                descriptor.vertexFunction = [library newFunctionWithName:[NSString stringWithUTF8String:desc.vertex.c_str()]];
                if (desc.specialized)
                {
                    if (!specializedLibrary)
                        return nil;
                    MTLFunctionConstantValues *constants = [MTLFunctionConstantValues new];
                    [constants setConstantValues:desc.constants.data() type:MTLDataTypeUInt withRange:NSMakeRange(0, desc.constants.size())];
                    NSError *error = nil;
                    descriptor.fragmentFunction = [specializedLibrary newFunctionWithName:[NSString stringWithUTF8String:desc.fragment.c_str()] constantValues:constants error:&error];
                }
                else
                    descriptor.fragmentFunction = [library newFunctionWithName:[NSString stringWithUTF8String:desc.fragment.c_str()]];
                if (!descriptor.vertexFunction || !descriptor.fragmentFunction)
                    return nil;
                descriptor.colorAttachments[0].pixelFormat = toMetal(desc.color);
                if (desc.color != Format::Invalid)
                {
                    const auto factor = [](BlendFactor f) { return f == BlendFactor::Zero ? MTLBlendFactorZero : f == BlendFactor::One ? MTLBlendFactorOne : f == BlendFactor::Src1Alpha ? MTLBlendFactorSource1Alpha : f == BlendFactor::DstAlpha ? MTLBlendFactorDestinationAlpha : MTLBlendFactorOneMinusSource1Alpha; };
                    MTLRenderPipelineColorAttachmentDescriptor *c = descriptor.colorAttachments[0];
                    c.writeMask = ((desc.blend.writeMask & 1) ? MTLColorWriteMaskRed : 0) | ((desc.blend.writeMask & 2) ? MTLColorWriteMaskGreen : 0) |
                                  ((desc.blend.writeMask & 4) ? MTLColorWriteMaskBlue : 0) | ((desc.blend.writeMask & 8) ? MTLColorWriteMaskAlpha : 0);
                    if (desc.blend.enabled)
                    {
                        c.blendingEnabled = YES;
                        c.rgbBlendOperation = desc.blend.op == BlendOp::Add ? MTLBlendOperationAdd : desc.blend.op == BlendOp::Subtract ? MTLBlendOperationSubtract : MTLBlendOperationReverseSubtract;
                        c.sourceRGBBlendFactor = factor(desc.blend.src);
                        c.destinationRGBBlendFactor = factor(desc.blend.dst);
                        c.alphaBlendOperation = MTLBlendOperationAdd;
                        c.sourceAlphaBlendFactor = MTLBlendFactorOne;
                        c.destinationAlphaBlendFactor = MTLBlendFactorZero;
                    }
                }
                descriptor.depthAttachmentPixelFormat = toMetal(desc.depth);
                if (desc.layout == VertexLayout::GsVertex)
                {
                    MTLVertexDescriptor *layout = [MTLVertexDescriptor vertexDescriptor];
                    layout.attributes[0].format = MTLVertexFormatFloat3;
                    layout.attributes[0].offset = 0;
                    layout.attributes[1].format = MTLVertexFormatUChar4;
                    layout.attributes[1].offset = 12;
                    layout.attributes[2].format = MTLVertexFormatFloat3;
                    layout.attributes[2].offset = 16;
                    layout.attributes[3].format = MTLVertexFormatFloat;
                    layout.attributes[3].offset = 28;
                    layout.layouts[0].stride = 32;
                    descriptor.vertexDescriptor = layout;
                }
                return descriptor;
            }
            PipelineRef pipeline(const PipelineDesc &desc) override
            {
                MTLRenderPipelineDescriptor *descriptor = describe(desc);
                if (!descriptor)
                    return nullptr;
                NSError *error = nil;
                id<MTLRenderPipelineState> state = [device newRenderPipelineStateWithDescriptor:descriptor error:&error];
                if (!state)
                {
                    std::fprintf(stderr, "[native-gs] pipeline %s: %s\n", desc.fragment.c_str(), error.localizedDescription.UTF8String);
                    return nullptr;
                }
                auto out = std::make_shared<MetalPipeline>();
                out->state = state;
                return out;
            }
            void pipelineAsync(const PipelineDesc &desc, std::function<void(PipelineRef)> ready) override
            {
                MTLRenderPipelineDescriptor *descriptor = describe(desc);
                if (!descriptor)
                {
                    ready(nullptr);
                    return;
                }
                [device newRenderPipelineStateWithDescriptor:descriptor completionHandler:^(id<MTLRenderPipelineState> state, NSError *) {
                  if (!state)
                  {
                      ready(nullptr);
                      return;
                  }
                  auto out = std::make_shared<MetalPipeline>();
                  out->state = state;
                  ready(out);
                }];
            }

            CommandBufferRef commandBuffer() override
            {
                auto out = std::make_shared<MetalCommandBuffer>();
                out->buffer = [queue commandBuffer];
                return out;
            }

            std::unique_ptr<Swapchain> attachWindow(void *window) override
            {
                NSWindow *nsWindow = (__bridge NSWindow *)window;
                NSView *content = nsWindow.contentView;
                if (!content)
                    return nullptr;
                auto out = std::make_unique<MetalSwapchain>();
                out->view = [[BlackNativeGSView alloc] initWithFrame:content.bounds];
                out->view.autoresizingMask = NSViewWidthSizable | NSViewHeightSizable;
                // The Metal layer is a sublayer of the view's own layer: there its gravity decides how the picture fills
                // the window (stretched to the window's shape: 4:3, or 16:9 in the wide mode).
                out->view.layer = [CALayer layer];
                out->view.wantsLayer = YES;
                out->layer = [CAMetalLayer layer];
                out->layer.device = device;
                out->layer.pixelFormat = MTLPixelFormatBGRA8Unorm;
                out->layer.frame = out->view.layer.bounds;
                out->layer.autoresizingMask = kCALayerWidthSizable | kCALayerHeightSizable;
                out->layer.contentsScale = nsWindow.backingScaleFactor;
                out->layer.framebufferOnly = YES;
                out->layer.contentsGravity = kCAGravityResize;
                [out->view.layer addSublayer:out->layer];
                [content addSubview:out->view positioned:NSWindowAbove relativeTo:nil];
                return out;
            }
        };
    }

    std::unique_ptr<Device> createMetalDevice(const ShaderOptions &options)
    {
        auto device = std::make_unique<MetalDevice>();
        if (!device->initialize(options))
            return nullptr;
        return device;
    }
}
