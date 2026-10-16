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

// Function: sub_001BE978
// Address: 0x1be978 - 0x1be9f0
void sub_001BE978_0x1be978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE978_0x1be978");
#endif

    switch (ctx->pc) {
        case 0x1be998u: goto label_1be998;
        case 0x1be9c8u: goto label_1be9c8;
        default: break;
    }

    ctx->pc = 0x1be978u;

    // 0x1be978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be97c: 0xac8500e0  sw          $a1, 0xE0($a0)
    ctx->pc = 0x1be97cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 5));
    // 0x1be980: 0xac8200dc  sw          $v0, 0xDC($a0)
    ctx->pc = 0x1be980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 2));
    // 0x1be984: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1BE984u;
    {
        const bool branch_taken_0x1be984 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE984u;
        // 0x1be988: 0xac8000e4  sw          $zero, 0xE4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be984) {
            ctx->pc = 0x1BE9BCu;
            goto label_1be9bc;
        }
    }
    ctx->pc = 0x1BE98Cu;
    // 0x1be98c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1be98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be990: 0x24830054  addiu       $v1, $a0, 0x54
    ctx->pc = 0x1be990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x1be994: 0x0  nop
    ctx->pc = 0x1be994u;
    // NOP
label_1be998:
    // 0x1be998: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1be998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1be99c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1be99cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1be9a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1be9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1be9a4: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x1be9a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1be9a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BE9A8u;
    {
        const bool branch_taken_0x1be9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9A8u;
        // 0x1be9ac: 0x2463002c  addiu       $v1, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be9a8) {
            ctx->pc = 0x1BE998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be998;
        }
    }
    ctx->pc = 0x1BE9B0u;
    // 0x1be9b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1be9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1be9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9B4u;
        // 0x1be9b8: 0xac820028  sw          $v0, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE9BCu;
label_1be9bc:
    // 0x1be9bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1be9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be9c0: 0x248200ac  addiu       $v0, $a0, 0xAC
    ctx->pc = 0x1be9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 172));
    // 0x1be9c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1be9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1be9c8:
    // 0x1be9c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1be9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1be9cc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1be9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1be9d0: 0x2442ffd4  addiu       $v0, $v0, -0x2C
    ctx->pc = 0x1be9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967252));
    // 0x1be9d4: 0x0  nop
    ctx->pc = 0x1be9d4u;
    // NOP
    // 0x1be9d8: 0x4a1fffb  bgez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BE9D8u;
    {
        const bool branch_taken_0x1be9d8 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1BE9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9D8u;
        // 0x1be9dc: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be9d8) {
            ctx->pc = 0x1BE9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be9c8;
        }
    }
    ctx->pc = 0x1BE9E0u;
    // 0x1be9e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1be9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1be9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9E4u;
        // 0x1be9e8: 0xac8200d8  sw          $v0, 0xD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE9ECu;
    // 0x1be9ec: 0x0  nop
    ctx->pc = 0x1be9ecu;
    // NOP
    ctx->pc = 0x1be9f0u;
}
