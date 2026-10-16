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

// Function: sub_00107D78
// Address: 0x107d78 - 0x107dc0
void sub_00107D78_0x107d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107D78_0x107d78");
#endif

    switch (ctx->pc) {
        case 0x107d94u: goto label_107d94;
        default: break;
    }

    ctx->pc = 0x107d78u;

    // 0x107d78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x107d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x107d7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x107d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x107d80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x107d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x107d84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107d8c: 0xc077316  jal         func_1DCC58
    ctx->pc = 0x107D8Cu;
    SET_GPR_U32(ctx, 31, 0x107D94u);
    ctx->pc = 0x107D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D8Cu;
    // 0x107d90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCC58u, 0x107D8Cu, 0x107D94u)) {
        return;
    }
    ctx->pc = 0x107D94u;
label_107d94:
    // 0x107d94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x107D94u;
    {
        const bool branch_taken_0x107d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D94u;
        // 0x107d98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d94) {
            ctx->pc = 0x107DA0u;
            goto label_107da0;
        }
    }
    ctx->pc = 0x107D9Cu;
    // 0x107d9c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x107d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_107da0:
    // 0x107da0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x107da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107da4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x107da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107da8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x107da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107dac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107db0: 0x3e00008  jr          $ra
    ctx->pc = 0x107DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DB0u;
        // 0x107db4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107DB8u;
    // 0x107db8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x107db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x107dbc: 0x0  nop
    ctx->pc = 0x107dbcu;
    // NOP
    ctx->pc = 0x107dc0u;
}
