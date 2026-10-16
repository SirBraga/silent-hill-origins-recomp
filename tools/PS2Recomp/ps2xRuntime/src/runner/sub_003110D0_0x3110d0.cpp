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

// Function: sub_003110D0
// Address: 0x3110d0 - 0x311208
void sub_003110D0_0x3110d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003110D0_0x3110d0");
#endif

    switch (ctx->pc) {
        case 0x311144u: goto label_311144;
        case 0x311184u: goto label_311184;
        default: break;
    }

    ctx->pc = 0x3110d0u;

    // 0x3110d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3110d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3110d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3110d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3110d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3110d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3110dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3110dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3110e0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x3110e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3110e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3110e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3110e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3110e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3110ec: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x3110ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3110f0: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x3110f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3110f4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3110f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3110f8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3110f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3110fc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3110fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x311100: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x311100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x311104: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x311104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x311108: 0x4600a045  abs.s       $f1, $f20
    ctx->pc = 0x311108u;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
    // 0x31110c: 0xc7808358  lwc1        $f0, -0x7CA8($gp)
    ctx->pc = 0x31110cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311110: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x311110u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311114: 0x0  nop
    ctx->pc = 0x311114u;
    // NOP
    // 0x311118: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
    ctx->pc = 0x311118u;
    {
        const bool branch_taken_0x311118 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x311118) {
            ctx->pc = 0x31111Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311118u;
            // 0x31111c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3111B0u;
            goto label_3111b0;
        }
    }
    ctx->pc = 0x311120u;
    // 0x311120: 0x4600a045  abs.s       $f1, $f20
    ctx->pc = 0x311120u;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
    // 0x311124: 0xc780835c  lwc1        $f0, -0x7CA4($gp)
    ctx->pc = 0x311124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311128: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x311128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31112c: 0x0  nop
    ctx->pc = 0x31112cu;
    // NOP
    // 0x311130: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x311130u;
    {
        const bool branch_taken_0x311130 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x311134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311130u;
        // 0x311134: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311130) {
            ctx->pc = 0x311178u;
            goto label_311178;
        }
    }
    ctx->pc = 0x311138u;
    // 0x311138: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x311138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x31113c: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x31113Cu;
    SET_GPR_U32(ctx, 31, 0x311144u);
    ctx->pc = 0x311140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31113Cu;
    // 0x311140: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x31113Cu, 0x311144u)) {
        return;
    }
    ctx->pc = 0x311144u;
label_311144:
    // 0x311144: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x311144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311148: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x311148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31114c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x31114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311150: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x311150u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x311154: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x311154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x311158: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x311158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31115c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x31115cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x311160: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x311160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311164: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311168: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x311168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31116c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x31116Cu;
    {
        const bool branch_taken_0x31116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31116Cu;
        // 0x311170: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31116c) {
            ctx->pc = 0x3111C4u;
            goto label_3111c4;
        }
    }
    ctx->pc = 0x311174u;
    // 0x311174: 0x0  nop
    ctx->pc = 0x311174u;
    // NOP
label_311178:
    // 0x311178: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x311178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x31117c: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x31117Cu;
    SET_GPR_U32(ctx, 31, 0x311184u);
    ctx->pc = 0x311180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31117Cu;
    // 0x311180: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x31117Cu, 0x311184u)) {
        return;
    }
    ctx->pc = 0x311184u;
label_311184:
    // 0x311184: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x311184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x311188: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x311188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31118c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x31118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311190: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x311190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311194: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x311194u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x311198: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x311198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31119c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x31119cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3111a0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x3111a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3111a4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3111a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3111a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3111A8u;
    {
        const bool branch_taken_0x3111a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3111ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3111A8u;
        // 0x3111ac: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3111a8) {
            ctx->pc = 0x3111D4u;
            goto label_3111d4;
        }
    }
    ctx->pc = 0x3111B0u;
label_3111b0:
    // 0x3111b0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3111b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3111b4: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x3111b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3111b8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3111b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3111bc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3111bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3111c0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3111c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3111c4:
    // 0x3111c4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3111C4u;
    {
        const bool branch_taken_0x3111c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3111c4) {
            ctx->pc = 0x3111D4u;
            goto label_3111d4;
        }
    }
    ctx->pc = 0x3111CCu;
    // 0x3111cc: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x3111ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x3111d0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3111d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3111d4:
    // 0x3111d4: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x3111d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3111d8: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x3111d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3111dc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3111dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3111e0: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x3111e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3111e4: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x3111e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3111e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3111e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3111ec: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x3111ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x3111f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3111f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3111f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3111f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3111f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3111f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3111fc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3111fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x311200: 0x3e00008  jr          $ra
    ctx->pc = 0x311200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311200u;
        // 0x311204: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311208u;
}
