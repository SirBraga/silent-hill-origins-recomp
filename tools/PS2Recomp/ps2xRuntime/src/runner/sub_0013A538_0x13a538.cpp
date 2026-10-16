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

// Function: sub_0013A538
// Address: 0x13a538 - 0x13a5d8
void sub_0013A538_0x13a538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A538_0x13a538");
#endif

    switch (ctx->pc) {
        case 0x13a568u: goto label_13a568;
        case 0x13a578u: goto label_13a578;
        case 0x13a588u: goto label_13a588;
        case 0x13a594u: goto label_13a594;
        case 0x13a5a8u: goto label_13a5a8;
        default: break;
    }

    ctx->pc = 0x13a538u;

    // 0x13a538: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13a538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13a53c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13a53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13a540: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x13a540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x13a544: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13a544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x13a548: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13a548u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a54c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13a54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x13a550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13a550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13a554: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x13a554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x13a558: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13A558u;
    {
        const bool branch_taken_0x13a558 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x13A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A558u;
        // 0x13a55c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a558) {
            ctx->pc = 0x13A5B8u;
            goto label_13a5b8;
        }
    }
    ctx->pc = 0x13A560u;
    // 0x13a560: 0x26710048  addiu       $s1, $s3, 0x48
    ctx->pc = 0x13a560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x13a564: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x13a564u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13a568:
    // 0x13a568: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A568u;
    {
        const bool branch_taken_0x13a568 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a568) {
            ctx->pc = 0x13A56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A568u;
            // 0x13a56c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A58Cu;
            goto label_13a58c;
        }
    }
    ctx->pc = 0x13A570u;
    // 0x13a570: 0xc0979f6  jal         func_25E7D8
    ctx->pc = 0x13A570u;
    SET_GPR_U32(ctx, 31, 0x13A578u);
    ctx->pc = 0x13A574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A570u;
    // 0x13a574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E7D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7D8u, 0x13A570u, 0x13A578u)) {
        return;
    }
    ctx->pc = 0x13A578u;
label_13a578:
    // 0x13a578: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A578u;
    {
        const bool branch_taken_0x13a578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A578u;
        // 0x13a57c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a578) {
            ctx->pc = 0x13A588u;
            goto label_13a588;
        }
    }
    ctx->pc = 0x13A580u;
    // 0x13a580: 0xc09799a  jal         func_25E668
    ctx->pc = 0x13A580u;
    SET_GPR_U32(ctx, 31, 0x13A588u);
    ctx->pc = 0x13A584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A580u;
    // 0x13a584: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E668u, 0x13A580u, 0x13A588u)) {
        return;
    }
    ctx->pc = 0x13A588u;
label_13a588:
    // 0x13a588: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x13a588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13a58c:
    // 0x13a58c: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x13A58Cu;
    SET_GPR_U32(ctx, 31, 0x13A594u);
    ctx->pc = 0x13A590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A58Cu;
    // 0x13a590: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x13A58Cu, 0x13A594u)) {
        return;
    }
    ctx->pc = 0x13A594u;
label_13a594:
    // 0x13a594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13a594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13a598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a59c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x13a59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13a5a0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x13A5A0u;
    SET_GPR_U32(ctx, 31, 0x13A5A8u);
    ctx->pc = 0x13A5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A5A0u;
    // 0x13a5a4: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x13A5A0u, 0x13A5A8u)) {
        return;
    }
    ctx->pc = 0x13A5A8u;
label_13a5a8:
    // 0x13a5a8: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x13a5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x13a5ac: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x13a5acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13a5b0: 0x5460ffed  bnel        $v1, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x13A5B0u;
    {
        const bool branch_taken_0x13a5b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a5b0) {
            ctx->pc = 0x13A5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A5B0u;
            // 0x13a5b4: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a568;
        }
    }
    ctx->pc = 0x13A5B8u;
label_13a5b8:
    // 0x13a5b8: 0xae600044  sw          $zero, 0x44($s3)
    ctx->pc = 0x13a5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
    // 0x13a5bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x13a5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a5c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13a5c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a5c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13a5c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a5c8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x13a5c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a5cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13a5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x13A5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5D0u;
        // 0x13a5d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A5D8u;
}
