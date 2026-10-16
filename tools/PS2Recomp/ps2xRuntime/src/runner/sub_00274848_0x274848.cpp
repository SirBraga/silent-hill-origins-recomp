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

// Function: sub_00274848
// Address: 0x274848 - 0x2748c8
void sub_00274848_0x274848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274848_0x274848");
#endif

    switch (ctx->pc) {
        case 0x274878u: goto label_274878;
        case 0x2748b0u: goto label_2748b0;
        default: break;
    }

    ctx->pc = 0x274848u;

    // 0x274848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27484c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27484cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274850: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x274850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x274854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274858: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27485c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x27485cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x274860: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274860u;
    {
        const bool branch_taken_0x274860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x274860) {
            ctx->pc = 0x274864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274860u;
            // 0x274864: 0x8e030040  lw          $v1, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27487Cu;
            goto label_27487c;
        }
    }
    ctx->pc = 0x274868u;
    // 0x274868: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x274868u;
    {
        const bool branch_taken_0x274868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x274868) {
            ctx->pc = 0x27486Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274868u;
            // 0x27486c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2748B8u;
            goto label_2748b8;
        }
    }
    ctx->pc = 0x274870u;
    // 0x274870: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x274870u;
    SET_GPR_U32(ctx, 31, 0x274878u);
    ctx->pc = 0x274874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274870u;
    // 0x274874: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x274870u, 0x274878u)) {
        return;
    }
    ctx->pc = 0x274878u;
label_274878:
    // 0x274878: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x274878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_27487c:
    // 0x27487c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x27487cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x274880: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x274880u;
    {
        const bool branch_taken_0x274880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x274880) {
            ctx->pc = 0x2748A8u;
            goto label_2748a8;
        }
    }
    ctx->pc = 0x274888u;
    // 0x274888: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x274888u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x27488c: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x27488cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x274890: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x274890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x274894: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x274894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x274898: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x274898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27489c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27489cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2748a0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2748A0u;
    {
        const bool branch_taken_0x2748a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2748A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748A0u;
        // 0x2748a4: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748a0) {
            ctx->pc = 0x2748B0u;
            goto label_2748b0;
        }
    }
    ctx->pc = 0x2748A8u;
label_2748a8:
    // 0x2748a8: 0xc09d456  jal         func_275158
    ctx->pc = 0x2748A8u;
    SET_GPR_U32(ctx, 31, 0x2748B0u);
    ctx->pc = 0x2748ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2748A8u;
    // 0x2748ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275158u, 0x2748A8u, 0x2748B0u)) {
        return;
    }
    ctx->pc = 0x2748B0u;
label_2748b0:
    // 0x2748b0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2748b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2748b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2748b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2748b8:
    // 0x2748b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2748b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2748bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2748BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2748C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748BCu;
        // 0x2748c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2748BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2748C4u;
    // 0x2748c4: 0x0  nop
    ctx->pc = 0x2748c4u;
    // NOP
    ctx->pc = 0x2748c8u;
}
