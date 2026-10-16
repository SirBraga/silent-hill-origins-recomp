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

// Function: sub_0023C688
// Address: 0x23c688 - 0x23dfe8
void sub_0023C688_0x23c688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C688_0x23c688");
#endif

    switch (ctx->pc) {
        case 0x23c728u: goto label_23c728;
        case 0x23c744u: goto label_23c744;
        case 0x23c7acu: goto label_23c7ac;
        case 0x23c7c0u: goto label_23c7c0;
        case 0x23c7f8u: goto label_23c7f8;
        case 0x23c818u: goto label_23c818;
        case 0x23c830u: goto label_23c830;
        case 0x23c84cu: goto label_23c84c;
        case 0x23c888u: goto label_23c888;
        case 0x23c8acu: goto label_23c8ac;
        case 0x23c8b4u: goto label_23c8b4;
        case 0x23c8c4u: goto label_23c8c4;
        case 0x23c8e0u: goto label_23c8e0;
        case 0x23ca60u: goto label_23ca60;
        case 0x23ca80u: goto label_23ca80;
        case 0x23cbd0u: goto label_23cbd0;
        case 0x23cbe8u: goto label_23cbe8;
        case 0x23cc7cu: goto label_23cc7c;
        case 0x23cd00u: goto label_23cd00;
        case 0x23cd18u: goto label_23cd18;
        case 0x23cdd8u: goto label_23cdd8;
        case 0x23cdf8u: goto label_23cdf8;
        case 0x23cf60u: goto label_23cf60;
        case 0x23cfd8u: goto label_23cfd8;
        case 0x23d110u: goto label_23d110;
        case 0x23d220u: goto label_23d220;
        case 0x23d530u: goto label_23d530;
        case 0x23d550u: goto label_23d550;
        case 0x23d6d0u: goto label_23d6d0;
        case 0x23d6e0u: goto label_23d6e0;
        case 0x23d74cu: goto label_23d74c;
        case 0x23d7d0u: goto label_23d7d0;
        case 0x23d7e0u: goto label_23d7e0;
        case 0x23d878u: goto label_23d878;
        case 0x23d890u: goto label_23d890;
        case 0x23da28u: goto label_23da28;
        case 0x23da78u: goto label_23da78;
        case 0x23db38u: goto label_23db38;
        case 0x23dc70u: goto label_23dc70;
        case 0x23dfb0u: goto label_23dfb0;
        default: break;
    }

    ctx->pc = 0x23c688u;

    // 0x23c688: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x23c688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x23c68c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23c690: 0x8c63416c  lw          $v1, 0x416C($v1)
    ctx->pc = 0x23c690u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x23c694: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x23c694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x23c698: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x23c698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x23c69c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x23c69cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c6a0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x23c6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x23c6a4: 0x2a3b021  addu        $s6, $s5, $v1
    ctx->pc = 0x23c6a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x23c6a8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x23c6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x23c6ac: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x23c6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x23c6b0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x23c6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x23c6b4: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x23c6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x23c6b8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x23c6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x23c6bc: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x23c6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x23c6c0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23c6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x23c6c4: 0x92c20036  lbu         $v0, 0x36($s6)
    ctx->pc = 0x23c6c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 54)));
    // 0x23c6c8: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x23c6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x23c6cc: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x23C6CCu;
    {
        const bool branch_taken_0x23c6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6CCu;
        // 0x23c6d0: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c6cc) {
            ctx->pc = 0x23C744u;
            goto label_23c744;
        }
    }
    ctx->pc = 0x23C6D4u;
    // 0x23c6d4: 0x8ea8000c  lw          $t0, 0xC($s5)
    ctx->pc = 0x23c6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x23c6d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23c6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23c6dc: 0x8ea90010  lw          $t1, 0x10($s5)
    ctx->pc = 0x23c6dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x23c6e0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23c6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23c6e4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x23c6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x23c6e8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x23c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x23c6ec: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x23c6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x23c6f0: 0xafa9002c  sw          $t1, 0x2C($sp)
    ctx->pc = 0x23c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
    // 0x23c6f4: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x23c6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x23c6f8: 0x8ce73f30  lw          $a3, 0x3F30($a3)
    ctx->pc = 0x23c6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23c6fc: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x23c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x23c700: 0x84e6001c  lh          $a2, 0x1C($a3)
    ctx->pc = 0x23c700u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x23c704: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x23c704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x23c708: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23c708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23c70c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x23c70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x23c710: 0x84e6001e  lh          $a2, 0x1E($a3)
    ctx->pc = 0x23c710u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 30)));
    // 0x23c714: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x23c714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x23c718: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23c718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x23c71c: 0xafa9001c  sw          $t1, 0x1C($sp)
    ctx->pc = 0x23c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 9));
    // 0x23c720: 0xc08efd8  jal         func_23BF60
    ctx->pc = 0x23C720u;
    SET_GPR_U32(ctx, 31, 0x23C728u);
    ctx->pc = 0x23C724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C720u;
    // 0x23c724: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BF60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23BF60u, 0x23C720u, 0x23C728u)) {
        return;
    }
    ctx->pc = 0x23C728u;
label_23c728:
    // 0x23c728: 0x10400622  beqz        $v0, . + 4 + (0x622 << 2)
    ctx->pc = 0x23C728u;
    {
        const bool branch_taken_0x23c728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C728u;
        // 0x23c72c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c728) {
            ctx->pc = 0x23DFB4u;
            goto label_23dfb4;
        }
    }
    ctx->pc = 0x23C730u;
    // 0x23c730: 0x92a20020  lbu         $v0, 0x20($s5)
    ctx->pc = 0x23c730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x23c734: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23c738: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23c738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23c73c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C73Cu;
    {
        const bool branch_taken_0x23c73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C73Cu;
        // 0x23c740: 0x8f828ec0  lw          $v0, -0x7140($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c73c) {
            ctx->pc = 0x23C74Cu;
            goto label_23c74c;
        }
    }
    ctx->pc = 0x23C744u;
label_23c744:
    // 0x23c744: 0x1000061b  b           . + 4 + (0x61B << 2)
    ctx->pc = 0x23C744u;
    {
        const bool branch_taken_0x23c744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C744u;
        // 0x23c748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c744) {
            ctx->pc = 0x23DFB4u;
            goto label_23dfb4;
        }
    }
    ctx->pc = 0x23C74Cu;
label_23c74c:
    // 0x23c74c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c750: 0x90450020  lbu         $a1, 0x20($v0)
    ctx->pc = 0x23c750u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x23c754: 0x10a3fffb  beq         $a1, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23C754u;
    {
        const bool branch_taken_0x23c754 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x23C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C754u;
        // 0x23c758: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c754) {
            ctx->pc = 0x23C744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c744;
        }
    }
    ctx->pc = 0x23C75Cu;
    // 0x23c75c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x23c75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23c760: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23C760u;
    {
        const bool branch_taken_0x23c760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C760u;
        // 0x23c764: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c760) {
            ctx->pc = 0x23C778u;
            goto label_23c778;
        }
    }
    ctx->pc = 0x23C768u;
    // 0x23c768: 0x10a0005f  beqz        $a1, . + 4 + (0x5F << 2)
    ctx->pc = 0x23C768u;
    {
        const bool branch_taken_0x23c768 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C768u;
        // 0x23c76c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c768) {
            ctx->pc = 0x23C8E8u;
            goto label_23c8e8;
        }
    }
    ctx->pc = 0x23C770u;
    // 0x23c770: 0x10000611  b           . + 4 + (0x611 << 2)
    ctx->pc = 0x23C770u;
    {
        const bool branch_taken_0x23c770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C770u;
        // 0x23c774: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c770) {
            ctx->pc = 0x23DFB8u;
            goto label_23dfb8;
        }
    }
    ctx->pc = 0x23C778u;
label_23c778:
    // 0x23c778: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23C778u;
    {
        const bool branch_taken_0x23c778 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C778u;
        // 0x23c77c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c778) {
            ctx->pc = 0x23C790u;
            goto label_23c790;
        }
    }
    ctx->pc = 0x23C780u;
    // 0x23c780: 0x10a20059  beq         $a1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x23C780u;
    {
        const bool branch_taken_0x23c780 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C780u;
        // 0x23c784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c780) {
            ctx->pc = 0x23C8E8u;
            goto label_23c8e8;
        }
    }
    ctx->pc = 0x23C788u;
    // 0x23c788: 0x1000060b  b           . + 4 + (0x60B << 2)
    ctx->pc = 0x23C788u;
    {
        const bool branch_taken_0x23c788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C788u;
        // 0x23c78c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c788) {
            ctx->pc = 0x23DFB8u;
            goto label_23dfb8;
        }
    }
    ctx->pc = 0x23C790u;
label_23c790:
    // 0x23c790: 0x8fb10024  lw          $s1, 0x24($sp)
    ctx->pc = 0x23c790u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23c794: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23c794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23c798: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x23c798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x23c79c: 0x24170040  addiu       $s7, $zero, 0x40
    ctx->pc = 0x23c79cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x23c7a0: 0x8fb20014  lw          $s2, 0x14($sp)
    ctx->pc = 0x23c7a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23c7a4: 0xc08ed56  jal         func_23B558
    ctx->pc = 0x23C7A4u;
    SET_GPR_U32(ctx, 31, 0x23C7ACu);
    ctx->pc = 0x23C7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C7A4u;
    // 0x23c7a8: 0x222a021  addu        $s4, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23B558u, 0x23C7A4u, 0x23C7ACu)) {
        return;
    }
    ctx->pc = 0x23C7ACu;
label_23c7ac:
    // 0x23c7ac: 0x2912023  subu        $a0, $s4, $s1
    ctx->pc = 0x23c7acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x23c7b0: 0x1080003c  beqz        $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x23C7B0u;
    {
        const bool branch_taken_0x23c7b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7B0u;
        // 0x23c7b4: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c7b0) {
            ctx->pc = 0x23C8A4u;
            goto label_23c8a4;
        }
    }
    ctx->pc = 0x23C7B8u;
    // 0x23c7b8: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x23c7b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    // 0x23c7bc: 0x26733f38  addiu       $s3, $s3, 0x3F38
    ctx->pc = 0x23c7bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16184));
label_23c7c0:
    // 0x23c7c0: 0x2e4282b  sltu        $a1, $s7, $a0
    ctx->pc = 0x23c7c0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x23c7c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23c7c8: 0x8c633f40  lw          $v1, 0x3F40($v1)
    ctx->pc = 0x23c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F40u));
    // 0x23c7cc: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x23c7ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c7d0: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x23c7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    // 0x23c7d4: 0x85100a  movz        $v0, $a0, $a1
    ctx->pc = 0x23c7d4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x23c7d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23c7dc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x23c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x23c7e0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x23c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x23c7e4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x23c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23c7e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23c7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23c7ec: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x23c7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x23c7f0: 0xc091bd0  jal         func_246F40
    ctx->pc = 0x23C7F0u;
    SET_GPR_U32(ctx, 31, 0x23C7F8u);
    ctx->pc = 0x23C7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C7F0u;
    // 0x23c7f4: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246F40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246F40u, 0x23C7F0u, 0x23C7F8u)) {
        return;
    }
    ctx->pc = 0x23C7F8u;
label_23c7f8:
    // 0x23c7f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23c7fc: 0x8c423f40  lw          $v0, 0x3F40($v0)
    ctx->pc = 0x23c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F40u));
    // 0x23c800: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x23c800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23c804: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23c804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c808: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23c808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23c80c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x23c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x23c810: 0xc08a188  jal         func_228620
    ctx->pc = 0x23C810u;
    SET_GPR_U32(ctx, 31, 0x23C818u);
    ctx->pc = 0x23C814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C810u;
    // 0x23c814: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228620u, 0x23C810u, 0x23C818u)) {
        return;
    }
    ctx->pc = 0x23C818u;
label_23c818:
    // 0x23c818: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23c818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23c81c: 0x8c633f40  lw          $v1, 0x3F40($v1)
    ctx->pc = 0x23c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F40u));
    // 0x23c820: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23c820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23c824: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x23c824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x23c828: 0xc08f0b4  jal         func_23C2D0
    ctx->pc = 0x23C828u;
    SET_GPR_U32(ctx, 31, 0x23C830u);
    ctx->pc = 0x23C82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C828u;
    // 0x23c82c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C2D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23C2D0u, 0x23C828u, 0x23C830u)) {
        return;
    }
    ctx->pc = 0x23C830u;
label_23c830:
    // 0x23c830: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23c830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23c834: 0x8c423f40  lw          $v0, 0x3F40($v0)
    ctx->pc = 0x23c834u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F40u));
    // 0x23c838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23c838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c83c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23c840: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x23c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x23c844: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x23C844u;
    SET_GPR_U32(ctx, 31, 0x23C84Cu);
    ctx->pc = 0x23C848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C844u;
    // 0x23c848: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x23C844u, 0x23C84Cu)) {
        return;
    }
    ctx->pc = 0x23C84Cu;
label_23c84c:
    // 0x23c84c: 0x8faa0028  lw          $t2, 0x28($sp)
    ctx->pc = 0x23c84cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c850: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23c850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c854: 0x8fab002c  lw          $t3, 0x2C($sp)
    ctx->pc = 0x23c854u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x23c858: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x23c858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c85c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23c85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c860: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x23c860u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x23c864: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x23c864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23c868: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x23c868u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x23c86c: 0x254afff8  addiu       $t2, $t2, -0x8
    ctx->pc = 0x23c86cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
    // 0x23c870: 0x256bfff8  addiu       $t3, $t3, -0x8
    ctx->pc = 0x23c870u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
    // 0x23c874: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x23c874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x23c878: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x23c878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x23c87c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x23c87cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23c880: 0xc08ee74  jal         func_23B9D0
    ctx->pc = 0x23C880u;
    SET_GPR_U32(ctx, 31, 0x23C888u);
    ctx->pc = 0x23C884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C880u;
    // 0x23c884: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23B9D0u, 0x23C880u, 0x23C888u)) {
        return;
    }
    ctx->pc = 0x23C888u;
label_23c888:
    // 0x23c888: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x23c888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c88c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23c890: 0x8c423f40  lw          $v0, 0x3F40($v0)
    ctx->pc = 0x23c890u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F40u));
    // 0x23c894: 0x2912023  subu        $a0, $s4, $s1
    ctx->pc = 0x23c894u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x23c898: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x23c898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x23c89c: 0x1480ffc8  bnez        $a0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x23C89Cu;
    {
        const bool branch_taken_0x23c89c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C89Cu;
        // 0x23c8a0: 0xaf828ed0  sw          $v0, -0x7130($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c89c) {
            ctx->pc = 0x23C7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c7c0;
        }
    }
    ctx->pc = 0x23C8A4u;
label_23c8a4:
    // 0x23c8a4: 0xc08eedc  jal         func_23BB70
    ctx->pc = 0x23C8A4u;
    SET_GPR_U32(ctx, 31, 0x23C8ACu);
    ctx->pc = 0x23BB70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23BB70u, 0x23C8A4u, 0x23C8ACu)) {
        return;
    }
    ctx->pc = 0x23C8ACu;
label_23c8ac:
    // 0x23c8ac: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x23C8ACu;
    SET_GPR_U32(ctx, 31, 0x23C8B4u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x23C8ACu, 0x23C8B4u)) {
        return;
    }
    ctx->pc = 0x23C8B4u;
label_23c8b4:
    // 0x23c8b4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x23c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x23c8b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23c8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23c8bc: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x23C8BCu;
    SET_GPR_U32(ctx, 31, 0x23C8C4u);
    ctx->pc = 0x23C8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8BCu;
    // 0x23c8c0: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x23C8BCu, 0x23C8C4u)) {
        return;
    }
    ctx->pc = 0x23C8C4u;
