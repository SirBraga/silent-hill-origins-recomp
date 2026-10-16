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

// Function: sub_0013DF78
// Address: 0x13df78 - 0x13dfc0
void sub_0013DF78_0x13df78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DF78_0x13df78");
#endif

    switch (ctx->pc) {
        case 0x13df94u: goto label_13df94;
        case 0x13dfa0u: goto label_13dfa0;
        default: break;
    }

    ctx->pc = 0x13df78u;

    // 0x13df78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13df78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13df7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13df7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13df80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13df80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13df84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13df84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13df88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13df88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13df8c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x13DF8Cu;
    SET_GPR_U32(ctx, 31, 0x13DF94u);
    ctx->pc = 0x13DF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DF8Cu;
    // 0x13df90: 0x2404011c  addiu       $a0, $zero, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x13DF8Cu, 0x13DF94u)) {
        return;
    }
    ctx->pc = 0x13DF94u;
label_13df94:
    // 0x13df94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13df94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13df98: 0xc04f7f0  jal         func_13DFC0
    ctx->pc = 0x13DF98u;
    SET_GPR_U32(ctx, 31, 0x13DFA0u);
    ctx->pc = 0x13DF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DF98u;
    // 0x13df9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DFC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13DFC0u, 0x13DF98u, 0x13DFA0u)) {
        return;
    }
    ctx->pc = 0x13DFA0u;
label_13dfa0:
    // 0x13dfa0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x13dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13dfa4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13dfa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13dfa8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x13dfa8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x13dfac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13dfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dfb0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13dfb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dfb4: 0x3e00008  jr          $ra
    ctx->pc = 0x13DFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DFB4u;
        // 0x13dfb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DFBCu;
    // 0x13dfbc: 0x0  nop
    ctx->pc = 0x13dfbcu;
    // NOP
    ctx->pc = 0x13dfc0u;
}
