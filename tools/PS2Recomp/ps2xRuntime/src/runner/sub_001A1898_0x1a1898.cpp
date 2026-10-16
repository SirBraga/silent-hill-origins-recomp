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

// Function: sub_001A1898
// Address: 0x1a1898 - 0x1a1c18
void sub_001A1898_0x1a1898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1898_0x1a1898");
#endif

    switch (ctx->pc) {
        case 0x1a1990u: goto label_1a1990;
        case 0x1a19a8u: goto label_1a19a8;
        case 0x1a19d0u: goto label_1a19d0;
        case 0x1a1ab0u: goto label_1a1ab0;
        case 0x1a1b10u: goto label_1a1b10;
        case 0x1a1b64u: goto label_1a1b64;
        case 0x1a1b6cu: goto label_1a1b6c;
        case 0x1a1b90u: goto label_1a1b90;
        default: break;
    }

    ctx->pc = 0x1a1898u;

    // 0x1a1898: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a1898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1a189c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a189cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a18a0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1a18a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1a18a4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1a18a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1a18a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a18a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18ac: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1a18acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1a18b0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1a18b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18b4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1a18b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1a18b8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1a18b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1a18bc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1a18bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1a18c0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a18c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a18c4: 0xae021390  sw          $v0, 0x1390($s0)
    ctx->pc = 0x1a18c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5008), GPR_U32(ctx, 2));
    // 0x1a18c8: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x1a18c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a18cc: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x1a18ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a18d0: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x1a18d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a18d4: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x1a18d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a18d8: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1a18d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a18dc: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1a18dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1a18e0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1a18e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a18e4: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x1a18e4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x1a18e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a18e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a18ec: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1a18ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a18f0: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x1a18f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a18f4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a18f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a18f8: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1a18f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a18fc: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1a18fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a1900: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a1900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a1904: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1a1904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1908: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1a1908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a190c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1a190cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1a1910: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x1a1910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a1914: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x1a1914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a1918: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x1a1918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1a191c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1a191cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a1920: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x1a1920u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1a1924: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x1a1924u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1a1928: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a1928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a192c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a192cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a1930: 0x0  nop
    ctx->pc = 0x1a1930u;
    // NOP
    // 0x1a1934: 0x0  nop
    ctx->pc = 0x1a1934u;
    // NOP
    // 0x1a1938: 0x46000084  c1          0x84
    ctx->pc = 0x1a1938u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a193c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a193cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a1940: 0x0  nop
    ctx->pc = 0x1a1940u;
    // NOP
    // 0x1a1944: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1a1944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1948: 0x0  nop
    ctx->pc = 0x1a1948u;
    // NOP
    // 0x1a194c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1A194Cu;
    {
        const bool branch_taken_0x1a194c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A194Cu;
        // 0x1a1950: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a194c) {
            ctx->pc = 0x1A1980u;
            goto label_1a1980;
        }
    }
    ctx->pc = 0x1A1954u;
    // 0x1a1954: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a1954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a1958: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a195c: 0x0  nop
    ctx->pc = 0x1a195cu;
    // NOP
    // 0x1a1960: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1a1960u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x1a1964: 0x46002042  mul.s       $f1, $f4, $f0
    ctx->pc = 0x1a1964u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1a1968: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x1a1968u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1a196c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1a196cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a1970: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1a1970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1a1974: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1a1974u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a1978: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1a1978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a197c: 0x0  nop
    ctx->pc = 0x1a197cu;
    // NOP
label_1a1980:
    // 0x1a1980: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1984: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a1984u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1988: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1A1988u;
    SET_GPR_U32(ctx, 31, 0x1A1990u);
    ctx->pc = 0x1A198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1988u;
    // 0x1a198c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1A1988u, 0x1A1990u)) {
        return;
    }
    ctx->pc = 0x1A1990u;
label_1a1990:
    // 0x1a1990: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a1990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1994: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1a1994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a1998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a199c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a199cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19a0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1A19A0u;
    SET_GPR_U32(ctx, 31, 0x1A19A8u);
    ctx->pc = 0x1A19A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A19A0u;
    // 0x1a19a4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1A19A0u, 0x1A19A8u)) {
        return;
    }
    ctx->pc = 0x1A19A8u;
