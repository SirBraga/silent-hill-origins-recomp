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

// Function: sub_00169DE0
// Address: 0x169de0 - 0x169eb8
void sub_00169DE0_0x169de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169DE0_0x169de0");
#endif

    switch (ctx->pc) {
        case 0x169e34u: goto label_169e34;
        case 0x169e44u: goto label_169e44;
        case 0x169e4cu: goto label_169e4c;
        case 0x169e58u: goto label_169e58;
        case 0x169e60u: goto label_169e60;
        case 0x169e6cu: goto label_169e6c;
        case 0x169e78u: goto label_169e78;
        case 0x169e84u: goto label_169e84;
        case 0x169e90u: goto label_169e90;
        default: break;
    }

    ctx->pc = 0x169de0u;

    // 0x169de0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x169de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x169de4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x169de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x169de8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x169de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x169dec: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x169decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x169df0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x169df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x169df4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x169df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169df8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x169df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x169dfc: 0x24424490  addiu       $v0, $v0, 0x4490
    ctx->pc = 0x169dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17552));
    // 0x169e00: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x169e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x169e04: 0x24634448  addiu       $v1, $v1, 0x4448
    ctx->pc = 0x169e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17480));
    // 0x169e08: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x169e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x169e0c: 0x26320044  addiu       $s2, $s1, 0x44
    ctx->pc = 0x169e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x169e10: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x169e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x169e14: 0x26330038  addiu       $s3, $s1, 0x38
    ctx->pc = 0x169e14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x169e18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169e1c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x169e1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e20: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x169e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x169e24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x169e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e28: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x169e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x169e2c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x169E2Cu;
    SET_GPR_U32(ctx, 31, 0x169E34u);
    ctx->pc = 0x169E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E2Cu;
    // 0x169e30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x169E2Cu, 0x169E34u)) {
        return;
    }
    ctx->pc = 0x169E34u;
label_169e34:
    // 0x169e34: 0x2634004c  addiu       $s4, $s1, 0x4C
    ctx->pc = 0x169e34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x169e38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x169e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e3c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x169E3Cu;
    SET_GPR_U32(ctx, 31, 0x169E44u);
    ctx->pc = 0x169E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E3Cu;
    // 0x169e40: 0x26300054  addiu       $s0, $s1, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x169E3Cu, 0x169E44u)) {
        return;
    }
    ctx->pc = 0x169E44u;
label_169e44:
    // 0x169e44: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x169E44u;
    SET_GPR_U32(ctx, 31, 0x169E4Cu);
    ctx->pc = 0x169E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E44u;
    // 0x169e48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x169E44u, 0x169E4Cu)) {
        return;
    }
    ctx->pc = 0x169E4Cu;
label_169e4c:
    // 0x169e4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x169e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e50: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x169E50u;
    SET_GPR_U32(ctx, 31, 0x169E58u);
    ctx->pc = 0x169E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E50u;
    // 0x169e54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x169E50u, 0x169E58u)) {
        return;
    }
    ctx->pc = 0x169E58u;
label_169e58:
    // 0x169e58: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x169E58u;
    SET_GPR_U32(ctx, 31, 0x169E60u);
    ctx->pc = 0x169E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E58u;
    // 0x169e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x169E58u, 0x169E60u)) {
        return;
    }
    ctx->pc = 0x169E60u;
label_169e60:
    // 0x169e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e64: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x169E64u;
    SET_GPR_U32(ctx, 31, 0x169E6Cu);
    ctx->pc = 0x169E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E64u;
    // 0x169e68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x169E64u, 0x169E6Cu)) {
        return;
    }
    ctx->pc = 0x169E6Cu;
label_169e6c:
    // 0x169e6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x169e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e70: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x169E70u;
    SET_GPR_U32(ctx, 31, 0x169E78u);
    ctx->pc = 0x169E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E70u;
    // 0x169e74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x169E70u, 0x169E78u)) {
        return;
    }
    ctx->pc = 0x169E78u;
label_169e78:
    // 0x169e78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x169e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e7c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x169E7Cu;
    SET_GPR_U32(ctx, 31, 0x169E84u);
    ctx->pc = 0x169E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E7Cu;
    // 0x169e80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x169E7Cu, 0x169E84u)) {
        return;
    }
    ctx->pc = 0x169E84u;
label_169e84:
    // 0x169e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e88: 0xc04f084  jal         func_13C210
    ctx->pc = 0x169E88u;
    SET_GPR_U32(ctx, 31, 0x169E90u);
    ctx->pc = 0x169E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E88u;
    // 0x169e8c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x169E88u, 0x169E90u)) {
        return;
    }
    ctx->pc = 0x169E90u;
label_169e90:
    // 0x169e90: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x169e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169e94: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x169e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x169e98: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x169e98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x169e9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x169e9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169ea0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x169ea0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169ea4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x169ea4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169eac: 0x3e00008  jr          $ra
    ctx->pc = 0x169EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EACu;
        // 0x169eb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169EB4u;
    // 0x169eb4: 0x0  nop
    ctx->pc = 0x169eb4u;
    // NOP
    ctx->pc = 0x169eb8u;
}
