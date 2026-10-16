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

// Function: sub_001A4D40
// Address: 0x1a4d40 - 0x1a4dc8
void sub_001A4D40_0x1a4d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4D40_0x1a4d40");
#endif

    switch (ctx->pc) {
        case 0x1a4d70u: goto label_1a4d70;
        case 0x1a4d78u: goto label_1a4d78;
        case 0x1a4d84u: goto label_1a4d84;
        default: break;
    }

    ctx->pc = 0x1a4d40u;

    // 0x1a4d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a4d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a4d44: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a4d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a4d48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a4d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a4d4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a4d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4d50: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a4d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a4d54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a4d54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4d58: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a4d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a4d5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4d60: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1a4d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1a4d64: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A4D64u;
    {
        const bool branch_taken_0x1a4d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D64u;
        // 0x1a4d68: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d64) {
            ctx->pc = 0x1A4DA4u;
            goto label_1a4da4;
        }
    }
    ctx->pc = 0x1A4D6Cu;
    // 0x1a4d6c: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x1a4d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_1a4d70:
    // 0x1a4d70: 0xc0693c0  jal         func_1A4F00
    ctx->pc = 0x1A4D70u;
    SET_GPR_U32(ctx, 31, 0x1A4D78u);
    ctx->pc = 0x1A4D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4D70u;
    // 0x1a4d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4F00u, 0x1A4D70u, 0x1A4D78u)) {
        return;
    }
    ctx->pc = 0x1A4D78u;
label_1a4d78:
    // 0x1a4d78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4d7c: 0xc0c5c96  jal         func_317258
    ctx->pc = 0x1A4D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A4D84u);
    ctx->pc = 0x1A4D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4D7Cu;
    // 0x1a4d80: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317258u, 0x1A4D7Cu, 0x1A4D84u)) {
        return;
    }
    ctx->pc = 0x1A4D84u;
label_1a4d84:
    // 0x1a4d84: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4D84u;
    {
        const bool branch_taken_0x1a4d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d84) {
            ctx->pc = 0x1A4D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4D84u;
            // 0x1a4d88: 0x8e42002c  lw          $v0, 0x2C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4D94u;
            goto label_1a4d94;
        }
    }
    ctx->pc = 0x1A4D8Cu;
    // 0x1a4d8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A4D8Cu;
    {
        const bool branch_taken_0x1a4d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D8Cu;
        // 0x1a4d90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d8c) {
            ctx->pc = 0x1A4DA8u;
            goto label_1a4da8;
        }
    }
    ctx->pc = 0x1A4D94u;
label_1a4d94:
    // 0x1a4d94: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a4d94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a4d98: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1a4d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a4d9c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A4D9Cu;
    {
        const bool branch_taken_0x1a4d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D9Cu;
        // 0x1a4da0: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d9c) {
            ctx->pc = 0x1A4D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4d70;
        }
    }
    ctx->pc = 0x1A4DA4u;
label_1a4da4:
    // 0x1a4da4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4da8:
    // 0x1a4da8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a4da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a4dac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a4dacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a4db0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a4db0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4db4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a4db4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DBCu;
        // 0x1a4dc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4DC4u;
    // 0x1a4dc4: 0x0  nop
    ctx->pc = 0x1a4dc4u;
    // NOP
    ctx->pc = 0x1a4dc8u;
}
