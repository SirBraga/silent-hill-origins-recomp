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

// Function: sub_002867C0
// Address: 0x2867c0 - 0x286970
void sub_002867C0_0x2867c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002867C0_0x2867c0");
#endif

    switch (ctx->pc) {
        case 0x2867c0u: goto label_2867c0;
        case 0x2867c4u: goto label_2867c4;
        case 0x2867c8u: goto label_2867c8;
        case 0x2867ccu: goto label_2867cc;
        case 0x2867d0u: goto label_2867d0;
        case 0x2867d4u: goto label_2867d4;
        case 0x2867d8u: goto label_2867d8;
        case 0x2867dcu: goto label_2867dc;
        case 0x2867e0u: goto label_2867e0;
        case 0x2867e4u: goto label_2867e4;
        case 0x2867e8u: goto label_2867e8;
        case 0x2867ecu: goto label_2867ec;
        case 0x2867f0u: goto label_2867f0;
        case 0x2867f4u: goto label_2867f4;
        case 0x2867f8u: goto label_2867f8;
        case 0x2867fcu: goto label_2867fc;
        case 0x286800u: goto label_286800;
        case 0x286804u: goto label_286804;
        case 0x286808u: goto label_286808;
        case 0x28680cu: goto label_28680c;
        case 0x286810u: goto label_286810;
        case 0x286814u: goto label_286814;
        case 0x286818u: goto label_286818;
        case 0x28681cu: goto label_28681c;
        case 0x286820u: goto label_286820;
        case 0x286824u: goto label_286824;
        case 0x286828u: goto label_286828;
        case 0x28682cu: goto label_28682c;
        case 0x286830u: goto label_286830;
        case 0x286834u: goto label_286834;
        case 0x286838u: goto label_286838;
        case 0x28683cu: goto label_28683c;
        case 0x286840u: goto label_286840;
        case 0x286844u: goto label_286844;
        case 0x286848u: goto label_286848;
        case 0x28684cu: goto label_28684c;
        case 0x286850u: goto label_286850;
        case 0x286854u: goto label_286854;
        case 0x286858u: goto label_286858;
        case 0x28685cu: goto label_28685c;
        case 0x286860u: goto label_286860;
        case 0x286864u: goto label_286864;
        case 0x286868u: goto label_286868;
        case 0x28686cu: goto label_28686c;
        case 0x286870u: goto label_286870;
        case 0x286874u: goto label_286874;
        case 0x286878u: goto label_286878;
        case 0x28687cu: goto label_28687c;
        case 0x286880u: goto label_286880;
        case 0x286884u: goto label_286884;
        case 0x286888u: goto label_286888;
        case 0x28688cu: goto label_28688c;
        case 0x286890u: goto label_286890;
        case 0x286894u: goto label_286894;
        case 0x286898u: goto label_286898;
        case 0x28689cu: goto label_28689c;
        case 0x2868a0u: goto label_2868a0;
        case 0x2868a4u: goto label_2868a4;
        case 0x2868a8u: goto label_2868a8;
        case 0x2868acu: goto label_2868ac;
        case 0x2868b0u: goto label_2868b0;
        case 0x2868b4u: goto label_2868b4;
        case 0x2868b8u: goto label_2868b8;
        case 0x2868bcu: goto label_2868bc;
        case 0x2868c0u: goto label_2868c0;
        case 0x2868c4u: goto label_2868c4;
        case 0x2868c8u: goto label_2868c8;
        case 0x2868ccu: goto label_2868cc;
        case 0x2868d0u: goto label_2868d0;
        case 0x2868d4u: goto label_2868d4;
        case 0x2868d8u: goto label_2868d8;
        case 0x2868dcu: goto label_2868dc;
        case 0x2868e0u: goto label_2868e0;
        case 0x2868e4u: goto label_2868e4;
        case 0x2868e8u: goto label_2868e8;
        case 0x2868ecu: goto label_2868ec;
        case 0x2868f0u: goto label_2868f0;
        case 0x2868f4u: goto label_2868f4;
        case 0x2868f8u: goto label_2868f8;
        case 0x2868fcu: goto label_2868fc;
        case 0x286900u: goto label_286900;
        case 0x286904u: goto label_286904;
        case 0x286908u: goto label_286908;
        case 0x28690cu: goto label_28690c;
        case 0x286910u: goto label_286910;
        case 0x286914u: goto label_286914;
        case 0x286918u: goto label_286918;
        case 0x28691cu: goto label_28691c;
        case 0x286920u: goto label_286920;
        case 0x286924u: goto label_286924;
        case 0x286928u: goto label_286928;
        case 0x28692cu: goto label_28692c;
        case 0x286930u: goto label_286930;
        case 0x286934u: goto label_286934;
        case 0x286938u: goto label_286938;
        case 0x28693cu: goto label_28693c;
        case 0x286940u: goto label_286940;
        case 0x286944u: goto label_286944;
        case 0x286948u: goto label_286948;
        case 0x28694cu: goto label_28694c;
        case 0x286950u: goto label_286950;
        case 0x286954u: goto label_286954;
        case 0x286958u: goto label_286958;
        case 0x28695cu: goto label_28695c;
        case 0x286960u: goto label_286960;
        case 0x286964u: goto label_286964;
        case 0x286968u: goto label_286968;
        case 0x28696cu: goto label_28696c;
        default: break;
    }

    ctx->pc = 0x2867c0u;

