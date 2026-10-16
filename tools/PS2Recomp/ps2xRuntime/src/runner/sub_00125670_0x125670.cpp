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

// Function: sub_00125670
// Address: 0x125670 - 0x125690
void sub_00125670_0x125670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125670_0x125670");
#endif

    ctx->pc = 0x125670u;

    // 0x125670: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x125670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x125674: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x125674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125678: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x125678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x12567c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12567cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125680: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x125680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x125684: 0x3e00008  jr          $ra
    ctx->pc = 0x125684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125684u;
        // 0x125688: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12568Cu;
    // 0x12568c: 0x0  nop
    ctx->pc = 0x12568cu;
    // NOP
    ctx->pc = 0x125690u;
}
