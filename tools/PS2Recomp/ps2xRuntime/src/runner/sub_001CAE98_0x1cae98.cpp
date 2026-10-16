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

// Function: sub_001CAE98
// Address: 0x1cae98 - 0x1caf38
void sub_001CAE98_0x1cae98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAE98_0x1cae98");
#endif

    switch (ctx->pc) {
        case 0x1caed4u: goto label_1caed4;
        case 0x1caee4u: goto label_1caee4;
        case 0x1caef0u: goto label_1caef0;
        default: break;
    }

    ctx->pc = 0x1cae98u;

    // 0x1cae98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cae98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cae9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cae9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1caea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1caea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1caea4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1caea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caea8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1caea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1caeac: 0x8e02026c  lw          $v0, 0x26C($s0)
    ctx->pc = 0x1caeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x1caeb0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CAEB0u;
    {
        const bool branch_taken_0x1caeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1caeb0) {
            ctx->pc = 0x1CAEDCu;
            goto label_1caedc;
        }
    }
    ctx->pc = 0x1CAEB8u;
    // 0x1caeb8: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x1caeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x1caebc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAEBCu;
    {
        const bool branch_taken_0x1caebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caebc) {
            ctx->pc = 0x1CAEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAEBCu;
            // 0x1caec0: 0x8e050268  lw          $a1, 0x268($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAECCu;
            goto label_1caecc;
        }
    }
    ctx->pc = 0x1CAEC4u;
    // 0x1caec4: 0x8e020268  lw          $v0, 0x268($s0)
    ctx->pc = 0x1caec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x1caec8: 0x38450001  xori        $a1, $v0, 0x1
    ctx->pc = 0x1caec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1caecc:
    // 0x1caecc: 0xc05d236  jal         func_1748D8
    ctx->pc = 0x1CAECCu;
    SET_GPR_U32(ctx, 31, 0x1CAED4u);
    ctx->pc = 0x1CAED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAECCu;
    // 0x1caed0: 0x8e040264  lw          $a0, 0x264($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1748D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1748D8u, 0x1CAECCu, 0x1CAED4u)) {
        return;
    }
    ctx->pc = 0x1CAED4u;
label_1caed4:
    // 0x1caed4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAED4u;
    {
        const bool branch_taken_0x1caed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAED4u;
        // 0x1caed8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caed4) {
            ctx->pc = 0x1CAEE8u;
            goto label_1caee8;
        }
    }
    ctx->pc = 0x1CAEDCu;
label_1caedc:
    // 0x1caedc: 0xc05d222  jal         func_174888
    ctx->pc = 0x1CAEDCu;
    SET_GPR_U32(ctx, 31, 0x1CAEE4u);
    ctx->pc = 0x1CAEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEDCu;
    // 0x1caee0: 0x8e040264  lw          $a0, 0x264($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x174888u, 0x1CAEDCu, 0x1CAEE4u)) {
        return;
    }
    ctx->pc = 0x1CAEE4u;
label_1caee4:
    // 0x1caee4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1caee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1caee8:
    // 0x1caee8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1caee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caeec: 0x0  nop
    ctx->pc = 0x1caeecu;
    // NOP
label_1caef0:
    // 0x1caef0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1caef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1caef4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1caef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1caef8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1caef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1caefc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1caefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1caf00: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1caf00u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1caf04: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CAF04u;
    {
        const bool branch_taken_0x1caf04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF04u;
        // 0x1caf08: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf04) {
            ctx->pc = 0x1CAEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1caef0;
        }
    }
    ctx->pc = 0x1CAF0Cu;
    // 0x1caf0c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1caf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1caf10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1caf10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caf14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1caf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caf18: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x1caf18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
    // 0x1caf1c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1caf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1caf20: 0xac44002c  sw          $a0, 0x2C($v0)
    ctx->pc = 0x1caf20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
    // 0x1caf24: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1caf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1caf28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1caf28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1caf2c: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x1caf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
    // 0x1caf30: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF30u;
        // 0x1caf34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAF38u;
}
