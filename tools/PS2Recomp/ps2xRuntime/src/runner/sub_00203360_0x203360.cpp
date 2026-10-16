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

// Function: sub_00203360
// Address: 0x203360 - 0x203420
void sub_00203360_0x203360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203360_0x203360");
#endif

    switch (ctx->pc) {
        case 0x2033a4u: goto label_2033a4;
        case 0x2033b0u: goto label_2033b0;
        case 0x2033d0u: goto label_2033d0;
        case 0x2033e0u: goto label_2033e0;
        case 0x2033fcu: goto label_2033fc;
        default: break;
    }

    ctx->pc = 0x203360u;

    // 0x203360: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x203360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x203364: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x203364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x203368: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x203368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x20336c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20336cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203370: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x203370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x203374: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x203374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x203378: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x203378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x20337c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20337cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x203380: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x203380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x203384: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x203384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x203388: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x203388u;
    {
        const bool branch_taken_0x203388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203388) {
            ctx->pc = 0x20338Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203388u;
            // 0x20338c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203400u;
            goto label_203400;
        }
    }
    ctx->pc = 0x203390u;
    // 0x203390: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x203390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x203394: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x203394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x203398: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x203398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20339c: 0xc086ff6  jal         func_21BFD8
    ctx->pc = 0x20339Cu;
    SET_GPR_U32(ctx, 31, 0x2033A4u);
    ctx->pc = 0x2033A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20339Cu;
    // 0x2033a0: 0x26140018  addiu       $s4, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BFD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21BFD8u, 0x20339Cu, 0x2033A4u)) {
        return;
    }
    ctx->pc = 0x2033A4u;
label_2033a4:
    // 0x2033a4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2033a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2033a8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2033a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2033ac: 0x0  nop
    ctx->pc = 0x2033acu;
    // NOP
label_2033b0:
    // 0x2033b0: 0x24d2ffff  addiu       $s2, $a2, -0x1
    ctx->pc = 0x2033b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2033b4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2033b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2033b8: 0x68900  sll         $s1, $a2, 4
    ctx->pc = 0x2033b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2033bc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2033bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2033c0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2033C0u;
    {
        const bool branch_taken_0x2033c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033C0u;
        // 0x2033c4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033c0) {
            ctx->pc = 0x2033E8u;
            goto label_2033e8;
        }
    }
    ctx->pc = 0x2033C8u;
    // 0x2033c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2033c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033cc: 0x0  nop
    ctx->pc = 0x2033ccu;
    // NOP
label_2033d0:
    // 0x2033d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2033d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033d4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2033d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2033d8: 0xc086fb4  jal         func_21BED0
    ctx->pc = 0x2033D8u;
    SET_GPR_U32(ctx, 31, 0x2033E0u);
    ctx->pc = 0x2033DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2033D8u;
    // 0x2033dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BED0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21BED0u, 0x2033D8u, 0x2033E0u)) {
        return;
    }
    ctx->pc = 0x2033E0u;
label_2033e0:
    // 0x2033e0: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2033E0u;
    {
        const bool branch_taken_0x2033e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2033E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033E0u;
        // 0x2033e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033e0) {
            ctx->pc = 0x2033D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2033d0;
        }
    }
    ctx->pc = 0x2033E8u;
label_2033e8:
    // 0x2033e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2033e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033ec: 0x4c1fff0  bgez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2033ECu;
    {
        const bool branch_taken_0x2033ec = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x2033F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033ECu;
        // 0x2033f0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033ec) {
            ctx->pc = 0x2033B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2033b0;
        }
    }
    ctx->pc = 0x2033F4u;
    // 0x2033f4: 0xc086ff6  jal         func_21BFD8
    ctx->pc = 0x2033F4u;
    SET_GPR_U32(ctx, 31, 0x2033FCu);
    ctx->pc = 0x2033F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2033F4u;
    // 0x2033f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BFD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21BFD8u, 0x2033F4u, 0x2033FCu)) {
        return;
    }
    ctx->pc = 0x2033FCu;
label_2033fc:
    // 0x2033fc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2033fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_203400:
    // 0x203400: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x203400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x203404: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x203404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203408: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x203408u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20340c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x20340cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203414: 0x3e00008  jr          $ra
    ctx->pc = 0x203414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203414u;
        // 0x203418: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20341Cu;
    // 0x20341c: 0x0  nop
    ctx->pc = 0x20341cu;
    // NOP
    ctx->pc = 0x203420u;
}
