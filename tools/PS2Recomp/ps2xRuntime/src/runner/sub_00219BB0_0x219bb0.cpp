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

// Function: sub_00219BB0
// Address: 0x219bb0 - 0x219d08
void sub_00219BB0_0x219bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219BB0_0x219bb0");
#endif

    switch (ctx->pc) {
        case 0x219c78u: goto label_219c78;
        default: break;
    }

    ctx->pc = 0x219bb0u;

    // 0x219bb0: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x219bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x219bb4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x219bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x219bb8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x219bb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219bbc: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x219bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x219bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219bc4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x219bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x219bc8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x219bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x219bcc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x219bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219bd0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x219bd0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x219bd4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x219bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x219bd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x219bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219bdc: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x219bdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x219be0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x219be0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x219be4: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x219be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x219be8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x219be8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x219bec: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x219becu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x219bf0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x219bf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x219bf4: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x219bf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x219bf8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x219bf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x219bfc: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x219bfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x219c00: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x219c00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x219c04: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x219c04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x219c08: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x219c08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x219c0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219c10: 0x0  nop
    ctx->pc = 0x219c10u;
    // NOP
    // 0x219c14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x219c14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x219c18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x219c18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x219c1c: 0x0  nop
    ctx->pc = 0x219c1cu;
    // NOP
    // 0x219c20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x219c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x219c24: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x219c24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x219c28: 0x0  nop
    ctx->pc = 0x219c28u;
    // NOP
    // 0x219c2c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x219c2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x219c30: 0x0  nop
    ctx->pc = 0x219c30u;
    // NOP
    // 0x219c34: 0x0  nop
    ctx->pc = 0x219c34u;
    // NOP
    // 0x219c38: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x219c38u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
    // 0x219c3c: 0x0  nop
    ctx->pc = 0x219c3cu;
    // NOP
    // 0x219c40: 0x0  nop
    ctx->pc = 0x219c40u;
    // NOP
    // 0x219c44: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x219c44u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[4]);
    // 0x219c48: 0x0  nop
    ctx->pc = 0x219c48u;
    // NOP
    // 0x219c4c: 0x0  nop
    ctx->pc = 0x219c4cu;
    // NOP
    // 0x219c50: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x219c50u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[4]);
    // 0x219c54: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x219c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x219c58: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x219c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x219c5c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x219c5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x219c60: 0x8cc23880  lw          $v0, 0x3880($a2)
    ctx->pc = 0x219c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 14464)));
    // 0x219c64: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x219C64u;
    {
        const bool branch_taken_0x219c64 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x219C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C64u;
        // 0x219c68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c64) {
            ctx->pc = 0x219CC4u;
            goto label_219cc4;
        }
    }
    ctx->pc = 0x219C6Cu;
    // 0x219c6c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x219c6cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x219c70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x219c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c74: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x219c74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_219c78:
    // 0x219c78: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x219c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219c7c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x219c7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219c80: 0x0  nop
    ctx->pc = 0x219c80u;
    // NOP
    // 0x219c84: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x219C84u;
    {
        const bool branch_taken_0x219c84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x219c84) {
            ctx->pc = 0x219C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219C84u;
            // 0x219c88: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219CB8u;
            goto label_219cb8;
        }
    }
    ctx->pc = 0x219C8Cu;
    // 0x219c8c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x219c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219c90: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x219c90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219c94: 0x0  nop
    ctx->pc = 0x219c94u;
    // NOP
    // 0x219c98: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x219C98u;
    {
        const bool branch_taken_0x219c98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x219c98) {
            ctx->pc = 0x219C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219C98u;
            // 0x219c9c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219CB8u;
            goto label_219cb8;
        }
    }
    ctx->pc = 0x219CA0u;
    // 0x219ca0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x219ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219ca4: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x219ca4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219ca8: 0x0  nop
    ctx->pc = 0x219ca8u;
    // NOP
    // 0x219cac: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x219CACu;
    {
        const bool branch_taken_0x219cac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x219CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CACu;
        // 0x219cb0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219cac) {
            ctx->pc = 0x219CFCu;
            goto label_219cfc;
        }
    }
    ctx->pc = 0x219CB4u;
    // 0x219cb4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x219cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_219cb8:
    // 0x219cb8: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x219cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x219cbc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x219CBCu;
    {
        const bool branch_taken_0x219cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CBCu;
        // 0x219cc0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219cbc) {
            ctx->pc = 0x219C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219c78;
        }
    }
    ctx->pc = 0x219CC4u;
label_219cc4:
    // 0x219cc4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x219cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x219cc8: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x219cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x219ccc: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x219cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x219cd0: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x219cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x219cd4: 0x8c643880  lw          $a0, 0x3880($v1)
    ctx->pc = 0x219cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14464)));
    // 0x219cd8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x219cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219cdc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x219cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x219ce0: 0xac643880  sw          $a0, 0x3880($v1)
    ctx->pc = 0x219ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14464), GPR_U32(ctx, 4));
    // 0x219ce4: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x219ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x219ce8: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x219ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x219cec: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x219cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219cf0: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x219cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x219cf4: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x219cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x219cf8: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x219cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_219cfc:
    // 0x219cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x219CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CFCu;
        // 0x219d00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219D04u;
    // 0x219d04: 0x0  nop
    ctx->pc = 0x219d04u;
    // NOP
    ctx->pc = 0x219d08u;
}
