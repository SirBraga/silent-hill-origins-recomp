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

// Function: sub_001FF8D8
// Address: 0x1ff8d8 - 0x1ff908
void sub_001FF8D8_0x1ff8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF8D8_0x1ff8d8");
#endif

    switch (ctx->pc) {
        case 0x1ff8f0u: goto label_1ff8f0;
        default: break;
    }

    ctx->pc = 0x1ff8d8u;

    // 0x1ff8d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ff8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ff8dc: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1ff8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1ff8e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff8e4: 0x24040712  addiu       $a0, $zero, 0x712
    ctx->pc = 0x1ff8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1810));
    // 0x1ff8e8: 0xc080052  jal         func_200148
    ctx->pc = 0x1FF8E8u;
    SET_GPR_U32(ctx, 31, 0x1FF8F0u);
    ctx->pc = 0x1FF8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF8E8u;
    // 0x1ff8ec: 0x24a5f820  addiu       $a1, $a1, -0x7E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200148u, 0x1FF8E8u, 0x1FF8F0u)) {
        return;
    }
    ctx->pc = 0x1FF8F0u;
label_1ff8f0:
    // 0x1ff8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8F4u;
        // 0x1ff8f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF8FCu;
    // 0x1ff8fc: 0x0  nop
    ctx->pc = 0x1ff8fcu;
    // NOP
    // 0x1ff900: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ff900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ff904: 0x0  nop
    ctx->pc = 0x1ff904u;
    // NOP
    ctx->pc = 0x1ff908u;
}
