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

// Function: sub_001FE690
// Address: 0x1fe690 - 0x1feb08
void sub_001FE690_0x1fe690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE690_0x1fe690");
#endif

    switch (ctx->pc) {
        case 0x1fe6e4u: goto label_1fe6e4;
        case 0x1fe70cu: goto label_1fe70c;
        case 0x1fe718u: goto label_1fe718;
        case 0x1fe73cu: goto label_1fe73c;
        case 0x1fe760u: goto label_1fe760;
        case 0x1fe7b8u: goto label_1fe7b8;
        case 0x1fe7c4u: goto label_1fe7c4;
        case 0x1fe7d4u: goto label_1fe7d4;
        case 0x1fe7f0u: goto label_1fe7f0;
        case 0x1fe810u: goto label_1fe810;
        case 0x1fe880u: goto label_1fe880;
        case 0x1fe8c0u: goto label_1fe8c0;
        case 0x1fe8d4u: goto label_1fe8d4;
        case 0x1fe8f0u: goto label_1fe8f0;
        case 0x1fe948u: goto label_1fe948;
        case 0x1fe954u: goto label_1fe954;
        case 0x1fe964u: goto label_1fe964;
        case 0x1fe9a0u: goto label_1fe9a0;
        case 0x1fe9e8u: goto label_1fe9e8;
        case 0x1fea5cu: goto label_1fea5c;
        case 0x1fea68u: goto label_1fea68;
        case 0x1fea78u: goto label_1fea78;
        case 0x1fea88u: goto label_1fea88;
        case 0x1fea94u: goto label_1fea94;
        case 0x1feaa4u: goto label_1feaa4;
        default: break;
    }

    ctx->pc = 0x1fe690u;

    // 0x1fe690: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1fe690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1fe694: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1fe694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1fe698: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1fe698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1fe69c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fe69cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe6a0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1fe6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1fe6a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fe6a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe6a8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1fe6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1fe6ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fe6acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe6b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fe6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fe6b4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1fe6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1fe6b8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1fe6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1fe6bc: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1fe6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1fe6c0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE6C0u;
    {
        const bool branch_taken_0x1fe6c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6C0u;
        // 0x1fe6c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe6c0) {
            ctx->pc = 0x1FE6D4u;
            goto label_1fe6d4;
        }
    }
    ctx->pc = 0x1FE6C8u;
    // 0x1fe6c8: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1fe6c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fe6cc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FE6CCu;
    {
        const bool branch_taken_0x1fe6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe6cc) {
            ctx->pc = 0x1FE704u;
            goto label_1fe704;
        }
    }
    ctx->pc = 0x1FE6D4u;
label_1fe6d4:
    // 0x1fe6d4: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x1fe6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x1fe6d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fe6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe6dc: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x1FE6DCu;
    SET_GPR_U32(ctx, 31, 0x1FE6E4u);
    ctx->pc = 0x1FE6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE6DCu;
    // 0x1fe6e0: 0x8e051a70  lw          $a1, 0x1A70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x1FE6DCu, 0x1FE6E4u)) {
        return;
    }
    ctx->pc = 0x1FE6E4u;
label_1fe6e4:
    // 0x1fe6e4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1fe6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fe6e8: 0x8e021a70  lw          $v0, 0x1A70($s0)
    ctx->pc = 0x1fe6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    // 0x1fe6ec: 0x106200fc  beq         $v1, $v0, . + 4 + (0xFC << 2)
    ctx->pc = 0x1FE6ECu;
    {
        const bool branch_taken_0x1fe6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FE6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6ECu;
        // 0x1fe6f0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe6ec) {
            ctx->pc = 0x1FEAE0u;
            goto label_1feae0;
        }
    }
    ctx->pc = 0x1FE6F4u;
    // 0x1fe6f4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1fe6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1fe6f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fe6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fe6fc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1FE6FCu;
    {
        const bool branch_taken_0x1fe6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6FCu;
        // 0x1fe700: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe6fc) {
            ctx->pc = 0x1FE858u;
            goto label_1fe858;
        }
    }
    ctx->pc = 0x1FE704u;
