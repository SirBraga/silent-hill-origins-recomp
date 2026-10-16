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

// Function: sub_001A9910
// Address: 0x1a9910 - 0x1a9948
void sub_001A9910_0x1a9910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9910_0x1a9910");
#endif

    switch (ctx->pc) {
        case 0x1a9934u: goto label_1a9934;
        default: break;
    }

    ctx->pc = 0x1a9910u;

    // 0x1a9910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a9914: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1a9914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1a9918: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a9918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a991c: 0x2442b4f8  addiu       $v0, $v0, -0x4B08
    ctx->pc = 0x1a991cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948088));
    // 0x1a9920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9924: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a9924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9928: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1a9928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a992c: 0xc06a6e4  jal         func_1A9B90
    ctx->pc = 0x1A992Cu;
    SET_GPR_U32(ctx, 31, 0x1A9934u);
    ctx->pc = 0x1A9930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A992Cu;
    // 0x1a9930: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9B90u, 0x1A992Cu, 0x1A9934u)) {
        return;
    }
    ctx->pc = 0x1A9934u;
label_1a9934:
    // 0x1a9934: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a9934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a993c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a993cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9940: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9940u;
        // 0x1a9944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9948u;
}
