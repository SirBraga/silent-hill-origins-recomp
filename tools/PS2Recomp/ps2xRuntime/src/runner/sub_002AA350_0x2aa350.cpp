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

// Function: sub_002AA350
// Address: 0x2aa350 - 0x2aa550
void sub_002AA350_0x2aa350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA350_0x2aa350");
#endif

    ctx->pc = 0x2aa350u;

    // 0x2aa350: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x2aa350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa354: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aa354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aa358: 0xc4e50008  lwc1        $f5, 0x8($a3)
    ctx->pc = 0x2aa358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2aa35c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2aa35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa360: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x2aa360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aa364: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2aa364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa368: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x2aa368u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2aa36c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2aa36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aa370: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2aa370u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2aa374: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2aa374u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2aa378: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x2aa378u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2aa37c: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x2aa37cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2aa380: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2aa380u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2aa384: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x2aa384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aa388: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2aa388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2aa38c: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x2aa38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa390: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x2aa390u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2aa394: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x2aa394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa398: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2aa398u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2aa39c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2aa39cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2aa3a0: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x2aa3a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2aa3a4: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x2aa3a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2aa3a8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2aa3a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2aa3ac: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x2aa3acu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2aa3b0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2aa3b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2aa3b4: 0x46011a40  add.s       $f9, $f3, $f1
    ctx->pc = 0x2aa3b4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2aa3b8: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x2aa3b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2aa3bc: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2aa3bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2aa3c0: 0x46094802  mul.s       $f0, $f9, $f9
    ctx->pc = 0x2aa3c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x2aa3c4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2aa3c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2aa3c8: 0x460c1341  sub.s       $f13, $f2, $f12
    ctx->pc = 0x2aa3c8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x2aa3cc: 0x46066834  c.lt.s      $f13, $f6
    ctx->pc = 0x2aa3ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa3d0: 0x0  nop
    ctx->pc = 0x2aa3d0u;
    // NOP
    // 0x2aa3d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2AA3D4u;
    {
        const bool branch_taken_0x2aa3d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA3D4u;
        // 0x2aa3d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa3d4) {
            ctx->pc = 0x2AA3E0u;
            goto label_2aa3e0;
        }
    }
    ctx->pc = 0x2AA3DCu;
    // 0x2aa3dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aa3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa3e0:
    // 0x2aa3e0: 0x10800058  beqz        $a0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2AA3E0u;
    {
        const bool branch_taken_0x2aa3e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa3e0) {
            ctx->pc = 0x2AA544u;
            goto label_2aa544;
        }
    }
    ctx->pc = 0x2AA3E8u;
    // 0x2aa3e8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AA3E8u;
    {
        const bool branch_taken_0x2aa3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa3e8) {
            ctx->pc = 0x2AA3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA3E8u;
            // 0x2aa3ec: 0xc4c70000  lwc1        $f7, 0x0($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA410u;
            goto label_2aa410;
        }
    }
    ctx->pc = 0x2AA3F0u;
    // 0x2aa3f0: 0x55400007  bnel        $t2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA3F0u;
    {
        const bool branch_taken_0x2aa3f0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa3f0) {
            ctx->pc = 0x2AA3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA3F0u;
            // 0x2aa3f4: 0xc4c70000  lwc1        $f7, 0x0($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA410u;
            goto label_2aa410;
        }
    }
    ctx->pc = 0x2AA3F8u;
    // 0x2aa3f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa3fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa3fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa404: 0xe4860000  swc1        $f6, 0x0($a0)
    ctx->pc = 0x2aa404u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2aa408: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2AA408u;
    {
        const bool branch_taken_0x2aa408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA408u;
        // 0x2aa40c: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa408) {
            ctx->pc = 0x2AA544u;
            goto label_2aa544;
        }
    }
    ctx->pc = 0x2AA410u;
label_2aa410:
    // 0x2aa410: 0xc4c80004  lwc1        $f8, 0x4($a2)
    ctx->pc = 0x2aa410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2aa414: 0xc5050000  lwc1        $f5, 0x0($t0)
    ctx->pc = 0x2aa414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2aa418: 0x46003b06  mov.s       $f12, $f7
    ctx->pc = 0x2aa418u;
    ctx->f[12] = FPU_MOV_S(ctx->f[7]);
    // 0x2aa41c: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x2aa41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aa420: 0x460042c6  mov.s       $f11, $f8
    ctx->pc = 0x2aa420u;
    ctx->f[11] = FPU_MOV_S(ctx->f[8]);
    // 0x2aa424: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x2aa424u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x2aa428: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x2aa428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2aa42c: 0x460340c2  mul.s       $f3, $f8, $f3
    ctx->pc = 0x2aa42cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x2aa430: 0xc5040008  lwc1        $f4, 0x8($t0)
    ctx->pc = 0x2aa430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aa434: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2aa434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa438: 0x46003286  mov.s       $f10, $f6
    ctx->pc = 0x2aa438u;
    ctx->f[10] = FPU_MOV_S(ctx->f[6]);
    // 0x2aa43c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2aa43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa440: 0x46043102  mul.s       $f4, $f6, $f4
    ctx->pc = 0x2aa440u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x2aa444: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x2aa444u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x2aa448: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2aa448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa44c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2aa44cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2aa450: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x2aa450u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x2aa454: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x2aa454u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x2aa458: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2aa458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2aa45c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2aa45cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2aa460: 0x460928c2  mul.s       $f3, $f5, $f9
    ctx->pc = 0x2aa460u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x2aa464: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aa468: 0x15200006  bnez        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AA468u;
    {
        const bool branch_taken_0x2aa468 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA468u;
        // 0x2aa46c: 0x460301c1  sub.s       $f7, $f0, $f3 (Delay Slot)
        ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa468) {
            ctx->pc = 0x2AA484u;
            goto label_2aa484;
        }
    }
    ctx->pc = 0x2AA470u;
    // 0x2aa470: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2aa470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa474: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x2aa474u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa478: 0x0  nop
    ctx->pc = 0x2aa478u;
    // NOP
    // 0x2aa47c: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x2AA47Cu;
    {
        const bool branch_taken_0x2aa47c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AA480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA47Cu;
        // 0x2aa480: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa47c) {
            ctx->pc = 0x2AA544u;
            goto label_2aa544;
        }
    }
    ctx->pc = 0x2AA484u;
