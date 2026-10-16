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

// Function: sub_001F4CF8
// Address: 0x1f4cf8 - 0x1f4d20
void sub_001F4CF8_0x1f4cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4CF8_0x1f4cf8");
#endif

    switch (ctx->pc) {
        case 0x1f4d10u: goto label_1f4d10;
        default: break;
    }

    ctx->pc = 0x1f4cf8u;

    // 0x1f4cf8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1f4cf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4cfc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4cfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f4d00: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1f4d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4d08: 0xc07d43a  jal         func_1F50E8
    ctx->pc = 0x1F4D08u;
    SET_GPR_U32(ctx, 31, 0x1F4D10u);
    ctx->pc = 0x1F4D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4D08u;
    // 0x1f4d0c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F50E8u, 0x1F4D08u, 0x1F4D10u)) {
        return;
    }
    ctx->pc = 0x1F4D10u;
label_1f4d10:
    // 0x1f4d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4d14: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D14u;
        // 0x1f4d18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4D1Cu;
    // 0x1f4d1c: 0x0  nop
    ctx->pc = 0x1f4d1cu;
    // NOP
    ctx->pc = 0x1f4d20u;
}
