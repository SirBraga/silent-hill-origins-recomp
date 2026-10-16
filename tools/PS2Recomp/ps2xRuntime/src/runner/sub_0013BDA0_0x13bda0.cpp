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

// Function: sub_0013BDA0
// Address: 0x13bda0 - 0x13bde8
void sub_0013BDA0_0x13bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BDA0_0x13bda0");
#endif

    switch (ctx->pc) {
        case 0x13bdb4u: goto label_13bdb4;
        default: break;
    }

    ctx->pc = 0x13bda0u;

    // 0x13bda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13bda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13bda4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13bda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13bda8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13bda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13bdac: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x13BDACu;
    SET_GPR_U32(ctx, 31, 0x13BDB4u);
    ctx->pc = 0x13BDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BDACu;
    // 0x13bdb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x13BDACu, 0x13BDB4u)) {
        return;
    }
    ctx->pc = 0x13BDB4u;
label_13bdb4:
    // 0x13bdb4: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x13bdb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13bdb8: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x13bdb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13bdbc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x13bdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13bdc0: 0xb204008f  sdl         $a0, 0x8F($s0)
    ctx->pc = 0x13bdc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bdc4: 0xb6040088  sdr         $a0, 0x88($s0)
    ctx->pc = 0x13bdc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bdc8: 0xae050090  sw          $a1, 0x90($s0)
    ctx->pc = 0x13bdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 5));
    // 0x13bdcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bdd0: 0xa20300bc  sb          $v1, 0xBC($s0)
    ctx->pc = 0x13bdd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 188), (uint8_t)GPR_U32(ctx, 3));
    // 0x13bdd4: 0x26020088  addiu       $v0, $s0, 0x88
    ctx->pc = 0x13bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x13bdd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13bdd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13bddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bde0: 0x3e00008  jr          $ra
    ctx->pc = 0x13BDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BDE0u;
        // 0x13bde4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BDE8u;
}
