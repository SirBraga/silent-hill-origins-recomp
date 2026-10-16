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

// Function: sub_0016AF20
// Address: 0x16af20 - 0x16b170
void sub_0016AF20_0x16af20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AF20_0x16af20");
#endif

    switch (ctx->pc) {
        case 0x16af58u: goto label_16af58;
        case 0x16af70u: goto label_16af70;
        case 0x16af88u: goto label_16af88;
        case 0x16afa8u: goto label_16afa8;
        case 0x16b030u: goto label_16b030;
        case 0x16b044u: goto label_16b044;
        case 0x16b0bcu: goto label_16b0bc;
        case 0x16b0d0u: goto label_16b0d0;
        case 0x16b100u: goto label_16b100;
        case 0x16b118u: goto label_16b118;
        case 0x16b128u: goto label_16b128;
        case 0x16b158u: goto label_16b158;
        default: break;
    }

    ctx->pc = 0x16af20u;

    // 0x16af20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16af20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16af24: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16af24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16af28: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16af28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16af2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16af2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16af30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16af34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16af34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16af38: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x16af38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16af3c: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x16af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x16af40: 0x14a20065  bne         $a1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x16AF40u;
    {
        const bool branch_taken_0x16af40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF40u;
        // 0x16af44: 0x26230044  addiu       $v1, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af40) {
            ctx->pc = 0x16B0D8u;
            goto label_16b0d8;
        }
    }
    ctx->pc = 0x16AF48u;
    // 0x16af48: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x16af48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16af4c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16af4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af50: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16AF50u;
    SET_GPR_U32(ctx, 31, 0x16AF58u);
    ctx->pc = 0x16AF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AF50u;
    // 0x16af54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16AF50u, 0x16AF58u)) {
        return;
    }
    ctx->pc = 0x16AF58u;
label_16af58:
    // 0x16af58: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16af58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16af5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16af5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af60: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x16af60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x16af64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16af64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af68: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x16AF68u;
    SET_GPR_U32(ctx, 31, 0x16AF70u);
    ctx->pc = 0x16AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AF68u;
    // 0x16af6c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x16AF68u, 0x16AF70u)) {
        return;
    }
    ctx->pc = 0x16AF70u;
label_16af70:
    // 0x16af70: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16af70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16af74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16af74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af78: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x16af78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x16af7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16af7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af80: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x16AF80u;
    SET_GPR_U32(ctx, 31, 0x16AF88u);
    ctx->pc = 0x16AF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AF80u;
    // 0x16af84: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x16AF80u, 0x16AF88u)) {
        return;
    }
    ctx->pc = 0x16AF88u;
label_16af88:
    // 0x16af88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16af88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16af8c: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x16af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x16af90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16AF90u;
    {
        const bool branch_taken_0x16af90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF90u;
        // 0x16af94: 0xae240060  sw          $a0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af90) {
            ctx->pc = 0x16AFB0u;
            goto label_16afb0;
        }
    }
    ctx->pc = 0x16AF98u;
    // 0x16af98: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x16af98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x16af9c: 0x26250054  addiu       $a1, $s1, 0x54
    ctx->pc = 0x16af9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    // 0x16afa0: 0xc05ec5a  jal         func_17B168
    ctx->pc = 0x16AFA0u;
    SET_GPR_U32(ctx, 31, 0x16AFA8u);
    ctx->pc = 0x16AFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AFA0u;
    // 0x16afa4: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B168u, 0x16AFA0u, 0x16AFA8u)) {
        return;
    }
    ctx->pc = 0x16AFA8u;
label_16afa8:
    // 0x16afa8: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x16AFA8u;
    {
        const bool branch_taken_0x16afa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFA8u;
        // 0x16afac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afa8) {
            ctx->pc = 0x16B15Cu;
            goto label_16b15c;
        }
    }
    ctx->pc = 0x16AFB0u;
