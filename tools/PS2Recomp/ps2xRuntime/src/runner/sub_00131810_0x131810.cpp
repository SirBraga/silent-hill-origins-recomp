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

// Function: sub_00131810
// Address: 0x131810 - 0x131ba0
void sub_00131810_0x131810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131810_0x131810");
#endif

    switch (ctx->pc) {
        case 0x131854u: goto label_131854;
        case 0x131874u: goto label_131874;
        case 0x131894u: goto label_131894;
        case 0x13194cu: goto label_13194c;
        case 0x131978u: goto label_131978;
        case 0x1319b0u: goto label_1319b0;
        case 0x131abcu: goto label_131abc;
        case 0x131ad0u: goto label_131ad0;
        case 0x131b30u: goto label_131b30;
        case 0x131b40u: goto label_131b40;
        case 0x131b7cu: goto label_131b7c;
        default: break;
    }

    ctx->pc = 0x131810u;

    // 0x131810: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x131810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x131814: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x131814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x131818: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x131818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x13181c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13181cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x131820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x131820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131824: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x131824u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x131828: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x131828u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x13182c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x13182cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x131830: 0x8c438b2c  lw          $v1, -0x74D4($v0)
    ctx->pc = 0x131830u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338B2Cu));
    // 0x131834: 0x8c64006c  lw          $a0, 0x6C($v1)
    ctx->pc = 0x131834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x131838: 0x508000d3  beql        $a0, $zero, . + 4 + (0xD3 << 2)
    ctx->pc = 0x131838u;
    {
        const bool branch_taken_0x131838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131838) {
            ctx->pc = 0x13183Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131838u;
            // 0x13183c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131B88u;
            goto label_131b88;
        }
    }
    ctx->pc = 0x131840u;
    // 0x131840: 0x8e041538  lw          $a0, 0x1538($s0)
    ctx->pc = 0x131840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5432)));
    // 0x131844: 0x508000bc  beql        $a0, $zero, . + 4 + (0xBC << 2)
    ctx->pc = 0x131844u;
    {
        const bool branch_taken_0x131844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131844) {
            ctx->pc = 0x131848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131844u;
            // 0x131848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131B38u;
            goto label_131b38;
        }
    }
    ctx->pc = 0x13184Cu;
    // 0x13184c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x13184Cu;
    SET_GPR_U32(ctx, 31, 0x131854u);
    ctx->pc = 0x131850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13184Cu;
    // 0x131850: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x13184Cu, 0x131854u)) {
        return;
    }
    ctx->pc = 0x131854u;
label_131854:
    // 0x131854: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x131854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x131858: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x131858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13185c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x13185cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x131860: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x131860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x131864: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x131864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x131868: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x131868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x13186c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x13186Cu;
    SET_GPR_U32(ctx, 31, 0x131874u);
    ctx->pc = 0x131870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13186Cu;
    // 0x131870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x13186Cu, 0x131874u)) {
        return;
    }
    ctx->pc = 0x131874u;
label_131874:
    // 0x131874: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x131874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x131878: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x131878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13187c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x13187cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x131880: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x131880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x131884: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x131884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x131888: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x131888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x13188c: 0xc04f0d4  jal         func_13C350
    ctx->pc = 0x13188Cu;
    SET_GPR_U32(ctx, 31, 0x131894u);
    ctx->pc = 0x131890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13188Cu;
    // 0x131890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C350u, 0x13188Cu, 0x131894u)) {
        return;
    }
    ctx->pc = 0x131894u;
label_131894:
    // 0x131894: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x131894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x131898: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x131898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13189c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x13189cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1318a0: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x1318a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1318a4: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x1318a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1318a8: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1318a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1318ac: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x1318acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x1318b0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1318b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1318b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1318b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1318b8: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1318b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1318bc: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x1318bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1318c0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1318c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1318c4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1318c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1318c8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1318c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1318cc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1318ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1318d0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1318d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1318d4: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1318d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1318d8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1318d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1318dc: 0x6ba70057  ldl         $a3, 0x57($sp)
    ctx->pc = 0x1318dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1318e0: 0x6fa70050  ldr         $a3, 0x50($sp)
    ctx->pc = 0x1318e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1318e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1318e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1318e8: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x1318e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1318ec: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x1318ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1318f0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1318f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1318f4: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x1318f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1318f8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1318f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1318fc: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x1318fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x131900: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x131900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131904: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x131904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131908: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x131908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13190c: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x13190cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x131910: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x131910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x131914: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x131914u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x131918: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x131918u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x13191c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x13191cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x131920: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x131920u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x131924: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x131924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131928: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x131928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13192c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x13192cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x131930: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x131930u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x131934: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x131934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x131938: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x131938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x13193c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x13193cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x131940: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x131940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x131944: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x131944u;
    SET_GPR_U32(ctx, 31, 0x13194Cu);
    ctx->pc = 0x131948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131944u;
    // 0x131948: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x131944u, 0x13194Cu)) {
        return;
    }
    ctx->pc = 0x13194Cu;
