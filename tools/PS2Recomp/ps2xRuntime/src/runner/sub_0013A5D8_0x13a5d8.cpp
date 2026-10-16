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

// Function: sub_0013A5D8
// Address: 0x13a5d8 - 0x13a608
void sub_0013A5D8_0x13a5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A5D8_0x13a5d8");
#endif

    switch (ctx->pc) {
        case 0x13a5f0u: goto label_13a5f0;
        default: break;
    }

    ctx->pc = 0x13a5d8u;

    // 0x13a5d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13a5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13a5dc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x13a5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13a5e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13a5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13a5e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13a5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13a5e8: 0xc097b18  jal         func_25EC60
    ctx->pc = 0x13A5E8u;
    SET_GPR_U32(ctx, 31, 0x13A5F0u);
    ctx->pc = 0x13A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A5E8u;
    // 0x13a5ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EC60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EC60u, 0x13A5E8u, 0x13A5F0u)) {
        return;
    }
    ctx->pc = 0x13A5F0u;
label_13a5f0:
    // 0x13a5f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13a5f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a5f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13a5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a5f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13a5f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x13A5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5FCu;
        // 0x13a600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A604u;
    // 0x13a604: 0x0  nop
    ctx->pc = 0x13a604u;
    // NOP
    ctx->pc = 0x13a608u;
}
