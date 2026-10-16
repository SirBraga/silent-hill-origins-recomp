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

// Function: sub_001DBE08
// Address: 0x1dbe08 - 0x1dbea8
void sub_001DBE08_0x1dbe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBE08_0x1dbe08");
#endif

    switch (ctx->pc) {
        case 0x1dbe2cu: goto label_1dbe2c;
        case 0x1dbe50u: goto label_1dbe50;
        case 0x1dbe78u: goto label_1dbe78;
        default: break;
    }

    ctx->pc = 0x1dbe08u;

    // 0x1dbe08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dbe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dbe0c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1dbe0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1dbe10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1dbe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1dbe14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1dbe14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1dbe18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dbe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dbe1c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1dbe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1dbe20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbe24: 0xc07730e  jal         func_1DCC38
    ctx->pc = 0x1DBE24u;
    SET_GPR_U32(ctx, 31, 0x1DBE2Cu);
    ctx->pc = 0x1DBE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBE24u;
    // 0x1dbe28: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCC38u, 0x1DBE24u, 0x1DBE2Cu)) {
        return;
    }
    ctx->pc = 0x1DBE2Cu;
label_1dbe2c:
    // 0x1dbe2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dbe2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe30: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DBE30u;
    {
        const bool branch_taken_0x1dbe30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE30u;
        // 0x1dbe34: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe30) {
            ctx->pc = 0x1DBE8Cu;
            goto label_1dbe8c;
        }
    }
    ctx->pc = 0x1DBE38u;
    // 0x1dbe38: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x1dbe38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1dbe3c: 0x1a400012  blez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DBE3Cu;
    {
        const bool branch_taken_0x1dbe3c = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x1DBE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE3Cu;
        // 0x1dbe40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe3c) {
            ctx->pc = 0x1DBE88u;
            goto label_1dbe88;
        }
    }
    ctx->pc = 0x1DBE44u;
    // 0x1dbe44: 0x26330018  addiu       $s3, $s1, 0x18
    ctx->pc = 0x1dbe44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1dbe48: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1dbe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1dbe4c: 0x0  nop
    ctx->pc = 0x1dbe4cu;
    // NOP
label_1dbe50:
    // 0x1dbe50: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1dbe50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1dbe54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbe54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbe58: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1dbe58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dbe5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dbe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbe60: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1dbe60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dbe64: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1dbe64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dbe68: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBE68u;
    {
        const bool branch_taken_0x1dbe68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbe68) {
            ctx->pc = 0x1DBE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBE68u;
            // 0x1dbe6c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBE7Cu;
            goto label_1dbe7c;
        }
    }
    ctx->pc = 0x1DBE70u;
    // 0x1dbe70: 0xc09d64c  jal         func_275930
    ctx->pc = 0x1DBE70u;
    SET_GPR_U32(ctx, 31, 0x1DBE78u);
    ctx->pc = 0x1DBE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBE70u;
    // 0x1dbe74: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x1DBE70u, 0x1DBE78u)) {
        return;
    }
    ctx->pc = 0x1DBE78u;
label_1dbe78:
    // 0x1dbe78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dbe78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dbe7c:
    // 0x1dbe7c: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1dbe7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1dbe80: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DBE80u;
    {
        const bool branch_taken_0x1dbe80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbe80) {
            ctx->pc = 0x1DBE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBE80u;
            // 0x1dbe84: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbe50;
        }
    }
    ctx->pc = 0x1DBE88u;
label_1dbe88:
    // 0x1dbe88: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1dbe88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dbe8c:
    // 0x1dbe8c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1dbe8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dbe90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dbe90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbe94: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1dbe94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbe98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbe98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbe9c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1dbe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dbea0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEA0u;
        // 0x1dbea4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBEA8u;
}
