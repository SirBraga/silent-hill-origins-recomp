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

// Function: sub_002E0CA0
// Address: 0x2e0ca0 - 0x2e0d08
void sub_002E0CA0_0x2e0ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0CA0_0x2e0ca0");
#endif

    switch (ctx->pc) {
        case 0x2e0cccu: goto label_2e0ccc;
        default: break;
    }

    ctx->pc = 0x2e0ca0u;

    // 0x2e0ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0ca4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e0ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e0ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0cac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0cb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e0cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0cb4: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e0cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e0cb8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2e0cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2e0cbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0cc0: 0x34a50804  ori         $a1, $a1, 0x804
    ctx->pc = 0x2e0cc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2052);
    // 0x2e0cc4: 0xc0b8180  jal         func_2E0600
    ctx->pc = 0x2E0CC4u;
    SET_GPR_U32(ctx, 31, 0x2E0CCCu);
    ctx->pc = 0x2E0CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0CC4u;
    // 0x2e0cc8: 0x248480e0  addiu       $a0, $a0, -0x7F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0600u, 0x2E0CC4u, 0x2E0CCCu)) {
        return;
    }
    ctx->pc = 0x2E0CCCu;
label_2e0ccc:
    // 0x2e0ccc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e0cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0cd0: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0CD0u;
    {
        const bool branch_taken_0x2e0cd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0cd0) {
            ctx->pc = 0x2E0CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0CD0u;
            // 0x2e0cd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0CF4u;
            goto label_2e0cf4;
        }
    }
    ctx->pc = 0x2E0CD8u;
    // 0x2e0cd8: 0xacb10008  sw          $s1, 0x8($a1)
    ctx->pc = 0x2e0cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 17));
    // 0x2e0cdc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e0cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e0ce0: 0xacb00004  sw          $s0, 0x4($a1)
    ctx->pc = 0x2e0ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 16));
    // 0x2e0ce4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2e0ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x2e0ce8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e0ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e0cec: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2e0cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x2e0cf0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2e0cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2e0cf4:
    // 0x2e0cf4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e0cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0cf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0d00: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D00u;
        // 0x2e0d04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0D08u;
}
