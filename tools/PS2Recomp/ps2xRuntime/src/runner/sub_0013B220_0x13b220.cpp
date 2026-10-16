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

// Function: sub_0013B220
// Address: 0x13b220 - 0x13b280
void sub_0013B220_0x13b220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B220_0x13b220");
#endif

    ctx->pc = 0x13b220u;

    // 0x13b220: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13b220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13b224: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13b224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13b228: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x13b228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x13b22c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b22cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b230: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x13b230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13b234: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x13b234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x13b238: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x13b238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13b23c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13b23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13b240: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x13b240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x13b244: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x13b244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x13b248: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x13b248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x13b24c: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x13b24cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x13b250: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x13b250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x13b254: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x13b254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x13b258: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x13b258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x13b25c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x13b25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x13b260: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x13b260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x13b264: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x13b264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x13b268: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x13b268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x13b26c: 0x3e00008  jr          $ra
    ctx->pc = 0x13B26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B26Cu;
        // 0x13b270: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B274u;
    // 0x13b274: 0x0  nop
    ctx->pc = 0x13b274u;
    // NOP
    // 0x13b278: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13b278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13b27c: 0x0  nop
    ctx->pc = 0x13b27cu;
    // NOP
    ctx->pc = 0x13b280u;
}
