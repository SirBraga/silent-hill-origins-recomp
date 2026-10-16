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

// Function: sub_001D97A8
// Address: 0x1d97a8 - 0x1d9810
void sub_001D97A8_0x1d97a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D97A8_0x1d97a8");
#endif

    switch (ctx->pc) {
        case 0x1d97d0u: goto label_1d97d0;
        case 0x1d97f8u: goto label_1d97f8;
        default: break;
    }

    ctx->pc = 0x1d97a8u;

    // 0x1d97a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d97a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d97ac: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d97acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d97b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d97b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d97b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1d97b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d97b8: 0x24508a6c  addiu       $s0, $v0, -0x7594
    ctx->pc = 0x1d97b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937196));
    // 0x1d97bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d97bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d97c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d97c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d97c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D97C4u;
    {
        const bool branch_taken_0x1d97c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97C4u;
        // 0x1d97c8: 0x2603fffc  addiu       $v1, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97c4) {
            ctx->pc = 0x1D97D8u;
            goto label_1d97d8;
        }
    }
    ctx->pc = 0x1D97CCu;
    // 0x1d97cc: 0x0  nop
    ctx->pc = 0x1d97ccu;
    // NOP
label_1d97d0:
    // 0x1d97d0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1d97d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d97d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d97d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d97d8:
    // 0x1d97d8: 0x2ca20040  sltiu       $v0, $a1, 0x40
    ctx->pc = 0x1d97d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1d97dc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D97DCu;
    {
        const bool branch_taken_0x1d97dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d97dc) {
            ctx->pc = 0x1D97E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D97DCu;
            // 0x1d97e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9800u;
            goto label_1d9800;
        }
    }
    ctx->pc = 0x1D97E4u;
    // 0x1d97e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d97e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d97e8: 0x5486fff9  bnel        $a0, $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D97E8u;
    {
        const bool branch_taken_0x1d97e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x1d97e8) {
            ctx->pc = 0x1D97ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D97E8u;
            // 0x1d97ec: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D97D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d97d0;
        }
    }
    ctx->pc = 0x1D97F0u;
    // 0x1d97f0: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x1D97F0u;
    SET_GPR_U32(ctx, 31, 0x1D97F8u);
    ctx->pc = 0x1D97F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D97F0u;
    // 0x1d97f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1E70u, 0x1D97F0u, 0x1D97F8u)) {
        return;
    }
    ctx->pc = 0x1D97F8u;
label_1d97f8:
    // 0x1d97f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1d97f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1d97fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d97fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d9800:
    // 0x1d9800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9804: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9804u;
        // 0x1d9808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D980Cu;
    // 0x1d980c: 0x0  nop
    ctx->pc = 0x1d980cu;
    // NOP
    ctx->pc = 0x1d9810u;
}
