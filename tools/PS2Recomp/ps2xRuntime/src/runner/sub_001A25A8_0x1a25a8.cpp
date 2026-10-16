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

// Function: sub_001A25A8
// Address: 0x1a25a8 - 0x1a2698
void sub_001A25A8_0x1a25a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A25A8_0x1a25a8");
#endif

    switch (ctx->pc) {
        case 0x1a2680u: goto label_1a2680;
        default: break;
    }

    ctx->pc = 0x1a25a8u;

    // 0x1a25a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a25a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a25ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a25acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a25b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a25b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a25b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a25b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a25b8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1a25b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a25bc: 0x8c821200  lw          $v0, 0x1200($a0)
    ctx->pc = 0x1a25bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4608)));
    // 0x1a25c0: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1A25C0u;
    {
        const bool branch_taken_0x1a25c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25C0u;
        // 0x1a25c4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25c0) {
            ctx->pc = 0x1A2688u;
            goto label_1a2688;
        }
    }
    ctx->pc = 0x1A25C8u;
    // 0x1a25c8: 0x6a021367  ldl         $v0, 0x1367($s0)
    ctx->pc = 0x1a25c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4967); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a25cc: 0x6e021360  ldr         $v0, 0x1360($s0)
    ctx->pc = 0x1a25ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4960); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a25d0: 0x8e051368  lw          $a1, 0x1368($s0)
    ctx->pc = 0x1a25d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4968)));
    // 0x1a25d4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1a25d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a25d8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1a25d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a25dc: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1a25dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1a25e0: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1a25e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a25e4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1a25e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a25e8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1a25e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a25ec: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1a25ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a25f0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1a25f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1a25f4: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x1a25f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a25f8: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x1a25f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a25fc: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x1a25fcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x1a2600: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1a2600u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a2604: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x1a2604u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x1a2608: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x1a2608u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a260c: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x1a260cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a2610: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x1a2610u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1a2614: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x1a2614u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1a2618: 0x8e021334  lw          $v0, 0x1334($s0)
    ctx->pc = 0x1a2618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
    // 0x1a261c: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x1a261cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1a2620: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x1a2620u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1a2624: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A2624u;
    {
        const bool branch_taken_0x1a2624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2624u;
        // 0x1a2628: 0x460518c0  add.s       $f3, $f3, $f5 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2624) {
            ctx->pc = 0x1A2658u;
            goto label_1a2658;
        }
    }
    ctx->pc = 0x1A262Cu;
    // 0x1a262c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1a262cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1a2630: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A2630u;
    {
        const bool branch_taken_0x1a2630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2630) {
            ctx->pc = 0x1A2658u;
            goto label_1a2658;
        }
    }
    ctx->pc = 0x1A2638u;
    // 0x1a2638: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a2638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a263c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a263cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2640: 0x0  nop
    ctx->pc = 0x1a2640u;
    // NOP
    // 0x1a2644: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1a2644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2648: 0x0  nop
    ctx->pc = 0x1a2648u;
    // NOP
    // 0x1a264c: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x1A264Cu;
    {
        const bool branch_taken_0x1a264c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a264c) {
            ctx->pc = 0x1A2650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A264Cu;
            // 0x1a2650: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A268Cu;
            goto label_1a268c;
        }
    }
    ctx->pc = 0x1A2654u;
    // 0x1a2654: 0x0  nop
    ctx->pc = 0x1a2654u;
    // NOP
label_1a2658:
    // 0x1a2658: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x1a2658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1a265c: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x1a265cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1a2660: 0x8c690008  lw          $t1, 0x8($v1)
    ctx->pc = 0x1a2660u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a2664: 0xb2081367  sdl         $t0, 0x1367($s0)
    ctx->pc = 0x1a2664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4967); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2668: 0xb6081360  sdr         $t0, 0x1360($s0)
    ctx->pc = 0x1a2668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4960); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a266c: 0xae091368  sw          $t1, 0x1368($s0)
    ctx->pc = 0x1a266cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4968), GPR_U32(ctx, 9));
    // 0x1a2670: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1a2670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2674: 0x26051230  addiu       $a1, $s0, 0x1230
    ctx->pc = 0x1a2674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4656));
    // 0x1a2678: 0xc06aac6  jal         func_1AAB18
    ctx->pc = 0x1A2678u;
    SET_GPR_U32(ctx, 31, 0x1A2680u);
    ctx->pc = 0x1A267Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2678u;
    // 0x1a267c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAB18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AAB18u, 0x1A2678u, 0x1A2680u)) {
        return;
    }
    ctx->pc = 0x1A2680u;
label_1a2680:
    // 0x1a2680: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2684: 0xae021334  sw          $v0, 0x1334($s0)
    ctx->pc = 0x1a2684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 2));
label_1a2688:
    // 0x1a2688: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a2688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a268c:
    // 0x1a268c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a268cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2690: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2690u;
        // 0x1a2694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2698u;
}
