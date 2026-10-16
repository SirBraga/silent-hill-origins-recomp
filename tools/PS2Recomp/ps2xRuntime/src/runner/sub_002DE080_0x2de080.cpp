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

// Function: sub_002DE080
// Address: 0x2de080 - 0x2de0c0
void sub_002DE080_0x2de080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE080_0x2de080");
#endif

    switch (ctx->pc) {
        case 0x2de0acu: goto label_2de0ac;
        default: break;
    }

    ctx->pc = 0x2de080u;

    // 0x2de080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2de080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2de084: 0x3c06002e  lui         $a2, 0x2E
    ctx->pc = 0x2de084u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46 << 16));
    // 0x2de088: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2de088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2de08c: 0x24c6e3f0  addiu       $a2, $a2, -0x1C10
    ctx->pc = 0x2de08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960112));
    // 0x2de090: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2de090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2de094: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2de094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de098: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2de098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2de09c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2de09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de0a0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2de0a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de0a4: 0xc0b9006  jal         func_2E4018
    ctx->pc = 0x2DE0A4u;
    SET_GPR_U32(ctx, 31, 0x2DE0ACu);
    ctx->pc = 0x2DE0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE0A4u;
    // 0x2de0a8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4018u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E4018u, 0x2DE0A4u, 0x2DE0ACu)) {
        return;
    }
    ctx->pc = 0x2DE0ACu;
label_2de0ac:
    // 0x2de0ac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2de0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2de0b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2de0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0B4u;
        // 0x2de0b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE0BCu;
    // 0x2de0bc: 0x0  nop
    ctx->pc = 0x2de0bcu;
    // NOP
    ctx->pc = 0x2de0c0u;
}
