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

// Function: sub_0030E3E0
// Address: 0x30e3e0 - 0x30f7c8
void sub_0030E3E0_0x30e3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E3E0_0x30e3e0");
#endif

    switch (ctx->pc) {
        case 0x30e4e8u: goto label_30e4e8;
        case 0x30e5e0u: goto label_30e5e0;
        case 0x30e88cu: goto label_30e88c;
        case 0x30e8d8u: goto label_30e8d8;
        case 0x30e90cu: goto label_30e90c;
        case 0x30e9b8u: goto label_30e9b8;
        case 0x30ed00u: goto label_30ed00;
        case 0x30ee00u: goto label_30ee00;
        case 0x30f3d0u: goto label_30f3d0;
        case 0x30f420u: goto label_30f420;
        default: break;
    }

    ctx->pc = 0x30e3e0u;

    // 0x30e3e0: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x30e3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x30e3e4: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x30e3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x30e3e8: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x30e3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x30e3ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30e3ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e3f0: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x30e3f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x30e3f4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x30e3f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e3f8: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x30e3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x30e3fc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x30e3fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x30e400: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x30e400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x30e404: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x30e404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x30e408: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x30e408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x30e40c: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x30e40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x30e410: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x30e410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x30e414: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x30e414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
    // 0x30e418: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x30e418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x30e41c: 0xe7b601e0  swc1        $f22, 0x1E0($sp)
    ctx->pc = 0x30e41cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x30e420: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x30e420u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x30e424: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x30e424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x30e428: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x30e428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x30e42c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x30e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x30e430: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x30e430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e434: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x30e434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e438: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x30e438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x30e43c: 0x68cf0007  ldl         $t7, 0x7($a2)
    ctx->pc = 0x30e43cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x30e440: 0x6ccf0000  ldr         $t7, 0x0($a2)
    ctx->pc = 0x30e440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x30e444: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x30e444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x30e448: 0xb3af0027  sdl         $t7, 0x27($sp)
    ctx->pc = 0x30e448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e44c: 0xb7af0020  sdr         $t7, 0x20($sp)
    ctx->pc = 0x30e44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e450: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x30e450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x30e454: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x30e454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e458: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x30e458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e45c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x30e45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e460: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x30e460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e464: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x30e464u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x30e468: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x30e468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e46c: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x30e46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e470: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x30e470u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x30e474: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x30e474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30e478: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x30e478u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x30e47c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x30e47cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30e480: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x30e480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30e484: 0x96440020  lhu         $a0, 0x20($s2)
    ctx->pc = 0x30e484u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x30e488: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x30e488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x30e48c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x30e48cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e490: 0x9642001e  lhu         $v0, 0x1E($s2)
    ctx->pc = 0x30e490u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x30e494: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x30e494u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x30e498: 0x9643001c  lhu         $v1, 0x1C($s2)
    ctx->pc = 0x30e498u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x30e49c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x30e49cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e4a0: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x30e4a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30e4a4: 0xc4a83de0  lwc1        $f8, 0x3DE0($a1)
    ctx->pc = 0x30e4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 15840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x30e4a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30e4ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x30e4acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e4b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30e4b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30e4b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e4b8: 0x10c0002f  beqz        $a2, . + 4 + (0x2F << 2)
    ctx->pc = 0x30E4B8u;
    {
        const bool branch_taken_0x30e4b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E4B8u;
        // 0x30e4bc: 0x3077ffff  andi        $s7, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e4b8) {
            ctx->pc = 0x30E578u;
            goto label_30e578;
        }
    }
    ctx->pc = 0x30E4C0u;
    // 0x30e4c0: 0x8e490010  lw          $t1, 0x10($s2)
    ctx->pc = 0x30e4c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x30e4c4: 0x46001a86  mov.s       $f10, $f3
    ctx->pc = 0x30e4c4u;
    ctx->f[10] = FPU_MOV_S(ctx->f[3]);
    // 0x30e4c8: 0x8e480014  lw          $t0, 0x14($s2)
    ctx->pc = 0x30e4c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x30e4cc: 0x46002a46  mov.s       $f9, $f5
    ctx->pc = 0x30e4ccu;
    ctx->f[9] = FPU_MOV_S(ctx->f[5]);
    // 0x30e4d0: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x30e4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30e4d4: 0x460021c6  mov.s       $f7, $f4
    ctx->pc = 0x30e4d4u;
    ctx->f[7] = FPU_MOV_S(ctx->f[4]);
    // 0x30e4d8: 0x8e4c000c  lw          $t4, 0xC($s2)
    ctx->pc = 0x30e4d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x30e4dc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x30e4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30e4e0: 0x1652018  mult        $a0, $t3, $a1
    ctx->pc = 0x30e4e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30e4e4: 0x0  nop
    ctx->pc = 0x30e4e4u;
    // NOP
label_30e4e8:
    // 0x30e4e8: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x30e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x30e4ec: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x30e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x30e4f0: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x30e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x30e4f4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x30e4f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30e4f8: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x30e4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e4fc: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x30e4fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30e500: 0xc4660004  lwc1        $f6, 0x4($v1)
    ctx->pc = 0x30e500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30e504: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x30e504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e508: 0x460450c2  mul.s       $f3, $f10, $f4
    ctx->pc = 0x30e508u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x30e50c: 0x46064802  mul.s       $f0, $f9, $f6
    ctx->pc = 0x30e50cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x30e510: 0x46053842  mul.s       $f1, $f7, $f5
    ctx->pc = 0x30e510u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x30e514: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x30e514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x30e518: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x30e518u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30e51c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x30e51cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x30e520: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x30e520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30e524: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x30e524u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x30e528: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x30e528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x30e52c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30e52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e530: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x30e530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e534: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x30e534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x30e538: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x30e538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e53c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x30e53cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x30e540: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x30e540u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x30e544: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x30e544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x30e548: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30e548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30e54c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x30e54cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x30e550: 0x46034034  c.lt.s      $f8, $f3
    ctx->pc = 0x30e550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e554: 0x0  nop
    ctx->pc = 0x30e554u;
    // NOP
    // 0x30e558: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x30E558u;
    {
        const bool branch_taken_0x30e558 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E558u;
        // 0x30e55c: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e558) {
            ctx->pc = 0x30E568u;
            goto label_30e568;
        }
    }
    ctx->pc = 0x30E560u;
    // 0x30e560: 0x46001a06  mov.s       $f8, $f3
    ctx->pc = 0x30e560u;
    ctx->f[8] = FPU_MOV_S(ctx->f[3]);
    // 0x30e564: 0x160702d  daddu       $t6, $t3, $zero
    ctx->pc = 0x30e564u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_30e568:
    // 0x30e568: 0x304bffff  andi        $t3, $v0, 0xFFFF
    ctx->pc = 0x30e568u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30e56c: 0x166182b  sltu        $v1, $t3, $a2
    ctx->pc = 0x30e56cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x30e570: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x30E570u;
    {
        const bool branch_taken_0x30e570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E570u;
        // 0x30e574: 0x1652018  mult        $a0, $t3, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e570) {
            ctx->pc = 0x30E4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e4e8;
        }
    }
    ctx->pc = 0x30E578u;
label_30e578:
    // 0x30e578: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30e578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e57c: 0x46004036  c.le.s      $f8, $f0
    ctx->pc = 0x30e57cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e580: 0x0  nop
    ctx->pc = 0x30e580u;
    // NOP
    // 0x30e584: 0x450100cb  bc1t        . + 4 + (0xCB << 2)
    ctx->pc = 0x30E584u;
    {
        const bool branch_taken_0x30e584 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E584u;
        // 0x30e588: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e584) {
            ctx->pc = 0x30E8B4u;
            goto label_30e8b4;
        }
    }
    ctx->pc = 0x30E58Cu;
    // 0x30e58c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x30e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x30e590: 0xe1840  sll         $v1, $t6, 1
    ctx->pc = 0x30e590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x30e594: 0xc5483de0  lwc1        $f8, 0x3DE0($t2)
    ctx->pc = 0x30e594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 15840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x30e598: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30e598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30e59c: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x30e59cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30e5a0: 0x946b0000  lhu         $t3, 0x0($v1)
    ctx->pc = 0x30e5a0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30e5a4: 0x164102b  sltu        $v0, $t3, $a0
    ctx->pc = 0x30e5a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x30e5a8: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x30E5A8u;
    {
        const bool branch_taken_0x30e5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E5A8u;
        // 0x30e5ac: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e5a8) {
            ctx->pc = 0x30E738u;
            goto label_30e738;
        }
    }
    ctx->pc = 0x30E5B0u;
    // 0x30e5b0: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x30e5b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30e5b4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x30e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x30e5b8: 0x1c91018  mult        $v0, $t6, $t1
    ctx->pc = 0x30e5b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30e5bc: 0x8e4c0014  lw          $t4, 0x14($s2)
    ctx->pc = 0x30e5bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x30e5c0: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x30e5c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30e5c4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x30e5c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e5c8: 0xc7ab0030  lwc1        $f11, 0x30($sp)
    ctx->pc = 0x30e5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x30e5cc: 0xc7aa0034  lwc1        $f10, 0x34($sp)
    ctx->pc = 0x30e5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x30e5d0: 0xc7a90038  lwc1        $f9, 0x38($sp)
    ctx->pc = 0x30e5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x30e5d4: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x30e5d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30e5d8: 0x1691018  mult        $v0, $t3, $t1
    ctx->pc = 0x30e5d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30e5dc: 0x0  nop
    ctx->pc = 0x30e5dcu;
    // NOP
