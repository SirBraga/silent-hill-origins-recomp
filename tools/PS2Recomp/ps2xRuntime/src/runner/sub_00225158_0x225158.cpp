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

// Function: sub_00225158
// Address: 0x225158 - 0x2251c0
void sub_00225158_0x225158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225158_0x225158");
#endif

    switch (ctx->pc) {
        case 0x2251a8u: goto label_2251a8;
        default: break;
    }

    ctx->pc = 0x225158u;

    // 0x225158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22515c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22515cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x225160: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x225160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225164: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x225164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x225168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22516c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22516cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225170: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x225170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x225174: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x225174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x225178: 0xb202006f  sdl         $v0, 0x6F($s0)
    ctx->pc = 0x225178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22517c: 0xb6020068  sdr         $v0, 0x68($s0)
    ctx->pc = 0x22517cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x225180: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x225180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225184: 0xc602006c  lwc1        $f2, 0x6C($s0)
    ctx->pc = 0x225184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x225188: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x225188u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x22518c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x22518cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x225190: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x225190u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x225194: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x225194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x225198: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x225198u;
    {
        const bool branch_taken_0x225198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225198u;
        // 0x22519c: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225198) {
            ctx->pc = 0x2251A8u;
            goto label_2251a8;
        }
    }
    ctx->pc = 0x2251A0u;
    // 0x2251a0: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x2251A0u;
    SET_GPR_U32(ctx, 31, 0x2251A8u);
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x2251A0u, 0x2251A8u)) {
        return;
    }
    ctx->pc = 0x2251A8u;
label_2251a8:
    // 0x2251a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2251a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2251acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2251b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2251b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2251b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2251B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2251B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2251B4u;
        // 0x2251b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2251B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2251BCu;
    // 0x2251bc: 0x0  nop
    ctx->pc = 0x2251bcu;
    // NOP
    ctx->pc = 0x2251c0u;
}
