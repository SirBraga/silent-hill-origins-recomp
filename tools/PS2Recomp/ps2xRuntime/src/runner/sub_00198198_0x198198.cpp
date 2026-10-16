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

// Function: sub_00198198
// Address: 0x198198 - 0x198a58
void sub_00198198_0x198198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198198_0x198198");
#endif

    switch (ctx->pc) {
        case 0x19827cu: goto label_19827c;
        case 0x198288u: goto label_198288;
        case 0x198298u: goto label_198298;
        case 0x1982a8u: goto label_1982a8;
        case 0x1982b4u: goto label_1982b4;
        case 0x1982c0u: goto label_1982c0;
        case 0x1982ccu: goto label_1982cc;
        case 0x1982dcu: goto label_1982dc;
        case 0x1982ecu: goto label_1982ec;
        case 0x1982f8u: goto label_1982f8;
        case 0x198304u: goto label_198304;
        case 0x198314u: goto label_198314;
        case 0x198320u: goto label_198320;
        case 0x19832cu: goto label_19832c;
        case 0x19833cu: goto label_19833c;
        case 0x19834cu: goto label_19834c;
        case 0x198470u: goto label_198470;
        case 0x1984f0u: goto label_1984f0;
        case 0x198570u: goto label_198570;
        case 0x19857cu: goto label_19857c;
        case 0x1988a4u: goto label_1988a4;
        case 0x1988b0u: goto label_1988b0;
        case 0x1989b8u: goto label_1989b8;
        case 0x1989c8u: goto label_1989c8;
        case 0x1989d8u: goto label_1989d8;
        case 0x1989e8u: goto label_1989e8;
        case 0x1989f0u: goto label_1989f0;
        case 0x1989fcu: goto label_1989fc;
        default: break;
    }

    ctx->pc = 0x198198u;

    // 0x198198: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x198198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x19819c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19819cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1981a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1981a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1981a4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1981a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1981a8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1981a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1981ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1981acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1981b0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1981b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1981b4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1981b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1981b8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1981b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1981bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1981bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1981c0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1981c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1981c4: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x1981c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1981c8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1981c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1981cc: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x1981ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1981d0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1981d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1981d4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1981d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1981d8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1981d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x1981dc: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1981dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1981e0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1981e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1981e4: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x1981e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1981e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1981e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1981ec: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1981ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1981f0: 0x6a620063  ldl         $v0, 0x63($s3)
    ctx->pc = 0x1981f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1981f4: 0x6e62005c  ldr         $v0, 0x5C($s3)
    ctx->pc = 0x1981f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1981f8: 0x8e630064  lw          $v1, 0x64($s3)
    ctx->pc = 0x1981f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x1981fc: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1981fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198200: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x198200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198204: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x198204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x198208: 0x2651008c  addiu       $s1, $s2, 0x8C
    ctx->pc = 0x198208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 140));
    // 0x19820c: 0x6a620057  ldl         $v0, 0x57($s3)
    ctx->pc = 0x19820cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x198210: 0x6e620050  ldr         $v0, 0x50($s3)
    ctx->pc = 0x198210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x198214: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x198214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x198218: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x198218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19821c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x19821cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198220: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x198220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x198224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198228: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x198228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19822c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19822cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x198230: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x198230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x198234: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x198234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x198238: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x198238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19823c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x19823cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x198240: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x198240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x198244: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x198244u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x198248: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x198248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19824c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19824cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x198250: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x198250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x198254: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x198254u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x198258: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x198258u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x19825c: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x19825cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x198260: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x198260u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x198264: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x198264u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x198268: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x198268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19826c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x19826cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x198270: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x198270u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x198274: 0xc0acbc6  jal         func_2B2F18
    ctx->pc = 0x198274u;
    SET_GPR_U32(ctx, 31, 0x19827Cu);
    ctx->pc = 0x198278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198274u;
    // 0x198278: 0xe7a40008  swc1        $f4, 0x8($sp) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2F18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2F18u, 0x198274u, 0x19827Cu)) {
        return;
    }
    ctx->pc = 0x19827Cu;