label_30e5e0:
    // 0x30e5e0: 0x4c3821  addu        $a3, $v0, $t4
    ctx->pc = 0x30e5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x30e5e4: 0x94e20006  lhu         $v0, 0x6($a3)
    ctx->pc = 0x30e5e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x30e5e8: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x30e5e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30e5ec: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x30e5ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x30e5f0: 0x94e50006  lhu         $a1, 0x6($a3)
    ctx->pc = 0x30e5f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x30e5f4: 0xa93018  mult        $a2, $a1, $t1
    ctx->pc = 0x30e5f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x30e5f8: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x30e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x30e5fc: 0x692018  mult        $a0, $v1, $t1
    ctx->pc = 0x30e5fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30e600: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x30e600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e604: 0xd12821  addu        $a1, $a2, $s1
    ctx->pc = 0x30e604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x30e608: 0x94e60006  lhu         $a2, 0x6($a3)
    ctx->pc = 0x30e608u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x30e60c: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x30e60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x30e610: 0x94e40004  lhu         $a0, 0x4($a3)
    ctx->pc = 0x30e610u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x30e614: 0xc97818  mult        $t7, $a2, $t1
    ctx->pc = 0x30e614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x30e618: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x30e618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e61c: 0x891018  mult        $v0, $a0, $t1
    ctx->pc = 0x30e61cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30e620: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x30e620u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x30e624: 0x1f13021  addu        $a2, $t7, $s1
    ctx->pc = 0x30e624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x30e628: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x30e628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30e62c: 0x94e20004  lhu         $v0, 0x4($a3)
    ctx->pc = 0x30e62cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x30e630: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x30e630u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x30e634: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x30e634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30e638: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x30e638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e63c: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x30e63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e640: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x30e640u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x30e644: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x30e644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x30e648: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x30e648u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x30e64c: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x30e64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e650: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x30e650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e654: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x30e654u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x30e658: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x30e658u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x30e65c: 0xc5050008  lwc1        $f5, 0x8($t0)
    ctx->pc = 0x30e65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e660: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x30e660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e664: 0x46051942  mul.s       $f5, $f3, $f5
    ctx->pc = 0x30e664u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x30e668: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x30e668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30e66c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x30e66cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x30e670: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x30e670u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x30e674: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x30e674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e678: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x30e678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e67c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x30e67cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30e680: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x30e680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x30e684: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x30e684u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x30e688: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x30e688u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x30e68c: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x30e68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e690: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x30e690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e694: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x30e694u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x30e698: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x30e698u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x30e69c: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x30e69cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x30e6a0: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x30e6a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x30e6a4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x30e6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e6a8: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x30e6a8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x30e6ac: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x30e6acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x30e6b0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x30e6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e6b4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x30e6b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30e6b8: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x30e6b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x30e6bc: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x30e6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e6c0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x30e6c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x30e6c4: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x30e6c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x30e6c8: 0x46055982  mul.s       $f6, $f11, $f5
    ctx->pc = 0x30e6c8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x30e6cc: 0x94e20004  lhu         $v0, 0x4($a3)
    ctx->pc = 0x30e6ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x30e6d0: 0x46025042  mul.s       $f1, $f10, $f2
    ctx->pc = 0x30e6d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x30e6d4: 0x460449c2  mul.s       $f7, $f9, $f4
    ctx->pc = 0x30e6d4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x30e6d8: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x30e6d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30e6dc: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x30e6dcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x30e6e0: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x30e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x30e6e4: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x30e6e4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x30e6e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30e6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e6ec: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x30e6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e6f0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x30e6f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x30e6f4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x30e6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e6f8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x30e6f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x30e6fc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x30e6fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x30e700: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x30e700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x30e704: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30e704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30e708: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x30e708u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x30e70c: 0x46064034  c.lt.s      $f8, $f6
    ctx->pc = 0x30e70cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e710: 0x0  nop
    ctx->pc = 0x30e710u;
    // NOP
    // 0x30e714: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x30E714u;
    {
        const bool branch_taken_0x30e714 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E714u;
        // 0x30e718: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e714) {
            ctx->pc = 0x30E728u;
            goto label_30e728;
        }
    }
    ctx->pc = 0x30E71Cu;
    // 0x30e71c: 0x46003206  mov.s       $f8, $f6
    ctx->pc = 0x30e71cu;
    ctx->f[8] = FPU_MOV_S(ctx->f[6]);
    // 0x30e720: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x30e720u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e724: 0x0  nop
    ctx->pc = 0x30e724u;
    // NOP
label_30e728:
    // 0x30e728: 0x304bffff  andi        $t3, $v0, 0xFFFF
    ctx->pc = 0x30e728u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30e72c: 0x16a182b  sltu        $v1, $t3, $t2
    ctx->pc = 0x30e72cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x30e730: 0x1460ffab  bnez        $v1, . + 4 + (-0x55 << 2)
    ctx->pc = 0x30E730u;
    {
        const bool branch_taken_0x30e730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E730u;
        // 0x30e734: 0x1691018  mult        $v0, $t3, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e730) {
            ctx->pc = 0x30E5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e5e0;
        }
    }
    ctx->pc = 0x30E738u;
label_30e738:
    // 0x30e738: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x30e738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x30e73c: 0x46074036  c.le.s      $f8, $f7
    ctx->pc = 0x30e73cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e740: 0x0  nop
    ctx->pc = 0x30e740u;
    // NOP
    // 0x30e744: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x30E744u;
    {
        const bool branch_taken_0x30e744 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E744u;
        // 0x30e748: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e744) {
            ctx->pc = 0x30E754u;
            goto label_30e754;
        }
    }
    ctx->pc = 0x30E74Cu;
    // 0x30e74c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x30E74Cu;
    {
        const bool branch_taken_0x30e74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E74Cu;
        // 0x30e750: 0x1c0882d  daddu       $s1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e74c) {
            ctx->pc = 0x30E8B4u;
            goto label_30e8b4;
        }
    }
    ctx->pc = 0x30E754u;
label_30e754:
    // 0x30e754: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x30e754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30e758: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x30e758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x30e75c: 0x1a51818  mult        $v1, $t5, $a1
    ctx->pc = 0x30e75cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30e760: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x30e760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30e764: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x30e764u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x30e768: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x30e768u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30e76c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x30e76cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30e770: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x30e770u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30e774: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x30e774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30e778: 0x96070006  lhu         $a3, 0x6($s0)
    ctx->pc = 0x30e778u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x30e77c: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x30e77cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30e780: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x30e780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x30e784: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x30e784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30e788: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x30e788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x30e78c: 0xc51018  mult        $v0, $a2, $a1
    ctx->pc = 0x30e78cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30e790: 0xe52018  mult        $a0, $a3, $a1
    ctx->pc = 0x30e790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30e794: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x30e794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e798: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x30e798u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x30e79c: 0x483021  addu        $a2, $v0, $t0
    ctx->pc = 0x30e79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x30e7a0: 0x883821  addu        $a3, $a0, $t0
    ctx->pc = 0x30e7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x30e7a4: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x30e7a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30e7a8: 0x96040006  lhu         $a0, 0x6($s0)
    ctx->pc = 0x30e7a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x30e7ac: 0xe7a60060  swc1        $f6, 0x60($sp)
    ctx->pc = 0x30e7acu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x30e7b0: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x30e7b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30e7b4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x30e7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e7b8: 0xc4e50004  lwc1        $f5, 0x4($a3)
    ctx->pc = 0x30e7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e7bc: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x30e7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x30e7c0: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x30e7c0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x30e7c4: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x30e7c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30e7c8: 0xe7a50064  swc1        $f5, 0x64($sp)
    ctx->pc = 0x30e7c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x30e7cc: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x30e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x30e7d0: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x30e7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e7d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x30e7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e7d8: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x30e7d8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x30e7dc: 0xe7a40068  swc1        $f4, 0x68($sp)
    ctx->pc = 0x30e7dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x30e7e0: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x30e7e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30e7e4: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x30e7e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30e7e8: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x30e7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e7ec: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x30e7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e7f0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x30e7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e7f4: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x30e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x30e7f8: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x30e7f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30e7fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30e7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e800: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x30e800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30e804: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x30e804u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x30e808: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x30e808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x30e80c: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x30e80cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30e810: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x30e810u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x30e814: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x30e814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30e818: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x30e818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e81c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x30e81cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x30e820: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x30e820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x30e824: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x30e824u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x30e828: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x30e828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e82c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30e82cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30e830: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x30e830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x30e834: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x30e834u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x30e838: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x30e838u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x30e83c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x30e83cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x30e840: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x30e840u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x30e844: 0x46043040  add.s       $f1, $f6, $f4
    ctx->pc = 0x30e844u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x30e848: 0x46070834  c.lt.s      $f1, $f7
    ctx->pc = 0x30e848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e84c: 0x0  nop
    ctx->pc = 0x30e84cu;
    // NOP
    // 0x30e850: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x30E850u;
    {
        const bool branch_taken_0x30e850 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E850u;
        // 0x30e854: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e850) {
            ctx->pc = 0x30E860u;
            goto label_30e860;
        }
    }
    ctx->pc = 0x30E858u;
    // 0x30e858: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x30E858u;
    {
        const bool branch_taken_0x30e858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E858u;
        // 0x30e85c: 0x96110004  lhu         $s1, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e858) {
            ctx->pc = 0x30E8B4u;
            goto label_30e8b4;
        }
    }
    ctx->pc = 0x30E860u;
label_30e860:
    // 0x30e860: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x30e860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e864: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30e864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30e868: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30e868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30e86c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x30e86cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30e870: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x30e870u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30e874: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x30e874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e878: 0x0  nop
    ctx->pc = 0x30e878u;
    // NOP
    // 0x30e87c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x30E87Cu;
    {
        const bool branch_taken_0x30e87c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E87Cu;
        // 0x30e880: 0x31b1ffff  andi        $s1, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e87c) {
            ctx->pc = 0x30E8B0u;
            goto label_30e8b0;
        }
    }
    ctx->pc = 0x30E884u;
    // 0x30e884: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30E884u;
    {
        const bool branch_taken_0x30e884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E884u;
        // 0x30e888: 0x96110006  lhu         $s1, 0x6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e884) {
            ctx->pc = 0x30E8B4u;
            goto label_30e8b4;
        }
    }
    ctx->pc = 0x30E88Cu;
label_30e88c:
    // 0x30e88c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x30e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x30e890: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x30e890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x30e894: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x30e894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x30e898: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x30e898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x30e89c: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x30e89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e8a0: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x30e8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e8a4: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x30e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x30e8a8: 0x100003ab  b           . + 4 + (0x3AB << 2)
    ctx->pc = 0x30E8A8u;
    {
        const bool branch_taken_0x30e8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e8a8) {
            ctx->pc = 0x30F758u;
            goto label_30f758;
        }
    }
    ctx->pc = 0x30E8B0u;
label_30e8b0:
    // 0x30e8b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30e8b4:
    // 0x30e8b4: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x30e8b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30e8b8: 0xaec0001c  sw          $zero, 0x1C($s6)
    ctx->pc = 0x30e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 0));
    // 0x30e8bc: 0x1d34018  mult        $t0, $t6, $s3
    ctx->pc = 0x30e8bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x30e8c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30e8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30e8c4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x30e8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x30e8c8: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x30e8c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30e8cc: 0xafa80120  sw          $t0, 0x120($sp)
    ctx->pc = 0x30e8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 8));
    // 0x30e8d0: 0xc6d5001c  lwc1        $f21, 0x1C($s6)
    ctx->pc = 0x30e8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30e8d4: 0x0  nop
    ctx->pc = 0x30e8d4u;
    // NOP
