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

// Function: sub_00157160
// Address: 0x157160 - 0x157550
void sub_00157160_0x157160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157160_0x157160");
#endif

    switch (ctx->pc) {
        case 0x1571a8u: goto label_1571a8;
        case 0x157280u: goto label_157280;
        case 0x1572d0u: goto label_1572d0;
        case 0x1573a0u: goto label_1573a0;
        case 0x1574d0u: goto label_1574d0;
        case 0x157510u: goto label_157510;
        default: break;
    }

    ctx->pc = 0x157160u;

    // 0x157160: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x157160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x157164: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x157164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x157168: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x157168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x15716c: 0x24425048  addiu       $v0, $v0, 0x5048
    ctx->pc = 0x15716cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20552));
    // 0x157170: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x157170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x157174: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x157174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157178: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x157178u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x15717c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15717cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157180: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x157180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x157184: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x157184u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x157188: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x157188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x15718c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x15718cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x157190: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x157190u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x157194: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x157194u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x157198: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x157198u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x15719c: 0xc457000c  lwc1        $f23, 0xC($v0)
    ctx->pc = 0x15719cu;
    { uint32_t bits = FAST_READ32(0x735054u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1571a0: 0xc4560008  lwc1        $f22, 0x8($v0)
    ctx->pc = 0x1571a0u;
    { uint32_t bits = FAST_READ32(0x735050u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1571a4: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x1571a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1571a8:
    // 0x1571a8: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1571a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1571ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1571acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1571b0: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x1571b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1571b4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1571b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1571b8: 0x106000d5  beqz        $v1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1571B8u;
    {
        const bool branch_taken_0x1571b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1571BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571B8u;
        // 0x1571bc: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1571b8) {
            ctx->pc = 0x157510u;
            goto label_157510;
        }
    }
    ctx->pc = 0x1571C0u;
    // 0x1571c0: 0x3c01411c  lui         $at, 0x411C
    ctx->pc = 0x1571c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16668 << 16));
    // 0x1571c4: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1571c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1571c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1571c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1571cc: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1571ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1571d0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1571d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1571d4: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x1571d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1571d8: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x1571d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1571dc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1571dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1571e0: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1571e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1571e4: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1571e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1571e8: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1571e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1571ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1571ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1571f0: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x1571f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1571f4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1571f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1571f8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1571f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1571fc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1571fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x157200: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x157200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157204: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x157204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x157208: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x157208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x15720c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15720cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157210: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x157210u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x157214: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x157214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x157218: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x157218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x15721c: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x15721cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x157220: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x157220u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x157224: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x157224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157228: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x157228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15722c: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x15722cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x157230: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x157230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157234: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x157234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x157238: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x157238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15723c: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x15723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x157240: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x157240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x157244: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x157244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157248: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x157248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15724c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x15724cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x157250: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x157250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x157254: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x157254u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x157258: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x157258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15725c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x15725cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x157260: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x157260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x157264: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x157264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x157268: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x157268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15726c: 0xb2030067  sdl         $v1, 0x67($s0)
    ctx->pc = 0x15726cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157270: 0xb6030060  sdr         $v1, 0x60($s0)
    ctx->pc = 0x157270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157274: 0xae040068  sw          $a0, 0x68($s0)
    ctx->pc = 0x157274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 4));
    // 0x157278: 0xc092d94  jal         func_24B650
    ctx->pc = 0x157278u;
    SET_GPR_U32(ctx, 31, 0x157280u);
    ctx->pc = 0x15727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157278u;
    // 0x15727c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x157278u, 0x157280u)) {
        return;
    }
    ctx->pc = 0x157280u;
