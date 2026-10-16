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

// Function: sub_0027F498
// Address: 0x27f498 - 0x27f4d8
void sub_0027F498_0x27f498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F498_0x27f498");
#endif

    switch (ctx->pc) {
        case 0x27f4c0u: goto label_27f4c0;
        default: break;
    }

    ctx->pc = 0x27f498u;

    // 0x27f498: 0x8f82880c  lw          $v0, -0x77F4($gp)
    ctx->pc = 0x27f498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936588)));
    // 0x27f49c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27f49cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27f4a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27f4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27f4a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27f4a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f4ac: 0xaf82880c  sw          $v0, -0x77F4($gp)
    ctx->pc = 0x27f4acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936588), GPR_U32(ctx, 2));
    // 0x27f4b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F4B0u;
    {
        const bool branch_taken_0x27f4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F4B0u;
        // 0x27f4b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f4b0) {
            ctx->pc = 0x27F4C0u;
            goto label_27f4c0;
        }
    }
    ctx->pc = 0x27F4B8u;
    // 0x27f4b8: 0xc09fd38  jal         func_27F4E0
    ctx->pc = 0x27F4B8u;
    SET_GPR_U32(ctx, 31, 0x27F4C0u);
    ctx->pc = 0x27F4E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27F4E0u, 0x27F4B8u, 0x27F4C0u)) {
        return;
    }
    ctx->pc = 0x27F4C0u;
label_27f4c0:
    // 0x27f4c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27f4c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f4c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f4c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27f4c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x27F4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F4CCu;
        // 0x27f4d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F4D4u;
    // 0x27f4d4: 0x0  nop
    ctx->pc = 0x27f4d4u;
    // NOP
    ctx->pc = 0x27f4d8u;
}
