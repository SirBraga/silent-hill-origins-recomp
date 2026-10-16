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

// Function: sub_00154A30
// Address: 0x154a30 - 0x154c38
void sub_00154A30_0x154a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154A30_0x154a30");
#endif

    switch (ctx->pc) {
        case 0x154a80u: goto label_154a80;
        case 0x154a9cu: goto label_154a9c;
        case 0x154ae0u: goto label_154ae0;
        case 0x154b28u: goto label_154b28;
        case 0x154b34u: goto label_154b34;
        case 0x154b6cu: goto label_154b6c;
        case 0x154b8cu: goto label_154b8c;
        case 0x154b98u: goto label_154b98;
        case 0x154bd4u: goto label_154bd4;
        case 0x154bf4u: goto label_154bf4;
        case 0x154c00u: goto label_154c00;
        default: break;
    }

    ctx->pc = 0x154a30u;

    // 0x154a30: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x154a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x154a34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x154a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a38: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x154a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x154a3c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x154a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x154a40: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x154a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x154a44: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x154a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x154a48: 0xe7b801b0  swc1        $f24, 0x1B0($sp)
    ctx->pc = 0x154a48u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x154a4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x154a4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a50: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x154a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x154a54: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x154a54u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x154a58: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x154a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x154a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a60: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x154a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x154a64: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x154a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x154a68: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x154a68u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x154a6c: 0xe7b701a8  swc1        $f23, 0x1A8($sp)
    ctx->pc = 0x154a6cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x154a70: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x154a70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x154a74: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x154a74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x154a78: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x154A78u;
    SET_GPR_U32(ctx, 31, 0x154A80u);
    ctx->pc = 0x154A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A78u;
    // 0x154a7c: 0xe7b40190  swc1        $f20, 0x190($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x154A78u, 0x154A80u)) {
        return;
    }
    ctx->pc = 0x154A80u;
label_154a80:
    // 0x154a80: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x154a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x154a84: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x154a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x154a88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x154a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x154a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x154a90: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x154a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x154a94: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x154A94u;
    SET_GPR_U32(ctx, 31, 0x154A9Cu);
    ctx->pc = 0x154A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A94u;
    // 0x154a98: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x154A94u, 0x154A9Cu)) {
        return;
    }
    ctx->pc = 0x154A9Cu;
label_154a9c:
    // 0x154a9c: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x154a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x154aa0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x154aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x154aa4: 0x924500ef  lbu         $a1, 0xEF($s2)
    ctx->pc = 0x154aa4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 239)));
    // 0x154aa8: 0x240300bd  addiu       $v1, $zero, 0xBD
    ctx->pc = 0x154aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x154aac: 0x240200db  addiu       $v0, $zero, 0xDB
    ctx->pc = 0x154aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    // 0x154ab0: 0xa3a30121  sb          $v1, 0x121($sp)
    ctx->pc = 0x154ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 289), (uint8_t)GPR_U32(ctx, 3));
    // 0x154ab4: 0xa3a20120  sb          $v0, 0x120($sp)
    ctx->pc = 0x154ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 288), (uint8_t)GPR_U32(ctx, 2));
    // 0x154ab8: 0x2404006a  addiu       $a0, $zero, 0x6A
    ctx->pc = 0x154ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x154abc: 0xa3a50123  sb          $a1, 0x123($sp)
    ctx->pc = 0x154abcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 291), (uint8_t)GPR_U32(ctx, 5));
    // 0x154ac0: 0xa3a40122  sb          $a0, 0x122($sp)
    ctx->pc = 0x154ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 290), (uint8_t)GPR_U32(ctx, 4));
    // 0x154ac4: 0x8e4400f8  lw          $a0, 0xF8($s2)
    ctx->pc = 0x154ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x154ac8: 0x8ba20123  lwl         $v0, 0x123($sp)
    ctx->pc = 0x154ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 291); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x154acc: 0x9ba20120  lwr         $v0, 0x120($sp)
    ctx->pc = 0x154accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x154ad0: 0xaba20113  swl         $v0, 0x113($sp)
    ctx->pc = 0x154ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x154ad4: 0xbba20110  swr         $v0, 0x110($sp)
    ctx->pc = 0x154ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x154ad8: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x154AD8u;
    SET_GPR_U32(ctx, 31, 0x154AE0u);
    ctx->pc = 0x154ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AD8u;
    // 0x154adc: 0x27b30110  addiu       $s3, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x154AD8u, 0x154AE0u)) {
        return;
    }
    ctx->pc = 0x154AE0u;
label_154ae0:
    // 0x154ae0: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x154ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
    // 0x154ae4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x154ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x154ae8: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x154ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x154aec: 0xc64c00d4  lwc1        $f12, 0xD4($s2)
    ctx->pc = 0x154aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x154af0: 0x26310fc8  addiu       $s1, $s1, 0xFC8
    ctx->pc = 0x154af0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
    // 0x154af4: 0xc68df038  lwc1        $f13, -0xFC8($s4)
    ctx->pc = 0x154af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294963256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x154af8: 0xc6300018  lwc1        $f16, 0x18($s1)
    ctx->pc = 0x154af8u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x154afc: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x154afcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x154b00: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x154b00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x154b04: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x154b04u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x154b08: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x154b08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x154b0c: 0x4600c446  mov.s       $f17, $f24
    ctx->pc = 0x154b0cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[24]);
    // 0x154b10: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x154b10u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x154b14: 0x4600a4c6  mov.s       $f19, $f20
    ctx->pc = 0x154b14u;
    ctx->f[19] = FPU_MOV_S(ctx->f[20]);
    // 0x154b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x154b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b20: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x154B20u;
    SET_GPR_U32(ctx, 31, 0x154B28u);
    ctx->pc = 0x154B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B20u;
    // 0x154b24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x154B20u, 0x154B28u)) {
        return;
    }
    ctx->pc = 0x154B28u;
