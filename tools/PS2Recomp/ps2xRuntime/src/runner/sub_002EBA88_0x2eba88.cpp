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

// Function: sub_002EBA88
// Address: 0x2eba88 - 0x2ebae0
void sub_002EBA88_0x2eba88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBA88_0x2eba88");
#endif

    switch (ctx->pc) {
        case 0x2ebac8u: goto label_2ebac8;
        default: break;
    }

    ctx->pc = 0x2eba88u;

    // 0x2eba88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eba88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eba8c: 0x27829098  addiu       $v0, $gp, -0x6F68
    ctx->pc = 0x2eba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938776));
    // 0x2eba90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eba90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eba94: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2eba94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2eba98: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2eba98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2eba9c: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x2eba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x2ebaa0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ebaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ebaa4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ebaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ebaa8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2ebaa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ebaac: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2ebaacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2ebab0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2ebab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ebab4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ebab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ebab8: 0xe4300b  movn        $a2, $a3, $a0
    ctx->pc = 0x2ebab8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7));
    // 0x2ebabc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2ebabcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2ebac0: 0xc0bb6e0  jal         func_2EDB80
    ctx->pc = 0x2EBAC0u;
    SET_GPR_U32(ctx, 31, 0x2EBAC8u);
    ctx->pc = 0x2EBAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBAC0u;
    // 0x2ebac4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDB80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EDB80u, 0x2EBAC0u, 0x2EBAC8u)) {
        return;
    }
    ctx->pc = 0x2EBAC8u;
label_2ebac8:
    // 0x2ebac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ebac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebacc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBACCu;
        // 0x2ebad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBAD4u;
    // 0x2ebad4: 0x0  nop
    ctx->pc = 0x2ebad4u;
    // NOP
    // 0x2ebad8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2ebad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ebadc: 0x0  nop
    ctx->pc = 0x2ebadcu;
    // NOP
    ctx->pc = 0x2ebae0u;
}
