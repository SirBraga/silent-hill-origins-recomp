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

// Function: sub_0021B378
// Address: 0x21b378 - 0x21b3a8
void sub_0021B378_0x21b378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B378_0x21b378");
#endif

    switch (ctx->pc) {
        case 0x21b378u: goto label_21b378;
        case 0x21b37cu: goto label_21b37c;
        case 0x21b380u: goto label_21b380;
        case 0x21b384u: goto label_21b384;
        case 0x21b388u: goto label_21b388;
        case 0x21b38cu: goto label_21b38c;
        case 0x21b390u: goto label_21b390;
        case 0x21b394u: goto label_21b394;
        case 0x21b398u: goto label_21b398;
        case 0x21b39cu: goto label_21b39c;
        case 0x21b3a0u: goto label_21b3a0;
        case 0x21b3a4u: goto label_21b3a4;
        default: break;
    }

    ctx->pc = 0x21b378u;

label_21b378:
    // 0x21b378: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x21b378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21b37c:
    // 0x21b37c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x21b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_21b380:
    // 0x21b380: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x21b380u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
label_21b384:
    // 0x21b384: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21b388:
    // 0x21b388: 0x8c6210e4  lw          $v0, 0x10E4($v1)
    ctx->pc = 0x21b388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4324)));
label_21b38c:
    // 0x21b38c: 0x8cc402bc  lw          $a0, 0x2BC($a2)
    ctx->pc = 0x21b38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 700)));
label_21b390:
    // 0x21b390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21b390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21b394:
    // 0x21b394: 0x40f809  jalr        $v0
label_21b398:
    if (ctx->pc == 0x21B398u) {
        ctx->pc = 0x21B39Cu;
        goto label_21b39c;
    }
    ctx->pc = 0x21B394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B39Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B394u, 0x21B39Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B39Cu;
label_21b39c:
    // 0x21b39c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21b3a0:
    // 0x21b3a0: 0x3e00008  jr          $ra
label_21b3a4:
    if (ctx->pc == 0x21B3A4u) {
        ctx->pc = 0x21B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3A0u;
        // 0x21b3a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B3A8u;
        goto label_fallthrough_0x21b3a0;
    }
    ctx->pc = 0x21B3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3A0u;
        // 0x21b3a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21b3a0:
    ctx->pc = 0x21B3A8u;
}
