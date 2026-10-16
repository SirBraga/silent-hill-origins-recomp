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

// Function: sub_001C3080
// Address: 0x1c3080 - 0x1c3228
void sub_001C3080_0x1c3080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3080_0x1c3080");
#endif

    switch (ctx->pc) {
        case 0x1c3080u: goto label_1c3080;
        case 0x1c3084u: goto label_1c3084;
        case 0x1c3088u: goto label_1c3088;
        case 0x1c308cu: goto label_1c308c;
        case 0x1c3090u: goto label_1c3090;
        case 0x1c3094u: goto label_1c3094;
        case 0x1c3098u: goto label_1c3098;
        case 0x1c309cu: goto label_1c309c;
        case 0x1c30a0u: goto label_1c30a0;
        case 0x1c30a4u: goto label_1c30a4;
        case 0x1c30a8u: goto label_1c30a8;
        case 0x1c30acu: goto label_1c30ac;
        case 0x1c30b0u: goto label_1c30b0;
        case 0x1c30b4u: goto label_1c30b4;
        case 0x1c30b8u: goto label_1c30b8;
        case 0x1c30bcu: goto label_1c30bc;
        case 0x1c30c0u: goto label_1c30c0;
        case 0x1c30c4u: goto label_1c30c4;
        case 0x1c30c8u: goto label_1c30c8;
        case 0x1c30ccu: goto label_1c30cc;
        case 0x1c30d0u: goto label_1c30d0;
        case 0x1c30d4u: goto label_1c30d4;
        case 0x1c30d8u: goto label_1c30d8;
        case 0x1c30dcu: goto label_1c30dc;
        case 0x1c30e0u: goto label_1c30e0;
        case 0x1c30e4u: goto label_1c30e4;
        case 0x1c30e8u: goto label_1c30e8;
        case 0x1c30ecu: goto label_1c30ec;
        case 0x1c30f0u: goto label_1c30f0;
        case 0x1c30f4u: goto label_1c30f4;
        case 0x1c30f8u: goto label_1c30f8;
        case 0x1c30fcu: goto label_1c30fc;
        case 0x1c3100u: goto label_1c3100;
        case 0x1c3104u: goto label_1c3104;
        case 0x1c3108u: goto label_1c3108;
        case 0x1c310cu: goto label_1c310c;
        case 0x1c3110u: goto label_1c3110;
        case 0x1c3114u: goto label_1c3114;
        case 0x1c3118u: goto label_1c3118;
        case 0x1c311cu: goto label_1c311c;
        case 0x1c3120u: goto label_1c3120;
        case 0x1c3124u: goto label_1c3124;
        case 0x1c3128u: goto label_1c3128;
        case 0x1c312cu: goto label_1c312c;
        case 0x1c3130u: goto label_1c3130;
        case 0x1c3134u: goto label_1c3134;
        case 0x1c3138u: goto label_1c3138;
        case 0x1c313cu: goto label_1c313c;
        case 0x1c3140u: goto label_1c3140;
        case 0x1c3144u: goto label_1c3144;
        case 0x1c3148u: goto label_1c3148;
        case 0x1c314cu: goto label_1c314c;
        case 0x1c3150u: goto label_1c3150;
        case 0x1c3154u: goto label_1c3154;
        case 0x1c3158u: goto label_1c3158;
        case 0x1c315cu: goto label_1c315c;
        case 0x1c3160u: goto label_1c3160;
        case 0x1c3164u: goto label_1c3164;
        case 0x1c3168u: goto label_1c3168;
        case 0x1c316cu: goto label_1c316c;
        case 0x1c3170u: goto label_1c3170;
        case 0x1c3174u: goto label_1c3174;
        case 0x1c3178u: goto label_1c3178;
        case 0x1c317cu: goto label_1c317c;
        case 0x1c3180u: goto label_1c3180;
        case 0x1c3184u: goto label_1c3184;
        case 0x1c3188u: goto label_1c3188;
        case 0x1c318cu: goto label_1c318c;
        case 0x1c3190u: goto label_1c3190;
        case 0x1c3194u: goto label_1c3194;
        case 0x1c3198u: goto label_1c3198;
        case 0x1c319cu: goto label_1c319c;
        case 0x1c31a0u: goto label_1c31a0;
        case 0x1c31a4u: goto label_1c31a4;
        case 0x1c31a8u: goto label_1c31a8;
        case 0x1c31acu: goto label_1c31ac;
        case 0x1c31b0u: goto label_1c31b0;
        case 0x1c31b4u: goto label_1c31b4;
        case 0x1c31b8u: goto label_1c31b8;
        case 0x1c31bcu: goto label_1c31bc;
        case 0x1c31c0u: goto label_1c31c0;
        case 0x1c31c4u: goto label_1c31c4;
        case 0x1c31c8u: goto label_1c31c8;
        case 0x1c31ccu: goto label_1c31cc;
        case 0x1c31d0u: goto label_1c31d0;
        case 0x1c31d4u: goto label_1c31d4;
        case 0x1c31d8u: goto label_1c31d8;
        case 0x1c31dcu: goto label_1c31dc;
        case 0x1c31e0u: goto label_1c31e0;
        case 0x1c31e4u: goto label_1c31e4;
        case 0x1c31e8u: goto label_1c31e8;
        case 0x1c31ecu: goto label_1c31ec;
        case 0x1c31f0u: goto label_1c31f0;
        case 0x1c31f4u: goto label_1c31f4;
        case 0x1c31f8u: goto label_1c31f8;
        case 0x1c31fcu: goto label_1c31fc;
        case 0x1c3200u: goto label_1c3200;
        case 0x1c3204u: goto label_1c3204;
        case 0x1c3208u: goto label_1c3208;
        case 0x1c320cu: goto label_1c320c;
        case 0x1c3210u: goto label_1c3210;
        case 0x1c3214u: goto label_1c3214;
        case 0x1c3218u: goto label_1c3218;
        case 0x1c321cu: goto label_1c321c;
        case 0x1c3220u: goto label_1c3220;
        case 0x1c3224u: goto label_1c3224;
        default: break;
    }

    ctx->pc = 0x1c3080u;

