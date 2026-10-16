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

// Function: sub_0018ADB0
// Address: 0x18adb0 - 0x18b008
void sub_0018ADB0_0x18adb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018ADB0_0x18adb0");
#endif

    switch (ctx->pc) {
        case 0x18ade4u: goto label_18ade4;
        case 0x18adf4u: goto label_18adf4;
        case 0x18ae00u: goto label_18ae00;
        case 0x18ae0cu: goto label_18ae0c;
        case 0x18ae48u: goto label_18ae48;
        case 0x18ae54u: goto label_18ae54;
        case 0x18ae60u: goto label_18ae60;
        case 0x18ae6cu: goto label_18ae6c;
        case 0x18aea8u: goto label_18aea8;
        case 0x18aef0u: goto label_18aef0;
        case 0x18af00u: goto label_18af00;
        case 0x18af8cu: goto label_18af8c;
        default: break;
    }

    ctx->pc = 0x18adb0u;

    // 0x18adb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18adb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18adb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18adb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18adb8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18adb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18adbc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x18adbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18adc0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18adc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18adc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18adc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18adc8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x18adc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x18adcc: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x18adccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x18add0: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x18add0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18add4: 0xc6000088  lwc1        $f0, 0x88($s0)
    ctx->pc = 0x18add4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18add8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x18add8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18addc: 0xc0628aa  jal         func_18A2A8
    ctx->pc = 0x18ADDCu;
    SET_GPR_U32(ctx, 31, 0x18ADE4u);
    ctx->pc = 0x18ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ADDCu;
    // 0x18ade0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18A2A8u, 0x18ADDCu, 0x18ADE4u)) {
        return;
    }
    ctx->pc = 0x18ADE4u;
label_18ade4:
    // 0x18ade4: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x18ADE4u;
    {
        const bool branch_taken_0x18ade4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ade4) {
            ctx->pc = 0x18AEACu;
            goto label_18aeac;
        }
    }
    ctx->pc = 0x18ADECu;
    // 0x18adec: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x18ADECu;
    SET_GPR_U32(ctx, 31, 0x18ADF4u);
    ctx->pc = 0x18ADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ADECu;
    // 0x18adf0: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x18ADECu, 0x18ADF4u)) {
        return;
    }
    ctx->pc = 0x18ADF4u;
label_18adf4:
    // 0x18adf4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x18adf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x18adf8: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x18ADF8u;
    SET_GPR_U32(ctx, 31, 0x18AE00u);
    ctx->pc = 0x18ADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ADF8u;
    // 0x18adfc: 0xc4550000  lwc1        $f21, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x18ADF8u, 0x18AE00u)) {
        return;
    }
    ctx->pc = 0x18AE00u;
label_18ae00:
    // 0x18ae00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ae04: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x18AE04u;
    SET_GPR_U32(ctx, 31, 0x18AE0Cu);
    ctx->pc = 0x18AE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AE04u;
    // 0x18ae08: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x18AE04u, 0x18AE0Cu)) {
        return;
    }
    ctx->pc = 0x18AE0Cu;
label_18ae0c:
    // 0x18ae0c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x18ae0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18ae10: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18ae10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ae14: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x18ae14u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x18ae18: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x18ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x18ae1c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x18ae1cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x18ae20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ae24: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x18ae24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ae28: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x18ae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ae2c: 0x0  nop
    ctx->pc = 0x18ae2cu;
    // NOP
    // 0x18ae30: 0x0  nop
    ctx->pc = 0x18ae30u;
    // NOP
    // 0x18ae34: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x18ae34u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[20]);
    // 0x18ae38: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18ae38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18ae3c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x18ae3cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x18ae40: 0xc07e022  jal         func_1F8088
    ctx->pc = 0x18AE40u;
    SET_GPR_U32(ctx, 31, 0x18AE48u);
    ctx->pc = 0x18AE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AE40u;
    // 0x18ae44: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8088u, 0x18AE40u, 0x18AE48u)) {
        return;
    }
    ctx->pc = 0x18AE48u;
