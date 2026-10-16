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

// Function: sub_00162530
// Address: 0x162530 - 0x162710
void sub_00162530_0x162530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162530_0x162530");
#endif

    switch (ctx->pc) {
        case 0x162558u: goto label_162558;
        case 0x162580u: goto label_162580;
        case 0x162588u: goto label_162588;
        case 0x1625a0u: goto label_1625a0;
        case 0x162638u: goto label_162638;
        case 0x162640u: goto label_162640;
        case 0x162658u: goto label_162658;
        case 0x162670u: goto label_162670;
        case 0x1626a0u: goto label_1626a0;
        case 0x1626d8u: goto label_1626d8;
        case 0x1626e4u: goto label_1626e4;
        default: break;
    }

    ctx->pc = 0x162530u;

    // 0x162530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x162530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x162534: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x162534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x162538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x162538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16253c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16253cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x162540: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x162540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x162544: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x162544u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x162548: 0x2611004c  addiu       $s1, $s0, 0x4C
    ctx->pc = 0x162548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x16254c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16254cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162550: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x162550u;
    SET_GPR_U32(ctx, 31, 0x162558u);
    ctx->pc = 0x162554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162550u;
    // 0x162554: 0x24120257  addiu       $s2, $zero, 0x257 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x162550u, 0x162558u)) {
        return;
    }
    ctx->pc = 0x162558u;
label_162558:
    // 0x162558: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x162558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x16255c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x16255cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x162560: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x162560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x162564: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x162564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x162568: 0x24633bc8  addiu       $v1, $v1, 0x3BC8
    ctx->pc = 0x162568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15304));
    // 0x16256c: 0x24423ba8  addiu       $v0, $v0, 0x3BA8
    ctx->pc = 0x16256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15272));
    // 0x162570: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x162570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x162574: 0x26041d2c  addiu       $a0, $s0, 0x1D2C
    ctx->pc = 0x162574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7468));
    // 0x162578: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x162578u;
    SET_GPR_U32(ctx, 31, 0x162580u);
    ctx->pc = 0x16257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162578u;
    // 0x16257c: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x162578u, 0x162580u)) {
        return;
    }
    ctx->pc = 0x162580u;
label_162580:
    // 0x162580: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x162580u;
    SET_GPR_U32(ctx, 31, 0x162588u);
    ctx->pc = 0x162584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162580u;
    // 0x162584: 0x26041d34  addiu       $a0, $s0, 0x1D34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7476));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x162580u, 0x162588u)) {
        return;
    }
    ctx->pc = 0x162588u;
label_162588:
    // 0x162588: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x162588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16258c: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x16258cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x162590: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x162590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x162594: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162598: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x162598u;
    SET_GPR_U32(ctx, 31, 0x1625A0u);
    ctx->pc = 0x16259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162598u;
    // 0x16259c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x162598u, 0x1625A0u)) {
        return;
    }
    ctx->pc = 0x1625A0u;
label_1625a0:
    // 0x1625a0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1625a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1625a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1625a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1625a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1625a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1625ac: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1625acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x1625b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1625b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1625b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1625b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1625b8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1625b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1625bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1625bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1625c0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1625c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1625c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1625c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1625c8: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1625c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1625cc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1625ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1625d0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1625d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1625d4: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1625d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1625d8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1625d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1625dc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1625dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1625e0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1625e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1625e4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1625e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1625e8: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1625e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1625ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1625ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1625f0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1625f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1625f4: 0xac508660  sw          $s0, -0x79A0($v0)
    ctx->pc = 0x1625f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x338660u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338660u, _value); } while (0);
    // 0x1625f8: 0xe6001d08  swc1        $f0, 0x1D08($s0)
    ctx->pc = 0x1625f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7432), bits); }
    // 0x1625fc: 0xe6011d0c  swc1        $f1, 0x1D0C($s0)
    ctx->pc = 0x1625fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7436), bits); }
    // 0x162600: 0xe6021d10  swc1        $f2, 0x1D10($s0)
    ctx->pc = 0x162600u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7440), bits); }
    // 0x162604: 0xe6031d14  swc1        $f3, 0x1D14($s0)
    ctx->pc = 0x162604u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7444), bits); }
    // 0x162608: 0xe6041d18  swc1        $f4, 0x1D18($s0)
    ctx->pc = 0x162608u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7448), bits); }
    // 0x16260c: 0xe6051d1c  swc1        $f5, 0x1D1C($s0)
    ctx->pc = 0x16260cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7452), bits); }
    // 0x162610: 0xe6061d20  swc1        $f6, 0x1D20($s0)
    ctx->pc = 0x162610u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7456), bits); }
    // 0x162614: 0xe6071d24  swc1        $f7, 0x1D24($s0)
    ctx->pc = 0x162614u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7460), bits); }
    // 0x162618: 0xae001d3c  sw          $zero, 0x1D3C($s0)
    ctx->pc = 0x162618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7484), GPR_U32(ctx, 0));
    // 0x16261c: 0xae001d4c  sw          $zero, 0x1D4C($s0)
    ctx->pc = 0x16261cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7500), GPR_U32(ctx, 0));
    // 0x162620: 0xae001d50  sw          $zero, 0x1D50($s0)
    ctx->pc = 0x162620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7504), GPR_U32(ctx, 0));
    // 0x162624: 0xae001d54  sw          $zero, 0x1D54($s0)
    ctx->pc = 0x162624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7508), GPR_U32(ctx, 0));
    // 0x162628: 0xae001da0  sw          $zero, 0x1DA0($s0)
    ctx->pc = 0x162628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7584), GPR_U32(ctx, 0));
    // 0x16262c: 0xae001da4  sw          $zero, 0x1DA4($s0)
    ctx->pc = 0x16262cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7588), GPR_U32(ctx, 0));
    // 0x162630: 0xae001da8  sw          $zero, 0x1DA8($s0)
    ctx->pc = 0x162630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7592), GPR_U32(ctx, 0));
    // 0x162634: 0x0  nop
    ctx->pc = 0x162634u;
    // NOP
