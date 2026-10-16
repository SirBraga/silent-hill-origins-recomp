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

// Function: sub_002559F8
// Address: 0x2559f8 - 0x255e78
void sub_002559F8_0x2559f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002559F8_0x2559f8");
#endif

    switch (ctx->pc) {
        case 0x255a34u: goto label_255a34;
        case 0x255a50u: goto label_255a50;
        case 0x255a84u: goto label_255a84;
        case 0x255aa8u: goto label_255aa8;
        case 0x255ac8u: goto label_255ac8;
        case 0x255ad8u: goto label_255ad8;
        case 0x255af8u: goto label_255af8;
        case 0x255b08u: goto label_255b08;
        case 0x255b3cu: goto label_255b3c;
        case 0x255b4cu: goto label_255b4c;
        case 0x255b54u: goto label_255b54;
        case 0x255b74u: goto label_255b74;
        case 0x255b84u: goto label_255b84;
        case 0x255b8cu: goto label_255b8c;
        case 0x255bb0u: goto label_255bb0;
        case 0x255bc0u: goto label_255bc0;
        case 0x255bd4u: goto label_255bd4;
        case 0x255be4u: goto label_255be4;
        case 0x255becu: goto label_255bec;
        case 0x255bf4u: goto label_255bf4;
        case 0x255c10u: goto label_255c10;
        case 0x255c40u: goto label_255c40;
        case 0x255c54u: goto label_255c54;
        case 0x255c68u: goto label_255c68;
        case 0x255c84u: goto label_255c84;
        case 0x255c94u: goto label_255c94;
        case 0x255ca8u: goto label_255ca8;
        case 0x255cb0u: goto label_255cb0;
        case 0x255cb8u: goto label_255cb8;
        case 0x255ce4u: goto label_255ce4;
        case 0x255cf0u: goto label_255cf0;
        case 0x255d18u: goto label_255d18;
        case 0x255d2cu: goto label_255d2c;
        case 0x255d40u: goto label_255d40;
        case 0x255d5cu: goto label_255d5c;
        case 0x255d6cu: goto label_255d6c;
        case 0x255d80u: goto label_255d80;
        case 0x255d88u: goto label_255d88;
        case 0x255d90u: goto label_255d90;
        case 0x255dbcu: goto label_255dbc;
        case 0x255dc8u: goto label_255dc8;
        case 0x255de0u: goto label_255de0;
        case 0x255de8u: goto label_255de8;
        case 0x255dfcu: goto label_255dfc;
        case 0x255e0cu: goto label_255e0c;
        case 0x255e38u: goto label_255e38;
        case 0x255e48u: goto label_255e48;
        default: break;
    }

    ctx->pc = 0x2559f8u;

    // 0x2559f8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2559f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2559fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2559fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255a00: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x255a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x255a04: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x255a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x255a08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x255a08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a0c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x255a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x255a10: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x255a10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a14: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x255a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x255a18: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x255a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x255a1c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x255a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x255a20: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x255a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x255a24: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x255a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x255a28: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x255a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x255a2c: 0xc09270a  jal         func_249C28
    ctx->pc = 0x255A2Cu;
    SET_GPR_U32(ctx, 31, 0x255A34u);
    ctx->pc = 0x255A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A2Cu;
    // 0x255a30: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x255A2Cu, 0x255A34u)) {
        return;
    }
    ctx->pc = 0x255A34u;
label_255a34:
    // 0x255a34: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x255A34u;
    {
        const bool branch_taken_0x255a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A34u;
        // 0x255a38: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a34) {
            ctx->pc = 0x255A60u;
            goto label_255a60;
        }
    }
    ctx->pc = 0x255A3Cu;
    // 0x255a3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x255a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255a40: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x255a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x255a44: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x255a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x255a48: 0xc092848  jal         func_24A120
    ctx->pc = 0x255A48u;
    SET_GPR_U32(ctx, 31, 0x255A50u);
    ctx->pc = 0x255A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A48u;
    // 0x255a4c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x255A48u, 0x255A50u)) {
        return;
    }
    ctx->pc = 0x255A50u;
