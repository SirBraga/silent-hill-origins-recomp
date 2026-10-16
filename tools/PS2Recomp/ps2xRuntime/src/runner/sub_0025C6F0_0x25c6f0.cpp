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

// Function: sub_0025C6F0
// Address: 0x25c6f0 - 0x25c730
void sub_0025C6F0_0x25c6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C6F0_0x25c6f0");
#endif

    switch (ctx->pc) {
        case 0x25c718u: goto label_25c718;
        default: break;
    }

    ctx->pc = 0x25c6f0u;

    // 0x25c6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c6f4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x25c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x25c6f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25c6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25c6fc: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x25c6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x25c700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25c700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25c708: 0x8c440fc8  lw          $a0, 0xFC8($v0)
    ctx->pc = 0x25c708u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x730FC8u));
    // 0x25c70c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25c70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c710: 0xc0979d6  jal         func_25E758
    ctx->pc = 0x25C710u;
    SET_GPR_U32(ctx, 31, 0x25C718u);
    ctx->pc = 0x25C714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C710u;
    // 0x25c714: 0x24a5b950  addiu       $a1, $a1, -0x46B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E758u, 0x25C710u, 0x25C718u)) {
        return;
    }
    ctx->pc = 0x25C718u;
label_25c718:
    // 0x25c718: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25c718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c71c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c720: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25c720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c724: 0x3e00008  jr          $ra
    ctx->pc = 0x25C724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C724u;
        // 0x25c728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C72Cu;
    // 0x25c72c: 0x0  nop
    ctx->pc = 0x25c72cu;
    // NOP
    ctx->pc = 0x25c730u;
}
