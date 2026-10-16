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

// Function: sub_00207038
// Address: 0x207038 - 0x207080
void sub_00207038_0x207038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207038_0x207038");
#endif

    switch (ctx->pc) {
        case 0x207060u: goto label_207060;
        default: break;
    }

    ctx->pc = 0x207038u;

    // 0x207038: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20703c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x20703cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x207040: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x207040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207044: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x207044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x207048: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x207048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x20704c: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x20704cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x207050: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x207050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x207054: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x207054u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5C0298u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C0298u, _value); } while (0);
    // 0x207058: 0xc09545a  jal         func_255168
    ctx->pc = 0x207058u;
    SET_GPR_U32(ctx, 31, 0x207060u);
    ctx->pc = 0x20705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207058u;
    // 0x20705c: 0x24a57010  addiu       $a1, $a1, 0x7010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x207058u, 0x207060u)) {
        return;
    }
    ctx->pc = 0x207060u;
label_207060:
    // 0x207060: 0x8e020298  lw          $v0, 0x298($s0)
    ctx->pc = 0x207060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x207064: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x207064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207068: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x207068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20706c: 0x3e00008  jr          $ra
    ctx->pc = 0x20706Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20706Cu;
        // 0x207070: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20706Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207074u;
    // 0x207074: 0x0  nop
    ctx->pc = 0x207074u;
    // NOP
    // 0x207078: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x207078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20707c: 0x0  nop
    ctx->pc = 0x20707cu;
    // NOP
    ctx->pc = 0x207080u;
}
