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

// Function: sub_001F6088
// Address: 0x1f6088 - 0x1f60c0
void sub_001F6088_0x1f6088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6088_0x1f6088");
#endif

    switch (ctx->pc) {
        case 0x1f60b4u: goto label_1f60b4;
        default: break;
    }

    ctx->pc = 0x1f6088u;

    // 0x1f6088: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x1f6088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x1f608c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f608cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6090: 0x8c44eb14  lw          $a0, -0x14EC($v0)
    ctx->pc = 0x1f6090u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5BEB14u));
    // 0x1f6094: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6094u;
    {
        const bool branch_taken_0x1f6094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6094u;
        // 0x1f6098: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6094) {
            ctx->pc = 0x1F60B4u;
            goto label_1f60b4;
        }
    }
    ctx->pc = 0x1F609Cu;
    // 0x1f609c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x1f609cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x1f60a0: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x1f60a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1f60a4: 0x8c45eb10  lw          $a1, -0x14F0($v0)
    ctx->pc = 0x1f60a4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5BEB10u));
    // 0x1f60a8: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x1f60a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x1f60ac: 0xc0816c4  jal         func_205B10
    ctx->pc = 0x1F60ACu;
    SET_GPR_U32(ctx, 31, 0x1F60B4u);
    ctx->pc = 0x1F60B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F60ACu;
    // 0x1f60b0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205B10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205B10u, 0x1F60ACu, 0x1F60B4u)) {
        return;
    }
    ctx->pc = 0x1F60B4u;
label_1f60b4:
    // 0x1f60b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f60b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f60b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F60B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F60BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60B8u;
        // 0x1f60bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F60B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F60C0u;
}
