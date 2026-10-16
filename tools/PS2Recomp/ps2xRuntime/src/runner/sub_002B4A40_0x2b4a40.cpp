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

// Function: sub_002B4A40
// Address: 0x2b4a40 - 0x2b4ad0
void sub_002B4A40_0x2b4a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4A40_0x2b4a40");
#endif

    switch (ctx->pc) {
        case 0x2b4aa8u: goto label_2b4aa8;
        default: break;
    }

    ctx->pc = 0x2b4a40u;

    // 0x2b4a40: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2b4a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2b4a44: 0x10c00020  beqz        $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x2B4A44u;
    {
        const bool branch_taken_0x2b4a44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A44u;
        // 0x2b4a48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a44) {
            ctx->pc = 0x2B4AC8u;
            goto label_2b4ac8;
        }
    }
    ctx->pc = 0x2B4A4Cu;
    // 0x2b4a4c: 0x30c30003  andi        $v1, $a2, 0x3
    ctx->pc = 0x2b4a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x2b4a50: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2B4A50u;
    {
        const bool branch_taken_0x2b4a50 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x2B4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A50u;
        // 0x2b4a54: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a50) {
            ctx->pc = 0x2B4A90u;
            goto label_2b4a90;
        }
    }
    ctx->pc = 0x2B4A58u;
    // 0x2b4a58: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B4A58u;
    {
        const bool branch_taken_0x2b4a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A58u;
        // 0x2b4a5c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a58) {
            ctx->pc = 0x2B4AA8u;
            goto label_2b4aa8;
        }
    }
    ctx->pc = 0x2B4A60u;
    // 0x2b4a60: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2b4a60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b4a64: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2B4A64u;
    {
        const bool branch_taken_0x2b4a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4a64) {
            ctx->pc = 0x2B4A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4A64u;
            // 0x2b4a68: 0xa0e50000  sb          $a1, 0x0($a3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4A94u;
            goto label_2b4a94;
        }
    }
    ctx->pc = 0x2B4A6Cu;
    // 0x2b4a6c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2b4a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b4a70: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4A70u;
    {
        const bool branch_taken_0x2b4a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4a70) {
            ctx->pc = 0x2B4A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4A70u;
            // 0x2b4a74: 0xa0e50000  sb          $a1, 0x0($a3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4A88u;
            goto label_2b4a88;
        }
    }
    ctx->pc = 0x2B4A78u;
    // 0x2b4a78: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x2b4a78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b4a7c: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x2b4a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b4a80: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b4a80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4a84: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x2b4a84u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
label_2b4a88:
    // 0x2b4a88: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2b4a88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b4a8c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b4a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2b4a90:
    // 0x2b4a90: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x2b4a90u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
label_2b4a94:
    // 0x2b4a94: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2b4a94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b4a98: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x2b4a98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2b4a9c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B4A9Cu;
    {
        const bool branch_taken_0x2b4a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A9Cu;
        // 0x2b4aa0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a9c) {
            ctx->pc = 0x2B4AC8u;
            goto label_2b4ac8;
        }
    }
    ctx->pc = 0x2B4AA4u;
    // 0x2b4aa4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2b4aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b4aa8:
    // 0x2b4aa8: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x2b4aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b4aac: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2b4aacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b4ab0: 0xa0450001  sb          $a1, 0x1($v0)
    ctx->pc = 0x2b4ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b4ab4: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x2b4ab4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2b4ab8: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x2b4ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b4abc: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x2b4abcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b4ac0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B4AC0u;
    {
        const bool branch_taken_0x2b4ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AC0u;
        // 0x2b4ac4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4ac0) {
            ctx->pc = 0x2B4AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4aa8;
        }
    }
    ctx->pc = 0x2B4AC8u;
label_2b4ac8:
    // 0x2b4ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4AD0u;
}
