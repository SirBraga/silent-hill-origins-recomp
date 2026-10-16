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

// Function: sub_00320598
// Address: 0x320598 - 0x3206f0
void sub_00320598_0x320598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320598_0x320598");
#endif

    switch (ctx->pc) {
        case 0x3205e8u: goto label_3205e8;
        case 0x320608u: goto label_320608;
        case 0x320620u: goto label_320620;
        case 0x320660u: goto label_320660;
        case 0x320698u: goto label_320698;
        case 0x3206c4u: goto label_3206c4;
        default: break;
    }

    ctx->pc = 0x320598u;

    // 0x320598: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x320598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x32059c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x32059cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3205a0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3205a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3205a4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3205a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3205a8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3205a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3205ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3205acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3205b0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3205b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3205b4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3205b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3205b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3205b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3205bc: 0x148943  sra         $s1, $s4, 5
    ctx->pc = 0x3205bcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 20), 5));
    // 0x3205c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3205c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3205c4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3205c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3205c8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3205c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3205cc: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x3205ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3205d0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3205d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3205d4: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x3205d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3205d8: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x3205d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3205dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3205DCu;
    {
        const bool branch_taken_0x3205dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3205E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3205DCu;
        // 0x3205e0: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3205dc) {
            ctx->pc = 0x320600u;
            goto label_320600;
        }
    }
    ctx->pc = 0x3205E4u;
    // 0x3205e4: 0x0  nop
    ctx->pc = 0x3205e4u;
    // NOP
label_3205e8:
    // 0x3205e8: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x3205e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3205ec: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x3205ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3205f0: 0x0  nop
    ctx->pc = 0x3205f0u;
    // NOP
    // 0x3205f4: 0x0  nop
    ctx->pc = 0x3205f4u;
    // NOP
    // 0x3205f8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3205F8u;
    {
        const bool branch_taken_0x3205f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3205FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3205F8u;
        // 0x3205fc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3205f8) {
            ctx->pc = 0x3205E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3205e8;
        }
    }
    ctx->pc = 0x320600u;
label_320600:
    // 0x320600: 0xc0c7f7c  jal         func_31FDF0
    ctx->pc = 0x320600u;
    SET_GPR_U32(ctx, 31, 0x320608u);
    ctx->pc = 0x320604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320600u;
    // 0x320604: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FDF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FDF0u, 0x320600u, 0x320608u)) {
        return;
    }
    ctx->pc = 0x320608u;
label_320608:
    // 0x320608: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x320608u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32060c: 0x3286001f  andi        $a2, $s4, 0x1F
    ctx->pc = 0x32060cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)31);
    // 0x320610: 0x26430014  addiu       $v1, $s2, 0x14
    ctx->pc = 0x320610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x320614: 0x1a200008  blez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x320614u;
    {
        const bool branch_taken_0x320614 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x320618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320614u;
        // 0x320618: 0x26680014  addiu       $t0, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320614) {
            ctx->pc = 0x320638u;
            goto label_320638;
        }
    }
    ctx->pc = 0x32061Cu;
    // 0x32061c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32061cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_320620:
    // 0x320620: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x320620u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x320624: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x320624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x320628: 0x0  nop
    ctx->pc = 0x320628u;
    // NOP
    // 0x32062c: 0x0  nop
    ctx->pc = 0x32062cu;
    // NOP
    // 0x320630: 0x14e0fffb  bnez        $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x320630u;
    {
        const bool branch_taken_0x320630 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x320634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320630u;
        // 0x320634: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320630) {
            ctx->pc = 0x320620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320620;
        }
    }
    ctx->pc = 0x320638u;
label_320638:
    // 0x320638: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x320638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x32063c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32063cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320640: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x320640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x320644: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x320644u;
    {
        const bool branch_taken_0x320644 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x320648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320644u;
        // 0x320648: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320644) {
            ctx->pc = 0x320698u;
            goto label_320698;
        }
    }
    ctx->pc = 0x32064Cu;
    // 0x32064c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x32064cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x320650: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x320650u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320654: 0x462823  subu        $a1, $v0, $a2
    ctx->pc = 0x320654u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x320658: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x320658u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32065c: 0x0  nop
    ctx->pc = 0x32065cu;
    // NOP
label_320660:
    // 0x320660: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x320660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x320664: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x320664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x320668: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x320668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32066c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x32066cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x320670: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x320670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x320674: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x320674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x320678: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x320678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x32067c: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x32067cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x320680: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x320680u;
    {
        const bool branch_taken_0x320680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320680u;
        // 0x320684: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320680) {
            ctx->pc = 0x320660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320660;
        }
    }
    ctx->pc = 0x320688u;
    // 0x320688: 0x123800b  movn        $s0, $t1, $v1
    ctx->pc = 0x320688u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9));
    // 0x32068c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32068Cu;
    {
        const bool branch_taken_0x32068c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32068Cu;
        // 0x320690: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32068c) {
            ctx->pc = 0x3206B0u;
            goto label_3206b0;
        }
    }
    ctx->pc = 0x320694u;
    // 0x320694: 0x0  nop
    ctx->pc = 0x320694u;
    // NOP
label_320698:
    // 0x320698: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x320698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32069c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x32069cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3206a0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3206a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x3206a4: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x3206a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3206a8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3206A8u;
    {
        const bool branch_taken_0x3206a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3206ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206A8u;
        // 0x3206ac: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3206a8) {
            ctx->pc = 0x320698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320698;
        }
    }
    ctx->pc = 0x3206B0u;
label_3206b0:
    // 0x3206b0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3206b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3206b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3206b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3206b8: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x3206b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x3206bc: 0xc0c7fa6  jal         func_31FE98
    ctx->pc = 0x3206BCu;
    SET_GPR_U32(ctx, 31, 0x3206C4u);
    ctx->pc = 0x3206C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3206BCu;
    // 0x3206c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FE98u, 0x3206BCu, 0x3206C4u)) {
        return;
    }
    ctx->pc = 0x3206C4u;
label_3206c4:
    // 0x3206c4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3206c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3206c8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3206c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3206cc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3206ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3206d0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3206d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3206d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3206d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3206d8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3206d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3206dc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3206dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3206e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3206e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3206e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3206E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3206E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206E4u;
        // 0x3206e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3206E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3206ECu;
    // 0x3206ec: 0x0  nop
    ctx->pc = 0x3206ecu;
    // NOP
    ctx->pc = 0x3206f0u;
}
