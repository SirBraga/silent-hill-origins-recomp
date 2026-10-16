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

// Function: sub_00154C38
// Address: 0x154c38 - 0x154df8
void sub_00154C38_0x154c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154C38_0x154c38");
#endif

    switch (ctx->pc) {
        case 0x154c88u: goto label_154c88;
        case 0x154ca8u: goto label_154ca8;
        case 0x154d10u: goto label_154d10;
        case 0x154d50u: goto label_154d50;
        case 0x154d5cu: goto label_154d5c;
        case 0x154d94u: goto label_154d94;
        case 0x154db4u: goto label_154db4;
        case 0x154dc0u: goto label_154dc0;
        default: break;
    }

    ctx->pc = 0x154c38u;

    // 0x154c38: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x154c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x154c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x154c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c40: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x154c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x154c44: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x154c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x154c48: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x154c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x154c4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x154c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c50: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x154c50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x154c54: 0xe7bb01a8  swc1        $f27, 0x1A8($sp)
    ctx->pc = 0x154c54u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x154c58: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x154c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x154c5c: 0x460066c6  mov.s       $f27, $f12
    ctx->pc = 0x154c5cu;
    ctx->f[27] = FPU_MOV_S(ctx->f[12]);
    // 0x154c60: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x154c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x154c64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x154c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c68: 0xe7ba01a0  swc1        $f26, 0x1A0($sp)
    ctx->pc = 0x154c68u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x154c6c: 0xe7b90198  swc1        $f25, 0x198($sp)
    ctx->pc = 0x154c6cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x154c70: 0xe7b80190  swc1        $f24, 0x190($sp)
    ctx->pc = 0x154c70u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x154c74: 0xe7b70188  swc1        $f23, 0x188($sp)
    ctx->pc = 0x154c74u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x154c78: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x154c78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x154c7c: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x154c7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x154c80: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x154C80u;
    SET_GPR_U32(ctx, 31, 0x154C88u);
    ctx->pc = 0x154C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154C80u;
    // 0x154c84: 0xe7b40170  swc1        $f20, 0x170($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x154C80u, 0x154C88u)) {
        return;
    }
    ctx->pc = 0x154C88u;
label_154c88:
    // 0x154c88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x154c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x154c8c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x154c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x154c90: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x154c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x154c94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x154c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c98: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x154c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x154c9c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x154c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x154ca0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x154CA0u;
    SET_GPR_U32(ctx, 31, 0x154CA8u);
    ctx->pc = 0x154CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154CA0u;
    // 0x154ca4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x154CA0u, 0x154CA8u)) {
        return;
    }
    ctx->pc = 0x154CA8u;
label_154ca8:
    // 0x154ca8: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x154ca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x154cac: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x154cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x154cb0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x154cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x154cb4: 0x24422a08  addiu       $v0, $v0, 0x2A08
    ctx->pc = 0x154cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10760));
    // 0x154cb8: 0x920400ef  lbu         $a0, 0xEF($s0)
    ctx->pc = 0x154cb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 239)));
    // 0x154cbc: 0xc4540020  lwc1        $f20, 0x20($v0)
    ctx->pc = 0x154cbcu;
    { uint32_t bits = FAST_READ32(0x692A28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x154cc0: 0x27b20110  addiu       $s2, $sp, 0x110
    ctx->pc = 0x154cc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x154cc4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x154cc4u;
    { uint32_t bits = FAST_READ32(0x692A30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154cc8: 0x4615a641  sub.s       $f25, $f20, $f21
    ctx->pc = 0x154cc8u;
    ctx->f[25] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x154ccc: 0xa3a30122  sb          $v1, 0x122($sp)
    ctx->pc = 0x154cccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 290), (uint8_t)GPR_U32(ctx, 3));
    // 0x154cd0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x154cd0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x154cd4: 0xa3a40123  sb          $a0, 0x123($sp)
    ctx->pc = 0x154cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 291), (uint8_t)GPR_U32(ctx, 4));
    // 0x154cd8: 0xc4560024  lwc1        $f22, 0x24($v0)
    ctx->pc = 0x154cd8u;
    { uint32_t bits = FAST_READ32(0x692A2Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x154cdc: 0x8e0400fc  lw          $a0, 0xFC($s0)
    ctx->pc = 0x154cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x154ce0: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x154ce0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x154ce4: 0xa3a30120  sb          $v1, 0x120($sp)
    ctx->pc = 0x154ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 288), (uint8_t)GPR_U32(ctx, 3));
    // 0x154ce8: 0xa3a30121  sb          $v1, 0x121($sp)
    ctx->pc = 0x154ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 289), (uint8_t)GPR_U32(ctx, 3));
    // 0x154cec: 0x4615b581  sub.s       $f22, $f22, $f21
    ctx->pc = 0x154cecu;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x154cf0: 0x8ba20123  lwl         $v0, 0x123($sp)
    ctx->pc = 0x154cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 291); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x154cf4: 0x9ba20120  lwr         $v0, 0x120($sp)
    ctx->pc = 0x154cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x154cf8: 0xaba20113  swl         $v0, 0x113($sp)
    ctx->pc = 0x154cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x154cfc: 0xbba20110  swr         $v0, 0x110($sp)
    ctx->pc = 0x154cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x154d00: 0x3c014250  lui         $at, 0x4250
    ctx->pc = 0x154d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16976 << 16));
    // 0x154d04: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x154d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x154d08: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x154D08u;
    SET_GPR_U32(ctx, 31, 0x154D10u);
    ctx->pc = 0x154D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154D08u;
    // 0x154d0c: 0x4618a501  sub.s       $f20, $f20, $f24 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x154D08u, 0x154D10u)) {
        return;
    }
    ctx->pc = 0x154D10u;
