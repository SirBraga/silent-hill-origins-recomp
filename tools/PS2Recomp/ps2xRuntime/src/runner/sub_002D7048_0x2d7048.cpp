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

// Function: sub_002D7048
// Address: 0x2d7048 - 0x2d70a0
void sub_002D7048_0x2d7048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7048_0x2d7048");
#endif

    switch (ctx->pc) {
        case 0x2d7074u: goto label_2d7074;
        case 0x2d7084u: goto label_2d7084;
        case 0x2d708cu: goto label_2d708c;
        default: break;
    }

    ctx->pc = 0x2d7048u;

    // 0x2d7048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d7048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d704c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d704cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7050: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d7050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d7054: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2d7054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2d7058: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d705c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d705cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d7060: 0x34c60900  ori         $a2, $a2, 0x900
    ctx->pc = 0x2d7060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
    // 0x2d7064: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x2d7064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x2d7068: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2d7068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2d706c: 0xc0ad2b4  jal         func_2B4AD0
    ctx->pc = 0x2D706Cu;
    SET_GPR_U32(ctx, 31, 0x2D7074u);
    ctx->pc = 0x2D7070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D706Cu;
    // 0x2d7070: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4AD0u, 0x2D706Cu, 0x2D7074u)) {
        return;
    }
    ctx->pc = 0x2D7074u;
label_2d7074:
    // 0x2d7074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7078: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d7078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d707c: 0xc0acb28  jal         func_2B2CA0
    ctx->pc = 0x2D707Cu;
    SET_GPR_U32(ctx, 31, 0x2D7084u);
    ctx->pc = 0x2D7080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D707Cu;
    // 0x2d7080: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2CA0u, 0x2D707Cu, 0x2D7084u)) {
        return;
    }
    ctx->pc = 0x2D7084u;
label_2d7084:
    // 0x2d7084: 0xc0b5ac6  jal         func_2D6B18
    ctx->pc = 0x2D7084u;
    SET_GPR_U32(ctx, 31, 0x2D708Cu);
    ctx->pc = 0x2D7088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7084u;
    // 0x2d7088: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6B18u, 0x2D7084u, 0x2D708Cu)) {
        return;
    }
    ctx->pc = 0x2D708Cu;
label_2d708c:
    // 0x2d708c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d708cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7094: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d7094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7098: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7098u;
        // 0x2d709c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D70A0u;
}
