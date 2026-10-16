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

// Function: sub_0025DE80
// Address: 0x25de80 - 0x25deb0
void sub_0025DE80_0x25de80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DE80_0x25de80");
#endif

    switch (ctx->pc) {
        case 0x25de9cu: goto label_25de9c;
        default: break;
    }

    ctx->pc = 0x25de80u;

    // 0x25de80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25de80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25de84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25de84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25de88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25de88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25de8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25de8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25de90: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x25de90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25de94: 0xc097910  jal         func_25E440
    ctx->pc = 0x25DE94u;
    SET_GPR_U32(ctx, 31, 0x25DE9Cu);
    ctx->pc = 0x25DE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DE94u;
    // 0x25de98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E440u, 0x25DE94u, 0x25DE9Cu)) {
        return;
    }
    ctx->pc = 0x25DE9Cu;
label_25de9c:
    // 0x25de9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25de9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25dea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25dea4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25dea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25dea8: 0x3e00008  jr          $ra
    ctx->pc = 0x25DEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEA8u;
        // 0x25deac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DEB0u;
}
