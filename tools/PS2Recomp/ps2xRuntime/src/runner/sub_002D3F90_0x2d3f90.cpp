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

// Function: sub_002D3F90
// Address: 0x2d3f90 - 0x2d4498
void sub_002D3F90_0x2d3f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3F90_0x2d3f90");
#endif

    switch (ctx->pc) {
        case 0x2d4034u: goto label_2d4034;
        case 0x2d40f0u: goto label_2d40f0;
        case 0x2d4108u: goto label_2d4108;
        case 0x2d4120u: goto label_2d4120;
        case 0x2d41bcu: goto label_2d41bc;
        case 0x2d41d4u: goto label_2d41d4;
        case 0x2d41ecu: goto label_2d41ec;
        case 0x2d4208u: goto label_2d4208;
        case 0x2d4270u: goto label_2d4270;
        case 0x2d4290u: goto label_2d4290;
        case 0x2d42b0u: goto label_2d42b0;
        case 0x2d4368u: goto label_2d4368;
        case 0x2d444cu: goto label_2d444c;
        default: break;
    }

    ctx->pc = 0x2d3f90u;

    // 0x2d3f90: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2d3f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2d3f94: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2d3f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2d3f98: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2d3f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x2d3f9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d3f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3fa0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2d3fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2d3fa4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d3fa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3fa8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2d3fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2d3fac: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2d3facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x2d3fb0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2d3fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2d3fb4: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x2d3fb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2d3fb8: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2d3fb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2d3fbc: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x2d3fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d3fc0: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x2d3fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d3fc4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2d3fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d3fc8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2d3fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3fcc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2d3fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3fd0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2d3fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2d3fd4: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x2d3fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d3fd8: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x2d3fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d3fdc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2d3fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2d3fe0: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2d3fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3fe4: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2d3fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3fe8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2d3fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2d3fec: 0xc635004c  lwc1        $f21, 0x4C($s1)
    ctx->pc = 0x2d3fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d3ff0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2d3ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3ff4: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x2d3ff4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x2d3ff8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2d3ff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3ffc: 0x0  nop
    ctx->pc = 0x2d3ffcu;
    // NOP
    // 0x2d4000: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2D4000u;
    {
        const bool branch_taken_0x2d4000 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D4004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4000u;
        // 0x2d4004: 0xc7a10018  lwc1        $f1, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4000) {
            ctx->pc = 0x2D403Cu;
            goto label_2d403c;
        }
    }
    ctx->pc = 0x2D4008u;
    // 0x2d4008: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x2d4008u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x2d400c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2d400cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d4010: 0x0  nop
    ctx->pc = 0x2d4010u;
    // NOP
    // 0x2d4014: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2D4014u;
    {
        const bool branch_taken_0x2d4014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D4018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4014u;
        // 0x2d4018: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4014) {
            ctx->pc = 0x2D4040u;
            goto label_2d4040;
        }
    }
    ctx->pc = 0x2D401Cu;
    // 0x2d401c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2d401cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2d4020: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d4020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4024: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d4024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d4028: 0x0  nop
    ctx->pc = 0x2d4028u;
    // NOP
    // 0x2d402c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2D402Cu;
    {
        const bool branch_taken_0x2d402c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D4030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D402Cu;
        // 0x2d4030: 0x26320020  addiu       $s2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d402c) {
            ctx->pc = 0x2D4048u;
            goto label_2d4048;
        }
    }
    ctx->pc = 0x2D4034u;
label_2d4034:
    // 0x2d4034: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x2D4034u;
    {
        const bool branch_taken_0x2d4034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4034u;
        // 0x2d4038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4034) {
            ctx->pc = 0x2D446Cu;
            goto label_2d446c;
        }
    }
    ctx->pc = 0x2D403Cu;
label_2d403c:
    // 0x2d403c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x2d403cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2d4040:
    // 0x2d4040: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x2d4040u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2d4044: 0x0  nop
    ctx->pc = 0x2d4044u;
    // NOP
