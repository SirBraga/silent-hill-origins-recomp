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

// Function: sub_00255F90
// Address: 0x255f90 - 0x255fc0
void sub_00255F90_0x255f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255F90_0x255f90");
#endif

    switch (ctx->pc) {
        case 0x255fa8u: goto label_255fa8;
        default: break;
    }

    ctx->pc = 0x255f90u;

    // 0x255f90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x255f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x255f94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x255f98: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x255f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x255f9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x255fa0: 0xc093892  jal         func_24E248
    ctx->pc = 0x255FA0u;
    SET_GPR_U32(ctx, 31, 0x255FA8u);
    ctx->pc = 0x255FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255FA0u;
    // 0x255fa4: 0x248411e0  addiu       $a0, $a0, 0x11E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E248u, 0x255FA0u, 0x255FA8u)) {
        return;
    }
    ctx->pc = 0x255FA8u;
label_255fa8:
    // 0x255fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255fac: 0x3e00008  jr          $ra
    ctx->pc = 0x255FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255FACu;
        // 0x255fb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255FB4u;
    // 0x255fb4: 0x0  nop
    ctx->pc = 0x255fb4u;
    // NOP
    // 0x255fb8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x255fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x255fbc: 0x0  nop
    ctx->pc = 0x255fbcu;
    // NOP
    ctx->pc = 0x255fc0u;
}
