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

// Function: sub_001C19F0
// Address: 0x1c19f0 - 0x1c1bf8
void sub_001C19F0_0x1c19f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C19F0_0x1c19f0");
#endif

    switch (ctx->pc) {
        case 0x1c1a0cu: goto label_1c1a0c;
        case 0x1c1a64u: goto label_1c1a64;
        case 0x1c1a74u: goto label_1c1a74;
        case 0x1c1a84u: goto label_1c1a84;
        case 0x1c1a94u: goto label_1c1a94;
        case 0x1c1aa4u: goto label_1c1aa4;
        case 0x1c1ac8u: goto label_1c1ac8;
        case 0x1c1adcu: goto label_1c1adc;
        case 0x1c1aecu: goto label_1c1aec;
        case 0x1c1b04u: goto label_1c1b04;
        case 0x1c1b18u: goto label_1c1b18;
        case 0x1c1b2cu: goto label_1c1b2c;
        case 0x1c1b44u: goto label_1c1b44;
        case 0x1c1b58u: goto label_1c1b58;
        case 0x1c1b6cu: goto label_1c1b6c;
        case 0x1c1b84u: goto label_1c1b84;
        case 0x1c1b98u: goto label_1c1b98;
        case 0x1c1bacu: goto label_1c1bac;
        case 0x1c1bc4u: goto label_1c1bc4;
        case 0x1c1bd8u: goto label_1c1bd8;
        default: break;
    }

    ctx->pc = 0x1c19f0u;

    // 0x1c19f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c19f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c19f4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c19f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1c19f8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c19f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1c19fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c19fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a00: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c1a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1c1a04: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1C1A04u;
    SET_GPR_U32(ctx, 31, 0x1C1A0Cu);
    ctx->pc = 0x1C1A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A04u;
    // 0x1c1a08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1C1A04u, 0x1C1A0Cu)) {
        return;
    }
    ctx->pc = 0x1C1A0Cu;
label_1c1a0c:
    // 0x1c1a0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1c1a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1c1a10: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x1c1a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x1c1a14: 0x2463de18  addiu       $v1, $v1, -0x21E8
    ctx->pc = 0x1c1a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958616));
    // 0x1c1a18: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1c1a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1c1a1c: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1c1a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x1c1a20: 0x2604027c  addiu       $a0, $s0, 0x27C
    ctx->pc = 0x1c1a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 636));
    // 0x1c1a24: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x1c1a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x1c1a28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a2c: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x1c1a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
    // 0x1c1a30: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x1c1a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c1a34: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x1c1a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x1c1a38: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x1c1a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
    // 0x1c1a3c: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x1c1a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
    // 0x1c1a40: 0xae0002a4  sw          $zero, 0x2A4($s0)
    ctx->pc = 0x1c1a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
    // 0x1c1a44: 0xae0002a8  sw          $zero, 0x2A8($s0)
    ctx->pc = 0x1c1a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
    // 0x1c1a48: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x1c1a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
    // 0x1c1a4c: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x1c1a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
    // 0x1c1a50: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x1c1a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    // 0x1c1a54: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x1c1a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x1c1a58: 0xae0002cc  sw          $zero, 0x2CC($s0)
    ctx->pc = 0x1c1a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
    // 0x1c1a5c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C1A5Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A64u);
    ctx->pc = 0x1C1A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A5Cu;
    // 0x1c1a60: 0xae030258  sw          $v1, 0x258($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C1A5Cu, 0x1C1A64u)) {
        return;
    }
    ctx->pc = 0x1C1A64u;
label_1c1a64:
    // 0x1c1a64: 0x260402bc  addiu       $a0, $s0, 0x2BC
    ctx->pc = 0x1c1a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 700));
    // 0x1c1a68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a6c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C1A6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A74u);
    ctx->pc = 0x1C1A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A6Cu;
    // 0x1c1a70: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C1A6Cu, 0x1C1A74u)) {
        return;
    }
    ctx->pc = 0x1C1A74u;
label_1c1a74:
    // 0x1c1a74: 0x260402c4  addiu       $a0, $s0, 0x2C4
    ctx->pc = 0x1c1a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 708));
    // 0x1c1a78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a7c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C1A7Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A84u);
    ctx->pc = 0x1C1A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A7Cu;
    // 0x1c1a80: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C1A7Cu, 0x1C1A84u)) {
        return;
    }
    ctx->pc = 0x1C1A84u;
label_1c1a84:
    // 0x1c1a84: 0x260402d0  addiu       $a0, $s0, 0x2D0
    ctx->pc = 0x1c1a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    // 0x1c1a88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a8c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C1A8Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A94u);
    ctx->pc = 0x1C1A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A8Cu;
    // 0x1c1a90: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C1A8Cu, 0x1C1A94u)) {
        return;
    }
    ctx->pc = 0x1C1A94u;
