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

// Function: sub_0017BBC8
// Address: 0x17bbc8 - 0x17bbe8
void sub_0017BBC8_0x17bbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BBC8_0x17bbc8");
#endif

    switch (ctx->pc) {
        case 0x17bbdcu: goto label_17bbdc;
        default: break;
    }

    ctx->pc = 0x17bbc8u;

    // 0x17bbc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17bbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bbcc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17bbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bbd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bbd4: 0xc05eb82  jal         func_17AE08
    ctx->pc = 0x17BBD4u;
    SET_GPR_U32(ctx, 31, 0x17BBDCu);
    ctx->pc = 0x17BBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BBD4u;
    // 0x17bbd8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AE08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17AE08u, 0x17BBD4u, 0x17BBDCu)) {
        return;
    }
    ctx->pc = 0x17BBDCu;
label_17bbdc:
    // 0x17bbdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x17BBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBE0u;
        // 0x17bbe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BBE8u;
}
