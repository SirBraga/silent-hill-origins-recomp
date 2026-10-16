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

// Function: sub_0017B550
// Address: 0x17b550 - 0x17b580
void sub_0017B550_0x17b550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B550_0x17b550");
#endif

    switch (ctx->pc) {
        case 0x17b56cu: goto label_17b56c;
        default: break;
    }

    ctx->pc = 0x17b550u;

    // 0x17b550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b558: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x17b558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x17b55c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B55Cu;
    {
        const bool branch_taken_0x17b55c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B55Cu;
        // 0x17b560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b55c) {
            ctx->pc = 0x17B56Cu;
            goto label_17b56c;
        }
    }
    ctx->pc = 0x17B564u;
    // 0x17b564: 0xc0814aa  jal         func_2052A8
    ctx->pc = 0x17B564u;
    SET_GPR_U32(ctx, 31, 0x17B56Cu);
    ctx->pc = 0x17B568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B564u;
    // 0x17b568: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2052A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2052A8u, 0x17B564u, 0x17B56Cu)) {
        return;
    }
    ctx->pc = 0x17B56Cu;
label_17b56c:
    // 0x17b56c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b574: 0x3e00008  jr          $ra
    ctx->pc = 0x17B574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B574u;
        // 0x17b578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B57Cu;
    // 0x17b57c: 0x0  nop
    ctx->pc = 0x17b57cu;
    // NOP
    ctx->pc = 0x17b580u;
}
