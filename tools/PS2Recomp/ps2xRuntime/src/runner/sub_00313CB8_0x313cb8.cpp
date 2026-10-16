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

// Function: sub_00313CB8
// Address: 0x313cb8 - 0x313e20
void sub_00313CB8_0x313cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313CB8_0x313cb8");
#endif

    switch (ctx->pc) {
        case 0x313cb8u: goto label_313cb8;
        case 0x313cbcu: goto label_313cbc;
        case 0x313cc0u: goto label_313cc0;
        case 0x313cc4u: goto label_313cc4;
        case 0x313cc8u: goto label_313cc8;
        case 0x313cccu: goto label_313ccc;
        case 0x313cd0u: goto label_313cd0;
        case 0x313cd4u: goto label_313cd4;
        case 0x313cd8u: goto label_313cd8;
        case 0x313cdcu: goto label_313cdc;
        case 0x313ce0u: goto label_313ce0;
        case 0x313ce4u: goto label_313ce4;
        case 0x313ce8u: goto label_313ce8;
        case 0x313cecu: goto label_313cec;
        case 0x313cf0u: goto label_313cf0;
        case 0x313cf4u: goto label_313cf4;
        case 0x313cf8u: goto label_313cf8;
        case 0x313cfcu: goto label_313cfc;
        case 0x313d00u: goto label_313d00;
        case 0x313d04u: goto label_313d04;
        case 0x313d08u: goto label_313d08;
        case 0x313d0cu: goto label_313d0c;
        case 0x313d10u: goto label_313d10;
        case 0x313d14u: goto label_313d14;
        case 0x313d18u: goto label_313d18;
        case 0x313d1cu: goto label_313d1c;
        case 0x313d20u: goto label_313d20;
        case 0x313d24u: goto label_313d24;
        case 0x313d28u: goto label_313d28;
        case 0x313d2cu: goto label_313d2c;
        case 0x313d30u: goto label_313d30;
        case 0x313d34u: goto label_313d34;
        case 0x313d38u: goto label_313d38;
        case 0x313d3cu: goto label_313d3c;
        case 0x313d40u: goto label_313d40;
        case 0x313d44u: goto label_313d44;
        case 0x313d48u: goto label_313d48;
        case 0x313d4cu: goto label_313d4c;
        case 0x313d50u: goto label_313d50;
        case 0x313d54u: goto label_313d54;
        case 0x313d58u: goto label_313d58;
        case 0x313d5cu: goto label_313d5c;
        case 0x313d60u: goto label_313d60;
        case 0x313d64u: goto label_313d64;
        case 0x313d68u: goto label_313d68;
        case 0x313d6cu: goto label_313d6c;
        case 0x313d70u: goto label_313d70;
        case 0x313d74u: goto label_313d74;
        case 0x313d78u: goto label_313d78;
        case 0x313d7cu: goto label_313d7c;
        case 0x313d80u: goto label_313d80;
        case 0x313d84u: goto label_313d84;
        case 0x313d88u: goto label_313d88;
        case 0x313d8cu: goto label_313d8c;
        case 0x313d90u: goto label_313d90;
        case 0x313d94u: goto label_313d94;
        case 0x313d98u: goto label_313d98;
        case 0x313d9cu: goto label_313d9c;
        case 0x313da0u: goto label_313da0;
        case 0x313da4u: goto label_313da4;
        case 0x313da8u: goto label_313da8;
        case 0x313dacu: goto label_313dac;
        case 0x313db0u: goto label_313db0;
        case 0x313db4u: goto label_313db4;
        case 0x313db8u: goto label_313db8;
        case 0x313dbcu: goto label_313dbc;
        case 0x313dc0u: goto label_313dc0;
        case 0x313dc4u: goto label_313dc4;
        case 0x313dc8u: goto label_313dc8;
        case 0x313dccu: goto label_313dcc;
        case 0x313dd0u: goto label_313dd0;
        case 0x313dd4u: goto label_313dd4;
        case 0x313dd8u: goto label_313dd8;
        case 0x313ddcu: goto label_313ddc;
        case 0x313de0u: goto label_313de0;
        case 0x313de4u: goto label_313de4;
        case 0x313de8u: goto label_313de8;
        case 0x313decu: goto label_313dec;
        case 0x313df0u: goto label_313df0;
        case 0x313df4u: goto label_313df4;
        case 0x313df8u: goto label_313df8;
        case 0x313dfcu: goto label_313dfc;
        case 0x313e00u: goto label_313e00;
        case 0x313e04u: goto label_313e04;
        case 0x313e08u: goto label_313e08;
        case 0x313e0cu: goto label_313e0c;
        case 0x313e10u: goto label_313e10;
        case 0x313e14u: goto label_313e14;
        case 0x313e18u: goto label_313e18;
        case 0x313e1cu: goto label_313e1c;
        default: break;
    }

    ctx->pc = 0x313cb8u;

