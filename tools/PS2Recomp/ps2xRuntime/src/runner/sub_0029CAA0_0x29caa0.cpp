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

// Function: sub_0029CAA0
// Address: 0x29caa0 - 0x29cb80
void sub_0029CAA0_0x29caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CAA0_0x29caa0");
#endif

    switch (ctx->pc) {
        case 0x29caa0u: goto label_29caa0;
        case 0x29caa4u: goto label_29caa4;
        case 0x29caa8u: goto label_29caa8;
        case 0x29caacu: goto label_29caac;
        case 0x29cab0u: goto label_29cab0;
        case 0x29cab4u: goto label_29cab4;
        case 0x29cab8u: goto label_29cab8;
        case 0x29cabcu: goto label_29cabc;
        case 0x29cac0u: goto label_29cac0;
        case 0x29cac4u: goto label_29cac4;
        case 0x29cac8u: goto label_29cac8;
        case 0x29caccu: goto label_29cacc;
        case 0x29cad0u: goto label_29cad0;
        case 0x29cad4u: goto label_29cad4;
        case 0x29cad8u: goto label_29cad8;
        case 0x29cadcu: goto label_29cadc;
        case 0x29cae0u: goto label_29cae0;
        case 0x29cae4u: goto label_29cae4;
        case 0x29cae8u: goto label_29cae8;
        case 0x29caecu: goto label_29caec;
        case 0x29caf0u: goto label_29caf0;
        case 0x29caf4u: goto label_29caf4;
        case 0x29caf8u: goto label_29caf8;
        case 0x29cafcu: goto label_29cafc;
        case 0x29cb00u: goto label_29cb00;
        case 0x29cb04u: goto label_29cb04;
        case 0x29cb08u: goto label_29cb08;
        case 0x29cb0cu: goto label_29cb0c;
        case 0x29cb10u: goto label_29cb10;
        case 0x29cb14u: goto label_29cb14;
        case 0x29cb18u: goto label_29cb18;
        case 0x29cb1cu: goto label_29cb1c;
        case 0x29cb20u: goto label_29cb20;
        case 0x29cb24u: goto label_29cb24;
        case 0x29cb28u: goto label_29cb28;
        case 0x29cb2cu: goto label_29cb2c;
        case 0x29cb30u: goto label_29cb30;
        case 0x29cb34u: goto label_29cb34;
        case 0x29cb38u: goto label_29cb38;
        case 0x29cb3cu: goto label_29cb3c;
        case 0x29cb40u: goto label_29cb40;
        case 0x29cb44u: goto label_29cb44;
        case 0x29cb48u: goto label_29cb48;
        case 0x29cb4cu: goto label_29cb4c;
        case 0x29cb50u: goto label_29cb50;
        case 0x29cb54u: goto label_29cb54;
        case 0x29cb58u: goto label_29cb58;
        case 0x29cb5cu: goto label_29cb5c;
        case 0x29cb60u: goto label_29cb60;
        case 0x29cb64u: goto label_29cb64;
        case 0x29cb68u: goto label_29cb68;
        case 0x29cb6cu: goto label_29cb6c;
        case 0x29cb70u: goto label_29cb70;
        case 0x29cb74u: goto label_29cb74;
        case 0x29cb78u: goto label_29cb78;
        case 0x29cb7cu: goto label_29cb7c;
        default: break;
    }

    ctx->pc = 0x29caa0u;

label_29caa0:
    // 0x29caa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29caa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29caa4:
    // 0x29caa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29caa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29caa8:
    // 0x29caa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29caa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29caac:
    // 0x29caac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29caacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29cab0:
    // 0x29cab0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29cab4:
    // 0x29cab4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x29cab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_29cab8:
    // 0x29cab8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_29cabc:
    if (ctx->pc == 0x29CABCu) {
        ctx->pc = 0x29CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAB8u;
        // 0x29cabc: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CAC0u;
        goto label_29cac0;
    }
    ctx->pc = 0x29CAB8u;
    {
        const bool branch_taken_0x29cab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cab8) {
            ctx->pc = 0x29CABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CAB8u;
            // 0x29cabc: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CAD8u;
            goto label_29cad8;
        }
    }
    ctx->pc = 0x29CAC0u;
label_29cac0:
    // 0x29cac0: 0xc0a71c2  jal         func_29C708
label_29cac4:
    if (ctx->pc == 0x29CAC4u) {
        ctx->pc = 0x29CAC8u;
        goto label_29cac8;
    }
    ctx->pc = 0x29CAC0u;
    SET_GPR_U32(ctx, 31, 0x29CAC8u);
    ctx->pc = 0x29C708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C708u, 0x29CAC0u, 0x29CAC8u)) {
        return;
    }
    ctx->pc = 0x29CAC8u;
