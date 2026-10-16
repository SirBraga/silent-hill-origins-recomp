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

// Function: sub_001F4C30
// Address: 0x1f4c30 - 0x1f4c58
void sub_001F4C30_0x1f4c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4C30_0x1f4c30");
#endif

    switch (ctx->pc) {
        case 0x1f4c4cu: goto label_1f4c4c;
        default: break;
    }

    ctx->pc = 0x1f4c30u;

    // 0x1f4c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f4c34: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1f4c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f4c38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f4c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f4c3c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f4c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c40: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x1f4c40u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f4c44: 0xc07d420  jal         func_1F5080
    ctx->pc = 0x1F4C44u;
    SET_GPR_U32(ctx, 31, 0x1F4C4Cu);
    ctx->pc = 0x1F4C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4C44u;
    // 0x1f4c48: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5080u, 0x1F4C44u, 0x1F4C4Cu)) {
        return;
    }
    ctx->pc = 0x1F4C4Cu;
label_1f4c4c:
    // 0x1f4c4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f4c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4c50: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C50u;
        // 0x1f4c54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4C58u;
}