label_1fe704:
    // 0x1fe704: 0xc080dc4  jal         func_203710
    ctx->pc = 0x1FE704u;
    SET_GPR_U32(ctx, 31, 0x1FE70Cu);
    ctx->pc = 0x1FE708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE704u;
    // 0x1fe708: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203710u, 0x1FE704u, 0x1FE70Cu)) {
        return;
    }
    ctx->pc = 0x1FE70Cu;
label_1fe70c:
    // 0x1fe70c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1fe70cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe710: 0xc080dc4  jal         func_203710
    ctx->pc = 0x1FE710u;
    SET_GPR_U32(ctx, 31, 0x1FE718u);
    ctx->pc = 0x1FE714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE710u;
    // 0x1fe714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203710u, 0x1FE710u, 0x1FE718u)) {
        return;
    }
    ctx->pc = 0x1FE718u;
label_1fe718:
    // 0x1fe718: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1fe718u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe71c: 0x86620006  lh          $v0, 0x6($s3)
    ctx->pc = 0x1fe71cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1fe720: 0x18400051  blez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1FE720u;
    {
        const bool branch_taken_0x1fe720 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1FE724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE720u;
        // 0x1fe724: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe720) {
            ctx->pc = 0x1FE868u;
            goto label_1fe868;
        }
    }
    ctx->pc = 0x1FE728u;
    // 0x1fe728: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1fe728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fe72c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1fe72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1fe730: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe734: 0x10760003  beq         $v1, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE734u;
    {
        const bool branch_taken_0x1fe734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x1FE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE734u;
        // 0x1fe738: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe734) {
            ctx->pc = 0x1FE744u;
            goto label_1fe744;
        }
    }
    ctx->pc = 0x1FE73Cu;
label_1fe73c:
    // 0x1fe73c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1FE73Cu;
    {
        const bool branch_taken_0x1fe73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE73Cu;
        // 0x1fe740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe73c) {
            ctx->pc = 0x1FE794u;
            goto label_1fe794;
        }
    }
    ctx->pc = 0x1FE744u;
label_1fe744:
    // 0x1fe744: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1fe744u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe748: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FE748u;
    {
        const bool branch_taken_0x1fe748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE748u;
        // 0x1fe74c: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe748) {
            ctx->pc = 0x1FE788u;
            goto label_1fe788;
        }
    }
    ctx->pc = 0x1FE750u;
    // 0x1fe750: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1fe750u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fe754: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FE754u;
    {
        const bool branch_taken_0x1fe754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE754u;
        // 0x1fe758: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe754) {
            ctx->pc = 0x1FE784u;
            goto label_1fe784;
        }
    }
    ctx->pc = 0x1FE75Cu;
    // 0x1fe75c: 0x0  nop
    ctx->pc = 0x1fe75cu;
    // NOP
label_1fe760:
    // 0x1fe760: 0x14c3fff6  bne         $a2, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1FE760u;
    {
        const bool branch_taken_0x1fe760 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FE764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE760u;
        // 0x1fe764: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe760) {
            ctx->pc = 0x1FE73Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe73c;
        }
    }
    ctx->pc = 0x1FE768u;
    // 0x1fe768: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fe768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fe76c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1fe76cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe770: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE770u;
    {
        const bool branch_taken_0x1fe770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE770u;
        // 0x1fe774: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe770) {
            ctx->pc = 0x1FE788u;
            goto label_1fe788;
        }
    }
    ctx->pc = 0x1FE778u;
    // 0x1fe778: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1fe778u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fe77c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FE77Cu;
    {
        const bool branch_taken_0x1fe77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE77Cu;
        // 0x1fe780: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe77c) {
            ctx->pc = 0x1FE760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe760;
        }
    }
    ctx->pc = 0x1FE784u;