label_29cac8:
    // 0x29cac8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29cacc:
    // 0x29cacc: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
label_29cad0:
    if (ctx->pc == 0x29CAD0u) {
        ctx->pc = 0x29CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CACCu;
        // 0x29cad0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CAD4u;
        goto label_29cad4;
    }
    ctx->pc = 0x29CACCu;
    {
        const bool branch_taken_0x29cacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x29CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CACCu;
        // 0x29cad0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cacc) {
            ctx->pc = 0x29CB70u;
            goto label_29cb70;
        }
    }
    ctx->pc = 0x29CAD4u;
label_29cad4:
    // 0x29cad4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29cad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29cad8:
    // 0x29cad8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29cadc:
    // 0x29cadc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x29cadcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29cae0:
    // 0x29cae0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_29cae4:
    if (ctx->pc == 0x29CAE4u) {
        ctx->pc = 0x29CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAE0u;
        // 0x29cae4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CAE8u;
        goto label_29cae8;
    }
    ctx->pc = 0x29CAE0u;
    {
        const bool branch_taken_0x29cae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cae0) {
            ctx->pc = 0x29CAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CAE0u;
            // 0x29cae4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CAF8u;
            goto label_29caf8;
        }
    }
    ctx->pc = 0x29CAE8u;
label_29cae8:
    // 0x29cae8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x29cae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29caec:
    // 0x29caec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29caecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29caf0:
    // 0x29caf0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_29caf4:
    if (ctx->pc == 0x29CAF4u) {
        ctx->pc = 0x29CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAF0u;
        // 0x29caf4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CAF8u;
        goto label_29caf8;
    }
    ctx->pc = 0x29CAF0u;
    {
        const bool branch_taken_0x29caf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAF0u;
        // 0x29caf4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29caf0) {
            ctx->pc = 0x29CB70u;
            goto label_29cb70;
        }
    }
    ctx->pc = 0x29CAF8u;
label_29caf8:
    // 0x29caf8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x29caf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_29cafc:
    // 0x29cafc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_29cb00:
    if (ctx->pc == 0x29CB00u) {
        ctx->pc = 0x29CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAFCu;
        // 0x29cb00: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB04u;
        goto label_29cb04;
    }
    ctx->pc = 0x29CAFCu;
    {
        const bool branch_taken_0x29cafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cafc) {
            ctx->pc = 0x29CB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CAFCu;
            // 0x29cb00: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CB30u;
            goto label_29cb30;
        }
    }
    ctx->pc = 0x29CB04u;
label_29cb04:
    // 0x29cb04: 0xc0a71a6  jal         func_29C698
label_29cb08:
    if (ctx->pc == 0x29CB08u) {
        ctx->pc = 0x29CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB04u;
        // 0x29cb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB0Cu;
        goto label_29cb0c;
    }
    ctx->pc = 0x29CB04u;
    SET_GPR_U32(ctx, 31, 0x29CB0Cu);
    ctx->pc = 0x29CB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB04u;
    // 0x29cb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C698u, 0x29CB04u, 0x29CB0Cu)) {
        return;
    }
    ctx->pc = 0x29CB0Cu;
label_29cb0c:
    // 0x29cb0c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29cb10:
    // 0x29cb10: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29cb14:
    // 0x29cb14: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x29cb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29cb18:
    // 0x29cb18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_29cb1c:
    if (ctx->pc == 0x29CB1Cu) {
        ctx->pc = 0x29CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB18u;
        // 0x29cb1c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB20u;
        goto label_29cb20;
    }
    ctx->pc = 0x29CB18u;
    {
        const bool branch_taken_0x29cb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cb18) {
            ctx->pc = 0x29CB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CB18u;
            // 0x29cb1c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CB30u;
            goto label_29cb30;
        }
    }
    ctx->pc = 0x29CB20u;
label_29cb20:
    // 0x29cb20: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x29cb20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29cb24:
    // 0x29cb24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29cb28:
    // 0x29cb28: 0x10000011  b           . + 4 + (0x11 << 2)
label_29cb2c:
    if (ctx->pc == 0x29CB2Cu) {
        ctx->pc = 0x29CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB28u;
        // 0x29cb2c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB30u;
        goto label_29cb30;
    }
    ctx->pc = 0x29CB28u;
    {
        const bool branch_taken_0x29cb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB28u;
        // 0x29cb2c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cb28) {
            ctx->pc = 0x29CB70u;
            goto label_29cb70;
        }
    }
    ctx->pc = 0x29CB30u;
