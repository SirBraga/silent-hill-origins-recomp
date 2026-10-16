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

// Function: sub_001F7BF0
// Address: 0x1f7bf0 - 0x1f7c40
void sub_001F7BF0_0x1f7bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7BF0_0x1f7bf0");
#endif

    switch (ctx->pc) {
        case 0x1f7c10u: goto label_1f7c10;
        case 0x1f7c20u: goto label_1f7c20;
        case 0x1f7c2cu: goto label_1f7c2c;
        default: break;
    }

    ctx->pc = 0x1f7bf0u;

    // 0x1f7bf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f7bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f7bf4: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x1f7bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x1f7bf8: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x1f7bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x1f7bfc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1f7bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f7c00: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1f7c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1f7c04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f7c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f7c08: 0xc07dcca  jal         func_1F7328
    ctx->pc = 0x1F7C08u;
    SET_GPR_U32(ctx, 31, 0x1F7C10u);
    ctx->pc = 0x1F7C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7C08u;
    // 0x1f7c0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7328u, 0x1F7C08u, 0x1F7C10u)) {
        return;
    }
    ctx->pc = 0x1F7C10u;
label_1f7c10:
    // 0x1f7c10: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1f7c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f7c14: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1f7c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1f7c18: 0xc07dcca  jal         func_1F7328
    ctx->pc = 0x1F7C18u;
    SET_GPR_U32(ctx, 31, 0x1F7C20u);
    ctx->pc = 0x1F7C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7C18u;
    // 0x1f7c1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7328u, 0x1F7C18u, 0x1F7C20u)) {
        return;
    }
    ctx->pc = 0x1F7C20u;
label_1f7c20:
    // 0x1f7c20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f7c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7c24: 0xc07deb6  jal         func_1F7AD8
    ctx->pc = 0x1F7C24u;
    SET_GPR_U32(ctx, 31, 0x1F7C2Cu);
    ctx->pc = 0x1F7C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7C24u;
    // 0x1f7c28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7AD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7AD8u, 0x1F7C24u, 0x1F7C2Cu)) {
        return;
    }
    ctx->pc = 0x1F7C2Cu;
label_1f7c2c:
    // 0x1f7c2c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f7c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f7c30: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1f7c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7c34: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C34u;
        // 0x1f7c38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7C3Cu;
    // 0x1f7c3c: 0x0  nop
    ctx->pc = 0x1f7c3cu;
    // NOP
    ctx->pc = 0x1f7c40u;
}