label_2867c0:
    // 0x2867c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2867c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2867c4:
    // 0x2867c4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2867c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2867c8:
    // 0x2867c8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2867c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2867cc:
    // 0x2867cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2867ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2867d0:
    // 0x2867d0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2867d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2867d4:
    // 0x2867d4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2867d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2867d8:
    // 0x2867d8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2867d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2867dc:
    // 0x2867dc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2867dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2867e0:
    // 0x2867e0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2867e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2867e4:
    // 0x2867e4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2867e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2867e8:
    // 0x2867e8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2867e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_2867ec:
    // 0x2867ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2867ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2867f0:
    // 0x2867f0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2867f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2867f4:
    // 0x2867f4: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_2867f8:
    if (ctx->pc == 0x2867F8u) {
        ctx->pc = 0x2867F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867F4u;
        // 0x2867f8: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2867FCu;
        goto label_2867fc;
    }
    ctx->pc = 0x2867F4u;
    {
        const bool branch_taken_0x2867f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2867F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867F4u;
        // 0x2867f8: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867f4) {
            ctx->pc = 0x2868D4u;
            goto label_2868d4;
        }
    }
    ctx->pc = 0x2867FCu;
label_2867fc:
    // 0x2867fc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2867fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_286800:
    // 0x286800: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x286800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286804:
    // 0x286804: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
label_286808:
    if (ctx->pc == 0x286808u) {
        ctx->pc = 0x286808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286804u;
        // 0x286808: 0x3c1e0073  lui         $fp, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28680Cu;
        goto label_28680c;
    }
    ctx->pc = 0x286804u;
    {
        const bool branch_taken_0x286804 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x286808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286804u;
        // 0x286808: 0x3c1e0073  lui         $fp, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286804) {
            ctx->pc = 0x2868C4u;
            goto label_2868c4;
        }
    }
    ctx->pc = 0x28680Cu;
label_28680c:
    // 0x28680c: 0x27d60fc8  addiu       $s6, $fp, 0xFC8
    ctx->pc = 0x28680cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 4040));
label_286810:
    // 0x286810: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x286810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_286814:
    // 0x286814: 0x0  nop
    ctx->pc = 0x286814u;
    // NOP
label_286818:
    // 0x286818: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x286818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_28681c:
    // 0x28681c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x28681cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_286820:
    // 0x286820: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x286820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_286824:
    // 0x286824: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_286828:
    if (ctx->pc == 0x286828u) {
        ctx->pc = 0x286828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286824u;
        // 0x286828: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28682Cu;
        goto label_28682c;
    }
    ctx->pc = 0x286824u;
    {
        const bool branch_taken_0x286824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x286824) {
            ctx->pc = 0x286828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286824u;
            // 0x286828: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286840u;
            goto label_286840;
        }
    }
    ctx->pc = 0x28682Cu;
label_28682c:
    // 0x28682c: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x28682cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_286830:
    // 0x286830: 0x40f809  jalr        $v0
label_286834:
    if (ctx->pc == 0x286834u) {
        ctx->pc = 0x286838u;
        goto label_286838;
    }
    ctx->pc = 0x286830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x286838u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286830u, 0x286838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286838u;
label_286838:
    // 0x286838: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x286838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_28683c:
    // 0x28683c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28683cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_286840:
    // 0x286840: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x286840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_286844:
    // 0x286844: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_286848:
    if (ctx->pc == 0x286848u) {
        ctx->pc = 0x286848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286844u;
        // 0x286848: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28684Cu;
        goto label_28684c;
    }
    ctx->pc = 0x286844u;
    {
        const bool branch_taken_0x286844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x286848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286844u;
        // 0x286848: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286844) {
            ctx->pc = 0x286894u;
            goto label_286894;
        }
    }
    ctx->pc = 0x28684Cu;