label_30e8d8:
    // 0x30e8d8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x30e8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x30e8dc: 0x1440029a  bnez        $v0, . + 4 + (0x29A << 2)
    ctx->pc = 0x30E8DCu;
    {
        const bool branch_taken_0x30e8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8DCu;
        // 0x30e8e0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e8dc) {
            ctx->pc = 0x30F348u;
            goto label_30f348;
        }
    }
    ctx->pc = 0x30E8E4u;
    // 0x30e8e4: 0x146000d0  bnez        $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x30E8E4u;
    {
        const bool branch_taken_0x30e8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8E4u;
        // 0x30e8e8: 0x2332018  mult        $a0, $s1, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e8e4) {
            ctx->pc = 0x30EC28u;
            goto label_30ec28;
        }
    }
    ctx->pc = 0x30E8ECu;
    // 0x30e8ec: 0x2338018  mult        $s0, $s1, $s3
    ctx->pc = 0x30e8ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x30e8f0: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x30e8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30e8f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30e8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30e8f8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x30e8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30e8fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x30e8fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e900: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x30e900u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x30e904: 0xc0aaa6e  jal         func_2AA9B8
    ctx->pc = 0x30E904u;
    SET_GPR_U32(ctx, 31, 0x30E90Cu);
    ctx->pc = 0x30E908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E904u;
    // 0x30e908: 0xf03821  addu        $a3, $a3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA9B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA9B8u, 0x30E904u, 0x30E90Cu)) {
        return;
    }
    ctx->pc = 0x30E90Cu;
label_30e90c:
    // 0x30e90c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x30e90cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e910: 0x542039e  bltzl       $t2, . + 4 + (0x39E << 2)
    ctx->pc = 0x30E910u;
    {
        const bool branch_taken_0x30e910 = (GPR_S64(ctx, 10) < 0);
        if (branch_taken_0x30e910) {
            ctx->pc = 0x30E914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E910u;
            // 0x30e914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F78Cu;
            goto label_30f78c;
        }
    }
    ctx->pc = 0x30E918u;
    // 0x30e918: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30e918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30e91c: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x30e91cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e920: 0x0  nop
    ctx->pc = 0x30e920u;
    // NOP
    // 0x30e924: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30E924u;
    {
        const bool branch_taken_0x30e924 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e924) {
            ctx->pc = 0x30E928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E924u;
            // 0x30e928: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E92Cu;
            goto label_30e92c;
        }
    }
    ctx->pc = 0x30E92Cu;
label_30e92c:
    // 0x30e92c: 0x19400016  blez        $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x30E92Cu;
    {
        const bool branch_taken_0x30e92c = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x30E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E92Cu;
        // 0x30e930: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e92c) {
            ctx->pc = 0x30E988u;
            goto label_30e988;
        }
    }
    ctx->pc = 0x30E934u;
    // 0x30e934: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x30e934u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e938: 0x0  nop
    ctx->pc = 0x30e938u;
    // NOP
    // 0x30e93c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x30E93Cu;
    {
        const bool branch_taken_0x30e93c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E93Cu;
        // 0x30e940: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e93c) {
            ctx->pc = 0x30E988u;
            goto label_30e988;
        }
    }
    ctx->pc = 0x30E944u;
    // 0x30e944: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x30e944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30e948: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x30e948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x30e94c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x30e94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e950: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x30e950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e954: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x30e954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e958: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30e958u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30e95c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x30e95cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30e960: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x30e960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e964: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x30e964u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x30e968: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x30e968u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x30e96c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x30e96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e970: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x30e970u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x30e974: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x30e974u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x30e978: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30e978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30e97c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30e97cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30e980: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x30E980u;
    {
        const bool branch_taken_0x30e980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E980u;
        // 0x30e984: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e980) {
            ctx->pc = 0x30EDF8u;
            goto label_30edf8;
        }
    }
    ctx->pc = 0x30E988u;
label_30e988:
    // 0x30e988: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x30e988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x30e98c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x30e98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x30e990: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x30e990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e994: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30e994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30e998: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x30e998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30e99c: 0x946b0000  lhu         $t3, 0x0($v1)
    ctx->pc = 0x30e99cu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30e9a0: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x30e9a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30e9a4: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x30E9A4u;
    {
        const bool branch_taken_0x30e9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E9A4u;
        // 0x30e9a8: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e9a4) {
            ctx->pc = 0x30EB6Cu;
            goto label_30eb6c;
        }
    }
    ctx->pc = 0x30E9ACu;
    // 0x30e9ac: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x30e9acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x30e9b0: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x30e9b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30e9b4: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x30e9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_30e9b8:
    // 0x30e9b8: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x30e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x30e9bc: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x30e9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x30e9c0: 0x646021  addu        $t4, $v1, $a0
    ctx->pc = 0x30e9c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30e9c4: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x30e9c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x30e9c8: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x30e9c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30e9cc: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x30e9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x30e9d0: 0x94e30006  lhu         $v1, 0x6($a3)
    ctx->pc = 0x30e9d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x30e9d4: 0x94e20004  lhu         $v0, 0x4($a3)
    ctx->pc = 0x30e9d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x30e9d8: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x30e9d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30e9dc: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x30e9dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30e9e0: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x30e9e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30e9e4: 0x94e60006  lhu         $a2, 0x6($a3)
    ctx->pc = 0x30e9e4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x30e9e8: 0x94e50004  lhu         $a1, 0x4($a3)
    ctx->pc = 0x30e9e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x30e9ec: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x30e9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x30e9f0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x30e9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e9f4: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x30e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x30e9f8: 0xa91818  mult        $v1, $a1, $t1
    ctx->pc = 0x30e9f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30e9fc: 0xc92018  mult        $a0, $a2, $t1
    ctx->pc = 0x30e9fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30ea00: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30ea00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ea04: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x30ea04u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x30ea08: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x30ea08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x30ea0c: 0x883021  addu        $a2, $a0, $t0
    ctx->pc = 0x30ea0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x30ea10: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x30ea10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x30ea14: 0x94e40006  lhu         $a0, 0x6($a3)
    ctx->pc = 0x30ea14u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x30ea18: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x30ea18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x30ea1c: 0x891018  mult        $v0, $a0, $t1
    ctx->pc = 0x30ea1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30ea20: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x30ea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ea24: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x30ea24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ea28: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x30ea28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x30ea2c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x30ea2cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x30ea30: 0x691018  mult        $v0, $v1, $t1
    ctx->pc = 0x30ea30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30ea34: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x30ea34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x30ea38: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x30ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x30ea3c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x30ea3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ea40: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x30ea40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ea44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30ea44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30ea48: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x30ea48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x30ea4c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x30ea4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ea50: 0x460019c2  mul.s       $f7, $f3, $f0
    ctx->pc = 0x30ea50u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x30ea54: 0xe7a700a0  swc1        $f7, 0xA0($sp)
    ctx->pc = 0x30ea54u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x30ea58: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x30ea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ea5c: 0x46001182  mul.s       $f6, $f2, $f0
    ctx->pc = 0x30ea5cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30ea60: 0xe7a600a4  swc1        $f6, 0xA4($sp)
    ctx->pc = 0x30ea60u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x30ea64: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x30ea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ea68: 0x46000942  mul.s       $f5, $f1, $f0
    ctx->pc = 0x30ea68u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30ea6c: 0xe7a500a8  swc1        $f5, 0xA8($sp)
    ctx->pc = 0x30ea6cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x30ea70: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x30ea70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ea74: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x30ea74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ea78: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x30ea78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x30ea7c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x30ea7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ea80: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x30ea80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x30ea84: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x30ea84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x30ea88: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x30ea88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x30ea8c: 0x46010200  add.s       $f8, $f0, $f1
    ctx->pc = 0x30ea8cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30ea90: 0x46084834  c.lt.s      $f9, $f8
    ctx->pc = 0x30ea90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ea94: 0x0  nop
    ctx->pc = 0x30ea94u;
    // NOP
    // 0x30ea98: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x30EA98u;
    {
        const bool branch_taken_0x30ea98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA98u;
        // 0x30ea9c: 0xe7a80094  swc1        $f8, 0x94($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea98) {
            ctx->pc = 0x30EB4Cu;
            goto label_30eb4c;
        }
    }
    ctx->pc = 0x30EAA0u;
    // 0x30eaa0: 0x94e20004  lhu         $v0, 0x4($a3)
    ctx->pc = 0x30eaa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x30eaa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30eaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30eaa8: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x30eaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30eaac: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x30eaacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30eab0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x30eab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30eab4: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x30eab4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x30eab8: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x30eab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30eabc: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x30eabcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x30eac0: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x30eac0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x30eac4: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x30eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x30eac8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30eac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30eacc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x30eaccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30ead0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x30ead0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30ead4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x30ead4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x30ead8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x30ead8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30eadc: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x30eadcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x30eae0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x30eae0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x30eae4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30eae4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30eae8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x30eae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x30eaec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30eaecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30eaf0: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x30eaf0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x30eaf4: 0x46081036  c.le.s      $f2, $f8
    ctx->pc = 0x30eaf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30eaf8: 0x0  nop
    ctx->pc = 0x30eaf8u;
    // NOP
    // 0x30eafc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x30EAFCu;
    {
        const bool branch_taken_0x30eafc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EAFCu;
        // 0x30eb00: 0xe7a20090  swc1        $f2, 0x90($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eafc) {
            ctx->pc = 0x30EB08u;
            goto label_30eb08;
        }
    }
    ctx->pc = 0x30EB04u;
    // 0x30eb04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30eb04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30eb08:
    // 0x30eb08: 0x58600011  blezl       $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x30EB08u;
    {
        const bool branch_taken_0x30eb08 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x30eb08) {
            ctx->pc = 0x30EB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EB08u;
            // 0x30eb0c: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EB50u;
            goto label_30eb50;
        }
    }
    ctx->pc = 0x30EB10u;
    // 0x30eb10: 0x19400008  blez        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x30EB10u;
    {
        const bool branch_taken_0x30eb10 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x30EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB10u;
        // 0x30eb14: 0xc7a10080  lwc1        $f1, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb10) {
            ctx->pc = 0x30EB34u;
            goto label_30eb34;
        }
    }
    ctx->pc = 0x30EB18u;
    // 0x30eb18: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x30eb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30eb1c: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x30eb1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x30eb20: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x30eb20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30eb24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30eb24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30eb28: 0x0  nop
    ctx->pc = 0x30eb28u;
    // NOP
    // 0x30eb2c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x30EB2Cu;
    {
        const bool branch_taken_0x30eb2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30eb2c) {
            ctx->pc = 0x30EB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EB2Cu;
            // 0x30eb30: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EB50u;
            goto label_30eb50;
        }
    }
    ctx->pc = 0x30EB34u;
