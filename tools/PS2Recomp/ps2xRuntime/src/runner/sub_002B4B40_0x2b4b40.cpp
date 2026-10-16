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

// Function: sub_002B4B40
// Address: 0x2b4b40 - 0x2b4b68
void sub_002B4B40_0x2b4b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4B40_0x2b4b40");
#endif

    switch (ctx->pc) {
        case 0x2b4b40u: goto label_2b4b40;
        case 0x2b4b44u: goto label_2b4b44;
        case 0x2b4b48u: goto label_2b4b48;
        case 0x2b4b4cu: goto label_2b4b4c;
        case 0x2b4b50u: goto label_2b4b50;
        case 0x2b4b54u: goto label_2b4b54;
        case 0x2b4b58u: goto label_2b4b58;
        case 0x2b4b5cu: goto label_2b4b5c;
        case 0x2b4b60u: goto label_2b4b60;
        case 0x2b4b64u: goto label_2b4b64;
        default: break;
    }

    ctx->pc = 0x2b4b40u;

label_2b4b40:
    // 0x2b4b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b4b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2b4b44:
    // 0x2b4b44: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2b4b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2b4b48:
    // 0x2b4b48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b4b4c:
    // 0x2b4b4c: 0x8c6510d4  lw          $a1, 0x10D4($v1)
    ctx->pc = 0x2b4b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_2b4b50:
    // 0x2b4b50: 0x9082ffff  lbu         $v0, -0x1($a0)
    ctx->pc = 0x2b4b50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
label_2b4b54:
    // 0x2b4b54: 0xa0f809  jalr        $a1
label_2b4b58:
    if (ctx->pc == 0x2B4B58u) {
        ctx->pc = 0x2B4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B54u;
        // 0x2b4b58: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4B5Cu;
        goto label_2b4b5c;
    }
    ctx->pc = 0x2B4B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2B4B5Cu);
        ctx->pc = 0x2B4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B54u;
        // 0x2b4b58: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4B54u, 0x2B4B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B4B5Cu;
label_2b4b5c:
    // 0x2b4b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b4b60:
    // 0x2b4b60: 0x3e00008  jr          $ra
label_2b4b64:
    if (ctx->pc == 0x2B4B64u) {
        ctx->pc = 0x2B4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B60u;
        // 0x2b4b64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4B68u;
        goto label_fallthrough_0x2b4b60;
    }
    ctx->pc = 0x2B4B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B60u;
        // 0x2b4b64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b4b60:
    ctx->pc = 0x2B4B68u;
}
