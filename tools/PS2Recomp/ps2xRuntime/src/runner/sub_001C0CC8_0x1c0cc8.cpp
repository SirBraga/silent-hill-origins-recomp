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

// Function: sub_001C0CC8
// Address: 0x1c0cc8 - 0x1c0eb8
void sub_001C0CC8_0x1c0cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0CC8_0x1c0cc8");
#endif

    switch (ctx->pc) {
        case 0x1c0d00u: goto label_1c0d00;
        case 0x1c0e40u: goto label_1c0e40;
        case 0x1c0ea0u: goto label_1c0ea0;
        default: break;
    }

    ctx->pc = 0x1c0cc8u;

    // 0x1c0cc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c0cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c0ccc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c0cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c0cd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c0cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c0cd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c0cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c0cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0cdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c0cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ce0: 0x8e230454  lw          $v1, 0x454($s1)
    ctx->pc = 0x1c0ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1108)));
    // 0x1c0ce4: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x1c0ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x1c0ce8: 0x8c508acc  lw          $s0, -0x7534($v0)
    ctx->pc = 0x1c0ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x338ACCu));
    // 0x1c0cec: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1c0cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c0cf0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0CF0u;
    {
        const bool branch_taken_0x1c0cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0cf0) {
            ctx->pc = 0x1C0CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0CF0u;
            // 0x1c0cf4: 0x8e020094  lw          $v0, 0x94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0D04u;
            goto label_1c0d04;
        }
    }
    ctx->pc = 0x1C0CF8u;
    // 0x1c0cf8: 0xc062b6c  jal         func_18ADB0
    ctx->pc = 0x1C0CF8u;
    SET_GPR_U32(ctx, 31, 0x1C0D00u);
    ctx->pc = 0x1C0CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0CF8u;
    // 0x1c0cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18ADB0u, 0x1C0CF8u, 0x1C0D00u)) {
        return;
    }
    ctx->pc = 0x1C0D00u;
label_1c0d00:
    // 0x1c0d00: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1c0d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1c0d04:
    // 0x1c0d04: 0xc601009c  lwc1        $f1, 0x9C($s0)
    ctx->pc = 0x1c0d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0d08: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x1c0d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1c0d0c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0D0Cu;
    {
        const bool branch_taken_0x1c0d0c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1C0D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D0Cu;
        // 0x1c0d10: 0x8e250454  lw          $a1, 0x454($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d0c) {
            ctx->pc = 0x1C0D28u;
            goto label_1c0d28;
        }
    }
    ctx->pc = 0x1C0D14u;
    // 0x1c0d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0d18: 0x0  nop
    ctx->pc = 0x1c0d18u;
    // NOP
    // 0x1c0d1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0d1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0d20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0D20u;
    {
        const bool branch_taken_0x1c0d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D20u;
        // 0x1c0d24: 0xe4a00040  swc1        $f0, 0x40($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d20) {
            ctx->pc = 0x1C0D48u;
            goto label_1c0d48;
        }
    }
    ctx->pc = 0x1C0D28u;
label_1c0d28:
    // 0x1c0d28: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c0d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c0d2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c0d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c0d30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c0d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c0d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0d38: 0x0  nop
    ctx->pc = 0x1c0d38u;
    // NOP
    // 0x1c0d3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0d40: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c0d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1c0d44: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x1c0d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
label_1c0d48:
    // 0x1c0d48: 0xe6200458  swc1        $f0, 0x458($s1)
    ctx->pc = 0x1c0d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1112), bits); }
    // 0x1c0d4c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0D4Cu;
    {
        const bool branch_taken_0x1c0d4c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1C0D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D4Cu;
        // 0x1c0d50: 0x8e250454  lw          $a1, 0x454($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d4c) {
            ctx->pc = 0x1C0D68u;
            goto label_1c0d68;
        }
    }
    ctx->pc = 0x1C0D54u;
    // 0x1c0d54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c0d54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0d58: 0x0  nop
    ctx->pc = 0x1c0d58u;
    // NOP
    // 0x1c0d5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0d5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0d60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0D60u;
    {
        const bool branch_taken_0x1c0d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D60u;
        // 0x1c0d64: 0xe4a00044  swc1        $f0, 0x44($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d60) {
            ctx->pc = 0x1C0D88u;
            goto label_1c0d88;
        }
    }
    ctx->pc = 0x1C0D68u;
label_1c0d68:
    // 0x1c0d68: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1c0d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1c0d6c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1c0d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1c0d70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c0d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c0d74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0d78: 0x0  nop
    ctx->pc = 0x1c0d78u;
    // NOP
    // 0x1c0d7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0d7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0d80: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c0d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1c0d84: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x1c0d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
