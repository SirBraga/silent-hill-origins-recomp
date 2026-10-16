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

// Function: sub_0028A320
// Address: 0x28a320 - 0x28a988
void sub_0028A320_0x28a320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A320_0x28a320");
#endif

    switch (ctx->pc) {
        case 0x28a36cu: goto label_28a36c;
        case 0x28a374u: goto label_28a374;
        case 0x28a3b0u: goto label_28a3b0;
        case 0x28a45cu: goto label_28a45c;
        case 0x28a47cu: goto label_28a47c;
        case 0x28a518u: goto label_28a518;
        case 0x28a570u: goto label_28a570;
        case 0x28a6a8u: goto label_28a6a8;
        case 0x28a834u: goto label_28a834;
        case 0x28a86cu: goto label_28a86c;
        case 0x28a89cu: goto label_28a89c;
        case 0x28a8a8u: goto label_28a8a8;
        case 0x28a8d0u: goto label_28a8d0;
        case 0x28a8f8u: goto label_28a8f8;
        case 0x28a920u: goto label_28a920;
        case 0x28a94cu: goto label_28a94c;
        case 0x28a960u: goto label_28a960;
        default: break;
    }

    ctx->pc = 0x28a320u;

    // 0x28a320: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x28a320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28a324: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x28a324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x28a328: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x28a328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x28a32c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28a32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a330: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x28a330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x28a334: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28a334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a338: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x28a338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x28a33c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28a33cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a340: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28a340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28a344: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28a344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28a348: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x28a348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x28a34c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x28a34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x28a350: 0x10400183  beqz        $v0, . + 4 + (0x183 << 2)
    ctx->pc = 0x28A350u;
    {
        const bool branch_taken_0x28a350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A350u;
        // 0x28a354: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a350) {
            ctx->pc = 0x28A960u;
            goto label_28a960;
        }
    }
    ctx->pc = 0x28A358u;
    // 0x28a358: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x28a358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28a35c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28A35Cu;
    {
        const bool branch_taken_0x28a35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A35Cu;
        // 0x28a360: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a35c) {
            ctx->pc = 0x28A3A8u;
            goto label_28a3a8;
        }
    }
    ctx->pc = 0x28A364u;
    // 0x28a364: 0xc0a1d5c  jal         func_287570
    ctx->pc = 0x28A364u;
    SET_GPR_U32(ctx, 31, 0x28A36Cu);
    ctx->pc = 0x28A368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A364u;
    // 0x28a368: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287570u, 0x28A364u, 0x28A36Cu)) {
        return;
    }
    ctx->pc = 0x28A36Cu;
label_28a36c:
    // 0x28a36c: 0xc0a1e48  jal         func_287920
    ctx->pc = 0x28A36Cu;
    SET_GPR_U32(ctx, 31, 0x28A374u);
    ctx->pc = 0x287920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287920u, 0x28A36Cu, 0x28A374u)) {
        return;
    }
    ctx->pc = 0x28A374u;
label_28a374:
    // 0x28a374: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x28a374u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a378: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x28a378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28a37c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x28a37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x28a380: 0x7e440050  sq          $a0, 0x50($s2)
    ctx->pc = 0x28a380u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 4));
    // 0x28a384: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x28a384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x28a388: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x28a388u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28a38c: 0x7e430060  sq          $v1, 0x60($s2)
    ctx->pc = 0x28a38cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), GPR_VEC(ctx, 3));
    // 0x28a390: 0x78440020  lq          $a0, 0x20($v0)
    ctx->pc = 0x28a390u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x28a394: 0x7e440070  sq          $a0, 0x70($s2)
    ctx->pc = 0x28a394u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 112), GPR_VEC(ctx, 4));
    // 0x28a398: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x28a398u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x28a39c: 0xae450008  sw          $a1, 0x8($s2)
    ctx->pc = 0x28a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 5));
    // 0x28a3a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28A3A0u;
    {
        const bool branch_taken_0x28a3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3A0u;
        // 0x28a3a4: 0x7e430080  sq          $v1, 0x80($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a3a0) {
            ctx->pc = 0x28A3B0u;
            goto label_28a3b0;
        }
    }
    ctx->pc = 0x28A3A8u;
label_28a3a8:
    // 0x28a3a8: 0xc0a1e14  jal         func_287850
    ctx->pc = 0x28A3A8u;
    SET_GPR_U32(ctx, 31, 0x28A3B0u);
    ctx->pc = 0x28A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A3A8u;
    // 0x28a3ac: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287850u, 0x28A3A8u, 0x28A3B0u)) {
        return;
    }
    ctx->pc = 0x28A3B0u;
