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

// Function: sub_0020AEE8
// Address: 0x20aee8 - 0x20b0e0
void sub_0020AEE8_0x20aee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AEE8_0x20aee8");
#endif

    switch (ctx->pc) {
        case 0x20aee8u: goto label_20aee8;
        case 0x20aeecu: goto label_20aeec;
        case 0x20aef0u: goto label_20aef0;
        case 0x20aef4u: goto label_20aef4;
        case 0x20aef8u: goto label_20aef8;
        case 0x20aefcu: goto label_20aefc;
        case 0x20af00u: goto label_20af00;
        case 0x20af04u: goto label_20af04;
        case 0x20af08u: goto label_20af08;
        case 0x20af0cu: goto label_20af0c;
        case 0x20af10u: goto label_20af10;
        case 0x20af14u: goto label_20af14;
        case 0x20af18u: goto label_20af18;
        case 0x20af1cu: goto label_20af1c;
        case 0x20af20u: goto label_20af20;
        case 0x20af24u: goto label_20af24;
        case 0x20af28u: goto label_20af28;
        case 0x20af2cu: goto label_20af2c;
        case 0x20af30u: goto label_20af30;
        case 0x20af34u: goto label_20af34;
        case 0x20af38u: goto label_20af38;
        case 0x20af3cu: goto label_20af3c;
        case 0x20af40u: goto label_20af40;
        case 0x20af44u: goto label_20af44;
        case 0x20af48u: goto label_20af48;
        case 0x20af4cu: goto label_20af4c;
        case 0x20af50u: goto label_20af50;
        case 0x20af54u: goto label_20af54;
        case 0x20af58u: goto label_20af58;
        case 0x20af5cu: goto label_20af5c;
        case 0x20af60u: goto label_20af60;
        case 0x20af64u: goto label_20af64;
        case 0x20af68u: goto label_20af68;
        case 0x20af6cu: goto label_20af6c;
        case 0x20af70u: goto label_20af70;
        case 0x20af74u: goto label_20af74;
        case 0x20af78u: goto label_20af78;
        case 0x20af7cu: goto label_20af7c;
        case 0x20af80u: goto label_20af80;
        case 0x20af84u: goto label_20af84;
        case 0x20af88u: goto label_20af88;
        case 0x20af8cu: goto label_20af8c;
        case 0x20af90u: goto label_20af90;
        case 0x20af94u: goto label_20af94;
        case 0x20af98u: goto label_20af98;
        case 0x20af9cu: goto label_20af9c;
        case 0x20afa0u: goto label_20afa0;
        case 0x20afa4u: goto label_20afa4;
        case 0x20afa8u: goto label_20afa8;
        case 0x20afacu: goto label_20afac;
        case 0x20afb0u: goto label_20afb0;
        case 0x20afb4u: goto label_20afb4;
        case 0x20afb8u: goto label_20afb8;
        case 0x20afbcu: goto label_20afbc;
        case 0x20afc0u: goto label_20afc0;
        case 0x20afc4u: goto label_20afc4;
        case 0x20afc8u: goto label_20afc8;
        case 0x20afccu: goto label_20afcc;
        case 0x20afd0u: goto label_20afd0;
        case 0x20afd4u: goto label_20afd4;
        case 0x20afd8u: goto label_20afd8;
        case 0x20afdcu: goto label_20afdc;
        case 0x20afe0u: goto label_20afe0;
        case 0x20afe4u: goto label_20afe4;
        case 0x20afe8u: goto label_20afe8;
        case 0x20afecu: goto label_20afec;
        case 0x20aff0u: goto label_20aff0;
        case 0x20aff4u: goto label_20aff4;
        case 0x20aff8u: goto label_20aff8;
        case 0x20affcu: goto label_20affc;
        case 0x20b000u: goto label_20b000;
        case 0x20b004u: goto label_20b004;
        case 0x20b008u: goto label_20b008;
        case 0x20b00cu: goto label_20b00c;
        case 0x20b010u: goto label_20b010;
        case 0x20b014u: goto label_20b014;
        case 0x20b018u: goto label_20b018;
        case 0x20b01cu: goto label_20b01c;
        case 0x20b020u: goto label_20b020;
        case 0x20b024u: goto label_20b024;
        case 0x20b028u: goto label_20b028;
        case 0x20b02cu: goto label_20b02c;
        case 0x20b030u: goto label_20b030;
        case 0x20b034u: goto label_20b034;
        case 0x20b038u: goto label_20b038;
        case 0x20b03cu: goto label_20b03c;
        case 0x20b040u: goto label_20b040;
        case 0x20b044u: goto label_20b044;
        case 0x20b048u: goto label_20b048;
        case 0x20b04cu: goto label_20b04c;
        case 0x20b050u: goto label_20b050;
        case 0x20b054u: goto label_20b054;
        case 0x20b058u: goto label_20b058;
        case 0x20b05cu: goto label_20b05c;
        case 0x20b060u: goto label_20b060;
        case 0x20b064u: goto label_20b064;
        case 0x20b068u: goto label_20b068;
        case 0x20b06cu: goto label_20b06c;
        case 0x20b070u: goto label_20b070;
        case 0x20b074u: goto label_20b074;
        case 0x20b078u: goto label_20b078;
        case 0x20b07cu: goto label_20b07c;
        case 0x20b080u: goto label_20b080;
        case 0x20b084u: goto label_20b084;
        case 0x20b088u: goto label_20b088;
        case 0x20b08cu: goto label_20b08c;
        case 0x20b090u: goto label_20b090;
        case 0x20b094u: goto label_20b094;
        case 0x20b098u: goto label_20b098;
        case 0x20b09cu: goto label_20b09c;
        case 0x20b0a0u: goto label_20b0a0;
        case 0x20b0a4u: goto label_20b0a4;
        case 0x20b0a8u: goto label_20b0a8;
        case 0x20b0acu: goto label_20b0ac;
        case 0x20b0b0u: goto label_20b0b0;
        case 0x20b0b4u: goto label_20b0b4;
        case 0x20b0b8u: goto label_20b0b8;
        case 0x20b0bcu: goto label_20b0bc;
        case 0x20b0c0u: goto label_20b0c0;
        case 0x20b0c4u: goto label_20b0c4;
        case 0x20b0c8u: goto label_20b0c8;
        case 0x20b0ccu: goto label_20b0cc;
        case 0x20b0d0u: goto label_20b0d0;
        case 0x20b0d4u: goto label_20b0d4;
        case 0x20b0d8u: goto label_20b0d8;
        case 0x20b0dcu: goto label_20b0dc;
        default: break;
    }

    ctx->pc = 0x20aee8u;

