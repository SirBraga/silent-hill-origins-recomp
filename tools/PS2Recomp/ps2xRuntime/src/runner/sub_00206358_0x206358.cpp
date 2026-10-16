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

// Function: sub_00206358
// Address: 0x206358 - 0x206408
void sub_00206358_0x206358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206358_0x206358");
#endif

    switch (ctx->pc) {
        case 0x206388u: goto label_206388;
        case 0x2063c8u: goto label_2063c8;
        case 0x2063f4u: goto label_2063f4;
        default: break;
    }

    ctx->pc = 0x206358u;

    // 0x206358: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x206358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20635c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20635cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x206360: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x206360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x206364: 0x24423ee8  addiu       $v0, $v0, 0x3EE8
    ctx->pc = 0x206364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16104));
    // 0x206368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x206368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20636c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20636cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206374: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x206374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x206378: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x206378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20637c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x20637Cu;
    {
        const bool branch_taken_0x20637c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x206380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20637Cu;
        // 0x206380: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20637c) {
            ctx->pc = 0x2063E0u;
            goto label_2063e0;
        }
    }
    ctx->pc = 0x206384u;
    // 0x206384: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x206384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_206388:
    // 0x206388: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x206388u;
    {
        const bool branch_taken_0x206388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x206388) {
            ctx->pc = 0x20638Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206388u;
            // 0x20638c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2063D8u;
            goto label_2063d8;
        }
    }
    ctx->pc = 0x206390u;
    // 0x206390: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x206390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x206394: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x206394u;
    {
        const bool branch_taken_0x206394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x206398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206394u;
        // 0x206398: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206394) {
            ctx->pc = 0x2063A4u;
            goto label_2063a4;
        }
    }
    ctx->pc = 0x20639Cu;
    // 0x20639c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20639Cu;
    {
        const bool branch_taken_0x20639c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2063A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20639Cu;
        // 0x2063a0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20639c) {
            ctx->pc = 0x2063A8u;
            goto label_2063a8;
        }
    }
    ctx->pc = 0x2063A4u;
label_2063a4:
    // 0x2063a4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2063a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2063a8:
    // 0x2063a8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2063a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2063ac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2063ACu;
    {
        const bool branch_taken_0x2063ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2063B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063ACu;
        // 0x2063b0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2063ac) {
            ctx->pc = 0x2063BCu;
            goto label_2063bc;
        }
    }
    ctx->pc = 0x2063B4u;
    // 0x2063b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2063B4u;
    {
        const bool branch_taken_0x2063b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2063B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063B4u;
        // 0x2063b8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2063b4) {
            ctx->pc = 0x2063C0u;
            goto label_2063c0;
        }
    }
    ctx->pc = 0x2063BCu;
label_2063bc:
    // 0x2063bc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2063bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_2063c0:
    // 0x2063c0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x2063C0u;
    SET_GPR_U32(ctx, 31, 0x2063C8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2063C0u, 0x2063C8u)) {
        return;
    }
    ctx->pc = 0x2063C8u;
label_2063c8:
    // 0x2063c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2063c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2063cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2063ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2063d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2063d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2063d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2063d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2063d8:
    // 0x2063d8: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2063D8u;
    {
        const bool branch_taken_0x2063d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2063d8) {
            ctx->pc = 0x2063DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2063D8u;
            // 0x2063dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206388;
        }
    }
    ctx->pc = 0x2063E0u;
label_2063e0:
    // 0x2063e0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2063e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2063e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2063E4u;
    {
        const bool branch_taken_0x2063e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2063e4) {
            ctx->pc = 0x2063E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2063E4u;
            // 0x2063e8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2063F8u;
            goto label_2063f8;
        }
    }
    ctx->pc = 0x2063ECu;
    // 0x2063ec: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x2063ECu;
    SET_GPR_U32(ctx, 31, 0x2063F4u);
    ctx->pc = 0x2063F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2063ECu;
    // 0x2063f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2063ECu, 0x2063F4u)) {
        return;
    }
    ctx->pc = 0x2063F4u;
label_2063f4:
    // 0x2063f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2063f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2063f8:
    // 0x2063f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2063f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2063fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2063fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206400: 0x3e00008  jr          $ra
    ctx->pc = 0x206400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206400u;
        // 0x206404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206408u;
}
