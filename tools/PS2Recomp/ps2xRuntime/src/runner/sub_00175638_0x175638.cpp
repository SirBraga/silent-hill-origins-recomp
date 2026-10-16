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

// Function: sub_00175638
// Address: 0x175638 - 0x175658
void sub_00175638_0x175638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175638_0x175638");
#endif

    switch (ctx->pc) {
        case 0x17564cu: goto label_17564c;
        default: break;
    }

    ctx->pc = 0x175638u;

    // 0x175638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17563c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17563cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175644: 0xc05d4de  jal         func_175378
    ctx->pc = 0x175644u;
    SET_GPR_U32(ctx, 31, 0x17564Cu);
    ctx->pc = 0x175648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175644u;
    // 0x175648: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175378u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x175378u, 0x175644u, 0x17564Cu)) {
        return;
    }
    ctx->pc = 0x17564Cu;
label_17564c:
    // 0x17564c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17564cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175650: 0x3e00008  jr          $ra
    ctx->pc = 0x175650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175650u;
        // 0x175654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175658u;
}
