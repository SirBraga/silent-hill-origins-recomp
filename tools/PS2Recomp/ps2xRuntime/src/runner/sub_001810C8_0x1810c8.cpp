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

// Function: sub_001810C8
// Address: 0x1810c8 - 0x1810f0
void sub_001810C8_0x1810c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001810C8_0x1810c8");
#endif

    switch (ctx->pc) {
        case 0x1810e0u: goto label_1810e0;
        default: break;
    }

    ctx->pc = 0x1810c8u;

    // 0x1810c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1810c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1810cc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1810ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1810d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1810d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1810d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1810d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1810d8: 0xc060328  jal         func_180CA0
    ctx->pc = 0x1810D8u;
    SET_GPR_U32(ctx, 31, 0x1810E0u);
    ctx->pc = 0x1810DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1810D8u;
    // 0x1810dc: 0x2484fa38  addiu       $a0, $a0, -0x5C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180CA0u, 0x1810D8u, 0x1810E0u)) {
        return;
    }
    ctx->pc = 0x1810E0u;
label_1810e0:
    // 0x1810e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1810e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1810e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1810E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1810E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810E4u;
        // 0x1810e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1810E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1810ECu;
    // 0x1810ec: 0x0  nop
    ctx->pc = 0x1810ecu;
    // NOP
    ctx->pc = 0x1810f0u;
}
