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

// Function: sub_00188460
// Address: 0x188460 - 0x1884a8
void sub_00188460_0x188460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188460_0x188460");
#endif

    switch (ctx->pc) {
        case 0x18847cu: goto label_18847c;
        default: break;
    }

    ctx->pc = 0x188460u;

    // 0x188460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x188460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x188464: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x188464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x188468: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18846c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18846cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x188470: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x188470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188474: 0xc062018  jal         func_188060
    ctx->pc = 0x188474u;
    SET_GPR_U32(ctx, 31, 0x18847Cu);
    ctx->pc = 0x188478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188474u;
    // 0x188478: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188060u, 0x188474u, 0x18847Cu)) {
        return;
    }
    ctx->pc = 0x18847Cu;
label_18847c:
    // 0x18847c: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x18847cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x188480: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x188480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x188484: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x188484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x188488: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x188488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18848c: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x18848cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188490: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x188490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188494: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x188494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x188498: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x188498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18849c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18849cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1884a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1884A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1884A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884A0u;
        // 0x1884a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1884A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1884A8u;
}
