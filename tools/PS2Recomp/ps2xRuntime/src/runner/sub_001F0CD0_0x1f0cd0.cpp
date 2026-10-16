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

// Function: sub_001F0CD0
// Address: 0x1f0cd0 - 0x1f0e88
void sub_001F0CD0_0x1f0cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0CD0_0x1f0cd0");
#endif

    switch (ctx->pc) {
        case 0x1f0cf4u: goto label_1f0cf4;
        case 0x1f0d04u: goto label_1f0d04;
        case 0x1f0d4cu: goto label_1f0d4c;
        case 0x1f0d54u: goto label_1f0d54;
        case 0x1f0d5cu: goto label_1f0d5c;
        case 0x1f0d64u: goto label_1f0d64;
        case 0x1f0d70u: goto label_1f0d70;
        case 0x1f0d78u: goto label_1f0d78;
        case 0x1f0d9cu: goto label_1f0d9c;
        case 0x1f0da4u: goto label_1f0da4;
        case 0x1f0db0u: goto label_1f0db0;
        case 0x1f0dbcu: goto label_1f0dbc;
        case 0x1f0dd0u: goto label_1f0dd0;
        case 0x1f0de0u: goto label_1f0de0;
        case 0x1f0df0u: goto label_1f0df0;
        case 0x1f0dfcu: goto label_1f0dfc;
        case 0x1f0e04u: goto label_1f0e04;
        case 0x1f0e18u: goto label_1f0e18;
        case 0x1f0e28u: goto label_1f0e28;
        case 0x1f0e44u: goto label_1f0e44;
        case 0x1f0e50u: goto label_1f0e50;
        case 0x1f0e5cu: goto label_1f0e5c;
        default: break;
    }

    ctx->pc = 0x1f0cd0u;

    // 0x1f0cd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f0cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f0cd4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1f0cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1f0cd8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1f0cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1f0cdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f0cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ce0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f0ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f0ce4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f0ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ce8: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1f0ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x1f0cec: 0xc08ab50  jal         func_22AD40
    ctx->pc = 0x1F0CECu;
    SET_GPR_U32(ctx, 31, 0x1F0CF4u);
    ctx->pc = 0x1F0CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0CECu;
    // 0x1f0cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AD40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AD40u, 0x1F0CECu, 0x1F0CF4u)) {
        return;
    }
    ctx->pc = 0x1F0CF4u;
label_1f0cf4:
    // 0x1f0cf4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1f0cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f0cf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f0cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0cfc: 0xc091c52  jal         func_247148
    ctx->pc = 0x1F0CFCu;
    SET_GPR_U32(ctx, 31, 0x1F0D04u);
    ctx->pc = 0x1F0D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0CFCu;
    // 0x1f0d00: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247148u, 0x1F0CFCu, 0x1F0D04u)) {
        return;
    }
    ctx->pc = 0x1F0D04u;
label_1f0d04:
    // 0x1f0d04: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1f0d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1f0d08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f0d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0d0c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1f0d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1f0d10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f0d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0d14: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x1f0d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x1f0d18: 0x3c01c2c8  lui         $at, 0xC2C8
    ctx->pc = 0x1f0d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49864 << 16));
    // 0x1f0d1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0d20: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1f0d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1f0d24: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1f0d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1f0d28: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1f0d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x1f0d2c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1f0d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f0d30: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1f0d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f0d34: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1f0d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1f0d38: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1f0d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1f0d3c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1f0d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1f0d40: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1f0d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f0d44: 0xc097202  jal         func_25C808
    ctx->pc = 0x1F0D44u;
    SET_GPR_U32(ctx, 31, 0x1F0D4Cu);
    ctx->pc = 0x1F0D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0D44u;
    // 0x1f0d48: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C808u, 0x1F0D44u, 0x1F0D4Cu)) {
        return;
    }
    ctx->pc = 0x1F0D4Cu;
label_1f0d4c:
    // 0x1f0d4c: 0xc089892  jal         func_226248
    ctx->pc = 0x1F0D4Cu;
    SET_GPR_U32(ctx, 31, 0x1F0D54u);
    ctx->pc = 0x1F0D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0D4Cu;
    // 0x1f0d50: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x1F0D4Cu, 0x1F0D54u)) {
        return;
    }
    ctx->pc = 0x1F0D54u;
label_1f0d54:
    // 0x1f0d54: 0xc089892  jal         func_226248
    ctx->pc = 0x1F0D54u;
    SET_GPR_U32(ctx, 31, 0x1F0D5Cu);
    ctx->pc = 0x1F0D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0D54u;
    // 0x1f0d58: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x1F0D54u, 0x1F0D5Cu)) {
        return;
    }
    ctx->pc = 0x1F0D5Cu;
