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

// Function: sub_001E8270
// Address: 0x1e8270 - 0x1e86d8
void sub_001E8270_0x1e8270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8270_0x1e8270");
#endif

    switch (ctx->pc) {
        case 0x1e82e4u: goto label_1e82e4;
        case 0x1e82f8u: goto label_1e82f8;
        case 0x1e8354u: goto label_1e8354;
        case 0x1e8360u: goto label_1e8360;
        case 0x1e8470u: goto label_1e8470;
        case 0x1e84b0u: goto label_1e84b0;
        case 0x1e84c0u: goto label_1e84c0;
        case 0x1e84fcu: goto label_1e84fc;
        case 0x1e8520u: goto label_1e8520;
        case 0x1e8534u: goto label_1e8534;
        case 0x1e854cu: goto label_1e854c;
        default: break;
    }

    ctx->pc = 0x1e8270u;

    // 0x1e8270: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1e8270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1e8274: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1e8274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1e8278: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1e8278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x1e827c: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x1e827cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1e8280: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1e8280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8284: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1e8284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1e8288: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1e8288u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1e828c: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x1e828cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x1e8290: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x1e8290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x1e8294: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x1e8294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x1e8298: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x1e8298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x1e829c: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x1e829cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x1e82a0: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1e82a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x1e82a4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1e82a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1e82a8: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x1e82a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1e82ac: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x1e82acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1e82b0: 0xafa60084  sw          $a2, 0x84($sp)
    ctx->pc = 0x1e82b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 6));
    // 0x1e82b4: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1e82b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x1e82b8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1e82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1e82bc: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x1e82bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
    // 0x1e82c0: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1e82c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x1e82c4: 0x8cd60014  lw          $s6, 0x14($a2)
    ctx->pc = 0x1e82c4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1e82c8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1e82c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1e82cc: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x1e82ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e82d0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E82D0u;
    {
        const bool branch_taken_0x1e82d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E82D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E82D0u;
        // 0x1e82d4: 0xafa30094  sw          $v1, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e82d0) {
            ctx->pc = 0x1E8300u;
            goto label_1e8300;
        }
    }
    ctx->pc = 0x1E82D8u;
    // 0x1e82d8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1e82d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e82dc: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x1E82DCu;
    SET_GPR_U32(ctx, 31, 0x1E82E4u);
    ctx->pc = 0x1E82E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E82DCu;
    // 0x1e82e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x1E82DCu, 0x1E82E4u)) {
        return;
    }
    ctx->pc = 0x1E82E4u;
label_1e82e4:
    // 0x1e82e4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1e82e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1e82e8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e82e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e82ec: 0x24a5e798  addiu       $a1, $a1, -0x1868
    ctx->pc = 0x1e82ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961048));
    // 0x1e82f0: 0xc093b0a  jal         func_24EC28
    ctx->pc = 0x1E82F0u;
    SET_GPR_U32(ctx, 31, 0x1E82F8u);
    ctx->pc = 0x1E82F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E82F0u;
    // 0x1e82f4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x1E82F0u, 0x1E82F8u)) {
        return;
    }
    ctx->pc = 0x1E82F8u;
label_1e82f8:
    // 0x1e82f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E82F8u;
    {
        const bool branch_taken_0x1e82f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E82FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E82F8u;
        // 0x1e82fc: 0x8fa40084  lw          $a0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e82f8) {
            ctx->pc = 0x1E8324u;
            goto label_1e8324;
        }
    }
    ctx->pc = 0x1E8300u;
label_1e8300:
    // 0x1e8300: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e8300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e8304: 0x2443e798  addiu       $v1, $v0, -0x1868
    ctx->pc = 0x1e8304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961048));
    // 0x1e8308: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x1e8308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e830c: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x1e830cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e8310: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1e8310u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33E7A0u));
    // 0x1e8314: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x1e8314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e8318: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x1e8318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e831c: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x1e831cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x1e8320: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x1e8320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_1e8324:
    // 0x1e8324: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e8324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8328: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x1e8328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x1e832c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e832cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e8330: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1e8330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8334: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e8334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8338: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1e8338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1e833c: 0x8e520024  lw          $s2, 0x24($s2)
    ctx->pc = 0x1e833cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e8340: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x1e8340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x1e8344: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e8344u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e8348: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e8348u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e834c: 0xc07a71a  jal         func_1E9C68
    ctx->pc = 0x1E834Cu;
    SET_GPR_U32(ctx, 31, 0x1E8354u);
    ctx->pc = 0x1E8350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E834Cu;
    // 0x1e8350: 0xafb20098  sw          $s2, 0x98($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E9C68u, 0x1E834Cu, 0x1E8354u)) {
        return;
    }
    ctx->pc = 0x1E8354u;
