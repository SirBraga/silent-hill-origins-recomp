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

// Function: sub_0013ABE8
// Address: 0x13abe8 - 0x13afc8
void sub_0013ABE8_0x13abe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013ABE8_0x13abe8");
#endif

    switch (ctx->pc) {
        case 0x13ac38u: goto label_13ac38;
        case 0x13ac48u: goto label_13ac48;
        case 0x13ac54u: goto label_13ac54;
        case 0x13ac9cu: goto label_13ac9c;
        case 0x13acc8u: goto label_13acc8;
        case 0x13acf0u: goto label_13acf0;
        case 0x13ad5cu: goto label_13ad5c;
        case 0x13ad94u: goto label_13ad94;
        case 0x13ae4cu: goto label_13ae4c;
        case 0x13ae80u: goto label_13ae80;
        case 0x13ae98u: goto label_13ae98;
        case 0x13aeccu: goto label_13aecc;
        case 0x13aee4u: goto label_13aee4;
        case 0x13af18u: goto label_13af18;
        case 0x13af3cu: goto label_13af3c;
        case 0x13af48u: goto label_13af48;
        case 0x13af54u: goto label_13af54;
        case 0x13af60u: goto label_13af60;
        case 0x13af68u: goto label_13af68;
        case 0x13af74u: goto label_13af74;
        case 0x13af7cu: goto label_13af7c;
        case 0x13af88u: goto label_13af88;
        case 0x13afa0u: goto label_13afa0;
        case 0x13afa8u: goto label_13afa8;
        case 0x13afb0u: goto label_13afb0;
        default: break;
    }

    ctx->pc = 0x13abe8u;

    // 0x13abe8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x13abe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x13abec: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x13abecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x13abf0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x13abf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x13abf4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13abf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13abf8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x13abf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x13abfc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13abfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x13ac00: 0x8e422db8  lw          $v0, 0x2DB8($s2)
    ctx->pc = 0x13ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11704)));
    // 0x13ac04: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x13AC04u;
    {
        const bool branch_taken_0x13ac04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AC04u;
        // 0x13ac08: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ac04) {
            ctx->pc = 0x13AE24u;
            goto label_13ae24;
        }
    }
    ctx->pc = 0x13AC0Cu;
    // 0x13ac0c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x13ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x13ac10: 0x8c4245e0  lw          $v0, 0x45E0($v0)
    ctx->pc = 0x13ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17888)));
    // 0x13ac14: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x13ac14u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x13ac18: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x13ac18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x13ac1c: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13AC1Cu;
    {
        const bool branch_taken_0x13ac1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AC1Cu;
        // 0x13ac20: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ac1c) {
            ctx->pc = 0x13AC38u;
            goto label_13ac38;
        }
    }
    ctx->pc = 0x13AC24u;
    // 0x13ac24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ac28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AC28u;
    {
        const bool branch_taken_0x13ac28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AC28u;
        // 0x13ac2c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ac28) {
            ctx->pc = 0x13AC3Cu;
            goto label_13ac3c;
        }
    }
    ctx->pc = 0x13AC30u;
    // 0x13ac30: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x13AC30u;
    SET_GPR_U32(ctx, 31, 0x13AC38u);
    ctx->pc = 0x13AC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AC30u;
    // 0x13ac34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x13AC30u, 0x13AC38u)) {
        return;
    }
    ctx->pc = 0x13AC38u;
label_13ac38:
    // 0x13ac38: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x13ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_13ac3c:
    // 0x13ac3c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x13ac3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13ac40: 0xc04f0c2  jal         func_13C308
    ctx->pc = 0x13AC40u;
    SET_GPR_U32(ctx, 31, 0x13AC48u);
    ctx->pc = 0x13AC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AC40u;
    // 0x13ac44: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x13AC40u, 0x13AC48u)) {
        return;
    }
    ctx->pc = 0x13AC48u;
label_13ac48:
    // 0x13ac48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ac48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac4c: 0xc04f0c2  jal         func_13C308
    ctx->pc = 0x13AC4Cu;
    SET_GPR_U32(ctx, 31, 0x13AC54u);
    ctx->pc = 0x13AC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AC4Cu;
    // 0x13ac50: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x13AC4Cu, 0x13AC54u)) {
        return;
    }
    ctx->pc = 0x13AC54u;
