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

// Function: sub_001E1760
// Address: 0x1e1760 - 0x1e1a38
void sub_001E1760_0x1e1760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1760_0x1e1760");
#endif

    switch (ctx->pc) {
        case 0x1e1a14u: goto label_1e1a14;
        default: break;
    }

    ctx->pc = 0x1e1760u;

    // 0x1e1760: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e1760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e1764: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x1e1764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x1e1768: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x1e1768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x1e176c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e176cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e1770: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e1770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e1774: 0xe7b90098  swc1        $f25, 0x98($sp)
    ctx->pc = 0x1e1774u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1e1778: 0xe7b80090  swc1        $f24, 0x90($sp)
    ctx->pc = 0x1e1778u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1e177c: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x1e177cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1e1780: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x1e1780u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1e1784: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1e1784u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1e1788: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1e1788u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1e178c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x1e178cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x1e1790: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e1790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1794: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x1e1794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x1e1798: 0x94a30010  lhu         $v1, 0x10($a1)
    ctx->pc = 0x1e1798u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1e179c: 0x44825000  mtc1        $v0, $f10
    ctx->pc = 0x1e179cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1e17a0: 0x0  nop
    ctx->pc = 0x1e17a0u;
    // NOP
    // 0x1e17a4: 0x468052a0  cvt.s.w     $f10, $f10
    ctx->pc = 0x1e17a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[10], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
    // 0x1e17a8: 0x8cac0008  lw          $t4, 0x8($a1)
    ctx->pc = 0x1e17a8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e17ac: 0x44834800  mtc1        $v1, $f9
    ctx->pc = 0x1e17acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1e17b0: 0x0  nop
    ctx->pc = 0x1e17b0u;
    // NOP
    // 0x1e17b4: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x1e17b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x1e17b8: 0x94a80012  lhu         $t0, 0x12($a1)
    ctx->pc = 0x1e17b8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x1e17bc: 0x94c9000e  lhu         $t1, 0xE($a2)
    ctx->pc = 0x1e17bcu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x1e17c0: 0xc5900  sll         $t3, $t4, 4
    ctx->pc = 0x1e17c0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x1e17c4: 0x94c20010  lhu         $v0, 0x10($a2)
    ctx->pc = 0x1e17c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1e17c8: 0x44884000  mtc1        $t0, $f8
    ctx->pc = 0x1e17c8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1e17cc: 0x0  nop
    ctx->pc = 0x1e17ccu;
    // NOP
    // 0x1e17d0: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x1e17d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x1e17d4: 0x94c30012  lhu         $v1, 0x12($a2)
    ctx->pc = 0x1e17d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x1e17d8: 0x44893800  mtc1        $t1, $f7
    ctx->pc = 0x1e17d8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1e17dc: 0x0  nop
    ctx->pc = 0x1e17dcu;
    // NOP
    // 0x1e17e0: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x1e17e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x1e17e4: 0x8ccf0008  lw          $t7, 0x8($a2)
    ctx->pc = 0x1e17e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1e17e8: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x1e17e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1e17ec: 0x0  nop
    ctx->pc = 0x1e17ecu;
    // NOP
    // 0x1e17f0: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1e17f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x1e17f4: 0x94aa000c  lhu         $t2, 0xC($a1)
    ctx->pc = 0x1e17f4u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e17f8: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x1e17f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1e17fc: 0x0  nop
    ctx->pc = 0x1e17fcu;
    // NOP
    // 0x1e1800: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1e1800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1e1804: 0x94cd000c  lhu         $t5, 0xC($a2)
    ctx->pc = 0x1e1804u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1e1808: 0xf7100  sll         $t6, $t7, 4
    ctx->pc = 0x1e1808u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x1e180c: 0xa1b02  srl         $v1, $t2, 12
    ctx->pc = 0x1e180cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 12));
    // 0x1e1810: 0xc4202  srl         $t0, $t4, 8
    ctx->pc = 0x1e1810u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 12), 8));
    // 0x1e1814: 0xd1302  srl         $v0, $t5, 12
    ctx->pc = 0x1e1814u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), 12));
    // 0x1e1818: 0xf4a02  srl         $t1, $t7, 8
    ctx->pc = 0x1e1818u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 15), 8));
    // 0x1e181c: 0x316b0fff  andi        $t3, $t3, 0xFFF
    ctx->pc = 0x1e181cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)4095);
    // 0x1e1820: 0x31080fff  andi        $t0, $t0, 0xFFF
    ctx->pc = 0x1e1820u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4095);
    // 0x1e1824: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x1e1824u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    // 0x1e1828: 0x314a0fff  andi        $t2, $t2, 0xFFF
    ctx->pc = 0x1e1828u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4095);
    // 0x1e182c: 0x31ad0fff  andi        $t5, $t5, 0xFFF
    ctx->pc = 0x1e182cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4095);
    // 0x1e1830: 0xc6502  srl         $t4, $t4, 20
    ctx->pc = 0x1e1830u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 20));
    // 0x1e1834: 0xf7d02  srl         $t7, $t7, 20
    ctx->pc = 0x1e1834u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 20));
    // 0x1e1838: 0x31290fff  andi        $t1, $t1, 0xFFF
    ctx->pc = 0x1e1838u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
    // 0x1e183c: 0x448c7800  mtc1        $t4, $f15
    ctx->pc = 0x1e183cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1e1840: 0x0  nop
    ctx->pc = 0x1e1840u;
    // NOP
    // 0x1e1844: 0x46807be0  cvt.s.w     $f15, $f15
    ctx->pc = 0x1e1844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[15], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1e1848: 0x31ce0fff  andi        $t6, $t6, 0xFFF
    ctx->pc = 0x1e1848u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4095);
    // 0x1e184c: 0x44888000  mtc1        $t0, $f16
    ctx->pc = 0x1e184cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1e1850: 0x0  nop
    ctx->pc = 0x1e1850u;
    // NOP
    // 0x1e1854: 0x46808420  cvt.s.w     $f16, $f16
    ctx->pc = 0x1e1854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[16], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x1e1858: 0x1c27025  or          $t6, $t6, $v0
    ctx->pc = 0x1e1858u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x1e185c: 0x448b8800  mtc1        $t3, $f17
    ctx->pc = 0x1e185cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1e1860: 0x0  nop
    ctx->pc = 0x1e1860u;
    // NOP
    // 0x1e1864: 0x46808c60  cvt.s.w     $f17, $f17
    ctx->pc = 0x1e1864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[17], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x1e1868: 0x3c0144ff  lui         $at, 0x44FF
    ctx->pc = 0x1e1868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17663 << 16));
    // 0x1e186c: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1e186cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x1e1870: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e1870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e1874: 0x448a9000  mtc1        $t2, $f18
    ctx->pc = 0x1e1874u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1e1878: 0x0  nop
    ctx->pc = 0x1e1878u;
    // NOP
    // 0x1e187c: 0x468094a0  cvt.s.w     $f18, $f18
    ctx->pc = 0x1e187cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[18], sizeof(tmp)); ctx->f[18] = FPU_CVT_S_W(tmp); }
    // 0x1e1880: 0xc4f5000c  lwc1        $f21, 0xC($a3)
    ctx->pc = 0x1e1880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e1884: 0x448f5800  mtc1        $t7, $f11
    ctx->pc = 0x1e1884u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1e1888: 0x0  nop
    ctx->pc = 0x1e1888u;
    // NOP
    // 0x1e188c: 0x46805ae0  cvt.s.w     $f11, $f11
    ctx->pc = 0x1e188cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[11], sizeof(tmp)); ctx->f[11] = FPU_CVT_S_W(tmp); }
    // 0x1e1890: 0xc4f40010  lwc1        $f20, 0x10($a3)
    ctx->pc = 0x1e1890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e1894: 0x448d1800  mtc1        $t5, $f3
    ctx->pc = 0x1e1894u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e1898: 0x0  nop
    ctx->pc = 0x1e1898u;
    // NOP
    // 0x1e189c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1e189cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1e18a0: 0xc4f30014  lwc1        $f19, 0x14($a3)
    ctx->pc = 0x1e18a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x1e18a4: 0x44896800  mtc1        $t1, $f13
    ctx->pc = 0x1e18a4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e18a8: 0x0  nop
    ctx->pc = 0x1e18a8u;
    // NOP
    // 0x1e18ac: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x1e18acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x1e18b0: 0xc4f80008  lwc1        $f24, 0x8($a3)
    ctx->pc = 0x1e18b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1e18b4: 0x0  nop
    ctx->pc = 0x1e18b4u;
    // NOP
    // 0x1e18b8: 0x46042943  div.s       $f5, $f5, $f4
    ctx->pc = 0x1e18b8u;
    ctx->f[5] = FPU_DIV_S(ctx, ctx->f[5], ctx->f[4]);
    // 0x1e18bc: 0xc4f60000  lwc1        $f22, 0x0($a3)
    ctx->pc = 0x1e18bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e18c0: 0x0  nop
    ctx->pc = 0x1e18c0u;
    // NOP
    // 0x1e18c4: 0x46045283  div.s       $f10, $f10, $f4
    ctx->pc = 0x1e18c4u;
    ctx->f[10] = FPU_DIV_S(ctx, ctx->f[10], ctx->f[4]);
    // 0x1e18c8: 0xc4f70004  lwc1        $f23, 0x4($a3)
    ctx->pc = 0x1e18c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1e18cc: 0x0  nop
    ctx->pc = 0x1e18ccu;
    // NOP
    // 0x1e18d0: 0x46044a43  div.s       $f9, $f9, $f4
    ctx->pc = 0x1e18d0u;
    ctx->f[9] = FPU_DIV_S(ctx, ctx->f[9], ctx->f[4]);
    // 0x1e18d4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1e18d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e18d8: 0x0  nop
    ctx->pc = 0x1e18d8u;
    // NOP
    // 0x1e18dc: 0x0  nop
    ctx->pc = 0x1e18dcu;
    // NOP
    // 0x1e18e0: 0x46044203  div.s       $f8, $f8, $f4
    ctx->pc = 0x1e18e0u;
    ctx->f[8] = FPU_DIV_S(ctx, ctx->f[8], ctx->f[4]);
    // 0x1e18e4: 0xc4d90004  lwc1        $f25, 0x4($a2)
    ctx->pc = 0x1e18e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1e18e8: 0x448e7000  mtc1        $t6, $f14
    ctx->pc = 0x1e18e8u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1e18ec: 0x0  nop
    ctx->pc = 0x1e18ecu;
    // NOP
    // 0x1e18f0: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1e18f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1e18f4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1e18f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e18f8: 0x0  nop
    ctx->pc = 0x1e18f8u;
    // NOP
    // 0x1e18fc: 0x0  nop
    ctx->pc = 0x1e18fcu;
    // NOP
    // 0x1e1900: 0x460439c3  div.s       $f7, $f7, $f4
    ctx->pc = 0x1e1900u;
    ctx->f[7] = FPU_DIV_S(ctx, ctx->f[7], ctx->f[4]);
    // 0x1e1904: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e1904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e1908: 0x0  nop
    ctx->pc = 0x1e1908u;
    // NOP
    // 0x1e190c: 0x0  nop
    ctx->pc = 0x1e190cu;
    // NOP
    // 0x1e1910: 0x46043183  div.s       $f6, $f6, $f4
    ctx->pc = 0x1e1910u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[6], ctx->f[4]);
    // 0x1e1914: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e1914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1918: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1e1918u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1e191c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e191cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e1920: 0x46007bc1  sub.s       $f15, $f15, $f0
    ctx->pc = 0x1e1920u;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
    // 0x1e1924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e1924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1928: 0x46008401  sub.s       $f16, $f16, $f0
    ctx->pc = 0x1e1928u;
    ctx->f[16] = FPU_SUB_S(ctx->f[16], ctx->f[0]);
    // 0x1e192c: 0x46008c41  sub.s       $f17, $f17, $f0
    ctx->pc = 0x1e192cu;
    ctx->f[17] = FPU_SUB_S(ctx->f[17], ctx->f[0]);
    // 0x1e1930: 0x46009481  sub.s       $f18, $f18, $f0
    ctx->pc = 0x1e1930u;
    ctx->f[18] = FPU_SUB_S(ctx->f[18], ctx->f[0]);
    // 0x1e1934: 0x46005ac1  sub.s       $f11, $f11, $f0
    ctx->pc = 0x1e1934u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x1e1938: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x1e1938u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x1e193c: 0x46007381  sub.s       $f14, $f14, $f0
    ctx->pc = 0x1e193cu;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[0]);
    // 0x1e1940: 0x0  nop
    ctx->pc = 0x1e1940u;
    // NOP
    // 0x1e1944: 0x0  nop
    ctx->pc = 0x1e1944u;
    // NOP
    // 0x1e1948: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x1e1948u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[1]);
    // 0x1e194c: 0x0  nop
    ctx->pc = 0x1e194cu;
    // NOP
    // 0x1e1950: 0x0  nop
    ctx->pc = 0x1e1950u;
    // NOP
    // 0x1e1954: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x1e1954u;
    ctx->f[15] = FPU_DIV_S(ctx, ctx->f[15], ctx->f[1]);
    // 0x1e1958: 0x0  nop
    ctx->pc = 0x1e1958u;
    // NOP
    // 0x1e195c: 0x0  nop
    ctx->pc = 0x1e195cu;
    // NOP
    // 0x1e1960: 0x46018403  div.s       $f16, $f16, $f1
    ctx->pc = 0x1e1960u;
    ctx->f[16] = FPU_DIV_S(ctx, ctx->f[16], ctx->f[1]);
    // 0x1e1964: 0x0  nop
    ctx->pc = 0x1e1964u;
    // NOP
    // 0x1e1968: 0x0  nop
    ctx->pc = 0x1e1968u;
    // NOP
    // 0x1e196c: 0x46018c43  div.s       $f17, $f17, $f1
    ctx->pc = 0x1e196cu;
    ctx->f[17] = FPU_DIV_S(ctx, ctx->f[17], ctx->f[1]);
    // 0x1e1970: 0x0  nop
    ctx->pc = 0x1e1970u;
    // NOP
    // 0x1e1974: 0x0  nop
    ctx->pc = 0x1e1974u;
    // NOP
    // 0x1e1978: 0x46019483  div.s       $f18, $f18, $f1
    ctx->pc = 0x1e1978u;
    ctx->f[18] = FPU_DIV_S(ctx, ctx->f[18], ctx->f[1]);
    // 0x1e197c: 0x0  nop
    ctx->pc = 0x1e197cu;
    // NOP
    // 0x1e1980: 0x0  nop
    ctx->pc = 0x1e1980u;
    // NOP
    // 0x1e1984: 0x46015ac3  div.s       $f11, $f11, $f1
    ctx->pc = 0x1e1984u;
    ctx->f[11] = FPU_DIV_S(ctx, ctx->f[11], ctx->f[1]);
    // 0x1e1988: 0x0  nop
    ctx->pc = 0x1e1988u;
    // NOP
    // 0x1e198c: 0x0  nop
    ctx->pc = 0x1e198cu;
    // NOP
    // 0x1e1990: 0x46016b43  div.s       $f13, $f13, $f1
    ctx->pc = 0x1e1990u;
    ctx->f[13] = FPU_DIV_S(ctx, ctx->f[13], ctx->f[1]);
    // 0x1e1994: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x1e1994u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1e1998: 0x461539c2  mul.s       $f7, $f7, $f21
    ctx->pc = 0x1e1998u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[21]);
    // 0x1e199c: 0xe7af0008  swc1        $f15, 0x8($sp)
    ctx->pc = 0x1e199cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e19a0: 0x46143182  mul.s       $f6, $f6, $f20
    ctx->pc = 0x1e19a0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x1e19a4: 0xe7b0000c  swc1        $f16, 0xC($sp)
    ctx->pc = 0x1e19a4u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e19a8: 0x46132942  mul.s       $f5, $f5, $f19
    ctx->pc = 0x1e19a8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[19]);
    // 0x1e19ac: 0xe7b10010  swc1        $f17, 0x10($sp)
    ctx->pc = 0x1e19acu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e19b0: 0x46155282  mul.s       $f10, $f10, $f21
    ctx->pc = 0x1e19b0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[21]);
    // 0x1e19b4: 0xe7b20014  swc1        $f18, 0x14($sp)
    ctx->pc = 0x1e19b4u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1e19b8: 0x46144a42  mul.s       $f9, $f9, $f20
    ctx->pc = 0x1e19b8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[20]);
    // 0x1e19bc: 0xe7ab0038  swc1        $f11, 0x38($sp)
    ctx->pc = 0x1e19bcu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1e19c0: 0x46134202  mul.s       $f8, $f8, $f19
    ctx->pc = 0x1e19c0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[19]);
    // 0x1e19c4: 0xe7ad003c  swc1        $f13, 0x3C($sp)
    ctx->pc = 0x1e19c4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1e19c8: 0x0  nop
    ctx->pc = 0x1e19c8u;
    // NOP
    // 0x1e19cc: 0x0  nop
    ctx->pc = 0x1e19ccu;
    // NOP
    // 0x1e19d0: 0x46017383  div.s       $f14, $f14, $f1
    ctx->pc = 0x1e19d0u;
    ctx->f[14] = FPU_DIV_S(ctx, ctx->f[14], ctx->f[1]);
    // 0x1e19d4: 0x461639c0  add.s       $f7, $f7, $f22
    ctx->pc = 0x1e19d4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[22]);
    // 0x1e19d8: 0x46173180  add.s       $f6, $f6, $f23
    ctx->pc = 0x1e19d8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[23]);
    // 0x1e19dc: 0x46182940  add.s       $f5, $f5, $f24
    ctx->pc = 0x1e19dcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[24]);
    // 0x1e19e0: 0x46165280  add.s       $f10, $f10, $f22
    ctx->pc = 0x1e19e0u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[22]);
    // 0x1e19e4: 0xe7a70048  swc1        $f7, 0x48($sp)
    ctx->pc = 0x1e19e4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1e19e8: 0x46174a40  add.s       $f9, $f9, $f23
    ctx->pc = 0x1e19e8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[23]);
    // 0x1e19ec: 0xe7a6004c  swc1        $f6, 0x4C($sp)
    ctx->pc = 0x1e19ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1e19f0: 0x46184200  add.s       $f8, $f8, $f24
    ctx->pc = 0x1e19f0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[24]);
    // 0x1e19f4: 0xe7ae0040  swc1        $f14, 0x40($sp)
    ctx->pc = 0x1e19f4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e19f8: 0xe7aa0018  swc1        $f10, 0x18($sp)
    ctx->pc = 0x1e19f8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e19fc: 0xe7a9001c  swc1        $f9, 0x1C($sp)
    ctx->pc = 0x1e19fcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1e1a00: 0xe7a80020  swc1        $f8, 0x20($sp)
    ctx->pc = 0x1e1a00u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e1a04: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x1e1a04u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e1a08: 0xe7b90034  swc1        $f25, 0x34($sp)
    ctx->pc = 0x1e1a08u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1e1a0c: 0xc09448c  jal         func_251230
    ctx->pc = 0x1E1A0Cu;
    SET_GPR_U32(ctx, 31, 0x1E1A14u);
    ctx->pc = 0x1E1A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1A0Cu;
    // 0x1e1a10: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x251230u, 0x1E1A0Cu, 0x1E1A14u)) {
        return;
    }
    ctx->pc = 0x1E1A14u;
label_1e1a14:
    // 0x1e1a14: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e1a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e1a18: 0xc7b90098  lwc1        $f25, 0x98($sp)
    ctx->pc = 0x1e1a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1e1a1c: 0xc7b80090  lwc1        $f24, 0x90($sp)
    ctx->pc = 0x1e1a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1e1a20: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x1e1a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1e1a24: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x1e1a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e1a28: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1e1a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e1a2c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1e1a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e1a30: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A30u;
        // 0x1e1a34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1A38u;
}