label_1a19a8:
    // 0x1a19a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a19a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19ac: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x1a19acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a19b0: 0x3c0b006b  lui         $t3, 0x6B
    ctx->pc = 0x1a19b0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)107 << 16));
    // 0x1a19b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a19b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19b8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1a19b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a19bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a19bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19c0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1a19c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1a19c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19c8: 0x260512cc  addiu       $a1, $s0, 0x12CC
    ctx->pc = 0x1a19c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4812));
    // 0x1a19cc: 0x0  nop
    ctx->pc = 0x1a19ccu;
    // NOP
label_1a19d0:
    // 0x1a19d0: 0x68ad0007  ldl         $t5, 0x7($a1)
    ctx->pc = 0x1a19d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x1a19d4: 0x6cad0000  ldr         $t5, 0x0($a1)
    ctx->pc = 0x1a19d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x1a19d8: 0x68a2000f  ldl         $v0, 0xF($a1)
    ctx->pc = 0x1a19d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a19dc: 0x6ca20008  ldr         $v0, 0x8($a1)
    ctx->pc = 0x1a19dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a19e0: 0x68a30017  ldl         $v1, 0x17($a1)
    ctx->pc = 0x1a19e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a19e4: 0x6ca30010  ldr         $v1, 0x10($a1)
    ctx->pc = 0x1a19e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a19e8: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x1a19e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1a19ec: 0xb3ad0037  sdl         $t5, 0x37($sp)
    ctx->pc = 0x1a19ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a19f0: 0xb7ad0030  sdr         $t5, 0x30($sp)
    ctx->pc = 0x1a19f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a19f4: 0xb3a2003f  sdl         $v0, 0x3F($sp)
    ctx->pc = 0x1a19f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a19f8: 0xb7a20038  sdr         $v0, 0x38($sp)
    ctx->pc = 0x1a19f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a19fc: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x1a19fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1a00: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x1a1a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1a04: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1a1a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1a1a08: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a1a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1a0c: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A1A0Cu;
    {
        const bool branch_taken_0x1a1a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a0c) {
            ctx->pc = 0x1A1A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1A0Cu;
            // 0x1a1a10: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1A84u;
            goto label_1a1a84;
        }
    }
    ctx->pc = 0x1A1A14u;
    // 0x1a1a14: 0x14cc0007  bne         $a2, $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1A14u;
    {
        const bool branch_taken_0x1a1a14 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 12));
        ctx->pc = 0x1A1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A14u;
        // 0x1a1a18: 0x25634238  addiu       $v1, $t3, 0x4238 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 16952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a14) {
            ctx->pc = 0x1A1A34u;
            goto label_1a1a34;
        }
    }
    ctx->pc = 0x1A1A1Cu;
    // 0x1a1a1c: 0x8e021330  lw          $v0, 0x1330($s0)
    ctx->pc = 0x1a1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
    // 0x1a1a20: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1A20u;
    {
        const bool branch_taken_0x1a1a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a20) {
            ctx->pc = 0x1A1A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1A20u;
            // 0x1a1a24: 0x8c62001c  lw          $v0, 0x1C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1A38u;
            goto label_1a1a38;
        }
    }
    ctx->pc = 0x1A1A28u;
    // 0x1a1a28: 0x56a00016  bnel        $s5, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A1A28u;
    {
        const bool branch_taken_0x1a1a28 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a28) {
            ctx->pc = 0x1A1A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1A28u;
            // 0x1a1a2c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1A84u;
            goto label_1a1a84;
        }
    }
    ctx->pc = 0x1A1A30u;
    // 0x1a1a30: 0x25634238  addiu       $v1, $t3, 0x4238
    ctx->pc = 0x1a1a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 16952));