label_16afb0:
    // 0x16afb0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x16afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x16afb4: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x16AFB4u;
    {
        const bool branch_taken_0x16afb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFB4u;
        // 0x16afb8: 0x8e230058  lw          $v1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afb4) {
            ctx->pc = 0x16B04Cu;
            goto label_16b04c;
        }
    }
    ctx->pc = 0x16AFBCu;
    // 0x16afbc: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16AFBCu;
    {
        const bool branch_taken_0x16afbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x16AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFBCu;
        // 0x16afc0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afbc) {
            ctx->pc = 0x16B004u;
            goto label_16b004;
        }
    }
    ctx->pc = 0x16AFC4u;
    // 0x16afc4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16AFC4u;
    {
        const bool branch_taken_0x16afc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16afc4) {
            ctx->pc = 0x16AFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AFC4u;
            // 0x16afc8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AFDCu;
            goto label_16afdc;
        }
    }
    ctx->pc = 0x16AFCCu;
    // 0x16afcc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16AFCCu;
    {
        const bool branch_taken_0x16afcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFCCu;
        // 0x16afd0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afcc) {
            ctx->pc = 0x16AFECu;
            goto label_16afec;
        }
    }
    ctx->pc = 0x16AFD4u;
    // 0x16afd4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x16AFD4u;
    {
        const bool branch_taken_0x16afd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFD4u;
        // 0x16afd8: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afd4) {
            ctx->pc = 0x16B160u;
            goto label_16b160;
        }
    }
    ctx->pc = 0x16AFDCu;
label_16afdc:
    // 0x16afdc: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16AFDCu;
    {
        const bool branch_taken_0x16afdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFDCu;
        // 0x16afe0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afdc) {
            ctx->pc = 0x16B038u;
            goto label_16b038;
        }
    }
    ctx->pc = 0x16AFE4u;
    // 0x16afe4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x16AFE4u;
    {
        const bool branch_taken_0x16afe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFE4u;
        // 0x16afe8: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afe4) {
            ctx->pc = 0x16B160u;
            goto label_16b160;
        }
    }
    ctx->pc = 0x16AFECu;
label_16afec:
    // 0x16afec: 0xc62c005c  lwc1        $f12, 0x5C($s1)
    ctx->pc = 0x16afecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16aff0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x16aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x16aff4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16aff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16aff8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16aff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16affc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16AFFCu;
    {
        const bool branch_taken_0x16affc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFFCu;
        // 0x16b000: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16affc) {
            ctx->pc = 0x16B018u;
            goto label_16b018;
        }
    }
    ctx->pc = 0x16B004u;
label_16b004:
    // 0x16b004: 0xc62c005c  lwc1        $f12, 0x5C($s1)
    ctx->pc = 0x16b004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16b008: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x16b008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x16b00c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16b00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16b010: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16b010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b014: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b018:
    // 0x16b018: 0x8c444120  lw          $a0, 0x4120($v0)
    ctx->pc = 0x16b018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16672)));
    // 0x16b01c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b020: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x16b020u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[12]);
    // 0x16b024: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16b024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b028: 0xc07bf14  jal         func_1EFC50
    ctx->pc = 0x16B028u;
    SET_GPR_U32(ctx, 31, 0x16B030u);
    ctx->pc = 0x16B02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B028u;
    // 0x16b02c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFC50u, 0x16B028u, 0x16B030u)) {
        return;
    }
    ctx->pc = 0x16B030u;
label_16b030:
    // 0x16b030: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x16B030u;
    {
        const bool branch_taken_0x16b030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B030u;
        // 0x16b034: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b030) {
            ctx->pc = 0x16B15Cu;
            goto label_16b15c;
        }
    }
    ctx->pc = 0x16B038u;
label_16b038:
    // 0x16b038: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x16b038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x16b03c: 0xc07bf02  jal         func_1EFC08
    ctx->pc = 0x16B03Cu;
    SET_GPR_U32(ctx, 31, 0x16B044u);
    ctx->pc = 0x16B040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B03Cu;
    // 0x16b040: 0x8c444120  lw          $a0, 0x4120($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFC08u, 0x16B03Cu, 0x16B044u)) {
        return;
    }
    ctx->pc = 0x16B044u;