label_255a50:
    // 0x255a50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x255a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a54: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x255A54u;
    {
        const bool branch_taken_0x255a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A54u;
        // 0x255a58: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a54) {
            ctx->pc = 0x255E40u;
            goto label_255e40;
        }
    }
    ctx->pc = 0x255A5Cu;
    // 0x255a5c: 0x0  nop
    ctx->pc = 0x255a5cu;
    // NOP
label_255a60:
    // 0x255a60: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x255a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x255a64: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x255a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x255a68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x255a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255a6c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x255a6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x255a70: 0x106000eb  beqz        $v1, . + 4 + (0xEB << 2)
    ctx->pc = 0x255A70u;
    {
        const bool branch_taken_0x255a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A70u;
        // 0x255a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a70) {
            ctx->pc = 0x255E20u;
            goto label_255e20;
        }
    }
    ctx->pc = 0x255A78u;
    // 0x255a78: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x255a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x255a7c: 0xc093546  jal         func_24D518
    ctx->pc = 0x255A7Cu;
    SET_GPR_U32(ctx, 31, 0x255A84u);
    ctx->pc = 0x255A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A7Cu;
    // 0x255a80: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x255A7Cu, 0x255A84u)) {
        return;
    }
    ctx->pc = 0x255A84u;
label_255a84:
    // 0x255a84: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x255a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
    // 0x255a88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255A88u;
    {
        const bool branch_taken_0x255a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A88u;
        // 0x255a8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a88) {
            ctx->pc = 0x255AA0u;
            goto label_255aa0;
        }
    }
    ctx->pc = 0x255A90u;
    // 0x255a90: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x255a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x255a94: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x255a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x255a98: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x255A98u;
    {
        const bool branch_taken_0x255a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A98u;
        // 0x255a9c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a98) {
            ctx->pc = 0x255E30u;
            goto label_255e30;
        }
    }
    ctx->pc = 0x255AA0u;
label_255aa0:
    // 0x255aa0: 0xc0955ca  jal         func_255728
    ctx->pc = 0x255AA0u;
    SET_GPR_U32(ctx, 31, 0x255AA8u);
    ctx->pc = 0x255728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255728u, 0x255AA0u, 0x255AA8u)) {
        return;
    }
    ctx->pc = 0x255AA8u;
label_255aa8:
    // 0x255aa8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x255aa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255aac: 0x126000e6  beqz        $s3, . + 4 + (0xE6 << 2)
    ctx->pc = 0x255AACu;
    {
        const bool branch_taken_0x255aac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x255AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255AACu;
        // 0x255ab0: 0x27b00048  addiu       $s0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255aac) {
            ctx->pc = 0x255E48u;
            goto label_255e48;
        }
    }
    ctx->pc = 0x255AB4u;
    // 0x255ab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x255ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ab8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x255ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x255abc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x255abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ac0: 0xc09270a  jal         func_249C28
    ctx->pc = 0x255AC0u;
    SET_GPR_U32(ctx, 31, 0x255AC8u);
    ctx->pc = 0x255AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255AC0u;
    // 0x255ac4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x255AC0u, 0x255AC8u)) {
        return;
    }
    ctx->pc = 0x255AC8u;
label_255ac8:
    // 0x255ac8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x255AC8u;
    {
        const bool branch_taken_0x255ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255ac8) {
            ctx->pc = 0x255ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255AC8u;
            // 0x255acc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255AF0u;
            goto label_255af0;
        }
    }
    ctx->pc = 0x255AD0u;
    // 0x255ad0: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x255AD0u;
    SET_GPR_U32(ctx, 31, 0x255AD8u);
    ctx->pc = 0x255AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255AD0u;
    // 0x255ad4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x255AD0u, 0x255AD8u)) {
        return;
    }
    ctx->pc = 0x255AD8u;
label_255ad8:
    // 0x255ad8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x255ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255adc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x255adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x255ae0: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x255ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x255ae4: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x255AE4u;
    {
        const bool branch_taken_0x255ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255AE4u;
        // 0x255ae8: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ae4) {
            ctx->pc = 0x255E30u;
            goto label_255e30;
        }
    }
    ctx->pc = 0x255AECu;
    // 0x255aec: 0x0  nop
    ctx->pc = 0x255aecu;
    // NOP