label_20aee8:
    // 0x20aee8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20aee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20aeec:
    // 0x20aeec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20aeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20aef0:
    // 0x20aef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20aef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20aef4:
    // 0x20aef4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20aef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20aef8:
    // 0x20aef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20aef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20aefc:
    // 0x20aefc: 0x8e1101a4  lw          $s1, 0x1A4($s0)
    ctx->pc = 0x20aefcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
label_20af00:
    // 0x20af00: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x20af00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_20af04:
    // 0x20af04: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_20af08:
    if (ctx->pc == 0x20AF08u) {
        ctx->pc = 0x20AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF04u;
        // 0x20af08: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF0Cu;
        goto label_20af0c;
    }
    ctx->pc = 0x20AF04u;
    {
        const bool branch_taken_0x20af04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20af04) {
            ctx->pc = 0x20AF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AF04u;
            // 0x20af08: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AF50u;
            goto label_20af50;
        }
    }
    ctx->pc = 0x20AF0Cu;
label_20af0c:
    // 0x20af0c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x20af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_20af10:
    // 0x20af10: 0x8e0201cc  lw          $v0, 0x1CC($s0)
    ctx->pc = 0x20af10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
label_20af14:
    // 0x20af14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20af14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20af18:
    // 0x20af18: 0x60f809  jalr        $v1
label_20af1c:
    if (ctx->pc == 0x20AF1Cu) {
        ctx->pc = 0x20AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF18u;
        // 0x20af1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF20u;
        goto label_20af20;
    }
    ctx->pc = 0x20AF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20AF20u);
        ctx->pc = 0x20AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF18u;
        // 0x20af1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF18u, 0x20AF20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AF20u;