label_1c3080:
    // 0x1c3080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c3084:
    // 0x1c3084: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c3084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1c3088:
    // 0x1c3088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c3088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c308c:
    // 0x1c308c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c308cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c3090:
    // 0x1c3090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c3094:
    // 0x1c3094: 0xc06bbf8  jal         func_1AEFE0
label_1c3098:
    if (ctx->pc == 0x1C3098u) {
        ctx->pc = 0x1C3098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3094u;
        // 0x1c3098: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C309Cu;
        goto label_1c309c;
    }
    ctx->pc = 0x1C3094u;
    SET_GPR_U32(ctx, 31, 0x1C309Cu);
    ctx->pc = 0x1C3098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3094u;
    // 0x1c3098: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEFE0u, 0x1C3094u, 0x1C309Cu)) {
        return;
    }
    ctx->pc = 0x1C309Cu;
label_1c309c:
    // 0x1c309c: 0x8e020874  lw          $v0, 0x874($s0)
    ctx->pc = 0x1c309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2164)));
label_1c30a0:
    // 0x1c30a0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1c30a4:
    if (ctx->pc == 0x1C30A4u) {
        ctx->pc = 0x1C30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30A0u;
        // 0x1c30a4: 0x8e020828  lw          $v0, 0x828($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C30A8u;
        goto label_1c30a8;
    }
    ctx->pc = 0x1C30A0u;
    {
        const bool branch_taken_0x1c30a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c30a0) {
            ctx->pc = 0x1C30A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C30A0u;
            // 0x1c30a4: 0x8e020828  lw          $v0, 0x828($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C30D4u;
            goto label_1c30d4;
        }
    }
    ctx->pc = 0x1C30A8u;
label_1c30a8:
    // 0x1c30a8: 0xc6000878  lwc1        $f0, 0x878($s0)
    ctx->pc = 0x1c30a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c30ac:
    // 0x1c30ac: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1c30acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c30b0:
    // 0x1c30b0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1c30b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1c30b4:
    // 0x1c30b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c30b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c30b8:
    // 0x1c30b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c30b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c30bc:
    // 0x1c30bc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1c30bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c30c0:
    // 0x1c30c0: 0x0  nop
    ctx->pc = 0x1c30c0u;
    // NOP
label_1c30c4:
    // 0x1c30c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1c30c8:
    if (ctx->pc == 0x1C30C8u) {
        ctx->pc = 0x1C30C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30C4u;
        // 0x1c30c8: 0xe6000878  swc1        $f0, 0x878($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C30CCu;
        goto label_1c30cc;
    }
    ctx->pc = 0x1C30C4u;
    {
        const bool branch_taken_0x1c30c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C30C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30C4u;
        // 0x1c30c8: 0xe6000878  swc1        $f0, 0x878($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30c4) {
            ctx->pc = 0x1C30D0u;
            goto label_1c30d0;
        }
    }
    ctx->pc = 0x1C30CCu;
