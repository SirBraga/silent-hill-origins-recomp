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

// Function: sub_00225C50
// Address: 0x225c50 - 0x225c98
void sub_00225C50_0x225c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225C50_0x225c50");
#endif

    switch (ctx->pc) {
        case 0x225c70u: goto label_225c70;
        case 0x225c78u: goto label_225c78;
        default: break;
    }

    ctx->pc = 0x225c50u;

    // 0x225c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225c54: 0x8f8283ac  lw          $v0, -0x7C54($gp)
    ctx->pc = 0x225c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935468)));
    // 0x225c58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x225c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x225c5c: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x225c5cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x225c60: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x225C60u;
    {
        const bool branch_taken_0x225c60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x225C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C60u;
        // 0x225c64: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c60) {
            ctx->pc = 0x225C80u;
            goto label_225c80;
        }
    }
    ctx->pc = 0x225C68u;
    // 0x225c68: 0xc09383a  jal         func_24E0E8
    ctx->pc = 0x225C68u;
    SET_GPR_U32(ctx, 31, 0x225C70u);
    ctx->pc = 0x24E0E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E0E8u, 0x225C68u, 0x225C70u)) {
        return;
    }
    ctx->pc = 0x225C70u;
label_225c70:
    // 0x225c70: 0xc0932cc  jal         func_24CB30
    ctx->pc = 0x225C70u;
    SET_GPR_U32(ctx, 31, 0x225C78u);
    ctx->pc = 0x24CB30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB30u, 0x225C70u, 0x225C78u)) {
        return;
    }
    ctx->pc = 0x225C78u;
label_225c78:
    // 0x225c78: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x225c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x225c7c: 0xac4010ec  sw          $zero, 0x10EC($v0)
    ctx->pc = 0x225c7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7310ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310ECu, _value); } while (0);
label_225c80:
    // 0x225c80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x225c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225c88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x225c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x225C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C8Cu;
        // 0x225c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225C94u;
    // 0x225c94: 0x0  nop
    ctx->pc = 0x225c94u;
    // NOP
    ctx->pc = 0x225c98u;
}
