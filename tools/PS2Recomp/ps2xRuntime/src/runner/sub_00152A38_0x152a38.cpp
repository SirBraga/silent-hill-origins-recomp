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

// Function: sub_00152A38
// Address: 0x152a38 - 0x152b20
void sub_00152A38_0x152a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152A38_0x152a38");
#endif

    switch (ctx->pc) {
        case 0x152a84u: goto label_152a84;
        case 0x152a94u: goto label_152a94;
        case 0x152aa4u: goto label_152aa4;
        case 0x152ab8u: goto label_152ab8;
        case 0x152ac0u: goto label_152ac0;
        case 0x152ad4u: goto label_152ad4;
        case 0x152adcu: goto label_152adc;
        case 0x152af0u: goto label_152af0;
        case 0x152af8u: goto label_152af8;
        case 0x152b04u: goto label_152b04;
        default: break;
    }

    ctx->pc = 0x152a38u;

    // 0x152a38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x152a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x152a3c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x152a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x152a40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x152a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x152a44: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x152a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x152a48: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x152a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x152a4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x152a4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a50: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x152a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x152a54: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x152a54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a58: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x152a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x152a5c: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x152a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x152a60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152a64: 0x246325a0  addiu       $v1, $v1, 0x25A0
    ctx->pc = 0x152a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9632));
    // 0x152a68: 0x26510038  addiu       $s1, $s2, 0x38
    ctx->pc = 0x152a68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x152a6c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x152a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x152a70: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x152a70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x152a74: 0x24a58918  addiu       $a1, $a1, -0x76E8
    ctx->pc = 0x152a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    // 0x152a78: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x152a78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x152a7c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x152A7Cu;
    SET_GPR_U32(ctx, 31, 0x152A84u);
    ctx->pc = 0x152A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A7Cu;
    // 0x152a80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x152A7Cu, 0x152A84u)) {
        return;
    }
    ctx->pc = 0x152A84u;
label_152a84:
    // 0x152a84: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x152a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x152a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a8c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x152A8Cu;
    SET_GPR_U32(ctx, 31, 0x152A94u);
    ctx->pc = 0x152A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A8Cu;
    // 0x152a90: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x152A8Cu, 0x152A94u)) {
        return;
    }
    ctx->pc = 0x152A94u;
label_152a94:
    // 0x152a94: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x152a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x152a98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a9c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x152A9Cu;
    SET_GPR_U32(ctx, 31, 0x152AA4u);
    ctx->pc = 0x152AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A9Cu;
    // 0x152aa0: 0x24a5eff8  addiu       $a1, $a1, -0x1008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x152A9Cu, 0x152AA4u)) {
        return;
    }
    ctx->pc = 0x152AA4u;
label_152aa4:
    // 0x152aa4: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x152aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x152aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152aac: 0x26104548  addiu       $s0, $s0, 0x4548
    ctx->pc = 0x152aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17736));
    // 0x152ab0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x152AB0u;
    SET_GPR_U32(ctx, 31, 0x152AB8u);
    ctx->pc = 0x152AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152AB0u;
    // 0x152ab4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x152AB0u, 0x152AB8u)) {
        return;
    }
    ctx->pc = 0x152AB8u;
label_152ab8:
    // 0x152ab8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x152AB8u;
    SET_GPR_U32(ctx, 31, 0x152AC0u);
    ctx->pc = 0x152ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152AB8u;
    // 0x152abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x152AB8u, 0x152AC0u)) {
        return;
    }
    ctx->pc = 0x152AC0u;
label_152ac0:
    // 0x152ac0: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x152ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x152ac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ac8: 0x2610efe8  addiu       $s0, $s0, -0x1018
    ctx->pc = 0x152ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963176));
    // 0x152acc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x152ACCu;
    SET_GPR_U32(ctx, 31, 0x152AD4u);
    ctx->pc = 0x152AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152ACCu;
    // 0x152ad0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x152ACCu, 0x152AD4u)) {
        return;
    }
    ctx->pc = 0x152AD4u;
label_152ad4:
    // 0x152ad4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x152AD4u;
    SET_GPR_U32(ctx, 31, 0x152ADCu);
    ctx->pc = 0x152AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152AD4u;
    // 0x152ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x152AD4u, 0x152ADCu)) {
        return;
    }
    ctx->pc = 0x152ADCu;
label_152adc:
    // 0x152adc: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x152adcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x152ae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ae4: 0x2610eff0  addiu       $s0, $s0, -0x1010
    ctx->pc = 0x152ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963184));
    // 0x152ae8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x152AE8u;
    SET_GPR_U32(ctx, 31, 0x152AF0u);
    ctx->pc = 0x152AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152AE8u;
    // 0x152aec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x152AE8u, 0x152AF0u)) {
        return;
    }
    ctx->pc = 0x152AF0u;
label_152af0:
    // 0x152af0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x152AF0u;
    SET_GPR_U32(ctx, 31, 0x152AF8u);
    ctx->pc = 0x152AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152AF0u;
    // 0x152af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x152AF0u, 0x152AF8u)) {
        return;
    }
    ctx->pc = 0x152AF8u;
label_152af8:
    // 0x152af8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x152af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152afc: 0xc04f084  jal         func_13C210
    ctx->pc = 0x152AFCu;
    SET_GPR_U32(ctx, 31, 0x152B04u);
    ctx->pc = 0x152B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152AFCu;
    // 0x152b00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x152AFCu, 0x152B04u)) {
        return;
    }
    ctx->pc = 0x152B04u;
label_152b04:
    // 0x152b04: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x152b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152b08: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x152b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152b0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x152b0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152b10: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x152b10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152b18: 0x3e00008  jr          $ra
    ctx->pc = 0x152B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B18u;
        // 0x152b1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152B20u;
}
