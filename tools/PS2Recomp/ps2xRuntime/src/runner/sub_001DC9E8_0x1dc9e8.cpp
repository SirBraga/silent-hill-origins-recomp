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

// Function: sub_001DC9E8
// Address: 0x1dc9e8 - 0x1dcab8
void sub_001DC9E8_0x1dc9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC9E8_0x1dc9e8");
#endif

    ctx->pc = 0x1dc9e8u;

    // 0x1dc9e8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1dc9e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc9ec: 0x10c0002f  beqz        $a2, . + 4 + (0x2F << 2)
    ctx->pc = 0x1DC9ECu;
    {
        const bool branch_taken_0x1dc9ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9ECu;
        // 0x1dc9f0: 0x3c070034  lui         $a3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9ec) {
            ctx->pc = 0x1DCAACu;
            goto label_1dcaac;
        }
    }
    ctx->pc = 0x1DC9F4u;
    // 0x1dc9f4: 0x8ce2e664  lw          $v0, -0x199C($a3)
    ctx->pc = 0x1dc9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960740)));
    // 0x1dc9f8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1dc9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1dc9fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dc9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dca00: 0x1065002a  beq         $v1, $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1DCA00u;
    {
        const bool branch_taken_0x1dca00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DCA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA00u;
        // 0x1dca04: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca00) {
            ctx->pc = 0x1DCAACu;
            goto label_1dcaac;
        }
    }
    ctx->pc = 0x1DCA08u;
    // 0x1dca08: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1dca08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1dca0c: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DCA0Cu;
    {
        const bool branch_taken_0x1dca0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dca0c) {
            ctx->pc = 0x1DCA6Cu;
            goto label_1dca6c;
        }
    }
    ctx->pc = 0x1DCA14u;
    // 0x1dca14: 0x10a20025  beq         $a1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1DCA14u;
    {
        const bool branch_taken_0x1dca14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DCA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA14u;
        // 0x1dca18: 0x8ce2e664  lw          $v0, -0x199C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca14) {
            ctx->pc = 0x1DCAACu;
            goto label_1dcaac;
        }
    }
    ctx->pc = 0x1DCA1Cu;
    // 0x1dca1c: 0x8cc40048  lw          $a0, 0x48($a2)
    ctx->pc = 0x1dca1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x1dca20: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1dca20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1dca24: 0xac44002c  sw          $a0, 0x2C($v0)
    ctx->pc = 0x1dca24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
    // 0x1dca28: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1dca28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1dca2c: 0x2463cc80  addiu       $v1, $v1, -0x3380
    ctx->pc = 0x1dca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954112));
    // 0x1dca30: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCA30u;
    {
        const bool branch_taken_0x1dca30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA30u;
        // 0x1dca34: 0xacc30048  sw          $v1, 0x48($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca30) {
            ctx->pc = 0x1DCA48u;
            goto label_1dca48;
        }
    }
    ctx->pc = 0x1DCA38u;
    // 0x1dca38: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1dca38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1dca3c: 0x244244b8  addiu       $v0, $v0, 0x44B8
    ctx->pc = 0x1dca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17592));
    // 0x1dca40: 0xacc20048  sw          $v0, 0x48($a2)
    ctx->pc = 0x1dca40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 2));
    // 0x1dca44: 0x0  nop
    ctx->pc = 0x1dca44u;
    // NOP
label_1dca48:
    // 0x1dca48: 0x8ce3e664  lw          $v1, -0x199C($a3)
    ctx->pc = 0x1dca48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960740)));
    // 0x1dca4c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1dca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1dca50: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1dca50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1dca54: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1dca54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1dca58: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1dca58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1dca5c: 0x8ce2e664  lw          $v0, -0x199C($a3)
    ctx->pc = 0x1dca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960740)));
    // 0x1dca60: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1dca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1dca64: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA64u;
        // 0x1dca68: 0xac450010  sw          $a1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCA6Cu;
label_1dca6c:
    // 0x1dca6c: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DCA6Cu;
    {
        const bool branch_taken_0x1dca6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA6Cu;
        // 0x1dca70: 0x8ce2e664  lw          $v0, -0x199C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca6c) {
            ctx->pc = 0x1DCAACu;
            goto label_1dcaac;
        }
    }
    ctx->pc = 0x1DCA74u;
    // 0x1dca74: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1dca74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1dca78: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1dca78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1dca7c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCA7Cu;
    {
        const bool branch_taken_0x1dca7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA7Cu;
        // 0x1dca80: 0xacc30048  sw          $v1, 0x48($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca7c) {
            ctx->pc = 0x1DCA90u;
            goto label_1dca90;
        }
    }
    ctx->pc = 0x1DCA84u;
    // 0x1dca84: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1dca84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1dca88: 0x244244b8  addiu       $v0, $v0, 0x44B8
    ctx->pc = 0x1dca88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17592));
    // 0x1dca8c: 0xacc20048  sw          $v0, 0x48($a2)
    ctx->pc = 0x1dca8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 2));
label_1dca90:
    // 0x1dca90: 0x8ce2e664  lw          $v0, -0x199C($a3)
    ctx->pc = 0x1dca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960740)));
    // 0x1dca94: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1dca94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1dca98: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1dca98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dca9c: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x1dca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x1dcaa0: 0x8ce3e664  lw          $v1, -0x199C($a3)
    ctx->pc = 0x1dcaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960740)));
    // 0x1dcaa4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1dcaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1dcaa8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1dcaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1dcaac:
    // 0x1dcaac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCAACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCAB4u;
    // 0x1dcab4: 0x0  nop
    ctx->pc = 0x1dcab4u;
    // NOP
    ctx->pc = 0x1dcab8u;
}
