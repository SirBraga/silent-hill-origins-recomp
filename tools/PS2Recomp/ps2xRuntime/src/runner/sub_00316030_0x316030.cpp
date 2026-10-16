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

// Function: sub_00316030
// Address: 0x316030 - 0x316060
void sub_00316030_0x316030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316030_0x316030");
#endif

    ctx->pc = 0x316030u;

    // 0x316030: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x316030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x316034: 0x3c0441c6  lui         $a0, 0x41C6
    ctx->pc = 0x316034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16838 << 16));
    // 0x316038: 0x8c456ccc  lw          $a1, 0x6CCC($v0)
    ctx->pc = 0x316038u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x686CCCu));
    // 0x31603c: 0x34844e6d  ori         $a0, $a0, 0x4E6D
    ctx->pc = 0x31603cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20077);
    // 0x316040: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x316040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x316044: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x316044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x316048: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x316048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31604c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x31604cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x316050: 0x24633039  addiu       $v1, $v1, 0x3039
    ctx->pc = 0x316050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12345));
    // 0x316054: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x316054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x316058: 0x3e00008  jr          $ra
    ctx->pc = 0x316058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316058u;
        // 0x31605c: 0xaca30058  sw          $v1, 0x58($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316060u;
}
