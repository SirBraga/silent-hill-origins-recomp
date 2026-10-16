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

// Function: sub_0025D148
// Address: 0x25d148 - 0x25d178
void sub_0025D148_0x25d148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D148_0x25d148");
#endif

    switch (ctx->pc) {
        case 0x25d148u: goto label_25d148;
        case 0x25d14cu: goto label_25d14c;
        case 0x25d150u: goto label_25d150;
        case 0x25d154u: goto label_25d154;
        case 0x25d158u: goto label_25d158;
        case 0x25d15cu: goto label_25d15c;
        case 0x25d160u: goto label_25d160;
        case 0x25d164u: goto label_25d164;
        case 0x25d168u: goto label_25d168;
        case 0x25d16cu: goto label_25d16c;
        case 0x25d170u: goto label_25d170;
        case 0x25d174u: goto label_25d174;
        default: break;
    }

    ctx->pc = 0x25d148u;

label_25d148:
    // 0x25d148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25d148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_25d14c:
    // 0x25d14c: 0x8f8385f8  lw          $v1, -0x7A08($gp)
    ctx->pc = 0x25d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
label_25d150:
    // 0x25d150: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x25d150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_25d154:
    // 0x25d154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25d158:
    // 0x25d158: 0xac400fcc  sw          $zero, 0xFCC($v0)
    ctx->pc = 0x25d158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4044), GPR_U32(ctx, 0));
label_25d15c:
    // 0x25d15c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25d15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25d160:
    // 0x25d160: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x25d160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_25d164:
    // 0x25d164: 0x40f809  jalr        $v0
label_25d168:
    if (ctx->pc == 0x25D168u) {
        ctx->pc = 0x25D16Cu;
        goto label_25d16c;
    }
    ctx->pc = 0x25D164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D16Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D164u, 0x25D16Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D16Cu;
label_25d16c:
    // 0x25d16c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25d170:
    // 0x25d170: 0x3e00008  jr          $ra
label_25d174:
    if (ctx->pc == 0x25D174u) {
        ctx->pc = 0x25D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D170u;
        // 0x25d174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D178u;
        goto label_fallthrough_0x25d170;
    }
    ctx->pc = 0x25D170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D170u;
        // 0x25d174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25d170:
    ctx->pc = 0x25D178u;
}
