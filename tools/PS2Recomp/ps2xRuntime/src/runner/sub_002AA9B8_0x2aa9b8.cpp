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

// Function: sub_002AA9B8
// Address: 0x2aa9b8 - 0x2aaae8
void sub_002AA9B8_0x2aa9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA9B8_0x2aa9b8");
#endif

    ctx->pc = 0x2aa9b8u;

    // 0x2aa9b8: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x2aa9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aa9bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aa9bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aa9c0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2aa9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa9c4: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2aa9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa9c8: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x2aa9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aa9cc: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x2aa9ccu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2aa9d0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2aa9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa9d4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2aa9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa9d8: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x2aa9d8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2aa9dc: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2aa9dcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2aa9e0: 0xe7a80008  swc1        $f8, 0x8($sp)
    ctx->pc = 0x2aa9e0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2aa9e4: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x2aa9e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2aa9e8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2aa9e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2aa9ec: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x2aa9ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2aa9f0: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x2aa9f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2aa9f4: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x2aa9f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2aa9f8: 0x46084082  mul.s       $f2, $f8, $f8
    ctx->pc = 0x2aa9f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x2aa9fc: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x2aa9fcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2aaa00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aaa00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aaa04: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2aaa04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2aaa08: 0x460c0281  sub.s       $f10, $f0, $f12
    ctx->pc = 0x2aaa08u;
    ctx->f[10] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2aaa0c: 0x46095034  c.lt.s      $f10, $f9
    ctx->pc = 0x2aaa0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aaa10: 0x0  nop
    ctx->pc = 0x2aaa10u;
    // NOP
    // 0x2aaa14: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2AAA14u;
    {
        const bool branch_taken_0x2aaa14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AAA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA14u;
        // 0x2aaa18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa14) {
            ctx->pc = 0x2AAA20u;
            goto label_2aaa20;
        }
    }
    ctx->pc = 0x2AAA1Cu;
    // 0x2aaa1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aaa1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aaa20:
    // 0x2aaa20: 0x1080002e  beqz        $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2AAA20u;
    {
        const bool branch_taken_0x2aaa20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaa20) {
            ctx->pc = 0x2AAADCu;
            goto label_2aaadc;
        }
    }
    ctx->pc = 0x2AAA28u;
    // 0x2aaa28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AAA28u;
    {
        const bool branch_taken_0x2aaa28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA28u;
        // 0x2aaa2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa28) {
            ctx->pc = 0x2AAA44u;
            goto label_2aaa44;
        }
    }
    ctx->pc = 0x2AAA30u;
    // 0x2aaa30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aaa30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aaa34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aaa34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaa38: 0xe4890000  swc1        $f9, 0x0($a0)
    ctx->pc = 0x2aaa38u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2aaa3c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2AAA3Cu;
    {
        const bool branch_taken_0x2aaa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA3Cu;
        // 0x2aaa40: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa3c) {
            ctx->pc = 0x2AAADCu;
            goto label_2aaadc;
        }
    }
    ctx->pc = 0x2AAA44u;
label_2aaa44:
    // 0x2aaa44: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x2aaa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2aaa48: 0xc4c70004  lwc1        $f7, 0x4($a2)
    ctx->pc = 0x2aaa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2aaa4c: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x2aaa4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2aaa50: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x2aaa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2aaa54: 0x46071842  mul.s       $f1, $f3, $f7
    ctx->pc = 0x2aaa54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2aaa58: 0x46054082  mul.s       $f2, $f8, $f5
    ctx->pc = 0x2aaa58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x2aaa5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aaa5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aaa60: 0x46020100  add.s       $f4, $f0, $f2
    ctx->pc = 0x2aaa60u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2aaa64: 0x46092036  c.le.s      $f4, $f9
    ctx->pc = 0x2aaa64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aaa68: 0x0  nop
    ctx->pc = 0x2aaa68u;
    // NOP
    // 0x2aaa6c: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x2AAA6Cu;
    {
        const bool branch_taken_0x2aaa6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA6Cu;
        // 0x2aaa70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa6c) {
            ctx->pc = 0x2AAADCu;
            goto label_2aaadc;
        }
    }
    ctx->pc = 0x2AAA74u;
    // 0x2aaa74: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x2aaa74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2aaa78: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x2aaa78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2aaa7c: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x2aaa7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2aaa80: 0x460420c2  mul.s       $f3, $f4, $f4
    ctx->pc = 0x2aaa80u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2aaa84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aaa84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aaa88: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2aaa88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2aaa8c: 0x460a0042  mul.s       $f1, $f0, $f10
    ctx->pc = 0x2aaa8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x2aaa90: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2aaa90u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2aaa94: 0x46091834  c.lt.s      $f3, $f9
    ctx->pc = 0x2aaa94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aaa98: 0x0  nop
    ctx->pc = 0x2aaa98u;
    // NOP
    // 0x2aaa9c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2AAA9Cu;
    {
        const bool branch_taken_0x2aaa9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AAAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA9Cu;
        // 0x2aaaa0: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa9c) {
            ctx->pc = 0x2AAAC4u;
            goto label_2aaac4;
        }
    }
    ctx->pc = 0x2AAAA4u;
    // 0x2aaaa4: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x2aaaa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2aaaa8: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x2aaaa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aaaac: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2AAAACu;
    {
        const bool branch_taken_0x2aaaac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2aaaac) {
            ctx->pc = 0x2AAACCu;
            goto label_2aaacc;
        }
    }
    ctx->pc = 0x2AAAB4u;
    // 0x2aaab4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2aaab4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2aaab8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2aaab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aaabc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAABCu;
    {
        const bool branch_taken_0x2aaabc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2aaabc) {
            ctx->pc = 0x2AAACCu;
            goto label_2aaacc;
        }
    }
    ctx->pc = 0x2AAAC4u;
label_2aaac4:
    // 0x2aaac4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AAAC4u;
    {
        const bool branch_taken_0x2aaac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAAC4u;
        // 0x2aaac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaac4) {
            ctx->pc = 0x2AAADCu;
            goto label_2aaadc;
        }
    }
    ctx->pc = 0x2AAACCu;
label_2aaacc:
    // 0x2aaacc: 0x46030004  c1          0x30004
    ctx->pc = 0x2aaaccu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[3]);
    // 0x2aaad0: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x2aaad0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2aaad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aaad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aaad8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2aaad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2aaadc:
    // 0x2aaadc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAADCu;
        // 0x2aaae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AAAE4u;
    // 0x2aaae4: 0x0  nop
    ctx->pc = 0x2aaae4u;
    // NOP
    ctx->pc = 0x2aaae8u;
}
