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

// Function: sub_00210678
// Address: 0x210678 - 0x210b88
void sub_00210678_0x210678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210678_0x210678");
#endif

    switch (ctx->pc) {
        case 0x2106e8u: goto label_2106e8;
        case 0x210708u: goto label_210708;
        case 0x210728u: goto label_210728;
        case 0x210788u: goto label_210788;
        case 0x2107a8u: goto label_2107a8;
        case 0x2107c8u: goto label_2107c8;
        case 0x210838u: goto label_210838;
        case 0x210850u: goto label_210850;
        case 0x210870u: goto label_210870;
        case 0x2108d0u: goto label_2108d0;
        case 0x2108e8u: goto label_2108e8;
        case 0x210908u: goto label_210908;
        case 0x210970u: goto label_210970;
        case 0x210988u: goto label_210988;
        case 0x2109a0u: goto label_2109a0;
        case 0x210a00u: goto label_210a00;
        case 0x210a18u: goto label_210a18;
        case 0x210a30u: goto label_210a30;
        case 0x210a9cu: goto label_210a9c;
        case 0x210aacu: goto label_210aac;
        case 0x210abcu: goto label_210abc;
        case 0x210ae0u: goto label_210ae0;
        case 0x210b00u: goto label_210b00;
        case 0x210b18u: goto label_210b18;
        default: break;
    }

    ctx->pc = 0x210678u;

    // 0x210678: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x210678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x21067c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x21067cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x210680: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x210680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x210684: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x210684u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210688: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x210688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x21068c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x21068cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x210690: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x210690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x210694: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x210694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x210698: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x210698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x21069c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x21069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2106a0: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2106a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x2106a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2106a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2106a8: 0x8c8201cc  lw          $v0, 0x1CC($a0)
    ctx->pc = 0x2106a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x2106ac: 0x8eec0000  lw          $t4, 0x0($s7)
    ctx->pc = 0x2106acu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2106b0: 0x8ef60004  lw          $s6, 0x4($s7)
    ctx->pc = 0x2106b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2106b4: 0x8c4d0018  lw          $t5, 0x18($v0)
    ctx->pc = 0x2106b4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2106b8: 0x8efe0008  lw          $fp, 0x8($s7)
    ctx->pc = 0x2106b8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x2106bc: 0x196102a  slt         $v0, $t4, $s6
    ctx->pc = 0x2106bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2106c0: 0x8ef4000c  lw          $s4, 0xC($s7)
    ctx->pc = 0x2106c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x2106c4: 0x8ef50010  lw          $s5, 0x10($s7)
    ctx->pc = 0x2106c4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x2106c8: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2106C8u;
    {
        const bool branch_taken_0x2106c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2106CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106C8u;
        // 0x2106cc: 0x8ef30014  lw          $s3, 0x14($s7) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2106c8) {
            ctx->pc = 0x21080Cu;
            goto label_21080c;
        }
    }
    ctx->pc = 0x2106D0u;
    // 0x2106d0: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x2106d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2106d4: 0x2c8102a  slt         $v0, $s6, $t0
    ctx->pc = 0x2106d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2106d8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2106D8u;
    {
        const bool branch_taken_0x2106d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2106DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106D8u;
        // 0x2106dc: 0x196102a  slt         $v0, $t4, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2106d8) {
            ctx->pc = 0x210770u;
            goto label_210770;
        }
    }
    ctx->pc = 0x2106E0u;
    // 0x2106e0: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2106e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2106e4: 0x4d5821  addu        $t3, $v0, $t5
    ctx->pc = 0x2106e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_2106e8:
    // 0x2106e8: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2106e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2106ec: 0x287102a  slt         $v0, $s4, $a3
    ctx->pc = 0x2106ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2106f0: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2106F0u;
    {
        const bool branch_taken_0x2106f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2106f0) {
            ctx->pc = 0x2106F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2106F0u;
            // 0x2106f4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210760u;
            goto label_210760;
        }
    }
    ctx->pc = 0x2106F8u;
    // 0x2106f8: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x2106f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2106fc: 0x154840  sll         $t1, $s5, 1
    ctx->pc = 0x2106fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x210700: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x210700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x210704: 0x0  nop
    ctx->pc = 0x210704u;
    // NOP
