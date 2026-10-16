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

// Function: sub_002E3DF0
// Address: 0x2e3df0 - 0x2e3e48
void sub_002E3DF0_0x2e3df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3DF0_0x2e3df0");
#endif

    switch (ctx->pc) {
        case 0x2e3e18u: goto label_2e3e18;
        default: break;
    }

    ctx->pc = 0x2e3df0u;

    // 0x2e3df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e3df4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e3df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3df8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e3df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e3dfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e3dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e3e00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e3e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e3e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3e0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e3e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e10: 0xc0b6b90  jal         func_2DAE40
    ctx->pc = 0x2E3E10u;
    SET_GPR_U32(ctx, 31, 0x2E3E18u);
    ctx->pc = 0x2E3E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E10u;
    // 0x2e3e14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAE40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DAE40u, 0x2E3E10u, 0x2E3E18u)) {
        return;
    }
    ctx->pc = 0x2E3E18u;
label_2e3e18:
    // 0x2e3e18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3E18u;
    {
        const bool branch_taken_0x2e3e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E18u;
        // 0x2e3e1c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e18) {
            ctx->pc = 0x2E3E2Cu;
            goto label_2e3e2c;
        }
    }
    ctx->pc = 0x2E3E20u;
    // 0x2e3e20: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x2e3e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2e3e24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E3E24u;
    {
        const bool branch_taken_0x2e3e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E24u;
        // 0x2e3e28: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e24) {
            ctx->pc = 0x2E3E30u;
            goto label_2e3e30;
        }
    }
    ctx->pc = 0x2E3E2Cu;
label_2e3e2c:
    // 0x2e3e2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e3e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3e30:
    // 0x2e3e30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e3e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3e34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e3e34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E3Cu;
        // 0x2e3e40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3E44u;
    // 0x2e3e44: 0x0  nop
    ctx->pc = 0x2e3e44u;
    // NOP
    ctx->pc = 0x2e3e48u;
}
