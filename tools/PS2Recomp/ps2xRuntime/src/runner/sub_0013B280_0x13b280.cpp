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

// Function: sub_0013B280
// Address: 0x13b280 - 0x13b2a8
void sub_0013B280_0x13b280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B280_0x13b280");
#endif

    switch (ctx->pc) {
        case 0x13b294u: goto label_13b294;
        default: break;
    }

    ctx->pc = 0x13b280u;

    // 0x13b280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13b280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13b284: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13b284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13b288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13b28c: 0xc04aea4  jal         func_12BA90
    ctx->pc = 0x13B28Cu;
    SET_GPR_U32(ctx, 31, 0x13B294u);
    ctx->pc = 0x13B290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B28Cu;
    // 0x13b290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x12BA90u, 0x13B28Cu, 0x13B294u)) {
        return;
    }
    ctx->pc = 0x13B294u;
label_13b294:
    // 0x13b294: 0xae002db8  sw          $zero, 0x2DB8($s0)
    ctx->pc = 0x13b294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11704), GPR_U32(ctx, 0));
    // 0x13b298: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13b298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b29c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x13B2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B2A0u;
        // 0x13b2a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B2A8u;
}