label_313cb8:
    // 0x313cb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_313cbc:
    // 0x313cbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_313cc0:
    // 0x313cc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x313cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_313cc4:
    // 0x313cc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x313cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_313cc8:
    // 0x313cc8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x313cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_313ccc:
    // 0x313ccc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_313cd0:
    if (ctx->pc == 0x313CD0u) {
        ctx->pc = 0x313CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CCCu;
        // 0x313cd0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313CD4u;
        goto label_313cd4;
    }
    ctx->pc = 0x313CCCu;
    {
        const bool branch_taken_0x313ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313ccc) {
            ctx->pc = 0x313CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313CCCu;
            // 0x313cd0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313CE8u;
            goto label_313ce8;
        }
    }
    ctx->pc = 0x313CD4u;
label_313cd4:
    // 0x313cd4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x313cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_313cd8:
    // 0x313cd8: 0x8c436ccc  lw          $v1, 0x6CCC($v0)
    ctx->pc = 0x313cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27852)));
label_313cdc:
    // 0x313cdc: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x313cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_313ce0:
    // 0x313ce0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x313ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_313ce4:
    // 0x313ce4: 0x0  nop
    ctx->pc = 0x313ce4u;
    // NOP
label_313ce8:
    // 0x313ce8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x313ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_313cec:
    // 0x313cec: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_313cf0:
    if (ctx->pc == 0x313CF0u) {
        ctx->pc = 0x313CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CECu;
        // 0x313cf0: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313CF4u;
        goto label_313cf4;
    }
    ctx->pc = 0x313CECu;
    {
        const bool branch_taken_0x313cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313cec) {
            ctx->pc = 0x313CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313CECu;
            // 0x313cf0: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313D00u;
            goto label_313d00;
        }
    }
    ctx->pc = 0x313CF4u;
label_313cf4:
    // 0x313cf4: 0xc0c4cfe  jal         func_3133F8
label_313cf8:
    if (ctx->pc == 0x313CF8u) {
        ctx->pc = 0x313CFCu;
        goto label_313cfc;
    }
    ctx->pc = 0x313CF4u;
    SET_GPR_U32(ctx, 31, 0x313CFCu);
    ctx->pc = 0x3133F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3133F8u, 0x313CF4u, 0x313CFCu)) {
        return;
    }
    ctx->pc = 0x313CFCu;
label_313cfc:
    // 0x313cfc: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x313cfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_313d00:
    // 0x313d00: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x313d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_313d04:
    // 0x313d04: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_313d08:
    if (ctx->pc == 0x313D08u) {
        ctx->pc = 0x313D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D04u;
        // 0x313d08: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313D0Cu;
        goto label_313d0c;
    }
    ctx->pc = 0x313D04u;
    {
        const bool branch_taken_0x313d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D04u;
        // 0x313d08: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d04) {
            ctx->pc = 0x313D24u;
            goto label_313d24;
        }
    }
    ctx->pc = 0x313D0Cu;
