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

// Function: sub_0025D780
// Address: 0x25d780 - 0x25d7c0
void sub_0025D780_0x25d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D780_0x25d780");
#endif

    switch (ctx->pc) {
        case 0x25d7acu: goto label_25d7ac;
        default: break;
    }

    ctx->pc = 0x25d780u;

    // 0x25d780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25d780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25d784: 0x8f828600  lw          $v0, -0x7A00($gp)
    ctx->pc = 0x25d784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
    // 0x25d788: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25d788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25d78c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d790: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25d790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d794: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25d794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25d798: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x25d798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25d79c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D79Cu;
    {
        const bool branch_taken_0x25d79c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D79Cu;
        // 0x25d7a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d79c) {
            ctx->pc = 0x25D7B0u;
            goto label_25d7b0;
        }
    }
    ctx->pc = 0x25D7A4u;
    // 0x25d7a4: 0xc09795e  jal         func_25E578
    ctx->pc = 0x25D7A4u;
    SET_GPR_U32(ctx, 31, 0x25D7ACu);
    ctx->pc = 0x25D7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D7A4u;
    // 0x25d7a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E578u, 0x25D7A4u, 0x25D7ACu)) {
        return;
    }
    ctx->pc = 0x25D7ACu;
label_25d7ac:
    // 0x25d7ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25d7acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d7b0:
    // 0x25d7b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d7b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25d7b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x25D7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7B8u;
        // 0x25d7bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D7C0u;
}
