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

// Function: sub_001DBED8
// Address: 0x1dbed8 - 0x1dbf78
void sub_001DBED8_0x1dbed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBED8_0x1dbed8");
#endif

    switch (ctx->pc) {
        case 0x1dbefcu: goto label_1dbefc;
        case 0x1dbf20u: goto label_1dbf20;
        case 0x1dbf48u: goto label_1dbf48;
        default: break;
    }

    ctx->pc = 0x1dbed8u;

    // 0x1dbed8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dbed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dbedc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1dbedcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1dbee0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1dbee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1dbee4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1dbee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1dbee8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dbee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dbeec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1dbeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1dbef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbef4: 0xc07730e  jal         func_1DCC38
    ctx->pc = 0x1DBEF4u;
    SET_GPR_U32(ctx, 31, 0x1DBEFCu);
    ctx->pc = 0x1DBEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBEF4u;
    // 0x1dbef8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCC38u, 0x1DBEF4u, 0x1DBEFCu)) {
        return;
    }
    ctx->pc = 0x1DBEFCu;
label_1dbefc:
    // 0x1dbefc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dbefcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbf00: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DBF00u;
    {
        const bool branch_taken_0x1dbf00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF00u;
        // 0x1dbf04: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf00) {
            ctx->pc = 0x1DBF5Cu;
            goto label_1dbf5c;
        }
    }
    ctx->pc = 0x1DBF08u;
    // 0x1dbf08: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1dbf08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dbf0c: 0x1a400012  blez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DBF0Cu;
    {
        const bool branch_taken_0x1dbf0c = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x1DBF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF0Cu;
        // 0x1dbf10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf0c) {
            ctx->pc = 0x1DBF58u;
            goto label_1dbf58;
        }
    }
    ctx->pc = 0x1DBF14u;
    // 0x1dbf14: 0x2633000c  addiu       $s3, $s1, 0xC
    ctx->pc = 0x1dbf14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1dbf18: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1dbf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1dbf1c: 0x0  nop
    ctx->pc = 0x1dbf1cu;
    // NOP
label_1dbf20:
    // 0x1dbf20: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1dbf20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1dbf24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbf24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbf28: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1dbf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dbf2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dbf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbf30: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1dbf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dbf34: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1dbf34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dbf38: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBF38u;
    {
        const bool branch_taken_0x1dbf38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbf38) {
            ctx->pc = 0x1DBF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBF38u;
            // 0x1dbf3c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBF4Cu;
            goto label_1dbf4c;
        }
    }
    ctx->pc = 0x1DBF40u;
    // 0x1dbf40: 0xc09d64c  jal         func_275930
    ctx->pc = 0x1DBF40u;
    SET_GPR_U32(ctx, 31, 0x1DBF48u);
    ctx->pc = 0x1DBF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBF40u;
    // 0x1dbf44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x1DBF40u, 0x1DBF48u)) {
        return;
    }
    ctx->pc = 0x1DBF48u;
label_1dbf48:
    // 0x1dbf48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dbf48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dbf4c:
    // 0x1dbf4c: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1dbf4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1dbf50: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DBF50u;
    {
        const bool branch_taken_0x1dbf50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbf50) {
            ctx->pc = 0x1DBF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBF50u;
            // 0x1dbf54: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbf20;
        }
    }
    ctx->pc = 0x1DBF58u;
label_1dbf58:
    // 0x1dbf58: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1dbf58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dbf5c:
    // 0x1dbf5c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1dbf5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dbf60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dbf60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbf64: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1dbf64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbf68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbf6c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1dbf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dbf70: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF70u;
        // 0x1dbf74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBF78u;
}
