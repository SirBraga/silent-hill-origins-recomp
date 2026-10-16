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

// Function: sub_00313390
// Address: 0x313390 - 0x3133f8
void sub_00313390_0x313390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313390_0x313390");
#endif

    ctx->pc = 0x313390u;

    // 0x313390: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x313390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x313394: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x313394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x313398: 0x3c080031  lui         $t0, 0x31
    ctx->pc = 0x313398u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49 << 16));
    // 0x31339c: 0x3c090031  lui         $t1, 0x31
    ctx->pc = 0x31339cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)49 << 16));
    // 0x3133a0: 0x24424030  addiu       $v0, $v0, 0x4030
    ctx->pc = 0x3133a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16432));
    // 0x3133a4: 0x24634098  addiu       $v1, $v1, 0x4098
    ctx->pc = 0x3133a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16536));
    // 0x3133a8: 0x25084118  addiu       $t0, $t0, 0x4118
    ctx->pc = 0x3133a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16664));
    // 0x3133ac: 0x25294180  addiu       $t1, $t1, 0x4180
    ctx->pc = 0x3133acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16768));
    // 0x3133b0: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x3133b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x3133b4: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x3133b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x3133b8: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x3133b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x3133bc: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x3133bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x3133c0: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x3133c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x3133c4: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x3133c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x3133c8: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x3133c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x3133cc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3133ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3133d0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3133d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3133d4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3133d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3133d8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3133d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3133dc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x3133dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x3133e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3133E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3133E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3133E0u;
        // 0x3133e4: 0xac84001c  sw          $a0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3133E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3133E8u;
    // 0x3133e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3133e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3133ec: 0x0  nop
    ctx->pc = 0x3133ecu;
    // NOP
    // 0x3133f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3133f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3133f4: 0x0  nop
    ctx->pc = 0x3133f4u;
    // NOP
    ctx->pc = 0x3133f8u;
}
