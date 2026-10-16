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

// Function: sub_00202630
// Address: 0x202630 - 0x2026a0
void sub_00202630_0x202630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202630_0x202630");
#endif

    switch (ctx->pc) {
        case 0x20265cu: goto label_20265c;
        case 0x20267cu: goto label_20267c;
        case 0x20268cu: goto label_20268c;
        default: break;
    }

    ctx->pc = 0x202630u;

    // 0x202630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x202634: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x202634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x202638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x202638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20263c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20263Cu;
    {
        const bool branch_taken_0x20263c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x202640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20263Cu;
        // 0x202640: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20263c) {
            ctx->pc = 0x20268Cu;
            goto label_20268c;
        }
    }
    ctx->pc = 0x202644u;
    // 0x202644: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x202644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x202648: 0x8c440270  lw          $a0, 0x270($v0)
    ctx->pc = 0x202648u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C0270u));
    // 0x20264c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20264Cu;
    {
        const bool branch_taken_0x20264c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x202650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20264Cu;
        // 0x202650: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20264c) {
            ctx->pc = 0x202668u;
            goto label_202668;
        }
    }
    ctx->pc = 0x202654u;
    // 0x202654: 0xc080ad8  jal         func_202B60
    ctx->pc = 0x202654u;
    SET_GPR_U32(ctx, 31, 0x20265Cu);
    ctx->pc = 0x202658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202654u;
    // 0x202658: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202B60u, 0x202654u, 0x20265Cu)) {
        return;
    }
    ctx->pc = 0x20265Cu;
label_20265c:
    // 0x20265c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x20265Cu;
    {
        const bool branch_taken_0x20265c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20265c) {
            ctx->pc = 0x202660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20265Cu;
            // 0x202660: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202690u;
            goto label_202690;
        }
    }
    ctx->pc = 0x202664u;
    // 0x202664: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x202664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_202668:
    // 0x202668: 0x8c440274  lw          $a0, 0x274($v0)
    ctx->pc = 0x202668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x20266c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20266Cu;
    {
        const bool branch_taken_0x20266c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20266c) {
            ctx->pc = 0x202684u;
            goto label_202684;
        }
    }
    ctx->pc = 0x202674u;
    // 0x202674: 0xc080c5c  jal         func_203170
    ctx->pc = 0x202674u;
    SET_GPR_U32(ctx, 31, 0x20267Cu);
    ctx->pc = 0x202678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202674u;
    // 0x202678: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203170u, 0x202674u, 0x20267Cu)) {
        return;
    }
    ctx->pc = 0x20267Cu;
label_20267c:
    // 0x20267c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20267Cu;
    {
        const bool branch_taken_0x20267c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20267c) {
            ctx->pc = 0x202680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20267Cu;
            // 0x202680: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202690u;
            goto label_202690;
        }
    }
    ctx->pc = 0x202684u;
label_202684:
    // 0x202684: 0xc0c5486  jal         func_315218
    ctx->pc = 0x202684u;
    SET_GPR_U32(ctx, 31, 0x20268Cu);
    ctx->pc = 0x202688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202684u;
    // 0x202688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x202684u, 0x20268Cu)) {
        return;
    }
    ctx->pc = 0x20268Cu;
label_20268c:
    // 0x20268c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20268cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_202690:
    // 0x202690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202694: 0x3e00008  jr          $ra
    ctx->pc = 0x202694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202694u;
        // 0x202698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20269Cu;
    // 0x20269c: 0x0  nop
    ctx->pc = 0x20269cu;
    // NOP
    ctx->pc = 0x2026a0u;
}