label_23c8c4:
    // 0x23c8c4: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x23c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x23c8c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c8cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23c8d0: 0x146205b8  bne         $v1, $v0, . + 4 + (0x5B8 << 2)
    ctx->pc = 0x23C8D0u;
    {
        const bool branch_taken_0x23c8d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8D0u;
        // 0x23c8d4: 0xaec30004  sw          $v1, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8d0) {
            ctx->pc = 0x23DFB4u;
            goto label_23dfb4;
        }
    }
    ctx->pc = 0x23C8D8u;
    // 0x23c8d8: 0xc08b97e  jal         func_22E5F8
    ctx->pc = 0x23C8D8u;
    SET_GPR_U32(ctx, 31, 0x23C8E0u);
    ctx->pc = 0x23C8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8D8u;
    // 0x23c8dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E5F8u, 0x23C8D8u, 0x23C8E0u)) {
        return;
    }
    ctx->pc = 0x23C8E0u;
label_23c8e0:
    // 0x23c8e0: 0x100005b4  b           . + 4 + (0x5B4 << 2)
    ctx->pc = 0x23C8E0u;
    {
        const bool branch_taken_0x23c8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8E0u;
        // 0x23c8e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8e0) {
            ctx->pc = 0x23DFB4u;
            goto label_23dfb4;
        }
    }
    ctx->pc = 0x23C8E8u;
label_23c8e8:
    // 0x23c8e8: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x23c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x23c8ec: 0x104005b1  beqz        $v0, . + 4 + (0x5B1 << 2)
    ctx->pc = 0x23C8ECu;
    {
        const bool branch_taken_0x23c8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8ECu;
        // 0x23c8f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8ec) {
            ctx->pc = 0x23DFB4u;
            goto label_23dfb4;
        }
    }
    ctx->pc = 0x23C8F4u;
    // 0x23c8f4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x23c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23c8f8: 0x1040ff92  beqz        $v0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x23C8F8u;
    {
        const bool branch_taken_0x23c8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8F8u;
        // 0x23c8fc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8f8) {
            ctx->pc = 0x23C744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c744;
        }
    }
    ctx->pc = 0x23C900u;
    // 0x23c900: 0x8525001c  lh          $a1, 0x1C($t1)
    ctx->pc = 0x23c900u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x23c904: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c908: 0x8d230014  lw          $v1, 0x14($t1)
    ctx->pc = 0x23c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x23c90c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x23c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23c910: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x23c910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23c914: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x23c914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x23c918: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x23c918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x23c91c: 0x380c3  sra         $s0, $v1, 3
    ctx->pc = 0x23c91cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
    // 0x23c920: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x23c920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x23c924: 0x8522001e  lh          $v0, 0x1E($t1)
    ctx->pc = 0x23c924u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 30)));
    // 0x23c928: 0x24a30007  addiu       $v1, $a1, 0x7
    ctx->pc = 0x23c928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x23c92c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x23c92cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23c930: 0x388c3  sra         $s1, $v1, 3
    ctx->pc = 0x23c930u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 3));
    // 0x23c934: 0x14a6000f  bne         $a1, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x23C934u;
    {
        const bool branch_taken_0x23c934 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x23C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C934u;
        // 0x23c938: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c934) {
            ctx->pc = 0x23C974u;
            goto label_23c974;
        }
    }
    ctx->pc = 0x23C93Cu;
    // 0x23c93c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x23c93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23c940: 0x8ea60018  lw          $a2, 0x18($s5)
    ctx->pc = 0x23c940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x23c944: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x23c944u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x23c948: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23c948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c94c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x23c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23c950: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x23c950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x23c954: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x23c954u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x23c958: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x23c958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x23c95c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x23c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23c960: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23c960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c964: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23c964u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c968: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x23c968u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c96c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23C96Cu;
    {
        const bool branch_taken_0x23c96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C96Cu;
        // 0x23c970: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c96c) {
            ctx->pc = 0x23C99Cu;
            goto label_23c99c;
        }
    }
    ctx->pc = 0x23C974u;
label_23c974:
    // 0x23c974: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x23c974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x23c978: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23C978u;
    {
        const bool branch_taken_0x23c978 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c978) {
            ctx->pc = 0x23C97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C978u;
            // 0x23c97c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C980u;
            goto label_23c980;
        }
    }
    ctx->pc = 0x23C980u;
label_23c980:
    // 0x23c980: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23c980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23c984: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x23c984u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23c988: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x23c988u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c98c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x23c98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c990: 0x2012  mflo        $a0
    ctx->pc = 0x23c990u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x23c994: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x23c994u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x23c998: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x23c998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_23c99c:
    // 0x23c99c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x23c99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23c9a0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x23c9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x23c9a4: 0x8c843f30  lw          $a0, 0x3F30($a0)
    ctx->pc = 0x23c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23c9a8: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x23c9a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23c9ac: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23C9ACu;
    {
        const bool branch_taken_0x23c9ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c9ac) {
            ctx->pc = 0x23C9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C9ACu;
            // 0x23c9b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C9B4u;
            goto label_23c9b4;
        }
    }
    ctx->pc = 0x23C9B4u;
label_23c9b4:
    // 0x23c9b4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x23c9b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9b8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x23c9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23c9bc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x23c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x23c9c0: 0x2463ffeb  addiu       $v1, $v1, -0x15
    ctx->pc = 0x23c9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967275));
    // 0x23c9c4: 0x2c640018  sltiu       $a0, $v1, 0x18
    ctx->pc = 0x23c9c4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x23c9c8: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x23c9c8u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23c9cc: 0x1012  mflo        $v0
    ctx->pc = 0x23c9ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x23c9d0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x23c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23c9d4: 0x1080ff5b  beqz        $a0, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x23C9D4u;
    {
        const bool branch_taken_0x23c9d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9D4u;
        // 0x23c9d8: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c9d4) {
            ctx->pc = 0x23C744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c744;
        }
    }
    ctx->pc = 0x23C9DCu;
    // 0x23c9dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23c9e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23c9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23c9e4: 0x2442b280  addiu       $v0, $v0, -0x4D80
    ctx->pc = 0x23c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947456));
    // 0x23c9e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23c9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c9ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23c9f0: 0x800008  jr          $a0
    ctx->pc = 0x23C9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C744u: goto label_23c744;
            case 0x23C9F8u: goto label_23c9f8;
            case 0x23CB70u: goto label_23cb70;
            case 0x23CC58u: goto label_23cc58;
            case 0x23D4C8u: goto label_23d4c8;
            case 0x23D66Cu: goto label_23d66c;
            case 0x23D728u: goto label_23d728;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C9F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23C9F8u;
label_23c9f8:
    // 0x23c9f8: 0x8d260018  lw          $a2, 0x18($t1)
    ctx->pc = 0x23c9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x23c9fc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23ca00: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x23ca00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23ca04: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x23ca04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ca08: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x23ca08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x23ca0c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23ca0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ca10: 0x1473818  mult        $a3, $t2, $a3
    ctx->pc = 0x23ca10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x23ca14: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23ca14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23ca18: 0x2084018  mult        $t0, $s0, $t0
    ctx->pc = 0x23ca18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x23ca1c: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x23ca1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23ca20: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x23ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x23ca24: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x23ca24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23ca28: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x23ca28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca2c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23ca30: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23ca30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23ca34: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23ca38: 0x485821  addu        $t3, $v0, $t0
    ctx->pc = 0x23ca38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23ca3c: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x23ca3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23ca40: 0x1120055b  beqz        $t1, . + 4 + (0x55B << 2)
    ctx->pc = 0x23CA40u;
    {
        const bool branch_taken_0x23ca40 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA40u;
        // 0x23ca44: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca40) {
            ctx->pc = 0x23DFB0u;
            goto label_23dfb0;
        }
    }
    ctx->pc = 0x23CA48u;
    // 0x23ca48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ca4c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x23ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23ca50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23ca54: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x23ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x23ca58: 0x3a080  sll         $s4, $v1, 2
    ctx->pc = 0x23ca58u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23ca5c: 0x0  nop
    ctx->pc = 0x23ca5cu;
    // NOP
label_23ca60:
    // 0x23ca60: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23ca60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23ca64: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23ca64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca68: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x23CA68u;
    {
        const bool branch_taken_0x23ca68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA68u;
        // 0x23ca6c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca68) {
            ctx->pc = 0x23CB48u;
            goto label_23cb48;
        }
    }
    ctx->pc = 0x23CA70u;
    // 0x23ca70: 0x3c167f00  lui         $s6, 0x7F00
    ctx->pc = 0x23ca70u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32512 << 16));
    // 0x23ca74: 0x3c18ff00  lui         $t8, 0xFF00
    ctx->pc = 0x23ca74u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)65280 << 16));
    // 0x23ca78: 0x24150080  addiu       $s5, $zero, 0x80
    ctx->pc = 0x23ca78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23ca7c: 0x3c1300ff  lui         $s3, 0xFF
    ctx->pc = 0x23ca7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)255 << 16));
label_23ca80:
    // 0x23ca80: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x23ca80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23ca84: 0x2c9102b  sltu        $v0, $s6, $t1
    ctx->pc = 0x23ca84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x23ca88: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x23CA88u;
    {
        const bool branch_taken_0x23ca88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ca88) {
            ctx->pc = 0x23CA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CA88u;
            // 0x23ca8c: 0x8d6e0000  lw          $t6, 0x0($t3) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CA98u;
            goto label_23ca98;
        }
    }
    ctx->pc = 0x23CA90u;
    // 0x23ca90: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x23CA90u;
    {
        const bool branch_taken_0x23ca90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA90u;
        // 0x23ca94: 0xad690000  sw          $t1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca90) {
            ctx->pc = 0x23CB34u;
            goto label_23cb34;
        }
    }
    ctx->pc = 0x23CA98u;
label_23ca98:
    // 0x23ca98: 0x1382824  and         $a1, $t1, $t8
    ctx->pc = 0x23ca98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 24));
    // 0x23ca9c: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x23ca9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x23caa0: 0x1333024  and         $a2, $t1, $s3
    ctx->pc = 0x23caa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 19));
    // 0x23caa4: 0x1d88024  and         $s0, $t6, $t8
    ctx->pc = 0x23caa4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) & GPR_U64(ctx, 24));
    // 0x23caa8: 0x1d38824  and         $s1, $t6, $s3
    ctx->pc = 0x23caa8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & GPR_U64(ctx, 19));
    // 0x23caac: 0x2a57823  subu        $t7, $s5, $a1
    ctx->pc = 0x23caacu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x23cab0: 0x31cdff00  andi        $t5, $t6, 0xFF00
    ctx->pc = 0x23cab0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
    // 0x23cab4: 0x108602  srl         $s0, $s0, 24
    ctx->pc = 0x23cab4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x23cab8: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x23cab8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x23cabc: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x23cabcu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x23cac0: 0x3124ff00  andi        $a0, $t1, 0xFF00
    ctx->pc = 0x23cac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65280);
    // 0x23cac4: 0x20f8018  mult        $s0, $s0, $t7
    ctx->pc = 0x23cac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x23cac8: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x23cac8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x23cacc: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x23caccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x23cad0: 0xd6a02  srl         $t5, $t5, 8
    ctx->pc = 0x23cad0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 8));
    // 0x23cad4: 0x22f8818  mult        $s1, $s1, $t7
    ctx->pc = 0x23cad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x23cad8: 0xa51018  mult        $v0, $a1, $a1
    ctx->pc = 0x23cad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23cadc: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x23cadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x23cae0: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x23cae0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x23cae4: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x23cae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23cae8: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x23cae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x23caec: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x23caecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23caf0: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x23caf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x23caf4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23caf8: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x23caf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x23cafc: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x23cafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x23cb00: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x23cb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
    // 0x23cb04: 0x30c67f80  andi        $a2, $a2, 0x7F80
    ctx->pc = 0x23cb04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32640);
    // 0x23cb08: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x23cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x23cb0c: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x23cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x23cb10: 0x63240  sll         $a2, $a2, 9
    ctx->pc = 0x23cb10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x23cb14: 0x30847f80  andi        $a0, $a0, 0x7F80
    ctx->pc = 0x23cb14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32640);
    // 0x23cb18: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23cb1c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23cb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23cb20: 0x30637f80  andi        $v1, $v1, 0x7F80
    ctx->pc = 0x23cb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32640);
    // 0x23cb24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23cb28: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x23cb28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x23cb2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23cb30: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x23cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_23cb34:
    // 0x23cb34: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23cb34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb38: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x23cb38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x23cb3c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x23cb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x23cb40: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x23CB40u;
    {
        const bool branch_taken_0x23cb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB40u;
        // 0x23cb44: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb40) {
            ctx->pc = 0x23CA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ca80;
        }
    }
    ctx->pc = 0x23CB48u;
label_23cb48:
    // 0x23cb48: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x23cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23cb4c: 0x1745821  addu        $t3, $t3, $s4
    ctx->pc = 0x23cb4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 20)));
    // 0x23cb50: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23cb54: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x23cb54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x23cb58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23cb58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23cb60: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x23CB60u;
    {
        const bool branch_taken_0x23cb60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB60u;
        // 0x23cb64: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb60) {
            ctx->pc = 0x23CA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ca60;
        }
    }
    ctx->pc = 0x23CB68u;
    // 0x23cb68: 0x10000512  b           . + 4 + (0x512 << 2)
    ctx->pc = 0x23CB68u;
    {
        const bool branch_taken_0x23cb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB68u;
        // 0x23cb6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb68) {
            ctx->pc = 0x23DFB4u;
            goto label_23dfb4;
        }
    }
    ctx->pc = 0x23CB70u;
label_23cb70:
    // 0x23cb70: 0x8d260018  lw          $a2, 0x18($t1)
    ctx->pc = 0x23cb70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x23cb74: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23cb78: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x23cb78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23cb7c: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x23cb7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cb80: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x23cb80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x23cb84: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23cb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cb88: 0x1473818  mult        $a3, $t2, $a3
    ctx->pc = 0x23cb88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x23cb8c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23cb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23cb90: 0x2084018  mult        $t0, $s0, $t0
    ctx->pc = 0x23cb90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x23cb94: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x23cb94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23cb98: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x23cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x23cb9c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x23cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23cba0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x23cba0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cba4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23cba8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23cba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23cbac: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23cbb0: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x23cbb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23cbb4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x23cbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23cbb8: 0x112004fd  beqz        $t1, . + 4 + (0x4FD << 2)
    ctx->pc = 0x23CBB8u;
    {
        const bool branch_taken_0x23cbb8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBB8u;
        // 0x23cbbc: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cbb8) {
            ctx->pc = 0x23DFB0u;
            goto label_23dfb0;
        }
    }
    ctx->pc = 0x23CBC0u;
    // 0x23cbc0: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x23cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23cbc4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23cbc8: 0x2a080  sll         $s4, $v0, 2
    ctx->pc = 0x23cbc8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cbcc: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x23cbccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_23cbd0:
    // 0x23cbd0: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23cbd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23cbd4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23cbd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cbd8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23CBD8u;
    {
        const bool branch_taken_0x23cbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBD8u;
        // 0x23cbdc: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cbd8) {
            ctx->pc = 0x23CC34u;
            goto label_23cc34;
        }
    }
    ctx->pc = 0x23CBE0u;
    // 0x23cbe0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x23cbe0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x23cbe4: 0x0  nop
    ctx->pc = 0x23cbe4u;
    // NOP
label_23cbe8:
    // 0x23cbe8: 0x94a90000  lhu         $t1, 0x0($a1)
    ctx->pc = 0x23cbe8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23cbec: 0x31228000  andi        $v0, $t1, 0x8000
    ctx->pc = 0x23cbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)32768);
    // 0x23cbf0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23CBF0u;
    {
        const bool branch_taken_0x23cbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBF0u;
        // 0x23cbf4: 0x312403e0  andi        $a0, $t1, 0x3E0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)992);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cbf0) {
            ctx->pc = 0x23CC20u;
            goto label_23cc20;
        }
    }
    ctx->pc = 0x23CBF8u;
    // 0x23cbf8: 0x31237c00  andi        $v1, $t1, 0x7C00
    ctx->pc = 0x23cbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31744);
    // 0x23cbfc: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x23cbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x23cc00: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x23cc00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x23cc04: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x23cc04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x23cc08: 0x3122001f  andi        $v0, $t1, 0x1F
    ctx->pc = 0x23cc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31);
    // 0x23cc0c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23cc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23cc10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23cc14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23cc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23cc18: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x23cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x23cc1c: 0x0  nop
    ctx->pc = 0x23cc1cu;
    // NOP
