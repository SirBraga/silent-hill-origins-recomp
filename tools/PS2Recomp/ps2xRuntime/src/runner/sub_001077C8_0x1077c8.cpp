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

// Function: sub_001077C8
// Address: 0x1077c8 - 0x1079e0
void sub_001077C8_0x1077c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001077C8_0x1077c8");
#endif

    switch (ctx->pc) {
        case 0x1077c8u: goto label_1077c8;
        case 0x1077ccu: goto label_1077cc;
        case 0x1077d0u: goto label_1077d0;
        case 0x1077d4u: goto label_1077d4;
        case 0x1077d8u: goto label_1077d8;
        case 0x1077dcu: goto label_1077dc;
        case 0x1077e0u: goto label_1077e0;
        case 0x1077e4u: goto label_1077e4;
        case 0x1077e8u: goto label_1077e8;
        case 0x1077ecu: goto label_1077ec;
        case 0x1077f0u: goto label_1077f0;
        case 0x1077f4u: goto label_1077f4;
        case 0x1077f8u: goto label_1077f8;
        case 0x1077fcu: goto label_1077fc;
        case 0x107800u: goto label_107800;
        case 0x107804u: goto label_107804;
        case 0x107808u: goto label_107808;
        case 0x10780cu: goto label_10780c;
        case 0x107810u: goto label_107810;
        case 0x107814u: goto label_107814;
        case 0x107818u: goto label_107818;
        case 0x10781cu: goto label_10781c;
        case 0x107820u: goto label_107820;
        case 0x107824u: goto label_107824;
        case 0x107828u: goto label_107828;
        case 0x10782cu: goto label_10782c;
        case 0x107830u: goto label_107830;
        case 0x107834u: goto label_107834;
        case 0x107838u: goto label_107838;
        case 0x10783cu: goto label_10783c;
        case 0x107840u: goto label_107840;
        case 0x107844u: goto label_107844;
        case 0x107848u: goto label_107848;
        case 0x10784cu: goto label_10784c;
        case 0x107850u: goto label_107850;
        case 0x107854u: goto label_107854;
        case 0x107858u: goto label_107858;
        case 0x10785cu: goto label_10785c;
        case 0x107860u: goto label_107860;
        case 0x107864u: goto label_107864;
        case 0x107868u: goto label_107868;
        case 0x10786cu: goto label_10786c;
        case 0x107870u: goto label_107870;
        case 0x107874u: goto label_107874;
        case 0x107878u: goto label_107878;
        case 0x10787cu: goto label_10787c;
        case 0x107880u: goto label_107880;
        case 0x107884u: goto label_107884;
        case 0x107888u: goto label_107888;
        case 0x10788cu: goto label_10788c;
        case 0x107890u: goto label_107890;
        case 0x107894u: goto label_107894;
        case 0x107898u: goto label_107898;
        case 0x10789cu: goto label_10789c;
        case 0x1078a0u: goto label_1078a0;
        case 0x1078a4u: goto label_1078a4;
        case 0x1078a8u: goto label_1078a8;
        case 0x1078acu: goto label_1078ac;
        case 0x1078b0u: goto label_1078b0;
        case 0x1078b4u: goto label_1078b4;
        case 0x1078b8u: goto label_1078b8;
        case 0x1078bcu: goto label_1078bc;
        case 0x1078c0u: goto label_1078c0;
        case 0x1078c4u: goto label_1078c4;
        case 0x1078c8u: goto label_1078c8;
        case 0x1078ccu: goto label_1078cc;
        case 0x1078d0u: goto label_1078d0;
        case 0x1078d4u: goto label_1078d4;
        case 0x1078d8u: goto label_1078d8;
        case 0x1078dcu: goto label_1078dc;
        case 0x1078e0u: goto label_1078e0;
        case 0x1078e4u: goto label_1078e4;
        case 0x1078e8u: goto label_1078e8;
        case 0x1078ecu: goto label_1078ec;
        case 0x1078f0u: goto label_1078f0;
        case 0x1078f4u: goto label_1078f4;
        case 0x1078f8u: goto label_1078f8;
        case 0x1078fcu: goto label_1078fc;
        case 0x107900u: goto label_107900;
        case 0x107904u: goto label_107904;
        case 0x107908u: goto label_107908;
        case 0x10790cu: goto label_10790c;
        case 0x107910u: goto label_107910;
        case 0x107914u: goto label_107914;
        case 0x107918u: goto label_107918;
        case 0x10791cu: goto label_10791c;
        case 0x107920u: goto label_107920;
        case 0x107924u: goto label_107924;
        case 0x107928u: goto label_107928;
        case 0x10792cu: goto label_10792c;
        case 0x107930u: goto label_107930;
        case 0x107934u: goto label_107934;
        case 0x107938u: goto label_107938;
        case 0x10793cu: goto label_10793c;
        case 0x107940u: goto label_107940;
        case 0x107944u: goto label_107944;
        case 0x107948u: goto label_107948;
        case 0x10794cu: goto label_10794c;
        case 0x107950u: goto label_107950;
        case 0x107954u: goto label_107954;
        case 0x107958u: goto label_107958;
        case 0x10795cu: goto label_10795c;
        case 0x107960u: goto label_107960;
        case 0x107964u: goto label_107964;
        case 0x107968u: goto label_107968;
        case 0x10796cu: goto label_10796c;
        case 0x107970u: goto label_107970;
        case 0x107974u: goto label_107974;
        case 0x107978u: goto label_107978;
        case 0x10797cu: goto label_10797c;
        case 0x107980u: goto label_107980;
        case 0x107984u: goto label_107984;
        case 0x107988u: goto label_107988;
        case 0x10798cu: goto label_10798c;
        case 0x107990u: goto label_107990;
        case 0x107994u: goto label_107994;
        case 0x107998u: goto label_107998;
        case 0x10799cu: goto label_10799c;
        case 0x1079a0u: goto label_1079a0;
        case 0x1079a4u: goto label_1079a4;
        case 0x1079a8u: goto label_1079a8;
        case 0x1079acu: goto label_1079ac;
        case 0x1079b0u: goto label_1079b0;
        case 0x1079b4u: goto label_1079b4;
        case 0x1079b8u: goto label_1079b8;
        case 0x1079bcu: goto label_1079bc;
        case 0x1079c0u: goto label_1079c0;
        case 0x1079c4u: goto label_1079c4;
        case 0x1079c8u: goto label_1079c8;
        case 0x1079ccu: goto label_1079cc;
        case 0x1079d0u: goto label_1079d0;
        case 0x1079d4u: goto label_1079d4;
        case 0x1079d8u: goto label_1079d8;
        case 0x1079dcu: goto label_1079dc;
        default: break;
    }

    ctx->pc = 0x1077c8u;

