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

// Function: sub_0027F640
// Address: 0x27f640 - 0x27f8d8
void sub_0027F640_0x27f640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F640_0x27f640");
#endif

    switch (ctx->pc) {
        case 0x27f640u: goto label_27f640;
        case 0x27f644u: goto label_27f644;
        case 0x27f648u: goto label_27f648;
        case 0x27f64cu: goto label_27f64c;
        case 0x27f650u: goto label_27f650;
        case 0x27f654u: goto label_27f654;
        case 0x27f658u: goto label_27f658;
        case 0x27f65cu: goto label_27f65c;
        case 0x27f660u: goto label_27f660;
        case 0x27f664u: goto label_27f664;
        case 0x27f668u: goto label_27f668;
        case 0x27f66cu: goto label_27f66c;
        case 0x27f670u: goto label_27f670;
        case 0x27f674u: goto label_27f674;
        case 0x27f678u: goto label_27f678;
        case 0x27f67cu: goto label_27f67c;
        case 0x27f680u: goto label_27f680;
        case 0x27f684u: goto label_27f684;
        case 0x27f688u: goto label_27f688;
        case 0x27f68cu: goto label_27f68c;
        case 0x27f690u: goto label_27f690;
        case 0x27f694u: goto label_27f694;
        case 0x27f698u: goto label_27f698;
        case 0x27f69cu: goto label_27f69c;
        case 0x27f6a0u: goto label_27f6a0;
        case 0x27f6a4u: goto label_27f6a4;
        case 0x27f6a8u: goto label_27f6a8;
        case 0x27f6acu: goto label_27f6ac;
        case 0x27f6b0u: goto label_27f6b0;
        case 0x27f6b4u: goto label_27f6b4;
        case 0x27f6b8u: goto label_27f6b8;
        case 0x27f6bcu: goto label_27f6bc;
        case 0x27f6c0u: goto label_27f6c0;
        case 0x27f6c4u: goto label_27f6c4;
        case 0x27f6c8u: goto label_27f6c8;
        case 0x27f6ccu: goto label_27f6cc;
        case 0x27f6d0u: goto label_27f6d0;
        case 0x27f6d4u: goto label_27f6d4;
        case 0x27f6d8u: goto label_27f6d8;
        case 0x27f6dcu: goto label_27f6dc;
        case 0x27f6e0u: goto label_27f6e0;
        case 0x27f6e4u: goto label_27f6e4;
        case 0x27f6e8u: goto label_27f6e8;
        case 0x27f6ecu: goto label_27f6ec;
        case 0x27f6f0u: goto label_27f6f0;
        case 0x27f6f4u: goto label_27f6f4;
        case 0x27f6f8u: goto label_27f6f8;
        case 0x27f6fcu: goto label_27f6fc;
        case 0x27f700u: goto label_27f700;
        case 0x27f704u: goto label_27f704;
        case 0x27f708u: goto label_27f708;
        case 0x27f70cu: goto label_27f70c;
        case 0x27f710u: goto label_27f710;
        case 0x27f714u: goto label_27f714;
        case 0x27f718u: goto label_27f718;
        case 0x27f71cu: goto label_27f71c;
        case 0x27f720u: goto label_27f720;
        case 0x27f724u: goto label_27f724;
        case 0x27f728u: goto label_27f728;
        case 0x27f72cu: goto label_27f72c;
        case 0x27f730u: goto label_27f730;
        case 0x27f734u: goto label_27f734;
        case 0x27f738u: goto label_27f738;
        case 0x27f73cu: goto label_27f73c;
        case 0x27f740u: goto label_27f740;
        case 0x27f744u: goto label_27f744;
        case 0x27f748u: goto label_27f748;
        case 0x27f74cu: goto label_27f74c;
        case 0x27f750u: goto label_27f750;
        case 0x27f754u: goto label_27f754;
        case 0x27f758u: goto label_27f758;
        case 0x27f75cu: goto label_27f75c;
        case 0x27f760u: goto label_27f760;
        case 0x27f764u: goto label_27f764;
        case 0x27f768u: goto label_27f768;
        case 0x27f76cu: goto label_27f76c;
        case 0x27f770u: goto label_27f770;
        case 0x27f774u: goto label_27f774;
        case 0x27f778u: goto label_27f778;
        case 0x27f77cu: goto label_27f77c;
        case 0x27f780u: goto label_27f780;
        case 0x27f784u: goto label_27f784;
        case 0x27f788u: goto label_27f788;
        case 0x27f78cu: goto label_27f78c;
        case 0x27f790u: goto label_27f790;
        case 0x27f794u: goto label_27f794;
        case 0x27f798u: goto label_27f798;
        case 0x27f79cu: goto label_27f79c;
        case 0x27f7a0u: goto label_27f7a0;
        case 0x27f7a4u: goto label_27f7a4;
        case 0x27f7a8u: goto label_27f7a8;
        case 0x27f7acu: goto label_27f7ac;
        case 0x27f7b0u: goto label_27f7b0;
        case 0x27f7b4u: goto label_27f7b4;
        case 0x27f7b8u: goto label_27f7b8;
        case 0x27f7bcu: goto label_27f7bc;
        case 0x27f7c0u: goto label_27f7c0;
        case 0x27f7c4u: goto label_27f7c4;
        case 0x27f7c8u: goto label_27f7c8;
        case 0x27f7ccu: goto label_27f7cc;
        case 0x27f7d0u: goto label_27f7d0;
        case 0x27f7d4u: goto label_27f7d4;
        case 0x27f7d8u: goto label_27f7d8;
        case 0x27f7dcu: goto label_27f7dc;
        case 0x27f7e0u: goto label_27f7e0;
        case 0x27f7e4u: goto label_27f7e4;
        case 0x27f7e8u: goto label_27f7e8;
        case 0x27f7ecu: goto label_27f7ec;
        case 0x27f7f0u: goto label_27f7f0;
        case 0x27f7f4u: goto label_27f7f4;
        case 0x27f7f8u: goto label_27f7f8;
        case 0x27f7fcu: goto label_27f7fc;
        case 0x27f800u: goto label_27f800;
        case 0x27f804u: goto label_27f804;
        case 0x27f808u: goto label_27f808;
        case 0x27f80cu: goto label_27f80c;
        case 0x27f810u: goto label_27f810;
        case 0x27f814u: goto label_27f814;
        case 0x27f818u: goto label_27f818;
        case 0x27f81cu: goto label_27f81c;
        case 0x27f820u: goto label_27f820;
        case 0x27f824u: goto label_27f824;
        case 0x27f828u: goto label_27f828;
        case 0x27f82cu: goto label_27f82c;
        case 0x27f830u: goto label_27f830;
        case 0x27f834u: goto label_27f834;
        case 0x27f838u: goto label_27f838;
        case 0x27f83cu: goto label_27f83c;
        case 0x27f840u: goto label_27f840;
        case 0x27f844u: goto label_27f844;
        case 0x27f848u: goto label_27f848;
        case 0x27f84cu: goto label_27f84c;
        case 0x27f850u: goto label_27f850;
        case 0x27f854u: goto label_27f854;
        case 0x27f858u: goto label_27f858;
        case 0x27f85cu: goto label_27f85c;
        case 0x27f860u: goto label_27f860;
        case 0x27f864u: goto label_27f864;
        case 0x27f868u: goto label_27f868;
        case 0x27f86cu: goto label_27f86c;
        case 0x27f870u: goto label_27f870;
        case 0x27f874u: goto label_27f874;
        case 0x27f878u: goto label_27f878;
        case 0x27f87cu: goto label_27f87c;
        case 0x27f880u: goto label_27f880;
        case 0x27f884u: goto label_27f884;
        case 0x27f888u: goto label_27f888;
        case 0x27f88cu: goto label_27f88c;
        case 0x27f890u: goto label_27f890;
        case 0x27f894u: goto label_27f894;
        case 0x27f898u: goto label_27f898;
        case 0x27f89cu: goto label_27f89c;
        case 0x27f8a0u: goto label_27f8a0;
        case 0x27f8a4u: goto label_27f8a4;
        case 0x27f8a8u: goto label_27f8a8;
        case 0x27f8acu: goto label_27f8ac;
        case 0x27f8b0u: goto label_27f8b0;
        case 0x27f8b4u: goto label_27f8b4;
        case 0x27f8b8u: goto label_27f8b8;
        case 0x27f8bcu: goto label_27f8bc;
        case 0x27f8c0u: goto label_27f8c0;
        case 0x27f8c4u: goto label_27f8c4;
        case 0x27f8c8u: goto label_27f8c8;
        case 0x27f8ccu: goto label_27f8cc;
        case 0x27f8d0u: goto label_27f8d0;
        case 0x27f8d4u: goto label_27f8d4;
        default: break;
    }

    ctx->pc = 0x27f640u;

