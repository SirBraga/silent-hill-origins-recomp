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

// Function: sub_002BED68
// Address: 0x2bed68 - 0x2befb0
void sub_002BED68_0x2bed68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BED68_0x2bed68");
#endif

    ctx->pc = 0x2bed68u;

    // 0x2bed68: 0x14a6001f  bne         $a1, $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x2BED68u;
    {
        const bool branch_taken_0x2bed68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x2BED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED68u;
        // 0x2bed6c: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed68) {
            ctx->pc = 0x2BEDE8u;
            goto label_2bede8;
        }
    }
    ctx->pc = 0x2BED70u;
    // 0x2bed70: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x2BED70u;
    {
        const bool branch_taken_0x2bed70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bed70) {
            ctx->pc = 0x2BEDA8u;
            goto label_2beda8;
        }
    }
    ctx->pc = 0x2BED78u;
    // 0x2bed78: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2bed78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2bed7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BED7Cu;
    {
        const bool branch_taken_0x2bed7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED7Cu;
        // 0x2bed80: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed7c) {
            ctx->pc = 0x2BED94u;
            goto label_2bed94;
        }
    }
    ctx->pc = 0x2BED84u;
    // 0x2bed84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bed88: 0xacc70014  sw          $a3, 0x14($a2)
    ctx->pc = 0x2bed88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 7));
    // 0x2bed8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BED8Cu;
    {
        const bool branch_taken_0x2bed8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED8Cu;
        // 0x2bed90: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed8c) {
            ctx->pc = 0x2BEDA4u;
            goto label_2beda4;
        }
    }
    ctx->pc = 0x2BED94u;
label_2bed94:
    // 0x2bed94: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x2bed94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2bed98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bed98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bed9c: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x2bed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x2beda0: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x2beda0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_2beda4:
    // 0x2beda4: 0xacc70018  sw          $a3, 0x18($a2)
    ctx->pc = 0x2beda4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 7));
label_2beda8:
    // 0x2beda8: 0x1100007e  beqz        $t0, . + 4 + (0x7E << 2)
    ctx->pc = 0x2BEDA8u;
    {
        const bool branch_taken_0x2beda8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2beda8) {
            ctx->pc = 0x2BEFA4u;
            goto label_2befa4;
        }
    }
    ctx->pc = 0x2BEDB0u;
    // 0x2bedb0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2bedb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2bedb4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BEDB4u;
    {
        const bool branch_taken_0x2bedb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDB4u;
        // 0x2bedb8: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bedb4) {
            ctx->pc = 0x2BEDD0u;
            goto label_2bedd0;
        }
    }
    ctx->pc = 0x2BEDBCu;
    // 0x2bedbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bedbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bedc0: 0xaca80020  sw          $t0, 0x20($a1)
    ctx->pc = 0x2bedc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 8));
    // 0x2bedc4: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x2bedc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x2bedc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDC8u;
        // 0x2bedcc: 0xaca80024  sw          $t0, 0x24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEDD0u;
label_2bedd0:
    // 0x2bedd0: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x2bedd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2bedd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bedd8: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x2bedd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x2beddc: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x2beddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x2bede0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDE0u;
        // 0x2bede4: 0xaca80024  sw          $t0, 0x24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEDE8u;
label_2bede8:
    // 0x2bede8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2bede8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bedec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2bedecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bedf0: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2bedf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2bedf4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BEDF4u;
    {
        const bool branch_taken_0x2bedf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDF4u;
        // 0x2bedf8: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bedf4) {
            ctx->pc = 0x2BEE10u;
            goto label_2bee10;
        }
    }
    ctx->pc = 0x2BEDFCu;
    // 0x2bedfc: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2bedfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee00: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BEE00u;
    {
        const bool branch_taken_0x2bee00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2BEE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE00u;
        // 0x2bee04: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee00) {
            ctx->pc = 0x2BEE10u;
            goto label_2bee10;
        }
    }
    ctx->pc = 0x2BEE08u;
    // 0x2bee08: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2bee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bee0c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2bee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_2bee10:
    // 0x2bee10: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2bee10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2bee14: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x2bee14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2bee18: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2bee18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2bee1c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2bee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2bee20: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x2bee20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2bee24: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2bee24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2bee28: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x2bee28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2bee2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2bee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2bee30: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x2bee30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x2bee34: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2bee34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2bee38: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x2bee38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2bee3c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2bee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2bee40: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2bee40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2bee44: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2BEE44u;
    {
        const bool branch_taken_0x2bee44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE44u;
        // 0x2bee48: 0xad22000c  sw          $v0, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee44) {
            ctx->pc = 0x2BEE80u;
            goto label_2bee80;
        }
    }
    ctx->pc = 0x2BEE4Cu;
    // 0x2bee4c: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x2bee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2bee50: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BEE50u;
    {
        const bool branch_taken_0x2bee50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bee50) {
            ctx->pc = 0x2BEE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEE50u;
            // 0x2bee54: 0x8d240018  lw          $a0, 0x18($t1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEE68u;
            goto label_2bee68;
        }
    }
    ctx->pc = 0x2BEE58u;
    // 0x2bee58: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x2bee58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2bee5c: 0xad250010  sw          $a1, 0x10($t1)
    ctx->pc = 0x2bee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 5));
    // 0x2bee60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BEE60u;
    {
        const bool branch_taken_0x2bee60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE60u;
        // 0x2bee64: 0xad230014  sw          $v1, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee60) {
            ctx->pc = 0x2BEE78u;
            goto label_2bee78;
        }
    }
    ctx->pc = 0x2BEE68u;
