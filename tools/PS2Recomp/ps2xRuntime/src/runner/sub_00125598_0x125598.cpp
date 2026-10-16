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

// Function: sub_00125598
// Address: 0x125598 - 0x1255d0
void sub_00125598_0x125598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125598_0x125598");
#endif

    ctx->pc = 0x125598u;

    // 0x125598: 0x24840320  addiu       $a0, $a0, 0x320
    ctx->pc = 0x125598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 800));
    // 0x12559c: 0x24060098  addiu       $a2, $zero, 0x98
    ctx->pc = 0x12559cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1255a0: 0x8c82080c  lw          $v0, 0x80C($a0)
    ctx->pc = 0x1255a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2060)));
    // 0x1255a4: 0x8c850804  lw          $a1, 0x804($a0)
    ctx->pc = 0x1255a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x1255a8: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1255a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1255ac: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1255acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1255b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1255b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1255b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1255B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1255B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255B4u;
        // 0x1255b8: 0xc440002c  lwc1        $f0, 0x2C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1255B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1255BCu;
    // 0x1255bc: 0x0  nop
    ctx->pc = 0x1255bcu;
    // NOP
    // 0x1255c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1255c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1255c4: 0x0  nop
    ctx->pc = 0x1255c4u;
    // NOP
    // 0x1255c8: 0xac820cd0  sw          $v0, 0xCD0($a0)
    ctx->pc = 0x1255c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3280), GPR_U32(ctx, 2));
    // 0x1255cc: 0x0  nop
    ctx->pc = 0x1255ccu;
    // NOP
    ctx->pc = 0x1255d0u;
}
