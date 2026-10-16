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

// Function: sub_00324B28
// Address: 0x324b28 - 0x324bb8
void sub_00324B28_0x324b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324B28_0x324b28");
#endif

    ctx->pc = 0x324b28u;

    // 0x324b28: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x324b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x324b2c: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x324b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x324b30: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x324b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x324b34: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x324B34u;
    {
        const bool branch_taken_0x324b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324b34) {
            ctx->pc = 0x324B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324B34u;
            // 0x324b38: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324B44u;
            goto label_324b44;
        }
    }
    ctx->pc = 0x324B3Cu;
    // 0x324b3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x324B3Cu;
    {
        const bool branch_taken_0x324b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B3Cu;
        // 0x324b40: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b3c) {
            ctx->pc = 0x324B48u;
            goto label_324b48;
        }
    }
    ctx->pc = 0x324B44u;
label_324b44:
    // 0x324b44: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x324b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_324b48:
    // 0x324b48: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x324b48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x324b4c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x324b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x324b50: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x324b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x324b54: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x324b54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x324b58: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x324b58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x324b5c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x324b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x324b60: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x324b60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x324b64: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x324b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x324b68: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x324b68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x324b6c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x324b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x324b70: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x324b70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x324b74: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x324b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x324b78: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x324b78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x324b7c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x324b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x324b80: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x324b80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x324b84: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x324b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x324b88: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x324b88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x324b8c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x324b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x324b90: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x324B90u;
    {
        const bool branch_taken_0x324b90 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x324b90) {
            ctx->pc = 0x324BACu;
            goto label_324bac;
        }
    }
    ctx->pc = 0x324B98u;
    // 0x324b98: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x324b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x324b9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x324B9Cu;
    {
        const bool branch_taken_0x324b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324b9c) {
            ctx->pc = 0x324BACu;
            goto label_324bac;
        }
    }
    ctx->pc = 0x324BA4u;
    // 0x324ba4: 0x80c8830  j           func_3220C0
    ctx->pc = 0x324BA4u;
    ctx->pc = 0x3220C0u;
    entry_3220c0_0x322160(rdram, ctx, runtime); return;
    ctx->pc = 0x324BACu;
label_324bac:
    // 0x324bac: 0x3e00008  jr          $ra
    ctx->pc = 0x324BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324BB4u;
    // 0x324bb4: 0x0  nop
    ctx->pc = 0x324bb4u;
    // NOP
    ctx->pc = 0x324bb8u;
}
