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

// Function: sub_001920F0
// Address: 0x1920f0 - 0x192130
void sub_001920F0_0x1920f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001920F0_0x1920f0");
#endif

    switch (ctx->pc) {
        case 0x192110u: goto label_192110;
        case 0x19211cu: goto label_19211c;
        default: break;
    }

    ctx->pc = 0x1920f0u;

    // 0x1920f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1920f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1920f4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1920f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1920f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1920f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1920fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1920fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192104: 0x8c448ac0  lw          $a0, -0x7540($v0)
    ctx->pc = 0x192104u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338AC0u));
    // 0x192108: 0xc0622da  jal         func_188B68
    ctx->pc = 0x192108u;
    SET_GPR_U32(ctx, 31, 0x192110u);
    ctx->pc = 0x19210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192108u;
    // 0x19210c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188B68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188B68u, 0x192108u, 0x192110u)) {
        return;
    }
    ctx->pc = 0x192110u;
label_192110:
    // 0x192110: 0x8e0500fc  lw          $a1, 0xFC($s0)
    ctx->pc = 0x192110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x192114: 0xc0624ba  jal         func_1892E8
    ctx->pc = 0x192114u;
    SET_GPR_U32(ctx, 31, 0x19211Cu);
    ctx->pc = 0x192118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192114u;
    // 0x192118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1892E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1892E8u, 0x192114u, 0x19211Cu)) {
        return;
    }
    ctx->pc = 0x19211Cu;
label_19211c:
    // 0x19211c: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x19211cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x192120: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x192120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192128: 0x3e00008  jr          $ra
    ctx->pc = 0x192128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192128u;
        // 0x19212c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192130u;
}
