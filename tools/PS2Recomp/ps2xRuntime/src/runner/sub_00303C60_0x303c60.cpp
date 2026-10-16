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

// Function: sub_00303C60
// Address: 0x303c60 - 0x303d30
void sub_00303C60_0x303c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303C60_0x303c60");
#endif

    switch (ctx->pc) {
        case 0x303c78u: goto label_303c78;
        case 0x303cb8u: goto label_303cb8;
        case 0x303ce0u: goto label_303ce0;
        default: break;
    }

    ctx->pc = 0x303c60u;

    // 0x303c60: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x303c60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x303c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303c68: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x303c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x303c6c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x303C6Cu;
    {
        const bool branch_taken_0x303c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C6Cu;
        // 0x303c70: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c6c) {
            ctx->pc = 0x303CB0u;
            goto label_303cb0;
        }
    }
    ctx->pc = 0x303C74u;
    // 0x303c74: 0x0  nop
    ctx->pc = 0x303c74u;
    // NOP
label_303c78:
    // 0x303c78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x303c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x303c7c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x303C7Cu;
    {
        const bool branch_taken_0x303c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303c7c) {
            ctx->pc = 0x303C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303C7Cu;
            // 0x303c80: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303C98u;
            goto label_303c98;
        }
    }
    ctx->pc = 0x303C84u;
    // 0x303c84: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x303c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x303c88: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x303c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x303c8c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x303c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x303c90: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x303c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x303c94: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x303c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_303c98:
    // 0x303c98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x303c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x303c9c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x303c9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x303ca0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x303CA0u;
    {
        const bool branch_taken_0x303ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303CA0u;
        // 0x303ca4: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ca0) {
            ctx->pc = 0x303C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303c78;
        }
    }
    ctx->pc = 0x303CA8u;
    // 0x303ca8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x303ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x303cac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x303cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303cb0:
    // 0x303cb0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x303CB0u;
    {
        const bool branch_taken_0x303cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303CB0u;
        // 0x303cb4: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303cb0) {
            ctx->pc = 0x303D24u;
            goto label_303d24;
        }
    }
    ctx->pc = 0x303CB8u;
label_303cb8:
    // 0x303cb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x303cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x303cbc: 0x24ab0001  addiu       $t3, $a1, 0x1
    ctx->pc = 0x303cbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x303cc0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x303CC0u;
    {
        const bool branch_taken_0x303cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303CC0u;
        // 0x303cc4: 0x248a0028  addiu       $t2, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303cc0) {
            ctx->pc = 0x303D10u;
            goto label_303d10;
        }
    }
    ctx->pc = 0x303CC8u;
    // 0x303cc8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x303cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x303ccc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x303CCCu;
    {
        const bool branch_taken_0x303ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303CCCu;
        // 0x303cd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ccc) {
            ctx->pc = 0x303D10u;
            goto label_303d10;
        }
    }
    ctx->pc = 0x303CD4u;
    // 0x303cd4: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x303cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x303cd8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x303cd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x303cdc: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x303cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_303ce0:
    // 0x303ce0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x303ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x303ce4: 0x10690007  beq         $v1, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x303CE4u;
    {
        const bool branch_taken_0x303ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x303CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303CE4u;
        // 0x303ce8: 0x681818  mult        $v1, $v1, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ce4) {
            ctx->pc = 0x303D04u;
            goto label_303d04;
        }
    }
    ctx->pc = 0x303CECu;
    // 0x303cec: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x303cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x303cf0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x303cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x303cf4: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x303cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x303cf8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x303cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x303cfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x303cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x303d00: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x303d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_303d04:
    // 0x303d04: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x303d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x303d08: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x303D08u;
    {
        const bool branch_taken_0x303d08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x303D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303D08u;
        // 0x303d0c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d08) {
            ctx->pc = 0x303CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303ce0;
        }
    }
    ctx->pc = 0x303D10u;
label_303d10:
    // 0x303d10: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x303d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x303d14: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x303d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303d18: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x303d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x303d1c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x303D1Cu;
    {
        const bool branch_taken_0x303d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303D1Cu;
        // 0x303d20: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d1c) {
            ctx->pc = 0x303CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303cb8;
        }
    }
    ctx->pc = 0x303D24u;
label_303d24:
    // 0x303d24: 0x3e00008  jr          $ra
    ctx->pc = 0x303D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303D2Cu;
    // 0x303d2c: 0x0  nop
    ctx->pc = 0x303d2cu;
    // NOP
    ctx->pc = 0x303d30u;
}
