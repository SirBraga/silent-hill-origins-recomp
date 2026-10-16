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

// Function: sub_001FC700
// Address: 0x1fc700 - 0x1fc738
void sub_001FC700_0x1fc700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC700_0x1fc700");
#endif

    switch (ctx->pc) {
        case 0x1fc720u: goto label_1fc720;
        default: break;
    }

    ctx->pc = 0x1fc700u;

    // 0x1fc700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fc704: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fc704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fc708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fc70c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fc70cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc710: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1fc710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1fc714: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x1fc714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x1fc718: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1FC718u;
    SET_GPR_U32(ctx, 31, 0x1FC720u);
    ctx->pc = 0x1FC71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC718u;
    // 0x1fc71c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1FC718u, 0x1FC720u)) {
        return;
    }
    ctx->pc = 0x1FC720u;
label_1fc720:
    // 0x1fc720: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fc720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc728: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fc728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc72c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC72Cu;
        // 0x1fc730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC734u;
    // 0x1fc734: 0x0  nop
    ctx->pc = 0x1fc734u;
    // NOP
    ctx->pc = 0x1fc738u;
}
