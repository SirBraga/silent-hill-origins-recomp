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

// Function: sub_00249E08
// Address: 0x249e08 - 0x249e30
void sub_00249E08_0x249e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249E08_0x249e08");
#endif

    switch (ctx->pc) {
        case 0x249e1cu: goto label_249e1c;
        default: break;
    }

    ctx->pc = 0x249e08u;

    // 0x249e08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x249e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x249e0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x249e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x249e10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249e14: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x249E14u;
    SET_GPR_U32(ctx, 31, 0x249E1Cu);
    ctx->pc = 0x249E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E14u;
    // 0x249e18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x249E14u, 0x249E1Cu)) {
        return;
    }
    ctx->pc = 0x249E1Cu;
label_249e1c:
    // 0x249e1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x249e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249e24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x249e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249e28: 0x3e00008  jr          $ra
    ctx->pc = 0x249E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E28u;
        // 0x249e2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249E30u;
}
