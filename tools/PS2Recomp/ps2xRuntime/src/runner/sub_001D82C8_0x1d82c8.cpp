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

// Function: sub_001D82C8
// Address: 0x1d82c8 - 0x1d8300
void sub_001D82C8_0x1d82c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D82C8_0x1d82c8");
#endif

    switch (ctx->pc) {
        case 0x1d82e4u: goto label_1d82e4;
        case 0x1d82f4u: goto label_1d82f4;
        default: break;
    }

    ctx->pc = 0x1d82c8u;

    // 0x1d82c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d82c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d82cc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d82d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d82d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d82d4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D82D4u;
    {
        const bool branch_taken_0x1d82d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D82D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82D4u;
        // 0x1d82d8: 0xac449d94  sw          $a0, -0x626C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294942100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82d4) {
            ctx->pc = 0x1D82ECu;
            goto label_1d82ec;
        }
    }
    ctx->pc = 0x1D82DCu;
    // 0x1d82dc: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x1D82DCu;
    SET_GPR_U32(ctx, 31, 0x1D82E4u);
    ctx->pc = 0x1D82E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D82DCu;
    // 0x1d82e0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22DCD8u, 0x1D82DCu, 0x1D82E4u)) {
        return;
    }
    ctx->pc = 0x1D82E4u;
label_1d82e4:
    // 0x1d82e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D82E4u;
    {
        const bool branch_taken_0x1d82e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82E4u;
        // 0x1d82e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82e4) {
            ctx->pc = 0x1D82F8u;
            goto label_1d82f8;
        }
    }
    ctx->pc = 0x1D82ECu;
label_1d82ec:
    // 0x1d82ec: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x1D82ECu;
    SET_GPR_U32(ctx, 31, 0x1D82F4u);
    ctx->pc = 0x1D82F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D82ECu;
    // 0x1d82f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22DCD8u, 0x1D82ECu, 0x1D82F4u)) {
        return;
    }
    ctx->pc = 0x1D82F4u;
label_1d82f4:
    // 0x1d82f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d82f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d82f8:
    // 0x1d82f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D82F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D82FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82F8u;
        // 0x1d82fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D82F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8300u;
}
