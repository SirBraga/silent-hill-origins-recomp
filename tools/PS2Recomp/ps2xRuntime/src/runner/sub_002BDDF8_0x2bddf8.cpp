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

// Function: sub_002BDDF8
// Address: 0x2bddf8 - 0x2bde50
void sub_002BDDF8_0x2bddf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDDF8_0x2bddf8");
#endif

    ctx->pc = 0x2bddf8u;

    // 0x2bddf8: 0x8c8200ec  lw          $v0, 0xEC($a0)
    ctx->pc = 0x2bddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x2bddfc: 0x8c8300e8  lw          $v1, 0xE8($a0)
    ctx->pc = 0x2bddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x2bde00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bde00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bde04: 0x8c8600c4  lw          $a2, 0xC4($a0)
    ctx->pc = 0x2bde04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2bde08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bde08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bde0c: 0x8c8700dc  lw          $a3, 0xDC($a0)
    ctx->pc = 0x2bde0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x2bde10: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2bde10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2bde14: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x2bde14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x2bde18: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x2bde18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x2bde1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bde1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bde20: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2bde20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2bde24: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2bde24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2bde28: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x2bde28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2bde2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bde2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bde30: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2bde30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2bde34: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2bde34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2bde38: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x2bde38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2bde3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bde3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bde40: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2bde40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2bde44: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE44u;
        // 0x2bde48: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDE4Cu;
    // 0x2bde4c: 0x0  nop
    ctx->pc = 0x2bde4cu;
    // NOP
    ctx->pc = 0x2bde50u;
}
