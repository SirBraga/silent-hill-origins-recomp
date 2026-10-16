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

// Function: sub_001C6D88
// Address: 0x1c6d88 - 0x1c6df8
void sub_001C6D88_0x1c6d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6D88_0x1c6d88");
#endif

    switch (ctx->pc) {
        case 0x1c6dbcu: goto label_1c6dbc;
        case 0x1c6dd4u: goto label_1c6dd4;
        case 0x1c6de4u: goto label_1c6de4;
        default: break;
    }

    ctx->pc = 0x1c6d88u;

    // 0x1c6d88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6d8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c6d90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c6d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c6d94: 0x2442f010  addiu       $v0, $v0, -0xFF0
    ctx->pc = 0x1c6d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963216));
    // 0x1c6d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c6d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c6d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6da4: 0xae020258  sw          $v0, 0x258($s0)
    ctx->pc = 0x1c6da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    // 0x1c6da8: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1c6da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c6dac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6DACu;
    {
        const bool branch_taken_0x1c6dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6DACu;
        // 0x1c6db0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6dac) {
            ctx->pc = 0x1C6DC0u;
            goto label_1c6dc0;
        }
    }
    ctx->pc = 0x1C6DB4u;
    // 0x1c6db4: 0xc06db5a  jal         func_1B6D68
    ctx->pc = 0x1C6DB4u;
    SET_GPR_U32(ctx, 31, 0x1C6DBCu);
    ctx->pc = 0x1C6DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6DB4u;
    // 0x1c6db8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D68u, 0x1C6DB4u, 0x1C6DBCu)) {
        return;
    }
    ctx->pc = 0x1C6DBCu;
label_1c6dbc:
    // 0x1c6dbc: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1c6dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
label_1c6dc0:
    // 0x1c6dc0: 0x8e040268  lw          $a0, 0x268($s0)
    ctx->pc = 0x1c6dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x1c6dc4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6DC4u;
    {
        const bool branch_taken_0x1c6dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6dc4) {
            ctx->pc = 0x1C6DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6DC4u;
            // 0x1c6dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6DDCu;
            goto label_1c6ddc;
        }
    }
    ctx->pc = 0x1C6DCCu;
    // 0x1c6dcc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C6DCCu;
    SET_GPR_U32(ctx, 31, 0x1C6DD4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C6DCCu, 0x1C6DD4u)) {
        return;
    }
    ctx->pc = 0x1C6DD4u;
label_1c6dd4:
    // 0x1c6dd4: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1c6dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1c6dd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c6ddc:
    // 0x1c6ddc: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1C6DDCu;
    SET_GPR_U32(ctx, 31, 0x1C6DE4u);
    ctx->pc = 0x1C6DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6DDCu;
    // 0x1c6de0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1C6DDCu, 0x1C6DE4u)) {
        return;
    }
    ctx->pc = 0x1C6DE4u;
label_1c6de4:
    // 0x1c6de4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c6de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6de8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c6de8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6df0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6DF0u;
        // 0x1c6df4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6DF8u;
}
