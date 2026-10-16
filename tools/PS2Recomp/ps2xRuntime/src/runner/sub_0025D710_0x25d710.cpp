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

// Function: sub_0025D710
// Address: 0x25d710 - 0x25d750
void sub_0025D710_0x25d710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D710_0x25d710");
#endif

    switch (ctx->pc) {
        case 0x25d730u: goto label_25d730;
        default: break;
    }

    ctx->pc = 0x25d710u;

    // 0x25d710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d714: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25d714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25d718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25d718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25d71c: 0x8f9085fc  lw          $s0, -0x7A04($gp)
    ctx->pc = 0x25d71cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
    // 0x25d720: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25d720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d728: 0xc097500  jal         func_25D400
    ctx->pc = 0x25D728u;
    SET_GPR_U32(ctx, 31, 0x25D730u);
    ctx->pc = 0x25D72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D728u;
    // 0x25d72c: 0x2308021  addu        $s0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D400u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25D400u, 0x25D728u, 0x25D730u)) {
        return;
    }
    ctx->pc = 0x25D730u;
label_25d730:
    // 0x25d730: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x25d730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25d734: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25d734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d738: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25d738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d73c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x25d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x25d740: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25d740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d748: 0x3e00008  jr          $ra
    ctx->pc = 0x25D748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D748u;
        // 0x25d74c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D750u;
}