label_1077c8:
    // 0x1077c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1077c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1077cc:
    // 0x1077cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1077ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1077d0:
    // 0x1077d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1077d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1077d4:
    // 0x1077d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1077d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1077d8:
    // 0x1077d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1077d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1077dc:
    // 0x1077dc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1077dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1077e0:
    // 0x1077e0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1077e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1077e4:
    // 0x1077e4: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_1077e8:
    if (ctx->pc == 0x1077E8u) {
        ctx->pc = 0x1077E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077E4u;
        // 0x1077e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1077ECu;
        goto label_1077ec;
    }
    ctx->pc = 0x1077E4u;
    {
        const bool branch_taken_0x1077e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1077E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077E4u;
        // 0x1077e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077e4) {
            ctx->pc = 0x1079C4u;
            goto label_1079c4;
        }
    }
    ctx->pc = 0x1077ECu;
label_1077ec:
    // 0x1077ec: 0xc080d20  jal         func_203480
label_1077f0:
    if (ctx->pc == 0x1077F0u) {
        ctx->pc = 0x1077F4u;
        goto label_1077f4;
    }
    ctx->pc = 0x1077ECu;
    SET_GPR_U32(ctx, 31, 0x1077F4u);
    ctx->pc = 0x203480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203480u, 0x1077ECu, 0x1077F4u)) {
        return;
    }
    ctx->pc = 0x1077F4u;
label_1077f4:
    // 0x1077f4: 0x50400074  beql        $v0, $zero, . + 4 + (0x74 << 2)
label_1077f8:
    if (ctx->pc == 0x1077F8u) {
        ctx->pc = 0x1077F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077F4u;
        // 0x1077f8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1077FCu;
        goto label_1077fc;
    }
    ctx->pc = 0x1077F4u;
    {
        const bool branch_taken_0x1077f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1077f4) {
            ctx->pc = 0x1077F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1077F4u;
            // 0x1077f8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1079C8u;
            goto label_1079c8;
        }
    }
    ctx->pc = 0x1077FCu;