label_210708:
    // 0x210708: 0x71980  sll         $v1, $a3, 6
    ctx->pc = 0x210708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x21070c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x21070cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210714: 0x266202a  slt         $a0, $s3, $a2
    ctx->pc = 0x210714u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x210718: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x210718u;
    {
        const bool branch_taken_0x210718 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210718u;
        // 0x21071c: 0x492821  addu        $a1, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210718) {
            ctx->pc = 0x21074Cu;
            goto label_21074c;
        }
    }
    ctx->pc = 0x210720u;
    // 0x210720: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x210720u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x210724: 0x0  nop
    ctx->pc = 0x210724u;
    // NOP
label_210728:
    // 0x210728: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x210728u;
    {
        const bool branch_taken_0x210728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210728u;
        // 0x21072c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210728) {
            ctx->pc = 0x21073Cu;
            goto label_21073c;
        }
    }
    ctx->pc = 0x210730u;
    // 0x210730: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x210730u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210734: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x210734u;
    {
        const bool branch_taken_0x210734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210734u;
        // 0x210738: 0xaeec0000  sw          $t4, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210734) {
            ctx->pc = 0x21076Cu;
            goto label_21076c;
        }
    }
    ctx->pc = 0x21073Cu;
label_21073c:
    // 0x21073c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x21073cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x210740: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x210740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x210744: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x210744u;
    {
        const bool branch_taken_0x210744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210744) {
            ctx->pc = 0x210748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210744u;
            // 0x210748: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210728;
        }
    }
    ctx->pc = 0x21074Cu;
label_21074c:
    // 0x21074c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x21074cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x210750: 0x287102a  slt         $v0, $s4, $a3
    ctx->pc = 0x210750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x210754: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x210754u;
    {
        const bool branch_taken_0x210754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210754) {
            ctx->pc = 0x210758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210754u;
            // 0x210758: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210708;
        }
    }
    ctx->pc = 0x21075Cu;
    // 0x21075c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21075cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_210760:
    // 0x210760: 0x2c8102a  slt         $v0, $s6, $t0
    ctx->pc = 0x210760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x210764: 0x1040ffe0  beqz        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x210764u;
    {
        const bool branch_taken_0x210764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210764u;
        // 0x210768: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210764) {
            ctx->pc = 0x2106E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2106e8;
        }
    }
    ctx->pc = 0x21076Cu;
label_21076c:
    // 0x21076c: 0x196102a  slt         $v0, $t4, $s6
    ctx->pc = 0x21076cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_210770:
    // 0x210770: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x210770u;
    {
        const bool branch_taken_0x210770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210770u;
        // 0x210774: 0x2cc102a  slt         $v0, $s6, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210770) {
            ctx->pc = 0x21080Cu;
            goto label_21080c;
        }
    }
    ctx->pc = 0x210778u;
    // 0x210778: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x210778u;
    {
        const bool branch_taken_0x210778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210778u;
        // 0x21077c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210778) {
            ctx->pc = 0x21080Cu;
            goto label_21080c;
        }
    }
    ctx->pc = 0x210780u;
    // 0x210780: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x210780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x210784: 0x4d5821  addu        $t3, $v0, $t5
    ctx->pc = 0x210784u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_210788:
    // 0x210788: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x210788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21078c: 0x287102a  slt         $v0, $s4, $a3
    ctx->pc = 0x21078cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x210790: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x210790u;
    {
        const bool branch_taken_0x210790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210790) {
            ctx->pc = 0x210794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210790u;
            // 0x210794: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210800u;
            goto label_210800;
        }
    }
    ctx->pc = 0x210798u;
    // 0x210798: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x210798u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21079c: 0x154840  sll         $t1, $s5, 1
    ctx->pc = 0x21079cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x2107a0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2107a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2107a4: 0x0  nop
    ctx->pc = 0x2107a4u;
    // NOP