label_1c1a94:
    // 0x1c1a94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a98: 0x260402d8  addiu       $a0, $s0, 0x2D8
    ctx->pc = 0x1c1a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 728));
    // 0x1c1a9c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C1A9Cu;
    SET_GPR_U32(ctx, 31, 0x1C1AA4u);
    ctx->pc = 0x1C1AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A9Cu;
    // 0x1c1aa0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C1A9Cu, 0x1C1AA4u)) {
        return;
    }
    ctx->pc = 0x1C1AA4u;
label_1c1aa4:
    // 0x1c1aa4: 0x3c014041  lui         $at, 0x4041
    ctx->pc = 0x1c1aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16449 << 16));
    // 0x1c1aa8: 0x3421f07c  ori         $at, $at, 0xF07C
    ctx->pc = 0x1c1aa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61564);
    // 0x1c1aac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1ab0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c1ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c1ab4: 0x24a5dd98  addiu       $a1, $a1, -0x2268
    ctx->pc = 0x1c1ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958488));
    // 0x1c1ab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1abc: 0xe60002cc  swc1        $f0, 0x2CC($s0)
    ctx->pc = 0x1c1abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 716), bits); }
    // 0x1c1ac0: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1C1AC0u;
    SET_GPR_U32(ctx, 31, 0x1C1AC8u);
    ctx->pc = 0x1C1AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1AC0u;
    // 0x1c1ac4: 0x26060274  addiu       $a2, $s0, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1C1AC0u, 0x1C1AC8u)) {
        return;
    }
    ctx->pc = 0x1C1AC8u;
label_1c1ac8:
    // 0x1c1ac8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c1ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c1acc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ad0: 0x24a5ddb0  addiu       $a1, $a1, -0x2250
    ctx->pc = 0x1c1ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958512));
    // 0x1c1ad4: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1C1AD4u;
    SET_GPR_U32(ctx, 31, 0x1C1ADCu);
    ctx->pc = 0x1C1AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1AD4u;
    // 0x1c1ad8: 0x26060278  addiu       $a2, $s0, 0x278 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1C1AD4u, 0x1C1ADCu)) {
        return;
    }
    ctx->pc = 0x1C1ADCu;
label_1c1adc:
    // 0x1c1adc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c1adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ae4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C1AE4u;
    SET_GPR_U32(ctx, 31, 0x1C1AECu);
    ctx->pc = 0x1C1AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1AE4u;
    // 0x1c1ae8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C1AE4u, 0x1C1AECu)) {
        return;
    }
    ctx->pc = 0x1C1AECu;
label_1c1aec:
    // 0x1c1aec: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c1aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c1af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1af4: 0x24a5ddc0  addiu       $a1, $a1, -0x2240
    ctx->pc = 0x1c1af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958528));
    // 0x1c1af8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c1af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1afc: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C1AFCu;
    SET_GPR_U32(ctx, 31, 0x1C1B04u);
    ctx->pc = 0x1C1B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1AFCu;
    // 0x1c1b00: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C1AFCu, 0x1C1B04u)) {
        return;
    }
    ctx->pc = 0x1C1B04u;
label_1c1b04:
    // 0x1c1b04: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c1b04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1b08: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1B08u;
    {
        const bool branch_taken_0x1c1b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B08u;
        // 0x1c1b0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b08) {
            ctx->pc = 0x1C1B1Cu;
            goto label_1c1b1c;
        }
    }
    ctx->pc = 0x1C1B10u;
    // 0x1c1b10: 0xc065c40  jal         func_197100
    ctx->pc = 0x1C1B10u;
    SET_GPR_U32(ctx, 31, 0x1C1B18u);
    ctx->pc = 0x1C1B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B10u;
    // 0x1c1b14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1C1B10u, 0x1C1B18u)) {
        return;
    }
    ctx->pc = 0x1C1B18u;
label_1c1b18:
    // 0x1c1b18: 0xae02029c  sw          $v0, 0x29C($s0)
    ctx->pc = 0x1c1b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
label_1c1b1c:
    // 0x1c1b1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c1b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b24: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C1B24u;
    SET_GPR_U32(ctx, 31, 0x1C1B2Cu);
    ctx->pc = 0x1C1B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B24u;
    // 0x1c1b28: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C1B24u, 0x1C1B2Cu)) {
        return;
    }
    ctx->pc = 0x1C1B2Cu;
label_1c1b2c:
    // 0x1c1b2c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c1b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c1b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b34: 0x24a5ddd0  addiu       $a1, $a1, -0x2230
    ctx->pc = 0x1c1b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958544));
    // 0x1c1b38: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c1b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b3c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C1B3Cu;
    SET_GPR_U32(ctx, 31, 0x1C1B44u);
    ctx->pc = 0x1C1B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B3Cu;
    // 0x1c1b40: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C1B3Cu, 0x1C1B44u)) {
        return;
    }
    ctx->pc = 0x1C1B44u;
