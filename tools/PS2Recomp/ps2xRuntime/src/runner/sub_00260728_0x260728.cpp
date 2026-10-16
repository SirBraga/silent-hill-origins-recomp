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

// Function: sub_00260728
// Address: 0x260728 - 0x260770
void sub_00260728_0x260728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260728_0x260728");
#endif

    switch (ctx->pc) {
        case 0x260750u: goto label_260750;
        case 0x260760u: goto label_260760;
        default: break;
    }

    ctx->pc = 0x260728u;

    // 0x260728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x260728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26072c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x26072cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x260730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x260734: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x260734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x260738: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x260738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x26073c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x26073cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x260740: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x260740u;
    {
        const bool branch_taken_0x260740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x260740) {
            ctx->pc = 0x260758u;
            goto label_260758;
        }
    }
    ctx->pc = 0x260748u;
    // 0x260748: 0xc0983d6  jal         func_260F58
    ctx->pc = 0x260748u;
    SET_GPR_U32(ctx, 31, 0x260750u);
    ctx->pc = 0x26074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260748u;
    // 0x26074c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x260F58u, 0x260748u, 0x260750u)) {
        return;
    }
    ctx->pc = 0x260750u;
label_260750:
    // 0x260750: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x260750u;
    {
        const bool branch_taken_0x260750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260750u;
        // 0x260754: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260750) {
            ctx->pc = 0x260764u;
            goto label_260764;
        }
    }
    ctx->pc = 0x260758u;
label_260758:
    // 0x260758: 0xc098a20  jal         func_262880
    ctx->pc = 0x260758u;
    SET_GPR_U32(ctx, 31, 0x260760u);
    ctx->pc = 0x26075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260758u;
    // 0x26075c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x262880u, 0x260758u, 0x260760u)) {
        return;
    }
    ctx->pc = 0x260760u;
label_260760:
    // 0x260760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x260760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260764:
    // 0x260764: 0x3e00008  jr          $ra
    ctx->pc = 0x260764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260764u;
        // 0x260768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26076Cu;
    // 0x26076c: 0x0  nop
    ctx->pc = 0x26076cu;
    // NOP
    ctx->pc = 0x260770u;
}
