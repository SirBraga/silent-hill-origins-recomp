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

// Function: sub_0029C9D0
// Address: 0x29c9d0 - 0x29caa0
void sub_0029C9D0_0x29c9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C9D0_0x29c9d0");
#endif

    switch (ctx->pc) {
        case 0x29c9d0u: goto label_29c9d0;
        case 0x29c9d4u: goto label_29c9d4;
        case 0x29c9d8u: goto label_29c9d8;
        case 0x29c9dcu: goto label_29c9dc;
        case 0x29c9e0u: goto label_29c9e0;
        case 0x29c9e4u: goto label_29c9e4;
        case 0x29c9e8u: goto label_29c9e8;
        case 0x29c9ecu: goto label_29c9ec;
        case 0x29c9f0u: goto label_29c9f0;
        case 0x29c9f4u: goto label_29c9f4;
        case 0x29c9f8u: goto label_29c9f8;
        case 0x29c9fcu: goto label_29c9fc;
        case 0x29ca00u: goto label_29ca00;
        case 0x29ca04u: goto label_29ca04;
        case 0x29ca08u: goto label_29ca08;
        case 0x29ca0cu: goto label_29ca0c;
        case 0x29ca10u: goto label_29ca10;
        case 0x29ca14u: goto label_29ca14;
        case 0x29ca18u: goto label_29ca18;
        case 0x29ca1cu: goto label_29ca1c;
        case 0x29ca20u: goto label_29ca20;
        case 0x29ca24u: goto label_29ca24;
        case 0x29ca28u: goto label_29ca28;
        case 0x29ca2cu: goto label_29ca2c;
        case 0x29ca30u: goto label_29ca30;
        case 0x29ca34u: goto label_29ca34;
        case 0x29ca38u: goto label_29ca38;
        case 0x29ca3cu: goto label_29ca3c;
        case 0x29ca40u: goto label_29ca40;
        case 0x29ca44u: goto label_29ca44;
        case 0x29ca48u: goto label_29ca48;
        case 0x29ca4cu: goto label_29ca4c;
        case 0x29ca50u: goto label_29ca50;
        case 0x29ca54u: goto label_29ca54;
        case 0x29ca58u: goto label_29ca58;
        case 0x29ca5cu: goto label_29ca5c;
        case 0x29ca60u: goto label_29ca60;
        case 0x29ca64u: goto label_29ca64;
        case 0x29ca68u: goto label_29ca68;
        case 0x29ca6cu: goto label_29ca6c;
        case 0x29ca70u: goto label_29ca70;
        case 0x29ca74u: goto label_29ca74;
        case 0x29ca78u: goto label_29ca78;
        case 0x29ca7cu: goto label_29ca7c;
        case 0x29ca80u: goto label_29ca80;
        case 0x29ca84u: goto label_29ca84;
        case 0x29ca88u: goto label_29ca88;
        case 0x29ca8cu: goto label_29ca8c;
        case 0x29ca90u: goto label_29ca90;
        case 0x29ca94u: goto label_29ca94;
        case 0x29ca98u: goto label_29ca98;
        case 0x29ca9cu: goto label_29ca9c;
        default: break;
    }

    ctx->pc = 0x29c9d0u;

label_29c9d0:
    // 0x29c9d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29c9d4:
    // 0x29c9d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29c9d8:
    // 0x29c9d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29c9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29c9dc:
    // 0x29c9dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29c9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c9e0:
    // 0x29c9e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29c9e4:
    // 0x29c9e4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x29c9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_29c9e8:
    // 0x29c9e8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_29c9ec:
    if (ctx->pc == 0x29C9ECu) {
        ctx->pc = 0x29C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9E8u;
        // 0x29c9ec: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C9F0u;
        goto label_29c9f0;
    }
    ctx->pc = 0x29C9E8u;
    {
        const bool branch_taken_0x29c9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c9e8) {
            ctx->pc = 0x29C9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C9E8u;
            // 0x29c9ec: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CA08u;
            goto label_29ca08;
        }
    }
    ctx->pc = 0x29C9F0u;
label_29c9f0:
    // 0x29c9f0: 0xc0a71c2  jal         func_29C708
label_29c9f4:
    if (ctx->pc == 0x29C9F4u) {
        ctx->pc = 0x29C9F8u;
        goto label_29c9f8;
    }
    ctx->pc = 0x29C9F0u;
    SET_GPR_U32(ctx, 31, 0x29C9F8u);
    ctx->pc = 0x29C708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C708u, 0x29C9F0u, 0x29C9F8u)) {
        return;
    }
    ctx->pc = 0x29C9F8u;
