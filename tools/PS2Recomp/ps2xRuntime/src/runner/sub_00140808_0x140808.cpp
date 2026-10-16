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

// Function: sub_00140808
// Address: 0x140808 - 0x140828
void sub_00140808_0x140808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140808_0x140808");
#endif

    switch (ctx->pc) {
        case 0x14081cu: goto label_14081c;
        default: break;
    }

    ctx->pc = 0x140808u;

    // 0x140808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x140808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14080c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14080cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140814: 0xc05015c  jal         func_140570
    ctx->pc = 0x140814u;
    SET_GPR_U32(ctx, 31, 0x14081Cu);
    ctx->pc = 0x140818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140814u;
    // 0x140818: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x140570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x140570u, 0x140814u, 0x14081Cu)) {
        return;
    }
    ctx->pc = 0x14081Cu;
label_14081c:
    // 0x14081c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14081cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140820: 0x3e00008  jr          $ra
    ctx->pc = 0x140820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140820u;
        // 0x140824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140828u;
}
