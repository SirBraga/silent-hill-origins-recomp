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

// Function: sub_0012BCE0
// Address: 0x12bce0 - 0x12bd08
void sub_0012BCE0_0x12bce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BCE0_0x12bce0");
#endif

    switch (ctx->pc) {
        case 0x12bcf0u: goto label_12bcf0;
        default: break;
    }

    ctx->pc = 0x12bce0u;

    // 0x12bce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bce8: 0xc049b14  jal         func_126C50
    ctx->pc = 0x12BCE8u;
    SET_GPR_U32(ctx, 31, 0x12BCF0u);
    ctx->pc = 0x12BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BCE8u;
    // 0x12bcec: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126C50u, 0x12BCE8u, 0x12BCF0u)) {
        return;
    }
    ctx->pc = 0x12BCF0u;
label_12bcf0:
    // 0x12bcf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x12BCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCF4u;
        // 0x12bcf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BCFCu;
    // 0x12bcfc: 0x0  nop
    ctx->pc = 0x12bcfcu;
    // NOP
    // 0x12bd00: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x12bd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12bd04: 0x0  nop
    ctx->pc = 0x12bd04u;
    // NOP
    ctx->pc = 0x12bd08u;
}