label_255af0:
    // 0x255af0: 0xc088bbc  jal         func_222EF0
    ctx->pc = 0x255AF0u;
    SET_GPR_U32(ctx, 31, 0x255AF8u);
    ctx->pc = 0x255AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255AF0u;
    // 0x255af4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222EF0u, 0x255AF0u, 0x255AF8u)) {
        return;
    }
    ctx->pc = 0x255AF8u;
label_255af8:
    // 0x255af8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x255AF8u;
    {
        const bool branch_taken_0x255af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255AF8u;
        // 0x255afc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255af8) {
            ctx->pc = 0x255B20u;
            goto label_255b20;
        }
    }
    ctx->pc = 0x255B00u;
    // 0x255b00: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x255B00u;
    SET_GPR_U32(ctx, 31, 0x255B08u);
    ctx->pc = 0x255B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255B00u;
    // 0x255b04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x255B00u, 0x255B08u)) {
        return;
    }
    ctx->pc = 0x255B08u;
label_255b08:
    // 0x255b08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x255b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255b0c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x255b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x255b10: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x255b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x255b14: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x255B14u;
    {
        const bool branch_taken_0x255b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B14u;
        // 0x255b18: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b14) {
            ctx->pc = 0x255E30u;
            goto label_255e30;
        }
    }
    ctx->pc = 0x255B1Cu;
    // 0x255b1c: 0x0  nop
    ctx->pc = 0x255b1cu;
    // NOP
label_255b20:
    // 0x255b20: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x255b20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x255b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b28: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x255b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x255b2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x255b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255b30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x255b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b34: 0xc09270a  jal         func_249C28
    ctx->pc = 0x255B34u;
    SET_GPR_U32(ctx, 31, 0x255B3Cu);
    ctx->pc = 0x255B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255B34u;
    // 0x255b38: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x255B34u, 0x255B3Cu)) {
        return;
    }
    ctx->pc = 0x255B3Cu;
label_255b3c:
    // 0x255b3c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x255B3Cu;
    {
        const bool branch_taken_0x255b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B3Cu;
        // 0x255b40: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b3c) {
            ctx->pc = 0x255B68u;
            goto label_255b68;
        }
    }
    ctx->pc = 0x255B44u;
    // 0x255b44: 0xc088ba8  jal         func_222EA0
    ctx->pc = 0x255B44u;
    SET_GPR_U32(ctx, 31, 0x255B4Cu);
    ctx->pc = 0x255B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255B44u;
    // 0x255b48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222EA0u, 0x255B44u, 0x255B4Cu)) {
        return;
    }
    ctx->pc = 0x255B4Cu;
label_255b4c:
    // 0x255b4c: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x255B4Cu;
    SET_GPR_U32(ctx, 31, 0x255B54u);
    ctx->pc = 0x255B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255B4Cu;
    // 0x255b50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x255B4Cu, 0x255B54u)) {
        return;
    }
    ctx->pc = 0x255B54u;
label_255b54:
    // 0x255b54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x255b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255b58: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x255b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x255b5c: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x255b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x255b60: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x255B60u;
    {
        const bool branch_taken_0x255b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B60u;
        // 0x255b64: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b60) {
            ctx->pc = 0x255E30u;
            goto label_255e30;
        }
    }
    ctx->pc = 0x255B68u;
label_255b68:
    // 0x255b68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x255b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b6c: 0xc095194  jal         func_254650
    ctx->pc = 0x255B6Cu;
    SET_GPR_U32(ctx, 31, 0x255B74u);
    ctx->pc = 0x255B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255B6Cu;
    // 0x255b70: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254650u, 0x255B6Cu, 0x255B74u)) {
        return;
    }
    ctx->pc = 0x255B74u;
label_255b74:
    // 0x255b74: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x255B74u;
    {
        const bool branch_taken_0x255b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B74u;
        // 0x255b78: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b74) {
            ctx->pc = 0x255BA0u;
            goto label_255ba0;
        }
    }
    ctx->pc = 0x255B7Cu;
    // 0x255b7c: 0xc088ba8  jal         func_222EA0
    ctx->pc = 0x255B7Cu;
    SET_GPR_U32(ctx, 31, 0x255B84u);
    ctx->pc = 0x255B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255B7Cu;
    // 0x255b80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222EA0u, 0x255B7Cu, 0x255B84u)) {
        return;
    }
    ctx->pc = 0x255B84u;
