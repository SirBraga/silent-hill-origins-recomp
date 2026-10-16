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

// Function: sub_002B3020
// Address: 0x2b3020 - 0x2b3260
void sub_002B3020_0x2b3020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3020_0x2b3020");
#endif

    ctx->pc = 0x2b3020u;

    // 0x2b3020: 0xc4a40018  lwc1        $f4, 0x18($a1)
    ctx->pc = 0x2b3020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b3024: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b3024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b3028: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x2b3028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b302c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2b302cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3030: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x2b3030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3034: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2b3034u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2b3038: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b3038u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b303c: 0xe7a4004c  swc1        $f4, 0x4C($sp)
    ctx->pc = 0x2b303cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2b3040: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2b3040u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2b3044: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x2b3044u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b3048: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2b3048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2b304c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2b304cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2b3050: 0x460210c2  mul.s       $f3, $f2, $f2
    ctx->pc = 0x2b3050u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2b3054: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b3054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b3058: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2b3058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b305c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b305cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b3060: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x2b3060u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b3064: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x2b3064u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b3068: 0x46010982  mul.s       $f6, $f1, $f1
    ctx->pc = 0x2b3068u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b306c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2b306cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2b3070: 0x46012242  mul.s       $f9, $f4, $f1
    ctx->pc = 0x2b3070u;
    ctx->f[9] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2b3074: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2b3074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2b3078: 0x460101c2  mul.s       $f7, $f0, $f1
    ctx->pc = 0x2b3078u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b307c: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x2b307cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2b3080: 0x46022202  mul.s       $f8, $f4, $f2
    ctx->pc = 0x2b3080u;
    ctx->f[8] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2b3084: 0xe7a60058  swc1        $f6, 0x58($sp)
    ctx->pc = 0x2b3084u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2b3088: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b3088u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b308c: 0xe7a90078  swc1        $f9, 0x78($sp)
    ctx->pc = 0x2b308cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2b3090: 0x46051ac0  add.s       $f11, $f3, $f5
    ctx->pc = 0x2b3090u;
    ctx->f[11] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2b3094: 0xe7a70060  swc1        $f7, 0x60($sp)
    ctx->pc = 0x2b3094u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b3098: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2b3098u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b309c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2b309cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x2b30a0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2b30a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b30a4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2b30a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2b30a8: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x2b30a8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x2b30ac: 0xe7a80070  swc1        $f8, 0x70($sp)
    ctx->pc = 0x2b30acu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2b30b0: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x2b30b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x2b30b4: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x2b30b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2b30b8: 0x46040a80  add.s       $f10, $f1, $f4
    ctx->pc = 0x2b30b8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2b30bc: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x2b30bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2b30c0: 0x46091181  sub.s       $f6, $f2, $f9
    ctx->pc = 0x2b30c0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[9]);
    // 0x2b30c4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2b30c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2b30c8: 0x46083b01  sub.s       $f12, $f7, $f8
    ctx->pc = 0x2b30c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
    // 0x2b30cc: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x2b30ccu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x2b30d0: 0x460b5ac0  add.s       $f11, $f11, $f11
    ctx->pc = 0x2b30d0u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[11]);
    // 0x2b30d4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2b30d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x2b30d8: 0x46091080  add.s       $f2, $f2, $f9
    ctx->pc = 0x2b30d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[9]);
    // 0x2b30dc: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2b30dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2b30e0: 0x460839c0  add.s       $f7, $f7, $f8
    ctx->pc = 0x2b30e0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x2b30e4: 0x460b6ac1  sub.s       $f11, $f13, $f11
    ctx->pc = 0x2b30e4u;
    ctx->f[11] = FPU_SUB_S(ctx->f[13], ctx->f[11]);
    // 0x2b30e8: 0x46056941  sub.s       $f5, $f13, $f5
    ctx->pc = 0x2b30e8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[13], ctx->f[5]);
    // 0x2b30ec: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2b30ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2b30f0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b30f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2b30f4: 0xe7ab0028  swc1        $f11, 0x28($sp)
    ctx->pc = 0x2b30f4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b30f8: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x2b30f8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x2b30fc: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x2b30fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b3100: 0x46036b41  sub.s       $f13, $f13, $f3
    ctx->pc = 0x2b3100u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[3]);
    // 0x2b3104: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2b3104u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b3108: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x2b3108u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x2b310c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2b310cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b3110: 0x460a5280  add.s       $f10, $f10, $f10
    ctx->pc = 0x2b3110u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[10]);
    // 0x2b3114: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x2b3114u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b3118: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2b3118u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x2b311c: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x2b311cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b3120: 0xe7a70018  swc1        $f7, 0x18($sp)
    ctx->pc = 0x2b3120u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b3124: 0xe7aa0020  swc1        $f10, 0x20($sp)
    ctx->pc = 0x2b3124u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b3128: 0xe7ac0024  swc1        $f12, 0x24($sp)
    ctx->pc = 0x2b3128u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2b312c: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x2b312cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2b3130: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x2b3130u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2b3134: 0xc4a90000  lwc1        $f9, 0x0($a1)
    ctx->pc = 0x2b3134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2b3138: 0xc4ae0004  lwc1        $f14, 0x4($a1)
    ctx->pc = 0x2b3138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2b313c: 0x46010a02  mul.s       $f8, $f1, $f1
    ctx->pc = 0x2b313cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b3140: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x2b3140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x2b3144: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2b3144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b3148: 0x460e2102  mul.s       $f4, $f4, $f14
    ctx->pc = 0x2b3148u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[14]);
    // 0x2b314c: 0x46034202  mul.s       $f8, $f8, $f3
    ctx->pc = 0x2b314cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x2b3150: 0x46062b82  mul.s       $f14, $f5, $f6
    ctx->pc = 0x2b3150u;
    ctx->f[14] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2b3154: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2b3154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2b3158: 0x460d1242  mul.s       $f9, $f2, $f13
    ctx->pc = 0x2b3158u;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x2b315c: 0x46070bc2  mul.s       $f15, $f1, $f7
    ctx->pc = 0x2b315cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2b3160: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x2b3160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x2b3164: 0x460a2942  mul.s       $f5, $f5, $f10
    ctx->pc = 0x2b3164u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x2b3168: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x2b3168u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x2b316c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2b316cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b3170: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x2b3170u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x2b3174: 0x46063102  mul.s       $f4, $f6, $f6
    ctx->pc = 0x2b3174u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2b3178: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2b3178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b317c: 0x460d6c42  mul.s       $f17, $f13, $f13
    ctx->pc = 0x2b317cu;
    ctx->f[17] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2b3180: 0xc4a80004  lwc1        $f8, 0x4($a1)
    ctx->pc = 0x2b3180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2b3184: 0x46073c02  mul.s       $f16, $f7, $f7
    ctx->pc = 0x2b3184u;
    ctx->f[16] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2b3188: 0x46037382  mul.s       $f14, $f14, $f3
    ctx->pc = 0x2b3188u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[3]);
    // 0x2b318c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2b318cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3190: 0x46084a42  mul.s       $f9, $f9, $f8
    ctx->pc = 0x2b3190u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x2b3194: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x2b3194u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x2b3198: 0x460a3182  mul.s       $f6, $f6, $f10
    ctx->pc = 0x2b3198u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x2b319c: 0x46097380  add.s       $f14, $f14, $f9
    ctx->pc = 0x2b319cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[9]);
    // 0x2b31a0: 0x460c6b42  mul.s       $f13, $f13, $f12
    ctx->pc = 0x2b31a0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[12]);
    // 0x2b31a4: 0x460b39c2  mul.s       $f7, $f7, $f11
    ctx->pc = 0x2b31a4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[11]);
    // 0x2b31a8: 0x460f7380  add.s       $f14, $f14, $f15
    ctx->pc = 0x2b31a8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[15]);
    // 0x2b31ac: 0x460a5282  mul.s       $f10, $f10, $f10
    ctx->pc = 0x2b31acu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x2b31b0: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x2b31b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2b31b4: 0xe48e0004  swc1        $f14, 0x4($a0)
    ctx->pc = 0x2b31b4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b31b8: 0x460b5ac2  mul.s       $f11, $f11, $f11
    ctx->pc = 0x2b31b8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x2b31bc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b31bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b31c0: 0xc4a80004  lwc1        $f8, 0x4($a1)
    ctx->pc = 0x2b31c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2b31c4: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2b31c4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2b31c8: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2b31c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b31cc: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x2b31ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x2b31d0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2b31d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2b31d4: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x2b31d4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x2b31d8: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x2b31d8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2b31dc: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x2b31dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b31e0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b31e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b31e4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2b31e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b31e8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2b31e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b31ec: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2b31ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b31f0: 0x46028c42  mul.s       $f17, $f17, $f2
    ctx->pc = 0x2b31f0u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[2]);
    // 0x2b31f4: 0x46018402  mul.s       $f16, $f16, $f1
    ctx->pc = 0x2b31f4u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x2b31f8: 0x46112100  add.s       $f4, $f4, $f17
    ctx->pc = 0x2b31f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[17]);
    // 0x2b31fc: 0x46102100  add.s       $f4, $f4, $f16
    ctx->pc = 0x2b31fcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[16]);
    // 0x2b3200: 0xe4840010  swc1        $f4, 0x10($a0)
    ctx->pc = 0x2b3200u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b3204: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b3204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3208: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2b3208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b320c: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2b320cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2b3210: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2b3210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3214: 0x46026b42  mul.s       $f13, $f13, $f2
    ctx->pc = 0x2b3214u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x2b3218: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x2b3218u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2b321c: 0x460d3180  add.s       $f6, $f6, $f13
    ctx->pc = 0x2b321cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[13]);
    // 0x2b3220: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x2b3220u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x2b3224: 0xe4860014  swc1        $f6, 0x14($a0)
    ctx->pc = 0x2b3224u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2b3228: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b3228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b322c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2b322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3230: 0x46005282  mul.s       $f10, $f10, $f0
    ctx->pc = 0x2b3230u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2b3234: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2b3234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b3238: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2b3238u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2b323c: 0xe486001c  swc1        $f6, 0x1C($a0)
    ctx->pc = 0x2b323cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2b3240: 0x46025ac2  mul.s       $f11, $f11, $f2
    ctx->pc = 0x2b3240u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x2b3244: 0xe48e000c  swc1        $f14, 0xC($a0)
    ctx->pc = 0x2b3244u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2b3248: 0xe4850018  swc1        $f5, 0x18($a0)
    ctx->pc = 0x2b3248u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2b324c: 0x460c5280  add.s       $f10, $f10, $f12
    ctx->pc = 0x2b324cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[12]);
    // 0x2b3250: 0x460b5280  add.s       $f10, $f10, $f11
    ctx->pc = 0x2b3250u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[11]);
    // 0x2b3254: 0xe48a0020  swc1        $f10, 0x20($a0)
    ctx->pc = 0x2b3254u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2b3258: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3258u;
        // 0x2b325c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3260u;
}