label_13194c:
    // 0x13194c: 0x0  nop
    ctx->pc = 0x13194cu;
    // NOP
    // 0x131950: 0x0  nop
    ctx->pc = 0x131950u;
    // NOP
    // 0x131954: 0x46000044  c1          0x44
    ctx->pc = 0x131954u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x131958: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x131958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13195c: 0x0  nop
    ctx->pc = 0x13195cu;
    // NOP
    // 0x131960: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x131960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131964: 0x0  nop
    ctx->pc = 0x131964u;
    // NOP
    // 0x131968: 0x45010037  bc1t        . + 4 + (0x37 << 2)
    ctx->pc = 0x131968u;
    {
        const bool branch_taken_0x131968 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131968u;
        // 0x13196c: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131968) {
            ctx->pc = 0x131A48u;
            goto label_131a48;
        }
    }
    ctx->pc = 0x131970u;
    // 0x131970: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x131970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131974: 0x0  nop
    ctx->pc = 0x131974u;
    // NOP
label_131978:
    // 0x131978: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x131978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13197c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x13197cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131980: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x131980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x131984: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x131984u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x131988: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x131988u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x13198c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x13198cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x131990: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x131990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x131994: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x131994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x131998: 0xc6141530  lwc1        $f20, 0x1530($s0)
    ctx->pc = 0x131998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13199c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13199cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1319a0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1319a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1319a4: 0x8e051538  lw          $a1, 0x1538($s0)
    ctx->pc = 0x1319a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5432)));
    // 0x1319a8: 0xc062118  jal         func_188460
    ctx->pc = 0x1319A8u;
    SET_GPR_U32(ctx, 31, 0x1319B0u);
    ctx->pc = 0x1319ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1319A8u;
    // 0x1319ac: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188460u, 0x1319A8u, 0x1319B0u)) {
        return;
    }
    ctx->pc = 0x1319B0u;
label_1319b0:
    // 0x1319b0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1319b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1319b4: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1319b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1319b8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1319b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1319bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1319bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1319c0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1319c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1319c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1319c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1319c8: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1319c8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1319cc: 0x4616a036  c.le.s      $f20, $f22
    ctx->pc = 0x1319ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1319d0: 0x0  nop
    ctx->pc = 0x1319d0u;
    // NOP
    // 0x1319d4: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x1319D4u;
    {
        const bool branch_taken_0x1319d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1319D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1319D4u;
        // 0x1319d8: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1319d4) {
            ctx->pc = 0x131A60u;
            goto label_131a60;
        }
    }
    ctx->pc = 0x1319DCu;
    // 0x1319dc: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1319dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1319e0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1319e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1319e4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1319e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1319e8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1319e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1319ec: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1319ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1319f0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1319f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1319f4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1319f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1319f8: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1319f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1319fc: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1319fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x131a00: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x131a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x131a04: 0x6ba50047  ldl         $a1, 0x47($sp)
    ctx->pc = 0x131a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x131a08: 0x6fa50040  ldr         $a1, 0x40($sp)
    ctx->pc = 0x131a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x131a0c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x131a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x131a10: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x131a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x131a14: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x131a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x131a18: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x131a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x131a1c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x131a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x131a20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x131a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131a24: 0x6ba30037  ldl         $v1, 0x37($sp)
    ctx->pc = 0x131a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x131a28: 0x6fa30030  ldr         $v1, 0x30($sp)
    ctx->pc = 0x131a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x131a2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131a30: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x131a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x131a34: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x131a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x131a38: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x131a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x131a3c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x131A3Cu;
    {
        const bool branch_taken_0x131a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A3Cu;
        // 0x131a40: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131a3c) {
            ctx->pc = 0x131B70u;
            goto label_131b70;
        }
    }
    ctx->pc = 0x131A44u;
    // 0x131a44: 0x0  nop
    ctx->pc = 0x131a44u;
    // NOP
label_131a48:
    // 0x131a48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x131a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x131a4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x131a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131a50: 0x0  nop
    ctx->pc = 0x131a50u;
    // NOP
    // 0x131a54: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x131a54u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x131a58: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
    ctx->pc = 0x131A58u;
    {
        const bool branch_taken_0x131a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A58u;
        // 0x131a5c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131a58) {
            ctx->pc = 0x131978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131978;
        }
    }
    ctx->pc = 0x131A60u;
label_131a60:
    // 0x131a60: 0x3c01411c  lui         $at, 0x411C
    ctx->pc = 0x131a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16668 << 16));
    // 0x131a64: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x131a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x131a68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x131a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131a6c: 0x3c013be3  lui         $at, 0x3BE3
    ctx->pc = 0x131a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15331 << 16));
    // 0x131a70: 0x34218e39  ori         $at, $at, 0x8E39
    ctx->pc = 0x131a70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36409);
    // 0x131a74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x131a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x131a78: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x131a78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x131a7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x131a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x131a80: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x131a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x131a84: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x131a84u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x131a88: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x131a88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131a8c: 0x0  nop
    ctx->pc = 0x131a8cu;
    // NOP
    // 0x131a90: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x131A90u;
    {
        const bool branch_taken_0x131a90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x131a90) {
            ctx->pc = 0x131A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131A90u;
            // 0x131a94: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131A98u;
            goto label_131a98;
        }
    }
    ctx->pc = 0x131A98u;
