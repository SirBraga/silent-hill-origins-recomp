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

// Function: sub_00210640
// Address: 0x210640 - 0x210678
void sub_00210640_0x210640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210640_0x210640");
#endif

    switch (ctx->pc) {
        case 0x210640u: goto label_210640;
        case 0x210644u: goto label_210644;
        case 0x210648u: goto label_210648;
        case 0x21064cu: goto label_21064c;
        case 0x210650u: goto label_210650;
        case 0x210654u: goto label_210654;
        case 0x210658u: goto label_210658;
        case 0x21065cu: goto label_21065c;
        case 0x210660u: goto label_210660;
        case 0x210664u: goto label_210664;
        case 0x210668u: goto label_210668;
        case 0x21066cu: goto label_21066c;
        case 0x210670u: goto label_210670;
        case 0x210674u: goto label_210674;
        default: break;
    }

    ctx->pc = 0x210640u;

label_210640:
    // 0x210640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x210640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_210644:
    // 0x210644: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x210644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_210648:
    // 0x210648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x210648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21064c:
    // 0x21064c: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x21064cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_210650:
    // 0x210650: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x210650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_210654:
    // 0x210654: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x210654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_210658:
    // 0x210658: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x210658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_21065c:
    // 0x21065c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21065cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_210660:
    // 0x210660: 0x60f809  jalr        $v1
label_210664:
    if (ctx->pc == 0x210664u) {
        ctx->pc = 0x210668u;
        goto label_210668;
    }
    ctx->pc = 0x210660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x210668u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210660u, 0x210668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210668u;
label_210668:
    // 0x210668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21066c:
    // 0x21066c: 0x3e00008  jr          $ra
label_210670:
    if (ctx->pc == 0x210670u) {
        ctx->pc = 0x210670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21066Cu;
        // 0x210670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210674u;
        goto label_210674;
    }
    ctx->pc = 0x21066Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21066Cu;
        // 0x210670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21066Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210674u;
label_210674:
    // 0x210674: 0x0  nop
    ctx->pc = 0x210674u;
    // NOP
    ctx->pc = 0x210678u;
}