label_23cc20:
    // 0x23cc20: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23cc20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cc24: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x23cc24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x23cc28: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x23cc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x23cc2c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x23CC2Cu;
    {
        const bool branch_taken_0x23cc2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC2Cu;
        // 0x23cc30: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc2c) {
            ctx->pc = 0x23CBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cbe8;
        }
    }
    ctx->pc = 0x23CC34u;
label_23cc34:
    // 0x23cc34: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23cc38: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x23cc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x23cc3c: 0x1144021  addu        $t0, $t0, $s4
    ctx->pc = 0x23cc3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
    // 0x23cc40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23cc40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cc44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23cc48: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x23CC48u;
    {
        const bool branch_taken_0x23cc48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC48u;
        // 0x23cc4c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc48) {
            ctx->pc = 0x23CBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cbd0;
        }
    }
    ctx->pc = 0x23CC50u;
    // 0x23cc50: 0x100004d8  b           . + 4 + (0x4D8 << 2)
    ctx->pc = 0x23CC50u;
    {
        const bool branch_taken_0x23cc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC50u;
        // 0x23cc54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc50) {
            ctx->pc = 0x23DFB4u;
            goto label_23dfb4;
        }
    }
    ctx->pc = 0x23CC58u;
label_23cc58:
    // 0x23cc58: 0x92a20022  lbu         $v0, 0x22($s5)
    ctx->pc = 0x23cc58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 34)));
    // 0x23cc5c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x23cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x23cc60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23cc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23cc64: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CC64u;
    {
        const bool branch_taken_0x23cc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC64u;
        // 0x23cc68: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc64) {
            ctx->pc = 0x23CC7Cu;
            goto label_23cc7c;
        }
    }
    ctx->pc = 0x23CC6Cu;
    // 0x23cc6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23cc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cc70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23cc70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cc74: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x23CC74u;
    SET_GPR_U32(ctx, 31, 0x23CC7Cu);
    ctx->pc = 0x23CC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CC74u;
    // 0x23cc78: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x23CC74u, 0x23CC7Cu)) {
        return;
    }
    ctx->pc = 0x23CC7Cu;
label_23cc7c:
    // 0x23cc7c: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x23cc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x23cc80: 0x8cc63f30  lw          $a2, 0x3F30($a2)
    ctx->pc = 0x23cc80u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23cc84: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x23cc84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23cc88: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x23cc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23cc8c: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x23cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x23cc90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23cc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cc94: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x23cc94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23cc98: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x23cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x23cc9c: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x23cc9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23cca0: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x23cca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x23cca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23cca8: 0x14a70099  bne         $a1, $a3, . + 4 + (0x99 << 2)
    ctx->pc = 0x23CCA8u;
    {
        const bool branch_taken_0x23cca8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x23CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCA8u;
        // 0x23ccac: 0x44c021  addu        $t8, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cca8) {
            ctx->pc = 0x23CF10u;
            goto label_23cf10;
        }
    }
    ctx->pc = 0x23CCB0u;
    // 0x23ccb0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x23ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23ccb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23ccb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ccb8: 0x8ea50018  lw          $a1, 0x18($s5)
    ctx->pc = 0x23ccb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x23ccbc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ccc0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x23ccc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23ccc4: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x23ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23ccc8: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x23ccc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23cccc: 0x92a20023  lbu         $v0, 0x23($s5)
    ctx->pc = 0x23ccccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x23ccd0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23ccd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23ccd4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23ccd8: 0x14460036  bne         $v0, $a2, . + 4 + (0x36 << 2)
    ctx->pc = 0x23CCD8u;
    {
        const bool branch_taken_0x23ccd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x23CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCD8u;
        // 0x23ccdc: 0x64c821  addu        $t9, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccd8) {
            ctx->pc = 0x23CDB4u;
            goto label_23cdb4;
        }
    }
    ctx->pc = 0x23CCE0u;
    // 0x23cce0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23cce4: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x23cce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x23cce8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23cce8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ccec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23ccf0: 0x106001f3  beqz        $v1, . + 4 + (0x1F3 << 2)
    ctx->pc = 0x23CCF0u;
    {
        const bool branch_taken_0x23ccf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCF0u;
        // 0x23ccf4: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccf0) {
            ctx->pc = 0x23D4C0u;
            goto label_23d4c0;
        }
    }
    ctx->pc = 0x23CCF8u;
    // 0x23ccf8: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x23ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23ccfc: 0x2a080  sll         $s4, $v0, 2
    ctx->pc = 0x23ccfcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23cd00:
    // 0x23cd00: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23cd00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23cd04: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23cd04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cd08: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x23CD08u;
    {
        const bool branch_taken_0x23cd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD08u;
        // 0x23cd0c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd08) {
            ctx->pc = 0x23CD8Cu;
            goto label_23cd8c;
        }
    }
    ctx->pc = 0x23CD10u;
    // 0x23cd10: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x23cd10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x23cd14: 0x0  nop
    ctx->pc = 0x23cd14u;
    // NOP
label_23cd18:
    // 0x23cd18: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x23cd18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x23cd1c: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x23cd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23cd20: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x23cd20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23cd24: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x23cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x23cd28: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x23cd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x23cd2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23cd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23cd30: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23cd34: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23cd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x23cd38: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23cd3c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23cd40: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x23cd40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23cd44: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x23cd44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x23cd48: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x23CD48u;
    {
        const bool branch_taken_0x23cd48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD48u;
        // 0x23cd4c: 0x304403e0  andi        $a0, $v0, 0x3E0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)992);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd48) {
            ctx->pc = 0x23CD78u;
            goto label_23cd78;
        }
    }
    ctx->pc = 0x23CD50u;
    // 0x23cd50: 0x30437c00  andi        $v1, $v0, 0x7C00
    ctx->pc = 0x23cd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x23cd54: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x23cd54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x23cd58: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x23cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x23cd5c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x23cd5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x23cd60: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23cd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23cd64: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23cd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23cd68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23cd6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23cd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23cd70: 0xaf030000  sw          $v1, 0x0($t8)
    ctx->pc = 0x23cd70u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
    // 0x23cd74: 0x0  nop
    ctx->pc = 0x23cd74u;
    // NOP
label_23cd78:
    // 0x23cd78: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23cd78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cd7c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x23cd7cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x23cd80: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x23cd80u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x23cd84: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x23CD84u;
    {
        const bool branch_taken_0x23cd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD84u;
        // 0x23cd88: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd84) {
            ctx->pc = 0x23CD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cd18;
        }
    }
    ctx->pc = 0x23CD8Cu;
label_23cd8c:
    // 0x23cd8c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23cd90: 0x314c021  addu        $t8, $t8, $s4
    ctx->pc = 0x23cd90u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 20)));
    // 0x23cd94: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23cd98: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x23cd98u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x23cd9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23cd9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cda0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23cda4: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x23CDA4u;
    {
        const bool branch_taken_0x23cda4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDA4u;
        // 0x23cda8: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cda4) {
            ctx->pc = 0x23CD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cd00;
        }
    }
    ctx->pc = 0x23CDACu;
    // 0x23cdac: 0x1000047c  b           . + 4 + (0x47C << 2)
    ctx->pc = 0x23CDACu;
    {
        const bool branch_taken_0x23cdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDACu;
        // 0x23cdb0: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cdac) {
            ctx->pc = 0x23DFA0u;
            goto label_23dfa0;
        }
    }
    ctx->pc = 0x23CDB4u;
label_23cdb4:
    // 0x23cdb4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23cdb8: 0x8eb30008  lw          $s3, 0x8($s5)
    ctx->pc = 0x23cdb8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x23cdbc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23cdbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cdc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23cdc4: 0x106001be  beqz        $v1, . + 4 + (0x1BE << 2)
    ctx->pc = 0x23CDC4u;
    {
        const bool branch_taken_0x23cdc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDC4u;
        // 0x23cdc8: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cdc4) {
            ctx->pc = 0x23D4C0u;
            goto label_23d4c0;
        }
    }
    ctx->pc = 0x23CDCCu;
    // 0x23cdcc: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x23cdccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23cdd0: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x23cdd0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23cdd4: 0x0  nop
    ctx->pc = 0x23cdd4u;
    // NOP
label_23cdd8:
    // 0x23cdd8: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23cdd8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23cddc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23cddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cde0: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x23CDE0u;
    {
        const bool branch_taken_0x23cde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDE0u;
        // 0x23cde4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cde0) {
            ctx->pc = 0x23CEE8u;
            goto label_23cee8;
        }
    }
    ctx->pc = 0x23CDE8u;
    // 0x23cde8: 0x3c177f00  lui         $s7, 0x7F00
    ctx->pc = 0x23cde8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32512 << 16));
    // 0x23cdec: 0x3c0bff00  lui         $t3, 0xFF00
    ctx->pc = 0x23cdecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65280 << 16));
    // 0x23cdf0: 0x24160080  addiu       $s6, $zero, 0x80
    ctx->pc = 0x23cdf0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23cdf4: 0x3c0900ff  lui         $t1, 0xFF
    ctx->pc = 0x23cdf4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)255 << 16));
label_23cdf8:
    // 0x23cdf8: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x23cdf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x23cdfc: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x23cdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23ce00: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x23ce00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23ce04: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x23ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x23ce08: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x23ce08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x23ce0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23ce0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23ce10: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23ce10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23ce14: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23ce14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x23ce18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23ce1c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x23ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x23ce20: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x23ce20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ce24: 0x2e7182b  sltu        $v1, $s7, $a3
    ctx->pc = 0x23ce24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x23ce28: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x23CE28u;
    {
        const bool branch_taken_0x23ce28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ce28) {
            ctx->pc = 0x23CE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CE28u;
            // 0x23ce2c: 0x8f0e0000  lw          $t6, 0x0($t8) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CE38u;
            goto label_23ce38;
        }
    }
    ctx->pc = 0x23CE30u;
    // 0x23ce30: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x23CE30u;
    {
        const bool branch_taken_0x23ce30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE30u;
        // 0x23ce34: 0xaf070000  sw          $a3, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce30) {
            ctx->pc = 0x23CED4u;
            goto label_23ced4;
        }
    }
    ctx->pc = 0x23CE38u;
label_23ce38:
    // 0x23ce38: 0xeb2824  and         $a1, $a3, $t3
    ctx->pc = 0x23ce38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x23ce3c: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x23ce3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x23ce40: 0xe93024  and         $a2, $a3, $t1
    ctx->pc = 0x23ce40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x23ce44: 0x1cb8024  and         $s0, $t6, $t3
    ctx->pc = 0x23ce44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) & GPR_U64(ctx, 11));
    // 0x23ce48: 0x1c98824  and         $s1, $t6, $t1
    ctx->pc = 0x23ce48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & GPR_U64(ctx, 9));
    // 0x23ce4c: 0x2c57823  subu        $t7, $s6, $a1
    ctx->pc = 0x23ce4cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x23ce50: 0x31cdff00  andi        $t5, $t6, 0xFF00
    ctx->pc = 0x23ce50u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
    // 0x23ce54: 0x108602  srl         $s0, $s0, 24
    ctx->pc = 0x23ce54u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x23ce58: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x23ce58u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x23ce5c: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x23ce5cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x23ce60: 0x30e4ff00  andi        $a0, $a3, 0xFF00
    ctx->pc = 0x23ce60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x23ce64: 0x20f8018  mult        $s0, $s0, $t7
    ctx->pc = 0x23ce64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x23ce68: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x23ce68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x23ce6c: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x23ce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x23ce70: 0xd6a02  srl         $t5, $t5, 8
    ctx->pc = 0x23ce70u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 8));
    // 0x23ce74: 0x22f8818  mult        $s1, $s1, $t7
    ctx->pc = 0x23ce74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x23ce78: 0xa51018  mult        $v0, $a1, $a1
    ctx->pc = 0x23ce78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23ce7c: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x23ce7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x23ce80: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x23ce80u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x23ce84: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x23ce84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23ce88: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x23ce88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x23ce8c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x23ce8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23ce90: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x23ce90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x23ce94: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23ce98: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x23ce98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x23ce9c: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x23ce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x23cea0: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x23cea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
    // 0x23cea4: 0x30c67f80  andi        $a2, $a2, 0x7F80
    ctx->pc = 0x23cea4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32640);
    // 0x23cea8: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x23cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x23ceac: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x23ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x23ceb0: 0x63240  sll         $a2, $a2, 9
    ctx->pc = 0x23ceb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x23ceb4: 0x30847f80  andi        $a0, $a0, 0x7F80
    ctx->pc = 0x23ceb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32640);
    // 0x23ceb8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23cebc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23cebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23cec0: 0x30637f80  andi        $v1, $v1, 0x7F80
    ctx->pc = 0x23cec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32640);
    // 0x23cec4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23cec8: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x23cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x23cecc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23ced0: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x23ced0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
label_23ced4:
    // 0x23ced4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23ced4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ced8: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x23ced8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x23cedc: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x23cedcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x23cee0: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x23CEE0u;
    {
        const bool branch_taken_0x23cee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEE0u;
        // 0x23cee4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cee0) {
            ctx->pc = 0x23CDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cdf8;
        }
    }
    ctx->pc = 0x23CEE8u;
label_23cee8:
    // 0x23cee8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ceec: 0x314c021  addu        $t8, $t8, $s4
    ctx->pc = 0x23ceecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 20)));
    // 0x23cef0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23cef4: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x23cef4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x23cef8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23cef8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cefc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23cf00: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x23CF00u;
    {
        const bool branch_taken_0x23cf00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF00u;
        // 0x23cf04: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf00) {
            ctx->pc = 0x23CDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cdd8;
        }
    }
    ctx->pc = 0x23CF08u;
    // 0x23cf08: 0x10000425  b           . + 4 + (0x425 << 2)
    ctx->pc = 0x23CF08u;
    {
        const bool branch_taken_0x23cf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF08u;
        // 0x23cf0c: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf08) {
            ctx->pc = 0x23DFA0u;
            goto label_23dfa0;
        }
    }
    ctx->pc = 0x23CF10u;
label_23cf10:
    // 0x23cf10: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x23cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23cf14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23cf14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23cf18: 0x8ea50018  lw          $a1, 0x18($s5)
    ctx->pc = 0x23cf18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x23cf1c: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x23cf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23cf20: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x23cf20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23cf24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cf28: 0x92a30023  lbu         $v1, 0x23($s5)
    ctx->pc = 0x23cf28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x23cf2c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x23cf2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x23cf30: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x23cf30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x23cf34: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x23cf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x23cf38: 0x1466006e  bne         $v1, $a2, . + 4 + (0x6E << 2)
    ctx->pc = 0x23CF38u;
    {
        const bool branch_taken_0x23cf38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x23CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF38u;
        // 0x23cf3c: 0x82c821  addu        $t9, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf38) {
            ctx->pc = 0x23D0F4u;
            goto label_23d0f4;
        }
    }
    ctx->pc = 0x23CF40u;
    // 0x23cf40: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23cf44: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x23cf44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x23cf48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23cf48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23cf50: 0x1060015b  beqz        $v1, . + 4 + (0x15B << 2)
    ctx->pc = 0x23CF50u;
    {
        const bool branch_taken_0x23cf50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF50u;
        // 0x23cf54: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf50) {
            ctx->pc = 0x23D4C0u;
            goto label_23d4c0;
        }
    }
    ctx->pc = 0x23CF58u;
    // 0x23cf58: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x23cf58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x23cf5c: 0x0  nop
    ctx->pc = 0x23cf5cu;
    // NOP
