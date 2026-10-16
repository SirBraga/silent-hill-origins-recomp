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

// Function: sub_00307258
// Address: 0x307258 - 0x307280
void sub_00307258_0x307258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307258_0x307258");
#endif

    ctx->pc = 0x307258u;

    // 0x307258: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x307258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30725c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x30725cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x307260: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x307260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x307264: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x307264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x307268: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x307268u;
    {
        const bool branch_taken_0x307268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307268u;
        // 0x30726c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307268) {
            ctx->pc = 0x307278u;
            goto label_307278;
        }
    }
    ctx->pc = 0x307270u;
    // 0x307270: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x307270u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x307274: 0x0  nop
    ctx->pc = 0x307274u;
    // NOP
label_307278:
    // 0x307278: 0x3e00008  jr          $ra
    ctx->pc = 0x307278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307280u;
}
