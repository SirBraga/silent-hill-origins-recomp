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

// Function: sub_00256D38
// Address: 0x256d38 - 0x2570c0
void sub_00256D38_0x256d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256D38_0x256d38");
#endif

    switch (ctx->pc) {
        case 0x256d78u: goto label_256d78;
        case 0x256dacu: goto label_256dac;
        case 0x256db8u: goto label_256db8;
        case 0x256dccu: goto label_256dcc;
        case 0x256de8u: goto label_256de8;
        case 0x256e0cu: goto label_256e0c;
        case 0x256e50u: goto label_256e50;
        case 0x256e78u: goto label_256e78;
        case 0x256e88u: goto label_256e88;
        case 0x256ec4u: goto label_256ec4;
        case 0x256ed0u: goto label_256ed0;
        case 0x256f18u: goto label_256f18;
        case 0x256f30u: goto label_256f30;
        case 0x256f84u: goto label_256f84;
        case 0x256fa8u: goto label_256fa8;
        case 0x256fd0u: goto label_256fd0;
        case 0x257000u: goto label_257000;
        case 0x257028u: goto label_257028;
        case 0x25703cu: goto label_25703c;
        case 0x257048u: goto label_257048;
        case 0x257058u: goto label_257058;
        case 0x257070u: goto label_257070;
        case 0x257080u: goto label_257080;
        case 0x257090u: goto label_257090;
        default: break;
    }

    ctx->pc = 0x256d38u;

    // 0x256d38: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x256d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x256d3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x256d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256d40: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x256d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x256d44: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x256d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x256d48: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x256d48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d4c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x256d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x256d50: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x256d50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d54: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x256d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x256d58: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x256d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x256d5c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x256d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x256d60: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x256d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x256d64: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x256d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x256d68: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x256d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x256d6c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x256d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x256d70: 0xc09270a  jal         func_249C28
    ctx->pc = 0x256D70u;
    SET_GPR_U32(ctx, 31, 0x256D78u);
    ctx->pc = 0x256D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256D70u;
    // 0x256d74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x256D70u, 0x256D78u)) {
        return;
    }
    ctx->pc = 0x256D78u;
label_256d78:
    // 0x256d78: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x256D78u;
    {
        const bool branch_taken_0x256d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D78u;
        // 0x256d7c: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d78) {
            ctx->pc = 0x257090u;
            goto label_257090;
        }
    }
    ctx->pc = 0x256D80u;
    // 0x256d80: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x256d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x256d84: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x256d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x256d88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x256d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x256d8c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x256d8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x256d90: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x256D90u;
    {
        const bool branch_taken_0x256d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x256d90) {
            ctx->pc = 0x256D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256D90u;
            // 0x256d94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256DC0u;
            goto label_256dc0;
        }
    }
    ctx->pc = 0x256D98u;
    // 0x256d98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x256d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x256d9c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x256d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x256da0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x256da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x256da4: 0xc092848  jal         func_24A120
    ctx->pc = 0x256DA4u;
    SET_GPR_U32(ctx, 31, 0x256DACu);
    ctx->pc = 0x256DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256DA4u;
    // 0x256da8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x256DA4u, 0x256DACu)) {
        return;
    }
    ctx->pc = 0x256DACu;
label_256dac:
    // 0x256dac: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x256dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x256db0: 0xc09281a  jal         func_24A068
    ctx->pc = 0x256DB0u;
    SET_GPR_U32(ctx, 31, 0x256DB8u);
    ctx->pc = 0x256DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256DB0u;
    // 0x256db4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x256DB0u, 0x256DB8u)) {
        return;
    }
    ctx->pc = 0x256DB8u;
label_256db8:
    // 0x256db8: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x256DB8u;
    {
        const bool branch_taken_0x256db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256DB8u;
        // 0x256dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256db8) {
            ctx->pc = 0x257094u;
            goto label_257094;
        }
    }
    ctx->pc = 0x256DC0u;
