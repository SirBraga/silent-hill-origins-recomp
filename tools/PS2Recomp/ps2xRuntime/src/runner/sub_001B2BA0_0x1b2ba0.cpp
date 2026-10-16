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

// Function: sub_001B2BA0
// Address: 0x1b2ba0 - 0x1b2bd8
void sub_001B2BA0_0x1b2ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2BA0_0x1b2ba0");
#endif

    switch (ctx->pc) {
        case 0x1b2bc4u: goto label_1b2bc4;
        default: break;
    }

    ctx->pc = 0x1b2ba0u;

    // 0x1b2ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2ba4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1b2ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b2ba8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b2ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b2bac: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1b2bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b2bb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2bb8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1b2bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b2bbc: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x1B2BBCu;
    SET_GPR_U32(ctx, 31, 0x1B2BC4u);
    ctx->pc = 0x1B2BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2BBCu;
    // 0x1b2bc0: 0x24070504  addiu       $a3, $zero, 0x504 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x1B2BBCu, 0x1B2BC4u)) {
        return;
    }
    ctx->pc = 0x1B2BC4u;
label_1b2bc4:
    // 0x1b2bc4: 0xae020210  sw          $v0, 0x210($s0)
    ctx->pc = 0x1b2bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
    // 0x1b2bc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b2bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2bcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2BD0u;
        // 0x1b2bd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2BD8u;
}
