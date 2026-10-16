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

// Function: sub_001DE650
// Address: 0x1de650 - 0x1de690
void sub_001DE650_0x1de650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE650_0x1de650");
#endif

    switch (ctx->pc) {
        case 0x1de678u: goto label_1de678;
        default: break;
    }

    ctx->pc = 0x1de650u;

    // 0x1de650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de654: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1de654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1de658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de65c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de660: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1de660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1de664: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE664u;
    {
        const bool branch_taken_0x1de664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE664u;
        // 0x1de668: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de664) {
            ctx->pc = 0x1DE678u;
            goto label_1de678;
        }
    }
    ctx->pc = 0x1DE66Cu;
    // 0x1de66c: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1de66cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1de670: 0xc095966  jal         func_256598
    ctx->pc = 0x1DE670u;
    SET_GPR_U32(ctx, 31, 0x1DE678u);
    ctx->pc = 0x1DE674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE670u;
    // 0x1de674: 0x24a5e5c8  addiu       $a1, $a1, -0x1A38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256598u, 0x1DE670u, 0x1DE678u)) {
        return;
    }
    ctx->pc = 0x1DE678u;
label_1de678:
    // 0x1de678: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1de678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de67c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de680: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1de680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de684: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE684u;
        // 0x1de688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE68Cu;
    // 0x1de68c: 0x0  nop
    ctx->pc = 0x1de68cu;
    // NOP
    ctx->pc = 0x1de690u;
}
