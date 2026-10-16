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

// Function: sub_001D8778
// Address: 0x1d8778 - 0x1d87d8
void sub_001D8778_0x1d8778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8778_0x1d8778");
#endif

    switch (ctx->pc) {
        case 0x1d87a8u: goto label_1d87a8;
        case 0x1d87c8u: goto label_1d87c8;
        default: break;
    }

    ctx->pc = 0x1d8778u;

    // 0x1d8778: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d8778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d877c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d877cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d8780: 0x8c439da0  lw          $v1, -0x6260($v0)
    ctx->pc = 0x1d8780u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339DA0u));
    // 0x1d8784: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d8784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d8788: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1D8788u;
    {
        const bool branch_taken_0x1d8788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8788u;
        // 0x1d878c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8788) {
            ctx->pc = 0x1D87C8u;
            goto label_1d87c8;
        }
    }
    ctx->pc = 0x1D8790u;
    // 0x1d8790: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x1d8790u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x1d8794: 0x8e0289dc  lw          $v0, -0x7624($s0)
    ctx->pc = 0x1d8794u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F89DCu));
    // 0x1d8798: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1D8798u;
    {
        const bool branch_taken_0x1d8798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8798) {
            ctx->pc = 0x1D879Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8798u;
            // 0x1d879c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D87CCu;
            goto label_1d87cc;
        }
    }
    ctx->pc = 0x1D87A0u;
    // 0x1d87a0: 0xc044eca  jal         func_113B28
    ctx->pc = 0x1D87A0u;
    SET_GPR_U32(ctx, 31, 0x1D87A8u);
    ctx->pc = 0x113B28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113B28u, 0x1D87A0u, 0x1D87A8u)) {
        return;
    }
    ctx->pc = 0x1D87A8u;
label_1d87a8:
    // 0x1d87a8: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x1d87a8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d87ac: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d87acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d87b0: 0x8c629da4  lw          $v0, -0x625C($v1)
    ctx->pc = 0x1d87b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339DA4u));
    // 0x1d87b4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D87B4u;
    {
        const bool branch_taken_0x1d87b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d87b4) {
            ctx->pc = 0x1D87B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D87B4u;
            // 0x1d87b8: 0xac609da4  sw          $zero, -0x625C($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294942116), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D87BCu;
            goto label_1d87bc;
        }
    }
    ctx->pc = 0x1D87BCu;
label_1d87bc:
    // 0x1d87bc: 0x8e0489dc  lw          $a0, -0x7624($s0)
    ctx->pc = 0x1d87bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937052)));
    // 0x1d87c0: 0xc08942a  jal         func_2250A8
    ctx->pc = 0x1D87C0u;
    SET_GPR_U32(ctx, 31, 0x1D87C8u);
    ctx->pc = 0x1D87C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D87C0u;
    // 0x1d87c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2250A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2250A8u, 0x1D87C0u, 0x1D87C8u)) {
        return;
    }
    ctx->pc = 0x1D87C8u;
label_1d87c8:
    // 0x1d87c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d87c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d87cc:
    // 0x1d87cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d87ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d87d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D87D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D87D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D87D0u;
        // 0x1d87d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D87D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D87D8u;
}
