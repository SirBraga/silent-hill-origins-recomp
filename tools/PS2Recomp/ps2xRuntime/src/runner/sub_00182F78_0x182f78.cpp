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

// Function: sub_00182F78
// Address: 0x182f78 - 0x182fc0
void sub_00182F78_0x182f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182F78_0x182f78");
#endif

    switch (ctx->pc) {
        case 0x182fa0u: goto label_182fa0;
        case 0x182fb0u: goto label_182fb0;
        default: break;
    }

    ctx->pc = 0x182f78u;

    // 0x182f78: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x182f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x182f7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182f7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x182f80: 0x8c623bc0  lw          $v0, 0x3BC0($v1)
    ctx->pc = 0x182f80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6C3BC0u));
    // 0x182f84: 0x24643bc0  addiu       $a0, $v1, 0x3BC0
    ctx->pc = 0x182f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15296));
    // 0x182f88: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x182F88u;
    {
        const bool branch_taken_0x182f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F88u;
        // 0x182f8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f88) {
            ctx->pc = 0x182FA8u;
            goto label_182fa8;
        }
    }
    ctx->pc = 0x182F90u;
    // 0x182f90: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x182f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x182f94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x182f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f98: 0xc0c96f8  jal         func_325BE0
    ctx->pc = 0x182F98u;
    SET_GPR_U32(ctx, 31, 0x182FA0u);
    ctx->pc = 0x182F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182F98u;
    // 0x182f9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x325BE0u, 0x182F98u, 0x182FA0u)) {
        return;
    }
    ctx->pc = 0x182FA0u;
label_182fa0:
    // 0x182fa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x182FA0u;
    {
        const bool branch_taken_0x182fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182FA0u;
        // 0x182fa4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182fa0) {
            ctx->pc = 0x182FB4u;
            goto label_182fb4;
        }
    }
    ctx->pc = 0x182FA8u;
label_182fa8:
    // 0x182fa8: 0xc0a5bbc  jal         func_296EF0
    ctx->pc = 0x182FA8u;
    SET_GPR_U32(ctx, 31, 0x182FB0u);
    ctx->pc = 0x182FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182FA8u;
    // 0x182fac: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x296EF0u, 0x182FA8u, 0x182FB0u)) {
        return;
    }
    ctx->pc = 0x182FB0u;
label_182fb0:
    // 0x182fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_182fb4:
    // 0x182fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x182FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182FB4u;
        // 0x182fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182FBCu;
    // 0x182fbc: 0x0  nop
    ctx->pc = 0x182fbcu;
    // NOP
    ctx->pc = 0x182fc0u;
}
