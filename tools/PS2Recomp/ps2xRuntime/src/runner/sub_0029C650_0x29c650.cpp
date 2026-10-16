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

// Function: sub_0029C650
// Address: 0x29c650 - 0x29c698
void sub_0029C650_0x29c650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C650_0x29c650");
#endif

    switch (ctx->pc) {
        case 0x29c668u: goto label_29c668;
        default: break;
    }

    ctx->pc = 0x29c650u;

    // 0x29c650: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x29c650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29c654: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x29c654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x29c658: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x29c658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x29c65c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29C65Cu;
    {
        const bool branch_taken_0x29c65c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C65Cu;
        // 0x29c660: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c65c) {
            ctx->pc = 0x29C684u;
            goto label_29c684;
        }
    }
    ctx->pc = 0x29C664u;
    // 0x29c664: 0x0  nop
    ctx->pc = 0x29c664u;
    // NOP
label_29c668:
    // 0x29c668: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x29c668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29c66c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x29c66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29c670: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x29c670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29c674: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x29c674u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x29c678: 0x0  nop
    ctx->pc = 0x29c678u;
    // NOP
    // 0x29c67c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29C67Cu;
    {
        const bool branch_taken_0x29c67c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c67c) {
            ctx->pc = 0x29C668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c668;
        }
    }
    ctx->pc = 0x29C684u;
label_29c684:
    // 0x29c684: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x29c684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x29c688: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29c688u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29c68c: 0x3e00008  jr          $ra
    ctx->pc = 0x29C68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C694u;
    // 0x29c694: 0x0  nop
    ctx->pc = 0x29c694u;
    // NOP
    ctx->pc = 0x29c698u;
}
