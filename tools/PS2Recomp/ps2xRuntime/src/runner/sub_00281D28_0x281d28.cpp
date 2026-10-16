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

// Function: sub_00281D28
// Address: 0x281d28 - 0x281db8
void sub_00281D28_0x281d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281D28_0x281d28");
#endif

    ctx->pc = 0x281d28u;

    // 0x281d28: 0x8f828840  lw          $v0, -0x77C0($gp)
    ctx->pc = 0x281d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
    // 0x281d2c: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x281d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x281d30: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x281d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
    // 0x281d34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x281d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x281d38: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x281d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x281d3c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x281d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x281d40: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x281d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281d44: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x281d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x281d48: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x281d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x281d4c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x281d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x281d50: 0x8f838840  lw          $v1, -0x77C0($gp)
    ctx->pc = 0x281d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
    // 0x281d54: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x281d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x281d58: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x281d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x281d5c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x281d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x281d60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x281d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281d64: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x281d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x281d68: 0x46182b  sltu        $v1, $v0, $a2
    ctx->pc = 0x281d68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x281d6c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x281d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x281d70: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x281D70u;
    {
        const bool branch_taken_0x281d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x281D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D70u;
        // 0x281d74: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d70) {
            ctx->pc = 0x281D90u;
            goto label_281d90;
        }
    }
    ctx->pc = 0x281D78u;
    // 0x281d78: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x281d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x281d7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x281d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x281d80: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x281d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x281d84: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x281d84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x281d88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x281D88u;
    {
        const bool branch_taken_0x281d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D88u;
        // 0x281d8c: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d88) {
            ctx->pc = 0x281DACu;
            goto label_281dac;
        }
    }
    ctx->pc = 0x281D90u;
label_281d90:
    // 0x281d90: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x281d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x281d94: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x281d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x281d98: 0x46182b  sltu        $v1, $v0, $a2
    ctx->pc = 0x281d98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x281d9c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x281D9Cu;
    {
        const bool branch_taken_0x281d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x281DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D9Cu;
        // 0x281da0: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d9c) {
            ctx->pc = 0x281DACu;
            goto label_281dac;
        }
    }
    ctx->pc = 0x281DA4u;
    // 0x281da4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x281da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x281da8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x281da8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_281dac:
    // 0x281dac: 0x3e00008  jr          $ra
    ctx->pc = 0x281DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281DACu;
        // 0x281db0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281DB4u;
    // 0x281db4: 0x0  nop
    ctx->pc = 0x281db4u;
    // NOP
    ctx->pc = 0x281db8u;
}
