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

// Function: sub_001FAD20
// Address: 0x1fad20 - 0x1faef8
void sub_001FAD20_0x1fad20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAD20_0x1fad20");
#endif

    switch (ctx->pc) {
        case 0x1fad20u: goto label_1fad20;
        case 0x1fad24u: goto label_1fad24;
        case 0x1fad28u: goto label_1fad28;
        case 0x1fad2cu: goto label_1fad2c;
        case 0x1fad30u: goto label_1fad30;
        case 0x1fad34u: goto label_1fad34;
        case 0x1fad38u: goto label_1fad38;
        case 0x1fad3cu: goto label_1fad3c;
        case 0x1fad40u: goto label_1fad40;
        case 0x1fad44u: goto label_1fad44;
        case 0x1fad48u: goto label_1fad48;
        case 0x1fad4cu: goto label_1fad4c;
        case 0x1fad50u: goto label_1fad50;
        case 0x1fad54u: goto label_1fad54;
        case 0x1fad58u: goto label_1fad58;
        case 0x1fad5cu: goto label_1fad5c;
        case 0x1fad60u: goto label_1fad60;
        case 0x1fad64u: goto label_1fad64;
        case 0x1fad68u: goto label_1fad68;
        case 0x1fad6cu: goto label_1fad6c;
        case 0x1fad70u: goto label_1fad70;
        case 0x1fad74u: goto label_1fad74;
        case 0x1fad78u: goto label_1fad78;
        case 0x1fad7cu: goto label_1fad7c;
        case 0x1fad80u: goto label_1fad80;
        case 0x1fad84u: goto label_1fad84;
        case 0x1fad88u: goto label_1fad88;
        case 0x1fad8cu: goto label_1fad8c;
        case 0x1fad90u: goto label_1fad90;
        case 0x1fad94u: goto label_1fad94;
        case 0x1fad98u: goto label_1fad98;
        case 0x1fad9cu: goto label_1fad9c;
        case 0x1fada0u: goto label_1fada0;
        case 0x1fada4u: goto label_1fada4;
        case 0x1fada8u: goto label_1fada8;
        case 0x1fadacu: goto label_1fadac;
        case 0x1fadb0u: goto label_1fadb0;
        case 0x1fadb4u: goto label_1fadb4;
        case 0x1fadb8u: goto label_1fadb8;
        case 0x1fadbcu: goto label_1fadbc;
        case 0x1fadc0u: goto label_1fadc0;
        case 0x1fadc4u: goto label_1fadc4;
        case 0x1fadc8u: goto label_1fadc8;
        case 0x1fadccu: goto label_1fadcc;
        case 0x1fadd0u: goto label_1fadd0;
        case 0x1fadd4u: goto label_1fadd4;
        case 0x1fadd8u: goto label_1fadd8;
        case 0x1faddcu: goto label_1faddc;
        case 0x1fade0u: goto label_1fade0;
        case 0x1fade4u: goto label_1fade4;
        case 0x1fade8u: goto label_1fade8;
        case 0x1fadecu: goto label_1fadec;
        case 0x1fadf0u: goto label_1fadf0;
        case 0x1fadf4u: goto label_1fadf4;
        case 0x1fadf8u: goto label_1fadf8;
        case 0x1fadfcu: goto label_1fadfc;
        case 0x1fae00u: goto label_1fae00;
        case 0x1fae04u: goto label_1fae04;
        case 0x1fae08u: goto label_1fae08;
        case 0x1fae0cu: goto label_1fae0c;
        case 0x1fae10u: goto label_1fae10;
        case 0x1fae14u: goto label_1fae14;
        case 0x1fae18u: goto label_1fae18;
        case 0x1fae1cu: goto label_1fae1c;
        case 0x1fae20u: goto label_1fae20;
        case 0x1fae24u: goto label_1fae24;
        case 0x1fae28u: goto label_1fae28;
        case 0x1fae2cu: goto label_1fae2c;
        case 0x1fae30u: goto label_1fae30;
        case 0x1fae34u: goto label_1fae34;
        case 0x1fae38u: goto label_1fae38;
        case 0x1fae3cu: goto label_1fae3c;
        case 0x1fae40u: goto label_1fae40;
        case 0x1fae44u: goto label_1fae44;
        case 0x1fae48u: goto label_1fae48;
        case 0x1fae4cu: goto label_1fae4c;
        case 0x1fae50u: goto label_1fae50;
        case 0x1fae54u: goto label_1fae54;
        case 0x1fae58u: goto label_1fae58;
        case 0x1fae5cu: goto label_1fae5c;
        case 0x1fae60u: goto label_1fae60;
        case 0x1fae64u: goto label_1fae64;
        case 0x1fae68u: goto label_1fae68;
        case 0x1fae6cu: goto label_1fae6c;
        case 0x1fae70u: goto label_1fae70;
        case 0x1fae74u: goto label_1fae74;
        case 0x1fae78u: goto label_1fae78;
        case 0x1fae7cu: goto label_1fae7c;
        case 0x1fae80u: goto label_1fae80;
        case 0x1fae84u: goto label_1fae84;
        case 0x1fae88u: goto label_1fae88;
        case 0x1fae8cu: goto label_1fae8c;
        case 0x1fae90u: goto label_1fae90;
        case 0x1fae94u: goto label_1fae94;
        case 0x1fae98u: goto label_1fae98;
        case 0x1fae9cu: goto label_1fae9c;
        case 0x1faea0u: goto label_1faea0;
        case 0x1faea4u: goto label_1faea4;
        case 0x1faea8u: goto label_1faea8;
        case 0x1faeacu: goto label_1faeac;
        case 0x1faeb0u: goto label_1faeb0;
        case 0x1faeb4u: goto label_1faeb4;
        case 0x1faeb8u: goto label_1faeb8;
        case 0x1faebcu: goto label_1faebc;
        case 0x1faec0u: goto label_1faec0;
        case 0x1faec4u: goto label_1faec4;
        case 0x1faec8u: goto label_1faec8;
        case 0x1faeccu: goto label_1faecc;
        case 0x1faed0u: goto label_1faed0;
        case 0x1faed4u: goto label_1faed4;
        case 0x1faed8u: goto label_1faed8;
        case 0x1faedcu: goto label_1faedc;
        case 0x1faee0u: goto label_1faee0;
        case 0x1faee4u: goto label_1faee4;
        case 0x1faee8u: goto label_1faee8;
        case 0x1faeecu: goto label_1faeec;
        case 0x1faef0u: goto label_1faef0;
        case 0x1faef4u: goto label_1faef4;
        default: break;
    }

    ctx->pc = 0x1fad20u;

