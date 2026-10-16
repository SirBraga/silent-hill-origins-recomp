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

// Function: sub_0010CA90
// Address: 0x10ca90 - 0x10cbf8
void sub_0010CA90_0x10ca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CA90_0x10ca90");
#endif

    switch (ctx->pc) {
        case 0x10cae0u: goto label_10cae0;
        case 0x10caf8u: goto label_10caf8;
        case 0x10cb44u: goto label_10cb44;
        case 0x10cbc8u: goto label_10cbc8;
        default: break;
    }

    ctx->pc = 0x10ca90u;

    // 0x10ca90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10ca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10ca94: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x10ca94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x10ca98: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x10ca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x10ca9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10ca9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10caa0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x10caa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x10caa4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10caa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10caa8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x10caa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x10caac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10caacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cab0: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x10cab0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x10cab4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10cab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cab8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10cab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10cabc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x10cabcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x10cac0: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x10CAC0u;
    {
        const bool branch_taken_0x10cac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CAC0u;
        // 0x10cac4: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cac0) {
            ctx->pc = 0x10CBCCu;
            goto label_10cbcc;
        }
    }
    ctx->pc = 0x10CAC8u;
    // 0x10cac8: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
    ctx->pc = 0x10CAC8u;
    {
        const bool branch_taken_0x10cac8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CAC8u;
        // 0x10cacc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cac8) {
            ctx->pc = 0x10CBD0u;
            goto label_10cbd0;
        }
    }
    ctx->pc = 0x10CAD0u;
    // 0x10cad0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10cad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10cad4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10cad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10cad8: 0xc04389e  jal         func_10E278
    ctx->pc = 0x10CAD8u;
    SET_GPR_U32(ctx, 31, 0x10CAE0u);
    ctx->pc = 0x10CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAD8u;
    // 0x10cadc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E278u, 0x10CAD8u, 0x10CAE0u)) {
        return;
    }
    ctx->pc = 0x10CAE0u;
label_10cae0:
    // 0x10cae0: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x10cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x10cae4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10cae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cae8: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x10cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x10caec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10caecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10caf0: 0xc043a20  jal         func_10E880
    ctx->pc = 0x10CAF0u;
    SET_GPR_U32(ctx, 31, 0x10CAF8u);
    ctx->pc = 0x10CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAF0u;
    // 0x10caf4: 0xe7b40014  swc1        $f20, 0x14($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E880u, 0x10CAF0u, 0x10CAF8u)) {
        return;
    }
    ctx->pc = 0x10CAF8u;
label_10caf8:
    // 0x10caf8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CAF8u;
    {
        const bool branch_taken_0x10caf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10caf8) {
            ctx->pc = 0x10CAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CAF8u;
            // 0x10cafc: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CB0Cu;
            goto label_10cb0c;
        }
    }
    ctx->pc = 0x10CB00u;
    // 0x10cb00: 0xe4550014  swc1        $f21, 0x14($v0)
    ctx->pc = 0x10cb00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x10cb04: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x10cb04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cb08: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x10cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10cb0c:
    // 0x10cb0c: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x10cb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x10cb10: 0xafb10028  sw          $s1, 0x28($sp)
    ctx->pc = 0x10cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 17));
    // 0x10cb14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10cb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb18: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10cb1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10cb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb20: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x10cb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x10cb24: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x10cb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x10cb28: 0xe4540014  swc1        $f20, 0x14($v0)
    ctx->pc = 0x10cb28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x10cb2c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x10cb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x10cb30: 0xe454001c  swc1        $f20, 0x1C($v0)
    ctx->pc = 0x10cb30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x10cb34: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x10cb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x10cb38: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x10cb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x10cb3c: 0xc043a04  jal         func_10E810
    ctx->pc = 0x10CB3Cu;
    SET_GPR_U32(ctx, 31, 0x10CB44u);
    ctx->pc = 0x10CB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CB3Cu;
    // 0x10cb40: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E810u, 0x10CB3Cu, 0x10CB44u)) {
        return;
    }
    ctx->pc = 0x10CB44u;
