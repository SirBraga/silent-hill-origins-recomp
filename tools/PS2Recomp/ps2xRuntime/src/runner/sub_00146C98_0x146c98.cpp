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

// Function: sub_00146C98
// Address: 0x146c98 - 0x146cd0
void sub_00146C98_0x146c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146C98_0x146c98");
#endif

    switch (ctx->pc) {
        case 0x146cb8u: goto label_146cb8;
        default: break;
    }

    ctx->pc = 0x146c98u;

    // 0x146c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146c9c: 0x24a20044  addiu       $v0, $a1, 0x44
    ctx->pc = 0x146c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 68));
    // 0x146ca0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x146ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x146ca4: 0x5100a  movz        $v0, $zero, $a1
    ctx->pc = 0x146ca4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
    // 0x146ca8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x146ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146cac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146cb0: 0xc0773c4  jal         func_1DCF10
    ctx->pc = 0x146CB0u;
    SET_GPR_U32(ctx, 31, 0x146CB8u);
    ctx->pc = 0x146CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146CB0u;
    // 0x146cb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCF10u, 0x146CB0u, 0x146CB8u)) {
        return;
    }
    ctx->pc = 0x146CB8u;
label_146cb8:
    // 0x146cb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x146cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146cbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146cc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x146cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x146CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146CC4u;
        // 0x146cc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146CCCu;
    // 0x146ccc: 0x0  nop
    ctx->pc = 0x146cccu;
    // NOP
    ctx->pc = 0x146cd0u;
}