label_1077fc:
    // 0x1077fc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1077fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_107800:
    // 0x107800: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_107804:
    if (ctx->pc == 0x107804u) {
        ctx->pc = 0x107804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107800u;
        // 0x107804: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107808u;
        goto label_107808;
    }
    ctx->pc = 0x107800u;
    {
        const bool branch_taken_0x107800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107800) {
            ctx->pc = 0x107804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107800u;
            // 0x107804: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107834u;
            goto label_107834;
        }
    }
    ctx->pc = 0x107808u;
label_107808:
    // 0x107808: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_10780c:
    // 0x10780c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_107810:
    if (ctx->pc == 0x107810u) {
        ctx->pc = 0x107810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10780Cu;
        // 0x107810: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107814u;
        goto label_107814;
    }
    ctx->pc = 0x10780Cu;
    {
        const bool branch_taken_0x10780c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10780Cu;
        // 0x107810: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10780c) {
            ctx->pc = 0x107830u;
            goto label_107830;
        }
    }
    ctx->pc = 0x107814u;
label_107814:
    // 0x107814: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x107814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_107818:
    // 0x107818: 0x24a57d78  addiu       $a1, $a1, 0x7D78
    ctx->pc = 0x107818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32120));
label_10781c:
    // 0x10781c: 0xc09545a  jal         func_255168
label_107820:
    if (ctx->pc == 0x107820u) {
        ctx->pc = 0x107820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10781Cu;
        // 0x107820: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107824u;
        goto label_107824;
    }
    ctx->pc = 0x10781Cu;
    SET_GPR_U32(ctx, 31, 0x107824u);
    ctx->pc = 0x107820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10781Cu;
    // 0x107820: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x10781Cu, 0x107824u)) {
        return;
    }
    ctx->pc = 0x107824u;
label_107824:
    // 0x107824: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x107824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_107828:
    // 0x107828: 0x50600067  beql        $v1, $zero, . + 4 + (0x67 << 2)
label_10782c:
    if (ctx->pc == 0x10782Cu) {
        ctx->pc = 0x10782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107828u;
        // 0x10782c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107830u;
        goto label_107830;
    }
    ctx->pc = 0x107828u;
    {
        const bool branch_taken_0x107828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x107828) {
            ctx->pc = 0x10782Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107828u;
            // 0x10782c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1079C8u;
            goto label_1079c8;
        }
    }
    ctx->pc = 0x107830u;
label_107830:
    // 0x107830: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x107830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_107834:
    // 0x107834: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x107834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_107838:
    // 0x107838: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x107838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10783c:
    // 0x10783c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x10783cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_107840:
    // 0x107840: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x107840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_107844:
    // 0x107844: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x107844u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_107848:
    // 0x107848: 0x40f809  jalr        $v0
label_10784c:
    if (ctx->pc == 0x10784Cu) {
        ctx->pc = 0x10784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107848u;
        // 0x10784c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107850u;
        goto label_107850;
    }
    ctx->pc = 0x107848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107850u);
        ctx->pc = 0x10784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107848u;
        // 0x10784c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107848u, 0x107850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107850u;
label_107850:
    // 0x107850: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107854:
    // 0x107854: 0x5080005c  beql        $a0, $zero, . + 4 + (0x5C << 2)
label_107858:
    if (ctx->pc == 0x107858u) {
        ctx->pc = 0x107858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107854u;
        // 0x107858: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10785Cu;
        goto label_10785c;
    }
    ctx->pc = 0x107854u;
    {
        const bool branch_taken_0x107854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x107854) {
            ctx->pc = 0x107858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107854u;
            // 0x107858: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1079C8u;
            goto label_1079c8;
        }
    }
    ctx->pc = 0x10785Cu;
label_10785c:
    // 0x10785c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x10785cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_107860:
    // 0x107860: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
label_107864:
    if (ctx->pc == 0x107864u) {
        ctx->pc = 0x107864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107860u;
        // 0x107864: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107868u;
        goto label_107868;
    }
    ctx->pc = 0x107860u;
    {
        const bool branch_taken_0x107860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107860u;
        // 0x107864: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107860) {
            ctx->pc = 0x107974u;
            goto label_107974;
        }
    }
    ctx->pc = 0x107868u;
