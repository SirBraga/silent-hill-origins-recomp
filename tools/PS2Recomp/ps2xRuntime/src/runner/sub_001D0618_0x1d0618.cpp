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

// Function: sub_001D0618
// Address: 0x1d0618 - 0x1d0670
void sub_001D0618_0x1d0618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0618_0x1d0618");
#endif

    switch (ctx->pc) {
        case 0x1d0638u: goto label_1d0638;
        case 0x1d0650u: goto label_1d0650;
        default: break;
    }

    ctx->pc = 0x1d0618u;

    // 0x1d0618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d061c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d061cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d0620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0624: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D0624u;
    {
        const bool branch_taken_0x1d0624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0624u;
        // 0x1d0628: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0624) {
            ctx->pc = 0x1D0658u;
            goto label_1d0658;
        }
    }
    ctx->pc = 0x1D062Cu;
    // 0x1d062c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d062cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d0630: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1D0630u;
    SET_GPR_U32(ctx, 31, 0x1D0638u);
    ctx->pc = 0x1D0634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0630u;
    // 0x1d0634: 0x24a509b8  addiu       $a1, $a1, 0x9B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1D0630u, 0x1D0638u)) {
        return;
    }
    ctx->pc = 0x1D0638u;
label_1d0638:
    // 0x1d0638: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0638u;
    {
        const bool branch_taken_0x1d0638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0638u;
        // 0x1d063c: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0638) {
            ctx->pc = 0x1D065Cu;
            goto label_1d065c;
        }
    }
    ctx->pc = 0x1D0640u;
    // 0x1d0640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0644: 0x24c60670  addiu       $a2, $a2, 0x670
    ctx->pc = 0x1d0644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1648));
    // 0x1d0648: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D0648u;
    SET_GPR_U32(ctx, 31, 0x1D0650u);
    ctx->pc = 0x1D064Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0648u;
    // 0x1d064c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D0648u, 0x1D0650u)) {
        return;
    }
    ctx->pc = 0x1D0650u;
label_1d0650:
    // 0x1d0650: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0650u;
    {
        const bool branch_taken_0x1d0650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0650u;
        // 0x1d0654: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0650) {
            ctx->pc = 0x1D0660u;
            goto label_1d0660;
        }
    }
    ctx->pc = 0x1D0658u;
label_1d0658:
    // 0x1d0658: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d0658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d065c:
    // 0x1d065c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d065cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0660:
    // 0x1d0660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0664: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d0664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0668: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0668u;
        // 0x1d066c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0670u;
}
