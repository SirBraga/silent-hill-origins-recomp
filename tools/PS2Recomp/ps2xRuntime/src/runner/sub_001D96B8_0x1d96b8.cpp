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

// Function: sub_001D96B8
// Address: 0x1d96b8 - 0x1d9728
void sub_001D96B8_0x1d96b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D96B8_0x1d96b8");
#endif

    switch (ctx->pc) {
        case 0x1d96e0u: goto label_1d96e0;
        case 0x1d96f4u: goto label_1d96f4;
        default: break;
    }

    ctx->pc = 0x1d96b8u;

    // 0x1d96b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d96b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d96bc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d96bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d96c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d96c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d96c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d96c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d96c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d96c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d96cc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d96ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d96d0: 0x245189e0  addiu       $s1, $v0, -0x7620
    ctx->pc = 0x1d96d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937056));
    // 0x1d96d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d96d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d96d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d96d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d96dc: 0x0  nop
    ctx->pc = 0x1d96dcu;
    // NOP
label_1d96e0:
    // 0x1d96e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d96e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d96e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D96E4u;
    {
        const bool branch_taken_0x1d96e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d96e4) {
            ctx->pc = 0x1D96E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D96E4u;
            // 0x1d96e8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9700u;
            goto label_1d9700;
        }
    }
    ctx->pc = 0x1D96ECu;
    // 0x1d96ec: 0xc0b747a  jal         func_2DD1E8
    ctx->pc = 0x1D96ECu;
    SET_GPR_U32(ctx, 31, 0x1D96F4u);
    ctx->pc = 0x1D96F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D96ECu;
    // 0x1d96f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD1E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD1E8u, 0x1D96ECu, 0x1D96F4u)) {
        return;
    }
    ctx->pc = 0x1D96F4u;
label_1d96f4:
    // 0x1d96f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D96F4u;
    {
        const bool branch_taken_0x1d96f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D96F4u;
        // 0x1d96f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d96f4) {
            ctx->pc = 0x1D9710u;
            goto label_1d9710;
        }
    }
    ctx->pc = 0x1D96FCu;
    // 0x1d96fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d96fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d9700:
    // 0x1d9700: 0x2e020020  sltiu       $v0, $s0, 0x20
    ctx->pc = 0x1d9700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d9704: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D9704u;
    {
        const bool branch_taken_0x1d9704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9704u;
        // 0x1d9708: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9704) {
            ctx->pc = 0x1D96E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d96e0;
        }
    }
    ctx->pc = 0x1D970Cu;
    // 0x1d970c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d970cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d9710:
    // 0x1d9710: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d9710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9714: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d9714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9718: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d9718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d971c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d971cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9720: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9720u;
        // 0x1d9724: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9728u;
}
