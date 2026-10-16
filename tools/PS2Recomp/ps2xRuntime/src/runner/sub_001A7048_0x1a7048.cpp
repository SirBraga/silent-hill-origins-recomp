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

// Function: sub_001A7048
// Address: 0x1a7048 - 0x1a7090
void sub_001A7048_0x1a7048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7048_0x1a7048");
#endif

    switch (ctx->pc) {
        case 0x1a7078u: goto label_1a7078;
        default: break;
    }

    ctx->pc = 0x1a7048u;

    // 0x1a7048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a7048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a704c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1a704cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7054: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1a7054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7058: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x1a7058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1a705c: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x1a705cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1a7060: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x1a7060u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a7064: 0xb0670077  sdl         $a3, 0x77($v1)
    ctx->pc = 0x1a7064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7068: 0xb4670070  sdr         $a3, 0x70($v1)
    ctx->pc = 0x1a7068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a706c: 0xac680078  sw          $t0, 0x78($v1)
    ctx->pc = 0x1a706cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 8));
    // 0x1a7070: 0xc06a46c  jal         func_1A91B0
    ctx->pc = 0x1A7070u;
    SET_GPR_U32(ctx, 31, 0x1A7078u);
    ctx->pc = 0x1A91B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A91B0u, 0x1A7070u, 0x1A7078u)) {
        return;
    }
    ctx->pc = 0x1A7078u;
label_1a7078:
    // 0x1a7078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a707c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A707Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A707Cu;
        // 0x1a7080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A707Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7084u;
    // 0x1a7084: 0x0  nop
    ctx->pc = 0x1a7084u;
    // NOP
    // 0x1a7088: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a7088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a708c: 0x0  nop
    ctx->pc = 0x1a708cu;
    // NOP
    ctx->pc = 0x1a7090u;
}
