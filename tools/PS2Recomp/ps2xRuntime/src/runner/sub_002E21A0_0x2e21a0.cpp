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

// Function: sub_002E21A0
// Address: 0x2e21a0 - 0x2e21f8
void sub_002E21A0_0x2e21a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E21A0_0x2e21a0");
#endif

    switch (ctx->pc) {
        case 0x2e21e0u: goto label_2e21e0;
        default: break;
    }

    ctx->pc = 0x2e21a0u;

    // 0x2e21a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e21a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e21a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e21a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e21a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e21a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e21ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e21acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e21b0: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x2e21b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2e21b4: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x2e21b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2e21b8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2e21b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2e21bc: 0xb2020083  sdl         $v0, 0x83($s0)
    ctx->pc = 0x2e21bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e21c0: 0xb602007c  sdr         $v0, 0x7C($s0)
    ctx->pc = 0x2e21c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e21c4: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x2e21c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x2e21c8: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x2e21c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2e21cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E21CCu;
    {
        const bool branch_taken_0x2e21cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E21D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E21CCu;
        // 0x2e21d0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e21cc) {
            ctx->pc = 0x2E21E0u;
            goto label_2e21e0;
        }
    }
    ctx->pc = 0x2E21D4u;
    // 0x2e21d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e21d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e21d8: 0xc0b66fa  jal         func_2D9BE8
    ctx->pc = 0x2E21D8u;
    SET_GPR_U32(ctx, 31, 0x2E21E0u);
    ctx->pc = 0x2E21DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E21D8u;
    // 0x2e21dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9BE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9BE8u, 0x2E21D8u, 0x2E21E0u)) {
        return;
    }
    ctx->pc = 0x2E21E0u;
label_2e21e0:
    // 0x2e21e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e21e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e21e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e21e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e21e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e21e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e21ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E21ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E21ECu;
        // 0x2e21f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E21ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E21F4u;
    // 0x2e21f4: 0x0  nop
    ctx->pc = 0x2e21f4u;
    // NOP
    ctx->pc = 0x2e21f8u;
}
