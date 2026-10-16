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

// Function: sub_0015D170
// Address: 0x15d170 - 0x15d1b0
void sub_0015D170_0x15d170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D170_0x15d170");
#endif

    switch (ctx->pc) {
        case 0x15d198u: goto label_15d198;
        default: break;
    }

    ctx->pc = 0x15d170u;

    // 0x15d170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15d170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15d174: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15d174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15d178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d17c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15d17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d180: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x15d180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d184: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D184u;
    {
        const bool branch_taken_0x15d184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D184u;
        // 0x15d188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d184) {
            ctx->pc = 0x15D1A0u;
            goto label_15d1a0;
        }
    }
    ctx->pc = 0x15D18Cu;
    // 0x15d18c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x15d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x15d190: 0xc059092  jal         func_164248
    ctx->pc = 0x15D190u;
    SET_GPR_U32(ctx, 31, 0x15D198u);
    ctx->pc = 0x15D194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D190u;
    // 0x15d194: 0x8c448668  lw          $a0, -0x7998($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x15D190u, 0x15D198u)) {
        return;
    }
    ctx->pc = 0x15D198u;
label_15d198:
    // 0x15d198: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15d198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15d19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d1a0:
    // 0x15d1a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15d1a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d1a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x15D1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1A8u;
        // 0x15d1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D1B0u;
}
