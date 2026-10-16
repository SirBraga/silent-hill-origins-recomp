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

// Function: sub_001B6D90
// Address: 0x1b6d90 - 0x1b6df0
void sub_001B6D90_0x1b6d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6D90_0x1b6d90");
#endif

    switch (ctx->pc) {
        case 0x1b6db4u: goto label_1b6db4;
        default: break;
    }

    ctx->pc = 0x1b6d90u;

    // 0x1b6d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b6d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b6d94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b6d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b6d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b6d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6da0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b6da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6da4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6DA4u;
    {
        const bool branch_taken_0x1b6da4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DA4u;
        // 0x1b6da8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6da4) {
            ctx->pc = 0x1B6DB8u;
            goto label_1b6db8;
        }
    }
    ctx->pc = 0x1B6DACu;
    // 0x1b6dac: 0xc06ccfe  jal         func_1B33F8
    ctx->pc = 0x1B6DACu;
    SET_GPR_U32(ctx, 31, 0x1B6DB4u);
    ctx->pc = 0x1B6DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6DACu;
    // 0x1b6db0: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B33F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B33F8u, 0x1B6DACu, 0x1B6DB4u)) {
        return;
    }
    ctx->pc = 0x1B6DB4u;
label_1b6db4:
    // 0x1b6db4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1b6db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1b6db8:
    // 0x1b6db8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b6db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b6dbc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6DBCu;
    {
        const bool branch_taken_0x1b6dbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DBCu;
        // 0x1b6dc0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6dbc) {
            ctx->pc = 0x1B6DE0u;
            goto label_1b6de0;
        }
    }
    ctx->pc = 0x1B6DC4u;
    // 0x1b6dc4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6DC4u;
    {
        const bool branch_taken_0x1b6dc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DC4u;
        // 0x1b6dc8: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6dc4) {
            ctx->pc = 0x1B6DD4u;
            goto label_1b6dd4;
        }
    }
    ctx->pc = 0x1B6DCCu;
    // 0x1b6dcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6DCCu;
    {
        const bool branch_taken_0x1b6dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DCCu;
        // 0x1b6dd0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6dcc) {
            ctx->pc = 0x1B6DD8u;
            goto label_1b6dd8;
        }
    }
    ctx->pc = 0x1B6DD4u;
label_1b6dd4:
    // 0x1b6dd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b6dd8:
    // 0x1b6dd8: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x1b6dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x1b6ddc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b6ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b6de0:
    // 0x1b6de0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6de8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DE8u;
        // 0x1b6dec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6DF0u;
}
