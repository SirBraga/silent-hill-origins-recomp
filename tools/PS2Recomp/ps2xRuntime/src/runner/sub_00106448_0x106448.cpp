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

// Function: sub_00106448
// Address: 0x106448 - 0x106478
void sub_00106448_0x106448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106448_0x106448");
#endif

    ctx->pc = 0x106448u;

    // 0x106448: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x106448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10644c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10644cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x106450: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x106450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x106454: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x106454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x106458: 0xac8504c4  sw          $a1, 0x4C4($a0)
    ctx->pc = 0x106458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1220), GPR_U32(ctx, 5));
    // 0x10645c: 0xe48004c0  swc1        $f0, 0x4C0($a0)
    ctx->pc = 0x10645cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1216), bits); }
    // 0x106460: 0xac8204bc  sw          $v0, 0x4BC($a0)
    ctx->pc = 0x106460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1212), GPR_U32(ctx, 2));
    // 0x106464: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x106464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x106468: 0xac8004b4  sw          $zero, 0x4B4($a0)
    ctx->pc = 0x106468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1204), GPR_U32(ctx, 0));
    // 0x10646c: 0x3e00008  jr          $ra
    ctx->pc = 0x10646Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10646Cu;
        // 0x106470: 0xac8004b8  sw          $zero, 0x4B8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10646Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106474u;
    // 0x106474: 0x0  nop
    ctx->pc = 0x106474u;
    // NOP
    ctx->pc = 0x106478u;
}