label_13ac54:
    // 0x13ac54: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x13ac54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13ac58: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x13ac58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x13ac5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13ac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ac60: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x13ac60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ac64: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x13ac64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ac68: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x13ac68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x13ac6c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x13ac6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ac70: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x13ac70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ac74: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x13ac74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ac78: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x13ac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13ac7c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x13ac7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x13ac80: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x13ac80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x13ac84: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x13ac84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x13ac88: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x13ac88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x13ac8c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x13ac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x13ac90: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13ac94: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x13AC94u;
    SET_GPR_U32(ctx, 31, 0x13AC9Cu);
    ctx->pc = 0x13AC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AC94u;
    // 0x13ac98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x13AC94u, 0x13AC9Cu)) {
        return;
    }
    ctx->pc = 0x13AC9Cu;
label_13ac9c:
    // 0x13ac9c: 0x0  nop
    ctx->pc = 0x13ac9cu;
    // NOP
    // 0x13aca0: 0x0  nop
    ctx->pc = 0x13aca0u;
    // NOP
    // 0x13aca4: 0x46000044  c1          0x44
    ctx->pc = 0x13aca4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x13aca8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13aca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13acac: 0x0  nop
    ctx->pc = 0x13acacu;
    // NOP
    // 0x13acb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13acb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13acb4: 0x0  nop
    ctx->pc = 0x13acb4u;
    // NOP
    // 0x13acb8: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x13ACB8u;
    {
        const bool branch_taken_0x13acb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACB8u;
        // 0x13acbc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13acb8) {
            ctx->pc = 0x13AD38u;
            goto label_13ad38;
        }
    }
    ctx->pc = 0x13ACC0u;
    // 0x13acc0: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x13acc0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x13acc4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x13acc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13acc8:
    // 0x13acc8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x13acc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13accc: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x13acccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13acd0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x13acd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x13acd4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x13acd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x13acd8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x13acd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x13acdc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x13acdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x13ace0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x13ace0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x13ace4: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x13ace4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x13ace8: 0xc04f0d4  jal         func_13C350
    ctx->pc = 0x13ACE8u;
    SET_GPR_U32(ctx, 31, 0x13ACF0u);
    ctx->pc = 0x13ACECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ACE8u;
    // 0x13acec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C350u, 0x13ACE8u, 0x13ACF0u)) {
        return;
    }
    ctx->pc = 0x13ACF0u;
label_13acf0:
    // 0x13acf0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x13acf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13acf4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x13acf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13acf8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x13acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13acfc: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x13acfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ad00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13ad00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13ad04: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x13ad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13ad08: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x13ad08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x13ad0c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x13ad0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ad10: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x13ad10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13ad14: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x13ad14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x13ad18: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x13ad18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x13ad1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13ad1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13ad20: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x13ad20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ad24: 0x0  nop
    ctx->pc = 0x13ad24u;
    // NOP
    // 0x13ad28: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x13AD28u;
    {
        const bool branch_taken_0x13ad28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD28u;
        // 0x13ad2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad28) {
            ctx->pc = 0x13AD50u;
            goto label_13ad50;
        }
    }
    ctx->pc = 0x13AD30u;
    // 0x13ad30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13AD30u;
    {
        const bool branch_taken_0x13ad30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD30u;
        // 0x13ad34: 0xae422dc0  sw          $v0, 0x2DC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 11712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad30) {
            ctx->pc = 0x13AD54u;
            goto label_13ad54;
        }
    }
    ctx->pc = 0x13AD38u;
label_13ad38:
    // 0x13ad38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13ad38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13ad3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ad3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ad40: 0x0  nop
    ctx->pc = 0x13ad40u;
    // NOP
    // 0x13ad44: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x13ad44u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x13ad48: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x13AD48u;
    {
        const bool branch_taken_0x13ad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD48u;
        // 0x13ad4c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad48) {
            ctx->pc = 0x13ACC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13acc8;
        }
    }
    ctx->pc = 0x13AD50u;
label_13ad50:
    // 0x13ad50: 0xae402dc0  sw          $zero, 0x2DC0($s2)
    ctx->pc = 0x13ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11712), GPR_U32(ctx, 0));
label_13ad54:
    // 0x13ad54: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x13AD54u;
    SET_GPR_U32(ctx, 31, 0x13AD5Cu);
    ctx->pc = 0x13AD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AD54u;
    // 0x13ad58: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x13AD54u, 0x13AD5Cu)) {
        return;
    }
    ctx->pc = 0x13AD5Cu;
