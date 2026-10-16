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

// Function: sub_001FF308
// Address: 0x1ff308 - 0x1ff338
void sub_001FF308_0x1ff308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF308_0x1ff308");
#endif

    switch (ctx->pc) {
        case 0x1ff32cu: goto label_1ff32c;
        default: break;
    }

    ctx->pc = 0x1ff308u;

    // 0x1ff308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ff308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ff30c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ff30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff314: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1ff314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1ff318: 0x24a51a80  addiu       $a1, $a1, 0x1A80
    ctx->pc = 0x1ff318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6784));
    // 0x1ff31c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ff31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff320: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1ff320u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ff324: 0xc07fb36  jal         func_1FECD8
    ctx->pc = 0x1FF324u;
    SET_GPR_U32(ctx, 31, 0x1FF32Cu);
    ctx->pc = 0x1FF328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF324u;
    // 0x1ff328: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FECD8u, 0x1FF324u, 0x1FF32Cu)) {
        return;
    }
    ctx->pc = 0x1FF32Cu;
label_1ff32c:
    // 0x1ff32c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff330: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF330u;
        // 0x1ff334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF338u;
}
