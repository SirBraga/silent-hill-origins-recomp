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

// Function: sub_00175E48
// Address: 0x175e48 - 0x175e68
void sub_00175E48_0x175e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175E48_0x175e48");
#endif

    switch (ctx->pc) {
        case 0x175e5cu: goto label_175e5c;
        default: break;
    }

    ctx->pc = 0x175e48u;

    // 0x175e48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175e4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x175e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175e54: 0xc05d6e4  jal         func_175B90
    ctx->pc = 0x175E54u;
    SET_GPR_U32(ctx, 31, 0x175E5Cu);
    ctx->pc = 0x175E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175E54u;
    // 0x175e58: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x175B90u, 0x175E54u, 0x175E5Cu)) {
        return;
    }
    ctx->pc = 0x175E5Cu;
label_175e5c:
    // 0x175e5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175e60: 0x3e00008  jr          $ra
    ctx->pc = 0x175E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E60u;
        // 0x175e64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175E68u;
}
