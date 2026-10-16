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

// Function: sub_00174348
// Address: 0x174348 - 0x174380
void sub_00174348_0x174348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174348_0x174348");
#endif

    switch (ctx->pc) {
        case 0x174370u: goto label_174370;
        default: break;
    }

    ctx->pc = 0x174348u;

    // 0x174348: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x174348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17434c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17434cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174350: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x174350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x174354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174358: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x174358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17435c: 0x8c840070  lw          $a0, 0x70($a0)
    ctx->pc = 0x17435cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x174360: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174360u;
    {
        const bool branch_taken_0x174360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x174364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174360u;
        // 0x174364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174360) {
            ctx->pc = 0x174370u;
            goto label_174370;
        }
    }
    ctx->pc = 0x174368u;
    // 0x174368: 0xc095596  jal         func_255658
    ctx->pc = 0x174368u;
    SET_GPR_U32(ctx, 31, 0x174370u);
    ctx->pc = 0x255658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255658u, 0x174368u, 0x174370u)) {
        return;
    }
    ctx->pc = 0x174370u;
label_174370:
    // 0x174370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174374: 0x3e00008  jr          $ra
    ctx->pc = 0x174374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174374u;
        // 0x174378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17437Cu;
    // 0x17437c: 0x0  nop
    ctx->pc = 0x17437cu;
    // NOP
    ctx->pc = 0x174380u;
}