label_107868:
    // 0x107868: 0x54620057  bnel        $v1, $v0, . + 4 + (0x57 << 2)
label_10786c:
    if (ctx->pc == 0x10786Cu) {
        ctx->pc = 0x10786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107868u;
        // 0x10786c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107870u;
        goto label_107870;
    }
    ctx->pc = 0x107868u;
    {
        const bool branch_taken_0x107868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107868) {
            ctx->pc = 0x10786Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107868u;
            // 0x10786c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1079C8u;
            goto label_1079c8;
        }
    }
    ctx->pc = 0x107870u;
label_107870:
    // 0x107870: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x107870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_107874:
    // 0x107874: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_107878:
    if (ctx->pc == 0x107878u) {
        ctx->pc = 0x10787Cu;
        goto label_10787c;
    }
    ctx->pc = 0x107874u;
    {
        const bool branch_taken_0x107874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107874) {
            ctx->pc = 0x107890u;
            goto label_107890;
        }
    }
    ctx->pc = 0x10787Cu;
label_10787c:
    // 0x10787c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x10787cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_107880:
    // 0x107880: 0xc09d64c  jal         func_275930
label_107884:
    if (ctx->pc == 0x107884u) {
        ctx->pc = 0x107884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107880u;
        // 0x107884: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107888u;
        goto label_107888;
    }
    ctx->pc = 0x107880u;
    SET_GPR_U32(ctx, 31, 0x107888u);
    ctx->pc = 0x107884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107880u;
    // 0x107884: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x107880u, 0x107888u)) {
        return;
    }
    ctx->pc = 0x107888u;
label_107888:
    // 0x107888: 0xc0942f2  jal         func_250BC8
label_10788c:
    if (ctx->pc == 0x10788Cu) {
        ctx->pc = 0x10788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107888u;
        // 0x10788c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107890u;
        goto label_107890;
    }
    ctx->pc = 0x107888u;
    SET_GPR_U32(ctx, 31, 0x107890u);
    ctx->pc = 0x10788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107888u;
    // 0x10788c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250BC8u, 0x107888u, 0x107890u)) {
        return;
    }
    ctx->pc = 0x107890u;
label_107890:
    // 0x107890: 0xc07600c  jal         func_1D8030
label_107894:
    if (ctx->pc == 0x107894u) {
        ctx->pc = 0x107898u;
        goto label_107898;
    }
    ctx->pc = 0x107890u;
    SET_GPR_U32(ctx, 31, 0x107898u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x107890u, 0x107898u)) {
        return;
    }
    ctx->pc = 0x107898u;
label_107898:
    // 0x107898: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x107898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_10789c:
    // 0x10789c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x10789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1078a0:
    // 0x1078a0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1078a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1078a4:
    // 0x1078a4: 0xc077b78  jal         func_1DEDE0
label_1078a8:
    if (ctx->pc == 0x1078A8u) {
        ctx->pc = 0x1078A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078A4u;
        // 0x1078a8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1078ACu;
        goto label_1078ac;
    }
    ctx->pc = 0x1078A4u;
    SET_GPR_U32(ctx, 31, 0x1078ACu);
    ctx->pc = 0x1078A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1078A4u;
    // 0x1078a8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEDE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DEDE0u, 0x1078A4u, 0x1078ACu)) {
        return;
    }
    ctx->pc = 0x1078ACu;
label_1078ac:
    // 0x1078ac: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1078acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1078b0:
    // 0x1078b0: 0xc076faa  jal         func_1DBEA8
label_1078b4:
    if (ctx->pc == 0x1078B4u) {
        ctx->pc = 0x1078B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078B0u;
        // 0x1078b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1078B8u;
        goto label_1078b8;
    }
    ctx->pc = 0x1078B0u;
    SET_GPR_U32(ctx, 31, 0x1078B8u);
    ctx->pc = 0x1078B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1078B0u;
    // 0x1078b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBEA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DBEA8u, 0x1078B0u, 0x1078B8u)) {
        return;
    }
    ctx->pc = 0x1078B8u;
label_1078b8:
    // 0x1078b8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1078b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1078bc:
    // 0x1078bc: 0xc076f76  jal         func_1DBDD8