label_13ad5c:
    // 0x13ad5c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13ad5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ad60: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x13ad60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13ad64: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x13ad64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ad68: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x13ad68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ad6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13ad6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ad70: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x13ad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13ad74: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x13ad74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x13ad78: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x13ad78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ad7c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x13ad7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x13ad80: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x13ad80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x13ad84: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13ad84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13ad88: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x13ad88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x13ad8c: 0xc09b320  jal         func_26CC80
    ctx->pc = 0x13AD8Cu;
    SET_GPR_U32(ctx, 31, 0x13AD94u);
    ctx->pc = 0x13AD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AD8Cu;
    // 0x13ad90: 0xe6412db0  swc1        $f1, 0x2DB0($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11696), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CC80u, 0x13AD8Cu, 0x13AD94u)) {
        return;
    }
    ctx->pc = 0x13AD94u;
label_13ad94:
    // 0x13ad94: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x13ad94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x13ad98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13ad98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13ad9c: 0x26432db0  addiu       $v1, $s2, 0x2DB0
    ctx->pc = 0x13ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 11696));
    // 0x13ada0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x13ada0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x13ada4: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x13ada4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x13ada8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13ada8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13adac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13adacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13adb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13adb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13adb4: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x13adb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x13adb8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13adb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13adbc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13adbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13adc0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13adc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13adc4: 0x0  nop
    ctx->pc = 0x13adc4u;
    // NOP
    // 0x13adc8: 0x0  nop
    ctx->pc = 0x13adc8u;
    // NOP
    // 0x13adcc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x13adccu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x13add0: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x13add0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x13add4: 0x0  nop
    ctx->pc = 0x13add4u;
    // NOP
    // 0x13add8: 0x0  nop
    ctx->pc = 0x13add8u;
    // NOP
    // 0x13addc: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x13addcu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x13ade0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13ade0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ade4: 0x0  nop
    ctx->pc = 0x13ade4u;
    // NOP
    // 0x13ade8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13ADE8u;
    {
        const bool branch_taken_0x13ade8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADE8u;
        // 0x13adec: 0xe6402db0  swc1        $f0, 0x2DB0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11696), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ade8) {
            ctx->pc = 0x13ADF4u;
            goto label_13adf4;
        }
    }
    ctx->pc = 0x13ADF0u;
    // 0x13adf0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13adf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13adf4:
    // 0x13adf4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x13adf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13adf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13adf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13adfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13adfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ae00: 0x27a20044  addiu       $v0, $sp, 0x44
    ctx->pc = 0x13ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x13ae04: 0xe6412db0  swc1        $f1, 0x2DB0($s2)
    ctx->pc = 0x13ae04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11696), bits); }
    // 0x13ae08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13ae08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ae0c: 0x0  nop
    ctx->pc = 0x13ae0cu;
    // NOP
    // 0x13ae10: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13AE10u;
    {
        const bool branch_taken_0x13ae10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE10u;
        // 0x13ae14: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae10) {
            ctx->pc = 0x13AE1Cu;
            goto label_13ae1c;
        }
    }
    ctx->pc = 0x13AE18u;
    // 0x13ae18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13ae18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13ae1c:
    // 0x13ae1c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13ae1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ae20: 0xe6402db0  swc1        $f0, 0x2DB0($s2)
    ctx->pc = 0x13ae20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11696), bits); }
label_13ae24:
    // 0x13ae24: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x13ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x13ae28: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x13ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x13ae2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13ae2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13ae30: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13ae30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x13ae34: 0xae422db4  sw          $v0, 0x2DB4($s2)
    ctx->pc = 0x13ae34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11700), GPR_U32(ctx, 2));
    // 0x13ae38: 0x24a5ee00  addiu       $a1, $a1, -0x1200
    ctx->pc = 0x13ae38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962688));
    // 0x13ae3c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x13ae3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae40: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x13ae40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae44: 0xc0406e8  jal         func_101BA0
    ctx->pc = 0x13AE44u;
    SET_GPR_U32(ctx, 31, 0x13AE4Cu);
    ctx->pc = 0x13AE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AE44u;
    // 0x13ae48: 0x8c7001a0  lw          $s0, 0x1A0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x13AE44u, 0x13AE4Cu)) {
        return;
    }
    ctx->pc = 0x13AE4Cu;
