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

// Function: sub_002F9A98
// Address: 0x2f9a98 - 0x2f9ae0
void sub_002F9A98_0x2f9a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9A98_0x2f9a98");
#endif

    switch (ctx->pc) {
        case 0x2f9ac0u: goto label_2f9ac0;
        case 0x2f9ad0u: goto label_2f9ad0;
        default: break;
    }

    ctx->pc = 0x2f9a98u;

    // 0x2f9a98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f9a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f9a9c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2f9a9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9aa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f9aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f9aa4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f9aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f9aa8: 0x8ce40040  lw          $a0, 0x40($a3)
    ctx->pc = 0x2f9aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x2f9aac: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x2f9aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x2f9ab0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9AB0u;
    {
        const bool branch_taken_0x2f9ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f9ab0) {
            ctx->pc = 0x2F9AC8u;
            goto label_2f9ac8;
        }
    }
    ctx->pc = 0x2F9AB8u;
    // 0x2f9ab8: 0xc0be57c  jal         func_2F95F0
    ctx->pc = 0x2F9AB8u;
    SET_GPR_U32(ctx, 31, 0x2F9AC0u);
    ctx->pc = 0x2F9ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9AB8u;
    // 0x2f9abc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F95F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F95F0u, 0x2F9AB8u, 0x2F9AC0u)) {
        return;
    }
    ctx->pc = 0x2F9AC0u;
label_2f9ac0:
    // 0x2f9ac0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9AC0u;
    {
        const bool branch_taken_0x2f9ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AC0u;
        // 0x2f9ac4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ac0) {
            ctx->pc = 0x2F9AD4u;
            goto label_2f9ad4;
        }
    }
    ctx->pc = 0x2F9AC8u;
label_2f9ac8:
    // 0x2f9ac8: 0xc0be520  jal         func_2F9480
    ctx->pc = 0x2F9AC8u;
    SET_GPR_U32(ctx, 31, 0x2F9AD0u);
    ctx->pc = 0x2F9ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9AC8u;
    // 0x2f9acc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9480u, 0x2F9AC8u, 0x2F9AD0u)) {
        return;
    }
    ctx->pc = 0x2F9AD0u;
label_2f9ad0:
    // 0x2f9ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f9ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9ad4:
    // 0x2f9ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AD4u;
        // 0x2f9ad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9ADCu;
    // 0x2f9adc: 0x0  nop
    ctx->pc = 0x2f9adcu;
    // NOP
    ctx->pc = 0x2f9ae0u;
}
