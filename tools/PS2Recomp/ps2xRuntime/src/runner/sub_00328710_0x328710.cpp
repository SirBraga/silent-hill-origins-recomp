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

// Function: sub_00328710
// Address: 0x328710 - 0x328760
void sub_00328710_0x328710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328710_0x328710");
#endif

    switch (ctx->pc) {
        case 0x328718u: goto label_328718;
        case 0x328720u: goto label_328720;
        case 0x328730u: goto label_328730;
        case 0x328744u: goto label_328744;
        case 0x328754u: goto label_328754;
        default: break;
    }

    ctx->pc = 0x328710u;

    // 0x328710: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x328710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x328714: 0xc  syscall     0
    ctx->pc = 0x328714u;
    ctx->pc = 0x328718u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_328718:
    // 0x328718: 0x3e00008  jr          $ra
    ctx->pc = 0x328718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328720u;
label_328720:
    // 0x328720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x328720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x328724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x328728: 0xc0c85e0  jal         func_321780
    ctx->pc = 0x328728u;
    SET_GPR_U32(ctx, 31, 0x328730u);
    ctx->pc = 0x321780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321780u, 0x328728u, 0x328730u)) {
        return;
    }
    ctx->pc = 0x328730u;
label_328730:
    // 0x328730: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x328730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x328734: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x328734u;
    {
        const bool branch_taken_0x328734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x328734) {
            ctx->pc = 0x32874Cu;
            goto label_32874c;
        }
    }
    ctx->pc = 0x32873Cu;
    // 0x32873c: 0xc0ca1d8  jal         func_328760
    ctx->pc = 0x32873Cu;
    SET_GPR_U32(ctx, 31, 0x328744u);
    ctx->pc = 0x328760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328760u, 0x32873Cu, 0x328744u)) {
        return;
    }
    ctx->pc = 0x328744u;
label_328744:
    // 0x328744: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x328744u;
    {
        const bool branch_taken_0x328744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328744u;
        // 0x328748: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328744) {
            ctx->pc = 0x328758u;
            goto label_328758;
        }
    }
    ctx->pc = 0x32874Cu;
label_32874c:
    // 0x32874c: 0xc0c85e4  jal         func_321790
    ctx->pc = 0x32874Cu;
    SET_GPR_U32(ctx, 31, 0x328754u);
    ctx->pc = 0x321790u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321790u, 0x32874Cu, 0x328754u)) {
        return;
    }
    ctx->pc = 0x328754u;
label_328754:
    // 0x328754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x328754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_328758:
    // 0x328758: 0x3e00008  jr          $ra
    ctx->pc = 0x328758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328758u;
        // 0x32875c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328760u;
}
