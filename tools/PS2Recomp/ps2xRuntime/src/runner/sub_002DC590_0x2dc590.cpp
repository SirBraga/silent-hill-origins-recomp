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

// Function: sub_002DC590
// Address: 0x2dc590 - 0x2dc5d0
void sub_002DC590_0x2dc590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC590_0x2dc590");
#endif

    switch (ctx->pc) {
        case 0x2dc5a4u: goto label_2dc5a4;
        case 0x2dc5acu: goto label_2dc5ac;
        case 0x2dc5b8u: goto label_2dc5b8;
        case 0x2dc5c0u: goto label_2dc5c0;
        default: break;
    }

    ctx->pc = 0x2dc590u;

    // 0x2dc590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dc594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dc594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc59c: 0xc0b80e4  jal         func_2E0390
    ctx->pc = 0x2DC59Cu;
    SET_GPR_U32(ctx, 31, 0x2DC5A4u);
    ctx->pc = 0x2DC5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC59Cu;
    // 0x2dc5a0: 0xaf828bc4  sw          $v0, -0x743C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937540), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0390u, 0x2DC59Cu, 0x2DC5A4u)) {
        return;
    }
    ctx->pc = 0x2DC5A4u;
label_2dc5a4:
    // 0x2dc5a4: 0xc0b6a96  jal         func_2DAA58
    ctx->pc = 0x2DC5A4u;
    SET_GPR_U32(ctx, 31, 0x2DC5ACu);
    ctx->pc = 0x2DAA58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DAA58u, 0x2DC5A4u, 0x2DC5ACu)) {
        return;
    }
    ctx->pc = 0x2DC5ACu;
label_2dc5ac:
    // 0x2dc5ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc5b0: 0xc0b6a4a  jal         func_2DA928
    ctx->pc = 0x2DC5B0u;
    SET_GPR_U32(ctx, 31, 0x2DC5B8u);
    ctx->pc = 0x2DC5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC5B0u;
    // 0x2dc5b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA928u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DA928u, 0x2DC5B0u, 0x2DC5B8u)) {
        return;
    }
    ctx->pc = 0x2DC5B8u;
label_2dc5b8:
    // 0x2dc5b8: 0xc0b7dee  jal         func_2DF7B8
    ctx->pc = 0x2DC5B8u;
    SET_GPR_U32(ctx, 31, 0x2DC5C0u);
    ctx->pc = 0x2DF7B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF7B8u, 0x2DC5B8u, 0x2DC5C0u)) {
        return;
    }
    ctx->pc = 0x2DC5C0u;
label_2dc5c0:
    // 0x2dc5c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC5C4u;
        // 0x2dc5c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC5CCu;
    // 0x2dc5cc: 0x0  nop
    ctx->pc = 0x2dc5ccu;
    // NOP
    ctx->pc = 0x2dc5d0u;
}