label_20af20:
    // 0x20af20: 0x8e0601b0  lw          $a2, 0x1B0($s0)
    ctx->pc = 0x20af20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_20af24:
    // 0x20af24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20af24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20af28:
    // 0x20af28: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20af28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20af2c:
    // 0x20af2c: 0x40f809  jalr        $v0
label_20af30:
    if (ctx->pc == 0x20AF30u) {
        ctx->pc = 0x20AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF2Cu;
        // 0x20af30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF34u;
        goto label_20af34;
    }
    ctx->pc = 0x20AF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AF34u);
        ctx->pc = 0x20AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF2Cu;
        // 0x20af30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF2Cu, 0x20AF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AF34u;
label_20af34:
    // 0x20af34: 0x8e0301a8  lw          $v1, 0x1A8($s0)
    ctx->pc = 0x20af34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_20af38:
    // 0x20af38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20af38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20af3c:
    // 0x20af3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20af40:
    // 0x20af40: 0x40f809  jalr        $v0
label_20af44:
    if (ctx->pc == 0x20AF44u) {
        ctx->pc = 0x20AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF40u;
        // 0x20af44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF48u;
        goto label_20af48;
    }
    ctx->pc = 0x20AF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AF48u);
        ctx->pc = 0x20AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF40u;
        // 0x20af44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF40u, 0x20AF48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AF48u;
label_20af48:
    // 0x20af48: 0x10000046  b           . + 4 + (0x46 << 2)
label_20af4c:
    if (ctx->pc == 0x20AF4Cu) {
        ctx->pc = 0x20AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF48u;
        // 0x20af4c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF50u;
        goto label_20af50;
    }
    ctx->pc = 0x20AF48u;
    {
        const bool branch_taken_0x20af48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF48u;
        // 0x20af4c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af48) {
            ctx->pc = 0x20B064u;
            goto label_20b064;
        }
    }
    ctx->pc = 0x20AF50u;
label_20af50:
    // 0x20af50: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_20af54:
    if (ctx->pc == 0x20AF54u) {
        ctx->pc = 0x20AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF50u;
        // 0x20af54: 0x8e0301c0  lw          $v1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF58u;
        goto label_20af58;
    }
    ctx->pc = 0x20AF50u;
    {
        const bool branch_taken_0x20af50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20af50) {
            ctx->pc = 0x20AF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AF50u;
            // 0x20af54: 0x8e0301c0  lw          $v1, 0x1C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AFC0u;
            goto label_20afc0;
        }
    }
    ctx->pc = 0x20AF58u;
label_20af58:
    // 0x20af58: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x20af58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_20af5c:
    // 0x20af5c: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_20af60:
    if (ctx->pc == 0x20AF60u) {
        ctx->pc = 0x20AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF5Cu;
        // 0x20af60: 0x8e0301c0  lw          $v1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF64u;
        goto label_20af64;
    }
    ctx->pc = 0x20AF5Cu;
    {
        const bool branch_taken_0x20af5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20af5c) {
            ctx->pc = 0x20AF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AF5Cu;
            // 0x20af60: 0x8e0301c0  lw          $v1, 0x1C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AFC0u;
            goto label_20afc0;
        }
    }
    ctx->pc = 0x20AF64u;
label_20af64:
    // 0x20af64: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x20af64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_20af68:
    // 0x20af68: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_20af6c:
    if (ctx->pc == 0x20AF6Cu) {
        ctx->pc = 0x20AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF68u;
        // 0x20af6c: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF70u;
        goto label_20af70;
    }
    ctx->pc = 0x20AF68u;
    {
        const bool branch_taken_0x20af68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20af68) {
            ctx->pc = 0x20AF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AF68u;
            // 0x20af6c: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AF90u;
            goto label_20af90;
        }
    }
    ctx->pc = 0x20AF70u;
label_20af70:
    // 0x20af70: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x20af70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_20af74:
    // 0x20af74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20af78:
    if (ctx->pc == 0x20AF78u) {
        ctx->pc = 0x20AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF74u;
        // 0x20af78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF7Cu;
        goto label_20af7c;
    }
    ctx->pc = 0x20AF74u;
    {
        const bool branch_taken_0x20af74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF74u;
        // 0x20af78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af74) {
            ctx->pc = 0x20AF8Cu;
            goto label_20af8c;
        }
    }
    ctx->pc = 0x20AF7Cu;
