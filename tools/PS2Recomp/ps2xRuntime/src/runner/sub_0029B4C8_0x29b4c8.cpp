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

// Function: sub_0029B4C8
// Address: 0x29b4c8 - 0x29b4f0
void sub_0029B4C8_0x29b4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B4C8_0x29b4c8");
#endif

    switch (ctx->pc) {
        case 0x29b4c8u: goto label_29b4c8;
        case 0x29b4ccu: goto label_29b4cc;
        case 0x29b4d0u: goto label_29b4d0;
        case 0x29b4d4u: goto label_29b4d4;
        case 0x29b4d8u: goto label_29b4d8;
        case 0x29b4dcu: goto label_29b4dc;
        case 0x29b4e0u: goto label_29b4e0;
        case 0x29b4e4u: goto label_29b4e4;
        case 0x29b4e8u: goto label_29b4e8;
        case 0x29b4ecu: goto label_29b4ec;
        default: break;
    }

    ctx->pc = 0x29b4c8u;

label_29b4c8:
    // 0x29b4c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29b4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29b4cc:
    // 0x29b4cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29b4d0:
    // 0x29b4d0: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x29b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_29b4d4:
    // 0x29b4d4: 0x84660010  lh          $a2, 0x10($v1)
    ctx->pc = 0x29b4d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_29b4d8:
    // 0x29b4d8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x29b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_29b4dc:
    // 0x29b4dc: 0x40f809  jalr        $v0
label_29b4e0:
    if (ctx->pc == 0x29B4E0u) {
        ctx->pc = 0x29B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B4DCu;
        // 0x29b4e0: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B4E4u;
        goto label_29b4e4;
    }
    ctx->pc = 0x29B4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29B4E4u);
        ctx->pc = 0x29B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B4DCu;
        // 0x29b4e0: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B4DCu, 0x29B4E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29B4E4u;
label_29b4e4:
    // 0x29b4e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29b4e8:
    // 0x29b4e8: 0x3e00008  jr          $ra
label_29b4ec:
    if (ctx->pc == 0x29B4ECu) {
        ctx->pc = 0x29B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B4E8u;
        // 0x29b4ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B4F0u;
        goto label_fallthrough_0x29b4e8;
    }
    ctx->pc = 0x29B4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B4E8u;
        // 0x29b4ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29b4e8:
    ctx->pc = 0x29B4F0u;
}
