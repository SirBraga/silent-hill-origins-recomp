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

// Function: sub_0025D400
// Address: 0x25d400 - 0x25d458
void sub_0025D400_0x25d400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D400_0x25d400");
#endif

    switch (ctx->pc) {
        case 0x25d428u: goto label_25d428;
        case 0x25d430u: goto label_25d430;
        default: break;
    }

    ctx->pc = 0x25d400u;

    // 0x25d400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d404: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25d404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25d408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d40c: 0x24910064  addiu       $s1, $a0, 0x64
    ctx->pc = 0x25d40cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x25d410: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25d410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25d414: 0x8c900064  lw          $s0, 0x64($a0)
    ctx->pc = 0x25d414u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x25d418: 0x5211000a  beql        $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x25D418u;
    {
        const bool branch_taken_0x25d418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x25d418) {
            ctx->pc = 0x25D41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D418u;
            // 0x25d41c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D444u;
            goto label_25d444;
        }
    }
    ctx->pc = 0x25D420u;
    // 0x25d420: 0x2604fff4  addiu       $a0, $s0, -0xC
    ctx->pc = 0x25d420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
    // 0x25d424: 0x0  nop
    ctx->pc = 0x25d424u;
    // NOP
label_25d428:
    // 0x25d428: 0xc0974de  jal         func_25D378
    ctx->pc = 0x25D428u;
    SET_GPR_U32(ctx, 31, 0x25D430u);
    ctx->pc = 0x25D42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D428u;
    // 0x25d42c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D378u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25D378u, 0x25D428u, 0x25D430u)) {
        return;
    }
    ctx->pc = 0x25D430u;
label_25d430:
    // 0x25d430: 0x0  nop
    ctx->pc = 0x25d430u;
    // NOP
    // 0x25d434: 0x0  nop
    ctx->pc = 0x25d434u;
    // NOP
    // 0x25d438: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x25D438u;
    {
        const bool branch_taken_0x25d438 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x25D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D438u;
        // 0x25d43c: 0x2604fff4  addiu       $a0, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d438) {
            ctx->pc = 0x25D428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25d428;
        }
    }
    ctx->pc = 0x25D440u;
    // 0x25d440: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25d440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25d444:
    // 0x25d444: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25d444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d44c: 0x3e00008  jr          $ra
    ctx->pc = 0x25D44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D44Cu;
        // 0x25d450: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D454u;
    // 0x25d454: 0x0  nop
    ctx->pc = 0x25d454u;
    // NOP
    ctx->pc = 0x25d458u;
}
