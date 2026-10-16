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

// Function: sub_001B26D0
// Address: 0x1b26d0 - 0x1b2798
void sub_001B26D0_0x1b26d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B26D0_0x1b26d0");
#endif

    switch (ctx->pc) {
        case 0x1b2704u: goto label_1b2704;
        case 0x1b2778u: goto label_1b2778;
        default: break;
    }

    ctx->pc = 0x1b26d0u;

    // 0x1b26d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b26d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b26d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b26d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b26d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b26d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b26dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b26dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b26e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b26e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b26e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b26e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b26e8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1b26e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b26ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b26ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b26f0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1b26f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1b26f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b26f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b26f8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1b26f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b26fc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B26FCu;
    SET_GPR_U32(ctx, 31, 0x1B2704u);
    ctx->pc = 0x1B2700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B26FCu;
    // 0x1b2700: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B26FCu, 0x1B2704u)) {
        return;
    }
    ctx->pc = 0x1B2704u;
label_1b2704:
    // 0x1b2704: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b2704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2708: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1b2708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b270c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1b270cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2710: 0xacf10000  sw          $s1, 0x0($a3)
    ctx->pc = 0x1b2710u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 17));
    // 0x1b2714: 0xe4f40004  swc1        $f20, 0x4($a3)
    ctx->pc = 0x1b2714u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1b2718: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B2718u;
    {
        const bool branch_taken_0x1b2718 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2718u;
        // 0x1b271c: 0xacf20008  sw          $s2, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2718) {
            ctx->pc = 0x1B2778u;
            goto label_1b2778;
        }
    }
    ctx->pc = 0x1B2720u;
    // 0x1b2720: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1b2720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b2724: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1b2724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1b2728: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B2728u;
    {
        const bool branch_taken_0x1b2728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2728u;
        // 0x1b272c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2728) {
            ctx->pc = 0x1B2764u;
            goto label_1b2764;
        }
    }
    ctx->pc = 0x1B2730u;
    // 0x1b2730: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1b2730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1b2734: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1b2734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b2738: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b2738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b273c: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1b273cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2740: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1b2740u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b2744: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1b2744u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1b2748: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b2748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b274c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b274cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b2750: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1b2750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1b2754: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1b2754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b2758: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b2758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b275c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B275Cu;
    {
        const bool branch_taken_0x1b275c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B275Cu;
        // 0x1b2760: 0xacc30008  sw          $v1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b275c) {
            ctx->pc = 0x1B2768u;
            goto label_1b2768;
        }
    }
    ctx->pc = 0x1B2764u;
label_1b2764:
    // 0x1b2764: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b2764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2768:
    // 0x1b2768: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2768u;
    {
        const bool branch_taken_0x1b2768 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2768u;
        // 0x1b276c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2768) {
            ctx->pc = 0x1B277Cu;
            goto label_1b277c;
        }
    }
    ctx->pc = 0x1B2770u;
    // 0x1b2770: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B2770u;
    SET_GPR_U32(ctx, 31, 0x1B2778u);
    ctx->pc = 0x1B2774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2770u;
    // 0x1b2774: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B2770u, 0x1B2778u)) {
        return;
    }
    ctx->pc = 0x1B2778u;
label_1b2778:
    // 0x1b2778: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b2778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b277c:
    // 0x1b277c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b277cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2780: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b2780u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2788: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1b2788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b278c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B278Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B278Cu;
        // 0x1b2790: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B278Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2794u;
    // 0x1b2794: 0x0  nop
    ctx->pc = 0x1b2794u;
    // NOP
    ctx->pc = 0x1b2798u;
}
