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

// Function: sub_002E3E90
// Address: 0x2e3e90 - 0x2e3f00
void sub_002E3E90_0x2e3e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3E90_0x2e3e90");
#endif

    switch (ctx->pc) {
        case 0x2e3ed8u: goto label_2e3ed8;
        default: break;
    }

    ctx->pc = 0x2e3e90u;

    // 0x2e3e90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e3e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e3e94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e3e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2e3e98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e3e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e3e9c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e3e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3ea0: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x2e3ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2e3ea4: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x2e3ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2e3ea8: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x2e3ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e3eac: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x2e3eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e3eb0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2e3eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3eb4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2e3eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3eb8: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x2e3eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3ebc: 0x3c06002e  lui         $a2, 0x2E
    ctx->pc = 0x2e3ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46 << 16));
    // 0x2e3ec0: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x2e3ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3ec4: 0x24c644d8  addiu       $a2, $a2, 0x44D8
    ctx->pc = 0x2e3ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17624));
    // 0x2e3ec8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2e3ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e3ecc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2e3eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3ed0: 0xc0b9006  jal         func_2E4018
    ctx->pc = 0x2E3ED0u;
    SET_GPR_U32(ctx, 31, 0x2E3ED8u);
    ctx->pc = 0x2E3ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3ED0u;
    // 0x2e3ed4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4018u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E4018u, 0x2E3ED0u, 0x2E3ED8u)) {
        return;
    }
    ctx->pc = 0x2E3ED8u;
label_2e3ed8:
    // 0x2e3ed8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3ED8u;
    {
        const bool branch_taken_0x2e3ed8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3ED8u;
        // 0x2e3edc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3ed8) {
            ctx->pc = 0x2E3EE8u;
            goto label_2e3ee8;
        }
    }
    ctx->pc = 0x2E3EE0u;
    // 0x2e3ee0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3ee4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2e3ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2e3ee8:
    // 0x2e3ee8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e3ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3eec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e3eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3ef0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e3ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3EF4u;
        // 0x2e3ef8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3EFCu;
    // 0x2e3efc: 0x0  nop
    ctx->pc = 0x2e3efcu;
    // NOP
    ctx->pc = 0x2e3f00u;
}