label_27f640:
    // 0x27f640: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x27f640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_27f644:
    // 0x27f644: 0x8f838818  lw          $v1, -0x77E8($gp)
    ctx->pc = 0x27f644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
label_27f648:
    // 0x27f648: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x27f648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_27f64c:
    // 0x27f64c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x27f64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_27f650:
    // 0x27f650: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27f650u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27f654:
    // 0x27f654: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x27f654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_27f658:
    // 0x27f658: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x27f658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_27f65c:
    // 0x27f65c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x27f65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_27f660:
    // 0x27f660: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x27f660u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27f664:
    // 0x27f664: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x27f664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_27f668:
    // 0x27f668: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x27f668u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_27f66c:
    // 0x27f66c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x27f66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_27f670:
    // 0x27f670: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27f670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_27f674:
    // 0x27f674: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x27f674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_27f678:
    // 0x27f678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27f678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_27f67c:
    // 0x27f67c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x27f67cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_27f680:
    // 0x27f680: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x27f680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_27f684:
    // 0x27f684: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x27f684u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27f688:
    // 0x27f688: 0x12c00086  beqz        $s6, . + 4 + (0x86 << 2)
label_27f68c:
    if (ctx->pc == 0x27F68Cu) {
        ctx->pc = 0x27F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F688u;
        // 0x27f68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F690u;
        goto label_27f690;
    }
    ctx->pc = 0x27F688u;
    {
        const bool branch_taken_0x27f688 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F688u;
        // 0x27f68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f688) {
            ctx->pc = 0x27F8A4u;
            goto label_27f8a4;
        }
    }
    ctx->pc = 0x27F690u;
