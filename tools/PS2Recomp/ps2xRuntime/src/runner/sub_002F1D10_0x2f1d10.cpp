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

// Function: sub_002F1D10
// Address: 0x2f1d10 - 0x2f1d70
void sub_002F1D10_0x2f1d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1D10_0x2f1d10");
#endif

    switch (ctx->pc) {
        case 0x2f1d28u: goto label_2f1d28;
        default: break;
    }

    ctx->pc = 0x2f1d10u;

    // 0x2f1d10: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2f1d10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f1d14: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F1D14u;
    {
        const bool branch_taken_0x2f1d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D14u;
        // 0x2f1d18: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1d14) {
            ctx->pc = 0x2F1D5Cu;
            goto label_2f1d5c;
        }
    }
    ctx->pc = 0x2F1D1Cu;
    // 0x2f1d1c: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x2f1d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2f1d20: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x2f1d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2f1d24: 0x0  nop
    ctx->pc = 0x2f1d24u;
    // NOP
label_2f1d28:
    // 0x2f1d28: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2f1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2f1d2c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2f1d2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f1d30: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1D30u;
    {
        const bool branch_taken_0x2f1d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2f1d30) {
            ctx->pc = 0x2F1D48u;
            goto label_2f1d48;
        }
    }
    ctx->pc = 0x2F1D38u;
    // 0x2f1d38: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1D38u;
    {
        const bool branch_taken_0x2f1d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2F1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D38u;
        // 0x2f1d3c: 0x28420020  slti        $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1d38) {
            ctx->pc = 0x2F1D48u;
            goto label_2f1d48;
        }
    }
    ctx->pc = 0x2F1D40u;
    // 0x2f1d40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1D40u;
    {
        const bool branch_taken_0x2f1d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D40u;
        // 0x2f1d44: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1d40) {
            ctx->pc = 0x2F1D50u;
            goto label_2f1d50;
        }
    }
    ctx->pc = 0x2F1D48u;
label_2f1d48:
    // 0x2f1d48: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D48u;
        // 0x2f1d4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1D50u;
label_2f1d50:
    // 0x2f1d50: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2f1d50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f1d54: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F1D54u;
    {
        const bool branch_taken_0x2f1d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D54u;
        // 0x2f1d58: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1d54) {
            ctx->pc = 0x2F1D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1d28;
        }
    }
    ctx->pc = 0x2F1D5Cu;
label_2f1d5c:
    // 0x2f1d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D5Cu;
        // 0x2f1d60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1D64u;
    // 0x2f1d64: 0x0  nop
    ctx->pc = 0x2f1d64u;
    // NOP
    // 0x2f1d68: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2f1d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f1d6c: 0x0  nop
    ctx->pc = 0x2f1d6cu;
    // NOP
    ctx->pc = 0x2f1d70u;
}
