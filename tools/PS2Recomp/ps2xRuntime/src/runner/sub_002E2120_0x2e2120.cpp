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

// Function: sub_002E2120
// Address: 0x2e2120 - 0x2e2178
void sub_002E2120_0x2e2120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2120_0x2e2120");
#endif

    switch (ctx->pc) {
        case 0x2e2160u: goto label_2e2160;
        default: break;
    }

    ctx->pc = 0x2e2120u;

    // 0x2e2120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e2120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e2124: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e2124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e2128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e212c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e212cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2130: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x2e2130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2e2134: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x2e2134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2e2138: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2e2138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2e213c: 0xb2020077  sdl         $v0, 0x77($s0)
    ctx->pc = 0x2e213cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2140: 0xb6020070  sdr         $v0, 0x70($s0)
    ctx->pc = 0x2e2140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2144: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x2e2144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x2e2148: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x2e2148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2e214c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E214Cu;
    {
        const bool branch_taken_0x2e214c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E214Cu;
        // 0x2e2150: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e214c) {
            ctx->pc = 0x2E2160u;
            goto label_2e2160;
        }
    }
    ctx->pc = 0x2E2154u;
    // 0x2e2154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e2154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2158: 0xc0b66fa  jal         func_2D9BE8
    ctx->pc = 0x2E2158u;
    SET_GPR_U32(ctx, 31, 0x2E2160u);
    ctx->pc = 0x2E215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2158u;
    // 0x2e215c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9BE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9BE8u, 0x2E2158u, 0x2E2160u)) {
        return;
    }
    ctx->pc = 0x2E2160u;
label_2e2160:
    // 0x2e2160: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e2160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e2164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2168: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e2168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e216c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E216Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E216Cu;
        // 0x2e2170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E216Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2174u;
    // 0x2e2174: 0x0  nop
    ctx->pc = 0x2e2174u;
    // NOP
    ctx->pc = 0x2e2178u;
}