label_20af7c:
    // 0x20af7c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x20af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20af80:
    // 0x20af80: 0xae0201cc  sw          $v0, 0x1CC($s0)
    ctx->pc = 0x20af80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 2));
label_20af84:
    // 0x20af84: 0x1000000d  b           . + 4 + (0xD << 2)
label_20af88:
    if (ctx->pc == 0x20AF88u) {
        ctx->pc = 0x20AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF84u;
        // 0x20af88: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF8Cu;
        goto label_20af8c;
    }
    ctx->pc = 0x20AF84u;
    {
        const bool branch_taken_0x20af84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF84u;
        // 0x20af88: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af84) {
            ctx->pc = 0x20AFBCu;
            goto label_20afbc;
        }
    }
    ctx->pc = 0x20AF8Cu;
label_20af8c:
    // 0x20af8c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x20af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_20af90:
    // 0x20af90: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20af94:
    if (ctx->pc == 0x20AF94u) {
        ctx->pc = 0x20AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF90u;
        // 0x20af94: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF98u;
        goto label_20af98;
    }
    ctx->pc = 0x20AF90u;
    {
        const bool branch_taken_0x20af90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20af90) {
            ctx->pc = 0x20AF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AF90u;
            // 0x20af94: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AFA4u;
            goto label_20afa4;
        }
    }
    ctx->pc = 0x20AF98u;
label_20af98:
    // 0x20af98: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x20af98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_20af9c:
    // 0x20af9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_20afa0:
    if (ctx->pc == 0x20AFA0u) {
        ctx->pc = 0x20AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF9Cu;
        // 0x20afa0: 0xae0201cc  sw          $v0, 0x1CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFA4u;
        goto label_20afa4;
    }
    ctx->pc = 0x20AF9Cu;
    {
        const bool branch_taken_0x20af9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF9Cu;
        // 0x20afa0: 0xae0201cc  sw          $v0, 0x1CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af9c) {
            ctx->pc = 0x20AFBCu;
            goto label_20afbc;
        }
    }
    ctx->pc = 0x20AFA4u;
label_20afa4:
    // 0x20afa4: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x20afa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_20afa8:
    // 0x20afa8: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20afac:
    // 0x20afac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20afacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20afb0:
    // 0x20afb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20afb4:
    // 0x20afb4: 0x60f809  jalr        $v1
label_20afb8:
    if (ctx->pc == 0x20AFB8u) {
        ctx->pc = 0x20AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFB4u;
        // 0x20afb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFBCu;
        goto label_20afbc;
    }
    ctx->pc = 0x20AFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20AFBCu);
        ctx->pc = 0x20AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFB4u;
        // 0x20afb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AFB4u, 0x20AFBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AFBCu;
label_20afbc:
    // 0x20afbc: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x20afbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_20afc0:
    // 0x20afc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20afc4:
    // 0x20afc4: 0x40f809  jalr        $v0
label_20afc8:
    if (ctx->pc == 0x20AFC8u) {
        ctx->pc = 0x20AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFC4u;
        // 0x20afc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFCCu;
        goto label_20afcc;
    }
    ctx->pc = 0x20AFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AFCCu);
        ctx->pc = 0x20AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFC4u;
        // 0x20afc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AFC4u, 0x20AFCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AFCCu;
label_20afcc:
    // 0x20afcc: 0x8e0301ac  lw          $v1, 0x1AC($s0)
    ctx->pc = 0x20afccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_20afd0:
    // 0x20afd0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20afd4:
    // 0x20afd4: 0x40f809  jalr        $v0
label_20afd8:
    if (ctx->pc == 0x20AFD8u) {
        ctx->pc = 0x20AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFD4u;
        // 0x20afd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFDCu;
        goto label_20afdc;
    }
    ctx->pc = 0x20AFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AFDCu);
        ctx->pc = 0x20AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFD4u;
        // 0x20afd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AFD4u, 0x20AFDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AFDCu;
label_20afdc:
    // 0x20afdc: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x20afdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_20afe0:
    // 0x20afe0: 0x54600020  bnel        $v1, $zero, . + 4 + (0x20 << 2)