label_19827c:
    // 0x19827c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19827cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198280: 0xc0acc00  jal         func_2B3000
    ctx->pc = 0x198280u;
    SET_GPR_U32(ctx, 31, 0x198288u);
    ctx->pc = 0x198284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198280u;
    // 0x198284: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B3000u, 0x198280u, 0x198288u)) {
        return;
    }
    ctx->pc = 0x198288u;
label_198288:
    // 0x198288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19828c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x19828cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x198290: 0xc0b6400  jal         func_2D9000
    ctx->pc = 0x198290u;
    SET_GPR_U32(ctx, 31, 0x198298u);
    ctx->pc = 0x198294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198290u;
    // 0x198294: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9000u, 0x198290u, 0x198298u)) {
        return;
    }
    ctx->pc = 0x198298u;
label_198298:
    // 0x198298: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x198298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x19829c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19829cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982a0: 0xc0b5bd2  jal         func_2D6F48
    ctx->pc = 0x1982A0u;
    SET_GPR_U32(ctx, 31, 0x1982A8u);
    ctx->pc = 0x1982A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982A0u;
    // 0x1982a4: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6F48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6F48u, 0x1982A0u, 0x1982A8u)) {
        return;
    }
    ctx->pc = 0x1982A8u;
label_1982a8:
    // 0x1982a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1982a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982ac: 0xc0acbee  jal         func_2B2FB8
    ctx->pc = 0x1982ACu;
    SET_GPR_U32(ctx, 31, 0x1982B4u);
    ctx->pc = 0x1982B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982ACu;
    // 0x1982b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2FB8u, 0x1982ACu, 0x1982B4u)) {
        return;
    }
    ctx->pc = 0x1982B4u;
label_1982b4:
    // 0x1982b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1982b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982b8: 0xc0acbe6  jal         func_2B2F98
    ctx->pc = 0x1982B8u;
    SET_GPR_U32(ctx, 31, 0x1982C0u);
    ctx->pc = 0x1982BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982B8u;
    // 0x1982bc: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2F98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2F98u, 0x1982B8u, 0x1982C0u)) {
        return;
    }
    ctx->pc = 0x1982C0u;
label_1982c0:
    // 0x1982c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1982c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982c4: 0xc0acbea  jal         func_2B2FA8
    ctx->pc = 0x1982C4u;
    SET_GPR_U32(ctx, 31, 0x1982CCu);
    ctx->pc = 0x1982C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982C4u;
    // 0x1982c8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2FA8u, 0x1982C4u, 0x1982CCu)) {
        return;
    }
    ctx->pc = 0x1982CCu;
label_1982cc:
    // 0x1982cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1982ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1982d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1982d4: 0xc0ab58a  jal         func_2AD628
    ctx->pc = 0x1982D4u;
    SET_GPR_U32(ctx, 31, 0x1982DCu);
    ctx->pc = 0x1982D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982D4u;
    // 0x1982d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD628u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD628u, 0x1982D4u, 0x1982DCu)) {
        return;
    }
    ctx->pc = 0x1982DCu;
label_1982dc:
    // 0x1982dc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1982dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1982e0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1982e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1982e4: 0xc0ad26a  jal         func_2B49A8
    ctx->pc = 0x1982E4u;
    SET_GPR_U32(ctx, 31, 0x1982ECu);
    ctx->pc = 0x1982E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982E4u;
    // 0x1982e8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B49A8u, 0x1982E4u, 0x1982ECu)) {
        return;
    }
    ctx->pc = 0x1982ECu;
label_1982ec:
    // 0x1982ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1982ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982f0: 0xc0acbc6  jal         func_2B2F18
    ctx->pc = 0x1982F0u;
    SET_GPR_U32(ctx, 31, 0x1982F8u);
    ctx->pc = 0x1982F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982F0u;
    // 0x1982f4: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2F18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2F18u, 0x1982F0u, 0x1982F8u)) {
        return;
    }
    ctx->pc = 0x1982F8u;
label_1982f8:
    // 0x1982f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1982f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982fc: 0xc0acc00  jal         func_2B3000
    ctx->pc = 0x1982FCu;
    SET_GPR_U32(ctx, 31, 0x198304u);
    ctx->pc = 0x198300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982FCu;
    // 0x198300: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B3000u, 0x1982FCu, 0x198304u)) {
        return;
    }
    ctx->pc = 0x198304u;
