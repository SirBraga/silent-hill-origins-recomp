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

// Function: sub_002F1C40
// Address: 0x2f1c40 - 0x2f1ca0
void sub_002F1C40_0x2f1c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1C40_0x2f1c40");
#endif

    switch (ctx->pc) {
        case 0x2f1c68u: goto label_2f1c68;
        default: break;
    }

    ctx->pc = 0x2f1c40u;

    // 0x2f1c40: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2f1c40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2f1c44: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2f1c44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f1c48: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2f1c48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f1c4c: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x2f1c4cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x2f1c50: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F1C50u;
    {
        const bool branch_taken_0x2f1c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C50u;
        // 0x2f1c54: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c50) {
            ctx->pc = 0x2F1C7Cu;
            goto label_2f1c7c;
        }
    }
    ctx->pc = 0x2F1C58u;
    // 0x2f1c58: 0x1065000c  beq         $v1, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2F1C58u;
    {
        const bool branch_taken_0x2f1c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2f1c58) {
            ctx->pc = 0x2F1C8Cu;
            goto label_2f1c8c;
        }
    }
    ctx->pc = 0x2F1C60u;
    // 0x2f1c60: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f1c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f1c64: 0x0  nop
    ctx->pc = 0x2f1c64u;
    // NOP
label_2f1c68:
    // 0x2f1c68: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2f1c68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f1c6c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1C6Cu;
    {
        const bool branch_taken_0x2f1c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C6Cu;
        // 0x2f1c70: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c6c) {
            ctx->pc = 0x2F1C7Cu;
            goto label_2f1c7c;
        }
    }
    ctx->pc = 0x2F1C74u;
    // 0x2f1c74: 0x5465fffc  bnel        $v1, $a1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2F1C74u;
    {
        const bool branch_taken_0x2f1c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2f1c74) {
            ctx->pc = 0x2F1C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1C74u;
            // 0x2f1c78: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1c68;
        }
    }
    ctx->pc = 0x2F1C7Cu;
label_2f1c7c:
    // 0x2f1c7c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2f1c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2f1c80: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2f1c80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f1c84: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1C84u;
    {
        const bool branch_taken_0x2f1c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2f1c84) {
            ctx->pc = 0x2F1C94u;
            goto label_2f1c94;
        }
    }
    ctx->pc = 0x2F1C8Cu;
label_2f1c8c:
    // 0x2f1c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C8Cu;
        // 0x2f1c90: 0xc41023  subu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1C94u;
label_2f1c94:
    // 0x2f1c94: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C94u;
        // 0x2f1c98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1C9Cu;
    // 0x2f1c9c: 0x0  nop
    ctx->pc = 0x2f1c9cu;
    // NOP
    ctx->pc = 0x2f1ca0u;
}
