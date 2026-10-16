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

// Function: sub_001A9F10
// Address: 0x1a9f10 - 0x1a9f68
void sub_001A9F10_0x1a9f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9F10_0x1a9f10");
#endif

    switch (ctx->pc) {
        case 0x1a9f38u: goto label_1a9f38;
        case 0x1a9f4cu: goto label_1a9f4c;
        default: break;
    }

    ctx->pc = 0x1a9f10u;

    // 0x1a9f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9f14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a9f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a9f18: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x1a9f18u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
    // 0x1a9f1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a9f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a9f20: 0x8e228510  lw          $v0, -0x7AF0($s1)
    ctx->pc = 0x1a9f20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8510u));
    // 0x1a9f24: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x1a9f24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x1a9f28: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9F28u;
    {
        const bool branch_taken_0x1a9f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F28u;
        // 0x1a9f2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f28) {
            ctx->pc = 0x1A9F4Cu;
            goto label_1a9f4c;
        }
    }
    ctx->pc = 0x1A9F30u;
    // 0x1a9f30: 0xc06a7da  jal         func_1A9F68
    ctx->pc = 0x1A9F30u;
    SET_GPR_U32(ctx, 31, 0x1A9F38u);
    ctx->pc = 0x1A9F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F30u;
    // 0x1a9f34: 0x26048420  addiu       $a0, $s0, -0x7BE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9F68u, 0x1A9F30u, 0x1A9F38u)) {
        return;
    }
    ctx->pc = 0x1A9F38u;
label_1a9f38:
    // 0x1a9f38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9f3c: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1a9f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1a9f40: 0xae228510  sw          $v0, -0x7AF0($s1)
    ctx->pc = 0x1a9f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294935824), GPR_U32(ctx, 2));
    // 0x1a9f44: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x1A9F44u;
    SET_GPR_U32(ctx, 31, 0x1A9F4Cu);
    ctx->pc = 0x1A9F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F44u;
    // 0x1a9f48: 0x2484a358  addiu       $a0, $a0, -0x5CA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x1A9F44u, 0x1A9F4Cu)) {
        return;
    }
    ctx->pc = 0x1A9F4Cu;
label_1a9f4c:
    // 0x1a9f4c: 0x26028420  addiu       $v0, $s0, -0x7BE0
    ctx->pc = 0x1a9f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935584));
    // 0x1a9f50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a9f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9f54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a9f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F5Cu;
        // 0x1a9f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9F64u;
    // 0x1a9f64: 0x0  nop
    ctx->pc = 0x1a9f64u;
    // NOP
    ctx->pc = 0x1a9f68u;
}
