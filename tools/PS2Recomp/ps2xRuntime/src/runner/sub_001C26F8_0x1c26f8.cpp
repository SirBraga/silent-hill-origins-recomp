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

// Function: sub_001C26F8
// Address: 0x1c26f8 - 0x1c27c8
void sub_001C26F8_0x1c26f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C26F8_0x1c26f8");
#endif

    switch (ctx->pc) {
        case 0x1c2714u: goto label_1c2714;
        case 0x1c2750u: goto label_1c2750;
        case 0x1c27a0u: goto label_1c27a0;
        default: break;
    }

    ctx->pc = 0x1c26f8u;

    // 0x1c26f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c26f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c26fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c26fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c2700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2704: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c270c: 0xc06bbf8  jal         func_1AEFE0
    ctx->pc = 0x1C270Cu;
    SET_GPR_U32(ctx, 31, 0x1C2714u);
    ctx->pc = 0x1C2710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C270Cu;
    // 0x1c2710: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEFE0u, 0x1C270Cu, 0x1C2714u)) {
        return;
    }
    ctx->pc = 0x1C2714u;
label_1c2714:
    // 0x1c2714: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x1c2714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x1c2718: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C2718u;
    {
        const bool branch_taken_0x1c2718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2718u;
        // 0x1c271c: 0x260402c4  addiu       $a0, $s0, 0x2C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 708));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2718) {
            ctx->pc = 0x1C2764u;
            goto label_1c2764;
        }
    }
    ctx->pc = 0x1C2720u;
    // 0x1c2720: 0xc60f02d8  lwc1        $f15, 0x2D8($s0)
    ctx->pc = 0x1c2720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c2724: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1c2724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1c2728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c2728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c272c: 0x260502d0  addiu       $a1, $s0, 0x2D0
    ctx->pc = 0x1c272cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    // 0x1c2730: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x1c2730u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x1c2734: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1c2734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2738: 0x46007bc1  sub.s       $f15, $f15, $f0
    ctx->pc = 0x1c2738u;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
    // 0x1c273c: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x1c273cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x1c2740: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1c2740u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1c2744: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c2744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2748: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x1C2748u;
    SET_GPR_U32(ctx, 31, 0x1C2750u);
    ctx->pc = 0x1C274Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2748u;
    // 0x1c274c: 0xc60e02cc  lwc1        $f14, 0x2CC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1C2748u, 0x1C2750u)) {
        return;
    }
    ctx->pc = 0x1C2750u;
label_1c2750:
    // 0x1c2750: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c2750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c2754: 0x8e0302b4  lw          $v1, 0x2B4($s0)
    ctx->pc = 0x1c2754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c2758: 0xc60002d0  lwc1        $f0, 0x2D0($s0)
    ctx->pc = 0x1c2758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c275c: 0xae0202bc  sw          $v0, 0x2BC($s0)
    ctx->pc = 0x1c275cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 2));
    // 0x1c2760: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1c2760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c2764:
    // 0x1c2764: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x1c2764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x1c2768: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C2768u;
    {
        const bool branch_taken_0x1c2768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2768u;
        // 0x1c276c: 0x260402c8  addiu       $a0, $s0, 0x2C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2768) {
            ctx->pc = 0x1C27B4u;
            goto label_1c27b4;
        }
    }
    ctx->pc = 0x1C2770u;
    // 0x1c2770: 0xc60f02dc  lwc1        $f15, 0x2DC($s0)
    ctx->pc = 0x1c2770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c2774: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1c2774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1c2778: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c2778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c277c: 0x260502d4  addiu       $a1, $s0, 0x2D4
    ctx->pc = 0x1c277cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 724));
    // 0x1c2780: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x1c2780u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x1c2784: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1c2784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2788: 0x46007bc0  add.s       $f15, $f15, $f0
    ctx->pc = 0x1c2788u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x1c278c: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x1c278cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x1c2790: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1c2790u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1c2794: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c2794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2798: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x1C2798u;
    SET_GPR_U32(ctx, 31, 0x1C27A0u);
    ctx->pc = 0x1C279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2798u;
    // 0x1c279c: 0xc60e02cc  lwc1        $f14, 0x2CC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1C2798u, 0x1C27A0u)) {
        return;
    }
    ctx->pc = 0x1C27A0u;
label_1c27a0:
    // 0x1c27a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c27a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c27a4: 0xc60002d4  lwc1        $f0, 0x2D4($s0)
    ctx->pc = 0x1c27a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c27a8: 0x8e0302b8  lw          $v1, 0x2B8($s0)
    ctx->pc = 0x1c27a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x1c27ac: 0xae0202c0  sw          $v0, 0x2C0($s0)
    ctx->pc = 0x1c27acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 2));
    // 0x1c27b0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1c27b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c27b4:
    // 0x1c27b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c27b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c27b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c27b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c27bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c27bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c27c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C27C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27C0u;
        // 0x1c27c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C27C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C27C8u;
}
