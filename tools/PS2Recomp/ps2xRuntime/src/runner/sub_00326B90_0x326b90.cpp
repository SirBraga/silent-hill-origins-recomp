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

// Function: sub_00326B90
// Address: 0x326b90 - 0x326bd8
void sub_00326B90_0x326b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326B90_0x326b90");
#endif

    switch (ctx->pc) {
        case 0x326ba4u: goto label_326ba4;
        default: break;
    }

    ctx->pc = 0x326b90u;

    // 0x326b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x326b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x326b94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x326b94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326b98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x326b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x326b9c: 0xc0c9a5a  jal         func_326968
    ctx->pc = 0x326B9Cu;
    SET_GPR_U32(ctx, 31, 0x326BA4u);
    ctx->pc = 0x326BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326B9Cu;
    // 0x326ba0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326968u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326968u, 0x326B9Cu, 0x326BA4u)) {
        return;
    }
    ctx->pc = 0x326BA4u;
label_326ba4:
    // 0x326ba4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x326ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x326BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BA8u;
        // 0x326bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326BB0u;
    // 0x326bb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x326bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x326bb4: 0x0  nop
    ctx->pc = 0x326bb4u;
    // NOP
    // 0x326bb8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x326bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x326bbc: 0x0  nop
    ctx->pc = 0x326bbcu;
    // NOP
    // 0x326bc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x326bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x326bc4: 0x0  nop
    ctx->pc = 0x326bc4u;
    // NOP
    // 0x326bc8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x326bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x326bcc: 0x0  nop
    ctx->pc = 0x326bccu;
    // NOP
    // 0x326bd0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x326bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x326bd4: 0x0  nop
    ctx->pc = 0x326bd4u;
    // NOP
    ctx->pc = 0x326bd8u;
}