label_157280:
    // 0x157280: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x157280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x157284: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x157284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x157288: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x157288u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33870Cu));
    // 0x15728c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15728cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157290: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x157290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157294: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x157294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x157298: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x157298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x15729c: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x15729cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1572a0: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x1572a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1572a4: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x1572a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1572a8: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x1572a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1572ac: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x1572acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x1572b0: 0x6a080007  ldl         $t0, 0x7($s0)
    ctx->pc = 0x1572b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1572b4: 0x6e080000  ldr         $t0, 0x0($s0)
    ctx->pc = 0x1572b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1572b8: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x1572b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1572bc: 0xb3a80027  sdl         $t0, 0x27($sp)
    ctx->pc = 0x1572bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1572c0: 0xb7a80020  sdr         $t0, 0x20($sp)
    ctx->pc = 0x1572c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1572c4: 0xafa90028  sw          $t1, 0x28($sp)
    ctx->pc = 0x1572c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 9));
    // 0x1572c8: 0xc05eec6  jal         func_17BB18
    ctx->pc = 0x1572C8u;
    SET_GPR_U32(ctx, 31, 0x1572D0u);
    ctx->pc = 0x1572CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1572C8u;
    // 0x1572cc: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BB18u, 0x1572C8u, 0x1572D0u)) {
        return;
    }
    ctx->pc = 0x1572D0u;
label_1572d0:
    // 0x1572d0: 0x50400090  beql        $v0, $zero, . + 4 + (0x90 << 2)
    ctx->pc = 0x1572D0u;
    {
        const bool branch_taken_0x1572d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1572d0) {
            ctx->pc = 0x1572D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1572D0u;
            // 0x1572d4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157514u;
            goto label_157514;
        }
    }
    ctx->pc = 0x1572D8u;
    // 0x1572d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1572d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1572dc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1572dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1572e0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1572e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1572e4: 0xe6350004  swc1        $f21, 0x4($s1)
    ctx->pc = 0x1572e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1572e8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1572e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1572ec: 0x6ba40047  ldl         $a0, 0x47($sp)
    ctx->pc = 0x1572ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1572f0: 0x6fa40040  ldr         $a0, 0x40($sp)
    ctx->pc = 0x1572f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1572f4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1572f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1572f8: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x1572f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1572fc: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x1572fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157300: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x157300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x157304: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x157304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x157308: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x157308u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x15730c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x15730cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x157310: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x157310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157314: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x157314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157318: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x157318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15731c: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x15731cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x157320: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x157320u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157324: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x157324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157328: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x157328u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x15732c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x15732cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157330: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x157330u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x157334: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x157334u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x157338: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x157338u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x15733c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x15733cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157340: 0x0  nop
    ctx->pc = 0x157340u;
    // NOP
    // 0x157344: 0x45000072  bc1f        . + 4 + (0x72 << 2)
    ctx->pc = 0x157344u;
    {
        const bool branch_taken_0x157344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x157348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157344u;
        // 0x157348: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157344) {
            ctx->pc = 0x157510u;
            goto label_157510;
        }
    }
    ctx->pc = 0x15734Cu;
    // 0x15734c: 0x6ba80037  ldl         $t0, 0x37($sp)
    ctx->pc = 0x15734cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x157350: 0x6fa80030  ldr         $t0, 0x30($sp)
    ctx->pc = 0x157350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x157354: 0x8fa90038  lw          $t1, 0x38($sp)
    ctx->pc = 0x157354u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x157358: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x157358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15735c: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x15735cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157360: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x157360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x157364: 0x6ba50047  ldl         $a1, 0x47($sp)
    ctx->pc = 0x157364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x157368: 0x6fa50040  ldr         $a1, 0x40($sp)
    ctx->pc = 0x157368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x15736c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x15736cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x157370: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x157370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157374: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x157374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157378: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x157378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x15737c: 0x6a090017  ldl         $t1, 0x17($s0)
    ctx->pc = 0x15737cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x157380: 0x6e090010  ldr         $t1, 0x10($s0)
    ctx->pc = 0x157380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x157384: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x157384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x157388: 0xb3a90067  sdl         $t1, 0x67($sp)
    ctx->pc = 0x157388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15738c: 0xb7a90060  sdr         $t1, 0x60($sp)
    ctx->pc = 0x15738cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157390: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x157390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x157394: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x157394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157398: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x157398u;
    SET_GPR_U32(ctx, 31, 0x1573A0u);
    ctx->pc = 0x15739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157398u;
    // 0x15739c: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x157398u, 0x1573A0u)) {
        return;
    }
    ctx->pc = 0x1573A0u;
