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

// Function: sub_002F8668
// Address: 0x2f8668 - 0x2f87c8
void sub_002F8668_0x2f8668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8668_0x2f8668");
#endif

    switch (ctx->pc) {
        case 0x2f86bcu: goto label_2f86bc;
        case 0x2f86d4u: goto label_2f86d4;
        case 0x2f86dcu: goto label_2f86dc;
        case 0x2f86f4u: goto label_2f86f4;
        case 0x2f8728u: goto label_2f8728;
        case 0x2f8774u: goto label_2f8774;
        case 0x2f8784u: goto label_2f8784;
        case 0x2f8794u: goto label_2f8794;
        default: break;
    }

    ctx->pc = 0x2f8668u;

    // 0x2f8668: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f8668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f866c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2f866cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2f8670: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f8670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f8674: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2f8674u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8678: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f8678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f867c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2f867cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8680: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f8680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f8684: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f8684u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8688: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f8688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f868c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2f868cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2f8690: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f8690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8694: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2f8694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2f8698: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f8698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f869c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f869cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f86a0: 0x28622081  slti        $v0, $v1, 0x2081
    ctx->pc = 0x2f86a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8321) ? 1 : 0);
    // 0x2f86a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F86A4u;
    {
        const bool branch_taken_0x2f86a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F86A4u;
        // 0x2f86a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f86a4) {
            ctx->pc = 0x2F86C4u;
            goto label_2f86c4;
        }
    }
    ctx->pc = 0x2F86ACu;
    // 0x2f86ac: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2f86acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2f86b0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2f86b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f86b4: 0xc0be1f2  jal         func_2F87C8
    ctx->pc = 0x2F86B4u;
    SET_GPR_U32(ctx, 31, 0x2F86BCu);
    ctx->pc = 0x2F86B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F86B4u;
    // 0x2f86b8: 0x24840458  addiu       $a0, $a0, 0x458 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F87C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F87C8u, 0x2F86B4u, 0x2F86BCu)) {
        return;
    }
    ctx->pc = 0x2F86BCu;
label_2f86bc:
    // 0x2f86bc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2F86BCu;
    {
        const bool branch_taken_0x2f86bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F86C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F86BCu;
        // 0x2f86c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f86bc) {
            ctx->pc = 0x2F8798u;
            goto label_2f8798;
        }
    }
    ctx->pc = 0x2F86C4u;
label_2f86c4:
    // 0x2f86c4: 0x3c120072  lui         $s2, 0x72
    ctx->pc = 0x2f86c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)114 << 16));
    // 0x2f86c8: 0x3c160072  lui         $s6, 0x72
    ctx->pc = 0x2f86c8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)114 << 16));
    // 0x2f86cc: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2F86CCu;
    SET_GPR_U32(ctx, 31, 0x2F86D4u);
    ctx->pc = 0x2F86D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F86CCu;
    // 0x2f86d0: 0x8e447b80  lw          $a0, 0x7B80($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2F86CCu, 0x2F86D4u)) {
        return;
    }
    ctx->pc = 0x2F86D4u;
label_2f86d4:
    // 0x2f86d4: 0xc0c936e  jal         func_324DB8
    ctx->pc = 0x2F86D4u;
    SET_GPR_U32(ctx, 31, 0x2F86DCu);
    ctx->pc = 0x2F86D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F86D4u;
    // 0x2f86d8: 0x26c45710  addiu       $a0, $s6, 0x5710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 22288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324DB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324DB8u, 0x2F86D4u, 0x2F86DCu)) {
        return;
    }
    ctx->pc = 0x2F86DCu;
label_2f86dc:
    // 0x2f86dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f86dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f86e0: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F86E0u;
    {
        const bool branch_taken_0x2f86e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F86E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F86E0u;
        // 0x2f86e4: 0x3c070072  lui         $a3, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f86e0) {
            ctx->pc = 0x2F86FCu;
            goto label_2f86fc;
        }
    }
    ctx->pc = 0x2F86E8u;
    // 0x2f86e8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2f86e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2f86ec: 0xc0be1f2  jal         func_2F87C8
    ctx->pc = 0x2F86ECu;
    SET_GPR_U32(ctx, 31, 0x2F86F4u);
    ctx->pc = 0x2F86F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F86ECu;
    // 0x2f86f0: 0x24840488  addiu       $a0, $a0, 0x488 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F87C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F87C8u, 0x2F86ECu, 0x2F86F4u)) {
        return;
    }
    ctx->pc = 0x2F86F4u;
