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

// Function: sub_001A7FB8
// Address: 0x1a7fb8 - 0x1a7ff0
void sub_001A7FB8_0x1a7fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7FB8_0x1a7fb8");
#endif

    switch (ctx->pc) {
        case 0x1a7fd0u: goto label_1a7fd0;
        default: break;
    }

    ctx->pc = 0x1a7fb8u;

    // 0x1a7fb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7fbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a7fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7fc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a7fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a7fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7fc8: 0xc06a750  jal         func_1A9D40
    ctx->pc = 0x1A7FC8u;
    SET_GPR_U32(ctx, 31, 0x1A7FD0u);
    ctx->pc = 0x1A7FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7FC8u;
    // 0x1a7fcc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9D40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9D40u, 0x1A7FC8u, 0x1A7FD0u)) {
        return;
    }
    ctx->pc = 0x1A7FD0u;
label_1a7fd0:
    // 0x1a7fd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a7fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7fd4: 0xa600002e  sh          $zero, 0x2E($s0)
    ctx->pc = 0x1a7fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a7fd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a7fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FE0u;
        // 0x1a7fe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7FE8u;
    // 0x1a7fe8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a7fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a7fec: 0x0  nop
    ctx->pc = 0x1a7fecu;
    // NOP
    ctx->pc = 0x1a7ff0u;
}
