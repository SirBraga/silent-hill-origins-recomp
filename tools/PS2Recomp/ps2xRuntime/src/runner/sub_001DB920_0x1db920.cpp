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

// Function: sub_001DB920
// Address: 0x1db920 - 0x1db948
void sub_001DB920_0x1db920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB920_0x1db920");
#endif

    switch (ctx->pc) {
        case 0x1db93cu: goto label_1db93c;
        default: break;
    }

    ctx->pc = 0x1db920u;

    // 0x1db920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db924: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1db924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1db928: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1db928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1db92c: 0x24a5b8f0  addiu       $a1, $a1, -0x4710
    ctx->pc = 0x1db92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949104));
    // 0x1db930: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x1db930u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1db934: 0xc09545a  jal         func_255168
    ctx->pc = 0x1DB934u;
    SET_GPR_U32(ctx, 31, 0x1DB93Cu);
    ctx->pc = 0x1DB938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB934u;
    // 0x1db938: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x1DB934u, 0x1DB93Cu)) {
        return;
    }
    ctx->pc = 0x1DB93Cu;
label_1db93c:
    // 0x1db93c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db940: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB940u;
        // 0x1db944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB948u;
}
