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

// Function: sub_00225990
// Address: 0x225990 - 0x2259e8
void sub_00225990_0x225990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225990_0x225990");
#endif

    switch (ctx->pc) {
        case 0x2259b4u: goto label_2259b4;
        default: break;
    }

    ctx->pc = 0x225990u;

    // 0x225990: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x225990u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225994: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225998: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x225998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x22599c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22599cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2259a0: 0x24840fd8  addiu       $a0, $a0, 0xFD8
    ctx->pc = 0x2259a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
    // 0x2259a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2259a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2259a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2259a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259ac: 0xc08959e  jal         func_225678
    ctx->pc = 0x2259ACu;
    SET_GPR_U32(ctx, 31, 0x2259B4u);
    ctx->pc = 0x2259B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2259ACu;
    // 0x2259b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225678u, 0x2259ACu, 0x2259B4u)) {
        return;
    }
    ctx->pc = 0x2259B4u;
label_2259b4:
    // 0x2259b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2259b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2259b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2259b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2259bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2259BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2259C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259BCu;
        // 0x2259c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2259BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2259C4u;
    // 0x2259c4: 0x0  nop
    ctx->pc = 0x2259c4u;
    // NOP
    // 0x2259c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2259c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2259cc: 0x0  nop
    ctx->pc = 0x2259ccu;
    // NOP
    // 0x2259d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2259d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2259d4: 0x0  nop
    ctx->pc = 0x2259d4u;
    // NOP
    // 0x2259d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2259d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2259dc: 0x0  nop
    ctx->pc = 0x2259dcu;
    // NOP
    // 0x2259e0: 0x8c620120  lw          $v0, 0x120($v1)
    ctx->pc = 0x2259e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x2259e4: 0x0  nop
    ctx->pc = 0x2259e4u;
    // NOP
    ctx->pc = 0x2259e8u;
}