label_1c0d88:
    // 0x1c0d88: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1c0d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1c0d8c: 0xe620045c  swc1        $f0, 0x45C($s1)
    ctx->pc = 0x1c0d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1116), bits); }
    // 0x1c0d90: 0x248496b8  addiu       $a0, $a0, -0x6948
    ctx->pc = 0x1c0d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940344));
    // 0x1c0d94: 0x8e230454  lw          $v1, 0x454($s1)
    ctx->pc = 0x1c0d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1108)));
    // 0x1c0d98: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x1c0d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1c0d9c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c0d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c0da0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c0da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c0da4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c0da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0da8: 0xe4610048  swc1        $f1, 0x48($v1)
    ctx->pc = 0x1c0da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x1c0dac: 0x8e220454  lw          $v0, 0x454($s1)
    ctx->pc = 0x1c0dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1108)));
    // 0x1c0db0: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1c0db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c0db4: 0xc4430040  lwc1        $f3, 0x40($v0)
    ctx->pc = 0x1c0db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c0db8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1c0db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c0dbc: 0xc4420044  lwc1        $f2, 0x44($v0)
    ctx->pc = 0x1c0dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c0dc0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1c0dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c0dc4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1c0dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0dc8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1c0dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c0dcc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1c0dccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1c0dd0: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x1c0dd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1c0dd4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c0dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1c0dd8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c0dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1c0ddc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1c0ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0de0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1c0de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1c0de4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1c0de4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1c0de8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1c0de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1c0dec: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c0decu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c0df0: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x1c0df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1c0df4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c0df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c0df8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1c0df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0dfc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1c0dfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1c0e00: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1c0e00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1c0e04: 0xe442001c  swc1        $f2, 0x1C($v0)
    ctx->pc = 0x1c0e04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1c0e08: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x1c0e08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1c0e0c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1c0e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0e10: 0xe4410034  swc1        $f1, 0x34($v0)
    ctx->pc = 0x1c0e10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1c0e14: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1c0e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1c0e18: 0xe4420024  swc1        $f2, 0x24($v0)
    ctx->pc = 0x1c0e18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1c0e1c: 0xe442002c  swc1        $f2, 0x2C($v0)
    ctx->pc = 0x1c0e1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x1c0e20: 0xe441003c  swc1        $f1, 0x3C($v0)
    ctx->pc = 0x1c0e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1c0e24: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1c0e24u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1c0e28: 0xe4430030  swc1        $f3, 0x30($v0)
    ctx->pc = 0x1c0e28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1c0e2c: 0xe4430028  swc1        $f3, 0x28($v0)
    ctx->pc = 0x1c0e2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x1c0e30: 0xe4430020  swc1        $f3, 0x20($v0)
    ctx->pc = 0x1c0e30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1c0e34: 0xe4430038  swc1        $f3, 0x38($v0)
    ctx->pc = 0x1c0e34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1c0e38: 0x8e220454  lw          $v0, 0x454($s1)
    ctx->pc = 0x1c0e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1108)));
    // 0x1c0e3c: 0x0  nop
    ctx->pc = 0x1c0e3cu;
    // NOP
label_1c0e40:
    // 0x1c0e40: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1c0e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c0e44: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1c0e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c0e48: 0xb043000f  sdl         $v1, 0xF($v0)
    ctx->pc = 0x1c0e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c0e4c: 0xb4430008  sdr         $v1, 0x8($v0)
    ctx->pc = 0x1c0e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c0e50: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1c0e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1c0e54: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C0E54u;
    {
        const bool branch_taken_0x1c0e54 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x1C0E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E54u;
        // 0x1c0e58: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e54) {
            ctx->pc = 0x1C0E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0e40;
        }
    }
    ctx->pc = 0x1C0E5Cu;
    // 0x1c0e5c: 0x8e2202c8  lw          $v0, 0x2C8($s1)
    ctx->pc = 0x1c0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
    // 0x1c0e60: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C0E60u;
    {
        const bool branch_taken_0x1c0e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E60u;
        // 0x1c0e64: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e60) {
            ctx->pc = 0x1C0EA4u;
            goto label_1c0ea4;
        }
    }
    ctx->pc = 0x1C0E68u;
    // 0x1c0e68: 0x8e230260  lw          $v1, 0x260($s1)
    ctx->pc = 0x1c0e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c0e6c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1c0e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c0e70: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c0e74: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1c0e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x1c0e78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0e7c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1c0e7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c0e80: 0x244294d8  addiu       $v0, $v0, -0x6B28
    ctx->pc = 0x1c0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939864));
    // 0x1c0e84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0e88: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x1c0e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0e8c: 0x0  nop
    ctx->pc = 0x1c0e8cu;
    // NOP
    // 0x1c0e90: 0x0  nop
    ctx->pc = 0x1c0e90u;
    // NOP
    // 0x1c0e94: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x1c0e94u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[12]);
    // 0x1c0e98: 0xc0703ae  jal         func_1C0EB8
    ctx->pc = 0x1C0E98u;
    SET_GPR_U32(ctx, 31, 0x1C0EA0u);
    ctx->pc = 0x1C0E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E98u;
    // 0x1c0e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C0EB8u, 0x1C0E98u, 0x1C0EA0u)) {
        return;
    }
    ctx->pc = 0x1C0EA0u;
label_1c0ea0:
    // 0x1c0ea0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c0ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c0ea4:
    // 0x1c0ea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0eac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EACu;
        // 0x1c0eb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0EB4u;
    // 0x1c0eb4: 0x0  nop
    ctx->pc = 0x1c0eb4u;
    // NOP
    ctx->pc = 0x1c0eb8u;
}
