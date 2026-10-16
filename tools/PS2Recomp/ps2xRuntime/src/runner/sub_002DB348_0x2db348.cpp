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

// Function: sub_002DB348
// Address: 0x2db348 - 0x2db3f0
void sub_002DB348_0x2db348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB348_0x2db348");
#endif

    switch (ctx->pc) {
        case 0x2db388u: goto label_2db388;
        case 0x2db394u: goto label_2db394;
        default: break;
    }

    ctx->pc = 0x2db348u;

    // 0x2db348: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2db348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2db34c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2db34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2db350: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2db350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2db354: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2db354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db358: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2db358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2db35c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2db35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2db360: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB360u;
    {
        const bool branch_taken_0x2db360 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB360u;
        // 0x2db364: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db360) {
            ctx->pc = 0x2DB370u;
            goto label_2db370;
        }
    }
    ctx->pc = 0x2DB368u;
    // 0x2db368: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DB368u;
    {
        const bool branch_taken_0x2db368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB368u;
        // 0x2db36c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db368) {
            ctx->pc = 0x2DB3ACu;
            goto label_2db3ac;
        }
    }
    ctx->pc = 0x2DB370u;
label_2db370:
    // 0x2db370: 0x8f908fd8  lw          $s0, -0x7028($gp)
    ctx->pc = 0x2db370u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938584)));
    // 0x2db374: 0x27938fd8  addiu       $s3, $gp, -0x7028
    ctx->pc = 0x2db374u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938584));
    // 0x2db378: 0x1213000c  beq         $s0, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x2DB378u;
    {
        const bool branch_taken_0x2db378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x2DB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB378u;
        // 0x2db37c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db378) {
            ctx->pc = 0x2DB3ACu;
            goto label_2db3ac;
        }
    }
    ctx->pc = 0x2DB380u;
    // 0x2db380: 0x8e04ffe0  lw          $a0, -0x20($s0)
    ctx->pc = 0x2db380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967264)));
    // 0x2db384: 0x0  nop
    ctx->pc = 0x2db384u;
    // NOP
label_2db388:
    // 0x2db388: 0x2612ffe0  addiu       $s2, $s0, -0x20
    ctx->pc = 0x2db388u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x2db38c: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DB38Cu;
    SET_GPR_U32(ctx, 31, 0x2DB394u);
    ctx->pc = 0x2DB390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB38Cu;
    // 0x2db390: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DB38Cu, 0x2DB394u)) {
        return;
    }
    ctx->pc = 0x2DB394u;
label_2db394:
    // 0x2db394: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB394u;
    {
        const bool branch_taken_0x2db394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB394u;
        // 0x2db398: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db394) {
            ctx->pc = 0x2DB3ACu;
            goto label_2db3ac;
        }
    }
    ctx->pc = 0x2DB39Cu;
    // 0x2db39c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2db39cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2db3a0: 0x5613fff9  bnel        $s0, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DB3A0u;
    {
        const bool branch_taken_0x2db3a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x2db3a0) {
            ctx->pc = 0x2DB3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB3A0u;
            // 0x2db3a4: 0x8e04ffe0  lw          $a0, -0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db388;
        }
    }
    ctx->pc = 0x2DB3A8u;
    // 0x2db3a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2db3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db3ac:
    // 0x2db3ac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2db3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2db3b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2db3b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2db3b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2db3b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db3b8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2db3b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db3bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB3C0u;
        // 0x2db3c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB3C8u;
    // 0x2db3c8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2db3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2db3cc: 0x0  nop
    ctx->pc = 0x2db3ccu;
    // NOP
    // 0x2db3d0: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x2db3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    // 0x2db3d4: 0x0  nop
    ctx->pc = 0x2db3d4u;
    // NOP
    // 0x2db3d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2db3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2db3dc: 0x0  nop
    ctx->pc = 0x2db3dcu;
    // NOP
    // 0x2db3e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2db3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2db3e4: 0x0  nop
    ctx->pc = 0x2db3e4u;
    // NOP
    // 0x2db3e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2db3e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db3ec: 0x0  nop
    ctx->pc = 0x2db3ecu;
    // NOP
    ctx->pc = 0x2db3f0u;
}
