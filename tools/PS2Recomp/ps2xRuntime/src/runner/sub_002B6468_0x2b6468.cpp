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

// Function: sub_002B6468
// Address: 0x2b6468 - 0x2b65a0
void sub_002B6468_0x2b6468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6468_0x2b6468");
#endif

    ctx->pc = 0x2b6468u;

    // 0x2b6468: 0xc4a90010  lwc1        $f9, 0x10($a1)
    ctx->pc = 0x2b6468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2b646c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b646cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6470: 0xc784813c  lwc1        $f4, -0x7EC4($gp)
    ctx->pc = 0x2b6470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b6474: 0xc4aa0014  lwc1        $f10, 0x14($a1)
    ctx->pc = 0x2b6474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2b6478: 0xc4a80018  lwc1        $f8, 0x18($a1)
    ctx->pc = 0x2b6478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2b647c: 0x46044b02  mul.s       $f12, $f9, $f4
    ctx->pc = 0x2b647cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x2b6480: 0x46045342  mul.s       $f13, $f10, $f4
    ctx->pc = 0x2b6480u;
    ctx->f[13] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x2b6484: 0x460442c2  mul.s       $f11, $f8, $f4
    ctx->pc = 0x2b6484u;
    ctx->f[11] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x2b6488: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x2b6488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b648c: 0xc7838140  lwc1        $f3, -0x7EC0($gp)
    ctx->pc = 0x2b648cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b6490: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x2b6490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b6494: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x2b6494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b6498: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x2b6498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2b649c: 0x46033042  mul.s       $f1, $f6, $f3
    ctx->pc = 0x2b649cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2b64a0: 0x46033882  mul.s       $f2, $f7, $f3
    ctx->pc = 0x2b64a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x2b64a4: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2b64a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2b64a8: 0x46015ac0  add.s       $f11, $f11, $f1
    ctx->pc = 0x2b64a8u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[1]);
    // 0x2b64ac: 0x46026b40  add.s       $f13, $f13, $f2
    ctx->pc = 0x2b64acu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x2b64b0: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2b64b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b64b4: 0xe7ab0018  swc1        $f11, 0x18($sp)
    ctx->pc = 0x2b64b4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b64b8: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x2b64b8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b64bc: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x2b64bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2b64c0: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x2b64c0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x2b64c4: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x2b64c4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x2b64c8: 0x46034a42  mul.s       $f9, $f9, $f3
    ctx->pc = 0x2b64c8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x2b64cc: 0x46034202  mul.s       $f8, $f8, $f3
    ctx->pc = 0x2b64ccu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x2b64d0: 0x46035282  mul.s       $f10, $f10, $f3
    ctx->pc = 0x2b64d0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x2b64d4: 0x46092940  add.s       $f5, $f5, $f9
    ctx->pc = 0x2b64d4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[9]);
    // 0x2b64d8: 0x46083180  add.s       $f6, $f6, $f8
    ctx->pc = 0x2b64d8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x2b64dc: 0x460a39c0  add.s       $f7, $f7, $f10
    ctx->pc = 0x2b64dcu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
    // 0x2b64e0: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x2b64e0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b64e4: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x2b64e4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b64e8: 0xe7a70004  swc1        $f7, 0x4($sp)
    ctx->pc = 0x2b64e8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b64ec: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2b64ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b64f0: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2b64f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b64f4: 0x0  nop
    ctx->pc = 0x2b64f4u;
    // NOP
    // 0x2b64f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B64F8u;
    {
        const bool branch_taken_0x2b64f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B64FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64F8u;
        // 0x2b64fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b64f8) {
            ctx->pc = 0x2B6508u;
            goto label_2b6508;
        }
    }
    ctx->pc = 0x2B6500u;
    // 0x2b6500: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b6500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6504: 0x0  nop
    ctx->pc = 0x2b6504u;
    // NOP
label_2b6508:
    // 0x2b6508: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2b6508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b650c: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x2b650cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6510: 0x0  nop
    ctx->pc = 0x2b6510u;
    // NOP
    // 0x2b6514: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B6514u;
    {
        const bool branch_taken_0x2b6514 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6514) {
            ctx->pc = 0x2B6518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6514u;
            // 0x2b6518: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B651Cu;
            goto label_2b651c;
        }
    }
    ctx->pc = 0x2B651Cu;
label_2b651c:
    // 0x2b651c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2b651cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6520: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2b6520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6524: 0x0  nop
    ctx->pc = 0x2b6524u;
    // NOP
    // 0x2b6528: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6528u;
    {
        const bool branch_taken_0x2b6528 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6528u;
        // 0x2b652c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6528) {
            ctx->pc = 0x2B6534u;
            goto label_2b6534;
        }
    }
    ctx->pc = 0x2B6530u;
    // 0x2b6530: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b6530u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6534:
    // 0x2b6534: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x2b6534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6538: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2b6538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b653c: 0x0  nop
    ctx->pc = 0x2b653cu;
    // NOP
    // 0x2b6540: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6540u;
    {
        const bool branch_taken_0x2b6540 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B6544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6540u;
        // 0x2b6544: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6540) {
            ctx->pc = 0x2B654Cu;
            goto label_2b654c;
        }
    }
    ctx->pc = 0x2B6548u;
    // 0x2b6548: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2b6548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_2b654c:
    // 0x2b654c: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x2b654cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6550: 0x46005834  c.lt.s      $f11, $f0
    ctx->pc = 0x2b6550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6554: 0x0  nop
    ctx->pc = 0x2b6554u;
    // NOP
    // 0x2b6558: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6558u;
    {
        const bool branch_taken_0x2b6558 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6558u;
        // 0x2b655c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6558) {
            ctx->pc = 0x2B6564u;
            goto label_2b6564;
        }
    }
    ctx->pc = 0x2B6560u;
    // 0x2b6560: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2b6560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2b6564:
    // 0x2b6564: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2b6564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6568: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2b6568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b656c: 0x0  nop
    ctx->pc = 0x2b656cu;
    // NOP
    // 0x2b6570: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6570u;
    {
        const bool branch_taken_0x2b6570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6570) {
            ctx->pc = 0x2B6574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6570u;
            // 0x2b6574: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B658Cu;
            goto label_2b658c;
        }
    }
    ctx->pc = 0x2B6578u;
    // 0x2b6578: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b6578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b657c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2b657cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b6580: 0x38430007  xori        $v1, $v0, 0x7
    ctx->pc = 0x2b6580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x2b6584: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6584u;
    {
        const bool branch_taken_0x2b6584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6584u;
        // 0x2b6588: 0x2c620001  sltiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6584) {
            ctx->pc = 0x2B6594u;
            goto label_2b6594;
        }
    }
    ctx->pc = 0x2B658Cu;
label_2b658c:
    // 0x2b658c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2b658cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x2b6590: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2b6590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2b6594:
    // 0x2b6594: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6594u;
        // 0x2b6598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B659Cu;
    // 0x2b659c: 0x0  nop
    ctx->pc = 0x2b659cu;
    // NOP
    ctx->pc = 0x2b65a0u;
}