label_2aa484:
    // 0x2aa484: 0x460b5842  mul.s       $f1, $f11, $f11
    ctx->pc = 0x2aa484u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x2aa488: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x2aa488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2aa48c: 0x460a5082  mul.s       $f2, $f10, $f10
    ctx->pc = 0x2aa48cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x2aa490: 0x460528c2  mul.s       $f3, $f5, $f5
    ctx->pc = 0x2aa490u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2aa494: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aa498: 0x46073902  mul.s       $f4, $f7, $f7
    ctx->pc = 0x2aa498u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2aa49c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2aa49cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2aa4a0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2aa4a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2aa4a4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2aa4a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2aa4a8: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x2aa4a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2aa4ac: 0x46012081  sub.s       $f2, $f4, $f1
    ctx->pc = 0x2aa4acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2aa4b0: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x2aa4b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa4b4: 0x0  nop
    ctx->pc = 0x2aa4b4u;
    // NOP
    // 0x2aa4b8: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x2AA4B8u;
    {
        const bool branch_taken_0x2aa4b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AA4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA4B8u;
        // 0x2aa4bc: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa4b8) {
            ctx->pc = 0x2AA510u;
            goto label_2aa510;
        }
    }
    ctx->pc = 0x2AA4C0u;
    // 0x2aa4c0: 0x1520000b  bnez        $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x2AA4C0u;
    {
        const bool branch_taken_0x2aa4c0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA4C0u;
        // 0x2aa4c4: 0x46003801  sub.s       $f0, $f7, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa4c0) {
            ctx->pc = 0x2AA4F0u;
            goto label_2aa4f0;
        }
    }
    ctx->pc = 0x2AA4C8u;
    // 0x2aa4c8: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x2aa4c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa4cc: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2AA4CCu;
    {
        const bool branch_taken_0x2aa4cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2aa4cc) {
            ctx->pc = 0x2AA518u;
            goto label_2aa518;
        }
    }
    ctx->pc = 0x2AA4D4u;
    // 0x2aa4d4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2aa4d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2aa4d8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2aa4d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa4dc: 0x0  nop
    ctx->pc = 0x2aa4dcu;
    // NOP
    // 0x2aa4e0: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x2AA4E0u;
    {
        const bool branch_taken_0x2aa4e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AA4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA4E0u;
        // 0x2aa4e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa4e0) {
            ctx->pc = 0x2AA544u;
            goto label_2aa544;
        }
    }
    ctx->pc = 0x2AA4E8u;
    // 0x2aa4e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2AA4E8u;
    {
        const bool branch_taken_0x2aa4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa4e8) {
            ctx->pc = 0x2AA518u;
            goto label_2aa518;
        }
    }
    ctx->pc = 0x2AA4F0u;
label_2aa4f0:
    // 0x2aa4f0: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x2aa4f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa4f4: 0x0  nop
    ctx->pc = 0x2aa4f4u;
    // NOP
    // 0x2aa4f8: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x2AA4F8u;
    {
        const bool branch_taken_0x2aa4f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AA4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA4F8u;
        // 0x2aa4fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa4f8) {
            ctx->pc = 0x2AA544u;
            goto label_2aa544;
        }
    }
    ctx->pc = 0x2AA500u;
    // 0x2aa500: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2aa500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2aa504: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2aa504u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa508: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA508u;
    {
        const bool branch_taken_0x2aa508 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2aa508) {
            ctx->pc = 0x2AA518u;
            goto label_2aa518;
        }
    }
    ctx->pc = 0x2AA510u;
label_2aa510:
    // 0x2aa510: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2AA510u;
    {
        const bool branch_taken_0x2aa510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA510u;
        // 0x2aa514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa510) {
            ctx->pc = 0x2AA544u;
            goto label_2aa544;
        }
    }
    ctx->pc = 0x2AA518u;
label_2aa518:
    // 0x2aa518: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa51c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa51cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa520: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA520u;
    {
        const bool branch_taken_0x2aa520 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa520) {
            ctx->pc = 0x2AA530u;
            goto label_2aa530;
        }
    }
    ctx->pc = 0x2AA528u;
    // 0x2aa528: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2aa528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2aa52c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa52cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2aa530:
    // 0x2aa530: 0x46020004  c1          0x20004
    ctx->pc = 0x2aa530u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[2]);
    // 0x2aa534: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2aa534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aa538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa53c: 0x46003801  sub.s       $f0, $f7, $f0
    ctx->pc = 0x2aa53cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x2aa540: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2aa540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2aa544:
    // 0x2aa544: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA544u;
        // 0x2aa548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA54Cu;
    // 0x2aa54c: 0x0  nop
    ctx->pc = 0x2aa54cu;
    // NOP
    ctx->pc = 0x2aa550u;
}