label_1fe784:
    // 0x1fe784: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1fe784u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1fe788:
    // 0x1fe788: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1fe788u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fe78c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1fe78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1fe790: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1fe790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1fe794:
    // 0x1fe794: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x1FE794u;
    {
        const bool branch_taken_0x1fe794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe794) {
            ctx->pc = 0x1FE798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE794u;
            // 0x1fe798: 0x82420000  lb          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE86Cu;
            goto label_1fe86c;
        }
    }
    ctx->pc = 0x1FE79Cu;
    // 0x1fe79c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1fe79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1fe7a0: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1FE7A0u;
    {
        const bool branch_taken_0x1fe7a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe7a0) {
            ctx->pc = 0x1FE7DCu;
            goto label_1fe7dc;
        }
    }
    ctx->pc = 0x1FE7A8u;
    // 0x1fe7a8: 0x52200030  beql        $s1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x1FE7A8u;
    {
        const bool branch_taken_0x1fe7a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe7a8) {
            ctx->pc = 0x1FE7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE7A8u;
            // 0x1fe7ac: 0x82420000  lb          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE86Cu;
            goto label_1fe86c;
        }
    }
    ctx->pc = 0x1FE7B0u;
    // 0x1fe7b0: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x1FE7B0u;
    SET_GPR_U32(ctx, 31, 0x1FE7B8u);
    ctx->pc = 0x1FE7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE7B0u;
    // 0x1fe7b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x1FE7B0u, 0x1FE7B8u)) {
        return;
    }
    ctx->pc = 0x1FE7B8u;
label_1fe7b8:
    // 0x1fe7b8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1fe7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fe7bc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1FE7BCu;
    SET_GPR_U32(ctx, 31, 0x1FE7C4u);
    ctx->pc = 0x1FE7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE7BCu;
    // 0x1fe7c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1FE7BCu, 0x1FE7C4u)) {
        return;
    }
    ctx->pc = 0x1FE7C4u;
label_1fe7c4:
    // 0x1fe7c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fe7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe7c8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1fe7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1fe7cc: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x1FE7CCu;
    SET_GPR_U32(ctx, 31, 0x1FE7D4u);
    ctx->pc = 0x1FE7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE7CCu;
    // 0x1fe7d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x1FE7CCu, 0x1FE7D4u)) {
        return;
    }
    ctx->pc = 0x1FE7D4u;
label_1fe7d4:
    // 0x1fe7d4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1FE7D4u;
    {
        const bool branch_taken_0x1fe7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7D4u;
        // 0x1fe7d8: 0x82420000  lb          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7d4) {
            ctx->pc = 0x1FE86Cu;
            goto label_1fe86c;
        }
    }
    ctx->pc = 0x1FE7DCu;
label_1fe7dc:
    // 0x1fe7dc: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1FE7DCu;
    {
        const bool branch_taken_0x1fe7dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7DCu;
        // 0x1fe7e0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7dc) {
            ctx->pc = 0x1FE868u;
            goto label_1fe868;
        }
    }
    ctx->pc = 0x1FE7E4u;
    // 0x1fe7e4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1fe7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1fe7e8: 0x10540003  beq         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE7E8u;
    {
        const bool branch_taken_0x1fe7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1FE7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7E8u;
        // 0x1fe7ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7e8) {
            ctx->pc = 0x1FE7F8u;
            goto label_1fe7f8;
        }
    }
    ctx->pc = 0x1FE7F0u;
label_1fe7f0:
    // 0x1fe7f0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FE7F0u;
    {
        const bool branch_taken_0x1fe7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7F0u;
        // 0x1fe7f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7f0) {
            ctx->pc = 0x1FE844u;
            goto label_1fe844;
        }
    }
    ctx->pc = 0x1FE7F8u;