label_27f690:
    // 0x27f690: 0x2e31021  addu        $v0, $s7, $v1
    ctx->pc = 0x27f690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_27f694:
    // 0x27f694: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x27f694u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27f698:
    // 0x27f698: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
label_27f69c:
    if (ctx->pc == 0x27F69Cu) {
        ctx->pc = 0x27F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F698u;
        // 0x27f69c: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F6A0u;
        goto label_27f6a0;
    }
    ctx->pc = 0x27F698u;
    {
        const bool branch_taken_0x27f698 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F698u;
        // 0x27f69c: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f698) {
            ctx->pc = 0x27F6ECu;
            goto label_27f6ec;
        }
    }
    ctx->pc = 0x27F6A0u;
label_27f6a0:
    // 0x27f6a0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x27f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_27f6a4:
    // 0x27f6a4: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x27f6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
label_27f6a8:
    // 0x27f6a8: 0x8c6210e0  lw          $v0, 0x10E0($v1)
    ctx->pc = 0x27f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
label_27f6ac:
    // 0x27f6ac: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x27f6acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_27f6b0:
    // 0x27f6b0: 0x8cc4e698  lw          $a0, -0x1968($a2)
    ctx->pc = 0x27f6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960792)));
label_27f6b4:
    // 0x27f6b4: 0x40f809  jalr        $v0
label_27f6b8:
    if (ctx->pc == 0x27F6B8u) {
        ctx->pc = 0x27F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6B4u;
        // 0x27f6b8: 0x34a50120  ori         $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F6BCu;
        goto label_27f6bc;
    }
    ctx->pc = 0x27F6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27F6BCu);
        ctx->pc = 0x27F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6B4u;
        // 0x27f6b8: 0x34a50120  ori         $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F6B4u, 0x27F6BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27F6BCu;
label_27f6bc:
    // 0x27f6bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27f6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f6c0:
    // 0x27f6c0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_27f6c4:
    if (ctx->pc == 0x27F6C4u) {
        ctx->pc = 0x27F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6C0u;
        // 0x27f6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F6C8u;
        goto label_27f6c8;
    }
    ctx->pc = 0x27F6C0u;
    {
        const bool branch_taken_0x27f6c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6C0u;
        // 0x27f6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f6c0) {
            ctx->pc = 0x27F6D0u;
            goto label_27f6d0;
        }
    }
    ctx->pc = 0x27F6C8u;
label_27f6c8:
    // 0x27f6c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_27f6cc:
    if (ctx->pc == 0x27F6CCu) {
        ctx->pc = 0x27F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6C8u;
        // 0x27f6cc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F6D0u;
        goto label_27f6d0;
    }
    ctx->pc = 0x27F6C8u;
    {
        const bool branch_taken_0x27f6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6C8u;
        // 0x27f6cc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f6c8) {
            ctx->pc = 0x27F6ECu;
            goto label_27f6ec;
        }
    }
    ctx->pc = 0x27F6D0u;
label_27f6d0:
    // 0x27f6d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27f6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f6d4:
    // 0x27f6d4: 0xc0c493d  jal         func_3124F4
label_27f6d8:
    if (ctx->pc == 0x27F6D8u) {
        ctx->pc = 0x27F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6D4u;
        // 0x27f6d8: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F6DCu;
        goto label_27f6dc;
    }
    ctx->pc = 0x27F6D4u;
    SET_GPR_U32(ctx, 31, 0x27F6DCu);
    ctx->pc = 0x27F6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F6D4u;
    // 0x27f6d8: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x27F6D4u, 0x27F6DCu)) {
        return;
    }
    ctx->pc = 0x27F6DCu;
