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

// Function: sub_002E8418
// Address: 0x2e8418 - 0x2e8490
void sub_002E8418_0x2e8418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8418_0x2e8418");
#endif

    switch (ctx->pc) {
        case 0x2e8464u: goto label_2e8464;
        case 0x2e8480u: goto label_2e8480;
        default: break;
    }

    ctx->pc = 0x2e8418u;

    // 0x2e8418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e8418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e841c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2e841cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e8424: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x2e8424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2e8428: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2e8428u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e842c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e842cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8430: 0x9082000d  lbu         $v0, 0xD($a0)
    ctx->pc = 0x2e8430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x2e8434: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2e8434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e8438: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e8438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e843c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x2e843cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e8440: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x2e8440u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2e8444: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E8444u;
    {
        const bool branch_taken_0x2e8444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8444) {
            ctx->pc = 0x2E8448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8444u;
            // 0x2e8448: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E844Cu;
            goto label_2e844c;
        }
    }
    ctx->pc = 0x2E844Cu;
label_2e844c:
    // 0x2e844c: 0x3012  mflo        $a2
    ctx->pc = 0x2e844cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2e8450: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8450u;
    {
        const bool branch_taken_0x2e8450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8450u;
        // 0x2e8454: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8450) {
            ctx->pc = 0x2E846Cu;
            goto label_2e846c;
        }
    }
    ctx->pc = 0x2E8458u;
    // 0x2e8458: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2e8458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e845c: 0xc0ba154  jal         func_2E8550
    ctx->pc = 0x2E845Cu;
    SET_GPR_U32(ctx, 31, 0x2E8464u);
    ctx->pc = 0x2E8460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E845Cu;
    // 0x2e8460: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8550u, 0x2E845Cu, 0x2E8464u)) {
        return;
    }
    ctx->pc = 0x2E8464u;
label_2e8464:
    // 0x2e8464: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E8464u;
    {
        const bool branch_taken_0x2e8464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8464u;
        // 0x2e8468: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8464) {
            ctx->pc = 0x2E8484u;
            goto label_2e8484;
        }
    }
    ctx->pc = 0x2E846Cu;
label_2e846c:
    // 0x2e846c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E846Cu;
    {
        const bool branch_taken_0x2e846c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E8470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E846Cu;
        // 0x2e8470: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e846c) {
            ctx->pc = 0x2E8484u;
            goto label_2e8484;
        }
    }
    ctx->pc = 0x2E8474u;
    // 0x2e8474: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2e8474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8478: 0xc0b9f06  jal         func_2E7C18
    ctx->pc = 0x2E8478u;
    SET_GPR_U32(ctx, 31, 0x2E8480u);
    ctx->pc = 0x2E847Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8478u;
    // 0x2e847c: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7C18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E7C18u, 0x2E8478u, 0x2E8480u)) {
        return;
    }
    ctx->pc = 0x2E8480u;
label_2e8480:
    // 0x2e8480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e8484:
    // 0x2e8484: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8484u;
        // 0x2e8488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E848Cu;
    // 0x2e848c: 0x0  nop
    ctx->pc = 0x2e848cu;
    // NOP
    ctx->pc = 0x2e8490u;
}
