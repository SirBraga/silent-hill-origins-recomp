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

// Function: sub_00219AC0
// Address: 0x219ac0 - 0x219af0
void sub_00219AC0_0x219ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219AC0_0x219ac0");
#endif

    switch (ctx->pc) {
        case 0x219adcu: goto label_219adc;
        default: break;
    }

    ctx->pc = 0x219ac0u;

    // 0x219ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x219ac4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x219ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x219ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x219accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x219ad0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x219ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ad4: 0xc0861fe  jal         func_2187F8
    ctx->pc = 0x219AD4u;
    SET_GPR_U32(ctx, 31, 0x219ADCu);
    ctx->pc = 0x219AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AD4u;
    // 0x219ad8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2187F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2187F8u, 0x219AD4u, 0x219ADCu)) {
        return;
    }
    ctx->pc = 0x219ADCu;
label_219adc:
    // 0x219adc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x219adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x219ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219ae4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x219ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x219AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AE8u;
        // 0x219aec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219AF0u;
}