label_29cb30:
    // 0x29cb30: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_29cb34:
    if (ctx->pc == 0x29CB34u) {
        ctx->pc = 0x29CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB30u;
        // 0x29cb34: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB38u;
        goto label_29cb38;
    }
    ctx->pc = 0x29CB30u;
    {
        const bool branch_taken_0x29cb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cb30) {
            ctx->pc = 0x29CB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CB30u;
            // 0x29cb34: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CB50u;
            goto label_29cb50;
        }
    }
    ctx->pc = 0x29CB38u;
label_29cb38:
    // 0x29cb38: 0xc0a720c  jal         func_29C830
label_29cb3c:
    if (ctx->pc == 0x29CB3Cu) {
        ctx->pc = 0x29CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB38u;
        // 0x29cb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB40u;
        goto label_29cb40;
    }
    ctx->pc = 0x29CB38u;
    SET_GPR_U32(ctx, 31, 0x29CB40u);
    ctx->pc = 0x29CB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB38u;
    // 0x29cb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C830u, 0x29CB38u, 0x29CB40u)) {
        return;
    }
    ctx->pc = 0x29CB40u;
label_29cb40:
    // 0x29cb40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_29cb44:
    if (ctx->pc == 0x29CB44u) {
        ctx->pc = 0x29CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB40u;
        // 0x29cb44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB48u;
        goto label_29cb48;
    }
    ctx->pc = 0x29CB40u;
    {
        const bool branch_taken_0x29cb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB40u;
        // 0x29cb44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cb40) {
            ctx->pc = 0x29CB60u;
            goto label_29cb60;
        }
    }
    ctx->pc = 0x29CB48u;
label_29cb48:
    // 0x29cb48: 0x1000000a  b           . + 4 + (0xA << 2)
label_29cb4c:
    if (ctx->pc == 0x29CB4Cu) {
        ctx->pc = 0x29CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB48u;
        // 0x29cb4c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB50u;
        goto label_29cb50;
    }
    ctx->pc = 0x29CB48u;
    {
        const bool branch_taken_0x29cb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB48u;
        // 0x29cb4c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cb48) {
            ctx->pc = 0x29CB74u;
            goto label_29cb74;
        }
    }
    ctx->pc = 0x29CB50u;
label_29cb50:
    // 0x29cb50: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_29cb54:
    if (ctx->pc == 0x29CB54u) {
        ctx->pc = 0x29CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB50u;
        // 0x29cb54: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB58u;
        goto label_29cb58;
    }
    ctx->pc = 0x29CB50u;
    {
        const bool branch_taken_0x29cb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cb50) {
            ctx->pc = 0x29CB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CB50u;
            // 0x29cb54: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CB64u;
            goto label_29cb64;
        }
    }
    ctx->pc = 0x29CB58u;
label_29cb58:
    // 0x29cb58: 0xc0a71ee  jal         func_29C7B8
label_29cb5c:
    if (ctx->pc == 0x29CB5Cu) {
        ctx->pc = 0x29CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB58u;
        // 0x29cb5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB60u;
        goto label_29cb60;
    }
    ctx->pc = 0x29CB58u;
    SET_GPR_U32(ctx, 31, 0x29CB60u);
    ctx->pc = 0x29CB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB58u;
    // 0x29cb5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C7B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C7B8u, 0x29CB58u, 0x29CB60u)) {
        return;
    }
    ctx->pc = 0x29CB60u;
label_29cb60:
    // 0x29cb60: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x29cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_29cb64:
    // 0x29cb64: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x29cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_29cb68:
    // 0x29cb68: 0x40f809  jalr        $v0
label_29cb6c:
    if (ctx->pc == 0x29CB6Cu) {
        ctx->pc = 0x29CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB68u;
        // 0x29cb6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB70u;
        goto label_29cb70;
    }
    ctx->pc = 0x29CB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29CB70u);
        ctx->pc = 0x29CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB68u;
        // 0x29cb6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CB68u, 0x29CB70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CB70u;
label_29cb70:
    // 0x29cb70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29cb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29cb74:
    // 0x29cb74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29cb74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29cb78:
    // 0x29cb78: 0x3e00008  jr          $ra
label_29cb7c:
    if (ctx->pc == 0x29CB7Cu) {
        ctx->pc = 0x29CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB78u;
        // 0x29cb7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB80u;
        goto label_fallthrough_0x29cb78;
    }
    ctx->pc = 0x29CB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB78u;
        // 0x29cb7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29cb78:
    ctx->pc = 0x29CB80u;
}