label_16b044:
    // 0x16b044: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x16B044u;
    {
        const bool branch_taken_0x16b044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B044u;
        // 0x16b048: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b044) {
            ctx->pc = 0x16B15Cu;
            goto label_16b15c;
        }
    }
    ctx->pc = 0x16B04Cu;
label_16b04c:
    // 0x16b04c: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16B04Cu;
    {
        const bool branch_taken_0x16b04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x16B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B04Cu;
        // 0x16b050: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b04c) {
            ctx->pc = 0x16B094u;
            goto label_16b094;
        }
    }
    ctx->pc = 0x16B054u;
    // 0x16b054: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B054u;
    {
        const bool branch_taken_0x16b054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b054) {
            ctx->pc = 0x16B058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B054u;
            // 0x16b058: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B06Cu;
            goto label_16b06c;
        }
    }
    ctx->pc = 0x16B05Cu;
    // 0x16b05c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16B05Cu;
    {
        const bool branch_taken_0x16b05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B05Cu;
        // 0x16b060: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b05c) {
            ctx->pc = 0x16B07Cu;
            goto label_16b07c;
        }
    }
    ctx->pc = 0x16B064u;
    // 0x16b064: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x16B064u;
    {
        const bool branch_taken_0x16b064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B064u;
        // 0x16b068: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b064) {
            ctx->pc = 0x16B160u;
            goto label_16b160;
        }
    }
    ctx->pc = 0x16B06Cu;
label_16b06c:
    // 0x16b06c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16B06Cu;
    {
        const bool branch_taken_0x16b06c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B06Cu;
        // 0x16b070: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b06c) {
            ctx->pc = 0x16B0C4u;
            goto label_16b0c4;
        }
    }
    ctx->pc = 0x16B074u;
    // 0x16b074: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x16B074u;
    {
        const bool branch_taken_0x16b074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B074u;
        // 0x16b078: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b074) {
            ctx->pc = 0x16B160u;
            goto label_16b160;
        }
    }
    ctx->pc = 0x16B07Cu;
label_16b07c:
    // 0x16b07c: 0xc62c005c  lwc1        $f12, 0x5C($s1)
    ctx->pc = 0x16b07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16b080: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x16b080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x16b084: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16b084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16b088: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16b088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b08c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16B08Cu;
    {
        const bool branch_taken_0x16b08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B08Cu;
        // 0x16b090: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b08c) {
            ctx->pc = 0x16B0A8u;
            goto label_16b0a8;
        }
    }
    ctx->pc = 0x16B094u;
label_16b094:
    // 0x16b094: 0xc62c005c  lwc1        $f12, 0x5C($s1)
    ctx->pc = 0x16b094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16b098: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x16b098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x16b09c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16b09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16b0a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16b0a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b0a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b0a8:
    // 0x16b0a8: 0x8c444120  lw          $a0, 0x4120($v0)
    ctx->pc = 0x16b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16672)));
    // 0x16b0ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b0acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b0b0: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x16b0b0u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[12]);
    // 0x16b0b4: 0xc07bf5e  jal         func_1EFD78
    ctx->pc = 0x16B0B4u;
    SET_GPR_U32(ctx, 31, 0x16B0BCu);
    ctx->pc = 0x16B0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B0B4u;
    // 0x16b0b8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFD78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFD78u, 0x16B0B4u, 0x16B0BCu)) {
        return;
    }
    ctx->pc = 0x16B0BCu;
label_16b0bc:
    // 0x16b0bc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x16B0BCu;
    {
        const bool branch_taken_0x16b0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0BCu;
        // 0x16b0c0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0bc) {
            ctx->pc = 0x16B15Cu;
            goto label_16b15c;
        }
    }
    ctx->pc = 0x16B0C4u;
label_16b0c4:
    // 0x16b0c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x16b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x16b0c8: 0xc07bee4  jal         func_1EFB90
    ctx->pc = 0x16B0C8u;
    SET_GPR_U32(ctx, 31, 0x16B0D0u);
    ctx->pc = 0x16B0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B0C8u;
    // 0x16b0cc: 0x8c444120  lw          $a0, 0x4120($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFB90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFB90u, 0x16B0C8u, 0x16B0D0u)) {
        return;
    }
    ctx->pc = 0x16B0D0u;
