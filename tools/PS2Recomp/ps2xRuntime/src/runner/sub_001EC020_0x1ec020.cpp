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

// Function: sub_001EC020
// Address: 0x1ec020 - 0x1ec058
void sub_001EC020_0x1ec020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC020_0x1ec020");
#endif

    switch (ctx->pc) {
        case 0x1ec048u: goto label_1ec048;
        default: break;
    }

    ctx->pc = 0x1ec020u;

    // 0x1ec020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ec020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ec024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ec028: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1ec028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1ec02c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EC02Cu;
    {
        const bool branch_taken_0x1ec02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC02Cu;
        // 0x1ec030: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec02c) {
            ctx->pc = 0x1EC038u;
            goto label_1ec038;
        }
    }
    ctx->pc = 0x1EC034u;
    // 0x1ec034: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ec034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ec038:
    // 0x1ec038: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC038u;
    {
        const bool branch_taken_0x1ec038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC038u;
        // 0x1ec03c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec038) {
            ctx->pc = 0x1EC048u;
            goto label_1ec048;
        }
    }
    ctx->pc = 0x1EC040u;
    // 0x1ec040: 0xc08994a  jal         func_226528
    ctx->pc = 0x1EC040u;
    SET_GPR_U32(ctx, 31, 0x1EC048u);
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x1EC040u, 0x1EC048u)) {
        return;
    }
    ctx->pc = 0x1EC048u;
label_1ec048:
    // 0x1ec048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec04c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC04Cu;
        // 0x1ec050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC054u;
    // 0x1ec054: 0x0  nop
    ctx->pc = 0x1ec054u;
    // NOP
    ctx->pc = 0x1ec058u;
}
