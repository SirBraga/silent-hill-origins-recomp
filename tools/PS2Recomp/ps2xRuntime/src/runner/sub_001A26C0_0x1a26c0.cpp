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

// Function: sub_001A26C0
// Address: 0x1a26c0 - 0x1a27d8
void sub_001A26C0_0x1a26c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A26C0_0x1a26c0");
#endif

    ctx->pc = 0x1a26c0u;

    // 0x1a26c0: 0xc5040000  lwc1        $f4, 0x0($t0)
    ctx->pc = 0x1a26c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a26c4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a26c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a26c8: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x1a26c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a26cc: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x1a26ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a26d0: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x1a26d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a26d4: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x1a26d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a26d8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1a26d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1a26dc: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1a26dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a26e0: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x1a26e0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x1a26e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a26e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a26e8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1a26e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a26ec: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x1a26ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a26f0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a26f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a26f4: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1a26f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a26f8: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1a26f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a26fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a26fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2700: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1a2700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2704: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1a2704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2708: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1a2708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1a270c: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x1a270cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a2710: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x1a2710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a2714: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x1a2714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1a2718: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1a2718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a271c: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x1a271cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1a2720: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x1a2720u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1a2724: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a2724u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a2728: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a2728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a272c: 0x0  nop
    ctx->pc = 0x1a272cu;
    // NOP
    // 0x1a2730: 0x0  nop
    ctx->pc = 0x1a2730u;
    // NOP
    // 0x1a2734: 0x46000084  c1          0x84
    ctx->pc = 0x1a2734u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a2738: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a2738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a273c: 0x0  nop
    ctx->pc = 0x1a273cu;
    // NOP
    // 0x1a2740: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1a2740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2744: 0x0  nop
    ctx->pc = 0x1a2744u;
    // NOP
    // 0x1a2748: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x1A2748u;
    {
        const bool branch_taken_0x1a2748 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2748) {
            ctx->pc = 0x1A274Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2748u;
            // 0x1a274c: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2780u;
            goto label_1a2780;
        }
    }
    ctx->pc = 0x1A2750u;
    // 0x1a2750: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a2750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a2754: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2758: 0x0  nop
    ctx->pc = 0x1a2758u;
    // NOP
    // 0x1a275c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1a275cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x1a2760: 0x46002042  mul.s       $f1, $f4, $f0
    ctx->pc = 0x1a2760u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1a2764: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x1a2764u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1a2768: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1a2768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a276c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1a276cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1a2770: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1a2770u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a2774: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1a2774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a2778: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1a2778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a277c: 0x0  nop
    ctx->pc = 0x1a277cu;
    // NOP
label_1a2780:
    // 0x1a2780: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1a2780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1a2784: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x1a2784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a2788: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x1a2788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a278c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1a278cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2790: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x1a2790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a2794: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a2794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a2798: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x1a2798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a279c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a279cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a27a0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1a27a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a27a4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a27a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a27a8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a27a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a27ac: 0xc44412d0  lwc1        $f4, 0x12D0($v0)
    ctx->pc = 0x1a27acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a27b0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a27b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1a27b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a27b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a27b8: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x1a27b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a27bc: 0x0  nop
    ctx->pc = 0x1a27bcu;
    // NOP
    // 0x1a27c0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A27C0u;
    {
        const bool branch_taken_0x1a27c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27C0u;
        // 0x1a27c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a27c0) {
            ctx->pc = 0x1A27CCu;
            goto label_1a27cc;
        }
    }
    ctx->pc = 0x1A27C8u;
    // 0x1a27c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a27c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a27cc:
    // 0x1a27cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a27ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A27D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27D0u;
        // 0x1a27d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A27D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A27D8u;
}
