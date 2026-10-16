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

// Function: sub_00103208
// Address: 0x103208 - 0x103250
void sub_00103208_0x103208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103208_0x103208");
#endif

    switch (ctx->pc) {
        case 0x103220u: goto label_103220;
        default: break;
    }

    ctx->pc = 0x103208u;

    // 0x103208: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x103208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x10320c: 0x8c628280  lw          $v0, -0x7D80($v1)
    ctx->pc = 0x10320cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338280u));
    // 0x103210: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x103210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x103214: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x103214u;
    {
        const bool branch_taken_0x103214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103214u;
        // 0x103218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103214) {
            ctx->pc = 0x10323Cu;
            goto label_10323c;
        }
    }
    ctx->pc = 0x10321Cu;
    // 0x10321c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10321cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_103220:
    // 0x103220: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103220u;
    {
        const bool branch_taken_0x103220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x103220) {
            ctx->pc = 0x103224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103220u;
            // 0x103224: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103230u;
            goto label_103230;
        }
    }
    ctx->pc = 0x103228u;
    // 0x103228: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x103228u;
    {
        const bool branch_taken_0x103228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103228u;
        // 0x10322c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103228) {
            ctx->pc = 0x10323Cu;
            goto label_10323c;
        }
    }
    ctx->pc = 0x103230u;
label_103230:
    // 0x103230: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x103230u;
    {
        const bool branch_taken_0x103230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x103230) {
            ctx->pc = 0x103234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103230u;
            // 0x103234: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103220;
        }
    }
    ctx->pc = 0x103238u;
    // 0x103238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x103238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10323c:
    // 0x10323c: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x10323cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
    // 0x103240: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x103240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103244: 0x3e00008  jr          $ra
    ctx->pc = 0x103244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103244u;
        // 0x103248: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10324Cu;
    // 0x10324c: 0x0  nop
    ctx->pc = 0x10324cu;
    // NOP
    ctx->pc = 0x103250u;
}
