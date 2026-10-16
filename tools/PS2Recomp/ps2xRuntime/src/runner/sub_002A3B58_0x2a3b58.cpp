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

// Function: sub_002A3B58
// Address: 0x2a3b58 - 0x2a3b88
void sub_002A3B58_0x2a3b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3B58_0x2a3b58");
#endif

    switch (ctx->pc) {
        case 0x2a3b70u: goto label_2a3b70;
        default: break;
    }

    ctx->pc = 0x2a3b58u;

    // 0x2a3b58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a3b5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a3b60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a3b64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3b68: 0xc0c4c5c  jal         func_313170
    ctx->pc = 0x2A3B68u;
    SET_GPR_U32(ctx, 31, 0x2A3B70u);
    ctx->pc = 0x2A3B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3B68u;
    // 0x2a3b6c: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313170u, 0x2A3B68u, 0x2A3B70u)) {
        return;
    }
    ctx->pc = 0x2A3B70u;
label_2a3b70:
    // 0x2a3b70: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2a3b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2a3b74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3b78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B7Cu;
        // 0x2a3b80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3B84u;
    // 0x2a3b84: 0x0  nop
    ctx->pc = 0x2a3b84u;
    // NOP
    ctx->pc = 0x2a3b88u;
}
