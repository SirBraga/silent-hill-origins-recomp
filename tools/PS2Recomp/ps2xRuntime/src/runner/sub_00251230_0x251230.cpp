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

// Function: sub_00251230
// Address: 0x251230 - 0x251868
void sub_00251230_0x251230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251230_0x251230");
#endif

    ctx->pc = 0x251230u;

    // 0x251230: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x251230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251234: 0xc4c4000c  lwc1        $f4, 0xC($a2)
    ctx->pc = 0x251234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x251238: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x251238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25123c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x25123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251240: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x251240u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x251244: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x251244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x251248: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x251248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x25124c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x25124cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x251250: 0xc4a40010  lwc1        $f4, 0x10($a1)
    ctx->pc = 0x251250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x251254: 0x46056301  sub.s       $f12, $f12, $f5
    ctx->pc = 0x251254u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[5]);
    // 0x251258: 0xc4c60010  lwc1        $f6, 0x10($a2)
    ctx->pc = 0x251258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25125c: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x25125cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x251260: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x251260u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x251264: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x251264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251268: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x251268u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x25126c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x25126cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251270: 0x46036303  div.s       $f12, $f12, $f3
    ctx->pc = 0x251270u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[3]);
    // 0x251274: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x251274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x251278: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x251278u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x25127c: 0x46011280  add.s       $f10, $f2, $f1
    ctx->pc = 0x25127cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x251280: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x251280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251284: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x251284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251288: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x251288u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25128c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x25128cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x251290: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x251290u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251294: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x251294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x251298: 0xc4a2001c  lwc1        $f2, 0x1C($a1)
    ctx->pc = 0x251298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25129c: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x25129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2512a0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2512a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2512a4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2512a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2512a8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2512a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2512ac: 0xe482001c  swc1        $f2, 0x1C($a0)
    ctx->pc = 0x2512acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2512b0: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x2512b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2512b4: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x2512b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2512b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2512b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2512bc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2512bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2512c0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2512c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2512c4: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x2512c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2512c8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2512c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2512cc: 0x0  nop
    ctx->pc = 0x2512ccu;
    // NOP
    // 0x2512d0: 0x46035034  c.lt.s      $f10, $f3
    ctx->pc = 0x2512d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2512d4: 0x0  nop
    ctx->pc = 0x2512d4u;
    // NOP
    // 0x2512d8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2512D8u;
    {
        const bool branch_taken_0x2512d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2512DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512D8u;
        // 0x2512dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2512d8) {
            ctx->pc = 0x2512E8u;
            goto label_2512e8;
        }
    }
    ctx->pc = 0x2512E0u;
    // 0x2512e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2512e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2512e4: 0x0  nop
    ctx->pc = 0x2512e4u;
    // NOP
label_2512e8:
    // 0x2512e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2512E8u;
    {
        const bool branch_taken_0x2512e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2512e8) {
            ctx->pc = 0x251328u;
            goto label_251328;
        }
    }
    ctx->pc = 0x2512F0u;
    // 0x2512f0: 0x46005287  neg.s       $f10, $f10
    ctx->pc = 0x2512f0u;
    ctx->f[10] = FPU_NEG_S(ctx->f[10]);
    // 0x2512f4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2512f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2512f8: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x2512f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2512fc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2512fcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x251300: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x251300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251304: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x251304u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x251308: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x251308u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x25130c: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x25130cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x251310: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x251310u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x251314: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x251314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x251318: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x251318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25131c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x25131cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x251320: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x251320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x251324: 0x0  nop
    ctx->pc = 0x251324u;
    // NOP
