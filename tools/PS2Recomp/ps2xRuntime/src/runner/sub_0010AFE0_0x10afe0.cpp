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

// Function: sub_0010AFE0
// Address: 0x10afe0 - 0x10b010
void sub_0010AFE0_0x10afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AFE0_0x10afe0");
#endif

    switch (ctx->pc) {
        case 0x10affcu: goto label_10affc;
        default: break;
    }

    ctx->pc = 0x10afe0u;

    // 0x10afe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10afe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10afe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10afe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10afe8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10afe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10afec: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x10afecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x10aff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10aff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10aff4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x10AFF4u;
    SET_GPR_U32(ctx, 31, 0x10AFFCu);
    ctx->pc = 0x10AFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AFF4u;
    // 0x10aff8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x10AFF4u, 0x10AFFCu)) {
        return;
    }
    ctx->pc = 0x10AFFCu;
label_10affc:
    // 0x10affc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10affcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b004: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10b004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b008: 0x3e00008  jr          $ra
    ctx->pc = 0x10B008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B008u;
        // 0x10b00c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B010u;
}
