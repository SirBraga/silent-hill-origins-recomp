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

// Function: sub_0013F508
// Address: 0x13f508 - 0x13f548
void sub_0013F508_0x13f508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F508_0x13f508");
#endif

    switch (ctx->pc) {
        case 0x13f524u: goto label_13f524;
        case 0x13f530u: goto label_13f530;
        default: break;
    }

    ctx->pc = 0x13f508u;

    // 0x13f508: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13f50c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13f50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13f510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13f514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13f514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f51c: 0xc040132  jal         func_1004C8
    ctx->pc = 0x13F51Cu;
    SET_GPR_U32(ctx, 31, 0x13F524u);
    ctx->pc = 0x13F520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F51Cu;
    // 0x13f520: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1004C8u, 0x13F51Cu, 0x13F524u)) {
        return;
    }
    ctx->pc = 0x13F524u;
label_13f524:
    // 0x13f524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f528: 0xc04fbf0  jal         func_13EFC0
    ctx->pc = 0x13F528u;
    SET_GPR_U32(ctx, 31, 0x13F530u);
    ctx->pc = 0x13F52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F528u;
    // 0x13f52c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EFC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13EFC0u, 0x13F528u, 0x13F530u)) {
        return;
    }
    ctx->pc = 0x13F530u;
label_13f530:
    // 0x13f530: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13f530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f534: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f53c: 0x3e00008  jr          $ra
    ctx->pc = 0x13F53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F53Cu;
        // 0x13f540: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F544u;
    // 0x13f544: 0x0  nop
    ctx->pc = 0x13f544u;
    // NOP
    ctx->pc = 0x13f548u;
}
