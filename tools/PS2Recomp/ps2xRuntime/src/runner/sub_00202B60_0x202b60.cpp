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

// Function: sub_00202B60
// Address: 0x202b60 - 0x202c30
void sub_00202B60_0x202b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202B60_0x202b60");
#endif

    switch (ctx->pc) {
        case 0x202b84u: goto label_202b84;
        default: break;
    }

    ctx->pc = 0x202b60u;

    // 0x202b60: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x202b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b64: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x202b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x202b68: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x202b68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x202b6c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x202B6Cu;
    {
        const bool branch_taken_0x202b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202b6c) {
            ctx->pc = 0x202B84u;
            goto label_202b84;
        }
    }
    ctx->pc = 0x202B74u;
    // 0x202b74: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x202b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x202b78: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x202b78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x202b7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202B7Cu;
    {
        const bool branch_taken_0x202b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B7Cu;
        // 0x202b80: 0xa32023  subu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b7c) {
            ctx->pc = 0x202B8Cu;
            goto label_202b8c;
        }
    }
    ctx->pc = 0x202B84u;
label_202b84:
    // 0x202b84: 0x3e00008  jr          $ra
    ctx->pc = 0x202B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B84u;
        // 0x202b88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202B8Cu;
label_202b8c:
    // 0x202b8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x202b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202b90: 0x248201ff  addiu       $v0, $a0, 0x1FF
    ctx->pc = 0x202b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 511));
    // 0x202b94: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x202b94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x202b98: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x202b98u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x202b9c: 0x21a43  sra         $v1, $v0, 9
    ctx->pc = 0x202b9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 9));
    // 0x202ba0: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x202BA0u;
    {
        const bool branch_taken_0x202ba0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x202BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BA0u;
        // 0x202ba4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ba0) {
            ctx->pc = 0x202BD4u;
            goto label_202bd4;
        }
    }
    ctx->pc = 0x202BA8u;
    // 0x202ba8: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x202ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x202bac: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x202bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x202bb0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x202BB0u;
    {
        const bool branch_taken_0x202bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202bb0) {
            ctx->pc = 0x202BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202BB0u;
            // 0x202bb4: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202BC0u;
            goto label_202bc0;
        }
    }
    ctx->pc = 0x202BB8u;
    // 0x202bb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x202BB8u;
    {
        const bool branch_taken_0x202bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202bb8) {
            ctx->pc = 0x202BD4u;
            goto label_202bd4;
        }
    }
    ctx->pc = 0x202BC0u;
label_202bc0:
    // 0x202bc0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x202bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x202bc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x202bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202bc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x202bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202bcc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x202bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x202bd0: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x202bd0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2));
label_202bd4:
    // 0x202bd4: 0x10e0ffeb  beqz        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x202BD4u;
    {
        const bool branch_taken_0x202bd4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x202BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BD4u;
        // 0x202bd8: 0x3c06005c  lui         $a2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bd4) {
            ctx->pc = 0x202B84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202b84;
        }
    }
    ctx->pc = 0x202BDCu;
    // 0x202bdc: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x202bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x202be0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202be4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x202be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x202be8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x202be8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x202bec: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x202becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x202bf0: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x202bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x202bf4: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x202bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x202bf8: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x202bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x202bfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x202bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202c00: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x202c00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x202c04: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x202c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x202c08: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x202c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x202c0c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x202c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x202c10: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x202c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x202c14: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x202c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x202c18: 0x8cc30280  lw          $v1, 0x280($a2)
    ctx->pc = 0x202c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x202c1c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x202c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x202c20: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x202c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x202c24: 0x3e00008  jr          $ra
    ctx->pc = 0x202C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C24u;
        // 0x202c28: 0xacc30280  sw          $v1, 0x280($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202C2Cu;
    // 0x202c2c: 0x0  nop
    ctx->pc = 0x202c2cu;
    // NOP
    ctx->pc = 0x202c30u;
}
