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

// Function: sub_00154DF8
// Address: 0x154df8 - 0x154fd0
void sub_00154DF8_0x154df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154DF8_0x154df8");
#endif

    switch (ctx->pc) {
        case 0x154e90u: goto label_154e90;
        case 0x154ed0u: goto label_154ed0;
        case 0x154f10u: goto label_154f10;
        case 0x154f78u: goto label_154f78;
        case 0x154fa8u: goto label_154fa8;
        case 0x154fb8u: goto label_154fb8;
        default: break;
    }

    ctx->pc = 0x154df8u;

    // 0x154df8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x154df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x154dfc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x154dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x154e00: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x154e00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x154e04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x154e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e08: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x154e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x154e0c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x154e0cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x154e10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x154e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x154e14: 0xc62000ac  lwc1        $f0, 0xAC($s1)
    ctx->pc = 0x154e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154e18: 0xc62100b0  lwc1        $f1, 0xB0($s1)
    ctx->pc = 0x154e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154e1c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x154e1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x154e20: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x154e20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154e24: 0x0  nop
    ctx->pc = 0x154e24u;
    // NOP
    // 0x154e28: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x154E28u;
    {
        const bool branch_taken_0x154e28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x154E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E28u;
        // 0x154e2c: 0xe62000ac  swc1        $f0, 0xAC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e28) {
            ctx->pc = 0x154E58u;
            goto label_154e58;
        }
    }
    ctx->pc = 0x154E30u;
    // 0x154e30: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x154e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x154e34: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x154E34u;
    {
        const bool branch_taken_0x154e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154e34) {
            ctx->pc = 0x154E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154E34u;
            // 0x154e38: 0x8e2200b4  lw          $v0, 0xB4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154E5Cu;
            goto label_154e5c;
        }
    }
    ctx->pc = 0x154E3Cu;
    // 0x154e3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154e40: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x154e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x154e44: 0xae2200dc  sw          $v0, 0xDC($s1)
    ctx->pc = 0x154e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
    // 0x154e48: 0xa22300e7  sb          $v1, 0xE7($s1)
    ctx->pc = 0x154e48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 231), (uint8_t)GPR_U32(ctx, 3));
    // 0x154e4c: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x154e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
    // 0x154e50: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x154e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x154e54: 0xa22000eb  sb          $zero, 0xEB($s1)
    ctx->pc = 0x154e54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 235), (uint8_t)GPR_U32(ctx, 0));
label_154e58:
    // 0x154e58: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x154e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_154e5c:
    // 0x154e5c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x154E5Cu;
    {
        const bool branch_taken_0x154e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E5Cu;
        // 0x154e60: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e5c) {
            ctx->pc = 0x154E98u;
            goto label_154e98;
        }
    }
    ctx->pc = 0x154E64u;
    // 0x154e64: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x154e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x154e68: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x154e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x154e6c: 0xc450f048  lwc1        $f16, -0xFB8($v0)
    ctx->pc = 0x154e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x154e70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x154e70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x154e74: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x154e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x154e78: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x154e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x154e7c: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x154e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x154e80: 0x460f83c1  sub.s       $f15, $f16, $f15
    ctx->pc = 0x154e80u;
    ctx->f[15] = FPU_SUB_S(ctx->f[16], ctx->f[15]);
    // 0x154e84: 0xc62e00cc  lwc1        $f14, 0xCC($s1)
    ctx->pc = 0x154e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x154e88: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x154E88u;
    SET_GPR_U32(ctx, 31, 0x154E90u);
    ctx->pc = 0x154E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154E88u;
    // 0x154e8c: 0x262500d0  addiu       $a1, $s1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x154E88u, 0x154E90u)) {
        return;
    }
    ctx->pc = 0x154E90u;
label_154e90:
    // 0x154e90: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x154e90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x154e94: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x154e94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_154e98:
    // 0x154e98: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x154e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x154e9c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x154E9Cu;
    {
        const bool branch_taken_0x154e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E9Cu;
        // 0x154ea0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e9c) {
            ctx->pc = 0x154ED8u;
            goto label_154ed8;
        }
    }
    ctx->pc = 0x154EA4u;
    // 0x154ea4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x154ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x154ea8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x154ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x154eac: 0xc450f03c  lwc1        $f16, -0xFC4($v0)
    ctx->pc = 0x154eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x154eb0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x154eb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x154eb4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x154eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x154eb8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x154eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x154ebc: 0x262400c4  addiu       $a0, $s1, 0xC4
    ctx->pc = 0x154ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x154ec0: 0x460f83c1  sub.s       $f15, $f16, $f15
    ctx->pc = 0x154ec0u;
    ctx->f[15] = FPU_SUB_S(ctx->f[16], ctx->f[15]);
    // 0x154ec4: 0xc62e00cc  lwc1        $f14, 0xCC($s1)
    ctx->pc = 0x154ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x154ec8: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x154EC8u;
    SET_GPR_U32(ctx, 31, 0x154ED0u);
    ctx->pc = 0x154ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154EC8u;
    // 0x154ecc: 0x262500d4  addiu       $a1, $s1, 0xD4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x154EC8u, 0x154ED0u)) {
        return;
    }
    ctx->pc = 0x154ED0u;
