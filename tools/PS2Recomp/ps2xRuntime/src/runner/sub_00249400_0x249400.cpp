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

// Function: sub_00249400
// Address: 0x249400 - 0x249428
void sub_00249400_0x249400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249400_0x249400");
#endif

    switch (ctx->pc) {
        case 0x249400u: goto label_249400;
        case 0x249404u: goto label_249404;
        case 0x249408u: goto label_249408;
        case 0x24940cu: goto label_24940c;
        case 0x249410u: goto label_249410;
        case 0x249414u: goto label_249414;
        case 0x249418u: goto label_249418;
        case 0x24941cu: goto label_24941c;
        case 0x249420u: goto label_249420;
        case 0x249424u: goto label_249424;
        default: break;
    }

    ctx->pc = 0x249400u;

label_249400:
    // 0x249400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_249404:
    // 0x249404: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_249408:
    if (ctx->pc == 0x249408u) {
        ctx->pc = 0x249408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249404u;
        // 0x249408: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24940Cu;
        goto label_24940c;
    }
    ctx->pc = 0x249404u;
    {
        const bool branch_taken_0x249404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x249408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249404u;
        // 0x249408: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249404) {
            ctx->pc = 0x24941Cu;
            goto label_24941c;
        }
    }
    ctx->pc = 0x24940Cu;
label_24940c:
    // 0x24940c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24940cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_249410:
    // 0x249410: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x249410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_249414:
    // 0x249414: 0x40f809  jalr        $v0
label_249418:
    if (ctx->pc == 0x249418u) {
        ctx->pc = 0x24941Cu;
        goto label_24941c;
    }
    ctx->pc = 0x249414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24941Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249414u, 0x24941Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24941Cu;
label_24941c:
    // 0x24941c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24941cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249420:
    // 0x249420: 0x3e00008  jr          $ra
label_249424:
    if (ctx->pc == 0x249424u) {
        ctx->pc = 0x249424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249420u;
        // 0x249424: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249428u;
        goto label_fallthrough_0x249420;
    }
    ctx->pc = 0x249420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249420u;
        // 0x249424: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x249420:
    ctx->pc = 0x249428u;
}
