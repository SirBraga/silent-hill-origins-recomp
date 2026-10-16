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

// Function: sub_0024EE08
// Address: 0x24ee08 - 0x24eec0
void sub_0024EE08_0x24ee08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EE08_0x24ee08");
#endif

    ctx->pc = 0x24ee08u;

    // 0x24ee08: 0x2486ffe0  addiu       $a2, $a0, -0x20
    ctx->pc = 0x24ee08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x24ee0c: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x24ee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x24ee10: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x24ee10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x24ee14: 0x8c83ffe0  lw          $v1, -0x20($a0)
    ctx->pc = 0x24ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967264)));
    // 0x24ee18: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x24ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24ee1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24EE1Cu;
    {
        const bool branch_taken_0x24ee1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE1Cu;
        // 0x24ee20: 0x8cc70004  lw          $a3, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee1c) {
            ctx->pc = 0x24EE30u;
            goto label_24ee30;
        }
    }
    ctx->pc = 0x24EE24u;
    // 0x24ee24: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x24ee24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24ee28: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24EE28u;
    {
        const bool branch_taken_0x24ee28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ee28) {
            ctx->pc = 0x24EE34u;
            goto label_24ee34;
        }
    }
    ctx->pc = 0x24EE30u;
label_24ee30:
    // 0x24ee30: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x24ee30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_24ee34:
    // 0x24ee34: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x24EE34u;
    {
        const bool branch_taken_0x24ee34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ee34) {
            ctx->pc = 0x24EE74u;
            goto label_24ee74;
        }
    }
    ctx->pc = 0x24EE3Cu;
    // 0x24ee3c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x24ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x24ee40: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24ee40u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x24ee44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24ee44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24ee48: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24EE48u;
    {
        const bool branch_taken_0x24ee48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ee48) {
            ctx->pc = 0x24EE74u;
            goto label_24ee74;
        }
    }
    ctx->pc = 0x24EE50u;
    // 0x24ee50: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x24EE50u;
    {
        const bool branch_taken_0x24ee50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE50u;
        // 0x24ee54: 0xaca70004  sw          $a3, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee50) {
            ctx->pc = 0x24EE5Cu;
            goto label_24ee5c;
        }
    }
    ctx->pc = 0x24EE58u;
    // 0x24ee58: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x24ee58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
label_24ee5c:
    // 0x24ee5c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x24ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x24ee60: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x24ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x24ee64: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x24ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x24ee68: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x24ee68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ee6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24ee70: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x24ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_24ee74:
    // 0x24ee74: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x24EE74u;
    {
        const bool branch_taken_0x24ee74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ee74) {
            ctx->pc = 0x24EEB8u;
            goto label_24eeb8;
        }
    }
    ctx->pc = 0x24EE7Cu;
    // 0x24ee7c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x24ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x24ee80: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24ee80u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x24ee84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24ee84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24ee88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24EE88u;
    {
        const bool branch_taken_0x24ee88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ee88) {
            ctx->pc = 0x24EEB8u;
            goto label_24eeb8;
        }
    }
    ctx->pc = 0x24EE90u;
    // 0x24ee90: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x24ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24ee94: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x24ee94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x24ee98: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x24ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24ee9c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24EE9Cu;
    {
        const bool branch_taken_0x24ee9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ee9c) {
            ctx->pc = 0x24EEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EE9Cu;
            // 0x24eea0: 0xac460008  sw          $a2, 0x8($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EEA4u;
            goto label_24eea4;
        }
    }
    ctx->pc = 0x24EEA4u;
label_24eea4:
    // 0x24eea4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x24eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x24eea8: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x24eea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x24eeac: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x24eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x24eeb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24eeb4: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x24eeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_24eeb8:
    // 0x24eeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x24EEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EEC0u;
}