label_1f0d5c:
    // 0x1f0d5c: 0xc08949c  jal         func_225270
    ctx->pc = 0x1F0D5Cu;
    SET_GPR_U32(ctx, 31, 0x1F0D64u);
    ctx->pc = 0x1F0D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0D5Cu;
    // 0x1f0d60: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225270u, 0x1F0D5Cu, 0x1F0D64u)) {
        return;
    }
    ctx->pc = 0x1F0D64u;
label_1f0d64:
    // 0x1f0d64: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1f0d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f0d68: 0xc095e0c  jal         func_257830
    ctx->pc = 0x1F0D68u;
    SET_GPR_U32(ctx, 31, 0x1F0D70u);
    ctx->pc = 0x1F0D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0D68u;
    // 0x1f0d6c: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257830u, 0x1F0D68u, 0x1F0D70u)) {
        return;
    }
    ctx->pc = 0x1F0D70u;
label_1f0d70:
    // 0x1f0d70: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x1F0D70u;
    SET_GPR_U32(ctx, 31, 0x1F0D78u);
    ctx->pc = 0x1F0D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0D70u;
    // 0x1f0d74: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1F0D70u, 0x1F0D78u)) {
        return;
    }
    ctx->pc = 0x1F0D78u;
label_1f0d78:
    // 0x1f0d78: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1f0d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1f0d7c: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1f0d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1f0d80: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x1f0d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1f0d84: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1f0d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x1f0d88: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x1f0d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x1f0d8c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1f0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1f0d90: 0xac440064  sw          $a0, 0x64($v0)
    ctx->pc = 0x1f0d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
    // 0x1f0d94: 0xc089a04  jal         func_226810
    ctx->pc = 0x1F0D94u;
    SET_GPR_U32(ctx, 31, 0x1F0D9Cu);
    ctx->pc = 0x1F0D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0D94u;
    // 0x1f0d98: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x1F0D94u, 0x1F0D9Cu)) {
        return;
    }
    ctx->pc = 0x1F0D9Cu;
label_1f0d9c:
    // 0x1f0d9c: 0xc089a04  jal         func_226810
    ctx->pc = 0x1F0D9Cu;
    SET_GPR_U32(ctx, 31, 0x1F0DA4u);
    ctx->pc = 0x1F0DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0D9Cu;
    // 0x1f0da0: 0x8e04007c  lw          $a0, 0x7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x1F0D9Cu, 0x1F0DA4u)) {
        return;
    }
    ctx->pc = 0x1F0DA4u;
label_1f0da4:
    // 0x1f0da4: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x1f0da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1f0da8: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x1F0DA8u;
    SET_GPR_U32(ctx, 31, 0x1F0DB0u);
    ctx->pc = 0x1F0DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0DA8u;
    // 0x1f0dac: 0x8e050078  lw          $a1, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x1F0DA8u, 0x1F0DB0u)) {
        return;
    }
    ctx->pc = 0x1F0DB0u;
label_1f0db0:
    // 0x1f0db0: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x1f0db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1f0db4: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x1F0DB4u;
    SET_GPR_U32(ctx, 31, 0x1F0DBCu);
    ctx->pc = 0x1F0DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0DB4u;
    // 0x1f0db8: 0x8e05007c  lw          $a1, 0x7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x1F0DB4u, 0x1F0DBCu)) {
        return;
    }
    ctx->pc = 0x1F0DBCu;
label_1f0dbc:
    // 0x1f0dbc: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1f0dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f0dc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0dc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0dc8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1F0DC8u;
    SET_GPR_U32(ctx, 31, 0x1F0DD0u);
    ctx->pc = 0x1F0DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0DC8u;
    // 0x1f0dcc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1F0DC8u, 0x1F0DD0u)) {
        return;
    }
    ctx->pc = 0x1F0DD0u;
label_1f0dd0:
    // 0x1f0dd0: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1f0dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1f0dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0dd8: 0xc0899d8  jal         func_226760
    ctx->pc = 0x1F0DD8u;
    SET_GPR_U32(ctx, 31, 0x1F0DE0u);
    ctx->pc = 0x1F0DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0DD8u;
    // 0x1f0ddc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226760u, 0x1F0DD8u, 0x1F0DE0u)) {
        return;
    }
    ctx->pc = 0x1F0DE0u;
