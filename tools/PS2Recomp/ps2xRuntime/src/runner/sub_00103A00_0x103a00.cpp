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

// Function: sub_00103A00
// Address: 0x103a00 - 0x103b68
void sub_00103A00_0x103a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103A00_0x103a00");
#endif

    switch (ctx->pc) {
        case 0x103a70u: goto label_103a70;
        case 0x103a90u: goto label_103a90;
        case 0x103aa0u: goto label_103aa0;
        case 0x103ab4u: goto label_103ab4;
        case 0x103ac4u: goto label_103ac4;
        case 0x103ad0u: goto label_103ad0;
        case 0x103ad8u: goto label_103ad8;
        case 0x103ae4u: goto label_103ae4;
        case 0x103aecu: goto label_103aec;
        case 0x103af8u: goto label_103af8;
        case 0x103b00u: goto label_103b00;
        case 0x103b0cu: goto label_103b0c;
        case 0x103b18u: goto label_103b18;
        case 0x103b24u: goto label_103b24;
        case 0x103b30u: goto label_103b30;
        case 0x103b3cu: goto label_103b3c;
        default: break;
    }

    ctx->pc = 0x103a00u;

    // 0x103a00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x103a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x103a04: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x103a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x103a08: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x103a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x103a0c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x103a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x103a10: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x103a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x103a14: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x103a14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a18: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x103a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x103a1c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x103a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x103a20: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x103a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x103a24: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x103a24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x103a28: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x103a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x103a2c: 0x24429738  addiu       $v0, $v0, -0x68C8
    ctx->pc = 0x103a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940472));
    // 0x103a30: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x103a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x103a34: 0x24639618  addiu       $v1, $v1, -0x69E8
    ctx->pc = 0x103a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940184));
    // 0x103a38: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x103a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x103a3c: 0x248495d8  addiu       $a0, $a0, -0x6A28
    ctx->pc = 0x103a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940120));
    // 0x103a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x103a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x103a44: 0x24c69758  addiu       $a2, $a2, -0x68A8
    ctx->pc = 0x103a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940504));
    // 0x103a48: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x103a48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a4c: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x103a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x103a50: 0x8e8700d8  lw          $a3, 0xD8($s4)
    ctx->pc = 0x103a50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x103a54: 0xae830048  sw          $v1, 0x48($s4)
    ctx->pc = 0x103a54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 3));
    // 0x103a58: 0xae840084  sw          $a0, 0x84($s4)
    ctx->pc = 0x103a58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 4));
    // 0x103a5c: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x103A5Cu;
    {
        const bool branch_taken_0x103a5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A5Cu;
        // 0x103a60: 0xae860034  sw          $a2, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a5c) {
            ctx->pc = 0x103A74u;
            goto label_103a74;
        }
    }
    ctx->pc = 0x103A64u;
    // 0x103a64: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x103a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a68: 0xc04207c  jal         func_1081F0
    ctx->pc = 0x103A68u;
    SET_GPR_U32(ctx, 31, 0x103A70u);
    ctx->pc = 0x103A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A68u;
    // 0x103a6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1081F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1081F0u, 0x103A68u, 0x103A70u)) {
        return;
    }
    ctx->pc = 0x103A70u;
label_103a70:
    // 0x103a70: 0xae8000d8  sw          $zero, 0xD8($s4)
    ctx->pc = 0x103a70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 216), GPR_U32(ctx, 0));
label_103a74:
    // 0x103a74: 0x8e8200fc  lw          $v0, 0xFC($s4)
    ctx->pc = 0x103a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
    // 0x103a78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x103A78u;
    {
        const bool branch_taken_0x103a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A78u;
        // 0x103a7c: 0x26950038  addiu       $s5, $s4, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a78) {
            ctx->pc = 0x103AA0u;
            goto label_103aa0;
        }
    }
    ctx->pc = 0x103A80u;
    // 0x103a80: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x103a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x103a84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x103a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a88: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x103A88u;
    SET_GPR_U32(ctx, 31, 0x103A90u);
    ctx->pc = 0x103A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A88u;
    // 0x103a8c: 0x24a5bcf0  addiu       $a1, $a1, -0x4310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x103A88u, 0x103A90u)) {
        return;
    }
    ctx->pc = 0x103A90u;
label_103a90:
    // 0x103a90: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x103a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x103a94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x103a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a98: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x103A98u;
    SET_GPR_U32(ctx, 31, 0x103AA0u);
    ctx->pc = 0x103A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A98u;
    // 0x103a9c: 0x24a5bcf8  addiu       $a1, $a1, -0x4308 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x103A98u, 0x103AA0u)) {
        return;
    }
    ctx->pc = 0x103AA0u;
