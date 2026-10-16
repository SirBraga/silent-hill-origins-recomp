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

// Function: sub_00113A78
// Address: 0x113a78 - 0x113ab8
void sub_00113A78_0x113a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113A78_0x113a78");
#endif

    switch (ctx->pc) {
        case 0x113a94u: goto label_113a94;
        case 0x113a9cu: goto label_113a9c;
        default: break;
    }

    ctx->pc = 0x113a78u;

    // 0x113a78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x113a7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x113a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x113a80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x113a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x113a84: 0x240401b0  addiu       $a0, $zero, 0x1B0
    ctx->pc = 0x113a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
    // 0x113a88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113a8c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x113A8Cu;
    SET_GPR_U32(ctx, 31, 0x113A94u);
    ctx->pc = 0x113A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A8Cu;
    // 0x113a90: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x113A8Cu, 0x113A94u)) {
        return;
    }
    ctx->pc = 0x113A94u;
label_113a94:
    // 0x113a94: 0xc044744  jal         func_111D10
    ctx->pc = 0x113A94u;
    SET_GPR_U32(ctx, 31, 0x113A9Cu);
    ctx->pc = 0x113A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A94u;
    // 0x113a98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111D10u, 0x113A94u, 0x113A9Cu)) {
        return;
    }
    ctx->pc = 0x113A9Cu;
label_113a9c:
    // 0x113a9c: 0xae02830c  sw          $v0, -0x7CF4($s0)
    ctx->pc = 0x113a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294935308), GPR_U32(ctx, 2));
    // 0x113aa0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x113aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x113AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113AA8u;
        // 0x113aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113AB0u;
    // 0x113ab0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x113ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x113ab4: 0x0  nop
    ctx->pc = 0x113ab4u;
    // NOP
    ctx->pc = 0x113ab8u;
}
