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

// Function: sub_0024CB60
// Address: 0x24cb60 - 0x24cc58
void sub_0024CB60_0x24cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CB60_0x24cb60");
#endif

    switch (ctx->pc) {
        case 0x24cb60u: goto label_24cb60;
        case 0x24cb64u: goto label_24cb64;
        case 0x24cb68u: goto label_24cb68;
        case 0x24cb6cu: goto label_24cb6c;
        case 0x24cb70u: goto label_24cb70;
        case 0x24cb74u: goto label_24cb74;
        case 0x24cb78u: goto label_24cb78;
        case 0x24cb7cu: goto label_24cb7c;
        case 0x24cb80u: goto label_24cb80;
        case 0x24cb84u: goto label_24cb84;
        case 0x24cb88u: goto label_24cb88;
        case 0x24cb8cu: goto label_24cb8c;
        case 0x24cb90u: goto label_24cb90;
        case 0x24cb94u: goto label_24cb94;
        case 0x24cb98u: goto label_24cb98;
        case 0x24cb9cu: goto label_24cb9c;
        case 0x24cba0u: goto label_24cba0;
        case 0x24cba4u: goto label_24cba4;
        case 0x24cba8u: goto label_24cba8;
        case 0x24cbacu: goto label_24cbac;
        case 0x24cbb0u: goto label_24cbb0;
        case 0x24cbb4u: goto label_24cbb4;
        case 0x24cbb8u: goto label_24cbb8;
        case 0x24cbbcu: goto label_24cbbc;
        case 0x24cbc0u: goto label_24cbc0;
        case 0x24cbc4u: goto label_24cbc4;
        case 0x24cbc8u: goto label_24cbc8;
        case 0x24cbccu: goto label_24cbcc;
        case 0x24cbd0u: goto label_24cbd0;
        case 0x24cbd4u: goto label_24cbd4;
        case 0x24cbd8u: goto label_24cbd8;
        case 0x24cbdcu: goto label_24cbdc;
        case 0x24cbe0u: goto label_24cbe0;
        case 0x24cbe4u: goto label_24cbe4;
        case 0x24cbe8u: goto label_24cbe8;
        case 0x24cbecu: goto label_24cbec;
        case 0x24cbf0u: goto label_24cbf0;
        case 0x24cbf4u: goto label_24cbf4;
        case 0x24cbf8u: goto label_24cbf8;
        case 0x24cbfcu: goto label_24cbfc;
        case 0x24cc00u: goto label_24cc00;
        case 0x24cc04u: goto label_24cc04;
        case 0x24cc08u: goto label_24cc08;
        case 0x24cc0cu: goto label_24cc0c;
        case 0x24cc10u: goto label_24cc10;
        case 0x24cc14u: goto label_24cc14;
        case 0x24cc18u: goto label_24cc18;
        case 0x24cc1cu: goto label_24cc1c;
        case 0x24cc20u: goto label_24cc20;
        case 0x24cc24u: goto label_24cc24;
        case 0x24cc28u: goto label_24cc28;
        case 0x24cc2cu: goto label_24cc2c;
        case 0x24cc30u: goto label_24cc30;
        case 0x24cc34u: goto label_24cc34;
        case 0x24cc38u: goto label_24cc38;
        case 0x24cc3cu: goto label_24cc3c;
        case 0x24cc40u: goto label_24cc40;
        case 0x24cc44u: goto label_24cc44;
        case 0x24cc48u: goto label_24cc48;
        case 0x24cc4cu: goto label_24cc4c;
        case 0x24cc50u: goto label_24cc50;
        case 0x24cc54u: goto label_24cc54;
        default: break;
    }

    ctx->pc = 0x24cb60u;

label_24cb60:
    // 0x24cb60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24cb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_24cb64:
    // 0x24cb64: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x24cb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_24cb68:
    // 0x24cb68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x24cb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_24cb6c:
    // 0x24cb6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24cb6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24cb70:
    // 0x24cb70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24cb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24cb74:
    // 0x24cb74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24cb74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24cb78:
    // 0x24cb78: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