label_1e8354:
    // 0x1e8354: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1e8354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1e8358: 0x184000cc  blez        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x1E8358u;
    {
        const bool branch_taken_0x1e8358 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8358u;
        // 0x1e835c: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8358) {
            ctx->pc = 0x1E868Cu;
            goto label_1e868c;
        }
    }
    ctx->pc = 0x1E8360u;
label_1e8360:
    // 0x1e8360: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1e8360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8364: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1e8364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8368: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e8368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e836c: 0x0  nop
    ctx->pc = 0x1e836cu;
    // NOP
    // 0x1e8370: 0x450000c1  bc1f        . + 4 + (0xC1 << 2)
    ctx->pc = 0x1E8370u;
    {
        const bool branch_taken_0x1e8370 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8370u;
        // 0x1e8374: 0x261e0001  addiu       $fp, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8370) {
            ctx->pc = 0x1E8678u;
            goto label_1e8678;
        }
    }
    ctx->pc = 0x1E8378u;
    // 0x1e8378: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1e8378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e837c: 0x46150800  add.s       $f0, $f1, $f21
    ctx->pc = 0x1e837cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x1e8380: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e8380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e8384: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x1e8384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x1e8388: 0xe6c0001c  swc1        $f0, 0x1C($s6)
    ctx->pc = 0x1e8388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 28), bits); }
    // 0x1e838c: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x1e838cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8390: 0xe6c10020  swc1        $f1, 0x20($s6)
    ctx->pc = 0x1e8390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 32), bits); }
    // 0x1e8394: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x1e8394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8398: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e8398u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e839c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1e839cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e83a0: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E83A0u;
    {
        const bool branch_taken_0x1e83a0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1E83A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83A0u;
        // 0x1e83a4: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e83a0) {
            ctx->pc = 0x1E83BCu;
            goto label_1e83bc;
        }
    }
    ctx->pc = 0x1E83A8u;
    // 0x1e83a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1e83a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1e83ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e83acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e83b0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1e83b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e83b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E83B4u;
    {
        const bool branch_taken_0x1e83b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83B4u;
        // 0x1e83b8: 0x8fa50080  lw          $a1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e83b4) {
            ctx->pc = 0x1E83CCu;
            goto label_1e83cc;
        }
    }
    ctx->pc = 0x1E83BCu;
label_1e83bc:
    // 0x1e83bc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1e83bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e83c0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1e83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1e83c4: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1e83c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e83c8: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1e83c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1e83cc:
    // 0x1e83cc: 0x4616a802  mul.s       $f0, $f21, $f22
    ctx->pc = 0x1e83ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x1e83d0: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x1e83d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e83d4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1e83d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e83d8: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x1e83d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1e83dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e83dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e83e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e83e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e83e4: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x1e83e4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e83e8: 0xc6e10014  lwc1        $f1, 0x14($s7)
    ctx->pc = 0x1e83e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e83ec: 0xe6c00024  swc1        $f0, 0x24($s6)
    ctx->pc = 0x1e83ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 36), bits); }
    // 0x1e83f0: 0x4601ad02  mul.s       $f20, $f21, $f1
    ctx->pc = 0x1e83f0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1e83f4: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x1e83f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e83f8: 0xe6c00028  swc1        $f0, 0x28($s6)
    ctx->pc = 0x1e83f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 40), bits); }
    // 0x1e83fc: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x1e83fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8400: 0xe6c1002c  swc1        $f1, 0x2C($s6)
    ctx->pc = 0x1e8400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 44), bits); }
    // 0x1e8404: 0xc6e40018  lwc1        $f4, 0x18($s7)
    ctx->pc = 0x1e8404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e8408: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x1e8408u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x1e840c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1e840cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8410: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1e8410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1e8414: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1e8414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8418: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x1e8418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e841c: 0xc6230018  lwc1        $f3, 0x18($s1)
    ctx->pc = 0x1e841cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e8420: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e8420u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e8424: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x1e8424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1e8428: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1e8428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e842c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1e842cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1e8430: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1e8430u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e8434: 0xe6220014  swc1        $f2, 0x14($s1)
    ctx->pc = 0x1e8434u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1e8438: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1e8438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e843c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1e843cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1e8440: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1e8440u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1e8444: 0xe6230018  swc1        $f3, 0x18($s1)
    ctx->pc = 0x1e8444u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1e8448: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x1e8448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1e844c: 0x8cc2006c  lw          $v0, 0x6C($a2)
    ctx->pc = 0x1e844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
    // 0x1e8450: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1E8450u;
    {
        const bool branch_taken_0x1e8450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8450u;
        // 0x1e8454: 0x261e0001  addiu       $fp, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8450) {
            ctx->pc = 0x1E85B0u;
            goto label_1e85b0;
        }
    }
    ctx->pc = 0x1E8458u;
    // 0x1e8458: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x1e8458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1e845c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E845Cu;
    {
        const bool branch_taken_0x1e845c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E845Cu;
        // 0x1e8460: 0x8fa60088  lw          $a2, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e845c) {
            ctx->pc = 0x1E8478u;
            goto label_1e8478;
        }
    }
    ctx->pc = 0x1E8464u;
    // 0x1e8464: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e8464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e8468: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x1E8468u;
    SET_GPR_U32(ctx, 31, 0x1E8470u);
    ctx->pc = 0x1E846Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8468u;
    // 0x1e846c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x1E8468u, 0x1E8470u)) {
        return;
    }
    ctx->pc = 0x1E8470u;