label_2d4048:
    // 0x2d4048: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2d4048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d404c: 0xc7a80000  lwc1        $f8, 0x0($sp)
    ctx->pc = 0x2d404cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2d4050: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2d4050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4054: 0x46080181  sub.s       $f6, $f0, $f8
    ctx->pc = 0x2d4054u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x2d4058: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x2d4058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d405c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2d405cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4060: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2d4060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d4064: 0x46070941  sub.s       $f5, $f1, $f7
    ctx->pc = 0x2d4064u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x2d4068: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x2d4068u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d406c: 0x46040081  sub.s       $f2, $f0, $f4
    ctx->pc = 0x2d406cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2d4070: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x2d4070u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d4074: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2d4074u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d4078: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x2d4078u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x2d407c: 0x460020c6  mov.s       $f3, $f4
    ctx->pc = 0x2d407cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[4]);
    // 0x2d4080: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x2d4080u;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x2d4084: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2d4084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d4088: 0x0  nop
    ctx->pc = 0x2d4088u;
    // NOP
    // 0x2d408c: 0x45000047  bc1f        . + 4 + (0x47 << 2)
    ctx->pc = 0x2D408Cu;
    {
        const bool branch_taken_0x2d408c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D408Cu;
        // 0x2d4090: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d408c) {
            ctx->pc = 0x2D41ACu;
            goto label_2d41ac;
        }
    }
    ctx->pc = 0x2D4094u;
    // 0x2d4094: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d4094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4098: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2d4098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d409c: 0x0  nop
    ctx->pc = 0x2d409cu;
    // NOP
    // 0x2d40a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D40A0u;
    {
        const bool branch_taken_0x2d40a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40A0u;
        // 0x2d40a4: 0x4600a846  mov.s       $f1, $f21 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40a0) {
            ctx->pc = 0x2D40B0u;
            goto label_2d40b0;
        }
    }
    ctx->pc = 0x2D40A8u;
    // 0x2d40a8: 0x4600a847  neg.s       $f1, $f21
    ctx->pc = 0x2d40a8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
    // 0x2d40ac: 0x0  nop
    ctx->pc = 0x2d40acu;
    // NOP
label_2d40b0:
    // 0x2d40b0: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x2d40b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2d40b4: 0x46020503  div.s       $f20, $f0, $f2
    ctx->pc = 0x2d40b4u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x2d40b8: 0x46143042  mul.s       $f1, $f6, $f20
    ctx->pc = 0x2d40b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x2d40bc: 0x46142802  mul.s       $f0, $f5, $f20
    ctx->pc = 0x2d40bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x2d40c0: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2d40c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2d40c4: 0x46014040  add.s       $f1, $f8, $f1
    ctx->pc = 0x2d40c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x2d40c8: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x2d40c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x2d40cc: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x2d40ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2d40d0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2d40d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d40d4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2d40d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d40d8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2d40d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d40dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2d40dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d40e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d40e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d40e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d40e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d40e8: 0xc0b4fa2  jal         func_2D3E88
    ctx->pc = 0x2D40E8u;
    SET_GPR_U32(ctx, 31, 0x2D40F0u);
    ctx->pc = 0x2D40ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D40E8u;
    // 0x2d40ec: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D3E88u, 0x2D40E8u, 0x2D40F0u)) {
        return;
    }
    ctx->pc = 0x2D40F0u;
label_2d40f0:
    // 0x2d40f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D40F0u;
    {
        const bool branch_taken_0x2d40f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40F0u;
        // 0x2d40f4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40f0) {
            ctx->pc = 0x2D4128u;
            goto label_2d4128;
        }
    }
    ctx->pc = 0x2D40F8u;
    // 0x2d40f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d40f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d40fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d40fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4100: 0xc0b4fa2  jal         func_2D3E88
    ctx->pc = 0x2D4100u;
    SET_GPR_U32(ctx, 31, 0x2D4108u);
    ctx->pc = 0x2D4104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4100u;
    // 0x2d4104: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D3E88u, 0x2D4100u, 0x2D4108u)) {
        return;
    }
    ctx->pc = 0x2D4108u;
label_2d4108:
    // 0x2d4108: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D4108u;
    {
        const bool branch_taken_0x2d4108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4108u;
        // 0x2d410c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4108) {
            ctx->pc = 0x2D4128u;
            goto label_2d4128;
        }
    }
    ctx->pc = 0x2D4110u;
    // 0x2d4110: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d4110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4114: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d4114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4118: 0xc0b4fa2  jal         func_2D3E88
    ctx->pc = 0x2D4118u;
    SET_GPR_U32(ctx, 31, 0x2D4120u);
    ctx->pc = 0x2D411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4118u;
    // 0x2d411c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D3E88u, 0x2D4118u, 0x2D4120u)) {
        return;
    }
    ctx->pc = 0x2D4120u;
