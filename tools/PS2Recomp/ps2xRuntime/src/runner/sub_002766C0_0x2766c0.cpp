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

// Function: sub_002766C0
// Address: 0x2766c0 - 0x276700
void sub_002766C0_0x2766c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002766C0_0x2766c0");
#endif

    switch (ctx->pc) {
        case 0x2766e4u: goto label_2766e4;
        default: break;
    }

    ctx->pc = 0x2766c0u;

    // 0x2766c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2766c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2766c4: 0x8f828f94  lw          $v0, -0x706C($gp)
    ctx->pc = 0x2766c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938516)));
    // 0x2766c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2766c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2766cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2766ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2766d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2766d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2766d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2766D4u;
    {
        const bool branch_taken_0x2766d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2766D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2766D4u;
        // 0x2766d8: 0xaf8087b4  sw          $zero, -0x784C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2766d4) {
            ctx->pc = 0x2766E8u;
            goto label_2766e8;
        }
    }
    ctx->pc = 0x2766DCu;
    // 0x2766dc: 0xc093106  jal         func_24C418
    ctx->pc = 0x2766DCu;
    SET_GPR_U32(ctx, 31, 0x2766E4u);
    ctx->pc = 0x2766E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2766DCu;
    // 0x2766e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x2766DCu, 0x2766E4u)) {
        return;
    }
    ctx->pc = 0x2766E4u;
label_2766e4:
    // 0x2766e4: 0xaf808f94  sw          $zero, -0x706C($gp)
    ctx->pc = 0x2766e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938516), GPR_U32(ctx, 0));
label_2766e8:
    // 0x2766e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2766e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2766ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2766ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2766f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2766f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2766f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2766F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2766F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2766F4u;
        // 0x2766f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2766F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2766FCu;
    // 0x2766fc: 0x0  nop
    ctx->pc = 0x2766fcu;
    // NOP
    ctx->pc = 0x276700u;
}
