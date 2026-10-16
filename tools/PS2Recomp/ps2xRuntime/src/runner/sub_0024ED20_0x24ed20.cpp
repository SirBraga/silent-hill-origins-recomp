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

// Function: sub_0024ED20
// Address: 0x24ed20 - 0x24eda8
void sub_0024ED20_0x24ed20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024ED20_0x24ed20");
#endif

    ctx->pc = 0x24ed20u;

    // 0x24ed20: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x24ed20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ed24: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x24ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x24ed28: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x24ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24ed2c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x24ED2Cu;
    {
        const bool branch_taken_0x24ed2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED2Cu;
        // 0x24ed30: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed2c) {
            ctx->pc = 0x24ED68u;
            goto label_24ed68;
        }
    }
    ctx->pc = 0x24ED34u;
    // 0x24ed34: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x24ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x24ed38: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24ed38u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x24ed3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24ed3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24ed40: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x24ED40u;
    {
        const bool branch_taken_0x24ed40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ed40) {
            ctx->pc = 0x24ED44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24ED40u;
            // 0x24ed44: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ED6Cu;
            goto label_24ed6c;
        }
    }
    ctx->pc = 0x24ED48u;
    // 0x24ed48: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x24ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24ed4c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x24ed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x24ed50: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x24ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24ed54: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x24ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x24ed58: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x24ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x24ed5c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x24ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24ed60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24ED60u;
    {
        const bool branch_taken_0x24ed60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED60u;
        // 0x24ed64: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed60) {
            ctx->pc = 0x24ED78u;
            goto label_24ed78;
        }
    }
    ctx->pc = 0x24ED68u;
label_24ed68:
    // 0x24ed68: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x24ed68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_24ed6c:
    // 0x24ed6c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x24ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x24ed70: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x24ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24ed74: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x24ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_24ed78:
    // 0x24ed78: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x24ed78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x24ed7c: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x24ed7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x24ed80: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x24ed80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x24ed84: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x24ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x24ed88: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24ED88u;
    {
        const bool branch_taken_0x24ed88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED88u;
        // 0x24ed8c: 0xacc70008  sw          $a3, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed88) {
            ctx->pc = 0x24ED94u;
            goto label_24ed94;
        }
    }
    ctx->pc = 0x24ED90u;
    // 0x24ed90: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x24ed90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
label_24ed94:
    // 0x24ed94: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x24ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24ed98: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x24ed98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x24ed9c: 0x3e00008  jr          $ra
    ctx->pc = 0x24ED9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED9Cu;
        // 0x24eda0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ED9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EDA4u;
    // 0x24eda4: 0x0  nop
    ctx->pc = 0x24eda4u;
    // NOP
    ctx->pc = 0x24eda8u;
}