label_2107a8:
    // 0x2107a8: 0x71980  sll         $v1, $a3, 6
    ctx->pc = 0x2107a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x2107ac: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2107acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2107b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2107b4: 0x266202a  slt         $a0, $s3, $a2
    ctx->pc = 0x2107b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2107b8: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2107B8u;
    {
        const bool branch_taken_0x2107b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2107BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107B8u;
        // 0x2107bc: 0x492821  addu        $a1, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2107b8) {
            ctx->pc = 0x2107ECu;
            goto label_2107ec;
        }
    }
    ctx->pc = 0x2107C0u;
    // 0x2107c0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2107c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2107c4: 0x0  nop
    ctx->pc = 0x2107c4u;
    // NOP
label_2107c8:
    // 0x2107c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2107C8u;
    {
        const bool branch_taken_0x2107c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2107CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107C8u;
        // 0x2107cc: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2107c8) {
            ctx->pc = 0x2107DCu;
            goto label_2107dc;
        }
    }
    ctx->pc = 0x2107D0u;
    // 0x2107d0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2107d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107d4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2107D4u;
    {
        const bool branch_taken_0x2107d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2107D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107D4u;
        // 0x2107d8: 0xaef60004  sw          $s6, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2107d4) {
            ctx->pc = 0x21080Cu;
            goto label_21080c;
        }
    }
    ctx->pc = 0x2107DCu;
label_2107dc:
    // 0x2107dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2107dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2107e0: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x2107e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2107e4: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2107E4u;
    {
        const bool branch_taken_0x2107e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2107e4) {
            ctx->pc = 0x2107E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2107E4u;
            // 0x2107e8: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2107C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2107c8;
        }
    }
    ctx->pc = 0x2107ECu;
label_2107ec:
    // 0x2107ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2107ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2107f0: 0x287102a  slt         $v0, $s4, $a3
    ctx->pc = 0x2107f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2107f4: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2107F4u;
    {
        const bool branch_taken_0x2107f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2107f4) {
            ctx->pc = 0x2107F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2107F4u;
            // 0x2107f8: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2107A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2107a8;
        }
    }
    ctx->pc = 0x2107FCu;
    // 0x2107fc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2107fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_210800:
    // 0x210800: 0x10c102a  slt         $v0, $t0, $t4
    ctx->pc = 0x210800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x210804: 0x1040ffe0  beqz        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x210804u;
    {
        const bool branch_taken_0x210804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210804u;
        // 0x210808: 0x256bfffc  addiu       $t3, $t3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210804) {
            ctx->pc = 0x210788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210788;
        }
    }
    ctx->pc = 0x21080Cu;
label_21080c:
    // 0x21080c: 0x3d4102a  slt         $v0, $fp, $s4
    ctx->pc = 0x21080cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x210810: 0x2b3802a  slt         $s0, $s5, $s3
    ctx->pc = 0x210810u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x210814: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x210814u;
    {
        const bool branch_taken_0x210814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210814u;
        // 0x210818: 0x2cc2023  subu        $a0, $s6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210814) {
            ctx->pc = 0x21094Cu;
            goto label_21094c;
        }
    }
    ctx->pc = 0x21081Cu;
    // 0x21081c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x21081cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210820: 0x287102a  slt         $v0, $s4, $a3
    ctx->pc = 0x210820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x210824: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x210824u;
    {
        const bool branch_taken_0x210824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210824u;
        // 0x210828: 0x3d4102a  slt         $v0, $fp, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210824) {
            ctx->pc = 0x2108B8u;
            goto label_2108b8;
        }
    }
    ctx->pc = 0x21082Cu;
    // 0x21082c: 0xc7080  sll         $t6, $t4, 2
    ctx->pc = 0x21082cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x210830: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x210830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210834: 0x0  nop
    ctx->pc = 0x210834u;
    // NOP
label_210838:
    // 0x210838: 0x2c8102a  slt         $v0, $s6, $t0
    ctx->pc = 0x210838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x21083c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x21083Cu;
    {
        const bool branch_taken_0x21083c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21083c) {
            ctx->pc = 0x210840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21083Cu;
            // 0x210840: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2108A8u;
            goto label_2108a8;
        }
    }
    ctx->pc = 0x210844u;
    // 0x210844: 0x75980  sll         $t3, $a3, 6
    ctx->pc = 0x210844u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x210848: 0x155040  sll         $t2, $s5, 1
    ctx->pc = 0x210848u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x21084c: 0x1cd4821  addu        $t1, $t6, $t5
    ctx->pc = 0x21084cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
