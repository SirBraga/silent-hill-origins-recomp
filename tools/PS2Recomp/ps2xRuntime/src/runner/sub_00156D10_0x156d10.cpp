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

// Function: sub_00156D10
// Address: 0x156d10 - 0x156d78
void sub_00156D10_0x156d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156D10_0x156d10");
#endif

    switch (ctx->pc) {
        case 0x156d2cu: goto label_156d2c;
        case 0x156d44u: goto label_156d44;
        case 0x156d5cu: goto label_156d5c;
        default: break;
    }

    ctx->pc = 0x156d10u;

    // 0x156d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156d14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x156d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x156d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x156d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x156d1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156d24: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x156D24u;
    SET_GPR_U32(ctx, 31, 0x156D2Cu);
    ctx->pc = 0x156D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D24u;
    // 0x156d28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x156D24u, 0x156D2Cu)) {
        return;
    }
    ctx->pc = 0x156D2Cu;
label_156d2c:
    // 0x156d2c: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x156d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x156d30: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x156d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x156d34: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x156D34u;
    {
        const bool branch_taken_0x156d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x156d34) {
            ctx->pc = 0x156D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156D34u;
            // 0x156d38: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156D4Cu;
            goto label_156d4c;
        }
    }
    ctx->pc = 0x156D3Cu;
    // 0x156d3c: 0xc055b5e  jal         func_156D78
    ctx->pc = 0x156D3Cu;
    SET_GPR_U32(ctx, 31, 0x156D44u);
    ctx->pc = 0x156D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D3Cu;
    // 0x156d40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156D78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x156D78u, 0x156D3Cu, 0x156D44u)) {
        return;
    }
    ctx->pc = 0x156D44u;
label_156d44:
    // 0x156d44: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x156d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x156d48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x156d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_156d4c:
    // 0x156d4c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x156D4Cu;
    {
        const bool branch_taken_0x156d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x156D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D4Cu;
        // 0x156d50: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d4c) {
            ctx->pc = 0x156D60u;
            goto label_156d60;
        }
    }
    ctx->pc = 0x156D54u;
    // 0x156d54: 0xc055b5e  jal         func_156D78
    ctx->pc = 0x156D54u;
    SET_GPR_U32(ctx, 31, 0x156D5Cu);
    ctx->pc = 0x156D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D54u;
    // 0x156d58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156D78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x156D78u, 0x156D54u, 0x156D5Cu)) {
        return;
    }
    ctx->pc = 0x156D5Cu;
label_156d5c:
    // 0x156d5c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x156d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_156d60:
    // 0x156d60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x156d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156d68: 0x3e00008  jr          $ra
    ctx->pc = 0x156D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D68u;
        // 0x156d6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156D70u;
    // 0x156d70: 0x0  nop
    ctx->pc = 0x156d70u;
    // NOP
    // 0x156d74: 0x0  nop
    ctx->pc = 0x156d74u;
    // NOP
    ctx->pc = 0x156d78u;
}
