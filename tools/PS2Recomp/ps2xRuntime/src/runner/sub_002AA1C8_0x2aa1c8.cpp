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

// Function: sub_002AA1C8
// Address: 0x2aa1c8 - 0x2aa240
void sub_002AA1C8_0x2aa1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA1C8_0x2aa1c8");
#endif

    ctx->pc = 0x2aa1c8u;

    // 0x2aa1c8: 0xc78080bc  lwc1        $f0, -0x7F44($gp)
    ctx->pc = 0x2aa1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa1cc: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x2aa1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x2aa1d0: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x2aa1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x2aa1d4: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x2aa1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x2aa1d8: 0xa480005a  sh          $zero, 0x5A($a0)
    ctx->pc = 0x2aa1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 90), (uint16_t)GPR_U32(ctx, 0));
    // 0x2aa1dc: 0xa4800058  sh          $zero, 0x58($a0)
    ctx->pc = 0x2aa1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x2aa1e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa1e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa1e8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2aa1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2aa1ec: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2aa1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2aa1f0: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2aa1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2aa1f4: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x2aa1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa1f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2aa1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2aa1fc: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2aa1fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2aa200: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x2aa200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2aa204: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2aa204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2aa208: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x2aa208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x2aa20c: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x2aa20cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2aa210: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2aa210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2aa214: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2aa214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2aa218: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2aa218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2aa21c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x2aa21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2aa220: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2aa220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2aa224: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2aa224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2aa228: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x2aa228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x2aa22c: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x2aa22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x2aa230: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA230u;
        // 0x2aa234: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA238u;
    // 0x2aa238: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2aa238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2aa23c: 0x0  nop
    ctx->pc = 0x2aa23cu;
    // NOP
    ctx->pc = 0x2aa240u;
}