label_198304:
    // 0x198304: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x198304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x198308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19830c: 0xc0b5bd2  jal         func_2D6F48
    ctx->pc = 0x19830Cu;
    SET_GPR_U32(ctx, 31, 0x198314u);
    ctx->pc = 0x198310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19830Cu;
    // 0x198310: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6F48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6F48u, 0x19830Cu, 0x198314u)) {
        return;
    }
    ctx->pc = 0x198314u;
label_198314:
    // 0x198314: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198318: 0xc0acbee  jal         func_2B2FB8
    ctx->pc = 0x198318u;
    SET_GPR_U32(ctx, 31, 0x198320u);
    ctx->pc = 0x19831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198318u;
    // 0x19831c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2FB8u, 0x198318u, 0x198320u)) {
        return;
    }
    ctx->pc = 0x198320u;
label_198320:
    // 0x198320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198324: 0xc0acbe6  jal         func_2B2F98
    ctx->pc = 0x198324u;
    SET_GPR_U32(ctx, 31, 0x19832Cu);
    ctx->pc = 0x198328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198324u;
    // 0x198328: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2F98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2F98u, 0x198324u, 0x19832Cu)) {
        return;
    }
    ctx->pc = 0x19832Cu;
label_19832c:
    // 0x19832c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19832cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198334: 0xc0ab58a  jal         func_2AD628
    ctx->pc = 0x198334u;
    SET_GPR_U32(ctx, 31, 0x19833Cu);
    ctx->pc = 0x198338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198334u;
    // 0x198338: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD628u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD628u, 0x198334u, 0x19833Cu)) {
        return;
    }
    ctx->pc = 0x19833Cu;
label_19833c:
    // 0x19833c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x19833cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x198340: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x198340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x198344: 0xc0ad26a  jal         func_2B49A8
    ctx->pc = 0x198344u;
    SET_GPR_U32(ctx, 31, 0x19834Cu);
    ctx->pc = 0x198348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198344u;
    // 0x198348: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B49A8u, 0x198344u, 0x19834Cu)) {
        return;
    }
    ctx->pc = 0x19834Cu;
label_19834c:
    // 0x19834c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x19834cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x198350: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x198350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198354: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x198354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x198358: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x198358u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19835c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x19835cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198360: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x198360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198364: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x198364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x198368: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x198368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x19836c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19836cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x198370: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x198370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x198374: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x198374u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x198378: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x198378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19837c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x19837cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x198380: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x198380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x198384: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x198384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x198388: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x198388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19838c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19838cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x198390: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x198390u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x198394: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x198394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x198398: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x198398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19839c: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x19839cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x1983a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1983a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1983a4: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x1983a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1983a8: 0x32942  srl         $a1, $v1, 5
    ctx->pc = 0x1983a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1983ac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1983acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1983b0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1983b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1983b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1983b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1983b8: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x1983b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x1983bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1983bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1983c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1983c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1983c4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1983c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1983c8: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1983c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1983cc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1983ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1983d0: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x1983d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x1983d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1983d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1983d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1983d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1983dc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1983dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1983e0: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x1983e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1983e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1983e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1983e8: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1983e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1983ec: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1983ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1983f0: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x1983f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x1983f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1983f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1983f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1983f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1983fc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1983fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x198400: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x198400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x198404: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x198404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x198408: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x198408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x19840c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x19840cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x198410: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x198410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x198414: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x198414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x198418: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x198418u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x19841c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19841cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x198420: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x198420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x198424: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x198424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x198428: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x198428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x19842c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x19842cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x198430: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x198434: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x198434u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x198438: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x198438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x19843c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x19843cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x198440: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x198440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x198444: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x198444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x198448: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19844c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x19844cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x198450: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x198450u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x198454: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x198454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x198458: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x198458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19845c: 0x473804  sllv        $a3, $a3, $v0
    ctx->pc = 0x19845cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x198460: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x198460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x198464: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x198464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x198468: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x198468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x19846c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x19846cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_198470:
    // 0x198470: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x198470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x198474: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x198474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x198478: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x198478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x19847c: 0x6a1018  mult        $v0, $v1, $t2
    ctx->pc = 0x19847cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x198480: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x198480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x198484: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x198484u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x198488: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x198488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19848c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x19848cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x198490: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x198490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x198494: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x198494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x198498: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x198498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19849c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19849cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1984a0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1984a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1984a4: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1984a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1984a8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1984a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1984ac: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x1984acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x1984b0: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x1984b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1984b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1984b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1984b8: 0x29050008  slti        $a1, $t0, 0x8
    ctx->pc = 0x1984b8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1984bc: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x1984bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1984c0: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x1984c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1984c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1984c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1984c8: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1984c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1984cc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1984ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1984d0: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x1984d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x1984d4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1984d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1984d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1984d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1984dc: 0x14a0ffe4  bnez        $a1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1984DCu;
    {
        const bool branch_taken_0x1984dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1984E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984DCu;
        // 0x1984e0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1984dc) {
            ctx->pc = 0x198470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198470;
        }
    }
    ctx->pc = 0x1984E4u;
    // 0x1984e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1984e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1984e8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1984e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1984ec: 0x0  nop
    ctx->pc = 0x1984ecu;
    // NOP
