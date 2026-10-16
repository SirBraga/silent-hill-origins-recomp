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

// Function: sub_001EE0A0
// Address: 0x1ee0a0 - 0x1ee0d0
void sub_001EE0A0_0x1ee0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE0A0_0x1ee0a0");
#endif

    switch (ctx->pc) {
        case 0x1ee0bcu: goto label_1ee0bc;
        default: break;
    }

    ctx->pc = 0x1ee0a0u;

    // 0x1ee0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ee0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ee0a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ee0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ee0a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ee0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee0ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ee0b0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1ee0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1ee0b4: 0xc0bba16  jal         func_2EE858
    ctx->pc = 0x1EE0B4u;
    SET_GPR_U32(ctx, 31, 0x1EE0BCu);
    ctx->pc = 0x1EE0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE0B4u;
    // 0x1ee0b8: 0x2484e7d0  addiu       $a0, $a0, -0x1830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE858u, 0x1EE0B4u, 0x1EE0BCu)) {
        return;
    }
    ctx->pc = 0x1EE0BCu;
label_1ee0bc:
    // 0x1ee0bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ee0bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee0c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee0c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ee0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0C8u;
        // 0x1ee0cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE0D0u;
}
