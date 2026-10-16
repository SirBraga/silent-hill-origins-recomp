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

// Function: sub_001B5C88
// Address: 0x1b5c88 - 0x1b5d10
void sub_001B5C88_0x1b5c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5C88_0x1b5c88");
#endif

    switch (ctx->pc) {
        case 0x1b5cbcu: goto label_1b5cbc;
        case 0x1b5cd4u: goto label_1b5cd4;
        case 0x1b5cecu: goto label_1b5cec;
        case 0x1b5cfcu: goto label_1b5cfc;
        default: break;
    }

    ctx->pc = 0x1b5c88u;

    // 0x1b5c88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b5c8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b5c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1b5c90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b5c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b5c94: 0x2442c7f8  addiu       $v0, $v0, -0x3808
    ctx->pc = 0x1b5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952952));
    // 0x1b5c98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b5c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b5c9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5ca4: 0xae020258  sw          $v0, 0x258($s0)
    ctx->pc = 0x1b5ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    // 0x1b5ca8: 0x8e040270  lw          $a0, 0x270($s0)
    ctx->pc = 0x1b5ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x1b5cac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5CACu;
    {
        const bool branch_taken_0x1b5cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5CACu;
        // 0x1b5cb0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5cac) {
            ctx->pc = 0x1B5CC0u;
            goto label_1b5cc0;
        }
    }
    ctx->pc = 0x1B5CB4u;
    // 0x1b5cb4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B5CB4u;
    SET_GPR_U32(ctx, 31, 0x1B5CBCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B5CB4u, 0x1B5CBCu)) {
        return;
    }
    ctx->pc = 0x1B5CBCu;
label_1b5cbc:
    // 0x1b5cbc: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1b5cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
label_1b5cc0:
    // 0x1b5cc0: 0x8e040268  lw          $a0, 0x268($s0)
    ctx->pc = 0x1b5cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x1b5cc4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5CC4u;
    {
        const bool branch_taken_0x1b5cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5cc4) {
            ctx->pc = 0x1B5CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5CC4u;
            // 0x1b5cc8: 0x8e04026c  lw          $a0, 0x26C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5CDCu;
            goto label_1b5cdc;
        }
    }
    ctx->pc = 0x1B5CCCu;
    // 0x1b5ccc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B5CCCu;
    SET_GPR_U32(ctx, 31, 0x1B5CD4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B5CCCu, 0x1B5CD4u)) {
        return;
    }
    ctx->pc = 0x1B5CD4u;
label_1b5cd4:
    // 0x1b5cd4: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1b5cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1b5cd8: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x1b5cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_1b5cdc:
    // 0x1b5cdc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5CDCu;
    {
        const bool branch_taken_0x1b5cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5cdc) {
            ctx->pc = 0x1B5CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5CDCu;
            // 0x1b5ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5CF4u;
            goto label_1b5cf4;
        }
    }
    ctx->pc = 0x1B5CE4u;
    // 0x1b5ce4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B5CE4u;
    SET_GPR_U32(ctx, 31, 0x1B5CECu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B5CE4u, 0x1B5CECu)) {
        return;
    }
    ctx->pc = 0x1B5CECu;
label_1b5cec:
    // 0x1b5cec: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1b5cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x1b5cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b5cf4:
    // 0x1b5cf4: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1B5CF4u;
    SET_GPR_U32(ctx, 31, 0x1B5CFCu);
    ctx->pc = 0x1B5CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5CF4u;
    // 0x1b5cf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1B5CF4u, 0x1B5CFCu)) {
        return;
    }
    ctx->pc = 0x1B5CFCu;
label_1b5cfc:
    // 0x1b5cfc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b5cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5d00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b5d00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5d08: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D08u;
        // 0x1b5d0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5D10u;
}
