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

// Function: sub_0030F840
// Address: 0x30f840 - 0x30f8d8
void sub_0030F840_0x30f840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F840_0x30f840");
#endif

    switch (ctx->pc) {
        case 0x30f86cu: goto label_30f86c;
        case 0x30f898u: goto label_30f898;
        default: break;
    }

    ctx->pc = 0x30f840u;

    // 0x30f840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30f840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30f844: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30f844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30f848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30f848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30f84c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30f84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30f850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30f854: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30f854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f858: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x30f858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x30f85c: 0x50900009  beql        $a0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30F85Cu;
    {
        const bool branch_taken_0x30f85c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x30f85c) {
            ctx->pc = 0x30F860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F85Cu;
            // 0x30f860: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F884u;
            goto label_30f884;
        }
    }
    ctx->pc = 0x30F864u;
    // 0x30f864: 0xc0c407a  jal         func_3101E8
    ctx->pc = 0x30F864u;
    SET_GPR_U32(ctx, 31, 0x30F86Cu);
    ctx->pc = 0x3101E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3101E8u, 0x30F864u, 0x30F86Cu)) {
        return;
    }
    ctx->pc = 0x30F86Cu;
label_30f86c:
    // 0x30f86c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30F86Cu;
    {
        const bool branch_taken_0x30f86c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F86Cu;
        // 0x30f870: 0xae300040  sw          $s0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f86c) {
            ctx->pc = 0x30F880u;
            goto label_30f880;
        }
    }
    ctx->pc = 0x30F874u;
    // 0x30f874: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x30f874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x30f878: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30f878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30f87c: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x30f87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_30f880:
    // 0x30f880: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30f880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30f884:
    // 0x30f884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30f884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30f888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f88c: 0x3e00008  jr          $ra
    ctx->pc = 0x30F88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F88Cu;
        // 0x30f890: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F894u;
    // 0x30f894: 0x0  nop
    ctx->pc = 0x30f894u;
    // NOP
label_30f898:
    // 0x30f898: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x30f898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x30f89c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x30f89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f8a0: 0x68660057  ldl         $a2, 0x57($v1)
    ctx->pc = 0x30f8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x30f8a4: 0x6c660050  ldr         $a2, 0x50($v1)
    ctx->pc = 0x30f8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x30f8a8: 0x6867005f  ldl         $a3, 0x5F($v1)
    ctx->pc = 0x30f8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x30f8ac: 0x6c670058  ldr         $a3, 0x58($v1)
    ctx->pc = 0x30f8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x30f8b0: 0xb0a60007  sdl         $a2, 0x7($a1)
    ctx->pc = 0x30f8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f8b4: 0xb4a60000  sdr         $a2, 0x0($a1)
    ctx->pc = 0x30f8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f8b8: 0xb0a7000f  sdl         $a3, 0xF($a1)
    ctx->pc = 0x30f8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f8bc: 0xb4a70008  sdr         $a3, 0x8($a1)
    ctx->pc = 0x30f8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f8c0: 0xc481004c  lwc1        $f1, 0x4C($a0)
    ctx->pc = 0x30f8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f8c4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x30f8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f8c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30f8c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30f8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x30F8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8CCu;
        // 0x30f8d0: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F8D4u;
    // 0x30f8d4: 0x0  nop
    ctx->pc = 0x30f8d4u;
    // NOP
    ctx->pc = 0x30f8d8u;
}
