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

// Function: sub_001A8C08
// Address: 0x1a8c08 - 0x1a8cc8
void sub_001A8C08_0x1a8c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8C08_0x1a8c08");
#endif

    switch (ctx->pc) {
        case 0x1a8c70u: goto label_1a8c70;
        default: break;
    }

    ctx->pc = 0x1a8c08u;

    // 0x1a8c08: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1a8c08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c0c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x1a8c0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1a8c10: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x1a8c10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a8c14: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1a8c14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1a8c18: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1a8c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a8c1c: 0x94e20014  lhu         $v0, 0x14($a3)
    ctx->pc = 0x1a8c1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1a8c20: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x1a8c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1a8c24: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1a8c24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a8c28: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1a8c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a8c2c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1a8c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1a8c30: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a8c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a8c34: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1a8c34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8c38: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8C38u;
    {
        const bool branch_taken_0x1a8c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a8c38) {
            ctx->pc = 0x1A8C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8C38u;
            // 0x1a8c3c: 0x8ce3001c  lw          $v1, 0x1C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8C48u;
            goto label_1a8c48;
        }
    }
    ctx->pc = 0x1A8C40u;
    // 0x1a8c40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8C40u;
    {
        const bool branch_taken_0x1a8c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C40u;
        // 0x1a8c44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c40) {
            ctx->pc = 0x1A8C50u;
            goto label_1a8c50;
        }
    }
    ctx->pc = 0x1A8C48u;
label_1a8c48:
    // 0x1a8c48: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a8c4c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1a8c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a8c50:
    // 0x1a8c50: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A8C50u;
    {
        const bool branch_taken_0x1a8c50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C50u;
        // 0x1a8c54: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c50) {
            ctx->pc = 0x1A8CC0u;
            goto label_1a8cc0;
        }
    }
    ctx->pc = 0x1A8C58u;
    // 0x1a8c58: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1a8c58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8c5c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A8C5Cu;
    {
        const bool branch_taken_0x1a8c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A8C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C5Cu;
        // 0x1a8c60: 0x24090030  addiu       $t1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c5c) {
            ctx->pc = 0x1A8CC0u;
            goto label_1a8cc0;
        }
    }
    ctx->pc = 0x1A8C64u;
    // 0x1a8c64: 0x25060004  addiu       $a2, $t0, 0x4
    ctx->pc = 0x1a8c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1a8c68: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x1a8c68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a8c6c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1a8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1a8c70:
    // 0x1a8c70: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x1a8c70u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8c74: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a8c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a8c78: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8C78u;
    {
        const bool branch_taken_0x1a8c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C78u;
        // 0x1a8c7c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c78) {
            ctx->pc = 0x1A8C90u;
            goto label_1a8c90;
        }
    }
    ctx->pc = 0x1A8C80u;
    // 0x1a8c80: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a8c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a8c84: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1a8c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a8c88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8C88u;
    {
        const bool branch_taken_0x1a8c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C88u;
        // 0x1a8c8c: 0x891018  mult        $v0, $a0, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c88) {
            ctx->pc = 0x1A8C98u;
            goto label_1a8c98;
        }
    }
    ctx->pc = 0x1A8C90u;
label_1a8c90:
    // 0x1a8c90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8C90u;
    {
        const bool branch_taken_0x1a8c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C90u;
        // 0x1a8c94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c90) {
            ctx->pc = 0x1A8C9Cu;
            goto label_1a8c9c;
        }
    }
    ctx->pc = 0x1A8C98u;
label_1a8c98:
    // 0x1a8c98: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a8c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8c9c:
    // 0x1a8c9c: 0x8d020204  lw          $v0, 0x204($t0)
    ctx->pc = 0x1a8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 516)));
    // 0x1a8ca0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a8ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8ca4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a8ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a8ca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a8cac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a8cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a8cb0: 0xad020204  sw          $v0, 0x204($t0)
    ctx->pc = 0x1a8cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 516), GPR_U32(ctx, 2));
    // 0x1a8cb4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1a8cb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8cb8: 0x5467ffed  bnel        $v1, $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1A8CB8u;
    {
        const bool branch_taken_0x1a8cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1a8cb8) {
            ctx->pc = 0x1A8CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8CB8u;
            // 0x1a8cbc: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8c70;
        }
    }
    ctx->pc = 0x1A8CC0u;
label_1a8cc0:
    // 0x1a8cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8CC8u;
}
