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

// Function: sub_001EE9F0
// Address: 0x1ee9f0 - 0x1eecf8
void sub_001EE9F0_0x1ee9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE9F0_0x1ee9f0");
#endif

    switch (ctx->pc) {
        case 0x1eea98u: goto label_1eea98;
        case 0x1eeae8u: goto label_1eeae8;
        case 0x1eeb08u: goto label_1eeb08;
        case 0x1eeb18u: goto label_1eeb18;
        case 0x1eeb98u: goto label_1eeb98;
        case 0x1eec18u: goto label_1eec18;
        case 0x1eec28u: goto label_1eec28;
        default: break;
    }

    ctx->pc = 0x1ee9f0u;

    // 0x1ee9f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1ee9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1ee9f4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ee9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ee9f8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1ee9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1ee9fc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1ee9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1eea00: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1eea00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1eea04: 0x2483fd40  addiu       $v1, $a0, -0x2C0
    ctx->pc = 0x1eea04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966592));
    // 0x1eea08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1eea08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1eea0c: 0x24a6fe70  addiu       $a2, $a1, -0x190
    ctx->pc = 0x1eea0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966896));
    // 0x1eea10: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1eea10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1eea14: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1eea14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eea18: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1eea18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1eea1c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1eea1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eea20: 0xe7ba00e0  swc1        $f26, 0xE0($sp)
    ctx->pc = 0x1eea20u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1eea24: 0x241e0100  addiu       $fp, $zero, 0x100
    ctx->pc = 0x1eea24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1eea28: 0xe7b900d8  swc1        $f25, 0xD8($sp)
    ctx->pc = 0x1eea28u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1eea2c: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x1eea2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1eea30: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x1eea30u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1eea34: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x1eea34u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1eea38: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1eea38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1eea3c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1eea3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1eea40: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1eea40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1eea44: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1eea44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1eea48: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1eea48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1eea4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eea4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1eea50: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x1eea50u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1eea54: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1eea54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1eea58: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1eea58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1eea5c: 0xac80fd40  sw          $zero, -0x2C0($a0)
    ctx->pc = 0x1eea5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6FFD40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FFD40u, _value); } while (0);
    // 0x1eea60: 0xaca2fe70  sw          $v0, -0x190($a1)
    ctx->pc = 0x1eea60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6FFE70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FFE70u, _value); } while (0);
    // 0x1eea64: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1eea64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1eea68: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1eea68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6FFD44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FFD44u, _value); } while (0);
    // 0x1eea6c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1eea6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6FFD48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FFD48u, _value); } while (0);
    // 0x1eea70: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1eea70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6FFE74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FFE74u, _value); } while (0);
    // 0x1eea74: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1eea74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1eea78: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1eea78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1eea7c: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x1eea7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x1eea80: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1eea80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1eea84: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1eea84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1eea88: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1eea88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1eea8c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1eea8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1eea90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eea90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1eea94: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x1eea94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_1eea98:
    // 0x1eea98: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1eea98u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eea9c: 0x0  nop
    ctx->pc = 0x1eea9cu;
    // NOP
    // 0x1eeaa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eeaa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eeaa4: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x1eeaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x1eeaa8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1eeaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1eeaac: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1eeaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1eeab0: 0x2484fe70  addiu       $a0, $a0, -0x190
    ctx->pc = 0x1eeab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966896));
    // 0x1eeab4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1eeab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeab8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1eeab8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x1eeabc: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x1eeabcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1eeac0: 0x461a0000  add.s       $f0, $f0, $f26
    ctx->pc = 0x1eeac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
    // 0x1eeac4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1eeac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1eeac8: 0x2442fd40  addiu       $v0, $v0, -0x2C0
    ctx->pc = 0x1eeac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966592));
    // 0x1eeacc: 0x26970001  addiu       $s7, $s4, 0x1
    ctx->pc = 0x1eeaccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1eead0: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x1eead0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1eead4: 0x2c28021  addu        $s0, $s6, $v0
    ctx->pc = 0x1eead4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1eead8: 0x0  nop
    ctx->pc = 0x1eead8u;
    // NOP
    // 0x1eeadc: 0x0  nop
    ctx->pc = 0x1eeadcu;
    // NOP
    // 0x1eeae0: 0x46170543  div.s       $f21, $f0, $f23
    ctx->pc = 0x1eeae0u;
    ctx->f[21] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[23]);
    // 0x1eeae4: 0x0  nop
    ctx->pc = 0x1eeae4u;
    // NOP