label_1fe7f8:
    // 0x1fe7f8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1fe7f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe7fc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FE7FCu;
    {
        const bool branch_taken_0x1fe7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7FCu;
        // 0x1fe800: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7fc) {
            ctx->pc = 0x1FE838u;
            goto label_1fe838;
        }
    }
    ctx->pc = 0x1FE804u;
    // 0x1fe804: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1fe804u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe808: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FE808u;
    {
        const bool branch_taken_0x1fe808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE808u;
        // 0x1fe80c: 0x92230000  lbu         $v1, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe808) {
            ctx->pc = 0x1FE834u;
            goto label_1fe834;
        }
    }
    ctx->pc = 0x1FE810u;
label_1fe810:
    // 0x1fe810: 0x14c3fff7  bne         $a2, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FE810u;
    {
        const bool branch_taken_0x1fe810 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE810u;
        // 0x1fe814: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe810) {
            ctx->pc = 0x1FE7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe7f0;
        }
    }
    ctx->pc = 0x1FE818u;
    // 0x1fe818: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fe818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fe81c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1fe81cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe820: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE820u;
    {
        const bool branch_taken_0x1fe820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE820u;
        // 0x1fe824: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe820) {
            ctx->pc = 0x1FE838u;
            goto label_1fe838;
        }
    }
    ctx->pc = 0x1FE828u;
    // 0x1fe828: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1fe828u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fe82c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FE82Cu;
    {
        const bool branch_taken_0x1fe82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE82Cu;
        // 0x1fe830: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe82c) {
            ctx->pc = 0x1FE810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe810;
        }
    }
    ctx->pc = 0x1FE834u;
label_1fe834:
    // 0x1fe834: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1fe834u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1fe838:
    // 0x1fe838: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1fe838u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fe83c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1fe83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1fe840: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1fe840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1fe844:
    // 0x1fe844: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE844u;
    {
        const bool branch_taken_0x1fe844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe844) {
            ctx->pc = 0x1FE848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE844u;
            // 0x1fe848: 0x82420000  lb          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE86Cu;
            goto label_1fe86c;
        }
    }
    ctx->pc = 0x1FE84Cu;
    // 0x1fe84c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1fe84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1fe850: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fe850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fe854: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1fe854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1fe858:
    // 0x1fe858: 0x96630006  lhu         $v1, 0x6($s3)
    ctx->pc = 0x1fe858u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1fe85c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fe85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fe860: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x1FE860u;
    {
        const bool branch_taken_0x1fe860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE860u;
        // 0x1fe864: 0xa6630006  sh          $v1, 0x6($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe860) {
            ctx->pc = 0x1FEADCu;
            goto label_1feadc;
        }
    }
    ctx->pc = 0x1FE868u;
label_1fe868:
    // 0x1fe868: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1fe868u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1fe86c:
    // 0x1fe86c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fe86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fe870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe874: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x1fe874u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fe878: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FE878u;
    {
        const bool branch_taken_0x1fe878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE878u;
        // 0x1fe87c: 0x3c170070  lui         $s7, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe878) {
            ctx->pc = 0x1FE898u;
            goto label_1fe898;
        }
    }
    ctx->pc = 0x1FE880u;
label_1fe880:
    // 0x1fe880: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1fe880u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe884: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fe884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fe888: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1fe888u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe88c: 0x0  nop
    ctx->pc = 0x1fe88cu;
    // NOP
    // 0x1fe890: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FE890u;
    {
        const bool branch_taken_0x1fe890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE890u;
        // 0x1fe894: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe890) {
            ctx->pc = 0x1FE880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe880;
        }
    }
    ctx->pc = 0x1FE898u;