label_29c9f8:
    // 0x29c9f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29c9fc:
    // 0x29c9fc: 0x10430023  beq         $v0, $v1, . + 4 + (0x23 << 2)
label_29ca00:
    if (ctx->pc == 0x29CA00u) {
        ctx->pc = 0x29CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9FCu;
        // 0x29ca00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CA04u;
        goto label_29ca04;
    }
    ctx->pc = 0x29C9FCu;
    {
        const bool branch_taken_0x29c9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x29CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9FCu;
        // 0x29ca00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c9fc) {
            ctx->pc = 0x29CA8Cu;
            goto label_29ca8c;
        }
    }
    ctx->pc = 0x29CA04u;
label_29ca04:
    // 0x29ca04: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29ca04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29ca08:
    // 0x29ca08: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29ca0c:
    // 0x29ca0c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x29ca0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29ca10:
    // 0x29ca10: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_29ca14:
    if (ctx->pc == 0x29CA14u) {
        ctx->pc = 0x29CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA10u;
        // 0x29ca14: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CA18u;
        goto label_29ca18;
    }
    ctx->pc = 0x29CA10u;
    {
        const bool branch_taken_0x29ca10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ca10) {
            ctx->pc = 0x29CA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CA10u;
            // 0x29ca14: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CA8Cu;
            goto label_29ca8c;
        }
    }
    ctx->pc = 0x29CA18u;
label_29ca18:
    // 0x29ca18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29ca1c:
    // 0x29ca1c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x29ca1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_29ca20:
    // 0x29ca20: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_29ca24:
    if (ctx->pc == 0x29CA24u) {
        ctx->pc = 0x29CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA20u;
        // 0x29ca24: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CA28u;
        goto label_29ca28;
    }
    ctx->pc = 0x29CA20u;
    {
        const bool branch_taken_0x29ca20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ca20) {
            ctx->pc = 0x29CA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CA20u;
            // 0x29ca24: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CA4Cu;
            goto label_29ca4c;
        }
    }
    ctx->pc = 0x29CA28u;
label_29ca28:
    // 0x29ca28: 0xc0a71a6  jal         func_29C698
label_29ca2c:
    if (ctx->pc == 0x29CA2Cu) {
        ctx->pc = 0x29CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA28u;
        // 0x29ca2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CA30u;
        goto label_29ca30;
    }
    ctx->pc = 0x29CA28u;
    SET_GPR_U32(ctx, 31, 0x29CA30u);
    ctx->pc = 0x29CA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CA28u;
    // 0x29ca2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C698u, 0x29CA28u, 0x29CA30u)) {
        return;
    }
    ctx->pc = 0x29CA30u;
label_29ca30:
    // 0x29ca30: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29ca34:
    // 0x29ca34: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29ca38:
    // 0x29ca38: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x29ca38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29ca3c:
    // 0x29ca3c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_29ca40:
    if (ctx->pc == 0x29CA40u) {
        ctx->pc = 0x29CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA3Cu;
        // 0x29ca40: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CA44u;
        goto label_29ca44;
    }
    ctx->pc = 0x29CA3Cu;
    {
        const bool branch_taken_0x29ca3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ca3c) {
            ctx->pc = 0x29CA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CA3Cu;
            // 0x29ca40: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CA4Cu;
            goto label_29ca4c;
        }
    }
    ctx->pc = 0x29CA44u;
label_29ca44:
    // 0x29ca44: 0x10000011  b           . + 4 + (0x11 << 2)
label_29ca48:
    if (ctx->pc == 0x29CA48u) {
        ctx->pc = 0x29CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA44u;
        // 0x29ca48: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CA4Cu;
        goto label_29ca4c;
    }
    ctx->pc = 0x29CA44u;
    {
        const bool branch_taken_0x29ca44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA44u;
        // 0x29ca48: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca44) {
            ctx->pc = 0x29CA8Cu;
            goto label_29ca8c;
        }
    }
    ctx->pc = 0x29CA4Cu;
label_29ca4c:
    // 0x29ca4c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_29ca50:
    if (ctx->pc == 0x29CA50u) {
        ctx->pc = 0x29CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA4Cu;
        // 0x29ca50: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CA54u;
        goto label_29ca54;
    }
    ctx->pc = 0x29CA4Cu;
    {
        const bool branch_taken_0x29ca4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ca4c) {
            ctx->pc = 0x29CA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CA4Cu;
            // 0x29ca50: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CA6Cu;
            goto label_29ca6c;
        }
    }
    ctx->pc = 0x29CA54u;
