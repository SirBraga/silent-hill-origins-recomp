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

// Function: sub_002263F0
// Address: 0x2263f0 - 0x226438
void sub_002263F0_0x2263f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002263F0_0x2263f0");
#endif

    switch (ctx->pc) {
        case 0x2263f0u: goto label_2263f0;
        case 0x2263f4u: goto label_2263f4;
        case 0x2263f8u: goto label_2263f8;
        case 0x2263fcu: goto label_2263fc;
        case 0x226400u: goto label_226400;
        case 0x226404u: goto label_226404;
        case 0x226408u: goto label_226408;
        case 0x22640cu: goto label_22640c;
        case 0x226410u: goto label_226410;
        case 0x226414u: goto label_226414;
        case 0x226418u: goto label_226418;
        case 0x22641cu: goto label_22641c;
        case 0x226420u: goto label_226420;
        case 0x226424u: goto label_226424;
        case 0x226428u: goto label_226428;
        case 0x22642cu: goto label_22642c;
        case 0x226430u: goto label_226430;
        case 0x226434u: goto label_226434;
        default: break;
    }

    ctx->pc = 0x2263f0u;

label_2263f0:
    // 0x2263f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2263f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2263f4:
    // 0x2263f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2263f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2263f8:
    // 0x2263f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2263f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2263fc:
    // 0x2263fc: 0xc0898e6  jal         func_226398
label_226400:
    if (ctx->pc == 0x226400u) {
        ctx->pc = 0x226400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263FCu;
        // 0x226400: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226404u;
        goto label_226404;
    }
    ctx->pc = 0x2263FCu;
    SET_GPR_U32(ctx, 31, 0x226404u);
    ctx->pc = 0x226400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2263FCu;
    // 0x226400: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226398u, 0x2263FCu, 0x226404u)) {
        return;
    }
    ctx->pc = 0x226404u;
label_226404:
    // 0x226404: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x226404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_226408:
    // 0x226408: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x226408u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_22640c:
    // 0x22640c: 0x8cc63e88  lw          $a2, 0x3E88($a2)
    ctx->pc = 0x22640cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16008)));
label_226410:
    // 0x226410: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x226410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_226414:
    // 0x226414: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x226414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226418:
    // 0x226418: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x226418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_22641c:
    // 0x22641c: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x22641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_226420:
    // 0x226420: 0x40f809  jalr        $v0
label_226424:
    if (ctx->pc == 0x226424u) {
        ctx->pc = 0x226424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226420u;
        // 0x226424: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226428u;
        goto label_226428;
    }
    ctx->pc = 0x226420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226428u);
        ctx->pc = 0x226424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226420u;
        // 0x226424: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226420u, 0x226428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226428u;
label_226428:
    // 0x226428: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x226428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22642c:
    // 0x22642c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22642cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226430:
    // 0x226430: 0x3e00008  jr          $ra
label_226434:
    if (ctx->pc == 0x226434u) {
        ctx->pc = 0x226434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226430u;
        // 0x226434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226438u;
        goto label_fallthrough_0x226430;
    }
    ctx->pc = 0x226430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226430u;
        // 0x226434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x226430:
    ctx->pc = 0x226438u;
}
