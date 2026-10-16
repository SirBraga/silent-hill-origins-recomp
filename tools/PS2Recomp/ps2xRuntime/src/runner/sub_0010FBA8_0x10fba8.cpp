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

// Function: sub_0010FBA8
// Address: 0x10fba8 - 0x10fc90
void sub_0010FBA8_0x10fba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FBA8_0x10fba8");
#endif

    switch (ctx->pc) {
        case 0x10fbf4u: goto label_10fbf4;
        case 0x10fc04u: goto label_10fc04;
        case 0x10fc14u: goto label_10fc14;
        case 0x10fc24u: goto label_10fc24;
        case 0x10fc34u: goto label_10fc34;
        case 0x10fc48u: goto label_10fc48;
        case 0x10fc50u: goto label_10fc50;
        case 0x10fc58u: goto label_10fc58;
        case 0x10fc60u: goto label_10fc60;
        case 0x10fc68u: goto label_10fc68;
        case 0x10fc74u: goto label_10fc74;
        default: break;
    }

    ctx->pc = 0x10fba8u;

    // 0x10fba8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10fba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10fbac: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x10fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x10fbb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10fbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10fbb4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x10fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x10fbb8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10fbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x10fbbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10fbbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fbc0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10fbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10fbc4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x10fbc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fbc8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10fbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x10fbcc: 0x2442a318  addiu       $v0, $v0, -0x5CE8
    ctx->pc = 0x10fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943512));
    // 0x10fbd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10fbd4: 0x2463a338  addiu       $v1, $v1, -0x5CC8
    ctx->pc = 0x10fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943544));
    // 0x10fbd8: 0x26510038  addiu       $s1, $s2, 0x38
    ctx->pc = 0x10fbd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x10fbdc: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x10fbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x10fbe0: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x10fbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x10fbe4: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x10fbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x10fbe8: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x10fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x10fbec: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10FBECu;
    SET_GPR_U32(ctx, 31, 0x10FBF4u);
    ctx->pc = 0x10FBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FBECu;
    // 0x10fbf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10FBECu, 0x10FBF4u)) {
        return;
    }
    ctx->pc = 0x10FBF4u;
label_10fbf4:
    // 0x10fbf4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x10fbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x10fbf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10fbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fbfc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10FBFCu;
    SET_GPR_U32(ctx, 31, 0x10FC04u);
    ctx->pc = 0x10FC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FBFCu;
    // 0x10fc00: 0x24a58898  addiu       $a1, $a1, -0x7768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10FBFCu, 0x10FC04u)) {
        return;
    }
    ctx->pc = 0x10FC04u;
label_10fc04:
    // 0x10fc04: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x10fc04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x10fc08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10fc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc0c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10FC0Cu;
    SET_GPR_U32(ctx, 31, 0x10FC14u);
    ctx->pc = 0x10FC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC0Cu;
    // 0x10fc10: 0x24a5f8c0  addiu       $a1, $a1, -0x740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10FC0Cu, 0x10FC14u)) {
        return;
    }
    ctx->pc = 0x10FC14u;
label_10fc14:
    // 0x10fc14: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x10fc14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x10fc18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10fc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc1c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10FC1Cu;
    SET_GPR_U32(ctx, 31, 0x10FC24u);
    ctx->pc = 0x10FC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC1Cu;
    // 0x10fc20: 0x24a54318  addiu       $a1, $a1, 0x4318 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10FC1Cu, 0x10FC24u)) {
        return;
    }
    ctx->pc = 0x10FC24u;
label_10fc24:
    // 0x10fc24: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x10fc24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x10fc28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10fc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc2c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10FC2Cu;
    SET_GPR_U32(ctx, 31, 0x10FC34u);
    ctx->pc = 0x10FC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC2Cu;
    // 0x10fc30: 0x24a54320  addiu       $a1, $a1, 0x4320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10FC2Cu, 0x10FC34u)) {
        return;
    }
    ctx->pc = 0x10FC34u;
label_10fc34:
    // 0x10fc34: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x10fc34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x10fc38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10fc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc3c: 0x26104370  addiu       $s0, $s0, 0x4370
    ctx->pc = 0x10fc3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17264));
    // 0x10fc40: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10FC40u;
    SET_GPR_U32(ctx, 31, 0x10FC48u);
    ctx->pc = 0x10FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC40u;
    // 0x10fc44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10FC40u, 0x10FC48u)) {
        return;
    }
    ctx->pc = 0x10FC48u;
label_10fc48:
    // 0x10fc48: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x10FC48u;
    SET_GPR_U32(ctx, 31, 0x10FC50u);
    ctx->pc = 0x10FC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC48u;
    // 0x10fc4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x10FC48u, 0x10FC50u)) {
        return;
    }
    ctx->pc = 0x10FC50u;
label_10fc50:
    // 0x10fc50: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x10FC50u;
    SET_GPR_U32(ctx, 31, 0x10FC58u);
    ctx->pc = 0x10FC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC50u;
    // 0x10fc54: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x10FC50u, 0x10FC58u)) {
        return;
    }
    ctx->pc = 0x10FC58u;
label_10fc58:
    // 0x10fc58: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x10FC58u;
    SET_GPR_U32(ctx, 31, 0x10FC60u);
    ctx->pc = 0x10FC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC58u;
    // 0x10fc5c: 0x8e44004c  lw          $a0, 0x4C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x10FC58u, 0x10FC60u)) {
        return;
    }
    ctx->pc = 0x10FC60u;
label_10fc60:
    // 0x10fc60: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x10FC60u;
    SET_GPR_U32(ctx, 31, 0x10FC68u);
    ctx->pc = 0x10FC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC60u;
    // 0x10fc64: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x10FC60u, 0x10FC68u)) {
        return;
    }
    ctx->pc = 0x10FC68u;
label_10fc68:
    // 0x10fc68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10fc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc6c: 0xc04f084  jal         func_13C210
    ctx->pc = 0x10FC6Cu;
    SET_GPR_U32(ctx, 31, 0x10FC74u);
    ctx->pc = 0x10FC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC6Cu;
    // 0x10fc70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x10FC6Cu, 0x10FC74u)) {
        return;
    }
    ctx->pc = 0x10FC74u;
label_10fc74:
    // 0x10fc74: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10fc74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10fc78: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10fc78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10fc7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10fc7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fc80: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x10fc80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fc84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fc88: 0x3e00008  jr          $ra
    ctx->pc = 0x10FC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC88u;
        // 0x10fc8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FC90u;
}
