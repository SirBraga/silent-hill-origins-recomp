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

// Function: sub_001500B0
// Address: 0x1500b0 - 0x150158
void sub_001500B0_0x1500b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001500B0_0x1500b0");
#endif

    ctx->pc = 0x1500b0u;

    // 0x1500b0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1500b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1500b4: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1500b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1500b8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1500b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1500bc: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x1500bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1500c0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1500c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1500c4: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x1500c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x1500c8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1500c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1500cc: 0x34c6face  ori         $a2, $a2, 0xFACE
    ctx->pc = 0x1500ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64206);
    // 0x1500d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1500d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1500d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1500d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1500d8: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1500d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1500dc: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1500dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1500e0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1500e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1500e4: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1500e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1500e8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1500e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1500ec: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1500ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1500f0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1500f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1500f4: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1500f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1500f8: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1500f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1500fc: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1500fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x150100: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x150100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x150104: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x150104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x150108: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x150108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x15010c: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x15010cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x150110: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x150110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x150114: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x150114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x150118: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x150118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x15011c: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x15011cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x150120: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x150120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x150124: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x150124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x150128: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x150128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x15012c: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x15012cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x150130: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x150130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x150134: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x150134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x150138: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x150138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x15013c: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x15013cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x150140: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x150140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x150144: 0xac86006c  sw          $a2, 0x6C($a0)
    ctx->pc = 0x150144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 6));
    // 0x150148: 0xac860070  sw          $a2, 0x70($a0)
    ctx->pc = 0x150148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 6));
    // 0x15014c: 0x3e00008  jr          $ra
    ctx->pc = 0x15014Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15014Cu;
        // 0x150150: 0xac86007c  sw          $a2, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15014Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150154u;
    // 0x150154: 0x0  nop
    ctx->pc = 0x150154u;
    // NOP
    ctx->pc = 0x150158u;
}
