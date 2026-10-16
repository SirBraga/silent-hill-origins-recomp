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

// Function: sub_0018B7A0
// Address: 0x18b7a0 - 0x18b850
void sub_0018B7A0_0x18b7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B7A0_0x18b7a0");
#endif

    switch (ctx->pc) {
        case 0x18b7d0u: goto label_18b7d0;
        case 0x18b7e0u: goto label_18b7e0;
        case 0x18b7f8u: goto label_18b7f8;
        default: break;
    }

    ctx->pc = 0x18b7a0u;

    // 0x18b7a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18b7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18b7a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18b7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18b7a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18b7ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b7b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18b7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18b7b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18b7b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b7b8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18b7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x18b7bc: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x18B7BCu;
    {
        const bool branch_taken_0x18b7bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7BCu;
        // 0x18b7c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7bc) {
            ctx->pc = 0x18B80Cu;
            goto label_18b80c;
        }
    }
    ctx->pc = 0x18B7C4u;
    // 0x18b7c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18b7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b7c8: 0xc065c40  jal         func_197100
    ctx->pc = 0x18B7C8u;
    SET_GPR_U32(ctx, 31, 0x18B7D0u);
    ctx->pc = 0x18B7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B7C8u;
    // 0x18b7cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x18B7C8u, 0x18B7D0u)) {
        return;
    }
    ctx->pc = 0x18B7D0u;
label_18b7d0:
    // 0x18b7d0: 0x8e11002c  lw          $s1, 0x2C($s0)
    ctx->pc = 0x18b7d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x18b7d4: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x18B7D4u;
    {
        const bool branch_taken_0x18b7d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7D4u;
        // 0x18b7d8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7d4) {
            ctx->pc = 0x18B80Cu;
            goto label_18b80c;
        }
    }
    ctx->pc = 0x18B7DCu;
    // 0x18b7dc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x18b7dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18b7e0:
    // 0x18b7e0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x18b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x18b7e4: 0x56620007  bnel        $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18B7E4u;
    {
        const bool branch_taken_0x18b7e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b7e4) {
            ctx->pc = 0x18B7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B7E4u;
            // 0x18b7e8: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B804u;
            goto label_18b804;
        }
    }
    ctx->pc = 0x18B7ECu;
    // 0x18b7ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18b7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b7f0: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x18B7F0u;
    SET_GPR_U32(ctx, 31, 0x18B7F8u);
    ctx->pc = 0x18B7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B7F0u;
    // 0x18b7f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x18B7F0u, 0x18B7F8u)) {
        return;
    }
    ctx->pc = 0x18B7F8u;
label_18b7f8:
    // 0x18b7f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B7F8u;
    {
        const bool branch_taken_0x18b7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7F8u;
        // 0x18b7fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7f8) {
            ctx->pc = 0x18B810u;
            goto label_18b810;
        }
    }
    ctx->pc = 0x18B800u;
    // 0x18b800: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x18b800u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18b804:
    // 0x18b804: 0x5620fff6  bnel        $s1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x18B804u;
    {
        const bool branch_taken_0x18b804 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b804) {
            ctx->pc = 0x18B808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B804u;
            // 0x18b808: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b7e0;
        }
    }
    ctx->pc = 0x18B80Cu;
label_18b80c:
    // 0x18b80c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18b80cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b810:
    // 0x18b810: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18b810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b814: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18b814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b818: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b81c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18b81cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b824: 0x3e00008  jr          $ra
    ctx->pc = 0x18B824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B824u;
        // 0x18b828: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B82Cu;
    // 0x18b82c: 0x0  nop
    ctx->pc = 0x18b82cu;
    // NOP
    // 0x18b830: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x18b830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18b834: 0x0  nop
    ctx->pc = 0x18b834u;
    // NOP
    // 0x18b838: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x18b838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18b83c: 0x0  nop
    ctx->pc = 0x18b83cu;
    // NOP
    // 0x18b840: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18b840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18b844: 0x0  nop
    ctx->pc = 0x18b844u;
    // NOP
    // 0x18b848: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x18b848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18b84c: 0x0  nop
    ctx->pc = 0x18b84cu;
    // NOP
    ctx->pc = 0x18b850u;
}