label_23cf60:
    // 0x23cf60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cf64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23cf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23cf68: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23CF68u;
    {
        const bool branch_taken_0x23cf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF68u;
        // 0x23cf6c: 0x8fb20018  lw          $s2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf68) {
            ctx->pc = 0x23CFC4u;
            goto label_23cfc4;
        }
    }
    ctx->pc = 0x23CF70u;
    // 0x23cf70: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x23cf70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x23cf74: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x23cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x23cf78: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23cf7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23cf80: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x23cf80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23cf84: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x23cf84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x23cf88: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x23CF88u;
    {
        const bool branch_taken_0x23cf88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF88u;
        // 0x23cf8c: 0x308203e0  andi        $v0, $a0, 0x3E0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf88) {
            ctx->pc = 0x23CFB8u;
            goto label_23cfb8;
        }
    }
    ctx->pc = 0x23CF90u;
    // 0x23cf90: 0x30837c00  andi        $v1, $a0, 0x7C00
    ctx->pc = 0x23cf90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x23cf94: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x23cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x23cf98: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x23cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x23cf9c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x23cf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x23cfa0: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x23cfa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x23cfa4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23cfa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23cfa8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x23cfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23cfac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23cfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23cfb0: 0xaf030000  sw          $v1, 0x0($t8)
    ctx->pc = 0x23cfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
    // 0x23cfb4: 0x0  nop
    ctx->pc = 0x23cfb4u;
    // NOP
label_23cfb8:
    // 0x23cfb8: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x23cfb8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x23cfbc: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x23cfbcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x23cfc0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x23cfc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_23cfc4:
    // 0x23cfc4: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x23cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23cfc8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x23cfc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23cfcc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x23CFCCu;
    {
        const bool branch_taken_0x23cfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFCCu;
        // 0x23cfd0: 0x3a080  sll         $s4, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cfcc) {
            ctx->pc = 0x23D07Cu;
            goto label_23d07c;
        }
    }
    ctx->pc = 0x23CFD4u;
    // 0x23cfd4: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x23cfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_23cfd8:
    // 0x23cfd8: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x23cfd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x23cfdc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23cfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23cfe0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23cfe4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23cfe8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x23cfe8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23cfec: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x23cfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x23cff0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x23CFF0u;
    {
        const bool branch_taken_0x23cff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFF0u;
        // 0x23cff4: 0x304403e0  andi        $a0, $v0, 0x3E0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)992);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cff0) {
            ctx->pc = 0x23D020u;
            goto label_23d020;
        }
    }
    ctx->pc = 0x23CFF8u;
    // 0x23cff8: 0x30437c00  andi        $v1, $v0, 0x7C00
    ctx->pc = 0x23cff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x23cffc: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x23cffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x23d000: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x23d000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x23d004: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x23d004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x23d008: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23d008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23d00c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23d00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23d010: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23d010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23d014: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23d014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23d018: 0xaf030000  sw          $v1, 0x0($t8)
    ctx->pc = 0x23d018u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
    // 0x23d01c: 0x0  nop
    ctx->pc = 0x23d01cu;
    // NOP
label_23d020:
    // 0x23d020: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x23d020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x23d024: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x23d024u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x23d028: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23d028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23d02c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23d030: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x23d030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d034: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x23d034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x23d038: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x23D038u;
    {
        const bool branch_taken_0x23d038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D038u;
        // 0x23d03c: 0x27180004  addiu       $t8, $t8, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d038) {
            ctx->pc = 0x23D068u;
            goto label_23d068;
        }
    }
    ctx->pc = 0x23D040u;
    // 0x23d040: 0x304403e0  andi        $a0, $v0, 0x3E0
    ctx->pc = 0x23d040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)992);
    // 0x23d044: 0x30437c00  andi        $v1, $v0, 0x7C00
    ctx->pc = 0x23d044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x23d048: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x23d048u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x23d04c: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x23d04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x23d050: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x23d050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x23d054: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23d054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23d058: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23d058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23d05c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23d060: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23d060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23d064: 0xaf030000  sw          $v1, 0x0($t8)
    ctx->pc = 0x23d064u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
label_23d068:
    // 0x23d068: 0x2652fffe  addiu       $s2, $s2, -0x2
    ctx->pc = 0x23d068u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x23d06c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x23d06cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x23d070: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x23d070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23d074: 0x1040ffd8  beqz        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x23D074u;
    {
        const bool branch_taken_0x23d074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D074u;
        // 0x23d078: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d074) {
            ctx->pc = 0x23CFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cfd8;
        }
    }
    ctx->pc = 0x23D07Cu;
label_23d07c:
    // 0x23d07c: 0x1a400014  blez        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x23D07Cu;
    {
        const bool branch_taken_0x23d07c = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x23D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D07Cu;
        // 0x23d080: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d07c) {
            ctx->pc = 0x23D0D0u;
            goto label_23d0d0;
        }
    }
    ctx->pc = 0x23D084u;
    // 0x23d084: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x23d084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x23d088: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23d088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23d08c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23d090: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23d090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23d094: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x23d094u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d098: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x23d098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x23d09c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x23D09Cu;
    {
        const bool branch_taken_0x23d09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D09Cu;
        // 0x23d0a0: 0x308203e0  andi        $v0, $a0, 0x3E0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d09c) {
            ctx->pc = 0x23D0C8u;
            goto label_23d0c8;
        }
    }
    ctx->pc = 0x23D0A4u;
    // 0x23d0a4: 0x30837c00  andi        $v1, $a0, 0x7C00
    ctx->pc = 0x23d0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x23d0a8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x23d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x23d0ac: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x23d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x23d0b0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x23d0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x23d0b4: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x23d0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x23d0b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23d0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23d0bc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x23d0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23d0c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23d0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23d0c4: 0xaf030000  sw          $v1, 0x0($t8)
    ctx->pc = 0x23d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
label_23d0c8:
    // 0x23d0c8: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x23d0c8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x23d0cc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_23d0d0:
    // 0x23d0d0: 0x314c021  addu        $t8, $t8, $s4
    ctx->pc = 0x23d0d0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 20)));
    // 0x23d0d4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23d0d8: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x23d0d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x23d0dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23d0dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d0e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23d0e4: 0x1460ff9e  bnez        $v1, . + 4 + (-0x62 << 2)
    ctx->pc = 0x23D0E4u;
    {
        const bool branch_taken_0x23d0e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D0E4u;
        // 0x23d0e8: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d0e4) {
            ctx->pc = 0x23CF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cf60;
        }
    }
    ctx->pc = 0x23D0ECu;
    // 0x23d0ec: 0x100003ac  b           . + 4 + (0x3AC << 2)
    ctx->pc = 0x23D0ECu;
    {
        const bool branch_taken_0x23d0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D0ECu;
        // 0x23d0f0: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d0ec) {
            ctx->pc = 0x23DFA0u;
            goto label_23dfa0;
        }
    }
    ctx->pc = 0x23D0F4u;
label_23d0f4:
    // 0x23d0f4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23d0f8: 0x8eb30008  lw          $s3, 0x8($s5)
    ctx->pc = 0x23d0f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x23d0fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23d0fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d100: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23d100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23d104: 0x106000ee  beqz        $v1, . + 4 + (0xEE << 2)
    ctx->pc = 0x23D104u;
    {
        const bool branch_taken_0x23d104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D104u;
        // 0x23d108: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d104) {
            ctx->pc = 0x23D4C0u;
            goto label_23d4c0;
        }
    }
    ctx->pc = 0x23D10Cu;
    // 0x23d10c: 0x3c1e00ff  lui         $fp, 0xFF
    ctx->pc = 0x23d10cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)255 << 16));
label_23d110:
    // 0x23d110: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23d110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d114: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23d114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23d118: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x23D118u;
    {
        const bool branch_taken_0x23d118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D118u;
        // 0x23d11c: 0x8fb20018  lw          $s2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d118) {
            ctx->pc = 0x23D200u;
            goto label_23d200;
        }
    }
    ctx->pc = 0x23D120u;
    // 0x23d120: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x23d120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x23d124: 0x3c057f00  lui         $a1, 0x7F00
    ctx->pc = 0x23d124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32512 << 16));
    // 0x23d128: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x23d128u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x23d12c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d130: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x23d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x23d134: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x23d134u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d138: 0xac182b  sltu        $v1, $a1, $t4
    ctx->pc = 0x23d138u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x23d13c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D13Cu;
    {
        const bool branch_taken_0x23d13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d13c) {
            ctx->pc = 0x23D140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D13Cu;
            // 0x23d140: 0x8f080000  lw          $t0, 0x0($t8) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D150u;
            goto label_23d150;
        }
    }
    ctx->pc = 0x23D144u;
    // 0x23d144: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x23D144u;
    {
        const bool branch_taken_0x23d144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D144u;
        // 0x23d148: 0xaf0c0000  sw          $t4, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d144) {
            ctx->pc = 0x23D1F4u;
            goto label_23d1f4;
        }
    }
    ctx->pc = 0x23D14Cu;
    // 0x23d14c: 0x0  nop
    ctx->pc = 0x23d14cu;
    // NOP
label_23d150:
    // 0x23d150: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x23d150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x23d154: 0x1823024  and         $a2, $t4, $v0
    ctx->pc = 0x23d154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x23d158: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x23d158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23d15c: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x23d15cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x23d160: 0x1024824  and         $t1, $t0, $v0
    ctx->pc = 0x23d160u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x23d164: 0x665823  subu        $t3, $v1, $a2
    ctx->pc = 0x23d164u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x23d168: 0x11e5024  and         $t2, $t0, $fp
    ctx->pc = 0x23d168u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & GPR_U64(ctx, 30));
    // 0x23d16c: 0x19e2024  and         $a0, $t4, $fp
    ctx->pc = 0x23d16cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & GPR_U64(ctx, 30));
    // 0x23d170: 0x3107ff00  andi        $a3, $t0, 0xFF00
    ctx->pc = 0x23d170u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65280);
    // 0x23d174: 0x94e02  srl         $t1, $t1, 24
    ctx->pc = 0x23d174u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x23d178: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x23d178u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x23d17c: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x23d17cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x23d180: 0x3183ff00  andi        $v1, $t4, 0xFF00
    ctx->pc = 0x23d180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65280);
    // 0x23d184: 0x12b4818  mult        $t1, $t1, $t3
    ctx->pc = 0x23d184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x23d188: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x23d188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23d18c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x23d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x23d190: 0x73a02  srl         $a3, $a3, 8
    ctx->pc = 0x23d190u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x23d194: 0x14b5018  mult        $t2, $t2, $t3
    ctx->pc = 0x23d194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x23d198: 0xc61018  mult        $v0, $a2, $a2
    ctx->pc = 0x23d198u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23d19c: 0x318500ff  andi        $a1, $t4, 0xFF
    ctx->pc = 0x23d19cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x23d1a0: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x23d1a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x23d1a4: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x23d1a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23d1a8: 0xeb3818  mult        $a3, $a3, $t3
    ctx->pc = 0x23d1a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x23d1ac: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x23d1acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23d1b0: 0x10b4018  mult        $t0, $t0, $t3
    ctx->pc = 0x23d1b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x23d1b4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x23d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x23d1b8: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x23d1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x23d1bc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23d1c0: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x23d1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
    // 0x23d1c4: 0x30847f80  andi        $a0, $a0, 0x7F80
    ctx->pc = 0x23d1c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32640);
    // 0x23d1c8: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x23d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x23d1cc: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x23d1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x23d1d0: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x23d1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x23d1d4: 0x30637f80  andi        $v1, $v1, 0x7F80
    ctx->pc = 0x23d1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32640);
    // 0x23d1d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23d1dc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23d1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23d1e0: 0x30a57f80  andi        $a1, $a1, 0x7F80
    ctx->pc = 0x23d1e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32640);
    // 0x23d1e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23d1e8: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x23d1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x23d1ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23d1f0: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x23d1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
label_23d1f4:
    // 0x23d1f4: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x23d1f4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x23d1f8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x23d1f8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x23d1fc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x23d1fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_23d200:
    // 0x23d200: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x23d200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23d204: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x23d204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23d208: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x23D208u;
    {
        const bool branch_taken_0x23d208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D208u;
        // 0x23d20c: 0x3a080  sll         $s4, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d208) {
            ctx->pc = 0x23D3C4u;
            goto label_23d3c4;
        }
    }
    ctx->pc = 0x23D210u;
    // 0x23d210: 0x3c177f00  lui         $s7, 0x7F00
    ctx->pc = 0x23d210u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32512 << 16));
    // 0x23d214: 0x3c0bff00  lui         $t3, 0xFF00
    ctx->pc = 0x23d214u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65280 << 16));
    // 0x23d218: 0x24160080  addiu       $s6, $zero, 0x80
    ctx->pc = 0x23d218u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23d21c: 0x3c0900ff  lui         $t1, 0xFF
    ctx->pc = 0x23d21cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)255 << 16));
label_23d220:
    // 0x23d220: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x23d220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x23d224: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23d224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23d228: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d22c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x23d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x23d230: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x23d230u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d234: 0x2e7182b  sltu        $v1, $s7, $a3
    ctx->pc = 0x23d234u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x23d238: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D238u;
    {
        const bool branch_taken_0x23d238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d238) {
            ctx->pc = 0x23D23Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D238u;
            // 0x23d23c: 0x8f0e0000  lw          $t6, 0x0($t8) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D248u;
            goto label_23d248;
        }
    }
    ctx->pc = 0x23D240u;
    // 0x23d240: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x23D240u;
    {
        const bool branch_taken_0x23d240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D240u;
        // 0x23d244: 0xaf070000  sw          $a3, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d240) {
            ctx->pc = 0x23D2E4u;
            goto label_23d2e4;
        }
    }
    ctx->pc = 0x23D248u;
label_23d248:
    // 0x23d248: 0xeb2824  and         $a1, $a3, $t3
    ctx->pc = 0x23d248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x23d24c: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x23d24cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x23d250: 0xe93024  and         $a2, $a3, $t1
    ctx->pc = 0x23d250u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x23d254: 0x1cb8024  and         $s0, $t6, $t3
    ctx->pc = 0x23d254u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) & GPR_U64(ctx, 11));
    // 0x23d258: 0x1c98824  and         $s1, $t6, $t1
    ctx->pc = 0x23d258u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & GPR_U64(ctx, 9));
    // 0x23d25c: 0x2c57823  subu        $t7, $s6, $a1
    ctx->pc = 0x23d25cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x23d260: 0x31cdff00  andi        $t5, $t6, 0xFF00
    ctx->pc = 0x23d260u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
    // 0x23d264: 0x108602  srl         $s0, $s0, 24
    ctx->pc = 0x23d264u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x23d268: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x23d268u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x23d26c: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x23d26cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x23d270: 0x30e4ff00  andi        $a0, $a3, 0xFF00
    ctx->pc = 0x23d270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x23d274: 0x20f8018  mult        $s0, $s0, $t7
    ctx->pc = 0x23d274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x23d278: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x23d278u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x23d27c: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x23d27cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x23d280: 0xd6a02  srl         $t5, $t5, 8
    ctx->pc = 0x23d280u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 8));
    // 0x23d284: 0x22f8818  mult        $s1, $s1, $t7
    ctx->pc = 0x23d284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x23d288: 0xa51018  mult        $v0, $a1, $a1
    ctx->pc = 0x23d288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23d28c: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x23d28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x23d290: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x23d290u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x23d294: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x23d294u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23d298: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x23d298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x23d29c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x23d29cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23d2a0: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x23d2a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x23d2a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23d2a8: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x23d2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x23d2ac: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x23d2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x23d2b0: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x23d2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
    // 0x23d2b4: 0x30c67f80  andi        $a2, $a2, 0x7F80
    ctx->pc = 0x23d2b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32640);
    // 0x23d2b8: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x23d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x23d2bc: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x23d2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x23d2c0: 0x63240  sll         $a2, $a2, 9
    ctx->pc = 0x23d2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x23d2c4: 0x30847f80  andi        $a0, $a0, 0x7F80
    ctx->pc = 0x23d2c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32640);
    // 0x23d2c8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23d2cc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23d2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23d2d0: 0x30637f80  andi        $v1, $v1, 0x7F80
    ctx->pc = 0x23d2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32640);
    // 0x23d2d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23d2d8: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x23d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x23d2dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23d2e0: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x23d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
