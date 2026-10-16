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

// Function: sub_0017E310
// Address: 0x17e310 - 0x17e380
void sub_0017E310_0x17e310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E310_0x17e310");
#endif

    ctx->pc = 0x17e310u;

    // 0x17e310: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x17e310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x17e314: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17e314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17e318: 0x244232d0  addiu       $v0, $v0, 0x32D0
    ctx->pc = 0x17e318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13008));
    // 0x17e31c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17e31cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17e320: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x17e320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x17e324: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x17e324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17e328: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x17e328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x17e32c: 0x2463f7a8  addiu       $v1, $v1, -0x858
    ctx->pc = 0x17e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965160));
    // 0x17e330: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x17e330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x17e334: 0x24870020  addiu       $a3, $a0, 0x20
    ctx->pc = 0x17e334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17e338: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x17e338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x17e33c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x17e33cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x17e340: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x17e340u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x17e344: 0x24c67a58  addiu       $a2, $a2, 0x7A58
    ctx->pc = 0x17e344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31320));
    // 0x17e348: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x17e348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x17e34c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17e34cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e350: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x17e350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x17e354: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x17e354u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x17e358: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x17e358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x17e35c: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x17e35cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x17e360: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x17e360u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x17e364: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x17e364u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x17e368: 0xac860030  sw          $a2, 0x30($a0)
    ctx->pc = 0x17e368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
    // 0x17e36c: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x17e36cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x17e370: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x17e370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x17e374: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x17e374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x17e378: 0x3e00008  jr          $ra
    ctx->pc = 0x17E378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E378u;
        // 0x17e37c: 0xac800050  sw          $zero, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E380u;
}
