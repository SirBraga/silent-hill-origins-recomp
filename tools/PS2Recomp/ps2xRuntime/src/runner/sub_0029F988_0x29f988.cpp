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

// Function: sub_0029F988
// Address: 0x29f988 - 0x29f9d0
void sub_0029F988_0x29f988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F988_0x29f988");
#endif

    switch (ctx->pc) {
        case 0x29f9a8u: goto label_29f9a8;
        default: break;
    }

    ctx->pc = 0x29f988u;

    // 0x29f988: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x29f988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x29f98c: 0x24860014  addiu       $a2, $a0, 0x14
    ctx->pc = 0x29f98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x29f990: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x29f990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x29f994: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x29f994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x29f998: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x29f998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x29f99c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29f9a0: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x29F9A0u;
    {
        const bool branch_taken_0x29f9a0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x29F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F9A0u;
        // 0x29f9a4: 0xa482000e  sh          $v0, 0xE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f9a0) {
            ctx->pc = 0x29F9C4u;
            goto label_29f9c4;
        }
    }
    ctx->pc = 0x29F9A8u;
label_29f9a8:
    // 0x29f9a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x29f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29f9ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29f9b0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x29f9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x29f9b4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x29f9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x29f9b8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x29f9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x29f9bc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29F9BCu;
    {
        const bool branch_taken_0x29f9bc = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x29f9bc) {
            ctx->pc = 0x29F9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f9a8;
        }
    }
    ctx->pc = 0x29F9C4u;
label_29f9c4:
    // 0x29f9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x29F9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F9CCu;
    // 0x29f9cc: 0x0  nop
    ctx->pc = 0x29f9ccu;
    // NOP
    ctx->pc = 0x29f9d0u;
}
