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

// Function: sub_00150790
// Address: 0x150790 - 0x150a60
void sub_00150790_0x150790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150790_0x150790");
#endif

    switch (ctx->pc) {
        case 0x1508a8u: goto label_1508a8;
        case 0x15091cu: goto label_15091c;
        default: break;
    }

    ctx->pc = 0x150790u;

    // 0x150790: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x150790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x150794: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x150794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150798: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x150798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x15079c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x15079cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1507a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1507a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1507a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1507a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1507a8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1507a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1507ac: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1507ACu;
    {
        const bool branch_taken_0x1507ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1507B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1507ACu;
        // 0x1507b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1507ac) {
            ctx->pc = 0x150878u;
            goto label_150878;
        }
    }
    ctx->pc = 0x1507B4u;
    // 0x1507b4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1507b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1507b8: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x1507b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1507bc: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x1507bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1507c0: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x1507c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1507c4: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1507c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1507c8: 0x0  nop
    ctx->pc = 0x1507c8u;
    // NOP
    // 0x1507cc: 0x4501009e  bc1t        . + 4 + (0x9E << 2)
    ctx->pc = 0x1507CCu;
    {
        const bool branch_taken_0x1507cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1507D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1507CCu;
        // 0x1507d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1507cc) {
            ctx->pc = 0x150A48u;
            goto label_150a48;
        }
    }
    ctx->pc = 0x1507D4u;
    // 0x1507d4: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x1507d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1507d8: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1507d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1507dc: 0x0  nop
    ctx->pc = 0x1507dcu;
    // NOP
    // 0x1507e0: 0x45010099  bc1t        . + 4 + (0x99 << 2)
    ctx->pc = 0x1507E0u;
    {
        const bool branch_taken_0x1507e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1507e0) {
            ctx->pc = 0x150A48u;
            goto label_150a48;
        }
    }
    ctx->pc = 0x1507E8u;
    // 0x1507e8: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x1507e8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x1507ec: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x1507ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1507f0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1507f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1507f4: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1507f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1507f8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1507f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1507fc: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1507fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x150800: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x150800u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x150804: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x150804u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x150808: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x150808u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15080c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x15080cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x150810: 0xc62b000c  lwc1        $f11, 0xC($s1)
    ctx->pc = 0x150810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x150814: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x150814u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x150818: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x150818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15081c: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x15081cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x150820: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x150820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x150824: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x150824u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x150828: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x150828u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x15082c: 0x460b5802  mul.s       $f0, $f11, $f11
    ctx->pc = 0x15082cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x150830: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x150830u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x150834: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x150834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x150838: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x150838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15083c: 0x0  nop
    ctx->pc = 0x15083cu;
    // NOP
    // 0x150840: 0x45030082  bc1tl       . + 4 + (0x82 << 2)
    ctx->pc = 0x150840u;
    {
        const bool branch_taken_0x150840 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x150840) {
            ctx->pc = 0x150844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150840u;
            // 0x150844: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150A4Cu;
            goto label_150a4c;
        }
    }
    ctx->pc = 0x150848u;
    // 0x150848: 0x0  nop
    ctx->pc = 0x150848u;
    // NOP
    // 0x15084c: 0x0  nop
    ctx->pc = 0x15084cu;
    // NOP
    // 0x150850: 0x46030004  c1          0x30004
    ctx->pc = 0x150850u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[3]);
    // 0x150854: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x150854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x150858: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x150858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15085c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15085cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150860: 0x0  nop
    ctx->pc = 0x150860u;
    // NOP
    // 0x150864: 0x45020078  bc1fl       . + 4 + (0x78 << 2)
    ctx->pc = 0x150864u;
    {
        const bool branch_taken_0x150864 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x150864) {
            ctx->pc = 0x150868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150864u;
            // 0x150868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150A48u;
            goto label_150a48;
        }
    }
    ctx->pc = 0x15086Cu;
    // 0x15086c: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x15086Cu;
    {
        const bool branch_taken_0x15086c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15086Cu;
        // 0x150870: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15086c) {
            ctx->pc = 0x150A4Cu;
            goto label_150a4c;
        }
    }
    ctx->pc = 0x150874u;
    // 0x150874: 0x0  nop
    ctx->pc = 0x150874u;
    // NOP
label_150878:
    // 0x150878: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x150878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15087c: 0x54620056  bnel        $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x15087Cu;
    {
        const bool branch_taken_0x15087c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15087c) {
            ctx->pc = 0x150880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15087Cu;
            // 0x150880: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1509D8u;
            goto label_1509d8;
        }
    }
    ctx->pc = 0x150884u;
    // 0x150884: 0x6a02003b  ldl         $v0, 0x3B($s0)
    ctx->pc = 0x150884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x150888: 0x6e020034  ldr         $v0, 0x34($s0)
    ctx->pc = 0x150888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15088c: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x15088cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x150890: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x150890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150894: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x150894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150898: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x150898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x15089c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15089cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1508a0: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x1508A0u;
    SET_GPR_U32(ctx, 31, 0x1508A8u);
    ctx->pc = 0x1508A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1508A0u;
    // 0x1508a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1508A0u, 0x1508A8u)) {
        return;
    }
    ctx->pc = 0x1508A8u;
