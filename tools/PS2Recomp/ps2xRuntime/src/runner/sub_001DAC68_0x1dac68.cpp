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

// Function: sub_001DAC68
// Address: 0x1dac68 - 0x1dad00
void sub_001DAC68_0x1dac68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAC68_0x1dac68");
#endif

    switch (ctx->pc) {
        case 0x1dac8cu: goto label_1dac8c;
        case 0x1daca0u: goto label_1daca0;
        case 0x1dacc0u: goto label_1dacc0;
        case 0x1dacdcu: goto label_1dacdc;
        default: break;
    }

    ctx->pc = 0x1dac68u;

    // 0x1dac68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dac68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dac6c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1dac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1dac70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dac70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1dac74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dac74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac78: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x1dac78u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x1dac7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dac7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1dac80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dac80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dac84: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1DAC84u;
    SET_GPR_U32(ctx, 31, 0x1DAC8Cu);
    ctx->pc = 0x1DAC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAC84u;
    // 0x1dac88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1DAC84u, 0x1DAC8Cu)) {
        return;
    }
    ctx->pc = 0x1DAC8Cu;
label_1dac8c:
    // 0x1dac8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dac90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dac94: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DAC94u;
    {
        const bool branch_taken_0x1dac94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC94u;
        // 0x1dac98: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac94) {
            ctx->pc = 0x1DACECu;
            goto label_1dacec;
        }
    }
    ctx->pc = 0x1DAC9Cu;
    // 0x1dac9c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1dac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1daca0:
    // 0x1daca0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1daca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1daca4: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DACA4u;
    {
        const bool branch_taken_0x1daca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1DACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACA4u;
        // 0x1daca8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daca4) {
            ctx->pc = 0x1DACC4u;
            goto label_1dacc4;
        }
    }
    ctx->pc = 0x1DACACu;
    // 0x1dacac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1dacacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dacb0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DACB0u;
    {
        const bool branch_taken_0x1dacb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dacb0) {
            ctx->pc = 0x1DACB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DACB0u;
            // 0x1dacb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DACC8u;
            goto label_1dacc8;
        }
    }
    ctx->pc = 0x1DACB8u;
    // 0x1dacb8: 0xc07f960  jal         func_1FE580
    ctx->pc = 0x1DACB8u;
    SET_GPR_U32(ctx, 31, 0x1DACC0u);
    ctx->pc = 0x1FE580u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE580u, 0x1DACB8u, 0x1DACC0u)) {
        return;
    }
    ctx->pc = 0x1DACC0u;
label_1dacc0:
    // 0x1dacc0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dacc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1dacc4:
    // 0x1dacc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dacc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dacc8:
    // 0x1dacc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dacc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1daccc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dacccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dacd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dacd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dacd4: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1DACD4u;
    SET_GPR_U32(ctx, 31, 0x1DACDCu);
    ctx->pc = 0x1DACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DACD4u;
    // 0x1dacd8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1DACD4u, 0x1DACDCu)) {
        return;
    }
    ctx->pc = 0x1DACDCu;
label_1dacdc:
    // 0x1dacdc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dacdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dace0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dace0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dace4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1DACE4u;
    {
        const bool branch_taken_0x1dace4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACE4u;
        // 0x1dace8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dace4) {
            ctx->pc = 0x1DACA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1daca0;
        }
    }
    ctx->pc = 0x1DACECu;
label_1dacec:
    // 0x1dacec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dacecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dacf0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dacf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dacf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dacf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dacf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DACF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACF8u;
        // 0x1dacfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DACF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAD00u;
}
