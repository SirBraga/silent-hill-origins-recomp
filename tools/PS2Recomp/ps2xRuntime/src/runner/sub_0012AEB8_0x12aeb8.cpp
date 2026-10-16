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

// Function: sub_0012AEB8
// Address: 0x12aeb8 - 0x12b1c8
void sub_0012AEB8_0x12aeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012AEB8_0x12aeb8");
#endif

    switch (ctx->pc) {
        case 0x12af50u: goto label_12af50;
        case 0x12af70u: goto label_12af70;
        case 0x12af8cu: goto label_12af8c;
        case 0x12aff4u: goto label_12aff4;
        case 0x12b0a0u: goto label_12b0a0;
        case 0x12b0fcu: goto label_12b0fc;
        case 0x12b188u: goto label_12b188;
        case 0x12b1a8u: goto label_12b1a8;
        default: break;
    }

    ctx->pc = 0x12aeb8u;

    // 0x12aeb8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12aeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12aebc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12aebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12aec0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x12aec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x12aec4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x12aec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x12aec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12aec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aecc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12aeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12aed0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x12aed0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x12aed4: 0xc6030c1c  lwc1        $f3, 0xC1C($s0)
    ctx->pc = 0x12aed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12aed8: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x12aed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12aedc: 0x0  nop
    ctx->pc = 0x12aedcu;
    // NOP
    // 0x12aee0: 0x450000b2  bc1f        . + 4 + (0xB2 << 2)
    ctx->pc = 0x12AEE0u;
    {
        const bool branch_taken_0x12aee0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEE0u;
        // 0x12aee4: 0x26110040  addiu       $s1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aee0) {
            ctx->pc = 0x12B1ACu;
            goto label_12b1ac;
        }
    }
    ctx->pc = 0x12AEE8u;
    // 0x12aee8: 0xc6002d58  lwc1        $f0, 0x2D58($s0)
    ctx->pc = 0x12aee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12aeec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12aeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12aef0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12aef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12aef4: 0x8e022be4  lw          $v0, 0x2BE4($s0)
    ctx->pc = 0x12aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11236)));
    // 0x12aef8: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x12aef8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x12aefc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12AEFCu;
    {
        const bool branch_taken_0x12aefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEFCu;
        // 0x12af00: 0xe6012d58  swc1        $f1, 0x2D58($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11608), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aefc) {
            ctx->pc = 0x12AF44u;
            goto label_12af44;
        }
    }
    ctx->pc = 0x12AF04u;
    // 0x12af04: 0x8e022be0  lw          $v0, 0x2BE0($s0)
    ctx->pc = 0x12af04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11232)));
    // 0x12af08: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12AF08u;
    {
        const bool branch_taken_0x12af08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12af08) {
            ctx->pc = 0x12AF44u;
            goto label_12af44;
        }
    }
    ctx->pc = 0x12AF10u;
    // 0x12af10: 0xc6040fa0  lwc1        $f4, 0xFA0($s0)
    ctx->pc = 0x12af10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12af14: 0xc6200bd8  lwc1        $f0, 0xBD8($s1)
    ctx->pc = 0x12af14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12af18: 0x46046042  mul.s       $f1, $f12, $f4
    ctx->pc = 0x12af18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x12af1c: 0xc6022bd0  lwc1        $f2, 0x2BD0($s0)
    ctx->pc = 0x12af1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12af20: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x12af20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x12af24: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x12af24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x12af28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12af28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12af2c: 0x0  nop
    ctx->pc = 0x12af2cu;
    // NOP
    // 0x12af30: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x12AF30u;
    {
        const bool branch_taken_0x12af30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12af30) {
            ctx->pc = 0x12AF44u;
            goto label_12af44;
        }
    }
    ctx->pc = 0x12AF38u;
    // 0x12af38: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x12af38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x12af3c: 0x0  nop
    ctx->pc = 0x12af3cu;
    // NOP
    // 0x12af40: 0x46040303  div.s       $f12, $f0, $f4
    ctx->pc = 0x12af40u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
label_12af44:
    // 0x12af44: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12af44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12af48: 0xc049a3e  jal         func_1268F8
    ctx->pc = 0x12AF48u;
    SET_GPR_U32(ctx, 31, 0x12AF50u);
    ctx->pc = 0x12AF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF48u;
    // 0x12af4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1268F8u, 0x12AF48u, 0x12AF50u)) {
        return;
    }
    ctx->pc = 0x12AF50u;
