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

// Function: sub_002F1CA0
// Address: 0x2f1ca0 - 0x2f1d10
void sub_002F1CA0_0x2f1ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1CA0_0x2f1ca0");
#endif

    switch (ctx->pc) {
        case 0x2f1cb8u: goto label_2f1cb8;
        case 0x2f1cc8u: goto label_2f1cc8;
        case 0x2f1cd0u: goto label_2f1cd0;
        case 0x2f1cecu: goto label_2f1cec;
        default: break;
    }

    ctx->pc = 0x2f1ca0u;

    // 0x2f1ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1ca4: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x2f1ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2f1ca8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f1ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f1cac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f1cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f1cb0: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x2F1CB0u;
    SET_GPR_U32(ctx, 31, 0x2F1CB8u);
    ctx->pc = 0x2F1CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1CB0u;
    // 0x2f1cb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x2F1CB0u, 0x2F1CB8u)) {
        return;
    }
    ctx->pc = 0x2F1CB8u;
label_2f1cb8:
    // 0x2f1cb8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F1CB8u;
    {
        const bool branch_taken_0x2f1cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1CB8u;
        // 0x2f1cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1cb8) {
            ctx->pc = 0x2F1CE4u;
            goto label_2f1ce4;
        }
    }
    ctx->pc = 0x2F1CC0u;
    // 0x2f1cc0: 0xc0c5d08  jal         func_317420
    ctx->pc = 0x2F1CC0u;
    SET_GPR_U32(ctx, 31, 0x2F1CC8u);
    ctx->pc = 0x2F1CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1CC0u;
    // 0x2f1cc4: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317420u, 0x2F1CC0u, 0x2F1CC8u)) {
        return;
    }
    ctx->pc = 0x2F1CC8u;
label_2f1cc8:
    // 0x2f1cc8: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x2F1CC8u;
    SET_GPR_U32(ctx, 31, 0x2F1CD0u);
    ctx->pc = 0x2F1CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1CC8u;
    // 0x2f1ccc: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x2F1CC8u, 0x2F1CD0u)) {
        return;
    }
    ctx->pc = 0x2F1CD0u;
label_2f1cd0:
    // 0x2f1cd0: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x2f1cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2f1cd4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1CD4u;
    {
        const bool branch_taken_0x2f1cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1CD4u;
        // 0x2f1cd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1cd4) {
            ctx->pc = 0x2F1CFCu;
            goto label_2f1cfc;
        }
    }
    ctx->pc = 0x2F1CDCu;
    // 0x2f1cdc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F1CDCu;
    {
        const bool branch_taken_0x2f1cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1CDCu;
        // 0x2f1ce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1cdc) {
            ctx->pc = 0x2F1CFCu;
            goto label_2f1cfc;
        }
    }
    ctx->pc = 0x2F1CE4u;
label_2f1ce4:
    // 0x2f1ce4: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x2F1CE4u;
    SET_GPR_U32(ctx, 31, 0x2F1CECu);
    ctx->pc = 0x2F1CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1CE4u;
    // 0x2f1ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x2F1CE4u, 0x2F1CECu)) {
        return;
    }
    ctx->pc = 0x2F1CECu;
label_2f1cec:
    // 0x2f1cec: 0x2c430020  sltiu       $v1, $v0, 0x20
    ctx->pc = 0x2f1cecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2f1cf0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F1CF0u;
    {
        const bool branch_taken_0x2f1cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1CF0u;
        // 0x2f1cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1cf0) {
            ctx->pc = 0x2F1CFCu;
            goto label_2f1cfc;
        }
    }
    ctx->pc = 0x2F1CF8u;
    // 0x2f1cf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f1cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1cfc:
    // 0x2f1cfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f1cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1d04: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D04u;
        // 0x2f1d08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1D0Cu;
    // 0x2f1d0c: 0x0  nop
    ctx->pc = 0x2f1d0cu;
    // NOP
    ctx->pc = 0x2f1d10u;
}
