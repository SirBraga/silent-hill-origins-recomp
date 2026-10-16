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

// Function: sub_00258660
// Address: 0x258660 - 0x258688
void sub_00258660_0x258660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258660_0x258660");
#endif

    switch (ctx->pc) {
        case 0x258678u: goto label_258678;
        default: break;
    }

    ctx->pc = 0x258660u;

    // 0x258660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x258660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x258664: 0x8f8485f0  lw          $a0, -0x7A10($gp)
    ctx->pc = 0x258664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936048)));
    // 0x258668: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258668u;
    {
        const bool branch_taken_0x258668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258668u;
        // 0x25866c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258668) {
            ctx->pc = 0x25867Cu;
            goto label_25867c;
        }
    }
    ctx->pc = 0x258670u;
    // 0x258670: 0xc093106  jal         func_24C418
    ctx->pc = 0x258670u;
    SET_GPR_U32(ctx, 31, 0x258678u);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x258670u, 0x258678u)) {
        return;
    }
    ctx->pc = 0x258678u;
label_258678:
    // 0x258678: 0xaf8085f0  sw          $zero, -0x7A10($gp)
    ctx->pc = 0x258678u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936048), GPR_U32(ctx, 0));
label_25867c:
    // 0x25867c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25867cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258680: 0x3e00008  jr          $ra
    ctx->pc = 0x258680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258680u;
        // 0x258684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258688u;
}
