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

// Function: sub_00226528
// Address: 0x226528 - 0x226568
void sub_00226528_0x226528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226528_0x226528");
#endif

    switch (ctx->pc) {
        case 0x226554u: goto label_226554;
        default: break;
    }

    ctx->pc = 0x226528u;

    // 0x226528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22652c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22652cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x226530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226534: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x226534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226538: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x226538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x22653c: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x22653cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x226540: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x226540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x226544: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226544u;
    {
        const bool branch_taken_0x226544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226544u;
        // 0x226548: 0x26020050  addiu       $v0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226544) {
            ctx->pc = 0x226558u;
            goto label_226558;
        }
    }
    ctx->pc = 0x22654Cu;
    // 0x22654c: 0xc08a56c  jal         func_2295B0
    ctx->pc = 0x22654Cu;
    SET_GPR_U32(ctx, 31, 0x226554u);
    ctx->pc = 0x2295B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2295B0u, 0x22654Cu, 0x226554u)) {
        return;
    }
    ctx->pc = 0x226554u;
label_226554:
    // 0x226554: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x226554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_226558:
    // 0x226558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22655c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22655cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226560: 0x3e00008  jr          $ra
    ctx->pc = 0x226560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226560u;
        // 0x226564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226568u;
}
