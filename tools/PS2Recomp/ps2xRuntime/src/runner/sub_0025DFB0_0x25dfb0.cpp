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

// Function: sub_0025DFB0
// Address: 0x25dfb0 - 0x25dfe0
void sub_0025DFB0_0x25dfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DFB0_0x25dfb0");
#endif

    switch (ctx->pc) {
        case 0x25dfc8u: goto label_25dfc8;
        default: break;
    }

    ctx->pc = 0x25dfb0u;

    // 0x25dfb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25dfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25dfb4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x25dfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dfb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25dfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25dfbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25dfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25dfc0: 0xc097d4e  jal         func_25F538
    ctx->pc = 0x25DFC0u;
    SET_GPR_U32(ctx, 31, 0x25DFC8u);
    ctx->pc = 0x25DFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DFC0u;
    // 0x25dfc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25F538u, 0x25DFC0u, 0x25DFC8u)) {
        return;
    }
    ctx->pc = 0x25DFC8u;
label_25dfc8:
    // 0x25dfc8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x25dfc8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x25dfcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25dfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25dfd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25dfd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dfd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25dfd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25dfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x25DFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFD8u;
        // 0x25dfdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DFE0u;
}