label_30eb34:
    // 0x30eb34: 0x958d0000  lhu         $t5, 0x0($t4)
    ctx->pc = 0x30eb34u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x30eb38: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x30eb38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eb3c: 0x6ba50097  ldl         $a1, 0x97($sp)
    ctx->pc = 0x30eb3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x30eb40: 0x6fa50090  ldr         $a1, 0x90($sp)
    ctx->pc = 0x30eb40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x30eb44: 0xb3a50087  sdl         $a1, 0x87($sp)
    ctx->pc = 0x30eb44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30eb48: 0xb7a50080  sdr         $a1, 0x80($sp)
    ctx->pc = 0x30eb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_30eb4c:
    // 0x30eb4c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x30eb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_30eb50:
    // 0x30eb50: 0x25620001  addiu       $v0, $t3, 0x1
    ctx->pc = 0x30eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x30eb54: 0x304bffff  andi        $t3, $v0, 0xFFFF
    ctx->pc = 0x30eb54u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30eb58: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x30eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x30eb5c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x30eb5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30eb60: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x30eb60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30eb64: 0x5440ff94  bnel        $v0, $zero, . + 4 + (-0x6C << 2)
    ctx->pc = 0x30EB64u;
    {
        const bool branch_taken_0x30eb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30eb64) {
            ctx->pc = 0x30EB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EB64u;
            // 0x30eb68: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e9b8;
        }
    }
    ctx->pc = 0x30EB6Cu;
label_30eb6c:
    // 0x30eb6c: 0x19400307  blez        $t2, . + 4 + (0x307 << 2)
    ctx->pc = 0x30EB6Cu;
    {
        const bool branch_taken_0x30eb6c = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x30EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB6Cu;
        // 0x30eb70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb6c) {
            ctx->pc = 0x30F78Cu;
            goto label_30f78c;
        }
    }
    ctx->pc = 0x30EB74u;
    // 0x30eb74: 0x5a3002a  bgezl       $t5, . + 4 + (0x2A << 2)
    ctx->pc = 0x30EB74u;
    {
        const bool branch_taken_0x30eb74 = (GPR_S64(ctx, 13) >= 0);
        if (branch_taken_0x30eb74) {
            ctx->pc = 0x30EB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EB74u;
            // 0x30eb78: 0x31b1ffff  andi        $s1, $t5, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EC20u;
            goto label_30ec20;
        }
    }
    ctx->pc = 0x30EB7Cu;
    // 0x30eb7c: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x30eb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30eb80: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x30eb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30eb84: 0xc6c0001c  lwc1        $f0, 0x1C($s6)
    ctx->pc = 0x30eb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30eb88: 0x46011183  div.s       $f6, $f2, $f1
    ctx->pc = 0x30eb88u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[1]);
    // 0x30eb8c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x30eb8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x30eb90: 0xe6c0001c  swc1        $f0, 0x1C($s6)
    ctx->pc = 0x30eb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 28), bits); }
    // 0x30eb94: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x30eb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30eb98: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x30eb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30eb9c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x30eb9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x30eba0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x30eba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30eba4: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x30eba4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x30eba8: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x30eba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30ebac: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x30ebacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x30ebb0: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x30ebb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30ebb4: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x30ebb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ebb8: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x30ebb8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x30ebbc: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x30ebbcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x30ebc0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x30ebc0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x30ebc4: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x30ebc4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x30ebc8: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x30ebc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x30ebcc: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x30ebccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x30ebd0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x30ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30ebd4: 0x2331018  mult        $v0, $s1, $s3
    ctx->pc = 0x30ebd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30ebd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30ebdc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30ebdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ebe0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x30ebe0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x30ebe4: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x30ebe4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30ebe8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x30ebe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ebec: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x30ebecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x30ebf0: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x30ebf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x30ebf4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x30ebf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ebf8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x30ebf8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x30ebfc: 0x4614b043  div.s       $f1, $f22, $f20
    ctx->pc = 0x30ebfcu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[22], ctx->f[20]);
    // 0x30ec00: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x30ec00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30ec04: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x30ec04u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x30ec08: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x30ec08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x30ec0c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x30ec0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x30ec10: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x30ec10u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30ec14: 0x100002d0  b           . + 4 + (0x2D0 << 2)
    ctx->pc = 0x30EC14u;
    {
        const bool branch_taken_0x30ec14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC14u;
        // 0x30ec18: 0xe7a30014  swc1        $f3, 0x14($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ec14) {
            ctx->pc = 0x30F758u;
            goto label_30f758;
        }
    }
    ctx->pc = 0x30EC1Cu;
    // 0x30ec1c: 0x0  nop
    ctx->pc = 0x30ec1cu;
    // NOP
label_30ec20:
    // 0x30ec20: 0x100002a9  b           . + 4 + (0x2A9 << 2)
    ctx->pc = 0x30EC20u;
    {
        const bool branch_taken_0x30ec20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC20u;
        // 0x30ec24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ec20) {
            ctx->pc = 0x30F6C8u;
            goto label_30f6c8;
        }
    }
    ctx->pc = 0x30EC28u;
label_30ec28:
    // 0x30ec28: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x30ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x30ec2c: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x30ec2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30ec30: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x30ec30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x30ec34: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x30ec34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30ec38: 0x731818  mult        $v1, $v1, $s3
    ctx->pc = 0x30ec38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30ec3c: 0x8e4a0004  lw          $t2, 0x4($s2)
    ctx->pc = 0x30ec3cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30ec40: 0x532018  mult        $a0, $v0, $s3
    ctx->pc = 0x30ec40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30ec44: 0x96060006  lhu         $a2, 0x6($s0)
    ctx->pc = 0x30ec44u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x30ec48: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x30ec48u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30ec4c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x30ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x30ec50: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x30ec50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30ec54: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x30ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x30ec58: 0xb31818  mult        $v1, $a1, $s3
    ctx->pc = 0x30ec58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30ec5c: 0xd32018  mult        $a0, $a2, $s3
    ctx->pc = 0x30ec5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30ec60: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30ec60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ec64: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x30ec64u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x30ec68: 0x6a2821  addu        $a1, $v1, $t2
    ctx->pc = 0x30ec68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x30ec6c: 0x8a3021  addu        $a2, $a0, $t2
    ctx->pc = 0x30ec6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x30ec70: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x30ec70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30ec74: 0x96040006  lhu         $a0, 0x6($s0)
    ctx->pc = 0x30ec74u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x30ec78: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x30ec78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x30ec7c: 0x931018  mult        $v0, $a0, $s3
    ctx->pc = 0x30ec7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30ec80: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x30ec80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ec84: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x30ec84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ec88: 0x4a2021  addu        $a0, $v0, $t2
    ctx->pc = 0x30ec88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x30ec8c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x30ec8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x30ec90: 0x731018  mult        $v0, $v1, $s3
    ctx->pc = 0x30ec90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30ec94: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x30ec94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x30ec98: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x30ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x30ec9c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x30ec9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30eca0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x30eca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30eca4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30eca4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30eca8: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x30eca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x30ecac: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x30ecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ecb0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x30ecb0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x30ecb4: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x30ecb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x30ecb8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x30ecb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ecbc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x30ecbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30ecc0: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x30ecc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x30ecc4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x30ecc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ecc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x30ecc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30eccc: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x30ecccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x30ecd0: 0x96070004  lhu         $a3, 0x4($s0)
    ctx->pc = 0x30ecd0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30ecd4: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x30ecd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30ecd8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30ecd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ecdc: 0xf11018  mult        $v0, $a3, $s1
    ctx->pc = 0x30ecdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30ece0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x30ece0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ece4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30ece4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30ece8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x30ece8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30ecec: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x30ececu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30ecf0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x30ecf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x30ecf4: 0x4a3821  addu        $a3, $v0, $t2
    ctx->pc = 0x30ecf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x30ecf8: 0xc0aa8d4  jal         func_2AA350
    ctx->pc = 0x30ECF8u;
    SET_GPR_U32(ctx, 31, 0x30ED00u);
    ctx->pc = 0x30ECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ECF8u;
    // 0x30ecfc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA350u, 0x30ECF8u, 0x30ED00u)) {
        return;
    }
    ctx->pc = 0x30ED00u;
label_30ed00:
    // 0x30ed00: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x30ed00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ed04: 0x4e00292  bltz        $a3, . + 4 + (0x292 << 2)
    ctx->pc = 0x30ED04u;
    {
        const bool branch_taken_0x30ed04 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x30ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ED04u;
        // 0x30ed08: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ed04) {
            ctx->pc = 0x30F750u;
            goto label_30f750;
        }
    }
    ctx->pc = 0x30ED0Cu;
    // 0x30ed0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30ed0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30ed10: 0x460ca036  c.le.s      $f20, $f12
    ctx->pc = 0x30ed10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ed14: 0x0  nop
    ctx->pc = 0x30ed14u;
    // NOP
    // 0x30ed18: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30ED18u;
    {
        const bool branch_taken_0x30ed18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ed18) {
            ctx->pc = 0x30ED1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30ED18u;
            // 0x30ed1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30ED20u;
            goto label_30ed20;
        }
    }
    ctx->pc = 0x30ED20u;
label_30ed20:
    // 0x30ed20: 0x18e00039  blez        $a3, . + 4 + (0x39 << 2)
    ctx->pc = 0x30ED20u;
    {
        const bool branch_taken_0x30ed20 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x30ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ED20u;
        // 0x30ed24: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ed20) {
            ctx->pc = 0x30EE08u;
            goto label_30ee08;
        }
    }
    ctx->pc = 0x30ED28u;
    // 0x30ed28: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x30ed28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ed2c: 0x0  nop
    ctx->pc = 0x30ed2cu;
    // NOP
    // 0x30ed30: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x30ED30u;
    {
        const bool branch_taken_0x30ed30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ED30u;
        // 0x30ed34: 0xc7a30030  lwc1        $f3, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ed30) {
            ctx->pc = 0x30EE08u;
            goto label_30ee08;
        }
    }
    ctx->pc = 0x30ED38u;
    // 0x30ed38: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x30ed38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30ed3c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x30ed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30ed40: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x30ed40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30ed44: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x30ed44u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30ed48: 0x912818  mult        $a1, $a0, $s1
    ctx->pc = 0x30ed48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x30ed4c: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x30ed4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30ed50: 0xc7a60038  lwc1        $f6, 0x38($sp)
    ctx->pc = 0x30ed50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30ed54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30ed58: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30ed58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ed5c: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x30ed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30ed60: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x30ed60u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x30ed64: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x30ed64u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30ed68: 0xb11018  mult        $v0, $a1, $s1
    ctx->pc = 0x30ed68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30ed6c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x30ed6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30ed70: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x30ed70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ed74: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x30ed74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30ed78: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x30ed78u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x30ed7c: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x30ed7cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x30ed80: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x30ed80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ed84: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x30ed84u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x30ed88: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x30ed88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ed8c: 0xc7a400d4  lwc1        $f4, 0xD4($sp)
    ctx->pc = 0x30ed8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30ed90: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x30ed90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x30ed94: 0xc7a800d8  lwc1        $f8, 0xD8($sp)
    ctx->pc = 0x30ed94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x30ed98: 0x46042842  mul.s       $f1, $f5, $f4
    ctx->pc = 0x30ed98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x30ed9c: 0x460831c2  mul.s       $f7, $f6, $f8
    ctx->pc = 0x30ed9cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x30eda0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30eda0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30eda4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x30eda4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x30eda8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30eda8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30edac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x30edacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30edb0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x30edb0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x30edb4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x30edb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x30edb8: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x30edb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30edbc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x30edbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30edc0: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x30edc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x30edc4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x30edc4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x30edc8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x30edc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x30edcc: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x30edccu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x30edd0: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x30edd0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x30edd4: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x30edd4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x30edd8: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30edd8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30eddc: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x30eddcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x30ede0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x30ede0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x30ede4: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x30ede4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x30ede8: 0x46083180  add.s       $f6, $f6, $f8
    ctx->pc = 0x30ede8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x30edec: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x30edecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x30edf0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x30edf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30edf4: 0x0  nop
    ctx->pc = 0x30edf4u;
    // NOP