label_13ae4c:
    // 0x13ae4c: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13AE4Cu;
    {
        const bool branch_taken_0x13ae4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x13AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE4Cu;
        // 0x13ae50: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae4c) {
            ctx->pc = 0x13AE88u;
            goto label_13ae88;
        }
    }
    ctx->pc = 0x13AE54u;
    // 0x13ae54: 0x8e422dc0  lw          $v0, 0x2DC0($s2)
    ctx->pc = 0x13ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11712)));
    // 0x13ae58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AE58u;
    {
        const bool branch_taken_0x13ae58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE58u;
        // 0x13ae5c: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae58) {
            ctx->pc = 0x13AE6Cu;
            goto label_13ae6c;
        }
    }
    ctx->pc = 0x13AE60u;
    // 0x13ae60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ae60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13AE64u;
    {
        const bool branch_taken_0x13ae64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE64u;
        // 0x13ae68: 0x24a5ee18  addiu       $a1, $a1, -0x11E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae64) {
            ctx->pc = 0x13AE78u;
            goto label_13ae78;
        }
    }
    ctx->pc = 0x13AE6Cu;
label_13ae6c:
    // 0x13ae6c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13ae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x13ae70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ae70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae74: 0x24a5ee30  addiu       $a1, $a1, -0x11D0
    ctx->pc = 0x13ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962736));
label_13ae78:
    // 0x13ae78: 0xc0406e8  jal         func_101BA0
    ctx->pc = 0x13AE78u;
    SET_GPR_U32(ctx, 31, 0x13AE80u);
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x13AE78u, 0x13AE80u)) {
        return;
    }
    ctx->pc = 0x13AE80u;
label_13ae80:
    // 0x13ae80: 0xae422db4  sw          $v0, 0x2DB4($s2)
    ctx->pc = 0x13ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11700), GPR_U32(ctx, 2));
    // 0x13ae84: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13ae84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_13ae88:
    // 0x13ae88: 0x8e3001a0  lw          $s0, 0x1A0($s1)
    ctx->pc = 0x13ae88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x13ae8c: 0x24a5ee48  addiu       $a1, $a1, -0x11B8
    ctx->pc = 0x13ae8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962760));
    // 0x13ae90: 0xc0406e8  jal         func_101BA0
    ctx->pc = 0x13AE90u;
    SET_GPR_U32(ctx, 31, 0x13AE98u);
    ctx->pc = 0x13AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AE90u;
    // 0x13ae94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x13AE90u, 0x13AE98u)) {
        return;
    }
    ctx->pc = 0x13AE98u;
label_13ae98:
    // 0x13ae98: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13AE98u;
    {
        const bool branch_taken_0x13ae98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x13AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE98u;
        // 0x13ae9c: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae98) {
            ctx->pc = 0x13AED4u;
            goto label_13aed4;
        }
    }
    ctx->pc = 0x13AEA0u;
    // 0x13aea0: 0x8e422dc0  lw          $v0, 0x2DC0($s2)
    ctx->pc = 0x13aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11712)));
    // 0x13aea4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AEA4u;
    {
        const bool branch_taken_0x13aea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AEA4u;
        // 0x13aea8: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aea4) {
            ctx->pc = 0x13AEB8u;
            goto label_13aeb8;
        }
    }
    ctx->pc = 0x13AEACu;
    // 0x13aeac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13aeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aeb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13AEB0u;
    {
        const bool branch_taken_0x13aeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AEB0u;
        // 0x13aeb4: 0x24a5ee60  addiu       $a1, $a1, -0x11A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aeb0) {
            ctx->pc = 0x13AEC4u;
            goto label_13aec4;
        }
    }
    ctx->pc = 0x13AEB8u;
label_13aeb8:
    // 0x13aeb8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13aeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x13aebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13aebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aec0: 0x24a5ee78  addiu       $a1, $a1, -0x1188
    ctx->pc = 0x13aec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962808));
label_13aec4:
    // 0x13aec4: 0xc0406e8  jal         func_101BA0
    ctx->pc = 0x13AEC4u;
    SET_GPR_U32(ctx, 31, 0x13AECCu);
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x13AEC4u, 0x13AECCu)) {
        return;
    }
    ctx->pc = 0x13AECCu;