label_154d10:
    // 0x154d10: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x154d10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x154d14: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x154d14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x154d18: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x154d18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
    // 0x154d1c: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x154d1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x154d20: 0xc6100018  lwc1        $f16, 0x18($s0)
    ctx->pc = 0x154d20u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x154d24: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x154d24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x154d28: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x154d28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x154d2c: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x154d2cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x154d30: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x154d30u;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x154d34: 0x4600dc46  mov.s       $f17, $f27
    ctx->pc = 0x154d34u;
    ctx->f[17] = FPU_MOV_S(ctx->f[27]);
    // 0x154d38: 0x4600bc86  mov.s       $f18, $f23
    ctx->pc = 0x154d38u;
    ctx->f[18] = FPU_MOV_S(ctx->f[23]);
    // 0x154d3c: 0x4600bcc6  mov.s       $f19, $f23
    ctx->pc = 0x154d3cu;
    ctx->f[19] = FPU_MOV_S(ctx->f[23]);
    // 0x154d40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x154d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x154d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d48: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x154D48u;
    SET_GPR_U32(ctx, 31, 0x154D50u);
    ctx->pc = 0x154D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154D48u;
    // 0x154d4c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x154D48u, 0x154D50u)) {
        return;
    }
    ctx->pc = 0x154D50u;
label_154d50:
    // 0x154d50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x154d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d54: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x154D54u;
    SET_GPR_U32(ctx, 31, 0x154D5Cu);
    ctx->pc = 0x154D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154D54u;
    // 0x154d58: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x154D54u, 0x154D5Cu)) {
        return;
    }
    ctx->pc = 0x154D5Cu;
label_154d5c:
    // 0x154d5c: 0xc6100018  lwc1        $f16, 0x18($s0)
    ctx->pc = 0x154d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x154d60: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x154d60u;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x154d64: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x154d64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x154d68: 0x4600dc46  mov.s       $f17, $f27
    ctx->pc = 0x154d68u;
    ctx->f[17] = FPU_MOV_S(ctx->f[27]);
    // 0x154d6c: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x154d6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x154d70: 0x4600bc86  mov.s       $f18, $f23
    ctx->pc = 0x154d70u;
    ctx->f[18] = FPU_MOV_S(ctx->f[23]);
    // 0x154d74: 0x4600bcc6  mov.s       $f19, $f23
    ctx->pc = 0x154d74u;
    ctx->f[19] = FPU_MOV_S(ctx->f[23]);
    // 0x154d78: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x154d78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x154d7c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x154d7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x154d80: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x154d80u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x154d84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x154d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x154d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d8c: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x154D8Cu;
    SET_GPR_U32(ctx, 31, 0x154D94u);
    ctx->pc = 0x154D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154D8Cu;
    // 0x154d90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x154D8Cu, 0x154D94u)) {
        return;
    }
    ctx->pc = 0x154D94u;
label_154d94:
    // 0x154d94: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x154d94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x154d98: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x154d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x154d9c: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x154d9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x154da0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x154da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x154da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x154da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154da8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x154da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154dac: 0xc06cd24  jal         func_1B3490
    ctx->pc = 0x154DACu;
    SET_GPR_U32(ctx, 31, 0x154DB4u);
    ctx->pc = 0x154DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154DACu;
    // 0x154db0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3490u, 0x154DACu, 0x154DB4u)) {
        return;
    }
    ctx->pc = 0x154DB4u;
label_154db4:
    // 0x154db4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x154db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154db8: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x154DB8u;
    SET_GPR_U32(ctx, 31, 0x154DC0u);
    ctx->pc = 0x154DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154DB8u;
    // 0x154dbc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x154DB8u, 0x154DC0u)) {
        return;
    }
    ctx->pc = 0x154DC0u;
label_154dc0:
    // 0x154dc0: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x154dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x154dc4: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x154dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x154dc8: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x154dc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x154dcc: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x154dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x154dd0: 0xc7bb01a8  lwc1        $f27, 0x1A8($sp)
    ctx->pc = 0x154dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x154dd4: 0xc7ba01a0  lwc1        $f26, 0x1A0($sp)
    ctx->pc = 0x154dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x154dd8: 0xc7b90198  lwc1        $f25, 0x198($sp)
    ctx->pc = 0x154dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x154ddc: 0xc7b80190  lwc1        $f24, 0x190($sp)
    ctx->pc = 0x154ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x154de0: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x154de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x154de4: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x154de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x154de8: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x154de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x154dec: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x154decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x154df0: 0x3e00008  jr          $ra
    ctx->pc = 0x154DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DF0u;
        // 0x154df4: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154DF8u;
}
