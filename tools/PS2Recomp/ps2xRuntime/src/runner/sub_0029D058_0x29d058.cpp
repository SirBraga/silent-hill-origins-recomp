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

// Function: sub_0029D058
// Address: 0x29d058 - 0x29d0a0
void sub_0029D058_0x29d058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D058_0x29d058");
#endif

    ctx->pc = 0x29d058u;

    // 0x29d058: 0x3c02fbad  lui         $v0, 0xFBAD
    ctx->pc = 0x29d058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64429 << 16));
    // 0x29d05c: 0xa4800048  sh          $zero, 0x48($a0)
    ctx->pc = 0x29d05cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x29d060: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x29d060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x29d064: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x29d064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x29d068: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x29d068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x29d06c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x29d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x29d070: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x29d070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x29d074: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x29d074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x29d078: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x29d078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x29d07c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x29d07cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x29d080: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x29d080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x29d084: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x29d084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x29d088: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x29d088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x29d08c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x29d08cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x29d090: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x29d090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x29d094: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x29d094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x29d098: 0x3e00008  jr          $ra
    ctx->pc = 0x29D098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D098u;
        // 0x29d09c: 0xac800030  sw          $zero, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D0A0u;
}
