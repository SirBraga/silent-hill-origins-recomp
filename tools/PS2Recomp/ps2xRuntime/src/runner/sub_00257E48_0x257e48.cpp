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

// Function: sub_00257E48
// Address: 0x257e48 - 0x257e88
void sub_00257E48_0x257e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257E48_0x257e48");
#endif

    switch (ctx->pc) {
        case 0x257e74u: goto label_257e74;
        default: break;
    }

    ctx->pc = 0x257e48u;

    // 0x257e48: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x257e48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e4c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x257e4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x257e50: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x257e50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e54: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x257e54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e58: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x257e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e5c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x257e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x257e60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257e64: 0x24441240  addiu       $a0, $v0, 0x1240
    ctx->pc = 0x257e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x257e68: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x257e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e6c: 0xc0936dc  jal         func_24DB70
    ctx->pc = 0x257E6Cu;
    SET_GPR_U32(ctx, 31, 0x257E74u);
    ctx->pc = 0x257E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E6Cu;
    // 0x257e70: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DB70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DB70u, 0x257E6Cu, 0x257E74u)) {
        return;
    }
    ctx->pc = 0x257E74u;
label_257e74:
    // 0x257e74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257e78: 0x3e00008  jr          $ra
    ctx->pc = 0x257E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E78u;
        // 0x257e7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257E80u;
    // 0x257e80: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x257e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x257e84: 0x0  nop
    ctx->pc = 0x257e84u;
    // NOP
    ctx->pc = 0x257e88u;
}
