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

// Function: sub_0025EF88
// Address: 0x25ef88 - 0x25efe8
void sub_0025EF88_0x25ef88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EF88_0x25ef88");
#endif

    switch (ctx->pc) {
        case 0x25ef88u: goto label_25ef88;
        case 0x25ef8cu: goto label_25ef8c;
        case 0x25ef90u: goto label_25ef90;
        case 0x25ef94u: goto label_25ef94;
        case 0x25ef98u: goto label_25ef98;
        case 0x25ef9cu: goto label_25ef9c;
        case 0x25efa0u: goto label_25efa0;
        case 0x25efa4u: goto label_25efa4;
        case 0x25efa8u: goto label_25efa8;
        case 0x25efacu: goto label_25efac;
        case 0x25efb0u: goto label_25efb0;
        case 0x25efb4u: goto label_25efb4;
        case 0x25efb8u: goto label_25efb8;
        case 0x25efbcu: goto label_25efbc;
        case 0x25efc0u: goto label_25efc0;
        case 0x25efc4u: goto label_25efc4;
        case 0x25efc8u: goto label_25efc8;
        case 0x25efccu: goto label_25efcc;
        case 0x25efd0u: goto label_25efd0;
        case 0x25efd4u: goto label_25efd4;
        case 0x25efd8u: goto label_25efd8;
        case 0x25efdcu: goto label_25efdc;
        case 0x25efe0u: goto label_25efe0;
        case 0x25efe4u: goto label_25efe4;
        default: break;
    }

    ctx->pc = 0x25ef88u;

label_25ef88:
    // 0x25ef88: 0x3e00008  jr          $ra
label_25ef8c:
    if (ctx->pc == 0x25EF8Cu) {
        ctx->pc = 0x25EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF88u;
        // 0x25ef8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EF90u;
        goto label_25ef90;
    }
    ctx->pc = 0x25EF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF88u;
        // 0x25ef8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EF90u;
label_25ef90:
    // 0x25ef90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25ef90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_25ef94:
    // 0x25ef94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ef94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25ef98:
    // 0x25ef98: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x25ef98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_25ef9c:
    // 0x25ef9c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x25ef9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_25efa0:
    // 0x25efa0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_25efa4:
    if (ctx->pc == 0x25EFA4u) {
        ctx->pc = 0x25EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFA0u;
        // 0x25efa4: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EFA8u;
        goto label_25efa8;
    }
    ctx->pc = 0x25EFA0u;
    {
        const bool branch_taken_0x25efa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25efa0) {
            ctx->pc = 0x25EFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25EFA0u;
            // 0x25efa4: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25EFB0u;
            goto label_25efb0;
        }
    }
    ctx->pc = 0x25EFA8u;
label_25efa8:
    // 0x25efa8: 0x1000000b  b           . + 4 + (0xB << 2)
label_25efac:
    if (ctx->pc == 0x25EFACu) {
        ctx->pc = 0x25EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFA8u;
        // 0x25efac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EFB0u;
        goto label_25efb0;
    }
    ctx->pc = 0x25EFA8u;
    {
        const bool branch_taken_0x25efa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFA8u;
        // 0x25efac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efa8) {
            ctx->pc = 0x25EFD8u;
            goto label_25efd8;
        }
    }
    ctx->pc = 0x25EFB0u;
label_25efb0:
    // 0x25efb0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x25efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_25efb4:
    // 0x25efb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25efb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25efb8:
    // 0x25efb8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_25efbc:
    if (ctx->pc == 0x25EFBCu) {
        ctx->pc = 0x25EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFB8u;
        // 0x25efbc: 0xaca30018  sw          $v1, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EFC0u;
        goto label_25efc0;
    }
    ctx->pc = 0x25EFB8u;
    {
        const bool branch_taken_0x25efb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFB8u;
        // 0x25efbc: 0xaca30018  sw          $v1, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efb8) {
            ctx->pc = 0x25EFD4u;
            goto label_25efd4;
        }
    }
    ctx->pc = 0x25EFC0u;
label_25efc0:
    // 0x25efc0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_25efc4:
    // 0x25efc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25efc8:
    // 0x25efc8: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x25efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
label_25efcc:
    // 0x25efcc: 0x40f809  jalr        $v0
label_25efd0:
    if (ctx->pc == 0x25EFD0u) {
        ctx->pc = 0x25EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFCCu;
        // 0x25efd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EFD4u;
        goto label_25efd4;
    }
    ctx->pc = 0x25EFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25EFD4u);
        ctx->pc = 0x25EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFCCu;
        // 0x25efd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EFCCu, 0x25EFD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25EFD4u;
label_25efd4:
    // 0x25efd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25efd8:
    // 0x25efd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25efd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25efdc:
    // 0x25efdc: 0x3e00008  jr          $ra
label_25efe0:
    if (ctx->pc == 0x25EFE0u) {
        ctx->pc = 0x25EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFDCu;
        // 0x25efe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EFE4u;
        goto label_25efe4;
    }
    ctx->pc = 0x25EFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFDCu;
        // 0x25efe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EFE4u;
label_25efe4:
    // 0x25efe4: 0x0  nop
    ctx->pc = 0x25efe4u;
    // NOP
    ctx->pc = 0x25efe8u;
}
