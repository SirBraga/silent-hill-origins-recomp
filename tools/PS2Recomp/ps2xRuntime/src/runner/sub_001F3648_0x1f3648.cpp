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

// Function: sub_001F3648
// Address: 0x1f3648 - 0x1f36b8
void sub_001F3648_0x1f3648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3648_0x1f3648");
#endif

    switch (ctx->pc) {
        case 0x1f3660u: goto label_1f3660;
        case 0x1f36a4u: goto label_1f36a4;
        default: break;
    }

    ctx->pc = 0x1f3648u;

    // 0x1f3648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f3648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f364c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f364cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3654: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1f3654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f3658: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F3658u;
    {
        const bool branch_taken_0x1f3658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3658u;
        // 0x1f365c: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3658) {
            ctx->pc = 0x1F369Cu;
            goto label_1f369c;
        }
    }
    ctx->pc = 0x1F3660u;
label_1f3660:
    // 0x1f3660: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x1f3660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1f3664: 0x33603  sra         $a2, $v1, 24
    ctx->pc = 0x1f3664u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 24));
    // 0x1f3668: 0x24c2ffbf  addiu       $v0, $a2, -0x41
    ctx->pc = 0x1f3668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967231));
    // 0x1f366c: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x1f366cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x1f3670: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3670u;
    {
        const bool branch_taken_0x1f3670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3670u;
        // 0x1f3674: 0x24c20020  addiu       $v0, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3670) {
            ctx->pc = 0x1F3680u;
            goto label_1f3680;
        }
    }
    ctx->pc = 0x1F3678u;
    // 0x1f3678: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1f3678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f367c: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x1f367cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
label_1f3680:
    // 0x1f3680: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x1f3680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x1f3684: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f3684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f3688: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1f3688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1f368c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1f368cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f3690: 0x463826  xor         $a3, $v0, $a2
    ctx->pc = 0x1f3690u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x1f3694: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1F3694u;
    {
        const bool branch_taken_0x1f3694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3694u;
        // 0x1f3698: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3694) {
            ctx->pc = 0x1F3660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3660;
        }
    }
    ctx->pc = 0x1F369Cu;
label_1f369c:
    // 0x1f369c: 0xc07cdae  jal         func_1F36B8
    ctx->pc = 0x1F369Cu;
    SET_GPR_U32(ctx, 31, 0x1F36A4u);
    ctx->pc = 0x1F36A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F369Cu;
    // 0x1f36a0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F36B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F36B8u, 0x1F369Cu, 0x1F36A4u)) {
        return;
    }
    ctx->pc = 0x1F36A4u;
label_1f36a4:
    // 0x1f36a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f36a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f36a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F36A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F36ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36A8u;
        // 0x1f36ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F36A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F36B0u;
    // 0x1f36b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1f36b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f36b4: 0x0  nop
    ctx->pc = 0x1f36b4u;
    // NOP
    ctx->pc = 0x1f36b8u;
}
