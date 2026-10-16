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

// Function: sub_002A9C08
// Address: 0x2a9c08 - 0x2a9c38
void sub_002A9C08_0x2a9c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9C08_0x2a9c08");
#endif

    switch (ctx->pc) {
        case 0x2a9c1cu: goto label_2a9c1c;
        case 0x2a9c24u: goto label_2a9c24;
        default: break;
    }

    ctx->pc = 0x2a9c08u;

    // 0x2a9c08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9c0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a9c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a9c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a9c14: 0xc0aa70e  jal         func_2A9C38
    ctx->pc = 0x2A9C14u;
    SET_GPR_U32(ctx, 31, 0x2A9C1Cu);
    ctx->pc = 0x2A9C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9C14u;
    // 0x2a9c18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9C38u, 0x2A9C14u, 0x2A9C1Cu)) {
        return;
    }
    ctx->pc = 0x2A9C1Cu;
label_2a9c1c:
    // 0x2a9c1c: 0xc0ad2d0  jal         func_2B4B40
    ctx->pc = 0x2A9C1Cu;
    SET_GPR_U32(ctx, 31, 0x2A9C24u);
    ctx->pc = 0x2A9C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9C1Cu;
    // 0x2a9c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4B40u, 0x2A9C1Cu, 0x2A9C24u)) {
        return;
    }
    ctx->pc = 0x2A9C24u;
label_2a9c24:
    // 0x2a9c24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a9c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9c2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9c30: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C30u;
        // 0x2a9c34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9C38u;
}
