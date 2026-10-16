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

// Function: sub_0025D7C8
// Address: 0x25d7c8 - 0x25d820
void sub_0025D7C8_0x25d7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D7C8_0x25d7c8");
#endif

    switch (ctx->pc) {
        case 0x25d7f0u: goto label_25d7f0;
        case 0x25d7f8u: goto label_25d7f8;
        default: break;
    }

    ctx->pc = 0x25d7c8u;

    // 0x25d7c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d7cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25d7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25d7d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d7d4: 0x2491002c  addiu       $s1, $a0, 0x2C
    ctx->pc = 0x25d7d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x25d7d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25d7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25d7dc: 0x8c90002c  lw          $s0, 0x2C($a0)
    ctx->pc = 0x25d7dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x25d7e0: 0x5211000a  beql        $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x25D7E0u;
    {
        const bool branch_taken_0x25d7e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x25d7e0) {
            ctx->pc = 0x25D7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D7E0u;
            // 0x25d7e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D80Cu;
            goto label_25d80c;
        }
    }
    ctx->pc = 0x25D7E8u;
    // 0x25d7e8: 0x2604fff4  addiu       $a0, $s0, -0xC
    ctx->pc = 0x25d7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
    // 0x25d7ec: 0x0  nop
    ctx->pc = 0x25d7ecu;
    // NOP
label_25d7f0:
    // 0x25d7f0: 0xc0974c2  jal         func_25D308
    ctx->pc = 0x25D7F0u;
    SET_GPR_U32(ctx, 31, 0x25D7F8u);
    ctx->pc = 0x25D7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D7F0u;
    // 0x25d7f4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25D308u, 0x25D7F0u, 0x25D7F8u)) {
        return;
    }
    ctx->pc = 0x25D7F8u;
label_25d7f8:
    // 0x25d7f8: 0x0  nop
    ctx->pc = 0x25d7f8u;
    // NOP
    // 0x25d7fc: 0x0  nop
    ctx->pc = 0x25d7fcu;
    // NOP
    // 0x25d800: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x25D800u;
    {
        const bool branch_taken_0x25d800 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x25D804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D800u;
        // 0x25d804: 0x2604fff4  addiu       $a0, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d800) {
            ctx->pc = 0x25D7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25d7f0;
        }
    }
    ctx->pc = 0x25D808u;
    // 0x25d808: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25d808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25d80c:
    // 0x25d80c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25d80cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d814: 0x3e00008  jr          $ra
    ctx->pc = 0x25D814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D814u;
        // 0x25d818: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D81Cu;
    // 0x25d81c: 0x0  nop
    ctx->pc = 0x25d81cu;
    // NOP
    ctx->pc = 0x25d820u;
}
