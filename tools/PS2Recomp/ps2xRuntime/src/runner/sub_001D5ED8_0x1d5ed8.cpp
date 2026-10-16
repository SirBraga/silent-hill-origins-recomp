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

// Function: sub_001D5ED8
// Address: 0x1d5ed8 - 0x1d5f08
void sub_001D5ED8_0x1d5ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5ED8_0x1d5ed8");
#endif

    switch (ctx->pc) {
        case 0x1d5eecu: goto label_1d5eec;
        case 0x1d5ef8u: goto label_1d5ef8;
        default: break;
    }

    ctx->pc = 0x1d5ed8u;

    // 0x1d5ed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5edc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d5edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d5ee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5ee4: 0xc0758ba  jal         func_1D62E8
    ctx->pc = 0x1D5EE4u;
    SET_GPR_U32(ctx, 31, 0x1D5EECu);
    ctx->pc = 0x1D5EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EE4u;
    // 0x1d5ee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D62E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D62E8u, 0x1D5EE4u, 0x1D5EECu)) {
        return;
    }
    ctx->pc = 0x1D5EECu;
label_1d5eec:
    // 0x1d5eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ef0: 0xc0757c2  jal         func_1D5F08
    ctx->pc = 0x1D5EF0u;
    SET_GPR_U32(ctx, 31, 0x1D5EF8u);
    ctx->pc = 0x1D5EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EF0u;
    // 0x1d5ef4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5F08u, 0x1D5EF0u, 0x1D5EF8u)) {
        return;
    }
    ctx->pc = 0x1D5EF8u;
label_1d5ef8:
    // 0x1d5ef8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d5ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5efc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5f00: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F00u;
        // 0x1d5f04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5F08u;
}
