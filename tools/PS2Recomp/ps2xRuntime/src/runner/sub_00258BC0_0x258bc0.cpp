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

// Function: sub_00258BC0
// Address: 0x258bc0 - 0x258c50
void sub_00258BC0_0x258bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258BC0_0x258bc0");
#endif

    switch (ctx->pc) {
        case 0x258bc0u: goto label_258bc0;
        case 0x258bc4u: goto label_258bc4;
        case 0x258bc8u: goto label_258bc8;
        case 0x258bccu: goto label_258bcc;
        case 0x258bd0u: goto label_258bd0;
        case 0x258bd4u: goto label_258bd4;
        case 0x258bd8u: goto label_258bd8;
        case 0x258bdcu: goto label_258bdc;
        case 0x258be0u: goto label_258be0;
        case 0x258be4u: goto label_258be4;
        case 0x258be8u: goto label_258be8;
        case 0x258becu: goto label_258bec;
        case 0x258bf0u: goto label_258bf0;
        case 0x258bf4u: goto label_258bf4;
        case 0x258bf8u: goto label_258bf8;
        case 0x258bfcu: goto label_258bfc;
        case 0x258c00u: goto label_258c00;
        case 0x258c04u: goto label_258c04;
        case 0x258c08u: goto label_258c08;
        case 0x258c0cu: goto label_258c0c;
        case 0x258c10u: goto label_258c10;
        case 0x258c14u: goto label_258c14;
        case 0x258c18u: goto label_258c18;
        case 0x258c1cu: goto label_258c1c;
        case 0x258c20u: goto label_258c20;
        case 0x258c24u: goto label_258c24;
        case 0x258c28u: goto label_258c28;
        case 0x258c2cu: goto label_258c2c;
        case 0x258c30u: goto label_258c30;
        case 0x258c34u: goto label_258c34;
        case 0x258c38u: goto label_258c38;
        case 0x258c3cu: goto label_258c3c;
        case 0x258c40u: goto label_258c40;
        case 0x258c44u: goto label_258c44;
        case 0x258c48u: goto label_258c48;
        case 0x258c4cu: goto label_258c4c;
        default: break;
    }

    ctx->pc = 0x258bc0u;

label_258bc0:
    // 0x258bc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x258bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_258bc4:
    // 0x258bc4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x258bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_258bc8:
    // 0x258bc8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x258bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_258bcc:
    // 0x258bcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x258bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_258bd0:
    // 0x258bd0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x258bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_258bd4:
    // 0x258bd4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x258bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_258bd8:
    // 0x258bd8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x258bd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_258bdc:
    // 0x258bdc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x258bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_258be0:
    // 0x258be0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x258be0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_258be4:
    // 0x258be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_258be8:
    // 0x258be8: 0x96300004  lhu         $s0, 0x4($s1)
    ctx->pc = 0x258be8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_258bec:
    // 0x258bec: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x258becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_258bf0:
    // 0x258bf0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x258bf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_258bf4:
    // 0x258bf4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x258bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_258bf8:
    // 0x258bf8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x258bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_258bfc:
    // 0x258bfc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_258c00:
    if (ctx->pc == 0x258C00u) {
        ctx->pc = 0x258C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BFCu;
        // 0x258c00: 0x2229021  addu        $s2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C04u;
        goto label_258c04;
    }
    ctx->pc = 0x258BFCu;
    {
        const bool branch_taken_0x258bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BFCu;
        // 0x258c00: 0x2229021  addu        $s2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258bfc) {
            ctx->pc = 0x258C2Cu;
            goto label_258c2c;
        }
    }
    ctx->pc = 0x258C04u;
label_258c04:
    // 0x258c04: 0x0  nop
    ctx->pc = 0x258c04u;
    // NOP
label_258c08:
    // 0x258c08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x258c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_258c0c:
    // 0x258c0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x258c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258c10:
    // 0x258c10: 0x280f809  jalr        $s4
label_258c14:
    if (ctx->pc == 0x258C14u) {
        ctx->pc = 0x258C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C10u;
        // 0x258c14: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C18u;
        goto label_258c18;
    }
    ctx->pc = 0x258C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x258C18u);
        ctx->pc = 0x258C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C10u;
        // 0x258c14: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258C10u, 0x258C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258C18u;
label_258c18:
    // 0x258c18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_258c1c:
    if (ctx->pc == 0x258C1Cu) {
        ctx->pc = 0x258C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C18u;
        // 0x258c1c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C20u;
        goto label_258c20;
    }
    ctx->pc = 0x258C18u;
    {
        const bool branch_taken_0x258c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C18u;
        // 0x258c1c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c18) {
            ctx->pc = 0x258C2Cu;
            goto label_258c2c;
        }
    }
    ctx->pc = 0x258C20u;
label_258c20:
    // 0x258c20: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x258c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_258c24:
    // 0x258c24: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_258c28:
    if (ctx->pc == 0x258C28u) {
        ctx->pc = 0x258C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C24u;
        // 0x258c28: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C2Cu;
        goto label_258c2c;
    }
    ctx->pc = 0x258C24u;
    {
        const bool branch_taken_0x258c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C24u;
        // 0x258c28: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c24) {
            ctx->pc = 0x258C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258c08;
        }
    }
    ctx->pc = 0x258C2Cu;
label_258c2c:
    // 0x258c2c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x258c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258c30:
    // 0x258c30: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x258c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_258c34:
    // 0x258c34: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x258c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_258c38:
    // 0x258c38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x258c38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_258c3c:
    // 0x258c3c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x258c3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_258c40:
    // 0x258c40: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x258c40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_258c44:
    // 0x258c44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_258c48:
    // 0x258c48: 0x3e00008  jr          $ra
label_258c4c:
    if (ctx->pc == 0x258C4Cu) {
        ctx->pc = 0x258C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C48u;
        // 0x258c4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C50u;
        goto label_fallthrough_0x258c48;
    }
    ctx->pc = 0x258C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C48u;
        // 0x258c4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x258c48:
    ctx->pc = 0x258C50u;
}
