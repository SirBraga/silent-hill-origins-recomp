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

// Function: sub_002F9D00
// Address: 0x2f9d00 - 0x2f9d28
void sub_002F9D00_0x2f9d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9D00_0x2f9d00");
#endif

    switch (ctx->pc) {
        case 0x2f9d14u: goto label_2f9d14;
        default: break;
    }

    ctx->pc = 0x2f9d00u;

    // 0x2f9d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f9d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f9d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f9d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f9d08: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x2f9d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2f9d0c: 0xc0c0b6c  jal         func_302DB0
    ctx->pc = 0x2F9D0Cu;
    SET_GPR_U32(ctx, 31, 0x2F9D14u);
    ctx->pc = 0x2F9D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9D0Cu;
    // 0x2f9d10: 0x24840068  addiu       $a0, $a0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302DB0u, 0x2F9D0Cu, 0x2F9D14u)) {
        return;
    }
    ctx->pc = 0x2F9D14u;
label_2f9d14:
    // 0x2f9d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f9d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D1Cu;
        // 0x2f9d20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9D24u;
    // 0x2f9d24: 0x0  nop
    ctx->pc = 0x2f9d24u;
    // NOP
    ctx->pc = 0x2f9d28u;
}