label_28a3b0:
    // 0x28a3b0: 0xc609000c  lwc1        $f9, 0xC($s0)
    ctx->pc = 0x28a3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x28a3b4: 0xc6420090  lwc1        $f2, 0x90($s2)
    ctx->pc = 0x28a3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28a3b8: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x28a3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28a3bc: 0xc6430094  lwc1        $f3, 0x94($s2)
    ctx->pc = 0x28a3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28a3c0: 0xc6080004  lwc1        $f8, 0x4($s0)
    ctx->pc = 0x28a3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28a3c4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x28a3c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x28a3c8: 0xc6400098  lwc1        $f0, 0x98($s2)
    ctx->pc = 0x28a3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a3cc: 0xc6070008  lwc1        $f7, 0x8($s0)
    ctx->pc = 0x28a3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28a3d0: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x28a3d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x28a3d4: 0xc641009c  lwc1        $f1, 0x9C($s2)
    ctx->pc = 0x28a3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a3d8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x28a3d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x28a3dc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x28a3dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28a3e0: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x28a3e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x28a3e4: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x28a3e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28a3e8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x28a3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x28a3ec: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x28a3ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x28a3f0: 0xc7808068  lwc1        $f0, -0x7F98($gp)
    ctx->pc = 0x28a3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a3f4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x28a3f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x28a3f8: 0xc64500a0  lwc1        $f5, 0xA0($s2)
    ctx->pc = 0x28a3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28a3fc: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x28a3fcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x28a400: 0xc64300a4  lwc1        $f3, 0xA4($s2)
    ctx->pc = 0x28a400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28a404: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x28a404u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x28a408: 0xc64200a8  lwc1        $f2, 0xA8($s2)
    ctx->pc = 0x28a408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28a40c: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x28a40cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x28a410: 0xc64100ac  lwc1        $f1, 0xAC($s2)
    ctx->pc = 0x28a410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a414: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x28a414u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x28a418: 0xc62a000c  lwc1        $f10, 0xC($s1)
    ctx->pc = 0x28a418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x28a41c: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x28a41cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x28a420: 0xc6260000  lwc1        $f6, 0x0($s1)
    ctx->pc = 0x28a420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28a424: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x28a424u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x28a428: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x28a428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28a42c: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x28a42cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x28a430: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x28a430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a434: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x28a434u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x28a438: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x28a438u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x28a43c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28a43cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28a440: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->pc = 0x28a440u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x28a444: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x28a444u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28a448: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x28a448u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28a44c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x28a44cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x28a450: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x28a450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x28a454: 0xc09292a  jal         func_24A4A8
    ctx->pc = 0x28A454u;
    SET_GPR_U32(ctx, 31, 0x28A45Cu);
    ctx->pc = 0x28A458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A454u;
    // 0x28a458: 0x8e4400b8  lw          $a0, 0xB8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28A454u, 0x28A45Cu)) {
        return;
    }
    ctx->pc = 0x28A45Cu;
label_28a45c:
    // 0x28a45c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28a45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a460: 0x8e4300bc  lw          $v1, 0xBC($s2)
    ctx->pc = 0x28a460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x28a464: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x28a464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x28a468: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28a468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28a46c: 0x106000db  beqz        $v1, . + 4 + (0xDB << 2)
    ctx->pc = 0x28A46Cu;
    {
        const bool branch_taken_0x28a46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A46Cu;
        // 0x28a470: 0x202a021  addu        $s4, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a46c) {
            ctx->pc = 0x28A7DCu;
            goto label_28a7dc;
        }
    }
    ctx->pc = 0x28A474u;
    // 0x28a474: 0xc09292a  jal         func_24A4A8
    ctx->pc = 0x28A474u;
    SET_GPR_U32(ctx, 31, 0x28A47Cu);
    ctx->pc = 0x28A478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A474u;
    // 0x28a478: 0x8e4400b8  lw          $a0, 0xB8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28A474u, 0x28A47Cu)) {
        return;
    }
    ctx->pc = 0x28A47Cu;