label_1eeae8:
    // 0x1eeae8: 0x4493a000  mtc1        $s3, $f20
    ctx->pc = 0x1eeae8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1eeaec: 0x0  nop
    ctx->pc = 0x1eeaecu;
    // NOP
    // 0x1eeaf0: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1eeaf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1eeaf4: 0x4619a502  mul.s       $f20, $f20, $f25
    ctx->pc = 0x1eeaf4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x1eeaf8: 0x4618a502  mul.s       $f20, $f20, $f24
    ctx->pc = 0x1eeaf8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x1eeafc: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x1eeafcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x1eeb00: 0xc09b164  jal         func_26C590
    ctx->pc = 0x1EEB00u;
    SET_GPR_U32(ctx, 31, 0x1EEB08u);
    ctx->pc = 0x1EEB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEB00u;
    // 0x1eeb04: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1EEB00u, 0x1EEB08u)) {
        return;
    }
    ctx->pc = 0x1EEB08u;
label_1eeb08:
    // 0x1eeb08: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1eeb08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1eeb0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1eeb0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1eeb10: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x1EEB10u;
    SET_GPR_U32(ctx, 31, 0x1EEB18u);
    ctx->pc = 0x1EEB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEB10u;
    // 0x1eeb14: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x1EEB10u, 0x1EEB18u)) {
        return;
    }
    ctx->pc = 0x1EEB18u;
label_1eeb18:
    // 0x1eeb18: 0x0  nop
    ctx->pc = 0x1eeb18u;
    // NOP
    // 0x1eeb1c: 0x0  nop
    ctx->pc = 0x1eeb1cu;
    // NOP
    // 0x1eeb20: 0x4617b043  div.s       $f1, $f22, $f23
    ctx->pc = 0x1eeb20u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[22], ctx->f[23]);
    // 0x1eeb24: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1eeb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1eeb28: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1eeb28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1eeb2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1eeb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eeb30: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1eeb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1eeb34: 0x16840003  bne         $s4, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEB34u;
    {
        const bool branch_taken_0x1eeb34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x1EEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB34u;
        // 0x1eeb38: 0xe6410000  swc1        $f1, 0x0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb34) {
            ctx->pc = 0x1EEB44u;
            goto label_1eeb44;
        }
    }
    ctx->pc = 0x1EEB3Cu;
    // 0x1eeb3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEB3Cu;
    {
        const bool branch_taken_0x1eeb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB3Cu;
        // 0x1eeb40: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb3c) {
            ctx->pc = 0x1EEB48u;
            goto label_1eeb48;
        }
    }
    ctx->pc = 0x1EEB44u;
label_1eeb44:
    // 0x1eeb44: 0xae3e0000  sw          $fp, 0x0($s1)
    ctx->pc = 0x1eeb44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 30));
label_1eeb48:
    // 0x1eeb48: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1eeb48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1eeb4c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x1eeb4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1eeb50: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1eeb50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1eeb54: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1eeb54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1eeb58: 0x26d6000c  addiu       $s6, $s6, 0xC
    ctx->pc = 0x1eeb58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x1eeb5c: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x1eeb5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1eeb60: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1EEB60u;
    {
        const bool branch_taken_0x1eeb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB60u;
        // 0x1eeb64: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb60) {
            ctx->pc = 0x1EEAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eeae8;
        }
    }
    ctx->pc = 0x1EEB68u;
    // 0x1eeb68: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x1eeb68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb6c: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x1eeb6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1eeb70: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1EEB70u;
    {
        const bool branch_taken_0x1eeb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB70u;
        // 0x1eeb74: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb70) {
            ctx->pc = 0x1EEA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eea98;
        }
    }
    ctx->pc = 0x1EEB78u;
    // 0x1eeb78: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1eeb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1eeb7c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1eeb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1eeb80: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1eeb80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eeb84: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1eeb84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1eeb88: 0x2442ff38  addiu       $v0, $v0, -0xC8
    ctx->pc = 0x1eeb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967096));
    // 0x1eeb8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eeb8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb90: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1eeb90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eeb94: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x1eeb94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1eeb98:
    // 0x1eeb98: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x1eeb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1eeb9c: 0x24e30008  addiu       $v1, $a3, 0x8
    ctx->pc = 0x1eeb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1eeba0: 0x126282a  slt         $a1, $t1, $a2
    ctx->pc = 0x1eeba0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1eeba4: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x1eeba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x1eeba8: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x1eeba8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1eebac: 0xc5180b  movn        $v1, $a2, $a1
    ctx->pc = 0x1eebacu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6));
    // 0x1eebb0: 0xe4100b  movn        $v0, $a3, $a0
    ctx->pc = 0x1eebb0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7));
    // 0x1eebb4: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1eebb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1eebb8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1eebb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1eebbc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1eebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1eebc0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1eebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1eebc4: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1eebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1eebc8: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x1eebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1eebcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1eebccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1eebd0: 0xa5030002  sh          $v1, 0x2($t0)
    ctx->pc = 0x1eebd0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eebd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1eebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eebd8: 0xa5000000  sh          $zero, 0x0($t0)
    ctx->pc = 0x1eebd8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eebdc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1eebdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eebe0: 0xa5020004  sh          $v0, 0x4($t0)
    ctx->pc = 0x1eebe0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1eebe4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1eebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eebe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1eebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eebec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1eebecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1eebf0: 0x28e20008  slti        $v0, $a3, 0x8
    ctx->pc = 0x1eebf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1eebf4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1EEBF4u;
    {
        const bool branch_taken_0x1eebf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEBF4u;
        // 0x1eebf8: 0x25080006  addiu       $t0, $t0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eebf4) {
            ctx->pc = 0x1EEB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eeb98;
        }
    }
    ctx->pc = 0x1EEBFCu;
    // 0x1eebfc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1eebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eec00: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1eec00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1eec04: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1eec04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1eec08: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x1eec08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eec0c: 0x824818  mult        $t1, $a0, $v0
    ctx->pc = 0x1eec0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1eec10: 0x246dff38  addiu       $t5, $v1, -0xC8
    ctx->pc = 0x1eec10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967096));
    // 0x1eec14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eec14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eec18:
    // 0x1eec18: 0x246b0001  addiu       $t3, $v1, 0x1
    ctx->pc = 0x1eec18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1eec1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eec1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec20: 0x26aa0008  addiu       $t2, $s5, 0x8
    ctx->pc = 0x1eec20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1eec24: 0x12d3821  addu        $a3, $t1, $t5
    ctx->pc = 0x1eec24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
