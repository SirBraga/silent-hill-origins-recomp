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

// Function: sub_001172B0
// Address: 0x1172b0 - 0x117448
void sub_001172B0_0x1172b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001172B0_0x1172b0");
#endif

    switch (ctx->pc) {
        case 0x117300u: goto label_117300;
        case 0x117310u: goto label_117310;
        case 0x117338u: goto label_117338;
        case 0x11739cu: goto label_11739c;
        case 0x117400u: goto label_117400;
        case 0x117410u: goto label_117410;
        case 0x117424u: goto label_117424;
        case 0x117434u: goto label_117434;
        default: break;
    }

    ctx->pc = 0x1172b0u;

    // 0x1172b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1172b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1172b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1172b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1172b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1172b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1172bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1172bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1172c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1172c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1172c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172c8: 0xc62001f4  lwc1        $f0, 0x1F4($s1)
    ctx->pc = 0x1172c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1172cc: 0xc62100ec  lwc1        $f1, 0xEC($s1)
    ctx->pc = 0x1172ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1172d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1172d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1172d4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1172d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1172d8: 0xc62000f0  lwc1        $f0, 0xF0($s1)
    ctx->pc = 0x1172d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1172dc: 0xc62101f8  lwc1        $f1, 0x1F8($s1)
    ctx->pc = 0x1172dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1172e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1172e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1172e4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1172e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1172e8: 0xc62001fc  lwc1        $f0, 0x1FC($s1)
    ctx->pc = 0x1172e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1172ec: 0xc62100f4  lwc1        $f1, 0xF4($s1)
    ctx->pc = 0x1172ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1172f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1172f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1172f4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1172f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1172f8: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x1172F8u;
    SET_GPR_U32(ctx, 31, 0x117300u);
    ctx->pc = 0x1172FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1172F8u;
    // 0x1172fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1172F8u, 0x117300u)) {
        return;
    }
    ctx->pc = 0x117300u;
label_117300:
    // 0x117300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117304: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x117304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117308: 0xc093b0a  jal         func_24EC28
    ctx->pc = 0x117308u;
    SET_GPR_U32(ctx, 31, 0x117310u);
    ctx->pc = 0x11730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117308u;
    // 0x11730c: 0x26260150  addiu       $a2, $s1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x117308u, 0x117310u)) {
        return;
    }
    ctx->pc = 0x117310u;
label_117310:
    // 0x117310: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x117310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x117314: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x117314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x117318: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x117318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11731c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x11731cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117320: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x117320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117324: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x117324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x117328: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x117328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11732c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11732cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x117330: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x117330u;
    SET_GPR_U32(ctx, 31, 0x117338u);
    ctx->pc = 0x117334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117330u;
    // 0x117334: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x117330u, 0x117338u)) {
        return;
    }
    ctx->pc = 0x117338u;
label_117338:
    // 0x117338: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x117338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11733c: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x11733cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x117340: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x117340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x117344: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x117344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x117348: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x117348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x11734c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x11734cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x117350: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x117350u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x117354: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x117354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x117358: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x117358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x11735c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x11735cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x117360: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117364: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x117364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x117368: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x117368u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11736c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11736cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x117370: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x117370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x117374: 0x0  nop
    ctx->pc = 0x117374u;
    // NOP
    // 0x117378: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x117378u;
    {
        const bool branch_taken_0x117378 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117378u;
        // 0x11737c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117378) {
            ctx->pc = 0x1173C8u;
            goto label_1173c8;
        }
    }
    ctx->pc = 0x117380u;
    // 0x117380: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x117380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x117384: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x117384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x117388: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11738c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11738cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117390: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x117390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x117394: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x117394u;
    SET_GPR_U32(ctx, 31, 0x11739Cu);
    ctx->pc = 0x117398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117394u;
    // 0x117398: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x117394u, 0x11739Cu)) {
        return;
    }
    ctx->pc = 0x11739Cu;
label_11739c:
    // 0x11739c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x11739cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1173a0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1173a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1173a4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1173a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1173a8: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x1173a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1173ac: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1173acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1173b0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1173b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1173b4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1173b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1173b8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1173b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1173bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1173bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1173c0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1173c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1173c4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1173c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1173c8:
    // 0x1173c8: 0xc6200264  lwc1        $f0, 0x264($s1)
    ctx->pc = 0x1173c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1173cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1173ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1173d0: 0x0  nop
    ctx->pc = 0x1173d0u;
    // NOP
    // 0x1173d4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1173D4u;
    {
        const bool branch_taken_0x1173d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1173D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173D4u;
        // 0x1173d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173d4) {
            ctx->pc = 0x117428u;
            goto label_117428;
        }
    }
    ctx->pc = 0x1173DCu;
    // 0x1173dc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1173dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1173e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1173e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1173e4: 0x0  nop
    ctx->pc = 0x1173e4u;
    // NOP
    // 0x1173e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1173e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1173ec: 0x0  nop
    ctx->pc = 0x1173ecu;
    // NOP
    // 0x1173f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1173F0u;
    {
        const bool branch_taken_0x1173f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1173f0) {
            ctx->pc = 0x117408u;
            goto label_117408;
        }
    }
    ctx->pc = 0x1173F8u;
    // 0x1173f8: 0xc09b1a0  jal         func_26C680
    ctx->pc = 0x1173F8u;
    SET_GPR_U32(ctx, 31, 0x117400u);
    ctx->pc = 0x1173FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1173F8u;
    // 0x1173fc: 0xc62c0260  lwc1        $f12, 0x260($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x1173F8u, 0x117400u)) {
        return;
    }
    ctx->pc = 0x117400u;
label_117400:
    // 0x117400: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x117400u;
    {
        const bool branch_taken_0x117400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117400u;
        // 0x117404: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117400) {
            ctx->pc = 0x117418u;
            goto label_117418;
        }
    }
    ctx->pc = 0x117408u;
label_117408:
    // 0x117408: 0xc09b1a0  jal         func_26C680
    ctx->pc = 0x117408u;
    SET_GPR_U32(ctx, 31, 0x117410u);
    ctx->pc = 0x11740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117408u;
    // 0x11740c: 0xc62c0260  lwc1        $f12, 0x260($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x117408u, 0x117410u)) {
        return;
    }
    ctx->pc = 0x117410u;
label_117410:
    // 0x117410: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x117410u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x117414: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x117414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_117418:
    // 0x117418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11741c: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11741Cu;
    SET_GPR_U32(ctx, 31, 0x117424u);
    ctx->pc = 0x117420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11741Cu;
    // 0x117420: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11741Cu, 0x117424u)) {
        return;
    }
    ctx->pc = 0x117424u;
label_117424:
    // 0x117424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117428:
    // 0x117428: 0x26260110  addiu       $a2, $s1, 0x110
    ctx->pc = 0x117428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x11742c: 0xc093b0a  jal         func_24EC28
    ctx->pc = 0x11742Cu;
    SET_GPR_U32(ctx, 31, 0x117434u);
    ctx->pc = 0x117430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11742Cu;
    // 0x117430: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x11742Cu, 0x117434u)) {
        return;
    }
    ctx->pc = 0x117434u;
label_117434:
    // 0x117434: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x117434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117438: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x117438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11743c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11743cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117440: 0x3e00008  jr          $ra
    ctx->pc = 0x117440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117440u;
        // 0x117444: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117448u;
}