label_1e8470:
    // 0x1e8470: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8470u;
    {
        const bool branch_taken_0x1e8470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8470u;
        // 0x1e8474: 0x8fa30098  lw          $v1, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8470) {
            ctx->pc = 0x1E8494u;
            goto label_1e8494;
        }
    }
    ctx->pc = 0x1E8478u;
label_1e8478:
    // 0x1e8478: 0x6a230007  ldl         $v1, 0x7($s1)
    ctx->pc = 0x1e8478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1e847c: 0x6e230000  ldr         $v1, 0x0($s1)
    ctx->pc = 0x1e847cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1e8480: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1e8480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e8484: 0xb3a30057  sdl         $v1, 0x57($sp)
    ctx->pc = 0x1e8484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e8488: 0xb7a30050  sdr         $v1, 0x50($sp)
    ctx->pc = 0x1e8488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e848c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1e848cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1e8490: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1e8490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1e8494:
    // 0x1e8494: 0x261e0001  addiu       $fp, $s0, 0x1
    ctx->pc = 0x1e8494u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e8498: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1e8498u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e849c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1e849cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e84a0: 0x18400043  blez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1E84A0u;
    {
        const bool branch_taken_0x1e84a0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E84A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84A0u;
        // 0x1e84a4: 0x8c730070  lw          $s3, 0x70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e84a0) {
            ctx->pc = 0x1E85B0u;
            goto label_1e85b0;
        }
    }
    ctx->pc = 0x1E84A8u;
    // 0x1e84a8: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x1e84a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e84ac: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1e84acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e84b0:
    // 0x1e84b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e84b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e84b4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1e84b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e84b8: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x1E84B8u;
    SET_GPR_U32(ctx, 31, 0x1E84C0u);
    ctx->pc = 0x1E84BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E84B8u;
    // 0x1e84bc: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x1E84B8u, 0x1E84C0u)) {
        return;
    }
    ctx->pc = 0x1E84C0u;
label_1e84c0:
    // 0x1e84c0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1e84c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e84c4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1e84c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e84c8: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E84C8u;
    {
        const bool branch_taken_0x1e84c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E84CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84C8u;
        // 0x1e84cc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e84c8) {
            ctx->pc = 0x1E84E0u;
            goto label_1e84e0;
        }
    }
    ctx->pc = 0x1E84D0u;
    // 0x1e84d0: 0x1045000c  beq         $v0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1E84D0u;
    {
        const bool branch_taken_0x1e84d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1E84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84D0u;
        // 0x1e84d4: 0x27b00070  addiu       $s0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e84d0) {
            ctx->pc = 0x1E8504u;
            goto label_1e8504;
        }
    }
    ctx->pc = 0x1E84D8u;
    // 0x1e84d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E84D8u;
    {
        const bool branch_taken_0x1e84d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E84DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84D8u;
        // 0x1e84dc: 0x8e66000c  lw          $a2, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e84d8) {
            ctx->pc = 0x1E8528u;
            goto label_1e8528;
        }
    }
    ctx->pc = 0x1E84E0u;
