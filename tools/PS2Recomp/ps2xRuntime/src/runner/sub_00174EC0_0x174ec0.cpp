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

// Function: sub_00174EC0
// Address: 0x174ec0 - 0x174f10
void sub_00174EC0_0x174ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174EC0_0x174ec0");
#endif

    switch (ctx->pc) {
        case 0x174ef0u: goto label_174ef0;
        case 0x174f00u: goto label_174f00;
        default: break;
    }

    ctx->pc = 0x174ec0u;

    // 0x174ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174ec8: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x174ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x174ecc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x174eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x174ed0: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x174ED0u;
    {
        const bool branch_taken_0x174ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x174ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174ED0u;
        // 0x174ed4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ed0) {
            ctx->pc = 0x174EF8u;
            goto label_174ef8;
        }
    }
    ctx->pc = 0x174ED8u;
    // 0x174ed8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x174ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174edc: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x174edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    // 0x174ee0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x174ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x174ee4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x174ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174ee8: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x174EE8u;
    SET_GPR_U32(ctx, 31, 0x174EF0u);
    ctx->pc = 0x174EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174EE8u;
    // 0x174eec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0930u, 0x174EE8u, 0x174EF0u)) {
        return;
    }
    ctx->pc = 0x174EF0u;
label_174ef0:
    // 0x174ef0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x174EF0u;
    {
        const bool branch_taken_0x174ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174EF0u;
        // 0x174ef4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ef0) {
            ctx->pc = 0x174F04u;
            goto label_174f04;
        }
    }
    ctx->pc = 0x174EF8u;
label_174ef8:
    // 0x174ef8: 0xc05d852  jal         func_176148
    ctx->pc = 0x174EF8u;
    SET_GPR_U32(ctx, 31, 0x174F00u);
    ctx->pc = 0x176148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176148u, 0x174EF8u, 0x174F00u)) {
        return;
    }
    ctx->pc = 0x174F00u;
label_174f00:
    // 0x174f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174f04:
    // 0x174f04: 0x3e00008  jr          $ra
    ctx->pc = 0x174F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F04u;
        // 0x174f08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174F0Cu;
    // 0x174f0c: 0x0  nop
    ctx->pc = 0x174f0cu;
    // NOP
    ctx->pc = 0x174f10u;
}
