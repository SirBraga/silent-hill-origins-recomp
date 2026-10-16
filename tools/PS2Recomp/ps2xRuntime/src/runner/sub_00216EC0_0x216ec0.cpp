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

// Function: sub_00216EC0
// Address: 0x216ec0 - 0x216f08
void sub_00216EC0_0x216ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216EC0_0x216ec0");
#endif

    switch (ctx->pc) {
        case 0x216ed8u: goto label_216ed8;
        case 0x216ee0u: goto label_216ee0;
        default: break;
    }

    ctx->pc = 0x216ec0u;

    // 0x216ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216ec4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x216ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x216ec8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x216ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x216ecc: 0x8c502d34  lw          $s0, 0x2D34($v0)
    ctx->pc = 0x216eccu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x702D34u));
    // 0x216ed0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x216ED0u;
    {
        const bool branch_taken_0x216ed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x216ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216ED0u;
        // 0x216ed4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ed0) {
            ctx->pc = 0x216EF0u;
            goto label_216ef0;
        }
    }
    ctx->pc = 0x216ED8u;
label_216ed8:
    // 0x216ed8: 0xc085c5c  jal         func_217170
    ctx->pc = 0x216ED8u;
    SET_GPR_U32(ctx, 31, 0x216EE0u);
    ctx->pc = 0x216EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216ED8u;
    // 0x216edc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217170u, 0x216ED8u, 0x216EE0u)) {
        return;
    }
    ctx->pc = 0x216EE0u;
label_216ee0:
    // 0x216ee0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x216ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x216ee4: 0x0  nop
    ctx->pc = 0x216ee4u;
    // NOP
    // 0x216ee8: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x216EE8u;
    {
        const bool branch_taken_0x216ee8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x216ee8) {
            ctx->pc = 0x216ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216ed8;
        }
    }
    ctx->pc = 0x216EF0u;
label_216ef0:
    // 0x216ef0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x216ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x216EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216EF8u;
        // 0x216efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216F00u;
    // 0x216f00: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x216f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x216f04: 0x0  nop
    ctx->pc = 0x216f04u;
    // NOP
    ctx->pc = 0x216f08u;
}
