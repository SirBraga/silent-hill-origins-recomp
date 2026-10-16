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

// Function: sub_0016B498
// Address: 0x16b498 - 0x16b4b8
void sub_0016B498_0x16b498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B498_0x16b498");
#endif

    switch (ctx->pc) {
        case 0x16b4acu: goto label_16b4ac;
        default: break;
    }

    ctx->pc = 0x16b498u;

    // 0x16b498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b49c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b4a4: 0xc05aca6  jal         func_16B298
    ctx->pc = 0x16B4A4u;
    SET_GPR_U32(ctx, 31, 0x16B4ACu);
    ctx->pc = 0x16B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B4A4u;
    // 0x16b4a8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16B298u, 0x16B4A4u, 0x16B4ACu)) {
        return;
    }
    ctx->pc = 0x16B4ACu;
label_16b4ac:
    // 0x16b4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x16B4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4B0u;
        // 0x16b4b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B4B8u;
}
