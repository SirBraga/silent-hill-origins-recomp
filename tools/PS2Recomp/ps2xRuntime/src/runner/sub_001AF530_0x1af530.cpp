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

// Function: sub_001AF530
// Address: 0x1af530 - 0x1af560
void sub_001AF530_0x1af530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF530_0x1af530");
#endif

    ctx->pc = 0x1af530u;

    // 0x1af530: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AF530u;
    {
        const bool branch_taken_0x1af530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af530) {
            ctx->pc = 0x1AF558u;
            goto label_1af558;
        }
    }
    ctx->pc = 0x1AF538u;
    // 0x1af538: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1af538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1af53c: 0xa0820250  sb          $v0, 0x250($a0)
    ctx->pc = 0x1af53cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1af540: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1af540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1af544: 0xa0830251  sb          $v1, 0x251($a0)
    ctx->pc = 0x1af544u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 593), (uint8_t)GPR_U32(ctx, 3));
    // 0x1af548: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x1af548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1af54c: 0xa0820252  sb          $v0, 0x252($a0)
    ctx->pc = 0x1af54cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 594), (uint8_t)GPR_U32(ctx, 2));
    // 0x1af550: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1af550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1af554: 0xa0830253  sb          $v1, 0x253($a0)
    ctx->pc = 0x1af554u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 595), (uint8_t)GPR_U32(ctx, 3));
label_1af558:
    // 0x1af558: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF560u;
}
