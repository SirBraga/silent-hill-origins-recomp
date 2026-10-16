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

// Function: sub_00214348
// Address: 0x214348 - 0x214370
void sub_00214348_0x214348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214348_0x214348");
#endif

    switch (ctx->pc) {
        case 0x214360u: goto label_214360;
        default: break;
    }

    ctx->pc = 0x214348u;

    // 0x214348: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x214348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21434c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21434cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214350: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x214350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214358: 0xc08495c  jal         func_212570
    ctx->pc = 0x214358u;
    SET_GPR_U32(ctx, 31, 0x214360u);
    ctx->pc = 0x21435Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214358u;
    // 0x21435c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212570u, 0x214358u, 0x214360u)) {
        return;
    }
    ctx->pc = 0x214360u;
label_214360:
    // 0x214360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214364: 0x3e00008  jr          $ra
    ctx->pc = 0x214364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214364u;
        // 0x214368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21436Cu;
    // 0x21436c: 0x0  nop
    ctx->pc = 0x21436cu;
    // NOP
    ctx->pc = 0x214370u;
}
