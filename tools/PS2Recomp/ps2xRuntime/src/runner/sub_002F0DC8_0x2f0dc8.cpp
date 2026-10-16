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

// Function: sub_002F0DC8
// Address: 0x2f0dc8 - 0x2f0e00
void sub_002F0DC8_0x2f0dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0DC8_0x2f0dc8");
#endif

    switch (ctx->pc) {
        case 0x2f0df0u: goto label_2f0df0;
        default: break;
    }

    ctx->pc = 0x2f0dc8u;

    // 0x2f0dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f0dcc: 0x1c800004  bgtz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0DCCu;
    {
        const bool branch_taken_0x2f0dcc = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x2F0DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0DCCu;
        // 0x2f0dd0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0dcc) {
            ctx->pc = 0x2F0DE0u;
            goto label_2f0de0;
        }
    }
    ctx->pc = 0x2F0DD4u;
    // 0x2f0dd4: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f0dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f0dd8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0DD8u;
    {
        const bool branch_taken_0x2f0dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0DD8u;
        // 0x2f0ddc: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0dd8) {
            ctx->pc = 0x2F0DF4u;
            goto label_2f0df4;
        }
    }
    ctx->pc = 0x2F0DE0u;
label_2f0de0:
    // 0x2f0de0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f0de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2f0de4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f0de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0de8: 0xc0c846c  jal         func_3211B0
    ctx->pc = 0x2F0DE8u;
    SET_GPR_U32(ctx, 31, 0x2F0DF0u);
    ctx->pc = 0x2F0DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0DE8u;
    // 0x2f0dec: 0x8c44f620  lw          $a0, -0x9E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964768)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3211B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3211B0u, 0x2F0DE8u, 0x2F0DF0u)) {
        return;
    }
    ctx->pc = 0x2F0DF0u;
label_2f0df0:
    // 0x2f0df0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f0df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0df4:
    // 0x2f0df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f0df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0df8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0DF8u;
        // 0x2f0dfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0E00u;
}
