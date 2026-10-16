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

// Function: sub_001372C8
// Address: 0x1372c8 - 0x137318
void sub_001372C8_0x1372c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001372C8_0x1372c8");
#endif

    switch (ctx->pc) {
        case 0x1372e8u: goto label_1372e8;
        case 0x1372f4u: goto label_1372f4;
        default: break;
    }

    ctx->pc = 0x1372c8u;

    // 0x1372c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1372c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1372cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1372ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1372d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1372d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1372d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1372d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1372d8: 0x26110088  addiu       $s1, $s0, 0x88
    ctx->pc = 0x1372d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x1372dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1372dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1372e0: 0xc04f0c2  jal         func_13C308
    ctx->pc = 0x1372E0u;
    SET_GPR_U32(ctx, 31, 0x1372E8u);
    ctx->pc = 0x1372E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1372E0u;
    // 0x1372e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x1372E0u, 0x1372E8u)) {
        return;
    }
    ctx->pc = 0x1372E8u;
label_1372e8:
    // 0x1372e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1372e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1372ec: 0xc04f0f4  jal         func_13C3D0
    ctx->pc = 0x1372ECu;
    SET_GPR_U32(ctx, 31, 0x1372F4u);
    ctx->pc = 0x1372F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1372ECu;
    // 0x1372f0: 0x26050094  addiu       $a1, $s0, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3D0u, 0x1372ECu, 0x1372F4u)) {
        return;
    }
    ctx->pc = 0x1372F4u;
label_1372f4:
    // 0x1372f4: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x1372f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x1372f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1372f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1372fc: 0xa20300bc  sb          $v1, 0xBC($s0)
    ctx->pc = 0x1372fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 188), (uint8_t)GPR_U32(ctx, 3));
    // 0x137300: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x137300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137304: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13730c: 0x3e00008  jr          $ra
    ctx->pc = 0x13730Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13730Cu;
        // 0x137310: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13730Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137314u;
    // 0x137314: 0x0  nop
    ctx->pc = 0x137314u;
    // NOP
    ctx->pc = 0x137318u;
}
