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

// Function: sub_001DE530
// Address: 0x1de530 - 0x1de578
void sub_001DE530_0x1de530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE530_0x1de530");
#endif

    switch (ctx->pc) {
        case 0x1de560u: goto label_1de560;
        default: break;
    }

    ctx->pc = 0x1de530u;

    // 0x1de530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de534: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1de534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1de538: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1de538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1de53c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de540: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de544: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1de544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1de548: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1de548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1de54c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1de550: 0x2465e4d8  addiu       $a1, $v1, -0x1B28
    ctx->pc = 0x1de550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960344));
    // 0x1de554: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1de554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1de558: 0xc09545a  jal         func_255168
    ctx->pc = 0x1DE558u;
    SET_GPR_U32(ctx, 31, 0x1DE560u);
    ctx->pc = 0x1DE55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE558u;
    // 0x1de55c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x1DE558u, 0x1DE560u)) {
        return;
    }
    ctx->pc = 0x1DE560u;
label_1de560:
    // 0x1de560: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1de560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de564: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de568: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1de568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de56c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE56Cu;
        // 0x1de570: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE574u;
    // 0x1de574: 0x0  nop
    ctx->pc = 0x1de574u;
    // NOP
    ctx->pc = 0x1de578u;
}
