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

// Function: sub_0013F230
// Address: 0x13f230 - 0x13f368
void sub_0013F230_0x13f230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F230_0x13f230");
#endif

    switch (ctx->pc) {
        case 0x13f260u: goto label_13f260;
        case 0x13f308u: goto label_13f308;
        case 0x13f314u: goto label_13f314;
        case 0x13f320u: goto label_13f320;
        case 0x13f338u: goto label_13f338;
        case 0x13f348u: goto label_13f348;
        default: break;
    }

    ctx->pc = 0x13f230u;

    // 0x13f230: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13f230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13f234: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x13f234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x13f238: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x13f238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x13f23c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13f23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f240: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x13f240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x13f244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13f244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f248: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13f248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13f24c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x13f24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13f250: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13f250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13f254: 0x8c518bc4  lw          $s1, -0x743C($v0)
    ctx->pc = 0x13f254u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x338BC4u));
    // 0x13f258: 0xc07794c  jal         func_1DE530
    ctx->pc = 0x13F258u;
    SET_GPR_U32(ctx, 31, 0x13F260u);
    ctx->pc = 0x13F25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F258u;
    // 0x13f25c: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE530u, 0x13F258u, 0x13F260u)) {
        return;
    }
    ctx->pc = 0x13F260u;
label_13f260:
    // 0x13f260: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x13f260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13f264: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x13f264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f268: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x13f268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13f26c: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x13f26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13f270: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x13f270u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x13f274: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x13f274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13f278: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x13f278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13f27c: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x13f27cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x13f280: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x13f280u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x13f284: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13f284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13f288: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f28c: 0x0  nop
    ctx->pc = 0x13f28cu;
    // NOP
    // 0x13f290: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13f290u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13f294: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x13f294u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x13f298: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x13f298u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13f29c: 0xe601038c  swc1        $f1, 0x38C($s0)
    ctx->pc = 0x13f29cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 908), bits); }
    // 0x13f2a0: 0xe6040384  swc1        $f4, 0x384($s0)
    ctx->pc = 0x13f2a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 900), bits); }
    // 0x13f2a4: 0xe6030388  swc1        $f3, 0x388($s0)
    ctx->pc = 0x13f2a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 904), bits); }
    // 0x13f2a8: 0x6a02038b  ldl         $v0, 0x38B($s0)
    ctx->pc = 0x13f2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 907); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13f2ac: 0x6e020384  ldr         $v0, 0x384($s0)
    ctx->pc = 0x13f2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 900); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x13f2b0: 0x8e03038c  lw          $v1, 0x38C($s0)
    ctx->pc = 0x13f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
    // 0x13f2b4: 0xb2020397  sdl         $v0, 0x397($s0)
    ctx->pc = 0x13f2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 919); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13f2b8: 0xb6020390  sdr         $v0, 0x390($s0)
    ctx->pc = 0x13f2b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 912); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13f2bc: 0xae030398  sw          $v1, 0x398($s0)
    ctx->pc = 0x13f2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 3));
    // 0x13f2c0: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x13f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x13f2c4: 0xe6050394  swc1        $f5, 0x394($s0)
    ctx->pc = 0x13f2c4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 916), bits); }
    // 0x13f2c8: 0xae00039c  sw          $zero, 0x39C($s0)
    ctx->pc = 0x13f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
    // 0x13f2cc: 0xae0003a0  sw          $zero, 0x3A0($s0)
    ctx->pc = 0x13f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
    // 0x13f2d0: 0xae0003a4  sw          $zero, 0x3A4($s0)
    ctx->pc = 0x13f2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 0));
    // 0x13f2d4: 0x6a06038b  ldl         $a2, 0x38B($s0)
    ctx->pc = 0x13f2d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 907); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13f2d8: 0x6e060384  ldr         $a2, 0x384($s0)
    ctx->pc = 0x13f2d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 900); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13f2dc: 0x8e03038c  lw          $v1, 0x38C($s0)
    ctx->pc = 0x13f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
    // 0x13f2e0: 0xb0460037  sdl         $a2, 0x37($v0)
    ctx->pc = 0x13f2e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13f2e4: 0xb4460030  sdr         $a2, 0x30($v0)
    ctx->pc = 0x13f2e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13f2e8: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x13f2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x13f2ec: 0x8e05032c  lw          $a1, 0x32C($s0)
    ctx->pc = 0x13f2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x13f2f0: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x13F2F0u;
    {
        const bool branch_taken_0x13f2f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2F0u;
        // 0x13f2f4: 0x8cb20024  lw          $s2, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2f0) {
            ctx->pc = 0x13F348u;
            goto label_13f348;
        }
    }
    ctx->pc = 0x13F2F8u;
    // 0x13f2f8: 0x52400014  beql        $s2, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x13F2F8u;
    {
        const bool branch_taken_0x13f2f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f2f8) {
            ctx->pc = 0x13F2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F2F8u;
            // 0x13f2fc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F34Cu;
            goto label_13f34c;
        }
    }
    ctx->pc = 0x13F300u;
    // 0x13f300: 0xc066512  jal         func_199448
    ctx->pc = 0x13F300u;
    SET_GPR_U32(ctx, 31, 0x13F308u);
    ctx->pc = 0x13F304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F300u;
    // 0x13f304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199448u, 0x13F300u, 0x13F308u)) {
        return;
    }
    ctx->pc = 0x13F308u;
