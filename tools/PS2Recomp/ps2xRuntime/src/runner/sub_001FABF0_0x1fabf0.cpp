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

// Function: sub_001FABF0
// Address: 0x1fabf0 - 0x1fac18
void sub_001FABF0_0x1fabf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FABF0_0x1fabf0");
#endif

    ctx->pc = 0x1fabf0u;

    // 0x1fabf0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FABF0u;
    {
        const bool branch_taken_0x1fabf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABF0u;
        // 0x1fabf4: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fabf0) {
            ctx->pc = 0x1FAC0Cu;
            goto label_1fac0c;
        }
    }
    ctx->pc = 0x1FABF8u;
    // 0x1fabf8: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x1fabf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x1fabfc: 0x24422e50  addiu       $v0, $v0, 0x2E50
    ctx->pc = 0x1fabfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11856));
    // 0x1fac00: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fac00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fac04: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fac04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1fac08: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1fac08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1fac0c:
    // 0x1fac0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAC14u;
    // 0x1fac14: 0x0  nop
    ctx->pc = 0x1fac14u;
    // NOP
    ctx->pc = 0x1fac18u;
}
