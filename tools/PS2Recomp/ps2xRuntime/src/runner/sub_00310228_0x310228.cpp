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

// Function: sub_00310228
// Address: 0x310228 - 0x3103d8
void sub_00310228_0x310228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310228_0x310228");
#endif

    ctx->pc = 0x310228u;

    // 0x310228: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x310228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31022c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31022cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x310230: 0xc4860040  lwc1        $f6, 0x40($a0)
    ctx->pc = 0x310230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x310234: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x310234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310238: 0xc4850044  lwc1        $f5, 0x44($a0)
    ctx->pc = 0x310238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x31023c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x31023cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x310240: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x310240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x310244: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x310244u;
    {
        const bool branch_taken_0x310244 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x310248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310244u;
        // 0x310248: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310244) {
            ctx->pc = 0x31025Cu;
            goto label_31025c;
        }
    }
    ctx->pc = 0x31024Cu;
    // 0x31024c: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x31024cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x310250: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x310250u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x310254: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x310254u;
    {
        const bool branch_taken_0x310254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310254u;
        // 0x310258: 0xe7a50010  swc1        $f5, 0x10($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310254) {
            ctx->pc = 0x31031Cu;
            goto label_31031c;
        }
    }
    ctx->pc = 0x31025Cu;
label_31025c:
    // 0x31025c: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x31025Cu;
    {
        const bool branch_taken_0x31025c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x31025c) {
            ctx->pc = 0x310284u;
            goto label_310284;
        }
    }
    ctx->pc = 0x310264u;
    // 0x310264: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x310264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x310268: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x310268u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x31026c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31026cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x310270: 0x46000144  c1          0x144
    ctx->pc = 0x310270u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x310274: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x310274u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x310278: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x310278u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x31027c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x31027Cu;
    {
        const bool branch_taken_0x31027c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31027Cu;
        // 0x310280: 0xe7a50014  swc1        $f5, 0x14($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31027c) {
            ctx->pc = 0x31031Cu;
            goto label_31031c;
        }
    }
    ctx->pc = 0x310284u;
label_310284:
    // 0x310284: 0x68a30027  ldl         $v1, 0x27($a1)
    ctx->pc = 0x310284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x310288: 0x6ca30020  ldr         $v1, 0x20($a1)
    ctx->pc = 0x310288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x31028c: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x31028cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x310290: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x310290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310294: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x310294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310298: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x310298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x31029c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31029cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3102a0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3102a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3102a4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3102a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3102a8: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x3102a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3102ac: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x3102acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x3102b0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3102b0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x3102b4: 0x46000004  c1          0x4
    ctx->pc = 0x3102b4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x3102b8: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x3102b8u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x3102bc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x3102bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x3102c0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x3102c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3102c4: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x3102c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x3102c8: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x3102c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x3102cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3102ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3102d0: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x3102d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x3102d4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3102d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3102d8: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x3102d8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x3102dc: 0x46010044  c1          0x10044
    ctx->pc = 0x3102dcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[1]);
    // 0x3102e0: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x3102e0u;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
    // 0x3102e4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x3102e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x3102e8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3102e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3102ec: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x3102ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x3102f0: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x3102f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3102f4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3102f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3102f8: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x3102f8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x3102fc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x3102fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x310300: 0x46002105  abs.s       $f4, $f4
    ctx->pc = 0x310300u;
    ctx->f[4] = FPU_ABS_S(ctx->f[4]);
    // 0x310304: 0x46040104  c1          0x40104
    ctx->pc = 0x310304u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[4]);
    // 0x310308: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x310308u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x31030c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x31030cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x310310: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x310310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x310314: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x310314u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x310318: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x310318u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_31031c:
    // 0x31031c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x31031cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310320: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x310320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x310324: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x310324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x310328: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x310328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31032c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x31032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310330: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x310330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310334: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x310334u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x310338: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x310338u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x31033c: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x31033cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x310340: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x310340u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x310344: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x310344u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x310348: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x310348u;
    {
        const bool branch_taken_0x310348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310348u;
        // 0x31034c: 0xe7a50018  swc1        $f5, 0x18($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310348) {
            ctx->pc = 0x310398u;
            goto label_310398;
        }
    }
    ctx->pc = 0x310350u;
    // 0x310350: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x310350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310354: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x310354u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x310358: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x310358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x31035c: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x31035cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310360: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x310360u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x310364: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x310364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x310368: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x310368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31036c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x31036cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x310370: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x310370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x310374: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x310374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310378: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x310378u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x31037c: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x31037cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x310380: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x310380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310384: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x310384u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x310388: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x310388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x31038c: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x31038cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310390: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x310390u;
    {
        const bool branch_taken_0x310390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310390u;
        // 0x310394: 0x46050841  sub.s       $f1, $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310390) {
            ctx->pc = 0x3103C8u;
            goto label_3103c8;
        }
    }
    ctx->pc = 0x310398u;
label_310398:
    // 0x310398: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x310398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x31039c: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x31039cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3103a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3103a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3103a4: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x3103a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3103a8: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x3103a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3103ac: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x3103acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x3103b0: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x3103b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x3103b4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x3103b4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x3103b8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x3103b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x3103bc: 0x46002847  neg.s       $f1, $f5
    ctx->pc = 0x3103bcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
    // 0x3103c0: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x3103c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x3103c4: 0x0  nop
    ctx->pc = 0x3103c4u;
    // NOP
label_3103c8:
    // 0x3103c8: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x3103c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x3103cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3103CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3103D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103CCu;
        // 0x3103d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3103CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3103D4u;
    // 0x3103d4: 0x0  nop
    ctx->pc = 0x3103d4u;
    // NOP
    ctx->pc = 0x3103d8u;
}