label_30edf8:
    // 0x30edf8: 0xc0aa9d8  jal         func_2AA760
    ctx->pc = 0x30EDF8u;
    SET_GPR_U32(ctx, 31, 0x30EE00u);
    ctx->pc = 0x30EDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EDF8u;
    // 0x30edfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA760u, 0x30EDF8u, 0x30EE00u)) {
        return;
    }
    ctx->pc = 0x30EE00u;
label_30ee00:
    // 0x30ee00: 0x10000255  b           . + 4 + (0x255 << 2)
    ctx->pc = 0x30EE00u;
    {
        const bool branch_taken_0x30ee00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ee00) {
            ctx->pc = 0x30F758u;
            goto label_30f758;
        }
    }
    ctx->pc = 0x30EE08u;
label_30ee08:
    // 0x30ee08: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x30ee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ee0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30ee0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ee10: 0xc7a600d0  lwc1        $f6, 0xD0($sp)
    ctx->pc = 0x30ee10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30ee14: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x30ee14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ee18: 0xc7a700d4  lwc1        $f7, 0xD4($sp)
    ctx->pc = 0x30ee18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x30ee1c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x30ee1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x30ee20: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x30ee20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ee24: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x30ee24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x30ee28: 0xc7a800d8  lwc1        $f8, 0xD8($sp)
    ctx->pc = 0x30ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x30ee2c: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x30ee2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x30ee30: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x30ee30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30ee34: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x30ee34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x30ee38: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x30ee38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ee3c: 0x0  nop
    ctx->pc = 0x30ee3cu;
    // NOP
    // 0x30ee40: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x30EE40u;
    {
        const bool branch_taken_0x30ee40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE40u;
        // 0x30ee44: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ee40) {
            ctx->pc = 0x30EEB0u;
            goto label_30eeb0;
        }
    }
    ctx->pc = 0x30EE48u;
    // 0x30ee48: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x30ee48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30ee4c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30ee4cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30ee50: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x30ee50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30ee54: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x30ee54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30ee58: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x30ee58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ee5c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x30ee5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x30ee60: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x30ee60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30ee64: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x30ee64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x30ee68: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x30ee68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30ee6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30ee70: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x30ee70u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x30ee74: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30ee74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ee78: 0x46054142  mul.s       $f5, $f8, $f5
    ctx->pc = 0x30ee78u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x30ee7c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x30ee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ee80: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x30ee80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x30ee84: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x30ee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30ee88: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x30ee88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x30ee8c: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x30ee8cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30ee90: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x30ee90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x30ee94: 0x460340c2  mul.s       $f3, $f8, $f3
    ctx->pc = 0x30ee94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x30ee98: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x30ee98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x30ee9c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x30ee9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x30eea0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x30eea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x30eea4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30eea4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30eea8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x30EEA8u;
    {
        const bool branch_taken_0x30eea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EEA8u;
        // 0x30eeac: 0xe7a100b0  swc1        $f1, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eea8) {
            ctx->pc = 0x30EF0Cu;
            goto label_30ef0c;
        }
    }
    ctx->pc = 0x30EEB0u;
label_30eeb0:
    // 0x30eeb0: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x30eeb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x30eeb4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x30eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30eeb8: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x30eeb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30eebc: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x30eebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30eec0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x30eec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30eec4: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x30eec4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x30eec8: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x30eec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30eecc: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x30eeccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x30eed0: 0x96060006  lhu         $a2, 0x6($s0)
    ctx->pc = 0x30eed0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x30eed4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30eed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30eed8: 0x46044102  mul.s       $f4, $f8, $f4
    ctx->pc = 0x30eed8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x30eedc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30eedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30eee0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x30eee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30eee4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x30eee4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30eee8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x30eee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x30eeec: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x30eeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30eef0: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x30eef0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x30eef4: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x30eef4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x30eef8: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30eef8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30eefc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x30eefcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x30ef00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30ef00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30ef04: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x30ef04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x30ef08: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x30ef08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_30ef0c:
    // 0x30ef0c: 0xc7aa00b0  lwc1        $f10, 0xB0($sp)
    ctx->pc = 0x30ef0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x30ef10: 0xc7a900b4  lwc1        $f9, 0xB4($sp)
    ctx->pc = 0x30ef10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x30ef14: 0x46095036  c.le.s      $f10, $f9
    ctx->pc = 0x30ef14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ef18: 0x0  nop
    ctx->pc = 0x30ef18u;
    // NOP
    // 0x30ef1c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x30EF1Cu;
    {
        const bool branch_taken_0x30ef1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF1Cu;
        // 0x30ef20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ef1c) {
            ctx->pc = 0x30EF28u;
            goto label_30ef28;
        }
    }
    ctx->pc = 0x30EF24u;
    // 0x30ef24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30ef24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30ef28:
    // 0x30ef28: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x30ef28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x30ef2c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x30ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x30ef30: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x30ef30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30ef34: 0xc7a400d4  lwc1        $f4, 0xD4($sp)
    ctx->pc = 0x30ef34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30ef38: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x30ef38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ef3c: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x30ef3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x30ef40: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x30ef40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30ef44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30ef48: 0x734818  mult        $t1, $v1, $s3
    ctx->pc = 0x30ef48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x30ef4c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x30ef4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ef50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x30ef50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ef54: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x30ef54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30ef58: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x30ef58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x30ef5c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x30ef5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x30ef60: 0x1241821  addu        $v1, $t1, $a0
    ctx->pc = 0x30ef60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x30ef64: 0x534818  mult        $t1, $v0, $s3
    ctx->pc = 0x30ef64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x30ef68: 0x46010201  sub.s       $f8, $f0, $f1
    ctx->pc = 0x30ef68u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x30ef6c: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x30ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x30ef70: 0xe7a800e0  swc1        $f8, 0xE0($sp)
    ctx->pc = 0x30ef70u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x30ef74: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x30ef74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ef78: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x30ef78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ef7c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x30ef7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30ef80: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x30ef80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x30ef84: 0x46001181  sub.s       $f6, $f2, $f0
    ctx->pc = 0x30ef84u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x30ef88: 0xe7a600e4  swc1        $f6, 0xE4($sp)
    ctx->pc = 0x30ef88u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x30ef8c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30ef8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ef90: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x30ef90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ef94: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x30ef94u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x30ef98: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x30ef98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x30ef9c: 0x46041941  sub.s       $f5, $f3, $f4
    ctx->pc = 0x30ef9cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x30efa0: 0xe7a500e8  swc1        $f5, 0xE8($sp)
    ctx->pc = 0x30efa0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x30efa4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x30efa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30efa8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x30efa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30efac: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x30efacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x30efb0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x30efb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30efb4: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x30efb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x30efb8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x30efb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x30efbc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x30efbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x30efc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30efc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30efc4: 0x460001c7  neg.s       $f7, $f0
    ctx->pc = 0x30efc4u;
    ctx->f[7] = FPU_NEG_S(ctx->f[0]);
    // 0x30efc8: 0x4607a834  c.lt.s      $f21, $f7
    ctx->pc = 0x30efc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30efcc: 0x0  nop
    ctx->pc = 0x30efccu;
    // NOP
    // 0x30efd0: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x30EFD0u;
    {
        const bool branch_taken_0x30efd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EFD0u;
        // 0x30efd4: 0xe7a700c4  swc1        $f7, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30efd0) {
            ctx->pc = 0x30F08Cu;
            goto label_30f08c;
        }
    }
    ctx->pc = 0x30EFD8u;
    // 0x30efd8: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x30efd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30efdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30efdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30efe0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x30efe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30efe4: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x30efe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30efe8: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x30efe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30efec: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x30efecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30eff0: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x30eff0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x30eff4: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x30eff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30eff8: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x30eff8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x30effc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30effcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f000: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x30f000u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x30f004: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30f004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f008: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x30f008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30f00c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x30f00cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30f010: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x30f010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x30f014: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x30f014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f018: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x30f018u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x30f01c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x30f01cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x30f020: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30f020u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30f024: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x30f024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x30f028: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30f028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30f02c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x30f02cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x30f030: 0x46070036  c.le.s      $f0, $f7
    ctx->pc = 0x30f030u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f034: 0x0  nop
    ctx->pc = 0x30f034u;
    // NOP
    // 0x30f038: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x30F038u;
    {
        const bool branch_taken_0x30f038 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F038u;
        // 0x30f03c: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f038) {
            ctx->pc = 0x30F048u;
            goto label_30f048;
        }
    }
    ctx->pc = 0x30F040u;
    // 0x30f040: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30f040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f044: 0x0  nop
    ctx->pc = 0x30f044u;
    // NOP
