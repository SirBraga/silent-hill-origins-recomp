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

// Function: sub_001AA030
// Address: 0x1aa030 - 0x1aa058
void sub_001AA030_0x1aa030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA030_0x1aa030");
#endif

    switch (ctx->pc) {
        case 0x1aa04cu: goto label_1aa04c;
        default: break;
    }

    ctx->pc = 0x1aa030u;

    // 0x1aa030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa034: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x1aa034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x1aa038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa03c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1aa03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1aa040: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1aa040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1aa044: 0xc06a580  jal         func_1A9600
    ctx->pc = 0x1AA044u;
    SET_GPR_U32(ctx, 31, 0x1AA04Cu);
    ctx->pc = 0x1AA048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA044u;
    // 0x1aa048: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9600u, 0x1AA044u, 0x1AA04Cu)) {
        return;
    }
    ctx->pc = 0x1AA04Cu;
label_1aa04c:
    // 0x1aa04c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa050: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA050u;
        // 0x1aa054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA058u;
}
