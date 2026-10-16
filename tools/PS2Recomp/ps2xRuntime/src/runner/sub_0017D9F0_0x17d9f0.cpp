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

// Function: sub_0017D9F0
// Address: 0x17d9f0 - 0x17dae0
void sub_0017D9F0_0x17d9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D9F0_0x17d9f0");
#endif

    switch (ctx->pc) {
        case 0x17da38u: goto label_17da38;
        case 0x17da48u: goto label_17da48;
        case 0x17da60u: goto label_17da60;
        case 0x17daa0u: goto label_17daa0;
        case 0x17dac4u: goto label_17dac4;
        default: break;
    }

    ctx->pc = 0x17d9f0u;

    // 0x17d9f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17d9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17d9f4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17d9f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17d9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17d9fc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17da00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17da00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17da04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17da04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17da08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17da0c: 0x24427550  addiu       $v0, $v0, 0x7550
    ctx->pc = 0x17da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30032));
    // 0x17da10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17da10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17da14: 0x24637570  addiu       $v1, $v1, 0x7570
    ctx->pc = 0x17da14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30064));
    // 0x17da18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17da18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da1c: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x17da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x17da20: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x17da20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x17da24: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DA24u;
    {
        const bool branch_taken_0x17da24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA24u;
        // 0x17da28: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da24) {
            ctx->pc = 0x17DA38u;
            goto label_17da38;
        }
    }
    ctx->pc = 0x17DA2Cu;
    // 0x17da2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17da2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da30: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17DA30u;
    SET_GPR_U32(ctx, 31, 0x17DA38u);
    ctx->pc = 0x17DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DA30u;
    // 0x17da34: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17DA30u, 0x17DA38u)) {
        return;
    }
    ctx->pc = 0x17DA38u;
label_17da38:
    // 0x17da38: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x17da38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x17da3c: 0x26300044  addiu       $s0, $s1, 0x44
    ctx->pc = 0x17da3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x17da40: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17DA40u;
    SET_GPR_U32(ctx, 31, 0x17DA48u);
    ctx->pc = 0x17DA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DA40u;
    // 0x17da44: 0x248446a0  addiu       $a0, $a0, 0x46A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17DA40u, 0x17DA48u)) {
        return;
    }
    ctx->pc = 0x17DA48u;
label_17da48:
    // 0x17da48: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17da48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17da4c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x17da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17da50: 0x244299c0  addiu       $v0, $v0, -0x6640
    ctx->pc = 0x17da50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941120));
    // 0x17da54: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x17DA54u;
    {
        const bool branch_taken_0x17da54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA54u;
        // 0x17da58: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da54) {
            ctx->pc = 0x17DAB8u;
            goto label_17dab8;
        }
    }
    ctx->pc = 0x17DA5Cu;
    // 0x17da5c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x17da5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17da60:
    // 0x17da60: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x17DA60u;
    {
        const bool branch_taken_0x17da60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17da60) {
            ctx->pc = 0x17DA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DA60u;
            // 0x17da64: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DAB0u;
            goto label_17dab0;
        }
    }
    ctx->pc = 0x17DA68u;
    // 0x17da68: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x17da68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17da6c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DA6Cu;
    {
        const bool branch_taken_0x17da6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA6Cu;
        // 0x17da70: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da6c) {
            ctx->pc = 0x17DA7Cu;
            goto label_17da7c;
        }
    }
    ctx->pc = 0x17DA74u;
    // 0x17da74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17DA74u;
    {
        const bool branch_taken_0x17da74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA74u;
        // 0x17da78: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da74) {
            ctx->pc = 0x17DA80u;
            goto label_17da80;
        }
    }
    ctx->pc = 0x17DA7Cu;
label_17da7c:
    // 0x17da7c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x17da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_17da80:
    // 0x17da80: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x17da80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17da84: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DA84u;
    {
        const bool branch_taken_0x17da84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA84u;
        // 0x17da88: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da84) {
            ctx->pc = 0x17DA94u;
            goto label_17da94;
        }
    }
    ctx->pc = 0x17DA8Cu;
    // 0x17da8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17DA8Cu;
    {
        const bool branch_taken_0x17da8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA8Cu;
        // 0x17da90: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da8c) {
            ctx->pc = 0x17DA98u;
            goto label_17da98;
        }
    }
    ctx->pc = 0x17DA94u;
label_17da94:
    // 0x17da94: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x17da94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_17da98:
    // 0x17da98: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17DA98u;
    SET_GPR_U32(ctx, 31, 0x17DAA0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17DA98u, 0x17DAA0u)) {
        return;
    }
    ctx->pc = 0x17DAA0u;
label_17daa0:
    // 0x17daa0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17daa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17daa8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17daa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17daac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17daacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17dab0:
    // 0x17dab0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x17DAB0u;
    {
        const bool branch_taken_0x17dab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dab0) {
            ctx->pc = 0x17DAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DAB0u;
            // 0x17dab4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17da60;
        }
    }
    ctx->pc = 0x17DAB8u;
label_17dab8:
    // 0x17dab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17dab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dabc: 0xc04f084  jal         func_13C210
    ctx->pc = 0x17DABCu;
    SET_GPR_U32(ctx, 31, 0x17DAC4u);
    ctx->pc = 0x17DAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DABCu;
    // 0x17dac0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x17DABCu, 0x17DAC4u)) {
        return;
    }
    ctx->pc = 0x17DAC4u;
label_17dac4:
    // 0x17dac4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17dac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17dac8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17dac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dacc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17daccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17dad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dad4: 0x3e00008  jr          $ra
    ctx->pc = 0x17DAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAD4u;
        // 0x17dad8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DADCu;
    // 0x17dadc: 0x0  nop
    ctx->pc = 0x17dadcu;
    // NOP
    ctx->pc = 0x17dae0u;
}
