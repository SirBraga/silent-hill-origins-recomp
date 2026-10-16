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

// Function: sub_002BDE50
// Address: 0x2bde50 - 0x2bdec0
void sub_002BDE50_0x2bde50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDE50_0x2bde50");
#endif

    ctx->pc = 0x2bde50u;

    // 0x2bde50: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x2bde50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x2bde54: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x2bde54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2bde58: 0x8c8800fc  lw          $t0, 0xFC($a0)
    ctx->pc = 0x2bde58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x2bde5c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2bde5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2bde60: 0x8c8500e8  lw          $a1, 0xE8($a0)
    ctx->pc = 0x2bde60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x2bde64: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2bde64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2bde68: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x2bde68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2bde6c: 0xac820100  sw          $v0, 0x100($a0)
    ctx->pc = 0x2bde6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
    // 0x2bde70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2bde70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2bde74: 0x8c8700f4  lw          $a3, 0xF4($a0)
    ctx->pc = 0x2bde74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x2bde78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2bde78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2bde7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bde7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bde80: 0x8c8500ec  lw          $a1, 0xEC($a0)
    ctx->pc = 0x2bde80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x2bde84: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2bde84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2bde88: 0x8c8600c8  lw          $a2, 0xC8($a0)
    ctx->pc = 0x2bde88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x2bde8c: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x2bde8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2bde90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2bde90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2bde94: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x2bde94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2bde98: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2bde98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2bde9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bde9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bdea0: 0xac8800fc  sw          $t0, 0xFC($a0)
    ctx->pc = 0x2bdea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 8));
    // 0x2bdea4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bdea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bdea8: 0xac8700f4  sw          $a3, 0xF4($a0)
    ctx->pc = 0x2bdea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 7));
    // 0x2bdeac: 0xac8500ec  sw          $a1, 0xEC($a0)
    ctx->pc = 0x2bdeacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 5));
    // 0x2bdeb0: 0xac8600c8  sw          $a2, 0xC8($a0)
    ctx->pc = 0x2bdeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 6));
    // 0x2bdeb4: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x2bdeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
    // 0x2bdeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEB8u;
        // 0x2bdebc: 0xac8200d4  sw          $v0, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDEC0u;
}
