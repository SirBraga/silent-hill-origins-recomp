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

// Function: sub_0014DEE8
// Address: 0x14dee8 - 0x14e050
void sub_0014DEE8_0x14dee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DEE8_0x14dee8");
#endif

    switch (ctx->pc) {
        case 0x14df40u: goto label_14df40;
        case 0x14dfe8u: goto label_14dfe8;
        case 0x14e03cu: goto label_14e03c;
        default: break;
    }

    ctx->pc = 0x14dee8u;

    // 0x14dee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14dee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14deec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14deecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14def0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14def0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14def4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14def4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14def8: 0x6a020083  ldl         $v0, 0x83($s0)
    ctx->pc = 0x14def8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14defc: 0x6e02007c  ldr         $v0, 0x7C($s0)
    ctx->pc = 0x14defcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14df00: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x14df00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x14df04: 0xb2020177  sdl         $v0, 0x177($s0)
    ctx->pc = 0x14df04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14df08: 0xb6020170  sdr         $v0, 0x170($s0)
    ctx->pc = 0x14df08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14df0c: 0xae030178  sw          $v1, 0x178($s0)
    ctx->pc = 0x14df0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 3));
    // 0x14df10: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x14df10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14df14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14df14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14df18: 0xe6000160  swc1        $f0, 0x160($s0)
    ctx->pc = 0x14df18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 352), bits); }
    // 0x14df1c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x14df1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14df20: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14df20u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x14df24: 0xe6010164  swc1        $f1, 0x164($s0)
    ctx->pc = 0x14df24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
    // 0x14df28: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x14df28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14df2c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14df2cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14df30: 0xe6000168  swc1        $f0, 0x168($s0)
    ctx->pc = 0x14df30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
    // 0x14df34: 0x26040160  addiu       $a0, $s0, 0x160
    ctx->pc = 0x14df34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x14df38: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x14DF38u;
    SET_GPR_U32(ctx, 31, 0x14DF40u);
    ctx->pc = 0x14DF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DF38u;
    // 0x14df3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x14DF38u, 0x14DF40u)) {
        return;
    }
    ctx->pc = 0x14DF40u;
label_14df40:
    // 0x14df40: 0xc6010164  lwc1        $f1, 0x164($s0)
    ctx->pc = 0x14df40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14df44: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x14df44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x14df48: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x14df48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x14df4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14df4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14df50: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x14df50u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x14df54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14df54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14df58: 0x0  nop
    ctx->pc = 0x14df58u;
    // NOP
    // 0x14df5c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x14DF5Cu;
    {
        const bool branch_taken_0x14df5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF5Cu;
        // 0x14df60: 0xae000150  sw          $zero, 0x150($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df5c) {
            ctx->pc = 0x14DF80u;
            goto label_14df80;
        }
    }
    ctx->pc = 0x14DF64u;
    // 0x14df64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14df64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14df68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14df68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14df6c: 0x0  nop
    ctx->pc = 0x14df6cu;
    // NOP
    // 0x14df70: 0xe6000154  swc1        $f0, 0x154($s0)
    ctx->pc = 0x14df70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x14df74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14DF74u;
    {
        const bool branch_taken_0x14df74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF74u;
        // 0x14df78: 0xae000158  sw          $zero, 0x158($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df74) {
            ctx->pc = 0x14DF94u;
            goto label_14df94;
        }
    }
    ctx->pc = 0x14DF7Cu;
    // 0x14df7c: 0x0  nop
    ctx->pc = 0x14df7cu;
    // NOP
label_14df80:
    // 0x14df80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14df80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14df84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14df84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14df88: 0x0  nop
    ctx->pc = 0x14df88u;
    // NOP
    // 0x14df8c: 0xe6000158  swc1        $f0, 0x158($s0)
    ctx->pc = 0x14df8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
    // 0x14df90: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x14df90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
label_14df94:
    // 0x14df94: 0xc6020158  lwc1        $f2, 0x158($s0)
    ctx->pc = 0x14df94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14df98: 0xc6010164  lwc1        $f1, 0x164($s0)
    ctx->pc = 0x14df98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14df9c: 0xc6040154  lwc1        $f4, 0x154($s0)
    ctx->pc = 0x14df9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14dfa0: 0xc6070168  lwc1        $f7, 0x168($s0)
    ctx->pc = 0x14dfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x14dfa4: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x14dfa4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x14dfa8: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x14dfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dfac: 0xc6030160  lwc1        $f3, 0x160($s0)
    ctx->pc = 0x14dfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14dfb0: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x14dfb0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x14dfb4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14dfb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14dfb8: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x14dfb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x14dfbc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x14dfbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x14dfc0: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x14dfc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x14dfc4: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x14dfc4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x14dfc8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x14dfc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x14dfcc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x14dfccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x14dfd0: 0xe6050140  swc1        $f5, 0x140($s0)
    ctx->pc = 0x14dfd0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
    // 0x14dfd4: 0xe6010148  swc1        $f1, 0x148($s0)
    ctx->pc = 0x14dfd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x14dfd8: 0xe6020144  swc1        $f2, 0x144($s0)
    ctx->pc = 0x14dfd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x14dfdc: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x14dfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x14dfe0: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x14DFE0u;
    SET_GPR_U32(ctx, 31, 0x14DFE8u);
    ctx->pc = 0x14DFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DFE0u;
    // 0x14dfe4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x14DFE0u, 0x14DFE8u)) {
        return;
    }
    ctx->pc = 0x14DFE8u;
label_14dfe8:
    // 0x14dfe8: 0xc6040164  lwc1        $f4, 0x164($s0)
    ctx->pc = 0x14dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14dfec: 0xc6020168  lwc1        $f2, 0x168($s0)
    ctx->pc = 0x14dfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14dff0: 0xc6010144  lwc1        $f1, 0x144($s0)
    ctx->pc = 0x14dff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dff4: 0xc6070148  lwc1        $f7, 0x148($s0)
    ctx->pc = 0x14dff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x14dff8: 0xc6000160  lwc1        $f0, 0x160($s0)
    ctx->pc = 0x14dff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dffc: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x14dffcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x14e000: 0xc6030140  lwc1        $f3, 0x140($s0)
    ctx->pc = 0x14e000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14e004: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x14e004u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x14e008: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14e008u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14e00c: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x14e00cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x14e010: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x14e010u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x14e014: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x14e014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x14e018: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x14e018u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x14e01c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x14e01cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x14e020: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x14e020u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x14e024: 0xe6050150  swc1        $f5, 0x150($s0)
    ctx->pc = 0x14e024u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
    // 0x14e028: 0xe6010158  swc1        $f1, 0x158($s0)
    ctx->pc = 0x14e028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
    // 0x14e02c: 0xe6020154  swc1        $f2, 0x154($s0)
    ctx->pc = 0x14e02cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x14e030: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x14e030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14e034: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x14E034u;
    SET_GPR_U32(ctx, 31, 0x14E03Cu);
    ctx->pc = 0x14E038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E034u;
    // 0x14e038: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x14E034u, 0x14E03Cu)) {
        return;
    }
    ctx->pc = 0x14E03Cu;
label_14e03c:
    // 0x14e03c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14e03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e044: 0x3e00008  jr          $ra
    ctx->pc = 0x14E044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E044u;
        // 0x14e048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E04Cu;
    // 0x14e04c: 0x0  nop
    ctx->pc = 0x14e04cu;
    // NOP
    ctx->pc = 0x14e050u;
}