label_313d0c:
    // 0x313d0c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x313d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_313d10:
    // 0x313d10: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_313d14:
    if (ctx->pc == 0x313D14u) {
        ctx->pc = 0x313D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D10u;
        // 0x313d14: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313D18u;
        goto label_313d18;
    }
    ctx->pc = 0x313D10u;
    {
        const bool branch_taken_0x313d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313d10) {
            ctx->pc = 0x313D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313D10u;
            // 0x313d14: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313D68u;
            goto label_313d68;
        }
    }
    ctx->pc = 0x313D18u;
label_313d18:
    // 0x313d18: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x313d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_313d1c:
    // 0x313d1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_313d20:
    if (ctx->pc == 0x313D20u) {
        ctx->pc = 0x313D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D1Cu;
        // 0x313d20: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x313D24u;
        goto label_313d24;
    }
    ctx->pc = 0x313D1Cu;
    {
        const bool branch_taken_0x313d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D1Cu;
        // 0x313d20: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d1c) {
            ctx->pc = 0x313D2Cu;
            goto label_313d2c;
        }
    }
    ctx->pc = 0x313D24u;
label_313d24:
    // 0x313d24: 0x1000003a  b           . + 4 + (0x3A << 2)
label_313d28:
    if (ctx->pc == 0x313D28u) {
        ctx->pc = 0x313D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D24u;
        // 0x313d28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313D2Cu;
        goto label_313d2c;
    }
    ctx->pc = 0x313D24u;
    {
        const bool branch_taken_0x313d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D24u;
        // 0x313d28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d24) {
            ctx->pc = 0x313E10u;
            goto label_313e10;
        }
    }
    ctx->pc = 0x313D2Cu;
label_313d2c:
    // 0x313d2c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_313d30:
    if (ctx->pc == 0x313D30u) {
        ctx->pc = 0x313D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D2Cu;
        // 0x313d30: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313D34u;
        goto label_313d34;
    }
    ctx->pc = 0x313D2Cu;
    {
        const bool branch_taken_0x313d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313d2c) {
            ctx->pc = 0x313D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313D2Cu;
            // 0x313d30: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313D5Cu;
            goto label_313d5c;
        }
    }
    ctx->pc = 0x313D34u;
label_313d34:
    // 0x313d34: 0xc0c4c8a  jal         func_313228
label_313d38:
    if (ctx->pc == 0x313D38u) {
        ctx->pc = 0x313D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D34u;
        // 0x313d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313D3Cu;
        goto label_313d3c;
    }
    ctx->pc = 0x313D34u;
    SET_GPR_U32(ctx, 31, 0x313D3Cu);
    ctx->pc = 0x313D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313D34u;
    // 0x313d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313228u, 0x313D34u, 0x313D3Cu)) {
        return;
    }
    ctx->pc = 0x313D3Cu;
label_313d3c:
    // 0x313d3c: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_313d40:
    if (ctx->pc == 0x313D40u) {
        ctx->pc = 0x313D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D3Cu;
        // 0x313d40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313D44u;
        goto label_313d44;
    }
    ctx->pc = 0x313D3Cu;
    {
        const bool branch_taken_0x313d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D3Cu;
        // 0x313d40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d3c) {
            ctx->pc = 0x313E10u;
            goto label_313e10;
        }
    }
    ctx->pc = 0x313D44u;
label_313d44:
    // 0x313d44: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x313d44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_313d48:
    // 0x313d48: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x313d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_313d4c:
    // 0x313d4c: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x313d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
label_313d50:
    // 0x313d50: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x313d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_313d54:
    // 0x313d54: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x313d54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_313d58:
    // 0x313d58: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x313d58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_313d5c:
    // 0x313d5c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x313d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_313d60:
    // 0x313d60: 0x1000000a  b           . + 4 + (0xA << 2)
label_313d64:
    if (ctx->pc == 0x313D64u) {
        ctx->pc = 0x313D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D60u;
        // 0x313d64: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313D68u;
        goto label_313d68;
    }
    ctx->pc = 0x313D60u;
    {
        const bool branch_taken_0x313d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D60u;
        // 0x313d64: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d60) {
            ctx->pc = 0x313D8Cu;
            goto label_313d8c;
        }
    }
    ctx->pc = 0x313D68u;