label_2bee68:
    // 0x2bee68: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2bee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2bee6c: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x2bee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2bee70: 0xad220010  sw          $v0, 0x10($t1)
    ctx->pc = 0x2bee70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 2));
    // 0x2bee74: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2bee74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2bee78:
    // 0x2bee78: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x2bee78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2bee7c: 0xad220018  sw          $v0, 0x18($t1)
    ctx->pc = 0x2bee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 2));
label_2bee80:
    // 0x2bee80: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2bee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2bee84: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BEE84u;
    {
        const bool branch_taken_0x2bee84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bee84) {
            ctx->pc = 0x2BEEC0u;
            goto label_2beec0;
        }
    }
    ctx->pc = 0x2BEE8Cu;
    // 0x2bee8c: 0x8d23001c  lw          $v1, 0x1C($t1)
    ctx->pc = 0x2bee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x2bee90: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BEE90u;
    {
        const bool branch_taken_0x2bee90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bee90) {
            ctx->pc = 0x2BEE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEE90u;
            // 0x2bee94: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEEA8u;
            goto label_2beea8;
        }
    }
    ctx->pc = 0x2BEE98u;
    // 0x2bee98: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x2bee98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2bee9c: 0xad22001c  sw          $v0, 0x1C($t1)
    ctx->pc = 0x2bee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 2));
    // 0x2beea0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BEEA0u;
    {
        const bool branch_taken_0x2beea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEA0u;
        // 0x2beea4: 0xad230020  sw          $v1, 0x20($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beea0) {
            ctx->pc = 0x2BEEB8u;
            goto label_2beeb8;
        }
    }
    ctx->pc = 0x2BEEA8u;
label_2beea8:
    // 0x2beea8: 0x8d240024  lw          $a0, 0x24($t1)
    ctx->pc = 0x2beea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x2beeac: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x2beeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2beeb0: 0xad22001c  sw          $v0, 0x1C($t1)
    ctx->pc = 0x2beeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 2));
    // 0x2beeb4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2beeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2beeb8:
    // 0x2beeb8: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2beeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2beebc: 0xad220024  sw          $v0, 0x24($t1)
    ctx->pc = 0x2beebcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 2));
label_2beec0:
    // 0x2beec0: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x2BEEC0u;
    {
        const bool branch_taken_0x2beec0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2beec0) {
            ctx->pc = 0x2BEEF8u;
            goto label_2beef8;
        }
    }
    ctx->pc = 0x2BEEC8u;
    // 0x2beec8: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x2beec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2beecc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BEECCu;
    {
        const bool branch_taken_0x2beecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEECCu;
        // 0x2beed0: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beecc) {
            ctx->pc = 0x2BEEE4u;
            goto label_2beee4;
        }
    }
    ctx->pc = 0x2BEED4u;
    // 0x2beed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2beed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2beed8: 0xad270014  sw          $a3, 0x14($t1)
    ctx->pc = 0x2beed8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 7));
    // 0x2beedc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BEEDCu;
    {
        const bool branch_taken_0x2beedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEDCu;
        // 0x2beee0: 0xad220010  sw          $v0, 0x10($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beedc) {
            ctx->pc = 0x2BEEF4u;
            goto label_2beef4;
        }
    }
    ctx->pc = 0x2BEEE4u;
label_2beee4:
    // 0x2beee4: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x2beee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x2beee8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2beee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2beeec: 0xad220010  sw          $v0, 0x10($t1)
    ctx->pc = 0x2beeecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 2));
    // 0x2beef0: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x2beef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_2beef4:
    // 0x2beef4: 0xad270018  sw          $a3, 0x18($t1)
    ctx->pc = 0x2beef4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 7));