label_1fad20:
    // 0x1fad20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1fad20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1fad24:
    // 0x1fad24: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1fad24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1fad28:
    // 0x1fad28: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1fad28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1fad2c:
    // 0x1fad2c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1fad2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fad30:
    // 0x1fad30: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1fad30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_1fad34:
    // 0x1fad34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fad34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fad38:
    // 0x1fad38: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1fad38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_1fad3c:
    // 0x1fad3c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1fad3cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fad40:
    // 0x1fad40: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1fad40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1fad44:
    // 0x1fad44: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1fad44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1fad48:
    // 0x1fad48: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1fad48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1fad4c:
    // 0x1fad4c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1fad4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fad50:
    // 0x1fad50: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1fad50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1fad54:
    // 0x1fad54: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1fad54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1fad58:
    // 0x1fad58: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1fad58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1fad5c:
    // 0x1fad5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fad5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1fad60:
    // 0x1fad60: 0xc07eaec  jal         func_1FABB0
label_1fad64:
    if (ctx->pc == 0x1FAD64u) {
        ctx->pc = 0x1FAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD60u;
        // 0x1fad64: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAD68u;
        goto label_1fad68;
    }
    ctx->pc = 0x1FAD60u;
    SET_GPR_U32(ctx, 31, 0x1FAD68u);
    ctx->pc = 0x1FAD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAD60u;
    // 0x1fad64: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FABB0u, 0x1FAD60u, 0x1FAD68u)) {
        return;
    }
    ctx->pc = 0x1FAD68u;