label_1f0de0:
    // 0x1f0de0: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1f0de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1f0de4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f0de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f0de8: 0xc095c3a  jal         func_2570E8
    ctx->pc = 0x1F0DE8u;
    SET_GPR_U32(ctx, 31, 0x1F0DF0u);
    ctx->pc = 0x1F0DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0DE8u;
    // 0x1f0dec: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2570E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2570E8u, 0x1F0DE8u, 0x1F0DF0u)) {
        return;
    }
    ctx->pc = 0x1F0DF0u;
label_1f0df0:
    // 0x1f0df0: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x1f0df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1f0df4: 0xc089974  jal         func_2265D0
    ctx->pc = 0x1F0DF4u;
    SET_GPR_U32(ctx, 31, 0x1F0DFCu);
    ctx->pc = 0x1F0DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0DF4u;
    // 0x1f0df8: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2265D0u, 0x1F0DF4u, 0x1F0DFCu)) {
        return;
    }
    ctx->pc = 0x1F0DFCu;
label_1f0dfc:
    // 0x1f0dfc: 0xc089a04  jal         func_226810
    ctx->pc = 0x1F0DFCu;
    SET_GPR_U32(ctx, 31, 0x1F0E04u);
    ctx->pc = 0x1F0E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0DFCu;
    // 0x1f0e00: 0x8e04007c  lw          $a0, 0x7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x1F0DFCu, 0x1F0E04u)) {
        return;
    }
    ctx->pc = 0x1F0E04u;
label_1f0e04:
    // 0x1f0e04: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1f0e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1f0e08: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f0e08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1f0e0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f0e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f0e10: 0xc0893bc  jal         func_224EF0
    ctx->pc = 0x1F0E10u;
    SET_GPR_U32(ctx, 31, 0x1F0E18u);
    ctx->pc = 0x1F0E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0E10u;
    // 0x1f0e14: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224EF0u, 0x1F0E10u, 0x1F0E18u)) {
        return;
    }
    ctx->pc = 0x1F0E18u;
label_1f0e18:
    // 0x1f0e18: 0x3c01437a  lui         $at, 0x437A
    ctx->pc = 0x1f0e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17274 << 16));
    // 0x1f0e1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f0e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f0e20: 0xc0893cc  jal         func_224F30
    ctx->pc = 0x1F0E20u;
    SET_GPR_U32(ctx, 31, 0x1F0E28u);
    ctx->pc = 0x1F0E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0E20u;
    // 0x1f0e24: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224F30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224F30u, 0x1F0E20u, 0x1F0E28u)) {
        return;
    }
    ctx->pc = 0x1F0E28u;
label_1f0e28:
    // 0x1f0e28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f0e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f0e2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0e30: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1f0e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0e34: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x1f0e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1f0e38: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1f0e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1f0e3c: 0xc089456  jal         func_225158
    ctx->pc = 0x1F0E3Cu;
    SET_GPR_U32(ctx, 31, 0x1F0E44u);
    ctx->pc = 0x1F0E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0E3Cu;
    // 0x1f0e40: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x225158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225158u, 0x1F0E3Cu, 0x1F0E44u)) {
        return;
    }
    ctx->pc = 0x1F0E44u;
label_1f0e44:
    // 0x1f0e44: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x1f0e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1f0e48: 0xc097910  jal         func_25E440
    ctx->pc = 0x1F0E48u;
    SET_GPR_U32(ctx, 31, 0x1F0E50u);
    ctx->pc = 0x1F0E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0E48u;
    // 0x1f0e4c: 0x8e050074  lw          $a1, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E440u, 0x1F0E48u, 0x1F0E50u)) {
        return;
    }
    ctx->pc = 0x1F0E50u;
label_1f0e50:
    // 0x1f0e50: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x1f0e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1f0e54: 0xc0979fe  jal         func_25E7F8
    ctx->pc = 0x1F0E54u;
    SET_GPR_U32(ctx, 31, 0x1F0E5Cu);
    ctx->pc = 0x1F0E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0E54u;
    // 0x1f0e58: 0x8e050070  lw          $a1, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E7F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7F8u, 0x1F0E54u, 0x1F0E5Cu)) {
        return;
    }
    ctx->pc = 0x1F0E5Cu;
label_1f0e5c:
    // 0x1f0e5c: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1f0e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x1f0e60: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1f0e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1f0e64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f0e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0e68: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1f0e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0e6c: 0x8c83e950  lw          $v1, -0x16B0($a0)
    ctx->pc = 0x1f0e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E950u));
    // 0x1f0e70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f0e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0e74: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1f0e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1f0e78: 0xac90e950  sw          $s0, -0x16B0($a0)
    ctx->pc = 0x1f0e78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x33E950u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33E950u, _value); } while (0);
    // 0x1f0e7c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1f0e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f0e80: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E80u;
        // 0x1f0e84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0E88u;
}
