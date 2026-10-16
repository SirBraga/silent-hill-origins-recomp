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

// Function: sub_001B9D00
// Address: 0x1b9d00 - 0x1b9d48
void sub_001B9D00_0x1b9d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9D00_0x1b9d00");
#endif

    switch (ctx->pc) {
        case 0x1b9d1cu: goto label_1b9d1c;
        case 0x1b9d34u: goto label_1b9d34;
        default: break;
    }

    ctx->pc = 0x1b9d00u;

    // 0x1b9d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b9d04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b9d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b9d08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9d0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d10: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1b9d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1b9d14: 0xc06d326  jal         func_1B4C98
    ctx->pc = 0x1B9D14u;
    SET_GPR_U32(ctx, 31, 0x1B9D1Cu);
    ctx->pc = 0x1B9D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D14u;
    // 0x1b9d18: 0x8e040270  lw          $a0, 0x270($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4C98u, 0x1B9D14u, 0x1B9D1Cu)) {
        return;
    }
    ctx->pc = 0x1B9D1Cu;
label_1b9d1c:
    // 0x1b9d1c: 0x8e02026c  lw          $v0, 0x26C($s0)
    ctx->pc = 0x1b9d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x1b9d20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9D20u;
    {
        const bool branch_taken_0x1b9d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D20u;
        // 0x1b9d24: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d20) {
            ctx->pc = 0x1B9D38u;
            goto label_1b9d38;
        }
    }
    ctx->pc = 0x1B9D28u;
    // 0x1b9d28: 0x8e050268  lw          $a1, 0x268($s0)
    ctx->pc = 0x1b9d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x1b9d2c: 0xc0640c6  jal         func_190318
    ctx->pc = 0x1B9D2Cu;
    SET_GPR_U32(ctx, 31, 0x1B9D34u);
    ctx->pc = 0x1B9D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D2Cu;
    // 0x1b9d30: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190318u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190318u, 0x1B9D2Cu, 0x1B9D34u)) {
        return;
    }
    ctx->pc = 0x1B9D34u;
label_1b9d34:
    // 0x1b9d34: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1b9d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
label_1b9d38:
    // 0x1b9d38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b9d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9d40: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D40u;
        // 0x1b9d44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9D48u;
}