label_1fad68:
    // 0x1fad68: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
label_1fad6c:
    if (ctx->pc == 0x1FAD6Cu) {
        ctx->pc = 0x1FAD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD68u;
        // 0x1fad6c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAD70u;
        goto label_1fad70;
    }
    ctx->pc = 0x1FAD68u;
    {
        const bool branch_taken_0x1fad68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD68u;
        // 0x1fad6c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad68) {
            ctx->pc = 0x1FAEC8u;
            goto label_1faec8;
        }
    }
    ctx->pc = 0x1FAD70u;
label_1fad70:
    // 0x1fad70: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1fad70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1fad74:
    // 0x1fad74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fad74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fad78:
    // 0x1fad78: 0x10a00052  beqz        $a1, . + 4 + (0x52 << 2)
label_1fad7c:
    if (ctx->pc == 0x1FAD7Cu) {
        ctx->pc = 0x1FAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD78u;
        // 0x1fad7c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAD80u;
        goto label_1fad80;
    }
    ctx->pc = 0x1FAD78u;
    {
        const bool branch_taken_0x1fad78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD78u;
        // 0x1fad7c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad78) {
            ctx->pc = 0x1FAEC4u;
            goto label_1faec4;
        }
    }
    ctx->pc = 0x1FAD80u;
label_1fad80:
    // 0x1fad80: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1fad80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fad84:
    // 0x1fad84: 0x0  nop
    ctx->pc = 0x1fad84u;
    // NOP
label_1fad88:
    // 0x1fad88: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
label_1fad8c:
    if (ctx->pc == 0x1FAD8Cu) {
        ctx->pc = 0x1FAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD88u;
        // 0x1fad8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAD90u;
        goto label_1fad90;
    }
    ctx->pc = 0x1FAD88u;
    {
        const bool branch_taken_0x1fad88 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD88u;
        // 0x1fad8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad88) {
            ctx->pc = 0x1FADB0u;
            goto label_1fadb0;
        }
    }
    ctx->pc = 0x1FAD90u;
label_1fad90:
    // 0x1fad90: 0x8e4a0008  lw          $t2, 0x8($s2)
    ctx->pc = 0x1fad90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1fad94:
    // 0x1fad94: 0x2ca1821  addu        $v1, $s6, $t2
    ctx->pc = 0x1fad94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
label_1fad98:
    // 0x1fad98: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1fad98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1fad9c:
    // 0x1fad9c: 0x21782  srl         $v0, $v0, 30
    ctx->pc = 0x1fad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 30));
label_1fada0:
    // 0x1fada0: 0x14440043  bne         $v0, $a0, . + 4 + (0x43 << 2)
label_1fada4:
    if (ctx->pc == 0x1FADA4u) {
        ctx->pc = 0x1FADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADA0u;
        // 0x1fada4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FADA8u;
        goto label_1fada8;
    }
    ctx->pc = 0x1FADA0u;
    {
        const bool branch_taken_0x1fada0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADA0u;
        // 0x1fada4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fada0) {
            ctx->pc = 0x1FAEB0u;
            goto label_1faeb0;
        }
    }
    ctx->pc = 0x1FADA8u;
label_1fada8:
    // 0x1fada8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fadac:
    if (ctx->pc == 0x1FADACu) {
        ctx->pc = 0x1FADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADA8u;
        // 0x1fadac: 0x2ca5021  addu        $t2, $s6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FADB0u;
        goto label_1fadb0;
    }
    ctx->pc = 0x1FADA8u;
    {
        const bool branch_taken_0x1fada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADA8u;
        // 0x1fadac: 0x2ca5021  addu        $t2, $s6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fada8) {
            ctx->pc = 0x1FADB8u;
            goto label_1fadb8;
        }
    }
    ctx->pc = 0x1FADB0u;
