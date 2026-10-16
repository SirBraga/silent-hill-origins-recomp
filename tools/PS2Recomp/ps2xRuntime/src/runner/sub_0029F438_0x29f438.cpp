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

// Function: sub_0029F438
// Address: 0x29f438 - 0x29f468
void sub_0029F438_0x29f438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F438_0x29f438");
#endif

    switch (ctx->pc) {
        case 0x29f44cu: goto label_29f44c;
        default: break;
    }

    ctx->pc = 0x29f438u;

    // 0x29f438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29f438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29f43c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29f43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29f440: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29f440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29f444: 0xc0a8adc  jal         func_2A2B70
    ctx->pc = 0x29F444u;
    SET_GPR_U32(ctx, 31, 0x29F44Cu);
    ctx->pc = 0x29F448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F444u;
    // 0x29f448: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2B70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A2B70u, 0x29F444u, 0x29F44Cu)) {
        return;
    }
    ctx->pc = 0x29F44Cu;
label_29f44c:
    // 0x29f44c: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x29f44cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x29f450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29f450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f454: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29f454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29f458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f45c: 0x3e00008  jr          $ra
    ctx->pc = 0x29F45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F45Cu;
        // 0x29f460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F464u;
    // 0x29f464: 0x0  nop
    ctx->pc = 0x29f464u;
    // NOP
    ctx->pc = 0x29f468u;
}
