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

// Function: sub_00172028
// Address: 0x172028 - 0x1720c0
void sub_00172028_0x172028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172028_0x172028");
#endif

    switch (ctx->pc) {
        case 0x172028u: goto label_172028;
        case 0x17202cu: goto label_17202c;
        case 0x172030u: goto label_172030;
        case 0x172034u: goto label_172034;
        case 0x172038u: goto label_172038;
        case 0x17203cu: goto label_17203c;
        case 0x172040u: goto label_172040;
        case 0x172044u: goto label_172044;
        case 0x172048u: goto label_172048;
        case 0x17204cu: goto label_17204c;
        case 0x172050u: goto label_172050;
        case 0x172054u: goto label_172054;
        case 0x172058u: goto label_172058;
        case 0x17205cu: goto label_17205c;
        case 0x172060u: goto label_172060;
        case 0x172064u: goto label_172064;
        case 0x172068u: goto label_172068;
        case 0x17206cu: goto label_17206c;
        case 0x172070u: goto label_172070;
        case 0x172074u: goto label_172074;
        case 0x172078u: goto label_172078;
        case 0x17207cu: goto label_17207c;
        case 0x172080u: goto label_172080;
        case 0x172084u: goto label_172084;
        case 0x172088u: goto label_172088;
        case 0x17208cu: goto label_17208c;
        case 0x172090u: goto label_172090;
        case 0x172094u: goto label_172094;
        case 0x172098u: goto label_172098;
        case 0x17209cu: goto label_17209c;
        case 0x1720a0u: goto label_1720a0;
        case 0x1720a4u: goto label_1720a4;
        case 0x1720a8u: goto label_1720a8;
        case 0x1720acu: goto label_1720ac;
        case 0x1720b0u: goto label_1720b0;
        case 0x1720b4u: goto label_1720b4;
        case 0x1720b8u: goto label_1720b8;
        case 0x1720bcu: goto label_1720bc;
        default: break;
    }

    ctx->pc = 0x172028u;

label_172028:
    // 0x172028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17202c:
    // 0x17202c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17202cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_172030:
    // 0x172030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_172034:
    // 0x172034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x172034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_172038:
    // 0x172038: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x172038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_17203c:
    // 0x17203c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_172040:
    if (ctx->pc == 0x172040u) {
        ctx->pc = 0x172040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17203Cu;
        // 0x172040: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172044u;
        goto label_172044;
    }
    ctx->pc = 0x17203Cu;
    {
        const bool branch_taken_0x17203c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17203c) {
            ctx->pc = 0x172040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17203Cu;
            // 0x172040: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1720B0u;
            goto label_1720b0;
        }
    }
    ctx->pc = 0x172044u;
label_172044:
    // 0x172044: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x172044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_172048:
    // 0x172048: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x172048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_17204c:
    // 0x17204c: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
label_172050:
    if (ctx->pc == 0x172050u) {
        ctx->pc = 0x172050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17204Cu;
        // 0x172050: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172054u;
        goto label_172054;
    }
    ctx->pc = 0x17204Cu;
    {
        const bool branch_taken_0x17204c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17204c) {
            ctx->pc = 0x172050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17204Cu;
            // 0x172050: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1720B0u;
            goto label_1720b0;
        }
    }
    ctx->pc = 0x172054u;
label_172054:
    // 0x172054: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x172054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_172058:
    // 0x172058: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x172058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_17205c:
    // 0x17205c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_172060:
    if (ctx->pc == 0x172060u) {
        ctx->pc = 0x172060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17205Cu;
        // 0x172060: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172064u;
        goto label_172064;
    }
    ctx->pc = 0x17205Cu;
    {
        const bool branch_taken_0x17205c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17205c) {
            ctx->pc = 0x172060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17205Cu;
            // 0x172060: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172084u;
            goto label_172084;
        }
    }
    ctx->pc = 0x172064u;
label_172064:
    // 0x172064: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_172068:
    if (ctx->pc == 0x172068u) {
        ctx->pc = 0x172068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172064u;
        // 0x172068: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17206Cu;
        goto label_17206c;
    }
    ctx->pc = 0x172064u;
    {
        const bool branch_taken_0x172064 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x172068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172064u;
        // 0x172068: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172064) {
            ctx->pc = 0x172080u;
            goto label_172080;
        }
    }
    ctx->pc = 0x17206Cu;
label_17206c:
    // 0x17206c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17206cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_172070:
    // 0x172070: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x172070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
label_172074:
    // 0x172074: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x172074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_172078:
    // 0x172078: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x172078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_17207c:
    // 0x17207c: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x17207cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_172080:
    // 0x172080: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x172080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_172084:
    // 0x172084: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x172084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_172088:
    // 0x172088: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_17208c:
    if (ctx->pc == 0x17208Cu) {
        ctx->pc = 0x17208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172088u;
        // 0x17208c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172090u;
        goto label_172090;
    }
    ctx->pc = 0x172088u;
    {
        const bool branch_taken_0x172088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172088u;
        // 0x17208c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172088) {
            ctx->pc = 0x1720A8u;
            goto label_1720a8;
        }
    }
    ctx->pc = 0x172090u;
label_172090:
    // 0x172090: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x172090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_172094:
    // 0x172094: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x172094u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_172098:
    // 0x172098: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x172098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_17209c:
    // 0x17209c: 0x60f809  jalr        $v1
label_1720a0:
    if (ctx->pc == 0x1720A0u) {
        ctx->pc = 0x1720A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17209Cu;
        // 0x1720a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1720A4u;
        goto label_1720a4;
    }
    ctx->pc = 0x17209Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1720A4u);
        ctx->pc = 0x1720A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17209Cu;
        // 0x1720a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17209Cu, 0x1720A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1720A4u;
label_1720a4:
    // 0x1720a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1720a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1720a8:
    // 0x1720a8: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1720a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1720ac:
    // 0x1720ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1720acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1720b0:
    // 0x1720b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1720b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1720b4:
    // 0x1720b4: 0x3e00008  jr          $ra
label_1720b8:
    if (ctx->pc == 0x1720B8u) {
        ctx->pc = 0x1720B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1720B4u;
        // 0x1720b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1720BCu;
        goto label_1720bc;
    }
    ctx->pc = 0x1720B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1720B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1720B4u;
        // 0x1720b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1720B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1720BCu;
label_1720bc:
    // 0x1720bc: 0x0  nop
    ctx->pc = 0x1720bcu;
    // NOP
    ctx->pc = 0x1720c0u;
}