label_1573a0:
    // 0x1573a0: 0x0  nop
    ctx->pc = 0x1573a0u;
    // NOP
    // 0x1573a4: 0x0  nop
    ctx->pc = 0x1573a4u;
    // NOP
    // 0x1573a8: 0x46000044  c1          0x44
    ctx->pc = 0x1573a8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1573ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1573acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1573b0: 0x0  nop
    ctx->pc = 0x1573b0u;
    // NOP
    // 0x1573b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1573b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1573b8: 0x0  nop
    ctx->pc = 0x1573b8u;
    // NOP
    // 0x1573bc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1573BCu;
    {
        const bool branch_taken_0x1573bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1573C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573BCu;
        // 0x1573c0: 0xc7a30060  lwc1        $f3, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573bc) {
            ctx->pc = 0x1573D8u;
            goto label_1573d8;
        }
    }
    ctx->pc = 0x1573C4u;
    // 0x1573c4: 0x0  nop
    ctx->pc = 0x1573c4u;
    // NOP
    // 0x1573c8: 0x0  nop
    ctx->pc = 0x1573c8u;
    // NOP
    // 0x1573cc: 0x4601a803  div.s       $f0, $f21, $f1
    ctx->pc = 0x1573ccu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[1]);
    // 0x1573d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1573D0u;
    {
        const bool branch_taken_0x1573d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1573D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573D0u;
        // 0x1573d4: 0xc7a70064  lwc1        $f7, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573d0) {
            ctx->pc = 0x1573E0u;
            goto label_1573e0;
        }
    }
    ctx->pc = 0x1573D8u;
label_1573d8:
    // 0x1573d8: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1573d8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x1573dc: 0xc7a70064  lwc1        $f7, 0x64($sp)
    ctx->pc = 0x1573dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1573e0:
    // 0x1573e0: 0xc7a60068  lwc1        $f6, 0x68($sp)
    ctx->pc = 0x1573e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1573e4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1573e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1573e8: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x1573e8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x1573ec: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x1573ecu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1573f0: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x1573f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1573f4: 0xe7a70064  swc1        $f7, 0x64($sp)
    ctx->pc = 0x1573f4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1573f8: 0xe7a60068  swc1        $f6, 0x68($sp)
    ctx->pc = 0x1573f8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1573fc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1573fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157400: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x157400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x157404: 0x46011a02  mul.s       $f8, $f3, $f1
    ctx->pc = 0x157404u;
    ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x157408: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x157408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15740c: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x15740cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x157410: 0x46041882  mul.s       $f2, $f3, $f4
    ctx->pc = 0x157410u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x157414: 0x46003942  mul.s       $f5, $f7, $f0
    ctx->pc = 0x157414u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x157418: 0x46043102  mul.s       $f4, $f6, $f4
    ctx->pc = 0x157418u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x15741c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x15741cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x157420: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x157420u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x157424: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x157424u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x157428: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x157428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x15742c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x15742cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x157430: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x157430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x157434: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x157434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x157438: 0x46060142  mul.s       $f5, $f0, $f6
    ctx->pc = 0x157438u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x15743c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x15743cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x157440: 0x46070902  mul.s       $f4, $f1, $f7
    ctx->pc = 0x157440u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x157444: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x157444u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x157448: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x157448u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x15744c: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x15744cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x157450: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x157450u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x157454: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x157454u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x157458: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x157458u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x15745c: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x15745cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x157460: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x157460u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x157464: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x157464u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x157468: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x157468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x15746c: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x15746cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x157470: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x157470u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x157474: 0xb3a700b7  sdl         $a3, 0xB7($sp)
    ctx->pc = 0x157474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157478: 0xb7a700b0  sdr         $a3, 0xB0($sp)
    ctx->pc = 0x157478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15747c: 0xafa800b8  sw          $t0, 0xB8($sp)
    ctx->pc = 0x15747cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 8));
    // 0x157480: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x157480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x157484: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x157484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x157488: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x157488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15748c: 0xb3a30097  sdl         $v1, 0x97($sp)
    ctx->pc = 0x15748cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157490: 0xb7a30090  sdr         $v1, 0x90($sp)
    ctx->pc = 0x157490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157494: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x157494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x157498: 0x6ba70067  ldl         $a3, 0x67($sp)
    ctx->pc = 0x157498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x15749c: 0x6fa70060  ldr         $a3, 0x60($sp)
    ctx->pc = 0x15749cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1574a0: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1574a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1574a4: 0xb3a700a7  sdl         $a3, 0xA7($sp)
    ctx->pc = 0x1574a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1574a8: 0xb7a700a0  sdr         $a3, 0xA0($sp)
    ctx->pc = 0x1574a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1574ac: 0xafa800a8  sw          $t0, 0xA8($sp)
    ctx->pc = 0x1574acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 8));
    // 0x1574b0: 0x6ba30077  ldl         $v1, 0x77($sp)
    ctx->pc = 0x1574b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1574b4: 0x6fa30070  ldr         $v1, 0x70($sp)
    ctx->pc = 0x1574b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1574b8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1574b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1574bc: 0xb3a30087  sdl         $v1, 0x87($sp)
    ctx->pc = 0x1574bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1574c0: 0xb7a30080  sdr         $v1, 0x80($sp)
    ctx->pc = 0x1574c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1574c4: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x1574c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x1574c8: 0xc0c580c  jal         func_316030
    ctx->pc = 0x1574C8u;
    SET_GPR_U32(ctx, 31, 0x1574D0u);
    ctx->pc = 0x1574CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1574C8u;
    // 0x1574cc: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x1574C8u, 0x1574D0u)) {
        return;
    }
    ctx->pc = 0x1574D0u;
