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

// Function: sub_002C1CB8
// Address: 0x2c1cb8 - 0x2c1e10
void sub_002C1CB8_0x2c1cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1CB8_0x2c1cb8");
#endif

    ctx->pc = 0x2c1cb8u;

    // 0x2c1cb8: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2c1cb8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1cbc: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x2c1cbcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1cc0: 0x8d86002c  lw          $a2, 0x2C($t4)
    ctx->pc = 0x2c1cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 44)));
    // 0x2c1cc4: 0x18b102b  sltu        $v0, $t4, $t3
    ctx->pc = 0x2c1cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x2c1cc8: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C1CC8u;
    {
        const bool branch_taken_0x2c1cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1CC8u;
        // 0x2c1ccc: 0x8d6a002c  lw          $t2, 0x2C($t3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1cc8) {
            ctx->pc = 0x2C1D70u;
            goto label_2c1d70;
        }
    }
    ctx->pc = 0x2C1CD0u;
    // 0x2c1cd0: 0x8d84003c  lw          $a0, 0x3C($t4)
    ctx->pc = 0x2c1cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 60)));
    // 0x2c1cd4: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x2c1cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x2c1cd8: 0x8d62003c  lw          $v0, 0x3C($t3)
    ctx->pc = 0x2c1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 60)));
    // 0x2c1cdc: 0x25690008  addiu       $t1, $t3, 0x8
    ctx->pc = 0x2c1cdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x2c1ce0: 0x8d650040  lw          $a1, 0x40($t3)
    ctx->pc = 0x2c1ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 64)));
    // 0x2c1ce4: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x2c1ce4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2c1ce8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c1ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c1cec: 0x8d670038  lw          $a3, 0x38($t3)
    ctx->pc = 0x2c1cecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 56)));
    // 0x2c1cf0: 0xad62003c  sw          $v0, 0x3C($t3)
    ctx->pc = 0x2c1cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 60), GPR_U32(ctx, 2));
    // 0x2c1cf4: 0x650c0  sll         $t2, $a2, 3
    ctx->pc = 0x2c1cf4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2c1cf8: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x2c1cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2c1cfc: 0x18a5021  addu        $t2, $t4, $t2
    ctx->pc = 0x2c1cfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x2c1d00: 0x8d840040  lw          $a0, 0x40($t4)
    ctx->pc = 0x2c1d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x2c1d04: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x2c1d04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1d08: 0x8d830028  lw          $v1, 0x28($t4)
    ctx->pc = 0x2c1d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 40)));
    // 0x2c1d0c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2c1d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2c1d10: 0x8d680044  lw          $t0, 0x44($t3)
    ctx->pc = 0x2c1d10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 68)));
    // 0x2c1d14: 0xad650040  sw          $a1, 0x40($t3)
    ctx->pc = 0x2c1d14u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 64), GPR_U32(ctx, 5));
    // 0x2c1d18: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2c1d18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2c1d1c: 0x8d840038  lw          $a0, 0x38($t4)
    ctx->pc = 0x2c1d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 56)));
    // 0x2c1d20: 0x8d850028  lw          $a1, 0x28($t4)
    ctx->pc = 0x2c1d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 40)));
    // 0x2c1d24: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x2c1d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2c1d28: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2c1d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2c1d2c: 0xad670038  sw          $a3, 0x38($t3)
    ctx->pc = 0x2c1d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 56), GPR_U32(ctx, 7));
    // 0x2c1d30: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2c1d30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2c1d34: 0x8d840044  lw          $a0, 0x44($t4)
    ctx->pc = 0x2c1d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x2c1d38: 0x8d660030  lw          $a2, 0x30($t3)
    ctx->pc = 0x2c1d38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x2c1d3c: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x2c1d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2c1d40: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x2c1d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2c1d44: 0xad680044  sw          $t0, 0x44($t3)
    ctx->pc = 0x2c1d44u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 68), GPR_U32(ctx, 8));
    // 0x2c1d48: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x2c1d48u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x2c1d4c: 0x8d840030  lw          $a0, 0x30($t4)
    ctx->pc = 0x2c1d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x2c1d50: 0x8d650034  lw          $a1, 0x34($t3)
    ctx->pc = 0x2c1d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 52)));
    // 0x2c1d54: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2c1d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2c1d58: 0xad8b0004  sw          $t3, 0x4($t4)
    ctx->pc = 0x2c1d58u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 11));
    // 0x2c1d5c: 0xad660030  sw          $a2, 0x30($t3)
    ctx->pc = 0x2c1d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 48), GPR_U32(ctx, 6));
    // 0x2c1d60: 0x8d830034  lw          $v1, 0x34($t4)
    ctx->pc = 0x2c1d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 52)));
    // 0x2c1d64: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2c1d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2c1d68: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D68u;
        // 0x2c1d6c: 0xad650034  sw          $a1, 0x34($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 52), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1D70u;