label_27f6dc:
    // 0x27f6dc: 0x8f838818  lw          $v1, -0x77E8($gp)
    ctx->pc = 0x27f6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
label_27f6e0:
    // 0x27f6e0: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x27f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_27f6e4:
    // 0x27f6e4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x27f6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_27f6e8:
    // 0x27f6e8: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x27f6e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f6ec:
    // 0x27f6ec: 0x57c00003  bnel        $fp, $zero, . + 4 + (0x3 << 2)
label_27f6f0:
    if (ctx->pc == 0x27F6F0u) {
        ctx->pc = 0x27F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6ECu;
        // 0x27f6f0: 0x8ec50080  lw          $a1, 0x80($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F6F4u;
        goto label_27f6f4;
    }
    ctx->pc = 0x27F6ECu;
    {
        const bool branch_taken_0x27f6ec = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f6ec) {
            ctx->pc = 0x27F6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F6ECu;
            // 0x27f6f0: 0x8ec50080  lw          $a1, 0x80($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F6FCu;
            goto label_27f6fc;
        }
    }
    ctx->pc = 0x27F6F4u;
label_27f6f4:
    // 0x27f6f4: 0x1000006b  b           . + 4 + (0x6B << 2)
label_27f6f8:
    if (ctx->pc == 0x27F6F8u) {
        ctx->pc = 0x27F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6F4u;
        // 0x27f6f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F6FCu;
        goto label_27f6fc;
    }
    ctx->pc = 0x27F6F4u;
    {
        const bool branch_taken_0x27f6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6F4u;
        // 0x27f6f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f6f4) {
            ctx->pc = 0x27F8A4u;
            goto label_27f8a4;
        }
    }
    ctx->pc = 0x27F6FCu;
label_27f6fc:
    // 0x27f6fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x27f6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_27f700:
    // 0x27f700: 0xc0a01bc  jal         func_2806F0
label_27f704:
    if (ctx->pc == 0x27F704u) {
        ctx->pc = 0x27F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F700u;
        // 0x27f704: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F708u;
        goto label_27f708;
    }
    ctx->pc = 0x27F700u;
    SET_GPR_U32(ctx, 31, 0x27F708u);
    ctx->pc = 0x27F704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F700u;
    // 0x27f704: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2806F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2806F0u, 0x27F700u, 0x27F708u)) {
        return;
    }
    ctx->pc = 0x27F708u;
label_27f708:
    // 0x27f708: 0x151180  sll         $v0, $s5, 6
    ctx->pc = 0x27f708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
label_27f70c:
    // 0x27f70c: 0x0  nop
    ctx->pc = 0x27f70cu;
    // NOP
label_27f710:
    // 0x27f710: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27f710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f714:
    // 0x27f714: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x27f714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_27f718:
    // 0x27f718: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x27f718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_27f71c:
    // 0x27f71c: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x27f71cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_27f720:
    // 0x27f720: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
label_27f724:
    if (ctx->pc == 0x27F724u) {
        ctx->pc = 0x27F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F720u;
        // 0x27f724: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F728u;
        goto label_27f728;
    }
    ctx->pc = 0x27F720u;
    {
        const bool branch_taken_0x27f720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F720u;
        // 0x27f724: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f720) {
            ctx->pc = 0x27F88Cu;
            goto label_27f88c;
        }
    }
    ctx->pc = 0x27F728u;
label_27f728:
    // 0x27f728: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27f728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_27f72c:
    // 0x27f72c: 0x2442cc40  addiu       $v0, $v0, -0x33C0
    ctx->pc = 0x27f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954048));
label_27f730:
    // 0x27f730: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27f730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27f734:
    // 0x27f734: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27f734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27f738:
    // 0x27f738: 0x800008  jr          $a0
label_27f73c:
    if (ctx->pc == 0x27F73Cu) {
        ctx->pc = 0x27F740u;
        goto label_27f740;
    }
    ctx->pc = 0x27F738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27F740u: goto label_27f740;
            case 0x27F7B4u: goto label_27f7b4;
            case 0x27F820u: goto label_27f820;
            case 0x27F864u: goto label_27f864;
            case 0x27F88Cu: goto label_27f88c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F738u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27F740u;
label_27f740:
    // 0x27f740: 0x3c59021  addu        $s2, $fp, $a1
    ctx->pc = 0x27f740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_27f744:
    // 0x27f744: 0x2c58821  addu        $s1, $s6, $a1
    ctx->pc = 0x27f744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_27f748:
    // 0x27f748: 0xc0a0312  jal         func_280C48
