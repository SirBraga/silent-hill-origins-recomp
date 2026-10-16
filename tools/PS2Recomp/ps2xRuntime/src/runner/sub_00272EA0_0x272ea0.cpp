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

// Function: sub_00272EA0
// Address: 0x272ea0 - 0x272ed8
void sub_00272EA0_0x272ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272EA0_0x272ea0");
#endif

    ctx->pc = 0x272ea0u;

    // 0x272ea0: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x272ea0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x272ea4: 0x44046800  mfc1        $a0, $f13
    ctx->pc = 0x272ea4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x272ea8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x272ea8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272eac: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x272eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x272eb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x272eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x272eb4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x272eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x272eb8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x272eb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x272ebc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x272ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x272ec0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x272ec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x272ec4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x272ec4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x272EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272ED0u;
    // 0x272ed0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x272ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x272ed4: 0x0  nop
    ctx->pc = 0x272ed4u;
    // NOP
    ctx->pc = 0x272ed8u;
}