label_28a47c:
    // 0x28a47c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x28a47cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a480: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x28a480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x28a484: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28a484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28a488: 0x1625021  addu        $t2, $t3, $v0
    ctx->pc = 0x28a488u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x28a48c: 0x116a00d2  beq         $t3, $t2, . + 4 + (0xD2 << 2)
    ctx->pc = 0x28A48Cu;
    {
        const bool branch_taken_0x28a48c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 10));
        ctx->pc = 0x28A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A48Cu;
        // 0x28a490: 0x254cfff8  addiu       $t4, $t2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a48c) {
            ctx->pc = 0x28A7D8u;
            goto label_28a7d8;
        }
    }
    ctx->pc = 0x28A494u;
    // 0x28a494: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x28a494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a498: 0x1471023  subu        $v0, $t2, $a3
    ctx->pc = 0x28a498u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x28a49c: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x28a49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x28a4a0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x28A4A0u;
    {
        const bool branch_taken_0x28a4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A4A0u;
        // 0x28a4a4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a4a0) {
            ctx->pc = 0x28A510u;
            goto label_28a510;
        }
    }
    ctx->pc = 0x28A4A8u;
    // 0x28a4a8: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x28a4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x28a4ac: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x28A4ACu;
    {
        const bool branch_taken_0x28a4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a4ac) {
            ctx->pc = 0x28A4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A4ACu;
            // 0x28a4b0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A4FCu;
            goto label_28a4fc;
        }
    }
    ctx->pc = 0x28A4B4u;
    // 0x28a4b4: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x28a4b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28a4b8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x28A4B8u;
    {
        const bool branch_taken_0x28a4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a4b8) {
            ctx->pc = 0x28A4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A4B8u;
            // 0x28a4bc: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A4E8u;
            goto label_28a4e8;
        }
    }
    ctx->pc = 0x28A4C0u;
    // 0x28a4c0: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x28a4c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x28a4c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28A4C4u;
    {
        const bool branch_taken_0x28a4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A4C4u;
        // 0x28a4c8: 0x24e30008  addiu       $v1, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a4c4) {
            ctx->pc = 0x28A510u;
            goto label_28a510;
        }
    }
    ctx->pc = 0x28A4CCu;
    // 0x28a4cc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x28a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28a4d0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x28a4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a4d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28a4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28a4d8: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x28a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x28a4dc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x28a4dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a4e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x28a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28a4e4: 0x0  nop
    ctx->pc = 0x28a4e4u;
    // NOP
label_28a4e8:
    // 0x28a4e8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x28a4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x28a4ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28a4f0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x28a4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x28a4f4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x28a4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x28a4f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x28a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28a4fc:
    // 0x28a4fc: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x28a4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x28a500: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28a500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28a504: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x28a504u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x28a508: 0x10ea0013  beq         $a3, $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x28A508u;
    {
        const bool branch_taken_0x28a508 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        ctx->pc = 0x28A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A508u;
        // 0x28a50c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a508) {
            ctx->pc = 0x28A558u;
            goto label_28a558;
        }
    }
    ctx->pc = 0x28A510u;
label_28a510:
    // 0x28a510: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x28a510u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a514: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x28a514u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28a518:
    // 0x28a518: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x28a518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x28a51c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x28a51cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x28a520: 0x8d240008  lw          $a0, 0x8($t1)
    ctx->pc = 0x28a520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x28a524: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28a524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28a528: 0x8d250010  lw          $a1, 0x10($t1)
    ctx->pc = 0x28a528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x28a52c: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x28a52cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x28a530: 0x8d260018  lw          $a2, 0x18($t1)
    ctx->pc = 0x28a530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x28a534: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x28a534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28a538: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x28a538u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x28a53c: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x28a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x28a540: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28a540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28a544: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x28a544u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
    // 0x28a548: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x28a548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28a54c: 0xad03001c  sw          $v1, 0x1C($t0)
    ctx->pc = 0x28a54cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
    // 0x28a550: 0x14eafff1  bne         $a3, $t2, . + 4 + (-0xF << 2)
    ctx->pc = 0x28A550u;
    {
        const bool branch_taken_0x28a550 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x28A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A550u;
        // 0x28a554: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a550) {
            ctx->pc = 0x28A518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a518;
        }
    }
    ctx->pc = 0x28A558u;