label_12af50:
    // 0x12af50: 0xc6000c1c  lwc1        $f0, 0xC1C($s0)
    ctx->pc = 0x12af50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12af54: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x12af54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12af58: 0x0  nop
    ctx->pc = 0x12af58u;
    // NOP
    // 0x12af5c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x12AF5Cu;
    {
        const bool branch_taken_0x12af5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12af5c) {
            ctx->pc = 0x12AF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AF5Cu;
            // 0x12af60: 0xc60028c0  lwc1        $f0, 0x28C0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AF74u;
            goto label_12af74;
        }
    }
    ctx->pc = 0x12AF64u;
    // 0x12af64: 0xae00284c  sw          $zero, 0x284C($s0)
    ctx->pc = 0x12af64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10316), GPR_U32(ctx, 0));
    // 0x12af68: 0xc06534a  jal         func_194D28
    ctx->pc = 0x12AF68u;
    SET_GPR_U32(ctx, 31, 0x12AF70u);
    ctx->pc = 0x12AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF68u;
    // 0x12af6c: 0x8e042aa8  lw          $a0, 0x2AA8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10920)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x194D28u, 0x12AF68u, 0x12AF70u)) {
        return;
    }
    ctx->pc = 0x12AF70u;
label_12af70:
    // 0x12af70: 0xc60028c0  lwc1        $f0, 0x28C0($s0)
    ctx->pc = 0x12af70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12af74:
    // 0x12af74: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12af74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12af78: 0x0  nop
    ctx->pc = 0x12af78u;
    // NOP
    // 0x12af7c: 0x4502001e  bc1fl       . + 4 + (0x1E << 2)
    ctx->pc = 0x12AF7Cu;
    {
        const bool branch_taken_0x12af7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12af7c) {
            ctx->pc = 0x12AF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AF7Cu;
            // 0x12af80: 0x8e022bcc  lw          $v0, 0x2BCC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AFF8u;
            goto label_12aff8;
        }
    }
    ctx->pc = 0x12AF84u;
    // 0x12af84: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x12AF84u;
    SET_GPR_U32(ctx, 31, 0x12AF8Cu);
    ctx->pc = 0x12AF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF84u;
    // 0x12af88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x12AF84u, 0x12AF8Cu)) {
        return;
    }
    ctx->pc = 0x12AF8Cu;
label_12af8c:
    // 0x12af8c: 0xc60028c0  lwc1        $f0, 0x28C0($s0)
    ctx->pc = 0x12af8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12af90: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x12af90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x12af94: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x12af94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x12af98: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x12af98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x12af9c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x12af9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12afa0: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x12afa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12afa4: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x12afa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12afa8: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x12afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x12afac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x12afacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x12afb0: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x12afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x12afb4: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x12afb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x12afb8: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x12afb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x12afbc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x12afbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12afc0: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x12afc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12afc4: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x12afc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12afc8: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x12afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x12afcc: 0x8c634668  lw          $v1, 0x4668($v1)
    ctx->pc = 0x12afccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4668u));
    // 0x12afd0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12AFD0u;
    {
        const bool branch_taken_0x12afd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFD0u;
        // 0x12afd4: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12afd0) {
            ctx->pc = 0x12AFF4u;
            goto label_12aff4;
        }
    }
    ctx->pc = 0x12AFD8u;
    // 0x12afd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12afdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AFDCu;
    {
        const bool branch_taken_0x12afdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFDCu;
        // 0x12afe0: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12afdc) {
            ctx->pc = 0x12AFF4u;
            goto label_12aff4;
        }
    }
    ctx->pc = 0x12AFE4u;
    // 0x12afe4: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x12afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x12afe8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12afe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afec: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x12AFECu;
    SET_GPR_U32(ctx, 31, 0x12AFF4u);
    ctx->pc = 0x12AFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AFECu;
    // 0x12aff0: 0xac5d0004  sw          $sp, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x12AFECu, 0x12AFF4u)) {
        return;
    }
    ctx->pc = 0x12AFF4u;
label_12aff4:
    // 0x12aff4: 0x8e022bcc  lw          $v0, 0x2BCC($s0)
    ctx->pc = 0x12aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11212)));
label_12aff8:
    // 0x12aff8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12AFF8u;
    {
        const bool branch_taken_0x12aff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFF8u;
        // 0x12affc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aff8) {
            ctx->pc = 0x12B004u;
            goto label_12b004;
        }
    }
    ctx->pc = 0x12B000u;
    // 0x12b000: 0xae022bc8  sw          $v0, 0x2BC8($s0)
    ctx->pc = 0x12b000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11208), GPR_U32(ctx, 2));