label_2f86f4:
    // 0x2f86f4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2F86F4u;
    {
        const bool branch_taken_0x2f86f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f86f4) {
            ctx->pc = 0x2F877Cu;
            goto label_2f877c;
        }
    }
    ctx->pc = 0x2F86FCu;
label_2f86fc:
    // 0x2f86fc: 0xacf35880  sw          $s3, 0x5880($a3)
    ctx->pc = 0x2f86fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 22656), GPR_U32(ctx, 19));
    // 0x2f8700: 0x24e45880  addiu       $a0, $a3, 0x5880
    ctx->pc = 0x2f8700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 22656));
    // 0x2f8704: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x2f8704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x2f8708: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f8708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f870c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2f870cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2f8710: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f8710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8714: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2F8714u;
    {
        const bool branch_taken_0x2f8714 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2F8718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8714u;
        // 0x2f8718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8714) {
            ctx->pc = 0x2F8748u;
            goto label_2f8748;
        }
    }
    ctx->pc = 0x2F871Cu;
    // 0x2f871c: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x2f871cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2f8720: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x2f8720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2f8724: 0x0  nop
    ctx->pc = 0x2f8724u;
    // NOP
label_2f8728:
    // 0x2f8728: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x2f8728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f872c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2f872cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f8730: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f8730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f8734: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2f8734u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8738: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f8738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f873c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2f873cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f8740: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F8740u;
    {
        const bool branch_taken_0x2f8740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8740u;
        // 0x2f8744: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8740) {
            ctx->pc = 0x2F8728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8728;
        }
    }
    ctx->pc = 0x2F8748u;
label_2f8748:
    // 0x2f8748: 0x24e75880  addiu       $a3, $a3, 0x5880
    ctx->pc = 0x2f8748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22656));
    // 0x2f874c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f874cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f8750: 0x26c45710  addiu       $a0, $s6, 0x5710
    ctx->pc = 0x2f8750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 22288));
    // 0x2f8754: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x2f8754u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8758: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f8758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f875c: 0x34a5131c  ori         $a1, $a1, 0x131C
    ctx->pc = 0x2f875cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4892);
    // 0x2f8760: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f8760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8764: 0x24082090  addiu       $t0, $zero, 0x2090
    ctx->pc = 0x2f8764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8336));
    // 0x2f8768: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2f8768u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f876c: 0xc0c92ee  jal         func_324BB8
    ctx->pc = 0x2F876Cu;
    SET_GPR_U32(ctx, 31, 0x2F8774u);
    ctx->pc = 0x2F8770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F876Cu;
    // 0x2f8770: 0x240a2090  addiu       $t2, $zero, 0x2090 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x2F876Cu, 0x2F8774u)) {
        return;
    }
    ctx->pc = 0x2F8774u;
label_2f8774:
    // 0x2f8774: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8774u;
    {
        const bool branch_taken_0x2f8774 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2f8774) {
            ctx->pc = 0x2F878Cu;
            goto label_2f878c;
        }
    }
    ctx->pc = 0x2F877Cu;
label_2f877c:
    // 0x2f877c: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F877Cu;
    SET_GPR_U32(ctx, 31, 0x2F8784u);
    ctx->pc = 0x2F8780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F877Cu;
    // 0x2f8780: 0x8e447b80  lw          $a0, 0x7B80($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F877Cu, 0x2F8784u)) {
        return;
    }
    ctx->pc = 0x2F8784u;
label_2f8784:
    // 0x2f8784: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8784u;
    {
        const bool branch_taken_0x2f8784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8784u;
        // 0x2f8788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8784) {
            ctx->pc = 0x2F8798u;
            goto label_2f8798;
        }
    }
    ctx->pc = 0x2F878Cu;
label_2f878c:
    // 0x2f878c: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F878Cu;
    SET_GPR_U32(ctx, 31, 0x2F8794u);
    ctx->pc = 0x2F8790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F878Cu;
    // 0x2f8790: 0x8e447b80  lw          $a0, 0x7B80($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F878Cu, 0x2F8794u)) {
        return;
    }
    ctx->pc = 0x2F8794u;
label_2f8794:
    // 0x2f8794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f8794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8798:
    // 0x2f8798: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2f8798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f879c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2f879cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f87a0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2f87a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f87a4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f87a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f87a8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f87a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f87ac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f87acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f87b0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f87b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f87b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f87b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f87b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F87B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F87BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87B8u;
        // 0x2f87bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F87B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F87C0u;
    // 0x2f87c0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2f87c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f87c4: 0x0  nop
    ctx->pc = 0x2f87c4u;
    // NOP
    ctx->pc = 0x2f87c8u;
}
