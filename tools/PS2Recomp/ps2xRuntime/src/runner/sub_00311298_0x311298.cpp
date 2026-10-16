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

// Function: sub_00311298
// Address: 0x311298 - 0x3112c8
void sub_00311298_0x311298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311298_0x311298");
#endif

    switch (ctx->pc) {
        case 0x3112b4u: goto label_3112b4;
        default: break;
    }

    ctx->pc = 0x311298u;

    // 0x311298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x311298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31129c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x31129cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x3112a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3112a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3112a4: 0x24a510d8  addiu       $a1, $a1, 0x10D8
    ctx->pc = 0x3112a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4312));
    // 0x3112a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3112a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3112ac: 0xc0aa872  jal         func_2AA1C8
    ctx->pc = 0x3112ACu;
    SET_GPR_U32(ctx, 31, 0x3112B4u);
    ctx->pc = 0x3112B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3112ACu;
    // 0x3112b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA1C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA1C8u, 0x3112ACu, 0x3112B4u)) {
        return;
    }
    ctx->pc = 0x3112B4u;
label_3112b4:
    // 0x3112b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3112b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3112b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3112b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3112bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3112bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3112c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3112C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3112C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112C0u;
        // 0x3112c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3112C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3112C8u;
}