label_2beef8:
    // 0x2beef8: 0x5100000e  beql        $t0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2BEEF8u;
    {
        const bool branch_taken_0x2beef8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2beef8) {
            ctx->pc = 0x2BEEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEEF8u;
            // 0x2beefc: 0x8d420004  lw          $v0, 0x4($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEF34u;
            goto label_2bef34;
        }
    }
    ctx->pc = 0x2BEF00u;
    // 0x2bef00: 0x8d22001c  lw          $v0, 0x1C($t1)
    ctx->pc = 0x2bef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x2bef04: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BEF04u;
    {
        const bool branch_taken_0x2bef04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF04u;
        // 0x2bef08: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef04) {
            ctx->pc = 0x2BEF1Cu;
            goto label_2bef1c;
        }
    }
    ctx->pc = 0x2BEF0Cu;
    // 0x2bef0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bef10: 0xad280020  sw          $t0, 0x20($t1)
    ctx->pc = 0x2bef10u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 8));
    // 0x2bef14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BEF14u;
    {
        const bool branch_taken_0x2bef14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF14u;
        // 0x2bef18: 0xad22001c  sw          $v0, 0x1C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef14) {
            ctx->pc = 0x2BEF2Cu;
            goto label_2bef2c;
        }
    }
    ctx->pc = 0x2BEF1Cu;
label_2bef1c:
    // 0x2bef1c: 0x8d230024  lw          $v1, 0x24($t1)
    ctx->pc = 0x2bef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x2bef20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bef20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bef24: 0xad22001c  sw          $v0, 0x1C($t1)
    ctx->pc = 0x2bef24u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 2));
    // 0x2bef28: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x2bef28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_2bef2c:
    // 0x2bef2c: 0xad280024  sw          $t0, 0x24($t1)
    ctx->pc = 0x2bef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 8));
    // 0x2bef30: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x2bef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_2bef34:
    // 0x2bef34: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2bef34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2bef38: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BEF38u;
    {
        const bool branch_taken_0x2bef38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF38u;
        // 0x2bef3c: 0xad430004  sw          $v1, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef38) {
            ctx->pc = 0x2BEFA4u;
            goto label_2befa4;
        }
    }
    ctx->pc = 0x2BEF40u;
    // 0x2bef40: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2bef40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2bef44: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2bef44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2bef48: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x2bef48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2bef4c: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x2bef4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2bef50: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x2bef50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2bef54: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x2bef54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2bef58: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x2bef58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2bef5c: 0x6843001f  ldl         $v1, 0x1F($v0)
    ctx->pc = 0x2bef5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2bef60: 0x6c430018  ldr         $v1, 0x18($v0)
    ctx->pc = 0x2bef60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2bef64: 0x68440027  ldl         $a0, 0x27($v0)
    ctx->pc = 0x2bef64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2bef68: 0x6c440020  ldr         $a0, 0x20($v0)
    ctx->pc = 0x2bef68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2bef6c: 0xb0c50007  sdl         $a1, 0x7($a2)
    ctx->pc = 0x2bef6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bef70: 0xb4c50000  sdr         $a1, 0x0($a2)
    ctx->pc = 0x2bef70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bef74: 0xb0c7000f  sdl         $a3, 0xF($a2)
    ctx->pc = 0x2bef74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bef78: 0xb4c70008  sdr         $a3, 0x8($a2)
    ctx->pc = 0x2bef78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bef7c: 0xb0c30017  sdl         $v1, 0x17($a2)
    ctx->pc = 0x2bef7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bef80: 0xb4c30010  sdr         $v1, 0x10($a2)
    ctx->pc = 0x2bef80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bef84: 0xb0c4001f  sdl         $a0, 0x1F($a2)
    ctx->pc = 0x2bef84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bef88: 0xb4c40018  sdr         $a0, 0x18($a2)
    ctx->pc = 0x2bef88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bef8c: 0x6845002f  ldl         $a1, 0x2F($v0)
    ctx->pc = 0x2bef8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2bef90: 0x6c450028  ldr         $a1, 0x28($v0)
    ctx->pc = 0x2bef90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2bef94: 0xb0c50027  sdl         $a1, 0x27($a2)
    ctx->pc = 0x2bef94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bef98: 0xb4c50020  sdr         $a1, 0x20($a2)
    ctx->pc = 0x2bef98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bef9c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2bef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2befa0: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x2befa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_2befa4:
    // 0x2befa4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEFACu;
    // 0x2befac: 0x0  nop
    ctx->pc = 0x2befacu;
    // NOP
    ctx->pc = 0x2befb0u;
}
