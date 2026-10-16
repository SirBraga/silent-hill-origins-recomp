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

// Function: sub_00306360
// Address: 0x306360 - 0x306400
void sub_00306360_0x306360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306360_0x306360");
#endif

    switch (ctx->pc) {
        case 0x306370u: goto label_306370;
        case 0x3063a0u: goto label_3063a0;
        case 0x3063b0u: goto label_3063b0;
        default: break;
    }

    ctx->pc = 0x306360u;

    // 0x306360: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x306360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x306364: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x306364u;
    {
        const bool branch_taken_0x306364 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x306368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306364u;
        // 0x306368: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306364) {
            ctx->pc = 0x3063F4u;
            goto label_3063f4;
        }
    }
    ctx->pc = 0x30636Cu;
    // 0x30636c: 0x0  nop
    ctx->pc = 0x30636cu;
    // NOP
label_306370:
    // 0x306370: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x306370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x306374: 0x864023  subu        $t0, $a0, $a2
    ctx->pc = 0x306374u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x306378: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x306378u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30637c: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x30637cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x306380: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x306380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x306384: 0x867021  addu        $t6, $a0, $a2
    ctx->pc = 0x306384u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x306388: 0x182102b  sltu        $v0, $t4, $v0
    ctx->pc = 0x306388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30638c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x30638Cu;
    {
        const bool branch_taken_0x30638c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30638Cu;
        // 0x306390: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30638c) {
            ctx->pc = 0x3063ECu;
            goto label_3063ec;
        }
    }
    ctx->pc = 0x306394u;
    // 0x306394: 0x2ccd0004  sltiu       $t5, $a2, 0x4
    ctx->pc = 0x306394u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x306398: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x306398u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30639c: 0x0  nop
    ctx->pc = 0x30639cu;
    // NOP
label_3063a0:
    // 0x3063a0: 0x1064821  addu        $t1, $t0, $a2
    ctx->pc = 0x3063a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3063a4: 0x15a0000b  bnez        $t5, . + 4 + (0xB << 2)
    ctx->pc = 0x3063A4u;
    {
        const bool branch_taken_0x3063a4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x3063A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063A4u;
        // 0x3063a8: 0x10a5823  subu        $t3, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3063a4) {
            ctx->pc = 0x3063D4u;
            goto label_3063d4;
        }
    }
    ctx->pc = 0x3063ACu;
    // 0x3063ac: 0x0  nop
    ctx->pc = 0x3063acu;
    // NOP
label_3063b0:
    // 0x3063b0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3063b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3063b4: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x3063b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x3063b8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x3063b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3063bc: 0x2d440004  sltiu       $a0, $t2, 0x4
    ctx->pc = 0x3063bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3063c0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x3063c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x3063c4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x3063c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x3063c8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3063c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x3063cc: 0x1080fff8  beqz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3063CCu;
    {
        const bool branch_taken_0x3063cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3063D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063CCu;
        // 0x3063d0: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3063cc) {
            ctx->pc = 0x3063B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3063b0;
        }
    }
    ctx->pc = 0x3063D4u;
label_3063d4:
    // 0x3063d4: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x3063d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3063d8: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x3063d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x3063dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3063dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3063e0: 0x182102b  sltu        $v0, $t4, $v0
    ctx->pc = 0x3063e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3063e4: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3063E4u;
    {
        const bool branch_taken_0x3063e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3063e4) {
            ctx->pc = 0x3063E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3063E4u;
            // 0x3063e8: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3063A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3063a0;
        }
    }
    ctx->pc = 0x3063ECu;
label_3063ec:
    // 0x3063ec: 0x14a0ffe0  bnez        $a1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x3063ECu;
    {
        const bool branch_taken_0x3063ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3063F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063ECu;
        // 0x3063f0: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3063ec) {
            ctx->pc = 0x306370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306370;
        }
    }
    ctx->pc = 0x3063F4u;
label_3063f4:
    // 0x3063f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3063F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3063F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3063FCu;
    // 0x3063fc: 0x0  nop
    ctx->pc = 0x3063fcu;
    // NOP
    ctx->pc = 0x306400u;
}
