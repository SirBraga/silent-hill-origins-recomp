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

// Function: sub_0029AB18
// Address: 0x29ab18 - 0x29ab58
void sub_0029AB18_0x29ab18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AB18_0x29ab18");
#endif

    switch (ctx->pc) {
        case 0x29ab44u: goto label_29ab44;
        default: break;
    }

    ctx->pc = 0x29ab18u;

    // 0x29ab18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ab18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29ab1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ab1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29ab20: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x29ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29ab24: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x29ab24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x29ab28: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29AB28u;
    {
        const bool branch_taken_0x29ab28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB28u;
        // 0x29ab2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab28) {
            ctx->pc = 0x29AB48u;
            goto label_29ab48;
        }
    }
    ctx->pc = 0x29AB30u;
    // 0x29ab30: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x29ab30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29ab34: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AB34u;
    {
        const bool branch_taken_0x29ab34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB34u;
        // 0x29ab38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab34) {
            ctx->pc = 0x29AB48u;
            goto label_29ab48;
        }
    }
    ctx->pc = 0x29AB3Cu;
    // 0x29ab3c: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x29AB3Cu;
    SET_GPR_U32(ctx, 31, 0x29AB44u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x29AB3Cu, 0x29AB44u)) {
        return;
    }
    ctx->pc = 0x29AB44u;
label_29ab44:
    // 0x29ab44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ab48:
    // 0x29ab48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ab48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ab4c: 0x3e00008  jr          $ra
    ctx->pc = 0x29AB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB4Cu;
        // 0x29ab50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AB54u;
    // 0x29ab54: 0x0  nop
    ctx->pc = 0x29ab54u;
    // NOP
    ctx->pc = 0x29ab58u;
}
