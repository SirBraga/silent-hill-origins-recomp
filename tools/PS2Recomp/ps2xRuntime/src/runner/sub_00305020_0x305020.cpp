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

// Function: sub_00305020
// Address: 0x305020 - 0x305060
void sub_00305020_0x305020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305020_0x305020");
#endif

    switch (ctx->pc) {
        case 0x305030u: goto label_305030;
        default: break;
    }

    ctx->pc = 0x305020u;

    // 0x305020: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x305020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x305024: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x305024u;
    {
        const bool branch_taken_0x305024 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x305028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305024u;
        // 0x305028: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305024) {
            ctx->pc = 0x305050u;
            goto label_305050;
        }
    }
    ctx->pc = 0x30502Cu;
    // 0x30502c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x30502cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_305030:
    // 0x305030: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x305030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x305034: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x305034u;
    {
        const bool branch_taken_0x305034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x305034) {
            ctx->pc = 0x305038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305034u;
            // 0x305038: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305044u;
            goto label_305044;
        }
    }
    ctx->pc = 0x30503Cu;
    // 0x30503c: 0x3e00008  jr          $ra
    ctx->pc = 0x30503Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30503Cu;
        // 0x305040: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30503Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305044u;
label_305044:
    // 0x305044: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x305044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x305048: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x305048u;
    {
        const bool branch_taken_0x305048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305048u;
        // 0x30504c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305048) {
            ctx->pc = 0x305030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305030;
        }
    }
    ctx->pc = 0x305050u;
label_305050:
    // 0x305050: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x305050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x305054: 0x3e00008  jr          $ra
    ctx->pc = 0x305054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305054u;
        // 0x305058: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30505Cu;
    // 0x30505c: 0x0  nop
    ctx->pc = 0x30505cu;
    // NOP
    ctx->pc = 0x305060u;
}
