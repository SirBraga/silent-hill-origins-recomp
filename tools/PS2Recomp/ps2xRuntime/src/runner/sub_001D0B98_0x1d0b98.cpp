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

// Function: sub_001D0B98
// Address: 0x1d0b98 - 0x1d0bf0
void sub_001D0B98_0x1d0b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0B98_0x1d0b98");
#endif

    switch (ctx->pc) {
        case 0x1d0bb8u: goto label_1d0bb8;
        case 0x1d0bd0u: goto label_1d0bd0;
        default: break;
    }

    ctx->pc = 0x1d0b98u;

    // 0x1d0b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0b9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d0b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d0ba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0ba4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D0BA4u;
    {
        const bool branch_taken_0x1d0ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BA4u;
        // 0x1d0ba8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ba4) {
            ctx->pc = 0x1D0BD8u;
            goto label_1d0bd8;
        }
    }
    ctx->pc = 0x1D0BACu;
    // 0x1d0bac: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d0bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d0bb0: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1D0BB0u;
    SET_GPR_U32(ctx, 31, 0x1D0BB8u);
    ctx->pc = 0x1D0BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0BB0u;
    // 0x1d0bb4: 0x24a50a88  addiu       $a1, $a1, 0xA88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1D0BB0u, 0x1D0BB8u)) {
        return;
    }
    ctx->pc = 0x1D0BB8u;
label_1d0bb8:
    // 0x1d0bb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0BB8u;
    {
        const bool branch_taken_0x1d0bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BB8u;
        // 0x1d0bbc: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0bb8) {
            ctx->pc = 0x1D0BDCu;
            goto label_1d0bdc;
        }
    }
    ctx->pc = 0x1D0BC0u;
    // 0x1d0bc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0bc4: 0x24c60bf0  addiu       $a2, $a2, 0xBF0
    ctx->pc = 0x1d0bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3056));
    // 0x1d0bc8: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D0BC8u;
    SET_GPR_U32(ctx, 31, 0x1D0BD0u);
    ctx->pc = 0x1D0BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0BC8u;
    // 0x1d0bcc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D0BC8u, 0x1D0BD0u)) {
        return;
    }
    ctx->pc = 0x1D0BD0u;
label_1d0bd0:
    // 0x1d0bd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0BD0u;
    {
        const bool branch_taken_0x1d0bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BD0u;
        // 0x1d0bd4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0bd0) {
            ctx->pc = 0x1D0BE0u;
            goto label_1d0be0;
        }
    }
    ctx->pc = 0x1D0BD8u;
label_1d0bd8:
    // 0x1d0bd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d0bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0bdc:
    // 0x1d0bdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d0bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0be0:
    // 0x1d0be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0be4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d0be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0be8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BE8u;
        // 0x1d0bec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0BF0u;
}