label_23d2e4:
    // 0x23d2e4: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x23d2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x23d2e8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x23d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x23d2ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d2f0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x23d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x23d2f4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x23d2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d2f8: 0x2e7182b  sltu        $v1, $s7, $a3
    ctx->pc = 0x23d2f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x23d2fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D2FCu;
    {
        const bool branch_taken_0x23d2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2FCu;
        // 0x23d300: 0x27180004  addiu       $t8, $t8, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d2fc) {
            ctx->pc = 0x23D310u;
            goto label_23d310;
        }
    }
    ctx->pc = 0x23D304u;
    // 0x23d304: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x23D304u;
    {
        const bool branch_taken_0x23d304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D304u;
        // 0x23d308: 0xaf070000  sw          $a3, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d304) {
            ctx->pc = 0x23D3B0u;
            goto label_23d3b0;
        }
    }
    ctx->pc = 0x23D30Cu;
    // 0x23d30c: 0x0  nop
    ctx->pc = 0x23d30cu;
    // NOP
label_23d310:
    // 0x23d310: 0x8f0e0000  lw          $t6, 0x0($t8)
    ctx->pc = 0x23d310u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x23d314: 0xeb2824  and         $a1, $a3, $t3
    ctx->pc = 0x23d314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x23d318: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x23d318u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x23d31c: 0xe93024  and         $a2, $a3, $t1
    ctx->pc = 0x23d31cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x23d320: 0x1cb8024  and         $s0, $t6, $t3
    ctx->pc = 0x23d320u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) & GPR_U64(ctx, 11));
    // 0x23d324: 0x1c98824  and         $s1, $t6, $t1
    ctx->pc = 0x23d324u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & GPR_U64(ctx, 9));
    // 0x23d328: 0x2c57823  subu        $t7, $s6, $a1
    ctx->pc = 0x23d328u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x23d32c: 0x31cdff00  andi        $t5, $t6, 0xFF00
    ctx->pc = 0x23d32cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
    // 0x23d330: 0x108602  srl         $s0, $s0, 24
    ctx->pc = 0x23d330u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x23d334: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x23d334u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x23d338: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x23d338u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x23d33c: 0x30e4ff00  andi        $a0, $a3, 0xFF00
    ctx->pc = 0x23d33cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x23d340: 0x20f8018  mult        $s0, $s0, $t7
    ctx->pc = 0x23d340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x23d344: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x23d344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x23d348: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x23d348u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x23d34c: 0xd6a02  srl         $t5, $t5, 8
    ctx->pc = 0x23d34cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 8));
    // 0x23d350: 0x22f8818  mult        $s1, $s1, $t7
    ctx->pc = 0x23d350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x23d354: 0xa51018  mult        $v0, $a1, $a1
    ctx->pc = 0x23d354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23d358: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x23d358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x23d35c: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x23d35cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x23d360: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x23d360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23d364: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x23d364u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x23d368: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x23d368u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23d36c: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x23d36cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x23d370: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23d370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23d374: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x23d374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x23d378: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x23d378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x23d37c: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x23d37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
    // 0x23d380: 0x30c67f80  andi        $a2, $a2, 0x7F80
    ctx->pc = 0x23d380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32640);
    // 0x23d384: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x23d384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x23d388: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x23d388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x23d38c: 0x63240  sll         $a2, $a2, 9
    ctx->pc = 0x23d38cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x23d390: 0x30847f80  andi        $a0, $a0, 0x7F80
    ctx->pc = 0x23d390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32640);
    // 0x23d394: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23d394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23d398: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23d398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23d39c: 0x30637f80  andi        $v1, $v1, 0x7F80
    ctx->pc = 0x23d39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32640);
    // 0x23d3a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23d3a4: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x23d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x23d3a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23d3ac: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x23d3acu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
label_23d3b0:
    // 0x23d3b0: 0x2652fffe  addiu       $s2, $s2, -0x2
    ctx->pc = 0x23d3b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x23d3b4: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x23d3b4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x23d3b8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x23d3b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23d3bc: 0x1040ff98  beqz        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x23D3BCu;
    {
        const bool branch_taken_0x23d3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3BCu;
        // 0x23d3c0: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3bc) {
            ctx->pc = 0x23D220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d220;
        }
    }
    ctx->pc = 0x23D3C4u;
label_23d3c4:
    // 0x23d3c4: 0x1a400037  blez        $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x23D3C4u;
    {
        const bool branch_taken_0x23d3c4 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x23D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3C4u;
        // 0x23d3c8: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3c4) {
            ctx->pc = 0x23D4A4u;
            goto label_23d4a4;
        }
    }
    ctx->pc = 0x23D3CCu;
    // 0x23d3cc: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x23d3ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x23d3d0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23d3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23d3d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d3d8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x23d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x23d3dc: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x23d3dcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d3e0: 0x3c027f00  lui         $v0, 0x7F00
    ctx->pc = 0x23d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32512 << 16));
    // 0x23d3e4: 0x4c182b  sltu        $v1, $v0, $t4
    ctx->pc = 0x23d3e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x23d3e8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D3E8u;
    {
        const bool branch_taken_0x23d3e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d3e8) {
            ctx->pc = 0x23D3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D3E8u;
            // 0x23d3ec: 0x8f080000  lw          $t0, 0x0($t8) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D3F8u;
            goto label_23d3f8;
        }
    }
    ctx->pc = 0x23D3F0u;
    // 0x23d3f0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x23D3F0u;
    {
        const bool branch_taken_0x23d3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3F0u;
        // 0x23d3f4: 0xaf0c0000  sw          $t4, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3f0) {
            ctx->pc = 0x23D49Cu;
            goto label_23d49c;
        }
    }
    ctx->pc = 0x23D3F8u;
label_23d3f8:
    // 0x23d3f8: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x23d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x23d3fc: 0x1833024  and         $a2, $t4, $v1
    ctx->pc = 0x23d3fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x23d400: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x23d400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23d404: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x23d404u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x23d408: 0x1034824  and         $t1, $t0, $v1
    ctx->pc = 0x23d408u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x23d40c: 0x11e5024  and         $t2, $t0, $fp
    ctx->pc = 0x23d40cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & GPR_U64(ctx, 30));
    // 0x23d410: 0x19e2024  and         $a0, $t4, $fp
    ctx->pc = 0x23d410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & GPR_U64(ctx, 30));
    // 0x23d414: 0xa65823  subu        $t3, $a1, $a2
    ctx->pc = 0x23d414u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x23d418: 0x3107ff00  andi        $a3, $t0, 0xFF00
    ctx->pc = 0x23d418u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65280);
    // 0x23d41c: 0x94e02  srl         $t1, $t1, 24
    ctx->pc = 0x23d41cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x23d420: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x23d420u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x23d424: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x23d424u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x23d428: 0x3183ff00  andi        $v1, $t4, 0xFF00
    ctx->pc = 0x23d428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65280);
    // 0x23d42c: 0x12b4818  mult        $t1, $t1, $t3
    ctx->pc = 0x23d42cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x23d430: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x23d430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23d434: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x23d434u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x23d438: 0x73a02  srl         $a3, $a3, 8
    ctx->pc = 0x23d438u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x23d43c: 0x14b5018  mult        $t2, $t2, $t3
    ctx->pc = 0x23d43cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x23d440: 0xc61018  mult        $v0, $a2, $a2
    ctx->pc = 0x23d440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23d444: 0x318500ff  andi        $a1, $t4, 0xFF
    ctx->pc = 0x23d444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x23d448: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x23d448u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x23d44c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x23d44cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23d450: 0xeb3818  mult        $a3, $a3, $t3
    ctx->pc = 0x23d450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x23d454: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x23d454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23d458: 0x10b4018  mult        $t0, $t0, $t3
    ctx->pc = 0x23d458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x23d45c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x23d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x23d460: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x23d460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x23d464: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23d464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23d468: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x23d468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
    // 0x23d46c: 0x30847f80  andi        $a0, $a0, 0x7F80
    ctx->pc = 0x23d46cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32640);
    // 0x23d470: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x23d470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x23d474: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x23d474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x23d478: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x23d478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x23d47c: 0x30637f80  andi        $v1, $v1, 0x7F80
    ctx->pc = 0x23d47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32640);
    // 0x23d480: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23d480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23d484: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23d484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23d488: 0x30a57f80  andi        $a1, $a1, 0x7F80
    ctx->pc = 0x23d488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32640);
    // 0x23d48c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23d490: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x23d490u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x23d494: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23d494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23d498: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x23d498u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
label_23d49c:
    // 0x23d49c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x23d49cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x23d4a0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_23d4a4:
    // 0x23d4a4: 0x314c021  addu        $t8, $t8, $s4
    ctx->pc = 0x23d4a4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 20)));
    // 0x23d4a8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23d4ac: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x23d4acu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x23d4b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23d4b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d4b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23d4b8: 0x1460ff15  bnez        $v1, . + 4 + (-0xEB << 2)
    ctx->pc = 0x23D4B8u;
    {
        const bool branch_taken_0x23d4b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4B8u;
        // 0x23d4bc: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d4b8) {
            ctx->pc = 0x23D110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d110;
        }
    }
    ctx->pc = 0x23D4C0u;
label_23d4c0:
    // 0x23d4c0: 0x100002b7  b           . + 4 + (0x2B7 << 2)
    ctx->pc = 0x23D4C0u;
    {
        const bool branch_taken_0x23d4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4C0u;
        // 0x23d4c4: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d4c0) {
            ctx->pc = 0x23DFA0u;
            goto label_23dfa0;
        }
    }
    ctx->pc = 0x23D4C8u;
label_23d4c8:
    // 0x23d4c8: 0x8d260018  lw          $a2, 0x18($t1)
    ctx->pc = 0x23d4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x23d4cc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23d4d0: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x23d4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23d4d4: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x23d4d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d4d8: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x23d4d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x23d4dc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23d4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d4e0: 0x1473818  mult        $a3, $t2, $a3
    ctx->pc = 0x23d4e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x23d4e4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23d4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23d4e8: 0x2084018  mult        $t0, $s0, $t0
    ctx->pc = 0x23d4e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x23d4ec: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x23d4ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23d4f0: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x23d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x23d4f4: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x23d4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23d4f8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x23d4f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d4fc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23d500: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23d500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23d504: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23d504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23d508: 0x48c821  addu        $t9, $v0, $t0
    ctx->pc = 0x23d508u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23d50c: 0x659821  addu        $s3, $v1, $a1
    ctx->pc = 0x23d50cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23d510: 0x112002a7  beqz        $t1, . + 4 + (0x2A7 << 2)
    ctx->pc = 0x23D510u;
    {
        const bool branch_taken_0x23d510 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D510u;
        // 0x23d514: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d510) {
            ctx->pc = 0x23DFB0u;
            goto label_23dfb0;
        }
    }
    ctx->pc = 0x23D518u;
    // 0x23d518: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23d518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d51c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x23d51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23d520: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d524: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x23d524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x23d528: 0x3a040  sll         $s4, $v1, 1
    ctx->pc = 0x23d528u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23d52c: 0x0  nop
    ctx->pc = 0x23d52cu;
    // NOP
label_23d530:
    // 0x23d530: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23d530u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23d534: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23d534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d538: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x23D538u;
    {
        const bool branch_taken_0x23d538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D538u;
        // 0x23d53c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d538) {
            ctx->pc = 0x23D644u;
            goto label_23d644;
        }
    }
    ctx->pc = 0x23D540u;
    // 0x23d540: 0x3c1e7f00  lui         $fp, 0x7F00
    ctx->pc = 0x23d540u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32512 << 16));
    // 0x23d544: 0x3c1700f8  lui         $s7, 0xF8
    ctx->pc = 0x23d544u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)248 << 16));
    // 0x23d548: 0x24160080  addiu       $s6, $zero, 0x80
    ctx->pc = 0x23d548u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23d54c: 0x3c1500ff  lui         $s5, 0xFF
    ctx->pc = 0x23d54cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)255 << 16));
label_23d550:
    // 0x23d550: 0x8e780000  lw          $t8, 0x0($s3)
    ctx->pc = 0x23d550u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23d554: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x23d554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x23d558: 0x3057824  and         $t7, $t8, $a1
    ctx->pc = 0x23d558u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & GPR_U64(ctx, 5));
    // 0x23d55c: 0x3cf102b  sltu        $v0, $fp, $t7
    ctx->pc = 0x23d55cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x23d560: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23D560u;
    {
        const bool branch_taken_0x23d560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D560u;
        // 0x23d564: 0x3304f800  andi        $a0, $t8, 0xF800 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)63488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d560) {
            ctx->pc = 0x23D590u;
            goto label_23d590;
        }
    }
    ctx->pc = 0x23D568u;
    // 0x23d568: 0x3171824  and         $v1, $t8, $s7
    ctx->pc = 0x23d568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & GPR_U64(ctx, 23));
    // 0x23d56c: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x23d56cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x23d570: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x23d570u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x23d574: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x23d574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x23d578: 0x330200f8  andi        $v0, $t8, 0xF8
    ctx->pc = 0x23d578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)248);
    // 0x23d57c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23d57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23d580: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x23d580u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x23d584: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x23D584u;
    {
        const bool branch_taken_0x23d584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D584u;
        // 0x23d588: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d584) {
            ctx->pc = 0x23D62Cu;
            goto label_23d62c;
        }
    }
    ctx->pc = 0x23D58Cu;
    // 0x23d58c: 0x0  nop
    ctx->pc = 0x23d58cu;
    // NOP
label_23d590:
    // 0x23d590: 0x972c0000  lhu         $t4, 0x0($t9)
    ctx->pc = 0x23d590u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x23d594: 0xf7e02  srl         $t7, $t7, 24
    ctx->pc = 0x23d594u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 24));
    // 0x23d598: 0x2cf8823  subu        $s1, $s6, $t7
    ctx->pc = 0x23d598u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 15)));
    // 0x23d59c: 0x3156824  and         $t5, $t8, $s5
    ctx->pc = 0x23d59cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & GPR_U64(ctx, 21));
    // 0x23d5a0: 0x318b8000  andi        $t3, $t4, 0x8000
    ctx->pc = 0x23d5a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32768);
    // 0x23d5a4: 0x31907c00  andi        $s0, $t4, 0x7C00
    ctx->pc = 0x23d5a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31744);
    // 0x23d5a8: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x23d5a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x23d5ac: 0x318e03e0  andi        $t6, $t4, 0x3E0
    ctx->pc = 0x23d5acu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)992);
    // 0x23d5b0: 0x3304ff00  andi        $a0, $t8, 0xFF00
    ctx->pc = 0x23d5b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65280);
    // 0x23d5b4: 0x1715818  mult        $t3, $t3, $s1
    ctx->pc = 0x23d5b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x23d5b8: 0x1ef1818  mult        $v1, $t7, $t7
    ctx->pc = 0x23d5b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23d5bc: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x23d5bcu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x23d5c0: 0x1081c2  srl         $s0, $s0, 7
    ctx->pc = 0x23d5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 7));
    // 0x23d5c4: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x23d5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x23d5c8: 0xe7082  srl         $t6, $t6, 2
    ctx->pc = 0x23d5c8u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
    // 0x23d5cc: 0x318c001f  andi        $t4, $t4, 0x1F
    ctx->pc = 0x23d5ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31);
    // 0x23d5d0: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x23d5d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x23d5d4: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x23d5d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x23d5d8: 0x330200ff  andi        $v0, $t8, 0xFF
    ctx->pc = 0x23d5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
    // 0x23d5dc: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x23d5dcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x23d5e0: 0x8f2018  mult        $a0, $a0, $t7
    ctx->pc = 0x23d5e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23d5e4: 0x1d17018  mult        $t6, $t6, $s1
    ctx->pc = 0x23d5e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x23d5e8: 0x256b2000  addiu       $t3, $t3, 0x2000
    ctx->pc = 0x23d5e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8192));
    // 0x23d5ec: 0x4f1018  mult        $v0, $v0, $t7
    ctx->pc = 0x23d5ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23d5f0: 0x1916018  mult        $t4, $t4, $s1
    ctx->pc = 0x23d5f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x23d5f4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x23d5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x23d5f8: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x23d5f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x23d5fc: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x23d5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x23d600: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x23d600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x23d604: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23d604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23d608: 0x31ad7c00  andi        $t5, $t5, 0x7C00
    ctx->pc = 0x23d608u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)31744);
    // 0x23d60c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x23d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x23d610: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x23d610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x23d614: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x23d614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x23d618: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x23d618u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x23d61c: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x23d61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x23d620: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23d620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23d624: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x23d624u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x23d628: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23d628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23d62c:
    // 0x23d62c: 0xa7230000  sh          $v1, 0x0($t9)
    ctx->pc = 0x23d62cu;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x23d630: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23d630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d634: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x23d634u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x23d638: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x23d638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x23d63c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x23D63Cu;
    {
        const bool branch_taken_0x23d63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D63Cu;
        // 0x23d640: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d63c) {
            ctx->pc = 0x23D550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d550;
        }
    }
    ctx->pc = 0x23D644u;
