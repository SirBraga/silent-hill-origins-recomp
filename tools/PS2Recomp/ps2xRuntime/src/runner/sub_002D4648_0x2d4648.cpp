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

// Function: sub_002D4648
// Address: 0x2d4648 - 0x2d4768
void sub_002D4648_0x2d4648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4648_0x2d4648");
#endif

    ctx->pc = 0x2d4648u;

    // 0x2d4648: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2d4648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d464c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d464cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d4650: 0xc4a80004  lwc1        $f8, 0x4($a1)
    ctx->pc = 0x2d4650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2d4654: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2d4654u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4658: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x2d4658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d465c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2d465cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4660: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x2d4660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d4664: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d4664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4668: 0xc4850010  lwc1        $f5, 0x10($a0)
    ctx->pc = 0x2d4668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d466c: 0x460711c2  mul.s       $f7, $f2, $f7
    ctx->pc = 0x2d466cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2d4670: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x2d4670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4674: 0x46064182  mul.s       $f6, $f8, $f6
    ctx->pc = 0x2d4674u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x2d4678: 0xc4840014  lwc1        $f4, 0x14($a0)
    ctx->pc = 0x2d4678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d467c: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x2d467cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2d4680: 0xc4890024  lwc1        $f9, 0x24($a0)
    ctx->pc = 0x2d4680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2d4684: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2d4684u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d4688: 0x46044102  mul.s       $f4, $f8, $f4
    ctx->pc = 0x2d4688u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x2d468c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2d468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d4690: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2d4690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4694: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x2d4694u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x2d4698: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x2d4698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d469c: 0x46094202  mul.s       $f8, $f8, $f9
    ctx->pc = 0x2d469cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
    // 0x2d46a0: 0xc4860028  lwc1        $f6, 0x28($a0)
    ctx->pc = 0x2d46a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d46a4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2d46a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2d46a8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2d46a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2d46ac: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x2d46acu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x2d46b0: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x2d46b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x2d46b4: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2d46b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2d46b8: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x2d46b8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x2d46bc: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2d46bcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2d46c0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2d46c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2d46c4: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x2d46c4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d46c8: 0x46072834  c.lt.s      $f5, $f7
    ctx->pc = 0x2d46c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d46cc: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x2d46ccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d46d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D46D0u;
    {
        const bool branch_taken_0x2d46d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D46D0u;
        // 0x2d46d4: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d46d0) {
            ctx->pc = 0x2D46DCu;
            goto label_2d46dc;
        }
    }
    ctx->pc = 0x2D46D8u;
    // 0x2d46d8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d46d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2d46dc:
    // 0x2d46dc: 0x46071034  c.lt.s      $f2, $f7
    ctx->pc = 0x2d46dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d46e0: 0x0  nop
    ctx->pc = 0x2d46e0u;
    // NOP
    // 0x2d46e4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D46E4u;
    {
        const bool branch_taken_0x2d46e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d46e4) {
            ctx->pc = 0x2D46E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D46E4u;
            // 0x2d46e8: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D46ECu;
            goto label_2d46ec;
        }
    }
    ctx->pc = 0x2D46ECu;
label_2d46ec:
    // 0x2d46ec: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x2d46ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d46f0: 0x0  nop
    ctx->pc = 0x2d46f0u;
    // NOP
    // 0x2d46f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D46F4u;
    {
        const bool branch_taken_0x2d46f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D46F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D46F4u;
        // 0x2d46f8: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d46f4) {
            ctx->pc = 0x2D4700u;
            goto label_2d4700;
        }
    }
    ctx->pc = 0x2D46FCu;
    // 0x2d46fc: 0x35080004  ori         $t0, $t0, 0x4
    ctx->pc = 0x2d46fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4);
label_2d4700:
    // 0x2d4700: 0x3c042131  lui         $a0, 0x2131
    ctx->pc = 0x2d4700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8497 << 16));
    // 0x2d4704: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x2d4704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x2d4708: 0x34842300  ori         $a0, $a0, 0x2300
    ctx->pc = 0x2d4708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8960);
    // 0x2d470c: 0x34631312  ori         $v1, $v1, 0x1312
    ctx->pc = 0x2d470cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4882);
    // 0x2d4710: 0x1042007  srav        $a0, $a0, $t0
    ctx->pc = 0x2d4710u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 8) & 0x1F));
    // 0x2d4714: 0x1031807  srav        $v1, $v1, $t0
    ctx->pc = 0x2d4714u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 8) & 0x1F));
    // 0x2d4718: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x2d4718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2d471c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2d471cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2d4720: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2d4720u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d4724: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x2d4724u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d4728: 0x3a53021  addu        $a2, $sp, $a1
    ctx->pc = 0x2d4728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x2d472c: 0x3c021230  lui         $v0, 0x1230
    ctx->pc = 0x2d472cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4656 << 16));
    // 0x2d4730: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2d4730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4734: 0x3a72821  addu        $a1, $sp, $a3
    ctx->pc = 0x2d4734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
    // 0x2d4738: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2d4738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d473c: 0x34420321  ori         $v0, $v0, 0x321
    ctx->pc = 0x2d473cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)801);
    // 0x2d4740: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x2d4740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x2d4744: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x2d4744u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x2d4748: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x2d4748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2d474c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2d474cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2d4750: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2d4750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2d4754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d4754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4758: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2d4758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2d475c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d475cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d4760: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4760u;
        // 0x2d4764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4768u;
}
