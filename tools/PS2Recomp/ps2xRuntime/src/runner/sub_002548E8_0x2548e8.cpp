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

// Function: sub_002548E8
// Address: 0x2548e8 - 0x254918
void sub_002548E8_0x2548e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002548E8_0x2548e8");
#endif

    switch (ctx->pc) {
        case 0x2548fcu: goto label_2548fc;
        default: break;
    }

    ctx->pc = 0x2548e8u;

    // 0x2548e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2548e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2548ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2548ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2548f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2548f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2548f4: 0xc095534  jal         func_2554D0
    ctx->pc = 0x2548F4u;
    SET_GPR_U32(ctx, 31, 0x2548FCu);
    ctx->pc = 0x2548F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2548F4u;
    // 0x2548f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2554D0u, 0x2548F4u, 0x2548FCu)) {
        return;
    }
    ctx->pc = 0x2548FCu;
label_2548fc:
    // 0x2548fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2548fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254904: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x254904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254908: 0x3e00008  jr          $ra
    ctx->pc = 0x254908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254908u;
        // 0x25490c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254910u;
    // 0x254910: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x254910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x254914: 0x0  nop
    ctx->pc = 0x254914u;
    // NOP
    ctx->pc = 0x254918u;
}
