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

// Function: sub_0020CA90
// Address: 0x20ca90 - 0x20cb60
void sub_0020CA90_0x20ca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CA90_0x20ca90");
#endif

    switch (ctx->pc) {
        case 0x20ca90u: goto label_20ca90;
        case 0x20ca94u: goto label_20ca94;
        case 0x20ca98u: goto label_20ca98;
        case 0x20ca9cu: goto label_20ca9c;
        case 0x20caa0u: goto label_20caa0;
        case 0x20caa4u: goto label_20caa4;
        case 0x20caa8u: goto label_20caa8;
        case 0x20caacu: goto label_20caac;
        case 0x20cab0u: goto label_20cab0;
        case 0x20cab4u: goto label_20cab4;
        case 0x20cab8u: goto label_20cab8;
        case 0x20cabcu: goto label_20cabc;
        case 0x20cac0u: goto label_20cac0;
        case 0x20cac4u: goto label_20cac4;
        case 0x20cac8u: goto label_20cac8;
        case 0x20caccu: goto label_20cacc;
        case 0x20cad0u: goto label_20cad0;
        case 0x20cad4u: goto label_20cad4;
        case 0x20cad8u: goto label_20cad8;
        case 0x20cadcu: goto label_20cadc;
        case 0x20cae0u: goto label_20cae0;
        case 0x20cae4u: goto label_20cae4;
        case 0x20cae8u: goto label_20cae8;
        case 0x20caecu: goto label_20caec;
        case 0x20caf0u: goto label_20caf0;
        case 0x20caf4u: goto label_20caf4;
        case 0x20caf8u: goto label_20caf8;
        case 0x20cafcu: goto label_20cafc;
        case 0x20cb00u: goto label_20cb00;
        case 0x20cb04u: goto label_20cb04;
        case 0x20cb08u: goto label_20cb08;
        case 0x20cb0cu: goto label_20cb0c;
        case 0x20cb10u: goto label_20cb10;
        case 0x20cb14u: goto label_20cb14;
        case 0x20cb18u: goto label_20cb18;
        case 0x20cb1cu: goto label_20cb1c;
        case 0x20cb20u: goto label_20cb20;
        case 0x20cb24u: goto label_20cb24;
        case 0x20cb28u: goto label_20cb28;
        case 0x20cb2cu: goto label_20cb2c;
        case 0x20cb30u: goto label_20cb30;
        case 0x20cb34u: goto label_20cb34;
        case 0x20cb38u: goto label_20cb38;
        case 0x20cb3cu: goto label_20cb3c;
        case 0x20cb40u: goto label_20cb40;
        case 0x20cb44u: goto label_20cb44;
        case 0x20cb48u: goto label_20cb48;
        case 0x20cb4cu: goto label_20cb4c;
        case 0x20cb50u: goto label_20cb50;
        case 0x20cb54u: goto label_20cb54;
        case 0x20cb58u: goto label_20cb58;
        case 0x20cb5cu: goto label_20cb5c;
        default: break;
    }

    ctx->pc = 0x20ca90u;

label_20ca90:
    // 0x20ca90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20ca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20ca94:
    // 0x20ca94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20ca94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ca98:
    // 0x20ca98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20ca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20ca9c:
    // 0x20ca9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ca9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20caa0:
    // 0x20caa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20caa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20caa4:
    // 0x20caa4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20caa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20caa8:
    // 0x20caa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20caac:
    // 0x20caac: 0x40f809  jalr        $v0
label_20cab0:
    if (ctx->pc == 0x20CAB0u) {
        ctx->pc = 0x20CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAACu;
        // 0x20cab0: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CAB4u;
        goto label_20cab4;
    }
    ctx->pc = 0x20CAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20CAB4u);
        ctx->pc = 0x20CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAACu;
        // 0x20cab0: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CAACu, 0x20CAB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CAB4u;
label_20cab4:
    // 0x20cab4: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x20cab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_20cab8:
    // 0x20cab8: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x20cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_20cabc:
    // 0x20cabc: 0x2463b978  addiu       $v1, $v1, -0x4688
    ctx->pc = 0x20cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949240));
label_20cac0:
    // 0x20cac0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x20cac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_20cac4:
    // 0x20cac4: 0x24420044  addiu       $v0, $v0, 0x44
    ctx->pc = 0x20cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_20cac8:
    // 0x20cac8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20cacc:
    // 0x20cacc: 0x0  nop
    ctx->pc = 0x20caccu;
    // NOP
label_20cad0:
    // 0x20cad0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20cad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20cad4:
    // 0x20cad4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20cad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20cad8:
    // 0x20cad8: 0x0  nop
    ctx->pc = 0x20cad8u;
    // NOP