label_1078c0:
    if (ctx->pc == 0x1078C0u) {
        ctx->pc = 0x1078C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078BCu;
        // 0x1078c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1078C4u;
        goto label_1078c4;
    }
    ctx->pc = 0x1078BCu;
    SET_GPR_U32(ctx, 31, 0x1078C4u);
    ctx->pc = 0x1078C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1078BCu;
    // 0x1078c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBDD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DBDD8u, 0x1078BCu, 0x1078C4u)) {
        return;
    }
    ctx->pc = 0x1078C4u;
label_1078c4:
    // 0x1078c4: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1078c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1078c8:
    // 0x1078c8: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_1078cc:
    if (ctx->pc == 0x1078CCu) {
        ctx->pc = 0x1078CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078C8u;
        // 0x1078cc: 0xc6000028  lwc1        $f0, 0x28($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1078D0u;
        goto label_1078d0;
    }
    ctx->pc = 0x1078C8u;
    {
        const bool branch_taken_0x1078c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1078c8) {
            ctx->pc = 0x1078CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1078C8u;
            // 0x1078cc: 0xc6000028  lwc1        $f0, 0x28($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1078E8u;
            goto label_1078e8;
        }
    }
    ctx->pc = 0x1078D0u;
label_1078d0:
    // 0x1078d0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1078d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1078d4:
    // 0x1078d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1078d8:
    if (ctx->pc == 0x1078D8u) {
        ctx->pc = 0x1078D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078D4u;
        // 0x1078d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1078DCu;
        goto label_1078dc;
    }
    ctx->pc = 0x1078D4u;
    {
        const bool branch_taken_0x1078d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1078D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078D4u;
        // 0x1078d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1078d4) {
            ctx->pc = 0x1078E4u;
            goto label_1078e4;
        }
    }
    ctx->pc = 0x1078DCu;
label_1078dc:
    // 0x1078dc: 0xc07b5c0  jal         func_1ED700
label_1078e0:
    if (ctx->pc == 0x1078E0u) {
        ctx->pc = 0x1078E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078DCu;
        // 0x1078e0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1078E4u;
        goto label_1078e4;
    }
    ctx->pc = 0x1078DCu;
    SET_GPR_U32(ctx, 31, 0x1078E4u);
    ctx->pc = 0x1078E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1078DCu;
    // 0x1078e0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED700u, 0x1078DCu, 0x1078E4u)) {
        return;
    }
    ctx->pc = 0x1078E4u;
label_1078e4:
    // 0x1078e4: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1078e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1078e8:
    // 0x1078e8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1078e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1078ec:
    // 0x1078ec: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1078ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1078f0:
    // 0x1078f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1078f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1078f4:
    // 0x1078f4: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x1078f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1078f8:
    // 0x1078f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1078fc:
    if (ctx->pc == 0x1078FCu) {
        ctx->pc = 0x1078FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078F8u;
        // 0x1078fc: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x107900u;
        goto label_107900;
    }
    ctx->pc = 0x1078F8u;
    {
        const bool branch_taken_0x1078f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1078FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078F8u;
        // 0x1078fc: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1078f8) {
            ctx->pc = 0x107918u;
            goto label_107918;
        }
    }
    ctx->pc = 0x107900u;
label_107900:
    // 0x107900: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x107900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_107904:
    // 0x107904: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_107908:
    if (ctx->pc == 0x107908u) {
        ctx->pc = 0x10790Cu;
        goto label_10790c;
    }
    ctx->pc = 0x107904u;
    {
        const bool branch_taken_0x107904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107904) {
            ctx->pc = 0x107918u;
            goto label_107918;
        }
    }
    ctx->pc = 0x10790Cu;
label_10790c:
    // 0x10790c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_107910:
    // 0x107910: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_107914:
    if (ctx->pc == 0x107914u) {
        ctx->pc = 0x107914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107910u;
        // 0x107914: 0xc441000c  lwc1        $f1, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x107918u;
        goto label_107918;
    }
    ctx->pc = 0x107910u;
    {
        const bool branch_taken_0x107910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107910) {
            ctx->pc = 0x107914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107910u;
            // 0x107914: 0xc441000c  lwc1        $f1, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x107918u;
            goto label_107918;
        }
    }
    ctx->pc = 0x107918u;
label_107918:
    // 0x107918: 0x460c0836  c.le.s      $f1, $f12
    ctx->pc = 0x107918u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10791c:
    // 0x10791c: 0x0  nop
    ctx->pc = 0x10791cu;
    // NOP
