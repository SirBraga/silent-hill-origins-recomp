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

// Function: sub_002AE098
// Address: 0x2ae098 - 0x2ae0d0
void sub_002AE098_0x2ae098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE098_0x2ae098");
#endif

    switch (ctx->pc) {
        case 0x2ae0acu: goto label_2ae0ac;
        case 0x2ae0b8u: goto label_2ae0b8;
        default: break;
    }

    ctx->pc = 0x2ae098u;

    // 0x2ae098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ae098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ae09c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ae09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ae0a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ae0a4: 0xc0ab834  jal         func_2AE0D0
    ctx->pc = 0x2AE0A4u;
    SET_GPR_U32(ctx, 31, 0x2AE0ACu);
    ctx->pc = 0x2AE0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE0A4u;
    // 0x2ae0a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE0D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE0D0u, 0x2AE0A4u, 0x2AE0ACu)) {
        return;
    }
    ctx->pc = 0x2AE0ACu;
label_2ae0ac:
    // 0x2ae0ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ae0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae0b0: 0xc0ab54e  jal         func_2AD538
    ctx->pc = 0x2AE0B0u;
    SET_GPR_U32(ctx, 31, 0x2AE0B8u);
    ctx->pc = 0x2AE0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE0B0u;
    // 0x2ae0b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD538u, 0x2AE0B0u, 0x2AE0B8u)) {
        return;
    }
    ctx->pc = 0x2AE0B8u;
label_2ae0b8:
    // 0x2ae0b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ae0b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae0bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae0c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ae0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0C4u;
        // 0x2ae0c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE0CCu;
    // 0x2ae0cc: 0x0  nop
    ctx->pc = 0x2ae0ccu;
    // NOP
    ctx->pc = 0x2ae0d0u;
}