label_1fe898:
    // 0x1fe898: 0x30b5003f  andi        $s5, $a1, 0x3F
    ctx->pc = 0x1fe898u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x1fe89c: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1fe89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1fe8a0: 0x2a31818  mult        $v1, $s5, $v1
    ctx->pc = 0x1fe8a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1fe8a4: 0x26e21a98  addiu       $v0, $s7, 0x1A98
    ctx->pc = 0x1fe8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 6808));
    // 0x1fe8a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe8ac: 0x8c500024  lw          $s0, 0x24($v0)
    ctx->pc = 0x1fe8acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1fe8b0: 0x1200004b  beqz        $s0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1FE8B0u;
    {
        const bool branch_taken_0x1fe8b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8B0u;
        // 0x1fe8b4: 0x61600  sll         $v0, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe8b0) {
            ctx->pc = 0x1FE9E0u;
            goto label_1fe9e0;
        }
    }
    ctx->pc = 0x1FE8B8u;
    // 0x1fe8b8: 0x23e03  sra         $a3, $v0, 24
    ctx->pc = 0x1fe8b8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1fe8bc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1fe8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1fe8c0:
    // 0x1fe8c0: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1FE8C0u;
    {
        const bool branch_taken_0x1fe8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8C0u;
        // 0x1fe8c4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe8c0) {
            ctx->pc = 0x1FE9D4u;
            goto label_1fe9d4;
        }
    }
    ctx->pc = 0x1FE8C8u;
    // 0x1fe8c8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1fe8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1fe8cc: 0x10560003  beq         $v0, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE8CCu;
    {
        const bool branch_taken_0x1fe8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x1FE8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8CCu;
        // 0x1fe8d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe8cc) {
            ctx->pc = 0x1FE8DCu;
            goto label_1fe8dc;
        }
    }
    ctx->pc = 0x1FE8D4u;
label_1fe8d4:
    // 0x1fe8d4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1FE8D4u;
    {
        const bool branch_taken_0x1fe8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8D4u;
        // 0x1fe8d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe8d4) {
            ctx->pc = 0x1FE924u;
            goto label_1fe924;
        }
    }
    ctx->pc = 0x1FE8DCu;
label_1fe8dc:
    // 0x1fe8dc: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1fe8dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe8e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FE8E0u;
    {
        const bool branch_taken_0x1fe8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8E0u;
        // 0x1fe8e4: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe8e0) {
            ctx->pc = 0x1FE918u;
            goto label_1fe918;
        }
    }
    ctx->pc = 0x1FE8E8u;
    // 0x1fe8e8: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x1FE8E8u;
    {
        const bool branch_taken_0x1fe8e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8E8u;
        // 0x1fe8ec: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe8e8) {
            ctx->pc = 0x1FE918u;
            goto label_1fe918;
        }
    }
    ctx->pc = 0x1FE8F0u;
label_1fe8f0:
    // 0x1fe8f0: 0x14c3fff8  bne         $a2, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FE8F0u;
    {
        const bool branch_taken_0x1fe8f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FE8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8F0u;
        // 0x1fe8f4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe8f0) {
            ctx->pc = 0x1FE8D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe8d4;
        }
    }
    ctx->pc = 0x1FE8F8u;
    // 0x1fe8f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fe8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fe8fc: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1fe8fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe900: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE900u;
    {
        const bool branch_taken_0x1fe900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE900u;
        // 0x1fe904: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe900) {
            ctx->pc = 0x1FE918u;
            goto label_1fe918;
        }
    }
    ctx->pc = 0x1FE908u;
    // 0x1fe908: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1fe908u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fe90c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FE90Cu;
    {
        const bool branch_taken_0x1fe90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE90Cu;
        // 0x1fe910: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe90c) {
            ctx->pc = 0x1FE8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe8f0;
        }
    }
    ctx->pc = 0x1FE914u;
    // 0x1fe914: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1fe914u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1fe918:
    // 0x1fe918: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1fe918u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fe91c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1fe91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1fe920: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1fe920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1fe924:
    // 0x1fe924: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1FE924u;
    {
        const bool branch_taken_0x1fe924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe924) {
            ctx->pc = 0x1FE928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE924u;
            // 0x1fe928: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE9D8u;
            goto label_1fe9d8;
        }
    }
    ctx->pc = 0x1FE92Cu;
    // 0x1fe92c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1fe92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1fe930: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FE930u;
    {
        const bool branch_taken_0x1fe930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE930u;
        // 0x1fe934: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe930) {
            ctx->pc = 0x1FE96Cu;
            goto label_1fe96c;
        }
    }
    ctx->pc = 0x1FE938u;
    // 0x1fe938: 0x5220005f  beql        $s1, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x1FE938u;
    {
        const bool branch_taken_0x1fe938 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe938) {
            ctx->pc = 0x1FE93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE938u;
            // 0x1fe93c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEAB8u;
            goto label_1feab8;
        }
    }
    ctx->pc = 0x1FE940u;
    // 0x1fe940: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x1FE940u;
    SET_GPR_U32(ctx, 31, 0x1FE948u);
    ctx->pc = 0x1FE944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE940u;
    // 0x1fe944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x1FE940u, 0x1FE948u)) {
        return;
    }
    ctx->pc = 0x1FE948u;
