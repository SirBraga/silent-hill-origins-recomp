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

// Function: sub_00205D98
// Address: 0x205d98 - 0x205dc8
void sub_00205D98_0x205d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205D98_0x205d98");
#endif

    switch (ctx->pc) {
        case 0x205dbcu: goto label_205dbc;
        default: break;
    }

    ctx->pc = 0x205d98u;

    // 0x205d98: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x205d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205d9c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x205d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x205da0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x205da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205da4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205da4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205da8: 0x8c46028c  lw          $a2, 0x28C($v0)
    ctx->pc = 0x205da8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5C028Cu));
    // 0x205dac: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x205dacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x205db0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205db4: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x205DB4u;
    SET_GPR_U32(ctx, 31, 0x205DBCu);
    ctx->pc = 0x205DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205DB4u;
    // 0x205db8: 0x24a53ea8  addiu       $a1, $a1, 0x3EA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x205DB4u, 0x205DBCu)) {
        return;
    }
    ctx->pc = 0x205DBCu;
label_205dbc:
    // 0x205dbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x205DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DC0u;
        // 0x205dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205DC8u;
}
