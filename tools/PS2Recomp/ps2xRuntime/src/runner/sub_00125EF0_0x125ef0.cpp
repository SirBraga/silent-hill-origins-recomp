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

// Function: sub_00125EF0
// Address: 0x125ef0 - 0x125f48
void sub_00125EF0_0x125ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125EF0_0x125ef0");
#endif

    switch (ctx->pc) {
        case 0x125f18u: goto label_125f18;
        case 0x125f28u: goto label_125f28;
        default: break;
    }

    ctx->pc = 0x125ef0u;

    // 0x125ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125ef4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ef8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x125ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x125efc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x125f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x125f04: 0x26110320  addiu       $s1, $s0, 0x320
    ctx->pc = 0x125f04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x125f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125f0c: 0x26050dc4  addiu       $a1, $s0, 0xDC4
    ctx->pc = 0x125f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3524));
    // 0x125f10: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x125F10u;
    SET_GPR_U32(ctx, 31, 0x125F18u);
    ctx->pc = 0x125F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F10u;
    // 0x125f14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x125F10u, 0x125F18u)) {
        return;
    }
    ctx->pc = 0x125F18u;
label_125f18:
    // 0x125f18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f1c: 0x26050dcc  addiu       $a1, $s0, 0xDCC
    ctx->pc = 0x125f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3532));
    // 0x125f20: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x125F20u;
    SET_GPR_U32(ctx, 31, 0x125F28u);
    ctx->pc = 0x125F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F20u;
    // 0x125f24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x125F20u, 0x125F28u)) {
        return;
    }
    ctx->pc = 0x125F28u;
label_125f28:
    // 0x125f28: 0xae000c94  sw          $zero, 0xC94($s0)
    ctx->pc = 0x125f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3220), GPR_U32(ctx, 0));
    // 0x125f2c: 0xae000bc8  sw          $zero, 0xBC8($s0)
    ctx->pc = 0x125f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3016), GPR_U32(ctx, 0));
    // 0x125f30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x125f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125f34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x125f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125f38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x125F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F3Cu;
        // 0x125f40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125F44u;
    // 0x125f44: 0x0  nop
    ctx->pc = 0x125f44u;
    // NOP
    ctx->pc = 0x125f48u;
}
