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

// Function: sub_002EB630
// Address: 0x2eb630 - 0x2eb670
void sub_002EB630_0x2eb630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB630_0x2eb630");
#endif

    switch (ctx->pc) {
        case 0x2eb65cu: goto label_2eb65c;
        default: break;
    }

    ctx->pc = 0x2eb630u;

    // 0x2eb630: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2eb630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb634: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2eb634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eb638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eb63c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2eb63cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb640: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2eb640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb644: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2eb644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2eb648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eb648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eb64c: 0x2484e700  addiu       $a0, $a0, -0x1900
    ctx->pc = 0x2eb64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960896));
    // 0x2eb650: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2eb650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb654: 0xc0b67f4  jal         func_2D9FD0
    ctx->pc = 0x2EB654u;
    SET_GPR_U32(ctx, 31, 0x2EB65Cu);
    ctx->pc = 0x2EB658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB654u;
    // 0x2eb658: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9FD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9FD0u, 0x2EB654u, 0x2EB65Cu)) {
        return;
    }
    ctx->pc = 0x2EB65Cu;
label_2eb65c:
    // 0x2eb65c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eb65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb660: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB660u;
        // 0x2eb664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB668u;
    // 0x2eb668: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2eb668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2eb66c: 0x0  nop
    ctx->pc = 0x2eb66cu;
    // NOP
    ctx->pc = 0x2eb670u;
}