label_20afe4:
    if (ctx->pc == 0x20AFE4u) {
        ctx->pc = 0x20AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFE0u;
        // 0x20afe4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFE8u;
        goto label_20afe8;
    }
    ctx->pc = 0x20AFE0u;
    {
        const bool branch_taken_0x20afe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20afe0) {
            ctx->pc = 0x20AFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AFE0u;
            // 0x20afe4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B064u;
            goto label_20b064;
        }
    }
    ctx->pc = 0x20AFE8u;
label_20afe8:
    // 0x20afe8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x20afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_20afec:
    // 0x20afec: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_20aff0:
    if (ctx->pc == 0x20AFF0u) {
        ctx->pc = 0x20AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFECu;
        // 0x20aff0: 0x8e0201c4  lw          $v0, 0x1C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFF4u;
        goto label_20aff4;
    }
    ctx->pc = 0x20AFECu;
    {
        const bool branch_taken_0x20afec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20afec) {
            ctx->pc = 0x20AFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AFECu;
            // 0x20aff0: 0x8e0201c4  lw          $v0, 0x1C4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B008u;
            goto label_20b008;
        }
    }
    ctx->pc = 0x20AFF4u;
label_20aff4:
    // 0x20aff4: 0x8e0301c8  lw          $v1, 0x1C8($s0)
    ctx->pc = 0x20aff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
label_20aff8:
    // 0x20aff8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20affc:
    // 0x20affc: 0x40f809  jalr        $v0
label_20b000:
    if (ctx->pc == 0x20B000u) {
        ctx->pc = 0x20B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFFCu;
        // 0x20b000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B004u;
        goto label_20b004;
    }
    ctx->pc = 0x20AFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B004u);
        ctx->pc = 0x20B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFFCu;
        // 0x20b000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AFFCu, 0x20B004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B004u;
label_20b004:
    // 0x20b004: 0x8e0201c4  lw          $v0, 0x1C4($s0)
    ctx->pc = 0x20b004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
label_20b008:
    // 0x20b008: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20b008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20b00c:
    // 0x20b00c: 0x60f809  jalr        $v1
label_20b010:
    if (ctx->pc == 0x20B010u) {
        ctx->pc = 0x20B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B00Cu;
        // 0x20b010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B014u;
        goto label_20b014;
    }
    ctx->pc = 0x20B00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20B014u);
        ctx->pc = 0x20B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B00Cu;
        // 0x20b010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B00Cu, 0x20B014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B014u;
label_20b014:
    // 0x20b014: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x20b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_20b018:
    // 0x20b018: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20b01c:
    if (ctx->pc == 0x20B01Cu) {
        ctx->pc = 0x20B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B018u;
        // 0x20b01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B020u;
        goto label_20b020;
    }
    ctx->pc = 0x20B018u;
    {
        const bool branch_taken_0x20b018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B018u;
        // 0x20b01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b018) {
            ctx->pc = 0x20B030u;
            goto label_20b030;
        }
    }
    ctx->pc = 0x20B020u;
label_20b020:
    // 0x20b020: 0x8e0301cc  lw          $v1, 0x1CC($s0)
    ctx->pc = 0x20b020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
label_20b024:
    // 0x20b024: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20b024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20b028:
    // 0x20b028: 0x40f809  jalr        $v0
label_20b02c:
    if (ctx->pc == 0x20B02Cu) {
        ctx->pc = 0x20B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B028u;
        // 0x20b02c: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B030u;
        goto label_20b030;
    }
    ctx->pc = 0x20B028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B030u);
        ctx->pc = 0x20B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B028u;
        // 0x20b02c: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B028u, 0x20B030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B030u;
label_20b030:
    // 0x20b030: 0x8e0601b0  lw          $a2, 0x1B0($s0)
    ctx->pc = 0x20b030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_20b034:
    // 0x20b034: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20b034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20b038:
    // 0x20b038: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x20b038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_20b03c:
    // 0x20b03c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b040:
    // 0x20b040: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20b040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20b044:
    // 0x20b044: 0x40f809  jalr        $v0
label_20b048:
    if (ctx->pc == 0x20B048u) {
        ctx->pc = 0x20B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B044u;
        // 0x20b048: 0x3280a  movz        $a1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B04Cu;
        goto label_20b04c;
    }
    ctx->pc = 0x20B044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B04Cu);
        ctx->pc = 0x20B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B044u;
        // 0x20b048: 0x3280a  movz        $a1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B044u, 0x20B04Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B04Cu;
