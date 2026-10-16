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

// Function: sub_002267D8
// Address: 0x2267d8 - 0x226810
void sub_002267D8_0x2267d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002267D8_0x2267d8");
#endif

    switch (ctx->pc) {
        case 0x2267f0u: goto label_2267f0;
        case 0x2267f8u: goto label_2267f8;
        default: break;
    }

    ctx->pc = 0x2267d8u;

    // 0x2267d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2267d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2267dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2267dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2267e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2267e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2267e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2267e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2267e8: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x2267E8u;
    SET_GPR_U32(ctx, 31, 0x2267F0u);
    ctx->pc = 0x2267ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2267E8u;
    // 0x2267ec: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x2267E8u, 0x2267F0u)) {
        return;
    }
    ctx->pc = 0x2267F0u;
label_2267f0:
    // 0x2267f0: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x2267F0u;
    SET_GPR_U32(ctx, 31, 0x2267F8u);
    ctx->pc = 0x2267F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2267F0u;
    // 0x2267f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x2267F0u, 0x2267F8u)) {
        return;
    }
    ctx->pc = 0x2267F8u;
label_2267f8:
    // 0x2267f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2267f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2267fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2267fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226800: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x226800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226804: 0x3e00008  jr          $ra
    ctx->pc = 0x226804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226804u;
        // 0x226808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22680Cu;
    // 0x22680c: 0x0  nop
    ctx->pc = 0x22680cu;
    // NOP
    ctx->pc = 0x226810u;
}
