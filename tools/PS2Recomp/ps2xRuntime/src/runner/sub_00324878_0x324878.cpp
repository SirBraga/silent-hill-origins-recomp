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

// Function: sub_00324878
// Address: 0x324878 - 0x3248c8
void sub_00324878_0x324878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324878_0x324878");
#endif

    switch (ctx->pc) {
        case 0x324888u: goto label_324888;
        case 0x324898u: goto label_324898;
        default: break;
    }

    ctx->pc = 0x324878u;

    // 0x324878: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x324878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x32487c: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x32487Cu;
    {
        const bool branch_taken_0x32487c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32487c) {
            ctx->pc = 0x3248BCu;
            goto label_3248bc;
        }
    }
    ctx->pc = 0x324884u;
    // 0x324884: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x324884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_324888:
    // 0x324888: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x324888u;
    {
        const bool branch_taken_0x324888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x324888) {
            ctx->pc = 0x32488Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324888u;
            // 0x32488c: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3248B4u;
            goto label_3248b4;
        }
    }
    ctx->pc = 0x324890u;
    // 0x324890: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x324890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x324894: 0x0  nop
    ctx->pc = 0x324894u;
    // NOP
label_324898:
    // 0x324898: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x324898u;
    {
        const bool branch_taken_0x324898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x324898) {
            ctx->pc = 0x32489Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324898u;
            // 0x32489c: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3248A8u;
            goto label_3248a8;
        }
    }
    ctx->pc = 0x3248A0u;
    // 0x3248a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3248A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3248A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248A0u;
        // 0x3248a4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3248A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3248A8u;
label_3248a8:
    // 0x3248a8: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3248A8u;
    {
        const bool branch_taken_0x3248a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3248a8) {
            ctx->pc = 0x3248ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3248A8u;
            // 0x3248ac: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324898;
        }
    }
    ctx->pc = 0x3248B0u;
    // 0x3248b0: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x3248b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3248b4:
    // 0x3248b4: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3248B4u;
    {
        const bool branch_taken_0x3248b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3248b4) {
            ctx->pc = 0x3248B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3248B4u;
            // 0x3248b8: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324888;
        }
    }
    ctx->pc = 0x3248BCu;
label_3248bc:
    // 0x3248bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3248BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3248C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248BCu;
        // 0x3248c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3248BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3248C4u;
    // 0x3248c4: 0x0  nop
    ctx->pc = 0x3248c4u;
    // NOP
    ctx->pc = 0x3248c8u;
}
