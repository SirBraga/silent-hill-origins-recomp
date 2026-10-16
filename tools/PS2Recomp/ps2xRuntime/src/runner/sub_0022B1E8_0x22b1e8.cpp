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

// Function: sub_0022B1E8
// Address: 0x22b1e8 - 0x22b248
void sub_0022B1E8_0x22b1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B1E8_0x22b1e8");
#endif

    switch (ctx->pc) {
        case 0x22b220u: goto label_22b220;
        default: break;
    }

    ctx->pc = 0x22b1e8u;

    // 0x22b1e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22b1e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22b1ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22b1f0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x22b1f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1f4: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x22b1f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1f8: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x22b1f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1fc: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x22b1fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b200: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x22b200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x22b204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b208: 0x24840448  addiu       $a0, $a0, 0x448
    ctx->pc = 0x22b208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1096));
    // 0x22b20c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22b20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b210: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x22b210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b214: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x22b214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b218: 0xc09389e  jal         func_24E278
    ctx->pc = 0x22B218u;
    SET_GPR_U32(ctx, 31, 0x22B220u);
    ctx->pc = 0x22B21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B218u;
    // 0x22b21c: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E278u, 0x22B218u, 0x22B220u)) {
        return;
    }
    ctx->pc = 0x22B220u;
label_22b220:
    // 0x22b220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b224: 0x3e00008  jr          $ra
    ctx->pc = 0x22B224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B224u;
        // 0x22b228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B22Cu;
    // 0x22b22c: 0x0  nop
    ctx->pc = 0x22b22cu;
    // NOP
    // 0x22b230: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x22b230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22b234: 0x0  nop
    ctx->pc = 0x22b234u;
    // NOP
    // 0x22b238: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x22b238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22b23c: 0x0  nop
    ctx->pc = 0x22b23cu;
    // NOP
    // 0x22b240: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x22b240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22b244: 0x0  nop
    ctx->pc = 0x22b244u;
    // NOP
    ctx->pc = 0x22b248u;
}
