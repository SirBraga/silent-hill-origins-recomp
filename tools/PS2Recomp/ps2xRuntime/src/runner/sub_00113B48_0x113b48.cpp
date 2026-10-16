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

// Function: sub_00113B48
// Address: 0x113b48 - 0x113ba8
void sub_00113B48_0x113b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113B48_0x113b48");
#endif

    switch (ctx->pc) {
        case 0x113b48u: goto label_113b48;
        case 0x113b4cu: goto label_113b4c;
        case 0x113b50u: goto label_113b50;
        case 0x113b54u: goto label_113b54;
        case 0x113b58u: goto label_113b58;
        case 0x113b5cu: goto label_113b5c;
        case 0x113b60u: goto label_113b60;
        case 0x113b64u: goto label_113b64;
        case 0x113b68u: goto label_113b68;
        case 0x113b6cu: goto label_113b6c;
        case 0x113b70u: goto label_113b70;
        case 0x113b74u: goto label_113b74;
        case 0x113b78u: goto label_113b78;
        case 0x113b7cu: goto label_113b7c;
        case 0x113b80u: goto label_113b80;
        case 0x113b84u: goto label_113b84;
        case 0x113b88u: goto label_113b88;
        case 0x113b8cu: goto label_113b8c;
        case 0x113b90u: goto label_113b90;
        case 0x113b94u: goto label_113b94;
        case 0x113b98u: goto label_113b98;
        case 0x113b9cu: goto label_113b9c;
        case 0x113ba0u: goto label_113ba0;
        case 0x113ba4u: goto label_113ba4;
        default: break;
    }

    ctx->pc = 0x113b48u;

label_113b48:
    // 0x113b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_113b4c:
    // 0x113b4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_113b50:
    // 0x113b50: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x113b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_113b54:
    // 0x113b54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_113b58:
    // 0x113b58: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x113b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_113b5c:
    // 0x113b5c: 0xac4500d8  sw          $a1, 0xD8($v0)
    ctx->pc = 0x113b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 5));
label_113b60:
    // 0x113b60: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x113b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_113b64:
    // 0x113b64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x113b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_113b68:
    // 0x113b68: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
label_113b6c:
    if (ctx->pc == 0x113B6Cu) {
        ctx->pc = 0x113B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B68u;
        // 0x113b6c: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113B70u;
        goto label_113b70;
    }
    ctx->pc = 0x113B68u;
    {
        const bool branch_taken_0x113b68 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x113B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B68u;
        // 0x113b6c: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b68) {
            ctx->pc = 0x113B98u;
            goto label_113b98;
        }
    }
    ctx->pc = 0x113B70u;
label_113b70:
    // 0x113b70: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x113b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_113b74:
    // 0x113b74: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
label_113b78:
    if (ctx->pc == 0x113B78u) {
        ctx->pc = 0x113B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B74u;
        // 0x113b78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113B7Cu;
        goto label_113b7c;
    }
    ctx->pc = 0x113B74u;
    {
        const bool branch_taken_0x113b74 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x113B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B74u;
        // 0x113b78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b74) {
            ctx->pc = 0x113B9Cu;
            goto label_113b9c;
        }
    }
    ctx->pc = 0x113B7Cu;
label_113b7c:
    // 0x113b7c: 0x8c8500d8  lw          $a1, 0xD8($a0)
    ctx->pc = 0x113b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_113b80:
    // 0x113b80: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x113b80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_113b84:
    // 0x113b84: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x113b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_113b88:
    // 0x113b88: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x113b88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_113b8c:
    // 0x113b8c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x113b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_113b90:
    // 0x113b90: 0x60f809  jalr        $v1
label_113b94:
    if (ctx->pc == 0x113B94u) {
        ctx->pc = 0x113B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B90u;
        // 0x113b94: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113B98u;
        goto label_113b98;
    }
    ctx->pc = 0x113B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113B98u);
        ctx->pc = 0x113B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B90u;
        // 0x113b94: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113B90u, 0x113B98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113B98u;
label_113b98:
    // 0x113b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_113b9c:
    // 0x113b9c: 0x3e00008  jr          $ra
label_113ba0:
    if (ctx->pc == 0x113BA0u) {
        ctx->pc = 0x113BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B9Cu;
        // 0x113ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113BA4u;
        goto label_113ba4;
    }
    ctx->pc = 0x113B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B9Cu;
        // 0x113ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113BA4u;
label_113ba4:
    // 0x113ba4: 0x0  nop
    ctx->pc = 0x113ba4u;
    // NOP
    ctx->pc = 0x113ba8u;
}
