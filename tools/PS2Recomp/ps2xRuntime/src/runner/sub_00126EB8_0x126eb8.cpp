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

// Function: sub_00126EB8
// Address: 0x126eb8 - 0x126ef8
void sub_00126EB8_0x126eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126EB8_0x126eb8");
#endif

    switch (ctx->pc) {
        case 0x126ee0u: goto label_126ee0;
        default: break;
    }

    ctx->pc = 0x126eb8u;

    // 0x126eb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x126ebc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x126ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x126ec0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x126ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x126ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126ec8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x126ec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ecc: 0x8e240c00  lw          $a0, 0xC00($s1)
    ctx->pc = 0x126eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3072)));
    // 0x126ed0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x126ED0u;
    {
        const bool branch_taken_0x126ed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x126ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126ED0u;
        // 0x126ed4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ed0) {
            ctx->pc = 0x126EE0u;
            goto label_126ee0;
        }
    }
    ctx->pc = 0x126ED8u;
    // 0x126ed8: 0xc051d0e  jal         func_147438
    ctx->pc = 0x126ED8u;
    SET_GPR_U32(ctx, 31, 0x126EE0u);
    ctx->pc = 0x147438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x147438u, 0x126ED8u, 0x126EE0u)) {
        return;
    }
    ctx->pc = 0x126EE0u;
label_126ee0:
    // 0x126ee0: 0xae300cdc  sw          $s0, 0xCDC($s1)
    ctx->pc = 0x126ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3292), GPR_U32(ctx, 16));
    // 0x126ee4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x126ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x126ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x126EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EF0u;
        // 0x126ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126EF8u;
}
