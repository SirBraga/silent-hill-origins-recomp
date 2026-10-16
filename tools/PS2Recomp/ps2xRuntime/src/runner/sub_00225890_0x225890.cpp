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

// Function: sub_00225890
// Address: 0x225890 - 0x2258c8
void sub_00225890_0x225890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225890_0x225890");
#endif

    switch (ctx->pc) {
        case 0x2258b4u: goto label_2258b4;
        default: break;
    }

    ctx->pc = 0x225890u;

    // 0x225890: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x225890u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225894: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225898: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x225898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x22589c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22589cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2258a0: 0x24840fd8  addiu       $a0, $a0, 0xFD8
    ctx->pc = 0x2258a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
    // 0x2258a4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2258a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2258a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2258a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2258ac: 0xc08959e  jal         func_225678
    ctx->pc = 0x2258ACu;
    SET_GPR_U32(ctx, 31, 0x2258B4u);
    ctx->pc = 0x2258B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2258ACu;
    // 0x2258b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225678u, 0x2258ACu, 0x2258B4u)) {
        return;
    }
    ctx->pc = 0x2258B4u;
label_2258b4:
    // 0x2258b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2258b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2258b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2258b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2258bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2258BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2258C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258BCu;
        // 0x2258c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2258BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2258C4u;
    // 0x2258c4: 0x0  nop
    ctx->pc = 0x2258c4u;
    // NOP
    ctx->pc = 0x2258c8u;
}