label_28a558:
    // 0x28a558: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x28a558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a55c: 0xec102b  sltu        $v0, $a3, $t4
    ctx->pc = 0x28a55cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x28a560: 0x5040009e  beql        $v0, $zero, . + 4 + (0x9E << 2)
    ctx->pc = 0x28A560u;
    {
        const bool branch_taken_0x28a560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a560) {
            ctx->pc = 0x28A564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A560u;
            // 0x28a564: 0xae4000bc  sw          $zero, 0xBC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A7DCu;
            goto label_28a7dc;
        }
    }
    ctx->pc = 0x28A568u;
    // 0x28a568: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x28a568u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a56c: 0x24e60008  addiu       $a2, $a3, 0x8
    ctx->pc = 0x28a56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_28a570:
    // 0x28a570: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x28a570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x28a574: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x28A574u;
    {
        const bool branch_taken_0x28a574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A574u;
        // 0x28a578: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a574) {
            ctx->pc = 0x28A7C8u;
            goto label_28a7c8;
        }
    }
    ctx->pc = 0x28A57Cu;
    // 0x28a57c: 0x1481823  subu        $v1, $t2, $t0
    ctx->pc = 0x28a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x28a580: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x28a580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a584: 0x10a102a  slt         $v0, $t0, $t2
    ctx->pc = 0x28a584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x28a588: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x28A588u;
    {
        const bool branch_taken_0x28a588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A588u;
        // 0x28a58c: 0x3063001f  andi        $v1, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a588) {
            ctx->pc = 0x28A654u;
            goto label_28a654;
        }
    }
    ctx->pc = 0x28A590u;
    // 0x28a590: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x28A590u;
    {
        const bool branch_taken_0x28a590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A590u;
        // 0x28a594: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a590) {
            ctx->pc = 0x28A6A4u;
            goto label_28a6a4;
        }
    }
    ctx->pc = 0x28A598u;
    // 0x28a598: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x28A598u;
    {
        const bool branch_taken_0x28a598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a598) {
            ctx->pc = 0x28A59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A598u;
            // 0x28a59c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A658u;
            goto label_28a658;
        }
    }
    ctx->pc = 0x28A5A0u;
    // 0x28a5a0: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x28a5a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28a5a4: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x28A5A4u;
    {
        const bool branch_taken_0x28a5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a5a4) {
            ctx->pc = 0x28A5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A5A4u;
            // 0x28a5a8: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A60Cu;
            goto label_28a60c;
        }
    }
    ctx->pc = 0x28A5ACu;
    // 0x28a5ac: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x28a5acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x28a5b0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x28A5B0u;
    {
        const bool branch_taken_0x28a5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A5B0u;
        // 0x28a5b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a5b0) {
            ctx->pc = 0x28A6A8u;
            goto label_28a6a8;
        }
    }
    ctx->pc = 0x28A5B8u;
    // 0x28a5b8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x28a5bc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x28a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x28a5c0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28a5c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28a5c4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28A5C4u;
    {
        const bool branch_taken_0x28a5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A5C4u;
        // 0x28a5c8: 0x24e20010  addiu       $v0, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a5c4) {
            ctx->pc = 0x28A600u;
            goto label_28a600;
        }
    }
    ctx->pc = 0x28A5CCu;
    // 0x28a5cc: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x28a5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28a5d0: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x28a5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28a5d4: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x28a5d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a5d8: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x28a5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a5dc: 0x68eb000f  ldl         $t3, 0xF($a3)
    ctx->pc = 0x28a5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x28a5e0: 0x6ceb0008  ldr         $t3, 0x8($a3)
    ctx->pc = 0x28a5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x28a5e4: 0xb0eb0007  sdl         $t3, 0x7($a3)
    ctx->pc = 0x28a5e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a5e8: 0xb4eb0000  sdr         $t3, 0x0($a3)
    ctx->pc = 0x28a5e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a5ec: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x28a5ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x28a5f0: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x28a5f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x28a5f4: 0xb0e4000f  sdl         $a0, 0xF($a3)
    ctx->pc = 0x28a5f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a5f8: 0xb4e40008  sdr         $a0, 0x8($a3)
    ctx->pc = 0x28a5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a5fc: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x28a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_28a600:
    // 0x28a600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28a600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a604: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x28a604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a608: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28a608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_28a60c:
    // 0x28a60c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28a610: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28a610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28a614: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x28A614u;
    {
        const bool branch_taken_0x28a614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a614) {
            ctx->pc = 0x28A618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A614u;
            // 0x28a618: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A650u;
            goto label_28a650;
        }
    }
    ctx->pc = 0x28A61Cu;
    // 0x28a61c: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x28a61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28a620: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x28a620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28a624: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x28a624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a628: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x28a628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a62c: 0x688c0007  ldl         $t4, 0x7($a0)
    ctx->pc = 0x28a62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a630: 0x6c8c0000  ldr         $t4, 0x0($a0)
    ctx->pc = 0x28a630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a634: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x28a634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a638: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x28a638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a63c: 0x6bab0027  ldl         $t3, 0x27($sp)
    ctx->pc = 0x28a63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x28a640: 0x6fab0020  ldr         $t3, 0x20($sp)
    ctx->pc = 0x28a640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x28a644: 0xb08b0007  sdl         $t3, 0x7($a0)
    ctx->pc = 0x28a644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a648: 0xb48b0000  sdr         $t3, 0x0($a0)
    ctx->pc = 0x28a648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a64c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x28a64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_28a650:
    // 0x28a650: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x28a650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_28a654:
    // 0x28a654: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28a654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_28a658:
    // 0x28a658: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28a658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28a65c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28a65cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28a660: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28A660u;
    {
        const bool branch_taken_0x28a660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A660u;
        // 0x28a664: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a660) {
            ctx->pc = 0x28A698u;
            goto label_28a698;
        }
    }
    ctx->pc = 0x28A668u;
    // 0x28a668: 0x68e50007  ldl         $a1, 0x7($a3)
    ctx->pc = 0x28a668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x28a66c: 0x6ce50000  ldr         $a1, 0x0($a3)
    ctx->pc = 0x28a66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x28a670: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x28a670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a674: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x28a674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a678: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x28a678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x28a67c: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x28a67cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x28a680: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x28a680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a684: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x28a684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a688: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x28a688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28a68c: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x28a68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28a690: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x28a690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a694: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x28a694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28a698:
    // 0x28a698: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x28a698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x28a69c: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x28A69Cu;
    {
        const bool branch_taken_0x28a69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A69Cu;
        // 0x28a6a0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a69c) {
            ctx->pc = 0x28A7C8u;
            goto label_28a7c8;
        }
    }
    ctx->pc = 0x28A6A4u;
