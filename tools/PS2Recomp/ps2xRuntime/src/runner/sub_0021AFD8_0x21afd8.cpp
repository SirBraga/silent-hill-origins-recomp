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

// Function: sub_0021AFD8
// Address: 0x21afd8 - 0x21b060
void sub_0021AFD8_0x21afd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AFD8_0x21afd8");
#endif

    switch (ctx->pc) {
        case 0x21afe0u: goto label_21afe0;
        case 0x21b010u: goto label_21b010;
        case 0x21b020u: goto label_21b020;
        case 0x21b040u: goto label_21b040;
        default: break;
    }

    ctx->pc = 0x21afd8u;

    // 0x21afd8: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AFD8u;
    {
        const bool branch_taken_0x21afd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x21afd8) {
            ctx->pc = 0x21AFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AFD8u;
            // 0x21afdc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AFE8u;
            goto label_21afe8;
        }
    }
    ctx->pc = 0x21AFE0u;
label_21afe0:
    // 0x21afe0: 0x3e00008  jr          $ra
    ctx->pc = 0x21AFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFE0u;
        // 0x21afe4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AFE8u;
label_21afe8:
    // 0x21afe8: 0x0  nop
    ctx->pc = 0x21afe8u;
    // NOP
    // 0x21afec: 0x0  nop
    ctx->pc = 0x21afecu;
    // NOP
    // 0x21aff0: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21AFF0u;
    {
        const bool branch_taken_0x21aff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aff0) {
            ctx->pc = 0x21AFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21afe0;
        }
    }
    ctx->pc = 0x21AFF8u;
    // 0x21aff8: 0x1445000d  bne         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x21AFF8u;
    {
        const bool branch_taken_0x21aff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x21AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFF8u;
        // 0x21affc: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aff8) {
            ctx->pc = 0x21B030u;
            goto label_21b030;
        }
    }
    ctx->pc = 0x21B000u;
    // 0x21b000: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x21b000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x21b004: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21b004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b008: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21b008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x21b00c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x21b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_21b010:
    // 0x21b010: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x21b010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21b014: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21b014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21b018: 0x3e00008  jr          $ra
    ctx->pc = 0x21B018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B018u;
        // 0x21b01c: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B020u;
label_21b020:
    // 0x21b020: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21b020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b024: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x21b024u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x21b028: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x21B028u;
    {
        const bool branch_taken_0x21b028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B028u;
        // 0x21b02c: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b028) {
            ctx->pc = 0x21B010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b010;
        }
    }
    ctx->pc = 0x21B030u;
label_21b030:
    // 0x21b030: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x21b030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x21b034: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B034u;
    {
        const bool branch_taken_0x21b034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b034) {
            ctx->pc = 0x21B058u;
            goto label_21b058;
        }
    }
    ctx->pc = 0x21B03Cu;
    // 0x21b03c: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x21b03cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_21b040:
    // 0x21b040: 0x50c5fff7  beql        $a2, $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x21B040u;
    {
        const bool branch_taken_0x21b040 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x21b040) {
            ctx->pc = 0x21B044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B040u;
            // 0x21b044: 0x8cc3000c  lw          $v1, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b020;
        }
    }
    ctx->pc = 0x21B048u;
    // 0x21b048: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21b048u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b04c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x21b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21b050: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21B050u;
    {
        const bool branch_taken_0x21b050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b050) {
            ctx->pc = 0x21B054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B050u;
            // 0x21b054: 0x8ce6000c  lw          $a2, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b040;
        }
    }
    ctx->pc = 0x21B058u;
label_21b058:
    // 0x21b058: 0x3e00008  jr          $ra
    ctx->pc = 0x21B058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B058u;
        // 0x21b05c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B060u;
}
