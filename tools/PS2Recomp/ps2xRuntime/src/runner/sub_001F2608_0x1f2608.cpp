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

// Function: sub_001F2608
// Address: 0x1f2608 - 0x1f2680
void sub_001F2608_0x1f2608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2608_0x1f2608");
#endif

    ctx->pc = 0x1f2608u;

    // 0x1f2608: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f2608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f260c: 0x8cc21d10  lw          $v0, 0x1D10($a2)
    ctx->pc = 0x1f260cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7440)));
    // 0x1f2610: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2610u;
    {
        const bool branch_taken_0x1f2610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2610u;
        // 0x1f2614: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2610) {
            ctx->pc = 0x1F2624u;
            goto label_1f2624;
        }
    }
    ctx->pc = 0x1F2618u;
    // 0x1f2618: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f2618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f261c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F261Cu;
    {
        const bool branch_taken_0x1f261c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F261Cu;
        // 0x1f2620: 0xacc21d10  sw          $v0, 0x1D10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 7440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f261c) {
            ctx->pc = 0x1F2640u;
            goto label_1f2640;
        }
    }
    ctx->pc = 0x1F2624u;
label_1f2624:
    // 0x1f2624: 0x8cc22714  lw          $v0, 0x2714($a2)
    ctx->pc = 0x1f2624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10004)));
    // 0x1f2628: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1f2628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1f262c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1f262cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f2630: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f2630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f2634: 0xacc22714  sw          $v0, 0x2714($a2)
    ctx->pc = 0x1f2634u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 10004), GPR_U32(ctx, 2));
    // 0x1f2638: 0x24631d14  addiu       $v1, $v1, 0x1D14
    ctx->pc = 0x1f2638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7444));
    // 0x1f263c: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x1f263cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f2640:
    // 0x1f2640: 0xaca6004c  sw          $a2, 0x4C($a1)
    ctx->pc = 0x1f2640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 6));
    // 0x1f2644: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1f2644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f2648: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1f2648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f264c: 0x8cc32718  lw          $v1, 0x2718($a2)
    ctx->pc = 0x1f264cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10008)));
    // 0x1f2650: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1f2650u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1f2654: 0xacc52718  sw          $a1, 0x2718($a2)
    ctx->pc = 0x1f2654u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 10008), GPR_U32(ctx, 5));
    // 0x1f2658: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1f2658u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1f265c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F265Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F265Cu;
        // 0x1f2660: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F265Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2664u;
    // 0x1f2664: 0x0  nop
    ctx->pc = 0x1f2664u;
    // NOP
    // 0x1f2668: 0x0  nop
    ctx->pc = 0x1f2668u;
    // NOP
    // 0x1f266c: 0x0  nop
    ctx->pc = 0x1f266cu;
    // NOP
    // 0x1f2670: 0x0  nop
    ctx->pc = 0x1f2670u;
    // NOP
    // 0x1f2674: 0x0  nop
    ctx->pc = 0x1f2674u;
    // NOP
    // 0x1f2678: 0x0  nop
    ctx->pc = 0x1f2678u;
    // NOP
    // 0x1f267c: 0x0  nop
    ctx->pc = 0x1f267cu;
    // NOP
    ctx->pc = 0x1f2680u;
}
