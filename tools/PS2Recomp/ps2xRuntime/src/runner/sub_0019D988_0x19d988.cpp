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

// Function: sub_0019D988
// Address: 0x19d988 - 0x19d9c0
void sub_0019D988_0x19d988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D988_0x19d988");
#endif

    switch (ctx->pc) {
        case 0x19d99cu: goto label_19d99c;
        case 0x19d9acu: goto label_19d9ac;
        default: break;
    }

    ctx->pc = 0x19d988u;

    // 0x19d988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d98c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19d98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19d990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d994: 0xc08abe8  jal         func_22AFA0
    ctx->pc = 0x19D994u;
    SET_GPR_U32(ctx, 31, 0x19D99Cu);
    ctx->pc = 0x19D998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D994u;
    // 0x19d998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AFA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AFA0u, 0x19D994u, 0x19D99Cu)) {
        return;
    }
    ctx->pc = 0x19D99Cu;
label_19d99c:
    // 0x19d99c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x19d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x19d9a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19d9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d9a4: 0xc08abd2  jal         func_22AF48
    ctx->pc = 0x19D9A4u;
    SET_GPR_U32(ctx, 31, 0x19D9ACu);
    ctx->pc = 0x19D9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D9A4u;
    // 0x19d9a8: 0x8c649078  lw          $a0, -0x6F88($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AF48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AF48u, 0x19D9A4u, 0x19D9ACu)) {
        return;
    }
    ctx->pc = 0x19D9ACu;
label_19d9ac:
    // 0x19d9ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19d9acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d9b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d9b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19d9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x19D9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9B8u;
        // 0x19d9bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D9C0u;
}