label_2d4120:
    // 0x2d4120: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D4120u;
    {
        const bool branch_taken_0x2d4120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4120u;
        // 0x2d4124: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4120) {
            ctx->pc = 0x2D412Cu;
            goto label_2d412c;
        }
    }
    ctx->pc = 0x2D4128u;
label_2d4128:
    // 0x2d4128: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d4128u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d412c:
    // 0x2d412c: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x2D412Cu;
    {
        const bool branch_taken_0x2d412c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D412Cu;
        // 0x2d4130: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d412c) {
            ctx->pc = 0x2D4254u;
            goto label_2d4254;
        }
    }
    ctx->pc = 0x2D4134u;
    // 0x2d4134: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2d4134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2d4138: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2d4138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d413c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2d413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4140: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d4140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d4144: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d4144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d4148: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d4148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d414c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D414Cu;
    {
        const bool branch_taken_0x2d414c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D4150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D414Cu;
        // 0x2d4150: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d414c) {
            ctx->pc = 0x2D415Cu;
            goto label_2d415c;
        }
    }
    ctx->pc = 0x2D4154u;
    // 0x2d4154: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d4154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2d4158: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d4158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2d415c:
    // 0x2d415c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2d415cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4160: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x2d4160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4164: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2d4164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2d4168: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2d4168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d416c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2d416cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2d4170: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x2d4170u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d4174: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2d4174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2d4178: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d4178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d417c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d417cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d4180: 0x46000004  c1          0x4
    ctx->pc = 0x2d4180u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2d4184: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2d4184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2d4188: 0xe680001c  swc1        $f0, 0x1C($s4)
    ctx->pc = 0x2d4188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x2d418c: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x2d418cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2d4190: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x2d4190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2d4194: 0x8fa90028  lw          $t1, 0x28($sp)
    ctx->pc = 0x2d4194u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4198: 0xb288000b  sdl         $t0, 0xB($s4)
    ctx->pc = 0x2d4198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d419c: 0xb6880004  sdr         $t0, 0x4($s4)
    ctx->pc = 0x2d419cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d41a0: 0xae89000c  sw          $t1, 0xC($s4)
    ctx->pc = 0x2d41a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 9));
    // 0x2d41a4: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2D41A4u;
    {
        const bool branch_taken_0x2d41a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d41a4) {
            ctx->pc = 0x2D4450u;
            goto label_2d4450;
        }
    }
    ctx->pc = 0x2D41ACu;
label_2d41ac:
    // 0x2d41ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d41acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d41b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41b4: 0xc0b4fa2  jal         func_2D3E88
    ctx->pc = 0x2D41B4u;
    SET_GPR_U32(ctx, 31, 0x2D41BCu);
    ctx->pc = 0x2D41B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D41B4u;
    // 0x2d41b8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D3E88u, 0x2D41B4u, 0x2D41BCu)) {
        return;
    }
    ctx->pc = 0x2D41BCu;
label_2d41bc:
    // 0x2d41bc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D41BCu;
    {
        const bool branch_taken_0x2d41bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D41C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D41BCu;
        // 0x2d41c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d41bc) {
            ctx->pc = 0x2D41F4u;
            goto label_2d41f4;
        }
    }
    ctx->pc = 0x2D41C4u;
    // 0x2d41c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d41c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d41c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41cc: 0xc0b4fa2  jal         func_2D3E88
    ctx->pc = 0x2D41CCu;
    SET_GPR_U32(ctx, 31, 0x2D41D4u);
    ctx->pc = 0x2D41D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D41CCu;
    // 0x2d41d0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D3E88u, 0x2D41CCu, 0x2D41D4u)) {
        return;
    }
    ctx->pc = 0x2D41D4u;