label_13aecc:
    // 0x13aecc: 0xae422db4  sw          $v0, 0x2DB4($s2)
    ctx->pc = 0x13aeccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11700), GPR_U32(ctx, 2));
    // 0x13aed0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13aed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_13aed4:
    // 0x13aed4: 0x8e3001a0  lw          $s0, 0x1A0($s1)
    ctx->pc = 0x13aed4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x13aed8: 0x24a5ee90  addiu       $a1, $a1, -0x1170
    ctx->pc = 0x13aed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
    // 0x13aedc: 0xc0406e8  jal         func_101BA0
    ctx->pc = 0x13AEDCu;
    SET_GPR_U32(ctx, 31, 0x13AEE4u);
    ctx->pc = 0x13AEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AEDCu;
    // 0x13aee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x13AEDCu, 0x13AEE4u)) {
        return;
    }
    ctx->pc = 0x13AEE4u;
label_13aee4:
    // 0x13aee4: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13AEE4u;
    {
        const bool branch_taken_0x13aee4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x13aee4) {
            ctx->pc = 0x13AF1Cu;
            goto label_13af1c;
        }
    }
    ctx->pc = 0x13AEECu;
    // 0x13aeec: 0x8e422dc0  lw          $v0, 0x2DC0($s2)
    ctx->pc = 0x13aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11712)));
    // 0x13aef0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AEF0u;
    {
        const bool branch_taken_0x13aef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AEF0u;
        // 0x13aef4: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aef0) {
            ctx->pc = 0x13AF04u;
            goto label_13af04;
        }
    }
    ctx->pc = 0x13AEF8u;
    // 0x13aef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13aef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aefc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13AEFCu;
    {
        const bool branch_taken_0x13aefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AEFCu;
        // 0x13af00: 0x24a5eea0  addiu       $a1, $a1, -0x1160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aefc) {
            ctx->pc = 0x13AF10u;
            goto label_13af10;
        }
    }
    ctx->pc = 0x13AF04u;
label_13af04:
    // 0x13af04: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13af04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x13af08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13af08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13af0c: 0x24a5eeb8  addiu       $a1, $a1, -0x1148
    ctx->pc = 0x13af0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962872));
label_13af10:
    // 0x13af10: 0xc0406e8  jal         func_101BA0
    ctx->pc = 0x13AF10u;
    SET_GPR_U32(ctx, 31, 0x13AF18u);
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x13AF10u, 0x13AF18u)) {
        return;
    }
    ctx->pc = 0x13AF18u;
label_13af18:
    // 0x13af18: 0xae422db4  sw          $v0, 0x2DB4($s2)
    ctx->pc = 0x13af18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11700), GPR_U32(ctx, 2));
label_13af1c:
    // 0x13af1c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x13af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x13af20: 0x8e432db4  lw          $v1, 0x2DB4($s2)
    ctx->pc = 0x13af20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11700)));
    // 0x13af24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13af24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13af28: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x13AF28u;
    {
        const bool branch_taken_0x13af28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF28u;
        // 0x13af2c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13af28) {
            ctx->pc = 0x13AFB4u;
            goto label_13afb4;
        }
    }
    ctx->pc = 0x13AF30u;
    // 0x13af30: 0x8e2501a0  lw          $a1, 0x1A0($s1)
    ctx->pc = 0x13af30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x13af34: 0xc04073e  jal         func_101CF8
    ctx->pc = 0x13AF34u;
    SET_GPR_U32(ctx, 31, 0x13AF3Cu);
    ctx->pc = 0x13AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AF34u;
    // 0x13af38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101CF8u, 0x13AF34u, 0x13AF3Cu)) {
        return;
    }
    ctx->pc = 0x13AF3Cu;
label_13af3c:
    // 0x13af3c: 0x8e442d98  lw          $a0, 0x2D98($s2)
    ctx->pc = 0x13af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11672)));
    // 0x13af40: 0xc09d55c  jal         func_275570
    ctx->pc = 0x13AF40u;
    SET_GPR_U32(ctx, 31, 0x13AF48u);
    ctx->pc = 0x13AF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AF40u;
    // 0x13af44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x13AF40u, 0x13AF48u)) {
        return;
    }
    ctx->pc = 0x13AF48u;
label_13af48:
    // 0x13af48: 0x8e452db4  lw          $a1, 0x2DB4($s2)
    ctx->pc = 0x13af48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11700)));
    // 0x13af4c: 0xc04073e  jal         func_101CF8
    ctx->pc = 0x13AF4Cu;
    SET_GPR_U32(ctx, 31, 0x13AF54u);
    ctx->pc = 0x13AF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AF4Cu;
    // 0x13af50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101CF8u, 0x13AF4Cu, 0x13AF54u)) {
        return;
    }
    ctx->pc = 0x13AF54u;
