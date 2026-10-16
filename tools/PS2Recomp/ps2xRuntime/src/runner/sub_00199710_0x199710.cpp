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

// Function: sub_00199710
// Address: 0x199710 - 0x199760
void sub_00199710_0x199710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199710_0x199710");
#endif

    switch (ctx->pc) {
        case 0x199730u: goto label_199730;
        default: break;
    }

    ctx->pc = 0x199710u;

    // 0x199710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199714: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x199714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x199718: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19971c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19971cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199720: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199720u;
    {
        const bool branch_taken_0x199720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x199724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199720u;
        // 0x199724: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199720) {
            ctx->pc = 0x199730u;
            goto label_199730;
        }
    }
    ctx->pc = 0x199728u;
    // 0x199728: 0xc066296  jal         func_198A58
    ctx->pc = 0x199728u;
    SET_GPR_U32(ctx, 31, 0x199730u);
    ctx->pc = 0x19972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199728u;
    // 0x19972c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198A58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x198A58u, 0x199728u, 0x199730u)) {
        return;
    }
    ctx->pc = 0x199730u;
label_199730:
    // 0x199730: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x199730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x199734: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x199734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19973c: 0x3e00008  jr          $ra
    ctx->pc = 0x19973Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19973Cu;
        // 0x199740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19973Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199744u;
    // 0x199744: 0x0  nop
    ctx->pc = 0x199744u;
    // NOP
    // 0x199748: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x199748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19974c: 0x0  nop
    ctx->pc = 0x19974cu;
    // NOP
    // 0x199750: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x199750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x199754: 0x0  nop
    ctx->pc = 0x199754u;
    // NOP
    // 0x199758: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x199758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19975c: 0x0  nop
    ctx->pc = 0x19975cu;
    // NOP
    ctx->pc = 0x199760u;
}