label_1fadb0:
    // 0x1fadb0: 0x8e4a0008  lw          $t2, 0x8($s2)
    ctx->pc = 0x1fadb0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1fadb4:
    // 0x1fadb4: 0x2ca5021  addu        $t2, $s6, $t2
    ctx->pc = 0x1fadb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
label_1fadb8:
    // 0x1fadb8: 0x3c021fff  lui         $v0, 0x1FFF
    ctx->pc = 0x1fadb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
label_1fadbc:
    // 0x1fadbc: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x1fadbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_1fadc0:
    // 0x1fadc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fadc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1fadc4:
    // 0x1fadc4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1fadc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fadc8:
    // 0x1fadc8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1fadc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1fadcc:
    // 0x1fadcc: 0x31f42  srl         $v1, $v1, 29
    ctx->pc = 0x1fadccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 29));
label_1fadd0:
    // 0x1fadd0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fadd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1fadd4:
    // 0x1fadd4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1fadd8:
    if (ctx->pc == 0x1FADD8u) {
        ctx->pc = 0x1FADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADD4u;
        // 0x1fadd8: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FADDCu;
        goto label_1faddc;
    }
    ctx->pc = 0x1FADD4u;
    {
        const bool branch_taken_0x1fadd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADD4u;
        // 0x1fadd8: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fadd4) {
            ctx->pc = 0x1FADE0u;
            goto label_1fade0;
        }
    }
    ctx->pc = 0x1FADDCu;
label_1faddc:
    // 0x1faddc: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1faddcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fade0:
    // 0x1fade0: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x1fade0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1fade4:
    // 0x1fade4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1fade4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fade8:
    // 0x1fade8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fade8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fadec:
    // 0x1fadec: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1fadecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1fadf0:
    // 0x1fadf0: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x1fadf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_1fadf4:
    // 0x1fadf4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1fadf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fadf8:
    // 0x1fadf8: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1fadf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1fadfc:
    // 0x1fadfc: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x1fadfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_1fae00:
    // 0x1fae00: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1fae00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1fae04:
    // 0x1fae04: 0x40f809  jalr        $v0
label_1fae08:
    if (ctx->pc == 0x1FAE08u) {
        ctx->pc = 0x1FAE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE04u;
        // 0x1fae08: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE0Cu;
        goto label_1fae0c;
    }
    ctx->pc = 0x1FAE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FAE0Cu);
        ctx->pc = 0x1FAE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE04u;
        // 0x1fae08: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAE04u, 0x1FAE0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FAE0Cu;
label_1fae0c:
    // 0x1fae0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fae0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fae10:
    // 0x1fae10: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_1fae14:
    if (ctx->pc == 0x1FAE14u) {
        ctx->pc = 0x1FAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE10u;
        // 0x1fae14: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE18u;
        goto label_1fae18;
    }
    ctx->pc = 0x1FAE10u;
    {
        const bool branch_taken_0x1fae10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fae10) {
            ctx->pc = 0x1FAE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAE10u;
            // 0x1fae14: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAEACu;
            goto label_1faeac;
        }
    }
    ctx->pc = 0x1FAE18u;
label_1fae18:
    // 0x1fae18: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_1fae1c:
    if (ctx->pc == 0x1FAE1Cu) {
        ctx->pc = 0x1FAE20u;
        goto label_1fae20;
    }
    ctx->pc = 0x1FAE18u;
    {
        const bool branch_taken_0x1fae18 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fae18) {
            ctx->pc = 0x1FAE28u;
            goto label_1fae28;
        }
    }
    ctx->pc = 0x1FAE20u;
label_1fae20:
    // 0x1fae20: 0x10000021  b           . + 4 + (0x21 << 2)
