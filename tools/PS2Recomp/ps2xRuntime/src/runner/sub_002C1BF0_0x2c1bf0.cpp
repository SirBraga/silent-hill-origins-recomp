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

// Function: sub_002C1BF0
// Address: 0x2c1bf0 - 0x2c1cb8
void sub_002C1BF0_0x2c1bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1BF0_0x2c1bf0");
#endif

    switch (ctx->pc) {
        case 0x2c1c40u: goto label_2c1c40;
        default: break;
    }

    ctx->pc = 0x2c1bf0u;

    // 0x2c1bf0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2c1bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1bf4: 0x97838fb8  lhu         $v1, -0x7048($gp)
    ctx->pc = 0x2c1bf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938552)));
    // 0x2c1bf8: 0x8ce80028  lw          $t0, 0x28($a3)
    ctx->pc = 0x2c1bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x2c1bfc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c1bfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1c00: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x2c1c00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1c04: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2c1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2c1c08: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2c1c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2c1c0c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x2c1c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x2c1c10: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x2c1c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x2c1c14: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2c1c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2c1c18: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x2c1c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x2c1c1c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2c1c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2c1c20: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x2c1c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x2c1c24: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2c1c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2c1c28: 0xace00038  sw          $zero, 0x38($a3)
    ctx->pc = 0x2c1c28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
    // 0x2c1c2c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2c1c2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1c30: 0x1100001e  beqz        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C1C30u;
    {
        const bool branch_taken_0x2c1c30 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C30u;
        // 0x2c1c34: 0xace0002c  sw          $zero, 0x2C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c30) {
            ctx->pc = 0x2C1CACu;
            goto label_2c1cac;
        }
    }
    ctx->pc = 0x2C1C38u;
    // 0x2c1c38: 0x24e6000c  addiu       $a2, $a3, 0xC
    ctx->pc = 0x2c1c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x2c1c3c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2c1c3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1c40:
    // 0x2c1c40: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2c1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2c1c44: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2c1c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c1c48: 0x94440028  lhu         $a0, 0x28($v0)
    ctx->pc = 0x2c1c48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2c1c4c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2c1c4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2c1c50: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C1C50u;
    {
        const bool branch_taken_0x2c1c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C50u;
        // 0x2c1c54: 0x2d420003  sltiu       $v0, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c50) {
            ctx->pc = 0x2C1C70u;
            goto label_2c1c70;
        }
    }
    ctx->pc = 0x2C1C58u;
    // 0x2c1c58: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1C58u;
    {
        const bool branch_taken_0x2c1c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1c58) {
            ctx->pc = 0x2C1C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1C58u;
            // 0x2c1c5c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1C70u;
            goto label_2c1c70;
        }
    }
    ctx->pc = 0x2C1C60u;
    // 0x2c1c60: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2c1c60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2c1c64: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x2c1c64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x2c1c68: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2c1c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2c1c6c: 0xacea002c  sw          $t2, 0x2C($a3)
    ctx->pc = 0x2c1c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 10));
label_2c1c70:
    // 0x2c1c70: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x2c1c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2c1c74: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c1c78: 0x94830028  lhu         $v1, 0x28($a0)
    ctx->pc = 0x2c1c78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2c1c7c: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x2c1c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x2c1c80: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2c1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1c84: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2c1c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1c88: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2c1c88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2c1c8c: 0xa48b0024  sh          $t3, 0x24($a0)
    ctx->pc = 0x2c1c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 11));
    // 0x2c1c90: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x2c1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x2c1c94: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2c1c94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2c1c98: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x2c1c98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2c1c9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c1c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c1ca0: 0xa48a0022  sh          $t2, 0x22($a0)
    ctx->pc = 0x2c1ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 10));
    // 0x2c1ca4: 0x1500ffe6  bnez        $t0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2C1CA4u;
    {
        const bool branch_taken_0x2c1ca4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1CA4u;
        // 0x2c1ca8: 0xace20038  sw          $v0, 0x38($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ca4) {
            ctx->pc = 0x2C1C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1c40;
        }
    }
    ctx->pc = 0x2C1CACu;
label_2c1cac:
    // 0x2c1cac: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1CACu;
        // 0x2c1cb0: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1CB4u;
    // 0x2c1cb4: 0x0  nop
    ctx->pc = 0x2c1cb4u;
    // NOP
    ctx->pc = 0x2c1cb8u;
}