label_1e84e0:
    // 0x1e84e0: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x1e84e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e84e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e84e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e84e8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e84e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e84ec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e84ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e84f0: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1e84f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1e84f4: 0xc07a782  jal         func_1E9E08
    ctx->pc = 0x1E84F4u;
    SET_GPR_U32(ctx, 31, 0x1E84FCu);
    ctx->pc = 0x1E84F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E84F4u;
    // 0x1e84f8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E9E08u, 0x1E84F4u, 0x1E84FCu)) {
        return;
    }
    ctx->pc = 0x1E84FCu;
label_1e84fc:
    // 0x1e84fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E84FCu;
    {
        const bool branch_taken_0x1e84fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84FCu;
        // 0x1e8500: 0x27b00070  addiu       $s0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e84fc) {
            ctx->pc = 0x1E8524u;
            goto label_1e8524;
        }
    }
    ctx->pc = 0x1E8504u;
label_1e8504:
    // 0x1e8504: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x1e8504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8508: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e8508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e850c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e850cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e8510: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e8510u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e8514: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1e8514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1e8518: 0xc07a7ae  jal         func_1E9EB8
    ctx->pc = 0x1E8518u;
    SET_GPR_U32(ctx, 31, 0x1E8520u);
    ctx->pc = 0x1E851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8518u;
    // 0x1e851c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E9EB8u, 0x1E8518u, 0x1E8520u)) {
        return;
    }
    ctx->pc = 0x1E8520u;
label_1e8520:
    // 0x1e8520: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x1e8520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e8524:
    // 0x1e8524: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x1e8524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1e8528:
    // 0x1e8528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e852c: 0xc093b0a  jal         func_24EC28
    ctx->pc = 0x1E852Cu;
    SET_GPR_U32(ctx, 31, 0x1E8534u);
    ctx->pc = 0x1E8530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E852Cu;
    // 0x1e8530: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x1E852Cu, 0x1E8534u)) {
        return;
    }
    ctx->pc = 0x1E8534u;
label_1e8534:
    // 0x1e8534: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x1e8534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1e8538: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8538u;
    {
        const bool branch_taken_0x1e8538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8538u;
        // 0x1e853c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8538) {
            ctx->pc = 0x1E854Cu;
            goto label_1e854c;
        }
    }
    ctx->pc = 0x1E8540u;
    // 0x1e8540: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e8540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8544: 0xc093b0a  jal         func_24EC28
    ctx->pc = 0x1E8544u;
    SET_GPR_U32(ctx, 31, 0x1E854Cu);
    ctx->pc = 0x1E8548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8544u;
    // 0x1e8548: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x1E8544u, 0x1E854Cu)) {
        return;
    }
    ctx->pc = 0x1E854Cu;
label_1e854c:
    // 0x1e854c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1e854cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1e8550: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e8550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e8554: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1e8554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8558: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x1e8558u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x1e855c: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x1e855cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8560: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x1e8560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8564: 0xc6440018  lwc1        $f4, 0x18($s2)
    ctx->pc = 0x1e8564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e8568: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1e8568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e856c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e856cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e8570: 0xe6410010  swc1        $f1, 0x10($s2)
    ctx->pc = 0x1e8570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1e8574: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1e8574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8578: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1e8578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e857c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1e857cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e8580: 0xe6420014  swc1        $f2, 0x14($s2)
    ctx->pc = 0x1e8580u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1e8584: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1e8584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8588: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1e8588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e858c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1e858cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1e8590: 0xe6440018  swc1        $f4, 0x18($s2)
    ctx->pc = 0x1e8590u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x1e8594: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1e8594u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1e8598: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1e8598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1e859c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1e859cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e85a0: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1e85a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e85a4: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1E85A4u;
    {
        const bool branch_taken_0x1e85a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E85A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85A4u;
        // 0x1e85a8: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e85a4) {
            ctx->pc = 0x1E84B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e84b0;
        }
    }
    ctx->pc = 0x1E85ACu;
    // 0x1e85ac: 0x0  nop
    ctx->pc = 0x1e85acu;
    // NOP
