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

// Function: sub_0018C918
// Address: 0x18c918 - 0x18c950
void sub_0018C918_0x18c918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C918_0x18c918");
#endif

    switch (ctx->pc) {
        case 0x18c944u: goto label_18c944;
        default: break;
    }

    ctx->pc = 0x18c918u;

    // 0x18c918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18c918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18c91c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18c920: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x18c920u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x18c924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c928: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x18c928u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c92c: 0x244291e8  addiu       $v0, $v0, -0x6E18
    ctx->pc = 0x18c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939112));
    // 0x18c930: 0x24c69208  addiu       $a2, $a2, -0x6DF8
    ctx->pc = 0x18c930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939144));
    // 0x18c934: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x18c934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    // 0x18c938: 0xac660034  sw          $a2, 0x34($v1)
    ctx->pc = 0x18c938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 6));
    // 0x18c93c: 0xc04f084  jal         func_13C210
    ctx->pc = 0x18C93Cu;
    SET_GPR_U32(ctx, 31, 0x18C944u);
    ctx->pc = 0x18C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C93Cu;
    // 0x18c940: 0xac600040  sw          $zero, 0x40($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x18C93Cu, 0x18C944u)) {
        return;
    }
    ctx->pc = 0x18C944u;
label_18c944:
    // 0x18c944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c948: 0x3e00008  jr          $ra
    ctx->pc = 0x18C948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C948u;
        // 0x18c94c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C950u;
}
