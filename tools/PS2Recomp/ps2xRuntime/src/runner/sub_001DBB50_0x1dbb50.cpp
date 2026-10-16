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

// Function: sub_001DBB50
// Address: 0x1dbb50 - 0x1dbc40
void sub_001DBB50_0x1dbb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBB50_0x1dbb50");
#endif

    switch (ctx->pc) {
        case 0x1dbb74u: goto label_1dbb74;
        case 0x1dbb98u: goto label_1dbb98;
        case 0x1dbbc0u: goto label_1dbbc0;
        case 0x1dbbe8u: goto label_1dbbe8;
        case 0x1dbc10u: goto label_1dbc10;
        default: break;
    }

    ctx->pc = 0x1dbb50u;

    // 0x1dbb50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dbb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dbb54: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1dbb54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1dbb58: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1dbb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1dbb5c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1dbb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1dbb60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dbb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dbb64: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1dbb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1dbb68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbb6c: 0xc07730e  jal         func_1DCC38
    ctx->pc = 0x1DBB6Cu;
    SET_GPR_U32(ctx, 31, 0x1DBB74u);
    ctx->pc = 0x1DBB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBB6Cu;
    // 0x1dbb70: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCC38u, 0x1DBB6Cu, 0x1DBB74u)) {
        return;
    }
    ctx->pc = 0x1DBB74u;
label_1dbb74:
    // 0x1dbb74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dbb74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb78: 0x5220002a  beql        $s1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1DBB78u;
    {
        const bool branch_taken_0x1dbb78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbb78) {
            ctx->pc = 0x1DBB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBB78u;
            // 0x1dbb7c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBC24u;
            goto label_1dbc24;
        }
    }
    ctx->pc = 0x1DBB80u;
    // 0x1dbb80: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x1dbb80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1dbb84: 0x1a400012  blez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DBB84u;
    {
        const bool branch_taken_0x1dbb84 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x1DBB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB84u;
        // 0x1dbb88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb84) {
            ctx->pc = 0x1DBBD0u;
            goto label_1dbbd0;
        }
    }
    ctx->pc = 0x1DBB8Cu;
    // 0x1dbb8c: 0x26330018  addiu       $s3, $s1, 0x18
    ctx->pc = 0x1dbb8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1dbb90: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1dbb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1dbb94: 0x0  nop
    ctx->pc = 0x1dbb94u;
    // NOP
label_1dbb98:
    // 0x1dbb98: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1dbb98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1dbb9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbba0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1dbba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dbba4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dbba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbba8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1dbba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dbbac: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1dbbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dbbb0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBBB0u;
    {
        const bool branch_taken_0x1dbbb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbbb0) {
            ctx->pc = 0x1DBBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBBB0u;
            // 0x1dbbb4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBBC4u;
            goto label_1dbbc4;
        }
    }
    ctx->pc = 0x1DBBB8u;
    // 0x1dbbb8: 0xc09d926  jal         func_276498
    ctx->pc = 0x1DBBB8u;
    SET_GPR_U32(ctx, 31, 0x1DBBC0u);
    ctx->pc = 0x1DBBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBB8u;
    // 0x1dbbbc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x1DBBB8u, 0x1DBBC0u)) {
        return;
    }
    ctx->pc = 0x1DBBC0u;
label_1dbbc0:
    // 0x1dbbc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dbbc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dbbc4:
    // 0x1dbbc4: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1dbbc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1dbbc8: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DBBC8u;
    {
        const bool branch_taken_0x1dbbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbbc8) {
            ctx->pc = 0x1DBBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBBC8u;
            // 0x1dbbcc: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbb98;
        }
    }
    ctx->pc = 0x1DBBD0u;
label_1dbbd0:
    // 0x1dbbd0: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1dbbd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dbbd4: 0x1a400012  blez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DBBD4u;
    {
        const bool branch_taken_0x1dbbd4 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x1DBBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBD4u;
        // 0x1dbbd8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbbd4) {
            ctx->pc = 0x1DBC20u;
            goto label_1dbc20;
        }
    }
    ctx->pc = 0x1DBBDCu;
    // 0x1dbbdc: 0x2633000c  addiu       $s3, $s1, 0xC
    ctx->pc = 0x1dbbdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1dbbe0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1dbbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1dbbe4: 0x0  nop
    ctx->pc = 0x1dbbe4u;
    // NOP
label_1dbbe8:
    // 0x1dbbe8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1dbbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1dbbec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbbf0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1dbbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dbbf4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dbbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbbf8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1dbbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dbbfc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1dbbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dbc00: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBC00u;
    {
        const bool branch_taken_0x1dbc00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc00) {
            ctx->pc = 0x1DBC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBC00u;
            // 0x1dbc04: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBC14u;
            goto label_1dbc14;
        }
    }
    ctx->pc = 0x1DBC08u;
    // 0x1dbc08: 0xc09d926  jal         func_276498
    ctx->pc = 0x1DBC08u;
    SET_GPR_U32(ctx, 31, 0x1DBC10u);
    ctx->pc = 0x1DBC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC08u;
    // 0x1dbc0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x1DBC08u, 0x1DBC10u)) {
        return;
    }
    ctx->pc = 0x1DBC10u;
label_1dbc10:
    // 0x1dbc10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dbc10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dbc14:
    // 0x1dbc14: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1dbc14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1dbc18: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DBC18u;
    {
        const bool branch_taken_0x1dbc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc18) {
            ctx->pc = 0x1DBC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBC18u;
            // 0x1dbc1c: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbbe8;
        }
    }
    ctx->pc = 0x1DBC20u;
label_1dbc20:
    // 0x1dbc20: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1dbc20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dbc24:
    // 0x1dbc24: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1dbc24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dbc28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dbc28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbc2c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1dbc2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbc30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbc30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbc34: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1dbc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dbc38: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC38u;
        // 0x1dbc3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBC40u;
}