label_27f74c:
    if (ctx->pc == 0x27F74Cu) {
        ctx->pc = 0x27F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F748u;
        // 0x27f74c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F750u;
        goto label_27f750;
    }
    ctx->pc = 0x27F748u;
    SET_GPR_U32(ctx, 31, 0x27F750u);
    ctx->pc = 0x27F74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F748u;
    // 0x27f74c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280C48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280C48u, 0x27F748u, 0x27F750u)) {
        return;
    }
    ctx->pc = 0x27F750u;
label_27f750:
    // 0x27f750: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27f750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f754:
    // 0x27f754: 0xc0a0324  jal         func_280C90
label_27f758:
    if (ctx->pc == 0x27F758u) {
        ctx->pc = 0x27F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F754u;
        // 0x27f758: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F75Cu;
        goto label_27f75c;
    }
    ctx->pc = 0x27F754u;
    SET_GPR_U32(ctx, 31, 0x27F75Cu);
    ctx->pc = 0x27F758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F754u;
    // 0x27f758: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280C90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280C90u, 0x27F754u, 0x27F75Cu)) {
        return;
    }
    ctx->pc = 0x27F75Cu;
label_27f75c:
    // 0x27f75c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27f75cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_27f760:
    // 0x27f760: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27f760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f764:
    // 0x27f764: 0xc0a02e8  jal         func_280BA0
label_27f768:
    if (ctx->pc == 0x27F768u) {
        ctx->pc = 0x27F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F764u;
        // 0x27f768: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F76Cu;
        goto label_27f76c;
    }
    ctx->pc = 0x27F764u;
    SET_GPR_U32(ctx, 31, 0x27F76Cu);
    ctx->pc = 0x27F768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F764u;
    // 0x27f768: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280BA0u, 0x27F764u, 0x27F76Cu)) {
        return;
    }
    ctx->pc = 0x27F76Cu;
label_27f76c:
    // 0x27f76c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27f76cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_27f770:
    // 0x27f770: 0xc0a02fc  jal         func_280BF0
label_27f774:
    if (ctx->pc == 0x27F774u) {
        ctx->pc = 0x27F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F770u;
        // 0x27f774: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F778u;
        goto label_27f778;
    }
    ctx->pc = 0x27F770u;
    SET_GPR_U32(ctx, 31, 0x27F778u);
    ctx->pc = 0x27F774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F770u;
    // 0x27f774: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280BF0u, 0x27F770u, 0x27F778u)) {
        return;
    }
    ctx->pc = 0x27F778u;
label_27f778:
    // 0x27f778: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x27f778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_27f77c:
    // 0x27f77c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x27f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_27f780:
    // 0x27f780: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x27f780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27f784:
    // 0x27f784: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_27f788:
    if (ctx->pc == 0x27F788u) {
        ctx->pc = 0x27F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F784u;
        // 0x27f788: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F78Cu;
        goto label_27f78c;
    }
    ctx->pc = 0x27F784u;
    {
        const bool branch_taken_0x27f784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F784u;
        // 0x27f788: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f784) {
            ctx->pc = 0x27F798u;
            goto label_27f798;
        }
    }
    ctx->pc = 0x27F78Cu;
label_27f78c:
    // 0x27f78c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x27f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_27f790:
    // 0x27f790: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27f790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27f794:
    // 0x27f794: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x27f794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_27f798:
    // 0x27f798: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x27f798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_27f79c:
    // 0x27f79c: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_27f7a0:
    if (ctx->pc == 0x27F7A0u) {
        ctx->pc = 0x27F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F79Cu;
        // 0x27f7a0: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F7A4u;
        goto label_27f7a4;
    }
    ctx->pc = 0x27F79Cu;
    {
        const bool branch_taken_0x27f79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F79Cu;
        // 0x27f7a0: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f79c) {
            ctx->pc = 0x27F890u;
            goto label_27f890;
        }
    }
    ctx->pc = 0x27F7A4u;
label_27f7a4:
    // 0x27f7a4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x27f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_27f7a8:
    // 0x27f7a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27f7ac:
    // 0x27f7ac: 0x10000037  b           . + 4 + (0x37 << 2)
label_27f7b0:
    if (ctx->pc == 0x27F7B0u) {
        ctx->pc = 0x27F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F7ACu;
        // 0x27f7b0: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F7B4u;
        goto label_27f7b4;
    }
    ctx->pc = 0x27F7ACu;
    {
        const bool branch_taken_0x27f7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F7ACu;
        // 0x27f7b0: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f7ac) {
            ctx->pc = 0x27F88Cu;
            goto label_27f88c;
        }
    }
    ctx->pc = 0x27F7B4u;
