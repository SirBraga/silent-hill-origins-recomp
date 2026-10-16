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

// Function: sub_002D2830
// Address: 0x2d2830 - 0x2d2908
void sub_002D2830_0x2d2830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2830_0x2d2830");
#endif

    switch (ctx->pc) {
        case 0x2d2830u: goto label_2d2830;
        case 0x2d2834u: goto label_2d2834;
        case 0x2d2838u: goto label_2d2838;
        case 0x2d283cu: goto label_2d283c;
        case 0x2d2840u: goto label_2d2840;
        case 0x2d2844u: goto label_2d2844;
        case 0x2d2848u: goto label_2d2848;
        case 0x2d284cu: goto label_2d284c;
        case 0x2d2850u: goto label_2d2850;
        case 0x2d2854u: goto label_2d2854;
        case 0x2d2858u: goto label_2d2858;
        case 0x2d285cu: goto label_2d285c;
        case 0x2d2860u: goto label_2d2860;
        case 0x2d2864u: goto label_2d2864;
        case 0x2d2868u: goto label_2d2868;
        case 0x2d286cu: goto label_2d286c;
        case 0x2d2870u: goto label_2d2870;
        case 0x2d2874u: goto label_2d2874;
        case 0x2d2878u: goto label_2d2878;
        case 0x2d287cu: goto label_2d287c;
        case 0x2d2880u: goto label_2d2880;
        case 0x2d2884u: goto label_2d2884;
        case 0x2d2888u: goto label_2d2888;
        case 0x2d288cu: goto label_2d288c;
        case 0x2d2890u: goto label_2d2890;
        case 0x2d2894u: goto label_2d2894;
        case 0x2d2898u: goto label_2d2898;
        case 0x2d289cu: goto label_2d289c;
        case 0x2d28a0u: goto label_2d28a0;
        case 0x2d28a4u: goto label_2d28a4;
        case 0x2d28a8u: goto label_2d28a8;
        case 0x2d28acu: goto label_2d28ac;
        case 0x2d28b0u: goto label_2d28b0;
        case 0x2d28b4u: goto label_2d28b4;
        case 0x2d28b8u: goto label_2d28b8;
        case 0x2d28bcu: goto label_2d28bc;
        case 0x2d28c0u: goto label_2d28c0;
        case 0x2d28c4u: goto label_2d28c4;
        case 0x2d28c8u: goto label_2d28c8;
        case 0x2d28ccu: goto label_2d28cc;
        case 0x2d28d0u: goto label_2d28d0;
        case 0x2d28d4u: goto label_2d28d4;
        case 0x2d28d8u: goto label_2d28d8;
        case 0x2d28dcu: goto label_2d28dc;
        case 0x2d28e0u: goto label_2d28e0;
        case 0x2d28e4u: goto label_2d28e4;
        case 0x2d28e8u: goto label_2d28e8;
        case 0x2d28ecu: goto label_2d28ec;
        case 0x2d28f0u: goto label_2d28f0;
        case 0x2d28f4u: goto label_2d28f4;
        case 0x2d28f8u: goto label_2d28f8;
        case 0x2d28fcu: goto label_2d28fc;
        case 0x2d2900u: goto label_2d2900;
        case 0x2d2904u: goto label_2d2904;
        default: break;
    }

    ctx->pc = 0x2d2830u;

label_2d2830:
    // 0x2d2830: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d2830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d2834:
    // 0x2d2834: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d2834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d2838:
    // 0x2d2838: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2d2838u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2d283c:
    // 0x2d283c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d283cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2d2840:
    // 0x2d2840: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d2840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2d2844:
    // 0x2d2844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d2848:
    // 0x2d2848: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2d2848u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2d284c:
    // 0x2d284c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d284cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2d2850:
    // 0x2d2850: 0x8c900040  lw          $s0, 0x40($a0)
    ctx->pc = 0x2d2850u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_2d2854:
    // 0x2d2854: 0xc7948284  lwc1        $f20, -0x7D7C($gp)
    ctx->pc = 0x2d2854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d2858:
    // 0x2d2858: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x2d2858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d285c:
    // 0x2d285c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d285cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d2860:
    // 0x2d2860: 0x0  nop
    ctx->pc = 0x2d2860u;
    // NOP
label_2d2864:
    // 0x2d2864: 0x45030021  bc1tl       . + 4 + (0x21 << 2)
label_2d2868:
    if (ctx->pc == 0x2D2868u) {
        ctx->pc = 0x2D2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2864u;
        // 0x2d2868: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D286Cu;
        goto label_2d286c;
    }
    ctx->pc = 0x2D2864u;
    {
        const bool branch_taken_0x2d2864 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2864) {
            ctx->pc = 0x2D2868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2864u;
            // 0x2d2868: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D28ECu;
            goto label_2d28ec;
        }
    }
    ctx->pc = 0x2D286Cu;
