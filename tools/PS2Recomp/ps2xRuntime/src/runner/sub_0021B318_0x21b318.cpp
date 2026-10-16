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

// Function: sub_0021B318
// Address: 0x21b318 - 0x21b348
void sub_0021B318_0x21b318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B318_0x21b318");
#endif

    switch (ctx->pc) {
        case 0x21b318u: goto label_21b318;
        case 0x21b31cu: goto label_21b31c;
        case 0x21b320u: goto label_21b320;
        case 0x21b324u: goto label_21b324;
        case 0x21b328u: goto label_21b328;
        case 0x21b32cu: goto label_21b32c;
        case 0x21b330u: goto label_21b330;
        case 0x21b334u: goto label_21b334;
        case 0x21b338u: goto label_21b338;
        case 0x21b33cu: goto label_21b33c;
        case 0x21b340u: goto label_21b340;
        case 0x21b344u: goto label_21b344;
        default: break;
    }

    ctx->pc = 0x21b318u;

label_21b318:
    // 0x21b318: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x21b318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21b31c:
    // 0x21b31c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x21b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_21b320:
    // 0x21b320: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x21b320u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
label_21b324:
    // 0x21b324: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21b328:
    // 0x21b328: 0x8c6210e4  lw          $v0, 0x10E4($v1)
    ctx->pc = 0x21b328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4324)));
label_21b32c:
    // 0x21b32c: 0x8cc402c0  lw          $a0, 0x2C0($a2)
    ctx->pc = 0x21b32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 704)));
label_21b330:
    // 0x21b330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21b330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21b334:
    // 0x21b334: 0x40f809  jalr        $v0
label_21b338:
    if (ctx->pc == 0x21B338u) {
        ctx->pc = 0x21B33Cu;
        goto label_21b33c;
    }
    ctx->pc = 0x21B334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B33Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B334u, 0x21B33Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B33Cu;
label_21b33c:
    // 0x21b33c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21b340:
    // 0x21b340: 0x3e00008  jr          $ra
label_21b344:
    if (ctx->pc == 0x21B344u) {
        ctx->pc = 0x21B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B340u;
        // 0x21b344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B348u;
        goto label_fallthrough_0x21b340;
    }
    ctx->pc = 0x21B340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B340u;
        // 0x21b344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21b340:
    ctx->pc = 0x21B348u;
}