label_1eec28:
    // 0x1eec28: 0x25060001  addiu       $a2, $t0, 0x1
    ctx->pc = 0x1eec28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1eec2c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x1eec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1eec30: 0x186282a  slt         $a1, $t4, $a2
    ctx->pc = 0x1eec30u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1eec34: 0x188182a  slt         $v1, $t4, $t0
    ctx->pc = 0x1eec34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1eec38: 0x25040007  addiu       $a0, $t0, 0x7
    ctx->pc = 0x1eec38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x1eec3c: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x1eec3cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6));
    // 0x1eec40: 0x103200b  movn        $a0, $t0, $v1
    ctx->pc = 0x1eec40u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8));
    // 0x1eec44: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1eec44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1eec48: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1eec48u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x1eec4c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1eec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1eec50: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1eec50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1eec54: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1eec54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1eec58: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1eec58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1eec5c: 0x1042023  subu        $a0, $t0, $a0
    ctx->pc = 0x1eec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1eec60: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x1eec60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x1eec64: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x1eec64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1eec68: 0xa4e20004  sh          $v0, 0x4($a3)
    ctx->pc = 0x1eec68u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1eec6c: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x1eec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1eec70: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x1eec70u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1eec74: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1eec74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec78: 0xa4e30002  sh          $v1, 0x2($a3)
    ctx->pc = 0x1eec78u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eec7c: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x1eec7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x1eec80: 0x24e70006  addiu       $a3, $a3, 0x6
    ctx->pc = 0x1eec80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x1eec84: 0x29020008  slti        $v0, $t0, 0x8
    ctx->pc = 0x1eec84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1eec88: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x1eec88u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1eec8c: 0xa4e30004  sh          $v1, 0x4($a3)
    ctx->pc = 0x1eec8cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eec90: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x1eec90u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1eec94: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1EEC94u;
    {
        const bool branch_taken_0x1eec94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC94u;
        // 0x1eec98: 0x24e70006  addiu       $a3, $a3, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec94) {
            ctx->pc = 0x1EEC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eec28;
        }
    }
    ctx->pc = 0x1EEC9Cu;
    // 0x1eec9c: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x1eec9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeca0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1eeca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1eeca4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1EECA4u;
    {
        const bool branch_taken_0x1eeca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECA4u;
        // 0x1eeca8: 0x140a82d  daddu       $s5, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeca4) {
            ctx->pc = 0x1EEC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eec18;
        }
    }
    ctx->pc = 0x1EECACu;
    // 0x1eecac: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1eecacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1eecb0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1eecb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1eecb4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1eecb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eecb8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1eecb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1eecbc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1eecbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1eecc0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1eecc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eecc4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1eecc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eecc8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1eecc8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eeccc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1eecccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eecd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eecd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eecd4: 0xc7ba00e0  lwc1        $f26, 0xE0($sp)
    ctx->pc = 0x1eecd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1eecd8: 0xc7b900d8  lwc1        $f25, 0xD8($sp)
    ctx->pc = 0x1eecd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1eecdc: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x1eecdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1eece0: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x1eece0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1eece4: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x1eece4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1eece8: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1eece8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1eecec: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1eececu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1eecf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EECF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECF0u;
        // 0x1eecf4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EECF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EECF8u;
}
