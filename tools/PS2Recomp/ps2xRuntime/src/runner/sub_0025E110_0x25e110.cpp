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

// Function: sub_0025E110
// Address: 0x25e110 - 0x25e140
void sub_0025E110_0x25e110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E110_0x25e110");
#endif

    switch (ctx->pc) {
        case 0x25e124u: goto label_25e124;
        case 0x25e130u: goto label_25e130;
        default: break;
    }

    ctx->pc = 0x25e110u;

    // 0x25e110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25e110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25e114: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25e114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25e118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e11c: 0xc097188  jal         func_25C620
    ctx->pc = 0x25E11Cu;
    SET_GPR_U32(ctx, 31, 0x25E124u);
    ctx->pc = 0x25E120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E11Cu;
    // 0x25e120: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C620u, 0x25E11Cu, 0x25E124u)) {
        return;
    }
    ctx->pc = 0x25E124u;
label_25e124:
    // 0x25e124: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x25e124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x25e128: 0xc096406  jal         func_259018
    ctx->pc = 0x25E128u;
    SET_GPR_U32(ctx, 31, 0x25E130u);
    ctx->pc = 0x25E12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E128u;
    // 0x25e12c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259018u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x259018u, 0x25E128u, 0x25E130u)) {
        return;
    }
    ctx->pc = 0x25E130u;
label_25e130:
    // 0x25e130: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25e130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e138: 0x3e00008  jr          $ra
    ctx->pc = 0x25E138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E138u;
        // 0x25e13c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E140u;
}