label_30f048:
    // 0x30f048: 0x58800011  blezl       $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30F048u;
    {
        const bool branch_taken_0x30f048 = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x30f048) {
            ctx->pc = 0x30F04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F048u;
            // 0x30f04c: 0x96020008  lhu         $v0, 0x8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F090u;
            goto label_30f090;
        }
    }
    ctx->pc = 0x30F050u;
    // 0x30f050: 0x58a00008  blezl       $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30F050u;
    {
        const bool branch_taken_0x30f050 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x30f050) {
            ctx->pc = 0x30F054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F050u;
            // 0x30f054: 0x9606000a  lhu         $a2, 0xA($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F074u;
            goto label_30f074;
        }
    }
    ctx->pc = 0x30F058u;
    // 0x30f058: 0x46075042  mul.s       $f1, $f10, $f7
    ctx->pc = 0x30f058u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x30f05c: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x30f05cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x30f060: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30f060u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f064: 0x0  nop
    ctx->pc = 0x30f064u;
    // NOP
    // 0x30f068: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x30F068u;
    {
        const bool branch_taken_0x30f068 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f068) {
            ctx->pc = 0x30F06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F068u;
            // 0x30f06c: 0x96020008  lhu         $v0, 0x8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F090u;
            goto label_30f090;
        }
    }
    ctx->pc = 0x30F070u;
    // 0x30f070: 0x9606000a  lhu         $a2, 0xA($s0)
    ctx->pc = 0x30f070u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_30f074:
    // 0x30f074: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30f074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f078: 0x6baf00c7  ldl         $t7, 0xC7($sp)
    ctx->pc = 0x30f078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x30f07c: 0x6faf00c0  ldr         $t7, 0xC0($sp)
    ctx->pc = 0x30f07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x30f080: 0xb3af00b7  sdl         $t7, 0xB7($sp)
    ctx->pc = 0x30f080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f084: 0xb7af00b0  sdr         $t7, 0xB0($sp)
    ctx->pc = 0x30f084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f088: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x30f088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30f08c:
    // 0x30f08c: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x30f08cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_30f090:
    // 0x30f090: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x30f090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x30f094: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x30f094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30f098: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x30f098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f09c: 0xc7a400d4  lwc1        $f4, 0xD4($sp)
    ctx->pc = 0x30f09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30f0a0: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x30f0a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30f0a4: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x30f0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30f0a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30f0ac: 0x734818  mult        $t1, $v1, $s3
    ctx->pc = 0x30f0acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x30f0b0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x30f0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f0b4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x30f0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f0b8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x30f0b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x30f0bc: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x30f0bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30f0c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x30f0c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30f0c4: 0x1241821  addu        $v1, $t1, $a0
    ctx->pc = 0x30f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x30f0c8: 0x534818  mult        $t1, $v0, $s3
    ctx->pc = 0x30f0c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x30f0cc: 0x460101c1  sub.s       $f7, $f0, $f1
    ctx->pc = 0x30f0ccu;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x30f0d0: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x30f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x30f0d4: 0xe7a700e0  swc1        $f7, 0xE0($sp)
    ctx->pc = 0x30f0d4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x30f0d8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x30f0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f0dc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x30f0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f0e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30f0e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30f0e4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x30f0e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x30f0e8: 0x46010181  sub.s       $f6, $f0, $f1
    ctx->pc = 0x30f0e8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x30f0ec: 0xe7a600e4  swc1        $f6, 0xE4($sp)
    ctx->pc = 0x30f0ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x30f0f0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x30f0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f0f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30f0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f0f8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x30f0f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x30f0fc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x30f0fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x30f100: 0x46010141  sub.s       $f5, $f0, $f1
    ctx->pc = 0x30f100u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x30f104: 0xe7a500e8  swc1        $f5, 0xE8($sp)
    ctx->pc = 0x30f104u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x30f108: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x30f108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f10c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x30f10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f110: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x30f110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x30f114: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x30f114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f118: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x30f118u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x30f11c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x30f11cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x30f120: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x30f120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x30f124: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30f124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30f128: 0x46000207  neg.s       $f8, $f0
    ctx->pc = 0x30f128u;
    ctx->f[8] = FPU_NEG_S(ctx->f[0]);
    // 0x30f12c: 0x4608a834  c.lt.s      $f21, $f8
    ctx->pc = 0x30f12cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f130: 0x0  nop
    ctx->pc = 0x30f130u;
    // NOP
    // 0x30f134: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x30F134u;
    {
        const bool branch_taken_0x30f134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F134u;
        // 0x30f138: 0xe7a800c4  swc1        $f8, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f134) {
            ctx->pc = 0x30F1ECu;
            goto label_30f1ec;
        }
    }
    ctx->pc = 0x30F13Cu;
    // 0x30f13c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x30f13cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30f140: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30f140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f144: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x30f144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30f148: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x30f148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30f14c: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x30f14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f150: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x30f150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f154: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x30f154u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x30f158: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x30f158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30f15c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x30f15cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x30f160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30f160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f164: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x30f164u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x30f168: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30f168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f16c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x30f16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30f170: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x30f170u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30f174: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x30f174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x30f178: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x30f178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f17c: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x30f17cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x30f180: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x30f180u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x30f184: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30f184u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30f188: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x30f188u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x30f18c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30f18cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30f190: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x30f190u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x30f194: 0x46081036  c.le.s      $f2, $f8
    ctx->pc = 0x30f194u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f198: 0x0  nop
    ctx->pc = 0x30f198u;
    // NOP
    // 0x30f19c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x30F19Cu;
    {
        const bool branch_taken_0x30f19c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F19Cu;
        // 0x30f1a0: 0xe7a200c0  swc1        $f2, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f19c) {
            ctx->pc = 0x30F1A8u;
            goto label_30f1a8;
        }
    }
    ctx->pc = 0x30F1A4u;
    // 0x30f1a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30f1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30f1a8:
    // 0x30f1a8: 0x18800010  blez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30F1A8u;
    {
        const bool branch_taken_0x30f1a8 = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x30f1a8) {
            ctx->pc = 0x30F1ECu;
            goto label_30f1ec;
        }
    }
    ctx->pc = 0x30F1B0u;
    // 0x30f1b0: 0x18a00007  blez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30F1B0u;
    {
        const bool branch_taken_0x30f1b0 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x30F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F1B0u;
        // 0x30f1b4: 0xc7a100b0  lwc1        $f1, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f1b0) {
            ctx->pc = 0x30F1D0u;
            goto label_30f1d0;
        }
    }
    ctx->pc = 0x30F1B8u;
    // 0x30f1b8: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x30f1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f1bc: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x30f1bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x30f1c0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x30f1c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30f1c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30f1c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f1c8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x30F1C8u;
    {
        const bool branch_taken_0x30f1c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f1c8) {
            ctx->pc = 0x30F1ECu;
            goto label_30f1ec;
        }
    }
    ctx->pc = 0x30F1D0u;
label_30f1d0:
    // 0x30f1d0: 0x96060008  lhu         $a2, 0x8($s0)
    ctx->pc = 0x30f1d0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30f1d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30f1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f1d8: 0x6baf00c7  ldl         $t7, 0xC7($sp)
    ctx->pc = 0x30f1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x30f1dc: 0x6faf00c0  ldr         $t7, 0xC0($sp)
    ctx->pc = 0x30f1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x30f1e0: 0xb3af00b7  sdl         $t7, 0xB7($sp)
    ctx->pc = 0x30f1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f1e4: 0xb7af00b0  sdr         $t7, 0xB0($sp)
    ctx->pc = 0x30f1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f1e8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x30f1e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30f1ec:
    // 0x30f1ec: 0x18e0004e  blez        $a3, . + 4 + (0x4E << 2)
    ctx->pc = 0x30F1ECu;
    {
        const bool branch_taken_0x30f1ec = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x30F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F1ECu;
        // 0x30f1f0: 0xc7a30080  lwc1        $f3, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f1ec) {
            ctx->pc = 0x30F328u;
            goto label_30f328;
        }
    }
    ctx->pc = 0x30F1F4u;
    // 0x30f1f4: 0x18a00008  blez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30F1F4u;
    {
        const bool branch_taken_0x30f1f4 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x30F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F1F4u;
        // 0x30f1f8: 0xc7a20084  lwc1        $f2, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f1f4) {
            ctx->pc = 0x30F218u;
            goto label_30f218;
        }
    }
    ctx->pc = 0x30F1FCu;
    // 0x30f1fc: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x30f1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f200: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x30f200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f204: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30f204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30f208: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x30f208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x30f20c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30f20cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f210: 0x45000045  bc1f        . + 4 + (0x45 << 2)
    ctx->pc = 0x30F210u;
    {
        const bool branch_taken_0x30f210 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f210) {
            ctx->pc = 0x30F328u;
            goto label_30f328;
        }
    }
    ctx->pc = 0x30F218u;
label_30f218:
    // 0x30f218: 0x46021983  div.s       $f6, $f3, $f2
    ctx->pc = 0x30f218u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[2]);
    // 0x30f21c: 0xc6c0001c  lwc1        $f0, 0x1C($s6)
    ctx->pc = 0x30f21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f220: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x30f220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x30f224: 0xe6c0001c  swc1        $f0, 0x1C($s6)
    ctx->pc = 0x30f224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 28), bits); }
    // 0x30f228: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x30f228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f22c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x30f22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f230: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x30f230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x30f234: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x30f234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f238: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x30f238u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x30f23c: 0xc7a50030  lwc1        $f5, 0x30($sp)
    ctx->pc = 0x30f23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30f240: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x30f240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x30f244: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x30f244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30f248: 0xc7a60038  lwc1        $f6, 0x38($sp)
    ctx->pc = 0x30f248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30f24c: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x30f24cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x30f250: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x30f250u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x30f254: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x30f254u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x30f258: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x30f258u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x30f25c: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x30f25cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x30f260: 0xe7a60038  swc1        $f6, 0x38($sp)
    ctx->pc = 0x30f260u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x30f264: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x30f264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30f268: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x30f268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30f26c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x30f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30f270: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x30f270u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30f274: 0x933018  mult        $a2, $a0, $s3
    ctx->pc = 0x30f274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x30f278: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30f278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f27c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f280: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30f280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f284: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x30f284u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x30f288: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x30f288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x30f28c: 0xb33018  mult        $a2, $a1, $s3
    ctx->pc = 0x30f28cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x30f290: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x30f290u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30f294: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x30f294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f298: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x30f298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x30f29c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x30f29cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x30f2a0: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x30f2a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x30f2a4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x30f2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f2a8: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x30f2a8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x30f2ac: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x30f2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f2b0: 0xc7a300d4  lwc1        $f3, 0xD4($sp)
    ctx->pc = 0x30f2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30f2b4: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x30f2b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x30f2b8: 0xc7a800d8  lwc1        $f8, 0xD8($sp)
    ctx->pc = 0x30f2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x30f2bc: 0x46032042  mul.s       $f1, $f4, $f3
    ctx->pc = 0x30f2bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x30f2c0: 0x460831c2  mul.s       $f7, $f6, $f8
    ctx->pc = 0x30f2c0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x30f2c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30f2c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30f2c8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x30f2c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x30f2cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30f2ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30f2d0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x30f2d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30f2d4: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x30f2d4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x30f2d8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x30f2d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x30f2dc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x30f2dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30f2e0: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x30f2e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x30f2e4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x30f2e4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x30f2e8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x30f2e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x30f2ec: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x30f2ecu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x30f2f0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x30f2f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x30f2f4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x30f2f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x30f2f8: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x30f2f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x30f2fc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x30f2fcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x30f300: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x30f300u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x30f304: 0x46083180  add.s       $f6, $f6, $f8
    ctx->pc = 0x30f304u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x30f308: 0x4614b003  div.s       $f0, $f22, $f20
    ctx->pc = 0x30f308u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[22], ctx->f[20]);
    // 0x30f30c: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x30f30cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x30f310: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x30f310u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x30f314: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x30f314u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x30f318: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x30f318u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x30f31c: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x30f31cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30f320: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x30F320u;
    {
        const bool branch_taken_0x30f320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F320u;
        // 0x30f324: 0xe7a40014  swc1        $f4, 0x14($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f320) {
            ctx->pc = 0x30F758u;
            goto label_30f758;
        }
    }
    ctx->pc = 0x30F328u;
