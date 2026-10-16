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

// Function: sub_002026C8
// Address: 0x2026c8 - 0x202730
void sub_002026C8_0x2026c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002026C8_0x2026c8");
#endif

    switch (ctx->pc) {
        case 0x202704u: goto label_202704;
        case 0x202718u: goto label_202718;
        default: break;
    }

    ctx->pc = 0x2026c8u;

    // 0x2026c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2026c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2026cc: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2026ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x2026d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2026d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2026d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2026d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2026d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2026d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2026dc: 0x8c440274  lw          $a0, 0x274($v0)
    ctx->pc = 0x2026dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C0274u));
    // 0x2026e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2026e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2026e4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2026E4u;
    {
        const bool branch_taken_0x2026e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2026E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026E4u;
        // 0x2026e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2026e4) {
            ctx->pc = 0x20270Cu;
            goto label_20270c;
        }
    }
    ctx->pc = 0x2026ECu;
    // 0x2026ec: 0x2112818  mult        $a1, $s0, $s1
    ctx->pc = 0x2026ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2026f0: 0x2ca20401  sltiu       $v0, $a1, 0x401
    ctx->pc = 0x2026f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x2026f4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2026F4u;
    {
        const bool branch_taken_0x2026f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2026f4) {
            ctx->pc = 0x2026F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2026F4u;
            // 0x2026f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202710u;
            goto label_202710;
        }
    }
    ctx->pc = 0x2026FCu;
    // 0x2026fc: 0xc080c42  jal         func_203108
    ctx->pc = 0x2026FCu;
    SET_GPR_U32(ctx, 31, 0x202704u);
    ctx->pc = 0x203108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203108u, 0x2026FCu, 0x202704u)) {
        return;
    }
    ctx->pc = 0x202704u;
label_202704:
    // 0x202704: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x202704u;
    {
        const bool branch_taken_0x202704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202704) {
            ctx->pc = 0x202708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202704u;
            // 0x202708: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20271Cu;
            goto label_20271c;
        }
    }
    ctx->pc = 0x20270Cu;
label_20270c:
    // 0x20270c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20270cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_202710:
    // 0x202710: 0xc0c53e8  jal         func_314FA0
    ctx->pc = 0x202710u;
    SET_GPR_U32(ctx, 31, 0x202718u);
    ctx->pc = 0x202714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202710u;
    // 0x202714: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314FA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314FA0u, 0x202710u, 0x202718u)) {
        return;
    }
    ctx->pc = 0x202718u;
label_202718:
    // 0x202718: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x202718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20271c:
    // 0x20271c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20271cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202724: 0x3e00008  jr          $ra
    ctx->pc = 0x202724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202724u;
        // 0x202728: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20272Cu;
    // 0x20272c: 0x0  nop
    ctx->pc = 0x20272cu;
    // NOP
    ctx->pc = 0x202730u;
}