label_1fae24:
    if (ctx->pc == 0x1FAE24u) {
        ctx->pc = 0x1FAE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE20u;
        // 0x1fae24: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE28u;
        goto label_1fae28;
    }
    ctx->pc = 0x1FAE20u;
    {
        const bool branch_taken_0x1fae20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE20u;
        // 0x1fae24: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae20) {
            ctx->pc = 0x1FAEA8u;
            goto label_1faea8;
        }
    }
    ctx->pc = 0x1FAE28u;
label_1fae28:
    // 0x1fae28: 0x52700020  beql        $s3, $s0, . + 4 + (0x20 << 2)
label_1fae2c:
    if (ctx->pc == 0x1FAE2Cu) {
        ctx->pc = 0x1FAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE28u;
        // 0x1fae2c: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE30u;
        goto label_1fae30;
    }
    ctx->pc = 0x1FAE28u;
    {
        const bool branch_taken_0x1fae28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x1fae28) {
            ctx->pc = 0x1FAE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAE28u;
            // 0x1fae2c: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAEACu;
            goto label_1faeac;
        }
    }
    ctx->pc = 0x1FAE30u;
label_1fae30:
    // 0x1fae30: 0x12a0001b  beqz        $s5, . + 4 + (0x1B << 2)
label_1fae34:
    if (ctx->pc == 0x1FAE34u) {
        ctx->pc = 0x1FAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE30u;
        // 0x1fae34: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE38u;
        goto label_1fae38;
    }
    ctx->pc = 0x1FAE30u;
    {
        const bool branch_taken_0x1fae30 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE30u;
        // 0x1fae34: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae30) {
            ctx->pc = 0x1FAEA0u;
            goto label_1faea0;
        }
    }
    ctx->pc = 0x1FAE38u;
label_1fae38:
    // 0x1fae38: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1fae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1fae3c:
    // 0x1fae3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fae3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fae40:
    // 0x1fae40: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1fae40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fae44:
    // 0x1fae44: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x1fae44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_1fae48:
    // 0x1fae48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fae48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fae4c:
    // 0x1fae4c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1fae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1fae50:
    // 0x1fae50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fae50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fae54:
    // 0x1fae54: 0x40f809  jalr        $v0
label_1fae58:
    if (ctx->pc == 0x1FAE58u) {
        ctx->pc = 0x1FAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE54u;
        // 0x1fae58: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE5Cu;
        goto label_1fae5c;
    }
    ctx->pc = 0x1FAE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FAE5Cu);
        ctx->pc = 0x1FAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE54u;
        // 0x1fae58: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAE54u, 0x1FAE5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FAE5Cu;
label_1fae5c:
    // 0x1fae5c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1fae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1fae60:
    // 0x1fae60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fae60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fae64:
    // 0x1fae64: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1fae64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fae68:
    // 0x1fae68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fae68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fae6c:
    // 0x1fae6c: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x1fae6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_1fae70:
    // 0x1fae70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1fae70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fae74:
    // 0x1fae74: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1fae74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1fae78:
    // 0x1fae78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fae78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fae7c:
    // 0x1fae7c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1fae7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1fae80:
    // 0x1fae80: 0x40f809  jalr        $v0
label_1fae84:
    if (ctx->pc == 0x1FAE84u) {
        ctx->pc = 0x1FAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE80u;
        // 0x1fae84: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE88u;
        goto label_1fae88;
    }
    ctx->pc = 0x1FAE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FAE88u);
        ctx->pc = 0x1FAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE80u;
        // 0x1fae84: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAE80u, 0x1FAE88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FAE88u;
label_1fae88:
    // 0x1fae88: 0x5222000f  beql        $s1, $v0, . + 4 + (0xF << 2)
label_1fae8c:
    if (ctx->pc == 0x1FAE8Cu) {
        ctx->pc = 0x1FAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE88u;
        // 0x1fae8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE90u;
        goto label_1fae90;
    }
    ctx->pc = 0x1FAE88u;
    {
        const bool branch_taken_0x1fae88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fae88) {
            ctx->pc = 0x1FAE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAE88u;
            // 0x1fae8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAEC8u;
            goto label_1faec8;
        }
    }
    ctx->pc = 0x1FAE90u;