label_16b0d0:
    // 0x16b0d0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x16B0D0u;
    {
        const bool branch_taken_0x16b0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0D0u;
        // 0x16b0d4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0d0) {
            ctx->pc = 0x16B15Cu;
            goto label_16b15c;
        }
    }
    ctx->pc = 0x16B0D8u;
label_16b0d8:
    // 0x16b0d8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x16b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x16b0dc: 0x8c628898  lw          $v0, -0x7768($v1)
    ctx->pc = 0x16b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8898u));
    // 0x16b0e0: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B0E0u;
    {
        const bool branch_taken_0x16b0e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0E0u;
        // 0x16b0e4: 0x24728898  addiu       $s2, $v1, -0x7768 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0e0) {
            ctx->pc = 0x16B0F8u;
            goto label_16b0f8;
        }
    }
    ctx->pc = 0x16B0E8u;
    // 0x16b0e8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x16b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x16b0ec: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x16b0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8880u));
    // 0x16b0f0: 0x14a3001a  bne         $a1, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x16B0F0u;
    {
        const bool branch_taken_0x16b0f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x16B0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0F0u;
        // 0x16b0f4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0f0) {
            ctx->pc = 0x16B15Cu;
            goto label_16b15c;
        }
    }
    ctx->pc = 0x16B0F8u;
label_16b0f8:
    // 0x16b0f8: 0xc07be38  jal         func_1EF8E0
    ctx->pc = 0x16B0F8u;
    SET_GPR_U32(ctx, 31, 0x16B100u);
    ctx->pc = 0x1EF8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF8E0u, 0x16B0F8u, 0x16B100u)) {
        return;
    }
    ctx->pc = 0x16B100u;
label_16b100:
    // 0x16b100: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16B100u;
    {
        const bool branch_taken_0x16b100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B100u;
        // 0x16b104: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b100) {
            ctx->pc = 0x16B15Cu;
            goto label_16b15c;
        }
    }
    ctx->pc = 0x16B108u;
    // 0x16b108: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x16b108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16b10c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16b10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b110: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16B110u;
    SET_GPR_U32(ctx, 31, 0x16B118u);
    ctx->pc = 0x16B114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B110u;
    // 0x16b114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16B110u, 0x16B118u)) {
        return;
    }
    ctx->pc = 0x16B118u;
label_16b118:
    // 0x16b118: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16b118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16b11c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b120: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16B120u;
    SET_GPR_U32(ctx, 31, 0x16B128u);
    ctx->pc = 0x16B124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B120u;
    // 0x16b124: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16B120u, 0x16B128u)) {
        return;
    }
    ctx->pc = 0x16B128u;
label_16b128:
    // 0x16b128: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x16b128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x16b12c: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x16b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x16b130: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x16b130u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x16b134: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16B134u;
    {
        const bool branch_taken_0x16b134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B134u;
        // 0x16b138: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b134) {
            ctx->pc = 0x16B15Cu;
            goto label_16b15c;
        }
    }
    ctx->pc = 0x16B13Cu;
    // 0x16b13c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16b140: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16B140u;
    {
        const bool branch_taken_0x16b140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B140u;
        // 0x16b144: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b140) {
            ctx->pc = 0x16B160u;
            goto label_16b160;
        }
    }
    ctx->pc = 0x16B148u;
    // 0x16b148: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16b148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16b14c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16b14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b150: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x16B150u;
    SET_GPR_U32(ctx, 31, 0x16B158u);
    ctx->pc = 0x16B154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B150u;
    // 0x16b154: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x16B150u, 0x16B158u)) {
        return;
    }
    ctx->pc = 0x16B158u;
label_16b158:
    // 0x16b158: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16b158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16b15c:
    // 0x16b15c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16b15cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16b160:
    // 0x16b160: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b164: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16b164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b168: 0x3e00008  jr          $ra
    ctx->pc = 0x16B168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B168u;
        // 0x16b16c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B170u;
}
