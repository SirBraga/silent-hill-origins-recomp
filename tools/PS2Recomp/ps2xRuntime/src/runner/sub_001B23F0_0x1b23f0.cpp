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

// Function: sub_001B23F0
// Address: 0x1b23f0 - 0x1b2430
void sub_001B23F0_0x1b23f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B23F0_0x1b23f0");
#endif

    switch (ctx->pc) {
        case 0x1b240cu: goto label_1b240c;
        case 0x1b241cu: goto label_1b241c;
        default: break;
    }

    ctx->pc = 0x1b23f0u;

    // 0x1b23f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b23f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b23f4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1b23f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1b23f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b23f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b23fc: 0x24a58918  addiu       $a1, $a1, -0x76E8
    ctx->pc = 0x1b23fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    // 0x1b2400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2404: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1B2404u;
    SET_GPR_U32(ctx, 31, 0x1B240Cu);
    ctx->pc = 0x1B2408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2404u;
    // 0x1b2408: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1B2404u, 0x1B240Cu)) {
        return;
    }
    ctx->pc = 0x1B240Cu;
label_1b240c:
    // 0x1b240c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1b240cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1b2410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2414: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1B2414u;
    SET_GPR_U32(ctx, 31, 0x1B241Cu);
    ctx->pc = 0x1B2418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2414u;
    // 0x1b2418: 0x24a58910  addiu       $a1, $a1, -0x76F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1B2414u, 0x1B241Cu)) {
        return;
    }
    ctx->pc = 0x1B241Cu;
label_1b241c:
    // 0x1b241c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b241cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2424: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2424u;
        // 0x1b2428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B242Cu;
    // 0x1b242c: 0x0  nop
    ctx->pc = 0x1b242cu;
    // NOP
    ctx->pc = 0x1b2430u;
}
