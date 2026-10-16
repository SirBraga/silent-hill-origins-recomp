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

// Function: sub_0022B9B8
// Address: 0x22b9b8 - 0x22bb08
void sub_0022B9B8_0x22b9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B9B8_0x22b9b8");
#endif

    ctx->pc = 0x22b9b8u;

    // 0x22b9b8: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x22b9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b9bc: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x22b9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b9c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22b9c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22b9c4: 0x46000a80  add.s       $f10, $f1, $f0
    ctx->pc = 0x22b9c4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22b9c8: 0xe48a0014  swc1        $f10, 0x14($a0)
    ctx->pc = 0x22b9c8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x22b9cc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x22b9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b9d0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x22b9d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b9d4: 0x0  nop
    ctx->pc = 0x22b9d4u;
    // NOP
    // 0x22b9d8: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x22B9D8u;
    {
        const bool branch_taken_0x22b9d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9D8u;
        // 0x22b9dc: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b9d8) {
            ctx->pc = 0x22BAA8u;
            goto label_22baa8;
        }
    }
    ctx->pc = 0x22B9E0u;
    // 0x22b9e0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x22b9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b9e4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x22b9e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b9e8: 0x0  nop
    ctx->pc = 0x22b9e8u;
    // NOP
    // 0x22b9ec: 0x45020030  bc1fl       . + 4 + (0x30 << 2)
    ctx->pc = 0x22B9ECu;
    {
        const bool branch_taken_0x22b9ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b9ec) {
            ctx->pc = 0x22B9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B9ECu;
            // 0x22b9f0: 0xc4c10004  lwc1        $f1, 0x4($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BAB0u;
            goto label_22bab0;
        }
    }
    ctx->pc = 0x22B9F4u;
    // 0x22b9f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22b9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22b9f8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x22b9f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x22b9fc: 0x0  nop
    ctx->pc = 0x22b9fcu;
    // NOP
    // 0x22ba00: 0x46004243  div.s       $f9, $f8, $f0
    ctx->pc = 0x22ba00u;
    ctx->f[9] = FPU_DIV_S(ctx, ctx->f[8], ctx->f[0]);
    // 0x22ba04: 0x46014203  div.s       $f8, $f8, $f1
    ctx->pc = 0x22ba04u;
    ctx->f[8] = FPU_DIV_S(ctx, ctx->f[8], ctx->f[1]);
    // 0x22ba08: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x22ba08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ba0c: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x22ba0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22ba10: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x22ba10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x22ba14: 0xc4a6000c  lwc1        $f6, 0xC($a1)
    ctx->pc = 0x22ba14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x22ba18: 0xc4a70010  lwc1        $f7, 0x10($a1)
    ctx->pc = 0x22ba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x22ba1c: 0x46082942  mul.s       $f5, $f5, $f8
    ctx->pc = 0x22ba1cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x22ba20: 0x46083182  mul.s       $f6, $f6, $f8
    ctx->pc = 0x22ba20u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x22ba24: 0x460839c2  mul.s       $f7, $f7, $f8
    ctx->pc = 0x22ba24u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x22ba28: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x22ba28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ba2c: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x22ba2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22ba30: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x22ba30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x22ba34: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x22ba34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22ba38: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x22ba38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22ba3c: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x22ba3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x22ba40: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x22ba40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x22ba44: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x22ba44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x22ba48: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x22ba48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x22ba4c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x22ba4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x22ba50: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x22ba50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x22ba54: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x22ba54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x22ba58: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22ba58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22ba5c: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x22ba5cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x22ba60: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22ba60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22ba64: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x22ba64u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x22ba68: 0x460439c1  sub.s       $f7, $f7, $f4
    ctx->pc = 0x22ba68u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x22ba6c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x22ba6cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22ba70: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x22ba70u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22ba74: 0xe7a7000c  swc1        $f7, 0xC($sp)
    ctx->pc = 0x22ba74u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x22ba78: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x22ba78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x22ba7c: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x22ba7cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x22ba80: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x22ba80u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x22ba84: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x22ba84u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x22ba88: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x22ba88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x22ba8c: 0x46094200  add.s       $f8, $f8, $f9
    ctx->pc = 0x22ba8cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
    // 0x22ba90: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x22ba90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x22ba94: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x22ba94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x22ba98: 0x46080003  div.s       $f0, $f0, $f8
    ctx->pc = 0x22ba98u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[8]);
    // 0x22ba9c: 0x46005000  add.s       $f0, $f10, $f0
    ctx->pc = 0x22ba9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x22baa0: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x22baa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x22baa4: 0x0  nop
    ctx->pc = 0x22baa4u;
    // NOP
label_22baa8:
    // 0x22baa8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x22baa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22baac: 0x0  nop
    ctx->pc = 0x22baacu;
    // NOP
label_22bab0:
    // 0x22bab0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x22bab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bab4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22bab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22bab8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x22bab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x22babc: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x22babcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bac0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x22bac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bac4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22bac4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22bac8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x22bac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x22bacc: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x22baccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bad0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x22bad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bad4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22bad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22bad8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22bad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22badc: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x22badcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bae0: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x22bae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bae4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22bae4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22bae8: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x22bae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x22baec: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x22baecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22baf0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x22baf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22baf4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22baf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22baf8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x22baf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x22bafc: 0x3e00008  jr          $ra
    ctx->pc = 0x22BAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAFCu;
        // 0x22bb00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BB04u;
    // 0x22bb04: 0x0  nop
    ctx->pc = 0x22bb04u;
    // NOP
    ctx->pc = 0x22bb08u;
}