label_210850:
    // 0x210850: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x210850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x210854: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x210854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210858: 0x266182a  slt         $v1, $s3, $a2
    ctx->pc = 0x210858u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21085c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x21085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x210860: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x210860u;
    {
        const bool branch_taken_0x210860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210860u;
        // 0x210864: 0x4a2821  addu        $a1, $v0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210860) {
            ctx->pc = 0x210894u;
            goto label_210894;
        }
    }
    ctx->pc = 0x210868u;
    // 0x210868: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x210868u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21086c: 0x0  nop
    ctx->pc = 0x21086cu;
    // NOP
label_210870:
    // 0x210870: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x210870u;
    {
        const bool branch_taken_0x210870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210870u;
        // 0x210874: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210870) {
            ctx->pc = 0x210884u;
            goto label_210884;
        }
    }
    ctx->pc = 0x210878u;
    // 0x210878: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x210878u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21087c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21087Cu;
    {
        const bool branch_taken_0x21087c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21087Cu;
        // 0x210880: 0xaefe0008  sw          $fp, 0x8($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21087c) {
            ctx->pc = 0x2108B4u;
            goto label_2108b4;
        }
    }
    ctx->pc = 0x210884u;
label_210884:
    // 0x210884: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x210884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x210888: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x210888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21088c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21088Cu;
    {
        const bool branch_taken_0x21088c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21088c) {
            ctx->pc = 0x210890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21088Cu;
            // 0x210890: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210870;
        }
    }
    ctx->pc = 0x210894u;
label_210894:
    // 0x210894: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x210894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x210898: 0x2c8102a  slt         $v0, $s6, $t0
    ctx->pc = 0x210898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x21089c: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x21089Cu;
    {
        const bool branch_taken_0x21089c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2108A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21089Cu;
        // 0x2108a0: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21089c) {
            ctx->pc = 0x210850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210850;
        }
    }
    ctx->pc = 0x2108A4u;
    // 0x2108a4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2108a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2108a8:
    // 0x2108a8: 0x287102a  slt         $v0, $s4, $a3
    ctx->pc = 0x2108a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2108ac: 0x5040ffe2  beql        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2108ACu;
    {
        const bool branch_taken_0x2108ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2108ac) {
            ctx->pc = 0x2108B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2108ACu;
            // 0x2108b0: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210838;
        }
    }
    ctx->pc = 0x2108B4u;
label_2108b4:
    // 0x2108b4: 0x3d4102a  slt         $v0, $fp, $s4
    ctx->pc = 0x2108b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_2108b8:
    // 0x2108b8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2108B8u;
    {
        const bool branch_taken_0x2108b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2108BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2108B8u;
        // 0x2108bc: 0x29e102a  slt         $v0, $s4, $fp (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2108b8) {
            ctx->pc = 0x21094Cu;
            goto label_21094c;
        }
    }
    ctx->pc = 0x2108C0u;
    // 0x2108c0: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2108C0u;
    {
        const bool branch_taken_0x2108c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2108C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2108C0u;
        // 0x2108c4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2108c0) {
            ctx->pc = 0x21094Cu;
            goto label_21094c;
        }
    }
    ctx->pc = 0x2108C8u;
    // 0x2108c8: 0xc7080  sll         $t6, $t4, 2
    ctx->pc = 0x2108c8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x2108cc: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x2108ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2108d0:
    // 0x2108d0: 0x2c8102a  slt         $v0, $s6, $t0
    ctx->pc = 0x2108d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2108d4: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2108D4u;
    {
        const bool branch_taken_0x2108d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2108d4) {
            ctx->pc = 0x2108D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2108D4u;
            // 0x2108d8: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210940u;
            goto label_210940;
        }
    }
    ctx->pc = 0x2108DCu;
    // 0x2108dc: 0x75980  sll         $t3, $a3, 6
    ctx->pc = 0x2108dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x2108e0: 0x155040  sll         $t2, $s5, 1
    ctx->pc = 0x2108e0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x2108e4: 0x1cd4821  addu        $t1, $t6, $t5
    ctx->pc = 0x2108e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
