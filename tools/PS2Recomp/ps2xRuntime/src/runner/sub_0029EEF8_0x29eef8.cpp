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

// Function: sub_0029EEF8
// Address: 0x29eef8 - 0x29ef40
void sub_0029EEF8_0x29eef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EEF8_0x29eef8");
#endif

    switch (ctx->pc) {
        case 0x29ef1cu: goto label_29ef1c;
        default: break;
    }

    ctx->pc = 0x29eef8u;

    // 0x29eef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29eef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29eefc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29eefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29ef00: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x29ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29ef04: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x29ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29ef08: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x29ef08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29ef0c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29EF0Cu;
    {
        const bool branch_taken_0x29ef0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF0Cu;
        // 0x29ef10: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ef0c) {
            ctx->pc = 0x29EF24u;
            goto label_29ef24;
        }
    }
    ctx->pc = 0x29EF14u;
    // 0x29ef14: 0xc0a72a8  jal         func_29CAA0
    ctx->pc = 0x29EF14u;
    SET_GPR_U32(ctx, 31, 0x29EF1Cu);
    ctx->pc = 0x29CAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29CAA0u, 0x29EF14u, 0x29EF1Cu)) {
        return;
    }
    ctx->pc = 0x29EF1Cu;
label_29ef1c:
    // 0x29ef1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29EF1Cu;
    {
        const bool branch_taken_0x29ef1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF1Cu;
        // 0x29ef20: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ef1c) {
            ctx->pc = 0x29EF2Cu;
            goto label_29ef2c;
        }
    }
    ctx->pc = 0x29EF24u;
label_29ef24:
    // 0x29ef24: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x29ef24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29ef28: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x29ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_29ef2c:
    // 0x29ef2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ef2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ef30: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x29ef30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ef34: 0x3e00008  jr          $ra
    ctx->pc = 0x29EF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF34u;
        // 0x29ef38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EF3Cu;
    // 0x29ef3c: 0x0  nop
    ctx->pc = 0x29ef3cu;
    // NOP
    ctx->pc = 0x29ef40u;
}
