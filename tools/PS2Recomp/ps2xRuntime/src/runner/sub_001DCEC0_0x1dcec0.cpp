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

// Function: sub_001DCEC0
// Address: 0x1dcec0 - 0x1dcf10
void sub_001DCEC0_0x1dcec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCEC0_0x1dcec0");
#endif

    ctx->pc = 0x1dcec0u;

    // 0x1dcec0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1dcec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcec4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1dcec4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcec8: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1dcec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1dcecc: 0x2442cc80  addiu       $v0, $v0, -0x3380
    ctx->pc = 0x1dceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954112));
    // 0x1dced0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCED0u;
    {
        const bool branch_taken_0x1dced0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCED0u;
        // 0x1dced4: 0xacc20048  sw          $v0, 0x48($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dced0) {
            ctx->pc = 0x1DCEE8u;
            goto label_1dcee8;
        }
    }
    ctx->pc = 0x1DCED8u;
    // 0x1dced8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1dced8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1dcedc: 0x244244b8  addiu       $v0, $v0, 0x44B8
    ctx->pc = 0x1dcedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17592));
    // 0x1dcee0: 0xacc20048  sw          $v0, 0x48($a2)
    ctx->pc = 0x1dcee0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 2));
    // 0x1dcee4: 0x0  nop
    ctx->pc = 0x1dcee4u;
    // NOP
label_1dcee8:
    // 0x1dcee8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1dcee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1dceec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1dceecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dcef0: 0x8c82e664  lw          $v0, -0x199C($a0)
    ctx->pc = 0x1dcef0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dcef4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1dcef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1dcef8: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1dcef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1dcefc: 0x8c83e664  lw          $v1, -0x199C($a0)
    ctx->pc = 0x1dcefcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dcf00: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1dcf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1dcf04: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF04u;
        // 0x1dcf08: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCF0Cu;
    // 0x1dcf0c: 0x0  nop
    ctx->pc = 0x1dcf0cu;
    // NOP
    ctx->pc = 0x1dcf10u;
}
