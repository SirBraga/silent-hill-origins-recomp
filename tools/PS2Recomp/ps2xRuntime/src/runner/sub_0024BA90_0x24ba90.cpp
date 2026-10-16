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

// Function: sub_0024BA90
// Address: 0x24ba90 - 0x24bcd0
void sub_0024BA90_0x24ba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BA90_0x24ba90");
#endif

    switch (ctx->pc) {
        case 0x24bc98u: goto label_24bc98;
        case 0x24bca4u: goto label_24bca4;
        default: break;
    }

    ctx->pc = 0x24ba90u;

    // 0x24ba90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24ba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24ba94: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x24ba94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ba98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ba9c: 0x10c20022  beq         $a2, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x24BA9Cu;
    {
        const bool branch_taken_0x24ba9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x24BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA9Cu;
        // 0x24baa0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba9c) {
            ctx->pc = 0x24BB28u;
            goto label_24bb28;
        }
    }
    ctx->pc = 0x24BAA4u;
    // 0x24baa4: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24BAA4u;
    {
        const bool branch_taken_0x24baa4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAA4u;
        // 0x24baa8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24baa4) {
            ctx->pc = 0x24BABCu;
            goto label_24babc;
        }
    }
    ctx->pc = 0x24BAACu;
    // 0x24baac: 0x10c20044  beq         $a2, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x24BAACu;
    {
        const bool branch_taken_0x24baac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x24BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAACu;
        // 0x24bab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24baac) {
            ctx->pc = 0x24BBC0u;
            goto label_24bbc0;
        }
    }
    ctx->pc = 0x24BAB4u;
    // 0x24bab4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x24BAB4u;
    {
        const bool branch_taken_0x24bab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAB4u;
        // 0x24bab8: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bab4) {
            ctx->pc = 0x24BC84u;
            goto label_24bc84;
        }
    }
    ctx->pc = 0x24BABCu;
label_24babc:
    // 0x24babc: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x24babcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x24bac0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x24bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x24bac4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24bac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bac8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x24bac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x24bacc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24baccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24bad0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24bad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24bad4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24bad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24bad8: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x24bad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x24badc: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x24badcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x24bae0: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x24bae0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x24bae4: 0xe4e10028  swc1        $f1, 0x28($a3)
    ctx->pc = 0x24bae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x24bae8: 0xe4e10014  swc1        $f1, 0x14($a3)
    ctx->pc = 0x24bae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x24baec: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x24baecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x24baf0: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x24baf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x24baf4: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x24baf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x24baf8: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x24baf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x24bafc: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x24bafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x24bb00: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x24bb00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x24bb04: 0xe4e00038  swc1        $f0, 0x38($a3)
    ctx->pc = 0x24bb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
    // 0x24bb08: 0xe4e00034  swc1        $f0, 0x34($a3)
    ctx->pc = 0x24bb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x24bb0c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x24bb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bb10: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x24bb10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x24bb14: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x24bb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bb18: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x24bb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x24bb1c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x24bb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bb20: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x24BB20u;
    {
        const bool branch_taken_0x24bb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB20u;
        // 0x24bb24: 0xe4e10028  swc1        $f1, 0x28($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb20) {
            ctx->pc = 0x24BCA8u;
            goto label_24bca8;
        }
    }
    ctx->pc = 0x24BB28u;
label_24bb28:
    // 0x24bb28: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24bb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bb2c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x24bb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bb30: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x24bb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24bb34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24bb34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24bb38: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x24bb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24bb3c: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x24bb3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x24bb40: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24bb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bb44: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x24bb44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24bb48: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x24bb48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x24bb4c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24bb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bb50: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x24bb50u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x24bb54: 0xe4e30008  swc1        $f3, 0x8($a3)
    ctx->pc = 0x24bb54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x24bb58: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x24bb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bb5c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x24bb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bb60: 0xc4e20014  lwc1        $f2, 0x14($a3)
    ctx->pc = 0x24bb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24bb64: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24bb64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24bb68: 0xc4e30018  lwc1        $f3, 0x18($a3)
    ctx->pc = 0x24bb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24bb6c: 0xe4e10010  swc1        $f1, 0x10($a3)
    ctx->pc = 0x24bb6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x24bb70: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x24bb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bb74: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x24bb74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24bb78: 0xe4e20014  swc1        $f2, 0x14($a3)
    ctx->pc = 0x24bb78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x24bb7c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x24bb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bb80: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x24bb80u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x24bb84: 0xe4e30018  swc1        $f3, 0x18($a3)
    ctx->pc = 0x24bb84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x24bb88: 0xc4e10020  lwc1        $f1, 0x20($a3)
    ctx->pc = 0x24bb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bb8c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24bb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bb90: 0xc4e20024  lwc1        $f2, 0x24($a3)
    ctx->pc = 0x24bb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24bb94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24bb94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24bb98: 0xc4e30028  lwc1        $f3, 0x28($a3)
    ctx->pc = 0x24bb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24bb9c: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x24bb9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x24bba0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24bba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bba4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x24bba4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24bba8: 0xe4e20024  swc1        $f2, 0x24($a3)
    ctx->pc = 0x24bba8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x24bbac: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24bbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bbb0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x24bbb0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x24bbb4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x24BBB4u;
    {
        const bool branch_taken_0x24bbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBB4u;
        // 0x24bbb8: 0xe4e30028  swc1        $f3, 0x28($a3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bbb4) {
            ctx->pc = 0x24BCA8u;
            goto label_24bca8;
        }
    }
    ctx->pc = 0x24BBBCu;
    // 0x24bbbc: 0x0  nop
    ctx->pc = 0x24bbbcu;
    // NOP
