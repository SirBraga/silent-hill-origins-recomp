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

// Function: sub_002DC7A8
// Address: 0x2dc7a8 - 0x2dc7f8
void sub_002DC7A8_0x2dc7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC7A8_0x2dc7a8");
#endif

    switch (ctx->pc) {
        case 0x2dc7d8u: goto label_2dc7d8;
        case 0x2dc7e4u: goto label_2dc7e4;
        default: break;
    }

    ctx->pc = 0x2dc7a8u;

    // 0x2dc7a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dc7ac: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dc7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dc7b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc7b4: 0x2442c6f0  addiu       $v0, $v0, -0x3910
    ctx->pc = 0x2dc7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952688));
    // 0x2dc7b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2dc7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dc7bc: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DC7BCu;
    {
        const bool branch_taken_0x2dc7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC7BCu;
        // 0x2dc7c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc7bc) {
            ctx->pc = 0x2DC7ECu;
            goto label_2dc7ec;
        }
    }
    ctx->pc = 0x2DC7C4u;
    // 0x2dc7c4: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x2dc7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x2dc7c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC7C8u;
    {
        const bool branch_taken_0x2dc7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc7c8) {
            ctx->pc = 0x2DC7DCu;
            goto label_2dc7dc;
        }
    }
    ctx->pc = 0x2DC7D0u;
    // 0x2dc7d0: 0xc0932d4  jal         func_24CB50
    ctx->pc = 0x2DC7D0u;
    SET_GPR_U32(ctx, 31, 0x2DC7D8u);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x2DC7D0u, 0x2DC7D8u)) {
        return;
    }
    ctx->pc = 0x2DC7D8u;
label_2dc7d8:
    // 0x2dc7d8: 0xaf828bb8  sw          $v0, -0x7448($gp)
    ctx->pc = 0x2dc7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937528), GPR_U32(ctx, 2));
label_2dc7dc:
    // 0x2dc7dc: 0xc0b7058  jal         func_2DC160
    ctx->pc = 0x2DC7DCu;
    SET_GPR_U32(ctx, 31, 0x2DC7E4u);
    ctx->pc = 0x2DC7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC7DCu;
    // 0x2dc7e0: 0x8f848bb8  lw          $a0, -0x7448($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC160u, 0x2DC7DCu, 0x2DC7E4u)) {
        return;
    }
    ctx->pc = 0x2DC7E4u;
label_2dc7e4:
    // 0x2dc7e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2dc7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2dc7e8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2dc7e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2dc7ec:
    // 0x2dc7ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC7F0u;
        // 0x2dc7f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC7F8u;
}