label_23d644:
    // 0x23d644: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x23d644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23d648: 0x334c821  addu        $t9, $t9, $s4
    ctx->pc = 0x23d648u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 20)));
    // 0x23d64c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23d650: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x23d650u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x23d654: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23d654u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d658: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23d658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23d65c: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x23D65Cu;
    {
        const bool branch_taken_0x23d65c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D65Cu;
        // 0x23d660: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d65c) {
            ctx->pc = 0x23D530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d530;
        }
    }
    ctx->pc = 0x23D664u;
    // 0x23d664: 0x10000253  b           . + 4 + (0x253 << 2)
    ctx->pc = 0x23D664u;
    {
        const bool branch_taken_0x23d664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D664u;
        // 0x23d668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d664) {
            ctx->pc = 0x23DFB4u;
            goto label_23dfb4;
        }
    }
    ctx->pc = 0x23D66Cu;
label_23d66c:
    // 0x23d66c: 0x8d260018  lw          $a2, 0x18($t1)
    ctx->pc = 0x23d66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x23d670: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23d670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23d674: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x23d674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23d678: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x23d678u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d67c: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x23d67cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x23d680: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23d680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d684: 0x1473818  mult        $a3, $t2, $a3
    ctx->pc = 0x23d684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x23d688: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23d688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23d68c: 0x2084018  mult        $t0, $s0, $t0
    ctx->pc = 0x23d68cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x23d690: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x23d690u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23d694: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x23d694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x23d698: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x23d698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23d69c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x23d69cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d6a0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23d6a4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23d6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23d6a8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23d6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23d6ac: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x23d6acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23d6b0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x23d6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23d6b4: 0x1120023e  beqz        $t1, . + 4 + (0x23E << 2)
    ctx->pc = 0x23D6B4u;
    {
        const bool branch_taken_0x23d6b4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6B4u;
        // 0x23d6b8: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d6b4) {
            ctx->pc = 0x23DFB0u;
            goto label_23dfb0;
        }
    }
    ctx->pc = 0x23D6BCu;
    // 0x23d6bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d6c0: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x23d6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23d6c4: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x23d6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23d6c8: 0x3a040  sll         $s4, $v1, 1
    ctx->pc = 0x23d6c8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23d6cc: 0x0  nop
    ctx->pc = 0x23d6ccu;
    // NOP
label_23d6d0:
    // 0x23d6d0: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23d6d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23d6d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23d6d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d6d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23D6D8u;
    {
        const bool branch_taken_0x23d6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6D8u;
        // 0x23d6dc: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d6d8) {
            ctx->pc = 0x23D704u;
            goto label_23d704;
        }
    }
    ctx->pc = 0x23D6E0u;
label_23d6e0:
    // 0x23d6e0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x23d6e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d6e4: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x23d6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x23d6e8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23D6E8u;
    {
        const bool branch_taken_0x23d6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d6e8) {
            ctx->pc = 0x23D6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D6E8u;
            // 0x23d6ec: 0xa5030000  sh          $v1, 0x0($t0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D6F0u;
            goto label_23d6f0;
        }
    }
    ctx->pc = 0x23D6F0u;
label_23d6f0:
    // 0x23d6f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23d6f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d6f4: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x23d6f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x23d6f8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x23d6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x23d6fc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23D6FCu;
    {
        const bool branch_taken_0x23d6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6FCu;
        // 0x23d700: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d6fc) {
            ctx->pc = 0x23D6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d6e0;
        }
    }
    ctx->pc = 0x23D704u;
label_23d704:
    // 0x23d704: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23d704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23d708: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x23d708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x23d70c: 0x1144021  addu        $t0, $t0, $s4
    ctx->pc = 0x23d70cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
    // 0x23d710: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23d710u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d714: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23d714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23d718: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x23D718u;
    {
        const bool branch_taken_0x23d718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D718u;
        // 0x23d71c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d718) {
            ctx->pc = 0x23D6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d6d0;
        }
    }
    ctx->pc = 0x23D720u;
    // 0x23d720: 0x10000224  b           . + 4 + (0x224 << 2)
    ctx->pc = 0x23D720u;
    {
        const bool branch_taken_0x23d720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D720u;
        // 0x23d724: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d720) {
            ctx->pc = 0x23DFB4u;
            goto label_23dfb4;
        }
    }
    ctx->pc = 0x23D728u;
label_23d728:
    // 0x23d728: 0x92a20022  lbu         $v0, 0x22($s5)
    ctx->pc = 0x23d728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 34)));
    // 0x23d72c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x23d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x23d730: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23d730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23d734: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D734u;
    {
        const bool branch_taken_0x23d734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D734u;
        // 0x23d738: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d734) {
            ctx->pc = 0x23D74Cu;
            goto label_23d74c;
        }
    }
    ctx->pc = 0x23D73Cu;
    // 0x23d73c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23d73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23d740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d744: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x23D744u;
    SET_GPR_U32(ctx, 31, 0x23D74Cu);
    ctx->pc = 0x23D748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D744u;
    // 0x23d748: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x23D744u, 0x23D74Cu)) {
        return;
    }
    ctx->pc = 0x23D74Cu;
label_23d74c:
    // 0x23d74c: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x23d74cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x23d750: 0x8cc63f30  lw          $a2, 0x3F30($a2)
    ctx->pc = 0x23d750u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23d754: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x23d754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23d758: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x23d758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23d75c: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x23d75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x23d760: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23d760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d764: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x23d764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23d768: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x23d768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x23d76c: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x23d76cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23d770: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x23d770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x23d774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23d774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23d778: 0x14a70098  bne         $a1, $a3, . + 4 + (0x98 << 2)
    ctx->pc = 0x23D778u;
    {
        const bool branch_taken_0x23d778 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x23D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D778u;
        // 0x23d77c: 0x44c821  addu        $t9, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d778) {
            ctx->pc = 0x23D9DCu;
            goto label_23d9dc;
        }
    }
    ctx->pc = 0x23D780u;
    // 0x23d780: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x23d780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23d784: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23d784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d788: 0x8ea50018  lw          $a1, 0x18($s5)
    ctx->pc = 0x23d788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x23d78c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23d78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d790: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x23d790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23d794: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x23d794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23d798: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x23d798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23d79c: 0x92a20023  lbu         $v0, 0x23($s5)
    ctx->pc = 0x23d79cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x23d7a0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23d7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23d7a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23d7a8: 0x1446002a  bne         $v0, $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x23D7A8u;
    {
        const bool branch_taken_0x23d7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x23D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7A8u;
        // 0x23d7ac: 0x649821  addu        $s3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d7a8) {
            ctx->pc = 0x23D854u;
            goto label_23d854;
        }
    }
    ctx->pc = 0x23D7B0u;
    // 0x23d7b0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23d7b4: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x23d7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x23d7b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23d7b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d7bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23d7c0: 0x106001f6  beqz        $v1, . + 4 + (0x1F6 << 2)
    ctx->pc = 0x23D7C0u;
    {
        const bool branch_taken_0x23d7c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7C0u;
        // 0x23d7c4: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d7c0) {
            ctx->pc = 0x23DF9Cu;
            goto label_23df9c;
        }
    }
    ctx->pc = 0x23D7C8u;
    // 0x23d7c8: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x23d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23d7cc: 0x2a040  sll         $s4, $v0, 1
    ctx->pc = 0x23d7ccu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_23d7d0:
    // 0x23d7d0: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23d7d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23d7d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23d7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d7d8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x23D7D8u;
    {
        const bool branch_taken_0x23d7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7D8u;
        // 0x23d7dc: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d7d8) {
            ctx->pc = 0x23D82Cu;
            goto label_23d82c;
        }
    }
    ctx->pc = 0x23D7E0u;
label_23d7e0:
    // 0x23d7e0: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x23d7e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23d7e4: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x23d7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23d7e8: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x23d7e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23d7ec: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x23d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x23d7f0: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x23d7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x23d7f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23d7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23d7f8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23d7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23d7fc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23d7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x23d800: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23d800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23d804: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23d804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23d808: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x23d808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d80c: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x23d80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x23d810: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23D810u;
    {
        const bool branch_taken_0x23d810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d810) {
            ctx->pc = 0x23D814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D810u;
            // 0x23d814: 0xa7220000  sh          $v0, 0x0($t9) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D818u;
            goto label_23d818;
        }
    }
    ctx->pc = 0x23D818u;
label_23d818:
    // 0x23d818: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23d818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d81c: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x23d81cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x23d820: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23d820u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x23d824: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x23D824u;
    {
        const bool branch_taken_0x23d824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D824u;
        // 0x23d828: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d824) {
            ctx->pc = 0x23D7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d7e0;
        }
    }
    ctx->pc = 0x23D82Cu;
label_23d82c:
    // 0x23d82c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23d82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d830: 0x334c821  addu        $t9, $t9, $s4
    ctx->pc = 0x23d830u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 20)));
    // 0x23d834: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23d834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23d838: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x23d838u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x23d83c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23d83cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d840: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23d840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23d844: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x23D844u;
    {
        const bool branch_taken_0x23d844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D844u;
        // 0x23d848: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d844) {
            ctx->pc = 0x23D7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d7d0;
        }
    }
    ctx->pc = 0x23D84Cu;
    // 0x23d84c: 0x100001d4  b           . + 4 + (0x1D4 << 2)
    ctx->pc = 0x23D84Cu;
    {
        const bool branch_taken_0x23d84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D84Cu;
        // 0x23d850: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d84c) {
            ctx->pc = 0x23DFA0u;
            goto label_23dfa0;
        }
    }
    ctx->pc = 0x23D854u;
label_23d854:
    // 0x23d854: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23d854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23d858: 0x8eb60008  lw          $s6, 0x8($s5)
    ctx->pc = 0x23d858u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x23d85c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23d85cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d860: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23d860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23d864: 0x106001cd  beqz        $v1, . + 4 + (0x1CD << 2)
    ctx->pc = 0x23D864u;
    {
        const bool branch_taken_0x23d864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D864u;
        // 0x23d868: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d864) {
            ctx->pc = 0x23DF9Cu;
            goto label_23df9c;
        }
    }
    ctx->pc = 0x23D86Cu;
    // 0x23d86c: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x23d86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23d870: 0x5a040  sll         $s4, $a1, 1
    ctx->pc = 0x23d870u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x23d874: 0x0  nop
    ctx->pc = 0x23d874u;
    // NOP
label_23d878:
    // 0x23d878: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23d878u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23d87c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23d87cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d880: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x23D880u;
    {
        const bool branch_taken_0x23d880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D880u;
        // 0x23d884: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d880) {
            ctx->pc = 0x23D9B4u;
            goto label_23d9b4;
        }
    }
    ctx->pc = 0x23D888u;
    // 0x23d888: 0x241e0080  addiu       $fp, $zero, 0x80
    ctx->pc = 0x23d888u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23d88c: 0x3c1700ff  lui         $s7, 0xFF
    ctx->pc = 0x23d88cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)255 << 16));
label_23d890:
    // 0x23d890: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x23d890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23d894: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x23d894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23d898: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x23d898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23d89c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x23d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x23d8a0: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x23d8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x23d8a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23d8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23d8a8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23d8ac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23d8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x23d8b0: 0x3c037f00  lui         $v1, 0x7F00
    ctx->pc = 0x23d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32512 << 16));
    // 0x23d8b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d8b8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x23d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x23d8bc: 0x8c580000  lw          $t8, 0x0($v0)
    ctx->pc = 0x23d8bcu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d8c0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x23d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x23d8c4: 0x3027824  and         $t7, $t8, $v0
    ctx->pc = 0x23d8c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x23d8c8: 0x6f102b  sltu        $v0, $v1, $t7
    ctx->pc = 0x23d8c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x23d8cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23D8CCu;
    {
        const bool branch_taken_0x23d8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8CCu;
        // 0x23d8d0: 0x3304f800  andi        $a0, $t8, 0xF800 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)63488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d8cc) {
            ctx->pc = 0x23D900u;
            goto label_23d900;
        }
    }
    ctx->pc = 0x23D8D4u;
    // 0x23d8d4: 0x3c0500f8  lui         $a1, 0xF8
    ctx->pc = 0x23d8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)248 << 16));
    // 0x23d8d8: 0x3051824  and         $v1, $t8, $a1
    ctx->pc = 0x23d8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & GPR_U64(ctx, 5));
    // 0x23d8dc: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x23d8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x23d8e0: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x23d8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x23d8e4: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x23d8e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x23d8e8: 0x330200f8  andi        $v0, $t8, 0xF8
    ctx->pc = 0x23d8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)248);
    // 0x23d8ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23d8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23d8f0: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x23d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x23d8f4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x23D8F4u;
    {
        const bool branch_taken_0x23d8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8F4u;
        // 0x23d8f8: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d8f4) {
            ctx->pc = 0x23D99Cu;
            goto label_23d99c;
        }
    }
    ctx->pc = 0x23D8FCu;
    // 0x23d8fc: 0x0  nop
    ctx->pc = 0x23d8fcu;
    // NOP
label_23d900:
    // 0x23d900: 0x972c0000  lhu         $t4, 0x0($t9)
    ctx->pc = 0x23d900u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x23d904: 0xf7e02  srl         $t7, $t7, 24
    ctx->pc = 0x23d904u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 24));
    // 0x23d908: 0x3cf8823  subu        $s1, $fp, $t7
    ctx->pc = 0x23d908u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 15)));
    // 0x23d90c: 0x3176824  and         $t5, $t8, $s7
    ctx->pc = 0x23d90cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & GPR_U64(ctx, 23));
    // 0x23d910: 0x318b8000  andi        $t3, $t4, 0x8000
    ctx->pc = 0x23d910u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32768);
    // 0x23d914: 0x31907c00  andi        $s0, $t4, 0x7C00
    ctx->pc = 0x23d914u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31744);
    // 0x23d918: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x23d918u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x23d91c: 0x318e03e0  andi        $t6, $t4, 0x3E0
    ctx->pc = 0x23d91cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)992);
    // 0x23d920: 0x3304ff00  andi        $a0, $t8, 0xFF00
    ctx->pc = 0x23d920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65280);
    // 0x23d924: 0x1715818  mult        $t3, $t3, $s1
    ctx->pc = 0x23d924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x23d928: 0x1ef1818  mult        $v1, $t7, $t7
    ctx->pc = 0x23d928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23d92c: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x23d92cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x23d930: 0x1081c2  srl         $s0, $s0, 7
    ctx->pc = 0x23d930u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 7));
    // 0x23d934: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x23d934u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x23d938: 0xe7082  srl         $t6, $t6, 2
    ctx->pc = 0x23d938u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
    // 0x23d93c: 0x318c001f  andi        $t4, $t4, 0x1F
    ctx->pc = 0x23d93cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31);
    // 0x23d940: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x23d940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x23d944: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x23d944u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x23d948: 0x330200ff  andi        $v0, $t8, 0xFF
    ctx->pc = 0x23d948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
    // 0x23d94c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x23d94cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x23d950: 0x8f2018  mult        $a0, $a0, $t7
    ctx->pc = 0x23d950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23d954: 0x1d17018  mult        $t6, $t6, $s1
    ctx->pc = 0x23d954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x23d958: 0x256b2000  addiu       $t3, $t3, 0x2000
    ctx->pc = 0x23d958u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8192));
    // 0x23d95c: 0x4f1018  mult        $v0, $v0, $t7
    ctx->pc = 0x23d95cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23d960: 0x1916018  mult        $t4, $t4, $s1
    ctx->pc = 0x23d960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x23d964: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x23d964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x23d968: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x23d968u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x23d96c: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x23d96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x23d970: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x23d970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x23d974: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23d974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23d978: 0x31ad7c00  andi        $t5, $t5, 0x7C00
    ctx->pc = 0x23d978u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)31744);
    // 0x23d97c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x23d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x23d980: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x23d980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x23d984: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x23d984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x23d988: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x23d988u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x23d98c: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x23d98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x23d990: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23d990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23d994: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x23d994u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x23d998: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23d998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23d99c:
    // 0x23d99c: 0xa7230000  sh          $v1, 0x0($t9)
    ctx->pc = 0x23d99cu;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x23d9a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23d9a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d9a4: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x23d9a4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x23d9a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23d9a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x23d9ac: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x23D9ACu;
    {
        const bool branch_taken_0x23d9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9ACu;
        // 0x23d9b0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9ac) {
            ctx->pc = 0x23D890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d890;
        }
    }
    ctx->pc = 0x23D9B4u;
