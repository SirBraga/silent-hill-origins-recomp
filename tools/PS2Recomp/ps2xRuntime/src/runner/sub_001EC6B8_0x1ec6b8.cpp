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

// Function: sub_001EC6B8
// Address: 0x1ec6b8 - 0x1ec6f8
void sub_001EC6B8_0x1ec6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC6B8_0x1ec6b8");
#endif

    switch (ctx->pc) {
        case 0x1ec6d4u: goto label_1ec6d4;
        case 0x1ec6dcu: goto label_1ec6dc;
        default: break;
    }

    ctx->pc = 0x1ec6b8u;

    // 0x1ec6b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec6bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ec6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec6c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ec6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ec6c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ec6c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ec6c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec6cc: 0xc07ab94  jal         func_1EAE50
    ctx->pc = 0x1EC6CCu;
    SET_GPR_U32(ctx, 31, 0x1EC6D4u);
    ctx->pc = 0x1EC6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC6CCu;
    // 0x1ec6d0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAE50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EAE50u, 0x1EC6CCu, 0x1EC6D4u)) {
        return;
    }
    ctx->pc = 0x1EC6D4u;
label_1ec6d4:
    // 0x1ec6d4: 0xc07ab0a  jal         func_1EAC28
    ctx->pc = 0x1EC6D4u;
    SET_GPR_U32(ctx, 31, 0x1EC6DCu);
    ctx->pc = 0x1EC6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC6D4u;
    // 0x1ec6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EAC28u, 0x1EC6D4u, 0x1EC6DCu)) {
        return;
    }
    ctx->pc = 0x1EC6DCu;
label_1ec6dc:
    // 0x1ec6dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ec6dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec6e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6E4u;
        // 0x1ec6e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC6ECu;
    // 0x1ec6ec: 0x0  nop
    ctx->pc = 0x1ec6ecu;
    // NOP
    // 0x1ec6f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ec6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ec6f4: 0x0  nop
    ctx->pc = 0x1ec6f4u;
    // NOP
    ctx->pc = 0x1ec6f8u;
}