label_1a1a34:
    // 0x1a1a34: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1a1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1a1a38:
    // 0x1a1a38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1A38u;
    {
        const bool branch_taken_0x1a1a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A38u;
        // 0x1a1a3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a38) {
            ctx->pc = 0x1A1A58u;
            goto label_1a1a58;
        }
    }
    ctx->pc = 0x1A1A40u;
    // 0x1a1a40: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1a1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1a1a44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1A44u;
    {
        const bool branch_taken_0x1a1a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a44) {
            ctx->pc = 0x1A1A58u;
            goto label_1a1a58;
        }
    }
    ctx->pc = 0x1A1A4Cu;
    // 0x1a1a4c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1a1a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1a1a50: 0x4a1026  xor         $v0, $v0, $t2
    ctx->pc = 0x1a1a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
    // 0x1a1a54: 0x122200b  movn        $a0, $t1, $v0
    ctx->pc = 0x1a1a54u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9));
label_1a1a58:
    // 0x1a1a58: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1A1A58u;
    {
        const bool branch_taken_0x1a1a58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a58) {
            ctx->pc = 0x1A1A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1A58u;
            // 0x1a1a5c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1A84u;
            goto label_1a1a84;
        }
    }
    ctx->pc = 0x1A1A60u;
    // 0x1a1a60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1a64: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1a1a64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1a1a68: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a1a6c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1a1a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a1a70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1A70u;
    {
        const bool branch_taken_0x1a1a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A70u;
        // 0x1a1a74: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a70) {
            ctx->pc = 0x1A1A80u;
            goto label_1a1a80;
        }
    }
    ctx->pc = 0x1A1A78u;
    // 0x1a1a78: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1a1a78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1a1a7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a1a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a1a80:
    // 0x1a1a80: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a1a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1a1a84:
    // 0x1a1a84: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1a1a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1a1a88: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1a1a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1a1a8c: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x1a1a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a1a90: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1A1A90u;
    {
        const bool branch_taken_0x1a1a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A90u;
        // 0x1a1a94: 0x24a5001c  addiu       $a1, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a90) {
            ctx->pc = 0x1A19D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a19d0;
        }
    }
    ctx->pc = 0x1A1A98u;
    // 0x1a1a98: 0x8e021398  lw          $v0, 0x1398($s0)
    ctx->pc = 0x1a1a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5016)));
    // 0x1a1a9c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A1A9Cu;
    {
        const bool branch_taken_0x1a1a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A9Cu;
        // 0x1a1aa0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a9c) {
            ctx->pc = 0x1A1B00u;
            goto label_1a1b00;
        }
    }
    ctx->pc = 0x1A1AA4u;
    // 0x1a1aa4: 0x8e06139c  lw          $a2, 0x139C($s0)
    ctx->pc = 0x1a1aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5020)));
    // 0x1a1aa8: 0x260712e4  addiu       $a3, $s0, 0x12E4
    ctx->pc = 0x1a1aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4836));
    // 0x1a1aac: 0x8e02139c  lw          $v0, 0x139C($s0)
    ctx->pc = 0x1a1aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5020)));
label_1a1ab0:
    // 0x1a1ab0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1ab4: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x1a1ab4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a1ab8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1AB8u;
    {
        const bool branch_taken_0x1a1ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AB8u;
        // 0x1a1abc: 0xae02139c  sw          $v0, 0x139C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5020), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ab8) {
            ctx->pc = 0x1A1AC4u;
            goto label_1a1ac4;
        }
    }
    ctx->pc = 0x1A1AC0u;
    // 0x1a1ac0: 0xae00139c  sw          $zero, 0x139C($s0)
    ctx->pc = 0x1a1ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5020), GPR_U32(ctx, 0));
label_1a1ac4:
    // 0x1a1ac4: 0x8e05139c  lw          $a1, 0x139C($s0)
    ctx->pc = 0x1a1ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5020)));
    // 0x1a1ac8: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1AC8u;
    {
        const bool branch_taken_0x1a1ac8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1A1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AC8u;
        // 0x1a1acc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ac8) {
            ctx->pc = 0x1A1AE0u;
            goto label_1a1ae0;
        }
    }
    ctx->pc = 0x1A1AD0u;
    // 0x1a1ad0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a1ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a1ad4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a1ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1ad8: 0x5060fff5  beql        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A1AD8u;
    {
        const bool branch_taken_0x1a1ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ad8) {
            ctx->pc = 0x1A1ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1AD8u;
            // 0x1a1adc: 0x8e02139c  lw          $v0, 0x139C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5020)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1ab0;
        }
    }
    ctx->pc = 0x1A1AE0u;
