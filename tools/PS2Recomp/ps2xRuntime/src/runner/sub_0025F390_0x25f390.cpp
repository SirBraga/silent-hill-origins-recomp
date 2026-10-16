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

// Function: sub_0025F390
// Address: 0x25f390 - 0x25f3a8
void sub_0025F390_0x25f390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F390_0x25f390");
#endif

    ctx->pc = 0x25f390u;

    // 0x25f390: 0x50e0ffe5  beql        $a3, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x25F390u;
    {
        const bool branch_taken_0x25f390 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f390) {
            ctx->pc = 0x25F394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F390u;
            // 0x25f394: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F328u;
            return;
        }
    }
    ctx->pc = 0x25F398u;
    // 0x25f398: 0x3e00008  jr          $ra
    ctx->pc = 0x25F398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F398u;
        // 0x25f39c: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F3A0u;
    // 0x25f3a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25f3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25f3a4: 0x0  nop
    ctx->pc = 0x25f3a4u;
    // NOP
    ctx->pc = 0x25f3a8u;
}
