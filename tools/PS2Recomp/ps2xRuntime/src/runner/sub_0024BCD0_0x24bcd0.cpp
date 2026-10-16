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

// Function: sub_0024BCD0
// Address: 0x24bcd0 - 0x24be90
void sub_0024BCD0_0x24bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BCD0_0x24bcd0");
#endif

    switch (ctx->pc) {
        case 0x24be54u: goto label_24be54;
        case 0x24be60u: goto label_24be60;
        default: break;
    }

    ctx->pc = 0x24bcd0u;

    // 0x24bcd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24bcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24bcd4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x24bcd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bcd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bcdc: 0x10c20022  beq         $a2, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x24BCDCu;
    {
        const bool branch_taken_0x24bcdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x24BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCDCu;
        // 0x24bce0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bcdc) {
            ctx->pc = 0x24BD68u;
            goto label_24bd68;
        }
    }
    ctx->pc = 0x24BCE4u;
    // 0x24bce4: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24BCE4u;
    {
        const bool branch_taken_0x24bce4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCE4u;
        // 0x24bce8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bce4) {
            ctx->pc = 0x24BCFCu;
            goto label_24bcfc;
        }
    }
    ctx->pc = 0x24BCECu;
    // 0x24bcec: 0x10c20047  beq         $a2, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x24BCECu;
    {
        const bool branch_taken_0x24bcec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x24BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCECu;
        // 0x24bcf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bcec) {
            ctx->pc = 0x24BE0Cu;
            goto label_24be0c;
        }
    }
    ctx->pc = 0x24BCF4u;
    // 0x24bcf4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x24BCF4u;
    {
        const bool branch_taken_0x24bcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCF4u;
        // 0x24bcf8: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bcf4) {
            ctx->pc = 0x24BE40u;
            goto label_24be40;
        }
    }
    ctx->pc = 0x24BCFCu;
label_24bcfc:
    // 0x24bcfc: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x24bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x24bd00: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x24bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x24bd04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24bd04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bd08: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x24bd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x24bd0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24bd0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24bd10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24bd10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24bd14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24bd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24bd18: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x24bd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x24bd1c: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x24bd1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x24bd20: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x24bd20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x24bd24: 0xe4e10028  swc1        $f1, 0x28($a3)
    ctx->pc = 0x24bd24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x24bd28: 0xe4e10014  swc1        $f1, 0x14($a3)
    ctx->pc = 0x24bd28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x24bd2c: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x24bd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x24bd30: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x24bd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x24bd34: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x24bd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x24bd38: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x24bd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x24bd3c: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x24bd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x24bd40: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x24bd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x24bd44: 0xe4e00038  swc1        $f0, 0x38($a3)
    ctx->pc = 0x24bd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
    // 0x24bd48: 0xe4e00034  swc1        $f0, 0x34($a3)
    ctx->pc = 0x24bd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x24bd4c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x24bd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bd50: 0xe4e10030  swc1        $f1, 0x30($a3)
    ctx->pc = 0x24bd50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x24bd54: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x24bd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bd58: 0xe4e00034  swc1        $f0, 0x34($a3)
    ctx->pc = 0x24bd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x24bd5c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x24bd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bd60: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x24BD60u;
    {
        const bool branch_taken_0x24bd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD60u;
        // 0x24bd64: 0xe4e10038  swc1        $f1, 0x38($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd60) {
            ctx->pc = 0x24BE68u;
            goto label_24be68;
        }
    }
    ctx->pc = 0x24BD68u;
