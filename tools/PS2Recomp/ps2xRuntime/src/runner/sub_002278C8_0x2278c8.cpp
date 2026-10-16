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

// Function: sub_002278C8
// Address: 0x2278c8 - 0x2278f8
void sub_002278C8_0x2278c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002278C8_0x2278c8");
#endif

    switch (ctx->pc) {
        case 0x2278e8u: goto label_2278e8;
        default: break;
    }

    ctx->pc = 0x2278c8u;

    // 0x2278c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2278c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2278cc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x2278ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x2278d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2278d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2278d4: 0x24c677e8  addiu       $a2, $a2, 0x77E8
    ctx->pc = 0x2278d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30696));
    // 0x2278d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2278d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2278dc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2278dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2278e0: 0xc089d2c  jal         func_2274B0
    ctx->pc = 0x2278E0u;
    SET_GPR_U32(ctx, 31, 0x2278E8u);
    ctx->pc = 0x2278E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2278E0u;
    // 0x2278e4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2274B0u, 0x2278E0u, 0x2278E8u)) {
        return;
    }
    ctx->pc = 0x2278E8u;
label_2278e8:
    // 0x2278e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2278e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2278ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2278ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2278f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2278F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2278F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278F0u;
        // 0x2278f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2278F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2278F8u;
}
