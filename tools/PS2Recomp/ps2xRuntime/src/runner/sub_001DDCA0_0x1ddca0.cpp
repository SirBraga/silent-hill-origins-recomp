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

// Function: sub_001DDCA0
// Address: 0x1ddca0 - 0x1ddcd8
void sub_001DDCA0_0x1ddca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDCA0_0x1ddca0");
#endif

    switch (ctx->pc) {
        case 0x1ddcbcu: goto label_1ddcbc;
        default: break;
    }

    ctx->pc = 0x1ddca0u;

    // 0x1ddca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ddca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ddca4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ddca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ddca8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ddca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddcac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ddcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ddcb0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1ddcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1ddcb4: 0xc0bba16  jal         func_2EE858
    ctx->pc = 0x1DDCB4u;
    SET_GPR_U32(ctx, 31, 0x1DDCBCu);
    ctx->pc = 0x1DDCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDCB4u;
    // 0x1ddcb8: 0x2484e690  addiu       $a0, $a0, -0x1970 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE858u, 0x1DDCB4u, 0x1DDCBCu)) {
        return;
    }
    ctx->pc = 0x1DDCBCu;
label_1ddcbc:
    // 0x1ddcbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ddcbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddcc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ddcc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddcc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ddcc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddcc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDCC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCC8u;
        // 0x1ddccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDCC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDCD0u;
    // 0x1ddcd0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1ddcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ddcd4: 0x0  nop
    ctx->pc = 0x1ddcd4u;
    // NOP
    ctx->pc = 0x1ddcd8u;
}
