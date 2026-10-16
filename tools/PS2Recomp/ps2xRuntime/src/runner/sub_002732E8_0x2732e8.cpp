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

// Function: sub_002732E8
// Address: 0x2732e8 - 0x273338
void sub_002732E8_0x2732e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002732E8_0x2732e8");
#endif

    switch (ctx->pc) {
        case 0x2732e8u: goto label_2732e8;
        case 0x2732ecu: goto label_2732ec;
        case 0x2732f0u: goto label_2732f0;
        case 0x2732f4u: goto label_2732f4;
        case 0x2732f8u: goto label_2732f8;
        case 0x2732fcu: goto label_2732fc;
        case 0x273300u: goto label_273300;
        case 0x273304u: goto label_273304;
        case 0x273308u: goto label_273308;
        case 0x27330cu: goto label_27330c;
        case 0x273310u: goto label_273310;
        case 0x273314u: goto label_273314;
        case 0x273318u: goto label_273318;
        case 0x27331cu: goto label_27331c;
        case 0x273320u: goto label_273320;
        case 0x273324u: goto label_273324;
        case 0x273328u: goto label_273328;
        case 0x27332cu: goto label_27332c;
        case 0x273330u: goto label_273330;
        case 0x273334u: goto label_273334;
        default: break;
    }

    ctx->pc = 0x2732e8u;

label_2732e8:
    // 0x2732e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2732e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2732ec:
    // 0x2732ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2732ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2732f0:
    // 0x2732f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2732f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2732f4:
    // 0x2732f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2732f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2732f8:
    // 0x2732f8: 0x2060018  mult        $zero, $s0, $a2
    ctx->pc = 0x2732f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2732fc:
    // 0x2732fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2732fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_273300:
    // 0x273300: 0x8ce30050  lw          $v1, 0x50($a3)
    ctx->pc = 0x273300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_273304:
    // 0x273304: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x273304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_273308:
    // 0x273308: 0x3012  mflo        $a2
    ctx->pc = 0x273308u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_27330c:
    // 0x27330c: 0x40f809  jalr        $v0
label_273310:
    if (ctx->pc == 0x273310u) {
        ctx->pc = 0x273310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27330Cu;
        // 0x273310: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273314u;
        goto label_273314;
    }
    ctx->pc = 0x27330Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273314u);
        ctx->pc = 0x273310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27330Cu;
        // 0x273310: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27330Cu, 0x273314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273314u;
label_273314:
    // 0x273314: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x273314u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_273318:
    // 0x273318: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_27331c:
    if (ctx->pc == 0x27331Cu) {
        ctx->pc = 0x27331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273318u;
        // 0x27331c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x273320u;
        goto label_273320;
    }
    ctx->pc = 0x273318u;
    {
        const bool branch_taken_0x273318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x273318) {
            ctx->pc = 0x27331Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273318u;
            // 0x27331c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x273320u;
            goto label_273320;
        }
    }
    ctx->pc = 0x273320u;
label_273320:
    // 0x273320: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x273320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_273324:
    // 0x273324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_273328:
    // 0x273328: 0x1012  mflo        $v0
    ctx->pc = 0x273328u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_27332c:
    // 0x27332c: 0x3e00008  jr          $ra
label_273330:
    if (ctx->pc == 0x273330u) {
        ctx->pc = 0x273330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27332Cu;
        // 0x273330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273334u;
        goto label_273334;
    }
    ctx->pc = 0x27332Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27332Cu;
        // 0x273330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27332Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273334u;
label_273334:
    // 0x273334: 0x0  nop
    ctx->pc = 0x273334u;
    // NOP
    ctx->pc = 0x273338u;
}
