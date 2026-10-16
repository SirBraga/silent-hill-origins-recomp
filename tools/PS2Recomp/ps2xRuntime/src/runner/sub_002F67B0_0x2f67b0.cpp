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

// Function: sub_002F67B0
// Address: 0x2f67b0 - 0x2f67f0
void sub_002F67B0_0x2f67b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F67B0_0x2f67b0");
#endif

    switch (ctx->pc) {
        case 0x2f67e4u: goto label_2f67e4;
        default: break;
    }

    ctx->pc = 0x2f67b0u;

    // 0x2f67b0: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x2f67b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x2f67b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f67b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f67b8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2f67b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f67bc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f67bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f67c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f67c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f67c4: 0x24426340  addiu       $v0, $v0, 0x6340
    ctx->pc = 0x2f67c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25408));
    // 0x2f67c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f67c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f67cc: 0x9468002a  lhu         $t0, 0x2A($v1)
    ctx->pc = 0x2f67ccu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x2f67d0: 0x1070018  mult        $zero, $t0, $a3
    ctx->pc = 0x2f67d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2f67d4: 0x3812  mflo        $a3
    ctx->pc = 0x2f67d4u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2f67d8: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x2f67d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2f67dc: 0xc0bdec0  jal         func_2F7B00
    ctx->pc = 0x2F67DCu;
    SET_GPR_U32(ctx, 31, 0x2F67E4u);
    ctx->pc = 0x2F67E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F67DCu;
    // 0x2f67e0: 0x3012  mflo        $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ctx->lo);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7B00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7B00u, 0x2F67DCu, 0x2F67E4u)) {
        return;
    }
    ctx->pc = 0x2F67E4u;
label_2f67e4:
    // 0x2f67e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f67e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f67e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F67E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67E8u;
        // 0x2f67ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F67E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F67F0u;
}
