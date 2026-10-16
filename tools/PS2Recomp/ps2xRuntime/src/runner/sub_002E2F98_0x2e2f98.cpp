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

// Function: sub_002E2F98
// Address: 0x2e2f98 - 0x2e2ff0
void sub_002E2F98_0x2e2f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2F98_0x2e2f98");
#endif

    switch (ctx->pc) {
        case 0x2e2fc0u: goto label_2e2fc0;
        default: break;
    }

    ctx->pc = 0x2e2f98u;

    // 0x2e2f98: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e2f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2f9c: 0x68430047  ldl         $v1, 0x47($v0)
    ctx->pc = 0x2e2f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e2fa0: 0x6c430040  ldr         $v1, 0x40($v0)
    ctx->pc = 0x2e2fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e2fa4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2e2fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2e2fa8: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x2e2fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2fac: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x2e2facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2fb0: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x2e2fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x2e2fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2FBCu;
    // 0x2e2fbc: 0x0  nop
    ctx->pc = 0x2e2fbcu;
    // NOP
label_2e2fc0:
    // 0x2e2fc0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e2fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2fc4: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2e2fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e2fc8: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2e2fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e2fcc: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2e2fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2e2fd0: 0xb0430053  sdl         $v1, 0x53($v0)
    ctx->pc = 0x2e2fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2fd4: 0xb443004c  sdr         $v1, 0x4C($v0)
    ctx->pc = 0x2e2fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2fd8: 0xac440054  sw          $a0, 0x54($v0)
    ctx->pc = 0x2e2fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 4));
    // 0x2e2fdc: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x2e2fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2e2fe0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2e2fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2e2fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2FE4u;
        // 0x2e2fe8: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2FECu;
    // 0x2e2fec: 0x0  nop
    ctx->pc = 0x2e2fecu;
    // NOP
    ctx->pc = 0x2e2ff0u;
}