label_12b004:
    // 0x12b004: 0xc6200bd8  lwc1        $f0, 0xBD8($s1)
    ctx->pc = 0x12b004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b008: 0xc6210bdc  lwc1        $f1, 0xBDC($s1)
    ctx->pc = 0x12b008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b00c: 0xc6022bd0  lwc1        $f2, 0x2BD0($s0)
    ctx->pc = 0x12b00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12b010: 0x0  nop
    ctx->pc = 0x12b010u;
    // NOP
    // 0x12b014: 0x0  nop
    ctx->pc = 0x12b014u;
    // NOP
    // 0x12b018: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x12b018u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x12b01c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x12b01cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b020: 0x0  nop
    ctx->pc = 0x12b020u;
    // NOP
    // 0x12b024: 0x4502003b  bc1fl       . + 4 + (0x3B << 2)
    ctx->pc = 0x12B024u;
    {
        const bool branch_taken_0x12b024 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b024) {
            ctx->pc = 0x12B028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B024u;
            // 0x12b028: 0xc6010c1c  lwc1        $f1, 0xC1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B114u;
            goto label_12b114;
        }
    }
    ctx->pc = 0x12B02Cu;
    // 0x12b02c: 0x8e022bc4  lw          $v0, 0x2BC4($s0)
    ctx->pc = 0x12b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11204)));
    // 0x12b030: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x12B030u;
    {
        const bool branch_taken_0x12b030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b030) {
            ctx->pc = 0x12B034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B030u;
            // 0x12b034: 0xc6002be8  lwc1        $f0, 0x2BE8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B104u;
            goto label_12b104;
        }
    }
    ctx->pc = 0x12B038u;
    // 0x12b038: 0x8e022be4  lw          $v0, 0x2BE4($s0)
    ctx->pc = 0x12b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11236)));
    // 0x12b03c: 0x8e032be0  lw          $v1, 0x2BE0($s0)
    ctx->pc = 0x12b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11232)));
    // 0x12b040: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b044: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x12B044u;
    {
        const bool branch_taken_0x12b044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B044u;
        // 0x12b048: 0xae022be4  sw          $v0, 0x2BE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b044) {
            ctx->pc = 0x12B0A8u;
            goto label_12b0a8;
        }
    }
    ctx->pc = 0x12B04Cu;
    // 0x12b04c: 0xc6000c1c  lwc1        $f0, 0xC1C($s0)
    ctx->pc = 0x12b04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b054: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12b054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12b058: 0x0  nop
    ctx->pc = 0x12b058u;
    // NOP
    // 0x12b05c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12b05cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b060: 0x0  nop
    ctx->pc = 0x12b060u;
    // NOP
    // 0x12b064: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x12B064u;
    {
        const bool branch_taken_0x12b064 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B064u;
        // 0x12b068: 0xae022bc4  sw          $v0, 0x2BC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b064) {
            ctx->pc = 0x12B0A0u;
            goto label_12b0a0;
        }
    }
    ctx->pc = 0x12B06Cu;
    // 0x12b06c: 0x86020c36  lh          $v0, 0xC36($s0)
    ctx->pc = 0x12b06cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 3126)));
    // 0x12b070: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12B070u;
    {
        const bool branch_taken_0x12b070 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x12B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B070u;
        // 0x12b074: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b070) {
            ctx->pc = 0x12B0A0u;
            goto label_12b0a0;
        }
    }
    ctx->pc = 0x12B078u;
    // 0x12b078: 0x8e040c30  lw          $a0, 0xC30($s0)
    ctx->pc = 0x12b078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3120)));
    // 0x12b07c: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x12b07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
    // 0x12b080: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12b080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12b084: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B084u;
    {
        const bool branch_taken_0x12b084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B084u;
        // 0x12b088: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b084) {
            ctx->pc = 0x12B0A0u;
            goto label_12b0a0;
        }
    }
    ctx->pc = 0x12B08Cu;
    // 0x12b08c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12b090: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x12B090u;
    {
        const bool branch_taken_0x12b090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b090) {
            ctx->pc = 0x12B094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B090u;
            // 0x12b094: 0xae000c1c  sw          $zero, 0xC1C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3100), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B110u;
            goto label_12b110;
        }
    }
    ctx->pc = 0x12B098u;
    // 0x12b098: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x12B098u;
    SET_GPR_U32(ctx, 31, 0x12B0A0u);
    ctx->pc = 0x12B09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B098u;
    // 0x12b09c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x12B098u, 0x12B0A0u)) {
        return;
    }
    ctx->pc = 0x12B0A0u;
