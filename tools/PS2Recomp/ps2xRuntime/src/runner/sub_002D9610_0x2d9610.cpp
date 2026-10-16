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

// Function: sub_002D9610
// Address: 0x2d9610 - 0x2d9658
void sub_002D9610_0x2d9610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9610_0x2d9610");
#endif

    switch (ctx->pc) {
        case 0x2d9610u: goto label_2d9610;
        case 0x2d9614u: goto label_2d9614;
        case 0x2d9618u: goto label_2d9618;
        case 0x2d961cu: goto label_2d961c;
        case 0x2d9620u: goto label_2d9620;
        case 0x2d9624u: goto label_2d9624;
        case 0x2d9628u: goto label_2d9628;
        case 0x2d962cu: goto label_2d962c;
        case 0x2d9630u: goto label_2d9630;
        case 0x2d9634u: goto label_2d9634;
        case 0x2d9638u: goto label_2d9638;
        case 0x2d963cu: goto label_2d963c;
        case 0x2d9640u: goto label_2d9640;
        case 0x2d9644u: goto label_2d9644;
        case 0x2d9648u: goto label_2d9648;
        case 0x2d964cu: goto label_2d964c;
        case 0x2d9650u: goto label_2d9650;
        case 0x2d9654u: goto label_2d9654;
        default: break;
    }

    ctx->pc = 0x2d9610u;

label_2d9610:
    // 0x2d9610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d9614:
    // 0x2d9614: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d9614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2d9618:
    // 0x2d9618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d961c:
    // 0x2d961c: 0xc0b6596  jal         func_2D9658
label_2d9620:
    if (ctx->pc == 0x2D9620u) {
        ctx->pc = 0x2D9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D961Cu;
        // 0x2d9620: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9624u;
        goto label_2d9624;
    }
    ctx->pc = 0x2D961Cu;
    SET_GPR_U32(ctx, 31, 0x2D9624u);
    ctx->pc = 0x2D9620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D961Cu;
    // 0x2d9620: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9658u, 0x2D961Cu, 0x2D9624u)) {
        return;
    }
    ctx->pc = 0x2D9624u;
label_2d9624:
    // 0x2d9624: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d9624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9628:
    // 0x2d9628: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_2d962c:
    if (ctx->pc == 0x2D962Cu) {
        ctx->pc = 0x2D962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9628u;
        // 0x2d962c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9630u;
        goto label_2d9630;
    }
    ctx->pc = 0x2D9628u;
    {
        const bool branch_taken_0x2d9628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9628) {
            ctx->pc = 0x2D962Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9628u;
            // 0x2d962c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9644u;
            goto label_2d9644;
        }
    }
    ctx->pc = 0x2D9630u;
label_2d9630:
    // 0x2d9630: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2d9630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2d9634:
    // 0x2d9634: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x2d9634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_2d9638:
    // 0x2d9638: 0x40f809  jalr        $v0
label_2d963c:
    if (ctx->pc == 0x2D963Cu) {
        ctx->pc = 0x2D963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9638u;
        // 0x2d963c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9640u;
        goto label_2d9640;
    }
    ctx->pc = 0x2D9638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9640u);
        ctx->pc = 0x2D963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9638u;
        // 0x2d963c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9638u, 0x2D9640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9640u;
label_2d9640:
    // 0x2d9640: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d9640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9644:
    // 0x2d9644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d9648:
    // 0x2d9648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d964c:
    // 0x2d964c: 0x3e00008  jr          $ra
label_2d9650:
    if (ctx->pc == 0x2D9650u) {
        ctx->pc = 0x2D9650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D964Cu;
        // 0x2d9650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9654u;
        goto label_2d9654;
    }
    ctx->pc = 0x2D964Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D964Cu;
        // 0x2d9650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D964Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9654u;
label_2d9654:
    // 0x2d9654: 0x0  nop
    ctx->pc = 0x2d9654u;
    // NOP
    ctx->pc = 0x2d9658u;
}
