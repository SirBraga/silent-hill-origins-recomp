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

// Function: sub_002768A8
// Address: 0x2768a8 - 0x2768f0
void sub_002768A8_0x2768a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002768A8_0x2768a8");
#endif

    switch (ctx->pc) {
        case 0x2768d4u: goto label_2768d4;
        default: break;
    }

    ctx->pc = 0x2768a8u;

    // 0x2768a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2768a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2768ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2768acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2768b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2768b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2768b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2768b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2768b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2768b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2768bc: 0x2258021  addu        $s0, $s1, $a1
    ctx->pc = 0x2768bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2768c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2768c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2768c4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2768C4u;
    {
        const bool branch_taken_0x2768c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2768C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2768C4u;
        // 0x2768c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2768c4) {
            ctx->pc = 0x2768DCu;
            goto label_2768dc;
        }
    }
    ctx->pc = 0x2768CCu;
    // 0x2768cc: 0xc09f5ac  jal         func_27D6B0
    ctx->pc = 0x2768CCu;
    SET_GPR_U32(ctx, 31, 0x2768D4u);
    ctx->pc = 0x27D6B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27D6B0u, 0x2768CCu, 0x2768D4u)) {
        return;
    }
    ctx->pc = 0x2768D4u;
label_2768d4:
    // 0x2768d4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2768d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2768d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2768d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2768dc:
    // 0x2768dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2768dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2768e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2768e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2768e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2768e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2768e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2768E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2768ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2768E8u;
        // 0x2768ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2768E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2768F0u;
}
