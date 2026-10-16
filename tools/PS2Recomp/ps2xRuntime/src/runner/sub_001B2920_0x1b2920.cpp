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

// Function: sub_001B2920
// Address: 0x1b2920 - 0x1b2980
void sub_001B2920_0x1b2920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2920_0x1b2920");
#endif

    switch (ctx->pc) {
        case 0x1b2950u: goto label_1b2950;
        case 0x1b2974u: goto label_1b2974;
        default: break;
    }

    ctx->pc = 0x1b2920u;

    // 0x1b2920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2924: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b2924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b292c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b292cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2930: 0xac460220  sw          $a2, 0x220($v0)
    ctx->pc = 0x1b2930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 6));
    // 0x1b2934: 0x244400f8  addiu       $a0, $v0, 0xF8
    ctx->pc = 0x1b2934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 248));
    // 0x1b2938: 0xac450224  sw          $a1, 0x224($v0)
    ctx->pc = 0x1b2938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 548), GPR_U32(ctx, 5));
    // 0x1b293c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1b293cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b2940: 0xac43021c  sw          $v1, 0x21C($v0)
    ctx->pc = 0x1b2940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 3));
    // 0x1b2944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2948: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B2948u;
    SET_GPR_U32(ctx, 31, 0x1B2950u);
    ctx->pc = 0x1B294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2948u;
    // 0x1b294c: 0xac430218  sw          $v1, 0x218($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 536), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B2948u, 0x1B2950u)) {
        return;
    }
    ctx->pc = 0x1B2950u;
label_1b2950:
    // 0x1b2950: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1b2950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1b2954: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1b2954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1b2958: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b2958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b295c: 0x8c644120  lw          $a0, 0x4120($v1)
    ctx->pc = 0x1b295cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4120u));
    // 0x1b2960: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2968: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b2968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b296c: 0xc07bf14  jal         func_1EFC50
    ctx->pc = 0x1B296Cu;
    SET_GPR_U32(ctx, 31, 0x1B2974u);
    ctx->pc = 0x1B2970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B296Cu;
    // 0x1b2970: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFC50u, 0x1B296Cu, 0x1B2974u)) {
        return;
    }
    ctx->pc = 0x1B2974u;
label_1b2974:
    // 0x1b2974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2978: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2978u;
        // 0x1b297c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2980u;
}