label_251328:
    // 0x251328: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x251328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x25132c: 0x3421be77  ori         $at, $at, 0xBE77
    ctx->pc = 0x25132cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48759);
    // 0x251330: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251338: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x251338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25133c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x25133cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x251340: 0x460a0036  c.le.s      $f0, $f10
    ctx->pc = 0x251340u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251344: 0x0  nop
    ctx->pc = 0x251344u;
    // NOP
    // 0x251348: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x251348u;
    {
        const bool branch_taken_0x251348 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251348u;
        // 0x25134c: 0x460c7b81  sub.s       $f14, $f15, $f12 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[15], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251348) {
            ctx->pc = 0x251354u;
            goto label_251354;
        }
    }
    ctx->pc = 0x251350u;
    // 0x251350: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x251350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_251354:
    // 0x251354: 0x5440012c  bnel        $v0, $zero, . + 4 + (0x12C << 2)
    ctx->pc = 0x251354u;
    {
        const bool branch_taken_0x251354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251354) {
            ctx->pc = 0x251358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251354u;
            // 0x251358: 0xc4a10008  lwc1        $f1, 0x8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x251808u;
            goto label_251808;
        }
    }
    ctx->pc = 0x25135Cu;
    // 0x25135c: 0x44025000  mfc1        $v0, $f10
    ctx->pc = 0x25135cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[10], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x251360: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x251360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251364: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x251364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x251368: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x251368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x25136c: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x25136cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x251370: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x251370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x251374: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251378: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x251378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25137c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x25137Cu;
    {
        const bool branch_taken_0x25137c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25137c) {
            ctx->pc = 0x251380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25137Cu;
            // 0x251380: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2513A0u;
            goto label_2513a0;
        }
    }
    ctx->pc = 0x251384u;
    // 0x251384: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x251384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x251388: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x251388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25138c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x25138cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x251390: 0x5ce000d7  bgtzl       $a3, . + 4 + (0xD7 << 2)
    ctx->pc = 0x251390u;
    {
        const bool branch_taken_0x251390 = (GPR_S64(ctx, 7) > 0);
        if (branch_taken_0x251390) {
            ctx->pc = 0x251394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251390u;
            // 0x251394: 0x46001a86  mov.s       $f10, $f3 (Delay Slot)
            ctx->f[10] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2516F0u;
            goto label_2516f0;
        }
    }
    ctx->pc = 0x251398u;
    // 0x251398: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x251398u;
    {
        const bool branch_taken_0x251398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251398u;
        // 0x25139c: 0x460a5042  mul.s       $f1, $f10, $f10 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251398) {
            ctx->pc = 0x2516F8u;
            goto label_2516f8;
        }
    }
    ctx->pc = 0x2513A0u;
label_2513a0:
    // 0x2513a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2513a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2513a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2513a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2513a8: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2513A8u;
    {
        const bool branch_taken_0x2513a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2513ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2513A8u;
        // 0x2513ac: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2513a8) {
            ctx->pc = 0x2514C4u;
            goto label_2514c4;
        }
    }
    ctx->pc = 0x2513B0u;
    // 0x2513b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2513b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2513b4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2513B4u;
    {
        const bool branch_taken_0x2513b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2513b4) {
            ctx->pc = 0x2513B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2513B4u;
            // 0x2513b8: 0x460a52c2  mul.s       $f11, $f10, $f10 (Delay Slot)
            ctx->f[11] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2513D0u;
            goto label_2513d0;
        }
    }
    ctx->pc = 0x2513BCu;
    // 0x2513bc: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2513bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2513c0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2513c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2513c4: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2513c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2513c8: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x2513C8u;
    {
        const bool branch_taken_0x2513c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2513CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2513C8u;
        // 0x2513cc: 0x460a5042  mul.s       $f1, $f10, $f10 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2513c8) {
            ctx->pc = 0x2516F8u;
            goto label_2516f8;
        }
    }
    ctx->pc = 0x2513D0u;
