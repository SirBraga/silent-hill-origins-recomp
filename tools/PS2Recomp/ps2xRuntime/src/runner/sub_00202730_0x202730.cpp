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

// Function: sub_00202730
// Address: 0x202730 - 0x202790
void sub_00202730_0x202730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202730_0x202730");
#endif

    switch (ctx->pc) {
        case 0x202740u: goto label_202740;
        case 0x202758u: goto label_202758;
        case 0x202770u: goto label_202770;
        default: break;
    }

    ctx->pc = 0x202730u;

    // 0x202730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x202730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x202734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202738: 0xc093272  jal         func_24C9C8
    ctx->pc = 0x202738u;
    SET_GPR_U32(ctx, 31, 0x202740u);
    ctx->pc = 0x24C9C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C9C8u, 0x202738u, 0x202740u)) {
        return;
    }
    ctx->pc = 0x202740u;
label_202740:
    // 0x202740: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x202740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x202744: 0x8c640270  lw          $a0, 0x270($v1)
    ctx->pc = 0x202744u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C0270u));
    // 0x202748: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x202748u;
    {
        const bool branch_taken_0x202748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202748u;
        // 0x20274c: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202748) {
            ctx->pc = 0x20275Cu;
            goto label_20275c;
        }
    }
    ctx->pc = 0x202750u;
    // 0x202750: 0xc080a8a  jal         func_202A28
    ctx->pc = 0x202750u;
    SET_GPR_U32(ctx, 31, 0x202758u);
    ctx->pc = 0x202A28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202A28u, 0x202750u, 0x202758u)) {
        return;
    }
    ctx->pc = 0x202758u;
label_202758:
    // 0x202758: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x202758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_20275c:
    // 0x20275c: 0x8c440274  lw          $a0, 0x274($v0)
    ctx->pc = 0x20275cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x202760: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x202760u;
    {
        const bool branch_taken_0x202760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x202764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202760u;
        // 0x202764: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202760) {
            ctx->pc = 0x202774u;
            goto label_202774;
        }
    }
    ctx->pc = 0x202768u;
    // 0x202768: 0xc080bca  jal         func_202F28
    ctx->pc = 0x202768u;
    SET_GPR_U32(ctx, 31, 0x202770u);
    ctx->pc = 0x202F28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202F28u, 0x202768u, 0x202770u)) {
        return;
    }
    ctx->pc = 0x202770u;
label_202770:
    // 0x202770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_202774:
    // 0x202774: 0x3e00008  jr          $ra
    ctx->pc = 0x202774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202774u;
        // 0x202778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20277Cu;
    // 0x20277c: 0x0  nop
    ctx->pc = 0x20277cu;
    // NOP
    // 0x202780: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x202780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x202784: 0x0  nop
    ctx->pc = 0x202784u;
    // NOP
    // 0x202788: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x202788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20278c: 0x0  nop
    ctx->pc = 0x20278cu;
    // NOP
    ctx->pc = 0x202790u;
}