label_2d286c:
    // 0x2d286c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2d2870:
    // 0x2d2870: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2d2874:
    if (ctx->pc == 0x2D2874u) {
        ctx->pc = 0x2D2874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2870u;
        // 0x2d2874: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2878u;
        goto label_2d2878;
    }
    ctx->pc = 0x2D2870u;
    {
        const bool branch_taken_0x2d2870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2870u;
        // 0x2d2874: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2870) {
            ctx->pc = 0x2D28E0u;
            goto label_2d28e0;
        }
    }
    ctx->pc = 0x2D2878u;
label_2d2878:
    // 0x2d2878: 0x46000d46  mov.s       $f21, $f1
    ctx->pc = 0x2d2878u;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
label_2d287c:
    // 0x2d287c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d287cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2880:
    // 0x2d2880: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2d2880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d2884:
    // 0x2d2884: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2d2884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_2d2888:
    // 0x2d2888: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2d2888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2d288c:
    // 0x2d288c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2d288cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2d2890:
    // 0x2d2890: 0x60f809  jalr        $v1
label_2d2894:
    if (ctx->pc == 0x2D2894u) {
        ctx->pc = 0x2D2898u;
        goto label_2d2898;
    }
    ctx->pc = 0x2D2890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2D2898u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2890u, 0x2D2898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D2898u;
label_2d2898:
    // 0x2d2898: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2d2898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d289c:
    // 0x2d289c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2d289cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2d28a0:
    // 0x2d28a0: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x2d28a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d28a4:
    // 0x2d28a4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2d28a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2d28a8:
    // 0x2d28a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d28a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2d28ac:
    // 0x2d28ac: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2d28acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d28b0:
    // 0x2d28b0: 0x0  nop
    ctx->pc = 0x2d28b0u;
    // NOP
label_2d28b4:
    // 0x2d28b4: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_2d28b8:
    if (ctx->pc == 0x2D28B8u) {
        ctx->pc = 0x2D28B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28B4u;
        // 0x2d28b8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D28BCu;
        goto label_2d28bc;
    }
    ctx->pc = 0x2D28B4u;
    {
        const bool branch_taken_0x2d28b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d28b4) {
            ctx->pc = 0x2D28B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D28B4u;
            // 0x2d28b8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D28D0u;
            goto label_2d28d0;
        }
    }
    ctx->pc = 0x2D28BCu;
label_2d28bc:
    // 0x2d28bc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2d28bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d28c0:
    // 0x2d28c0: 0x0  nop
    ctx->pc = 0x2d28c0u;
    // NOP
label_2d28c4:
    // 0x2d28c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2d28c8:
    if (ctx->pc == 0x2D28C8u) {
        ctx->pc = 0x2D28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28C4u;
        // 0x2d28c8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D28CCu;
        goto label_2d28cc;
    }
    ctx->pc = 0x2D28C4u;
    {
        const bool branch_taken_0x2d28c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d28c4) {
            ctx->pc = 0x2D28C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D28C4u;
            // 0x2d28c8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D28CCu;
            goto label_2d28cc;
        }
    }
    ctx->pc = 0x2D28CCu;
label_2d28cc:
    // 0x2d28cc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2d28d0:
    // 0x2d28d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d28d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2d28d4:
    // 0x2d28d4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2d28d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d28d8:
    // 0x2d28d8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_2d28dc:
    if (ctx->pc == 0x2D28DCu) {
        ctx->pc = 0x2D28DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28D8u;
        // 0x2d28dc: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D28E0u;
        goto label_2d28e0;
    }
    ctx->pc = 0x2D28D8u;
    {
        const bool branch_taken_0x2d28d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D28DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28D8u;
        // 0x2d28dc: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d28d8) {
            ctx->pc = 0x2D2880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2880;
        }
    }
    ctx->pc = 0x2D28E0u;
label_2d28e0:
    // 0x2d28e0: 0xe6140080  swc1        $f20, 0x80($s0)
    ctx->pc = 0x2d28e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_2d28e4:
    // 0x2d28e4: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2d28e4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_2d28e8:
    // 0x2d28e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d28e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d28ec:
    // 0x2d28ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d28ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d28f0:
    // 0x2d28f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d28f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d28f4:
    // 0x2d28f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d28f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d28f8:
    // 0x2d28f8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2d28f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2d28fc:
    // 0x2d28fc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2d28fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d2900:
    // 0x2d2900: 0x3e00008  jr          $ra
label_2d2904:
    if (ctx->pc == 0x2D2904u) {
        ctx->pc = 0x2D2904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2900u;
        // 0x2d2904: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2908u;
        goto label_fallthrough_0x2d2900;
    }
    ctx->pc = 0x2D2900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2900u;
        // 0x2d2904: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d2900:
    ctx->pc = 0x2D2908u;
}
