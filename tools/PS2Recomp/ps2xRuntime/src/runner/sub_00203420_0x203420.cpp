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

// Function: sub_00203420
// Address: 0x203420 - 0x203448
void sub_00203420_0x203420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203420_0x203420");
#endif

    switch (ctx->pc) {
        case 0x203420u: goto label_203420;
        case 0x203424u: goto label_203424;
        case 0x203428u: goto label_203428;
        case 0x20342cu: goto label_20342c;
        case 0x203430u: goto label_203430;
        case 0x203434u: goto label_203434;
        case 0x203438u: goto label_203438;
        case 0x20343cu: goto label_20343c;
        case 0x203440u: goto label_203440;
        case 0x203444u: goto label_203444;
        default: break;
    }

    ctx->pc = 0x203420u;

label_203420:
    // 0x203420: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x203420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_203424:
    // 0x203424: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_203428:
    // 0x203428: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x203428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_20342c:
    // 0x20342c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20342cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_203430:
    // 0x203430: 0x40f809  jalr        $v0
label_203434:
    if (ctx->pc == 0x203434u) {
        ctx->pc = 0x203434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203430u;
        // 0x203434: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203438u;
        goto label_203438;
    }
    ctx->pc = 0x203430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203438u);
        ctx->pc = 0x203434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203430u;
        // 0x203434: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203430u, 0x203438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203438u;
label_203438:
    // 0x203438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20343c:
    // 0x20343c: 0x3e00008  jr          $ra
label_203440:
    if (ctx->pc == 0x203440u) {
        ctx->pc = 0x203440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20343Cu;
        // 0x203440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203444u;
        goto label_203444;
    }
    ctx->pc = 0x20343Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20343Cu;
        // 0x203440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20343Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203444u;
label_203444:
    // 0x203444: 0x0  nop
    ctx->pc = 0x203444u;
    // NOP
    ctx->pc = 0x203448u;
}