label_28a6a4:
    // 0x28a6a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28a6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28a6a8:
    // 0x28a6a8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x28a6ac: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28a6b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28a6b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28a6b4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x28A6B4u;
    {
        const bool branch_taken_0x28a6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a6b4) {
            ctx->pc = 0x28A6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A6B4u;
            // 0x28a6b8: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A6F4u;
            goto label_28a6f4;
        }
    }
    ctx->pc = 0x28A6BCu;
    // 0x28a6bc: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x28a6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a6c0: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x28a6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a6c4: 0xb3ac0027  sdl         $t4, 0x27($sp)
    ctx->pc = 0x28a6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a6c8: 0xb7ac0020  sdr         $t4, 0x20($sp)
    ctx->pc = 0x28a6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a6cc: 0x688c0007  ldl         $t4, 0x7($a0)
    ctx->pc = 0x28a6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a6d0: 0x6c8c0000  ldr         $t4, 0x0($a0)
    ctx->pc = 0x28a6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a6d4: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x28a6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a6d8: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x28a6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a6dc: 0x6bac0027  ldl         $t4, 0x27($sp)
    ctx->pc = 0x28a6dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a6e0: 0x6fac0020  ldr         $t4, 0x20($sp)
    ctx->pc = 0x28a6e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a6e4: 0xb08c0007  sdl         $t4, 0x7($a0)
    ctx->pc = 0x28a6e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a6e8: 0xb48c0000  sdr         $t4, 0x0($a0)
    ctx->pc = 0x28a6e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a6ec: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x28a6f0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x28a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_28a6f4:
    // 0x28a6f4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28a6f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28a6f8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x28A6F8u;
    {
        const bool branch_taken_0x28a6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a6f8) {
            ctx->pc = 0x28A6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A6F8u;
            // 0x28a6fc: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A734u;
            goto label_28a734;
        }
    }
    ctx->pc = 0x28A700u;
    // 0x28a700: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x28a700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a704: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x28a704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a708: 0xb3ac0027  sdl         $t4, 0x27($sp)
    ctx->pc = 0x28a708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a70c: 0xb7ac0020  sdr         $t4, 0x20($sp)
    ctx->pc = 0x28a70cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a710: 0x688c000f  ldl         $t4, 0xF($a0)
    ctx->pc = 0x28a710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a714: 0x6c8c0008  ldr         $t4, 0x8($a0)
    ctx->pc = 0x28a714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a718: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x28a718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a71c: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x28a71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a720: 0x6bac0027  ldl         $t4, 0x27($sp)
    ctx->pc = 0x28a720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a724: 0x6fac0020  ldr         $t4, 0x20($sp)
    ctx->pc = 0x28a724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a728: 0xb08c000f  sdl         $t4, 0xF($a0)
    ctx->pc = 0x28a728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a72c: 0xb48c0008  sdr         $t4, 0x8($a0)
    ctx->pc = 0x28a72cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a730: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28a730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_28a734:
    // 0x28a734: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x28a734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x28a738: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28a738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28a73c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x28A73Cu;
    {
        const bool branch_taken_0x28a73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a73c) {
            ctx->pc = 0x28A740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A73Cu;
            // 0x28a740: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A778u;
            goto label_28a778;
        }
    }
    ctx->pc = 0x28A744u;
    // 0x28a744: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x28a744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a748: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x28a748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a74c: 0xb3ac0027  sdl         $t4, 0x27($sp)
    ctx->pc = 0x28a74cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a750: 0xb7ac0020  sdr         $t4, 0x20($sp)
    ctx->pc = 0x28a750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a754: 0x688c0017  ldl         $t4, 0x17($a0)
    ctx->pc = 0x28a754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a758: 0x6c8c0010  ldr         $t4, 0x10($a0)
    ctx->pc = 0x28a758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a75c: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x28a75cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a760: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x28a760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a764: 0x6bac0027  ldl         $t4, 0x27($sp)
    ctx->pc = 0x28a764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a768: 0x6fac0020  ldr         $t4, 0x20($sp)
    ctx->pc = 0x28a768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a76c: 0xb08c0017  sdl         $t4, 0x17($a0)
    ctx->pc = 0x28a76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a770: 0xb48c0010  sdr         $t4, 0x10($a0)
    ctx->pc = 0x28a770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a774: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28a774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_28a778:
    // 0x28a778: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x28a778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x28a77c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28a77cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28a780: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28A780u;
    {
        const bool branch_taken_0x28a780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A780u;
        // 0x28a784: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a780) {
            ctx->pc = 0x28A7B8u;
            goto label_28a7b8;
        }
    }
    ctx->pc = 0x28A788u;
    // 0x28a788: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x28a788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a78c: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x28a78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a790: 0xb3ac0027  sdl         $t4, 0x27($sp)
    ctx->pc = 0x28a790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a794: 0xb7ac0020  sdr         $t4, 0x20($sp)
    ctx->pc = 0x28a794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a798: 0x688c001f  ldl         $t4, 0x1F($a0)
    ctx->pc = 0x28a798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a79c: 0x6c8c0018  ldr         $t4, 0x18($a0)
    ctx->pc = 0x28a79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a7a0: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x28a7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a7a4: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x28a7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a7a8: 0x6bac0027  ldl         $t4, 0x27($sp)
    ctx->pc = 0x28a7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a7ac: 0x6fac0020  ldr         $t4, 0x20($sp)
    ctx->pc = 0x28a7acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a7b0: 0xb08c001f  sdl         $t4, 0x1F($a0)
    ctx->pc = 0x28a7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a7b4: 0xb48c0018  sdr         $t4, 0x18($a0)
    ctx->pc = 0x28a7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28a7b8:
    // 0x28a7b8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x28a7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x28a7bc: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x28a7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x28a7c0: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x28A7C0u;
    {
        const bool branch_taken_0x28a7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7C0u;
        // 0x28a7c4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7c0) {
            ctx->pc = 0x28A6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a6a8;
        }
    }
    ctx->pc = 0x28A7C8u;
