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

// Function: sub_002B1820
// Address: 0x2b1820 - 0x2b19a8
void sub_002B1820_0x2b1820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1820_0x2b1820");
#endif

    switch (ctx->pc) {
        case 0x2b1880u: goto label_2b1880;
        default: break;
    }

    ctx->pc = 0x2b1820u;

    // 0x2b1820: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b1820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b1824: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2b1824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b1828: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2b1828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2b182c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2b182cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2b1830: 0xa39018  mult        $s2, $a1, $v1
    ctx->pc = 0x2b1830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x2b1834: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2b1834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2b1838: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2b1838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b183c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b183cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b1840: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b1840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1844: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2b1844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2b1848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b1848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b184c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b184cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b1850: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2b1850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b1854: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2b1854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b1858: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2b1858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b185c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b185cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b1860: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2b1860u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b1864: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b1864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b1868: 0x8ce80010  lw          $t0, 0x10($a3)
    ctx->pc = 0x2b1868u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2b186c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2b186cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2b1870: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2b1870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2b1874: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x2b1874u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b1878: 0xc0aa486  jal         func_2A9218
    ctx->pc = 0x2B1878u;
    SET_GPR_U32(ctx, 31, 0x2B1880u);
    ctx->pc = 0x2B187Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1878u;
    // 0x2b187c: 0x26740030  addiu       $s4, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9218u, 0x2B1878u, 0x2B1880u)) {
        return;
    }
    ctx->pc = 0x2B1880u;
label_2b1880:
    // 0x2b1880: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x2B1880u;
    {
        const bool branch_taken_0x2b1880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1880) {
            ctx->pc = 0x2B1884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1880u;
            // 0x2b1884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1988u;
            goto label_2b1988;
        }
    }
    ctx->pc = 0x2B1888u;
    // 0x2b1888: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2b1888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b188c: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x2b188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b1890: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2b1890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b1894: 0xc6070004  lwc1        $f7, 0x4($s0)
    ctx->pc = 0x2b1894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b1898: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2b1898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b189c: 0xc6060008  lwc1        $f6, 0x8($s0)
    ctx->pc = 0x2b189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b18a0: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2b18a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b18a4: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2b18a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b18a8: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2b18a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2b18ac: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x2b18acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b18b0: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2b18b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2b18b4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2b18b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2b18b8: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2b18b8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2b18bc: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b18bcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b18c0: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x2b18c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b18c4: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2b18c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b18c8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2b18c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b18cc: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x2b18ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2b18d0: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x2b18d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b18d4: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2b18d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2b18d8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2b18d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2b18dc: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2b18dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2b18e0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b18e0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b18e4: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2b18e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b18e8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b18e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b18ec: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x2b18ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b18f0: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2b18f0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2b18f4: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x2b18f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b18f8: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x2b18f8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2b18fc: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x2b18fcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2b1900: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x2b1900u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x2b1904: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x2b1904u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x2b1908: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x2b1908u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b190c: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2b190cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1910: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b1910u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b1914: 0xe6040000  swc1        $f4, 0x0($s0)
    ctx->pc = 0x2b1914u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2b1918: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x2b1918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b191c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b191cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b1920: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x2b1920u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2b1924: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x2b1924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1928: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2b1928u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2b192c: 0xe6050008  swc1        $f5, 0x8($s0)
    ctx->pc = 0x2b192cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b1930: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x2b1930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1934: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x2b1934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b1938: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2b1938u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2b193c: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x2b193cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b1940: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2b1940u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2b1944: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2b1944u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2b1948: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b1948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b194c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2b194cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2b1950: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2b1950u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b1954: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b1954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b1958: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b1958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b195c: 0x46000004  c1          0x4
    ctx->pc = 0x2b195cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2b1960: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2b1960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b1964: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b1964u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b1968: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x2b1968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2b196c: 0x6a630037  ldl         $v1, 0x37($s3)
    ctx->pc = 0x2b196cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b1970: 0x6e630030  ldr         $v1, 0x30($s3)
    ctx->pc = 0x2b1970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b1974: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x2b1974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2b1978: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x2b1978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b197c: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x2b197cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b1980: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x2b1980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x2b1984: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b1984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1988:
    // 0x2b1988: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2b1988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b198c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2b198cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b1990: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2b1990u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b1994: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b1994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1998: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2b1998u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b199c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b199cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b19a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B19A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B19A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B19A0u;
        // 0x2b19a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B19A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B19A8u;
}
