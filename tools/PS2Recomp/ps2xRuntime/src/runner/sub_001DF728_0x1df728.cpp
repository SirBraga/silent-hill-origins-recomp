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

// Function: sub_001DF728
// Address: 0x1df728 - 0x1df778
void sub_001DF728_0x1df728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF728_0x1df728");
#endif

    switch (ctx->pc) {
        case 0x1df760u: goto label_1df760;
        default: break;
    }

    ctx->pc = 0x1df728u;

    // 0x1df728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df72c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1df72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1df730: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DF730u;
    {
        const bool branch_taken_0x1df730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF730u;
        // 0x1df734: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df730) {
            ctx->pc = 0x1DF760u;
            goto label_1df760;
        }
    }
    ctx->pc = 0x1DF738u;
    // 0x1df738: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1df738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1df73c: 0x8c43e6c8  lw          $v1, -0x1938($v0)
    ctx->pc = 0x1df73cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E6C8u));
    // 0x1df740: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1df740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1df744: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1df744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1df748: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF748u;
    {
        const bool branch_taken_0x1df748 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1DF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF748u;
        // 0x1df74c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df748) {
            ctx->pc = 0x1DF764u;
            goto label_1df764;
        }
    }
    ctx->pc = 0x1DF750u;
    // 0x1df750: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1df750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1df754: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1df754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df758: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1DF758u;
    SET_GPR_U32(ctx, 31, 0x1DF760u);
    ctx->pc = 0x1DF75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF758u;
    // 0x1df75c: 0x24a5f9b0  addiu       $a1, $a1, -0x650 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2266F0u, 0x1DF758u, 0x1DF760u)) {
        return;
    }
    ctx->pc = 0x1DF760u;
label_1df760:
    // 0x1df760: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1df760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1df764:
    // 0x1df764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1df764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df768: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF768u;
        // 0x1df76c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF770u;
    // 0x1df770: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1df770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1df774: 0x0  nop
    ctx->pc = 0x1df774u;
    // NOP
    ctx->pc = 0x1df778u;
}