label_154b28:
    // 0x154b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b2c: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x154B2Cu;
    SET_GPR_U32(ctx, 31, 0x154B34u);
    ctx->pc = 0x154B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B2Cu;
    // 0x154b30: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x154B2Cu, 0x154B34u)) {
        return;
    }
    ctx->pc = 0x154B34u;
label_154b34:
    // 0x154b34: 0xc6300018  lwc1        $f16, 0x18($s1)
    ctx->pc = 0x154b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x154b38: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x154b38u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x154b3c: 0xc64c00d8  lwc1        $f12, 0xD8($s2)
    ctx->pc = 0x154b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x154b40: 0x4600c446  mov.s       $f17, $f24
    ctx->pc = 0x154b40u;
    ctx->f[17] = FPU_MOV_S(ctx->f[24]);
    // 0x154b44: 0xc68df038  lwc1        $f13, -0xFC8($s4)
    ctx->pc = 0x154b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294963256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x154b48: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x154b48u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x154b4c: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x154b4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x154b50: 0x4600a4c6  mov.s       $f19, $f20
    ctx->pc = 0x154b50u;
    ctx->f[19] = FPU_MOV_S(ctx->f[20]);
    // 0x154b54: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x154b54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x154b58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x154b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b60: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x154b60u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x154b64: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x154B64u;
    SET_GPR_U32(ctx, 31, 0x154B6Cu);
    ctx->pc = 0x154B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B64u;
    // 0x154b68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x154B64u, 0x154B6Cu)) {
        return;
    }
    ctx->pc = 0x154B6Cu;
label_154b6c:
    // 0x154b6c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x154b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x154b70: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x154b70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x154b74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x154b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x154b78: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x154b78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x154b7c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x154b7cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x154b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b84: 0xc06cd24  jal         func_1B3490
    ctx->pc = 0x154B84u;
    SET_GPR_U32(ctx, 31, 0x154B8Cu);
    ctx->pc = 0x154B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B84u;
    // 0x154b88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3490u, 0x154B84u, 0x154B8Cu)) {
        return;
    }
    ctx->pc = 0x154B8Cu;
label_154b8c:
    // 0x154b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b90: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x154B90u;
    SET_GPR_U32(ctx, 31, 0x154B98u);
    ctx->pc = 0x154B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B90u;
    // 0x154b94: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x154B90u, 0x154B98u)) {
        return;
    }
    ctx->pc = 0x154B98u;
label_154b98:
    // 0x154b98: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x154b9c: 0xc6300018  lwc1        $f16, 0x18($s1)
    ctx->pc = 0x154b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x154ba0: 0xc64d00d0  lwc1        $f13, 0xD0($s2)
    ctx->pc = 0x154ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x154ba4: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x154ba4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x154ba8: 0xc44cf044  lwc1        $f12, -0xFBC($v0)
    ctx->pc = 0x154ba8u;
    { uint32_t bits = FAST_READ32(0x6BF044u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x154bac: 0x4600c446  mov.s       $f17, $f24
    ctx->pc = 0x154bacu;
    ctx->f[17] = FPU_MOV_S(ctx->f[24]);
    // 0x154bb0: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x154bb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x154bb4: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x154bb4u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x154bb8: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x154bb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x154bbc: 0x4600a4c6  mov.s       $f19, $f20
    ctx->pc = 0x154bbcu;
    ctx->f[19] = FPU_MOV_S(ctx->f[20]);
    // 0x154bc0: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x154bc0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x154bc4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x154bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154bcc: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x154BCCu;
    SET_GPR_U32(ctx, 31, 0x154BD4u);
    ctx->pc = 0x154BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BCCu;
    // 0x154bd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x154BCCu, 0x154BD4u)) {
        return;
    }
    ctx->pc = 0x154BD4u;
label_154bd4:
    // 0x154bd4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x154bd4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x154bd8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x154bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x154bdc: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x154bdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x154be0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x154be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x154be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x154be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154bec: 0xc06cd24  jal         func_1B3490
    ctx->pc = 0x154BECu;
    SET_GPR_U32(ctx, 31, 0x154BF4u);
    ctx->pc = 0x154BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BECu;
    // 0x154bf0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3490u, 0x154BECu, 0x154BF4u)) {
        return;
    }
    ctx->pc = 0x154BF4u;
label_154bf4:
    // 0x154bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154bf8: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x154BF8u;
    SET_GPR_U32(ctx, 31, 0x154C00u);
    ctx->pc = 0x154BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BF8u;
    // 0x154bfc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x154BF8u, 0x154C00u)) {
        return;
    }
    ctx->pc = 0x154C00u;
label_154c00:
    // 0x154c00: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x154c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x154c04: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x154c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x154c08: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x154c08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x154c0c: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x154c0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x154c10: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x154c10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x154c14: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x154c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x154c18: 0xc7b801b0  lwc1        $f24, 0x1B0($sp)
    ctx->pc = 0x154c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x154c1c: 0xc7b701a8  lwc1        $f23, 0x1A8($sp)
    ctx->pc = 0x154c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x154c20: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x154c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x154c24: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x154c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x154c28: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x154c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x154c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x154C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C2Cu;
        // 0x154c30: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154C34u;
    // 0x154c34: 0x0  nop
    ctx->pc = 0x154c34u;
    // NOP
    ctx->pc = 0x154c38u;
}
