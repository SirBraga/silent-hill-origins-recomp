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

// Function: sub_001A53B8
// Address: 0x1a53b8 - 0x1a5408
void sub_001A53B8_0x1a53b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A53B8_0x1a53b8");
#endif

    switch (ctx->pc) {
        case 0x1a53e0u: goto label_1a53e0;
        default: break;
    }

    ctx->pc = 0x1a53b8u;

    // 0x1a53b8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1a53b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a53bc: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1a53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1a53c0: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x1a53c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1a53c4: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x1a53c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a53c8: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1a53c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1a53cc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a53ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a53d0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1a53d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1a53d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A53D4u;
    {
        const bool branch_taken_0x1a53d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53D4u;
        // 0x1a53d8: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a53d4) {
            ctx->pc = 0x1A5400u;
            goto label_1a5400;
        }
    }
    ctx->pc = 0x1A53DCu;
    // 0x1a53dc: 0x0  nop
    ctx->pc = 0x1a53dcu;
    // NOP
label_1a53e0:
    // 0x1a53e0: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1a53e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1a53e4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1a53e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1a53e8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1a53e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1a53ec: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1a53ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1a53f0: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1a53f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a53f4: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x1a53f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1a53f8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A53F8u;
    {
        const bool branch_taken_0x1a53f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A53FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53F8u;
        // 0x1a53fc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a53f8) {
            ctx->pc = 0x1A53E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a53e0;
        }
    }
    ctx->pc = 0x1A5400u;
label_1a5400:
    // 0x1a5400: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5400u;
        // 0x1a5404: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5408u;
}
