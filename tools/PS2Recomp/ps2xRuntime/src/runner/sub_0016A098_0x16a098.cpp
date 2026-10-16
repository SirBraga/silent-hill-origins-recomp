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

// Function: sub_0016A098
// Address: 0x16a098 - 0x16a0b8
void sub_0016A098_0x16a098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A098_0x16a098");
#endif

    switch (ctx->pc) {
        case 0x16a0acu: goto label_16a0ac;
        default: break;
    }

    ctx->pc = 0x16a098u;

    // 0x16a098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a09c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16a09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a0a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a0a4: 0xc05a72c  jal         func_169CB0
    ctx->pc = 0x16A0A4u;
    SET_GPR_U32(ctx, 31, 0x16A0ACu);
    ctx->pc = 0x16A0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A0A4u;
    // 0x16a0a8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x169CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x169CB0u, 0x16A0A4u, 0x16A0ACu)) {
        return;
    }
    ctx->pc = 0x16A0ACu;
label_16a0ac:
    // 0x16a0ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x16A0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0B0u;
        // 0x16a0b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A0B8u;
}