label_255b84:
    // 0x255b84: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x255B84u;
    SET_GPR_U32(ctx, 31, 0x255B8Cu);
    ctx->pc = 0x255B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255B84u;
    // 0x255b88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x255B84u, 0x255B8Cu)) {
        return;
    }
    ctx->pc = 0x255B8Cu;
label_255b8c:
    // 0x255b8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x255b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255b90: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x255b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x255b94: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x255b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x255b98: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x255B98u;
    {
        const bool branch_taken_0x255b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B98u;
        // 0x255b9c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b98) {
            ctx->pc = 0x255E30u;
            goto label_255e30;
        }
    }
    ctx->pc = 0x255BA0u;
label_255ba0:
    // 0x255ba0: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x255BA0u;
    {
        const bool branch_taken_0x255ba0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x255BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255BA0u;
        // 0x255ba4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ba0) {
            ctx->pc = 0x255C24u;
            goto label_255c24;
        }
    }
    ctx->pc = 0x255BA8u;
    // 0x255ba8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x255ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255bac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x255bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_255bb0:
    // 0x255bb0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x255bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x255bb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x255bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255bb8: 0xc09270a  jal         func_249C28
    ctx->pc = 0x255BB8u;
    SET_GPR_U32(ctx, 31, 0x255BC0u);
    ctx->pc = 0x255BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255BB8u;
    // 0x255bbc: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x255BB8u, 0x255BC0u)) {
        return;
    }
    ctx->pc = 0x255BC0u;
label_255bc0:
    // 0x255bc0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x255BC0u;
    {
        const bool branch_taken_0x255bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255BC0u;
        // 0x255bc4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255bc0) {
            ctx->pc = 0x255BDCu;
            goto label_255bdc;
        }
    }
    ctx->pc = 0x255BC8u;
    // 0x255bc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x255bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255bcc: 0xc095246  jal         func_254918
    ctx->pc = 0x255BCCu;
    SET_GPR_U32(ctx, 31, 0x255BD4u);
    ctx->pc = 0x255BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255BCCu;
    // 0x255bd0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254918u, 0x255BCCu, 0x255BD4u)) {
        return;
    }
    ctx->pc = 0x255BD4u;
label_255bd4:
    // 0x255bd4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x255BD4u;
    {
        const bool branch_taken_0x255bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255BD4u;
        // 0x255bd8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255bd4) {
            ctx->pc = 0x255C08u;
            goto label_255c08;
        }
    }
    ctx->pc = 0x255BDCu;
label_255bdc:
    // 0x255bdc: 0xc095170  jal         func_2545C0
    ctx->pc = 0x255BDCu;
    SET_GPR_U32(ctx, 31, 0x255BE4u);
    ctx->pc = 0x255BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255BDCu;
    // 0x255be0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2545C0u, 0x255BDCu, 0x255BE4u)) {
        return;
    }
    ctx->pc = 0x255BE4u;
label_255be4:
    // 0x255be4: 0xc088ba8  jal         func_222EA0
    ctx->pc = 0x255BE4u;
    SET_GPR_U32(ctx, 31, 0x255BECu);
    ctx->pc = 0x255BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255BE4u;
    // 0x255be8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222EA0u, 0x255BE4u, 0x255BECu)) {
        return;
    }
    ctx->pc = 0x255BECu;
label_255bec:
    // 0x255bec: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x255BECu;
    SET_GPR_U32(ctx, 31, 0x255BF4u);
    ctx->pc = 0x255BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255BECu;
    // 0x255bf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x255BECu, 0x255BF4u)) {
        return;
    }
    ctx->pc = 0x255BF4u;
label_255bf4:
    // 0x255bf4: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x255bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x255bf8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x255bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x255bfc: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x255BFCu;
    {
        const bool branch_taken_0x255bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255BFCu;
        // 0x255c00: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255bfc) {
            ctx->pc = 0x255E30u;
            goto label_255e30;
        }
    }
    ctx->pc = 0x255C04u;
    // 0x255c04: 0x0  nop
    ctx->pc = 0x255c04u;
    // NOP