label_1fae90:
    // 0x1fae90: 0x52370006  beql        $s1, $s7, . + 4 + (0x6 << 2)
label_1fae94:
    if (ctx->pc == 0x1FAE94u) {
        ctx->pc = 0x1FAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE90u;
        // 0x1fae94: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE98u;
        goto label_1fae98;
    }
    ctx->pc = 0x1FAE90u;
    {
        const bool branch_taken_0x1fae90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        if (branch_taken_0x1fae90) {
            ctx->pc = 0x1FAE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAE90u;
            // 0x1fae94: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAEACu;
            goto label_1faeac;
        }
    }
    ctx->pc = 0x1FAE98u;
label_1fae98:
    // 0x1fae98: 0x10570003  beq         $v0, $s7, . + 4 + (0x3 << 2)
label_1fae9c:
    if (ctx->pc == 0x1FAE9Cu) {
        ctx->pc = 0x1FAE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE98u;
        // 0x1fae9c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAEA0u;
        goto label_1faea0;
    }
    ctx->pc = 0x1FAE98u;
    {
        const bool branch_taken_0x1fae98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x1FAE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE98u;
        // 0x1fae9c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae98) {
            ctx->pc = 0x1FAEA8u;
            goto label_1faea8;
        }
    }
    ctx->pc = 0x1FAEA0u;
label_1faea0:
    // 0x1faea0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1faea4:
    if (ctx->pc == 0x1FAEA4u) {
        ctx->pc = 0x1FAEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEA0u;
        // 0x1faea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAEA8u;
        goto label_1faea8;
    }
    ctx->pc = 0x1FAEA0u;
    {
        const bool branch_taken_0x1faea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEA0u;
        // 0x1faea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faea0) {
            ctx->pc = 0x1FAEC8u;
            goto label_1faec8;
        }
    }
    ctx->pc = 0x1FAEA8u;
label_1faea8:
    // 0x1faea8: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1faea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1faeac:
    // 0x1faeac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1faeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1faeb0:
    // 0x1faeb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1faeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1faeb4:
    // 0x1faeb4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1faeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1faeb8:
    // 0x1faeb8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1faeb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1faebc:
    // 0x1faebc: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_1faec0:
    if (ctx->pc == 0x1FAEC0u) {
        ctx->pc = 0x1FAEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEBCu;
        // 0x1faec0: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAEC4u;
        goto label_1faec4;
    }
    ctx->pc = 0x1FAEBCu;
    {
        const bool branch_taken_0x1faebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEBCu;
        // 0x1faec0: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faebc) {
            ctx->pc = 0x1FAD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fad88;
        }
    }
    ctx->pc = 0x1FAEC4u;
label_1faec4:
    // 0x1faec4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1faec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1faec8:
    // 0x1faec8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1faec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1faecc:
    // 0x1faecc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1faeccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1faed0:
    // 0x1faed0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1faed0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1faed4:
    // 0x1faed4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1faed4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1faed8:
    // 0x1faed8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1faed8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1faedc:
    // 0x1faedc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1faedcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1faee0:
    // 0x1faee0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1faee0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1faee4:
    // 0x1faee4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1faee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1faee8:
    // 0x1faee8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1faee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1faeec:
    // 0x1faeec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1faeecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1faef0:
    // 0x1faef0: 0x3e00008  jr          $ra
label_1faef4:
    if (ctx->pc == 0x1FAEF4u) {
        ctx->pc = 0x1FAEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEF0u;
        // 0x1faef4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAEF8u;
        goto label_fallthrough_0x1faef0;
    }
    ctx->pc = 0x1FAEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEF0u;
        // 0x1faef4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1faef0:
    ctx->pc = 0x1FAEF8u;
}
