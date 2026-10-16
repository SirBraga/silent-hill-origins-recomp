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

// Function: sub_001A27D8
// Address: 0x1a27d8 - 0x1a2898
void sub_001A27D8_0x1a27d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A27D8_0x1a27d8");
#endif

    ctx->pc = 0x1a27d8u;

    // 0x1a27d8: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x1a27d8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1a27dc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1A27DCu;
    {
        const bool branch_taken_0x1a27dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A27E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27DCu;
        // 0x1a27e0: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a27dc) {
            ctx->pc = 0x1A2888u;
            goto label_1a2888;
        }
    }
    ctx->pc = 0x1A27E4u;
    // 0x1a27e4: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x1a27e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a27e8: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x1a27e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a27ec: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x1a27ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a27f0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a27f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1a27f4: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x1a27f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a27f8: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1a27f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a27fc: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1a27fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a2800: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1a2800u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1a2804: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1a2804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a2808: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1a2808u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1a280c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1a280cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a2810: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1a2810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a2814: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1a2814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a2818: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1a2818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a281c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a281cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2820: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1a2820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2824: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1a2824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2828: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1a2828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1a282c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1a282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1a2830: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1a2830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1a2834: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1a2834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a2838: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x1a2838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a283c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1a283cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2840: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1a2840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1a2844: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a2844u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a2848: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1a2848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a284c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1a284cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a2850: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a2850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a2854: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1a2854u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1a2858: 0xc44012d4  lwc1        $f0, 0x12D4($v0)
    ctx->pc = 0x1a2858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a285c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a285cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1a2860: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1a2860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1a2864: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a2864u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a2868: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a2868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a286c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a286cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2870: 0x0  nop
    ctx->pc = 0x1a2870u;
    // NOP
    // 0x1a2874: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2874u;
    {
        const bool branch_taken_0x1a2874 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2874u;
        // 0x1a2878: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2874) {
            ctx->pc = 0x1A2880u;
            goto label_1a2880;
        }
    }
    ctx->pc = 0x1A287Cu;
    // 0x1a287c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a287cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2880:
    // 0x1a2880: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2880u;
    {
        const bool branch_taken_0x1a2880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2880u;
        // 0x1a2884: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2880) {
            ctx->pc = 0x1A288Cu;
            goto label_1a288c;
        }
    }
    ctx->pc = 0x1A2888u;
label_1a2888:
    // 0x1a2888: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a288c:
    // 0x1a288c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A288Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A288Cu;
        // 0x1a2890: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A288Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2894u;
    // 0x1a2894: 0x0  nop
    ctx->pc = 0x1a2894u;
    // NOP
    ctx->pc = 0x1a2898u;
}