label_2513d0:
    // 0x2513d0: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x2513d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x2513d4: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x2513d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x2513d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2513d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2513dc: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x2513dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x2513e0: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x2513e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x2513e4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2513e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2513e8: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x2513e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x2513ec: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x2513ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x2513f0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2513f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2513f4: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x2513f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2513f8: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x2513f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x2513fc: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x2513fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x251400: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x251400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x251404: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x251404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x251408: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x251408u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x25140c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25140cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x251410: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x251414: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x251414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x251418: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x251418u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x25141c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x25141cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x251420: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x251420u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x251424: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x251424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x251428: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x251428u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x25142c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x25142cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x251430: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x251430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x251434: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x251434u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x251438: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x251438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x25143c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x25143cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x251440: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x251440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x251444: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x251444u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x251448: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x251448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25144c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x25144cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251450: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x251450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x251454: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x251454u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x251458: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x251458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x25145c: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x25145cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x251460: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x251460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x251464: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x251464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x251468: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251468u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x25146c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x25146cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x251470: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x251470u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x251474: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x251474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x251478: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x251478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x25147c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x25147cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x251480: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251484: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251484u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x251488: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x251488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x25148c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x25148cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x251490: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251494: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251494u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x251498: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x251498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x25149c: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x25149cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x2514a0: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x2514a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2514a4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2514a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2514a8: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x2514a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2514ac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2514acu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2514b0: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x2514b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2514b4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2514b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2514b8: 0x46025081  sub.s       $f2, $f10, $f2
    ctx->pc = 0x2514b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
    // 0x2514bc: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2514BCu;
    {
        const bool branch_taken_0x2514bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2514C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514BCu;
        // 0x2514c0: 0x46024a81  sub.s       $f10, $f9, $f2 (Delay Slot)
        ctx->f[10] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2514bc) {
            ctx->pc = 0x2516F0u;
            goto label_2516f0;
        }
    }
    ctx->pc = 0x2514C4u;
label_2514c4:
    // 0x2514c4: 0x4e30044  bgezl       $a3, . + 4 + (0x44 << 2)
    ctx->pc = 0x2514C4u;
    {
        const bool branch_taken_0x2514c4 = (GPR_S64(ctx, 7) >= 0);
        if (branch_taken_0x2514c4) {
            ctx->pc = 0x2514C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2514C4u;
            // 0x2514c8: 0x460a7841  sub.s       $f1, $f15, $f10 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2515D8u;
            goto label_2515d8;
        }
    }
    ctx->pc = 0x2514CCu;
    // 0x2514cc: 0x460f5080  add.s       $f2, $f10, $f15
    ctx->pc = 0x2514ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[10], ctx->f[15]);
    // 0x2514d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2514d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2514d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2514d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2514d8: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x2514d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x2514dc: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x2514dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x2514e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2514e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2514e4: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x2514e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x2514e8: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x2514e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x2514ec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2514ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2514f0: 0x460112c2  mul.s       $f11, $f2, $f1
    ctx->pc = 0x2514f0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2514f4: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x2514f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x2514f8: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x2514f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x2514fc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2514fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x251500: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x251500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x251504: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x251504u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x251508: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x251508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25150c: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x25150cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x251510: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x251510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x251514: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x251514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x251518: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x25151c: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x25151cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x251520: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x251520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x251524: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x251524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x251528: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x25152c: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x25152cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x251530: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x251530u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x251534: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x251534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x251538: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x251538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x25153c: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x25153cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x251540: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x251540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x251544: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x251544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x251548: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x251548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x25154c: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x25154cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x251550: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x251550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x251554: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x251554u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x251558: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x251558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x25155c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x25155cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x251560: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x251560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x251564: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251568: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251568u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x25156c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x25156cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x251570: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x251570u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x251574: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251578: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251578u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x25157c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x25157cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x251580: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x251580u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x251584: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251588: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x25158c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x25158cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x251590: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x251590u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x251594: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251598: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x251598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x25159c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x25159cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2515a0: 0x460b0344  c1          0xB0344
    ctx->pc = 0x2515a0u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[11]);
    // 0x2515a4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2515a4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2515a8: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x2515a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x2515ac: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x2515acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x2515b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2515b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2515b4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2515b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2515b8: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x2515b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x2515bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2515bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2515c0: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x2515c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2515c4: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x2515c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2515c8: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x2515c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x2515cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2515ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2515d0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2515D0u;
    {
        const bool branch_taken_0x2515d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2515D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2515D0u;
        // 0x2515d4: 0x46001a81  sub.s       $f10, $f3, $f0 (Delay Slot)
        ctx->f[10] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2515d0) {
            ctx->pc = 0x2516F0u;
            goto label_2516f0;
        }
    }
    ctx->pc = 0x2515D8u;
