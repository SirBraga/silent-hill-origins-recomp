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

// Function: sub_001F4C08
// Address: 0x1f4c08 - 0x1f4c30
void sub_001F4C08_0x1f4c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4C08_0x1f4c08");
#endif

    switch (ctx->pc) {
        case 0x1f4c24u: goto label_1f4c24;
        default: break;
    }

    ctx->pc = 0x1f4c08u;

    // 0x1f4c08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f4c0c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1f4c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f4c10: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1f4c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1f4c14: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f4c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f4c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f4c1c: 0xc07d420  jal         func_1F5080
    ctx->pc = 0x1F4C1Cu;
    SET_GPR_U32(ctx, 31, 0x1F4C24u);
    ctx->pc = 0x1F4C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4C1Cu;
    // 0x1f4c20: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5080u, 0x1F4C1Cu, 0x1F4C24u)) {
        return;
    }
    ctx->pc = 0x1F4C24u;
label_1f4c24:
    // 0x1f4c24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f4c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4c28: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C28u;
        // 0x1f4c2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4C30u;
}
