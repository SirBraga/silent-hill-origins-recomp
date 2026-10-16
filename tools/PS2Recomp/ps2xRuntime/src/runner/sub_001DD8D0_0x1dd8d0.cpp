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

// Function: sub_001DD8D0
// Address: 0x1dd8d0 - 0x1dd908
void sub_001DD8D0_0x1dd8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD8D0_0x1dd8d0");
#endif

    switch (ctx->pc) {
        case 0x1dd8ecu: goto label_1dd8ec;
        default: break;
    }

    ctx->pc = 0x1dd8d0u;

    // 0x1dd8d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd8d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dd8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dd8d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd8dc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD8DCu;
    {
        const bool branch_taken_0x1dd8dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8DCu;
        // 0x1dd8e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8dc) {
            ctx->pc = 0x1DD8ECu;
            goto label_1dd8ec;
        }
    }
    ctx->pc = 0x1DD8E4u;
    // 0x1dd8e4: 0xc07727a  jal         func_1DC9E8
    ctx->pc = 0x1DD8E4u;
    SET_GPR_U32(ctx, 31, 0x1DD8ECu);
    ctx->pc = 0x1DD8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8E4u;
    // 0x1dd8e8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DC9E8u, 0x1DD8E4u, 0x1DD8ECu)) {
        return;
    }
    ctx->pc = 0x1DD8ECu;
label_1dd8ec:
    // 0x1dd8ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dd8ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd8f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dd8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8F8u;
        // 0x1dd8fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD900u;
    // 0x1dd900: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1dd900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dd904: 0x0  nop
    ctx->pc = 0x1dd904u;
    // NOP
    ctx->pc = 0x1dd908u;
}