label_20cadc:
    // 0x20cadc: 0x0  nop
    ctx->pc = 0x20cadcu;
    // NOP
label_20cae0:
    // 0x20cae0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
label_20cae4:
    if (ctx->pc == 0x20CAE4u) {
        ctx->pc = 0x20CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAE0u;
        // 0x20cae4: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CAE8u;
        goto label_20cae8;
    }
    ctx->pc = 0x20CAE0u;
    {
        const bool branch_taken_0x20cae0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x20CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAE0u;
        // 0x20cae4: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cae0) {
            ctx->pc = 0x20CAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20cad0;
        }
    }
    ctx->pc = 0x20CAE8u;
label_20cae8:
    // 0x20cae8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20caec:
    // 0x20caec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20caecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20caf0:
    // 0x20caf0: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x20caf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20caf4:
    // 0x20caf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20caf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20caf8:
    // 0x20caf8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20cafc:
    // 0x20cafc: 0x40f809  jalr        $v0
label_20cb00:
    if (ctx->pc == 0x20CB00u) {
        ctx->pc = 0x20CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAFCu;
        // 0x20cb00: 0x63200  sll         $a2, $a2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CB04u;
        goto label_20cb04;
    }
    ctx->pc = 0x20CAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20CB04u);
        ctx->pc = 0x20CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAFCu;
        // 0x20cb00: 0x63200  sll         $a2, $a2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CAFCu, 0x20CB04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CB04u;
label_20cb04:
    // 0x20cb04: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x20cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20cb08:
    // 0x20cb08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20cb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20cb0c:
    // 0x20cb0c: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x20cb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_20cb10:
    // 0x20cb10: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_20cb14:
    if (ctx->pc == 0x20CB14u) {
        ctx->pc = 0x20CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB10u;
        // 0x20cb14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CB18u;
        goto label_20cb18;
    }
    ctx->pc = 0x20CB10u;
    {
        const bool branch_taken_0x20cb10 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x20CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB10u;
        // 0x20cb14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb10) {
            ctx->pc = 0x20CB50u;
            goto label_20cb50;
        }
    }
    ctx->pc = 0x20CB18u;
label_20cb18:
    // 0x20cb18: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x20cb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20cb1c:
    // 0x20cb1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20cb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_20cb20:
    // 0x20cb20: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x20cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_20cb24:
    // 0x20cb24: 0x0  nop
    ctx->pc = 0x20cb24u;
    // NOP
label_20cb28:
    // 0x20cb28: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x20cb28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_20cb2c:
    // 0x20cb2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20cb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20cb30:
    // 0x20cb30: 0x0  nop
    ctx->pc = 0x20cb30u;
    // NOP
label_20cb34:
    // 0x20cb34: 0x0  nop
    ctx->pc = 0x20cb34u;
    // NOP
label_20cb38:
    // 0x20cb38: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
label_20cb3c:
    if (ctx->pc == 0x20CB3Cu) {
        ctx->pc = 0x20CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB38u;
        // 0x20cb3c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CB40u;
        goto label_20cb40;
    }
    ctx->pc = 0x20CB38u;
    {
        const bool branch_taken_0x20cb38 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x20CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB38u;
        // 0x20cb3c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb38) {
            ctx->pc = 0x20CB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20cb28;
        }
    }
    ctx->pc = 0x20CB40u;
label_20cb40:
    // 0x20cb40: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x20cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20cb44:
    // 0x20cb44: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x20cb44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20cb48:
    // 0x20cb48: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_20cb4c:
    if (ctx->pc == 0x20CB4Cu) {
        ctx->pc = 0x20CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB48u;
        // 0x20cb4c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CB50u;
        goto label_20cb50;
    }
    ctx->pc = 0x20CB48u;
    {
        const bool branch_taken_0x20cb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cb48) {
            ctx->pc = 0x20CB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CB48u;
            // 0x20cb4c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20cb20;
        }
    }
    ctx->pc = 0x20CB50u;
label_20cb50:
    // 0x20cb50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20cb50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20cb54:
    // 0x20cb54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20cb58:
    // 0x20cb58: 0x3e00008  jr          $ra
label_20cb5c:
    if (ctx->pc == 0x20CB5Cu) {
        ctx->pc = 0x20CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB58u;
        // 0x20cb5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CB60u;
        goto label_fallthrough_0x20cb58;
    }
    ctx->pc = 0x20CB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB58u;
        // 0x20cb5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20cb58:
    ctx->pc = 0x20CB60u;
}
