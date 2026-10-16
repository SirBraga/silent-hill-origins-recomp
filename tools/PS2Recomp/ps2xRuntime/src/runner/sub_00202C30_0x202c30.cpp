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

// Function: sub_00202C30
// Address: 0x202c30 - 0x202cb8
void sub_00202C30_0x202c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202C30_0x202c30");
#endif

    switch (ctx->pc) {
        case 0x202c54u: goto label_202c54;
        default: break;
    }

    ctx->pc = 0x202c30u;

    // 0x202c30: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x202c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c34: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x202c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x202c38: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x202c38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x202c3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x202C3Cu;
    {
        const bool branch_taken_0x202c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202c3c) {
            ctx->pc = 0x202C54u;
            goto label_202c54;
        }
    }
    ctx->pc = 0x202C44u;
    // 0x202c44: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x202c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x202c48: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x202c48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x202c4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202C4Cu;
    {
        const bool branch_taken_0x202c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C4Cu;
        // 0x202c50: 0xa42023  subu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c4c) {
            ctx->pc = 0x202C5Cu;
            goto label_202c5c;
        }
    }
    ctx->pc = 0x202C54u;
label_202c54:
    // 0x202c54: 0x3e00008  jr          $ra
    ctx->pc = 0x202C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C54u;
        // 0x202c58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202C5Cu;
label_202c5c:
    // 0x202c5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x202c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202c60: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x202c60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x202c64: 0x248201ff  addiu       $v0, $a0, 0x1FF
    ctx->pc = 0x202c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 511));
    // 0x202c68: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x202c68u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x202c6c: 0x21a43  sra         $v1, $v0, 9
    ctx->pc = 0x202c6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 9));
    // 0x202c70: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x202C70u;
    {
        const bool branch_taken_0x202c70 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x202C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C70u;
        // 0x202c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c70) {
            ctx->pc = 0x202CA0u;
            goto label_202ca0;
        }
    }
    ctx->pc = 0x202C78u;
    // 0x202c78: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x202c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x202c7c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x202c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x202c80: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x202C80u;
    {
        const bool branch_taken_0x202c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202c80) {
            ctx->pc = 0x202C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202C80u;
            // 0x202c84: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C90u;
            goto label_202c90;
        }
    }
    ctx->pc = 0x202C88u;
    // 0x202c88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x202C88u;
    {
        const bool branch_taken_0x202c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C88u;
        // 0x202c8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c88) {
            ctx->pc = 0x202CA0u;
            goto label_202ca0;
        }
    }
    ctx->pc = 0x202C90u;
label_202c90:
    // 0x202c90: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x202c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x202c94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x202c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202c98: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x202c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x202c9c: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x202c9cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
label_202ca0:
    // 0x202ca0: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x202CA0u;
    {
        const bool branch_taken_0x202ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202ca0) {
            ctx->pc = 0x202C54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202c54;
        }
    }
    ctx->pc = 0x202CA8u;
    // 0x202ca8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x202ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x202cac: 0x3e00008  jr          $ra
    ctx->pc = 0x202CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CACu;
        // 0x202cb0: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202CB4u;
    // 0x202cb4: 0x0  nop
    ctx->pc = 0x202cb4u;
    // NOP
    ctx->pc = 0x202cb8u;
}
