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

// Function: sub_00125578
// Address: 0x125578 - 0x125590
void sub_00125578_0x125578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125578_0x125578");
#endif

    ctx->pc = 0x125578u;

    // 0x125578: 0x8c820b5c  lw          $v0, 0xB5C($a0)
    ctx->pc = 0x125578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2908)));
    // 0x12557c: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x12557cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x125580: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x125580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x125584: 0x3e00008  jr          $ra
    ctx->pc = 0x125584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125584u;
        // 0x125588: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12558Cu;
    // 0x12558c: 0x0  nop
    ctx->pc = 0x12558cu;
    // NOP
    ctx->pc = 0x125590u;
}
