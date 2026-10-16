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

// Function: sub_002DC6C8
// Address: 0x2dc6c8 - 0x2dc6f0
void sub_002DC6C8_0x2dc6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC6C8_0x2dc6c8");
#endif

    ctx->pc = 0x2dc6c8u;

    // 0x2dc6c8: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x2dc6c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2dc6cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC6CCu;
    {
        const bool branch_taken_0x2dc6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC6CCu;
        // 0x2dc6d0: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc6cc) {
            ctx->pc = 0x2DC6E0u;
            goto label_2dc6e0;
        }
    }
    ctx->pc = 0x2DC6D4u;
    // 0x2dc6d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2dc6d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC6D8u;
        // 0x2dc6dc: 0xaf849018  sw          $a0, -0x6FE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938648), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC6E0u;
label_2dc6e0:
    // 0x2dc6e0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2dc6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2dc6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC6E4u;
        // 0x2dc6e8: 0xaf839018  sw          $v1, -0x6FE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938648), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC6ECu;
    // 0x2dc6ec: 0x0  nop
    ctx->pc = 0x2dc6ecu;
    // NOP
    ctx->pc = 0x2dc6f0u;
}
