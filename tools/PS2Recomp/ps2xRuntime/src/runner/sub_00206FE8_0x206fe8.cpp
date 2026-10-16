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

// Function: sub_00206FE8
// Address: 0x206fe8 - 0x207010
void sub_00206FE8_0x206fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206FE8_0x206fe8");
#endif

    switch (ctx->pc) {
        case 0x207000u: goto label_207000;
        default: break;
    }

    ctx->pc = 0x206fe8u;

    // 0x206fe8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x206fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206fecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206ff0: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x206ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x206ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206ff8: 0xc09545a  jal         func_255168
    ctx->pc = 0x206FF8u;
    SET_GPR_U32(ctx, 31, 0x207000u);
    ctx->pc = 0x206FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206FF8u;
    // 0x206ffc: 0x24a56fc0  addiu       $a1, $a1, 0x6FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x206FF8u, 0x207000u)) {
        return;
    }
    ctx->pc = 0x207000u;
label_207000:
    // 0x207000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207004: 0x3e00008  jr          $ra
    ctx->pc = 0x207004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207004u;
        // 0x207008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20700Cu;
    // 0x20700c: 0x0  nop
    ctx->pc = 0x20700cu;
    // NOP
    ctx->pc = 0x207010u;
}
