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

// Function: sub_00156AC8
// Address: 0x156ac8 - 0x156c40
void sub_00156AC8_0x156ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156AC8_0x156ac8");
#endif

    switch (ctx->pc) {
        case 0x156ae8u: goto label_156ae8;
        case 0x156af4u: goto label_156af4;
        case 0x156b14u: goto label_156b14;
        case 0x156b1cu: goto label_156b1c;
        case 0x156c14u: goto label_156c14;
        case 0x156c20u: goto label_156c20;
        default: break;
    }

    ctx->pc = 0x156ac8u;

    // 0x156ac8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x156ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x156acc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x156accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x156ad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ad4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x156ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x156ad8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x156ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x156adc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156ae0: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x156AE0u;
    SET_GPR_U32(ctx, 31, 0x156AE8u);
    ctx->pc = 0x156AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156AE0u;
    // 0x156ae4: 0x261100a8  addiu       $s1, $s0, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x156AE0u, 0x156AE8u)) {
        return;
    }
    ctx->pc = 0x156AE8u;
label_156ae8:
    // 0x156ae8: 0x261200b0  addiu       $s2, $s0, 0xB0
    ctx->pc = 0x156ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x156aec: 0xc07924a  jal         func_1E4928
    ctx->pc = 0x156AECu;
    SET_GPR_U32(ctx, 31, 0x156AF4u);
    ctx->pc = 0x156AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156AECu;
    // 0x156af0: 0x26040044  addiu       $a0, $s0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4928u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4928u, 0x156AECu, 0x156AF4u)) {
        return;
    }
    ctx->pc = 0x156AF4u;
label_156af4:
    // 0x156af4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x156af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x156af8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x156af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x156afc: 0x24632aa8  addiu       $v1, $v1, 0x2AA8
    ctx->pc = 0x156afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10920));
    // 0x156b00: 0x24422ac8  addiu       $v0, $v0, 0x2AC8
    ctx->pc = 0x156b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10952));
    // 0x156b04: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x156b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x156b08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b0c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x156B0Cu;
    SET_GPR_U32(ctx, 31, 0x156B14u);
    ctx->pc = 0x156B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156B0Cu;
    // 0x156b10: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x156B0Cu, 0x156B14u)) {
        return;
    }
    ctx->pc = 0x156B14u;
label_156b14:
    // 0x156b14: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x156B14u;
    SET_GPR_U32(ctx, 31, 0x156B1Cu);
    ctx->pc = 0x156B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156B14u;
    // 0x156b18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x156B14u, 0x156B1Cu)) {
        return;
    }
    ctx->pc = 0x156B1Cu;
label_156b1c:
    // 0x156b1c: 0x3c013f79  lui         $at, 0x3F79
    ctx->pc = 0x156b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16249 << 16));
    // 0x156b20: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x156b20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x156b24: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x156b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x156b28: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x156b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x156b2c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x156b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x156b30: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x156b30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x156b34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x156b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x156b38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b3c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x156b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x156b40: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x156b40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x156b44: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x156b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x156b48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b4c: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x156b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x156b50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x156b50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x156b54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x156b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156b58: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x156b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x156b5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x156b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156b60: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x156b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x156b64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x156b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156b68: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x156b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x156b6c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x156b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x156b70: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x156b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x156b74: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x156b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x156b78: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x156b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
    // 0x156b7c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x156b7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x156b80: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x156b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x156b84: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x156b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x156b88: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x156b88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x156b8c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x156b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x156b90: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x156b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
    // 0x156b94: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x156b94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x156b98: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x156b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x156b9c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x156b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x156ba0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x156ba0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x156ba4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x156ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x156ba8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x156ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x156bac: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x156bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x156bb0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x156bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x156bb4: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x156bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x156bb8: 0xe60d0054  swc1        $f13, 0x54($s0)
    ctx->pc = 0x156bb8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x156bbc: 0xe60c005c  swc1        $f12, 0x5C($s0)
    ctx->pc = 0x156bbcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x156bc0: 0xe60b0060  swc1        $f11, 0x60($s0)
    ctx->pc = 0x156bc0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x156bc4: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x156bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x156bc8: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x156bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x156bcc: 0xe602007c  swc1        $f2, 0x7C($s0)
    ctx->pc = 0x156bccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x156bd0: 0xe6030080  swc1        $f3, 0x80($s0)
    ctx->pc = 0x156bd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x156bd4: 0xe6040084  swc1        $f4, 0x84($s0)
    ctx->pc = 0x156bd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x156bd8: 0xe6050088  swc1        $f5, 0x88($s0)
    ctx->pc = 0x156bd8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x156bdc: 0xe606008c  swc1        $f6, 0x8C($s0)
    ctx->pc = 0x156bdcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x156be0: 0xe6070090  swc1        $f7, 0x90($s0)
    ctx->pc = 0x156be0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x156be4: 0xe6080094  swc1        $f8, 0x94($s0)
    ctx->pc = 0x156be4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x156be8: 0xe6090098  swc1        $f9, 0x98($s0)
    ctx->pc = 0x156be8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x156bec: 0xe60a009c  swc1        $f10, 0x9C($s0)
    ctx->pc = 0x156becu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x156bf0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x156bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x156bf4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x156bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x156bf8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x156bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x156bfc: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x156bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x156c00: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x156c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x156c04: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x156c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x156c08: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x156c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x156c0c: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x156C0Cu;
    SET_GPR_U32(ctx, 31, 0x156C14u);
    ctx->pc = 0x156C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C0Cu;
    // 0x156c10: 0xac508608  sw          $s0, -0x79F8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936072), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x156C0Cu, 0x156C14u)) {
        return;
    }
    ctx->pc = 0x156C14u;
label_156c14:
    // 0x156c14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x156c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c18: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x156C18u;
    SET_GPR_U32(ctx, 31, 0x156C20u);
    ctx->pc = 0x156C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C18u;
    // 0x156c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x156C18u, 0x156C20u)) {
        return;
    }
    ctx->pc = 0x156C20u;
label_156c20:
    // 0x156c20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x156c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x156c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156c28: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x156c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156c2c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x156c2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156c34: 0x3e00008  jr          $ra
    ctx->pc = 0x156C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C34u;
        // 0x156c38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156C3Cu;
    // 0x156c3c: 0x0  nop
    ctx->pc = 0x156c3cu;
    // NOP
    ctx->pc = 0x156c40u;
}