label_28a7c8:
    // 0x28a7c8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x28a7c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7cc: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x28a7ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x28a7d0: 0x5440ff67  bnel        $v0, $zero, . + 4 + (-0x99 << 2)
    ctx->pc = 0x28A7D0u;
    {
        const bool branch_taken_0x28a7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a7d0) {
            ctx->pc = 0x28A7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A7D0u;
            // 0x28a7d4: 0x24e60008  addiu       $a2, $a3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a570;
        }
    }
    ctx->pc = 0x28A7D8u;
label_28a7d8:
    // 0x28a7d8: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x28a7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_28a7dc:
    // 0x28a7dc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28a7dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7e0: 0x1234005d  beq         $s1, $s4, . + 4 + (0x5D << 2)
    ctx->pc = 0x28A7E0u;
    {
        const bool branch_taken_0x28a7e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x28A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7E0u;
        // 0x28a7e4: 0x2911023  subu        $v0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7e0) {
            ctx->pc = 0x28A958u;
            goto label_28a958;
        }
    }
    ctx->pc = 0x28A7E8u;
    // 0x28a7e8: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x28a7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x28a7ec: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x28A7ECu;
    {
        const bool branch_taken_0x28a7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7ECu;
        // 0x28a7f0: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7ec) {
            ctx->pc = 0x28A8A8u;
            goto label_28a8a8;
        }
    }
    ctx->pc = 0x28A7F4u;
    // 0x28a7f4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x28A7F4u;
    {
        const bool branch_taken_0x28a7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7F4u;
        // 0x28a7f8: 0x28620011  slti        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7f4) {
            ctx->pc = 0x28A870u;
            goto label_28a870;
        }
    }
    ctx->pc = 0x28A7FCu;
    // 0x28a7fc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28A7FCu;
    {
        const bool branch_taken_0x28a7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7FCu;
        // 0x28a800: 0x28620019  slti        $v0, $v1, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7fc) {
            ctx->pc = 0x28A840u;
            goto label_28a840;
        }
    }
    ctx->pc = 0x28A804u;
    // 0x28a804: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x28A804u;
    {
        const bool branch_taken_0x28a804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a804) {
            ctx->pc = 0x28A8A8u;
            goto label_28a8a8;
        }
    }
    ctx->pc = 0x28A80Cu;
    // 0x28a80c: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A80Cu;
    {
        const bool branch_taken_0x28a80c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a80c) {
            ctx->pc = 0x28A810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A80Cu;
            // 0x28a810: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A828u;
            goto label_28a828;
        }
    }
    ctx->pc = 0x28A814u;
    // 0x28a814: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28a814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28a818: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x28a818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28a81c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28a81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x28a820: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x28a820u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x28a824: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28a824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28a828:
    // 0x28a828: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28a828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a82c: 0xc0a2688  jal         func_289A20
    ctx->pc = 0x28A82Cu;
    SET_GPR_U32(ctx, 31, 0x28A834u);
    ctx->pc = 0x28A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A82Cu;
    // 0x28a830: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289A20u, 0x28A82Cu, 0x28A834u)) {
        return;
    }
    ctx->pc = 0x28A834u;
