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

// Function: sub_001ADFC8
// Address: 0x1adfc8 - 0x1ae070
void sub_001ADFC8_0x1adfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADFC8_0x1adfc8");
#endif

    switch (ctx->pc) {
        case 0x1ae018u: goto label_1ae018;
        default: break;
    }

    ctx->pc = 0x1adfc8u;

    // 0x1adfc8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1adfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1adfcc: 0x14a20026  bne         $a1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1ADFCCu;
    {
        const bool branch_taken_0x1adfcc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1adfcc) {
            ctx->pc = 0x1AE068u;
            goto label_1ae068;
        }
    }
    ctx->pc = 0x1ADFD4u;
    // 0x1adfd4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ADFD4u;
    {
        const bool branch_taken_0x1adfd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFD4u;
        // 0x1adfd8: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfd4) {
            ctx->pc = 0x1ADFFCu;
            goto label_1adffc;
        }
    }
    ctx->pc = 0x1ADFDCu;
    // 0x1adfdc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1adfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1adfe0: 0x24448610  addiu       $a0, $v0, -0x79F0
    ctx->pc = 0x1adfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936080));
    // 0x1adfe4: 0x2463b8c0  addiu       $v1, $v1, -0x4740
    ctx->pc = 0x1adfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949056));
    // 0x1adfe8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1adfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1adfec: 0xac408610  sw          $zero, -0x79F0($v0)
    ctx->pc = 0x1adfecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936080), GPR_U32(ctx, 0));
    // 0x1adff0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1adff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1adff4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFF4u;
        // 0x1adff8: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADFFCu;
label_1adffc:
    // 0x1adffc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1adffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1ae000: 0x24458610  addiu       $a1, $v0, -0x79F0
    ctx->pc = 0x1ae000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936080));
    // 0x1ae004: 0x2463b8c0  addiu       $v1, $v1, -0x4740
    ctx->pc = 0x1ae004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949056));
    // 0x1ae008: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1ae008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ae00c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AE00Cu;
    {
        const bool branch_taken_0x1ae00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE00Cu;
        // 0x1ae010: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae00c) {
            ctx->pc = 0x1AE068u;
            goto label_1ae068;
        }
    }
    ctx->pc = 0x1AE014u;
    // 0x1ae014: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1ae014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ae018:
    // 0x1ae018: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AE018u;
    {
        const bool branch_taken_0x1ae018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae018) {
            ctx->pc = 0x1AE01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE018u;
            // 0x1ae01c: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE060u;
            goto label_1ae060;
        }
    }
    ctx->pc = 0x1AE020u;
    // 0x1ae020: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1ae020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ae024: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE024u;
    {
        const bool branch_taken_0x1ae024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE024u;
        // 0x1ae028: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae024) {
            ctx->pc = 0x1AE034u;
            goto label_1ae034;
        }
    }
    ctx->pc = 0x1AE02Cu;
    // 0x1ae02c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE02Cu;
    {
        const bool branch_taken_0x1ae02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE02Cu;
        // 0x1ae030: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae02c) {
            ctx->pc = 0x1AE038u;
            goto label_1ae038;
        }
    }
    ctx->pc = 0x1AE034u;
label_1ae034:
    // 0x1ae034: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ae034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1ae038:
    // 0x1ae038: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ae038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae03c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE03Cu;
    {
        const bool branch_taken_0x1ae03c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE03Cu;
        // 0x1ae040: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae03c) {
            ctx->pc = 0x1AE04Cu;
            goto label_1ae04c;
        }
    }
    ctx->pc = 0x1AE044u;
    // 0x1ae044: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE044u;
    {
        const bool branch_taken_0x1ae044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE044u;
        // 0x1ae048: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae044) {
            ctx->pc = 0x1AE050u;
            goto label_1ae050;
        }
    }
    ctx->pc = 0x1AE04Cu;
label_1ae04c:
    // 0x1ae04c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ae04cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1ae050:
    // 0x1ae050: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ae050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ae054: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ae054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ae058: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1ae058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1ae05c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1ae05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ae060:
    // 0x1ae060: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1AE060u;
    {
        const bool branch_taken_0x1ae060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae060) {
            ctx->pc = 0x1AE064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE060u;
            // 0x1ae064: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae018;
        }
    }
    ctx->pc = 0x1AE068u;
label_1ae068:
    // 0x1ae068: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE070u;
}