label_2d41d4:
    // 0x2d41d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D41D4u;
    {
        const bool branch_taken_0x2d41d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D41D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D41D4u;
        // 0x2d41d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d41d4) {
            ctx->pc = 0x2D41F4u;
            goto label_2d41f4;
        }
    }
    ctx->pc = 0x2D41DCu;
    // 0x2d41dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d41dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d41e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41e4: 0xc0b4fa2  jal         func_2D3E88
    ctx->pc = 0x2D41E4u;
    SET_GPR_U32(ctx, 31, 0x2D41ECu);
    ctx->pc = 0x2D41E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D41E4u;
    // 0x2d41e8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D3E88u, 0x2D41E4u, 0x2D41ECu)) {
        return;
    }
    ctx->pc = 0x2D41ECu;
label_2d41ec:
    // 0x2d41ec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D41ECu;
    {
        const bool branch_taken_0x2d41ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D41F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D41ECu;
        // 0x2d41f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d41ec) {
            ctx->pc = 0x2D41F8u;
            goto label_2d41f8;
        }
    }
    ctx->pc = 0x2D41F4u;
label_2d41f4:
    // 0x2d41f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d41f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d41f8:
    // 0x2d41f8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D41F8u;
    {
        const bool branch_taken_0x2d41f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D41F8u;
        // 0x2d41fc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d41f8) {
            ctx->pc = 0x2D4250u;
            goto label_2d4250;
        }
    }
    ctx->pc = 0x2D4200u;
    // 0x2d4200: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2D4200u;
    SET_GPR_U32(ctx, 31, 0x2D4208u);
    ctx->pc = 0x2D4204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4200u;
    // 0x2d4204: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2D4200u, 0x2D4208u)) {
        return;
    }
    ctx->pc = 0x2D4208u;
label_2d4208:
    // 0x2d4208: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2d4208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d420c: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x2d420cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4210: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d4210u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d4214: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2d4214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4218: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2d4218u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2d421c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d421cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d4220: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2d4220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d4224: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2d4224u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2d4228: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2d4228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d422c: 0xae80001c  sw          $zero, 0x1C($s4)
    ctx->pc = 0x2d422cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
    // 0x2d4230: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x2d4230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2d4234: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x2d4234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2d4238: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2d4238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d423c: 0xb284000b  sdl         $a0, 0xB($s4)
    ctx->pc = 0x2d423cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4240: 0xb6840004  sdr         $a0, 0x4($s4)
    ctx->pc = 0x2d4240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4244: 0xae85000c  sw          $a1, 0xC($s4)
    ctx->pc = 0x2d4244u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 5));
    // 0x2d4248: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x2D4248u;
    {
        const bool branch_taken_0x2d4248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4248) {
            ctx->pc = 0x2D4450u;
            goto label_2d4450;
        }
    }
    ctx->pc = 0x2D4250u;
label_2d4250:
    // 0x2d4250: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x2d4250u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d4254:
    // 0x2d4254: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2d4254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d4258: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d4258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d425c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d425cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4260: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2d4260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4264: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2d4264u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4268: 0xc0b4f14  jal         func_2D3C50
    ctx->pc = 0x2D4268u;
    SET_GPR_U32(ctx, 31, 0x2D4270u);
    ctx->pc = 0x2D426Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4268u;
    // 0x2d426c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D3C50u, 0x2D4268u, 0x2D4270u)) {
        return;
    }
    ctx->pc = 0x2D4270u;
label_2d4270:
    // 0x2d4270: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x2d4270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2d4274: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d4274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4278: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2d4278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2d427c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d427cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4280: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d4280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4284: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2d4284u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4288: 0xc0b4f14  jal         func_2D3C50
    ctx->pc = 0x2D4288u;
    SET_GPR_U32(ctx, 31, 0x2D4290u);
    ctx->pc = 0x2D428Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4288u;
    // 0x2d428c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D3C50u, 0x2D4288u, 0x2D4290u)) {
        return;
    }
    ctx->pc = 0x2D4290u;
label_2d4290:
    // 0x2d4290: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2d4290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2d4294: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d4294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4298: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2d4298u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d429c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2d429cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2d42a0: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2d42a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2d42a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d42a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d42a8: 0xc0b4f14  jal         func_2D3C50
    ctx->pc = 0x2D42A8u;
    SET_GPR_U32(ctx, 31, 0x2D42B0u);
    ctx->pc = 0x2D42ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D42A8u;
    // 0x2d42ac: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D3C50u, 0x2D42A8u, 0x2D42B0u)) {
        return;
    }
    ctx->pc = 0x2D42B0u;
