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

// Function: sub_00273338
// Address: 0x273338 - 0x273388
void sub_00273338_0x273338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273338_0x273338");
#endif

    switch (ctx->pc) {
        case 0x273338u: goto label_273338;
        case 0x27333cu: goto label_27333c;
        case 0x273340u: goto label_273340;
        case 0x273344u: goto label_273344;
        case 0x273348u: goto label_273348;
        case 0x27334cu: goto label_27334c;
        case 0x273350u: goto label_273350;
        case 0x273354u: goto label_273354;
        case 0x273358u: goto label_273358;
        case 0x27335cu: goto label_27335c;
        case 0x273360u: goto label_273360;
        case 0x273364u: goto label_273364;
        case 0x273368u: goto label_273368;
        case 0x27336cu: goto label_27336c;
        case 0x273370u: goto label_273370;
        case 0x273374u: goto label_273374;
        case 0x273378u: goto label_273378;
        case 0x27337cu: goto label_27337c;
        case 0x273380u: goto label_273380;
        case 0x273384u: goto label_273384;
        default: break;
    }

    ctx->pc = 0x273338u;

label_273338:
    // 0x273338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x273338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_27333c:
    // 0x27333c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27333cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_273340:
    // 0x273340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_273344:
    // 0x273344: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x273344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_273348:
    // 0x273348: 0x2060018  mult        $zero, $s0, $a2
    ctx->pc = 0x273348u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_27334c:
    // 0x27334c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x27334cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_273350:
    // 0x273350: 0x8ce30050  lw          $v1, 0x50($a3)
    ctx->pc = 0x273350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_273354:
    // 0x273354: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x273354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_273358:
    // 0x273358: 0x3012  mflo        $a2
    ctx->pc = 0x273358u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_27335c:
    // 0x27335c: 0x40f809  jalr        $v0
label_273360:
    if (ctx->pc == 0x273360u) {
        ctx->pc = 0x273360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27335Cu;
        // 0x273360: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273364u;
        goto label_273364;
    }
    ctx->pc = 0x27335Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273364u);
        ctx->pc = 0x273360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27335Cu;
        // 0x273360: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27335Cu, 0x273364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273364u;
label_273364:
    // 0x273364: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x273364u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_273368:
    // 0x273368: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_27336c:
    if (ctx->pc == 0x27336Cu) {
        ctx->pc = 0x27336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273368u;
        // 0x27336c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x273370u;
        goto label_273370;
    }
    ctx->pc = 0x273368u;
    {
        const bool branch_taken_0x273368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x273368) {
            ctx->pc = 0x27336Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273368u;
            // 0x27336c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x273370u;
            goto label_273370;
        }
    }
    ctx->pc = 0x273370u;
label_273370:
    // 0x273370: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x273370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_273374:
    // 0x273374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_273378:
    // 0x273378: 0x1012  mflo        $v0
    ctx->pc = 0x273378u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_27337c:
    // 0x27337c: 0x3e00008  jr          $ra
label_273380:
    if (ctx->pc == 0x273380u) {
        ctx->pc = 0x273380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27337Cu;
        // 0x273380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273384u;
        goto label_273384;
    }
    ctx->pc = 0x27337Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27337Cu;
        // 0x273380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27337Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273384u;
label_273384:
    // 0x273384: 0x0  nop
    ctx->pc = 0x273384u;
    // NOP
    ctx->pc = 0x273388u;
}