label_23d9b4:
    // 0x23d9b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d9b8: 0x334c821  addu        $t9, $t9, $s4
    ctx->pc = 0x23d9b8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 20)));
    // 0x23d9bc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23d9c0: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x23d9c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x23d9c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23d9c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d9c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23d9cc: 0x1460ffaa  bnez        $v1, . + 4 + (-0x56 << 2)
    ctx->pc = 0x23D9CCu;
    {
        const bool branch_taken_0x23d9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9CCu;
        // 0x23d9d0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9cc) {
            ctx->pc = 0x23D878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d878;
        }
    }
    ctx->pc = 0x23D9D4u;
    // 0x23d9d4: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x23D9D4u;
    {
        const bool branch_taken_0x23d9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9D4u;
        // 0x23d9d8: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9d4) {
            ctx->pc = 0x23DFA0u;
            goto label_23dfa0;
        }
    }
    ctx->pc = 0x23D9DCu;
label_23d9dc:
    // 0x23d9dc: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x23d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23d9e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23d9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d9e4: 0x8ea50018  lw          $a1, 0x18($s5)
    ctx->pc = 0x23d9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x23d9e8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x23d9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23d9ec: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x23d9ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23d9f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d9f4: 0x92a30023  lbu         $v1, 0x23($s5)
    ctx->pc = 0x23d9f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x23d9f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x23d9f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x23d9fc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x23d9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x23da00: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x23da00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x23da04: 0x14660049  bne         $v1, $a2, . + 4 + (0x49 << 2)
    ctx->pc = 0x23DA04u;
    {
        const bool branch_taken_0x23da04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x23DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA04u;
        // 0x23da08: 0x829821  addu        $s3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da04) {
            ctx->pc = 0x23DB2Cu;
            goto label_23db2c;
        }
    }
    ctx->pc = 0x23DA0Cu;
    // 0x23da0c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23da10: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x23da10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x23da14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23da14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23da18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23da1c: 0x1060015f  beqz        $v1, . + 4 + (0x15F << 2)
    ctx->pc = 0x23DA1Cu;
    {
        const bool branch_taken_0x23da1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA1Cu;
        // 0x23da20: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da1c) {
            ctx->pc = 0x23DF9Cu;
            goto label_23df9c;
        }
    }
    ctx->pc = 0x23DA24u;
    // 0x23da24: 0x0  nop
    ctx->pc = 0x23da24u;
    // NOP
label_23da28:
    // 0x23da28: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23da2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23da2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23da30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23DA30u;
    {
        const bool branch_taken_0x23da30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA30u;
        // 0x23da34: 0x8fb20018  lw          $s2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da30) {
            ctx->pc = 0x23DA64u;
            goto label_23da64;
        }
    }
    ctx->pc = 0x23DA38u;
    // 0x23da38: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x23da38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23da3c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x23da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x23da40: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23da40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23da44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23da44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23da48: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x23da48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23da4c: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x23da4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x23da50: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23DA50u;
    {
        const bool branch_taken_0x23da50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23da50) {
            ctx->pc = 0x23DA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DA50u;
            // 0x23da54: 0xa7220000  sh          $v0, 0x0($t9) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DA58u;
            goto label_23da58;
        }
    }
    ctx->pc = 0x23DA58u;
label_23da58:
    // 0x23da58: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x23da58u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x23da5c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23da5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x23da60: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x23da60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_23da64:
    // 0x23da64: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x23da64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23da68: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x23da68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23da6c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x23DA6Cu;
    {
        const bool branch_taken_0x23da6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA6Cu;
        // 0x23da70: 0x5a040  sll         $s4, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da6c) {
            ctx->pc = 0x23DAD4u;
            goto label_23dad4;
        }
    }
    ctx->pc = 0x23DA74u;
    // 0x23da74: 0x0  nop
    ctx->pc = 0x23da74u;
    // NOP
label_23da78:
    // 0x23da78: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x23da78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23da7c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23da7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23da80: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23da80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23da84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23da84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23da88: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x23da88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23da8c: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x23da8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x23da90: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23DA90u;
    {
        const bool branch_taken_0x23da90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23da90) {
            ctx->pc = 0x23DA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DA90u;
            // 0x23da94: 0xa7220000  sh          $v0, 0x0($t9) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DA98u;
            goto label_23da98;
        }
    }
    ctx->pc = 0x23DA98u;
label_23da98:
    // 0x23da98: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x23da98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23da9c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x23da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x23daa0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23daa4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23daa8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x23daa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23daac: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x23daacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x23dab0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23DAB0u;
    {
        const bool branch_taken_0x23dab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAB0u;
        // 0x23dab4: 0x27390002  addiu       $t9, $t9, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dab0) {
            ctx->pc = 0x23DAC0u;
            goto label_23dac0;
        }
    }
    ctx->pc = 0x23DAB8u;
    // 0x23dab8: 0xa7220000  sh          $v0, 0x0($t9)
    ctx->pc = 0x23dab8u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x23dabc: 0x0  nop
    ctx->pc = 0x23dabcu;
    // NOP
label_23dac0:
    // 0x23dac0: 0x2652fffe  addiu       $s2, $s2, -0x2
    ctx->pc = 0x23dac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x23dac4: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x23dac4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x23dac8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x23dac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23dacc: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x23DACCu;
    {
        const bool branch_taken_0x23dacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DACCu;
        // 0x23dad0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dacc) {
            ctx->pc = 0x23DA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23da78;
        }
    }
    ctx->pc = 0x23DAD4u;
label_23dad4:
    // 0x23dad4: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x23DAD4u;
    {
        const bool branch_taken_0x23dad4 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x23DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAD4u;
        // 0x23dad8: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dad4) {
            ctx->pc = 0x23DB08u;
            goto label_23db08;
        }
    }
    ctx->pc = 0x23DADCu;
    // 0x23dadc: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x23dadcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23dae0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23dae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23dae4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23dae8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23daec: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x23daecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23daf0: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x23daf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x23daf4: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x23DAF4u;
    {
        const bool branch_taken_0x23daf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23daf4) {
            ctx->pc = 0x23DAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DAF4u;
            // 0x23daf8: 0xa7220000  sh          $v0, 0x0($t9) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DB00u;
            goto label_23db00;
        }
    }
    ctx->pc = 0x23DAFCu;
    // 0x23dafc: 0x0  nop
    ctx->pc = 0x23dafcu;
    // NOP
label_23db00:
    // 0x23db00: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x23db00u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x23db04: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23db04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_23db08:
    // 0x23db08: 0x334c821  addu        $t9, $t9, $s4
    ctx->pc = 0x23db08u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 20)));
    // 0x23db0c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23db10: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x23db10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x23db14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23db14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23db18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23db18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23db1c: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x23DB1Cu;
    {
        const bool branch_taken_0x23db1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB1Cu;
        // 0x23db20: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db1c) {
            ctx->pc = 0x23DA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23da28;
        }
    }
    ctx->pc = 0x23DB24u;
    // 0x23db24: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x23DB24u;
    {
        const bool branch_taken_0x23db24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB24u;
        // 0x23db28: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db24) {
            ctx->pc = 0x23DFA0u;
            goto label_23dfa0;
        }
    }
    ctx->pc = 0x23DB2Cu;
label_23db2c:
    // 0x23db2c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23db30: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x23DB30u;
    {
        const bool branch_taken_0x23db30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB30u;
        // 0x23db34: 0x8eb60008  lw          $s6, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db30) {
            ctx->pc = 0x23DF8Cu;
            goto label_23df8c;
        }
    }
    ctx->pc = 0x23DB38u;
label_23db38:
    // 0x23db38: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23db38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23db3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23db3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23db40: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x23DB40u;
    {
        const bool branch_taken_0x23db40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB40u;
        // 0x23db44: 0x8fb20018  lw          $s2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db40) {
            ctx->pc = 0x23DC54u;
            goto label_23dc54;
        }
    }
    ctx->pc = 0x23DB48u;
    // 0x23db48: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x23db48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23db4c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x23db4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x23db50: 0x3c037f00  lui         $v1, 0x7F00
    ctx->pc = 0x23db50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32512 << 16));
    // 0x23db54: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x23db54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x23db58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23db58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23db5c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x23db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x23db60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23db60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23db64: 0x854824  and         $t1, $a0, $a1
    ctx->pc = 0x23db64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x23db68: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x23db68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x23db6c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23DB6Cu;
    {
        const bool branch_taken_0x23db6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB6Cu;
        // 0x23db70: 0x3082f800  andi        $v0, $a0, 0xF800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db6c) {
            ctx->pc = 0x23DBA0u;
            goto label_23dba0;
        }
    }
    ctx->pc = 0x23DB74u;
    // 0x23db74: 0x3c0500f8  lui         $a1, 0xF8
    ctx->pc = 0x23db74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)248 << 16));
    // 0x23db78: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x23db78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x23db7c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x23db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x23db80: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x23db80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x23db84: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x23db84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x23db88: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x23db88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x23db8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23db8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23db90: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x23db90u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x23db94: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23db94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23db98: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x23DB98u;
    {
        const bool branch_taken_0x23db98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB98u;
        // 0x23db9c: 0xa7230000  sh          $v1, 0x0($t9) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db98) {
            ctx->pc = 0x23DC48u;
            goto label_23dc48;
        }
    }
    ctx->pc = 0x23DBA0u;
label_23dba0:
    // 0x23dba0: 0x97250000  lhu         $a1, 0x0($t9)
    ctx->pc = 0x23dba0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x23dba4: 0x94e02  srl         $t1, $t1, 24
    ctx->pc = 0x23dba4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x23dba8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x23dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23dbac: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x23dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x23dbb0: 0x30a68000  andi        $a2, $a1, 0x8000
    ctx->pc = 0x23dbb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x23dbb4: 0x498823  subu        $s1, $v0, $t1
    ctx->pc = 0x23dbb4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x23dbb8: 0x834024  and         $t0, $a0, $v1
    ctx->pc = 0x23dbb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x23dbbc: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x23dbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x23dbc0: 0x30aa7c00  andi        $t2, $a1, 0x7C00
    ctx->pc = 0x23dbc0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31744);
    // 0x23dbc4: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x23dbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x23dbc8: 0x30a703e0  andi        $a3, $a1, 0x3E0
    ctx->pc = 0x23dbc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)992);
    // 0x23dbcc: 0xd13018  mult        $a2, $a2, $s1
    ctx->pc = 0x23dbccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x23dbd0: 0x1291018  mult        $v0, $t1, $t1
    ctx->pc = 0x23dbd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23dbd4: 0x84402  srl         $t0, $t0, 16
    ctx->pc = 0x23dbd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x23dbd8: 0xa51c2  srl         $t2, $t2, 7
    ctx->pc = 0x23dbd8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 7));
    // 0x23dbdc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x23dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x23dbe0: 0x73882  srl         $a3, $a3, 2
    ctx->pc = 0x23dbe0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
    // 0x23dbe4: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x23dbe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x23dbe8: 0x1094018  mult        $t0, $t0, $t1
    ctx->pc = 0x23dbe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x23dbec: 0x1515018  mult        $t2, $t2, $s1
    ctx->pc = 0x23dbecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x23dbf0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x23dbf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x23dbf4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x23dbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x23dbf8: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x23dbf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23dbfc: 0xf13818  mult        $a3, $a3, $s1
    ctx->pc = 0x23dbfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x23dc00: 0x24c62000  addiu       $a2, $a2, 0x2000
    ctx->pc = 0x23dc00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8192));
    // 0x23dc04: 0x892018  mult        $a0, $a0, $t1
    ctx->pc = 0x23dc04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23dc08: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x23dc08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23dc0c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23dc10: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x23dc10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x23dc14: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23dc18: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x23dc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x23dc1c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23dc20: 0x31087c00  andi        $t0, $t0, 0x7C00
    ctx->pc = 0x23dc20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31744);
    // 0x23dc24: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x23dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x23dc28: 0x30637c00  andi        $v1, $v1, 0x7C00
    ctx->pc = 0x23dc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x23dc2c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x23dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23dc30: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x23dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x23dc34: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x23dc34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x23dc38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23dc3c: 0x42282  srl         $a0, $a0, 10
    ctx->pc = 0x23dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x23dc40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23dc44: 0xa7220000  sh          $v0, 0x0($t9)
    ctx->pc = 0x23dc44u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
label_23dc48:
    // 0x23dc48: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x23dc48u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x23dc4c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23dc4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x23dc50: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x23dc50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_23dc54:
    // 0x23dc54: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x23dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23dc58: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x23dc58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23dc5c: 0x14400085  bnez        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x23DC5Cu;
    {
        const bool branch_taken_0x23dc5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC5Cu;
        // 0x23dc60: 0x3a040  sll         $s4, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc5c) {
            ctx->pc = 0x23DE74u;
            goto label_23de74;
        }
    }
    ctx->pc = 0x23DC64u;
    // 0x23dc64: 0x241e0080  addiu       $fp, $zero, 0x80
    ctx->pc = 0x23dc64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23dc68: 0x3c1700ff  lui         $s7, 0xFF
    ctx->pc = 0x23dc68u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)255 << 16));
    // 0x23dc6c: 0x0  nop
    ctx->pc = 0x23dc6cu;
    // NOP
label_23dc70:
    // 0x23dc70: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x23dc70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23dc74: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x23dc74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x23dc78: 0x3c037f00  lui         $v1, 0x7F00
    ctx->pc = 0x23dc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32512 << 16));
    // 0x23dc7c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23dc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23dc80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23dc84: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x23dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x23dc88: 0x8c580000  lw          $t8, 0x0($v0)
    ctx->pc = 0x23dc88u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23dc8c: 0x3057824  and         $t7, $t8, $a1
    ctx->pc = 0x23dc8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & GPR_U64(ctx, 5));
    // 0x23dc90: 0x6f102b  sltu        $v0, $v1, $t7
    ctx->pc = 0x23dc90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x23dc94: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23DC94u;
    {
        const bool branch_taken_0x23dc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC94u;
        // 0x23dc98: 0x3304f800  andi        $a0, $t8, 0xF800 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)63488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc94) {
            ctx->pc = 0x23DCC8u;
            goto label_23dcc8;
        }
    }
    ctx->pc = 0x23DC9Cu;
    // 0x23dc9c: 0x3c0500f8  lui         $a1, 0xF8
    ctx->pc = 0x23dc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)248 << 16));
    // 0x23dca0: 0x3051824  and         $v1, $t8, $a1
    ctx->pc = 0x23dca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & GPR_U64(ctx, 5));
    // 0x23dca4: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x23dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x23dca8: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x23dca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x23dcac: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x23dcacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x23dcb0: 0x330200f8  andi        $v0, $t8, 0xF8
    ctx->pc = 0x23dcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)248);
    // 0x23dcb4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23dcb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23dcb8: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x23dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x23dcbc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x23DCBCu;
    {
        const bool branch_taken_0x23dcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCBCu;
        // 0x23dcc0: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcbc) {
            ctx->pc = 0x23DD64u;
            goto label_23dd64;
        }
    }
    ctx->pc = 0x23DCC4u;
    // 0x23dcc4: 0x0  nop
    ctx->pc = 0x23dcc4u;
    // NOP
