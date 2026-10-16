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

// Function: sub_001B6830
// Address: 0x1b6830 - 0x1b68c8
void sub_001B6830_0x1b6830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6830_0x1b6830");
#endif

    switch (ctx->pc) {
        case 0x1b6850u: goto label_1b6850;
        case 0x1b6860u: goto label_1b6860;
        case 0x1b6870u: goto label_1b6870;
        case 0x1b689cu: goto label_1b689c;
        default: break;
    }

    ctx->pc = 0x1b6830u;

    // 0x1b6830: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b6830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b6834: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b6834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b6838: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b6838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b683c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b683cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b6840: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b6840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b6844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6848: 0xc06bc10  jal         func_1AF040
    ctx->pc = 0x1B6848u;
    SET_GPR_U32(ctx, 31, 0x1B6850u);
    ctx->pc = 0x1B684Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6848u;
    // 0x1b684c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1B6848u, 0x1B6850u)) {
        return;
    }
    ctx->pc = 0x1B6850u;
label_1b6850:
    // 0x1b6850: 0x8e510290  lw          $s1, 0x290($s2)
    ctx->pc = 0x1b6850u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 656)));
    // 0x1b6854: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B6854u;
    {
        const bool branch_taken_0x1b6854 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6854u;
        // 0x1b6858: 0x2653026c  addiu       $s3, $s2, 0x26C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 620));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6854) {
            ctx->pc = 0x1B68A8u;
            goto label_1b68a8;
        }
    }
    ctx->pc = 0x1B685Cu;
    // 0x1b685c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1b685cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b6860:
    // 0x1b6860: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1B6860u;
    {
        const bool branch_taken_0x1b6860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6860) {
            ctx->pc = 0x1B6864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6860u;
            // 0x1b6864: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B68A0u;
            goto label_1b68a0;
        }
    }
    ctx->pc = 0x1B6868u;
    // 0x1b6868: 0xc085ba8  jal         func_216EA0
    ctx->pc = 0x1B6868u;
    SET_GPR_U32(ctx, 31, 0x1B6870u);
    ctx->pc = 0x1B686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6868u;
    // 0x1b686c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1B6868u, 0x1B6870u)) {
        return;
    }
    ctx->pc = 0x1B6870u;
label_1b6870:
    // 0x1b6870: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x1b6870u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1b6874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6878: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b6878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b687c: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1b687cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b6880: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1b6880u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1b6884: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b6884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6888: 0x2671021  addu        $v0, $s3, $a3
    ctx->pc = 0x1b6888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1b688c: 0x24e70278  addiu       $a3, $a3, 0x278
    ctx->pc = 0x1b688cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 632));
    // 0x1b6890: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1b6890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b6894: 0xc085cec  jal         func_2173B0
    ctx->pc = 0x1B6894u;
    SET_GPR_U32(ctx, 31, 0x1B689Cu);
    ctx->pc = 0x1B6898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6894u;
    // 0x1b6898: 0x2473821  addu        $a3, $s2, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1B6894u, 0x1B689Cu)) {
        return;
    }
    ctx->pc = 0x1B689Cu;
label_1b689c:
    // 0x1b689c: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x1b689cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b68a0:
    // 0x1b68a0: 0x5620ffef  bnel        $s1, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B68A0u;
    {
        const bool branch_taken_0x1b68a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b68a0) {
            ctx->pc = 0x1B68A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B68A0u;
            // 0x1b68a4: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6860;
        }
    }
    ctx->pc = 0x1B68A8u;
label_1b68a8:
    // 0x1b68a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b68a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b68ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b68acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b68b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b68b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b68b4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b68b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b68b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b68b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b68bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B68BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B68C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68BCu;
        // 0x1b68c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B68BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B68C4u;
    // 0x1b68c4: 0x0  nop
    ctx->pc = 0x1b68c4u;
    // NOP
    ctx->pc = 0x1b68c8u;
}
