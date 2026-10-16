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

// Function: sub_0017E3B8
// Address: 0x17e3b8 - 0x17e428
void sub_0017E3B8_0x17e3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E3B8_0x17e3b8");
#endif

    ctx->pc = 0x17e3b8u;

    // 0x17e3b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x17e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x17e3bc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17e3c0: 0x244232d0  addiu       $v0, $v0, 0x32D0
    ctx->pc = 0x17e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13008));
    // 0x17e3c4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17e3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17e3c8: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x17e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x17e3cc: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x17e3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17e3d0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x17e3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x17e3d4: 0x2463f7a8  addiu       $v1, $v1, -0x858
    ctx->pc = 0x17e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965160));
    // 0x17e3d8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x17e3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x17e3dc: 0x24870020  addiu       $a3, $a0, 0x20
    ctx->pc = 0x17e3dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17e3e0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x17e3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x17e3e4: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x17e3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x17e3e8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x17e3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x17e3ec: 0x24c67a18  addiu       $a2, $a2, 0x7A18
    ctx->pc = 0x17e3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31256));
    // 0x17e3f0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x17e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x17e3f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17e3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e3f8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x17e3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x17e3fc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x17e3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x17e400: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x17e400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x17e404: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x17e404u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x17e408: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x17e408u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x17e40c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x17e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x17e410: 0xac860030  sw          $a2, 0x30($a0)
    ctx->pc = 0x17e410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
    // 0x17e414: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x17e414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x17e418: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x17e418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x17e41c: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x17e41cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x17e420: 0x3e00008  jr          $ra
    ctx->pc = 0x17E420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E420u;
        // 0x17e424: 0xac800048  sw          $zero, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E428u;
}