label_256dc0:
    // 0x256dc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x256dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256dc4: 0xc093546  jal         func_24D518
    ctx->pc = 0x256DC4u;
    SET_GPR_U32(ctx, 31, 0x256DCCu);
    ctx->pc = 0x256DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256DC4u;
    // 0x256dc8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x256DC4u, 0x256DCCu)) {
        return;
    }
    ctx->pc = 0x256DCCu;
label_256dcc:
    // 0x256dcc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x256dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x256dd0: 0x144300b0  bne         $v0, $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x256DD0u;
    {
        const bool branch_taken_0x256dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x256DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256DD0u;
        // 0x256dd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256dd0) {
            ctx->pc = 0x257094u;
            goto label_257094;
        }
    }
    ctx->pc = 0x256DD8u;
    // 0x256dd8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x256dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x256ddc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x256ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x256de0: 0xc095a52  jal         func_256948
    ctx->pc = 0x256DE0u;
    SET_GPR_U32(ctx, 31, 0x256DE8u);
    ctx->pc = 0x256DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256DE0u;
    // 0x256de4: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256948u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256948u, 0x256DE0u, 0x256DE8u)) {
        return;
    }
    ctx->pc = 0x256DE8u;
label_256de8:
    // 0x256de8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x256de8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256dec: 0x126000a8  beqz        $s3, . + 4 + (0xA8 << 2)
    ctx->pc = 0x256DECu;
    {
        const bool branch_taken_0x256dec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x256DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256DECu;
        // 0x256df0: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256dec) {
            ctx->pc = 0x257090u;
            goto label_257090;
        }
    }
    ctx->pc = 0x256DF4u;
    // 0x256df4: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x256df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x256df8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x256DF8u;
    {
        const bool branch_taken_0x256df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256df8) {
            ctx->pc = 0x256DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256DF8u;
            // 0x256dfc: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256E18u;
            goto label_256e18;
        }
    }
    ctx->pc = 0x256E00u;
    // 0x256e00: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x256e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x256e04: 0xc095894  jal         func_256250
    ctx->pc = 0x256E04u;
    SET_GPR_U32(ctx, 31, 0x256E0Cu);
    ctx->pc = 0x256E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256E04u;
    // 0x256e08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256250u, 0x256E04u, 0x256E0Cu)) {
        return;
    }
    ctx->pc = 0x256E0Cu;
label_256e0c:
    // 0x256e0c: 0x440009e  bltz        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x256E0Cu;
    {
        const bool branch_taken_0x256e0c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x256e0c) {
            ctx->pc = 0x257088u;
            goto label_257088;
        }
    }
    ctx->pc = 0x256E14u;
    // 0x256e14: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x256e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_256e18:
    // 0x256e18: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x256e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x256e1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x256e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x256e20: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x256E20u;
    {
        const bool branch_taken_0x256e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256e20) {
            ctx->pc = 0x256E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256E20u;
            // 0x256e24: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256F04u;
            goto label_256f04;
        }
    }
    ctx->pc = 0x256E28u;
    // 0x256e28: 0x8e700014  lw          $s0, 0x14($s3)
    ctx->pc = 0x256e28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x256e2c: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x256E2Cu;
    {
        const bool branch_taken_0x256e2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E2Cu;
        // 0x256e30: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e2c) {
            ctx->pc = 0x256F00u;
            goto label_256f00;
        }
    }
    ctx->pc = 0x256E34u;
    // 0x256e34: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x256e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x256e38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x256E38u;
    {
        const bool branch_taken_0x256e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E38u;
        // 0x256e3c: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e38) {
            ctx->pc = 0x256E58u;
            goto label_256e58;
        }
    }
    ctx->pc = 0x256E40u;
    // 0x256e40: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x256e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x256e44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x256e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256e48: 0xc093546  jal         func_24D518
    ctx->pc = 0x256E48u;
    SET_GPR_U32(ctx, 31, 0x256E50u);
    ctx->pc = 0x256E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256E48u;
    // 0x256e4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x256E48u, 0x256E50u)) {
        return;
    }
    ctx->pc = 0x256E50u;
