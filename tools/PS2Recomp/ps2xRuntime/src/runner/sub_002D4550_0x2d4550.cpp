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

// Function: sub_002D4550
// Address: 0x2d4550 - 0x2d4648
void sub_002D4550_0x2d4550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4550_0x2d4550");
#endif

    ctx->pc = 0x2d4550u;

    // 0x2d4550: 0xc4a80004  lwc1        $f8, 0x4($a1)
    ctx->pc = 0x2d4550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2d4554: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d4554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d4558: 0xc4870004  lwc1        $f7, 0x4($a0)
    ctx->pc = 0x2d4558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d455c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d455cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4560: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2d4560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4564: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2d4564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4568: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x2d4568u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x2d456c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2d456cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4570: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x2d4570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d4574: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d4574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d4578: 0xc4860014  lwc1        $f6, 0x14($a0)
    ctx->pc = 0x2d4578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d457c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2d457cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d4580: 0xc4890024  lwc1        $f9, 0x24($a0)
    ctx->pc = 0x2d4580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2d4584: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2d4584u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2d4588: 0x46064182  mul.s       $f6, $f8, $f6
    ctx->pc = 0x2d4588u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x2d458c: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x2d458cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d4590: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x2d4590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d4594: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x2d4594u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x2d4598: 0xc4830018  lwc1        $f3, 0x18($a0)
    ctx->pc = 0x2d4598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d459c: 0x46094202  mul.s       $f8, $f8, $f9
    ctx->pc = 0x2d459cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
    // 0x2d45a0: 0xc4870028  lwc1        $f7, 0x28($a0)
    ctx->pc = 0x2d45a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d45a4: 0x46052142  mul.s       $f5, $f4, $f5
    ctx->pc = 0x2d45a4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2d45a8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2d45a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2d45ac: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2d45acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2d45b0: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x2d45b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x2d45b4: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x2d45b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x2d45b8: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2d45b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2d45bc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2d45bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2d45c0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2d45c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2d45c4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2d45c4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2d45c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d45c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d45cc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d45ccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d45d0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2d45d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d45d4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2d45d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d45d8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2d45d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d45dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D45DCu;
    {
        const bool branch_taken_0x2d45dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D45E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45DCu;
        // 0x2d45e0: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d45dc) {
            ctx->pc = 0x2D45E8u;
            goto label_2d45e8;
        }
    }
    ctx->pc = 0x2D45E4u;
    // 0x2d45e4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2d45e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2d45e8:
    // 0x2d45e8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2d45e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d45ec: 0x0  nop
    ctx->pc = 0x2d45ecu;
    // NOP
    // 0x2d45f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D45F0u;
    {
        const bool branch_taken_0x2d45f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d45f0) {
            ctx->pc = 0x2D45F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D45F0u;
            // 0x2d45f4: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D45F8u;
            goto label_2d45f8;
        }
    }
    ctx->pc = 0x2D45F8u;
label_2d45f8:
    // 0x2d45f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d45f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d45fc: 0x0  nop
    ctx->pc = 0x2d45fcu;
    // NOP
    // 0x2d4600: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D4600u;
    {
        const bool branch_taken_0x2d4600 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D4604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4600u;
        // 0x2d4604: 0x3c022131  lui         $v0, 0x2131 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4600) {
            ctx->pc = 0x2D460Cu;
            goto label_2d460c;
        }
    }
    ctx->pc = 0x2D4608u;
    // 0x2d4608: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2d4608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_2d460c:
    // 0x2d460c: 0x34422300  ori         $v0, $v0, 0x2300
    ctx->pc = 0x2d460cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8960);
    // 0x2d4610: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x2d4610u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2d4614: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2d4614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2d4618: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2d4618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d461c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d461cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d4620: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2d4620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4624: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d4624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4628: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2d4628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2d462c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d462cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4630: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2d4630u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2d4634: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d4634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4638: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2d4638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2d463c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D463Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D463Cu;
        // 0x2d4640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D463Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4644u;
    // 0x2d4644: 0x0  nop
    ctx->pc = 0x2d4644u;
    // NOP
    ctx->pc = 0x2d4648u;
}
