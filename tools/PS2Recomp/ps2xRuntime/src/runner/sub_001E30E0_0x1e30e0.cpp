#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E30E0
// Address: 0x1e30e0 - 0x1e3260
void sub_001E30E0_0x1e30e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E30E0_0x1e30e0");
#endif

    ctx->pc = 0x1e30e0u;

    // 0x1e30e0: 0xc4a50014  lwc1        $f5, 0x14($a1)
    ctx->pc = 0x1e30e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e30e4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1e30e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e30e8: 0xc4c4000c  lwc1        $f4, 0xC($a2)
    ctx->pc = 0x1e30e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e30ec: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1e30ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e30f0: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x1e30f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e30f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e30f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e30f8: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x1e30f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e30fc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1e30fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1e3100: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x1e3100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3104: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x1e3104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e3108: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1e3108u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1e310c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1e310cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1e3110: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x1e3110u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1e3114: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e3114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e3118: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x1e3118u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1e311c: 0xe4850014  swc1        $f5, 0x14($a0)
    ctx->pc = 0x1e311cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1e3120: 0xc4a4000c  lwc1        $f4, 0xC($a1)
    ctx->pc = 0x1e3120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e3124: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x1e3124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3128: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x1e3128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e312c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1e312cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3130: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x1e3130u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1e3134: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e3134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e3138: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x1e3138u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1e313c: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x1e313cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1e3140: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x1e3140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3144: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x1e3144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3148: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x1e3148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e314c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1e314cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3150: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1e3150u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e3154: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e3154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e3158: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1e3158u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1e315c: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x1e315cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1e3160: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x1e3160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3164: 0xc4c5000c  lwc1        $f5, 0xC($a2)
    ctx->pc = 0x1e3164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e3168: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1e3168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e316c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1e316cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3170: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1e3170u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1e3174: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e3174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e3178: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1e3178u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1e317c: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x1e317cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1e3180: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1e3180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3184: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x1e3184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3188: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e3188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e318c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1e318cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1e3190: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x1e3190u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1e3194: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x1e3194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3198: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1e3198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e319c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e319cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e31a0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1e31a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1e31a4: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x1e31a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1e31a8: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x1e31a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e31ac: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x1e31acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e31b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e31b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e31b4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1e31b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e31b8: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x1e31b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1e31bc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1e31bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e31c0: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x1e31c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e31c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e31c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e31c8: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1e31c8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1e31cc: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x1e31ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1e31d0: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x1e31d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e31d4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1e31d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e31d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e31d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e31dc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1e31dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1e31e0: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x1e31e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1e31e4: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1e31e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e31e8: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x1e31e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e31ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e31ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e31f0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1e31f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e31f4: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x1e31f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1e31f8: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1e31f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e31fc: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x1e31fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3200: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e3200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e3204: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1e3204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1e3208: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x1e3208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e320c: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x1e320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3210: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e3210u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e3214: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x1e3214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1e3218: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1e3218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e321c: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x1e321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3220: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e3220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e3224: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1e3224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1e3228: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x1e3228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e322c: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x1e322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3230: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e3230u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e3234: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x1e3234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1e3238: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x1e3238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e323c: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x1e323cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3240: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e3240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e3244: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1e3244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1e3248: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x1e3248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e324c: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x1e324cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3250: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e3250u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e3254: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3254u;
        // 0x1e3258: 0xe481002c  swc1        $f1, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E325Cu;
    // 0x1e325c: 0x0  nop
    ctx->pc = 0x1e325cu;
    // NOP
    ctx->pc = 0x1e3260u;
}