label_13f308:
    // 0x13f308: 0x8e05032c  lw          $a1, 0x32C($s0)
    ctx->pc = 0x13f308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x13f30c: 0xc06640a  jal         func_199028
    ctx->pc = 0x13F30Cu;
    SET_GPR_U32(ctx, 31, 0x13F314u);
    ctx->pc = 0x13F310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F30Cu;
    // 0x13f310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199028u, 0x13F30Cu, 0x13F314u)) {
        return;
    }
    ctx->pc = 0x13F314u;
label_13f314:
    // 0x13f314: 0x8e040328  lw          $a0, 0x328($s0)
    ctx->pc = 0x13f314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x13f318: 0xc0aaf06  jal         func_2ABC18
    ctx->pc = 0x13F318u;
    SET_GPR_U32(ctx, 31, 0x13F320u);
    ctx->pc = 0x13F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F318u;
    // 0x13f31c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABC18u, 0x13F318u, 0x13F320u)) {
        return;
    }
    ctx->pc = 0x13F320u;
label_13f320:
    // 0x13f320: 0x8e06032c  lw          $a2, 0x32C($s0)
    ctx->pc = 0x13f320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x13f324: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13f324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f32c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x13f32cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13f330: 0xc06656c  jal         func_1995B0
    ctx->pc = 0x13F330u;
    SET_GPR_U32(ctx, 31, 0x13F338u);
    ctx->pc = 0x13F334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F330u;
    // 0x13f334: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1995B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1995B0u, 0x13F330u, 0x13F338u)) {
        return;
    }
    ctx->pc = 0x13F338u;
label_13f338:
    // 0x13f338: 0x8e05032c  lw          $a1, 0x32C($s0)
    ctx->pc = 0x13f338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x13f33c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f340: 0xc066318  jal         func_198C60
    ctx->pc = 0x13F340u;
    SET_GPR_U32(ctx, 31, 0x13F348u);
    ctx->pc = 0x13F344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F340u;
    // 0x13f344: 0x26060044  addiu       $a2, $s0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198C60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x198C60u, 0x13F340u, 0x13F348u)) {
        return;
    }
    ctx->pc = 0x13F348u;
label_13f348:
    // 0x13f348: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x13f348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13f34c:
    // 0x13f34c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x13f34cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13f350: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13f350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f354: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13f354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f358: 0x3e00008  jr          $ra
    ctx->pc = 0x13F358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F358u;
        // 0x13f35c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F360u;
    // 0x13f360: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13f360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13f364: 0x0  nop
    ctx->pc = 0x13f364u;
    // NOP
    ctx->pc = 0x13f368u;
}