label_1fe948:
    // 0x1fe948: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1fe948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fe94c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1FE94Cu;
    SET_GPR_U32(ctx, 31, 0x1FE954u);
    ctx->pc = 0x1FE950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE94Cu;
    // 0x1fe950: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1FE94Cu, 0x1FE954u)) {
        return;
    }
    ctx->pc = 0x1FE954u;
label_1fe954:
    // 0x1fe954: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fe954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe958: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fe958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe95c: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x1FE95Cu;
    SET_GPR_U32(ctx, 31, 0x1FE964u);
    ctx->pc = 0x1FE960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE95Cu;
    // 0x1fe960: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x1FE95Cu, 0x1FE964u)) {
        return;
    }
    ctx->pc = 0x1FE964u;
label_1fe964:
    // 0x1fe964: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1FE964u;
    {
        const bool branch_taken_0x1fe964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE964u;
        // 0x1fe968: 0xae140020  sw          $s4, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe964) {
            ctx->pc = 0x1FEAB4u;
            goto label_1feab4;
        }
    }
    ctx->pc = 0x1FE96Cu;
label_1fe96c:
    // 0x1fe96c: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1FE96Cu;
    {
        const bool branch_taken_0x1fe96c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE96Cu;
        // 0x1fe970: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe96c) {
            ctx->pc = 0x1FEAB4u;
            goto label_1feab4;
        }
    }
    ctx->pc = 0x1FE974u;
    // 0x1fe974: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1fe974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1fe978: 0x1454004e  bne         $v0, $s4, . + 4 + (0x4E << 2)
    ctx->pc = 0x1FE978u;
    {
        const bool branch_taken_0x1fe978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1FE97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE978u;
        // 0x1fe97c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe978) {
            ctx->pc = 0x1FEAB4u;
            goto label_1feab4;
        }
    }
    ctx->pc = 0x1FE980u;
    // 0x1fe980: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1fe980u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe984: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1FE984u;
    {
        const bool branch_taken_0x1fe984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE984u;
        // 0x1fe988: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe984) {
            ctx->pc = 0x1FEAB4u;
            goto label_1feab4;
        }
    }
    ctx->pc = 0x1FE98Cu;
    // 0x1fe98c: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1fe98cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe990: 0x50400049  beql        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x1FE990u;
    {
        const bool branch_taken_0x1fe990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe990) {
            ctx->pc = 0x1FE994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE990u;
            // 0x1fe994: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEAB8u;
            goto label_1feab8;
        }
    }
    ctx->pc = 0x1FE998u;
    // 0x1fe998: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1fe998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1fe99c: 0x0  nop
    ctx->pc = 0x1fe99cu;
    // NOP
