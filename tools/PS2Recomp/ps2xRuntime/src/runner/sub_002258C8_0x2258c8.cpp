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

// Function: sub_002258C8
// Address: 0x2258c8 - 0x225908
void sub_002258C8_0x2258c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002258C8_0x2258c8");
#endif

    switch (ctx->pc) {
        case 0x2258ecu: goto label_2258ec;
        default: break;
    }

    ctx->pc = 0x2258c8u;

    // 0x2258c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2258c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2258cc: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x2258ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x2258d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2258d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2258d4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2258d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2258d8: 0x24840fd8  addiu       $a0, $a0, 0xFD8
    ctx->pc = 0x2258d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
    // 0x2258dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2258dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2258e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2258e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2258e4: 0xc08959e  jal         func_225678
    ctx->pc = 0x2258E4u;
    SET_GPR_U32(ctx, 31, 0x2258ECu);
    ctx->pc = 0x2258E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2258E4u;
    // 0x2258e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225678u, 0x2258E4u, 0x2258ECu)) {
        return;
    }
    ctx->pc = 0x2258ECu;
label_2258ec:
    // 0x2258ec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2258ECu;
    {
        const bool branch_taken_0x2258ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2258F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258ECu;
        // 0x2258f0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2258ec) {
            ctx->pc = 0x2258F8u;
            goto label_2258f8;
        }
    }
    ctx->pc = 0x2258F4u;
    // 0x2258f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2258f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2258f8:
    // 0x2258f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2258f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2258fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2258FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258FCu;
        // 0x225900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2258FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225904u;
    // 0x225904: 0x0  nop
    ctx->pc = 0x225904u;
    // NOP
    ctx->pc = 0x225908u;
}
