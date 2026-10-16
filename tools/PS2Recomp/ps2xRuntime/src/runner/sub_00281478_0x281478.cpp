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

// Function: sub_00281478
// Address: 0x281478 - 0x2814a8
void sub_00281478_0x281478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281478_0x281478");
#endif

    switch (ctx->pc) {
        case 0x28149cu: goto label_28149c;
        default: break;
    }

    ctx->pc = 0x281478u;

    // 0x281478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28147c: 0x8f82881c  lw          $v0, -0x77E4($gp)
    ctx->pc = 0x28147cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x281480: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x281484: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x281484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281488: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x281488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x28148c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28148cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x281490: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x281490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x281494: 0xc092782  jal         func_249E08
    ctx->pc = 0x281494u;
    SET_GPR_U32(ctx, 31, 0x28149Cu);
    ctx->pc = 0x281498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281494u;
    // 0x281498: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x281494u, 0x28149Cu)) {
        return;
    }
    ctx->pc = 0x28149Cu;
label_28149c:
    // 0x28149c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28149cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2814a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2814A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2814A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2814A0u;
        // 0x2814a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2814A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2814A8u;
}