label_255c08:
    // 0x255c08: 0xc095622  jal         func_255888
    ctx->pc = 0x255C08u;
    SET_GPR_U32(ctx, 31, 0x255C10u);
    ctx->pc = 0x255C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C08u;
    // 0x255c0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255888u, 0x255C08u, 0x255C10u)) {
        return;
    }
    ctx->pc = 0x255C10u;
label_255c10:
    // 0x255c10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x255c10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x255c14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x255c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255c18: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x255c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x255c1c: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x255C1Cu;
    {
        const bool branch_taken_0x255c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255c1c) {
            ctx->pc = 0x255C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255C1Cu;
            // 0x255c20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255bb0;
        }
    }
    ctx->pc = 0x255C24u;
label_255c24:
    // 0x255c24: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x255c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x255c28: 0x18400035  blez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x255C28u;
    {
        const bool branch_taken_0x255c28 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x255C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C28u;
        // 0x255c2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255c28) {
            ctx->pc = 0x255D00u;
            goto label_255d00;
        }
    }
    ctx->pc = 0x255C30u;
    // 0x255c30: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x255c30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255c34: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x255c34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255c38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x255c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c3c: 0x0  nop
    ctx->pc = 0x255c3cu;
    // NOP
label_255c40:
    // 0x255c40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x255c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x255c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255c48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x255c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c4c: 0xc09270a  jal         func_249C28
    ctx->pc = 0x255C4Cu;
    SET_GPR_U32(ctx, 31, 0x255C54u);
    ctx->pc = 0x255C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C4Cu;
    // 0x255c50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x255C4Cu, 0x255C54u)) {
        return;
    }
    ctx->pc = 0x255C54u;
label_255c54:
    // 0x255c54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255C54u;
    {
        const bool branch_taken_0x255c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C54u;
        // 0x255c58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255c54) {
            ctx->pc = 0x255C6Cu;
            goto label_255c6c;
        }
    }
    ctx->pc = 0x255C5Cu;
    // 0x255c5c: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x255c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x255c60: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x255C60u;
    SET_GPR_U32(ctx, 31, 0x255C68u);
    ctx->pc = 0x255C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C60u;
    // 0x255c64: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x255C60u, 0x255C68u)) {
        return;
    }
    ctx->pc = 0x255C68u;
label_255c68:
    // 0x255c68: 0x2c2800b  movn        $s0, $s6, $v0
    ctx->pc = 0x255c68u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 22));
label_255c6c:
    // 0x255c6c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x255C6Cu;
    {
        const bool branch_taken_0x255c6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x255C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C6Cu;
        // 0x255c70: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255c6c) {
            ctx->pc = 0x255CA0u;
            goto label_255ca0;
        }
    }
    ctx->pc = 0x255C74u;
    // 0x255c74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x255c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x255c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c7c: 0xc09270a  jal         func_249C28
    ctx->pc = 0x255C7Cu;
    SET_GPR_U32(ctx, 31, 0x255C84u);
    ctx->pc = 0x255C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C7Cu;
    // 0x255c80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x255C7Cu, 0x255C84u)) {
        return;
    }
    ctx->pc = 0x255C84u;
label_255c84:
    // 0x255c84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x255C84u;
    {
        const bool branch_taken_0x255c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255c84) {
            ctx->pc = 0x255CA0u;
            goto label_255ca0;
        }
    }
    ctx->pc = 0x255C8Cu;
    // 0x255c8c: 0xc095d96  jal         func_257658
    ctx->pc = 0x255C8Cu;
    SET_GPR_U32(ctx, 31, 0x255C94u);
    ctx->pc = 0x255C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C8Cu;
    // 0x255c90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257658u, 0x255C8Cu, 0x255C94u)) {
        return;
    }
    ctx->pc = 0x255C94u;
label_255c94:
    // 0x255c94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x255c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c98: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x255C98u;
    {
        const bool branch_taken_0x255c98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x255C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C98u;
        // 0x255c9c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255c98) {
            ctx->pc = 0x255CC8u;
            goto label_255cc8;
        }
    }
    ctx->pc = 0x255CA0u;
