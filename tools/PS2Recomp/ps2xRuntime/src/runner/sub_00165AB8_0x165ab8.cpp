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

// Function: sub_00165AB8
// Address: 0x165ab8 - 0x165af8
void sub_00165AB8_0x165ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165AB8_0x165ab8");
#endif

    switch (ctx->pc) {
        case 0x165adcu: goto label_165adc;
        default: break;
    }

    ctx->pc = 0x165ab8u;

    // 0x165ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x165ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x165abc: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x165abcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x165ac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165ac4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x165AC4u;
    {
        const bool branch_taken_0x165ac4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x165AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165AC4u;
        // 0x165ac8: 0xac806b1c  sw          $zero, 0x6B1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 27420), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ac4) {
            ctx->pc = 0x165AE4u;
            goto label_165ae4;
        }
    }
    ctx->pc = 0x165ACCu;
    // 0x165acc: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x165accu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ad0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x165ad0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ad4: 0xc058ece  jal         func_163B38
    ctx->pc = 0x165AD4u;
    SET_GPR_U32(ctx, 31, 0x165ADCu);
    ctx->pc = 0x165AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165AD4u;
    // 0x165ad8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163B38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x163B38u, 0x165AD4u, 0x165ADCu)) {
        return;
    }
    ctx->pc = 0x165ADCu;
label_165adc:
    // 0x165adc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x165ADCu;
    {
        const bool branch_taken_0x165adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165ADCu;
        // 0x165ae0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165adc) {
            ctx->pc = 0x165AECu;
            goto label_165aec;
        }
    }
    ctx->pc = 0x165AE4u;
label_165ae4:
    // 0x165ae4: 0x24826afc  addiu       $v0, $a0, 0x6AFC
    ctx->pc = 0x165ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 27388));
    // 0x165ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_165aec:
    // 0x165aec: 0x3e00008  jr          $ra
    ctx->pc = 0x165AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165AECu;
        // 0x165af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165AF4u;
    // 0x165af4: 0x0  nop
    ctx->pc = 0x165af4u;
    // NOP
    ctx->pc = 0x165af8u;
}
