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

// Function: sub_002D3020
// Address: 0x2d3020 - 0x2d3460
void sub_002D3020_0x2d3020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3020_0x2d3020");
#endif

    ctx->pc = 0x2d3020u;

    // 0x2d3020: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d3020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d3024: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2d3024u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3028: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2d3028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d302c: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D302Cu;
    {
        const bool branch_taken_0x2d302c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D302Cu;
        // 0x2d3030: 0xe0702d  daddu       $t6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d302c) {
            ctx->pc = 0x2D303Cu;
            goto label_2d303c;
        }
    }
    ctx->pc = 0x2D3034u;
    // 0x2d3034: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2D3034u;
    {
        const bool branch_taken_0x2d3034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3034u;
        // 0x2d3038: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3034) {
            ctx->pc = 0x2D3220u;
            goto label_2d3220;
        }
    }
    ctx->pc = 0x2D303Cu;
label_2d303c:
    // 0x2d303c: 0x5109007a  beql        $t0, $t1, . + 4 + (0x7A << 2)
    ctx->pc = 0x2D303Cu;
    {
        const bool branch_taken_0x2d303c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        if (branch_taken_0x2d303c) {
            ctx->pc = 0x2D3040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D303Cu;
            // 0x2d3040: 0xc5010000  lwc1        $f1, 0x0($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3228u;
            goto label_2d3228;
        }
    }
    ctx->pc = 0x2D3044u;
    // 0x2d3044: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x2d3044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d3048: 0xc5270004  lwc1        $f7, 0x4($t1)
    ctx->pc = 0x2d3048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d304c: 0xc5040000  lwc1        $f4, 0x0($t0)
    ctx->pc = 0x2d304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d3050: 0xc5010010  lwc1        $f1, 0x10($t0)
    ctx->pc = 0x2d3050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3054: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x2d3054u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2d3058: 0xc5260008  lwc1        $f6, 0x8($t1)
    ctx->pc = 0x2d3058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d305c: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2d305cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2d3060: 0xc5000020  lwc1        $f0, 0x20($t0)
    ctx->pc = 0x2d3060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3064: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2d3064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2d3068: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2d3068u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2d306c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2d306cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2d3070: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x2d3070u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d3074: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x2d3074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3078: 0xc5010014  lwc1        $f1, 0x14($t0)
    ctx->pc = 0x2d3078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d307c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2d307cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2d3080: 0xc5000024  lwc1        $f0, 0x24($t0)
    ctx->pc = 0x2d3080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3084: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2d3084u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2d3088: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2d3088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2d308c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2d308cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2d3090: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d3090u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d3094: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2d3094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2d3098: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x2d3098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d309c: 0xc5050018  lwc1        $f5, 0x18($t0)
    ctx->pc = 0x2d309cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d30a0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2d30a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2d30a4: 0xc5010028  lwc1        $f1, 0x28($t0)
    ctx->pc = 0x2d30a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d30a8: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x2d30a8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x2d30ac: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x2d30acu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2d30b0: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x2d30b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x2d30b4: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x2d30b4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x2d30b8: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x2d30b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d30bc: 0xc5000030  lwc1        $f0, 0x30($t0)
    ctx->pc = 0x2d30bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d30c0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2d30c0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2d30c4: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x2d30c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d30c8: 0xc5000034  lwc1        $f0, 0x34($t0)
    ctx->pc = 0x2d30c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d30cc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d30ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d30d0: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2d30d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d30d4: 0xc5000038  lwc1        $f0, 0x38($t0)
    ctx->pc = 0x2d30d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d30d8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d30d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d30dc: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2d30dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d30e0: 0xc5240010  lwc1        $f4, 0x10($t1)
    ctx->pc = 0x2d30e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d30e4: 0xc5270014  lwc1        $f7, 0x14($t1)
    ctx->pc = 0x2d30e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d30e8: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x2d30e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d30ec: 0xc5010010  lwc1        $f1, 0x10($t0)
    ctx->pc = 0x2d30ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d30f0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2d30f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2d30f4: 0xc5260018  lwc1        $f6, 0x18($t1)
    ctx->pc = 0x2d30f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d30f8: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2d30f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2d30fc: 0xc5000020  lwc1        $f0, 0x20($t0)
    ctx->pc = 0x2d30fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3100: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2d3100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2d3104: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2d3104u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2d3108: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d3108u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d310c: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x2d310cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d3110: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x2d3110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3114: 0xc5010014  lwc1        $f1, 0x14($t0)
    ctx->pc = 0x2d3114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3118: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x2d3118u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2d311c: 0xc5000024  lwc1        $f0, 0x24($t0)
    ctx->pc = 0x2d311cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3120: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2d3120u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2d3124: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2d3124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2d3128: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2d3128u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2d312c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d312cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d3130: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2d3130u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2d3134: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x2d3134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3138: 0xc5050018  lwc1        $f5, 0x18($t0)
    ctx->pc = 0x2d3138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d313c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2d313cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2d3140: 0xc5010028  lwc1        $f1, 0x28($t0)
    ctx->pc = 0x2d3140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3144: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x2d3144u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x2d3148: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x2d3148u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2d314c: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x2d314cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x2d3150: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x2d3150u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x2d3154: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x2d3154u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2d3158: 0xc5000030  lwc1        $f0, 0x30($t0)
    ctx->pc = 0x2d3158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d315c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d315cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d3160: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2d3160u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d3164: 0xc5000034  lwc1        $f0, 0x34($t0)
    ctx->pc = 0x2d3164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3168: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d3168u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d316c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2d316cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d3170: 0xc5000038  lwc1        $f0, 0x38($t0)
    ctx->pc = 0x2d3170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3174: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2d3174u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2d3178: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x2d3178u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d317c: 0xc5250020  lwc1        $f5, 0x20($t1)
    ctx->pc = 0x2d317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d3180: 0xc5270024  lwc1        $f7, 0x24($t1)
    ctx->pc = 0x2d3180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d3184: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x2d3184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d3188: 0xc5010010  lwc1        $f1, 0x10($t0)
    ctx->pc = 0x2d3188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d318c: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x2d318cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2d3190: 0xc5260028  lwc1        $f6, 0x28($t1)
    ctx->pc = 0x2d3190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d3194: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2d3194u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2d3198: 0xc5000020  lwc1        $f0, 0x20($t0)
    ctx->pc = 0x2d3198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d319c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2d319cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2d31a0: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2d31a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2d31a4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d31a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d31a8: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x2d31a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2d31ac: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x2d31acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d31b0: 0xc5010014  lwc1        $f1, 0x14($t0)
    ctx->pc = 0x2d31b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d31b4: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2d31b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2d31b8: 0xc5000024  lwc1        $f0, 0x24($t0)
    ctx->pc = 0x2d31b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d31bc: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2d31bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2d31c0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2d31c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2d31c4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2d31c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2d31c8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d31c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d31cc: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2d31ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2d31d0: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x2d31d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d31d4: 0xc5040018  lwc1        $f4, 0x18($t0)
    ctx->pc = 0x2d31d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d31d8: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2d31d8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2d31dc: 0xc5010028  lwc1        $f1, 0x28($t0)
    ctx->pc = 0x2d31dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d31e0: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x2d31e0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x2d31e4: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x2d31e4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2d31e8: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x2d31e8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x2d31ec: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x2d31ecu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x2d31f0: 0xe7a50068  swc1        $f5, 0x68($sp)
    ctx->pc = 0x2d31f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2d31f4: 0xc5000030  lwc1        $f0, 0x30($t0)
    ctx->pc = 0x2d31f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d31f8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d31f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d31fc: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x2d31fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d3200: 0xc5000034  lwc1        $f0, 0x34($t0)
    ctx->pc = 0x2d3200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3204: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d3204u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d3208: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2d3208u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d320c: 0xc5000038  lwc1        $f0, 0x38($t0)
    ctx->pc = 0x2d320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3210: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2d3210u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2d3214: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x2d3214u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d3218: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2d3218u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d321c: 0x0  nop
    ctx->pc = 0x2d321cu;
    // NOP
