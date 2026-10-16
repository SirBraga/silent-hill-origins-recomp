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

// Function: sub_001D1018
// Address: 0x1d1018 - 0x1d1050
void sub_001D1018_0x1d1018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1018_0x1d1018");
#endif

    switch (ctx->pc) {
        case 0x1d1028u: goto label_1d1028;
        case 0x1d1030u: goto label_1d1030;
        case 0x1d1038u: goto label_1d1038;
        case 0x1d1044u: goto label_1d1044;
        default: break;
    }

    ctx->pc = 0x1d1018u;

    // 0x1d1018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d101c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d101cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1020: 0xc07d248  jal         func_1F4920
    ctx->pc = 0x1D1020u;
    SET_GPR_U32(ctx, 31, 0x1D1028u);
    ctx->pc = 0x1F4920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4920u, 0x1D1020u, 0x1D1028u)) {
        return;
    }
    ctx->pc = 0x1D1028u;
label_1d1028:
    // 0x1d1028: 0xc05f916  jal         func_17E458
    ctx->pc = 0x1D1028u;
    SET_GPR_U32(ctx, 31, 0x1D1030u);
    ctx->pc = 0x17E458u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E458u, 0x1D1028u, 0x1D1030u)) {
        return;
    }
    ctx->pc = 0x1D1030u;
label_1d1030:
    // 0x1d1030: 0xc05fd44  jal         func_17F510
    ctx->pc = 0x1D1030u;
    SET_GPR_U32(ctx, 31, 0x1D1038u);
    ctx->pc = 0x17F510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F510u, 0x1D1030u, 0x1D1038u)) {
        return;
    }
    ctx->pc = 0x1D1038u;
label_1d1038:
    // 0x1d1038: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d1038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d103c: 0xc073e5e  jal         func_1CF978
    ctx->pc = 0x1D103Cu;
    SET_GPR_U32(ctx, 31, 0x1D1044u);
    ctx->pc = 0x1D1040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D103Cu;
    // 0x1d1040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CF978u, 0x1D103Cu, 0x1D1044u)) {
        return;
    }
    ctx->pc = 0x1D1044u;
label_1d1044:
    // 0x1d1044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1048: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1048u;
        // 0x1d104c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1050u;
}