label_2d42b0:
    // 0x2d42b0: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2d42b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d42b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d42b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d42b8: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x2d42b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d42bc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2d42bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d42c0: 0x0  nop
    ctx->pc = 0x2d42c0u;
    // NOP
    // 0x2d42c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D42C4u;
    {
        const bool branch_taken_0x2d42c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D42C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D42C4u;
        // 0x2d42c8: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d42c4) {
            ctx->pc = 0x2D42D0u;
            goto label_2d42d0;
        }
    }
    ctx->pc = 0x2D42CCu;
    // 0x2d42cc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2d42d0:
    // 0x2d42d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d42d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d42d4: 0x0  nop
    ctx->pc = 0x2d42d4u;
    // NOP
    // 0x2d42d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D42D8u;
    {
        const bool branch_taken_0x2d42d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d42d8) {
            ctx->pc = 0x2D42DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D42D8u;
            // 0x2d42dc: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D42E0u;
            goto label_2d42e0;
        }
    }
    ctx->pc = 0x2D42E0u;
label_2d42e0:
    // 0x2d42e0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2d42e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d42e4: 0x0  nop
    ctx->pc = 0x2d42e4u;
    // NOP
    // 0x2d42e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D42E8u;
    {
        const bool branch_taken_0x2d42e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D42E8u;
        // 0x2d42ec: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d42e8) {
            ctx->pc = 0x2D42F4u;
            goto label_2d42f4;
        }
    }
    ctx->pc = 0x2D42F0u;
    // 0x2d42f0: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x2d42f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
label_2d42f4:
    // 0x2d42f4: 0x3c022131  lui         $v0, 0x2131
    ctx->pc = 0x2d42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8497 << 16));
    // 0x2d42f8: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x2d42f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x2d42fc: 0x34422300  ori         $v0, $v0, 0x2300
    ctx->pc = 0x2d42fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8960);
    // 0x2d4300: 0x3c031230  lui         $v1, 0x1230
    ctx->pc = 0x2d4300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4656 << 16));
    // 0x2d4304: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x2d4304u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x2d4308: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d4308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d430c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d430cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4310: 0x30470003  andi        $a3, $v0, 0x3
    ctx->pc = 0x2d4310u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2d4314: 0x34841312  ori         $a0, $a0, 0x1312
    ctx->pc = 0x2d4314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4882);
    // 0x2d4318: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2d4318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d431c: 0x34630321  ori         $v1, $v1, 0x321
    ctx->pc = 0x2d431cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)801);
    // 0x2d4320: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x2d4320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2d4324: 0xc42007  srav        $a0, $a0, $a2
    ctx->pc = 0x2d4324u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x2d4328: 0xc4a30080  lwc1        $f3, 0x80($a1)
    ctx->pc = 0x2d4328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d432c: 0xc31807  srav        $v1, $v1, $a2
    ctx->pc = 0x2d432cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x2d4330: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x2d4330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2d4334: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2d4334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2d4338: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2d4338u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d433c: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x2d433cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x2d4340: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x2d4340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
    // 0x2d4344: 0x4500ff3b  bc1f        . + 4 + (-0xC5 << 2)
    ctx->pc = 0x2D4344u;
    {
        const bool branch_taken_0x2d4344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4344u;
        // 0x2d4348: 0xafa70090  sw          $a3, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4344) {
            ctx->pc = 0x2D4034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4034;
        }
    }
    ctx->pc = 0x2D434Cu;
    // 0x2d434c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2d434cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d4350: 0x46141832  c.eq.s      $f3, $f20
    ctx->pc = 0x2d4350u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d4354: 0x0  nop
    ctx->pc = 0x2d4354u;
    // NOP
    // 0x2d4358: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2D4358u;
    {
        const bool branch_taken_0x2d4358 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4358u;
        // 0x2d435c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4358) {
            ctx->pc = 0x2D43B0u;
            goto label_2d43b0;
        }
    }
    ctx->pc = 0x2D4360u;
    // 0x2d4360: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2D4360u;
    SET_GPR_U32(ctx, 31, 0x2D4368u);
    ctx->pc = 0x2D4364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4360u;
    // 0x2d4364: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2D4360u, 0x2D4368u)) {
        return;
    }
    ctx->pc = 0x2D4368u;
