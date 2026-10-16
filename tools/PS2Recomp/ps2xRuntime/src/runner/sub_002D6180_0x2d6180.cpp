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

// Function: sub_002D6180
// Address: 0x2d6180 - 0x2d6240
void sub_002D6180_0x2d6180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6180_0x2d6180");
#endif

    switch (ctx->pc) {
        case 0x2d61ccu: goto label_2d61cc;
        default: break;
    }

    ctx->pc = 0x2d6180u;

    // 0x2d6180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d6180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d6184: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d6184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6188: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d6188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d618c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d618cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d6190: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d6190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d6198: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d6198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d619c: 0x8c900040  lw          $s0, 0x40($a0)
    ctx->pc = 0x2d619cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2d61a0: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x2d61a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d61a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d61a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d61a8: 0x0  nop
    ctx->pc = 0x2d61a8u;
    // NOP
    // 0x2d61ac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2D61ACu;
    {
        const bool branch_taken_0x2d61ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D61B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D61ACu;
        // 0x2d61b0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d61ac) {
            ctx->pc = 0x2D61D0u;
            goto label_2d61d0;
        }
    }
    ctx->pc = 0x2D61B4u;
    // 0x2d61b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d61b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d61b8: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x2d61b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2d61bc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2d61bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d61c0: 0x26070044  addiu       $a3, $s0, 0x44
    ctx->pc = 0x2d61c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x2d61c4: 0xc0b568c  jal         func_2D5A30
    ctx->pc = 0x2D61C4u;
    SET_GPR_U32(ctx, 31, 0x2D61CCu);
    ctx->pc = 0x2D61C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D61C4u;
    // 0x2d61c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D5A30u, 0x2D61C4u, 0x2D61CCu)) {
        return;
    }
    ctx->pc = 0x2D61CCu;
label_2d61cc:
    // 0x2d61cc: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x2d61ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_2d61d0:
    // 0x2d61d0: 0x6a020057  ldl         $v0, 0x57($s0)
    ctx->pc = 0x2d61d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d61d4: 0x6e020050  ldr         $v0, 0x50($s0)
    ctx->pc = 0x2d61d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d61d8: 0x6a03005f  ldl         $v1, 0x5F($s0)
    ctx->pc = 0x2d61d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2d61dc: 0x6e030058  ldr         $v1, 0x58($s0)
    ctx->pc = 0x2d61dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2d61e0: 0x6a040067  ldl         $a0, 0x67($s0)
    ctx->pc = 0x2d61e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2d61e4: 0x6e040060  ldr         $a0, 0x60($s0)
    ctx->pc = 0x2d61e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2d61e8: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x2d61e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2d61ec: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x2d61ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d61f0: 0xb6420000  sdr         $v0, 0x0($s2)
    ctx->pc = 0x2d61f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d61f4: 0xb243000f  sdl         $v1, 0xF($s2)
    ctx->pc = 0x2d61f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d61f8: 0xb6430008  sdr         $v1, 0x8($s2)
    ctx->pc = 0x2d61f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d61fc: 0xb2440017  sdl         $a0, 0x17($s2)
    ctx->pc = 0x2d61fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6200: 0xb6440010  sdr         $a0, 0x10($s2)
    ctx->pc = 0x2d6200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6204: 0xae450018  sw          $a1, 0x18($s2)
    ctx->pc = 0x2d6204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 5));
    // 0x2d6208: 0x6a02004b  ldl         $v0, 0x4B($s0)
    ctx->pc = 0x2d6208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d620c: 0x6e020044  ldr         $v0, 0x44($s0)
    ctx->pc = 0x2d620cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d6210: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x2d6210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2d6214: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x2d6214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6218: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x2d6218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d621c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2d621cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2d6220: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d6220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6224: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x2d6224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6228: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d6228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d622c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d622cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6234: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6234u;
        // 0x2d6238: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D623Cu;
    // 0x2d623c: 0x0  nop
    ctx->pc = 0x2d623cu;
    // NOP
    ctx->pc = 0x2d6240u;
}