label_12b0a0:
    // 0x12b0a0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x12B0A0u;
    {
        const bool branch_taken_0x12b0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0A0u;
        // 0x12b0a4: 0xae000c1c  sw          $zero, 0xC1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0a0) {
            ctx->pc = 0x12B110u;
            goto label_12b110;
        }
    }
    ctx->pc = 0x12B0A8u;
label_12b0a8:
    // 0x12b0a8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x12b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12b0ac: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12B0ACu;
    {
        const bool branch_taken_0x12b0ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0ACu;
        // 0x12b0b0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0ac) {
            ctx->pc = 0x12B0B8u;
            goto label_12b0b8;
        }
    }
    ctx->pc = 0x12B0B4u;
    // 0x12b0b4: 0xae022be0  sw          $v0, 0x2BE0($s0)
    ctx->pc = 0x12b0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11232), GPR_U32(ctx, 2));
label_12b0b8:
    // 0x12b0b8: 0xc6002bd8  lwc1        $f0, 0x2BD8($s0)
    ctx->pc = 0x12b0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b0bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b0c0: 0xae022bc4  sw          $v0, 0x2BC4($s0)
    ctx->pc = 0x12b0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11204), GPR_U32(ctx, 2));
    // 0x12b0c4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x12b0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x12b0c8: 0xe6002be8  swc1        $f0, 0x2BE8($s0)
    ctx->pc = 0x12b0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11240), bits); }
    // 0x12b0cc: 0xae002bec  sw          $zero, 0x2BEC($s0)
    ctx->pc = 0x12b0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11244), GPR_U32(ctx, 0));
    // 0x12b0d0: 0x8e042d48  lw          $a0, 0x2D48($s0)
    ctx->pc = 0x12b0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11592)));
    // 0x12b0d4: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x12b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x12b0d8: 0x5082000e  beql        $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12B0D8u;
    {
        const bool branch_taken_0x12b0d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b0d8) {
            ctx->pc = 0x12B0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B0D8u;
            // 0x12b0dc: 0xc6010c1c  lwc1        $f1, 0xC1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B114u;
            goto label_12b114;
        }
    }
    ctx->pc = 0x12B0E0u;
    // 0x12b0e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12b0e4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12B0E4u;
    {
        const bool branch_taken_0x12b0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b0e4) {
            ctx->pc = 0x12B0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B0E4u;
            // 0x12b0e8: 0xc6010c1c  lwc1        $f1, 0xC1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B114u;
            goto label_12b114;
        }
    }
    ctx->pc = 0x12B0ECu;
    // 0x12b0ec: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12b0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12b0f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12b0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b0f4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x12B0F4u;
    SET_GPR_U32(ctx, 31, 0x12B0FCu);
    ctx->pc = 0x12B0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B0F4u;
    // 0x12b0f8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x12B0F4u, 0x12B0FCu)) {
        return;
    }
    ctx->pc = 0x12B0FCu;
label_12b0fc:
    // 0x12b0fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12B0FCu;
    {
        const bool branch_taken_0x12b0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0FCu;
        // 0x12b100: 0xc6010c1c  lwc1        $f1, 0xC1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0fc) {
            ctx->pc = 0x12B114u;
            goto label_12b114;
        }
    }
    ctx->pc = 0x12B104u;
label_12b104:
    // 0x12b104: 0xc6012bdc  lwc1        $f1, 0x2BDC($s0)
    ctx->pc = 0x12b104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b108: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b10c: 0xe6002be8  swc1        $f0, 0x2BE8($s0)
    ctx->pc = 0x12b10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11240), bits); }
