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

// Function: sub_00204CC0
// Address: 0x204cc0 - 0x204d00
void sub_00204CC0_0x204cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204CC0_0x204cc0");
#endif

    switch (ctx->pc) {
        case 0x204cd8u: goto label_204cd8;
        case 0x204cecu: goto label_204cec;
        default: break;
    }

    ctx->pc = 0x204cc0u;

    // 0x204cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x204cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x204cc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x204cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x204cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204ccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x204cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204cd0: 0xc07f85c  jal         func_1FE170
    ctx->pc = 0x204CD0u;
    SET_GPR_U32(ctx, 31, 0x204CD8u);
    ctx->pc = 0x204CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204CD0u;
    // 0x204cd4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE170u, 0x204CD0u, 0x204CD8u)) {
        return;
    }
    ctx->pc = 0x204CD8u;
label_204cd8:
    // 0x204cd8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x204cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x204cdc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x204CDCu;
    {
        const bool branch_taken_0x204cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x204cdc) {
            ctx->pc = 0x204CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204CDCu;
            // 0x204ce0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204CF0u;
            goto label_204cf0;
        }
    }
    ctx->pc = 0x204CE4u;
    // 0x204ce4: 0xc080e52  jal         func_203948
    ctx->pc = 0x204CE4u;
    SET_GPR_U32(ctx, 31, 0x204CECu);
    ctx->pc = 0x204CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204CE4u;
    // 0x204ce8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203948u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203948u, 0x204CE4u, 0x204CECu)) {
        return;
    }
    ctx->pc = 0x204CECu;
label_204cec:
    // 0x204cec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x204cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_204cf0:
    // 0x204cf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x204CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CF4u;
        // 0x204cf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204CFCu;
    // 0x204cfc: 0x0  nop
    ctx->pc = 0x204cfcu;
    // NOP
    ctx->pc = 0x204d00u;
}
