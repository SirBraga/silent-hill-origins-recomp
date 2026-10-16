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

// Function: sub_002D7278
// Address: 0x2d7278 - 0x2d72f8
void sub_002D7278_0x2d7278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7278_0x2d7278");
#endif

    switch (ctx->pc) {
        case 0x2d72d0u: goto label_2d72d0;
        default: break;
    }

    ctx->pc = 0x2d7278u;

    // 0x2d7278: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d7278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d727c: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x2d727cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x2d7280: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d7280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d7284: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d7284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d7288: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d7288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d728c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d728cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d7290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d7294: 0x2229021  addu        $s2, $s1, $v0
    ctx->pc = 0x2d7294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d7298: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d7298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d729c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D729Cu;
    {
        const bool branch_taken_0x2d729c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D729Cu;
        // 0x2d72a0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d729c) {
            ctx->pc = 0x2D72B0u;
            goto label_2d72b0;
        }
    }
    ctx->pc = 0x2D72A4u;
    // 0x2d72a4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2d72a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d72a8: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x2d72a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x2d72ac: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2d72acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_2d72b0:
    // 0x2d72b0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D72B0u;
    {
        const bool branch_taken_0x2d72b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D72B0u;
        // 0x2d72b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d72b0) {
            ctx->pc = 0x2D72D4u;
            goto label_2d72d4;
        }
    }
    ctx->pc = 0x2D72B8u;
    // 0x2d72b8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d72b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d72bc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2d72bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d72c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d72c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2d72c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2d72c8: 0xc0aaf06  jal         func_2ABC18
    ctx->pc = 0x2D72C8u;
    SET_GPR_U32(ctx, 31, 0x2D72D0u);
    ctx->pc = 0x2D72CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D72C8u;
    // 0x2d72cc: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABC18u, 0x2D72C8u, 0x2D72D0u)) {
        return;
    }
    ctx->pc = 0x2D72D0u;
label_2d72d0:
    // 0x2d72d0: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x2d72d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
label_2d72d4:
    // 0x2d72d4: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2d72d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x2d72d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d72d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d72dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d72e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d72e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d72e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d72e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d72e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d72e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d72ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D72ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D72ECu;
        // 0x2d72f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D72ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D72F4u;
    // 0x2d72f4: 0x0  nop
    ctx->pc = 0x2d72f4u;
    // NOP
    ctx->pc = 0x2d72f8u;
}