label_2d4368:
    // 0x2d4368: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2d4368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d436c: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x2d436cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4370: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d4370u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d4374: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2d4374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4378: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2d4378u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2d437c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d437cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d4380: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2d4380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d4384: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2d4384u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2d4388: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2d4388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d438c: 0xe694001c  swc1        $f20, 0x1C($s4)
    ctx->pc = 0x2d438cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x2d4390: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2d4390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d4394: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2d4394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d4398: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d4398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d439c: 0xb282000b  sdl         $v0, 0xB($s4)
    ctx->pc = 0x2d439cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d43a0: 0xb6820004  sdr         $v0, 0x4($s4)
    ctx->pc = 0x2d43a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d43a4: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x2d43a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
    // 0x2d43a8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2D43A8u;
    {
        const bool branch_taken_0x2d43a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d43a8) {
            ctx->pc = 0x2D4450u;
            goto label_2d4450;
        }
    }
    ctx->pc = 0x2D43B0u;
label_2d43b0:
    // 0x2d43b0: 0xc7a50030  lwc1        $f5, 0x30($sp)
    ctx->pc = 0x2d43b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d43b4: 0xc7a60034  lwc1        $f6, 0x34($sp)
    ctx->pc = 0x2d43b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d43b8: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x2d43b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2d43bc: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x2d43bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d43c0: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x2d43c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2d43c4: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x2d43c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2d43c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d43c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d43cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d43ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d43d0: 0x46000004  c1          0x4
    ctx->pc = 0x2d43d0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2d43d4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2d43d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2d43d8: 0xe680001c  swc1        $f0, 0x1C($s4)
    ctx->pc = 0x2d43d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x2d43dc: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x2d43dcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2d43e0: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x2d43e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2d43e4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2d43e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d43e8: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x2d43e8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2d43ec: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2d43ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d43f0: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2d43f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d43f4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2d43f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2d43f8: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x2d43f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2d43fc: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2d43fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2d4400: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x2d4400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x2d4404: 0xe6820008  swc1        $f2, 0x8($s4)
    ctx->pc = 0x2d4404u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2d4408: 0xe683000c  swc1        $f3, 0xC($s4)
    ctx->pc = 0x2d4408u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x2d440c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2d440cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d4410: 0xe21818  mult        $v1, $a3, $v0
    ctx->pc = 0x2d4410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d4414: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x2d4414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2d4418: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x2d4418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d441c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2d441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2d4420: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d4420u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d4424: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2d4424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d4428: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2d4428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d442c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2d442cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2d4430: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2d4430u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2d4434: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d4434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4438: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2d4438u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d443c: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x2d443cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d4440: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2d4440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d4444: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2D4444u;
    SET_GPR_U32(ctx, 31, 0x2D444Cu);
    ctx->pc = 0x2D4448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4444u;
    // 0x2d4448: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2D4444u, 0x2D444Cu)) {
        return;
    }
    ctx->pc = 0x2D444Cu;
label_2d444c:
    // 0x2d444c: 0x0  nop
    ctx->pc = 0x2d444cu;
    // NOP
label_2d4450:
    // 0x2d4450: 0x6ba40047  ldl         $a0, 0x47($sp)
    ctx->pc = 0x2d4450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2d4454: 0x6fa40040  ldr         $a0, 0x40($sp)
    ctx->pc = 0x2d4454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2d4458: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2d4458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d445c: 0xb2840017  sdl         $a0, 0x17($s4)
    ctx->pc = 0x2d445cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4460: 0xb6840010  sdr         $a0, 0x10($s4)
    ctx->pc = 0x2d4460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4464: 0xae850018  sw          $a1, 0x18($s4)
    ctx->pc = 0x2d4464u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 5));
    // 0x2d4468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d4468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d446c:
    // 0x2d446c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2d446cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d4470: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2d4470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d4474: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2d4474u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d4478: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2d4478u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d447c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2d447cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d4480: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2d4480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d4484: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x2d4484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d4488: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2d4488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d448c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D448Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D448Cu;
        // 0x2d4490: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D448Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4494u;
    // 0x2d4494: 0x0  nop
    ctx->pc = 0x2d4494u;
    // NOP
    ctx->pc = 0x2d4498u;
}