label_2515d8:
    // 0x2515d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2515d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2515dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2515dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2515e0: 0x0  nop
    ctx->pc = 0x2515e0u;
    // NOP
    // 0x2515e4: 0x46000ac2  mul.s       $f11, $f1, $f0
    ctx->pc = 0x2515e4u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2515e8: 0x460b0344  c1          0xB0344
    ctx->pc = 0x2515e8u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[11]);
    // 0x2515ec: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x2515ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2515f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2515f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2515f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2515f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2515f8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x2515f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x2515fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2515fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251600: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x251600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x251604: 0x0  nop
    ctx->pc = 0x251604u;
    // NOP
    // 0x251608: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x251608u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x25160c: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x25160cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x251610: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x251610u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x251614: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251618: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x251618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x25161c: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x25161cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x251620: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x251620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x251624: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251628: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x251628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x25162c: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x25162cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x251630: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x251630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x251634: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x251634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x251638: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x251638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x25163c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25163cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x251640: 0x460268c0  add.s       $f3, $f13, $f2
    ctx->pc = 0x251640u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x251644: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x251644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x251648: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x251648u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x25164c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x25164cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x251650: 0x46055941  sub.s       $f5, $f11, $f5
    ctx->pc = 0x251650u;
    ctx->f[5] = FPU_SUB_S(ctx->f[11], ctx->f[5]);
    // 0x251654: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x251654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x251658: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x251658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x25165c: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x25165cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x251660: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x251660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x251664: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x251668: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x251668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x25166c: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x25166cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x251670: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x251670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x251674: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x251674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x251678: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x251678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x25167c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x25167cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x251680: 0x46032943  div.s       $f5, $f5, $f3
    ctx->pc = 0x251680u;
    ctx->f[5] = FPU_DIV_S(ctx, ctx->f[5], ctx->f[3]);
    // 0x251684: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251688: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x251688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x25168c: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x25168cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x251690: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x251690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x251694: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x251694u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x251698: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x251698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x25169c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x25169cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2516a0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2516a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2516a4: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x2516a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x2516a8: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x2516a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x2516ac: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x2516acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2516b0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2516b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2516b4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2516b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2516b8: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x2516b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x2516bc: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x2516bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2516c0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2516c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2516c4: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x2516c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x2516c8: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x2516c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x2516cc: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x2516ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2516d0: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x2516d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x2516d4: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x2516d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x2516d8: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x2516d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2516dc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2516dcu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2516e0: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x2516e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2516e4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2516e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2516e8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2516e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2516ec: 0x46021280  add.s       $f10, $f2, $f2
    ctx->pc = 0x2516ecu;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2516f0:
    // 0x2516f0: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x2516f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x2516f4: 0x0  nop
    ctx->pc = 0x2516f4u;
    // NOP
