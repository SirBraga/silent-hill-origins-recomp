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

// Function: sub_001A8860
// Address: 0x1a8860 - 0x1a88c0
void sub_001A8860_0x1a8860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8860_0x1a8860");
#endif

    switch (ctx->pc) {
        case 0x1a8880u: goto label_1a8880;
        default: break;
    }

    ctx->pc = 0x1a8860u;

    // 0x1a8860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8868: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1a8868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a886c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A886Cu;
    {
        const bool branch_taken_0x1a886c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A886Cu;
        // 0x1a8870: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a886c) {
            ctx->pc = 0x1A8888u;
            goto label_1a8888;
        }
    }
    ctx->pc = 0x1A8874u;
    // 0x1a8874: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1a8874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1a8878: 0xc041e86  jal         func_107A18
    ctx->pc = 0x1A8878u;
    SET_GPR_U32(ctx, 31, 0x1A8880u);
    ctx->pc = 0x1A887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8878u;
    // 0x1a887c: 0x2484b3c8  addiu       $a0, $a0, -0x4C38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A18u, 0x1A8878u, 0x1A8880u)) {
        return;
    }
    ctx->pc = 0x1A8880u;
label_1a8880:
    // 0x1a8880: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A8880u;
    {
        const bool branch_taken_0x1a8880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8880u;
        // 0x1a8884: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8880) {
            ctx->pc = 0x1A88B8u;
            goto label_1a88b8;
        }
    }
    ctx->pc = 0x1A8888u;
label_1a8888:
    // 0x1a8888: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x1a8888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a888c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x1a888cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a8890: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1a8890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a8894: 0xb0820037  sdl         $v0, 0x37($a0)
    ctx->pc = 0x1a8894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8898: 0xb4820030  sdr         $v0, 0x30($a0)
    ctx->pc = 0x1a8898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a889c: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x1a889cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x1a88a0: 0x68a20013  ldl         $v0, 0x13($a1)
    ctx->pc = 0x1a88a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a88a4: 0x6ca2000c  ldr         $v0, 0xC($a1)
    ctx->pc = 0x1a88a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a88a8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1a88a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1a88ac: 0xb0820047  sdl         $v0, 0x47($a0)
    ctx->pc = 0x1a88acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a88b0: 0xb4820040  sdr         $v0, 0x40($a0)
    ctx->pc = 0x1a88b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a88b4: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x1a88b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
label_1a88b8:
    // 0x1a88b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A88B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A88BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88B8u;
        // 0x1a88bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A88B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A88C0u;
}
