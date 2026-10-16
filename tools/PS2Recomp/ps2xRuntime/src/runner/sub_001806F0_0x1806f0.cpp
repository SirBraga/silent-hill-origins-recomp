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

// Function: sub_001806F0
// Address: 0x1806f0 - 0x180720
void sub_001806F0_0x1806f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001806F0_0x1806f0");
#endif

    switch (ctx->pc) {
        case 0x180714u: goto label_180714;
        default: break;
    }

    ctx->pc = 0x1806f0u;

    // 0x1806f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1806f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1806f4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1806f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1806f8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x1806f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x1806fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1806fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180700: 0x24845080  addiu       $a0, $a0, 0x5080
    ctx->pc = 0x180700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20608));
    // 0x180704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x180704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180708: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x180708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x18070c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x18070Cu;
    SET_GPR_U32(ctx, 31, 0x180714u);
    ctx->pc = 0x180710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18070Cu;
    // 0x180710: 0xac4089f0  sw          $zero, -0x7610($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937072), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x18070Cu, 0x180714u)) {
        return;
    }
    ctx->pc = 0x180714u;
label_180714:
    // 0x180714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180718: 0x3e00008  jr          $ra
    ctx->pc = 0x180718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180718u;
        // 0x18071c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180720u;
}
