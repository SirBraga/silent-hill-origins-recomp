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

// Function: sub_0019BB08
// Address: 0x19bb08 - 0x19bb88
void sub_0019BB08_0x19bb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BB08_0x19bb08");
#endif

    switch (ctx->pc) {
        case 0x19bb34u: goto label_19bb34;
        case 0x19bb40u: goto label_19bb40;
        case 0x19bb68u: goto label_19bb68;
        case 0x19bb74u: goto label_19bb74;
        default: break;
    }

    ctx->pc = 0x19bb08u;

    // 0x19bb08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19bb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19bb0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bb10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19bb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19bb14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19bb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19bb18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19bb18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bb20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19bb20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb24: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x19bb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x19bb28: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x19bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19bb2c: 0xc0b87b0  jal         func_2E1EC0
    ctx->pc = 0x19BB2Cu;
    SET_GPR_U32(ctx, 31, 0x19BB34u);
    ctx->pc = 0x19BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB2Cu;
    // 0x19bb30: 0x8e050038  lw          $a1, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1EC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1EC0u, 0x19BB2Cu, 0x19BB34u)) {
        return;
    }
    ctx->pc = 0x19BB34u;
label_19bb34:
    // 0x19bb34: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x19bb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19bb38: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x19BB38u;
    SET_GPR_U32(ctx, 31, 0x19BB40u);
    ctx->pc = 0x19BB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB38u;
    // 0x19bb3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1E70u, 0x19BB38u, 0x19BB40u)) {
        return;
    }
    ctx->pc = 0x19BB40u;
label_19bb40:
    // 0x19bb40: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x19bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19bb44: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x19bb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bb48: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x19bb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x19bb4c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x19bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19bb50: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x19bb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x19bb54: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BB54u;
    {
        const bool branch_taken_0x19bb54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB54u;
        // 0x19bb58: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb54) {
            ctx->pc = 0x19BB68u;
            goto label_19bb68;
        }
    }
    ctx->pc = 0x19BB5Cu;
    // 0x19bb5c: 0xc60c0068  lwc1        $f12, 0x68($s0)
    ctx->pc = 0x19bb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19bb60: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x19BB60u;
    SET_GPR_U32(ctx, 31, 0x19BB68u);
    ctx->pc = 0x19BB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB60u;
    // 0x19bb64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x19BB60u, 0x19BB68u)) {
        return;
    }
    ctx->pc = 0x19BB68u;
label_19bb68:
    // 0x19bb68: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x19bb68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19bb6c: 0xc06702a  jal         func_19C0A8
    ctx->pc = 0x19BB6Cu;
    SET_GPR_U32(ctx, 31, 0x19BB74u);
    ctx->pc = 0x19BB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB6Cu;
    // 0x19bb70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19C0A8u, 0x19BB6Cu, 0x19BB74u)) {
        return;
    }
    ctx->pc = 0x19BB74u;
label_19bb74:
    // 0x19bb74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19bb74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19bb78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19bb78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bb7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bb80: 0x3e00008  jr          $ra
    ctx->pc = 0x19BB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB80u;
        // 0x19bb84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BB88u;
}