label_1c30cc:
    // 0x1c30cc: 0xae000874  sw          $zero, 0x874($s0)
    ctx->pc = 0x1c30ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2164), GPR_U32(ctx, 0));
label_1c30d0:
    // 0x1c30d0: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x1c30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
label_1c30d4:
    // 0x1c30d4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1c30d8:
    if (ctx->pc == 0x1C30D8u) {
        ctx->pc = 0x1C30D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30D4u;
        // 0x1c30d8: 0x2604082c  addiu       $a0, $s0, 0x82C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2092));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C30DCu;
        goto label_1c30dc;
    }
    ctx->pc = 0x1C30D4u;
    {
        const bool branch_taken_0x1c30d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30D4u;
        // 0x1c30d8: 0x2604082c  addiu       $a0, $s0, 0x82C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2092));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30d4) {
            ctx->pc = 0x1C3114u;
            goto label_1c3114;
        }
    }
    ctx->pc = 0x1C30DCu;
label_1c30dc:
    // 0x1c30dc: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1c30dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c30e0:
    // 0x1c30e0: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x1c30e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
label_1c30e4:
    // 0x1c30e4: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1c30e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1c30e8:
    // 0x1c30e8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c30e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1c30ec:
    // 0x1c30ec: 0x26050830  addiu       $a1, $s0, 0x830
    ctx->pc = 0x1c30ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
label_1c30f0:
    // 0x1c30f0: 0xc60e0824  lwc1        $f14, 0x824($s0)
    ctx->pc = 0x1c30f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1c30f4:
    // 0x1c30f4: 0xc60f0838  lwc1        $f15, 0x838($s0)
    ctx->pc = 0x1c30f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1c30f8:
    // 0x1c30f8: 0xc06d01e  jal         func_1B4078
label_1c30fc:
    if (ctx->pc == 0x1C30FCu) {
        ctx->pc = 0x1C30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30F8u;
        // 0x1c30fc: 0xc6100834  lwc1        $f16, 0x834($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3100u;
        goto label_1c3100;
    }
    ctx->pc = 0x1C30F8u;
    SET_GPR_U32(ctx, 31, 0x1C3100u);
    ctx->pc = 0x1C30FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30F8u;
    // 0x1c30fc: 0xc6100834  lwc1        $f16, 0x834($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1C30F8u, 0x1C3100u)) {
        return;
    }
    ctx->pc = 0x1C3100u;
label_1c3100:
    // 0x1c3100: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c3100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c3104:
    // 0x1c3104: 0x8e030818  lw          $v1, 0x818($s0)
    ctx->pc = 0x1c3104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2072)));
label_1c3108:
    // 0x1c3108: 0xc6000830  lwc1        $f0, 0x830($s0)
    ctx->pc = 0x1c3108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c310c:
    // 0x1c310c: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x1c310cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_1c3110:
    // 0x1c3110: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1c3110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c3114:
    // 0x1c3114: 0x8e02083c  lw          $v0, 0x83C($s0)
    ctx->pc = 0x1c3114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2108)));
label_1c3118:
    // 0x1c3118: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1c311c:
    if (ctx->pc == 0x1C311Cu) {
        ctx->pc = 0x1C311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3118u;
        // 0x1c311c: 0x26040840  addiu       $a0, $s0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3120u;
        goto label_1c3120;
    }
    ctx->pc = 0x1C3118u;
    {
        const bool branch_taken_0x1c3118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3118u;
        // 0x1c311c: 0x26040840  addiu       $a0, $s0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3118) {
            ctx->pc = 0x1C3158u;
            goto label_1c3158;
        }
    }
    ctx->pc = 0x1C3120u;
label_1c3120:
    // 0x1c3120: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1c3120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c3124:
    // 0x1c3124: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x1c3124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
label_1c3128:
    // 0x1c3128: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1c3128u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1c312c:
    // 0x1c312c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c312cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1c3130:
    // 0x1c3130: 0x26050844  addiu       $a1, $s0, 0x844
    ctx->pc = 0x1c3130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2116));
label_1c3134:
    // 0x1c3134: 0xc60e0824  lwc1        $f14, 0x824($s0)
    ctx->pc = 0x1c3134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1c3138:
    // 0x1c3138: 0xc60f084c  lwc1        $f15, 0x84C($s0)
    ctx->pc = 0x1c3138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1c313c:
    // 0x1c313c: 0xc06d01e  jal         func_1B4078
