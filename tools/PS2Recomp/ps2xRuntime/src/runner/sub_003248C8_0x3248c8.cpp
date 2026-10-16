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

// Function: sub_003248C8
// Address: 0x3248c8 - 0x324908
void sub_003248C8_0x3248c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003248C8_0x3248c8");
#endif

    switch (ctx->pc) {
        case 0x3248f0u: goto label_3248f0;
        default: break;
    }

    ctx->pc = 0x3248c8u;

    // 0x3248c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3248c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3248cc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3248ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3248d0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3248d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3248d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3248d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3248d8: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x3248d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x3248dc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3248dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3248e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3248e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3248e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3248e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3248e8: 0xc0c9056  jal         func_324158
    ctx->pc = 0x3248E8u;
    SET_GPR_U32(ctx, 31, 0x3248F0u);
    ctx->pc = 0x3248ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3248E8u;
    // 0x3248ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324158u, 0x3248E8u, 0x3248F0u)) {
        return;
    }
    ctx->pc = 0x3248F0u;
label_3248f0:
    // 0x3248f0: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x3248f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3248f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3248f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3248f8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x3248f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x3248fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3248fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324900: 0x3e00008  jr          $ra
    ctx->pc = 0x324900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324900u;
        // 0x324904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324908u;
}