label_1fe9a0:
    // 0x1fe9a0: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1fe9a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fe9a4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1fe9a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1fe9a8: 0x14430042  bne         $v0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1FE9A8u;
    {
        const bool branch_taken_0x1fe9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9A8u;
        // 0x1fe9ac: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9a8) {
            ctx->pc = 0x1FEAB4u;
            goto label_1feab4;
        }
    }
    ctx->pc = 0x1FE9B0u;
    // 0x1fe9b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fe9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fe9b4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1fe9b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe9b8: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1FE9B8u;
    {
        const bool branch_taken_0x1fe9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9B8u;
        // 0x1fe9bc: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9b8) {
            ctx->pc = 0x1FEAB4u;
            goto label_1feab4;
        }
    }
    ctx->pc = 0x1FE9C0u;
    // 0x1fe9c0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1fe9c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fe9c4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1FE9C4u;
    {
        const bool branch_taken_0x1fe9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9C4u;
        // 0x1fe9c8: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9c4) {
            ctx->pc = 0x1FE9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe9a0;
        }
    }
    ctx->pc = 0x1FE9CCu;
    // 0x1fe9cc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1FE9CCu;
    {
        const bool branch_taken_0x1fe9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9CCu;
        // 0x1fe9d0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9cc) {
            ctx->pc = 0x1FEAB8u;
            goto label_1feab8;
        }
    }
    ctx->pc = 0x1FE9D4u;
label_1fe9d4:
    // 0x1fe9d4: 0x8e100024  lw          $s0, 0x24($s0)
    ctx->pc = 0x1fe9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1fe9d8:
    // 0x1fe9d8: 0x5600ffb9  bnel        $s0, $zero, . + 4 + (-0x47 << 2)
    ctx->pc = 0x1FE9D8u;
    {
        const bool branch_taken_0x1fe9d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe9d8) {
            ctx->pc = 0x1FE9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE9D8u;
            // 0x1fe9dc: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe8c0;
        }
    }
    ctx->pc = 0x1FE9E0u;
label_1fe9e0:
    // 0x1fe9e0: 0xc07fda8  jal         func_1FF6A0
    ctx->pc = 0x1FE9E0u;
    SET_GPR_U32(ctx, 31, 0x1FE9E8u);
    ctx->pc = 0x1FE9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE9E0u;
    // 0x1fe9e4: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF6A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF6A0u, 0x1FE9E0u, 0x1FE9E8u)) {
        return;
    }
    ctx->pc = 0x1FE9E8u;
label_1fe9e8:
    // 0x1fe9e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe9ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fe9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe9f0: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1fe9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1fe9f4: 0x26e61a98  addiu       $a2, $s7, 0x1A98
    ctx->pc = 0x1fe9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 6808));
    // 0x1fe9f8: 0x2a22818  mult        $a1, $s5, $v0
    ctx->pc = 0x1fe9f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1fe9fc: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1fe9fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fea00: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1fea00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1fea04: 0x24c20024  addiu       $v0, $a2, 0x24
    ctx->pc = 0x1fea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x1fea08: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1fea08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1fea0c: 0xa6040010  sh          $a0, 0x10($s0)
    ctx->pc = 0x1fea0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x1fea10: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1fea10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1fea14: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1fea14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fea18: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1fea18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1fea1c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1fea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1fea20: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1fea20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1fea24: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1fea24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1fea28: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1fea28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1fea2c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1fea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1fea30: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1fea30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1fea34: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1fea34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1fea38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fea38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fea3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEA3Cu;
    {
        const bool branch_taken_0x1fea3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA3Cu;
        // 0x1fea40: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea3c) {
            ctx->pc = 0x1FEA48u;
            goto label_1fea48;
        }
    }
    ctx->pc = 0x1FEA44u;
    // 0x1fea44: 0xac500028  sw          $s0, 0x28($v0)
    ctx->pc = 0x1fea44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 16));
label_1fea48:
    // 0x1fea48: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1fea48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1fea4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fea4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fea50: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1fea50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1fea54: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x1FEA54u;
    SET_GPR_U32(ctx, 31, 0x1FEA5Cu);
    ctx->pc = 0x1FEA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA54u;
    // 0x1fea58: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x1FEA54u, 0x1FEA5Cu)) {
        return;
    }
    ctx->pc = 0x1FEA5Cu;
