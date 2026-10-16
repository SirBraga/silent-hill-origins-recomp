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

// Function: sub_00172DD8
// Address: 0x172dd8 - 0x172e08
void sub_00172DD8_0x172dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172DD8_0x172dd8");
#endif

    switch (ctx->pc) {
        case 0x172decu: goto label_172dec;
        case 0x172df4u: goto label_172df4;
        default: break;
    }

    ctx->pc = 0x172dd8u;

    // 0x172dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x172ddc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x172ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x172de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172de4: 0xc05c9fc  jal         func_1727F0
    ctx->pc = 0x172DE4u;
    SET_GPR_U32(ctx, 31, 0x172DECu);
    ctx->pc = 0x172DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172DE4u;
    // 0x172de8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1727F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1727F0u, 0x172DE4u, 0x172DECu)) {
        return;
    }
    ctx->pc = 0x172DECu;
label_172dec:
    // 0x172dec: 0xc05d87c  jal         func_1761F0
    ctx->pc = 0x172DECu;
    SET_GPR_U32(ctx, 31, 0x172DF4u);
    ctx->pc = 0x172DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172DECu;
    // 0x172df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1761F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1761F0u, 0x172DECu, 0x172DF4u)) {
        return;
    }
    ctx->pc = 0x172DF4u;
label_172df4:
    // 0x172df4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x172df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x172DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DFCu;
        // 0x172e00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172E04u;
    // 0x172e04: 0x0  nop
    ctx->pc = 0x172e04u;
    // NOP
    ctx->pc = 0x172e08u;
}
