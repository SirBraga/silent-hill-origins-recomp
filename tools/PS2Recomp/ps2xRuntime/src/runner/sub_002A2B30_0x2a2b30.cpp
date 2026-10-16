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

// Function: sub_002A2B30
// Address: 0x2a2b30 - 0x2a2b70
void sub_002A2B30_0x2a2b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2B30_0x2a2b30");
#endif

    switch (ctx->pc) {
        case 0x2a2b58u: goto label_2a2b58;
        default: break;
    }

    ctx->pc = 0x2a2b30u;

    // 0x2a2b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a2b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a2b34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a2b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a2b38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a2b3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a2b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a2b40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a2b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2b44: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x2a2b44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x2a2b48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a2b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a2b4c: 0x3442240c  ori         $v0, $v0, 0x240C
    ctx->pc = 0x2a2b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9228);
    // 0x2a2b50: 0xc0a7188  jal         func_29C620
    ctx->pc = 0x2A2B50u;
    SET_GPR_U32(ctx, 31, 0x2A2B58u);
    ctx->pc = 0x2A2B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2B50u;
    // 0x2a2b54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C620u, 0x2A2B50u, 0x2A2B58u)) {
        return;
    }
    ctx->pc = 0x2A2B58u;
label_2a2b58:
    // 0x2a2b58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a2b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a2b5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a2b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2b60: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2a2b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2a2b64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a2b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2b68: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B68u;
        // 0x2a2b6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2B70u;
}