label_24bbc0:
    // 0x24bbc0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x24bbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bbc4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x24bbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bbc8: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x24bbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24bbcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24bbccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24bbd0: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x24bbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24bbd4: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x24bbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bbd8: 0xc4e40014  lwc1        $f4, 0x14($a3)
    ctx->pc = 0x24bbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24bbdc: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x24bbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x24bbe0: 0xc4e50018  lwc1        $f5, 0x18($a3)
    ctx->pc = 0x24bbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24bbe4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x24bbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bbe8: 0xc4e60020  lwc1        $f6, 0x20($a3)
    ctx->pc = 0x24bbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24bbec: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x24bbecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24bbf0: 0xc4e70024  lwc1        $f7, 0x24($a3)
    ctx->pc = 0x24bbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24bbf4: 0xc4e80028  lwc1        $f8, 0x28($a3)
    ctx->pc = 0x24bbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24bbf8: 0xc4e90030  lwc1        $f9, 0x30($a3)
    ctx->pc = 0x24bbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x24bbfc: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x24bbfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x24bc00: 0xc4ea0034  lwc1        $f10, 0x34($a3)
    ctx->pc = 0x24bc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x24bc04: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24bc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc08: 0xc4e20038  lwc1        $f2, 0x38($a3)
    ctx->pc = 0x24bc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24bc0c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x24bc0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x24bc10: 0xe4e30008  swc1        $f3, 0x8($a3)
    ctx->pc = 0x24bc10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x24bc14: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24bc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24bc18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24bc1c: 0xe4e10010  swc1        $f1, 0x10($a3)
    ctx->pc = 0x24bc1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x24bc20: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x24bc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc24: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x24bc24u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x24bc28: 0xe4e40014  swc1        $f4, 0x14($a3)
    ctx->pc = 0x24bc28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x24bc2c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24bc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc30: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x24bc30u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x24bc34: 0xe4e50018  swc1        $f5, 0x18($a3)
    ctx->pc = 0x24bc34u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x24bc38: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24bc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc3c: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x24bc3cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x24bc40: 0xe4e60020  swc1        $f6, 0x20($a3)
    ctx->pc = 0x24bc40u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x24bc44: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x24bc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc48: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x24bc48u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x24bc4c: 0xe4e70024  swc1        $f7, 0x24($a3)
    ctx->pc = 0x24bc4cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x24bc50: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24bc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc54: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x24bc54u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x24bc58: 0xe4e80028  swc1        $f8, 0x28($a3)
    ctx->pc = 0x24bc58u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x24bc5c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24bc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc60: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x24bc60u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x24bc64: 0xe4e90030  swc1        $f9, 0x30($a3)
    ctx->pc = 0x24bc64u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x24bc68: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x24bc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc6c: 0x46005282  mul.s       $f10, $f10, $f0
    ctx->pc = 0x24bc6cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x24bc70: 0xe4ea0034  swc1        $f10, 0x34($a3)
    ctx->pc = 0x24bc70u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x24bc74: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24bc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc78: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x24bc78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24bc7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24BC7Cu;
    {
        const bool branch_taken_0x24bc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC7Cu;
        // 0x24bc80: 0xe4e20038  swc1        $f2, 0x38($a3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc7c) {
            ctx->pc = 0x24BCA8u;
            goto label_24bca8;
        }
    }
    ctx->pc = 0x24BC84u;
label_24bc84:
    // 0x24bc84: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24bc84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x24bc88: 0x24a5b7a0  addiu       $a1, $a1, -0x4860
    ctx->pc = 0x24bc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948768));
    // 0x24bc8c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24bc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x24bc90: 0xc092848  jal         func_24A120
    ctx->pc = 0x24BC90u;
    SET_GPR_U32(ctx, 31, 0x24BC98u);
    ctx->pc = 0x24BC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BC90u;
    // 0x24bc94: 0x34840003  ori         $a0, $a0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24BC90u, 0x24BC98u)) {
        return;
    }
    ctx->pc = 0x24BC98u;
label_24bc98:
    // 0x24bc98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24bc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc9c: 0xc09281a  jal         func_24A068
    ctx->pc = 0x24BC9Cu;
    SET_GPR_U32(ctx, 31, 0x24BCA4u);
    ctx->pc = 0x24BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BC9Cu;
    // 0x24bca0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24BC9Cu, 0x24BCA4u)) {
        return;
    }
    ctx->pc = 0x24BCA4u;
label_24bca4:
    // 0x24bca4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24bca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24bca8:
    // 0x24bca8: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x24bca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x24bcac: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x24bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x24bcb0: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x24bcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x24bcb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24bcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24bcb8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x24bcb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24bcbc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x24bcbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bcc0: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x24bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
    // 0x24bcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x24BCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCC4u;
        // 0x24bcc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BCCCu;
    // 0x24bccc: 0x0  nop
    ctx->pc = 0x24bcccu;
    // NOP
    ctx->pc = 0x24bcd0u;
}
