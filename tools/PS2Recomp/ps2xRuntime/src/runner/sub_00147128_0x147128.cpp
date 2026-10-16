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

// Function: sub_00147128
// Address: 0x147128 - 0x147258
void sub_00147128_0x147128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147128_0x147128");
#endif

    switch (ctx->pc) {
        case 0x147164u: goto label_147164;
        case 0x1471e0u: goto label_1471e0;
        case 0x147230u: goto label_147230;
        case 0x14723cu: goto label_14723c;
        default: break;
    }

    ctx->pc = 0x147128u;

    // 0x147128: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x147128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14712c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x14712cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x147130: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x147130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x147134: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x147134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x147138: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x147138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14713c: 0x8c438888  lw          $v1, -0x7778($v0)
    ctx->pc = 0x14713cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8888u));
    // 0x147140: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x147140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x147144: 0x14c3003e  bne         $a2, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x147144u;
    {
        const bool branch_taken_0x147144 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x147148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147144u;
        // 0x147148: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147144) {
            ctx->pc = 0x147240u;
            goto label_147240;
        }
    }
    ctx->pc = 0x14714Cu;
    // 0x14714c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x14714cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x147150: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x147150u;
    {
        const bool branch_taken_0x147150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147150u;
        // 0x147154: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147150) {
            ctx->pc = 0x147240u;
            goto label_147240;
        }
    }
    ctx->pc = 0x147158u;
    // 0x147158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x147158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14715c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x14715Cu;
    SET_GPR_U32(ctx, 31, 0x147164u);
    ctx->pc = 0x147160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14715Cu;
    // 0x147160: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x14715Cu, 0x147164u)) {
        return;
    }
    ctx->pc = 0x147164u;
label_147164:
    // 0x147164: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x147164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x147168: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x147168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14716c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x147170: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x147170u;
    {
        const bool branch_taken_0x147170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147170) {
            ctx->pc = 0x147174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147170u;
            // 0x147174: 0x8e25005c  lw          $a1, 0x5C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1471B0u;
            goto label_1471b0;
        }
    }
    ctx->pc = 0x147178u;
    // 0x147178: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x147178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14717c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14717cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x147180: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x147180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x147184: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x147184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x147188: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x147188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14718c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x147190: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x147190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x147194: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x147194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x147198: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x147198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14719c: 0xb0430017  sdl         $v1, 0x17($v0)
    ctx->pc = 0x14719cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1471a0: 0xb4430010  sdr         $v1, 0x10($v0)
    ctx->pc = 0x1471a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1471a4: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x1471a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x1471a8: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1471a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1471ac: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x1471acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_1471b0:
    // 0x1471b0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1471b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1471b4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1471b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1471b8: 0x68a70027  ldl         $a3, 0x27($a1)
    ctx->pc = 0x1471b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1471bc: 0x6ca70020  ldr         $a3, 0x20($a1)
    ctx->pc = 0x1471bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1471c0: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x1471c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1471c4: 0xb2070027  sdl         $a3, 0x27($s0)
    ctx->pc = 0x1471c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1471c8: 0xb6070020  sdr         $a3, 0x20($s0)
    ctx->pc = 0x1471c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1471cc: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1471ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1471d0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1471d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1471d4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1471d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1471d8: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x1471D8u;
    SET_GPR_U32(ctx, 31, 0x1471E0u);
    ctx->pc = 0x1471DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1471D8u;
    // 0x1471dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1471D8u, 0x1471E0u)) {
        return;
    }
    ctx->pc = 0x1471E0u;
label_1471e0:
    // 0x1471e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1471e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1471e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1471e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1471e8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1471e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1471ec: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x1471ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1471f0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1471f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1471f4: 0xc6050028  lwc1        $f5, 0x28($s0)
    ctx->pc = 0x1471f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1471f8: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1471f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1471fc: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x1471fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x147200: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x147200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147204: 0x46012902  mul.s       $f4, $f5, $f1
    ctx->pc = 0x147204u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x147208: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x147208u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x14720c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14720cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x147210: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x147210u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x147214: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x147214u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x147218: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x147218u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x14721c: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x14721cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x147220: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x147220u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x147224: 0xe6050000  swc1        $f5, 0x0($s0)
    ctx->pc = 0x147224u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x147228: 0xc092d94  jal         func_24B650
    ctx->pc = 0x147228u;
    SET_GPR_U32(ctx, 31, 0x147230u);
    ctx->pc = 0x14722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147228u;
    // 0x14722c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x147228u, 0x147230u)) {
        return;
    }
    ctx->pc = 0x147230u;
label_147230:
    // 0x147230: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x147230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x147234: 0xc0aaf06  jal         func_2ABC18
    ctx->pc = 0x147234u;
    SET_GPR_U32(ctx, 31, 0x14723Cu);
    ctx->pc = 0x147238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147234u;
    // 0x147238: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABC18u, 0x147234u, 0x14723Cu)) {
        return;
    }
    ctx->pc = 0x14723Cu;
label_14723c:
    // 0x14723c: 0x0  nop
    ctx->pc = 0x14723cu;
    // NOP
label_147240:
    // 0x147240: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x147240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147244: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x147244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x147248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14724c: 0x3e00008  jr          $ra
    ctx->pc = 0x14724Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14724Cu;
        // 0x147250: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14724Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147254u;
    // 0x147254: 0x0  nop
    ctx->pc = 0x147254u;
    // NOP
    ctx->pc = 0x147258u;
}
