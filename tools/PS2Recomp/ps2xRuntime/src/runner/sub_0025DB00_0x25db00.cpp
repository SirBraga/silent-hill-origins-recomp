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

// Function: sub_0025DB00
// Address: 0x25db00 - 0x25db28
void sub_0025DB00_0x25db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DB00_0x25db00");
#endif

    switch (ctx->pc) {
        case 0x25db14u: goto label_25db14;
        default: break;
    }

    ctx->pc = 0x25db00u;

    // 0x25db00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25db04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25db04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25db08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25db08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25db0c: 0xc0975f2  jal         func_25D7C8
    ctx->pc = 0x25DB0Cu;
    SET_GPR_U32(ctx, 31, 0x25DB14u);
    ctx->pc = 0x25DB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DB0Cu;
    // 0x25db10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D7C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25D7C8u, 0x25DB0Cu, 0x25DB14u)) {
        return;
    }
    ctx->pc = 0x25DB14u;
label_25db14:
    // 0x25db14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25db14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25db18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25db1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25db1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25db20: 0x3e00008  jr          $ra
    ctx->pc = 0x25DB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB20u;
        // 0x25db24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DB28u;
}
