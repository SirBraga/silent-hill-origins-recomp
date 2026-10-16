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

// Function: sub_0031FE98
// Address: 0x31fe98 - 0x31fed0
void sub_0031FE98_0x31fe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FE98_0x31fe98");
#endif

    ctx->pc = 0x31fe98u;

    // 0x31fe98: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x31FE98u;
    {
        const bool branch_taken_0x31fe98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE98u;
        // 0x31fe9c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe98) {
            ctx->pc = 0x31FEC4u;
            goto label_31fec4;
        }
    }
    ctx->pc = 0x31FEA0u;
    // 0x31fea0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x31fea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x31fea4: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x31fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x31fea8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x31fea8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31feac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x31feacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31feb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31feb4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x31feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x31feb8: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x31feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x31febc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x31febcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31fec0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31fec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_31fec4:
    // 0x31fec4: 0x3e00008  jr          $ra
    ctx->pc = 0x31FEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FECCu;
    // 0x31fecc: 0x0  nop
    ctx->pc = 0x31feccu;
    // NOP
    ctx->pc = 0x31fed0u;
}
