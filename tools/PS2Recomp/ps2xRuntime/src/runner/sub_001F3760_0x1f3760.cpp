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

// Function: sub_001F3760
// Address: 0x1f3760 - 0x1f37c0
void sub_001F3760_0x1f3760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3760_0x1f3760");
#endif

    switch (ctx->pc) {
        case 0x1f3788u: goto label_1f3788;
        case 0x1f3794u: goto label_1f3794;
        case 0x1f37a8u: goto label_1f37a8;
        case 0x1f37b4u: goto label_1f37b4;
        default: break;
    }

    ctx->pc = 0x1f3760u;

    // 0x1f3760: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1f3760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1f3764: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f3764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f3768: 0x8c62eaec  lw          $v0, -0x1514($v1)
    ctx->pc = 0x1f3768u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33EAECu));
    // 0x1f376c: 0x10440011  beq         $v0, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F376Cu;
    {
        const bool branch_taken_0x1f376c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1F3770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F376Cu;
        // 0x1f3770: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f376c) {
            ctx->pc = 0x1F37B4u;
            goto label_1f37b4;
        }
    }
    ctx->pc = 0x1F3774u;
    // 0x1f3774: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3774u;
    {
        const bool branch_taken_0x1f3774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3774u;
        // 0x1f3778: 0xac64eaec  sw          $a0, -0x1514($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961900), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3774) {
            ctx->pc = 0x1F379Cu;
            goto label_1f379c;
        }
    }
    ctx->pc = 0x1F377Cu;
    // 0x1f377c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f377cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3780: 0xc085d94  jal         func_217650
    ctx->pc = 0x1F3780u;
    SET_GPR_U32(ctx, 31, 0x1F3788u);
    ctx->pc = 0x1F3784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3780u;
    // 0x1f3784: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217650u, 0x1F3780u, 0x1F3788u)) {
        return;
    }
    ctx->pc = 0x1F3788u;
label_1f3788:
    // 0x1f3788: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f3788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f378c: 0xc085d94  jal         func_217650
    ctx->pc = 0x1F378Cu;
    SET_GPR_U32(ctx, 31, 0x1F3794u);
    ctx->pc = 0x1F3790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F378Cu;
    // 0x1f3790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217650u, 0x1F378Cu, 0x1F3794u)) {
        return;
    }
    ctx->pc = 0x1F3794u;
label_1f3794:
    // 0x1f3794: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F3794u;
    {
        const bool branch_taken_0x1f3794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3794u;
        // 0x1f3798: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3794) {
            ctx->pc = 0x1F37B8u;
            goto label_1f37b8;
        }
    }
    ctx->pc = 0x1F379Cu;
label_1f379c:
    // 0x1f379c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f379cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37a0: 0xc085d94  jal         func_217650
    ctx->pc = 0x1F37A0u;
    SET_GPR_U32(ctx, 31, 0x1F37A8u);
    ctx->pc = 0x1F37A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F37A0u;
    // 0x1f37a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217650u, 0x1F37A0u, 0x1F37A8u)) {
        return;
    }
    ctx->pc = 0x1F37A8u;
label_1f37a8:
    // 0x1f37a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f37a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f37ac: 0xc085d94  jal         func_217650
    ctx->pc = 0x1F37ACu;
    SET_GPR_U32(ctx, 31, 0x1F37B4u);
    ctx->pc = 0x1F37B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F37ACu;
    // 0x1f37b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217650u, 0x1F37ACu, 0x1F37B4u)) {
        return;
    }
    ctx->pc = 0x1F37B4u;
label_1f37b4:
    // 0x1f37b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f37b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f37b8:
    // 0x1f37b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F37B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F37B8u;
        // 0x1f37bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F37B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F37C0u;
}