label_313d68:
    // 0x313d68: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_313d6c:
    if (ctx->pc == 0x313D6Cu) {
        ctx->pc = 0x313D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D68u;
        // 0x313d6c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313D70u;
        goto label_313d70;
    }
    ctx->pc = 0x313D68u;
    {
        const bool branch_taken_0x313d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313d68) {
            ctx->pc = 0x313D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313D68u;
            // 0x313d6c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313D90u;
            goto label_313d90;
        }
    }
    ctx->pc = 0x313D70u;
label_313d70:
    // 0x313d70: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x313d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_313d74:
    // 0x313d74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_313d78:
    if (ctx->pc == 0x313D78u) {
        ctx->pc = 0x313D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D74u;
        // 0x313d78: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313D7Cu;
        goto label_313d7c;
    }
    ctx->pc = 0x313D74u;
    {
        const bool branch_taken_0x313d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D74u;
        // 0x313d78: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d74) {
            ctx->pc = 0x313D8Cu;
            goto label_313d8c;
        }
    }
    ctx->pc = 0x313D7Cu;
label_313d7c:
    // 0x313d7c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x313d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_313d80:
    // 0x313d80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313d80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313d84:
    // 0x313d84: 0x10000022  b           . + 4 + (0x22 << 2)
label_313d88:
    if (ctx->pc == 0x313D88u) {
        ctx->pc = 0x313D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D84u;
        // 0x313d88: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313D8Cu;
        goto label_313d8c;
    }
    ctx->pc = 0x313D84u;
    {
        const bool branch_taken_0x313d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D84u;
        // 0x313d88: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d84) {
            ctx->pc = 0x313E10u;
            goto label_313e10;
        }
    }
    ctx->pc = 0x313D8Cu;
label_313d8c:
    // 0x313d8c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x313d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_313d90:
    // 0x313d90: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_313d94:
    if (ctx->pc == 0x313D94u) {
        ctx->pc = 0x313D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D90u;
        // 0x313d94: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313D98u;
        goto label_313d98;
    }
    ctx->pc = 0x313D90u;
    {
        const bool branch_taken_0x313d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313d90) {
            ctx->pc = 0x313D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313D90u;
            // 0x313d94: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313DA4u;
            goto label_313da4;
        }
    }
    ctx->pc = 0x313D98u;
label_313d98:
    // 0x313d98: 0xc0c4ed6  jal         func_313B58
label_313d9c:
    if (ctx->pc == 0x313D9Cu) {
        ctx->pc = 0x313D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D98u;
        // 0x313d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313DA0u;
        goto label_313da0;
    }
    ctx->pc = 0x313D98u;
    SET_GPR_U32(ctx, 31, 0x313DA0u);
    ctx->pc = 0x313D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313D98u;
    // 0x313d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313B58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313B58u, 0x313D98u, 0x313DA0u)) {
        return;
    }
    ctx->pc = 0x313DA0u;
label_313da0:
    // 0x313da0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x313da0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_313da4:
    // 0x313da4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x313da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_313da8:
    // 0x313da8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_313dac:
    if (ctx->pc == 0x313DACu) {
        ctx->pc = 0x313DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DA8u;
        // 0x313dac: 0x3c050031  lui         $a1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313DB0u;
        goto label_313db0;
    }
    ctx->pc = 0x313DA8u;
    {
        const bool branch_taken_0x313da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DA8u;
        // 0x313dac: 0x3c050031  lui         $a1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313da8) {
            ctx->pc = 0x313DBCu;
            goto label_313dbc;
        }
    }
    ctx->pc = 0x313DB0u;
label_313db0:
    // 0x313db0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x313db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_313db4:
    // 0x313db4: 0xc0c4e8e  jal         func_313A38
label_313db8:
    if (ctx->pc == 0x313DB8u) {
        ctx->pc = 0x313DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DB4u;
        // 0x313db8: 0x24a53c98  addiu       $a1, $a1, 0x3C98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313DBCu;
        goto label_313dbc;
    }
    ctx->pc = 0x313DB4u;
    SET_GPR_U32(ctx, 31, 0x313DBCu);
    ctx->pc = 0x313DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313DB4u;
    // 0x313db8: 0x24a53c98  addiu       $a1, $a1, 0x3C98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313A38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313A38u, 0x313DB4u, 0x313DBCu)) {
        return;
    }
    ctx->pc = 0x313DBCu;