label_1574d0:
    // 0x1574d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1574d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1574d4: 0x0  nop
    ctx->pc = 0x1574d4u;
    // NOP
    // 0x1574d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1574d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1574dc: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x1574dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x1574e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1574e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1574e4: 0x4616b881  sub.s       $f2, $f23, $f22
    ctx->pc = 0x1574e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
    // 0x1574e8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1574e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1574ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1574ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1574f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1574f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1574f4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1574F4u;
    {
        const bool branch_taken_0x1574f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1574F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574F4u;
        // 0x1574f8: 0x4600b300  add.s       $f12, $f22, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1574f4) {
            ctx->pc = 0x157510u;
            goto label_157510;
        }
    }
    ctx->pc = 0x1574FCu;
    // 0x1574fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1574fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x157500: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x157500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x157504: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x157504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157508: 0xc056040  jal         func_158100
    ctx->pc = 0x157508u;
    SET_GPR_U32(ctx, 31, 0x157510u);
    ctx->pc = 0x15750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157508u;
    // 0x15750c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x158100u, 0x157508u, 0x157510u)) {
        return;
    }
    ctx->pc = 0x157510u;
label_157510:
    // 0x157510: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x157510u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_157514:
    // 0x157514: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x157514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x157518: 0x5440ff23  bnel        $v0, $zero, . + 4 + (-0xDD << 2)
    ctx->pc = 0x157518u;
    {
        const bool branch_taken_0x157518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157518) {
            ctx->pc = 0x15751Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157518u;
            // 0x15751c: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1571A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1571a8;
        }
    }
    ctx->pc = 0x157520u;
    // 0x157520: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x157520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x157524: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x157524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x157528: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x157528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15752c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x15752cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x157530: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x157530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x157534: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x157534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x157538: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x157538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x15753c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x15753cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x157540: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x157540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x157544: 0x3e00008  jr          $ra
    ctx->pc = 0x157544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157544u;
        // 0x157548: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15754Cu;
    // 0x15754c: 0x0  nop
    ctx->pc = 0x15754cu;
    // NOP
    ctx->pc = 0x157550u;
}