label_1a1ae0:
    // 0x1a1ae0: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1a1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1a1ae4: 0xae051390  sw          $a1, 0x1390($s0)
    ctx->pc = 0x1a1ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5008), GPR_U32(ctx, 5));
    // 0x1a1ae8: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x1a1ae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a1aec: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x1a1aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a1af0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a1af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1af4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1af8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1A1AF8u;
    {
        const bool branch_taken_0x1a1af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AF8u;
        // 0x1a1afc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1af8) {
            ctx->pc = 0x1A1BF0u;
            goto label_1a1bf0;
        }
    }
    ctx->pc = 0x1A1B00u;
label_1a1b00:
    // 0x1a1b00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1b04: 0x16220010  bne         $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A1B04u;
    {
        const bool branch_taken_0x1a1b04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A1B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B04u;
        // 0x1a1b08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b04) {
            ctx->pc = 0x1A1B48u;
            goto label_1a1b48;
        }
    }
    ctx->pc = 0x1A1B0Cu;
    // 0x1a1b0c: 0x260312e4  addiu       $v1, $s0, 0x12E4
    ctx->pc = 0x1a1b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4836));
label_1a1b10:
    // 0x1a1b10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a1b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1b14: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1B14u;
    {
        const bool branch_taken_0x1a1b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b14) {
            ctx->pc = 0x1A1B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1B14u;
            // 0x1a1b18: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1B30u;
            goto label_1a1b30;
        }
    }
    ctx->pc = 0x1A1B1Cu;
    // 0x1a1b1c: 0xae051390  sw          $a1, 0x1390($s0)
    ctx->pc = 0x1a1b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5008), GPR_U32(ctx, 5));
    // 0x1a1b20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a1b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1b24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1b28: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a1b28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a1b2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a1b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a1b30:
    // 0x1a1b30: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x1a1b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x1a1b34: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x1a1b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a1b38: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A1B38u;
    {
        const bool branch_taken_0x1a1b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B38u;
        // 0x1a1b3c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b38) {
            ctx->pc = 0x1A1B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1b10;
        }
    }
    ctx->pc = 0x1A1B40u;
    // 0x1a1b40: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1A1B40u;
    {
        const bool branch_taken_0x1a1b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B40u;
        // 0x1a1b44: 0x8e021390  lw          $v0, 0x1390($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b40) {
            ctx->pc = 0x1A1BF4u;
            goto label_1a1bf4;
        }
    }
    ctx->pc = 0x1A1B48u;
label_1a1b48:
    // 0x1a1b48: 0x1a200029  blez        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A1B48u;
    {
        const bool branch_taken_0x1a1b48 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x1A1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B48u;
        // 0x1a1b4c: 0x251102a  slt         $v0, $s2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b48) {
            ctx->pc = 0x1A1BF0u;
            goto label_1a1bf0;
        }
    }
    ctx->pc = 0x1A1B50u;
    // 0x1a1b50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1B50u;
    {
        const bool branch_taken_0x1a1b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B50u;
        // 0x1a1b54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b50) {
            ctx->pc = 0x1A1B64u;
            goto label_1a1b64;
        }
    }
    ctx->pc = 0x1A1B58u;
    // 0x1a1b58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b5c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1A1B5Cu;
    SET_GPR_U32(ctx, 31, 0x1A1B64u);
    ctx->pc = 0x1A1B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B5Cu;
    // 0x1a1b60: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1A1B5Cu, 0x1A1B64u)) {
        return;
    }
    ctx->pc = 0x1A1B64u;
