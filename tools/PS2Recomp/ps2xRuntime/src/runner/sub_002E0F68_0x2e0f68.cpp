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

// Function: sub_002E0F68
// Address: 0x2e0f68 - 0x2e0fb0
void sub_002E0F68_0x2e0f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0F68_0x2e0f68");
#endif

    switch (ctx->pc) {
        case 0x2e0f80u: goto label_2e0f80;
        default: break;
    }

    ctx->pc = 0x2e0f68u;

    // 0x2e0f68: 0x54042  srl         $t0, $a1, 1
    ctx->pc = 0x2e0f68u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2e0f6c: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E0F6Cu;
    {
        const bool branch_taken_0x2e0f6c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F6Cu;
        // 0x2e0f70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f6c) {
            ctx->pc = 0x2E0FA4u;
            goto label_2e0fa4;
        }
    }
    ctx->pc = 0x2E0F74u;
    // 0x2e0f74: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2e0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2e0f78: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2e0f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0f7c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2e0f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2e0f80:
    // 0x2e0f80: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2e0f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e0f84: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e0f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e0f88: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2e0f88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e0f8c: 0xe8202b  sltu        $a0, $a3, $t0
    ctx->pc = 0x2e0f8cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e0f90: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2e0f90u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e0f94: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2e0f94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e0f98: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e0f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e0f9c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2E0F9Cu;
    {
        const bool branch_taken_0x2e0f9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F9Cu;
        // 0x2e0fa0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f9c) {
            ctx->pc = 0x2E0F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0f80;
        }
    }
    ctx->pc = 0x2E0FA4u;
label_2e0fa4:
    // 0x2e0fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0FACu;
    // 0x2e0fac: 0x0  nop
    ctx->pc = 0x2e0facu;
    // NOP
    ctx->pc = 0x2e0fb0u;
}
