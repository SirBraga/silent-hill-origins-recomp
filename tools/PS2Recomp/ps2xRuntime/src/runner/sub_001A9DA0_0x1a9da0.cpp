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

// Function: sub_001A9DA0
// Address: 0x1a9da0 - 0x1a9e00
void sub_001A9DA0_0x1a9da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9DA0_0x1a9da0");
#endif

    switch (ctx->pc) {
        case 0x1a9dc8u: goto label_1a9dc8;
        case 0x1a9dd4u: goto label_1a9dd4;
        default: break;
    }

    ctx->pc = 0x1a9da0u;

    // 0x1a9da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9da4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a9da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a9da8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9dac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9db0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a9db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a9db4: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x1a9db4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a9db8: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1A9DB8u;
    {
        const bool branch_taken_0x1a9db8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9db8) {
            ctx->pc = 0x1A9DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9DB8u;
            // 0x1a9dbc: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9DE4u;
            goto label_1a9de4;
        }
    }
    ctx->pc = 0x1A9DC0u;
    // 0x1a9dc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a9dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9dc4: 0x0  nop
    ctx->pc = 0x1a9dc4u;
    // NOP
label_1a9dc8:
    // 0x1a9dc8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1a9dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a9dcc: 0xc069528  jal         func_1A54A0
    ctx->pc = 0x1A9DCCu;
    SET_GPR_U32(ctx, 31, 0x1A9DD4u);
    ctx->pc = 0x1A9DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9DCCu;
    // 0x1a9dd0: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A54A0u, 0x1A9DCCu, 0x1A9DD4u)) {
        return;
    }
    ctx->pc = 0x1A9DD4u;
label_1a9dd4:
    // 0x1a9dd4: 0x0  nop
    ctx->pc = 0x1a9dd4u;
    // NOP
    // 0x1a9dd8: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A9DD8u;
    {
        const bool branch_taken_0x1a9dd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DD8u;
        // 0x1a9ddc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9dd8) {
            ctx->pc = 0x1A9DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9dc8;
        }
    }
    ctx->pc = 0x1A9DE0u;
    // 0x1a9de0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1a9de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1a9de4:
    // 0x1a9de4: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1a9de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1a9de8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1a9de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1a9dec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a9decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9df0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a9df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9df8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DF8u;
        // 0x1a9dfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9E00u;
}