label_24bd68:
    // 0x24bd68: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24bd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bd6c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x24bd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24bd70: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x24bd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bd74: 0xc4e40010  lwc1        $f4, 0x10($a3)
    ctx->pc = 0x24bd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24bd78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24bd78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24bd7c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x24bd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24bd80: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x24bd80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x24bd84: 0xc4e10020  lwc1        $f1, 0x20($a3)
    ctx->pc = 0x24bd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bd88: 0xc4e40030  lwc1        $f4, 0x30($a3)
    ctx->pc = 0x24bd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24bd8c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x24bd8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x24bd90: 0xc4e60004  lwc1        $f6, 0x4($a3)
    ctx->pc = 0x24bd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24bd94: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24bd94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24bd98: 0xc4e70014  lwc1        $f7, 0x14($a3)
    ctx->pc = 0x24bd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24bd9c: 0xc4e80024  lwc1        $f8, 0x24($a3)
    ctx->pc = 0x24bd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24bda0: 0xc4e50034  lwc1        $f5, 0x34($a3)
    ctx->pc = 0x24bda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24bda4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x24bda4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x24bda8: 0xc4e90008  lwc1        $f9, 0x8($a3)
    ctx->pc = 0x24bda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x24bdac: 0xc4ea0018  lwc1        $f10, 0x18($a3)
    ctx->pc = 0x24bdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x24bdb0: 0xc4eb0028  lwc1        $f11, 0x28($a3)
    ctx->pc = 0x24bdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x24bdb4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x24bdb4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x24bdb8: 0xc4e30038  lwc1        $f3, 0x38($a3)
    ctx->pc = 0x24bdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24bdbc: 0xe4e40030  swc1        $f4, 0x30($a3)
    ctx->pc = 0x24bdbcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x24bdc0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24bdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bdc4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x24bdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24bdc8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x24bdc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x24bdcc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x24bdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bdd0: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x24bdd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x24bdd4: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x24bdd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x24bdd8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24bdd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24bddc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24bddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24bde0: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x24bde0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x24bde4: 0xe4e50034  swc1        $f5, 0x34($a3)
    ctx->pc = 0x24bde4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x24bde8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24bde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bdec: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x24bdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24bdf0: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x24bdf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x24bdf4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x24bdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bdf8: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x24bdf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x24bdfc: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x24bdfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x24be00: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24be00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24be04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24BE04u;
    {
        const bool branch_taken_0x24be04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE04u;
        // 0x24be08: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be04) {
            ctx->pc = 0x24BE34u;
            goto label_24be34;
        }
    }
    ctx->pc = 0x24BE0Cu;
label_24be0c:
    // 0x24be0c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x24be0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24be10: 0xc4e00030  lwc1        $f0, 0x30($a3)
    ctx->pc = 0x24be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24be14: 0xc4e20034  lwc1        $f2, 0x34($a3)
    ctx->pc = 0x24be14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24be18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24be18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24be1c: 0xc4e30038  lwc1        $f3, 0x38($a3)
    ctx->pc = 0x24be1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24be20: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x24be20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x24be24: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x24be24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24be28: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x24be28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x24be2c: 0xe4e20034  swc1        $f2, 0x34($a3)
    ctx->pc = 0x24be2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x24be30: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24be30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24be34:
    // 0x24be34: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x24be34u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x24be38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24BE38u;
    {
        const bool branch_taken_0x24be38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE38u;
        // 0x24be3c: 0xe4e30038  swc1        $f3, 0x38($a3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be38) {
            ctx->pc = 0x24BE68u;
            goto label_24be68;
        }
    }
    ctx->pc = 0x24BE40u;
label_24be40:
    // 0x24be40: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24be40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x24be44: 0x24a5b7a0  addiu       $a1, $a1, -0x4860
    ctx->pc = 0x24be44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948768));
    // 0x24be48: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24be48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x24be4c: 0xc092848  jal         func_24A120
    ctx->pc = 0x24BE4Cu;
    SET_GPR_U32(ctx, 31, 0x24BE54u);
    ctx->pc = 0x24BE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE4Cu;
    // 0x24be50: 0x34840003  ori         $a0, $a0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24BE4Cu, 0x24BE54u)) {
        return;
    }
    ctx->pc = 0x24BE54u;
label_24be54:
    // 0x24be54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24be54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24be58: 0xc09281a  jal         func_24A068
    ctx->pc = 0x24BE58u;
    SET_GPR_U32(ctx, 31, 0x24BE60u);
    ctx->pc = 0x24BE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE58u;
    // 0x24be5c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24BE58u, 0x24BE60u)) {
        return;
    }
    ctx->pc = 0x24BE60u;
label_24be60:
    // 0x24be60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24be60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24be64: 0x0  nop
    ctx->pc = 0x24be64u;
    // NOP
label_24be68:
    // 0x24be68: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x24be68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x24be6c: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x24be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x24be70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24be70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24be74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24be74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24be78: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x24be78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24be7c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x24be7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24be80: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x24be80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
    // 0x24be84: 0x3e00008  jr          $ra
    ctx->pc = 0x24BE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE84u;
        // 0x24be88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BE8Cu;
    // 0x24be8c: 0x0  nop
    ctx->pc = 0x24be8cu;
    // NOP
    ctx->pc = 0x24be90u;
}