label_27f7b4:
    // 0x27f7b4: 0xc0a03a6  jal         func_280E98
label_27f7b8:
    if (ctx->pc == 0x27F7B8u) {
        ctx->pc = 0x27F7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F7B4u;
        // 0x27f7b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F7BCu;
        goto label_27f7bc;
    }
    ctx->pc = 0x27F7B4u;
    SET_GPR_U32(ctx, 31, 0x27F7BCu);
    ctx->pc = 0x27F7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F7B4u;
    // 0x27f7b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280E98u, 0x27F7B4u, 0x27F7BCu)) {
        return;
    }
    ctx->pc = 0x27F7BCu;
label_27f7bc:
    // 0x27f7bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27f7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27f7c0:
    // 0x27f7c0: 0xc0a03b8  jal         func_280EE0
label_27f7c4:
    if (ctx->pc == 0x27F7C4u) {
        ctx->pc = 0x27F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F7C0u;
        // 0x27f7c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F7C8u;
        goto label_27f7c8;
    }
    ctx->pc = 0x27F7C0u;
    SET_GPR_U32(ctx, 31, 0x27F7C8u);
    ctx->pc = 0x27F7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F7C0u;
    // 0x27f7c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280EE0u, 0x27F7C0u, 0x27F7C8u)) {
        return;
    }
    ctx->pc = 0x27F7C8u;
label_27f7c8:
    // 0x27f7c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27f7c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f7cc:
    // 0x27f7cc: 0xc0a03dc  jal         func_280F70
label_27f7d0:
    if (ctx->pc == 0x27F7D0u) {
        ctx->pc = 0x27F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F7CCu;
        // 0x27f7d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F7D4u;
        goto label_27f7d4;
    }
    ctx->pc = 0x27F7CCu;
    SET_GPR_U32(ctx, 31, 0x27F7D4u);
    ctx->pc = 0x27F7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F7CCu;
    // 0x27f7d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280F70u, 0x27F7CCu, 0x27F7D4u)) {
        return;
    }
    ctx->pc = 0x27F7D4u;
label_27f7d4:
    // 0x27f7d4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27f7d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_27f7d8:
    // 0x27f7d8: 0xc0a03ca  jal         func_280F28
label_27f7dc:
    if (ctx->pc == 0x27F7DCu) {
        ctx->pc = 0x27F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F7D8u;
        // 0x27f7dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F7E0u;
        goto label_27f7e0;
    }
    ctx->pc = 0x27F7D8u;
    SET_GPR_U32(ctx, 31, 0x27F7E0u);
    ctx->pc = 0x27F7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F7D8u;
    // 0x27f7dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280F28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280F28u, 0x27F7D8u, 0x27F7E0u)) {
        return;
    }
    ctx->pc = 0x27F7E0u;
label_27f7e0:
    // 0x27f7e0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_27f7e4:
    if (ctx->pc == 0x27F7E4u) {
        ctx->pc = 0x27F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F7E0u;
        // 0x27f7e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F7E8u;
        goto label_27f7e8;
    }
    ctx->pc = 0x27F7E0u;
    {
        const bool branch_taken_0x27f7e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F7E0u;
        // 0x27f7e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f7e0) {
            ctx->pc = 0x27F7F4u;
            goto label_27f7f4;
        }
    }
    ctx->pc = 0x27F7E8u;
label_27f7e8:
    // 0x27f7e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27f7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f7ec:
    // 0x27f7ec: 0xc0a0338  jal         func_280CE0
label_27f7f0:
    if (ctx->pc == 0x27F7F0u) {
        ctx->pc = 0x27F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F7ECu;
        // 0x27f7f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F7F4u;
        goto label_27f7f4;
    }
    ctx->pc = 0x27F7ECu;
    SET_GPR_U32(ctx, 31, 0x27F7F4u);
    ctx->pc = 0x27F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F7ECu;
    // 0x27f7f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280CE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280CE0u, 0x27F7ECu, 0x27F7F4u)) {
        return;
    }
    ctx->pc = 0x27F7F4u;
label_27f7f4:
    // 0x27f7f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27f7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27f7f8:
    // 0x27f7f8: 0xc0a0362  jal         func_280D88
label_27f7fc:
    if (ctx->pc == 0x27F7FCu) {
        ctx->pc = 0x27F7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F7F8u;
        // 0x27f7fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F800u;
        goto label_27f800;
    }
    ctx->pc = 0x27F7F8u;
    SET_GPR_U32(ctx, 31, 0x27F800u);
    ctx->pc = 0x27F7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F7F8u;
    // 0x27f7fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280D88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280D88u, 0x27F7F8u, 0x27F800u)) {
        return;
    }
    ctx->pc = 0x27F800u;
