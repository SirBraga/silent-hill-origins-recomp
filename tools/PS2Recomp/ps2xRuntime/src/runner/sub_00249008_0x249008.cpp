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

// Function: sub_00249008
// Address: 0x249008 - 0x249038
void sub_00249008_0x249008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249008_0x249008");
#endif

    ctx->pc = 0x249008u;

    // 0x249008: 0x3e00008  jr          $ra
    ctx->pc = 0x249008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249008u;
        // 0x24900c: 0x8f82851c  lw          $v0, -0x7AE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935836)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249010u;
    // 0x249010: 0xa4450002  sh          $a1, 0x2($v0)
    ctx->pc = 0x249010u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x249014: 0x0  nop
    ctx->pc = 0x249014u;
    // NOP
    // 0x249018: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x249018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24901c: 0x0  nop
    ctx->pc = 0x24901cu;
    // NOP
    // 0x249020: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x249020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x249024: 0x0  nop
    ctx->pc = 0x249024u;
    // NOP
    // 0x249028: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x249028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24902c: 0x0  nop
    ctx->pc = 0x24902cu;
    // NOP
    // 0x249030: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x249030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x249034: 0x0  nop
    ctx->pc = 0x249034u;
    // NOP
    ctx->pc = 0x249038u;
}
