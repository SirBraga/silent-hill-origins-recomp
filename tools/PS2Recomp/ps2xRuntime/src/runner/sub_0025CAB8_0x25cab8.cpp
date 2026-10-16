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

// Function: sub_0025CAB8
// Address: 0x25cab8 - 0x25cb40
void sub_0025CAB8_0x25cab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CAB8_0x25cab8");
#endif

    switch (ctx->pc) {
        case 0x25cab8u: goto label_25cab8;
        case 0x25cabcu: goto label_25cabc;
        case 0x25cac0u: goto label_25cac0;
        case 0x25cac4u: goto label_25cac4;
        case 0x25cac8u: goto label_25cac8;
        case 0x25caccu: goto label_25cacc;
        case 0x25cad0u: goto label_25cad0;
        case 0x25cad4u: goto label_25cad4;
        case 0x25cad8u: goto label_25cad8;
        case 0x25cadcu: goto label_25cadc;
        case 0x25cae0u: goto label_25cae0;
        case 0x25cae4u: goto label_25cae4;
        case 0x25cae8u: goto label_25cae8;
        case 0x25caecu: goto label_25caec;
        case 0x25caf0u: goto label_25caf0;
        case 0x25caf4u: goto label_25caf4;
        case 0x25caf8u: goto label_25caf8;
        case 0x25cafcu: goto label_25cafc;
        case 0x25cb00u: goto label_25cb00;
        case 0x25cb04u: goto label_25cb04;
        case 0x25cb08u: goto label_25cb08;
        case 0x25cb0cu: goto label_25cb0c;
        case 0x25cb10u: goto label_25cb10;
        case 0x25cb14u: goto label_25cb14;
        case 0x25cb18u: goto label_25cb18;
        case 0x25cb1cu: goto label_25cb1c;
        case 0x25cb20u: goto label_25cb20;
        case 0x25cb24u: goto label_25cb24;
        case 0x25cb28u: goto label_25cb28;
        case 0x25cb2cu: goto label_25cb2c;
        case 0x25cb30u: goto label_25cb30;
        case 0x25cb34u: goto label_25cb34;
        case 0x25cb38u: goto label_25cb38;
        case 0x25cb3cu: goto label_25cb3c;
        default: break;
    }

    ctx->pc = 0x25cab8u;

label_25cab8:
    // 0x25cab8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25cab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25cabc:
    // 0x25cabc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25cabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_25cac0:
    // 0x25cac0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25cac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_25cac4:
    // 0x25cac4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x25cac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_25cac8:
    // 0x25cac8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25cac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25cacc:
    // 0x25cacc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x25caccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_25cad0:
    // 0x25cad0: 0x2651002c  addiu       $s1, $s2, 0x2C
    ctx->pc = 0x25cad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_25cad4:
    // 0x25cad4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x25cad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_25cad8:
    // 0x25cad8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25cad8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25cadc:
    // 0x25cadc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25cadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25cae0:
    // 0x25cae0: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x25cae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_25cae4:
    // 0x25cae4: 0x1091000d  beq         $a0, $s1, . + 4 + (0xD << 2)
label_25cae8:
    if (ctx->pc == 0x25CAE8u) {
        ctx->pc = 0x25CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CAE4u;
        // 0x25cae8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CAECu;
        goto label_25caec;
    }
    ctx->pc = 0x25CAE4u;
    {
        const bool branch_taken_0x25cae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x25CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CAE4u;
        // 0x25cae8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cae4) {
            ctx->pc = 0x25CB1Cu;
            goto label_25cb1c;
        }
    }
    ctx->pc = 0x25CAECu;
label_25caec:
    // 0x25caec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25caecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25caf0:
    // 0x25caf0: 0x5222000b  beql        $s1, $v0, . + 4 + (0xB << 2)
label_25caf4:
    if (ctx->pc == 0x25CAF4u) {
        ctx->pc = 0x25CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CAF0u;
        // 0x25caf4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CAF8u;
        goto label_25caf8;
    }
    ctx->pc = 0x25CAF0u;
    {
        const bool branch_taken_0x25caf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x25caf0) {
            ctx->pc = 0x25CAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CAF0u;
            // 0x25caf4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CB20u;
            goto label_25cb20;
        }
    }
    ctx->pc = 0x25CAF8u;
label_25caf8:
    // 0x25caf8: 0x2444ffe0  addiu       $a0, $v0, -0x20
    ctx->pc = 0x25caf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_25cafc:
    // 0x25cafc: 0x0  nop
    ctx->pc = 0x25cafcu;
    // NOP
label_25cb00:
    // 0x25cb00: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x25cb00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25cb04:
    // 0x25cb04: 0x280f809  jalr        $s4
label_25cb08:
    if (ctx->pc == 0x25CB08u) {
        ctx->pc = 0x25CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB04u;
        // 0x25cb08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CB0Cu;
        goto label_25cb0c;
    }
    ctx->pc = 0x25CB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x25CB0Cu);
        ctx->pc = 0x25CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB04u;
        // 0x25cb08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CB04u, 0x25CB0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25CB0Cu;
label_25cb0c:
    // 0x25cb0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25cb10:
    if (ctx->pc == 0x25CB10u) {
        ctx->pc = 0x25CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB0Cu;
        // 0x25cb10: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CB14u;
        goto label_25cb14;
    }
    ctx->pc = 0x25CB0Cu;
    {
        const bool branch_taken_0x25cb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB0Cu;
        // 0x25cb10: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb0c) {
            ctx->pc = 0x25CB1Cu;
            goto label_25cb1c;
        }
    }
    ctx->pc = 0x25CB14u;
label_25cb14:
    // 0x25cb14: 0x1622fffa  bne         $s1, $v0, . + 4 + (-0x6 << 2)
label_25cb18:
    if (ctx->pc == 0x25CB18u) {
        ctx->pc = 0x25CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB14u;
        // 0x25cb18: 0x2444ffe0  addiu       $a0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CB1Cu;
        goto label_25cb1c;
    }
    ctx->pc = 0x25CB14u;
    {
        const bool branch_taken_0x25cb14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x25CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB14u;
        // 0x25cb18: 0x2444ffe0  addiu       $a0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb14) {
            ctx->pc = 0x25CB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25cb00;
        }
    }
    ctx->pc = 0x25CB1Cu;
label_25cb1c:
    // 0x25cb1c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x25cb1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25cb20:
    // 0x25cb20: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x25cb20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25cb24:
    // 0x25cb24: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25cb24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25cb28:
    // 0x25cb28: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25cb28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25cb2c:
    // 0x25cb2c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x25cb2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25cb30:
    // 0x25cb30: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x25cb30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25cb34:
    // 0x25cb34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25cb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25cb38:
    // 0x25cb38: 0x3e00008  jr          $ra
label_25cb3c:
    if (ctx->pc == 0x25CB3Cu) {
        ctx->pc = 0x25CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB38u;
        // 0x25cb3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CB40u;
        goto label_fallthrough_0x25cb38;
    }
    ctx->pc = 0x25CB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB38u;
        // 0x25cb3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25cb38:
    ctx->pc = 0x25CB40u;
}