label_131a98:
    // 0x131a98: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x131a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x131a9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x131a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131aa0: 0x0  nop
    ctx->pc = 0x131aa0u;
    // NOP
    // 0x131aa4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x131aa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131aa8: 0x0  nop
    ctx->pc = 0x131aa8u;
    // NOP
    // 0x131aac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x131AACu;
    {
        const bool branch_taken_0x131aac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x131aac) {
            ctx->pc = 0x131AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131AACu;
            // 0x131ab0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131AB4u;
            goto label_131ab4;
        }
    }
    ctx->pc = 0x131AB4u;
label_131ab4:
    // 0x131ab4: 0xc09b360  jal         func_26CD80
    ctx->pc = 0x131AB4u;
    SET_GPR_U32(ctx, 31, 0x131ABCu);
    ctx->pc = 0x26CD80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CD80u, 0x131AB4u, 0x131ABCu)) {
        return;
    }
    ctx->pc = 0x131ABCu;
label_131abc:
    // 0x131abc: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x131abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x131ac0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x131ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x131ac4: 0x46160502  mul.s       $f20, $f0, $f22
    ctx->pc = 0x131ac4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x131ac8: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x131AC8u;
    SET_GPR_U32(ctx, 31, 0x131AD0u);
    ctx->pc = 0x131ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131AC8u;
    // 0x131acc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x131AC8u, 0x131AD0u)) {
        return;
    }
    ctx->pc = 0x131AD0u;
label_131ad0:
    // 0x131ad0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x131ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x131ad4: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x131ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131ad8: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x131ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x131adc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x131adcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x131ae0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x131ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131ae4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x131ae4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x131ae8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x131ae8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x131aec: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x131aecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x131af0: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x131af0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x131af4: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x131af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x131af8: 0x6ba70047  ldl         $a3, 0x47($sp)
    ctx->pc = 0x131af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x131afc: 0x6fa70040  ldr         $a3, 0x40($sp)
    ctx->pc = 0x131afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x131b00: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x131b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x131b04: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x131b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x131b08: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x131b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x131b0c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x131b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x131b10: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x131b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x131b14: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x131b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x131b18: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x131b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131b1c: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x131b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x131b20: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x131b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x131b24: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x131b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x131b28: 0xc09b164  jal         func_26C590
    ctx->pc = 0x131B28u;
    SET_GPR_U32(ctx, 31, 0x131B30u);
    ctx->pc = 0x131B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131B28u;
    // 0x131b2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x131B28u, 0x131B30u)) {
        return;
    }
    ctx->pc = 0x131B30u;
label_131b30:
    // 0x131b30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x131B30u;
    {
        const bool branch_taken_0x131b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B30u;
        // 0x131b34: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b30) {
            ctx->pc = 0x131B68u;
            goto label_131b68;
        }
    }
    ctx->pc = 0x131B38u;
label_131b38:
    // 0x131b38: 0xc04f0f4  jal         func_13C3D0
    ctx->pc = 0x131B38u;
    SET_GPR_U32(ctx, 31, 0x131B40u);
    ctx->pc = 0x131B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131B38u;
    // 0x131b3c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3D0u, 0x131B38u, 0x131B40u)) {
        return;
    }
    ctx->pc = 0x131B40u;
label_131b40:
    // 0x131b40: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x131b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x131b44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x131b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x131b48: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x131b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131b4c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x131b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131b50: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x131b50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x131b54: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x131b54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x131b58: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x131b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x131b5c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x131b5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x131b60: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x131b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x131b64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x131b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_131b68:
    // 0x131b68: 0x0  nop
    ctx->pc = 0x131b68u;
    // NOP
    // 0x131b6c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x131b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_131b70:
    // 0x131b70: 0x260416c0  addiu       $a0, $s0, 0x16C0
    ctx->pc = 0x131b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
    // 0x131b74: 0xc0534a4  jal         func_14D290
    ctx->pc = 0x131B74u;
    SET_GPR_U32(ctx, 31, 0x131B7Cu);
    ctx->pc = 0x131B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131B74u;
    // 0x131b78: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D290u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D290u, 0x131B74u, 0x131B7Cu)) {
        return;
    }
    ctx->pc = 0x131B7Cu;
label_131b7c:
    // 0x131b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131b80: 0xae021b5c  sw          $v0, 0x1B5C($s0)
    ctx->pc = 0x131b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7004), GPR_U32(ctx, 2));
    // 0x131b84: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x131b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_131b88:
    // 0x131b88: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x131b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131b8c: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x131b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x131b90: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x131b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x131b94: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x131b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x131b98: 0x3e00008  jr          $ra
    ctx->pc = 0x131B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B98u;
        // 0x131b9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131BA0u;
}
