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

// Function: sub_001BE4B0
// Address: 0x1be4b0 - 0x1be4e0
void sub_001BE4B0_0x1be4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE4B0_0x1be4b0");
#endif

    switch (ctx->pc) {
        case 0x1be4b0u: goto label_1be4b0;
        case 0x1be4b4u: goto label_1be4b4;
        case 0x1be4b8u: goto label_1be4b8;
        case 0x1be4bcu: goto label_1be4bc;
        case 0x1be4c0u: goto label_1be4c0;
        case 0x1be4c4u: goto label_1be4c4;
        case 0x1be4c8u: goto label_1be4c8;
        case 0x1be4ccu: goto label_1be4cc;
        case 0x1be4d0u: goto label_1be4d0;
        case 0x1be4d4u: goto label_1be4d4;
        case 0x1be4d8u: goto label_1be4d8;
        case 0x1be4dcu: goto label_1be4dc;
        default: break;
    }

    ctx->pc = 0x1be4b0u;

label_1be4b0:
    // 0x1be4b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1be4b4:
    // 0x1be4b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1be4b8:
    // 0x1be4b8: 0x8c860280  lw          $a2, 0x280($a0)
    ctx->pc = 0x1be4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
label_1be4bc:
    // 0x1be4bc: 0x8c8502cc  lw          $a1, 0x2CC($a0)
    ctx->pc = 0x1be4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 716)));
label_1be4c0:
    // 0x1be4c0: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1be4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1be4c4:
    // 0x1be4c4: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1be4c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1be4c8:
    // 0x1be4c8: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1be4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1be4cc:
    // 0x1be4cc: 0x60f809  jalr        $v1
label_1be4d0:
    if (ctx->pc == 0x1BE4D0u) {
        ctx->pc = 0x1BE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4CCu;
        // 0x1be4d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE4D4u;
        goto label_1be4d4;
    }
    ctx->pc = 0x1BE4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BE4D4u);
        ctx->pc = 0x1BE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4CCu;
        // 0x1be4d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE4CCu, 0x1BE4D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BE4D4u;
label_1be4d4:
    // 0x1be4d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be4d8:
    // 0x1be4d8: 0x3e00008  jr          $ra
label_1be4dc:
    if (ctx->pc == 0x1BE4DCu) {
        ctx->pc = 0x1BE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4D8u;
        // 0x1be4dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE4E0u;
        goto label_fallthrough_0x1be4d8;
    }
    ctx->pc = 0x1BE4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4D8u;
        // 0x1be4dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1be4d8:
    ctx->pc = 0x1BE4E0u;
}
