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

// Function: sub_001A97D8
// Address: 0x1a97d8 - 0x1a9838
void sub_001A97D8_0x1a97d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A97D8_0x1a97d8");
#endif

    switch (ctx->pc) {
        case 0x1a97f0u: goto label_1a97f0;
        default: break;
    }

    ctx->pc = 0x1a97d8u;

    // 0x1a97d8: 0x94a60000  lhu         $a2, 0x0($a1)
    ctx->pc = 0x1a97d8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a97dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a97dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a97e0: 0x10c20013  beq         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A97E0u;
    {
        const bool branch_taken_0x1a97e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A97E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97E0u;
        // 0x1a97e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a97e0) {
            ctx->pc = 0x1A9830u;
            goto label_1a9830;
        }
    }
    ctx->pc = 0x1A97E8u;
    // 0x1a97e8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x1a97e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x1a97ec: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x1a97ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1a97f0:
    // 0x1a97f0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1a97f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1a97f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a97f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a97f8: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x1a97f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a97fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a97fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9800: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a9800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a9804: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x1a9804u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1a9808: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1a9808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1a980c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1a980cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a9810: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1a9810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1a9814: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a9814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a9818: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x1a9818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x1a981c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1a981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1a9820: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a9820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9824: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a9824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a9828: 0x14c8fff1  bne         $a2, $t0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1A9828u;
    {
        const bool branch_taken_0x1a9828 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x1A982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9828u;
        // 0x1a982c: 0xaca20018  sw          $v0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9828) {
            ctx->pc = 0x1A97F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a97f0;
        }
    }
    ctx->pc = 0x1A9830u;
label_1a9830:
    // 0x1a9830: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9838u;
}