label_2d3220:
    // 0x2d3220: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x2d3220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3224: 0x0  nop
    ctx->pc = 0x2d3224u;
    // NOP
label_2d3228:
    // 0x2d3228: 0x250f0010  addiu       $t7, $t0, 0x10
    ctx->pc = 0x2d3228u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2d322c: 0xc5020010  lwc1        $f2, 0x10($t0)
    ctx->pc = 0x2d322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3230: 0x25180020  addiu       $t8, $t0, 0x20
    ctx->pc = 0x2d3230u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2d3234: 0xafa80080  sw          $t0, 0x80($sp)
    ctx->pc = 0x2d3234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
    // 0x2d3238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d3238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d323c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2d323cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3240: 0xafaf0084  sw          $t7, 0x84($sp)
    ctx->pc = 0x2d3240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 15));
    // 0x2d3244: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3244u;
    {
        const bool branch_taken_0x2d3244 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D3248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3244u;
        // 0x2d3248: 0xafb80088  sw          $t8, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3244) {
            ctx->pc = 0x2D3250u;
            goto label_2d3250;
        }
    }
    ctx->pc = 0x2D324Cu;
    // 0x2d324c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2d3250:
    // 0x2d3250: 0xc5000020  lwc1        $f0, 0x20($t0)
    ctx->pc = 0x2d3250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3254: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d3254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3258: 0x0  nop
    ctx->pc = 0x2d3258u;
    // NOP
    // 0x2d325c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D325Cu;
    {
        const bool branch_taken_0x2d325c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d325c) {
            ctx->pc = 0x2D3260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D325Cu;
            // 0x2d3260: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3264u;
            goto label_2d3264;
        }
    }
    ctx->pc = 0x2D3264u;
