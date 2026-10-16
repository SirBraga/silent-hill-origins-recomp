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

// Function: sub_002266F0
// Address: 0x2266f0 - 0x226760
void sub_002266F0_0x2266f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002266F0_0x2266f0");
#endif

    switch (ctx->pc) {
        case 0x2266f0u: goto label_2266f0;
        case 0x2266f4u: goto label_2266f4;
        case 0x2266f8u: goto label_2266f8;
        case 0x2266fcu: goto label_2266fc;
        case 0x226700u: goto label_226700;
        case 0x226704u: goto label_226704;
        case 0x226708u: goto label_226708;
        case 0x22670cu: goto label_22670c;
        case 0x226710u: goto label_226710;
        case 0x226714u: goto label_226714;
        case 0x226718u: goto label_226718;
        case 0x22671cu: goto label_22671c;
        case 0x226720u: goto label_226720;
        case 0x226724u: goto label_226724;
        case 0x226728u: goto label_226728;
        case 0x22672cu: goto label_22672c;
        case 0x226730u: goto label_226730;
        case 0x226734u: goto label_226734;
        case 0x226738u: goto label_226738;
        case 0x22673cu: goto label_22673c;
        case 0x226740u: goto label_226740;
        case 0x226744u: goto label_226744;
        case 0x226748u: goto label_226748;
        case 0x22674cu: goto label_22674c;
        case 0x226750u: goto label_226750;
        case 0x226754u: goto label_226754;
        case 0x226758u: goto label_226758;
        case 0x22675cu: goto label_22675c;
        default: break;
    }

    ctx->pc = 0x2266f0u;

label_2266f0:
    // 0x2266f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2266f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2266f4:
    // 0x2266f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2266f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2266f8:
    // 0x2266f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2266f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2266fc:
    // 0x2266fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2266fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_226700:
    // 0x226700: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x226700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_226704:
    // 0x226704: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x226704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_226708:
    // 0x226708: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x226708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_22670c:
    // 0x22670c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22670cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_226710:
    // 0x226710: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x226710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_226714:
    // 0x226714: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_226718:
    if (ctx->pc == 0x226718u) {
        ctx->pc = 0x226718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226714u;
        // 0x226718: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22671Cu;
        goto label_22671c;
    }
    ctx->pc = 0x226714u;
    {
        const bool branch_taken_0x226714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226714u;
        // 0x226718: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226714) {
            ctx->pc = 0x22673Cu;
            goto label_22673c;
        }
    }
    ctx->pc = 0x22671Cu;
label_22671c:
    // 0x22671c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22671cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226720:
    // 0x226720: 0x8c50009c  lw          $s0, 0x9C($v0)
    ctx->pc = 0x226720u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_226724:
    // 0x226724: 0x260f809  jalr        $s3
label_226728:
    if (ctx->pc == 0x226728u) {
        ctx->pc = 0x226728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226724u;
        // 0x226728: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22672Cu;
        goto label_22672c;
    }
    ctx->pc = 0x226724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x22672Cu);
        ctx->pc = 0x226728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226724u;
        // 0x226728: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226724u, 0x22672Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22672Cu;
label_22672c:
    // 0x22672c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_226730:
    if (ctx->pc == 0x226730u) {
        ctx->pc = 0x226730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22672Cu;
        // 0x226730: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226734u;
        goto label_226734;
    }
    ctx->pc = 0x22672Cu;
    {
        const bool branch_taken_0x22672c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22672Cu;
        // 0x226730: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22672c) {
            ctx->pc = 0x22673Cu;
            goto label_22673c;
        }
    }
    ctx->pc = 0x226734u;
label_226734:
    // 0x226734: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_226738:
    if (ctx->pc == 0x226738u) {
        ctx->pc = 0x226738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226734u;
        // 0x226738: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22673Cu;
        goto label_22673c;
    }
    ctx->pc = 0x226734u;
    {
        const bool branch_taken_0x226734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226734u;
        // 0x226738: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226734) {
            ctx->pc = 0x226720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226720;
        }
    }
    ctx->pc = 0x22673Cu;
label_22673c:
    // 0x22673c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22673cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_226740:
    // 0x226740: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x226740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_226744:
    // 0x226744: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x226744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_226748:
    // 0x226748: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x226748u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22674c:
    // 0x22674c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22674cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226750:
    // 0x226750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226754:
    // 0x226754: 0x3e00008  jr          $ra
label_226758:
    if (ctx->pc == 0x226758u) {
        ctx->pc = 0x226758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226754u;
        // 0x226758: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22675Cu;
        goto label_22675c;
    }
    ctx->pc = 0x226754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226754u;
        // 0x226758: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22675Cu;
label_22675c:
    // 0x22675c: 0x0  nop
    ctx->pc = 0x22675cu;
    // NOP
    ctx->pc = 0x226760u;
}