label_1e85b0:
    // 0x1e85b0: 0xc6e0001c  lwc1        $f0, 0x1C($s7)
    ctx->pc = 0x1e85b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e85b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e85b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e85b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e85b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e85bc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e85bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e85c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e85c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e85c4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1e85c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e85c8: 0x0  nop
    ctx->pc = 0x1e85c8u;
    // NOP
    // 0x1e85cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E85CCu;
    {
        const bool branch_taken_0x1e85cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e85cc) {
            ctx->pc = 0x1E85D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E85CCu;
            // 0x1e85d0: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E85D4u;
            goto label_1e85d4;
        }
    }
    ctx->pc = 0x1E85D4u;
label_1e85d4:
    // 0x1e85d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e85d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e85d8: 0x0  nop
    ctx->pc = 0x1e85d8u;
    // NOP
    // 0x1e85dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E85DCu;
    {
        const bool branch_taken_0x1e85dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e85dc) {
            ctx->pc = 0x1E85E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E85DCu;
            // 0x1e85e0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E85E4u;
            goto label_1e85e4;
        }
    }
    ctx->pc = 0x1E85E4u;
label_1e85e4:
    // 0x1e85e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e85e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e85e8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1e85e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1e85ec: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1e85ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1e85f0: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x1e85f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e85f4: 0xc6230014  lwc1        $f3, 0x14($s1)
    ctx->pc = 0x1e85f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e85f8: 0x46001142  mul.s       $f5, $f2, $f0
    ctx->pc = 0x1e85f8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1e85fc: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1e85fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8600: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x1e8600u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1e8604: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e8604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e8608: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1e8608u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1e860c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x1e860cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1e8610: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e8610u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e8614: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x1e8614u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1e8618: 0xe6230014  swc1        $f3, 0x14($s1)
    ctx->pc = 0x1e8618u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1e861c: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x1e861cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1e8620: 0x6a240017  ldl         $a0, 0x17($s1)
    ctx->pc = 0x1e8620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e8624: 0x6e240010  ldr         $a0, 0x10($s1)
    ctx->pc = 0x1e8624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e8628: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x1e8628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1e862c: 0xb2c40017  sdl         $a0, 0x17($s6)
    ctx->pc = 0x1e862cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e8630: 0xb6c40010  sdr         $a0, 0x10($s6)
    ctx->pc = 0x1e8630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e8634: 0xaec50018  sw          $a1, 0x18($s6)
    ctx->pc = 0x1e8634u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 5));
    // 0x1e8638: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1e8638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e863c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1e863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8640: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1e8640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1e8644: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e8644u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e8648: 0xe6c10000  swc1        $f1, 0x0($s6)
    ctx->pc = 0x1e8648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x1e864c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1e864cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8650: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1e8650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8654: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1e8654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1e8658: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e8658u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e865c: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x1e865cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x1e8660: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1e8660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8664: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1e8664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8668: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1e8668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1e866c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e866cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e8670: 0xe6c10008  swc1        $f1, 0x8($s6)
    ctx->pc = 0x1e8670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x1e8674: 0x8ed6003c  lw          $s6, 0x3C($s6)
    ctx->pc = 0x1e8674u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
label_1e8678:
    // 0x1e8678: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x1e8678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1e867c: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x1e867cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8680: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1e8680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e8684: 0x1440ff36  bnez        $v0, . + 4 + (-0xCA << 2)
    ctx->pc = 0x1E8684u;
    {
        const bool branch_taken_0x1e8684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8684u;
        // 0x1e8688: 0x8e31003c  lw          $s1, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8684) {
            ctx->pc = 0x1E8360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8360;
        }
    }
    ctx->pc = 0x1E868Cu;
label_1e868c:
    // 0x1e868c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1e868cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e8690: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x1e8690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1e8694: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1e8694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1e8698: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1e8698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1e869c: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1e869cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1e86a0: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x1e86a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e86a4: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x1e86a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e86a8: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x1e86a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e86ac: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x1e86acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e86b0: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x1e86b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e86b4: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1e86b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e86b8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1e86b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e86bc: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x1e86bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e86c0: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x1e86c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e86c4: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x1e86c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e86c8: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1e86c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1e86cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E86CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E86CCu;
        // 0x1e86d0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E86CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E86D4u;
    // 0x1e86d4: 0x0  nop
    ctx->pc = 0x1e86d4u;
    // NOP
    ctx->pc = 0x1e86d8u;
}
