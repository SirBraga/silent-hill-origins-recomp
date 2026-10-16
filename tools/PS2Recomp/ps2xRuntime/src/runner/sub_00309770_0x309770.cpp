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

// Function: sub_00309770
// Address: 0x309770 - 0x309820
void sub_00309770_0x309770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309770_0x309770");
#endif

    ctx->pc = 0x309770u;

    // 0x309770: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x309770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x309774: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x309774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x309778: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x309778u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x30977c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x30977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x309780: 0x95030004  lhu         $v1, 0x4($t0)
    ctx->pc = 0x309780u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x309784: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x309784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x309788: 0xac86004c  sw          $a2, 0x4C($a0)
    ctx->pc = 0x309788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 6));
    // 0x30978c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x30978cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x309790: 0xa4830054  sh          $v1, 0x54($a0)
    ctx->pc = 0x309790u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x309794: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x309794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x309798: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x309798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x30979c: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x30979cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3097a0: 0xa483005c  sh          $v1, 0x5C($a0)
    ctx->pc = 0x3097a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x3097a4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3097a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3097a8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3097a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3097ac: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x3097acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x3097b0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3097b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3097b4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3097b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x3097b8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x3097b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x3097bc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x3097bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x3097c0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x3097c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x3097c4: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x3097c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x3097c8: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x3097c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x3097cc: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x3097ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x3097d0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x3097d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x3097d4: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x3097d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x3097d8: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x3097d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x3097dc: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x3097dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x3097e0: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x3097e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x3097e4: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x3097e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x3097e8: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x3097e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x3097ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3097ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3097f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3097f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3097f4: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x3097f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x3097f8: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x3097f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x3097fc: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x3097fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x309800: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x309800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x309804: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x309804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309808: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x309808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x30980c: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x30980cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x309810: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x309810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x309814: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x309814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x309818: 0x3e00008  jr          $ra
    ctx->pc = 0x309818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309818u;
        // 0x30981c: 0xac800094  sw          $zero, 0x94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309820u;
}
