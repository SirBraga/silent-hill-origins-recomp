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

// Function: sub_002D2E08
// Address: 0x2d2e08 - 0x2d2ea0
void sub_002D2E08_0x2d2e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2E08_0x2d2e08");
#endif

    switch (ctx->pc) {
        case 0x2d2e58u: goto label_2d2e58;
        case 0x2d2e78u: goto label_2d2e78;
        default: break;
    }

    ctx->pc = 0x2d2e08u;

    // 0x2d2e08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d2e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d2e0c: 0x340b8000  ori         $t3, $zero, 0x8000
    ctx->pc = 0x2d2e0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d2e10: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2d2e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2d2e14: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2d2e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2d2e18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d2e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d2e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d2e20: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2d2e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e24: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2d2e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2d2e28: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2d2e28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e2c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2d2e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2d2e30: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2d2e30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2e38: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2d2e38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e3c: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x2d2e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x2d2e40: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x2d2e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2d2e44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d2e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d2e48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d2e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d2e4c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2d2e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2d2e50: 0xc0b4a44  jal         func_2D2910
    ctx->pc = 0x2D2E50u;
    SET_GPR_U32(ctx, 31, 0x2D2E58u);
    ctx->pc = 0x2D2E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E50u;
    // 0x2d2e54: 0x8c474018  lw          $a3, 0x4018($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2910u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D2910u, 0x2D2E50u, 0x2D2E58u)) {
        return;
    }
    ctx->pc = 0x2D2E58u;
label_2d2e58:
    // 0x2d2e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e5c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2d2e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e60: 0x8c850080  lw          $a1, 0x80($a0)
    ctx->pc = 0x2d2e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2d2e64: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2d2e64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e68: 0x8c860084  lw          $a2, 0x84($a0)
    ctx->pc = 0x2d2e68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x2d2e6c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2d2e6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e70: 0xc0b2e16  jal         func_2CB858
    ctx->pc = 0x2D2E70u;
    SET_GPR_U32(ctx, 31, 0x2D2E78u);
    ctx->pc = 0x2D2E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E70u;
    // 0x2d2e74: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CB858u, 0x2D2E70u, 0x2D2E78u)) {
        return;
    }
    ctx->pc = 0x2D2E78u;
label_2d2e78:
    // 0x2d2e78: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2d2e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2e7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2e80: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2d2e80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2e84: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d2e84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2e88: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2d2e88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2e8c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2d2e8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d2e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2e94: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2E94u;
        // 0x2d2e98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2E9Cu;
    // 0x2d2e9c: 0x0  nop
    ctx->pc = 0x2d2e9cu;
    // NOP
    ctx->pc = 0x2d2ea0u;
}