label_28684c:
    // 0x28684c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_286850:
    // 0x286850: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x286850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286854:
    // 0x286854: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_286858:
    if (ctx->pc == 0x286858u) {
        ctx->pc = 0x286858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286854u;
        // 0x286858: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28685Cu;
        goto label_28685c;
    }
    ctx->pc = 0x286854u;
    {
        const bool branch_taken_0x286854 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x286858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286854u;
        // 0x286858: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286854) {
            ctx->pc = 0x286894u;
            goto label_286894;
        }
    }
    ctx->pc = 0x28685Cu;
label_28685c:
    // 0x28685c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x28685cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_286860:
    // 0x286860: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x286860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_286864:
    // 0x286864: 0x24540fc8  addiu       $s4, $v0, 0xFC8
    ctx->pc = 0x286864u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_286868:
    // 0x286868: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x286868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28686c:
    // 0x28686c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_286870:
    if (ctx->pc == 0x286870u) {
        ctx->pc = 0x286870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28686Cu;
        // 0x286870: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286874u;
        goto label_286874;
    }
    ctx->pc = 0x28686Cu;
    {
        const bool branch_taken_0x28686c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28686c) {
            ctx->pc = 0x286870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28686Cu;
            // 0x286870: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286884u;
            goto label_286884;
        }
    }
    ctx->pc = 0x286874u;
label_286874:
    // 0x286874: 0x8e82010c  lw          $v0, 0x10C($s4)
    ctx->pc = 0x286874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_286878:
    // 0x286878: 0x40f809  jalr        $v0
label_28687c:
    if (ctx->pc == 0x28687Cu) {
        ctx->pc = 0x286880u;
        goto label_286880;
    }
    ctx->pc = 0x286878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x286880u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286878u, 0x286880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286880u;
label_286880:
    // 0x286880: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x286880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_286884:
    // 0x286884: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x286884u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_286888:
    // 0x286888: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x286888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28688c:
    // 0x28688c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_286890:
    if (ctx->pc == 0x286890u) {
        ctx->pc = 0x286890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28688Cu;
        // 0x286890: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286894u;
        goto label_286894;
    }
    ctx->pc = 0x28688Cu;
    {
        const bool branch_taken_0x28688c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28688Cu;
        // 0x286890: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28688c) {
            ctx->pc = 0x286868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286868;
        }
    }
    ctx->pc = 0x286894u;
label_286894:
    // 0x286894: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x286894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_286898:
    // 0x286898: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_28689c:
    if (ctx->pc == 0x28689Cu) {
        ctx->pc = 0x28689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286898u;
        // 0x28689c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2868A0u;
        goto label_2868a0;
    }
    ctx->pc = 0x286898u;
    {
        const bool branch_taken_0x286898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x286898) {
            ctx->pc = 0x28689Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286898u;
            // 0x28689c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2868B4u;
            goto label_2868b4;
        }
    }
    ctx->pc = 0x2868A0u;
label_2868a0:
    // 0x2868a0: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x2868a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_2868a4:
    // 0x2868a4: 0x40f809  jalr        $v0
label_2868a8:
    if (ctx->pc == 0x2868A8u) {
        ctx->pc = 0x2868ACu;
        goto label_2868ac;
    }
    ctx->pc = 0x2868A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2868ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2868A4u, 0x2868ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2868ACu;
label_2868ac:
    // 0x2868ac: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2868acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_2868b0:
    // 0x2868b0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2868b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2868b4:
    // 0x2868b4: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x2868b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2868b8:
    // 0x2868b8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2868b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2868bc:
    // 0x2868bc: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
label_2868c0:
    if (ctx->pc == 0x2868C0u) {
        ctx->pc = 0x2868C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868BCu;
        // 0x2868c0: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2868C4u;
        goto label_2868c4;
    }
    ctx->pc = 0x2868BCu;
    {
        const bool branch_taken_0x2868bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2868bc) {
            ctx->pc = 0x2868C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2868BCu;
            // 0x2868c0: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286818;
        }
    }
    ctx->pc = 0x2868C4u;
label_2868c4:
    // 0x2868c4: 0x27c30fc8  addiu       $v1, $fp, 0xFC8
    ctx->pc = 0x2868c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4040));
label_2868c8:
    // 0x2868c8: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x2868c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2868cc:
    // 0x2868cc: 0x40f809  jalr        $v0
label_2868d0:
    if (ctx->pc == 0x2868D0u) {
        ctx->pc = 0x2868D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868CCu;
        // 0x2868d0: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2868D4u;
        goto label_2868d4;
    }
    ctx->pc = 0x2868CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2868D4u);
        ctx->pc = 0x2868D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868CCu;
        // 0x2868d0: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2868CCu, 0x2868D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2868D4u;