label_103aa0:
    // 0x103aa0: 0x269300dc  addiu       $s3, $s4, 0xDC
    ctx->pc = 0x103aa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 220));
    // 0x103aa4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x103aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103aa8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x103aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103aac: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x103AACu;
    SET_GPR_U32(ctx, 31, 0x103AB4u);
    ctx->pc = 0x103AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103AACu;
    // 0x103ab0: 0x269200e4  addiu       $s2, $s4, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x103AACu, 0x103AB4u)) {
        return;
    }
    ctx->pc = 0x103AB4u;
label_103ab4:
    // 0x103ab4: 0x269100ec  addiu       $s1, $s4, 0xEC
    ctx->pc = 0x103ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 236));
    // 0x103ab8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x103ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103abc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x103ABCu;
    SET_GPR_U32(ctx, 31, 0x103AC4u);
    ctx->pc = 0x103AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103ABCu;
    // 0x103ac0: 0x269000f4  addiu       $s0, $s4, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x103ABCu, 0x103AC4u)) {
        return;
    }
    ctx->pc = 0x103AC4u;
label_103ac4:
    // 0x103ac4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x103ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ac8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x103AC8u;
    SET_GPR_U32(ctx, 31, 0x103AD0u);
    ctx->pc = 0x103ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103AC8u;
    // 0x103acc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x103AC8u, 0x103AD0u)) {
        return;
    }
    ctx->pc = 0x103AD0u;
label_103ad0:
    // 0x103ad0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x103AD0u;
    SET_GPR_U32(ctx, 31, 0x103AD8u);
    ctx->pc = 0x103AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103AD0u;
    // 0x103ad4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x103AD0u, 0x103AD8u)) {
        return;
    }
    ctx->pc = 0x103AD8u;
label_103ad8:
    // 0x103ad8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x103ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103adc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x103ADCu;
    SET_GPR_U32(ctx, 31, 0x103AE4u);
    ctx->pc = 0x103AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103ADCu;
    // 0x103ae0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x103ADCu, 0x103AE4u)) {
        return;
    }
    ctx->pc = 0x103AE4u;
label_103ae4:
    // 0x103ae4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x103AE4u;
    SET_GPR_U32(ctx, 31, 0x103AECu);
    ctx->pc = 0x103AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103AE4u;
    // 0x103ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x103AE4u, 0x103AECu)) {
        return;
    }
    ctx->pc = 0x103AECu;
label_103aec:
    // 0x103aec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x103aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103af0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x103AF0u;
    SET_GPR_U32(ctx, 31, 0x103AF8u);
    ctx->pc = 0x103AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103AF0u;
    // 0x103af4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x103AF0u, 0x103AF8u)) {
        return;
    }
    ctx->pc = 0x103AF8u;
label_103af8:
    // 0x103af8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x103AF8u;
    SET_GPR_U32(ctx, 31, 0x103B00u);
    ctx->pc = 0x103AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103AF8u;
    // 0x103afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x103AF8u, 0x103B00u)) {
        return;
    }
    ctx->pc = 0x103B00u;
label_103b00:
    // 0x103b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b04: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x103B04u;
    SET_GPR_U32(ctx, 31, 0x103B0Cu);
    ctx->pc = 0x103B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B04u;
    // 0x103b08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x103B04u, 0x103B0Cu)) {
        return;
    }
    ctx->pc = 0x103B0Cu;
label_103b0c:
    // 0x103b0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b10: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x103B10u;
    SET_GPR_U32(ctx, 31, 0x103B18u);
    ctx->pc = 0x103B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B10u;
    // 0x103b14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x103B10u, 0x103B18u)) {
        return;
    }
    ctx->pc = 0x103B18u;
label_103b18:
    // 0x103b18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x103b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b1c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x103B1Cu;
    SET_GPR_U32(ctx, 31, 0x103B24u);
    ctx->pc = 0x103B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B1Cu;
    // 0x103b20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x103B1Cu, 0x103B24u)) {
        return;
    }
    ctx->pc = 0x103B24u;
label_103b24:
    // 0x103b24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x103b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b28: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x103B28u;
    SET_GPR_U32(ctx, 31, 0x103B30u);
    ctx->pc = 0x103B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B28u;
    // 0x103b2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x103B28u, 0x103B30u)) {
        return;
    }
    ctx->pc = 0x103B30u;
label_103b30:
    // 0x103b30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x103b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b34: 0xc04ee16  jal         func_13B858
    ctx->pc = 0x103B34u;
    SET_GPR_U32(ctx, 31, 0x103B3Cu);
    ctx->pc = 0x103B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B34u;
    // 0x103b38: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B858u, 0x103B34u, 0x103B3Cu)) {
        return;
    }
    ctx->pc = 0x103B3Cu;
label_103b3c:
    // 0x103b3c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x103b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x103b40: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x103b40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x103b44: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x103b44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x103b48: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x103b48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103b4c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x103b4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103b50: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x103b50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103b54: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x103b54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103b58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x103b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x103B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B5Cu;
        // 0x103b60: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103B64u;
    // 0x103b64: 0x0  nop
    ctx->pc = 0x103b64u;
    // NOP
    ctx->pc = 0x103b68u;
}