label_27f800:
    // 0x27f800: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27f800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27f804:
    // 0x27f804: 0xc0a0376  jal         func_280DD8
label_27f808:
    if (ctx->pc == 0x27F808u) {
        ctx->pc = 0x27F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F804u;
        // 0x27f808: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F80Cu;
        goto label_27f80c;
    }
    ctx->pc = 0x27F804u;
    SET_GPR_U32(ctx, 31, 0x27F80Cu);
    ctx->pc = 0x27F808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F804u;
    // 0x27f808: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280DD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280DD8u, 0x27F804u, 0x27F80Cu)) {
        return;
    }
    ctx->pc = 0x27F80Cu;
label_27f80c:
    // 0x27f80c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27f80cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_27f810:
    // 0x27f810: 0xc0a0392  jal         func_280E48
label_27f814:
    if (ctx->pc == 0x27F814u) {
        ctx->pc = 0x27F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F810u;
        // 0x27f814: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F818u;
        goto label_27f818;
    }
    ctx->pc = 0x27F810u;
    SET_GPR_U32(ctx, 31, 0x27F818u);
    ctx->pc = 0x27F814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F810u;
    // 0x27f814: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280E48u, 0x27F810u, 0x27F818u)) {
        return;
    }
    ctx->pc = 0x27F818u;
label_27f818:
    // 0x27f818: 0x1000001d  b           . + 4 + (0x1D << 2)
label_27f81c:
    if (ctx->pc == 0x27F81Cu) {
        ctx->pc = 0x27F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F818u;
        // 0x27f81c: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F820u;
        goto label_27f820;
    }
    ctx->pc = 0x27F818u;
    {
        const bool branch_taken_0x27f818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F818u;
        // 0x27f81c: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f818) {
            ctx->pc = 0x27F890u;
            goto label_27f890;
        }
    }
    ctx->pc = 0x27F820u;
label_27f820:
    // 0x27f820: 0xc0a0446  jal         func_281118
label_27f824:
    if (ctx->pc == 0x27F824u) {
        ctx->pc = 0x27F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F820u;
        // 0x27f824: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F828u;
        goto label_27f828;
    }
    ctx->pc = 0x27F820u;
    SET_GPR_U32(ctx, 31, 0x27F828u);
    ctx->pc = 0x27F824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F820u;
    // 0x27f824: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281118u, 0x27F820u, 0x27F828u)) {
        return;
    }
    ctx->pc = 0x27F828u;
label_27f828:
    // 0x27f828: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27f828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f82c:
    // 0x27f82c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27f82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27f830:
    // 0x27f830: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27f830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27f834:
    // 0x27f834: 0xc0a0458  jal         func_281160
label_27f838:
    if (ctx->pc == 0x27F838u) {
        ctx->pc = 0x27F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F834u;
        // 0x27f838: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F83Cu;
        goto label_27f83c;
    }
    ctx->pc = 0x27F834u;
    SET_GPR_U32(ctx, 31, 0x27F83Cu);
    ctx->pc = 0x27F838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F834u;
    // 0x27f838: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x281160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281160u, 0x27F834u, 0x27F83Cu)) {
        return;
    }
    ctx->pc = 0x27F83Cu;
label_27f83c:
    // 0x27f83c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_27f840:
    if (ctx->pc == 0x27F840u) {
        ctx->pc = 0x27F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F83Cu;
        // 0x27f840: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F844u;
        goto label_27f844;
    }
    ctx->pc = 0x27F83Cu;
    {
        const bool branch_taken_0x27f83c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F83Cu;
        // 0x27f840: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f83c) {
            ctx->pc = 0x27F84Cu;
            goto label_27f84c;
        }
    }
    ctx->pc = 0x27F844u;
label_27f844:
    // 0x27f844: 0xc0a03ee  jal         func_280FB8
label_27f848:
    if (ctx->pc == 0x27F848u) {
        ctx->pc = 0x27F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F844u;
        // 0x27f848: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F84Cu;
        goto label_27f84c;
    }
    ctx->pc = 0x27F844u;
    SET_GPR_U32(ctx, 31, 0x27F84Cu);
    ctx->pc = 0x27F848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F844u;
    // 0x27f848: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280FB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280FB8u, 0x27F844u, 0x27F84Cu)) {
        return;
    }
    ctx->pc = 0x27F84Cu;
label_27f84c:
    // 0x27f84c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x27f84cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_27f850:
    // 0x27f850: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27f850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27f854:
    // 0x27f854: 0xc0a041e  jal         func_281078