label_10cb44:
    // 0x10cb44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10cb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb48: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x10CB48u;
    {
        const bool branch_taken_0x10cb48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB48u;
        // 0x10cb4c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cb48) {
            ctx->pc = 0x10CBD0u;
            goto label_10cbd0;
        }
    }
    ctx->pc = 0x10CB50u;
    // 0x10cb50: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x10cb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10cb54: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x10cb54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10cb58: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x10CB58u;
    {
        const bool branch_taken_0x10cb58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB58u;
        // 0x10cb5c: 0x4600ab02  mul.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cb58) {
            ctx->pc = 0x10CBC8u;
            goto label_10cbc8;
        }
    }
    ctx->pc = 0x10CB60u;
    // 0x10cb60: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x10cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x10cb64: 0x8c4382f4  lw          $v1, -0x7D0C($v0)
    ctx->pc = 0x10cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3382F4u));
    // 0x10cb68: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x10CB68u;
    {
        const bool branch_taken_0x10cb68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cb68) {
            ctx->pc = 0x10CB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CB68u;
            // 0x10cb6c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CBCCu;
            goto label_10cbcc;
        }
    }
    ctx->pc = 0x10CB70u;
    // 0x10cb70: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x10cb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x10cb74: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x10cb74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
    // 0x10cb78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10cb78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10cb7c: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x10cb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x10cb80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10cb80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10cb84: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x10cb84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10cb88: 0x0  nop
    ctx->pc = 0x10cb88u;
    // NOP
    // 0x10cb8c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x10CB8Cu;
    {
        const bool branch_taken_0x10cb8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10cb8c) {
            ctx->pc = 0x10CB9Cu;
            goto label_10cb9c;
        }
    }
    ctx->pc = 0x10CB94u;
    // 0x10cb94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10CB94u;
    {
        const bool branch_taken_0x10cb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB94u;
        // 0x10cb98: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cb94) {
            ctx->pc = 0x10CBACu;
            goto label_10cbac;
        }
    }
    ctx->pc = 0x10CB9Cu;
label_10cb9c:
    // 0x10cb9c: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x10cb9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10cba0: 0x0  nop
    ctx->pc = 0x10cba0u;
    // NOP
    // 0x10cba4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10CBA4u;
    {
        const bool branch_taken_0x10cba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10cba4) {
            ctx->pc = 0x10CBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CBA4u;
            // 0x10cba8: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CBACu;
            goto label_10cbac;
        }
    }
    ctx->pc = 0x10CBACu;
label_10cbac:
    // 0x10cbac: 0xe4ac0054  swc1        $f12, 0x54($a1)
    ctx->pc = 0x10cbacu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x10cbb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10cbb4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x10cbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x10cbb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CBB8u;
    {
        const bool branch_taken_0x10cbb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBB8u;
        // 0x10cbbc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cbb8) {
            ctx->pc = 0x10CBC8u;
            goto label_10cbc8;
        }
    }
    ctx->pc = 0x10CBC0u;
    // 0x10cbc0: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10CBC0u;
    SET_GPR_U32(ctx, 31, 0x10CBC8u);
    ctx->pc = 0x10CBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBC0u;
    // 0x10cbc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10CBC0u, 0x10CBC8u)) {
        return;
    }
    ctx->pc = 0x10CBC8u;
label_10cbc8:
    // 0x10cbc8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x10cbc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10cbcc:
    // 0x10cbcc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x10cbccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10cbd0:
    // 0x10cbd0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x10cbd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10cbd4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x10cbd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10cbd8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x10cbd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10cbdc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x10cbdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10cbe0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10cbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10cbe4: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x10cbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10cbe8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x10cbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10cbec: 0x3e00008  jr          $ra
    ctx->pc = 0x10CBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBECu;
        // 0x10cbf0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CBECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CBF4u;
    // 0x10cbf4: 0x0  nop
    ctx->pc = 0x10cbf4u;
    // NOP
    ctx->pc = 0x10cbf8u;
}
