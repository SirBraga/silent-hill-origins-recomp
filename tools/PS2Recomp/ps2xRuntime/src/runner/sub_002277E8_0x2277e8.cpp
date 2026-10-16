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

// Function: sub_002277E8
// Address: 0x2277e8 - 0x2278c8
void sub_002277E8_0x2277e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002277E8_0x2277e8");
#endif

    switch (ctx->pc) {
        case 0x2277e8u: goto label_2277e8;
        case 0x2277ecu: goto label_2277ec;
        case 0x2277f0u: goto label_2277f0;
        case 0x2277f4u: goto label_2277f4;
        case 0x2277f8u: goto label_2277f8;
        case 0x2277fcu: goto label_2277fc;
        case 0x227800u: goto label_227800;
        case 0x227804u: goto label_227804;
        case 0x227808u: goto label_227808;
        case 0x22780cu: goto label_22780c;
        case 0x227810u: goto label_227810;
        case 0x227814u: goto label_227814;
        case 0x227818u: goto label_227818;
        case 0x22781cu: goto label_22781c;
        case 0x227820u: goto label_227820;
        case 0x227824u: goto label_227824;
        case 0x227828u: goto label_227828;
        case 0x22782cu: goto label_22782c;
        case 0x227830u: goto label_227830;
        case 0x227834u: goto label_227834;
        case 0x227838u: goto label_227838;
        case 0x22783cu: goto label_22783c;
        case 0x227840u: goto label_227840;
        case 0x227844u: goto label_227844;
        case 0x227848u: goto label_227848;
        case 0x22784cu: goto label_22784c;
        case 0x227850u: goto label_227850;
        case 0x227854u: goto label_227854;
        case 0x227858u: goto label_227858;
        case 0x22785cu: goto label_22785c;
        case 0x227860u: goto label_227860;
        case 0x227864u: goto label_227864;
        case 0x227868u: goto label_227868;
        case 0x22786cu: goto label_22786c;
        case 0x227870u: goto label_227870;
        case 0x227874u: goto label_227874;
        case 0x227878u: goto label_227878;
        case 0x22787cu: goto label_22787c;
        case 0x227880u: goto label_227880;
        case 0x227884u: goto label_227884;
        case 0x227888u: goto label_227888;
        case 0x22788cu: goto label_22788c;
        case 0x227890u: goto label_227890;
        case 0x227894u: goto label_227894;
        case 0x227898u: goto label_227898;
        case 0x22789cu: goto label_22789c;
        case 0x2278a0u: goto label_2278a0;
        case 0x2278a4u: goto label_2278a4;
        case 0x2278a8u: goto label_2278a8;
        case 0x2278acu: goto label_2278ac;
        case 0x2278b0u: goto label_2278b0;
        case 0x2278b4u: goto label_2278b4;
        case 0x2278b8u: goto label_2278b8;
        case 0x2278bcu: goto label_2278bc;
        case 0x2278c0u: goto label_2278c0;
        case 0x2278c4u: goto label_2278c4;
        default: break;
    }

    ctx->pc = 0x2277e8u;

label_2277e8:
    // 0x2277e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2277e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2277ec:
    // 0x2277ec: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2277ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2277f0:
    // 0x2277f0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2277f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2277f4:
    // 0x2277f4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2277f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2277f8:
    // 0x2277f8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2277f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2277fc:
    // 0x2277fc: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x2277fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_227800:
    // 0x227800: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x227800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_227804:
    // 0x227804: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x227804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_227808:
    // 0x227808: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x227808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_22780c:
    // 0x22780c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x22780cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_227810:
    // 0x227810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_227814:
    // 0x227814: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x227814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_227818:
    // 0x227818: 0x40f809  jalr        $v0
label_22781c:
    if (ctx->pc == 0x22781Cu) {
        ctx->pc = 0x22781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227818u;
        // 0x22781c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227820u;
        goto label_227820;
    }
    ctx->pc = 0x227818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227820u);
        ctx->pc = 0x22781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227818u;
        // 0x22781c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227818u, 0x227820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227820u;
label_227820:
    // 0x227820: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x227820u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_227824:
    // 0x227824: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x227824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_227828:
    // 0x227828: 0x8c423e90  lw          $v0, 0x3E90($v0)
    ctx->pc = 0x227828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16016)));
label_22782c:
    // 0x22782c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22782cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_227830:
    // 0x227830: 0x8c50021c  lw          $s0, 0x21C($v0)
    ctx->pc = 0x227830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
label_227834:
    // 0x227834: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_227838:
    if (ctx->pc == 0x227838u) {
        ctx->pc = 0x227838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227834u;
        // 0x227838: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22783Cu;
        goto label_22783c;
    }
    ctx->pc = 0x227834u;
    {
        const bool branch_taken_0x227834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x227838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227834u;
        // 0x227838: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227834) {
            ctx->pc = 0x22789Cu;
            goto label_22789c;
        }
    }
    ctx->pc = 0x22783Cu;
label_22783c:
    // 0x22783c: 0x8ea200cc  lw          $v0, 0xCC($s5)
    ctx->pc = 0x22783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
label_227840:
    // 0x227840: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x227840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_227844:
    // 0x227844: 0x40f809  jalr        $v0
label_227848:
    if (ctx->pc == 0x227848u) {
        ctx->pc = 0x227848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227844u;
        // 0x227848: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22784Cu;
        goto label_22784c;
    }
    ctx->pc = 0x227844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22784Cu);
        ctx->pc = 0x227848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227844u;
        // 0x227848: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227844u, 0x22784Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22784Cu;