label_30f328:
    // 0x30f328: 0x18a00109  blez        $a1, . + 4 + (0x109 << 2)
    ctx->pc = 0x30F328u;
    {
        const bool branch_taken_0x30f328 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x30F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F328u;
        // 0x30f32c: 0x3103ffff  andi        $v1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f328) {
            ctx->pc = 0x30F750u;
            goto label_30f750;
        }
    }
    ctx->pc = 0x30F330u;
    // 0x30f330: 0x6ba800b7  ldl         $t0, 0xB7($sp)
    ctx->pc = 0x30f330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x30f334: 0x6fa800b0  ldr         $t0, 0xB0($sp)
    ctx->pc = 0x30f334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x30f338: 0xb3a80087  sdl         $t0, 0x87($sp)
    ctx->pc = 0x30f338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f33c: 0xb7a80080  sdr         $t0, 0x80($sp)
    ctx->pc = 0x30f33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f340: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x30F340u;
    {
        const bool branch_taken_0x30f340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F340u;
        // 0x30f344: 0x30d1ffff  andi        $s1, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f340) {
            ctx->pc = 0x30F6C8u;
            goto label_30f6c8;
        }
    }
    ctx->pc = 0x30F348u;
label_30f348:
    // 0x30f348: 0x546400d5  bnel        $v1, $a0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x30F348u;
    {
        const bool branch_taken_0x30f348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x30f348) {
            ctx->pc = 0x30F34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F348u;
            // 0x30f34c: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F6A0u;
            goto label_30f6a0;
        }
    }
    ctx->pc = 0x30F350u;
    // 0x30f350: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x30f350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x30f354: 0x118040  sll         $s0, $s1, 1
    ctx->pc = 0x30f354u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x30f358: 0x8e4a0014  lw          $t2, 0x14($s2)
    ctx->pc = 0x30f358u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x30f35c: 0x233a018  mult        $s4, $s1, $s3
    ctx->pc = 0x30f35cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x30f360: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x30f360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x30f364: 0x8e490004  lw          $t1, 0x4($s2)
    ctx->pc = 0x30f364u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30f368: 0x94480000  lhu         $t0, 0x0($v0)
    ctx->pc = 0x30f368u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30f36c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30f36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30f370: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x30f370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x30f374: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x30f374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30f378: 0x1134018  mult        $t0, $t0, $s3
    ctx->pc = 0x30f378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x30f37c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x30f37cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f380: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x30f380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x30f384: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x30f384u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30f388: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x30f388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30f38c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x30f38cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f390: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x30f390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30f394: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x30f394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x30f398: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x30f398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f39c: 0x95020004  lhu         $v0, 0x4($t0)
    ctx->pc = 0x30f39cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x30f3a0: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x30f3a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30f3a4: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x30f3a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x30f3a8: 0xc52c0000  lwc1        $f12, 0x0($t1)
    ctx->pc = 0x30f3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30f3ac: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x30f3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f3b0: 0x46036302  mul.s       $f12, $f12, $f3
    ctx->pc = 0x30f3b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x30f3b4: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x30f3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f3b8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x30f3b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x30f3bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x30f3bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30f3c0: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x30f3c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x30f3c4: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x30f3c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x30f3c8: 0xc0aaa3a  jal         func_2AA8E8
    ctx->pc = 0x30F3C8u;
    SET_GPR_U32(ctx, 31, 0x30F3D0u);
    ctx->pc = 0x30F3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F3C8u;
    // 0x30f3cc: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA8E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA8E8u, 0x30F3C8u, 0x30F3D0u)) {
        return;
    }
    ctx->pc = 0x30F3D0u;
label_30f3d0:
    // 0x30f3d0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x30f3d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f3d4: 0x54200ed  bltzl       $t2, . + 4 + (0xED << 2)
    ctx->pc = 0x30F3D4u;
    {
        const bool branch_taken_0x30f3d4 = (GPR_S64(ctx, 10) < 0);
        if (branch_taken_0x30f3d4) {
            ctx->pc = 0x30F3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F3D4u;
            // 0x30f3d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F78Cu;
            goto label_30f78c;
        }
    }
    ctx->pc = 0x30F3DCu;
    // 0x30f3dc: 0x19400005  blez        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x30F3DCu;
    {
        const bool branch_taken_0x30f3dc = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x30F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F3DCu;
        // 0x30f3e0: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f3dc) {
            ctx->pc = 0x30F3F4u;
            goto label_30f3f4;
        }
    }
    ctx->pc = 0x30F3E4u;
    // 0x30f3e4: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x30f3e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f3e8: 0x0  nop
    ctx->pc = 0x30f3e8u;
    // NOP
    // 0x30f3ec: 0x4503fd27  bc1tl       . + 4 + (-0x2D9 << 2)
    ctx->pc = 0x30F3ECu;
    {
        const bool branch_taken_0x30f3ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f3ec) {
            ctx->pc = 0x30F3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F3ECu;
            // 0x30f3f0: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E88Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e88c;
        }
    }
    ctx->pc = 0x30F3F4u;
label_30f3f4:
    // 0x30f3f4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x30f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x30f3f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x30f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x30f3fc: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x30f3fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x30f400: 0x944b0000  lhu         $t3, 0x0($v0)
    ctx->pc = 0x30f400u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30f404: 0x163182b  sltu        $v1, $t3, $v1
    ctx->pc = 0x30f404u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30f408: 0x10600080  beqz        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x30F408u;
    {
        const bool branch_taken_0x30f408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f408) {
            ctx->pc = 0x30F60Cu;
            goto label_30f60c;
        }
    }
    ctx->pc = 0x30F410u;
    // 0x30f410: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x30f410u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30f414: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x30f414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x30f418: 0x2296018  mult        $t4, $s1, $t1
    ctx->pc = 0x30f418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x30f41c: 0x1692018  mult        $a0, $t3, $t1
    ctx->pc = 0x30f41cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_30f420:
    // 0x30f420: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x30f420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x30f424: 0x443821  addu        $a3, $v0, $a0
    ctx->pc = 0x30f424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30f428: 0x94e30006  lhu         $v1, 0x6($a3)
    ctx->pc = 0x30f428u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x30f42c: 0x94e20004  lhu         $v0, 0x4($a3)
    ctx->pc = 0x30f42cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x30f430: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x30f430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30f434: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x30f434u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30f438: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x30f438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30f43c: 0x94e60006  lhu         $a2, 0x6($a3)
    ctx->pc = 0x30f43cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x30f440: 0x94e50004  lhu         $a1, 0x4($a3)
    ctx->pc = 0x30f440u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x30f444: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x30f444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x30f448: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x30f448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30f44c: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x30f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x30f450: 0xa91818  mult        $v1, $a1, $t1
    ctx->pc = 0x30f450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30f454: 0xc92018  mult        $a0, $a2, $t1
    ctx->pc = 0x30f454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30f458: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30f458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f45c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x30f45cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x30f460: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x30f460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x30f464: 0x883021  addu        $a2, $a0, $t0
    ctx->pc = 0x30f464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x30f468: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x30f468u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x30f46c: 0x94e40006  lhu         $a0, 0x6($a3)
    ctx->pc = 0x30f46cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x30f470: 0xe7a50100  swc1        $f5, 0x100($sp)
    ctx->pc = 0x30f470u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x30f474: 0x891018  mult        $v0, $a0, $t1
    ctx->pc = 0x30f474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30f478: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x30f478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f47c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x30f47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30f480: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x30f480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x30f484: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x30f484u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x30f488: 0x691018  mult        $v0, $v1, $t1
    ctx->pc = 0x30f488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30f48c: 0xe7a30104  swc1        $f3, 0x104($sp)
    ctx->pc = 0x30f48cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x30f490: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x30f490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x30f494: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x30f494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f498: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x30f498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f49c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x30f49cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x30f4a0: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x30f4a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x30f4a4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x30f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x30f4a8: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x30f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x30f4ac: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x30f4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30f4b0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x30f4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f4b4: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x30f4b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x30f4b8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x30f4b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30f4bc: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x30f4bcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x30f4c0: 0xe7a40110  swc1        $f4, 0x110($sp)
    ctx->pc = 0x30f4c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x30f4c4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x30f4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f4c8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x30f4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f4cc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x30f4ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30f4d0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x30f4d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x30f4d4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x30f4d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x30f4d8: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x30f4d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x30f4dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30f4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f4e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x30f4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f4e4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x30f4e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x30f4e8: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x30f4e8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x30f4ec: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x30f4ecu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x30f4f0: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x30f4f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x30f4f4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x30f4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f4f8: 0x460021c2  mul.s       $f7, $f4, $f0
    ctx->pc = 0x30f4f8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x30f4fc: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x30f4fcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x30f500: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x30f500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f504: 0x46001182  mul.s       $f6, $f2, $f0
    ctx->pc = 0x30f504u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30f508: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x30f508u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x30f50c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x30f50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f510: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x30f510u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x30f514: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x30f514u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x30f518: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x30f518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f51c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x30f51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f520: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x30f520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x30f524: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x30f524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f528: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x30f528u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x30f52c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x30f52cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x30f530: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x30f530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x30f534: 0x46010200  add.s       $f8, $f0, $f1
    ctx->pc = 0x30f534u;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30f538: 0x46084834  c.lt.s      $f9, $f8
    ctx->pc = 0x30f538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f53c: 0x0  nop
    ctx->pc = 0x30f53cu;
    // NOP
    // 0x30f540: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x30F540u;
    {
        const bool branch_taken_0x30f540 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F540u;
        // 0x30f544: 0xe7a800f4  swc1        $f8, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f540) {
            ctx->pc = 0x30F5ECu;
            goto label_30f5ec;
        }
    }
    ctx->pc = 0x30F548u;
    // 0x30f548: 0x94e20004  lhu         $v0, 0x4($a3)
    ctx->pc = 0x30f548u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x30f54c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f550: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x30f550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f554: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x30f554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30f558: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x30f558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f55c: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x30f55cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x30f560: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x30f560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30f564: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x30f564u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x30f568: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x30f568u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x30f56c: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x30f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x30f570: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30f570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f574: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x30f574u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30f578: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x30f578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30f57c: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x30f57cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x30f580: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x30f580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f584: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x30f584u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x30f588: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x30f588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x30f58c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30f58cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30f590: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x30f590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x30f594: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30f594u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30f598: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x30f598u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x30f59c: 0x46081036  c.le.s      $f2, $f8
    ctx->pc = 0x30f59cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f5a0: 0x0  nop
    ctx->pc = 0x30f5a0u;
    // NOP
    // 0x30f5a4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x30F5A4u;
    {
        const bool branch_taken_0x30f5a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F5A4u;
        // 0x30f5a8: 0xe7a200f0  swc1        $f2, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f5a4) {
            ctx->pc = 0x30F5B0u;
            goto label_30f5b0;
        }
    }
    ctx->pc = 0x30F5ACu;
    // 0x30f5ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30f5acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30f5b0:
    // 0x30f5b0: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x30F5B0u;
    {
        const bool branch_taken_0x30f5b0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x30F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F5B0u;
        // 0x30f5b4: 0xc7a10084  lwc1        $f1, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f5b0) {
            ctx->pc = 0x30F5ECu;
            goto label_30f5ec;
        }
    }
    ctx->pc = 0x30F5B8u;
    // 0x30f5b8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x30f5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f5bc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x30f5bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30f5c0: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x30f5c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x30f5c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30f5c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f5c8: 0x0  nop
    ctx->pc = 0x30f5c8u;
    // NOP
    // 0x30f5cc: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x30F5CCu;
    {
        const bool branch_taken_0x30f5cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f5cc) {
            ctx->pc = 0x30F5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F5CCu;
            // 0x30f5d0: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F5F0u;
            goto label_30f5f0;
        }
    }
    ctx->pc = 0x30F5D4u;
    // 0x30f5d4: 0x6ba500f7  ldl         $a1, 0xF7($sp)
    ctx->pc = 0x30f5d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x30f5d8: 0x6fa500f0  ldr         $a1, 0xF0($sp)
    ctx->pc = 0x30f5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x30f5dc: 0xb3a50087  sdl         $a1, 0x87($sp)
    ctx->pc = 0x30f5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f5e0: 0xb7a50080  sdr         $a1, 0x80($sp)
    ctx->pc = 0x30f5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f5e4: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x30f5e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f5e8: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x30f5e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_30f5ec:
    // 0x30f5ec: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x30f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_30f5f0:
    // 0x30f5f0: 0x25620001  addiu       $v0, $t3, 0x1
    ctx->pc = 0x30f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x30f5f4: 0x304bffff  andi        $t3, $v0, 0xFFFF
    ctx->pc = 0x30f5f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30f5f8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x30f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x30f5fc: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x30f5fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30f600: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x30f600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30f604: 0x1440ff86  bnez        $v0, . + 4 + (-0x7A << 2)
    ctx->pc = 0x30F604u;
    {
        const bool branch_taken_0x30f604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F604u;
        // 0x30f608: 0x1692018  mult        $a0, $t3, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f604) {
            ctx->pc = 0x30F420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f420;
        }
    }
    ctx->pc = 0x30F60Cu;