label_1c3140:
    if (ctx->pc == 0x1C3140u) {
        ctx->pc = 0x1C3140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C313Cu;
        // 0x1c3140: 0xc6100848  lwc1        $f16, 0x848($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3144u;
        goto label_1c3144;
    }
    ctx->pc = 0x1C313Cu;
    SET_GPR_U32(ctx, 31, 0x1C3144u);
    ctx->pc = 0x1C3140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C313Cu;
    // 0x1c3140: 0xc6100848  lwc1        $f16, 0x848($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1C313Cu, 0x1C3144u)) {
        return;
    }
    ctx->pc = 0x1C3144u;
label_1c3144:
    // 0x1c3144: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c3144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c3148:
    // 0x1c3148: 0x8e03081c  lw          $v1, 0x81C($s0)
    ctx->pc = 0x1c3148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2076)));
label_1c314c:
    // 0x1c314c: 0xc6000844  lwc1        $f0, 0x844($s0)
    ctx->pc = 0x1c314cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c3150:
    // 0x1c3150: 0xae02083c  sw          $v0, 0x83C($s0)
    ctx->pc = 0x1c3150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2108), GPR_U32(ctx, 2));
label_1c3154:
    // 0x1c3154: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1c3154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c3158:
    // 0x1c3158: 0x8e02028c  lw          $v0, 0x28C($s0)
    ctx->pc = 0x1c3158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
label_1c315c:
    // 0x1c315c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1c3160:
    if (ctx->pc == 0x1C3160u) {
        ctx->pc = 0x1C3160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C315Cu;
        // 0x1c3160: 0x8e060818  lw          $a2, 0x818($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3164u;
        goto label_1c3164;
    }
    ctx->pc = 0x1C315Cu;
    {
        const bool branch_taken_0x1c315c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C315Cu;
        // 0x1c3160: 0x8e060818  lw          $a2, 0x818($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c315c) {
            ctx->pc = 0x1C3194u;
            goto label_1c3194;
        }
    }
    ctx->pc = 0x1C3164u;
label_1c3164:
    // 0x1c3164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3168:
    // 0x1c3168: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c3168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c316c:
    // 0x1c316c: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c316cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c3170:
    // 0x1c3170: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c3170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c3174:
    // 0x1c3174: 0x60f809  jalr        $v1
label_1c3178:
    if (ctx->pc == 0x1C3178u) {
        ctx->pc = 0x1C3178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3174u;
        // 0x1c3178: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C317Cu;
        goto label_1c317c;
    }
    ctx->pc = 0x1C3174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C317Cu);
        ctx->pc = 0x1C3178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3174u;
        // 0x1c3178: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3174u, 0x1C317Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C317Cu;
label_1c317c:
    // 0x1c317c: 0x8e020818  lw          $v0, 0x818($s0)
    ctx->pc = 0x1c317cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2072)));
label_1c3180:
    // 0x1c3180: 0xc6000834  lwc1        $f0, 0x834($s0)
    ctx->pc = 0x1c3180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c3184:
    // 0x1c3184: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x1c3184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
label_1c3188:
    // 0x1c3188: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x1c3188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
label_1c318c:
    // 0x1c318c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c3190:
    if (ctx->pc == 0x1C3190u) {
        ctx->pc = 0x1C3190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C318Cu;
        // 0x1c3190: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3194u;
        goto label_1c3194;
    }
    ctx->pc = 0x1C318Cu;
    {
        const bool branch_taken_0x1c318c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C318Cu;
        // 0x1c3190: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c318c) {
            ctx->pc = 0x1C31ACu;
            goto label_1c31ac;
        }
    }
    ctx->pc = 0x1C3194u;
label_1c3194:
    // 0x1c3194: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c3194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3198:
    // 0x1c3198: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c3198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c319c:
    // 0x1c319c: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c319cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c31a0:
    // 0x1c31a0: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c31a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c31a4:
    // 0x1c31a4: 0x60f809  jalr        $v1
label_1c31a8:
    if (ctx->pc == 0x1C31A8u) {
        ctx->pc = 0x1C31A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31A4u;
        // 0x1c31a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C31ACu;
        goto label_1c31ac;
    }
    ctx->pc = 0x1C31A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C31ACu);
        ctx->pc = 0x1C31A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31A4u;
        // 0x1c31a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C31A4u, 0x1C31ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C31ACu;
label_1c31ac:
    // 0x1c31ac: 0x8e05028c  lw          $a1, 0x28C($s0)
    ctx->pc = 0x1c31acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
label_1c31b0:
    // 0x1c31b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c31b4:
    // 0x1c31b4: 0xc070e2a  jal         func_1C38A8
