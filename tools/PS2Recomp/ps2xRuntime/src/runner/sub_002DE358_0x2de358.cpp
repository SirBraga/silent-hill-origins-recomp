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

// Function: sub_002DE358
// Address: 0x2de358 - 0x2de3a0
void sub_002DE358_0x2de358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE358_0x2de358");
#endif

    switch (ctx->pc) {
        case 0x2de370u: goto label_2de370;
        default: break;
    }

    ctx->pc = 0x2de358u;

    // 0x2de358: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x2de358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2de35c: 0x24a70020  addiu       $a3, $a1, 0x20
    ctx->pc = 0x2de35cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2de360: 0x1087000c  beq         $a0, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x2DE360u;
    {
        const bool branch_taken_0x2de360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x2DE364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE360u;
        // 0x2de364: 0x2485ffc0  addiu       $a1, $a0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de360) {
            ctx->pc = 0x2DE394u;
            goto label_2de394;
        }
    }
    ctx->pc = 0x2DE368u;
    // 0x2de368: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x2de368u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2de36c: 0x0  nop
    ctx->pc = 0x2de36cu;
    // NOP
label_2de370:
    // 0x2de370: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2de370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2de374: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x2de374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2de378: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DE378u;
    {
        const bool branch_taken_0x2de378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2de378) {
            ctx->pc = 0x2DE37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE378u;
            // 0x2de37c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE38Cu;
            goto label_2de38c;
        }
    }
    ctx->pc = 0x2DE380u;
    // 0x2de380: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x2de380u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x2de384: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE384u;
        // 0x2de388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE38Cu;
label_2de38c:
    // 0x2de38c: 0x1487fff8  bne         $a0, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DE38Cu;
    {
        const bool branch_taken_0x2de38c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x2DE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE38Cu;
        // 0x2de390: 0x2485ffc0  addiu       $a1, $a0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de38c) {
            ctx->pc = 0x2DE370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de370;
        }
    }
    ctx->pc = 0x2DE394u;
label_2de394:
    // 0x2de394: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE394u;
        // 0x2de398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE39Cu;
    // 0x2de39c: 0x0  nop
    ctx->pc = 0x2de39cu;
    // NOP
    ctx->pc = 0x2de3a0u;
}
