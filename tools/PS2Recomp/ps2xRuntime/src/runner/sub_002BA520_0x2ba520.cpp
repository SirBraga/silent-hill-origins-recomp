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

// Function: sub_002BA520
// Address: 0x2ba520 - 0x2ba738
void sub_002BA520_0x2ba520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA520_0x2ba520");
#endif

    ctx->pc = 0x2ba520u;

    // 0x2ba520: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ba520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ba524: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x2ba524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ba528: 0xe7bf0068  swc1        $f31, 0x68($sp)
    ctx->pc = 0x2ba528u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2ba52c: 0xe7be0060  swc1        $f30, 0x60($sp)
    ctx->pc = 0x2ba52cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ba530: 0xe7bd0058  swc1        $f29, 0x58($sp)
    ctx->pc = 0x2ba530u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ba534: 0xe7bc0050  swc1        $f28, 0x50($sp)
    ctx->pc = 0x2ba534u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ba538: 0xe7bb0048  swc1        $f27, 0x48($sp)
    ctx->pc = 0x2ba538u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2ba53c: 0xe7ba0040  swc1        $f26, 0x40($sp)
    ctx->pc = 0x2ba53cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2ba540: 0xe7b90038  swc1        $f25, 0x38($sp)
    ctx->pc = 0x2ba540u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2ba544: 0xe7b80030  swc1        $f24, 0x30($sp)
    ctx->pc = 0x2ba544u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ba548: 0xe7b70028  swc1        $f23, 0x28($sp)
    ctx->pc = 0x2ba548u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2ba54c: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x2ba54cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ba550: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2ba550u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ba554: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2ba554u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ba558: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2ba558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba55c: 0xc4af0008  lwc1        $f15, 0x8($a1)
    ctx->pc = 0x2ba55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2ba560: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x2ba560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba564: 0xc4aa000c  lwc1        $f10, 0xC($a1)
    ctx->pc = 0x2ba564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2ba568: 0x460f2f02  mul.s       $f28, $f5, $f15
    ctx->pc = 0x2ba568u;
    ctx->f[28] = FPU_MUL_S(ctx->f[5], ctx->f[15]);
    // 0x2ba56c: 0x460f1002  mul.s       $f0, $f2, $f15
    ctx->pc = 0x2ba56cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[15]);
    // 0x2ba570: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ba570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ba574: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2ba574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2ba578: 0x460a17c2  mul.s       $f31, $f2, $f10
    ctx->pc = 0x2ba578u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x2ba57c: 0x460115c2  mul.s       $f23, $f2, $f1
    ctx->pc = 0x2ba57cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2ba580: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2ba580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ba584: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2ba584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba588: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2ba588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ba58c: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x2ba58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ba590: 0x46002d82  mul.s       $f22, $f5, $f0
    ctx->pc = 0x2ba590u;
    ctx->f[22] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2ba594: 0x460a1f42  mul.s       $f29, $f3, $f10
    ctx->pc = 0x2ba594u;
    ctx->f[29] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x2ba598: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2ba598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ba59c: 0x460a26c2  mul.s       $f27, $f4, $f10
    ctx->pc = 0x2ba59cu;
    ctx->f[27] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
    // 0x2ba5a0: 0xc7b50000  lwc1        $f21, 0x0($sp)
    ctx->pc = 0x2ba5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ba5a4: 0x460a2a82  mul.s       $f10, $f5, $f10
    ctx->pc = 0x2ba5a4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x2ba5a8: 0x460f2782  mul.s       $f30, $f4, $f15
    ctx->pc = 0x2ba5a8u;
    ctx->f[30] = FPU_MUL_S(ctx->f[4], ctx->f[15]);
    // 0x2ba5ac: 0x46012682  mul.s       $f26, $f4, $f1
    ctx->pc = 0x2ba5acu;
    ctx->f[26] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2ba5b0: 0x46011e02  mul.s       $f24, $f3, $f1
    ctx->pc = 0x2ba5b0u;
    ctx->f[24] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2ba5b4: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x2ba5b4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2ba5b8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2ba5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba5bc: 0x460f1bc2  mul.s       $f15, $f3, $f15
    ctx->pc = 0x2ba5bcu;
    ctx->f[15] = FPU_MUL_S(ctx->f[3], ctx->f[15]);
    // 0x2ba5c0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2ba5c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ba5c4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2ba5c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ba5c8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2ba5c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2ba5cc: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x2ba5ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x2ba5d0: 0x461bc401  sub.s       $f16, $f24, $f27
    ctx->pc = 0x2ba5d0u;
    ctx->f[16] = FPU_SUB_S(ctx->f[24], ctx->f[27]);
    // 0x2ba5d4: 0x4602e241  sub.s       $f9, $f28, $f2
    ctx->pc = 0x2ba5d4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[28], ctx->f[2]);
    // 0x2ba5d8: 0x461dd440  add.s       $f17, $f26, $f29
    ctx->pc = 0x2ba5d8u;
    ctx->f[17] = FPU_ADD_S(ctx->f[26], ctx->f[29]);
    // 0x2ba5dc: 0x4600e9c7  neg.s       $f7, $f29
    ctx->pc = 0x2ba5dcu;
    ctx->f[7] = FPU_NEG_S(ctx->f[29]);
    // 0x2ba5e0: 0x46008506  mov.s       $f20, $f16
    ctx->pc = 0x2ba5e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[16]);
    // 0x2ba5e4: 0x4603f201  sub.s       $f8, $f30, $f3
    ctx->pc = 0x2ba5e4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[30], ctx->f[3]);
    // 0x2ba5e8: 0x46175041  sub.s       $f1, $f10, $f23
    ctx->pc = 0x2ba5e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[23]);
    // 0x2ba5ec: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x2ba5ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x2ba5f0: 0x4605fc80  add.s       $f18, $f31, $f5
    ctx->pc = 0x2ba5f0u;
    ctx->f[18] = FPU_ADD_S(ctx->f[31], ctx->f[5]);
    // 0x2ba5f4: 0x460cb2c0  add.s       $f11, $f22, $f12
    ctx->pc = 0x2ba5f4u;
    ctx->f[11] = FPU_ADD_S(ctx->f[22], ctx->f[12]);
    // 0x2ba5f8: 0x46047b80  add.s       $f14, $f15, $f4
    ctx->pc = 0x2ba5f8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[15], ctx->f[4]);
    // 0x2ba5fc: 0x46004b06  mov.s       $f12, $f9
    ctx->pc = 0x2ba5fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[9]);
    // 0x2ba600: 0x460abcc1  sub.s       $f19, $f23, $f10
    ctx->pc = 0x2ba600u;
    ctx->f[19] = FPU_SUB_S(ctx->f[23], ctx->f[10]);
    // 0x2ba604: 0x461a39c1  sub.s       $f7, $f7, $f26
    ctx->pc = 0x2ba604u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[26]);
    // 0x2ba608: 0x461c8c40  add.s       $f17, $f17, $f28
    ctx->pc = 0x2ba608u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[28]);
    // 0x2ba60c: 0x46158401  sub.s       $f16, $f16, $f21
    ctx->pc = 0x2ba60cu;
    ctx->f[16] = FPU_SUB_S(ctx->f[16], ctx->f[21]);
    // 0x2ba610: 0x46054201  sub.s       $f8, $f8, $f5
    ctx->pc = 0x2ba610u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[5]);
    // 0x2ba614: 0x460f0841  sub.s       $f1, $f1, $f15
    ctx->pc = 0x2ba614u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[15]);
    // 0x2ba618: 0x461d4a40  add.s       $f9, $f9, $f29
    ctx->pc = 0x2ba618u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[29]);
    // 0x2ba61c: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x2ba61cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x2ba620: 0x461e1b41  sub.s       $f13, $f3, $f30
    ctx->pc = 0x2ba620u;
    ctx->f[13] = FPU_SUB_S(ctx->f[3], ctx->f[30]);
    // 0x2ba624: 0x461e9541  sub.s       $f21, $f18, $f30
    ctx->pc = 0x2ba624u;
    ctx->f[21] = FPU_SUB_S(ctx->f[18], ctx->f[30]);
    // 0x2ba628: 0x460a7641  sub.s       $f25, $f14, $f10
    ctx->pc = 0x2ba628u;
    ctx->f[25] = FPU_SUB_S(ctx->f[14], ctx->f[10]);
    // 0x2ba62c: 0x46049cc0  add.s       $f19, $f19, $f4
    ctx->pc = 0x2ba62cu;
    ctx->f[19] = FPU_ADD_S(ctx->f[19], ctx->f[4]);
    // 0x2ba630: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x2ba630u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x2ba634: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x2ba634u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x2ba638: 0x46039480  add.s       $f18, $f18, $f3
    ctx->pc = 0x2ba638u;
    ctx->f[18] = FPU_ADD_S(ctx->f[18], ctx->f[3]);
    // 0x2ba63c: 0x46028c40  add.s       $f17, $f17, $f2
    ctx->pc = 0x2ba63cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[2]);
    // 0x2ba640: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2ba640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba644: 0x461f4200  add.s       $f8, $f8, $f31
    ctx->pc = 0x2ba644u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[31]);
    // 0x2ba648: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2ba648u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2ba64c: 0x461a4a41  sub.s       $f9, $f9, $f26
    ctx->pc = 0x2ba64cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[26]);
    // 0x2ba650: 0x461b0000  add.s       $f0, $f0, $f27
    ctx->pc = 0x2ba650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
    // 0x2ba654: 0x461b5ac0  add.s       $f11, $f11, $f27
    ctx->pc = 0x2ba654u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[27]);
    // 0x2ba658: 0x461a6300  add.s       $f12, $f12, $f26
    ctx->pc = 0x2ba658u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[26]);
    // 0x2ba65c: 0x461f6b40  add.s       $f13, $f13, $f31
    ctx->pc = 0x2ba65cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[31]);
    // 0x2ba660: 0x46177380  add.s       $f14, $f14, $f23
    ctx->pc = 0x2ba660u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[23]);
    // 0x2ba664: 0x4603ad41  sub.s       $f21, $f21, $f3
    ctx->pc = 0x2ba664u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[3]);
    // 0x2ba668: 0x461e9480  add.s       $f18, $f18, $f30
    ctx->pc = 0x2ba668u;
    ctx->f[18] = FPU_ADD_S(ctx->f[18], ctx->f[30]);
    // 0x2ba66c: 0x461c39c0  add.s       $f7, $f7, $f28
    ctx->pc = 0x2ba66cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[28]);
    // 0x2ba670: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x2ba670u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x2ba674: 0x4617ce41  sub.s       $f25, $f25, $f23
    ctx->pc = 0x2ba674u;
    ctx->f[25] = FPU_SUB_S(ctx->f[25], ctx->f[23]);
    // 0x2ba678: 0xe4d2000c  swc1        $f18, 0xC($a2)
    ctx->pc = 0x2ba678u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2ba67c: 0x460f9cc1  sub.s       $f19, $f19, $f15
    ctx->pc = 0x2ba67cu;
    ctx->f[19] = FPU_SUB_S(ctx->f[19], ctx->f[15]);
    // 0x2ba680: 0xe4c70004  swc1        $f7, 0x4($a2)
    ctx->pc = 0x2ba680u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2ba684: 0x46064202  mul.s       $f8, $f8, $f6
    ctx->pc = 0x2ba684u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x2ba688: 0xe4d40008  swc1        $f20, 0x8($a2)
    ctx->pc = 0x2ba688u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2ba68c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2ba68cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2ba690: 0x46064a42  mul.s       $f9, $f9, $f6
    ctx->pc = 0x2ba690u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x2ba694: 0xe4d30000  swc1        $f19, 0x0($a2)
    ctx->pc = 0x2ba694u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2ba698: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2ba698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2ba69c: 0xe4e8002c  swc1        $f8, 0x2C($a3)
    ctx->pc = 0x2ba69cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x2ba6a0: 0x4606ad42  mul.s       $f21, $f21, $f6
    ctx->pc = 0x2ba6a0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[6]);
    // 0x2ba6a4: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x2ba6a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2ba6a8: 0x46168400  add.s       $f16, $f16, $f22
    ctx->pc = 0x2ba6a8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[22]);
    // 0x2ba6ac: 0xe4e90004  swc1        $f9, 0x4($a3)
    ctx->pc = 0x2ba6acu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2ba6b0: 0x46185ac0  add.s       $f11, $f11, $f24
    ctx->pc = 0x2ba6b0u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[24]);
    // 0x2ba6b4: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2ba6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2ba6b8: 0x461d6301  sub.s       $f12, $f12, $f29
    ctx->pc = 0x2ba6b8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[29]);
    // 0x2ba6bc: 0xe4f5000c  swc1        $f21, 0xC($a3)
    ctx->pc = 0x2ba6bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2ba6c0: 0x46056b41  sub.s       $f13, $f13, $f5
    ctx->pc = 0x2ba6c0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[5]);
    // 0x2ba6c4: 0xc7bf0068  lwc1        $f31, 0x68($sp)
    ctx->pc = 0x2ba6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x2ba6c8: 0x460a7380  add.s       $f14, $f14, $f10
    ctx->pc = 0x2ba6c8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[10]);
    // 0x2ba6cc: 0xc7be0060  lwc1        $f30, 0x60($sp)
    ctx->pc = 0x2ba6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x2ba6d0: 0x4606ce42  mul.s       $f25, $f25, $f6
    ctx->pc = 0x2ba6d0u;
    ctx->f[25] = FPU_MUL_S(ctx->f[25], ctx->f[6]);
    // 0x2ba6d4: 0xc7bd0058  lwc1        $f29, 0x58($sp)
    ctx->pc = 0x2ba6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2ba6d8: 0x46065ac2  mul.s       $f11, $f11, $f6
    ctx->pc = 0x2ba6d8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x2ba6dc: 0xc7bc0050  lwc1        $f28, 0x50($sp)
    ctx->pc = 0x2ba6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2ba6e0: 0x46066302  mul.s       $f12, $f12, $f6
    ctx->pc = 0x2ba6e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x2ba6e4: 0xc7bb0048  lwc1        $f27, 0x48($sp)
    ctx->pc = 0x2ba6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2ba6e8: 0x46068402  mul.s       $f16, $f16, $f6
    ctx->pc = 0x2ba6e8u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[6]);
    // 0x2ba6ec: 0xe4f90028  swc1        $f25, 0x28($a3)
    ctx->pc = 0x2ba6ecu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x2ba6f0: 0x46066b42  mul.s       $f13, $f13, $f6
    ctx->pc = 0x2ba6f0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[6]);
    // 0x2ba6f4: 0xc7ba0040  lwc1        $f26, 0x40($sp)
    ctx->pc = 0x2ba6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2ba6f8: 0x46067382  mul.s       $f14, $f14, $f6
    ctx->pc = 0x2ba6f8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
    // 0x2ba6fc: 0xc7b90038  lwc1        $f25, 0x38($sp)
    ctx->pc = 0x2ba6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2ba700: 0x46068c42  mul.s       $f17, $f17, $f6
    ctx->pc = 0x2ba700u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[6]);
    // 0x2ba704: 0xc7b80030  lwc1        $f24, 0x30($sp)
    ctx->pc = 0x2ba704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2ba708: 0xc7b70028  lwc1        $f23, 0x28($sp)
    ctx->pc = 0x2ba708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2ba70c: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x2ba70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ba710: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x2ba710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ba714: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2ba714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ba718: 0xe4eb0010  swc1        $f11, 0x10($a3)
    ctx->pc = 0x2ba718u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x2ba71c: 0xe4ec0014  swc1        $f12, 0x14($a3)
    ctx->pc = 0x2ba71cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x2ba720: 0xe4f00018  swc1        $f16, 0x18($a3)
    ctx->pc = 0x2ba720u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x2ba724: 0xe4ed001c  swc1        $f13, 0x1C($a3)
    ctx->pc = 0x2ba724u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    // 0x2ba728: 0xe4ee0020  swc1        $f14, 0x20($a3)
    ctx->pc = 0x2ba728u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x2ba72c: 0xe4f10024  swc1        $f17, 0x24($a3)
    ctx->pc = 0x2ba72cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x2ba730: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA730u;
        // 0x2ba734: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA738u;
}
