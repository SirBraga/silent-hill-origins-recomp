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

// Function: sub_001DBA48
// Address: 0x1dba48 - 0x1dbae8
void sub_001DBA48_0x1dba48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBA48_0x1dba48");
#endif

    switch (ctx->pc) {
        case 0x1dba6cu: goto label_1dba6c;
        case 0x1dba90u: goto label_1dba90;
        case 0x1dbab8u: goto label_1dbab8;
        default: break;
    }

    ctx->pc = 0x1dba48u;

    // 0x1dba48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dba48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dba4c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1dba4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1dba50: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1dba50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1dba54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1dba54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1dba58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dba58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dba5c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1dba5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1dba60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dba60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dba64: 0xc07730e  jal         func_1DCC38
    ctx->pc = 0x1DBA64u;
    SET_GPR_U32(ctx, 31, 0x1DBA6Cu);
    ctx->pc = 0x1DBA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBA64u;
    // 0x1dba68: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCC38u, 0x1DBA64u, 0x1DBA6Cu)) {
        return;
    }
    ctx->pc = 0x1DBA6Cu;
label_1dba6c:
    // 0x1dba6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dba6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba70: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DBA70u;
    {
        const bool branch_taken_0x1dba70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA70u;
        // 0x1dba74: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba70) {
            ctx->pc = 0x1DBACCu;
            goto label_1dbacc;
        }
    }
    ctx->pc = 0x1DBA78u;
    // 0x1dba78: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1dba78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dba7c: 0x1a400012  blez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DBA7Cu;
    {
        const bool branch_taken_0x1dba7c = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x1DBA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA7Cu;
        // 0x1dba80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba7c) {
            ctx->pc = 0x1DBAC8u;
            goto label_1dbac8;
        }
    }
    ctx->pc = 0x1DBA84u;
    // 0x1dba84: 0x2633000c  addiu       $s3, $s1, 0xC
    ctx->pc = 0x1dba84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1dba88: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1dba88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1dba8c: 0x0  nop
    ctx->pc = 0x1dba8cu;
    // NOP
label_1dba90:
    // 0x1dba90: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1dba90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1dba94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dba94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dba98: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1dba98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dba9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbaa0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1dbaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dbaa4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1dbaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dbaa8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBAA8u;
    {
        const bool branch_taken_0x1dbaa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbaa8) {
            ctx->pc = 0x1DBAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBAA8u;
            // 0x1dbaac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBABCu;
            goto label_1dbabc;
        }
    }
    ctx->pc = 0x1DBAB0u;
    // 0x1dbab0: 0xc09d926  jal         func_276498
    ctx->pc = 0x1DBAB0u;
    SET_GPR_U32(ctx, 31, 0x1DBAB8u);
    ctx->pc = 0x1DBAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBAB0u;
    // 0x1dbab4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x1DBAB0u, 0x1DBAB8u)) {
        return;
    }
    ctx->pc = 0x1DBAB8u;
label_1dbab8:
    // 0x1dbab8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dbab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dbabc:
    // 0x1dbabc: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1dbabcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1dbac0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DBAC0u;
    {
        const bool branch_taken_0x1dbac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbac0) {
            ctx->pc = 0x1DBAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBAC0u;
            // 0x1dbac4: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dba90;
        }
    }
    ctx->pc = 0x1DBAC8u;
label_1dbac8:
    // 0x1dbac8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1dbac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dbacc:
    // 0x1dbacc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1dbaccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dbad0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dbad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbad4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1dbad4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbadc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1dbadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dbae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAE0u;
        // 0x1dbae4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBAE8u;
}
