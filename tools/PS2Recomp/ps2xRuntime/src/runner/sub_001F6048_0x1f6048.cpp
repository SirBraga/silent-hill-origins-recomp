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

// Function: sub_001F6048
// Address: 0x1f6048 - 0x1f6088
void sub_001F6048_0x1f6048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6048_0x1f6048");
#endif

    switch (ctx->pc) {
        case 0x1f606cu: goto label_1f606c;
        case 0x1f6074u: goto label_1f6074;
        default: break;
    }

    ctx->pc = 0x1f6048u;

    // 0x1f6048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f6048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f604c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f604cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f6050: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x1f6050u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x1f6054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6058: 0x8e04eb14  lw          $a0, -0x14EC($s0)
    ctx->pc = 0x1f6058u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5BEB14u));
    // 0x1f605c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F605Cu;
    {
        const bool branch_taken_0x1f605c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f605c) {
            ctx->pc = 0x1F6060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F605Cu;
            // 0x1f6060: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F607Cu;
            goto label_1f607c;
        }
    }
    ctx->pc = 0x1F6064u;
    // 0x1f6064: 0xc0816fe  jal         func_205BF8
    ctx->pc = 0x1F6064u;
    SET_GPR_U32(ctx, 31, 0x1F606Cu);
    ctx->pc = 0x1F6068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6064u;
    // 0x1f6068: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205BF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205BF8u, 0x1F6064u, 0x1F606Cu)) {
        return;
    }
    ctx->pc = 0x1F606Cu;
label_1f606c:
    // 0x1f606c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1F606Cu;
    SET_GPR_U32(ctx, 31, 0x1F6074u);
    ctx->pc = 0x1F6070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F606Cu;
    // 0x1f6070: 0x8e04eb14  lw          $a0, -0x14EC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961940)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1F606Cu, 0x1F6074u)) {
        return;
    }
    ctx->pc = 0x1F6074u;
label_1f6074:
    // 0x1f6074: 0xae00eb14  sw          $zero, -0x14EC($s0)
    ctx->pc = 0x1f6074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294961940), GPR_U32(ctx, 0));
    // 0x1f6078: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f6078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f607c:
    // 0x1f607c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f607cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6080: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6080u;
        // 0x1f6084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6088u;
}