label_154ed0:
    // 0x154ed0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x154ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x154ed4: 0xae2200b8  sw          $v0, 0xB8($s1)
    ctx->pc = 0x154ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
label_154ed8:
    // 0x154ed8: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x154ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x154edc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x154EDCu;
    {
        const bool branch_taken_0x154edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EDCu;
        // 0x154ee0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154edc) {
            ctx->pc = 0x154F18u;
            goto label_154f18;
        }
    }
    ctx->pc = 0x154EE4u;
    // 0x154ee4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x154ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x154ee8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x154ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x154eec: 0xc450f040  lwc1        $f16, -0xFC0($v0)
    ctx->pc = 0x154eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x154ef0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x154ef0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x154ef4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x154ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x154ef8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x154ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x154efc: 0x262400c8  addiu       $a0, $s1, 0xC8
    ctx->pc = 0x154efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
    // 0x154f00: 0x460f83c0  add.s       $f15, $f16, $f15
    ctx->pc = 0x154f00u;
    ctx->f[15] = FPU_ADD_S(ctx->f[16], ctx->f[15]);
    // 0x154f04: 0xc62e00cc  lwc1        $f14, 0xCC($s1)
    ctx->pc = 0x154f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x154f08: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x154F08u;
    SET_GPR_U32(ctx, 31, 0x154F10u);
    ctx->pc = 0x154F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F08u;
    // 0x154f0c: 0x262500d8  addiu       $a1, $s1, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x154F08u, 0x154F10u)) {
        return;
    }
    ctx->pc = 0x154F10u;
label_154f10:
    // 0x154f10: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x154f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x154f14: 0xae2200bc  sw          $v0, 0xBC($s1)
    ctx->pc = 0x154f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
label_154f18:
    // 0x154f18: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x154f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x154f1c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x154F1Cu;
    {
        const bool branch_taken_0x154f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F1Cu;
        // 0x154f20: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f1c) {
            ctx->pc = 0x154FB8u;
            goto label_154fb8;
        }
    }
    ctx->pc = 0x154F24u;
    // 0x154f24: 0x8a2200e7  lwl         $v0, 0xE7($s1)
    ctx->pc = 0x154f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 231); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x154f28: 0x9a2200e4  lwr         $v0, 0xE4($s1)
    ctx->pc = 0x154f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 228); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x154f2c: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x154f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x154f30: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x154f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x154f34: 0x8a2600eb  lwl         $a2, 0xEB($s1)
    ctx->pc = 0x154f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 235); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x154f38: 0x9a2600e8  lwr         $a2, 0xE8($s1)
    ctx->pc = 0x154f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 232); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x154f3c: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x154f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x154f40: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x154f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x154f44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x154f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x154f48: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x154f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x154f4c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x154f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x154f50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x154f50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x154f54: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x154f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x154f58: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x154f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x154f5c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x154f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154f60: 0x262700ec  addiu       $a3, $s1, 0xEC
    ctx->pc = 0x154f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
    // 0x154f64: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x154f64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154f68: 0xc62e00f4  lwc1        $f14, 0xF4($s1)
    ctx->pc = 0x154f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x154f6c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x154f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x154f70: 0xc06d066  jal         func_1B4198
    ctx->pc = 0x154F70u;
    SET_GPR_U32(ctx, 31, 0x154F78u);
    ctx->pc = 0x154F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F70u;
    // 0x154f74: 0xc23024  and         $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4198u, 0x154F70u, 0x154F78u)) {
        return;
    }
    ctx->pc = 0x154F78u;
label_154f78:
    // 0x154f78: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x154f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x154f7c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x154F7Cu;
    {
        const bool branch_taken_0x154f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F7Cu;
        // 0x154f80: 0xae2200dc  sw          $v0, 0xDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f7c) {
            ctx->pc = 0x154FB8u;
            goto label_154fb8;
        }
    }
    ctx->pc = 0x154F84u;
    // 0x154f84: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x154f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x154f88: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x154F88u;
    {
        const bool branch_taken_0x154f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F88u;
        // 0x154f8c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f88) {
            ctx->pc = 0x154FBCu;
            goto label_154fbc;
        }
    }
    ctx->pc = 0x154F90u;
    // 0x154f90: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x154f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x154f94: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x154f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
    // 0x154f98: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x154f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x154f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154fa0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x154FA0u;
    SET_GPR_U32(ctx, 31, 0x154FA8u);
    ctx->pc = 0x154FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154FA0u;
    // 0x154fa4: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x154FA0u, 0x154FA8u)) {
        return;
    }
    ctx->pc = 0x154FA8u;
label_154fa8:
    // 0x154fa8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x154fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x154fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154fb0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x154FB0u;
    SET_GPR_U32(ctx, 31, 0x154FB8u);
    ctx->pc = 0x154FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154FB0u;
    // 0x154fb4: 0x24a58918  addiu       $a1, $a1, -0x76E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x154FB0u, 0x154FB8u)) {
        return;
    }
    ctx->pc = 0x154FB8u;
label_154fb8:
    // 0x154fb8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x154fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_154fbc:
    // 0x154fbc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x154fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154fc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x154fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154fc4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x154fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x154fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x154FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FC8u;
        // 0x154fcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154FD0u;
}
