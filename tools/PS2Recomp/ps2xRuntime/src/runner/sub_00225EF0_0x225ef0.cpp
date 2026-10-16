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

// Function: sub_00225EF0
// Address: 0x225ef0 - 0x225f50
void sub_00225EF0_0x225ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225EF0_0x225ef0");
#endif

    switch (ctx->pc) {
        case 0x225f20u: goto label_225f20;
        case 0x225f28u: goto label_225f28;
        default: break;
    }

    ctx->pc = 0x225ef0u;

label_225ef0:
    // 0x225ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225ef4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x225ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x225ef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x225efc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225f04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x225f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f08: 0xae1100a0  sw          $s1, 0xA0($s0)
    ctx->pc = 0x225f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 17));
    // 0x225f0c: 0x8e100098  lw          $s0, 0x98($s0)
    ctx->pc = 0x225f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x225f10: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x225F10u;
    {
        const bool branch_taken_0x225f10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x225f10) {
            ctx->pc = 0x225F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225F10u;
            // 0x225f14: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225F3Cu;
            goto label_225f3c;
        }
    }
    ctx->pc = 0x225F18u;
    // 0x225f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f1c: 0x0  nop
    ctx->pc = 0x225f1cu;
    // NOP
label_225f20:
    // 0x225f20: 0xc0897bc  jal         func_225EF0
    ctx->pc = 0x225F20u;
    SET_GPR_U32(ctx, 31, 0x225F28u);
    ctx->pc = 0x225F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F20u;
    // 0x225f24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225EF0u;
    goto label_225ef0;
    ctx->pc = 0x225F28u;
label_225f28:
    // 0x225f28: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x225f28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x225f2c: 0x0  nop
    ctx->pc = 0x225f2cu;
    // NOP
    // 0x225f30: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x225F30u;
    {
        const bool branch_taken_0x225f30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x225F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F30u;
        // 0x225f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f30) {
            ctx->pc = 0x225F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225f20;
        }
    }
    ctx->pc = 0x225F38u;
    // 0x225f38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x225f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_225f3c:
    // 0x225f3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225f44: 0x3e00008  jr          $ra
    ctx->pc = 0x225F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F44u;
        // 0x225f48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225F4Cu;
    // 0x225f4c: 0x0  nop
    ctx->pc = 0x225f4cu;
    // NOP
    ctx->pc = 0x225f50u;
}