label_12b110:
    // 0x12b110: 0xc6010c1c  lwc1        $f1, 0xC1C($s0)
    ctx->pc = 0x12b110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b114:
    // 0x12b114: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12b114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b118: 0x0  nop
    ctx->pc = 0x12b118u;
    // NOP
    // 0x12b11c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12b11cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b120: 0x0  nop
    ctx->pc = 0x12b120u;
    // NOP
    // 0x12b124: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x12B124u;
    {
        const bool branch_taken_0x12b124 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B124u;
        // 0x12b128: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b124) {
            ctx->pc = 0x12B1ACu;
            goto label_12b1ac;
        }
    }
    ctx->pc = 0x12B12Cu;
    // 0x12b12c: 0x8e032d80  lw          $v1, 0x2D80($s0)
    ctx->pc = 0x12b12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11648)));
    // 0x12b130: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12B130u;
    {
        const bool branch_taken_0x12b130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B130u;
        // 0x12b134: 0x24110012  addiu       $s1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b130) {
            ctx->pc = 0x12B160u;
            goto label_12b160;
        }
    }
    ctx->pc = 0x12B138u;
    // 0x12b138: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x12b138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12b13c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12B13Cu;
    {
        const bool branch_taken_0x12b13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B13Cu;
        // 0x12b140: 0x3a220012  xori        $v0, $s1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)18);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b13c) {
            ctx->pc = 0x12B178u;
            goto label_12b178;
        }
    }
    ctx->pc = 0x12B144u;
    // 0x12b144: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12b144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b148: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12B148u;
    {
        const bool branch_taken_0x12b148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B148u;
        // 0x12b14c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b148) {
            ctx->pc = 0x12B168u;
            goto label_12b168;
        }
    }
    ctx->pc = 0x12B150u;
    // 0x12b150: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12B150u;
    {
        const bool branch_taken_0x12b150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B150u;
        // 0x12b154: 0x3a220012  xori        $v0, $s1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)18);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b150) {
            ctx->pc = 0x12B170u;
            goto label_12b170;
        }
    }
    ctx->pc = 0x12B158u;
    // 0x12b158: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12B158u;
    {
        const bool branch_taken_0x12b158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b158) {
            ctx->pc = 0x12B178u;
            goto label_12b178;
        }
    }
    ctx->pc = 0x12B160u;
label_12b160:
    // 0x12b160: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12B160u;
    {
        const bool branch_taken_0x12b160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B160u;
        // 0x12b164: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b160) {
            ctx->pc = 0x12B174u;
            goto label_12b174;
        }
    }
    ctx->pc = 0x12B168u;
label_12b168:
    // 0x12b168: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B168u;
    {
        const bool branch_taken_0x12b168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B168u;
        // 0x12b16c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b168) {
            ctx->pc = 0x12B174u;
            goto label_12b174;
        }
    }
    ctx->pc = 0x12B170u;
label_12b170:
    // 0x12b170: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12b170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b174:
    // 0x12b174: 0x3a220012  xori        $v0, $s1, 0x12
    ctx->pc = 0x12b174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)18);
label_12b178:
    // 0x12b178: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x12B178u;
    {
        const bool branch_taken_0x12b178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b178) {
            ctx->pc = 0x12B17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B178u;
            // 0x12b17c: 0xae002d80  sw          $zero, 0x2D80($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 11648), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B1ACu;
            goto label_12b1ac;
        }
    }
    ctx->pc = 0x12B180u;
    // 0x12b180: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x12B180u;
    SET_GPR_U32(ctx, 31, 0x12B188u);
    ctx->pc = 0x12B184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B180u;
    // 0x12b184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x12B180u, 0x12B188u)) {
        return;
    }
    ctx->pc = 0x12B188u;
label_12b188:
    // 0x12b188: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12b188u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12b18c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x12b18cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12b190: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b194: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12b194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12b198: 0x0  nop
    ctx->pc = 0x12b198u;
    // NOP
    // 0x12b19c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x12b19cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x12b1a0: 0xc05f910  jal         func_17E440
    ctx->pc = 0x12B1A0u;
    SET_GPR_U32(ctx, 31, 0x12B1A8u);
    ctx->pc = 0x12B1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B1A0u;
    // 0x12b1a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x12B1A0u, 0x12B1A8u)) {
        return;
    }
    ctx->pc = 0x12B1A8u;
label_12b1a8:
    // 0x12b1a8: 0xae002d80  sw          $zero, 0x2D80($s0)
    ctx->pc = 0x12b1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11648), GPR_U32(ctx, 0));
label_12b1ac:
    // 0x12b1ac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x12b1acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12b1b0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x12b1b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12b1b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12b1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b1b8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x12b1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12b1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x12B1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1BCu;
        // 0x12b1c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B1C4u;
    // 0x12b1c4: 0x0  nop
    ctx->pc = 0x12b1c4u;
    // NOP
    ctx->pc = 0x12b1c8u;
}