label_30f60c:
    // 0x30f60c: 0x1940005f  blez        $t2, . + 4 + (0x5F << 2)
    ctx->pc = 0x30F60Cu;
    {
        const bool branch_taken_0x30f60c = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x30F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F60Cu;
        // 0x30f610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f60c) {
            ctx->pc = 0x30F78Cu;
            goto label_30f78c;
        }
    }
    ctx->pc = 0x30F614u;
    // 0x30f614: 0x6a30020  bgezl       $s5, . + 4 + (0x20 << 2)
    ctx->pc = 0x30F614u;
    {
        const bool branch_taken_0x30f614 = (GPR_S64(ctx, 21) >= 0);
        if (branch_taken_0x30f614) {
            ctx->pc = 0x30F618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F614u;
            // 0x30f618: 0x32b1ffff  andi        $s1, $s5, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F698u;
            goto label_30f698;
        }
    }
    ctx->pc = 0x30F61Cu;
    // 0x30f61c: 0x2331018  mult        $v0, $s1, $s3
    ctx->pc = 0x30f61cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30f620: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x30f620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x30f624: 0xc6c2001c  lwc1        $f2, 0x1C($s6)
    ctx->pc = 0x30f624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f628: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30f628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f62c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x30f62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x30f630: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x30f630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x30f634: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x30f634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x30f638: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x30f638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f63c: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x30f63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f640: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x30f640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x30f644: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x30f644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f648: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x30f648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f64c: 0x46000983  div.s       $f6, $f1, $f0
    ctx->pc = 0x30f64cu;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x30f650: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x30f650u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x30f654: 0xe6c2001c  swc1        $f2, 0x1C($s6)
    ctx->pc = 0x30f654u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 28), bits); }
    // 0x30f658: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x30f658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30f65c: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x30f65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30f660: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x30f660u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x30f664: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x30f664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30f668: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x30f668u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x30f66c: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x30f66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f670: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x30f670u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x30f674: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x30f674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f678: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x30f678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f67c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30f67cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30f680: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x30f680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x30f684: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x30f684u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x30f688: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x30f688u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x30f68c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x30f68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x30f690: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x30F690u;
    {
        const bool branch_taken_0x30f690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F690u;
        // 0x30f694: 0xe7a10038  swc1        $f1, 0x38($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f690) {
            ctx->pc = 0x30F758u;
            goto label_30f758;
        }
    }
    ctx->pc = 0x30F698u;
label_30f698:
    // 0x30f698: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30F698u;
    {
        const bool branch_taken_0x30f698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F698u;
        // 0x30f69c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f698) {
            ctx->pc = 0x30F6C8u;
            goto label_30f6c8;
        }
    }
    ctx->pc = 0x30F6A0u;
label_30f6a0:
    // 0x30f6a0: 0x8fa80120  lw          $t0, 0x120($sp)
    ctx->pc = 0x30f6a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x30f6a4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x30f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x30f6a8: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x30f6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x30f6ac: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x30f6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x30f6b0: 0x8c4f0008  lw          $t7, 0x8($v0)
    ctx->pc = 0x30f6b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x30f6b4: 0xb3a90017  sdl         $t1, 0x17($sp)
    ctx->pc = 0x30f6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f6b8: 0xb7a90010  sdr         $t1, 0x10($sp)
    ctx->pc = 0x30f6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f6bc: 0xafaf0018  sw          $t7, 0x18($sp)
    ctx->pc = 0x30f6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 15));
    // 0x30f6c0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x30F6C0u;
    {
        const bool branch_taken_0x30f6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f6c0) {
            ctx->pc = 0x30F758u;
            goto label_30f758;
        }
    }
    ctx->pc = 0x30F6C8u;
label_30f6c8:
    // 0x30f6c8: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x30f6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f6cc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x30f6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f6d0: 0xc6c0001c  lwc1        $f0, 0x1C($s6)
    ctx->pc = 0x30f6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f6d4: 0x46011183  div.s       $f6, $f2, $f1
    ctx->pc = 0x30f6d4u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[1]);
    // 0x30f6d8: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x30f6d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x30f6dc: 0xe6c0001c  swc1        $f0, 0x1C($s6)
    ctx->pc = 0x30f6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 28), bits); }
    // 0x30f6e0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x30f6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f6e4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x30f6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f6e8: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x30f6e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x30f6ec: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x30f6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f6f0: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x30f6f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x30f6f4: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x30f6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30f6f8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x30f6f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x30f6fc: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x30f6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30f700: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x30f700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30f704: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x30f704u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x30f708: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x30f708u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x30f70c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x30f70cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x30f710: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x30f710u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x30f714: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x30f714u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x30f718: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x30f718u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x30f71c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x30f71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f720: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x30f720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f724: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x30f724u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x30f728: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x30f728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f72c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x30f72cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x30f730: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x30f730u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x30f734: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x30f734u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30f738: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x30f738u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30f73c: 0x26e2ffff  addiu       $v0, $s7, -0x1
    ctx->pc = 0x30f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x30f740: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x30f740u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30f744: 0x16e0fc64  bnez        $s7, . + 4 + (-0x39C << 2)
    ctx->pc = 0x30F744u;
    {
        const bool branch_taken_0x30f744 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F744u;
        // 0x30f748: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f744) {
            ctx->pc = 0x30E8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e8d8;
        }
    }
    ctx->pc = 0x30F74Cu;
    // 0x30f74c: 0x0  nop
    ctx->pc = 0x30f74cu;
    // NOP
label_30f750:
    // 0x30f750: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x30F750u;
    {
        const bool branch_taken_0x30f750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F750u;
        // 0x30f754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f750) {
            ctx->pc = 0x30F78Cu;
            goto label_30f78c;
        }
    }
    ctx->pc = 0x30F758u;
label_30f758:
    // 0x30f758: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x30f758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x30f75c: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x30f75cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x30f760: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x30f760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30f764: 0xb2c5000b  sdl         $a1, 0xB($s6)
    ctx->pc = 0x30f764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f768: 0xb6c50004  sdr         $a1, 0x4($s6)
    ctx->pc = 0x30f768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f76c: 0xaec6000c  sw          $a2, 0xC($s6)
    ctx->pc = 0x30f76cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 6));
    // 0x30f770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f774: 0x6baf0017  ldl         $t7, 0x17($sp)
    ctx->pc = 0x30f774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x30f778: 0x6faf0010  ldr         $t7, 0x10($sp)
    ctx->pc = 0x30f778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x30f77c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30f780: 0xb2cf0017  sdl         $t7, 0x17($s6)
    ctx->pc = 0x30f780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f784: 0xb6cf0010  sdr         $t7, 0x10($s6)
    ctx->pc = 0x30f784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f788: 0xaec30018  sw          $v1, 0x18($s6)
    ctx->pc = 0x30f788u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 3));
label_30f78c:
    // 0x30f78c: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x30f78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x30f790: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x30f790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x30f794: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x30f794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x30f798: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x30f798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x30f79c: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x30f79cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x30f7a0: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x30f7a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x30f7a4: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x30f7a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x30f7a8: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x30f7a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x30f7ac: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x30f7acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x30f7b0: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x30f7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x30f7b4: 0xc7b601e0  lwc1        $f22, 0x1E0($sp)
    ctx->pc = 0x30f7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x30f7b8: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x30f7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30f7bc: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x30f7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30f7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x30F7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F7C0u;
        // 0x30f7c4: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F7C8u;
}