label_1984f0:
    // 0x1984f0: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1984f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1984f4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1984f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1984f8: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x1984f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x1984fc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1984fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x198500: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x198500u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x198504: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x198504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x198508: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x198508u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x19850c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19850cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x198510: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x198510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x198514: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x198514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x198518: 0x681804  sllv        $v1, $t0, $v1
    ctx->pc = 0x198518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 3) & 0x1F));
    // 0x19851c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x198520: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x198524: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x198524u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x198528: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x198528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x19852c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x19852cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x198530: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x198530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x198534: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x198534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x198538: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x198538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19853c: 0x28e50008  slti        $a1, $a3, 0x8
    ctx->pc = 0x19853cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x198540: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x198540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x198544: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x198544u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x198548: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x198548u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19854c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x19854cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x198550: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x198550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x198554: 0x681804  sllv        $v1, $t0, $v1
    ctx->pc = 0x198554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 3) & 0x1F));
    // 0x198558: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x198558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19855c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19855cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x198560: 0x14a0ffe3  bnez        $a1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x198560u;
    {
        const bool branch_taken_0x198560 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x198564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198560u;
        // 0x198564: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198560) {
            ctx->pc = 0x1984F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1984f0;
        }
    }
    ctx->pc = 0x198568u;
    // 0x198568: 0xc0ab62a  jal         func_2AD8A8
    ctx->pc = 0x198568u;
    SET_GPR_U32(ctx, 31, 0x198570u);
    ctx->pc = 0x19856Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198568u;
    // 0x19856c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD8A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD8A8u, 0x198568u, 0x198570u)) {
        return;
    }
    ctx->pc = 0x198570u;
label_198570:
    // 0x198570: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x198570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x198574: 0xc0ab57a  jal         func_2AD5E8
    ctx->pc = 0x198574u;
    SET_GPR_U32(ctx, 31, 0x19857Cu);
    ctx->pc = 0x198578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198574u;
    // 0x198578: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD5E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD5E8u, 0x198574u, 0x19857Cu)) {
        return;
    }
    ctx->pc = 0x19857Cu;
