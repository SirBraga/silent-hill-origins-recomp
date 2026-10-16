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

// Function: sub_0021AD30
// Address: 0x21ad30 - 0x21ae20
void sub_0021AD30_0x21ad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AD30_0x21ad30");
#endif

    switch (ctx->pc) {
        case 0x21ad54u: goto label_21ad54;
        case 0x21ad90u: goto label_21ad90;
        case 0x21ad98u: goto label_21ad98;
        default: break;
    }

    ctx->pc = 0x21ad30u;

    // 0x21ad30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21ad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21ad34: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x21ad34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x21ad38: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x21ad38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x21ad3c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x21ad3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x21ad40: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x21ad40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x21ad44: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x21ad44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x21ad48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ad48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ad4c: 0xc086cb6  jal         func_21B2D8
    ctx->pc = 0x21AD4Cu;
    SET_GPR_U32(ctx, 31, 0x21AD54u);
    ctx->pc = 0x21AD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AD4Cu;
    // 0x21ad50: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B2D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B2D8u, 0x21AD4Cu, 0x21AD54u)) {
        return;
    }
    ctx->pc = 0x21AD54u;
label_21ad54:
    // 0x21ad54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21ad54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad58: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AD58u;
    {
        const bool branch_taken_0x21ad58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ad58) {
            ctx->pc = 0x21AD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AD58u;
            // 0x21ad5c: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AD68u;
            goto label_21ad68;
        }
    }
    ctx->pc = 0x21AD60u;
    // 0x21ad60: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x21AD60u;
    {
        const bool branch_taken_0x21ad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD60u;
        // 0x21ad64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ad60) {
            ctx->pc = 0x21ADFCu;
            goto label_21adfc;
        }
    }
    ctx->pc = 0x21AD68u;
label_21ad68:
    // 0x21ad68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21ad68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad6c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21ad6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad70: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x21ad70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x21ad74: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21ad78: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21ad78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x21ad7c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x21ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x21ad80: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x21ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x21ad84: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x21ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x21ad88: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21AD88u;
    {
        const bool branch_taken_0x21ad88 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD88u;
        // 0x21ad8c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ad88) {
            ctx->pc = 0x21ADF8u;
            goto label_21adf8;
        }
    }
    ctx->pc = 0x21AD90u;
label_21ad90:
    // 0x21ad90: 0xc086cd2  jal         func_21B348
    ctx->pc = 0x21AD90u;
    SET_GPR_U32(ctx, 31, 0x21AD98u);
    ctx->pc = 0x21B348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B348u, 0x21AD90u, 0x21AD98u)) {
        return;
    }
    ctx->pc = 0x21AD98u;
label_21ad98:
    // 0x21ad98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21ad98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad9c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x21AD9Cu;
    {
        const bool branch_taken_0x21ad9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD9Cu;
        // 0x21ada0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ad9c) {
            ctx->pc = 0x21ADFCu;
            goto label_21adfc;
        }
    }
    ctx->pc = 0x21ADA4u;
    // 0x21ada4: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x21ada4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x21ada8: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x21ada8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x21adac: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x21adacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21adb0: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x21adb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21adb4: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x21adb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21adb8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x21adb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x21adbc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x21adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21adc0: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x21ADC0u;
    {
        const bool branch_taken_0x21adc0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x21ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ADC0u;
        // 0x21adc4: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21adc0) {
            ctx->pc = 0x21ADD4u;
            goto label_21add4;
        }
    }
    ctx->pc = 0x21ADC8u;
    // 0x21adc8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x21adc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x21adcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21ADCCu;
    {
        const bool branch_taken_0x21adcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ADCCu;
        // 0x21add0: 0xac630010  sw          $v1, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21adcc) {
            ctx->pc = 0x21ADE0u;
            goto label_21ade0;
        }
    }
    ctx->pc = 0x21ADD4u;
label_21add4:
    // 0x21add4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x21add4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x21add8: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x21add8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x21addc: 0xae630010  sw          $v1, 0x10($s3)
    ctx->pc = 0x21addcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
label_21ade0:
    // 0x21ade0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x21ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x21ade4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x21ade4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x21ade8: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x21ade8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21adec: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x21adecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21adf0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x21ADF0u;
    {
        const bool branch_taken_0x21adf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ADF0u;
        // 0x21adf4: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21adf0) {
            ctx->pc = 0x21AD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ad90;
        }
    }
    ctx->pc = 0x21ADF8u;
label_21adf8:
    // 0x21adf8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21adf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21adfc:
    // 0x21adfc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x21adfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21ae00: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x21ae00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21ae04: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x21ae04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ae08: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x21ae08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ae0c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x21ae0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ae10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ae10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ae14: 0x3e00008  jr          $ra
    ctx->pc = 0x21AE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE14u;
        // 0x21ae18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AE1Cu;
    // 0x21ae1c: 0x0  nop
    ctx->pc = 0x21ae1cu;
    // NOP
    ctx->pc = 0x21ae20u;
}