label_20b04c:
    // 0x20b04c: 0x8e0301a8  lw          $v1, 0x1A8($s0)
    ctx->pc = 0x20b04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_20b050:
    // 0x20b050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b054:
    // 0x20b054: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20b054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20b058:
    // 0x20b058: 0x40f809  jalr        $v0
label_20b05c:
    if (ctx->pc == 0x20B05Cu) {
        ctx->pc = 0x20B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B058u;
        // 0x20b05c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B060u;
        goto label_20b060;
    }
    ctx->pc = 0x20B058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B060u);
        ctx->pc = 0x20B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B058u;
        // 0x20b05c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B058u, 0x20B060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B060u;
label_20b060:
    // 0x20b060: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x20b060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20b064:
    // 0x20b064: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_20b068:
    if (ctx->pc == 0x20B068u) {
        ctx->pc = 0x20B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B064u;
        // 0x20b068: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B06Cu;
        goto label_20b06c;
    }
    ctx->pc = 0x20B064u;
    {
        const bool branch_taken_0x20b064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b064) {
            ctx->pc = 0x20B068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B064u;
            // 0x20b068: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B0CCu;
            goto label_20b0cc;
        }
    }
    ctx->pc = 0x20B06Cu;
label_20b06c:
    // 0x20b06c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x20b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20b070:
    // 0x20b070: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x20b070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_20b074:
    // 0x20b074: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x20b074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20b078:
    // 0x20b078: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x20b078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_20b07c:
    // 0x20b07c: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x20b07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_20b080:
    // 0x20b080: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x20b080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20b084:
    // 0x20b084: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20b084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20b088:
    // 0x20b088: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x20b088u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
label_20b08c:
    // 0x20b08c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x20b08cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_20b090:
    // 0x20b090: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x20b090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_20b094:
    // 0x20b094: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_20b098:
    if (ctx->pc == 0x20B098u) {
        ctx->pc = 0x20B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B094u;
        // 0x20b098: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B09Cu;
        goto label_20b09c;
    }
    ctx->pc = 0x20B094u;
    {
        const bool branch_taken_0x20b094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b094) {
            ctx->pc = 0x20B098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B094u;
            // 0x20b098: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B0CCu;
            goto label_20b0cc;
        }
    }
    ctx->pc = 0x20B09Cu;
label_20b09c:
    // 0x20b09c: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x20b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_20b0a0:
    // 0x20b0a0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x20b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_20b0a4:
    // 0x20b0a4: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_20b0a8:
    if (ctx->pc == 0x20B0A8u) {
        ctx->pc = 0x20B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0A4u;
        // 0x20b0a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B0ACu;
        goto label_20b0ac;
    }
    ctx->pc = 0x20B0A4u;
    {
        const bool branch_taken_0x20b0a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b0a4) {
            ctx->pc = 0x20B0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B0A4u;
            // 0x20b0a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B0CCu;
            goto label_20b0cc;
        }
    }
    ctx->pc = 0x20B0ACu;
label_20b0ac:
    // 0x20b0ac: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x20b0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20b0b0:
    // 0x20b0b0: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x20b0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_20b0b4:
    // 0x20b0b4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x20b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_20b0b8:
    // 0x20b0b8: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x20b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_20b0bc:
    // 0x20b0bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20b0c0:
    // 0x20b0c0: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x20b0c0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
label_20b0c4:
    // 0x20b0c4: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x20b0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_20b0c8:
    // 0x20b0c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20b0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20b0cc:
    // 0x20b0cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20b0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20b0d0:
    // 0x20b0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b0d4:
    // 0x20b0d4: 0x3e00008  jr          $ra
label_20b0d8:
    if (ctx->pc == 0x20B0D8u) {
        ctx->pc = 0x20B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0D4u;
        // 0x20b0d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B0DCu;
        goto label_20b0dc;
    }
    ctx->pc = 0x20B0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0D4u;
        // 0x20b0d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B0DCu;
label_20b0dc:
    // 0x20b0dc: 0x0  nop
    ctx->pc = 0x20b0dcu;
    // NOP
    ctx->pc = 0x20b0e0u;
}