label_256e50:
    // 0x256e50: 0x1450008d  bne         $v0, $s0, . + 4 + (0x8D << 2)
    ctx->pc = 0x256E50u;
    {
        const bool branch_taken_0x256e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x256e50) {
            ctx->pc = 0x257088u;
            goto label_257088;
        }
    }
    ctx->pc = 0x256E58u;
label_256e58:
    // 0x256e58: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x256e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x256e5c: 0x58600011  blezl       $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x256E5Cu;
    {
        const bool branch_taken_0x256e5c = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x256e5c) {
            ctx->pc = 0x256E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256E5Cu;
            // 0x256e60: 0x8e660010  lw          $a2, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256EA4u;
            goto label_256ea4;
        }
    }
    ctx->pc = 0x256E64u;
    // 0x256e64: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x256e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x256e68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x256e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256e6c: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x256E6Cu;
    {
        const bool branch_taken_0x256e6c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x256E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E6Cu;
        // 0x256e70: 0x290c0  sll         $s2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e6c) {
            ctx->pc = 0x256EA0u;
            goto label_256ea0;
        }
    }
    ctx->pc = 0x256E74u;
    // 0x256e74: 0x26700034  addiu       $s0, $s3, 0x34
    ctx->pc = 0x256e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
label_256e78:
    // 0x256e78: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x256e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x256e7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x256e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256e80: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x256E80u;
    SET_GPR_U32(ctx, 31, 0x256E88u);
    ctx->pc = 0x256E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256E80u;
    // 0x256e84: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x256E80u, 0x256E88u)) {
        return;
    }
    ctx->pc = 0x256E88u;
label_256e88:
    // 0x256e88: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x256E88u;
    {
        const bool branch_taken_0x256e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E88u;
        // 0x256e8c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e88) {
            ctx->pc = 0x257088u;
            goto label_257088;
        }
    }
    ctx->pc = 0x256E90u;
    // 0x256e90: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x256e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x256e94: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x256e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x256e98: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x256E98u;
    {
        const bool branch_taken_0x256e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E98u;
        // 0x256e9c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e98) {
            ctx->pc = 0x256E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256e78;
        }
    }
    ctx->pc = 0x256EA0u;
label_256ea0:
    // 0x256ea0: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x256ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_256ea4:
    // 0x256ea4: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x256EA4u;
    {
        const bool branch_taken_0x256ea4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x256EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256EA4u;
        // 0x256ea8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ea4) {
            ctx->pc = 0x256F00u;
            goto label_256f00;
        }
    }
    ctx->pc = 0x256EACu;
    // 0x256eac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x256eacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256eb0: 0x8e71002c  lw          $s1, 0x2C($s3)
    ctx->pc = 0x256eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x256eb4: 0x1280c0  sll         $s0, $s2, 3
    ctx->pc = 0x256eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x256eb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x256eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ebc: 0xc093546  jal         func_24D518
    ctx->pc = 0x256EBCu;
    SET_GPR_U32(ctx, 31, 0x256EC4u);
    ctx->pc = 0x256EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256EBCu;
    // 0x256ec0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x256EBCu, 0x256EC4u)) {
        return;
    }
    ctx->pc = 0x256EC4u;
label_256ec4:
    // 0x256ec4: 0x14500070  bne         $v0, $s0, . + 4 + (0x70 << 2)
    ctx->pc = 0x256EC4u;
    {
        const bool branch_taken_0x256ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x256EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256EC4u;
        // 0x256ec8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ec4) {
            ctx->pc = 0x257088u;
            goto label_257088;
        }
    }
    ctx->pc = 0x256ECCu;
    // 0x256ecc: 0x0  nop
    ctx->pc = 0x256eccu;
    // NOP