label_2108e8:
    // 0x2108e8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2108e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2108ec: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2108ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2108f0: 0x266182a  slt         $v1, $s3, $a2
    ctx->pc = 0x2108f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2108f4: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2108f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2108f8: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2108F8u;
    {
        const bool branch_taken_0x2108f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2108FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2108F8u;
        // 0x2108fc: 0x4a2821  addu        $a1, $v0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2108f8) {
            ctx->pc = 0x21092Cu;
            goto label_21092c;
        }
    }
    ctx->pc = 0x210900u;
    // 0x210900: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x210900u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x210904: 0x0  nop
    ctx->pc = 0x210904u;
    // NOP
label_210908:
    // 0x210908: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x210908u;
    {
        const bool branch_taken_0x210908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210908u;
        // 0x21090c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210908) {
            ctx->pc = 0x21091Cu;
            goto label_21091c;
        }
    }
    ctx->pc = 0x210910u;
    // 0x210910: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x210910u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210914: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x210914u;
    {
        const bool branch_taken_0x210914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210914u;
        // 0x210918: 0xaef4000c  sw          $s4, 0xC($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210914) {
            ctx->pc = 0x21094Cu;
            goto label_21094c;
        }
    }
    ctx->pc = 0x21091Cu;
label_21091c:
    // 0x21091c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x21091cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x210920: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x210920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x210924: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x210924u;
    {
        const bool branch_taken_0x210924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210924) {
            ctx->pc = 0x210928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210924u;
            // 0x210928: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210908;
        }
    }
    ctx->pc = 0x21092Cu;
label_21092c:
    // 0x21092c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21092cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x210930: 0x2c8102a  slt         $v0, $s6, $t0
    ctx->pc = 0x210930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x210934: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x210934u;
    {
        const bool branch_taken_0x210934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210934u;
        // 0x210938: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210934) {
            ctx->pc = 0x2108E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2108e8;
        }
    }
    ctx->pc = 0x21093Cu;
    // 0x21093c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x21093cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_210940:
    // 0x210940: 0xfe102a  slt         $v0, $a3, $fp
    ctx->pc = 0x210940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x210944: 0x5040ffe2  beql        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x210944u;
    {
        const bool branch_taken_0x210944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210944) {
            ctx->pc = 0x210948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210944u;
            // 0x210948: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2108D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2108d0;
        }
    }
    ctx->pc = 0x21094Cu;
label_21094c:
    // 0x21094c: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
    ctx->pc = 0x21094Cu;
    {
        const bool branch_taken_0x21094c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x210950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21094Cu;
        // 0x210950: 0x29e7823  subu        $t7, $s4, $fp (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21094c) {
            ctx->pc = 0x210A74u;
            goto label_210a74;
        }
    }
    ctx->pc = 0x210954u;
    // 0x210954: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x210954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210958: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x210958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21095c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x21095Cu;
    {
        const bool branch_taken_0x21095c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21095Cu;
        // 0x210960: 0x2b3102a  slt         $v0, $s5, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21095c) {
            ctx->pc = 0x2109E8u;
            goto label_2109e8;
        }
    }
    ctx->pc = 0x210964u;
    // 0x210964: 0xc7080  sll         $t6, $t4, 2
    ctx->pc = 0x210964u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x210968: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x210968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21096c: 0x0  nop
    ctx->pc = 0x21096cu;
    // NOP
label_210970:
    // 0x210970: 0x2c8102a  slt         $v0, $s6, $t0
    ctx->pc = 0x210970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x210974: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x210974u;
    {
        const bool branch_taken_0x210974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210974) {
            ctx->pc = 0x210978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210974u;
            // 0x210978: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2109D8u;
            goto label_2109d8;
        }
    }
    ctx->pc = 0x21097Cu;
    // 0x21097c: 0x1e5980  sll         $t3, $fp, 6
    ctx->pc = 0x21097cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x210980: 0x65040  sll         $t2, $a2, 1
    ctx->pc = 0x210980u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x210984: 0x1cd4821  addu        $t1, $t6, $t5
    ctx->pc = 0x210984u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
