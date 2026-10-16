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

// Function: sub_0020DA98
// Address: 0x20da98 - 0x20dac0
void sub_0020DA98_0x20da98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DA98_0x20da98");
#endif

    switch (ctx->pc) {
        case 0x20da98u: goto label_20da98;
        case 0x20da9cu: goto label_20da9c;
        case 0x20daa0u: goto label_20daa0;
        case 0x20daa4u: goto label_20daa4;
        case 0x20daa8u: goto label_20daa8;
        case 0x20daacu: goto label_20daac;
        case 0x20dab0u: goto label_20dab0;
        case 0x20dab4u: goto label_20dab4;
        case 0x20dab8u: goto label_20dab8;
        case 0x20dabcu: goto label_20dabc;
        default: break;
    }

    ctx->pc = 0x20da98u;

label_20da98:
    // 0x20da98: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x20da98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_20da9c:
    // 0x20da9c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20daa0:
    // 0x20daa0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x20daa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_20daa4:
    // 0x20daa4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_20daa8:
    // 0x20daa8: 0x40f809  jalr        $v0
label_20daac:
    if (ctx->pc == 0x20DAACu) {
        ctx->pc = 0x20DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAA8u;
        // 0x20daac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DAB0u;
        goto label_20dab0;
    }
    ctx->pc = 0x20DAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DAB0u);
        ctx->pc = 0x20DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAA8u;
        // 0x20daac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DAA8u, 0x20DAB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DAB0u;
label_20dab0:
    // 0x20dab0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x20dab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_20dab4:
    // 0x20dab4: 0x3e00008  jr          $ra
label_20dab8:
    if (ctx->pc == 0x20DAB8u) {
        ctx->pc = 0x20DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAB4u;
        // 0x20dab8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DABCu;
        goto label_20dabc;
    }
    ctx->pc = 0x20DAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAB4u;
        // 0x20dab8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DABCu;
label_20dabc:
    // 0x20dabc: 0x0  nop
    ctx->pc = 0x20dabcu;
    // NOP
    ctx->pc = 0x20dac0u;
}