label_23dcc8:
    // 0x23dcc8: 0x972c0000  lhu         $t4, 0x0($t9)
    ctx->pc = 0x23dcc8u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x23dccc: 0xf7e02  srl         $t7, $t7, 24
    ctx->pc = 0x23dcccu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 24));
    // 0x23dcd0: 0x3cf8823  subu        $s1, $fp, $t7
    ctx->pc = 0x23dcd0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 15)));
    // 0x23dcd4: 0x3176824  and         $t5, $t8, $s7
    ctx->pc = 0x23dcd4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & GPR_U64(ctx, 23));
    // 0x23dcd8: 0x318b8000  andi        $t3, $t4, 0x8000
    ctx->pc = 0x23dcd8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32768);
    // 0x23dcdc: 0x31907c00  andi        $s0, $t4, 0x7C00
    ctx->pc = 0x23dcdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31744);
    // 0x23dce0: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x23dce0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x23dce4: 0x318e03e0  andi        $t6, $t4, 0x3E0
    ctx->pc = 0x23dce4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)992);
    // 0x23dce8: 0x3304ff00  andi        $a0, $t8, 0xFF00
    ctx->pc = 0x23dce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65280);
    // 0x23dcec: 0x1715818  mult        $t3, $t3, $s1
    ctx->pc = 0x23dcecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x23dcf0: 0x1ef1818  mult        $v1, $t7, $t7
    ctx->pc = 0x23dcf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23dcf4: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x23dcf4u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x23dcf8: 0x1081c2  srl         $s0, $s0, 7
    ctx->pc = 0x23dcf8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 7));
    // 0x23dcfc: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x23dcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x23dd00: 0xe7082  srl         $t6, $t6, 2
    ctx->pc = 0x23dd00u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
    // 0x23dd04: 0x318c001f  andi        $t4, $t4, 0x1F
    ctx->pc = 0x23dd04u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31);
    // 0x23dd08: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x23dd08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x23dd0c: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x23dd0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x23dd10: 0x330200ff  andi        $v0, $t8, 0xFF
    ctx->pc = 0x23dd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
    // 0x23dd14: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x23dd14u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x23dd18: 0x8f2018  mult        $a0, $a0, $t7
    ctx->pc = 0x23dd18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23dd1c: 0x1d17018  mult        $t6, $t6, $s1
    ctx->pc = 0x23dd1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x23dd20: 0x256b2000  addiu       $t3, $t3, 0x2000
    ctx->pc = 0x23dd20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8192));
    // 0x23dd24: 0x4f1018  mult        $v0, $v0, $t7
    ctx->pc = 0x23dd24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23dd28: 0x1916018  mult        $t4, $t4, $s1
    ctx->pc = 0x23dd28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x23dd2c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x23dd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x23dd30: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x23dd30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x23dd34: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x23dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x23dd38: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x23dd38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x23dd3c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23dd40: 0x31ad7c00  andi        $t5, $t5, 0x7C00
    ctx->pc = 0x23dd40u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)31744);
    // 0x23dd44: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x23dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x23dd48: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x23dd48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x23dd4c: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x23dd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x23dd50: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x23dd50u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x23dd54: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x23dd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x23dd58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23dd5c: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x23dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x23dd60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23dd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23dd64:
    // 0x23dd64: 0xa7230000  sh          $v1, 0x0($t9)
    ctx->pc = 0x23dd64u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x23dd68: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x23dd68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23dd6c: 0x3c037f00  lui         $v1, 0x7F00
    ctx->pc = 0x23dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32512 << 16));
    // 0x23dd70: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x23dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x23dd74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23dd78: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x23dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x23dd7c: 0x8c580000  lw          $t8, 0x0($v0)
    ctx->pc = 0x23dd7cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23dd80: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x23dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x23dd84: 0x3027824  and         $t7, $t8, $v0
    ctx->pc = 0x23dd84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x23dd88: 0x6f102b  sltu        $v0, $v1, $t7
    ctx->pc = 0x23dd88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x23dd8c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23DD8Cu;
    {
        const bool branch_taken_0x23dd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD8Cu;
        // 0x23dd90: 0x27390002  addiu       $t9, $t9, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd8c) {
            ctx->pc = 0x23DDC0u;
            goto label_23ddc0;
        }
    }
    ctx->pc = 0x23DD94u;
    // 0x23dd94: 0x3304f800  andi        $a0, $t8, 0xF800
    ctx->pc = 0x23dd94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)63488);
    // 0x23dd98: 0x3c0500f8  lui         $a1, 0xF8
    ctx->pc = 0x23dd98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)248 << 16));
    // 0x23dd9c: 0x3051824  and         $v1, $t8, $a1
    ctx->pc = 0x23dd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & GPR_U64(ctx, 5));
    // 0x23dda0: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x23dda0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x23dda4: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x23dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x23dda8: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x23dda8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x23ddac: 0x330200f8  andi        $v0, $t8, 0xF8
    ctx->pc = 0x23ddacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)248);
    // 0x23ddb0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23ddb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23ddb4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x23ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x23ddb8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x23DDB8u;
    {
        const bool branch_taken_0x23ddb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDB8u;
        // 0x23ddbc: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddb8) {
            ctx->pc = 0x23DE5Cu;
            goto label_23de5c;
        }
    }
    ctx->pc = 0x23DDC0u;
label_23ddc0:
    // 0x23ddc0: 0x972c0000  lhu         $t4, 0x0($t9)
    ctx->pc = 0x23ddc0u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x23ddc4: 0xf7e02  srl         $t7, $t7, 24
    ctx->pc = 0x23ddc4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 24));
    // 0x23ddc8: 0x3cf8823  subu        $s1, $fp, $t7
    ctx->pc = 0x23ddc8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 15)));
    // 0x23ddcc: 0x3176824  and         $t5, $t8, $s7
    ctx->pc = 0x23ddccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & GPR_U64(ctx, 23));
    // 0x23ddd0: 0x318b8000  andi        $t3, $t4, 0x8000
    ctx->pc = 0x23ddd0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32768);
    // 0x23ddd4: 0x31907c00  andi        $s0, $t4, 0x7C00
    ctx->pc = 0x23ddd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31744);
    // 0x23ddd8: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x23ddd8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x23dddc: 0x318e03e0  andi        $t6, $t4, 0x3E0
    ctx->pc = 0x23dddcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)992);
    // 0x23dde0: 0x3304ff00  andi        $a0, $t8, 0xFF00
    ctx->pc = 0x23dde0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65280);
    // 0x23dde4: 0x1715818  mult        $t3, $t3, $s1
    ctx->pc = 0x23dde4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x23dde8: 0x1ef1818  mult        $v1, $t7, $t7
    ctx->pc = 0x23dde8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23ddec: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x23ddecu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x23ddf0: 0x1081c2  srl         $s0, $s0, 7
    ctx->pc = 0x23ddf0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 7));
    // 0x23ddf4: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x23ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x23ddf8: 0xe7082  srl         $t6, $t6, 2
    ctx->pc = 0x23ddf8u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
    // 0x23ddfc: 0x318c001f  andi        $t4, $t4, 0x1F
    ctx->pc = 0x23ddfcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31);
    // 0x23de00: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x23de00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x23de04: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x23de04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x23de08: 0x330200ff  andi        $v0, $t8, 0xFF
    ctx->pc = 0x23de08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
    // 0x23de0c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x23de0cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x23de10: 0x8f2018  mult        $a0, $a0, $t7
    ctx->pc = 0x23de10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23de14: 0x1d17018  mult        $t6, $t6, $s1
    ctx->pc = 0x23de14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x23de18: 0x256b2000  addiu       $t3, $t3, 0x2000
    ctx->pc = 0x23de18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8192));
    // 0x23de1c: 0x4f1018  mult        $v0, $v0, $t7
    ctx->pc = 0x23de1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23de20: 0x1916018  mult        $t4, $t4, $s1
    ctx->pc = 0x23de20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x23de24: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x23de24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x23de28: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x23de28u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x23de2c: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x23de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x23de30: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x23de30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x23de34: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23de34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23de38: 0x31ad7c00  andi        $t5, $t5, 0x7C00
    ctx->pc = 0x23de38u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)31744);
    // 0x23de3c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x23de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x23de40: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x23de40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x23de44: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x23de44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x23de48: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x23de48u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x23de4c: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x23de4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x23de50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23de50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23de54: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x23de54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x23de58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23de58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23de5c:
    // 0x23de5c: 0xa7230000  sh          $v1, 0x0($t9)
    ctx->pc = 0x23de5cu;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x23de60: 0x2652fffe  addiu       $s2, $s2, -0x2
    ctx->pc = 0x23de60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x23de64: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x23de64u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x23de68: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x23de68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23de6c: 0x1040ff80  beqz        $v0, . + 4 + (-0x80 << 2)
    ctx->pc = 0x23DE6Cu;
    {
        const bool branch_taken_0x23de6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE6Cu;
        // 0x23de70: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de6c) {
            ctx->pc = 0x23DC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23dc70;
        }
    }
    ctx->pc = 0x23DE74u;
label_23de74:
    // 0x23de74: 0x1a400041  blez        $s2, . + 4 + (0x41 << 2)
    ctx->pc = 0x23DE74u;
    {
        const bool branch_taken_0x23de74 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x23DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE74u;
        // 0x23de78: 0x3c037f00  lui         $v1, 0x7F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de74) {
            ctx->pc = 0x23DF7Cu;
            goto label_23df7c;
        }
    }
    ctx->pc = 0x23DE7Cu;
    // 0x23de7c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x23de7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23de80: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23de80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23de84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23de84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23de88: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x23de88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x23de8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23de8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23de90: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x23de90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x23de94: 0x824824  and         $t1, $a0, $v0
    ctx->pc = 0x23de94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x23de98: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x23de98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x23de9c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23DE9Cu;
    {
        const bool branch_taken_0x23de9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE9Cu;
        // 0x23dea0: 0x3082f800  andi        $v0, $a0, 0xF800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de9c) {
            ctx->pc = 0x23DED0u;
            goto label_23ded0;
        }
    }
    ctx->pc = 0x23DEA4u;
    // 0x23dea4: 0x3c0500f8  lui         $a1, 0xF8
    ctx->pc = 0x23dea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)248 << 16));
    // 0x23dea8: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x23dea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x23deac: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x23deacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x23deb0: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x23deb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x23deb4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x23deb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x23deb8: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x23deb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x23debc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23debcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23dec0: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x23dec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x23dec4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23dec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23dec8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x23DEC8u;
    {
        const bool branch_taken_0x23dec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEC8u;
        // 0x23decc: 0xa7230000  sh          $v1, 0x0($t9) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dec8) {
            ctx->pc = 0x23DF78u;
            goto label_23df78;
        }
    }
    ctx->pc = 0x23DED0u;
label_23ded0:
    // 0x23ded0: 0x97250000  lhu         $a1, 0x0($t9)
    ctx->pc = 0x23ded0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x23ded4: 0x94e02  srl         $t1, $t1, 24
    ctx->pc = 0x23ded4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x23ded8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x23ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23dedc: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x23dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x23dee0: 0x30a68000  andi        $a2, $a1, 0x8000
    ctx->pc = 0x23dee0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x23dee4: 0x498823  subu        $s1, $v0, $t1
    ctx->pc = 0x23dee4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x23dee8: 0x834024  and         $t0, $a0, $v1
    ctx->pc = 0x23dee8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x23deec: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x23deecu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x23def0: 0x30aa7c00  andi        $t2, $a1, 0x7C00
    ctx->pc = 0x23def0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31744);
    // 0x23def4: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x23def4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x23def8: 0x30a703e0  andi        $a3, $a1, 0x3E0
    ctx->pc = 0x23def8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)992);
    // 0x23defc: 0xd13018  mult        $a2, $a2, $s1
    ctx->pc = 0x23defcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x23df00: 0x1291018  mult        $v0, $t1, $t1
    ctx->pc = 0x23df00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23df04: 0x84402  srl         $t0, $t0, 16
    ctx->pc = 0x23df04u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x23df08: 0xa51c2  srl         $t2, $t2, 7
    ctx->pc = 0x23df08u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 7));
    // 0x23df0c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x23df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x23df10: 0x73882  srl         $a3, $a3, 2
    ctx->pc = 0x23df10u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
    // 0x23df14: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x23df14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x23df18: 0x1094018  mult        $t0, $t0, $t1
    ctx->pc = 0x23df18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x23df1c: 0x1515018  mult        $t2, $t2, $s1
    ctx->pc = 0x23df1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x23df20: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x23df20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x23df24: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x23df24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x23df28: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x23df28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23df2c: 0xf13818  mult        $a3, $a3, $s1
    ctx->pc = 0x23df2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x23df30: 0x24c62000  addiu       $a2, $a2, 0x2000
    ctx->pc = 0x23df30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8192));
    // 0x23df34: 0x892018  mult        $a0, $a0, $t1
    ctx->pc = 0x23df34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23df38: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x23df38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23df3c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23df40: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x23df40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x23df44: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23df44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23df48: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x23df48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x23df4c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23df50: 0x31087c00  andi        $t0, $t0, 0x7C00
    ctx->pc = 0x23df50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31744);
    // 0x23df54: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x23df54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x23df58: 0x30637c00  andi        $v1, $v1, 0x7C00
    ctx->pc = 0x23df58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x23df5c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x23df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23df60: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x23df60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x23df64: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x23df64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x23df68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23df68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23df6c: 0x42282  srl         $a0, $a0, 10
    ctx->pc = 0x23df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x23df70: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23df70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23df74: 0xa7220000  sh          $v0, 0x0($t9)
    ctx->pc = 0x23df74u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
label_23df78:
    // 0x23df78: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x23df78u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
label_23df7c:
    // 0x23df7c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23df80: 0x334c821  addu        $t9, $t9, $s4
    ctx->pc = 0x23df80u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 20)));
    // 0x23df84: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23df84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23df88: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x23df88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_23df8c:
    // 0x23df8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23df8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23df90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23df90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23df94: 0x1460fee8  bnez        $v1, . + 4 + (-0x118 << 2)
    ctx->pc = 0x23DF94u;
    {
        const bool branch_taken_0x23df94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF94u;
        // 0x23df98: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df94) {
            ctx->pc = 0x23DB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db38;
        }
    }
    ctx->pc = 0x23DF9Cu;
label_23df9c:
    // 0x23df9c: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x23df9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_23dfa0:
    // 0x23dfa0: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DFA0u;
    {
        const bool branch_taken_0x23dfa0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFA0u;
        // 0x23dfa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfa0) {
            ctx->pc = 0x23DFB4u;
            goto label_23dfb4;
        }
    }
    ctx->pc = 0x23DFA8u;
    // 0x23dfa8: 0xc08a0b0  jal         func_2282C0
    ctx->pc = 0x23DFA8u;
    SET_GPR_U32(ctx, 31, 0x23DFB0u);
    ctx->pc = 0x23DFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DFA8u;
    // 0x23dfac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x23DFA8u, 0x23DFB0u)) {
        return;
    }
    ctx->pc = 0x23DFB0u;
label_23dfb0:
    // 0x23dfb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23dfb4:
    // 0x23dfb4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x23dfb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_23dfb8:
    // 0x23dfb8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x23dfb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23dfbc: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x23dfbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23dfc0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x23dfc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23dfc4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x23dfc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23dfc8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x23dfc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23dfcc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x23dfccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23dfd0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x23dfd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23dfd4: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x23dfd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23dfd8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23dfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23dfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x23DFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFDCu;
        // 0x23dfe0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DFE4u;
    // 0x23dfe4: 0x0  nop
    ctx->pc = 0x23dfe4u;
    // NOP
    ctx->pc = 0x23dfe8u;
}