label_255ca0:
    // 0x255ca0: 0xc095170  jal         func_2545C0
    ctx->pc = 0x255CA0u;
    SET_GPR_U32(ctx, 31, 0x255CA8u);
    ctx->pc = 0x255CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255CA0u;
    // 0x255ca4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2545C0u, 0x255CA0u, 0x255CA8u)) {
        return;
    }
    ctx->pc = 0x255CA8u;
label_255ca8:
    // 0x255ca8: 0xc088ba8  jal         func_222EA0
    ctx->pc = 0x255CA8u;
    SET_GPR_U32(ctx, 31, 0x255CB0u);
    ctx->pc = 0x255CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255CA8u;
    // 0x255cac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222EA0u, 0x255CA8u, 0x255CB0u)) {
        return;
    }
    ctx->pc = 0x255CB0u;
label_255cb0:
    // 0x255cb0: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x255CB0u;
    SET_GPR_U32(ctx, 31, 0x255CB8u);
    ctx->pc = 0x255CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255CB0u;
    // 0x255cb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x255CB0u, 0x255CB8u)) {
        return;
    }
    ctx->pc = 0x255CB8u;
label_255cb8:
    // 0x255cb8: 0xafb50030  sw          $s5, 0x30($sp)
    ctx->pc = 0x255cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 21));
    // 0x255cbc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x255cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x255cc0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x255CC0u;
    {
        const bool branch_taken_0x255cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255CC0u;
        // 0x255cc4: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255cc0) {
            ctx->pc = 0x255E30u;
            goto label_255e30;
        }
    }
    ctx->pc = 0x255CC8u;
label_255cc8:
    // 0x255cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ccc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x255cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255cd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x255cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x255cd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255cd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255cdc: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x255CDCu;
    SET_GPR_U32(ctx, 31, 0x255CE4u);
    ctx->pc = 0x255CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255CDCu;
    // 0x255ce0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x255CDCu, 0x255CE4u)) {
        return;
    }
    ctx->pc = 0x255CE4u;
label_255ce4:
    // 0x255ce4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x255ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ce8: 0xc095638  jal         func_2558E0
    ctx->pc = 0x255CE8u;
    SET_GPR_U32(ctx, 31, 0x255CF0u);
    ctx->pc = 0x255CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255CE8u;
    // 0x255cec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2558E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2558E0u, 0x255CE8u, 0x255CF0u)) {
        return;
    }
    ctx->pc = 0x255CF0u;
label_255cf0:
    // 0x255cf0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x255cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x255cf4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x255cf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x255cf8: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x255CF8u;
    {
        const bool branch_taken_0x255cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x255CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255CF8u;
        // 0x255cfc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255cf8) {
            ctx->pc = 0x255C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255c40;
        }
    }
    ctx->pc = 0x255D00u;
label_255d00:
    // 0x255d00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x255d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x255d04: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x255D04u;
    {
        const bool branch_taken_0x255d04 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x255D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D04u;
        // 0x255d08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d04) {
            ctx->pc = 0x255DD8u;
            goto label_255dd8;
        }
    }
    ctx->pc = 0x255D0Cu;
    // 0x255d0c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x255d0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255d10: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x255d10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255d14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x255d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_255d18:
    // 0x255d18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x255d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x255d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255d20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x255d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d24: 0xc09270a  jal         func_249C28
    ctx->pc = 0x255D24u;
    SET_GPR_U32(ctx, 31, 0x255D2Cu);
    ctx->pc = 0x255D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D24u;
    // 0x255d28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x255D24u, 0x255D2Cu)) {
        return;
    }
    ctx->pc = 0x255D2Cu;
label_255d2c:
    // 0x255d2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255D2Cu;
    {
        const bool branch_taken_0x255d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D2Cu;
        // 0x255d30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d2c) {
            ctx->pc = 0x255D44u;
            goto label_255d44;
        }
    }
    ctx->pc = 0x255D34u;
    // 0x255d34: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x255d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x255d38: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x255D38u;
    SET_GPR_U32(ctx, 31, 0x255D40u);
    ctx->pc = 0x255D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D38u;
    // 0x255d3c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x255D38u, 0x255D40u)) {
        return;
    }
    ctx->pc = 0x255D40u;