label_13af54:
    // 0x13af54: 0x8e442d9c  lw          $a0, 0x2D9C($s2)
    ctx->pc = 0x13af54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11676)));
    // 0x13af58: 0xc09d55c  jal         func_275570
    ctx->pc = 0x13AF58u;
    SET_GPR_U32(ctx, 31, 0x13AF60u);
    ctx->pc = 0x13AF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AF58u;
    // 0x13af5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x13AF58u, 0x13AF60u)) {
        return;
    }
    ctx->pc = 0x13AF60u;
label_13af60:
    // 0x13af60: 0xc04094c  jal         func_102530
    ctx->pc = 0x13AF60u;
    SET_GPR_U32(ctx, 31, 0x13AF68u);
    ctx->pc = 0x13AF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AF60u;
    // 0x13af64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102530u, 0x13AF60u, 0x13AF68u)) {
        return;
    }
    ctx->pc = 0x13AF68u;
label_13af68:
    // 0x13af68: 0x8e442d98  lw          $a0, 0x2D98($s2)
    ctx->pc = 0x13af68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11672)));
    // 0x13af6c: 0xc09d926  jal         func_276498
    ctx->pc = 0x13AF6Cu;
    SET_GPR_U32(ctx, 31, 0x13AF74u);
    ctx->pc = 0x13AF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AF6Cu;
    // 0x13af70: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x13AF6Cu, 0x13AF74u)) {
        return;
    }
    ctx->pc = 0x13AF74u;
label_13af74:
    // 0x13af74: 0xc04094c  jal         func_102530
    ctx->pc = 0x13AF74u;
    SET_GPR_U32(ctx, 31, 0x13AF7Cu);
    ctx->pc = 0x13AF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AF74u;
    // 0x13af78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102530u, 0x13AF74u, 0x13AF7Cu)) {
        return;
    }
    ctx->pc = 0x13AF7Cu;
label_13af7c:
    // 0x13af7c: 0x8e442d9c  lw          $a0, 0x2D9C($s2)
    ctx->pc = 0x13af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11676)));
    // 0x13af80: 0xc09d926  jal         func_276498
    ctx->pc = 0x13AF80u;
    SET_GPR_U32(ctx, 31, 0x13AF88u);
    ctx->pc = 0x13AF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AF80u;
    // 0x13af84: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x13AF80u, 0x13AF88u)) {
        return;
    }
    ctx->pc = 0x13AF88u;
label_13af88:
    // 0x13af88: 0x8e2200ec  lw          $v0, 0xEC($s1)
    ctx->pc = 0x13af88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x13af8c: 0x8e462d9c  lw          $a2, 0x2D9C($s2)
    ctx->pc = 0x13af8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11676)));
    // 0x13af90: 0xc64c2db0  lwc1        $f12, 0x2DB0($s2)
    ctx->pc = 0x13af90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13af94: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x13af94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13af98: 0xc09d938  jal         func_2764E0
    ctx->pc = 0x13AF98u;
    SET_GPR_U32(ctx, 31, 0x13AFA0u);
    ctx->pc = 0x13AF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AF98u;
    // 0x13af9c: 0x8e452d98  lw          $a1, 0x2D98($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2764E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2764E0u, 0x13AF98u, 0x13AFA0u)) {
        return;
    }
    ctx->pc = 0x13AFA0u;
label_13afa0:
    // 0x13afa0: 0xc040810  jal         func_102040
    ctx->pc = 0x13AFA0u;
    SET_GPR_U32(ctx, 31, 0x13AFA8u);
    ctx->pc = 0x13AFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AFA0u;
    // 0x13afa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102040u, 0x13AFA0u, 0x13AFA8u)) {
        return;
    }
    ctx->pc = 0x13AFA8u;
label_13afa8:
    // 0x13afa8: 0xc0497a4  jal         func_125E90
    ctx->pc = 0x13AFA8u;
    SET_GPR_U32(ctx, 31, 0x13AFB0u);
    ctx->pc = 0x13AFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AFA8u;
    // 0x13afac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125E90u, 0x13AFA8u, 0x13AFB0u)) {
        return;
    }
    ctx->pc = 0x13AFB0u;
label_13afb0:
    // 0x13afb0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x13afb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13afb4:
    // 0x13afb4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x13afb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13afb8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x13afb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13afbc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13afbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13afc0: 0x3e00008  jr          $ra
    ctx->pc = 0x13AFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFC0u;
        // 0x13afc4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AFC8u;
}
