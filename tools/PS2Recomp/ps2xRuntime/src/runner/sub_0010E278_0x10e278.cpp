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

// Function: sub_0010E278
// Address: 0x10e278 - 0x10e340
void sub_0010E278_0x10e278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E278_0x10e278");
#endif

    ctx->pc = 0x10e278u;

    // 0x10e278: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10e278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10e27c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10e280: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10e280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10e284: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x10e284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x10e288: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x10e288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x10e28c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10e28cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x10e290: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x10e290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x10e294: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x10e294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x10e298: 0x3e00008  jr          $ra
    ctx->pc = 0x10E298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E298u;
        // 0x10e29c: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E2A0u;
    // 0x10e2a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10e2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10e2a4: 0x0  nop
    ctx->pc = 0x10e2a4u;
    // NOP
    // 0x10e2a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10e2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10e2ac: 0x0  nop
    ctx->pc = 0x10e2acu;
    // NOP
    // 0x10e2b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10e2b4: 0x0  nop
    ctx->pc = 0x10e2b4u;
    // NOP
    // 0x10e2b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10e2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10e2bc: 0x0  nop
    ctx->pc = 0x10e2bcu;
    // NOP
    // 0x10e2c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10e2c4: 0x0  nop
    ctx->pc = 0x10e2c4u;
    // NOP
    // 0x10e2c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10e2cc: 0x0  nop
    ctx->pc = 0x10e2ccu;
    // NOP
    // 0x10e2d0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10e2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10e2d4: 0x0  nop
    ctx->pc = 0x10e2d4u;
    // NOP
    // 0x10e2d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10e2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10e2dc: 0x0  nop
    ctx->pc = 0x10e2dcu;
    // NOP
    // 0x10e2e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10e2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10e2e4: 0x0  nop
    ctx->pc = 0x10e2e4u;
    // NOP
    // 0x10e2e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10e2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10e2ec: 0x0  nop
    ctx->pc = 0x10e2ecu;
    // NOP
    // 0x10e2f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10e2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10e2f4: 0x0  nop
    ctx->pc = 0x10e2f4u;
    // NOP
    // 0x10e2f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10e2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10e2fc: 0x0  nop
    ctx->pc = 0x10e2fcu;
    // NOP
    // 0x10e300: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10e300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10e304: 0x0  nop
    ctx->pc = 0x10e304u;
    // NOP
    // 0x10e308: 0x0  nop
    ctx->pc = 0x10e308u;
    // NOP
    // 0x10e30c: 0x0  nop
    ctx->pc = 0x10e30cu;
    // NOP
    // 0x10e310: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10e310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10e314: 0x0  nop
    ctx->pc = 0x10e314u;
    // NOP
    // 0x10e318: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10e318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10e31c: 0x0  nop
    ctx->pc = 0x10e31cu;
    // NOP
    // 0x10e320: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10e320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10e324: 0x0  nop
    ctx->pc = 0x10e324u;
    // NOP
    // 0x10e328: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10e328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10e32c: 0x0  nop
    ctx->pc = 0x10e32cu;
    // NOP
    // 0x10e330: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10e330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10e334: 0x0  nop
    ctx->pc = 0x10e334u;
    // NOP
    // 0x10e338: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10e338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10e33c: 0x0  nop
    ctx->pc = 0x10e33cu;
    // NOP
    ctx->pc = 0x10e340u;
}