label_1c31b8:
    if (ctx->pc == 0x1C31B8u) {
        ctx->pc = 0x1C31B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31B4u;
        // 0x1c31b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C31BCu;
        goto label_1c31bc;
    }
    ctx->pc = 0x1C31B4u;
    SET_GPR_U32(ctx, 31, 0x1C31BCu);
    ctx->pc = 0x1C31B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31B4u;
    // 0x1c31b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C38A8u, 0x1C31B4u, 0x1C31BCu)) {
        return;
    }
    ctx->pc = 0x1C31BCu;
label_1c31bc:
    // 0x1c31bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1c31c0:
    if (ctx->pc == 0x1C31C0u) {
        ctx->pc = 0x1C31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31BCu;
        // 0x1c31c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C31C4u;
        goto label_1c31c4;
    }
    ctx->pc = 0x1C31BCu;
    {
        const bool branch_taken_0x1c31bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31BCu;
        // 0x1c31c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31bc) {
            ctx->pc = 0x1C31E4u;
            goto label_1c31e4;
        }
    }
    ctx->pc = 0x1C31C4u;
label_1c31c4:
    // 0x1c31c4: 0x8e06081c  lw          $a2, 0x81C($s0)
    ctx->pc = 0x1c31c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2076)));
label_1c31c8:
    // 0x1c31c8: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c31c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c31cc:
    // 0x1c31cc: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c31ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c31d0:
    // 0x1c31d0: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c31d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c31d4:
    // 0x1c31d4: 0x60f809  jalr        $v1
label_1c31d8:
    if (ctx->pc == 0x1C31D8u) {
        ctx->pc = 0x1C31D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31D4u;
        // 0x1c31d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C31DCu;
        goto label_1c31dc;
    }
    ctx->pc = 0x1C31D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C31DCu);
        ctx->pc = 0x1C31D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31D4u;
        // 0x1c31d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C31D4u, 0x1C31DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C31DCu;
label_1c31dc:
    // 0x1c31dc: 0x1000000e  b           . + 4 + (0xE << 2)
label_1c31e0:
    if (ctx->pc == 0x1C31E0u) {
        ctx->pc = 0x1C31E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31DCu;
        // 0x1c31e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C31E4u;
        goto label_1c31e4;
    }
    ctx->pc = 0x1C31DCu;
    {
        const bool branch_taken_0x1c31dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31DCu;
        // 0x1c31e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31dc) {
            ctx->pc = 0x1C3218u;
            goto label_1c3218;
        }
    }
    ctx->pc = 0x1C31E4u;
label_1c31e4:
    // 0x1c31e4: 0x8e06081c  lw          $a2, 0x81C($s0)
    ctx->pc = 0x1c31e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2076)));
label_1c31e8:
    // 0x1c31e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c31e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c31ec:
    // 0x1c31ec: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c31ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c31f0:
    // 0x1c31f0: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c31f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c31f4:
    // 0x1c31f4: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c31f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c31f8:
    // 0x1c31f8: 0x60f809  jalr        $v1
label_1c31fc:
    if (ctx->pc == 0x1C31FCu) {
        ctx->pc = 0x1C31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31F8u;
        // 0x1c31fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3200u;
        goto label_1c3200;
    }
    ctx->pc = 0x1C31F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C3200u);
        ctx->pc = 0x1C31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31F8u;
        // 0x1c31fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C31F8u, 0x1C3200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C3200u;
label_1c3200:
    // 0x1c3200: 0xc6000848  lwc1        $f0, 0x848($s0)
    ctx->pc = 0x1c3200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c3204:
    // 0x1c3204: 0x8e02081c  lw          $v0, 0x81C($s0)
    ctx->pc = 0x1c3204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2076)));
label_1c3208:
    // 0x1c3208: 0xae00083c  sw          $zero, 0x83C($s0)
    ctx->pc = 0x1c3208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2108), GPR_U32(ctx, 0));
label_1c320c:
    // 0x1c320c: 0xae000840  sw          $zero, 0x840($s0)
    ctx->pc = 0x1c320cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 0));
label_1c3210:
    // 0x1c3210: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1c3210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c3214:
    // 0x1c3214: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c3214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3218:
    // 0x1c3218: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c321c:
    // 0x1c321c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c321cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3220:
    // 0x1c3220: 0x3e00008  jr          $ra
label_1c3224:
    if (ctx->pc == 0x1C3224u) {
        ctx->pc = 0x1C3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3220u;
        // 0x1c3224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3228u;
        goto label_fallthrough_0x1c3220;
    }
    ctx->pc = 0x1C3220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3220u;
        // 0x1c3224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c3220:
    ctx->pc = 0x1C3228u;
}
