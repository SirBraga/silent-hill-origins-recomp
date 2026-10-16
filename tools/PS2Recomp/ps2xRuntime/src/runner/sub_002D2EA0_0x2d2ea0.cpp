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

// Function: sub_002D2EA0
// Address: 0x2d2ea0 - 0x2d3020
void sub_002D2EA0_0x2d2ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2EA0_0x2d2ea0");
#endif

    ctx->pc = 0x2d2ea0u;

    // 0x2d2ea0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2d2ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2ea4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d2ea4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d2ea8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2d2ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2eac: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d2eacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d2eb0: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x2d2eb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2d2eb4: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x2d2eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2eb8: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2d2eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d2ebc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d2ebcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d2ec0: 0xe4a30004  swc1        $f3, 0x4($a1)
    ctx->pc = 0x2d2ec0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2d2ec4: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x2d2ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d2ec8: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x2d2ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2ecc: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2d2eccu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2d2ed0: 0xe4a40008  swc1        $f4, 0x8($a1)
    ctx->pc = 0x2d2ed0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2d2ed4: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x2d2ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2ed8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d2ed8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d2edc: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x2d2edcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2d2ee0: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x2d2ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2ee4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d2ee4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d2ee8: 0xe4a30004  swc1        $f3, 0x4($a1)
    ctx->pc = 0x2d2ee8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2d2eec: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x2d2eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2ef0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2d2ef0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2d2ef4: 0xc7818288  lwc1        $f1, -0x7D78($gp)
    ctx->pc = 0x2d2ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2ef8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2d2ef8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2d2efc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2d2efcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2d2f00: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2d2f00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2d2f04: 0xe4a40008  swc1        $f4, 0x8($a1)
    ctx->pc = 0x2d2f04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2d2f08: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x2d2f08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2d2f0c: 0xe4a30004  swc1        $f3, 0x4($a1)
    ctx->pc = 0x2d2f0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2d2f10: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2d2f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2f14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d2f14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f18: 0xc4880004  lwc1        $f8, 0x4($a0)
    ctx->pc = 0x2d2f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2d2f1c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2d2f1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2d2f20: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2d2f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2f24: 0xc4870014  lwc1        $f7, 0x14($a0)
    ctx->pc = 0x2d2f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d2f28: 0x46081a01  sub.s       $f8, $f3, $f8
    ctx->pc = 0x2d2f28u;
    ctx->f[8] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x2d2f2c: 0xc4890020  lwc1        $f9, 0x20($a0)
    ctx->pc = 0x2d2f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2d2f30: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2d2f30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2d2f34: 0xc48a0024  lwc1        $f10, 0x24($a0)
    ctx->pc = 0x2d2f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2d2f38: 0x460719c1  sub.s       $f7, $f3, $f7
    ctx->pc = 0x2d2f38u;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x2d2f3c: 0xc4860008  lwc1        $f6, 0x8($a0)
    ctx->pc = 0x2d2f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d2f40: 0x46091081  sub.s       $f2, $f2, $f9
    ctx->pc = 0x2d2f40u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[9]);
    // 0x2d2f44: 0xc4850018  lwc1        $f5, 0x18($a0)
    ctx->pc = 0x2d2f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d2f48: 0x460a18c1  sub.s       $f3, $f3, $f10
    ctx->pc = 0x2d2f48u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[10]);
    // 0x2d2f4c: 0xc4890028  lwc1        $f9, 0x28($a0)
    ctx->pc = 0x2d2f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2d2f50: 0x46062181  sub.s       $f6, $f4, $f6
    ctx->pc = 0x2d2f50u;
    ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x2d2f54: 0x46052141  sub.s       $f5, $f4, $f5
    ctx->pc = 0x2d2f54u;
    ctx->f[5] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x2d2f58: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2d2f58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2d2f5c: 0x46084202  mul.s       $f8, $f8, $f8
    ctx->pc = 0x2d2f5cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x2d2f60: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2d2f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2d2f64: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x2d2f64u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2d2f68: 0x46092101  sub.s       $f4, $f4, $f9
    ctx->pc = 0x2d2f68u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[9]);
    // 0x2d2f6c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2d2f6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2d2f70: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2d2f70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2d2f74: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x2d2f74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x2d2f78: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2d2f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2d2f7c: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x2d2f7cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2d2f80: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x2d2f80u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2d2f84: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2d2f84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2d2f88: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x2d2f88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2d2f8c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2d2f8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2d2f90: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2d2f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2d2f94: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2d2f94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2d2f98: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d2f98u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d2f9c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d2f9cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d2fa0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2d2fa0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2d2fa4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2d2fa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d2fa8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d2fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2fac: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2d2facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d2fb0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2FB0u;
    {
        const bool branch_taken_0x2d2fb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2FB0u;
        // 0x2d2fb4: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2fb0) {
            ctx->pc = 0x2D2FC0u;
            goto label_2d2fc0;
        }
    }
    ctx->pc = 0x2D2FB8u;
    // 0x2d2fb8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2d2fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d2fbc: 0x0  nop
    ctx->pc = 0x2d2fbcu;
    // NOP
label_2d2fc0:
    // 0x2d2fc0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2d2fc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2fc4: 0x0  nop
    ctx->pc = 0x2d2fc4u;
    // NOP
    // 0x2d2fc8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D2FC8u;
    {
        const bool branch_taken_0x2d2fc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2fc8) {
            ctx->pc = 0x2D2FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2FC8u;
            // 0x2d2fcc: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2FD0u;
            goto label_2d2fd0;
        }
    }
    ctx->pc = 0x2D2FD0u;
label_2d2fd0:
    // 0x2d2fd0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2d2fd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2fd4: 0x0  nop
    ctx->pc = 0x2d2fd4u;
    // NOP
    // 0x2d2fd8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2FD8u;
    {
        const bool branch_taken_0x2d2fd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2FD8u;
        // 0x2d2fdc: 0x3c022131  lui         $v0, 0x2131 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2fd8) {
            ctx->pc = 0x2D2FE4u;
            goto label_2d2fe4;
        }
    }
    ctx->pc = 0x2D2FE0u;
    // 0x2d2fe0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2d2fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_2d2fe4:
    // 0x2d2fe4: 0x34422300  ori         $v0, $v0, 0x2300
    ctx->pc = 0x2d2fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8960);
    // 0x2d2fe8: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x2d2fe8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2d2fec: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2d2fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2d2ff0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d2ff4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2d2ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2d2ff8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d2ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2ffc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d2ffcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d3000: 0x46000004  c1          0x4
    ctx->pc = 0x2d3000u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2d3004: 0xc481004c  lwc1        $f1, 0x4C($a0)
    ctx->pc = 0x2d3004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3008: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2d3008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d300c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d300cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d3010: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x2d3010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x2d3014: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3014u;
        // 0x2d3018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D301Cu;
    // 0x2d301c: 0x0  nop
    ctx->pc = 0x2d301cu;
    // NOP
    ctx->pc = 0x2d3020u;
}
