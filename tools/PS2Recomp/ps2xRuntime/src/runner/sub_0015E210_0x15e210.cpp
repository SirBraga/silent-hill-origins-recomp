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

// Function: sub_0015E210
// Address: 0x15e210 - 0x15e268
void sub_0015E210_0x15e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E210_0x15e210");
#endif

    ctx->pc = 0x15e210u;

    // 0x15e210: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15e210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15e214: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15e214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e218: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x15e218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x15e21c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15e21cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e220: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x15e220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15e224: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x15e224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x15e228: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x15e228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15e22c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15e22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15e230: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x15e230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x15e234: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x15e234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x15e238: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x15e238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x15e23c: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x15e23cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x15e240: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x15e240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x15e244: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x15e244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x15e248: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x15e248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x15e24c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x15e24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x15e250: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x15e250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x15e254: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x15e254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x15e258: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x15e258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x15e25c: 0x3e00008  jr          $ra
    ctx->pc = 0x15E25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E25Cu;
        // 0x15e260: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E264u;
    // 0x15e264: 0x0  nop
    ctx->pc = 0x15e264u;
    // NOP
    ctx->pc = 0x15e268u;
}