label_28a834:
    // 0x28a834: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x28a834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x28a838: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x28a838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a83c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28a83cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28a840:
    // 0x28a840: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A840u;
    {
        const bool branch_taken_0x28a840 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a840) {
            ctx->pc = 0x28A844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A840u;
            // 0x28a844: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A85Cu;
            goto label_28a85c;
        }
    }
    ctx->pc = 0x28A848u;
    // 0x28a848: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28a848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28a84c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x28a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28a850: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28a850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x28a854: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x28a854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x28a858: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28a858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28a85c:
    // 0x28a85c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28a85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a860: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x28a860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28a864: 0xc0a2688  jal         func_289A20
    ctx->pc = 0x28A864u;
    SET_GPR_U32(ctx, 31, 0x28A86Cu);
    ctx->pc = 0x28A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A864u;
    // 0x28a868: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289A20u, 0x28A864u, 0x28A86Cu)) {
        return;
    }
    ctx->pc = 0x28A86Cu;
label_28a86c:
    // 0x28a86c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x28a86cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_28a870:
    // 0x28a870: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A870u;
    {
        const bool branch_taken_0x28a870 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a870) {
            ctx->pc = 0x28A874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A870u;
            // 0x28a874: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A88Cu;
            goto label_28a88c;
        }
    }
    ctx->pc = 0x28A878u;
    // 0x28a878: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28a878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28a87c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x28a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28a880: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28a880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x28a884: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x28a884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x28a888: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28a888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28a88c:
    // 0x28a88c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28a88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a890: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x28a890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28a894: 0xc0a2688  jal         func_289A20
    ctx->pc = 0x28A894u;
    SET_GPR_U32(ctx, 31, 0x28A89Cu);
    ctx->pc = 0x28A898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A894u;
    // 0x28a898: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289A20u, 0x28A894u, 0x28A89Cu)) {
        return;
    }
    ctx->pc = 0x28A89Cu;
label_28a89c:
    // 0x28a89c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x28a89cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x28a8a0: 0x1234002d  beq         $s1, $s4, . + 4 + (0x2D << 2)
    ctx->pc = 0x28A8A0u;
    {
        const bool branch_taken_0x28a8a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x28a8a0) {
            ctx->pc = 0x28A958u;
            goto label_28a958;
        }
    }
    ctx->pc = 0x28A8A8u;
