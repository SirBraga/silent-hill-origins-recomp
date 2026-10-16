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

// Function: sub_00194D28
// Address: 0x194d28 - 0x194d78
void sub_00194D28_0x194d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194D28_0x194d28");
#endif

    switch (ctx->pc) {
        case 0x194d48u: goto label_194d48;
        case 0x194d58u: goto label_194d58;
        case 0x194d68u: goto label_194d68;
        default: break;
    }

    ctx->pc = 0x194d28u;

    // 0x194d28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194d2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x194d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x194d34: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x194d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x194d38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x194d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194d40: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x194D40u;
    SET_GPR_U32(ctx, 31, 0x194D48u);
    ctx->pc = 0x194D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D40u;
    // 0x194d44: 0x2604003c  addiu       $a0, $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x194D40u, 0x194D48u)) {
        return;
    }
    ctx->pc = 0x194D48u;
label_194d48:
    // 0x194d48: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x194d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x194d4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d50: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x194D50u;
    SET_GPR_U32(ctx, 31, 0x194D58u);
    ctx->pc = 0x194D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D50u;
    // 0x194d54: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x194D50u, 0x194D58u)) {
        return;
    }
    ctx->pc = 0x194D58u;
label_194d58:
    // 0x194d58: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x194d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x194d5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d60: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x194D60u;
    SET_GPR_U32(ctx, 31, 0x194D68u);
    ctx->pc = 0x194D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D60u;
    // 0x194d64: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x194D60u, 0x194D68u)) {
        return;
    }
    ctx->pc = 0x194D68u;
label_194d68:
    // 0x194d68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x194d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194d70: 0x3e00008  jr          $ra
    ctx->pc = 0x194D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D70u;
        // 0x194d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194D78u;
}