label_313dbc:
    // 0x313dbc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x313dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_313dc0:
    // 0x313dc0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x313dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_313dc4:
    // 0x313dc4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x313dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_313dc8:
    // 0x313dc8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x313dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_313dcc:
    // 0x313dcc: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x313dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_313dd0:
    // 0x313dd0: 0x40f809  jalr        $v0
label_313dd4:
    if (ctx->pc == 0x313DD4u) {
        ctx->pc = 0x313DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DD0u;
        // 0x313dd4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313DD8u;
        goto label_313dd8;
    }
    ctx->pc = 0x313DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x313DD8u);
        ctx->pc = 0x313DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DD0u;
        // 0x313dd4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313DD0u, 0x313DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x313DD8u;
label_313dd8:
    // 0x313dd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x313dd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313ddc:
    // 0x313ddc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x313ddcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_313de0:
    // 0x313de0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x313de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_313de4:
    // 0x313de4: 0x3042dfff  andi        $v0, $v0, 0xDFFF
    ctx->pc = 0x313de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57343);
label_313de8:
    // 0x313de8: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_313dec:
    if (ctx->pc == 0x313DECu) {
        ctx->pc = 0x313DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DE8u;
        // 0x313dec: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313DF0u;
        goto label_313df0;
    }
    ctx->pc = 0x313DE8u;
    {
        const bool branch_taken_0x313de8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x313DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DE8u;
        // 0x313dec: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313de8) {
            ctx->pc = 0x313E0Cu;
            goto label_313e0c;
        }
    }
    ctx->pc = 0x313DF0u;
label_313df0:
    // 0x313df0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_313df4:
    if (ctx->pc == 0x313DF4u) {
        ctx->pc = 0x313DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DF0u;
        // 0x313df4: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x313DF8u;
        goto label_313df8;
    }
    ctx->pc = 0x313DF0u;
    {
        const bool branch_taken_0x313df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x313df0) {
            ctx->pc = 0x313DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313DF0u;
            // 0x313df4: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x313E00u;
            goto label_313e00;
        }
    }
    ctx->pc = 0x313DF8u;
label_313df8:
    // 0x313df8: 0x10000002  b           . + 4 + (0x2 << 2)
label_313dfc:
    if (ctx->pc == 0x313DFCu) {
        ctx->pc = 0x313DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DF8u;
        // 0x313dfc: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x313E00u;
        goto label_313e00;
    }
    ctx->pc = 0x313DF8u;
    {
        const bool branch_taken_0x313df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DF8u;
        // 0x313dfc: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313df8) {
            ctx->pc = 0x313E04u;
            goto label_313e04;
        }
    }
    ctx->pc = 0x313E00u;
label_313e00:
    // 0x313e00: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x313e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_313e04:
    // 0x313e04: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
label_313e08:
    if (ctx->pc == 0x313E08u) {
        ctx->pc = 0x313E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E04u;
        // 0x313e08: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313E0Cu;
        goto label_313e0c;
    }
    ctx->pc = 0x313E04u;
    {
        const bool branch_taken_0x313e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E04u;
        // 0x313e08: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e04) {
            ctx->pc = 0x313D24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313d24;
        }
    }
    ctx->pc = 0x313E0Cu;
label_313e0c:
    // 0x313e0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313e10:
    // 0x313e10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313e14:
    // 0x313e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_313e18:
    // 0x313e18: 0x3e00008  jr          $ra
label_313e1c:
    if (ctx->pc == 0x313E1Cu) {
        ctx->pc = 0x313E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E18u;
        // 0x313e1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313E20u;
        goto label_fallthrough_0x313e18;
    }
    ctx->pc = 0x313E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E18u;
        // 0x313e1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x313e18:
    ctx->pc = 0x313E20u;
}
