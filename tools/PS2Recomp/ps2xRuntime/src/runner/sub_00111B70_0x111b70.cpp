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

// Function: sub_00111B70
// Address: 0x111b70 - 0x111cf0
void sub_00111B70_0x111b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111B70_0x111b70");
#endif

    switch (ctx->pc) {
        case 0x111ba4u: goto label_111ba4;
        case 0x111c70u: goto label_111c70;
        case 0x111cd4u: goto label_111cd4;
        default: break;
    }

    ctx->pc = 0x111b70u;

    // 0x111b70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x111b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x111b74: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x111b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x111b78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x111b78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x111b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x111b80: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x111b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x111b84: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x111b84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x111b88: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x111b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x111b8c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x111b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111b94: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x111b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x111b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b9c: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x111B9Cu;
    SET_GPR_U32(ctx, 31, 0x111BA4u);
    ctx->pc = 0x111BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B9Cu;
    // 0x111ba0: 0x26330010  addiu       $s3, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x111B9Cu, 0x111BA4u)) {
        return;
    }
    ctx->pc = 0x111BA4u;
label_111ba4:
    // 0x111ba4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x111BA4u;
    {
        const bool branch_taken_0x111ba4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x111BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BA4u;
        // 0x111ba8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ba4) {
            ctx->pc = 0x111BB8u;
            goto label_111bb8;
        }
    }
    ctx->pc = 0x111BACu;
    // 0x111bac: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x111bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x111bb0: 0x2442a8c0  addiu       $v0, $v0, -0x5740
    ctx->pc = 0x111bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944960));
    // 0x111bb4: 0x0  nop
    ctx->pc = 0x111bb4u;
    // NOP
label_111bb8:
    // 0x111bb8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x111bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x111bbc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x111bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111bc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x111bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111bc4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111BC4u;
    {
        const bool branch_taken_0x111bc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x111BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BC4u;
        // 0x111bc8: 0x46000882  mul.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111bc4) {
            ctx->pc = 0x111BD4u;
            goto label_111bd4;
        }
    }
    ctx->pc = 0x111BCCu;
    // 0x111bcc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x111bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x111bd0: 0x2442a8c0  addiu       $v0, $v0, -0x5740
    ctx->pc = 0x111bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944960));
label_111bd4:
    // 0x111bd4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x111bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x111bd8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x111bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111bdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x111bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111be0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x111be0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x111be4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x111be4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x111be8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111BE8u;
    {
        const bool branch_taken_0x111be8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x111BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BE8u;
        // 0x111bec: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x111be8) {
            ctx->pc = 0x111BF8u;
            goto label_111bf8;
        }
    }
    ctx->pc = 0x111BF0u;
    // 0x111bf0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x111bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x111bf4: 0x2442a8c0  addiu       $v0, $v0, -0x5740
    ctx->pc = 0x111bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944960));
label_111bf8:
    // 0x111bf8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x111bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111bfc: 0xc6230020  lwc1        $f3, 0x20($s1)
    ctx->pc = 0x111bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x111c00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x111c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c04: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111C04u;
    {
        const bool branch_taken_0x111c04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x111C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C04u;
        // 0x111c08: 0x46030082  mul.s       $f2, $f0, $f3 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c04) {
            ctx->pc = 0x111C14u;
            goto label_111c14;
        }
    }
    ctx->pc = 0x111C0Cu;
    // 0x111c0c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x111c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x111c10: 0x2442a8c0  addiu       $v0, $v0, -0x5740
    ctx->pc = 0x111c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944960));
label_111c14:
    // 0x111c14: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x111c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x111c18: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x111c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111c1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x111c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x111c20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x111c24: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x111c24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x111c28: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111C28u;
    {
        const bool branch_taken_0x111c28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x111C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C28u;
        // 0x111c2c: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c28) {
            ctx->pc = 0x111C38u;
            goto label_111c38;
        }
    }
    ctx->pc = 0x111C30u;
    // 0x111c30: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x111c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x111c34: 0x2442a8c0  addiu       $v0, $v0, -0x5740
    ctx->pc = 0x111c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944960));
label_111c38:
    // 0x111c38: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x111c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x111c3c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x111c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c40: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x111c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111c44: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x111C44u;
    {
        const bool branch_taken_0x111c44 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x111C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C44u;
        // 0x111c48: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c44) {
            ctx->pc = 0x111C54u;
            goto label_111c54;
        }
    }
    ctx->pc = 0x111C4Cu;
    // 0x111c4c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x111c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x111c50: 0x2447a8c0  addiu       $a3, $v0, -0x5740
    ctx->pc = 0x111c50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944960));
label_111c54:
    // 0x111c54: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x111c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111c58: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x111c58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x111c5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x111c5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x111c60: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x111c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x111c64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c68: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x111C68u;
    SET_GPR_U32(ctx, 31, 0x111C70u);
    ctx->pc = 0x111C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111C68u;
    // 0x111c6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x111C68u, 0x111C70u)) {
        return;
    }
    ctx->pc = 0x111C70u;
label_111c70:
    // 0x111c70: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x111c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x111c74: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x111c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x111c78: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x111c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111c7c: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x111c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x111c80: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x111c80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x111c84: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x111c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x111c88: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x111c88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x111c8c: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x111c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x111c90: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x111c90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x111c94: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x111c94u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x111c98: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x111c98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x111c9c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x111c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111ca0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x111ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x111ca4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x111ca4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x111ca8: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x111ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x111cac: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x111cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x111cb0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x111cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111cb4: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x111cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x111cb8: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x111cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x111cbc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x111cbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x111cc0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x111cc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x111cc4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x111cc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x111cc8: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x111cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x111ccc: 0xc092d94  jal         func_24B650
    ctx->pc = 0x111CCCu;
    SET_GPR_U32(ctx, 31, 0x111CD4u);
    ctx->pc = 0x111CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111CCCu;
    // 0x111cd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x111CCCu, 0x111CD4u)) {
        return;
    }
    ctx->pc = 0x111CD4u;
label_111cd4:
    // 0x111cd4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x111cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111cd8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x111cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111cdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x111cdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111ce0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x111ce0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111ce4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x111CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CE8u;
        // 0x111cec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111CF0u;
}
