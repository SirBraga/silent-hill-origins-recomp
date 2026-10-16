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

// Function: sub_001C7A30
// Address: 0x1c7a30 - 0x1c7ab8
void sub_001C7A30_0x1c7a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7A30_0x1c7a30");
#endif

    switch (ctx->pc) {
        case 0x1c7a64u: goto label_1c7a64;
        case 0x1c7a7cu: goto label_1c7a7c;
        case 0x1c7a94u: goto label_1c7a94;
        case 0x1c7aa4u: goto label_1c7aa4;
        default: break;
    }

    ctx->pc = 0x1c7a30u;

    // 0x1c7a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c7a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c7a34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c7a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c7a38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c7a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c7a3c: 0x2442f2d8  addiu       $v0, $v0, -0xD28
    ctx->pc = 0x1c7a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963928));
    // 0x1c7a40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c7a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7a44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c7a4c: 0xae020258  sw          $v0, 0x258($s0)
    ctx->pc = 0x1c7a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    // 0x1c7a50: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1c7a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c7a54: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7A54u;
    {
        const bool branch_taken_0x1c7a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A54u;
        // 0x1c7a58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a54) {
            ctx->pc = 0x1C7A68u;
            goto label_1c7a68;
        }
    }
    ctx->pc = 0x1C7A5Cu;
    // 0x1c7a5c: 0xc06db5a  jal         func_1B6D68
    ctx->pc = 0x1C7A5Cu;
    SET_GPR_U32(ctx, 31, 0x1C7A64u);
    ctx->pc = 0x1C7A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A5Cu;
    // 0x1c7a60: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D68u, 0x1C7A5Cu, 0x1C7A64u)) {
        return;
    }
    ctx->pc = 0x1C7A64u;
label_1c7a64:
    // 0x1c7a64: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1c7a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
label_1c7a68:
    // 0x1c7a68: 0x8e040268  lw          $a0, 0x268($s0)
    ctx->pc = 0x1c7a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x1c7a6c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7A6Cu;
    {
        const bool branch_taken_0x1c7a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7a6c) {
            ctx->pc = 0x1C7A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7A6Cu;
            // 0x1c7a70: 0x8e04026c  lw          $a0, 0x26C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7A84u;
            goto label_1c7a84;
        }
    }
    ctx->pc = 0x1C7A74u;
    // 0x1c7a74: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C7A74u;
    SET_GPR_U32(ctx, 31, 0x1C7A7Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C7A74u, 0x1C7A7Cu)) {
        return;
    }
    ctx->pc = 0x1C7A7Cu;
label_1c7a7c:
    // 0x1c7a7c: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1c7a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1c7a80: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x1c7a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_1c7a84:
    // 0x1c7a84: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7A84u;
    {
        const bool branch_taken_0x1c7a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7a84) {
            ctx->pc = 0x1C7A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7A84u;
            // 0x1c7a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7A9Cu;
            goto label_1c7a9c;
        }
    }
    ctx->pc = 0x1C7A8Cu;
    // 0x1c7a8c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C7A8Cu;
    SET_GPR_U32(ctx, 31, 0x1C7A94u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C7A8Cu, 0x1C7A94u)) {
        return;
    }
    ctx->pc = 0x1C7A94u;
label_1c7a94:
    // 0x1c7a94: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1c7a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x1c7a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c7a9c:
    // 0x1c7a9c: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1C7A9Cu;
    SET_GPR_U32(ctx, 31, 0x1C7AA4u);
    ctx->pc = 0x1C7AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A9Cu;
    // 0x1c7aa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1C7A9Cu, 0x1C7AA4u)) {
        return;
    }
    ctx->pc = 0x1C7AA4u;
label_1c7aa4:
    // 0x1c7aa4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c7aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7aa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c7aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AB0u;
        // 0x1c7ab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7AB8u;
}