label_162638:
    // 0x162638: 0xc0c580c  jal         func_316030
    ctx->pc = 0x162638u;
    SET_GPR_U32(ctx, 31, 0x162640u);
    ctx->pc = 0x16263Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162638u;
    // 0x16263c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x162638u, 0x162640u)) {
        return;
    }
    ctx->pc = 0x162640u;
label_162640:
    // 0x162640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162644: 0x0  nop
    ctx->pc = 0x162644u;
    // NOP
    // 0x162648: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16264c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x16264cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x162650: 0xc0c580c  jal         func_316030
    ctx->pc = 0x162650u;
    SET_GPR_U32(ctx, 31, 0x162658u);
    ctx->pc = 0x162654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162650u;
    // 0x162654: 0xe620fff8  swc1        $f0, -0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x162650u, 0x162658u)) {
        return;
    }
    ctx->pc = 0x162658u;
label_162658:
    // 0x162658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16265c: 0x0  nop
    ctx->pc = 0x16265cu;
    // NOP
    // 0x162660: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x162664: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x162664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x162668: 0xc0c580c  jal         func_316030
    ctx->pc = 0x162668u;
    SET_GPR_U32(ctx, 31, 0x162670u);
    ctx->pc = 0x16266Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162668u;
    // 0x16266c: 0xe620fffc  swc1        $f0, -0x4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967292), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x162668u, 0x162670u)) {
        return;
    }
    ctx->pc = 0x162670u;
label_162670:
    // 0x162670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162674: 0x0  nop
    ctx->pc = 0x162674u;
    // NOP
    // 0x162678: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16267c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x16267cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x162680: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x162680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x162684: 0x641ffec  bgez        $s2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x162684u;
    {
        const bool branch_taken_0x162684 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x162688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162684u;
        // 0x162688: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162684) {
            ctx->pc = 0x162638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162638;
        }
    }
    ctx->pc = 0x16268Cu;
    // 0x16268c: 0x26041d2c  addiu       $a0, $s0, 0x1D2C
    ctx->pc = 0x16268cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7468));
    // 0x162690: 0x26111d34  addiu       $s1, $s0, 0x1D34
    ctx->pc = 0x162690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 7476));
    // 0x162694: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x162694u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x162698: 0x26021d00  addiu       $v0, $s0, 0x1D00
    ctx->pc = 0x162698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 7424));
    // 0x16269c: 0x0  nop
    ctx->pc = 0x16269cu;
    // NOP
label_1626a0:
    // 0x1626a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1626a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1626a4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1626a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1626a8: 0x0  nop
    ctx->pc = 0x1626a8u;
    // NOP
    // 0x1626ac: 0x0  nop
    ctx->pc = 0x1626acu;
    // NOP
    // 0x1626b0: 0x641fffb  bgez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1626B0u;
    {
        const bool branch_taken_0x1626b0 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1626B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626B0u;
        // 0x1626b4: 0x2442ffec  addiu       $v0, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626b0) {
            ctx->pc = 0x1626A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1626a0;
        }
    }
    ctx->pc = 0x1626B8u;
    // 0x1626b8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1626b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1626bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1626bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1626c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1626c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626c4: 0xae001d04  sw          $zero, 0x1D04($s0)
    ctx->pc = 0x1626c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7428), GPR_U32(ctx, 0));
    // 0x1626c8: 0xae001d94  sw          $zero, 0x1D94($s0)
    ctx->pc = 0x1626c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7572), GPR_U32(ctx, 0));
    // 0x1626cc: 0xae001d9c  sw          $zero, 0x1D9C($s0)
    ctx->pc = 0x1626ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7580), GPR_U32(ctx, 0));
    // 0x1626d0: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x1626D0u;
    SET_GPR_U32(ctx, 31, 0x1626D8u);
    ctx->pc = 0x1626D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1626D0u;
    // 0x1626d4: 0xe6001d98  swc1        $f0, 0x1D98($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7576), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x1626D0u, 0x1626D8u)) {
        return;
    }
    ctx->pc = 0x1626D8u;
label_1626d8:
    // 0x1626d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1626d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626dc: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x1626DCu;
    SET_GPR_U32(ctx, 31, 0x1626E4u);
    ctx->pc = 0x1626E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1626DCu;
    // 0x1626e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x1626DCu, 0x1626E4u)) {
        return;
    }
    ctx->pc = 0x1626E4u;
label_1626e4:
    // 0x1626e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1626e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1626e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1626e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626ec: 0xae031d28  sw          $v1, 0x1D28($s0)
    ctx->pc = 0x1626ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7464), GPR_U32(ctx, 3));
    // 0x1626f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1626f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1626f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1626f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1626f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1626f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1626fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1626fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162700: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x162700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x162704: 0x3e00008  jr          $ra
    ctx->pc = 0x162704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162704u;
        // 0x162708: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16270Cu;
    // 0x16270c: 0x0  nop
    ctx->pc = 0x16270cu;
    // NOP
    ctx->pc = 0x162710u;
}