label_28a8a8:
    // 0x28a8a8: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A8A8u;
    {
        const bool branch_taken_0x28a8a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a8a8) {
            ctx->pc = 0x28A8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A8A8u;
            // 0x28a8ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A8C4u;
            goto label_28a8c4;
        }
    }
    ctx->pc = 0x28A8B0u;
    // 0x28a8b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28a8b4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x28a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28a8b8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28a8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x28a8bc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x28a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x28a8c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28a8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28a8c4:
    // 0x28a8c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28a8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8c8: 0xc0a2688  jal         func_289A20
    ctx->pc = 0x28A8C8u;
    SET_GPR_U32(ctx, 31, 0x28A8D0u);
    ctx->pc = 0x28A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A8C8u;
    // 0x28a8cc: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289A20u, 0x28A8C8u, 0x28A8D0u)) {
        return;
    }
    ctx->pc = 0x28A8D0u;
label_28a8d0:
    // 0x28a8d0: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A8D0u;
    {
        const bool branch_taken_0x28a8d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a8d0) {
            ctx->pc = 0x28A8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A8D0u;
            // 0x28a8d4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A8ECu;
            goto label_28a8ec;
        }
    }
    ctx->pc = 0x28A8D8u;
    // 0x28a8d8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x28a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28a8dc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x28a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28a8e0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28a8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x28a8e4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x28a8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x28a8e8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x28a8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_28a8ec:
    // 0x28a8ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28a8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8f0: 0xc0a2688  jal         func_289A20
    ctx->pc = 0x28A8F0u;
    SET_GPR_U32(ctx, 31, 0x28A8F8u);
    ctx->pc = 0x28A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A8F0u;
    // 0x28a8f4: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289A20u, 0x28A8F0u, 0x28A8F8u)) {
        return;
    }
    ctx->pc = 0x28A8F8u;
label_28a8f8:
    // 0x28a8f8: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A8F8u;
    {
        const bool branch_taken_0x28a8f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a8f8) {
            ctx->pc = 0x28A8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A8F8u;
            // 0x28a8fc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A914u;
            goto label_28a914;
        }
    }
    ctx->pc = 0x28A900u;
    // 0x28a900: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x28a900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28a904: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x28a904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28a908: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28a908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x28a90c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x28a90cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x28a910: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x28a910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_28a914:
    // 0x28a914: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28a914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a918: 0xc0a2688  jal         func_289A20
    ctx->pc = 0x28A918u;
    SET_GPR_U32(ctx, 31, 0x28A920u);
    ctx->pc = 0x28A91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A918u;
    // 0x28a91c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289A20u, 0x28A918u, 0x28A920u)) {
        return;
    }
    ctx->pc = 0x28A920u;
label_28a920:
    // 0x28a920: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A920u;
    {
        const bool branch_taken_0x28a920 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a920) {
            ctx->pc = 0x28A924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A920u;
            // 0x28a924: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A93Cu;
            goto label_28a93c;
        }
    }
    ctx->pc = 0x28A928u;
    // 0x28a928: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x28a928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x28a92c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x28a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28a930: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28a930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x28a934: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x28a934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x28a938: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x28a938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_28a93c:
    // 0x28a93c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28a93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a940: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x28a940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28a944: 0xc0a2688  jal         func_289A20
    ctx->pc = 0x28A944u;
    SET_GPR_U32(ctx, 31, 0x28A94Cu);
    ctx->pc = 0x28A948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A944u;
    // 0x28a948: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289A20u, 0x28A944u, 0x28A94Cu)) {
        return;
    }
    ctx->pc = 0x28A94Cu;
label_28a94c:
    // 0x28a94c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x28a94cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x28a950: 0x1634ffd5  bne         $s1, $s4, . + 4 + (-0x2B << 2)
    ctx->pc = 0x28A950u;
    {
        const bool branch_taken_0x28a950 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        if (branch_taken_0x28a950) {
            ctx->pc = 0x28A8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a8a8;
        }
    }
    ctx->pc = 0x28A958u;
label_28a958:
    // 0x28a958: 0xc0a1e06  jal         func_287818
    ctx->pc = 0x28A958u;
    SET_GPR_U32(ctx, 31, 0x28A960u);
    ctx->pc = 0x287818u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287818u, 0x28A958u, 0x28A960u)) {
        return;
    }
    ctx->pc = 0x28A960u;
label_28a960:
    // 0x28a960: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x28a960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a964: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x28a964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28a968: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x28a968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28a96c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x28a96cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a970: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x28a970u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28a974: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28a974u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28a978: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28a978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a97c: 0x3e00008  jr          $ra
    ctx->pc = 0x28A97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A97Cu;
        // 0x28a980: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A984u;
    // 0x28a984: 0x0  nop
    ctx->pc = 0x28a984u;
    // NOP
    ctx->pc = 0x28a988u;
}