label_1c1b44:
    // 0x1c1b44: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c1b44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1b48: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1B48u;
    {
        const bool branch_taken_0x1c1b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B48u;
        // 0x1c1b4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b48) {
            ctx->pc = 0x1C1B5Cu;
            goto label_1c1b5c;
        }
    }
    ctx->pc = 0x1C1B50u;
    // 0x1c1b50: 0xc065c40  jal         func_197100
    ctx->pc = 0x1C1B50u;
    SET_GPR_U32(ctx, 31, 0x1C1B58u);
    ctx->pc = 0x1C1B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B50u;
    // 0x1c1b54: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1C1B50u, 0x1C1B58u)) {
        return;
    }
    ctx->pc = 0x1C1B58u;
label_1c1b58:
    // 0x1c1b58: 0xae0202a0  sw          $v0, 0x2A0($s0)
    ctx->pc = 0x1c1b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 2));
label_1c1b5c:
    // 0x1c1b5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c1b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b64: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C1B64u;
    SET_GPR_U32(ctx, 31, 0x1C1B6Cu);
    ctx->pc = 0x1C1B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B64u;
    // 0x1c1b68: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C1B64u, 0x1C1B6Cu)) {
        return;
    }
    ctx->pc = 0x1C1B6Cu;
label_1c1b6c:
    // 0x1c1b6c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c1b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c1b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b74: 0x24a5dde0  addiu       $a1, $a1, -0x2220
    ctx->pc = 0x1c1b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958560));
    // 0x1c1b78: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c1b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b7c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C1B7Cu;
    SET_GPR_U32(ctx, 31, 0x1C1B84u);
    ctx->pc = 0x1C1B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B7Cu;
    // 0x1c1b80: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C1B7Cu, 0x1C1B84u)) {
        return;
    }
    ctx->pc = 0x1C1B84u;
label_1c1b84:
    // 0x1c1b84: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c1b84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1b88: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1B88u;
    {
        const bool branch_taken_0x1c1b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B88u;
        // 0x1c1b8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b88) {
            ctx->pc = 0x1C1B9Cu;
            goto label_1c1b9c;
        }
    }
    ctx->pc = 0x1C1B90u;
    // 0x1c1b90: 0xc065c40  jal         func_197100
    ctx->pc = 0x1C1B90u;
    SET_GPR_U32(ctx, 31, 0x1C1B98u);
    ctx->pc = 0x1C1B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B90u;
    // 0x1c1b94: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1C1B90u, 0x1C1B98u)) {
        return;
    }
    ctx->pc = 0x1C1B98u;
label_1c1b98:
    // 0x1c1b98: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x1c1b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
label_1c1b9c:
    // 0x1c1b9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c1b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ba4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C1BA4u;
    SET_GPR_U32(ctx, 31, 0x1C1BACu);
    ctx->pc = 0x1C1BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1BA4u;
    // 0x1c1ba8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C1BA4u, 0x1C1BACu)) {
        return;
    }
    ctx->pc = 0x1C1BACu;
label_1c1bac:
    // 0x1c1bac: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c1bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c1bb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1bb4: 0x24a5dde8  addiu       $a1, $a1, -0x2218
    ctx->pc = 0x1c1bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958568));
    // 0x1c1bb8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c1bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1bbc: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C1BBCu;
    SET_GPR_U32(ctx, 31, 0x1C1BC4u);
    ctx->pc = 0x1C1BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1BBCu;
    // 0x1c1bc0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C1BBCu, 0x1C1BC4u)) {
        return;
    }
    ctx->pc = 0x1C1BC4u;
label_1c1bc4:
    // 0x1c1bc4: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c1bc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1bc8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1BC8u;
    {
        const bool branch_taken_0x1c1bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BC8u;
        // 0x1c1bcc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bc8) {
            ctx->pc = 0x1C1BDCu;
            goto label_1c1bdc;
        }
    }
    ctx->pc = 0x1C1BD0u;
    // 0x1c1bd0: 0xc065c40  jal         func_197100
    ctx->pc = 0x1C1BD0u;
    SET_GPR_U32(ctx, 31, 0x1C1BD8u);
    ctx->pc = 0x1C1BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1BD0u;
    // 0x1c1bd4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1C1BD0u, 0x1C1BD8u)) {
        return;
    }
    ctx->pc = 0x1C1BD8u;
label_1c1bd8:
    // 0x1c1bd8: 0xae0202b0  sw          $v0, 0x2B0($s0)
    ctx->pc = 0x1c1bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 2));
label_1c1bdc:
    // 0x1c1bdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c1bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1be0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c1be0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c1be4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c1be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c1be8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c1be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c1bec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BECu;
        // 0x1c1bf0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1BF4u;
    // 0x1c1bf4: 0x0  nop
    ctx->pc = 0x1c1bf4u;
    // NOP
    ctx->pc = 0x1c1bf8u;
}
