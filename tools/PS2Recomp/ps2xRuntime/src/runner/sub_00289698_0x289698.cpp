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

// Function: sub_00289698
// Address: 0x289698 - 0x2896c8
void sub_00289698_0x289698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289698_0x289698");
#endif

    switch (ctx->pc) {
        case 0x289698u: goto label_289698;
        case 0x28969cu: goto label_28969c;
        case 0x2896a0u: goto label_2896a0;
        case 0x2896a4u: goto label_2896a4;
        case 0x2896a8u: goto label_2896a8;
        case 0x2896acu: goto label_2896ac;
        case 0x2896b0u: goto label_2896b0;
        case 0x2896b4u: goto label_2896b4;
        case 0x2896b8u: goto label_2896b8;
        case 0x2896bcu: goto label_2896bc;
        case 0x2896c0u: goto label_2896c0;
        case 0x2896c4u: goto label_2896c4;
        default: break;
    }

    ctx->pc = 0x289698u;

label_289698:
    // 0x289698: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x289698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28969c:
    // 0x28969c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x28969cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2896a0:
    // 0x2896a0: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x2896a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
label_2896a4:
    // 0x2896a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2896a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2896a8:
    // 0x2896a8: 0x8c6210e4  lw          $v0, 0x10E4($v1)
    ctx->pc = 0x2896a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4324)));
label_2896ac:
    // 0x2896ac: 0x8cc468dc  lw          $a0, 0x68DC($a2)
    ctx->pc = 0x2896acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 26844)));
label_2896b0:
    // 0x2896b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2896b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2896b4:
    // 0x2896b4: 0x40f809  jalr        $v0
label_2896b8:
    if (ctx->pc == 0x2896B8u) {
        ctx->pc = 0x2896BCu;
        goto label_2896bc;
    }
    ctx->pc = 0x2896B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2896BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2896B4u, 0x2896BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2896BCu;
label_2896bc:
    // 0x2896bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2896bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2896c0:
    // 0x2896c0: 0x3e00008  jr          $ra
label_2896c4:
    if (ctx->pc == 0x2896C4u) {
        ctx->pc = 0x2896C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2896C0u;
        // 0x2896c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2896C8u;
        goto label_fallthrough_0x2896c0;
    }
    ctx->pc = 0x2896C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2896C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2896C0u;
        // 0x2896c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2896C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2896c0:
    ctx->pc = 0x2896C8u;
}
