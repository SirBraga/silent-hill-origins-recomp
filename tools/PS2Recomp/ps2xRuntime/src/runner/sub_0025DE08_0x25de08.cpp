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

// Function: sub_0025DE08
// Address: 0x25de08 - 0x25de38
void sub_0025DE08_0x25de08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DE08_0x25de08");
#endif

    switch (ctx->pc) {
        case 0x25de24u: goto label_25de24;
        default: break;
    }

    ctx->pc = 0x25de08u;

    // 0x25de08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25de08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25de0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25de0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25de10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25de10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25de14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25de14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25de18: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x25de18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25de1c: 0xc0979fe  jal         func_25E7F8
    ctx->pc = 0x25DE1Cu;
    SET_GPR_U32(ctx, 31, 0x25DE24u);
    ctx->pc = 0x25DE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DE1Cu;
    // 0x25de20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E7F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7F8u, 0x25DE1Cu, 0x25DE24u)) {
        return;
    }
    ctx->pc = 0x25DE24u;
label_25de24:
    // 0x25de24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25de24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25de28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25de28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25de2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25de2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25de30: 0x3e00008  jr          $ra
    ctx->pc = 0x25DE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE30u;
        // 0x25de34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DE38u;
}
