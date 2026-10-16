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

// Function: sub_0025E020
// Address: 0x25e020 - 0x25e050
void sub_0025E020_0x25e020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E020_0x25e020");
#endif

    switch (ctx->pc) {
        case 0x25e038u: goto label_25e038;
        default: break;
    }

    ctx->pc = 0x25e020u;

    // 0x25e020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25e020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25e024: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x25e024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e028: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25e028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25e02c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e030: 0xc097e6c  jal         func_25F9B0
    ctx->pc = 0x25E030u;
    SET_GPR_U32(ctx, 31, 0x25E038u);
    ctx->pc = 0x25E034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E030u;
    // 0x25e034: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25F9B0u, 0x25E030u, 0x25E038u)) {
        return;
    }
    ctx->pc = 0x25E038u;
label_25e038:
    // 0x25e038: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x25e038u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x25e03c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e040: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25e040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e044: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25e044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e048: 0x3e00008  jr          $ra
    ctx->pc = 0x25E048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E048u;
        // 0x25e04c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E050u;
}
