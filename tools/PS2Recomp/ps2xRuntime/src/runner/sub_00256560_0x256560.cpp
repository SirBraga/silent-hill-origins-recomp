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

// Function: sub_00256560
// Address: 0x256560 - 0x256598
void sub_00256560_0x256560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256560_0x256560");
#endif

    ctx->pc = 0x256560u;

    // 0x256560: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x256560u;
    {
        const bool branch_taken_0x256560 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x256560) {
            ctx->pc = 0x256570u;
            goto label_256570;
        }
    }
    ctx->pc = 0x256568u;
    // 0x256568: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x256568u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25656c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x25656cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_256570:
    // 0x256570: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x256570u;
    {
        const bool branch_taken_0x256570 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x256570) {
            ctx->pc = 0x256580u;
            goto label_256580;
        }
    }
    ctx->pc = 0x256578u;
    // 0x256578: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x256578u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x25657c: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x25657cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_256580:
    // 0x256580: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256580u;
    {
        const bool branch_taken_0x256580 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x256580) {
            ctx->pc = 0x256590u;
            goto label_256590;
        }
    }
    ctx->pc = 0x256588u;
    // 0x256588: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x256588u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x25658c: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x25658cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
label_256590:
    // 0x256590: 0x3e00008  jr          $ra
    ctx->pc = 0x256590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256590u;
        // 0x256594: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256598u;
}
