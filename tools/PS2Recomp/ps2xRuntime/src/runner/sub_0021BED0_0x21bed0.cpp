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

// Function: sub_0021BED0
// Address: 0x21bed0 - 0x21bfa8
void sub_0021BED0_0x21bed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BED0_0x21bed0");
#endif

    switch (ctx->pc) {
        case 0x21bf30u: goto label_21bf30;
        default: break;
    }

    ctx->pc = 0x21bed0u;

    // 0x21bed0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21bed4: 0x24c3000f  addiu       $v1, $a2, 0xF
    ctx->pc = 0x21bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x21bed8: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x21bed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21bedc: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x21bedcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6));
    // 0x21bee0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x21bee0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x21bee4: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x21bee4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21bee8: 0x1d000003  bgtz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BEE8u;
    {
        const bool branch_taken_0x21bee8 = (GPR_S64(ctx, 8) > 0);
        ctx->pc = 0x21BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEE8u;
        // 0x21beec: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bee8) {
            ctx->pc = 0x21BEF8u;
            goto label_21bef8;
        }
    }
    ctx->pc = 0x21BEF0u;
    // 0x21bef0: 0x3e00008  jr          $ra
    ctx->pc = 0x21BEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEF0u;
        // 0x21bef4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BEF8u;
label_21bef8:
    // 0x21bef8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21bef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21befc: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x21befcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x21bf00: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x21bf00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x21bf04: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x21bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21bf08: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BF08u;
    {
        const bool branch_taken_0x21bf08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF08u;
        // 0x21bf0c: 0xc3102b  sltu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf08) {
            ctx->pc = 0x21BF18u;
            goto label_21bf18;
        }
    }
    ctx->pc = 0x21BF10u;
    // 0x21bf10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21BF10u;
    {
        const bool branch_taken_0x21bf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF10u;
        // 0x21bf14: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf10) {
            ctx->pc = 0x21BF24u;
            goto label_21bf24;
        }
    }
    ctx->pc = 0x21BF18u;
label_21bf18:
    // 0x21bf18: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x21bf18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x21bf1c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x21BF1Cu;
    {
        const bool branch_taken_0x21bf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF1Cu;
        // 0x21bf20: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf1c) {
            ctx->pc = 0x21BF70u;
            goto label_21bf70;
        }
    }
    ctx->pc = 0x21BF24u;
label_21bf24:
    // 0x21bf24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21BF24u;
    {
        const bool branch_taken_0x21bf24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF24u;
        // 0x21bf28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf24) {
            ctx->pc = 0x21BF48u;
            goto label_21bf48;
        }
    }
    ctx->pc = 0x21BF2Cu;
    // 0x21bf2c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x21bf2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21bf30:
    // 0x21bf30: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x21bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21bf34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21BF34u;
    {
        const bool branch_taken_0x21bf34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF34u;
        // 0x21bf38: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf34) {
            ctx->pc = 0x21BF48u;
            goto label_21bf48;
        }
    }
    ctx->pc = 0x21BF3Cu;
    // 0x21bf3c: 0x0  nop
    ctx->pc = 0x21bf3cu;
    // NOP
    // 0x21bf40: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21BF40u;
    {
        const bool branch_taken_0x21bf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bf40) {
            ctx->pc = 0x21BF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BF40u;
            // 0x21bf44: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bf30;
        }
    }
    ctx->pc = 0x21BF48u;
label_21bf48:
    // 0x21bf48: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x21bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21bf4c: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x21bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x21bf50: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21BF50u;
    {
        const bool branch_taken_0x21bf50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x21bf50) {
            ctx->pc = 0x21BF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BF50u;
            // 0x21bf54: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BF6Cu;
            goto label_21bf6c;
        }
    }
    ctx->pc = 0x21BF58u;
    // 0x21bf58: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x21bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x21bf5c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x21bf5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf60: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x21bf60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x21bf64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21BF64u;
    {
        const bool branch_taken_0x21bf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF64u;
        // 0x21bf68: 0x1044021  addu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf64) {
            ctx->pc = 0x21BF70u;
            goto label_21bf70;
        }
    }
    ctx->pc = 0x21BF6Cu;
label_21bf6c:
    // 0x21bf6c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x21bf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_21bf70:
    // 0x21bf70: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x21bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21bf74: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x21bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21bf78: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x21bf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x21bf7c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21BF7Cu;
    {
        const bool branch_taken_0x21bf7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21bf7c) {
            ctx->pc = 0x21BF9Cu;
            goto label_21bf9c;
        }
    }
    ctx->pc = 0x21BF84u;
    // 0x21bf84: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x21bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21bf88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21bf8c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x21bf8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x21bf90: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x21bf90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x21bf94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21bf98: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x21bf98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_21bf9c:
    // 0x21bf9c: 0x3e00008  jr          $ra
    ctx->pc = 0x21BF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF9Cu;
        // 0x21bfa0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BFA4u;
    // 0x21bfa4: 0x0  nop
    ctx->pc = 0x21bfa4u;
    // NOP
    ctx->pc = 0x21bfa8u;
}
