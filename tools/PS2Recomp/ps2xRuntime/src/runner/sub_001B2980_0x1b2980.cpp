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

// Function: sub_001B2980
// Address: 0x1b2980 - 0x1b29c8
void sub_001B2980_0x1b2980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2980_0x1b2980");
#endif

    switch (ctx->pc) {
        case 0x1b29a8u: goto label_1b29a8;
        default: break;
    }

    ctx->pc = 0x1b2980u;

    // 0x1b2980: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1b2980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1b2984: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2984u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2988: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1b2988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1b298c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b298cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2994: 0x8c444120  lw          $a0, 0x4120($v0)
    ctx->pc = 0x1b2994u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4120u));
    // 0x1b2998: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b299c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b299cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b29a0: 0xc07bf5e  jal         func_1EFD78
    ctx->pc = 0x1B29A0u;
    SET_GPR_U32(ctx, 31, 0x1B29A8u);
    ctx->pc = 0x1B29A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B29A0u;
    // 0x1b29a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFD78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFD78u, 0x1B29A0u, 0x1B29A8u)) {
        return;
    }
    ctx->pc = 0x1B29A8u;
label_1b29a8:
    // 0x1b29a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b29a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b29ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B29ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B29B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B29ACu;
        // 0x1b29b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B29ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B29B4u;
    // 0x1b29b4: 0x0  nop
    ctx->pc = 0x1b29b4u;
    // NOP
    // 0x1b29b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b29b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b29bc: 0x0  nop
    ctx->pc = 0x1b29bcu;
    // NOP
    // 0x1b29c0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1b29c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29c4: 0x0  nop
    ctx->pc = 0x1b29c4u;
    // NOP
    ctx->pc = 0x1b29c8u;
}