label_2516f8:
    // 0x2516f8: 0x3c012f2e  lui         $at, 0x2F2E
    ctx->pc = 0x2516f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12078 << 16));
    // 0x2516fc: 0x3421c9d3  ori         $at, $at, 0xC9D3
    ctx->pc = 0x2516fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51667);
    // 0x251700: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x251700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x251704: 0x3c01b2d7  lui         $at, 0xB2D7
    ctx->pc = 0x251704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45783 << 16));
    // 0x251708: 0x34212f34  ori         $at, $at, 0x2F34
    ctx->pc = 0x251708u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12084);
    // 0x25170c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x25170cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x251710: 0x3c013638  lui         $at, 0x3638
    ctx->pc = 0x251710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13880 << 16));
    // 0x251714: 0x3421ef1b  ori         $at, $at, 0xEF1B
    ctx->pc = 0x251714u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61211);
    // 0x251718: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x251718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x25171c: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x25171cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x251720: 0x3c01b950  lui         $at, 0xB950
    ctx->pc = 0x251720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47440 << 16));
    // 0x251724: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x251724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x251728: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x251728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x25172c: 0x3c013c08  lui         $at, 0x3C08
    ctx->pc = 0x25172cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15368 << 16));
    // 0x251730: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x251730u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x251734: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x251734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x251738: 0x460a0902  mul.s       $f4, $f1, $f10
    ctx->pc = 0x251738u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x25173c: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x25173cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x251740: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x251740u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x251744: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x251744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x251748: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x251748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x25174c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25174cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x251750: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x251750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x251754: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x251754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x251758: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x251758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x25175c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25175cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x251760: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x251760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x251764: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x251764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x251768: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x251768u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x25176c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x25176cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x251770: 0x46045100  add.s       $f4, $f10, $f4
    ctx->pc = 0x251770u;
    ctx->f[4] = FPU_ADD_S(ctx->f[10], ctx->f[4]);
    // 0x251774: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x251774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x251778: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25177c: 0x0  nop
    ctx->pc = 0x25177cu;
    // NOP
    // 0x251780: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x251780u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
    // 0x251784: 0x460a7382  mul.s       $f14, $f14, $f10
    ctx->pc = 0x251784u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
    // 0x251788: 0x460e7042  mul.s       $f1, $f14, $f14
    ctx->pc = 0x251788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x25178c: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x25178cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x251790: 0x460e08c2  mul.s       $f3, $f1, $f14
    ctx->pc = 0x251790u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x251794: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x251794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x251798: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x251798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25179c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x25179cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2517a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2517a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2517a4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2517a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2517a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2517a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2517ac: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x2517acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x2517b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2517b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2517b4: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x2517b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x2517b8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2517b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2517bc: 0x46037380  add.s       $f14, $f14, $f3
    ctx->pc = 0x2517bcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[3]);
    // 0x2517c0: 0x46047382  mul.s       $f14, $f14, $f4
    ctx->pc = 0x2517c0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x2517c4: 0x460a6302  mul.s       $f12, $f12, $f10
    ctx->pc = 0x2517c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x2517c8: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x2517c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2517cc: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2517ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2517d0: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x2517d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2517d4: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2517d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2517d8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2517d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2517dc: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x2517dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2517e0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2517e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2517e4: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x2517e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x2517e8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2517e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2517ec: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x2517ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x2517f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2517f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2517f4: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x2517f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x2517f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2517f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2517fc: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x2517fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x251800: 0x46046302  mul.s       $f12, $f12, $f4
    ctx->pc = 0x251800u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x251804: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x251804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_251808:
    // 0x251808: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x251808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25180c: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x25180cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x251810: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x251810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x251814: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x251814u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251818: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x251818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x25181c: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x25181cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x251820: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x251820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251824: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x251824u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x251828: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x251828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x25182c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x25182cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x251830: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x251830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x251834: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x251834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251838: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x251838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25183c: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x25183cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x251840: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x251840u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x251844: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x251844u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251848: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x251848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x25184c: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x25184cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x251850: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x251850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251854: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x251854u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x251858: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x251858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x25185c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x25185cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x251860: 0x3e00008  jr          $ra
    ctx->pc = 0x251860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251860u;
        // 0x251864: 0xe4820014  swc1        $f2, 0x14($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251868u;
}