label_256ed0:
    // 0x256ed0: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x256ed0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x256ed4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x256ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ed8: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x256ed8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x256edc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x256edcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x256ee0: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x256ee0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x256ee4: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x256ee4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x256ee8: 0xa6250000  sh          $a1, 0x0($s1)
    ctx->pc = 0x256ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x256eec: 0xa6240002  sh          $a0, 0x2($s1)
    ctx->pc = 0x256eecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x256ef0: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x256ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x256ef4: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x256ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x256ef8: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x256EF8u;
    {
        const bool branch_taken_0x256ef8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x256EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256EF8u;
        // 0x256efc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ef8) {
            ctx->pc = 0x256ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256ed0;
        }
    }
    ctx->pc = 0x256F00u;
label_256f00:
    // 0x256f00: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x256f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_256f04:
    // 0x256f04: 0x18400039  blez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x256F04u;
    {
        const bool branch_taken_0x256f04 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x256F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F04u;
        // 0x256f08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f04) {
            ctx->pc = 0x256FECu;
            goto label_256fec;
        }
    }
    ctx->pc = 0x256F0Cu;
    // 0x256f0c: 0x24160018  addiu       $s6, $zero, 0x18
    ctx->pc = 0x256f0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x256f10: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x256f10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x256f14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x256f14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256f18:
    // 0x256f18: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x256f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x256f1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x256f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256f20: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x256f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x256f24: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x256f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x256f28: 0xc093546  jal         func_24D518
    ctx->pc = 0x256F28u;
    SET_GPR_U32(ctx, 31, 0x256F30u);
    ctx->pc = 0x256F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256F28u;
    // 0x256f2c: 0x528021  addu        $s0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x256F28u, 0x256F30u)) {
        return;
    }
    ctx->pc = 0x256F30u;
label_256f30:
    // 0x256f30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x256f30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256f34: 0x14760054  bne         $v1, $s6, . + 4 + (0x54 << 2)
    ctx->pc = 0x256F34u;
    {
        const bool branch_taken_0x256f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x256f34) {
            ctx->pc = 0x257088u;
            goto label_257088;
        }
    }
    ctx->pc = 0x256F3Cu;
    // 0x256f3c: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x256f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x256f40: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x256f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x256f44: 0x6ba4002f  ldl         $a0, 0x2F($sp)
    ctx->pc = 0x256f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x256f48: 0x6fa40028  ldr         $a0, 0x28($sp)
    ctx->pc = 0x256f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x256f4c: 0xb202000b  sdl         $v0, 0xB($s0)
    ctx->pc = 0x256f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x256f50: 0xb6020004  sdr         $v0, 0x4($s0)
    ctx->pc = 0x256f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x256f54: 0xb2040013  sdl         $a0, 0x13($s0)
    ctx->pc = 0x256f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x256f58: 0xb604000c  sdr         $a0, 0xC($s0)
    ctx->pc = 0x256f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x256f5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x256f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256f60: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x256F60u;
    {
        const bool branch_taken_0x256f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F60u;
        // 0x256f64: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f60) {
            ctx->pc = 0x256FB0u;
            goto label_256fb0;
        }
    }
    ctx->pc = 0x256F68u;
    // 0x256f68: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x256F68u;
    {
        const bool branch_taken_0x256f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F68u;
        // 0x256f6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f68) {
            ctx->pc = 0x256F94u;
            goto label_256f94;
        }
    }
    ctx->pc = 0x256F70u;
    // 0x256f70: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x256f70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x256f74: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x256f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x256f78: 0x3012  mflo        $a2
    ctx->pc = 0x256f78u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x256f7c: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x256F7Cu;
    SET_GPR_U32(ctx, 31, 0x256F84u);
    ctx->pc = 0x256F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256F7Cu;
    // 0x256f80: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x256F7Cu, 0x256F84u)) {
        return;
    }
    ctx->pc = 0x256F84u;
