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

// Function: sub_002F70E8
// Address: 0x2f70e8 - 0x2f7118
void sub_002F70E8_0x2f70e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F70E8_0x2f70e8");
#endif

    switch (ctx->pc) {
        case 0x2f7100u: goto label_2f7100;
        default: break;
    }

    ctx->pc = 0x2f70e8u;

    // 0x2f70e8: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f70ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f70ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f70f0: 0x8c4414c0  lw          $a0, 0x14C0($v0)
    ctx->pc = 0x2f70f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7214C0u));
    // 0x2f70f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f70f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f70f8: 0xc0c84d4  jal         func_321350
    ctx->pc = 0x2F70F8u;
    SET_GPR_U32(ctx, 31, 0x2F7100u);
    ctx->pc = 0x321350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321350u, 0x2F70F8u, 0x2F7100u)) {
        return;
    }
    ctx->pc = 0x2F7100u;
label_2f7100:
    // 0x2f7100: 0xf  sync
    ctx->pc = 0x2f7100u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2f7104: 0x42000038  ei
    ctx->pc = 0x2f7104u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2f7108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f7108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f710c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F710Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F710Cu;
        // 0x2f7110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F710Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7114u;
    // 0x2f7114: 0x0  nop
    ctx->pc = 0x2f7114u;
    // NOP
    ctx->pc = 0x2f7118u;
}
