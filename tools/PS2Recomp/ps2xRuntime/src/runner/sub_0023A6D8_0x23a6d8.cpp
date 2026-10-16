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

// Function: sub_0023A6D8
// Address: 0x23a6d8 - 0x23a738
void sub_0023A6D8_0x23a6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A6D8_0x23a6d8");
#endif

    switch (ctx->pc) {
        case 0x23a704u: goto label_23a704;
        case 0x23a71cu: goto label_23a71c;
        default: break;
    }

    ctx->pc = 0x23a6d8u;

    // 0x23a6d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23a6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23a6dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23a6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23a6e0: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x23a6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x23a6e4: 0x8e103f20  lw          $s0, 0x3F20($s0)
    ctx->pc = 0x23a6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x6B3F20u));
    // 0x23a6e8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x23A6E8u;
    {
        const bool branch_taken_0x23a6e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6E8u;
        // 0x23a6ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6e8) {
            ctx->pc = 0x23A720u;
            goto label_23a720;
        }
    }
    ctx->pc = 0x23A6F0u;
    // 0x23a6f0: 0x8f84849c  lw          $a0, -0x7B64($gp)
    ctx->pc = 0x23a6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935708)));
    // 0x23a6f4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A6F4u;
    {
        const bool branch_taken_0x23a6f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a6f4) {
            ctx->pc = 0x23A6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A6F4u;
            // 0x23a6f8: 0x8f848498  lw          $a0, -0x7B68($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A70Cu;
            goto label_23a70c;
        }
    }
    ctx->pc = 0x23A6FCu;
    // 0x23a6fc: 0xc08e9ae  jal         func_23A6B8
    ctx->pc = 0x23A6FCu;
    SET_GPR_U32(ctx, 31, 0x23A704u);
    ctx->pc = 0x23A6B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23A6B8u, 0x23A6FCu, 0x23A704u)) {
        return;
    }
    ctx->pc = 0x23A704u;
label_23a704:
    // 0x23a704: 0xaf80849c  sw          $zero, -0x7B64($gp)
    ctx->pc = 0x23a704u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935708), GPR_U32(ctx, 0));
    // 0x23a708: 0x8f848498  lw          $a0, -0x7B68($gp)
    ctx->pc = 0x23a708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935704)));
label_23a70c:
    // 0x23a70c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A70Cu;
    {
        const bool branch_taken_0x23a70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A70Cu;
        // 0x23a710: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a70c) {
            ctx->pc = 0x23A724u;
            goto label_23a724;
        }
    }
    ctx->pc = 0x23A714u;
    // 0x23a714: 0xc08e9ae  jal         func_23A6B8
    ctx->pc = 0x23A714u;
    SET_GPR_U32(ctx, 31, 0x23A71Cu);
    ctx->pc = 0x23A6B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23A6B8u, 0x23A714u, 0x23A71Cu)) {
        return;
    }
    ctx->pc = 0x23A71Cu;
label_23a71c:
    // 0x23a71c: 0xaf808498  sw          $zero, -0x7B68($gp)
    ctx->pc = 0x23a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935704), GPR_U32(ctx, 0));
label_23a720:
    // 0x23a720: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23a720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23a724:
    // 0x23a724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a728: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23a728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a72c: 0x3e00008  jr          $ra
    ctx->pc = 0x23A72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A72Cu;
        // 0x23a730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A734u;
    // 0x23a734: 0x0  nop
    ctx->pc = 0x23a734u;
    // NOP
    ctx->pc = 0x23a738u;
}