label_2c1d70:
    // 0x2c1d70: 0x8d64003c  lw          $a0, 0x3C($t3)
    ctx->pc = 0x2c1d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 60)));
    // 0x2c1d74: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2c1d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2c1d78: 0x8d82003c  lw          $v0, 0x3C($t4)
    ctx->pc = 0x2c1d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 60)));
    // 0x2c1d7c: 0x25890008  addiu       $t1, $t4, 0x8
    ctx->pc = 0x2c1d7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x2c1d80: 0x8d850040  lw          $a1, 0x40($t4)
    ctx->pc = 0x2c1d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x2c1d84: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x2c1d84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2c1d88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c1d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c1d8c: 0x8d870038  lw          $a3, 0x38($t4)
    ctx->pc = 0x2c1d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 56)));
    // 0x2c1d90: 0xad82003c  sw          $v0, 0x3C($t4)
    ctx->pc = 0x2c1d90u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 60), GPR_U32(ctx, 2));
    // 0x2c1d94: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x2c1d94u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x2c1d98: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x2c1d98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2c1d9c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x2c1d9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x2c1da0: 0x8d640040  lw          $a0, 0x40($t3)
    ctx->pc = 0x2c1da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 64)));
    // 0x2c1da4: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x2c1da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1da8: 0x8d630028  lw          $v1, 0x28($t3)
    ctx->pc = 0x2c1da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x2c1dac: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2c1dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2c1db0: 0x8d880044  lw          $t0, 0x44($t4)
    ctx->pc = 0x2c1db0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x2c1db4: 0xad850040  sw          $a1, 0x40($t4)
    ctx->pc = 0x2c1db4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 64), GPR_U32(ctx, 5));
    // 0x2c1db8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2c1db8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2c1dbc: 0x8d640038  lw          $a0, 0x38($t3)
    ctx->pc = 0x2c1dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 56)));
    // 0x2c1dc0: 0x8d650028  lw          $a1, 0x28($t3)
    ctx->pc = 0x2c1dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x2c1dc4: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x2c1dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2c1dc8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2c1dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2c1dcc: 0xad870038  sw          $a3, 0x38($t4)
    ctx->pc = 0x2c1dccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 56), GPR_U32(ctx, 7));
    // 0x2c1dd0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2c1dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2c1dd4: 0x8d640044  lw          $a0, 0x44($t3)
    ctx->pc = 0x2c1dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 68)));
    // 0x2c1dd8: 0x8d860030  lw          $a2, 0x30($t4)
    ctx->pc = 0x2c1dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x2c1ddc: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x2c1ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2c1de0: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x2c1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2c1de4: 0xad880044  sw          $t0, 0x44($t4)
    ctx->pc = 0x2c1de4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 68), GPR_U32(ctx, 8));
    // 0x2c1de8: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x2c1de8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x2c1dec: 0x8d640030  lw          $a0, 0x30($t3)
    ctx->pc = 0x2c1decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x2c1df0: 0x8d850034  lw          $a1, 0x34($t4)
    ctx->pc = 0x2c1df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 52)));
    // 0x2c1df4: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2c1df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2c1df8: 0xad6c0004  sw          $t4, 0x4($t3)
    ctx->pc = 0x2c1df8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 12));
    // 0x2c1dfc: 0xad860030  sw          $a2, 0x30($t4)
    ctx->pc = 0x2c1dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 48), GPR_U32(ctx, 6));
    // 0x2c1e00: 0x8d630034  lw          $v1, 0x34($t3)
    ctx->pc = 0x2c1e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 52)));
    // 0x2c1e04: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2c1e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2c1e08: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E08u;
        // 0x2c1e0c: 0xad850034  sw          $a1, 0x34($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 52), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1E10u;
}
