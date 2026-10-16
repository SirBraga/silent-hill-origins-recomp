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

// Function: sub_00305B38
// Address: 0x305b38 - 0x305c08
void sub_00305B38_0x305b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305B38_0x305b38");
#endif

    switch (ctx->pc) {
        case 0x305b48u: goto label_305b48;
        case 0x305b50u: goto label_305b50;
        case 0x305b58u: goto label_305b58;
        case 0x305b88u: goto label_305b88;
        case 0x305bb8u: goto label_305bb8;
        case 0x305bc8u: goto label_305bc8;
        default: break;
    }

    ctx->pc = 0x305b38u;

    // 0x305b38: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x305b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x305b3c: 0x10a0002f  beqz        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x305B3Cu;
    {
        const bool branch_taken_0x305b3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x305B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B3Cu;
        // 0x305b40: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b3c) {
            ctx->pc = 0x305BFCu;
            goto label_305bfc;
        }
    }
    ctx->pc = 0x305B44u;
    // 0x305b44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x305b44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305b48:
    // 0x305b48: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x305b48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305b4c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x305b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_305b50:
    // 0x305b50: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x305B50u;
    {
        const bool branch_taken_0x305b50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x305B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B50u;
        // 0x305b54: 0x8ce70004  lw          $a3, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b50) {
            ctx->pc = 0x305B70u;
            goto label_305b70;
        }
    }
    ctx->pc = 0x305B58u;
label_305b58:
    // 0x305b58: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x305b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x305b5c: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x305b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x305b60: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x305b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x305b64: 0x0  nop
    ctx->pc = 0x305b64u;
    // NOP
    // 0x305b68: 0x14c0fffb  bnez        $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x305B68u;
    {
        const bool branch_taken_0x305b68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x305B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B68u;
        // 0x305b6c: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b68) {
            ctx->pc = 0x305B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305b58;
        }
    }
    ctx->pc = 0x305B70u;
label_305b70:
    // 0x305b70: 0x54e0fff7  bnel        $a3, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x305B70u;
    {
        const bool branch_taken_0x305b70 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x305b70) {
            ctx->pc = 0x305B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305B70u;
            // 0x305b74: 0x8ce60000  lw          $a2, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305b50;
        }
    }
    ctx->pc = 0x305B78u;
    // 0x305b78: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x305b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x305b7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x305B7Cu;
    {
        const bool branch_taken_0x305b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B7Cu;
        // 0x305b80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b7c) {
            ctx->pc = 0x305BA0u;
            goto label_305ba0;
        }
    }
    ctx->pc = 0x305B84u;
    // 0x305b84: 0x0  nop
    ctx->pc = 0x305b84u;
    // NOP
label_305b88:
    // 0x305b88: 0x84042  srl         $t0, $t0, 1
    ctx->pc = 0x305b88u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x305b8c: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x305b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x305b90: 0x0  nop
    ctx->pc = 0x305b90u;
    // NOP
    // 0x305b94: 0x0  nop
    ctx->pc = 0x305b94u;
    // NOP
    // 0x305b98: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x305B98u;
    {
        const bool branch_taken_0x305b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B98u;
        // 0x305b9c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b98) {
            ctx->pc = 0x305B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305b88;
        }
    }
    ctx->pc = 0x305BA0u;
label_305ba0:
    // 0x305ba0: 0x12b182b  sltu        $v1, $t1, $t3
    ctx->pc = 0x305ba0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x305ba4: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x305ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x305ba8: 0x43580a  movz        $t3, $v0, $v1
    ctx->pc = 0x305ba8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2));
    // 0x305bac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x305bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305bb0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x305bb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305bb4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x305bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_305bb8:
    // 0x305bb8: 0x50c0000b  beql        $a2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x305BB8u;
    {
        const bool branch_taken_0x305bb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x305bb8) {
            ctx->pc = 0x305BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305BB8u;
            // 0x305bbc: 0x8ce70004  lw          $a3, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305BE8u;
            goto label_305be8;
        }
    }
    ctx->pc = 0x305BC0u;
    // 0x305bc0: 0x12a4004  sllv        $t0, $t2, $t1
    ctx->pc = 0x305bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 9) & 0x1F));
    // 0x305bc4: 0xacc9001c  sw          $t1, 0x1C($a2)
    ctx->pc = 0x305bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 9));
label_305bc8:
    // 0x305bc8: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x305bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x305bcc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x305bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x305bd0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x305bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x305bd4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x305bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x305bd8: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x305bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x305bdc: 0x54c0fffa  bnel        $a2, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x305BDCu;
    {
        const bool branch_taken_0x305bdc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x305bdc) {
            ctx->pc = 0x305BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305BDCu;
            // 0x305be0: 0xacc9001c  sw          $t1, 0x1C($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305bc8;
        }
    }
    ctx->pc = 0x305BE4u;
    // 0x305be4: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x305be4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_305be8:
    // 0x305be8: 0x54e0fff3  bnel        $a3, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x305BE8u;
    {
        const bool branch_taken_0x305be8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x305be8) {
            ctx->pc = 0x305BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305BE8u;
            // 0x305bec: 0x8ce60000  lw          $a2, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305bb8;
        }
    }
    ctx->pc = 0x305BF0u;
    // 0x305bf0: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x305bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x305bf4: 0x14a0ffd4  bnez        $a1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x305BF4u;
    {
        const bool branch_taken_0x305bf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x305BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BF4u;
        // 0x305bf8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305bf4) {
            ctx->pc = 0x305B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305b48;
        }
    }
    ctx->pc = 0x305BFCu;
label_305bfc:
    // 0x305bfc: 0xac8b000c  sw          $t3, 0xC($a0)
    ctx->pc = 0x305bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 11));
    // 0x305c00: 0x3e00008  jr          $ra
    ctx->pc = 0x305C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C00u;
        // 0x305c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305C08u;
}