label_210988:
    // 0x210988: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x210988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x21098c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x21098cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210990: 0x287182a  slt         $v1, $s4, $a3
    ctx->pc = 0x210990u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x210994: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x210994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x210998: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x210998u;
    {
        const bool branch_taken_0x210998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210998u;
        // 0x21099c: 0x4a2821  addu        $a1, $v0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210998) {
            ctx->pc = 0x2109C4u;
            goto label_2109c4;
        }
    }
    ctx->pc = 0x2109A0u;
label_2109a0:
    // 0x2109a0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2109a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2109a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2109A4u;
    {
        const bool branch_taken_0x2109a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2109a4) {
            ctx->pc = 0x2109A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2109A4u;
            // 0x2109a8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2109B8u;
            goto label_2109b8;
        }
    }
    ctx->pc = 0x2109ACu;
    // 0x2109ac: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2109acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2109b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2109B0u;
    {
        const bool branch_taken_0x2109b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2109B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109B0u;
        // 0x2109b4: 0xaef50010  sw          $s5, 0x10($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109b0) {
            ctx->pc = 0x2109E4u;
            goto label_2109e4;
        }
    }
    ctx->pc = 0x2109B8u;
label_2109b8:
    // 0x2109b8: 0x287102a  slt         $v0, $s4, $a3
    ctx->pc = 0x2109b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2109bc: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2109BCu;
    {
        const bool branch_taken_0x2109bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2109C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109BCu;
        // 0x2109c0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109bc) {
            ctx->pc = 0x2109A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2109a0;
        }
    }
    ctx->pc = 0x2109C4u;
label_2109c4:
    // 0x2109c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2109c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2109c8: 0x2c8102a  slt         $v0, $s6, $t0
    ctx->pc = 0x2109c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2109cc: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2109CCu;
    {
        const bool branch_taken_0x2109cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2109D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109CCu;
        // 0x2109d0: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109cc) {
            ctx->pc = 0x210988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210988;
        }
    }
    ctx->pc = 0x2109D4u;
    // 0x2109d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2109d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2109d8:
    // 0x2109d8: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x2109d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2109dc: 0x5040ffe4  beql        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2109DCu;
    {
        const bool branch_taken_0x2109dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2109dc) {
            ctx->pc = 0x2109E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2109DCu;
            // 0x2109e0: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210970;
        }
    }
    ctx->pc = 0x2109E4u;
label_2109e4:
    // 0x2109e4: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x2109e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2109e8:
    // 0x2109e8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2109E8u;
    {
        const bool branch_taken_0x2109e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2109ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109E8u;
        // 0x2109ec: 0x275102a  slt         $v0, $s3, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109e8) {
            ctx->pc = 0x210A74u;
            goto label_210a74;
        }
    }
    ctx->pc = 0x2109F0u;
    // 0x2109f0: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2109F0u;
    {
        const bool branch_taken_0x2109f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2109F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109F0u;
        // 0x2109f4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109f0) {
            ctx->pc = 0x210A74u;
            goto label_210a74;
        }
    }
    ctx->pc = 0x2109F8u;
    // 0x2109f8: 0xc7080  sll         $t6, $t4, 2
    ctx->pc = 0x2109f8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x2109fc: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x2109fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_210a00:
    // 0x210a00: 0x2c8102a  slt         $v0, $s6, $t0
    ctx->pc = 0x210a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x210a04: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x210A04u;
    {
        const bool branch_taken_0x210a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210a04) {
            ctx->pc = 0x210A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210A04u;
            // 0x210a08: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210A68u;
            goto label_210a68;
        }
    }
    ctx->pc = 0x210A0Cu;
    // 0x210a0c: 0x1e5980  sll         $t3, $fp, 6
    ctx->pc = 0x210a0cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x210a10: 0x65040  sll         $t2, $a2, 1
    ctx->pc = 0x210a10u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x210a14: 0x1cd4821  addu        $t1, $t6, $t5
    ctx->pc = 0x210a14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
