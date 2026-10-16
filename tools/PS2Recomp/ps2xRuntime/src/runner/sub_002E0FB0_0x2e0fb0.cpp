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

// Function: sub_002E0FB0
// Address: 0x2e0fb0 - 0x2e1070
void sub_002E0FB0_0x2e0fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0FB0_0x2e0fb0");
#endif

    switch (ctx->pc) {
        case 0x2e0fc4u: goto label_2e0fc4;
        case 0x2e0fe0u: goto label_2e0fe0;
        case 0x2e1028u: goto label_2e1028;
        default: break;
    }

    ctx->pc = 0x2e0fb0u;

    // 0x2e0fb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e0fb4: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0FB4u;
    {
        const bool branch_taken_0x2e0fb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FB4u;
        // 0x2e0fb8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0fb4) {
            ctx->pc = 0x2E0FCCu;
            goto label_2e0fcc;
        }
    }
    ctx->pc = 0x2E0FBCu;
    // 0x2e0fbc: 0x10c20014  beq         $a2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E0FBCu;
    {
        const bool branch_taken_0x2e0fbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E0FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FBCu;
        // 0x2e0fc0: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0fbc) {
            ctx->pc = 0x2E1010u;
            goto label_2e1010;
        }
    }
    ctx->pc = 0x2E0FC4u;
label_2e0fc4:
    // 0x2e0fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0FCCu;
label_2e0fcc:
    // 0x2e0fcc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2e0fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0fd0: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x2e0fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2e0fd4: 0x10a0fffb  beqz        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E0FD4u;
    {
        const bool branch_taken_0x2e0fd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FD4u;
        // 0x2e0fd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0fd4) {
            ctx->pc = 0x2E0FC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0fc4;
        }
    }
    ctx->pc = 0x2E0FDCu;
    // 0x2e0fdc: 0x0  nop
    ctx->pc = 0x2e0fdcu;
    // NOP
label_2e0fe0:
    // 0x2e0fe0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2e0fe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e0fe4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e0fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e0fe8: 0xe5202b  sltu        $a0, $a3, $a1
    ctx->pc = 0x2e0fe8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2e0fec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e0fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e0ff0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2e0ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2e0ff4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2e0ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2e0ff8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e0ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e0ffc: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x2e0ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1000: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E1000u;
    {
        const bool branch_taken_0x2e1000 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1000u;
        // 0x2e1004: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1000) {
            ctx->pc = 0x2E0FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0fe0;
        }
    }
    ctx->pc = 0x2E1008u;
    // 0x2e1008: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1010u;
label_2e1010:
    // 0x2e1010: 0x54882  srl         $t1, $a1, 2
    ctx->pc = 0x2e1010u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x2e1014: 0x1120ffeb  beqz        $t1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2E1014u;
    {
        const bool branch_taken_0x2e1014 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1014u;
        // 0x2e1018: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1014) {
            ctx->pc = 0x2E0FC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0fc4;
        }
    }
    ctx->pc = 0x2E101Cu;
    // 0x2e101c: 0x3c0b00ff  lui         $t3, 0xFF
    ctx->pc = 0x2e101cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)255 << 16));
    // 0x2e1020: 0x3c0aff00  lui         $t2, 0xFF00
    ctx->pc = 0x2e1020u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65280 << 16));
    // 0x2e1024: 0x0  nop
    ctx->pc = 0x2e1024u;
    // NOP
label_2e1028:
    // 0x2e1028: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2e1028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e102c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e102cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e1030: 0xe9302b  sltu        $a2, $a3, $t1
    ctx->pc = 0x2e1030u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e1034: 0x3064ff00  andi        $a0, $v1, 0xFF00
    ctx->pc = 0x2e1034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2e1038: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2e1038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2e103c: 0x6b2824  and         $a1, $v1, $t3
    ctx->pc = 0x2e103cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x2e1040: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2e1040u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2e1044: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e1044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e1048: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x2e1048u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x2e104c: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x2e104cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x2e1050: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2e1050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2e1054: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x2e1054u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x2e1058: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e1058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e105c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2e105cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2e1060: 0x14c0fff1  bnez        $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x2E1060u;
    {
        const bool branch_taken_0x2e1060 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1060u;
        // 0x2e1064: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1060) {
            ctx->pc = 0x2E1028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1028;
        }
    }
    ctx->pc = 0x2E1068u;
    // 0x2e1068: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1070u;
}
