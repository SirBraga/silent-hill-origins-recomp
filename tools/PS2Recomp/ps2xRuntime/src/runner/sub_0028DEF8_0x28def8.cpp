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

// Function: sub_0028DEF8
// Address: 0x28def8 - 0x28e048
void sub_0028DEF8_0x28def8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DEF8_0x28def8");
#endif

    switch (ctx->pc) {
        case 0x28df38u: goto label_28df38;
        case 0x28df80u: goto label_28df80;
        default: break;
    }

    ctx->pc = 0x28def8u;

    // 0x28def8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28def8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28defc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x28defcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x28df00: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28df00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28df04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28df04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df08: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x28df08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x28df0c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28df0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df10: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x28df10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x28df14: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x28df14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28df18: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x28df18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x28df1c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x28df1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x28df20: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28df20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28df24: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x28df24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x28df28: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x28df28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28df2c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x28df2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28df30: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x28df30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28df34: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x28df34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28df38:
    // 0x28df38: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x28df38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28df3c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x28df3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28df40: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28df44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28df44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df48: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x28df48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x28df4c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28df4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28df50: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28df50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28df54: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x28df54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x28df58: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x28df58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x28df5c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28df5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28df60: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x28df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28df64: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28df64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28df68: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x28df68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28df6c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x28df6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28df70: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x28df70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28df74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28df74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28df78: 0xc093abc  jal         func_24EAF0
    ctx->pc = 0x28DF78u;
    SET_GPR_U32(ctx, 31, 0x28DF80u);
    ctx->pc = 0x28DF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF78u;
    // 0x28df7c: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAF0u, 0x28DF78u, 0x28DF80u)) {
        return;
    }
    ctx->pc = 0x28DF80u;
label_28df80:
    // 0x28df80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28df80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28df84: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x28df84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28df88: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x28df88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x28df8c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28df90: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28df90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28df94: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x28df94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28df98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28df98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28df9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28dfa0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x28dfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28dfa4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x28dfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28dfa8: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x28dfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28dfac: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x28dfacu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28dfb0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x28dfb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28dfb4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x28dfb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x28dfb8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28dfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28dfbc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x28dfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28dfc0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28dfc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28dfc4: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x28dfc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x28dfc8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x28dfc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x28dfcc: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x28dfccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28dfd0: 0x0  nop
    ctx->pc = 0x28dfd0u;
    // NOP
    // 0x28dfd4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x28DFD4u;
    {
        const bool branch_taken_0x28dfd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DFD4u;
        // 0x28dfd8: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dfd4) {
            ctx->pc = 0x28DFE4u;
            goto label_28dfe4;
        }
    }
    ctx->pc = 0x28DFDCu;
    // 0x28dfdc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28DFDCu;
    {
        const bool branch_taken_0x28dfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DFDCu;
        // 0x28dfe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dfdc) {
            ctx->pc = 0x28DFF8u;
            goto label_28dff8;
        }
    }
    ctx->pc = 0x28DFE4u;
label_28dfe4:
    // 0x28dfe4: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x28dfe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28dfe8: 0x0  nop
    ctx->pc = 0x28dfe8u;
    // NOP
    // 0x28dfec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28DFECu;
    {
        const bool branch_taken_0x28dfec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DFECu;
        // 0x28dff0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dfec) {
            ctx->pc = 0x28DFF8u;
            goto label_28dff8;
        }
    }
    ctx->pc = 0x28DFF4u;
    // 0x28dff4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28dff8:
    // 0x28dff8: 0x54550004  bnel        $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DFF8u;
    {
        const bool branch_taken_0x28dff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x28dff8) {
            ctx->pc = 0x28DFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DFF8u;
            // 0x28dffc: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E00Cu;
            goto label_28e00c;
        }
    }
    ctx->pc = 0x28E000u;
    // 0x28e000: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x28e000u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x28e004: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28E004u;
    {
        const bool branch_taken_0x28e004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E004u;
        // 0x28e008: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e004) {
            ctx->pc = 0x28E01Cu;
            goto label_28e01c;
        }
    }
    ctx->pc = 0x28E00Cu;
label_28e00c:
    // 0x28e00c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x28e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28e010: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x28e010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e014: 0x1602ffc8  bne         $s0, $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x28E014u;
    {
        const bool branch_taken_0x28e014 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x28E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E014u;
        // 0x28e018: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e014) {
            ctx->pc = 0x28DF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28df38;
        }
    }
    ctx->pc = 0x28E01Cu;
label_28e01c:
    // 0x28e01c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x28e01cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e020: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x28e020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28e024: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x28e024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28e028: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x28e028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e02c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x28e02cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28e030: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28e030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e034: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x28e034u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e038: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28e038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e03c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x28e03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28e040: 0x3e00008  jr          $ra
    ctx->pc = 0x28E040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E040u;
        // 0x28e044: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E048u;
}
