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

// Function: sub_00315610
// Address: 0x315610 - 0x315650
void sub_00315610_0x315610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315610_0x315610");
#endif

    switch (ctx->pc) {
        case 0x315644u: goto label_315644;
        default: break;
    }

    ctx->pc = 0x315610u;

    // 0x315610: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x315610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x315614: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x315614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x315618: 0x8c627034  lw          $v0, 0x7034($v1)
    ctx->pc = 0x315618u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x687034u));
    // 0x31561c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31561cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x315620: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x315620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x315624: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x315624u;
    {
        const bool branch_taken_0x315624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315624u;
        // 0x315628: 0xac627034  sw          $v0, 0x7034($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28724), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315624) {
            ctx->pc = 0x315644u;
            goto label_315644;
        }
    }
    ctx->pc = 0x31562Cu;
    // 0x31562c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31562cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x315630: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x315630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x315634: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x315634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x315638: 0x8c447618  lw          $a0, 0x7618($v0)
    ctx->pc = 0x315638u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x687618u));
    // 0x31563c: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x31563Cu;
    SET_GPR_U32(ctx, 31, 0x315644u);
    ctx->pc = 0x315640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31563Cu;
    // 0x315640: 0xaca37030  sw          $v1, 0x7030($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 28720), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x31563Cu, 0x315644u)) {
        return;
    }
    ctx->pc = 0x315644u;
label_315644:
    // 0x315644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315648: 0x3e00008  jr          $ra
    ctx->pc = 0x315648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315648u;
        // 0x31564c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315650u;
}