label_24cb7c:
    if (ctx->pc == 0x24CB7Cu) {
        ctx->pc = 0x24CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB78u;
        // 0x24cb7c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CB80u;
        goto label_24cb80;
    }
    ctx->pc = 0x24CB78u;
    {
        const bool branch_taken_0x24cb78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB78u;
        // 0x24cb7c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb78) {
            ctx->pc = 0x24CC0Cu;
            goto label_24cc0c;
        }
    }
    ctx->pc = 0x24CB80u;
label_24cb80:
    // 0x24cb80: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_24cb84:
    // 0x24cb84: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x24cb84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_24cb88:
    // 0x24cb88: 0x24520fc8  addiu       $s2, $v0, 0xFC8
    ctx->pc = 0x24cb88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_24cb8c:
    // 0x24cb8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24cb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24cb90:
    // 0x24cb90: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x24cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_24cb94:
    // 0x24cb94: 0x40f809  jalr        $v0
label_24cb98:
    if (ctx->pc == 0x24CB98u) {
        ctx->pc = 0x24CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB94u;
        // 0x24cb98: 0x34a5040b  ori         $a1, $a1, 0x40B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1035);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CB9Cu;
        goto label_24cb9c;
    }
    ctx->pc = 0x24CB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24CB9Cu);
        ctx->pc = 0x24CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB94u;
        // 0x24cb98: 0x34a5040b  ori         $a1, $a1, 0x40B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1035);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CB94u, 0x24CB9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CB9Cu;
label_24cb9c:
    // 0x24cb9c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_24cba0:
    if (ctx->pc == 0x24CBA0u) {
        ctx->pc = 0x24CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB9Cu;
        // 0x24cba0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CBA4u;
        goto label_24cba4;
    }
    ctx->pc = 0x24CB9Cu;
    {
        const bool branch_taken_0x24cb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB9Cu;
        // 0x24cba0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb9c) {
            ctx->pc = 0x24CBC0u;
            goto label_24cbc0;
        }
    }
    ctx->pc = 0x24CBA4u;
label_24cba4:
    // 0x24cba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24cba8:
    // 0x24cba8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24cba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_24cbac:
    // 0x24cbac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24cbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_24cbb0:
    // 0x24cbb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24cbb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24cbb4:
    // 0x24cbb4: 0x1000000e  b           . + 4 + (0xE << 2)
label_24cbb8:
    if (ctx->pc == 0x24CBB8u) {
        ctx->pc = 0x24CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBB4u;
        // 0x24cbb8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CBBCu;
        goto label_24cbbc;
    }
    ctx->pc = 0x24CBB4u;
    {
        const bool branch_taken_0x24cbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBB4u;
        // 0x24cbb8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cbb4) {
            ctx->pc = 0x24CBF0u;
            goto label_24cbf0;
        }
    }
    ctx->pc = 0x24CBBCu;
label_24cbbc:
    // 0x24cbbc: 0x0  nop
    ctx->pc = 0x24cbbcu;
    // NOP
label_24cbc0:
    // 0x24cbc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24cbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24cbc4:
    // 0x24cbc4: 0xc093b6a  jal         func_24EDA8
label_24cbc8:
    if (ctx->pc == 0x24CBC8u) {
        ctx->pc = 0x24CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBC4u;
        // 0x24cbc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CBCCu;
        goto label_24cbcc;
    }
    ctx->pc = 0x24CBC4u;
    SET_GPR_U32(ctx, 31, 0x24CBCCu);
    ctx->pc = 0x24CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CBC4u;
    // 0x24cbc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EDA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EDA8u, 0x24CBC4u, 0x24CBCCu)) {
        return;
    }
    ctx->pc = 0x24CBCCu;
label_24cbcc:
    // 0x24cbcc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_24cbd0:
    if (ctx->pc == 0x24CBD0u) {
        ctx->pc = 0x24CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBCCu;
        // 0x24cbd0: 0x26030010  addiu       $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CBD4u;
        goto label_24cbd4;
    }
    ctx->pc = 0x24CBCCu;
    {
        const bool branch_taken_0x24cbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBCCu;
        // 0x24cbd0: 0x26030010  addiu       $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cbcc) {
            ctx->pc = 0x24CC14u;
            goto label_24cc14;
        }
    }
    ctx->pc = 0x24CBD4u;
