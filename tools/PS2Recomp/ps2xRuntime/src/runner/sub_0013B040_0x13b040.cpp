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

// Function: sub_0013B040
// Address: 0x13b040 - 0x13b088
void sub_0013B040_0x13b040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B040_0x13b040");
#endif

    switch (ctx->pc) {
        case 0x13b05cu: goto label_13b05c;
        case 0x13b068u: goto label_13b068;
        default: break;
    }

    ctx->pc = 0x13b040u;

    // 0x13b040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13b040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13b044: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13b044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b048: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13b048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13b04c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13b04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13b054: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x13B054u;
    SET_GPR_U32(ctx, 31, 0x13B05Cu);
    ctx->pc = 0x13B058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B054u;
    // 0x13b058: 0x24042dd0  addiu       $a0, $zero, 0x2DD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x13B054u, 0x13B05Cu)) {
        return;
    }
    ctx->pc = 0x13B05Cu;
label_13b05c:
    // 0x13b05c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13b05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b060: 0xc04ec24  jal         func_13B090
    ctx->pc = 0x13B060u;
    SET_GPR_U32(ctx, 31, 0x13B068u);
    ctx->pc = 0x13B064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B060u;
    // 0x13b064: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B090u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B090u, 0x13B060u, 0x13B068u)) {
        return;
    }
    ctx->pc = 0x13B068u;
label_13b068:
    // 0x13b068: 0x24430044  addiu       $v1, $v0, 0x44
    ctx->pc = 0x13b068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x13b06c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13b06cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b070: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x13b070u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x13b074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b078: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13b078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b07c: 0x3e00008  jr          $ra
    ctx->pc = 0x13B07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B07Cu;
        // 0x13b080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B084u;
    // 0x13b084: 0x0  nop
    ctx->pc = 0x13b084u;
    // NOP
    ctx->pc = 0x13b088u;
}
