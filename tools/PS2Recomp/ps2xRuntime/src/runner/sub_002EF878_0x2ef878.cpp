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

// Function: sub_002EF878
// Address: 0x2ef878 - 0x2ef8b0
void sub_002EF878_0x2ef878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF878_0x2ef878");
#endif

    switch (ctx->pc) {
        case 0x2ef89cu: goto label_2ef89c;
        default: break;
    }

    ctx->pc = 0x2ef878u;

    // 0x2ef878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ef878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ef87c: 0x8f8290a8  lw          $v0, -0x6F58($gp)
    ctx->pc = 0x2ef87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938792)));
    // 0x2ef880: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ef880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ef884: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ef884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef888: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ef888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef88c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ef890: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x2ef890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ef894: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2EF894u;
    SET_GPR_U32(ctx, 31, 0x2EF89Cu);
    ctx->pc = 0x2EF898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF894u;
    // 0x2ef898: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2EF894u, 0x2EF89Cu)) {
        return;
    }
    ctx->pc = 0x2EF89Cu;
label_2ef89c:
    // 0x2ef89c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ef89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef8a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ef8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8A8u;
        // 0x2ef8ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF8B0u;
}
