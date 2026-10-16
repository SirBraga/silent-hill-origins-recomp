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

// Function: sub_0022BB08
// Address: 0x22bb08 - 0x22bc38
void sub_0022BB08_0x22bb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BB08_0x22bb08");
#endif

    ctx->pc = 0x22bb08u;

    // 0x22bb08: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x22bb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bb0c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22bb0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22bb10: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x22bb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bb14: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x22bb14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22bb18: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x22bb18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x22bb1c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x22bb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bb20: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x22bb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bb24: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x22bb24u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22bb28: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x22bb28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x22bb2c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x22bb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bb30: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x22bb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bb34: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x22bb34u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22bb38: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x22bb38u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x22bb3c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x22bb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bb40: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x22bb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bb44: 0x46000981  sub.s       $f6, $f1, $f0
    ctx->pc = 0x22bb44u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22bb48: 0xe486000c  swc1        $f6, 0xC($a0)
    ctx->pc = 0x22bb48u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22bb4c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x22bb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bb50: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x22bb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bb54: 0x460009c1  sub.s       $f7, $f1, $f0
    ctx->pc = 0x22bb54u;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22bb58: 0xe4870010  swc1        $f7, 0x10($a0)
    ctx->pc = 0x22bb58u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x22bb5c: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x22bb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bb60: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x22bb60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x22bb64: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x22bb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bb68: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x22bb68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bb6c: 0x46000a81  sub.s       $f10, $f1, $f0
    ctx->pc = 0x22bb6cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22bb70: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x22BB70u;
    {
        const bool branch_taken_0x22bb70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB70u;
        // 0x22bb74: 0xe48a0014  swc1        $f10, 0x14($a0) (Delay Slot)
        { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb70) {
            ctx->pc = 0x22BC30u;
            goto label_22bc30;
        }
    }
    ctx->pc = 0x22BB78u;
    // 0x22bb78: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x22bb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bb7c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x22bb7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bb80: 0x0  nop
    ctx->pc = 0x22bb80u;
    // NOP
    // 0x22bb84: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x22BB84u;
    {
        const bool branch_taken_0x22bb84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bb84) {
            ctx->pc = 0x22BC30u;
            goto label_22bc30;
        }
    }
    ctx->pc = 0x22BB8Cu;
    // 0x22bb8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22bb8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22bb90: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x22bb90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x22bb94: 0x0  nop
    ctx->pc = 0x22bb94u;
    // NOP
    // 0x22bb98: 0x46024243  div.s       $f9, $f8, $f2
    ctx->pc = 0x22bb98u;
    ctx->f[9] = FPU_DIV_S(ctx, ctx->f[8], ctx->f[2]);
    // 0x22bb9c: 0x46004203  div.s       $f8, $f8, $f0
    ctx->pc = 0x22bb9cu;
    ctx->f[8] = FPU_DIV_S(ctx, ctx->f[8], ctx->f[0]);
    // 0x22bba0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x22bba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bba4: 0xc4c30010  lwc1        $f3, 0x10($a2)
    ctx->pc = 0x22bba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22bba8: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x22bba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x22bbac: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x22bbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bbb0: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x22bbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22bbb4: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x22bbb4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x22bbb8: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x22bbb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x22bbbc: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x22bbbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x22bbc0: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x22bbc0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x22bbc4: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x22bbc4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x22bbc8: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x22bbc8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x22bbcc: 0x46093182  mul.s       $f6, $f6, $f9
    ctx->pc = 0x22bbccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x22bbd0: 0x460939c2  mul.s       $f7, $f7, $f9
    ctx->pc = 0x22bbd0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x22bbd4: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x22bbd4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x22bbd8: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x22bbd8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x22bbdc: 0xe7a7001c  swc1        $f7, 0x1C($sp)
    ctx->pc = 0x22bbdcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x22bbe0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x22bbe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x22bbe4: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x22bbe4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x22bbe8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22bbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22bbec: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x22bbecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x22bbf0: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x22bbf0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x22bbf4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x22bbf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22bbf8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x22bbf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22bbfc: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x22bbfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x22bc00: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x22bc00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x22bc04: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x22bc04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x22bc08: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x22bc08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x22bc0c: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x22bc0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x22bc10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22bc10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22bc14: 0x46094200  add.s       $f8, $f8, $f9
    ctx->pc = 0x22bc14u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
    // 0x22bc18: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x22bc18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x22bc1c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x22bc1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x22bc20: 0x46080003  div.s       $f0, $f0, $f8
    ctx->pc = 0x22bc20u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[8]);
    // 0x22bc24: 0x46005001  sub.s       $f0, $f10, $f0
    ctx->pc = 0x22bc24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x22bc28: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x22bc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x22bc2c: 0x0  nop
    ctx->pc = 0x22bc2cu;
    // NOP
label_22bc30:
    // 0x22bc30: 0x3e00008  jr          $ra
    ctx->pc = 0x22BC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC30u;
        // 0x22bc34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BC38u;
}
