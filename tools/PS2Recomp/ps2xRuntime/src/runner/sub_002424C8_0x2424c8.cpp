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

// Function: sub_002424C8
// Address: 0x2424c8 - 0x242530
void sub_002424C8_0x2424c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002424C8_0x2424c8");
#endif

    switch (ctx->pc) {
        case 0x2424c8u: goto label_2424c8;
        case 0x2424ccu: goto label_2424cc;
        case 0x2424d0u: goto label_2424d0;
        case 0x2424d4u: goto label_2424d4;
        case 0x2424d8u: goto label_2424d8;
        case 0x2424dcu: goto label_2424dc;
        case 0x2424e0u: goto label_2424e0;
        case 0x2424e4u: goto label_2424e4;
        case 0x2424e8u: goto label_2424e8;
        case 0x2424ecu: goto label_2424ec;
        case 0x2424f0u: goto label_2424f0;
        case 0x2424f4u: goto label_2424f4;
        case 0x2424f8u: goto label_2424f8;
        case 0x2424fcu: goto label_2424fc;
        case 0x242500u: goto label_242500;
        case 0x242504u: goto label_242504;
        case 0x242508u: goto label_242508;
        case 0x24250cu: goto label_24250c;
        case 0x242510u: goto label_242510;
        case 0x242514u: goto label_242514;
        case 0x242518u: goto label_242518;
        case 0x24251cu: goto label_24251c;
        case 0x242520u: goto label_242520;
        case 0x242524u: goto label_242524;
        case 0x242528u: goto label_242528;
        case 0x24252cu: goto label_24252c;
        default: break;
    }

    ctx->pc = 0x2424c8u;

label_2424c8:
    // 0x2424c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2424c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2424cc:
    // 0x2424cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2424ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2424d0:
    // 0x2424d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2424d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2424d4:
    // 0x2424d4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2424d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2424d8:
    // 0x2424d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2424d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2424dc:
    // 0x2424dc: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_2424e0:
    if (ctx->pc == 0x2424E0u) {
        ctx->pc = 0x2424E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424DCu;
        // 0x2424e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2424E4u;
        goto label_2424e4;
    }
    ctx->pc = 0x2424DCu;
    {
        const bool branch_taken_0x2424dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2424E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424DCu;
        // 0x2424e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2424dc) {
            ctx->pc = 0x24251Cu;
            goto label_24251c;
        }
    }
    ctx->pc = 0x2424E4u;
label_2424e4:
    // 0x2424e4: 0x8f8684fc  lw          $a2, -0x7B04($gp)
    ctx->pc = 0x2424e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935804)));
label_2424e8:
    // 0x2424e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2424e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2424ec:
    // 0x2424ec: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x2424ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2424f0:
    // 0x2424f0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2424f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2424f4:
    // 0x2424f4: 0xd0182b  sltu        $v1, $a2, $s0
    ctx->pc = 0x2424f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2424f8:
    // 0x2424f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2424f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2424fc:
    // 0x2424fc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2424fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_242500:
    // 0x242500: 0xa3800a  movz        $s0, $a1, $v1
    ctx->pc = 0x242500u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5));
label_242504:
    // 0x242504: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x242504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_242508:
    // 0x242508: 0x40f809  jalr        $v0
label_24250c:
    if (ctx->pc == 0x24250Cu) {
        ctx->pc = 0x24250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242508u;
        // 0x24250c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242510u;
        goto label_242510;
    }
    ctx->pc = 0x242508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x242510u);
        ctx->pc = 0x24250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242508u;
        // 0x24250c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242508u, 0x242510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242510u;
label_242510:
    // 0x242510: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x242510u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_242514:
    // 0x242514: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_242518:
    if (ctx->pc == 0x242518u) {
        ctx->pc = 0x242518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242514u;
        // 0x242518: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24251Cu;
        goto label_24251c;
    }
    ctx->pc = 0x242514u;
    {
        const bool branch_taken_0x242514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x242518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242514u;
        // 0x242518: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242514) {
            ctx->pc = 0x242520u;
            goto label_242520;
        }
    }
    ctx->pc = 0x24251Cu;
label_24251c:
    // 0x24251c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24251cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242520:
    // 0x242520: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x242520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_242524:
    // 0x242524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_242528:
    // 0x242528: 0x3e00008  jr          $ra
label_24252c:
    if (ctx->pc == 0x24252Cu) {
        ctx->pc = 0x24252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242528u;
        // 0x24252c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242530u;
        goto label_fallthrough_0x242528;
    }
    ctx->pc = 0x242528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242528u;
        // 0x24252c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x242528:
    ctx->pc = 0x242530u;
}
