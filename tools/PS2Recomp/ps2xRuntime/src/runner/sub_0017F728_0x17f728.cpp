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

// Function: sub_0017F728
// Address: 0x17f728 - 0x17f758
void sub_0017F728_0x17f728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F728_0x17f728");
#endif

    switch (ctx->pc) {
        case 0x17f73cu: goto label_17f73c;
        default: break;
    }

    ctx->pc = 0x17f728u;

    // 0x17f728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f72c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f734: 0xc079238  jal         func_1E48E0
    ctx->pc = 0x17F734u;
    SET_GPR_U32(ctx, 31, 0x17F73Cu);
    ctx->pc = 0x17F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F734u;
    // 0x17f738: 0xac4489a0  sw          $a0, -0x7660($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936992), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E48E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E48E0u, 0x17F734u, 0x17F73Cu)) {
        return;
    }
    ctx->pc = 0x17F73Cu;
label_17f73c:
    // 0x17f73c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f740: 0x3e00008  jr          $ra
    ctx->pc = 0x17F740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F740u;
        // 0x17f744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F748u;
    // 0x17f748: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x17f748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x17f74c: 0x0  nop
    ctx->pc = 0x17f74cu;
    // NOP
    // 0x17f750: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x17f750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x17f754: 0x0  nop
    ctx->pc = 0x17f754u;
    // NOP
    ctx->pc = 0x17f758u;
}
