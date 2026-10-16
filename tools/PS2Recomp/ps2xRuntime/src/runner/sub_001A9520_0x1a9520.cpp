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

// Function: sub_001A9520
// Address: 0x1a9520 - 0x1a9570
void sub_001A9520_0x1a9520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9520_0x1a9520");
#endif

    switch (ctx->pc) {
        case 0x1a9544u: goto label_1a9544;
        default: break;
    }

    ctx->pc = 0x1a9520u;

    // 0x1a9520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9524: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a9524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a9528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a9528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a952c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a952cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9534: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9538: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a9538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a953c: 0xc06a55c  jal         func_1A9570
    ctx->pc = 0x1A953Cu;
    SET_GPR_U32(ctx, 31, 0x1A9544u);
    ctx->pc = 0x1A9540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A953Cu;
    // 0x1a9540: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9570u, 0x1A953Cu, 0x1A9544u)) {
        return;
    }
    ctx->pc = 0x1A9544u;
label_1a9544:
    // 0x1a9544: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a954c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a954cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a9550: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a9550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a9554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9558: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1a9558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1a955c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1a955cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1a9560: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a9560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9564: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9564u;
        // 0x1a9568: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A956Cu;
    // 0x1a956c: 0x0  nop
    ctx->pc = 0x1a956cu;
    // NOP
    ctx->pc = 0x1a9570u;
}