label_18ae48:
    // 0x18ae48: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18ae48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ae4c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x18AE4Cu;
    SET_GPR_U32(ctx, 31, 0x18AE54u);
    ctx->pc = 0x18AE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AE4Cu;
    // 0x18ae50: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x18AE4Cu, 0x18AE54u)) {
        return;
    }
    ctx->pc = 0x18AE54u;
label_18ae54:
    // 0x18ae54: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x18ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x18ae58: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x18AE58u;
    SET_GPR_U32(ctx, 31, 0x18AE60u);
    ctx->pc = 0x18AE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AE58u;
    // 0x18ae5c: 0xc4550008  lwc1        $f21, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x18AE58u, 0x18AE60u)) {
        return;
    }
    ctx->pc = 0x18AE60u;
label_18ae60:
    // 0x18ae60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ae64: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x18AE64u;
    SET_GPR_U32(ctx, 31, 0x18AE6Cu);
    ctx->pc = 0x18AE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AE64u;
    // 0x18ae68: 0xc4540008  lwc1        $f20, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x18AE64u, 0x18AE6Cu)) {
        return;
    }
    ctx->pc = 0x18AE6Cu;
label_18ae6c:
    // 0x18ae6c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18ae6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ae70: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x18ae70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18ae74: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x18ae74u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x18ae78: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x18ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x18ae7c: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x18ae7cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x18ae80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ae84: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x18ae84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ae88: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x18ae88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ae8c: 0x0  nop
    ctx->pc = 0x18ae8cu;
    // NOP
    // 0x18ae90: 0x0  nop
    ctx->pc = 0x18ae90u;
    // NOP
    // 0x18ae94: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x18ae94u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[20]);
    // 0x18ae98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18ae98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18ae9c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x18ae9cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x18aea0: 0xc07e022  jal         func_1F8088
    ctx->pc = 0x18AEA0u;
    SET_GPR_U32(ctx, 31, 0x18AEA8u);
    ctx->pc = 0x18AEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AEA0u;
    // 0x18aea4: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8088u, 0x18AEA0u, 0x18AEA8u)) {
        return;
    }
    ctx->pc = 0x18AEA8u;
label_18aea8:
    // 0x18aea8: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x18aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
label_18aeac:
    // 0x18aeac: 0x6a020077  ldl         $v0, 0x77($s0)
    ctx->pc = 0x18aeacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x18aeb0: 0x6e020070  ldr         $v0, 0x70($s0)
    ctx->pc = 0x18aeb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x18aeb4: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x18aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x18aeb8: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x18aeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18aebc: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x18aebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18aec0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x18aec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x18aec4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x18aec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18aec8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x18aec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18aecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18aeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aed0: 0x6ba80017  ldl         $t0, 0x17($sp)
    ctx->pc = 0x18aed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x18aed4: 0x6fa80010  ldr         $t0, 0x10($sp)
    ctx->pc = 0x18aed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x18aed8: 0x8fa90018  lw          $t1, 0x18($sp)
    ctx->pc = 0x18aed8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18aedc: 0xb3a80027  sdl         $t0, 0x27($sp)
    ctx->pc = 0x18aedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18aee0: 0xb7a80020  sdr         $t0, 0x20($sp)
    ctx->pc = 0x18aee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18aee4: 0xafa90028  sw          $t1, 0x28($sp)
    ctx->pc = 0x18aee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 9));
    // 0x18aee8: 0xc0628e2  jal         func_18A388
    ctx->pc = 0x18AEE8u;
    SET_GPR_U32(ctx, 31, 0x18AEF0u);
    ctx->pc = 0x18AEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AEE8u;
    // 0x18aeec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18A388u, 0x18AEE8u, 0x18AEF0u)) {
        return;
    }
    ctx->pc = 0x18AEF0u;
label_18aef0:
    // 0x18aef0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x18aef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18aef4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x18aef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x18aef8: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x18AEF8u;
    SET_GPR_U32(ctx, 31, 0x18AF00u);
    ctx->pc = 0x18AEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AEF8u;
    // 0x18aefc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x18AEF8u, 0x18AF00u)) {
        return;
    }
    ctx->pc = 0x18AF00u;