label_22784c:
    // 0x22784c: 0xc09cd22  jal         func_273488
label_227850:
    if (ctx->pc == 0x227850u) {
        ctx->pc = 0x227850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22784Cu;
        // 0x227850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227854u;
        goto label_227854;
    }
    ctx->pc = 0x22784Cu;
    SET_GPR_U32(ctx, 31, 0x227854u);
    ctx->pc = 0x227850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22784Cu;
    // 0x227850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273488u, 0x22784Cu, 0x227854u)) {
        return;
    }
    ctx->pc = 0x227854u;
label_227854:
    // 0x227854: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_227858:
    if (ctx->pc == 0x227858u) {
        ctx->pc = 0x227858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227854u;
        // 0x227858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22785Cu;
        goto label_22785c;
    }
    ctx->pc = 0x227854u;
    {
        const bool branch_taken_0x227854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227854u;
        // 0x227858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227854) {
            ctx->pc = 0x227864u;
            goto label_227864;
        }
    }
    ctx->pc = 0x22785Cu;
label_22785c:
    // 0x22785c: 0x10000010  b           . + 4 + (0x10 << 2)
label_227860:
    if (ctx->pc == 0x227860u) {
        ctx->pc = 0x227860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22785Cu;
        // 0x227860: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227864u;
        goto label_227864;
    }
    ctx->pc = 0x22785Cu;
    {
        const bool branch_taken_0x22785c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22785Cu;
        // 0x227860: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22785c) {
            ctx->pc = 0x2278A0u;
            goto label_2278a0;
        }
    }
    ctx->pc = 0x227864u;
label_227864:
    // 0x227864: 0x26110014  addiu       $s1, $s0, 0x14
    ctx->pc = 0x227864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_227868:
    // 0x227868: 0x8ea200cc  lw          $v0, 0xCC($s5)
    ctx->pc = 0x227868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
label_22786c:
    // 0x22786c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22786cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_227870:
    // 0x227870: 0x40f809  jalr        $v0
label_227874:
    if (ctx->pc == 0x227874u) {
        ctx->pc = 0x227874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227870u;
        // 0x227874: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227878u;
        goto label_227878;
    }
    ctx->pc = 0x227870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227878u);
        ctx->pc = 0x227874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227870u;
        // 0x227874: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227870u, 0x227878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227878u;
label_227878:
    // 0x227878: 0xc09cd22  jal         func_273488
label_22787c:
    if (ctx->pc == 0x22787Cu) {
        ctx->pc = 0x22787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227878u;
        // 0x22787c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227880u;
        goto label_227880;
    }
    ctx->pc = 0x227878u;
    SET_GPR_U32(ctx, 31, 0x227880u);
    ctx->pc = 0x22787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227878u;
    // 0x22787c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273488u, 0x227878u, 0x227880u)) {
        return;
    }
    ctx->pc = 0x227880u;
label_227880:
    // 0x227880: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_227884:
    if (ctx->pc == 0x227884u) {
        ctx->pc = 0x227884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227880u;
        // 0x227884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227888u;
        goto label_227888;
    }
    ctx->pc = 0x227880u;
    {
        const bool branch_taken_0x227880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227880u;
        // 0x227884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227880) {
            ctx->pc = 0x227890u;
            goto label_227890;
        }
    }
    ctx->pc = 0x227888u;
label_227888:
    // 0x227888: 0x10000005  b           . + 4 + (0x5 << 2)
label_22788c:
    if (ctx->pc == 0x22788Cu) {
        ctx->pc = 0x22788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227888u;
        // 0x22788c: 0xae910000  sw          $s1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227890u;
        goto label_227890;
    }
    ctx->pc = 0x227888u;
    {
        const bool branch_taken_0x227888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227888u;
        // 0x22788c: 0xae910000  sw          $s1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227888) {
            ctx->pc = 0x2278A0u;
            goto label_2278a0;
        }
    }
    ctx->pc = 0x227890u;
label_227890:
    // 0x227890: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x227890u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_227894:
    // 0x227894: 0x5600ffea  bnel        $s0, $zero, . + 4 + (-0x16 << 2)
label_227898:
    if (ctx->pc == 0x227898u) {
        ctx->pc = 0x227898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227894u;
        // 0x227898: 0x8ea200cc  lw          $v0, 0xCC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22789Cu;
        goto label_22789c;
    }
    ctx->pc = 0x227894u;
    {
        const bool branch_taken_0x227894 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x227894) {
            ctx->pc = 0x227898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227894u;
            // 0x227898: 0x8ea200cc  lw          $v0, 0xCC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227840;
        }
    }
    ctx->pc = 0x22789Cu;
label_22789c:
    // 0x22789c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x22789cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2278a0:
    // 0x2278a0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2278a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2278a4:
    // 0x2278a4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2278a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2278a8:
    // 0x2278a8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2278a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2278ac:
    // 0x2278ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2278acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2278b0:
    // 0x2278b0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2278b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2278b4:
    // 0x2278b4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2278b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2278b8:
    // 0x2278b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2278b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2278bc:
    // 0x2278bc: 0x3e00008  jr          $ra
label_2278c0:
    if (ctx->pc == 0x2278C0u) {
        ctx->pc = 0x2278C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278BCu;
        // 0x2278c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2278C4u;
        goto label_2278c4;
    }
    ctx->pc = 0x2278BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2278C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278BCu;
        // 0x2278c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2278BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2278C4u;
label_2278c4:
    // 0x2278c4: 0x0  nop
    ctx->pc = 0x2278c4u;
    // NOP
    ctx->pc = 0x2278c8u;
}
