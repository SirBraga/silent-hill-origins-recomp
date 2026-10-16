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

// Function: sub_0018BE10
// Address: 0x18be10 - 0x18be30
void sub_0018BE10_0x18be10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BE10_0x18be10");
#endif

    switch (ctx->pc) {
        case 0x18be24u: goto label_18be24;
        default: break;
    }

    ctx->pc = 0x18be10u;

    // 0x18be10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18be10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18be14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18be14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18be18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18be18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18be1c: 0xc062f08  jal         func_18BC20
    ctx->pc = 0x18BE1Cu;
    SET_GPR_U32(ctx, 31, 0x18BE24u);
    ctx->pc = 0x18BE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BE1Cu;
    // 0x18be20: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BC20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18BC20u, 0x18BE1Cu, 0x18BE24u)) {
        return;
    }
    ctx->pc = 0x18BE24u;
label_18be24:
    // 0x18be24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18be24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18be28: 0x3e00008  jr          $ra
    ctx->pc = 0x18BE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE28u;
        // 0x18be2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BE30u;
}
