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

// Function: sub_0015A578
// Address: 0x15a578 - 0x15a6a0
void sub_0015A578_0x15a578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A578_0x15a578");
#endif

    switch (ctx->pc) {
        case 0x15a5c4u: goto label_15a5c4;
        case 0x15a648u: goto label_15a648;
        case 0x15a64cu: goto label_15a64c;
        default: break;
    }

    ctx->pc = 0x15a578u;

    // 0x15a578: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15a578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15a57c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15a57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15a580: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15a580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15a584: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15a584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a588: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x15a588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x15a58c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15a58cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a590: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x15a590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a594: 0x1232003b  beq         $s1, $s2, . + 4 + (0x3B << 2)
    ctx->pc = 0x15A594u;
    {
        const bool branch_taken_0x15a594 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x15A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A594u;
        // 0x15a598: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a594) {
            ctx->pc = 0x15A684u;
            goto label_15a684;
        }
    }
    ctx->pc = 0x15A59Cu;
    // 0x15a59c: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x15a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x15a5a0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15A5A0u;
    {
        const bool branch_taken_0x15a5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5A0u;
        // 0x15a5a4: 0x251102a  slt         $v0, $s2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a5a0) {
            ctx->pc = 0x15A5CCu;
            goto label_15a5cc;
        }
    }
    ctx->pc = 0x15A5A8u;
    // 0x15a5a8: 0x8e040284  lw          $a0, 0x284($s0)
    ctx->pc = 0x15a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
    // 0x15a5ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15a5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15a5b0: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x15a5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x15a5b4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x15a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15a5b8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15a5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15a5bc: 0xc080924  jal         func_202490
    ctx->pc = 0x15A5BCu;
    SET_GPR_U32(ctx, 31, 0x15A5C4u);
    ctx->pc = 0x15A5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A5BCu;
    // 0x15a5c0: 0xae020294  sw          $v0, 0x294($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x15A5BCu, 0x15A5C4u)) {
        return;
    }
    ctx->pc = 0x15A5C4u;
label_15a5c4:
    // 0x15a5c4: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x15a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
    // 0x15a5c8: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x15a5c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15a5cc:
    // 0x15a5cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A5CCu;
    {
        const bool branch_taken_0x15a5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5CCu;
        // 0x15a5d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a5cc) {
            ctx->pc = 0x15A5DCu;
            goto label_15a5dc;
        }
    }
    ctx->pc = 0x15A5D4u;
    // 0x15a5d4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15a5d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a5d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15a5d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a5dc:
    // 0x15a5dc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x15a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x15a5e0: 0x8e03035c  lw          $v1, 0x35C($s0)
    ctx->pc = 0x15a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x15a5e4: 0x2422818  mult        $a1, $s2, $v0
    ctx->pc = 0x15a5e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15a5e8: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x15a5e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15a5ec: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x15a5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15a5f0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x15a5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15a5f4: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x15a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x15a5f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A5F8u;
    {
        const bool branch_taken_0x15a5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a5f8) {
            ctx->pc = 0x15A5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A5F8u;
            // 0x15a5fc: 0x8e030298  lw          $v1, 0x298($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A610u;
            goto label_15a610;
        }
    }
    ctx->pc = 0x15A600u;
    // 0x15a600: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x15a600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x15a604: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x15A604u;
    {
        const bool branch_taken_0x15a604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a604) {
            ctx->pc = 0x15A608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A604u;
            // 0x15a608: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A688u;
            goto label_15a688;
        }
    }
    ctx->pc = 0x15A60Cu;
    // 0x15a60c: 0x8e030298  lw          $v1, 0x298($s0)
    ctx->pc = 0x15a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_15a610:
    // 0x15a610: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x15a610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x15a614: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x15a614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x15a618: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15a618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15a61c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x15a61cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x15a620: 0x8e020298  lw          $v0, 0x298($s0)
    ctx->pc = 0x15a620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x15a624: 0x8e030364  lw          $v1, 0x364($s0)
    ctx->pc = 0x15a624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x15a628: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x15a628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x15a62c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15a630: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x15a630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x15a634: 0x8e030364  lw          $v1, 0x364($s0)
    ctx->pc = 0x15a634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x15a638: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15a638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15a63c: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15A63Cu;
    {
        const bool branch_taken_0x15a63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x15A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A63Cu;
        // 0x15a640: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a63c) {
            ctx->pc = 0x15A664u;
            goto label_15a664;
        }
    }
    ctx->pc = 0x15A644u;
    // 0x15a644: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15a644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_15a648:
    // 0x15a648: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x15a648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_15a64c:
    // 0x15a64c: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x15a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x15a650: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15a650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15a654: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15a654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15a658: 0x0  nop
    ctx->pc = 0x15a658u;
    // NOP
    // 0x15a65c: 0x5485fffb  bnel        $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x15A65Cu;
    {
        const bool branch_taken_0x15a65c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x15a65c) {
            ctx->pc = 0x15A660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A65Cu;
            // 0x15a660: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A64Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a64c;
        }
    }
    ctx->pc = 0x15A664u;
label_15a664:
    // 0x15a664: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15a664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15a668: 0x5446fff7  bnel        $v0, $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x15A668u;
    {
        const bool branch_taken_0x15a668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x15a668) {
            ctx->pc = 0x15A66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A668u;
            // 0x15a66c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a648;
        }
    }
    ctx->pc = 0x15A670u;
    // 0x15a670: 0x8e020298  lw          $v0, 0x298($s0)
    ctx->pc = 0x15a670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x15a674: 0x54e20004  bnel        $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A674u;
    {
        const bool branch_taken_0x15a674 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x15a674) {
            ctx->pc = 0x15A678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A674u;
            // 0x15a678: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A688u;
            goto label_15a688;
        }
    }
    ctx->pc = 0x15A67Cu;
    // 0x15a67c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x15a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15a680: 0xae020298  sw          $v0, 0x298($s0)
    ctx->pc = 0x15a680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 2));
label_15a684:
    // 0x15a684: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15a684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15a688:
    // 0x15a688: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15a688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a68c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x15a68cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a694: 0x3e00008  jr          $ra
    ctx->pc = 0x15A694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A694u;
        // 0x15a698: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A69Cu;
    // 0x15a69c: 0x0  nop
    ctx->pc = 0x15a69cu;
    // NOP
    ctx->pc = 0x15a6a0u;
}