label_18af00:
    // 0x18af00: 0x0  nop
    ctx->pc = 0x18af00u;
    // NOP
    // 0x18af04: 0x0  nop
    ctx->pc = 0x18af04u;
    // NOP
    // 0x18af08: 0x46000044  c1          0x44
    ctx->pc = 0x18af08u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x18af0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18af0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18af10: 0x0  nop
    ctx->pc = 0x18af10u;
    // NOP
    // 0x18af14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18af14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18af18: 0x0  nop
    ctx->pc = 0x18af18u;
    // NOP
    // 0x18af1c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x18AF1Cu;
    {
        const bool branch_taken_0x18af1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF1Cu;
        // 0x18af20: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af1c) {
            ctx->pc = 0x18AF40u;
            goto label_18af40;
        }
    }
    ctx->pc = 0x18AF24u;
    // 0x18af24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18af24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18af28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18af28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18af2c: 0x0  nop
    ctx->pc = 0x18af2cu;
    // NOP
    // 0x18af30: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x18af30u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x18af34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18AF34u;
    {
        const bool branch_taken_0x18af34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF34u;
        // 0x18af38: 0xc7ac0020  lwc1        $f12, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af34) {
            ctx->pc = 0x18AF48u;
            goto label_18af48;
        }
    }
    ctx->pc = 0x18AF3Cu;
    // 0x18af3c: 0x0  nop
    ctx->pc = 0x18af3cu;
    // NOP
label_18af40:
    // 0x18af40: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x18af40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18af44: 0x0  nop
    ctx->pc = 0x18af44u;
    // NOP
label_18af48:
    // 0x18af48: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x18af48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18af4c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x18af4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18af50: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x18af50u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x18af54: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18af54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18af58: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18af58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18af5c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x18af5cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x18af60: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x18af60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x18af64: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x18af64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x18af68: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x18af68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18af6c: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x18af6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18af70: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x18af70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x18af74: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x18af74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18af78: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x18af78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x18af7c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x18af7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x18af80: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x18af80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x18af84: 0xc09b320  jal         func_26CC80
    ctx->pc = 0x18AF84u;
    SET_GPR_U32(ctx, 31, 0x18AF8Cu);
    ctx->pc = 0x18AF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF84u;
    // 0x18af88: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CC80u, 0x18AF84u, 0x18AF8Cu)) {
        return;
    }
    ctx->pc = 0x18AF8Cu;
label_18af8c:
    // 0x18af8c: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x18af8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18af90: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x18af90u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x18af94: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x18af94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18af98: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x18af98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18af9c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x18af9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18afa0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x18afa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x18afa4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x18afa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18afa8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x18afa8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x18afac: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x18afacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18afb0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x18afb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18afb4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x18afb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x18afb8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x18afb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x18afbc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18afbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18afc0: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x18afc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18afc4: 0x0  nop
    ctx->pc = 0x18afc4u;
    // NOP
    // 0x18afc8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x18AFC8u;
    {
        const bool branch_taken_0x18afc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18afc8) {
            ctx->pc = 0x18AFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AFC8u;
            // 0x18afcc: 0xe605009c  swc1        $f5, 0x9C($s0) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AFE8u;
            goto label_18afe8;
        }
    }
    ctx->pc = 0x18AFD0u;
    // 0x18afd0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x18afd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x18afd4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x18afd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x18afd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18afd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18afdc: 0x0  nop
    ctx->pc = 0x18afdcu;
    // NOP
    // 0x18afe0: 0x46050141  sub.s       $f5, $f0, $f5
    ctx->pc = 0x18afe0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x18afe4: 0xe605009c  swc1        $f5, 0x9C($s0)
    ctx->pc = 0x18afe4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_18afe8:
    // 0x18afe8: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x18afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x18afec: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18afecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18aff0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18aff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18aff4: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x18aff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18aff8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x18aff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18affc: 0x3e00008  jr          $ra
    ctx->pc = 0x18AFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AFFCu;
        // 0x18b000: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B004u;
    // 0x18b004: 0x0  nop
    ctx->pc = 0x18b004u;
    // NOP
    ctx->pc = 0x18b008u;
}