label_107920:
    // 0x107920: 0x45020029  bc1fl       . + 4 + (0x29 << 2)
label_107924:
    if (ctx->pc == 0x107924u) {
        ctx->pc = 0x107924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107920u;
        // 0x107924: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107928u;
        goto label_107928;
    }
    ctx->pc = 0x107920u;
    {
        const bool branch_taken_0x107920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107920) {
            ctx->pc = 0x107924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107920u;
            // 0x107924: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1079C8u;
            goto label_1079c8;
        }
    }
    ctx->pc = 0x107928u;
label_107928:
    // 0x107928: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x107928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_10792c:
    // 0x10792c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10792cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_107930:
    // 0x107930: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x107930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_107934:
    // 0x107934: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x107934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_107938:
    // 0x107938: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_10793c:
    if (ctx->pc == 0x10793Cu) {
        ctx->pc = 0x107940u;
        goto label_107940;
    }
    ctx->pc = 0x107938u;
    {
        const bool branch_taken_0x107938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107938) {
            ctx->pc = 0x107964u;
            goto label_107964;
        }
    }
    ctx->pc = 0x107940u;
label_107940:
    // 0x107940: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x107940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_107944:
    // 0x107944: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_107948:
    if (ctx->pc == 0x107948u) {
        ctx->pc = 0x10794Cu;
        goto label_10794c;
    }
    ctx->pc = 0x107944u;
    {
        const bool branch_taken_0x107944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107944) {
            ctx->pc = 0x107964u;
            goto label_107964;
        }
    }
    ctx->pc = 0x10794Cu;
label_10794c:
    // 0x10794c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x10794cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_107950:
    // 0x107950: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_107954:
    if (ctx->pc == 0x107954u) {
        ctx->pc = 0x107958u;
        goto label_107958;
    }
    ctx->pc = 0x107950u;
    {
        const bool branch_taken_0x107950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107950) {
            ctx->pc = 0x107964u;
            goto label_107964;
        }
    }
    ctx->pc = 0x107958u;
label_107958:
    // 0x107958: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x107958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10795c:
    // 0x10795c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_107960:
    if (ctx->pc == 0x107960u) {
        ctx->pc = 0x107960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10795Cu;
        // 0x107960: 0xc44c000c  lwc1        $f12, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x107964u;
        goto label_107964;
    }
    ctx->pc = 0x10795Cu;
    {
        const bool branch_taken_0x10795c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10795c) {
            ctx->pc = 0x107960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10795Cu;
            // 0x107960: 0xc44c000c  lwc1        $f12, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x107964u;
            goto label_107964;
        }
    }
    ctx->pc = 0x107964u;
label_107964:
    // 0x107964: 0xc041d28  jal         func_1074A0
label_107968:
    if (ctx->pc == 0x107968u) {
        ctx->pc = 0x107968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107964u;
        // 0x107968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10796Cu;
        goto label_10796c;
    }
    ctx->pc = 0x107964u;
    SET_GPR_U32(ctx, 31, 0x10796Cu);
    ctx->pc = 0x107968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107964u;
    // 0x107968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1074A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1074A0u, 0x107964u, 0x10796Cu)) {
        return;
    }
    ctx->pc = 0x10796Cu;
label_10796c:
    // 0x10796c: 0x10000016  b           . + 4 + (0x16 << 2)
label_107970:
    if (ctx->pc == 0x107970u) {
        ctx->pc = 0x107970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10796Cu;
        // 0x107970: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107974u;
        goto label_107974;
    }
    ctx->pc = 0x10796Cu;
    {
        const bool branch_taken_0x10796c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10796Cu;
        // 0x107970: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10796c) {
            ctx->pc = 0x1079C8u;
            goto label_1079c8;
        }
    }
    ctx->pc = 0x107974u;
label_107974:
    // 0x107974: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x107974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_107978:
    // 0x107978: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_10797c:
    if (ctx->pc == 0x10797Cu) {
        ctx->pc = 0x10797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107978u;
        // 0x10797c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107980u;
        goto label_107980;
    }
    ctx->pc = 0x107978u;
    {
        const bool branch_taken_0x107978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107978) {
            ctx->pc = 0x10797Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107978u;
            // 0x10797c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10798Cu;
            goto label_10798c;
        }
    }
    ctx->pc = 0x107980u;