label_210a18:
    // 0x210a18: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x210a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x210a1c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x210a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210a20: 0x287182a  slt         $v1, $s4, $a3
    ctx->pc = 0x210a20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x210a24: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x210a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x210a28: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x210A28u;
    {
        const bool branch_taken_0x210a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A28u;
        // 0x210a2c: 0x4a2821  addu        $a1, $v0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a28) {
            ctx->pc = 0x210A54u;
            goto label_210a54;
        }
    }
    ctx->pc = 0x210A30u;
label_210a30:
    // 0x210a30: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x210a30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x210a34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x210A34u;
    {
        const bool branch_taken_0x210a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A34u;
        // 0x210a38: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a34) {
            ctx->pc = 0x210A48u;
            goto label_210a48;
        }
    }
    ctx->pc = 0x210A3Cu;
    // 0x210a3c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x210a3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210a40: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x210A40u;
    {
        const bool branch_taken_0x210a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A40u;
        // 0x210a44: 0xaef30014  sw          $s3, 0x14($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a40) {
            ctx->pc = 0x210A74u;
            goto label_210a74;
        }
    }
    ctx->pc = 0x210A48u;
label_210a48:
    // 0x210a48: 0x287102a  slt         $v0, $s4, $a3
    ctx->pc = 0x210a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x210a4c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x210A4Cu;
    {
        const bool branch_taken_0x210a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A4Cu;
        // 0x210a50: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a4c) {
            ctx->pc = 0x210A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210a30;
        }
    }
    ctx->pc = 0x210A54u;
label_210a54:
    // 0x210a54: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x210a54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x210a58: 0x2c8102a  slt         $v0, $s6, $t0
    ctx->pc = 0x210a58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x210a5c: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x210A5Cu;
    {
        const bool branch_taken_0x210a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A5Cu;
        // 0x210a60: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a5c) {
            ctx->pc = 0x210A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210a18;
        }
    }
    ctx->pc = 0x210A64u;
    // 0x210a64: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x210a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_210a68:
    // 0x210a68: 0xd5102a  slt         $v0, $a2, $s5
    ctx->pc = 0x210a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x210a6c: 0x1040ffe4  beqz        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x210A6Cu;
    {
        const bool branch_taken_0x210a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A6Cu;
        // 0x210a70: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a6c) {
            ctx->pc = 0x210A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210a00;
        }
    }
    ctx->pc = 0x210A74u;
label_210a74:
    // 0x210a74: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x210a74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x210a78: 0x2759023  subu        $s2, $s3, $s5
    ctx->pc = 0x210a78u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x210a7c: 0xf88c0  sll         $s1, $t7, 3
    ctx->pc = 0x210a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x210a80: 0xf1080  sll         $v0, $t7, 2
    ctx->pc = 0x210a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x210a84: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x210a84u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x210a88: 0x7fac0000  sq          $t4, 0x0($sp)
    ctx->pc = 0x210a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 12));
    // 0x210a8c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x210a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210a90: 0x7fad0010  sq          $t5, 0x10($sp)
    ctx->pc = 0x210a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 13));
    // 0x210a94: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x210A94u;
    SET_GPR_U32(ctx, 31, 0x210A9Cu);
    ctx->pc = 0x210A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210A94u;
    // 0x210a98: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x210A94u, 0x210A9Cu)) {
        return;
    }
    ctx->pc = 0x210A9Cu;
label_210a9c:
    // 0x210a9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210aa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x210aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210aa4: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x210AA4u;
    SET_GPR_U32(ctx, 31, 0x210AACu);
    ctx->pc = 0x210AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210AA4u;
    // 0x210aa8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x210AA4u, 0x210AACu)) {
        return;
    }
    ctx->pc = 0x210AACu;
label_210aac:
    // 0x210aac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ab0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x210ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x210ab4: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x210AB4u;
    SET_GPR_U32(ctx, 31, 0x210ABCu);
    ctx->pc = 0x210AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210AB4u;
    // 0x210ab8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x210AB4u, 0x210ABCu)) {
        return;
    }
    ctx->pc = 0x210ABCu;