label_1fea5c:
    // 0x1fea5c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1fea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fea60: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1FEA60u;
    SET_GPR_U32(ctx, 31, 0x1FEA68u);
    ctx->pc = 0x1FEA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA60u;
    // 0x1fea64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1FEA60u, 0x1FEA68u)) {
        return;
    }
    ctx->pc = 0x1FEA68u;
label_1fea68:
    // 0x1fea68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fea68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fea6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fea6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fea70: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x1FEA70u;
    SET_GPR_U32(ctx, 31, 0x1FEA78u);
    ctx->pc = 0x1FEA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA70u;
    // 0x1fea74: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x1FEA70u, 0x1FEA78u)) {
        return;
    }
    ctx->pc = 0x1FEA78u;
label_1fea78:
    // 0x1fea78: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1FEA78u;
    {
        const bool branch_taken_0x1fea78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fea78) {
            ctx->pc = 0x1FEA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEA78u;
            // 0x1fea7c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEAACu;
            goto label_1feaac;
        }
    }
    ctx->pc = 0x1FEA80u;
    // 0x1fea80: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x1FEA80u;
    SET_GPR_U32(ctx, 31, 0x1FEA88u);
    ctx->pc = 0x1FEA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA80u;
    // 0x1fea84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x1FEA80u, 0x1FEA88u)) {
        return;
    }
    ctx->pc = 0x1FEA88u;
label_1fea88:
    // 0x1fea88: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1fea88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fea8c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1FEA8Cu;
    SET_GPR_U32(ctx, 31, 0x1FEA94u);
    ctx->pc = 0x1FEA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA8Cu;
    // 0x1fea90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1FEA8Cu, 0x1FEA94u)) {
        return;
    }
    ctx->pc = 0x1FEA94u;
label_1fea94:
    // 0x1fea94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fea94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fea98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fea98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fea9c: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x1FEA9Cu;
    SET_GPR_U32(ctx, 31, 0x1FEAA4u);
    ctx->pc = 0x1FEAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA9Cu;
    // 0x1feaa0: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x1FEA9Cu, 0x1FEAA4u)) {
        return;
    }
    ctx->pc = 0x1FEAA4u;
label_1feaa4:
    // 0x1feaa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEAA4u;
    {
        const bool branch_taken_0x1feaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAA4u;
        // 0x1feaa8: 0xae140020  sw          $s4, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feaa4) {
            ctx->pc = 0x1FEAB0u;
            goto label_1feab0;
        }
    }
    ctx->pc = 0x1FEAACu;
label_1feaac:
    // 0x1feaac: 0xae140020  sw          $s4, 0x20($s0)
    ctx->pc = 0x1feaacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_1feab0:
    // 0x1feab0: 0xae16001c  sw          $s6, 0x1C($s0)
    ctx->pc = 0x1feab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 22));
label_1feab4:
    // 0x1feab4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1feab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1feab8:
    // 0x1feab8: 0x54500001  bnel        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FEAB8u;
    {
        const bool branch_taken_0x1feab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1feab8) {
            ctx->pc = 0x1FEABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEAB8u;
            // 0x1feabc: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEAC0u;
            goto label_1feac0;
        }
    }
    ctx->pc = 0x1FEAC0u;
label_1feac0:
    // 0x1feac0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1feac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1feac4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1feac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1feac8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1feac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1feacc: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1feaccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x1fead0: 0x96640006  lhu         $a0, 0x6($s3)
    ctx->pc = 0x1fead0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1fead4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fead4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fead8: 0xa6640006  sh          $a0, 0x6($s3)
    ctx->pc = 0x1fead8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 4));
label_1feadc:
    // 0x1feadc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1feadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1feae0:
    // 0x1feae0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1feae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1feae4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1feae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1feae8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1feae8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1feaec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1feaecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1feaf0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1feaf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1feaf4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1feaf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1feaf8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1feaf8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1feafc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1feafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feb00: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB00u;
        // 0x1feb04: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEB08u;
}
