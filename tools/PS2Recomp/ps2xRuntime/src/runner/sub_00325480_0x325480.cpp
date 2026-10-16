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

// Function: sub_00325480
// Address: 0x325480 - 0x3254b0
void sub_00325480_0x325480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325480_0x325480");
#endif

    switch (ctx->pc) {
        case 0x325490u: goto label_325490;
        case 0x32549cu: goto label_32549c;
        default: break;
    }

    ctx->pc = 0x325480u;

    // 0x325480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x325480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x325484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325488: 0xc0c950a  jal         func_325428
    ctx->pc = 0x325488u;
    SET_GPR_U32(ctx, 31, 0x325490u);
    ctx->pc = 0x325428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x325428u, 0x325488u, 0x325490u)) {
        return;
    }
    ctx->pc = 0x325490u;
label_325490:
    // 0x325490: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x325490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x325494: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x325494u;
    SET_GPR_U32(ctx, 31, 0x32549Cu);
    ctx->pc = 0x325498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325494u;
    // 0x325498: 0x8c4475e4  lw          $a0, 0x75E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x325494u, 0x32549Cu)) {
        return;
    }
    ctx->pc = 0x32549Cu;
label_32549c:
    // 0x32549c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32549cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3254a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3254a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3254a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3254A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3254A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3254A4u;
        // 0x3254a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3254A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3254ACu;
    // 0x3254ac: 0x0  nop
    ctx->pc = 0x3254acu;
    // NOP
    ctx->pc = 0x3254b0u;
}