label_19857c:
    // 0x19857c: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x19857cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x198580: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x198580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198584: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x198584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x198588: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x198588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x19858c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x19858cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x198590: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x198590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x198594: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x198594u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x198598: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x198598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19859c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x19859cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1985a0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1985a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1985a4: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x1985a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x1985a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1985a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1985ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1985acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1985b0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1985b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1985b4: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1985b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1985b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1985b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1985bc: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x1985bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x1985c0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1985c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1985c4: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x1985c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1985c8: 0x32942  srl         $a1, $v1, 5
    ctx->pc = 0x1985c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1985cc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1985ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1985d0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1985d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1985d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1985d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1985d8: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x1985d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x1985dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1985dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1985e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1985e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1985e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1985e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1985e8: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1985e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1985ec: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1985ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1985f0: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x1985f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x1985f4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1985f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1985f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1985f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1985fc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1985fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x198600: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x198600u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x198604: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x198604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x198608: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x198608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x19860c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x19860cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x198610: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x198610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x198614: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x198614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x198618: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19861c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x19861cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x198620: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x198620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x198624: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x198624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x198628: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x198628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x19862c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x19862cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x198630: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x198630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x198634: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x198634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x198638: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x198638u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x19863c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19863cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x198640: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x198640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x198644: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x198644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x198648: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x198648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x19864c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x19864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x198650: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x198654: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x198654u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x198658: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x198658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x19865c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x19865cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x198660: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x198660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x198664: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x198664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x198668: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x198668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x19866c: 0x32942  srl         $a1, $v1, 5
    ctx->pc = 0x19866cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x198670: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x198670u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x198674: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x198674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x198678: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x198678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19867c: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x19867cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x198680: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x198680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x198684: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x198688: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x198688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x19868c: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x19868cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x198690: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x198690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x198694: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x198694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x198698: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x198698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19869c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x19869cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1986a0: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x1986a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1986a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1986a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1986a8: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1986a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1986ac: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1986acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1986b0: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x1986b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x1986b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1986b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1986b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1986b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1986bc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1986bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1986c0: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x1986c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1986c4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1986c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1986c8: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x1986c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x1986cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1986ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1986d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1986d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1986d4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1986d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1986d8: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x1986d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1986dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1986dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1986e0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1986e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1986e4: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1986e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1986e8: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x1986e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x1986ec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1986ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1986f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1986f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1986f4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1986f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1986f8: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1986f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1986fc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1986fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x198700: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x198700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x198704: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x198704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x198708: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x198708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19870c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x19870cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x198710: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x198710u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x198714: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x198714u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x198718: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x198718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x19871c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x19871cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x198720: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x198720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x198724: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x198724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x198728: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19872c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x19872cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x198730: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x198730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x198734: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x198734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x198738: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x198738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x19873c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x19873cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x198740: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x198740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x198744: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x198744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x198748: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x198748u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x19874c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19874cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x198750: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x198750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x198754: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x198754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x198758: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x198758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x19875c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x19875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x198760: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x198764: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x198764u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x198768: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x198768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x19876c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x19876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x198770: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x198770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x198774: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x198774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x198778: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x198778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19877c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x19877cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x198780: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x198780u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x198784: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x198784u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x198788: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x198788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x19878c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x19878cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x198790: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x198790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x198794: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x198794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x198798: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19879c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x19879cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1987a0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1987a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1987a4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1987a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1987a8: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x1987a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x1987ac: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1987acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1987b0: 0x32942  srl         $a1, $v1, 5
    ctx->pc = 0x1987b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1987b4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1987b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1987b8: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1987b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1987bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1987bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1987c0: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x1987c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x1987c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1987c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1987c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1987c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1987cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1987ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1987d0: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1987d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1987d4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1987d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1987d8: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x1987d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x1987dc: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x1987dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1987e0: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x1987e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1987e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1987e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1987e8: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1987e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1987ec: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1987ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1987f0: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x1987f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x1987f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1987f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1987f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1987f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1987fc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1987fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x198800: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x198800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x198804: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x198804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x198808: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x198808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x19880c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19880cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x198810: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x198810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x198814: 0x32942  srl         $a1, $v1, 5
    ctx->pc = 0x198814u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x198818: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x198818u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19881c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x19881cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x198820: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x198820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x198824: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x198824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x198828: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x198828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19882c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19882cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x198830: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x198830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x198834: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x198834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x198838: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x198838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19883c: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x19883cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x198840: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x198840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x198844: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x198844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x198848: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x198848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19884c: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x19884cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x198850: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x198850u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x198854: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x198854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x198858: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x198858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19885c: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x19885cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x198860: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x198860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x198864: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x198868: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x198868u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x19886c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x19886cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x198870: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x198870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x198874: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x198874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x198878: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19887c: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x19887cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x198880: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x198880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x198884: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x198884u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x198888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x198888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19888c: 0x473804  sllv        $a3, $a3, $v0
    ctx->pc = 0x19888cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x198890: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198894: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x198894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x198898: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x198898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19889c: 0xc0ab62a  jal         func_2AD8A8
    ctx->pc = 0x19889Cu;
    SET_GPR_U32(ctx, 31, 0x1988A4u);
    ctx->pc = 0x1988A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19889Cu;
    // 0x1988a0: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD8A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD8A8u, 0x19889Cu, 0x1988A4u)) {
        return;
    }
    ctx->pc = 0x1988A4u;
