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

// Function: sub_002267A0
// Address: 0x2267a0 - 0x2267d8
void sub_002267A0_0x2267a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002267A0_0x2267a0");
#endif

    switch (ctx->pc) {
        case 0x2267b8u: goto label_2267b8;
        case 0x2267c0u: goto label_2267c0;
        default: break;
    }

    ctx->pc = 0x2267a0u;

    // 0x2267a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2267a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2267a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2267a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2267a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2267a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2267ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2267acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2267b0: 0xc092fa4  jal         func_24BE90
    ctx->pc = 0x2267B0u;
    SET_GPR_U32(ctx, 31, 0x2267B8u);
    ctx->pc = 0x2267B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2267B0u;
    // 0x2267b4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x2267B0u, 0x2267B8u)) {
        return;
    }
    ctx->pc = 0x2267B8u;
label_2267b8:
    // 0x2267b8: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x2267B8u;
    SET_GPR_U32(ctx, 31, 0x2267C0u);
    ctx->pc = 0x2267BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2267B8u;
    // 0x2267bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x2267B8u, 0x2267C0u)) {
        return;
    }
    ctx->pc = 0x2267C0u;
label_2267c0:
    // 0x2267c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2267c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2267c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2267c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2267c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2267c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2267cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2267CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2267D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2267CCu;
        // 0x2267d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2267CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2267D4u;
    // 0x2267d4: 0x0  nop
    ctx->pc = 0x2267d4u;
    // NOP
    ctx->pc = 0x2267d8u;
}
