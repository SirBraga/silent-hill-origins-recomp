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

// Function: sub_001C4178
// Address: 0x1c4178 - 0x1c41a0
void sub_001C4178_0x1c4178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4178_0x1c4178");
#endif

    switch (ctx->pc) {
        case 0x1c4194u: goto label_1c4194;
        default: break;
    }

    ctx->pc = 0x1c4178u;

    // 0x1c4178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c417c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c417cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c4180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4184: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1c4184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4188: 0x2442e460  addiu       $v0, $v0, -0x1BA0
    ctx->pc = 0x1c4188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960224));
    // 0x1c418c: 0xc06d722  jal         func_1B5C88
    ctx->pc = 0x1C418Cu;
    SET_GPR_U32(ctx, 31, 0x1C4194u);
    ctx->pc = 0x1C4190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C418Cu;
    // 0x1c4190: 0xac620258  sw          $v0, 0x258($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 600), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5C88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5C88u, 0x1C418Cu, 0x1C4194u)) {
        return;
    }
    ctx->pc = 0x1C4194u;
label_1c4194:
    // 0x1c4194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4198: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4198u;
        // 0x1c419c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C41A0u;
}
