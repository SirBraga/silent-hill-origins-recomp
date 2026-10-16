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

// Function: sub_0019DA00
// Address: 0x19da00 - 0x19da28
void sub_0019DA00_0x19da00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DA00_0x19da00");
#endif

    switch (ctx->pc) {
        case 0x19da18u: goto label_19da18;
        default: break;
    }

    ctx->pc = 0x19da00u;

    // 0x19da00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19da00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19da04: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x19da04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x19da08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19da08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19da0c: 0x24a5d988  addiu       $a1, $a1, -0x2678
    ctx->pc = 0x19da0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957448));
    // 0x19da10: 0xc08ab16  jal         func_22AC58
    ctx->pc = 0x19DA10u;
    SET_GPR_U32(ctx, 31, 0x19DA18u);
    ctx->pc = 0x19DA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DA10u;
    // 0x19da14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AC58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AC58u, 0x19DA10u, 0x19DA18u)) {
        return;
    }
    ctx->pc = 0x19DA18u;
label_19da18:
    // 0x19da18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19da18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19da1c: 0x3e00008  jr          $ra
    ctx->pc = 0x19DA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA1Cu;
        // 0x19da20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DA24u;
    // 0x19da24: 0x0  nop
    ctx->pc = 0x19da24u;
    // NOP
    ctx->pc = 0x19da28u;
}
