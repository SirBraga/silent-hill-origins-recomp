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

// Function: sub_002B51C8
// Address: 0x2b51c8 - 0x2b53e8
void sub_002B51C8_0x2b51c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B51C8_0x2b51c8");
#endif

    ctx->pc = 0x2b51c8u;

    // 0x2b51c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b51c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b51cc: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2b51ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x2b51d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2b51d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2b51d4: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x2b51d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2b51d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2b51d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2b51dc: 0x876821  addu        $t5, $a0, $a3
    ctx->pc = 0x2b51dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b51e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b51e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b51e4: 0x248a0004  addiu       $t2, $a0, 0x4
    ctx->pc = 0x2b51e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2b51e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2b51e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2b51ec: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x2b51ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2b51f0: 0xc4c90000  lwc1        $f9, 0x0($a2)
    ctx->pc = 0x2b51f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2b51f4: 0x248b0008  addiu       $t3, $a0, 0x8
    ctx->pc = 0x2b51f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2b51f8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2b51f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b51fc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2b51fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5200: 0xc4c80004  lwc1        $f8, 0x4($a2)
    ctx->pc = 0x2b5200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2b5204: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b5204u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5208: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x2b5208u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x2b520c: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x2b520cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5210: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x2b5210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5214: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2b5214u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5218: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x2b5218u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x2b521c: 0xc4c70008  lwc1        $f7, 0x8($a2)
    ctx->pc = 0x2b521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b5220: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b5220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b5224: 0xc4430080  lwc1        $f3, 0x80($v0)
    ctx->pc = 0x2b5224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b5228: 0xc4c4000c  lwc1        $f4, 0xC($a2)
    ctx->pc = 0x2b5228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b522c: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x2b522cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2b5230: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x2b5230u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2b5234: 0xc44200c0  lwc1        $f2, 0xC0($v0)
    ctx->pc = 0x2b5234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5238: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b5238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b523c: 0xc4450044  lwc1        $f5, 0x44($v0)
    ctx->pc = 0x2b523cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b5240: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b5240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5244: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2b5244u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2b5248: 0x46082942  mul.s       $f5, $f5, $f8
    ctx->pc = 0x2b5248u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x2b524c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2b524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b5250: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x2b5250u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x2b5254: 0xc4660048  lwc1        $f6, 0x48($v1)
    ctx->pc = 0x2b5254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b5258: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2b5258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2b525c: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x2b525cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5260: 0xc5430000  lwc1        $f3, 0x0($t2)
    ctx->pc = 0x2b5260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b5264: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x2b5264u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x2b5268: 0x46083182  mul.s       $f6, $f6, $f8
    ctx->pc = 0x2b5268u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x2b526c: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x2b526cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5270: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2b5270u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2b5274: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2b5274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2b5278: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b5278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b527c: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x2b527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5280: 0xc5020084  lwc1        $f2, 0x84($t0)
    ctx->pc = 0x2b5280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5284: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2b5284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2b5288: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2b5288u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2b528c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2b528cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5290: 0xc5250088  lwc1        $f5, 0x88($t1)
    ctx->pc = 0x2b5290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b5294: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2b5294u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2b5298: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x2b5298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x2b529c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2b529cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2b52a0: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x2b52a0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x2b52a4: 0x24830018  addiu       $v1, $a0, 0x18
    ctx->pc = 0x2b52a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x2b52a8: 0xc4c4000c  lwc1        $f4, 0xC($a2)
    ctx->pc = 0x2b52a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b52ac: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2b52acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2b52b0: 0xc58000c4  lwc1        $f0, 0xC4($t4)
    ctx->pc = 0x2b52b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b52b4: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2b52b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2b52b8: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x2b52b8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b52bc: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x2b52bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2b52c0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2b52c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2b52c4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2b52c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b52c8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2b52c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2b52cc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2b52ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2b52d0: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x2b52d0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b52d4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2b52d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b52d8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b52d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b52dc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2b52dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b52e0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2b52e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b52e4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2b52e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b52e8: 0xe5430000  swc1        $f3, 0x0($t2)
    ctx->pc = 0x2b52e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2b52ec: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2b52ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b52f0: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x2b52f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b52f4: 0xc50000c8  lwc1        $f0, 0xC8($t0)
    ctx->pc = 0x2b52f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b52f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b52f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b52fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b52fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b5300: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x2b5300u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x2b5304: 0xc4c90000  lwc1        $f9, 0x0($a2)
    ctx->pc = 0x2b5304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2b5308: 0xc5e00010  lwc1        $f0, 0x10($t7)
    ctx->pc = 0x2b5308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b530c: 0xc4c60004  lwc1        $f6, 0x4($a2)
    ctx->pc = 0x2b530cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b5310: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x2b5310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x2b5314: 0xc5220050  lwc1        $f2, 0x50($t1)
    ctx->pc = 0x2b5314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5318: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2b5318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b531c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2b531cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2b5320: 0xc4ca0008  lwc1        $f10, 0x8($a2)
    ctx->pc = 0x2b5320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2b5324: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b5324u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b5328: 0xc6040090  lwc1        $f4, 0x90($s0)
    ctx->pc = 0x2b5328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b532c: 0xc5800014  lwc1        $f0, 0x14($t4)
    ctx->pc = 0x2b532cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5330: 0x460a2102  mul.s       $f4, $f4, $f10
    ctx->pc = 0x2b5330u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
    // 0x2b5334: 0xc5c50054  lwc1        $f5, 0x54($t6)
    ctx->pc = 0x2b5334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b5338: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b5338u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b533c: 0xc5480058  lwc1        $f8, 0x58($t2)
    ctx->pc = 0x2b533cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2b5340: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x2b5340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x2b5344: 0xc5a70018  lwc1        $f7, 0x18($t5)
    ctx->pc = 0x2b5344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b5348: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2b5348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b534c: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2b534cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2b5350: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2b5350u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2b5354: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2b5354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b5358: 0x46064202  mul.s       $f8, $f8, $f6
    ctx->pc = 0x2b5358u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x2b535c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b535cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b5360: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2b5360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b5364: 0x460939c2  mul.s       $f7, $f7, $f9
    ctx->pc = 0x2b5364u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x2b5368: 0xc62400d0  lwc1        $f4, 0xD0($s1)
    ctx->pc = 0x2b5368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b536c: 0xc4c6000c  lwc1        $f6, 0xC($a2)
    ctx->pc = 0x2b536cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b5370: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2b5370u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2b5374: 0xc6400094  lwc1        $f0, 0x94($s2)
    ctx->pc = 0x2b5374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5378: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x2b5378u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x2b537c: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2b537cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2b5380: 0xc5050098  lwc1        $f5, 0x98($t0)
    ctx->pc = 0x2b5380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b5384: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x2b5384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x2b5388: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2b5388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b538c: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x2b538cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x2b5390: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2b5390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b5394: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2b5394u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2b5398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b5398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b539c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b539cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b53a0: 0x460a2942  mul.s       $f5, $f5, $f10
    ctx->pc = 0x2b53a0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x2b53a4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2b53a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b53a8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2b53a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b53ac: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2b53acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2b53b0: 0xc66100d4  lwc1        $f1, 0xD4($s3)
    ctx->pc = 0x2b53b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b53b4: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2b53b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b53b8: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2b53b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b53bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b53bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b53c0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2b53c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b53c4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2b53c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2b53c8: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x2b53c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b53cc: 0xc4a000d8  lwc1        $f0, 0xD8($a1)
    ctx->pc = 0x2b53ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b53d0: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x2b53d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b53d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b53d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b53d8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b53d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b53dc: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x2b53dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b53e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B53E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B53E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B53E0u;
        // 0x2b53e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B53E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B53E8u;
}