label_255d40:
    // 0x255d40: 0x2c2800b  movn        $s0, $s6, $v0
    ctx->pc = 0x255d40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 22));
label_255d44:
    // 0x255d44: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x255D44u;
    {
        const bool branch_taken_0x255d44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D44u;
        // 0x255d48: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d44) {
            ctx->pc = 0x255D78u;
            goto label_255d78;
        }
    }
    ctx->pc = 0x255D4Cu;
    // 0x255d4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x255d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x255d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d54: 0xc09270a  jal         func_249C28
    ctx->pc = 0x255D54u;
    SET_GPR_U32(ctx, 31, 0x255D5Cu);
    ctx->pc = 0x255D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D54u;
    // 0x255d58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x255D54u, 0x255D5Cu)) {
        return;
    }
    ctx->pc = 0x255D5Cu;
label_255d5c:
    // 0x255d5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x255D5Cu;
    {
        const bool branch_taken_0x255d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255d5c) {
            ctx->pc = 0x255D78u;
            goto label_255d78;
        }
    }
    ctx->pc = 0x255D64u;
    // 0x255d64: 0xc0c0c94  jal         func_303250
    ctx->pc = 0x255D64u;
    SET_GPR_U32(ctx, 31, 0x255D6Cu);
    ctx->pc = 0x255D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D64u;
    // 0x255d68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x303250u, 0x255D64u, 0x255D6Cu)) {
        return;
    }
    ctx->pc = 0x255D6Cu;
label_255d6c:
    // 0x255d6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x255d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d70: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x255D70u;
    {
        const bool branch_taken_0x255d70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x255D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D70u;
        // 0x255d74: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d70) {
            ctx->pc = 0x255DA0u;
            goto label_255da0;
        }
    }
    ctx->pc = 0x255D78u;
label_255d78:
    // 0x255d78: 0xc095170  jal         func_2545C0
    ctx->pc = 0x255D78u;
    SET_GPR_U32(ctx, 31, 0x255D80u);
    ctx->pc = 0x255D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D78u;
    // 0x255d7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2545C0u, 0x255D78u, 0x255D80u)) {
        return;
    }
    ctx->pc = 0x255D80u;
label_255d80:
    // 0x255d80: 0xc088ba8  jal         func_222EA0
    ctx->pc = 0x255D80u;
    SET_GPR_U32(ctx, 31, 0x255D88u);
    ctx->pc = 0x255D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D80u;
    // 0x255d84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222EA0u, 0x255D80u, 0x255D88u)) {
        return;
    }
    ctx->pc = 0x255D88u;
label_255d88:
    // 0x255d88: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x255D88u;
    SET_GPR_U32(ctx, 31, 0x255D90u);
    ctx->pc = 0x255D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D88u;
    // 0x255d8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x255D88u, 0x255D90u)) {
        return;
    }
    ctx->pc = 0x255D90u;
label_255d90:
    // 0x255d90: 0xafb50030  sw          $s5, 0x30($sp)
    ctx->pc = 0x255d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 21));
    // 0x255d94: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x255d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x255d98: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x255D98u;
    {
        const bool branch_taken_0x255d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D98u;
        // 0x255d9c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d98) {
            ctx->pc = 0x255E30u;
            goto label_255e30;
        }
    }
    ctx->pc = 0x255DA0u;
label_255da0:
    // 0x255da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255da4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x255da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255da8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x255da8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x255dac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255db0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255db4: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x255DB4u;
    SET_GPR_U32(ctx, 31, 0x255DBCu);
    ctx->pc = 0x255DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255DB4u;
    // 0x255db8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x255DB4u, 0x255DBCu)) {
        return;
    }
    ctx->pc = 0x255DBCu;
label_255dbc:
    // 0x255dbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x255dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255dc0: 0xc095654  jal         func_255950
    ctx->pc = 0x255DC0u;
    SET_GPR_U32(ctx, 31, 0x255DC8u);
    ctx->pc = 0x255DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255DC0u;
    // 0x255dc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255950u, 0x255DC0u, 0x255DC8u)) {
        return;
    }
    ctx->pc = 0x255DC8u;