label_2d3264:
    // 0x2d3264: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2d3264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3268: 0x0  nop
    ctx->pc = 0x2d3268u;
    // NOP
    // 0x2d326c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D326Cu;
    {
        const bool branch_taken_0x2d326c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D3270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D326Cu;
        // 0x2d3270: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d326c) {
            ctx->pc = 0x2D3278u;
            goto label_2d3278;
        }
    }
    ctx->pc = 0x2D3274u;
    // 0x2d3274: 0x34e70004  ori         $a3, $a3, 0x4
    ctx->pc = 0x2d3274u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4);
label_2d3278:
    // 0x2d3278: 0x3c0d2131  lui         $t5, 0x2131
    ctx->pc = 0x2d3278u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)8497 << 16));
    // 0x2d327c: 0x3c0c0032  lui         $t4, 0x32
    ctx->pc = 0x2d327cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)50 << 16));
    // 0x2d3280: 0x35ad2300  ori         $t5, $t5, 0x2300
    ctx->pc = 0x2d3280u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)8960);
    // 0x2d3284: 0x358c1312  ori         $t4, $t4, 0x1312
    ctx->pc = 0x2d3284u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)4882);
    // 0x2d3288: 0xed3007  srav        $a2, $t5, $a3
    ctx->pc = 0x2d3288u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 7) & 0x1F));
    // 0x2d328c: 0x27ab0080  addiu       $t3, $sp, 0x80
    ctx->pc = 0x2d328cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d3290: 0x30c60003  andi        $a2, $a2, 0x3
    ctx->pc = 0x2d3290u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x2d3294: 0xec2007  srav        $a0, $t4, $a3
    ctx->pc = 0x2d3294u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x2d3298: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2d3298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d329c: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x2d329cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2d32a0: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x2d32a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x2d32a4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2d32a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d32a8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d32a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d32ac: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2d32acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2d32b0: 0x3c0a1230  lui         $t2, 0x1230
    ctx->pc = 0x2d32b0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4656 << 16));
    // 0x2d32b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d32b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d32b8: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x2d32b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d32bc: 0x354a0321  ori         $t2, $t2, 0x321
    ctx->pc = 0x2d32bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)801);
    // 0x2d32c0: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x2d32c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x2d32c4: 0xea1007  srav        $v0, $t2, $a3
    ctx->pc = 0x2d32c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x2d32c8: 0xe5c70010  swc1        $f7, 0x10($t6)
    ctx->pc = 0x2d32c8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 16), bits); }
    // 0x2d32cc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2d32ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2d32d0: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x2d32d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x2d32d4: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x2d32d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d32d8: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2d32d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2d32dc: 0xe5c60000  swc1        $f6, 0x0($t6)
    ctx->pc = 0x2d32dcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x2d32e0: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x2d32e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d32e4: 0xc5e20004  lwc1        $f2, 0x4($t7)
    ctx->pc = 0x2d32e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d32e8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2d32e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d32ec: 0x0  nop
    ctx->pc = 0x2d32ecu;
    // NOP
    // 0x2d32f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D32F0u;
    {
        const bool branch_taken_0x2d32f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D32F0u;
        // 0x2d32f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d32f0) {
            ctx->pc = 0x2D32FCu;
            goto label_2d32fc;
        }
    }
    ctx->pc = 0x2D32F8u;
    // 0x2d32f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d32f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2d32fc:
    // 0x2d32fc: 0xc7000004  lwc1        $f0, 0x4($t8)
    ctx->pc = 0x2d32fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3300: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d3300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3304: 0x0  nop
    ctx->pc = 0x2d3304u;
    // NOP
    // 0x2d3308: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D3308u;
    {
        const bool branch_taken_0x2d3308 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3308) {
            ctx->pc = 0x2D330Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3308u;
            // 0x2d330c: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3310u;
            goto label_2d3310;
        }
    }
    ctx->pc = 0x2D3310u;
