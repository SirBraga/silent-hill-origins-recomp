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

// Function: sub_001DE690
// Address: 0x1de690 - 0x1de6e0
void sub_001DE690_0x1de690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE690_0x1de690");
#endif

    switch (ctx->pc) {
        case 0x1de6b0u: goto label_1de6b0;
        default: break;
    }

    ctx->pc = 0x1de690u;

    // 0x1de690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de694: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1de694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de698: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1de698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1de69c: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1de69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1de6a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de6a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de6a8: 0xc09545a  jal         func_255168
    ctx->pc = 0x1DE6A8u;
    SET_GPR_U32(ctx, 31, 0x1DE6B0u);
    ctx->pc = 0x1DE6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6A8u;
    // 0x1de6ac: 0x2445e650  addiu       $a1, $v0, -0x19B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x1DE6A8u, 0x1DE6B0u)) {
        return;
    }
    ctx->pc = 0x1DE6B0u;
label_1de6b0:
    // 0x1de6b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1de6b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de6b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1de6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6BCu;
        // 0x1de6c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE6C4u;
    // 0x1de6c4: 0x0  nop
    ctx->pc = 0x1de6c4u;
    // NOP
    // 0x1de6c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1de6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1de6cc: 0x0  nop
    ctx->pc = 0x1de6ccu;
    // NOP
    // 0x1de6d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1de6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1de6d4: 0x0  nop
    ctx->pc = 0x1de6d4u;
    // NOP
    // 0x1de6d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1de6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1de6dc: 0x0  nop
    ctx->pc = 0x1de6dcu;
    // NOP
    ctx->pc = 0x1de6e0u;
}
