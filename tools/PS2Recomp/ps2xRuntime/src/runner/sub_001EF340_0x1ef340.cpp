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

// Function: sub_001EF340
// Address: 0x1ef340 - 0x1ef368
void sub_001EF340_0x1ef340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF340_0x1ef340");
#endif

    switch (ctx->pc) {
        case 0x1ef354u: goto label_1ef354;
        case 0x1ef35cu: goto label_1ef35c;
        default: break;
    }

    ctx->pc = 0x1ef340u;

    // 0x1ef340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef344: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ef344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ef348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef34c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1EF34Cu;
    SET_GPR_U32(ctx, 31, 0x1EF354u);
    ctx->pc = 0x1EF350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF34Cu;
    // 0x1ef350: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1EF34Cu, 0x1EF354u)) {
        return;
    }
    ctx->pc = 0x1EF354u;
label_1ef354:
    // 0x1ef354: 0xc07bb3e  jal         func_1EECF8
    ctx->pc = 0x1EF354u;
    SET_GPR_U32(ctx, 31, 0x1EF35Cu);
    ctx->pc = 0x1EF358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF354u;
    // 0x1ef358: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EECF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EECF8u, 0x1EF354u, 0x1EF35Cu)) {
        return;
    }
    ctx->pc = 0x1EF35Cu;
label_1ef35c:
    // 0x1ef35c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef360: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF360u;
        // 0x1ef364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF368u;
}
