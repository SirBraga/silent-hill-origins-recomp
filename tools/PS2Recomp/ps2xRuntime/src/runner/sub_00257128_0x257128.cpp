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

// Function: sub_00257128
// Address: 0x257128 - 0x257188
void sub_00257128_0x257128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257128_0x257128");
#endif

    ctx->pc = 0x257128u;

    // 0x257128: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x257128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x25712c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x25712cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x257130: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x257130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x257134: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x257134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x257138: 0xb082001f  sdl         $v0, 0x1F($a0)
    ctx->pc = 0x257138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25713c: 0xb4820018  sdr         $v0, 0x18($a0)
    ctx->pc = 0x25713cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x257140: 0xb0830027  sdl         $v1, 0x27($a0)
    ctx->pc = 0x257140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x257144: 0xb4830020  sdr         $v1, 0x20($a0)
    ctx->pc = 0x257144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x257148: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x257148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25714c: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x25714cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257150: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x257150u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257154: 0x0  nop
    ctx->pc = 0x257154u;
    // NOP
    // 0x257158: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x257158u;
    {
        const bool branch_taken_0x257158 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x257158) {
            ctx->pc = 0x25715Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257158u;
            // 0x25715c: 0xa0800003  sb          $zero, 0x3($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257180u;
            goto label_257180;
        }
    }
    ctx->pc = 0x257160u;
    // 0x257160: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x257160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257164: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x257164u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257168: 0x0  nop
    ctx->pc = 0x257168u;
    // NOP
    // 0x25716c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25716Cu;
    {
        const bool branch_taken_0x25716c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25716Cu;
        // 0x257170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25716c) {
            ctx->pc = 0x25717Cu;
            goto label_25717c;
        }
    }
    ctx->pc = 0x257174u;
    // 0x257174: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x257174u;
    {
        const bool branch_taken_0x257174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257174u;
        // 0x257178: 0xa0820003  sb          $v0, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257174) {
            ctx->pc = 0x257180u;
            goto label_257180;
        }
    }
    ctx->pc = 0x25717Cu;
label_25717c:
    // 0x25717c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x25717cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_257180:
    // 0x257180: 0x3e00008  jr          $ra
    ctx->pc = 0x257180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257180u;
        // 0x257184: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257188u;
}
