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

// Function: sub_0011C0E8
// Address: 0x11c0e8 - 0x11c118
void sub_0011C0E8_0x11c0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C0E8_0x11c0e8");
#endif

    switch (ctx->pc) {
        case 0x11c10cu: goto label_11c10c;
        default: break;
    }

    ctx->pc = 0x11c0e8u;

    // 0x11c0e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11c0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11c0ec: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x11c0f0: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11c0f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c0f8: 0x2442b170  addiu       $v0, $v0, -0x4E90
    ctx->pc = 0x11c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947184));
    // 0x11c0fc: 0x2463b190  addiu       $v1, $v1, -0x4E70
    ctx->pc = 0x11c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947216));
    // 0x11c100: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x11c100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x11c104: 0xc04465e  jal         func_111978
    ctx->pc = 0x11C104u;
    SET_GPR_U32(ctx, 31, 0x11C10Cu);
    ctx->pc = 0x11C108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C104u;
    // 0x11c108: 0xac830034  sw          $v1, 0x34($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111978u, 0x11C104u, 0x11C10Cu)) {
        return;
    }
    ctx->pc = 0x11C10Cu;
label_11c10c:
    // 0x11c10c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c110: 0x3e00008  jr          $ra
    ctx->pc = 0x11C110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C110u;
        // 0x11c114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C118u;
}
