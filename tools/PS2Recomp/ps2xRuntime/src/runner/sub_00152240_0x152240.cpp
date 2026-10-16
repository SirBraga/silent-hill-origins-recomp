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

// Function: sub_00152240
// Address: 0x152240 - 0x152278
void sub_00152240_0x152240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152240_0x152240");
#endif

    ctx->pc = 0x152240u;

    // 0x152240: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x152240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x152244: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x152244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x152248: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x152248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x15224c: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x15224cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x152250: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x152250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x152254: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x152254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x152258: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x152258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15225c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15225Cu;
    {
        const bool branch_taken_0x15225c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15225Cu;
        // 0x152260: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15225c) {
            ctx->pc = 0x15226Cu;
            goto label_15226c;
        }
    }
    ctx->pc = 0x152264u;
    // 0x152264: 0x30a20120  andi        $v0, $a1, 0x120
    ctx->pc = 0x152264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)288);
    // 0x152268: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x152268u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_15226c:
    // 0x15226c: 0x3e00008  jr          $ra
    ctx->pc = 0x15226Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15226Cu;
        // 0x152270: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15226Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152274u;
    // 0x152274: 0x0  nop
    ctx->pc = 0x152274u;
    // NOP
    ctx->pc = 0x152278u;
}
