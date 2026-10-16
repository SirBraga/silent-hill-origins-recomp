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

// Function: sub_002DC648
// Address: 0x2dc648 - 0x2dc6c8
void sub_002DC648_0x2dc648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC648_0x2dc648");
#endif

    switch (ctx->pc) {
        case 0x2dc66cu: goto label_2dc66c;
        case 0x2dc688u: goto label_2dc688;
        case 0x2dc6a4u: goto label_2dc6a4;
        default: break;
    }

    ctx->pc = 0x2dc648u;

    // 0x2dc648: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dc648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dc64c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2dc64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2dc650: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dc650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dc654: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2dc654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dc658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dc65c: 0x24844370  addiu       $a0, $a0, 0x4370
    ctx->pc = 0x2dc65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17264));
    // 0x2dc660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc664: 0xc0b6c1a  jal         func_2DB068
    ctx->pc = 0x2DC664u;
    SET_GPR_U32(ctx, 31, 0x2DC66Cu);
    ctx->pc = 0x2DC668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC664u;
    // 0x2dc668: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB068u, 0x2DC664u, 0x2DC66Cu)) {
        return;
    }
    ctx->pc = 0x2DC66Cu;
label_2dc66c:
    // 0x2dc66c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dc66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc670: 0x16300010  bne         $s1, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DC670u;
    {
        const bool branch_taken_0x2dc670 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x2DC674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC670u;
        // 0x2dc674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc670) {
            ctx->pc = 0x2DC6B4u;
            goto label_2dc6b4;
        }
    }
    ctx->pc = 0x2DC678u;
    // 0x2dc678: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2dc678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2dc67c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dc67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc680: 0xc0b8fe8  jal         func_2E3FA0
    ctx->pc = 0x2DC680u;
    SET_GPR_U32(ctx, 31, 0x2DC688u);
    ctx->pc = 0x2DC684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC680u;
    // 0x2dc684: 0x24844368  addiu       $a0, $a0, 0x4368 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3FA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3FA0u, 0x2DC680u, 0x2DC688u)) {
        return;
    }
    ctx->pc = 0x2DC688u;
label_2dc688:
    // 0x2dc688: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dc688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc68c: 0x56110009  bnel        $s0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DC68Cu;
    {
        const bool branch_taken_0x2dc68c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x2dc68c) {
            ctx->pc = 0x2DC690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC68Cu;
            // 0x2dc690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC6B4u;
            goto label_2dc6b4;
        }
    }
    ctx->pc = 0x2DC694u;
    // 0x2dc694: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2dc694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2dc698: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dc698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc69c: 0xc0b78b8  jal         func_2DE2E0
    ctx->pc = 0x2DC69Cu;
    SET_GPR_U32(ctx, 31, 0x2DC6A4u);
    ctx->pc = 0x2DC6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC69Cu;
    // 0x2dc6a0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DE2E0u, 0x2DC69Cu, 0x2DC6A4u)) {
        return;
    }
    ctx->pc = 0x2DC6A4u;
label_2dc6a4:
    // 0x2dc6a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2dc6a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc6a8: 0x10700002  beq         $v1, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DC6A8u;
    {
        const bool branch_taken_0x2dc6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2DC6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC6A8u;
        // 0x2dc6ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc6a8) {
            ctx->pc = 0x2DC6B4u;
            goto label_2dc6b4;
        }
    }
    ctx->pc = 0x2DC6B0u;
    // 0x2dc6b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dc6b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc6b4:
    // 0x2dc6b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dc6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc6b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc6b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc6bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC6C0u;
        // 0x2dc6c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC6C8u;
}
