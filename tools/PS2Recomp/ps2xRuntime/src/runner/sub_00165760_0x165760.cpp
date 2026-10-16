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

// Function: sub_00165760
// Address: 0x165760 - 0x1657a8
void sub_00165760_0x165760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165760_0x165760");
#endif

    switch (ctx->pc) {
        case 0x165778u: goto label_165778;
        default: break;
    }

    ctx->pc = 0x165760u;

    // 0x165760: 0x90a30024  lbu         $v1, 0x24($a1)
    ctx->pc = 0x165760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x165764: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x165764u;
    {
        const bool branch_taken_0x165764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165764u;
        // 0x165768: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165764) {
            ctx->pc = 0x1657A0u;
            goto label_1657a0;
        }
    }
    ctx->pc = 0x16576Cu;
    // 0x16576c: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x16576cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x165770: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x165770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165774: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x165774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_165778:
    // 0x165778: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x165778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16577c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x16577cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165780: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x165780u;
    {
        const bool branch_taken_0x165780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165780u;
        // 0x165784: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165780) {
            ctx->pc = 0x165790u;
            goto label_165790;
        }
    }
    ctx->pc = 0x165788u;
    // 0x165788: 0x3e00008  jr          $ra
    ctx->pc = 0x165788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165788u;
        // 0x16578c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165790u;
label_165790:
    // 0x165790: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x165790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x165794: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x165794u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x165798: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x165798u;
    {
        const bool branch_taken_0x165798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165798u;
        // 0x16579c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165798) {
            ctx->pc = 0x165778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165778;
        }
    }
    ctx->pc = 0x1657A0u;
label_1657a0:
    // 0x1657a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1657A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1657A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657A0u;
        // 0x1657a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1657A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1657A8u;
}