label_255dc8:
    // 0x255dc8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x255dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x255dcc: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x255dccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x255dd0: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x255DD0u;
    {
        const bool branch_taken_0x255dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x255DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255DD0u;
        // 0x255dd4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255dd0) {
            ctx->pc = 0x255D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255d18;
        }
    }
    ctx->pc = 0x255DD8u;
label_255dd8:
    // 0x255dd8: 0xc095170  jal         func_2545C0
    ctx->pc = 0x255DD8u;
    SET_GPR_U32(ctx, 31, 0x255DE0u);
    ctx->pc = 0x255DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255DD8u;
    // 0x255ddc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2545C0u, 0x255DD8u, 0x255DE0u)) {
        return;
    }
    ctx->pc = 0x255DE0u;
label_255de0:
    // 0x255de0: 0xc088ba8  jal         func_222EA0
    ctx->pc = 0x255DE0u;
    SET_GPR_U32(ctx, 31, 0x255DE8u);
    ctx->pc = 0x255DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255DE0u;
    // 0x255de4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222EA0u, 0x255DE0u, 0x255DE8u)) {
        return;
    }
    ctx->pc = 0x255DE8u;
label_255de8:
    // 0x255de8: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x255de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x255dec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x255decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255df0: 0x248411f8  addiu       $a0, $a0, 0x11F8
    ctx->pc = 0x255df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4600));
    // 0x255df4: 0xc093708  jal         func_24DC20
    ctx->pc = 0x255DF4u;
    SET_GPR_U32(ctx, 31, 0x255DFCu);
    ctx->pc = 0x255DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255DF4u;
    // 0x255df8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DC20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DC20u, 0x255DF4u, 0x255DFCu)) {
        return;
    }
    ctx->pc = 0x255DFCu;
label_255dfc:
    // 0x255dfc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x255DFCu;
    {
        const bool branch_taken_0x255dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255DFCu;
        // 0x255e00: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255dfc) {
            ctx->pc = 0x255E4Cu;
            goto label_255e4c;
        }
    }
    ctx->pc = 0x255E04u;
    // 0x255e04: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x255E04u;
    SET_GPR_U32(ctx, 31, 0x255E0Cu);
    ctx->pc = 0x255E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255E04u;
    // 0x255e08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x255E04u, 0x255E0Cu)) {
        return;
    }
    ctx->pc = 0x255E0Cu;
label_255e0c:
    // 0x255e0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x255e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255e10: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x255e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x255e14: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x255e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x255e18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x255E18u;
    {
        const bool branch_taken_0x255e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E18u;
        // 0x255e1c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255e18) {
            ctx->pc = 0x255E30u;
            goto label_255e30;
        }
    }
    ctx->pc = 0x255E20u;
label_255e20:
    // 0x255e20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x255e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255e24: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x255e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x255e28: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x255e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x255e2c: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x255e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_255e30:
    // 0x255e30: 0xc092848  jal         func_24A120
    ctx->pc = 0x255E30u;
    SET_GPR_U32(ctx, 31, 0x255E38u);
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x255E30u, 0x255E38u)) {
        return;
    }
    ctx->pc = 0x255E38u;
label_255e38:
    // 0x255e38: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x255e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x255e3c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x255e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_255e40:
    // 0x255e40: 0xc09281a  jal         func_24A068
    ctx->pc = 0x255E40u;
    SET_GPR_U32(ctx, 31, 0x255E48u);
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x255E40u, 0x255E48u)) {
        return;
    }
    ctx->pc = 0x255E48u;
label_255e48:
    // 0x255e48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x255e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_255e4c:
    // 0x255e4c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x255e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x255e50: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x255e50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x255e54: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x255e54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x255e58: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x255e58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x255e5c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x255e5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x255e60: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x255e60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x255e64: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x255e64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x255e68: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x255e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x255e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x255E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E6Cu;
        // 0x255e70: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255E74u;
    // 0x255e74: 0x0  nop
    ctx->pc = 0x255e74u;
    // NOP
    ctx->pc = 0x255e78u;
}