label_1988a4:
    // 0x1988a4: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1988a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1988a8: 0xc0ab57a  jal         func_2AD5E8
    ctx->pc = 0x1988A8u;
    SET_GPR_U32(ctx, 31, 0x1988B0u);
    ctx->pc = 0x1988ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1988A8u;
    // 0x1988ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD5E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD5E8u, 0x1988A8u, 0x1988B0u)) {
        return;
    }
    ctx->pc = 0x1988B0u;
label_1988b0:
    // 0x1988b0: 0x6a830007  ldl         $v1, 0x7($s4)
    ctx->pc = 0x1988b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1988b4: 0x6e830000  ldr         $v1, 0x0($s4)
    ctx->pc = 0x1988b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1988b8: 0x6a84000f  ldl         $a0, 0xF($s4)
    ctx->pc = 0x1988b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1988bc: 0x6e840008  ldr         $a0, 0x8($s4)
    ctx->pc = 0x1988bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1988c0: 0x6a850017  ldl         $a1, 0x17($s4)
    ctx->pc = 0x1988c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1988c4: 0x6e850010  ldr         $a1, 0x10($s4)
    ctx->pc = 0x1988c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1988c8: 0x6a86001f  ldl         $a2, 0x1F($s4)
    ctx->pc = 0x1988c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1988cc: 0x6e860018  ldr         $a2, 0x18($s4)
    ctx->pc = 0x1988ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1988d0: 0xb2430117  sdl         $v1, 0x117($s2)
    ctx->pc = 0x1988d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1988d4: 0xb6430110  sdr         $v1, 0x110($s2)
    ctx->pc = 0x1988d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1988d8: 0xb244011f  sdl         $a0, 0x11F($s2)
    ctx->pc = 0x1988d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1988dc: 0xb6440118  sdr         $a0, 0x118($s2)
    ctx->pc = 0x1988dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1988e0: 0xb2450127  sdl         $a1, 0x127($s2)
    ctx->pc = 0x1988e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1988e4: 0xb6450120  sdr         $a1, 0x120($s2)
    ctx->pc = 0x1988e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1988e8: 0xb246012f  sdl         $a2, 0x12F($s2)
    ctx->pc = 0x1988e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1988ec: 0xb6460128  sdr         $a2, 0x128($s2)
    ctx->pc = 0x1988ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1988f0: 0x6a830027  ldl         $v1, 0x27($s4)
    ctx->pc = 0x1988f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1988f4: 0x6e830020  ldr         $v1, 0x20($s4)
    ctx->pc = 0x1988f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1988f8: 0xb2430137  sdl         $v1, 0x137($s2)
    ctx->pc = 0x1988f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1988fc: 0xb6430130  sdr         $v1, 0x130($s2)
    ctx->pc = 0x1988fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198900: 0x6a87002f  ldl         $a3, 0x2F($s4)
    ctx->pc = 0x198900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x198904: 0x6e870028  ldr         $a3, 0x28($s4)
    ctx->pc = 0x198904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x198908: 0x6a8b0037  ldl         $t3, 0x37($s4)
    ctx->pc = 0x198908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x19890c: 0x6e8b0030  ldr         $t3, 0x30($s4)
    ctx->pc = 0x19890cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x198910: 0x6a82003f  ldl         $v0, 0x3F($s4)
    ctx->pc = 0x198910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x198914: 0x6e820038  ldr         $v0, 0x38($s4)
    ctx->pc = 0x198914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x198918: 0x6a830047  ldl         $v1, 0x47($s4)
    ctx->pc = 0x198918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x19891c: 0x6e830040  ldr         $v1, 0x40($s4)
    ctx->pc = 0x19891cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x198920: 0xb247013f  sdl         $a3, 0x13F($s2)
    ctx->pc = 0x198920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198924: 0xb6470138  sdr         $a3, 0x138($s2)
    ctx->pc = 0x198924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198928: 0xb24b0147  sdl         $t3, 0x147($s2)
    ctx->pc = 0x198928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19892c: 0xb64b0140  sdr         $t3, 0x140($s2)
    ctx->pc = 0x19892cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198930: 0xb242014f  sdl         $v0, 0x14F($s2)
    ctx->pc = 0x198930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198934: 0xb6420148  sdr         $v0, 0x148($s2)
    ctx->pc = 0x198934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198938: 0xb2430157  sdl         $v1, 0x157($s2)
    ctx->pc = 0x198938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19893c: 0xb6430150  sdr         $v1, 0x150($s2)
    ctx->pc = 0x19893cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198940: 0x6a87004f  ldl         $a3, 0x4F($s4)
    ctx->pc = 0x198940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x198944: 0x6e870048  ldr         $a3, 0x48($s4)
    ctx->pc = 0x198944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x198948: 0xb247015f  sdl         $a3, 0x15F($s2)
    ctx->pc = 0x198948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19894c: 0xb6470158  sdr         $a3, 0x158($s2)
    ctx->pc = 0x19894cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198950: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x198950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198954: 0x6a860057  ldl         $a2, 0x57($s4)
    ctx->pc = 0x198954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x198958: 0x6e860050  ldr         $a2, 0x50($s4)
    ctx->pc = 0x198958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x19895c: 0x6a87005f  ldl         $a3, 0x5F($s4)
    ctx->pc = 0x19895cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x198960: 0x6e870058  ldr         $a3, 0x58($s4)
    ctx->pc = 0x198960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x198964: 0x6a8b0067  ldl         $t3, 0x67($s4)
    ctx->pc = 0x198964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x198968: 0x6e8b0060  ldr         $t3, 0x60($s4)
    ctx->pc = 0x198968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x19896c: 0x6a82006f  ldl         $v0, 0x6F($s4)
    ctx->pc = 0x19896cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x198970: 0x6e820068  ldr         $v0, 0x68($s4)
    ctx->pc = 0x198970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x198974: 0xb2460167  sdl         $a2, 0x167($s2)
    ctx->pc = 0x198974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198978: 0xb6460160  sdr         $a2, 0x160($s2)
    ctx->pc = 0x198978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19897c: 0xb247016f  sdl         $a3, 0x16F($s2)
    ctx->pc = 0x19897cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 367); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198980: 0xb6470168  sdr         $a3, 0x168($s2)
    ctx->pc = 0x198980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 360); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198984: 0xb24b0177  sdl         $t3, 0x177($s2)
    ctx->pc = 0x198984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198988: 0xb64b0170  sdr         $t3, 0x170($s2)
    ctx->pc = 0x198988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19898c: 0xb242017f  sdl         $v0, 0x17F($s2)
    ctx->pc = 0x19898cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198990: 0xb6420178  sdr         $v0, 0x178($s2)
    ctx->pc = 0x198990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198994: 0x6a860077  ldl         $a2, 0x77($s4)
    ctx->pc = 0x198994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x198998: 0x6e860070  ldr         $a2, 0x70($s4)
    ctx->pc = 0x198998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x19899c: 0xb2460187  sdl         $a2, 0x187($s2)
    ctx->pc = 0x19899cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1989a0: 0xb6460180  sdr         $a2, 0x180($s2)
    ctx->pc = 0x1989a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1989a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1989a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989a8: 0xae560188  sw          $s6, 0x188($s2)
    ctx->pc = 0x1989a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 22));
    // 0x1989ac: 0xae57018c  sw          $s7, 0x18C($s2)
    ctx->pc = 0x1989acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 23));
    // 0x1989b0: 0xc0aad5c  jal         func_2AB570
    ctx->pc = 0x1989B0u;
    SET_GPR_U32(ctx, 31, 0x1989B8u);
    ctx->pc = 0x1989B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989B0u;
    // 0x1989b4: 0xae530108  sw          $s3, 0x108($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AB570u, 0x1989B0u, 0x1989B8u)) {
        return;
    }
    ctx->pc = 0x1989B8u;