label_27f858:
    if (ctx->pc == 0x27F858u) {
        ctx->pc = 0x27F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F854u;
        // 0x27f858: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F85Cu;
        goto label_27f85c;
    }
    ctx->pc = 0x27F854u;
    SET_GPR_U32(ctx, 31, 0x27F85Cu);
    ctx->pc = 0x27F858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F854u;
    // 0x27f858: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281078u, 0x27F854u, 0x27F85Cu)) {
        return;
    }
    ctx->pc = 0x27F85Cu;
label_27f85c:
    // 0x27f85c: 0x1000000c  b           . + 4 + (0xC << 2)
label_27f860:
    if (ctx->pc == 0x27F860u) {
        ctx->pc = 0x27F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F85Cu;
        // 0x27f860: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F864u;
        goto label_27f864;
    }
    ctx->pc = 0x27F85Cu;
    {
        const bool branch_taken_0x27f85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F85Cu;
        // 0x27f860: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f85c) {
            ctx->pc = 0x27F890u;
            goto label_27f890;
        }
    }
    ctx->pc = 0x27F864u;
label_27f864:
    // 0x27f864: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27f864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27f868:
    // 0x27f868: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x27f868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_27f86c:
    // 0x27f86c: 0xc0a0488  jal         func_281220
label_27f870:
    if (ctx->pc == 0x27F870u) {
        ctx->pc = 0x27F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F86Cu;
        // 0x27f870: 0x37a6000c  ori         $a2, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F874u;
        goto label_27f874;
    }
    ctx->pc = 0x27F86Cu;
    SET_GPR_U32(ctx, 31, 0x27F874u);
    ctx->pc = 0x27F870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F86Cu;
    // 0x27f870: 0x37a6000c  ori         $a2, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x281220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281220u, 0x27F86Cu, 0x27F874u)) {
        return;
    }
    ctx->pc = 0x27F874u;
label_27f874:
    // 0x27f874: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x27f874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_27f878:
    // 0x27f878: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27f878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27f87c:
    // 0x27f87c: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x27f87cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_27f880:
    // 0x27f880: 0xc0a0472  jal         func_2811C8
label_27f884:
    if (ctx->pc == 0x27F884u) {
        ctx->pc = 0x27F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F880u;
        // 0x27f884: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F888u;
        goto label_27f888;
    }
    ctx->pc = 0x27F880u;
    SET_GPR_U32(ctx, 31, 0x27F888u);
    ctx->pc = 0x27F884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F880u;
    // 0x27f884: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2811C8u, 0x27F880u, 0x27F888u)) {
        return;
    }
    ctx->pc = 0x27F888u;
label_27f888:
    // 0x27f888: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27f888u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f88c:
    // 0x27f88c: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x27f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_27f890:
    // 0x27f890: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x27f890u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27f894:
    // 0x27f894: 0x2ea30002  sltiu       $v1, $s5, 0x2
    ctx->pc = 0x27f894u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_27f898:
    // 0x27f898: 0x1460ff9d  bnez        $v1, . + 4 + (-0x63 << 2)
label_27f89c:
    if (ctx->pc == 0x27F89Cu) {
        ctx->pc = 0x27F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F898u;
        // 0x27f89c: 0x151180  sll         $v0, $s5, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F8A0u;
        goto label_27f8a0;
    }
    ctx->pc = 0x27F898u;
    {
        const bool branch_taken_0x27f898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F898u;
        // 0x27f89c: 0x151180  sll         $v0, $s5, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f898) {
            ctx->pc = 0x27F710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f710;
        }
    }
    ctx->pc = 0x27F8A0u;
label_27f8a0:
    // 0x27f8a0: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x27f8a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_27f8a4:
    // 0x27f8a4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x27f8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_27f8a8:
    // 0x27f8a8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x27f8a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27f8ac:
    // 0x27f8ac: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x27f8acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27f8b0:
    // 0x27f8b0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x27f8b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27f8b4:
    // 0x27f8b4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x27f8b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27f8b8:
    // 0x27f8b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27f8b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27f8bc:
    // 0x27f8bc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x27f8bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27f8c0:
    // 0x27f8c0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x27f8c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27f8c4:
    // 0x27f8c4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x27f8c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27f8c8:
    // 0x27f8c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27f8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27f8cc:
    // 0x27f8cc: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x27f8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27f8d0:
    // 0x27f8d0: 0x3e00008  jr          $ra
label_27f8d4:
    if (ctx->pc == 0x27F8D4u) {
        ctx->pc = 0x27F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F8D0u;
        // 0x27f8d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F8D8u;
        goto label_fallthrough_0x27f8d0;
    }
    ctx->pc = 0x27F8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F8D0u;
        // 0x27f8d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27f8d0:
    ctx->pc = 0x27F8D8u;
}
