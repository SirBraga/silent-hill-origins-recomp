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

// Function: sub_00153ED0
// Address: 0x153ed0 - 0x153f18
void sub_00153ED0_0x153ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153ED0_0x153ed0");
#endif

    switch (ctx->pc) {
        case 0x153ef4u: goto label_153ef4;
        default: break;
    }

    ctx->pc = 0x153ed0u;

    // 0x153ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x153ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x153ed4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x153ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x153ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153edc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x153edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153ee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153ee4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x153ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153ee8: 0xae05007c  sw          $a1, 0x7C($s0)
    ctx->pc = 0x153ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 5));
    // 0x153eec: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x153EECu;
    SET_GPR_U32(ctx, 31, 0x153EF4u);
    ctx->pc = 0x153EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153EECu;
    // 0x153ef0: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x153EECu, 0x153EF4u)) {
        return;
    }
    ctx->pc = 0x153EF4u;
label_153ef4:
    // 0x153ef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x153ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153ef8: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x153ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
    // 0x153efc: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x153efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x153f00: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x153f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x153f04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x153f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153f08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x153f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153f0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153f10: 0x3e00008  jr          $ra
    ctx->pc = 0x153F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F10u;
        // 0x153f14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153F18u;
}