label_1989b8:
    // 0x1989b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1989b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989bc: 0xae42010c  sw          $v0, 0x10C($s2)
    ctx->pc = 0x1989bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
    // 0x1989c0: 0xc0aa71c  jal         func_2A9C70
    ctx->pc = 0x1989C0u;
    SET_GPR_U32(ctx, 31, 0x1989C8u);
    ctx->pc = 0x1989C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989C0u;
    // 0x1989c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9C70u, 0x1989C0u, 0x1989C8u)) {
        return;
    }
    ctx->pc = 0x1989C8u;
label_1989c8:
    // 0x1989c8: 0x8e45010c  lw          $a1, 0x10C($s2)
    ctx->pc = 0x1989c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x1989cc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1989ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989d0: 0xc0662c0  jal         func_198B00
    ctx->pc = 0x1989D0u;
    SET_GPR_U32(ctx, 31, 0x1989D8u);
    ctx->pc = 0x1989D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989D0u;
    // 0x1989d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198B00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x198B00u, 0x1989D0u, 0x1989D8u)) {
        return;
    }
    ctx->pc = 0x1989D8u;
label_1989d8:
    // 0x1989d8: 0x8e45010c  lw          $a1, 0x10C($s2)
    ctx->pc = 0x1989d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x1989dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1989dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989e0: 0xc0ab62c  jal         func_2AD8B0
    ctx->pc = 0x1989E0u;
    SET_GPR_U32(ctx, 31, 0x1989E8u);
    ctx->pc = 0x1989E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989E0u;
    // 0x1989e4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD8B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD8B0u, 0x1989E0u, 0x1989E8u)) {
        return;
    }
    ctx->pc = 0x1989E8u;
