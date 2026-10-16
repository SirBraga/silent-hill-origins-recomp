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

// Function: sub_002DD1B0
// Address: 0x2dd1b0 - 0x2dd1e8
void sub_002DD1B0_0x2dd1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD1B0_0x2dd1b0");
#endif

    switch (ctx->pc) {
        case 0x2dd1c8u: goto label_2dd1c8;
        default: break;
    }

    ctx->pc = 0x2dd1b0u;

    // 0x2dd1b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dd1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dd1b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dd1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dd1b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dd1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd1bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd1c0: 0xc0b8362  jal         func_2E0D88
    ctx->pc = 0x2DD1C0u;
    SET_GPR_U32(ctx, 31, 0x2DD1C8u);
    ctx->pc = 0x2DD1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD1C0u;
    // 0x2dd1c4: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0D88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0D88u, 0x2DD1C0u, 0x2DD1C8u)) {
        return;
    }
    ctx->pc = 0x2DD1C8u;
label_2dd1c8:
    // 0x2dd1c8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2dd1c8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2dd1cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd1d0: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2dd1d0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x2dd1d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dd1d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd1d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dd1d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD1DCu;
        // 0x2dd1e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD1E4u;
    // 0x2dd1e4: 0x0  nop
    ctx->pc = 0x2dd1e4u;
    // NOP
    ctx->pc = 0x2dd1e8u;
}
