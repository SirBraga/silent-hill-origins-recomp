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

// Function: sub_00174AF0
// Address: 0x174af0 - 0x174b10
void sub_00174AF0_0x174af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174AF0_0x174af0");
#endif

    switch (ctx->pc) {
        case 0x174b04u: goto label_174b04;
        default: break;
    }

    ctx->pc = 0x174af0u;

    // 0x174af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174af4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x174af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174afc: 0xc05d168  jal         func_1745A0
    ctx->pc = 0x174AFCu;
    SET_GPR_U32(ctx, 31, 0x174B04u);
    ctx->pc = 0x174B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174AFCu;
    // 0x174b00: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1745A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1745A0u, 0x174AFCu, 0x174B04u)) {
        return;
    }
    ctx->pc = 0x174B04u;
label_174b04:
    // 0x174b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174b08: 0x3e00008  jr          $ra
    ctx->pc = 0x174B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B08u;
        // 0x174b0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174B10u;
}
