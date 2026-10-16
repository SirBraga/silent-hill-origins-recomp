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

// Function: sub_00169F28
// Address: 0x169f28 - 0x169f60
void sub_00169F28_0x169f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169F28_0x169f28");
#endif

    switch (ctx->pc) {
        case 0x169f50u: goto label_169f50;
        default: break;
    }

    ctx->pc = 0x169f28u;

    // 0x169f28: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x169f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169f2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169f30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169f34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169f38: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x169f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x169f3c: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x169f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
    // 0x169f40: 0x248443d8  addiu       $a0, $a0, 0x43D8
    ctx->pc = 0x169f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17368));
    // 0x169f44: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x169f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x169f48: 0xc05a818  jal         func_16A060
    ctx->pc = 0x169F48u;
    SET_GPR_U32(ctx, 31, 0x169F50u);
    ctx->pc = 0x169F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F48u;
    // 0x169f4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16A060u, 0x169F48u, 0x169F50u)) {
        return;
    }
    ctx->pc = 0x169F50u;
label_169f50:
    // 0x169f50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169f54: 0x3e00008  jr          $ra
    ctx->pc = 0x169F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F54u;
        // 0x169f58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169F5Cu;
    // 0x169f5c: 0x0  nop
    ctx->pc = 0x169f5cu;
    // NOP
    ctx->pc = 0x169f60u;
}
