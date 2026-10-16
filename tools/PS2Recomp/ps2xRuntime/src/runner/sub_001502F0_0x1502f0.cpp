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

// Function: sub_001502F0
// Address: 0x1502f0 - 0x150318
void sub_001502F0_0x1502f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001502F0_0x1502f0");
#endif

    switch (ctx->pc) {
        case 0x15030cu: goto label_15030c;
        default: break;
    }

    ctx->pc = 0x1502f0u;

    // 0x1502f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1502f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1502f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1502f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1502f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1502f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1502fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1502FCu;
    {
        const bool branch_taken_0x1502fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x150300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1502FCu;
        // 0x150300: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1502fc) {
            ctx->pc = 0x15030Cu;
            goto label_15030c;
        }
    }
    ctx->pc = 0x150304u;
    // 0x150304: 0xc053c82  jal         func_14F208
    ctx->pc = 0x150304u;
    SET_GPR_U32(ctx, 31, 0x15030Cu);
    ctx->pc = 0x150308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150304u;
    // 0x150308: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F208u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14F208u, 0x150304u, 0x15030Cu)) {
        return;
    }
    ctx->pc = 0x15030Cu;
label_15030c:
    // 0x15030c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15030cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150310: 0x3e00008  jr          $ra
    ctx->pc = 0x150310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150310u;
        // 0x150314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150318u;
}