label_256f84:
    // 0x256f84: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x256F84u;
    {
        const bool branch_taken_0x256f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256f84) {
            ctx->pc = 0x256F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256F84u;
            // 0x256f88: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256FDCu;
            goto label_256fdc;
        }
    }
    ctx->pc = 0x256F8Cu;
    // 0x256f8c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x256F8Cu;
    {
        const bool branch_taken_0x256f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256f8c) {
            ctx->pc = 0x257088u;
            goto label_257088;
        }
    }
    ctx->pc = 0x256F94u;
label_256f94:
    // 0x256f94: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x256f94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x256f98: 0xd50018  mult        $zero, $a2, $s5
    ctx->pc = 0x256f98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x256f9c: 0x3012  mflo        $a2
    ctx->pc = 0x256f9cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x256fa0: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x256FA0u;
    SET_GPR_U32(ctx, 31, 0x256FA8u);
    ctx->pc = 0x256FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256FA0u;
    // 0x256fa4: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x256FA0u, 0x256FA8u)) {
        return;
    }
    ctx->pc = 0x256FA8u;
label_256fa8:
    // 0x256fa8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x256FA8u;
    {
        const bool branch_taken_0x256fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256fa8) {
            ctx->pc = 0x257088u;
            goto label_257088;
        }
    }
    ctx->pc = 0x256FB0u;
label_256fb0:
    // 0x256fb0: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x256fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x256fb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x256FB4u;
    {
        const bool branch_taken_0x256fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FB4u;
        // 0x256fb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256fb4) {
            ctx->pc = 0x256FD8u;
            goto label_256fd8;
        }
    }
    ctx->pc = 0x256FBCu;
    // 0x256fbc: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x256fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x256fc0: 0xd50018  mult        $zero, $a2, $s5
    ctx->pc = 0x256fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x256fc4: 0x3012  mflo        $a2
    ctx->pc = 0x256fc4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x256fc8: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x256FC8u;
    SET_GPR_U32(ctx, 31, 0x256FD0u);
    ctx->pc = 0x256FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256FC8u;
    // 0x256fcc: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x256FC8u, 0x256FD0u)) {
        return;
    }
    ctx->pc = 0x256FD0u;
label_256fd0:
    // 0x256fd0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x256FD0u;
    {
        const bool branch_taken_0x256fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256fd0) {
            ctx->pc = 0x257088u;
            goto label_257088;
        }
    }
    ctx->pc = 0x256FD8u;
label_256fd8:
    // 0x256fd8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x256fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_256fdc:
    // 0x256fdc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x256fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x256fe0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x256fe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x256fe4: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x256FE4u;
    {
        const bool branch_taken_0x256fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FE4u;
        // 0x256fe8: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256fe4) {
            ctx->pc = 0x256F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256f18;
        }
    }
    ctx->pc = 0x256FECu;
label_256fec:
    // 0x256fec: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x256fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ff0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x256ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ff4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x256ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x256ff8: 0xc09270a  jal         func_249C28
    ctx->pc = 0x256FF8u;
    SET_GPR_U32(ctx, 31, 0x257000u);
    ctx->pc = 0x256FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256FF8u;
    // 0x256ffc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x256FF8u, 0x257000u)) {
        return;
    }
    ctx->pc = 0x257000u;
label_257000:
    // 0x257000: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x257000u;
    {
        const bool branch_taken_0x257000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257000u;
        // 0x257004: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257000) {
            ctx->pc = 0x257090u;
            goto label_257090;
        }
    }
    ctx->pc = 0x257008u;
    // 0x257008: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x257008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x25700c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x25700cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x257010: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x257010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x257014: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x257014u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x257018: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x257018u;
    {
        const bool branch_taken_0x257018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x257018) {
            ctx->pc = 0x25701Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257018u;
            // 0x25701c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257050u;
            goto label_257050;
        }
    }
    ctx->pc = 0x257020u;
    // 0x257020: 0xc095b08  jal         func_256C20
    ctx->pc = 0x257020u;
    SET_GPR_U32(ctx, 31, 0x257028u);
    ctx->pc = 0x257024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257020u;
    // 0x257024: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256C20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256C20u, 0x257020u, 0x257028u)) {
        return;
    }
    ctx->pc = 0x257028u;
