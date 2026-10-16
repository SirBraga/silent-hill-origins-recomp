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

// Function: sub_0010F2D0
// Address: 0x10f2d0 - 0x10f330
void sub_0010F2D0_0x10f2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F2D0_0x10f2d0");
#endif

    switch (ctx->pc) {
        case 0x10f320u: goto label_10f320;
        default: break;
    }

    ctx->pc = 0x10f2d0u;

    // 0x10f2d0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x10f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x10f2d4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10f2d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10f2d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10f2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10f2dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10f2dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10f2e0: 0x8c4382f0  lw          $v1, -0x7D10($v0)
    ctx->pc = 0x10f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3382F0u));
    // 0x10f2e4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x10f2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x10f2e8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x10f2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x10f2ec: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x10f2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10f2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10f2f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10f2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2f8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x10f2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x10f2fc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10f2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10f300: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x10f300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x10f304: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10f304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x10f308: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x10f308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x10f30c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x10f30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x10f310: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10f310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10f314: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x10f314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x10f318: 0xc043a04  jal         func_10E810
    ctx->pc = 0x10F318u;
    SET_GPR_U32(ctx, 31, 0x10F320u);
    ctx->pc = 0x10F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F318u;
    // 0x10f31c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E810u, 0x10F318u, 0x10F320u)) {
        return;
    }
    ctx->pc = 0x10F320u;
label_10f320:
    // 0x10f320: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10f320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f324: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10f324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10f328: 0x3e00008  jr          $ra
    ctx->pc = 0x10F328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F328u;
        // 0x10f32c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F330u;
}