label_2d3310:
    // 0x2d3310: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2d3310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3314: 0x0  nop
    ctx->pc = 0x2d3314u;
    // NOP
    // 0x2d3318: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3318u;
    {
        const bool branch_taken_0x2d3318 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3318u;
        // 0x2d331c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3318) {
            ctx->pc = 0x2D3324u;
            goto label_2d3324;
        }
    }
    ctx->pc = 0x2D3320u;
    // 0x2d3320: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x2d3320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_2d3324:
    // 0x2d3324: 0x8d3807  srav        $a3, $t5, $a0
    ctx->pc = 0x2d3324u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 4) & 0x1F));
    // 0x2d3328: 0x8c2807  srav        $a1, $t4, $a0
    ctx->pc = 0x2d3328u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 12), GPR_U32(ctx, 4) & 0x1F));
    // 0x2d332c: 0x30e70003  andi        $a3, $a3, 0x3
    ctx->pc = 0x2d332cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x2d3330: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x2d3330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x2d3334: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2d3334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d3338: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2d3338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d333c: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2d333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2d3340: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x2d3340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x2d3344: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2d3344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3348: 0x8a2007  srav        $a0, $t2, $a0
    ctx->pc = 0x2d3348u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 4) & 0x1F));
    // 0x2d334c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d3350: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x2d3350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2d3354: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x2d3354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d3358: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x2d3358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
    // 0x2d335c: 0xe5c50014  swc1        $f5, 0x14($t6)
    ctx->pc = 0x2d335cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 20), bits); }
    // 0x2d3360: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x2d3360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
    // 0x2d3364: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2d3364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3368: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x2d3368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x2d336c: 0xe5c20004  swc1        $f2, 0x4($t6)
    ctx->pc = 0x2d336cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x2d3370: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x2d3370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d3374: 0xc5e10008  lwc1        $f1, 0x8($t7)
    ctx->pc = 0x2d3374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3378: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2d3378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d337c: 0x0  nop
    ctx->pc = 0x2d337cu;
    // NOP
    // 0x2d3380: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3380u;
    {
        const bool branch_taken_0x2d3380 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3380u;
        // 0x2d3384: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3380) {
            ctx->pc = 0x2D338Cu;
            goto label_2d338c;
        }
    }
    ctx->pc = 0x2D3388u;
    // 0x2d3388: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2d3388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2d338c:
    // 0x2d338c: 0xc7000008  lwc1        $f0, 0x8($t8)
    ctx->pc = 0x2d338cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3390: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2d3390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3394: 0x0  nop
    ctx->pc = 0x2d3394u;
    // NOP
    // 0x2d3398: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3398u;
    {
        const bool branch_taken_0x2d3398 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3398u;
        // 0x2d339c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3398) {
            ctx->pc = 0x2D33A4u;
            goto label_2d33a4;
        }
    }
    ctx->pc = 0x2D33A0u;
    // 0x2d33a0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2d33a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_2d33a4:
    // 0x2d33a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d33a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d33a8: 0x0  nop
    ctx->pc = 0x2d33a8u;
    // NOP
    // 0x2d33ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D33ACu;
    {
        const bool branch_taken_0x2d33ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D33B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D33ACu;
        // 0x2d33b0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d33ac) {
            ctx->pc = 0x2D33B8u;
            goto label_2d33b8;
        }
    }
    ctx->pc = 0x2D33B4u;
    // 0x2d33b4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2d33b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_2d33b8:
    // 0x2d33b8: 0x6d3807  srav        $a3, $t5, $v1
    ctx->pc = 0x2d33b8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 3) & 0x1F));
    // 0x2d33bc: 0x6c2807  srav        $a1, $t4, $v1
    ctx->pc = 0x2d33bcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 12), GPR_U32(ctx, 3) & 0x1F));
    // 0x2d33c0: 0x30e70003  andi        $a3, $a3, 0x3
    ctx->pc = 0x2d33c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x2d33c4: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x2d33c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x2d33c8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2d33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d33cc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2d33ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d33d0: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2d33d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2d33d4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x2d33d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x2d33d8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2d33d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d33dc: 0x6a1807  srav        $v1, $t2, $v1
    ctx->pc = 0x2d33dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x2d33e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d33e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d33e4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2d33e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2d33e8: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2d33e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d33ec: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x2d33ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x2d33f0: 0xe5c40018  swc1        $f4, 0x18($t6)
    ctx->pc = 0x2d33f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 24), bits); }
    // 0x2d33f4: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x2d33f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
    // 0x2d33f8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d33f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d33fc: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x2d33fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x2d3400: 0xe5c10008  swc1        $f1, 0x8($t6)
    ctx->pc = 0x2d3400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x2d3404: 0xc523004c  lwc1        $f3, 0x4C($t1)
    ctx->pc = 0x2d3404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d3408: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d3408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d340c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2d340cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3410: 0x0  nop
    ctx->pc = 0x2d3410u;
    // NOP
    // 0x2d3414: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2D3414u;
    {
        const bool branch_taken_0x2d3414 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D3418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3414u;
        // 0x2d3418: 0x1c0102d  daddu       $v0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3414) {
            ctx->pc = 0x2D3458u;
            goto label_2d3458;
        }
    }
    ctx->pc = 0x2D341Cu;
    // 0x2d341c: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x2d341cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d3420: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x2d3420u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d3424: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x2d3424u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d3428: 0x46033000  add.s       $f0, $f6, $f3
    ctx->pc = 0x2d3428u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x2d342c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2d342cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2d3430: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x2d3430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x2d3434: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2d3434u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2d3438: 0xe5c20004  swc1        $f2, 0x4($t6)
    ctx->pc = 0x2d3438u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x2d343c: 0xe5c10008  swc1        $f1, 0x8($t6)
    ctx->pc = 0x2d343cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x2d3440: 0x46033801  sub.s       $f0, $f7, $f3
    ctx->pc = 0x2d3440u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
    // 0x2d3444: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x2d3444u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2d3448: 0xe5c00010  swc1        $f0, 0x10($t6)
    ctx->pc = 0x2d3448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 16), bits); }
    // 0x2d344c: 0x46032841  sub.s       $f1, $f5, $f3
    ctx->pc = 0x2d344cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x2d3450: 0xe5c20018  swc1        $f2, 0x18($t6)
    ctx->pc = 0x2d3450u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 24), bits); }
    // 0x2d3454: 0xe5c10014  swc1        $f1, 0x14($t6)
    ctx->pc = 0x2d3454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 20), bits); }
label_2d3458:
    // 0x2d3458: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3458u;
        // 0x2d345c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3460u;
}
