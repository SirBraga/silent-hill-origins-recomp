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

// Function: sub_00267630
// Address: 0x267630 - 0x2676e0
void sub_00267630_0x267630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267630_0x267630");
#endif

    switch (ctx->pc) {
        case 0x26768cu: goto label_26768c;
        case 0x2676c4u: goto label_2676c4;
        default: break;
    }

    ctx->pc = 0x267630u;

    // 0x267630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x267630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x267634: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x267634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x267638: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x267638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26763c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26763cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x267640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x267640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267644: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x267644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x267648: 0x54620022  bnel        $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x267648u;
    {
        const bool branch_taken_0x267648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x267648) {
            ctx->pc = 0x26764Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267648u;
            // 0x26764c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2676D4u;
            goto label_2676d4;
        }
    }
    ctx->pc = 0x267650u;
    // 0x267650: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x267650u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x267654: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x267654u;
    {
        const bool branch_taken_0x267654 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x267658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267654u;
        // 0x267658: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267654) {
            ctx->pc = 0x2676B8u;
            goto label_2676b8;
        }
    }
    ctx->pc = 0x26765Cu;
    // 0x26765c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x26765cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x267660: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x267660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267664: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x267664u;
    {
        const bool branch_taken_0x267664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267664u;
        // 0x267668: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267664) {
            ctx->pc = 0x2676BCu;
            goto label_2676bc;
        }
    }
    ctx->pc = 0x26766Cu;
    // 0x26766c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x26766cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x267670: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x267670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x267674: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267674u;
    {
        const bool branch_taken_0x267674 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x267678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267674u;
        // 0x267678: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267674) {
            ctx->pc = 0x267688u;
            goto label_267688;
        }
    }
    ctx->pc = 0x26767Cu;
    // 0x26767c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x26767cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x267680: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x267680u;
    {
        const bool branch_taken_0x267680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267680u;
        // 0x267684: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267680) {
            ctx->pc = 0x2676BCu;
            goto label_2676bc;
        }
    }
    ctx->pc = 0x267688u;
label_267688:
    // 0x267688: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x267688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_26768c:
    // 0x26768c: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x26768cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x267690: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x267690u;
    {
        const bool branch_taken_0x267690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267690u;
        // 0x267694: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267690) {
            ctx->pc = 0x2676BCu;
            goto label_2676bc;
        }
    }
    ctx->pc = 0x267698u;
    // 0x267698: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x267698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26769c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x26769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2676a0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2676a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2676a4: 0x14e3fff9  bne         $a3, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2676A4u;
    {
        const bool branch_taken_0x2676a4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x2676A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676A4u;
        // 0x2676a8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676a4) {
            ctx->pc = 0x26768Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26768c;
        }
    }
    ctx->pc = 0x2676ACu;
    // 0x2676ac: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2676acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2676b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2676B0u;
    {
        const bool branch_taken_0x2676b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2676B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676B0u;
        // 0x2676b4: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676b0) {
            ctx->pc = 0x2676BCu;
            goto label_2676bc;
        }
    }
    ctx->pc = 0x2676B8u;
label_2676b8:
    // 0x2676b8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2676b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_2676bc:
    // 0x2676bc: 0xc099f26  jal         func_267C98
    ctx->pc = 0x2676BCu;
    SET_GPR_U32(ctx, 31, 0x2676C4u);
    ctx->pc = 0x267C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x267C98u, 0x2676BCu, 0x2676C4u)) {
        return;
    }
    ctx->pc = 0x2676C4u;
label_2676c4:
    // 0x2676c4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2676c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2676c8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2676c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2676cc: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x2676ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x2676d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2676d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2676d4:
    // 0x2676d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2676d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2676d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2676D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2676DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676D8u;
        // 0x2676dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2676D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2676E0u;
}
