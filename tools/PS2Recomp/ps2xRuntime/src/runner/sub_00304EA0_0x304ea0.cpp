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

// Function: sub_00304EA0
// Address: 0x304ea0 - 0x304ee0
void sub_00304EA0_0x304ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304EA0_0x304ea0");
#endif

    switch (ctx->pc) {
        case 0x304eb8u: goto label_304eb8;
        default: break;
    }

    ctx->pc = 0x304ea0u;

    // 0x304ea0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x304ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x304ea4: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x304EA4u;
    {
        const bool branch_taken_0x304ea4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x304ea4) {
            ctx->pc = 0x304ED8u;
            goto label_304ed8;
        }
    }
    ctx->pc = 0x304EACu;
    // 0x304eac: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x304eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x304eb0: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x304EB0u;
    {
        const bool branch_taken_0x304eb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x304EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304EB0u;
        // 0x304eb4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304eb0) {
            ctx->pc = 0x304ED8u;
            goto label_304ed8;
        }
    }
    ctx->pc = 0x304EB8u;
label_304eb8:
    // 0x304eb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x304eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x304ebc: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x304EBCu;
    {
        const bool branch_taken_0x304ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x304EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304EBCu;
        // 0x304ec0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ebc) {
            ctx->pc = 0x304ECCu;
            goto label_304ecc;
        }
    }
    ctx->pc = 0x304EC4u;
    // 0x304ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x304EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304EC4u;
        // 0x304ec8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304ECCu;
label_304ecc:
    // 0x304ecc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x304eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x304ed0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x304ED0u;
    {
        const bool branch_taken_0x304ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304ED0u;
        // 0x304ed4: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ed0) {
            ctx->pc = 0x304EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304eb8;
        }
    }
    ctx->pc = 0x304ED8u;
label_304ed8:
    // 0x304ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x304ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304ED8u;
        // 0x304edc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304EE0u;
}