label_257028:
    // 0x257028: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x257028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25702c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x25702cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x257030: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x257030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x257034: 0xc092848  jal         func_24A120
    ctx->pc = 0x257034u;
    SET_GPR_U32(ctx, 31, 0x25703Cu);
    ctx->pc = 0x257038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257034u;
    // 0x257038: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x257034u, 0x25703Cu)) {
        return;
    }
    ctx->pc = 0x25703Cu;
label_25703c:
    // 0x25703c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x25703cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x257040: 0xc09281a  jal         func_24A068
    ctx->pc = 0x257040u;
    SET_GPR_U32(ctx, 31, 0x257048u);
    ctx->pc = 0x257044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257040u;
    // 0x257044: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x257040u, 0x257048u)) {
        return;
    }
    ctx->pc = 0x257048u;
label_257048:
    // 0x257048: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x257048u;
    {
        const bool branch_taken_0x257048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257048u;
        // 0x25704c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257048) {
            ctx->pc = 0x257094u;
            goto label_257094;
        }
    }
    ctx->pc = 0x257050u;
label_257050:
    // 0x257050: 0xc0960f0  jal         func_2583C0
    ctx->pc = 0x257050u;
    SET_GPR_U32(ctx, 31, 0x257058u);
    ctx->pc = 0x257054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257050u;
    // 0x257054: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2583C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2583C0u, 0x257050u, 0x257058u)) {
        return;
    }
    ctx->pc = 0x257058u;
label_257058:
    // 0x257058: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x257058u;
    {
        const bool branch_taken_0x257058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257058u;
        // 0x25705c: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257058) {
            ctx->pc = 0x257088u;
            goto label_257088;
        }
    }
    ctx->pc = 0x257060u;
    // 0x257060: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x257060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257064: 0x24841210  addiu       $a0, $a0, 0x1210
    ctx->pc = 0x257064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4624));
    // 0x257068: 0xc093708  jal         func_24DC20
    ctx->pc = 0x257068u;
    SET_GPR_U32(ctx, 31, 0x257070u);
    ctx->pc = 0x25706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257068u;
    // 0x25706c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DC20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DC20u, 0x257068u, 0x257070u)) {
        return;
    }
    ctx->pc = 0x257070u;
label_257070:
    // 0x257070: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x257070u;
    {
        const bool branch_taken_0x257070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257070) {
            ctx->pc = 0x257088u;
            goto label_257088;
        }
    }
    ctx->pc = 0x257078u;
    // 0x257078: 0xc09599c  jal         func_256670
    ctx->pc = 0x257078u;
    SET_GPR_U32(ctx, 31, 0x257080u);
    ctx->pc = 0x25707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257078u;
    // 0x25707c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256670u, 0x257078u, 0x257080u)) {
        return;
    }
    ctx->pc = 0x257080u;
label_257080:
    // 0x257080: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257080u;
    {
        const bool branch_taken_0x257080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257080u;
        // 0x257084: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257080) {
            ctx->pc = 0x257094u;
            goto label_257094;
        }
    }
    ctx->pc = 0x257088u;
label_257088:
    // 0x257088: 0xc095b08  jal         func_256C20
    ctx->pc = 0x257088u;
    SET_GPR_U32(ctx, 31, 0x257090u);
    ctx->pc = 0x25708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257088u;
    // 0x25708c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256C20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256C20u, 0x257088u, 0x257090u)) {
        return;
    }
    ctx->pc = 0x257090u;
label_257090:
    // 0x257090: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x257090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257094:
    // 0x257094: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x257094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x257098: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x257098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25709c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x25709cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2570a0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2570a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2570a4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2570a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2570a8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2570a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2570ac: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2570acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2570b0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2570b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2570b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2570b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2570b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2570B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2570BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2570B8u;
        // 0x2570bc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2570B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2570C0u;
}
