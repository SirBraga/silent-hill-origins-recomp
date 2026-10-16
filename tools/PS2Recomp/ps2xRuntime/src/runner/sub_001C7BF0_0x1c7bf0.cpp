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

// Function: sub_001C7BF0
// Address: 0x1c7bf0 - 0x1c7c30
void sub_001C7BF0_0x1c7bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7BF0_0x1c7bf0");
#endif

    switch (ctx->pc) {
        case 0x1c7c08u: goto label_1c7c08;
        default: break;
    }

    ctx->pc = 0x1c7bf0u;

    // 0x1c7bf0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c7bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c7bf4: 0x24840278  addiu       $a0, $a0, 0x278
    ctx->pc = 0x1c7bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 632));
    // 0x1c7bf8: 0x2446f3f0  addiu       $a2, $v0, -0xC10
    ctx->pc = 0x1c7bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964208));
    // 0x1c7bfc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c7bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7c00: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c7c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c7c04: 0x0  nop
    ctx->pc = 0x1c7c04u;
    // NOP
label_1c7c08:
    // 0x1c7c08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c7c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c7c0c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1c7c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1c7c10: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1c7c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c7c14: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1c7c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1c7c18: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1c7c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1c7c1c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c7c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1c7c20: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C7C20u;
    {
        const bool branch_taken_0x1c7c20 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1C7C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C20u;
        // 0x1c7c24: 0x2380b  movn        $a3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c20) {
            ctx->pc = 0x1C7C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7c08;
        }
    }
    ctx->pc = 0x1C7C28u;
    // 0x1c7c28: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C28u;
        // 0x1c7c2c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7C30u;
}