label_1a1b64:
    // 0x1a1b64: 0xc0c580c  jal         func_316030
    ctx->pc = 0x1A1B64u;
    SET_GPR_U32(ctx, 31, 0x1A1B6Cu);
    ctx->pc = 0x1A1B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B64u;
    // 0x1a1b68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x1A1B64u, 0x1A1B6Cu)) {
        return;
    }
    ctx->pc = 0x1A1B6Cu;
label_1a1b6c:
    // 0x1a1b6c: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x1a1b6cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a1b70: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A1B70u;
    {
        const bool branch_taken_0x1a1b70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b70) {
            ctx->pc = 0x1A1B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1B70u;
            // 0x1a1b74: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1B78u;
            goto label_1a1b78;
        }
    }
    ctx->pc = 0x1A1B78u;
label_1a1b78:
    // 0x1a1b78: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1a1b78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a1b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b84: 0x260512e4  addiu       $a1, $s0, 0x12E4
    ctx->pc = 0x1a1b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4836));
    // 0x1a1b88: 0x1810  mfhi        $v1
    ctx->pc = 0x1a1b88u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1a1b8c: 0x0  nop
    ctx->pc = 0x1a1b8cu;
    // NOP
label_1a1b90:
    // 0x1a1b90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a1b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1b94: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A1B94u;
    {
        const bool branch_taken_0x1a1b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b94) {
            ctx->pc = 0x1A1B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1B94u;
            // 0x1a1b98: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BD8u;
            goto label_1a1bd8;
        }
    }
    ctx->pc = 0x1A1B9Cu;
    // 0x1a1b9c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1a1b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a1ba0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1A1BA0u;
    {
        const bool branch_taken_0x1a1ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ba0) {
            ctx->pc = 0x1A1BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1BA0u;
            // 0x1a1ba4: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BD8u;
            goto label_1a1bd8;
        }
    }
    ctx->pc = 0x1A1BA8u;
    // 0x1a1ba8: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1A1BA8u;
    {
        const bool branch_taken_0x1a1ba8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ba8) {
            ctx->pc = 0x1A1BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1BA8u;
            // 0x1a1bac: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BD8u;
            goto label_1a1bd8;
        }
    }
    ctx->pc = 0x1A1BB0u;
    // 0x1a1bb0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a1bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1bb4: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1BB4u;
    {
        const bool branch_taken_0x1a1bb4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1A1BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BB4u;
        // 0x1a1bb8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1bb4) {
            ctx->pc = 0x1A1BD4u;
            goto label_1a1bd4;
        }
    }
    ctx->pc = 0x1A1BBCu;
    // 0x1a1bbc: 0xae061390  sw          $a2, 0x1390($s0)
    ctx->pc = 0x1a1bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5008), GPR_U32(ctx, 6));
    // 0x1a1bc0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a1bc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1bc4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a1bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a1bc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1bcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1BCCu;
    {
        const bool branch_taken_0x1a1bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BCCu;
        // 0x1a1bd0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1bcc) {
            ctx->pc = 0x1A1BD8u;
            goto label_1a1bd8;
        }
    }
    ctx->pc = 0x1A1BD4u;
label_1a1bd4:
    // 0x1a1bd4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1a1bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1a1bd8:
    // 0x1a1bd8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a1bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a1bdc: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x1a1bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x1a1be0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1a1be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1a1be4: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x1a1be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a1be8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1A1BE8u;
    {
        const bool branch_taken_0x1a1be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BE8u;
        // 0x1a1bec: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1be8) {
            ctx->pc = 0x1A1B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1b90;
        }
    }
    ctx->pc = 0x1A1BF0u;
label_1a1bf0:
    // 0x1a1bf0: 0x8e021390  lw          $v0, 0x1390($s0)
    ctx->pc = 0x1a1bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5008)));
label_1a1bf4:
    // 0x1a1bf4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1a1bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a1bf8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1a1bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a1bfc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1a1bfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a1c00: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1a1c00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a1c04: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1a1c04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a1c08: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1a1c08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a1c0c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a1c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1c10: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C10u;
        // 0x1a1c14: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1C18u;
}