label_2868d4:
    // 0x2868d4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2868d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2868d8:
    // 0x2868d8: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2868d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2868dc:
    // 0x2868dc: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x2868dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2868e0:
    // 0x2868e0: 0x18800017  blez        $a0, . + 4 + (0x17 << 2)
label_2868e4:
    if (ctx->pc == 0x2868E4u) {
        ctx->pc = 0x2868E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868E0u;
        // 0x2868e4: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2868E8u;
        goto label_2868e8;
    }
    ctx->pc = 0x2868E0u;
    {
        const bool branch_taken_0x2868e0 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2868E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868E0u;
        // 0x2868e4: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2868e0) {
            ctx->pc = 0x286940u;
            goto label_286940;
        }
    }
    ctx->pc = 0x2868E8u;
label_2868e8:
    // 0x2868e8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2868e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2868ec:
    // 0x2868ec: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2868ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2868f0:
    // 0x2868f0: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x2868f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_2868f4:
    // 0x2868f4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2868f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2868f8:
    // 0x2868f8: 0x34a5011f  ori         $a1, $a1, 0x11F
    ctx->pc = 0x2868f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
label_2868fc:
    // 0x2868fc: 0x40f809  jalr        $v0
label_286900:
    if (ctx->pc == 0x286900u) {
        ctx->pc = 0x286900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868FCu;
        // 0x286900: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286904u;
        goto label_286904;
    }
    ctx->pc = 0x2868FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x286904u);
        ctx->pc = 0x286900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868FCu;
        // 0x286900: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2868FCu, 0x286904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286904u;
label_286904:
    // 0x286904: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x286904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_286908:
    // 0x286908: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_28690c:
    if (ctx->pc == 0x28690Cu) {
        ctx->pc = 0x28690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286908u;
        // 0x28690c: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286910u;
        goto label_286910;
    }
    ctx->pc = 0x286908u;
    {
        const bool branch_taken_0x286908 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x28690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286908u;
        // 0x28690c: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286908) {
            ctx->pc = 0x286940u;
            goto label_286940;
        }
    }
    ctx->pc = 0x286910u;
label_286910:
    // 0x286910: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x286910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286914:
    // 0x286914: 0x0  nop
    ctx->pc = 0x286914u;
    // NOP
label_286918:
    // 0x286918: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x286918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_28691c:
    // 0x28691c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28691cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_286920:
    // 0x286920: 0x8ee50004  lw          $a1, 0x4($s7)
    ctx->pc = 0x286920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_286924:
    // 0x286924: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x286924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_286928:
    // 0x286928: 0xc0a1882  jal         func_286208
label_28692c:
    if (ctx->pc == 0x28692Cu) {
        ctx->pc = 0x28692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286928u;
        // 0x28692c: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286930u;
        goto label_286930;
    }
    ctx->pc = 0x286928u;
    SET_GPR_U32(ctx, 31, 0x286930u);
    ctx->pc = 0x28692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286928u;
    // 0x28692c: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286208u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x286208u, 0x286928u, 0x286930u)) {
        return;
    }
    ctx->pc = 0x286930u;
label_286930:
    // 0x286930: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x286930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_286934:
    // 0x286934: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x286934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_286938:
    // 0x286938: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_28693c:
    if (ctx->pc == 0x28693Cu) {
        ctx->pc = 0x28693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286938u;
        // 0x28693c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286940u;
        goto label_286940;
    }
    ctx->pc = 0x286938u;
    {
        const bool branch_taken_0x286938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286938u;
        // 0x28693c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286938) {
            ctx->pc = 0x286918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286918;
        }
    }
    ctx->pc = 0x286940u;
label_286940:
    // 0x286940: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x286940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_286944:
    // 0x286944: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x286944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_286948:
    // 0x286948: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x286948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28694c:
    // 0x28694c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x28694cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_286950:
    // 0x286950: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x286950u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_286954:
    // 0x286954: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x286954u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_286958:
    // 0x286958: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x286958u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28695c:
    // 0x28695c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x28695cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_286960:
    // 0x286960: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x286960u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_286964:
    // 0x286964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x286964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_286968:
    // 0x286968: 0x3e00008  jr          $ra
label_28696c:
    if (ctx->pc == 0x28696Cu) {
        ctx->pc = 0x28696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286968u;
        // 0x28696c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286970u;
        goto label_fallthrough_0x286968;
    }
    ctx->pc = 0x286968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286968u;
        // 0x28696c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x286968:
    ctx->pc = 0x286970u;
}
