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

// Function: sub_001DBCE8
// Address: 0x1dbce8 - 0x1dbdd8
void sub_001DBCE8_0x1dbce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBCE8_0x1dbce8");
#endif

    switch (ctx->pc) {
        case 0x1dbd0cu: goto label_1dbd0c;
        case 0x1dbd30u: goto label_1dbd30;
        case 0x1dbd58u: goto label_1dbd58;
        case 0x1dbd80u: goto label_1dbd80;
        case 0x1dbda8u: goto label_1dbda8;
        default: break;
    }

    ctx->pc = 0x1dbce8u;

    // 0x1dbce8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dbce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dbcec: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1dbcecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1dbcf0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1dbcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1dbcf4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1dbcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1dbcf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dbcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dbcfc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1dbcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1dbd00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbd04: 0xc07730e  jal         func_1DCC38
    ctx->pc = 0x1DBD04u;
    SET_GPR_U32(ctx, 31, 0x1DBD0Cu);
    ctx->pc = 0x1DBD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD04u;
    // 0x1dbd08: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCC38u, 0x1DBD04u, 0x1DBD0Cu)) {
        return;
    }
    ctx->pc = 0x1DBD0Cu;
label_1dbd0c:
    // 0x1dbd0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dbd0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd10: 0x5220002a  beql        $s1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1DBD10u;
    {
        const bool branch_taken_0x1dbd10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbd10) {
            ctx->pc = 0x1DBD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBD10u;
            // 0x1dbd14: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBDBCu;
            goto label_1dbdbc;
        }
    }
    ctx->pc = 0x1DBD18u;
    // 0x1dbd18: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x1dbd18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1dbd1c: 0x1a400012  blez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DBD1Cu;
    {
        const bool branch_taken_0x1dbd1c = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x1DBD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD1Cu;
        // 0x1dbd20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd1c) {
            ctx->pc = 0x1DBD68u;
            goto label_1dbd68;
        }
    }
    ctx->pc = 0x1DBD24u;
    // 0x1dbd24: 0x26330018  addiu       $s3, $s1, 0x18
    ctx->pc = 0x1dbd24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1dbd28: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1dbd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1dbd2c: 0x0  nop
    ctx->pc = 0x1dbd2cu;
    // NOP
label_1dbd30:
    // 0x1dbd30: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1dbd30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1dbd34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbd38: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1dbd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dbd3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dbd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbd40: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1dbd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dbd44: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1dbd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dbd48: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBD48u;
    {
        const bool branch_taken_0x1dbd48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbd48) {
            ctx->pc = 0x1DBD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBD48u;
            // 0x1dbd4c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBD5Cu;
            goto label_1dbd5c;
        }
    }
    ctx->pc = 0x1DBD50u;
    // 0x1dbd50: 0xc09d64c  jal         func_275930
    ctx->pc = 0x1DBD50u;
    SET_GPR_U32(ctx, 31, 0x1DBD58u);
    ctx->pc = 0x1DBD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD50u;
    // 0x1dbd54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x1DBD50u, 0x1DBD58u)) {
        return;
    }
    ctx->pc = 0x1DBD58u;
label_1dbd58:
    // 0x1dbd58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dbd58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dbd5c:
    // 0x1dbd5c: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1dbd5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1dbd60: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DBD60u;
    {
        const bool branch_taken_0x1dbd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbd60) {
            ctx->pc = 0x1DBD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBD60u;
            // 0x1dbd64: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbd30;
        }
    }
    ctx->pc = 0x1DBD68u;
label_1dbd68:
    // 0x1dbd68: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1dbd68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dbd6c: 0x1a400012  blez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DBD6Cu;
    {
        const bool branch_taken_0x1dbd6c = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x1DBD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD6Cu;
        // 0x1dbd70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd6c) {
            ctx->pc = 0x1DBDB8u;
            goto label_1dbdb8;
        }
    }
    ctx->pc = 0x1DBD74u;
    // 0x1dbd74: 0x2633000c  addiu       $s3, $s1, 0xC
    ctx->pc = 0x1dbd74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1dbd78: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1dbd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1dbd7c: 0x0  nop
    ctx->pc = 0x1dbd7cu;
    // NOP
label_1dbd80:
    // 0x1dbd80: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1dbd80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1dbd84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbd88: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1dbd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dbd8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dbd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbd90: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1dbd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dbd94: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1dbd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dbd98: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBD98u;
    {
        const bool branch_taken_0x1dbd98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbd98) {
            ctx->pc = 0x1DBD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBD98u;
            // 0x1dbd9c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBDACu;
            goto label_1dbdac;
        }
    }
    ctx->pc = 0x1DBDA0u;
    // 0x1dbda0: 0xc09d64c  jal         func_275930
    ctx->pc = 0x1DBDA0u;
    SET_GPR_U32(ctx, 31, 0x1DBDA8u);
    ctx->pc = 0x1DBDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDA0u;
    // 0x1dbda4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x1DBDA0u, 0x1DBDA8u)) {
        return;
    }
    ctx->pc = 0x1DBDA8u;
label_1dbda8:
    // 0x1dbda8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dbda8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dbdac:
    // 0x1dbdac: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1dbdacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1dbdb0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DBDB0u;
    {
        const bool branch_taken_0x1dbdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbdb0) {
            ctx->pc = 0x1DBDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBDB0u;
            // 0x1dbdb4: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbd80;
        }
    }
    ctx->pc = 0x1DBDB8u;
label_1dbdb8:
    // 0x1dbdb8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1dbdb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dbdbc:
    // 0x1dbdbc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1dbdbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dbdc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dbdc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbdc4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1dbdc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbdc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbdcc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1dbdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dbdd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDD0u;
        // 0x1dbdd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBDD8u;
}
