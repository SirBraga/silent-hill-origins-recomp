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

// Function: sub_0025B370
// Address: 0x25b370 - 0x25b3b0
void sub_0025B370_0x25b370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B370_0x25b370");
#endif

    switch (ctx->pc) {
        case 0x25b384u: goto label_25b384;
        default: break;
    }

    ctx->pc = 0x25b370u;

    // 0x25b370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25b370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25b374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25b374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b37c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x25B37Cu;
    SET_GPR_U32(ctx, 31, 0x25B384u);
    ctx->pc = 0x25B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B37Cu;
    // 0x25b380: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25AD00u, 0x25B37Cu, 0x25B384u)) {
        return;
    }
    ctx->pc = 0x25B384u;
label_25b384:
    // 0x25b384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b388: 0x3e00008  jr          $ra
    ctx->pc = 0x25B388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B388u;
        // 0x25b38c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B390u;
    // 0x25b390: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25b390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25b394: 0x0  nop
    ctx->pc = 0x25b394u;
    // NOP
    // 0x25b398: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25b398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25b39c: 0x0  nop
    ctx->pc = 0x25b39cu;
    // NOP
    // 0x25b3a0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x25b3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25b3a4: 0x0  nop
    ctx->pc = 0x25b3a4u;
    // NOP
    // 0x25b3a8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x25b3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3ac: 0x0  nop
    ctx->pc = 0x25b3acu;
    // NOP
    ctx->pc = 0x25b3b0u;
}
