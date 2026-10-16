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

// Function: sub_0029FD98
// Address: 0x29fd98 - 0x29fdd0
void sub_0029FD98_0x29fd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FD98_0x29fd98");
#endif

    switch (ctx->pc) {
        case 0x29fdb0u: goto label_29fdb0;
        default: break;
    }

    ctx->pc = 0x29fd98u;

    // 0x29fd98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29fd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29fd9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29fd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29fda0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29fda0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fda4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29fda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29fda8: 0xc0a7e74  jal         func_29F9D0
    ctx->pc = 0x29FDA8u;
    SET_GPR_U32(ctx, 31, 0x29FDB0u);
    ctx->pc = 0x29FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FDA8u;
    // 0x29fdac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F9D0u, 0x29FDA8u, 0x29FDB0u)) {
        return;
    }
    ctx->pc = 0x29FDB0u;
label_29fdb0:
    // 0x29fdb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29fdb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fdb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fdb8: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x29fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x29fdbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29fdbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29fdc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29fdc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29fdc4: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x29fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x29fdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x29FDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FDC8u;
        // 0x29fdcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FDD0u;
}
