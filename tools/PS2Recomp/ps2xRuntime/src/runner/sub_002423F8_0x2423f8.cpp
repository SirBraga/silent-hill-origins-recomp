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

// Function: sub_002423F8
// Address: 0x2423f8 - 0x242460
void sub_002423F8_0x2423f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002423F8_0x2423f8");
#endif

    switch (ctx->pc) {
        case 0x2423f8u: goto label_2423f8;
        case 0x2423fcu: goto label_2423fc;
        case 0x242400u: goto label_242400;
        case 0x242404u: goto label_242404;
        case 0x242408u: goto label_242408;
        case 0x24240cu: goto label_24240c;
        case 0x242410u: goto label_242410;
        case 0x242414u: goto label_242414;
        case 0x242418u: goto label_242418;
        case 0x24241cu: goto label_24241c;
        case 0x242420u: goto label_242420;
        case 0x242424u: goto label_242424;
        case 0x242428u: goto label_242428;
        case 0x24242cu: goto label_24242c;
        case 0x242430u: goto label_242430;
        case 0x242434u: goto label_242434;
        case 0x242438u: goto label_242438;
        case 0x24243cu: goto label_24243c;
        case 0x242440u: goto label_242440;
        case 0x242444u: goto label_242444;
        case 0x242448u: goto label_242448;
        case 0x24244cu: goto label_24244c;
        case 0x242450u: goto label_242450;
        case 0x242454u: goto label_242454;
        case 0x242458u: goto label_242458;
        case 0x24245cu: goto label_24245c;
        default: break;
    }

    ctx->pc = 0x2423f8u;

label_2423f8:
    // 0x2423f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2423f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2423fc:
    // 0x2423fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2423fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_242400:
    // 0x242400: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x242400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_242404:
    // 0x242404: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x242404u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_242408:
    // 0x242408: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x242408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24240c:
    // 0x24240c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_242410:
    if (ctx->pc == 0x242410u) {
        ctx->pc = 0x242410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24240Cu;
        // 0x242410: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242414u;
        goto label_242414;
    }
    ctx->pc = 0x24240Cu;
    {
        const bool branch_taken_0x24240c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x242410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24240Cu;
        // 0x242410: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24240c) {
            ctx->pc = 0x24244Cu;
            goto label_24244c;
        }
    }
    ctx->pc = 0x242414u;
label_242414:
    // 0x242414: 0x8f8684f8  lw          $a2, -0x7B08($gp)
    ctx->pc = 0x242414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935800)));
label_242418:
    // 0x242418: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x242418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24241c:
    // 0x24241c: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x24241cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_242420:
    // 0x242420: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x242420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242424:
    // 0x242424: 0xd0182b  sltu        $v1, $a2, $s0
    ctx->pc = 0x242424u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_242428:
    // 0x242428: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x242428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24242c:
    // 0x24242c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24242cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_242430:
    // 0x242430: 0xa3800a  movz        $s0, $a1, $v1
    ctx->pc = 0x242430u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5));
label_242434:
    // 0x242434: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x242434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_242438:
    // 0x242438: 0x40f809  jalr        $v0
label_24243c:
    if (ctx->pc == 0x24243Cu) {
        ctx->pc = 0x24243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242438u;
        // 0x24243c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242440u;
        goto label_242440;
    }
    ctx->pc = 0x242438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x242440u);
        ctx->pc = 0x24243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242438u;
        // 0x24243c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242438u, 0x242440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242440u;
label_242440:
    // 0x242440: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x242440u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_242444:
    // 0x242444: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_242448:
    if (ctx->pc == 0x242448u) {
        ctx->pc = 0x242448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242444u;
        // 0x242448: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24244Cu;
        goto label_24244c;
    }
    ctx->pc = 0x242444u;
    {
        const bool branch_taken_0x242444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x242448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242444u;
        // 0x242448: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242444) {
            ctx->pc = 0x242450u;
            goto label_242450;
        }
    }
    ctx->pc = 0x24244Cu;
label_24244c:
    // 0x24244c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24244cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242450:
    // 0x242450: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x242450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_242454:
    // 0x242454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_242458:
    // 0x242458: 0x3e00008  jr          $ra
label_24245c:
    if (ctx->pc == 0x24245Cu) {
        ctx->pc = 0x24245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242458u;
        // 0x24245c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242460u;
        goto label_fallthrough_0x242458;
    }
    ctx->pc = 0x242458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242458u;
        // 0x24245c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x242458:
    ctx->pc = 0x242460u;
}
