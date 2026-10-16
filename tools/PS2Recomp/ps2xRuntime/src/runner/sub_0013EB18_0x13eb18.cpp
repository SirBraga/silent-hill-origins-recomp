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

// Function: sub_0013EB18
// Address: 0x13eb18 - 0x13eb60
void sub_0013EB18_0x13eb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EB18_0x13eb18");
#endif

    switch (ctx->pc) {
        case 0x13eb30u: goto label_13eb30;
        case 0x13eb50u: goto label_13eb50;
        default: break;
    }

    ctx->pc = 0x13eb18u;

    // 0x13eb18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13eb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13eb1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13eb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13eb20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13eb20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13eb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13eb28: 0xc041f0e  jal         func_107C38
    ctx->pc = 0x13EB28u;
    SET_GPR_U32(ctx, 31, 0x13EB30u);
    ctx->pc = 0x13EB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EB28u;
    // 0x13eb2c: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C38u, 0x13EB28u, 0x13EB30u)) {
        return;
    }
    ctx->pc = 0x13EB30u;
label_13eb30:
    // 0x13eb30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13eb34: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13EB34u;
    {
        const bool branch_taken_0x13eb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13eb34) {
            ctx->pc = 0x13EB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EB34u;
            // 0x13eb38: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EB54u;
            goto label_13eb54;
        }
    }
    ctx->pc = 0x13EB3Cu;
    // 0x13eb3c: 0x8e0201c4  lw          $v0, 0x1C4($s0)
    ctx->pc = 0x13eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x13eb40: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13EB40u;
    {
        const bool branch_taken_0x13eb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eb40) {
            ctx->pc = 0x13EB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EB40u;
            // 0x13eb44: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EB54u;
            goto label_13eb54;
        }
    }
    ctx->pc = 0x13EB48u;
    // 0x13eb48: 0xc04faf8  jal         func_13EBE0
    ctx->pc = 0x13EB48u;
    SET_GPR_U32(ctx, 31, 0x13EB50u);
    ctx->pc = 0x13EB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EB48u;
    // 0x13eb4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EBE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13EBE0u, 0x13EB48u, 0x13EB50u)) {
        return;
    }
    ctx->pc = 0x13EB50u;
label_13eb50:
    // 0x13eb50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13eb50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13eb54:
    // 0x13eb54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13eb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13eb58: 0x3e00008  jr          $ra
    ctx->pc = 0x13EB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB58u;
        // 0x13eb5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EB60u;
}
