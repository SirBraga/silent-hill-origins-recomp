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

// Function: sub_0031E708
// Address: 0x31e708 - 0x31e728
void sub_0031E708_0x31e708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E708_0x31e708");
#endif

    ctx->pc = 0x31e708u;

    // 0x31e708: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x31e708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x31e70c: 0x2482ffe0  addiu       $v0, $a0, -0x20
    ctx->pc = 0x31e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x31e710: 0x24a511d1  addiu       $a1, $a1, 0x11D1
    ctx->pc = 0x31e710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4561));
    // 0x31e714: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x31e714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31e718: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x31e718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31e71c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x31e71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x31e720: 0x3e00008  jr          $ra
    ctx->pc = 0x31E720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E720u;
        // 0x31e724: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E728u;
}