label_1989e8:
    // 0x1989e8: 0xc0ab628  jal         func_2AD8A0
    ctx->pc = 0x1989E8u;
    SET_GPR_U32(ctx, 31, 0x1989F0u);
    ctx->pc = 0x1989ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989E8u;
    // 0x1989ec: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD8A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD8A0u, 0x1989E8u, 0x1989F0u)) {
        return;
    }
    ctx->pc = 0x1989F0u;
label_1989f0:
    // 0x1989f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1989f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989f4: 0xc0acb08  jal         func_2B2C20
    ctx->pc = 0x1989F4u;
    SET_GPR_U32(ctx, 31, 0x1989FCu);
    ctx->pc = 0x1989F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989F4u;
    // 0x1989f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2C20u, 0x1989F4u, 0x1989FCu)) {
        return;
    }
    ctx->pc = 0x1989FCu;
label_1989fc:
    // 0x1989fc: 0x6aa30007  ldl         $v1, 0x7($s5)
    ctx->pc = 0x1989fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x198a00: 0x6ea30000  ldr         $v1, 0x0($s5)
    ctx->pc = 0x198a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x198a04: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x198a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x198a08: 0xb2430197  sdl         $v1, 0x197($s2)
    ctx->pc = 0x198a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198a0c: 0xb6430190  sdr         $v1, 0x190($s2)
    ctx->pc = 0x198a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198a10: 0xae440198  sw          $a0, 0x198($s2)
    ctx->pc = 0x198a10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 4));
    // 0x198a14: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x198a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a18: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x198a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x198a1c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x198a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198a20: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x198a20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x198a24: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x198a24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x198a28: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x198a28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x198a2c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x198a2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x198a30: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x198a30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198a34: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x198a34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198a38: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x198a38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198a3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x198a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198a40: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x198a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x198a44: 0x3e00008  jr          $ra
    ctx->pc = 0x198A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A44u;
        // 0x198a48: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198A4Cu;
    // 0x198a4c: 0x0  nop
    ctx->pc = 0x198a4cu;
    // NOP
    // 0x198a50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x198a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x198a54: 0x0  nop
    ctx->pc = 0x198a54u;
    // NOP
    ctx->pc = 0x198a58u;
}
