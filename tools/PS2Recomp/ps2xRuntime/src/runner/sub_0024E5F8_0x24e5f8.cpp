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

// Function: sub_0024E5F8
// Address: 0x24e5f8 - 0x24e658
void sub_0024E5F8_0x24e5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E5F8_0x24e5f8");
#endif

    switch (ctx->pc) {
        case 0x24e5f8u: goto label_24e5f8;
        case 0x24e5fcu: goto label_24e5fc;
        case 0x24e600u: goto label_24e600;
        case 0x24e604u: goto label_24e604;
        case 0x24e608u: goto label_24e608;
        case 0x24e60cu: goto label_24e60c;
        case 0x24e610u: goto label_24e610;
        case 0x24e614u: goto label_24e614;
        case 0x24e618u: goto label_24e618;
        case 0x24e61cu: goto label_24e61c;
        case 0x24e620u: goto label_24e620;
        case 0x24e624u: goto label_24e624;
        case 0x24e628u: goto label_24e628;
        case 0x24e62cu: goto label_24e62c;
        case 0x24e630u: goto label_24e630;
        case 0x24e634u: goto label_24e634;
        case 0x24e638u: goto label_24e638;
        case 0x24e63cu: goto label_24e63c;
        case 0x24e640u: goto label_24e640;
        case 0x24e644u: goto label_24e644;
        case 0x24e648u: goto label_24e648;
        case 0x24e64cu: goto label_24e64c;
        case 0x24e650u: goto label_24e650;
        case 0x24e654u: goto label_24e654;
        default: break;
    }

    ctx->pc = 0x24e5f8u;

label_24e5f8:
    // 0x24e5f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24e5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_24e5fc:
    // 0x24e5fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24e5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_24e600:
    // 0x24e600: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x24e600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_24e604:
    // 0x24e604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24e608:
    // 0x24e608: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24e608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24e60c:
    // 0x24e60c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24e60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_24e610:
    // 0x24e610: 0x8e500014  lw          $s0, 0x14($s2)
    ctx->pc = 0x24e610u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_24e614:
    // 0x24e614: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_24e618:
    if (ctx->pc == 0x24E618u) {
        ctx->pc = 0x24E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E614u;
        // 0x24e618: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E61Cu;
        goto label_24e61c;
    }
    ctx->pc = 0x24E614u;
    {
        const bool branch_taken_0x24e614 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E614u;
        // 0x24e618: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e614) {
            ctx->pc = 0x24E63Cu;
            goto label_24e63c;
        }
    }
    ctx->pc = 0x24E61Cu;
label_24e61c:
    // 0x24e61c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x24e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_24e620:
    // 0x24e620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24e620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24e624:
    // 0x24e624: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x24e624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24e628:
    // 0x24e628: 0x40f809  jalr        $v0
label_24e62c:
    if (ctx->pc == 0x24E62Cu) {
        ctx->pc = 0x24E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E628u;
        // 0x24e62c: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E630u;
        goto label_24e630;
    }
    ctx->pc = 0x24E628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24E630u);
        ctx->pc = 0x24E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E628u;
        // 0x24e62c: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E628u, 0x24E630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E630u;
label_24e630:
    // 0x24e630: 0x8e100034  lw          $s0, 0x34($s0)
    ctx->pc = 0x24e630u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_24e634:
    // 0x24e634: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
label_24e638:
    if (ctx->pc == 0x24E638u) {
        ctx->pc = 0x24E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E634u;
        // 0x24e638: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E63Cu;
        goto label_24e63c;
    }
    ctx->pc = 0x24E634u;
    {
        const bool branch_taken_0x24e634 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e634) {
            ctx->pc = 0x24E638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E634u;
            // 0x24e638: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e620;
        }
    }
    ctx->pc = 0x24E63Cu;
label_24e63c:
    // 0x24e63c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x24e63cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24e640:
    // 0x24e640: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24e640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24e644:
    // 0x24e644: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24e644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24e648:
    // 0x24e648: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x24e648u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24e64c:
    // 0x24e64c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24e64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24e650:
    // 0x24e650: 0x3e00008  jr          $ra
label_24e654:
    if (ctx->pc == 0x24E654u) {
        ctx->pc = 0x24E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E650u;
        // 0x24e654: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E658u;
        goto label_fallthrough_0x24e650;
    }
    ctx->pc = 0x24E650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E650u;
        // 0x24e654: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24e650:
    ctx->pc = 0x24E658u;
}