label_210abc:
    // 0x210abc: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x210abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x210ac0: 0x7bac0000  lq          $t4, 0x0($sp)
    ctx->pc = 0x210ac0u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210ac4: 0xfef00018  sd          $s0, 0x18($s7)
    ctx->pc = 0x210ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 24), GPR_U64(ctx, 16));
    // 0x210ac8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x210ac8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210acc: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x210accu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ad0: 0x2c8102a  slt         $v0, $s6, $t0
    ctx->pc = 0x210ad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x210ad4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x210AD4u;
    {
        const bool branch_taken_0x210ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AD4u;
        // 0x210ad8: 0x7bad0010  lq          $t5, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ad4) {
            ctx->pc = 0x210B50u;
            goto label_210b50;
        }
    }
    ctx->pc = 0x210ADCu;
    // 0x210adc: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x210adcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_210ae0:
    // 0x210ae0: 0x287102a  slt         $v0, $s4, $a3
    ctx->pc = 0x210ae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x210ae4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x210AE4u;
    {
        const bool branch_taken_0x210ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AE4u;
        // 0x210ae8: 0x250b0001  addiu       $t3, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ae4) {
            ctx->pc = 0x210B40u;
            goto label_210b40;
        }
    }
    ctx->pc = 0x210AECu;
    // 0x210aec: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x210aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x210af0: 0x155040  sll         $t2, $s5, 1
    ctx->pc = 0x210af0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x210af4: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x210af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x210af8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x210af8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210afc: 0x71980  sll         $v1, $a3, 6
    ctx->pc = 0x210afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_210b00:
    // 0x210b00: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x210b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b04: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x210b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x210b08: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x210b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x210b0c: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x210b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x210b10: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x210B10u;
    {
        const bool branch_taken_0x210b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B10u;
        // 0x210b14: 0x6a2821  addu        $a1, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b10) {
            ctx->pc = 0x210B34u;
            goto label_210b34;
        }
    }
    ctx->pc = 0x210B18u;
label_210b18:
    // 0x210b18: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x210b18u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x210b1c: 0x65230001  daddiu      $v1, $t1, 0x1
    ctx->pc = 0x210b1cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x210b20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x210b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x210b24: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x210b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x210b28: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x210b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x210b2c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x210B2Cu;
    {
        const bool branch_taken_0x210b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B2Cu;
        // 0x210b30: 0x64480b  movn        $t1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b2c) {
            ctx->pc = 0x210B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210b18;
        }
    }
    ctx->pc = 0x210B34u;
label_210b34:
    // 0x210b34: 0x287102a  slt         $v0, $s4, $a3
    ctx->pc = 0x210b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x210b38: 0x5040fff1  beql        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x210B38u;
    {
        const bool branch_taken_0x210b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210b38) {
            ctx->pc = 0x210B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210B38u;
            // 0x210b3c: 0x71980  sll         $v1, $a3, 6 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210b00;
        }
    }
    ctx->pc = 0x210B40u;
label_210b40:
    // 0x210b40: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x210b40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b44: 0x2c8102a  slt         $v0, $s6, $t0
    ctx->pc = 0x210b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x210b48: 0x5040ffe5  beql        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x210B48u;
    {
        const bool branch_taken_0x210b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210b48) {
            ctx->pc = 0x210B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210B48u;
            // 0x210b4c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210ae0;
        }
    }
    ctx->pc = 0x210B50u;
label_210b50:
    // 0x210b50: 0xfee90020  sd          $t1, 0x20($s7)
    ctx->pc = 0x210b50u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 32), GPR_U64(ctx, 9));
    // 0x210b54: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x210b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x210b58: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x210b58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x210b5c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x210b5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x210b60: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x210b60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x210b64: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x210b64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x210b68: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x210b68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x210b6c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x210b6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210b70: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x210b70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210b74: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x210b74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210b78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x210b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x210B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B7Cu;
        // 0x210b80: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210B84u;
    // 0x210b84: 0x0  nop
    ctx->pc = 0x210b84u;
    // NOP
    ctx->pc = 0x210b88u;
}
