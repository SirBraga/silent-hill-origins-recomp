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

// Function: sub_00196978
// Address: 0x196978 - 0x1969c0
void sub_00196978_0x196978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196978_0x196978");
#endif

    switch (ctx->pc) {
        case 0x1969a4u: goto label_1969a4;
        default: break;
    }

    ctx->pc = 0x196978u;

    // 0x196978: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x196978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19697c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x19697cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x196980: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x196980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x196984: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x196984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19698c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19698cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x196990: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x196990u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x196994: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x196994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x196998: 0xa2000022  sb          $zero, 0x22($s0)
    ctx->pc = 0x196998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x19699c: 0xc088b86  jal         func_222E18
    ctx->pc = 0x19699Cu;
    SET_GPR_U32(ctx, 31, 0x1969A4u);
    ctx->pc = 0x1969A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19699Cu;
    // 0x1969a0: 0xa2020021  sb          $v0, 0x21($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222E18u, 0x19699Cu, 0x1969A4u)) {
        return;
    }
    ctx->pc = 0x1969A4u;
label_1969a4:
    // 0x1969a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1969a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1969a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1969a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1969ac: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1969acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1969b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1969b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1969b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1969b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1969b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1969B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1969BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969B8u;
        // 0x1969bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1969B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1969C0u;
}