label_24cbd4:
    // 0x24cbd4: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x24cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_24cbd8:
    // 0x24cbd8: 0x40f809  jalr        $v0
label_24cbdc:
    if (ctx->pc == 0x24CBDCu) {
        ctx->pc = 0x24CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBD8u;
        // 0x24cbdc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CBE0u;
        goto label_24cbe0;
    }
    ctx->pc = 0x24CBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24CBE0u);
        ctx->pc = 0x24CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBD8u;
        // 0x24cbdc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CBD8u, 0x24CBE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CBE0u;
label_24cbe0:
    // 0x24cbe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24cbe4:
    // 0x24cbe4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x24cbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_24cbe8:
    // 0x24cbe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24cbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24cbec:
    // 0x24cbec: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x24cbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_24cbf0:
    // 0x24cbf0: 0xc092848  jal         func_24A120
label_24cbf4:
    if (ctx->pc == 0x24CBF4u) {
        ctx->pc = 0x24CBF8u;
        goto label_24cbf8;
    }
    ctx->pc = 0x24CBF0u;
    SET_GPR_U32(ctx, 31, 0x24CBF8u);
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24CBF0u, 0x24CBF8u)) {
        return;
    }
    ctx->pc = 0x24CBF8u;
label_24cbf8:
    // 0x24cbf8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24cbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24cbfc:
    // 0x24cbfc: 0xc09281a  jal         func_24A068
label_24cc00:
    if (ctx->pc == 0x24CC00u) {
        ctx->pc = 0x24CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBFCu;
        // 0x24cc00: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CC04u;
        goto label_24cc04;
    }
    ctx->pc = 0x24CBFCu;
    SET_GPR_U32(ctx, 31, 0x24CC04u);
    ctx->pc = 0x24CC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CBFCu;
    // 0x24cc00: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24CBFCu, 0x24CC04u)) {
        return;
    }
    ctx->pc = 0x24CC04u;
label_24cc04:
    // 0x24cc04: 0x1000000e  b           . + 4 + (0xE << 2)
label_24cc08:
    if (ctx->pc == 0x24CC08u) {
        ctx->pc = 0x24CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC04u;
        // 0x24cc08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CC0Cu;
        goto label_24cc0c;
    }
    ctx->pc = 0x24CC04u;
    {
        const bool branch_taken_0x24cc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC04u;
        // 0x24cc08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc04) {
            ctx->pc = 0x24CC40u;
            goto label_24cc40;
        }
    }
    ctx->pc = 0x24CC0Cu;
label_24cc0c:
    // 0x24cc0c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x24cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_24cc10:
    // 0x24cc10: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x24cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_24cc14:
    // 0x24cc14: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x24cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_24cc18:
    // 0x24cc18: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x24cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_24cc1c:
    // 0x24cc1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24cc1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24cc20:
    // 0x24cc20: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x24cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
label_24cc24:
    // 0x24cc24: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x24cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_24cc28:
    // 0x24cc28: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x24cc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_24cc2c:
    // 0x24cc2c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x24cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_24cc30:
    // 0x24cc30: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x24cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_24cc34:
    // 0x24cc34: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x24cc34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
label_24cc38:
    // 0x24cc38: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x24cc38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_24cc3c:
    // 0x24cc3c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x24cc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_24cc40:
    // 0x24cc40: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x24cc40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24cc44:
    // 0x24cc44: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x24cc44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24cc48:
    // 0x24cc48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24cc48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24cc4c:
    // 0x24cc4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24cc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24cc50:
    // 0x24cc50: 0x3e00008  jr          $ra
label_24cc54:
    if (ctx->pc == 0x24CC54u) {
        ctx->pc = 0x24CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC50u;
        // 0x24cc54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CC58u;
        goto label_fallthrough_0x24cc50;
    }
    ctx->pc = 0x24CC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC50u;
        // 0x24cc54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24cc50:
    ctx->pc = 0x24CC58u;
}
