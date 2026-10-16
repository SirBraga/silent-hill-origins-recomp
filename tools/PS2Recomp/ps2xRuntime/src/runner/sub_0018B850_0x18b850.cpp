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

// Function: sub_0018B850
// Address: 0x18b850 - 0x18b8e8
void sub_0018B850_0x18b850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B850_0x18b850");
#endif

    switch (ctx->pc) {
        case 0x18b880u: goto label_18b880;
        case 0x18b890u: goto label_18b890;
        case 0x18b8a8u: goto label_18b8a8;
        default: break;
    }

    ctx->pc = 0x18b850u;

    // 0x18b850: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18b850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18b854: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18b854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18b858: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18b85c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b860: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18b860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18b864: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18b864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b868: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18b868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x18b86c: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x18B86Cu;
    {
        const bool branch_taken_0x18b86c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B86Cu;
        // 0x18b870: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b86c) {
            ctx->pc = 0x18B8BCu;
            goto label_18b8bc;
        }
    }
    ctx->pc = 0x18B874u;
    // 0x18b874: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18b874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b878: 0xc065c40  jal         func_197100
    ctx->pc = 0x18B878u;
    SET_GPR_U32(ctx, 31, 0x18B880u);
    ctx->pc = 0x18B87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B878u;
    // 0x18b87c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x18B878u, 0x18B880u)) {
        return;
    }
    ctx->pc = 0x18B880u;
label_18b880:
    // 0x18b880: 0x8e10002c  lw          $s0, 0x2C($s0)
    ctx->pc = 0x18b880u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x18b884: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x18B884u;
    {
        const bool branch_taken_0x18b884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B884u;
        // 0x18b888: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b884) {
            ctx->pc = 0x18B8BCu;
            goto label_18b8bc;
        }
    }
    ctx->pc = 0x18B88Cu;
    // 0x18b88c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x18b88cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18b890:
    // 0x18b890: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x18b890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x18b894: 0x56620007  bnel        $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18B894u;
    {
        const bool branch_taken_0x18b894 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b894) {
            ctx->pc = 0x18B898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B894u;
            // 0x18b898: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B8B4u;
            goto label_18b8b4;
        }
    }
    ctx->pc = 0x18B89Cu;
    // 0x18b89c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18b89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b8a0: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x18B8A0u;
    SET_GPR_U32(ctx, 31, 0x18B8A8u);
    ctx->pc = 0x18B8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B8A0u;
    // 0x18b8a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x18B8A0u, 0x18B8A8u)) {
        return;
    }
    ctx->pc = 0x18B8A8u;
label_18b8a8:
    // 0x18b8a8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B8A8u;
    {
        const bool branch_taken_0x18b8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b8a8) {
            ctx->pc = 0x18B8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B8A8u;
            // 0x18b8ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B8C0u;
            goto label_18b8c0;
        }
    }
    ctx->pc = 0x18B8B0u;
    // 0x18b8b0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18b8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18b8b4:
    // 0x18b8b4: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x18B8B4u;
    {
        const bool branch_taken_0x18b8b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b8b4) {
            ctx->pc = 0x18B8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B8B4u;
            // 0x18b8b8: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b890;
        }
    }
    ctx->pc = 0x18B8BCu;
label_18b8bc:
    // 0x18b8bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18b8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b8c0:
    // 0x18b8c0: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18B8C0u;
    {
        const bool branch_taken_0x18b8c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8C0u;
        // 0x18b8c4: 0x24a20024  addiu       $v0, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8c0) {
            ctx->pc = 0x18B8CCu;
            goto label_18b8cc;
        }
    }
    ctx->pc = 0x18B8C8u;
    // 0x18b8c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18b8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b8cc:
    // 0x18b8cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18b8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b8d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18b8d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b8d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b8d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b8d8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18b8d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b8dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x18B8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8E0u;
        // 0x18b8e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B8E8u;
}