label_107980:
    // 0x107980: 0xc076faa  jal         func_1DBEA8
label_107984:
    if (ctx->pc == 0x107984u) {
        ctx->pc = 0x107984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107980u;
        // 0x107984: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107988u;
        goto label_107988;
    }
    ctx->pc = 0x107980u;
    SET_GPR_U32(ctx, 31, 0x107988u);
    ctx->pc = 0x107984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107980u;
    // 0x107984: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBEA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DBEA8u, 0x107980u, 0x107988u)) {
        return;
    }
    ctx->pc = 0x107988u;
label_107988:
    // 0x107988: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x107988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10798c:
    // 0x10798c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_107990:
    if (ctx->pc == 0x107990u) {
        ctx->pc = 0x107990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10798Cu;
        // 0x107990: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107994u;
        goto label_107994;
    }
    ctx->pc = 0x10798Cu;
    {
        const bool branch_taken_0x10798c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10798c) {
            ctx->pc = 0x107990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10798Cu;
            // 0x107990: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1079A4u;
            goto label_1079a4;
        }
    }
    ctx->pc = 0x107994u;
label_107994:
    // 0x107994: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107998:
    // 0x107998: 0xc076f76  jal         func_1DBDD8
label_10799c:
    if (ctx->pc == 0x10799Cu) {
        ctx->pc = 0x10799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107998u;
        // 0x10799c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1079A0u;
        goto label_1079a0;
    }
    ctx->pc = 0x107998u;
    SET_GPR_U32(ctx, 31, 0x1079A0u);
    ctx->pc = 0x10799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107998u;
    // 0x10799c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBDD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DBDD8u, 0x107998u, 0x1079A0u)) {
        return;
    }
    ctx->pc = 0x1079A0u;
label_1079a0:
    // 0x1079a0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1079a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1079a4:
    // 0x1079a4: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_1079a8:
    if (ctx->pc == 0x1079A8u) {
        ctx->pc = 0x1079A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079A4u;
        // 0x1079a8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1079ACu;
        goto label_1079ac;
    }
    ctx->pc = 0x1079A4u;
    {
        const bool branch_taken_0x1079a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1079a4) {
            ctx->pc = 0x1079A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1079A4u;
            // 0x1079a8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1079C8u;
            goto label_1079c8;
        }
    }
    ctx->pc = 0x1079ACu;
label_1079ac:
    // 0x1079ac: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1079acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1079b0:
    // 0x1079b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1079b4:
    if (ctx->pc == 0x1079B4u) {
        ctx->pc = 0x1079B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079B0u;
        // 0x1079b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1079B8u;
        goto label_1079b8;
    }
    ctx->pc = 0x1079B0u;
    {
        const bool branch_taken_0x1079b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1079B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079B0u;
        // 0x1079b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079b0) {
            ctx->pc = 0x1079C8u;
            goto label_1079c8;
        }
    }
    ctx->pc = 0x1079B8u;
label_1079b8:
    // 0x1079b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1079b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1079bc:
    // 0x1079bc: 0xc07b5c0  jal         func_1ED700
label_1079c0:
    if (ctx->pc == 0x1079C0u) {
        ctx->pc = 0x1079C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079BCu;
        // 0x1079c0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1079C4u;
        goto label_1079c4;
    }
    ctx->pc = 0x1079BCu;
    SET_GPR_U32(ctx, 31, 0x1079C4u);
    ctx->pc = 0x1079C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1079BCu;
    // 0x1079c0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED700u, 0x1079BCu, 0x1079C4u)) {
        return;
    }
    ctx->pc = 0x1079C4u;
label_1079c4:
    // 0x1079c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1079c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1079c8:
    // 0x1079c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1079c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1079cc:
    // 0x1079cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1079ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1079d0:
    // 0x1079d0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1079d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1079d4:
    // 0x1079d4: 0x3e00008  jr          $ra
label_1079d8:
    if (ctx->pc == 0x1079D8u) {
        ctx->pc = 0x1079D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079D4u;
        // 0x1079d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1079DCu;
        goto label_1079dc;
    }
    ctx->pc = 0x1079D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1079D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079D4u;
        // 0x1079d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1079D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1079DCu;
label_1079dc:
    // 0x1079dc: 0x0  nop
    ctx->pc = 0x1079dcu;
    // NOP
    ctx->pc = 0x1079e0u;
}
