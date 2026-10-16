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

// Function: sub_00184830
// Address: 0x184830 - 0x184850
void sub_00184830_0x184830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184830_0x184830");
#endif

    switch (ctx->pc) {
        case 0x184844u: goto label_184844;
        default: break;
    }

    ctx->pc = 0x184830u;

    // 0x184830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184834: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x184834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18483c: 0xc06113e  jal         func_1844F8
    ctx->pc = 0x18483Cu;
    SET_GPR_U32(ctx, 31, 0x184844u);
    ctx->pc = 0x184840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18483Cu;
    // 0x184840: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1844F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1844F8u, 0x18483Cu, 0x184844u)) {
        return;
    }
    ctx->pc = 0x184844u;
label_184844:
    // 0x184844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184848: 0x3e00008  jr          $ra
    ctx->pc = 0x184848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184848u;
        // 0x18484c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184850u;
}
