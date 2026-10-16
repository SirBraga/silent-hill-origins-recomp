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

// Function: sub_00116230
// Address: 0x116230 - 0x1163d8
void sub_00116230_0x116230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116230_0x116230");
#endif

    switch (ctx->pc) {
        case 0x1162a8u: goto label_1162a8;
        default: break;
    }

    ctx->pc = 0x116230u;

    // 0x116230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x116230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x116234: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x116234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x116238: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x116238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11623c: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x11623cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x116240: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x116240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x116244: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x116244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x116248: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x116248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11624c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x11624cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116250: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x116250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x116254: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x116254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x116258: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x116258u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x11625c: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x11625cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x116260: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x116260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116264: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x116264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116268: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x116268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11626c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x11626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116270: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x116270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x116274: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x116274u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x116278: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x116278u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x11627c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x11627cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x116280: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x116280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x116284: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x116284u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x116288: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x116288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x11628c: 0x8c830208  lw          $v1, 0x208($a0)
    ctx->pc = 0x11628cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 520)));
    // 0x116290: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x116290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116294: 0x8c820204  lw          $v0, 0x204($a0)
    ctx->pc = 0x116294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x116298: 0x1840004c  blez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x116298u;
    {
        const bool branch_taken_0x116298 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116298u;
        // 0x11629c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116298) {
            ctx->pc = 0x1163CCu;
            goto label_1163cc;
        }
    }
    ctx->pc = 0x1162A0u;
    // 0x1162a0: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1162a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1162a4: 0x0  nop
    ctx->pc = 0x1162a4u;
    // NOP
label_1162a8:
    // 0x1162a8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1162a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1162ac: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1162acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1162b0: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x1162b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1162b4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1162b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1162b8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1162b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1162bc: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1162bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1162c0: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x1162c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1162c4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1162c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1162c8: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x1162c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1162cc: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1162ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1162d0: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x1162d0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x1162d4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1162d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1162d8: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x1162d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1162dc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1162dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1162e0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1162e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1162e4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1162e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1162e8: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x1162e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1162ec: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x1162ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x1162f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1162f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1162f4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1162f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1162f8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1162f8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1162fc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1162fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x116300: 0x0  nop
    ctx->pc = 0x116300u;
    // NOP
    // 0x116304: 0x0  nop
    ctx->pc = 0x116304u;
    // NOP
    // 0x116308: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x116308u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x11630c: 0x46043834  c.lt.s      $f7, $f4
    ctx->pc = 0x11630cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116310: 0x0  nop
    ctx->pc = 0x116310u;
    // NOP
    // 0x116314: 0x45020029  bc1fl       . + 4 + (0x29 << 2)
    ctx->pc = 0x116314u;
    {
        const bool branch_taken_0x116314 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x116314) {
            ctx->pc = 0x116318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116314u;
            // 0x116318: 0x8c820204  lw          $v0, 0x204($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1163BCu;
            goto label_1163bc;
        }
    }
    ctx->pc = 0x11631Cu;
    // 0x11631c: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x11631cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x116320: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x116320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x116324: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x116324u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x116328: 0xb3a80027  sdl         $t0, 0x27($sp)
    ctx->pc = 0x116328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11632c: 0xb7a80020  sdr         $t0, 0x20($sp)
    ctx->pc = 0x11632cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116330: 0xafa90028  sw          $t1, 0x28($sp)
    ctx->pc = 0x116330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 9));
    // 0x116334: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x116334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116338: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x116338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11633c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x11633cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x116340: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x116340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116344: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x116344u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x116348: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x116348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11634c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x11634cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x116350: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x116350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x116354: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x116354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x116358: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x116358u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x11635c: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x11635cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x116360: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x116360u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x116364: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x116364u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x116368: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x116368u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x11636c: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x11636cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x116370: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x116370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116374: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x116374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116378: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x116378u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11637c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x11637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116380: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x116380u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x116384: 0xc463001c  lwc1        $f3, 0x1C($v1)
    ctx->pc = 0x116384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116388: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x116388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x11638c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x11638cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x116390: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x116390u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x116394: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x116394u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116398: 0x0  nop
    ctx->pc = 0x116398u;
    // NOP
    // 0x11639c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x11639Cu;
    {
        const bool branch_taken_0x11639c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11639c) {
            ctx->pc = 0x1163A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11639Cu;
            // 0x1163a0: 0x8c820204  lw          $v0, 0x204($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1163BCu;
            goto label_1163bc;
        }
    }
    ctx->pc = 0x1163A4u;
    // 0x1163a4: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1163a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1163a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1163a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1163ac: 0x0  nop
    ctx->pc = 0x1163acu;
    // NOP
    // 0x1163b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1163B0u;
    {
        const bool branch_taken_0x1163b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1163b0) {
            ctx->pc = 0x1163B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1163B0u;
            // 0x1163b4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1163B8u;
            goto label_1163b8;
        }
    }
    ctx->pc = 0x1163B8u;
label_1163b8:
    // 0x1163b8: 0x8c820204  lw          $v0, 0x204($a0)
    ctx->pc = 0x1163b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 516)));
label_1163bc:
    // 0x1163bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1163bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1163c0: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x1163c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1163c4: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x1163C4u;
    {
        const bool branch_taken_0x1163c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1163C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163C4u;
        // 0x1163c8: 0x2463003c  addiu       $v1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163c4) {
            ctx->pc = 0x1162A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1162a8;
        }
    }
    ctx->pc = 0x1163CCu;
label_1163cc:
    // 0x1163cc: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x1163ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1163d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1163D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1163D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163D0u;
        // 0x1163d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1163D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1163D8u;
}