label_29ca54:
    // 0x29ca54: 0xc0a720c  jal         func_29C830
label_29ca58:
    if (ctx->pc == 0x29CA58u) {
        ctx->pc = 0x29CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA54u;
        // 0x29ca58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CA5Cu;
        goto label_29ca5c;
    }
    ctx->pc = 0x29CA54u;
    SET_GPR_U32(ctx, 31, 0x29CA5Cu);
    ctx->pc = 0x29CA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CA54u;
    // 0x29ca58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C830u, 0x29CA54u, 0x29CA5Cu)) {
        return;
    }
    ctx->pc = 0x29CA5Cu;
label_29ca5c:
    // 0x29ca5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_29ca60:
    if (ctx->pc == 0x29CA60u) {
        ctx->pc = 0x29CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA5Cu;
        // 0x29ca60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CA64u;
        goto label_29ca64;
    }
    ctx->pc = 0x29CA5Cu;
    {
        const bool branch_taken_0x29ca5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA5Cu;
        // 0x29ca60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca5c) {
            ctx->pc = 0x29CA7Cu;
            goto label_29ca7c;
        }
    }
    ctx->pc = 0x29CA64u;
label_29ca64:
    // 0x29ca64: 0x1000000a  b           . + 4 + (0xA << 2)
label_29ca68:
    if (ctx->pc == 0x29CA68u) {
        ctx->pc = 0x29CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA64u;
        // 0x29ca68: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CA6Cu;
        goto label_29ca6c;
    }
    ctx->pc = 0x29CA64u;
    {
        const bool branch_taken_0x29ca64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA64u;
        // 0x29ca68: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca64) {
            ctx->pc = 0x29CA90u;
            goto label_29ca90;
        }
    }
    ctx->pc = 0x29CA6Cu;
label_29ca6c:
    // 0x29ca6c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_29ca70:
    if (ctx->pc == 0x29CA70u) {
        ctx->pc = 0x29CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA6Cu;
        // 0x29ca70: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CA74u;
        goto label_29ca74;
    }
    ctx->pc = 0x29CA6Cu;
    {
        const bool branch_taken_0x29ca6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ca6c) {
            ctx->pc = 0x29CA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CA6Cu;
            // 0x29ca70: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CA80u;
            goto label_29ca80;
        }
    }
    ctx->pc = 0x29CA74u;
label_29ca74:
    // 0x29ca74: 0xc0a71ee  jal         func_29C7B8
label_29ca78:
    if (ctx->pc == 0x29CA78u) {
        ctx->pc = 0x29CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA74u;
        // 0x29ca78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CA7Cu;
        goto label_29ca7c;
    }
    ctx->pc = 0x29CA74u;
    SET_GPR_U32(ctx, 31, 0x29CA7Cu);
    ctx->pc = 0x29CA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CA74u;
    // 0x29ca78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C7B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C7B8u, 0x29CA74u, 0x29CA7Cu)) {
        return;
    }
    ctx->pc = 0x29CA7Cu;
label_29ca7c:
    // 0x29ca7c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x29ca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_29ca80:
    // 0x29ca80: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x29ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_29ca84:
    // 0x29ca84: 0x40f809  jalr        $v0
label_29ca88:
    if (ctx->pc == 0x29CA88u) {
        ctx->pc = 0x29CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA84u;
        // 0x29ca88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CA8Cu;
        goto label_29ca8c;
    }
    ctx->pc = 0x29CA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29CA8Cu);
        ctx->pc = 0x29CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA84u;
        // 0x29ca88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CA84u, 0x29CA8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CA8Cu;
label_29ca8c:
    // 0x29ca8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29ca8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29ca90:
    // 0x29ca90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ca90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ca94:
    // 0x29ca94: 0x3e00008  jr          $ra
label_29ca98:
    if (ctx->pc == 0x29CA98u) {
        ctx->pc = 0x29CA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA94u;
        // 0x29ca98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CA9Cu;
        goto label_29ca9c;
    }
    ctx->pc = 0x29CA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA94u;
        // 0x29ca98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CA9Cu;
label_29ca9c:
    // 0x29ca9c: 0x0  nop
    ctx->pc = 0x29ca9cu;
    // NOP
    ctx->pc = 0x29caa0u;
}