label_1508a8:
    // 0x1508a8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1508a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1508ac: 0x24462308  addiu       $a2, $v0, 0x2308
    ctx->pc = 0x1508acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8968));
    // 0x1508b0: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1508b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1508b4: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1508b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1508b8: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1508b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x692310u));
    // 0x1508bc: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x1508bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1508c0: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x1508c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1508c4: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1508c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1508c8: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1508c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1508cc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1508ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1508d0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1508d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1508d4: 0xc7a70008  lwc1        $f7, 0x8($sp)
    ctx->pc = 0x1508d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1508d8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1508d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1508dc: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x1508dcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1508e0: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1508e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1508e4: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x1508e4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x1508e8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1508e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1508ec: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x1508ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1508f0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1508f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1508f4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1508f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1508f8: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x1508f8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x1508fc: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1508fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x150900: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x150900u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x150904: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x150904u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x150908: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x150908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x15090c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x15090cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x150910: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x150910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x150914: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x150914u;
    SET_GPR_U32(ctx, 31, 0x15091Cu);
    ctx->pc = 0x150918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150914u;
    // 0x150918: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x150914u, 0x15091Cu)) {
        return;
    }
    ctx->pc = 0x15091Cu;
label_15091c:
    // 0x15091c: 0xc62b0000  lwc1        $f11, 0x0($s1)
    ctx->pc = 0x15091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x150920: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x150920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150924: 0xc62a0004  lwc1        $f10, 0x4($s1)
    ctx->pc = 0x150924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x150928: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x150928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15092c: 0x46015801  sub.s       $f0, $f11, $f1
    ctx->pc = 0x15092cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[1]);
    // 0x150930: 0xc6290008  lwc1        $f9, 0x8($s1)
    ctx->pc = 0x150930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x150934: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x150934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150938: 0x460651c1  sub.s       $f7, $f10, $f6
    ctx->pc = 0x150938u;
    ctx->f[7] = FPU_SUB_S(ctx->f[10], ctx->f[6]);
    // 0x15093c: 0x46024a01  sub.s       $f8, $f9, $f2
    ctx->pc = 0x15093cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
    // 0x150940: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x150940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x150944: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x150944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x150948: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x150948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x15094c: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x15094cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x150950: 0x460721c2  mul.s       $f7, $f4, $f7
    ctx->pc = 0x150950u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x150954: 0x46082a02  mul.s       $f8, $f5, $f8
    ctx->pc = 0x150954u;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x150958: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x150958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x15095c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x15095cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x150960: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x150960u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x150964: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x150964u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x150968: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x150968u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x15096c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x15096cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x150970: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x150970u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x150974: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x150974u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x150978: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x150978u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x15097c: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x15097cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x150980: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x150980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x150984: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x150984u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x150988: 0xe7a60044  swc1        $f6, 0x44($sp)
    ctx->pc = 0x150988u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x15098c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x15098cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x150990: 0x460b0841  sub.s       $f1, $f1, $f11
    ctx->pc = 0x150990u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
    // 0x150994: 0x460a3181  sub.s       $f6, $f6, $f10
    ctx->pc = 0x150994u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[10]);
    // 0x150998: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x150998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15099c: 0x46091081  sub.s       $f2, $f2, $f9
    ctx->pc = 0x15099cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[9]);
    // 0x1509a0: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x1509a0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1509a4: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1509a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1509a8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1509a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1509ac: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x1509acu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x1509b0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1509b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1509b4: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x1509b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1509b8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1509b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1509bc: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x1509bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x1509c0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1509c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1509c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1509c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1509c8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1509c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1509cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1509ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1509d0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1509D0u;
    {
        const bool branch_taken_0x1509d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1509D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1509D0u;
        // 0x1509d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1509d0) {
            ctx->pc = 0x150A38u;
            goto label_150a38;
        }
    }
    ctx->pc = 0x1509D8u;
label_1509d8:
    // 0x1509d8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1509d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1509dc: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1509dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1509e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1509e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1509e4: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x1509e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1509e8: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1509e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1509ec: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1509ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1509f0: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1509f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1509f4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1509f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1509f8: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x1509f8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1509fc: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1509fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x150a00: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x150a00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x150a04: 0xc624000c  lwc1        $f4, 0xC($s1)
    ctx->pc = 0x150a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x150a08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x150a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a0c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x150a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x150a10: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x150a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150a14: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x150a14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x150a18: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x150a18u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x150a1c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x150a1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x150a20: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x150a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x150a24: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x150a24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x150a28: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x150a28u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x150a2c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x150a2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x150a30: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x150a30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150a34: 0x0  nop
    ctx->pc = 0x150a34u;
    // NOP
label_150a38:
    // 0x150a38: 0x0  nop
    ctx->pc = 0x150a38u;
    // NOP
    // 0x150a3c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x150A3Cu;
    {
        const bool branch_taken_0x150a3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x150A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A3Cu;
        // 0x150a40: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a3c) {
            ctx->pc = 0x150A4Cu;
            goto label_150a4c;
        }
    }
    ctx->pc = 0x150A44u;
    // 0x150a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150a48:
    // 0x150a48: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x150a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_150a4c:
    // 0x150a4c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x150a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x150a50: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x150a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150a54: 0x3e00008  jr          $ra
    ctx->pc = 0x150A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A54u;
        // 0x150a58: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150A5Cu;
    // 0x150a5c: 0x0  nop
    ctx->pc = 0x150a5cu;
    // NOP
    ctx->pc = 0x150a60u;
}
