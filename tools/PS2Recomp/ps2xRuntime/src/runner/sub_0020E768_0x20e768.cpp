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

// Function: sub_0020E768
// Address: 0x20e768 - 0x20e8c8
void sub_0020E768_0x20e768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E768_0x20e768");
#endif

    switch (ctx->pc) {
        case 0x20e768u: goto label_20e768;
        case 0x20e76cu: goto label_20e76c;
        case 0x20e770u: goto label_20e770;
        case 0x20e774u: goto label_20e774;
        case 0x20e778u: goto label_20e778;
        case 0x20e77cu: goto label_20e77c;
        case 0x20e780u: goto label_20e780;
        case 0x20e784u: goto label_20e784;
        case 0x20e788u: goto label_20e788;
        case 0x20e78cu: goto label_20e78c;
        case 0x20e790u: goto label_20e790;
        case 0x20e794u: goto label_20e794;
        case 0x20e798u: goto label_20e798;
        case 0x20e79cu: goto label_20e79c;
        case 0x20e7a0u: goto label_20e7a0;
        case 0x20e7a4u: goto label_20e7a4;
        case 0x20e7a8u: goto label_20e7a8;
        case 0x20e7acu: goto label_20e7ac;
        case 0x20e7b0u: goto label_20e7b0;
        case 0x20e7b4u: goto label_20e7b4;
        case 0x20e7b8u: goto label_20e7b8;
        case 0x20e7bcu: goto label_20e7bc;
        case 0x20e7c0u: goto label_20e7c0;
        case 0x20e7c4u: goto label_20e7c4;
        case 0x20e7c8u: goto label_20e7c8;
        case 0x20e7ccu: goto label_20e7cc;
        case 0x20e7d0u: goto label_20e7d0;
        case 0x20e7d4u: goto label_20e7d4;
        case 0x20e7d8u: goto label_20e7d8;
        case 0x20e7dcu: goto label_20e7dc;
        case 0x20e7e0u: goto label_20e7e0;
        case 0x20e7e4u: goto label_20e7e4;
        case 0x20e7e8u: goto label_20e7e8;
        case 0x20e7ecu: goto label_20e7ec;
        case 0x20e7f0u: goto label_20e7f0;
        case 0x20e7f4u: goto label_20e7f4;
        case 0x20e7f8u: goto label_20e7f8;
        case 0x20e7fcu: goto label_20e7fc;
        case 0x20e800u: goto label_20e800;
        case 0x20e804u: goto label_20e804;
        case 0x20e808u: goto label_20e808;
        case 0x20e80cu: goto label_20e80c;
        case 0x20e810u: goto label_20e810;
        case 0x20e814u: goto label_20e814;
        case 0x20e818u: goto label_20e818;
        case 0x20e81cu: goto label_20e81c;
        case 0x20e820u: goto label_20e820;
        case 0x20e824u: goto label_20e824;
        case 0x20e828u: goto label_20e828;
        case 0x20e82cu: goto label_20e82c;
        case 0x20e830u: goto label_20e830;
        case 0x20e834u: goto label_20e834;
        case 0x20e838u: goto label_20e838;
        case 0x20e83cu: goto label_20e83c;
        case 0x20e840u: goto label_20e840;
        case 0x20e844u: goto label_20e844;
        case 0x20e848u: goto label_20e848;
        case 0x20e84cu: goto label_20e84c;
        case 0x20e850u: goto label_20e850;
        case 0x20e854u: goto label_20e854;
        case 0x20e858u: goto label_20e858;
        case 0x20e85cu: goto label_20e85c;
        case 0x20e860u: goto label_20e860;
        case 0x20e864u: goto label_20e864;
        case 0x20e868u: goto label_20e868;
        case 0x20e86cu: goto label_20e86c;
        case 0x20e870u: goto label_20e870;
        case 0x20e874u: goto label_20e874;
        case 0x20e878u: goto label_20e878;
        case 0x20e87cu: goto label_20e87c;
        case 0x20e880u: goto label_20e880;
        case 0x20e884u: goto label_20e884;
        case 0x20e888u: goto label_20e888;
        case 0x20e88cu: goto label_20e88c;
        case 0x20e890u: goto label_20e890;
        case 0x20e894u: goto label_20e894;
        case 0x20e898u: goto label_20e898;
        case 0x20e89cu: goto label_20e89c;
        case 0x20e8a0u: goto label_20e8a0;
        case 0x20e8a4u: goto label_20e8a4;
        case 0x20e8a8u: goto label_20e8a8;
        case 0x20e8acu: goto label_20e8ac;
        case 0x20e8b0u: goto label_20e8b0;
        case 0x20e8b4u: goto label_20e8b4;
        case 0x20e8b8u: goto label_20e8b8;
        case 0x20e8bcu: goto label_20e8bc;
        case 0x20e8c0u: goto label_20e8c0;
        case 0x20e8c4u: goto label_20e8c4;
        default: break;
    }

    ctx->pc = 0x20e768u;

label_20e768:
    // 0x20e768: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20e768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_20e76c:
    // 0x20e76c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x20e76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_20e770:
    // 0x20e770: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x20e770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_20e774:
    // 0x20e774: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20e774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20e778:
    // 0x20e778: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20e778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_20e77c:
    // 0x20e77c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20e77cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e780:
    // 0x20e780: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x20e780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_20e784:
    // 0x20e784: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x20e784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_20e788:
    // 0x20e788: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20e788u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20e78c:
    // 0x20e78c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x20e78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_20e790:
    // 0x20e790: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x20e790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_20e794:
    // 0x20e794: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x20e794u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20e798:
    // 0x20e798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20e798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20e79c:
    // 0x20e79c: 0x9e020008  lwu         $v0, 0x8($s0)
    ctx->pc = 0x20e79cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20e7a0:
    // 0x20e7a0: 0x9e040018  lwu         $a0, 0x18($s0)
    ctx->pc = 0x20e7a0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_20e7a4:
    // 0x20e7a4: 0x2a9f8  dsll        $s5, $v0, 7
    ctx->pc = 0x20e7a4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << 7);
label_20e7a8:
    // 0x20e7a8: 0xc07e4e4  jal         func_1F9390
label_20e7ac:
    if (ctx->pc == 0x20E7ACu) {
        ctx->pc = 0x20E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7A8u;
        // 0x20e7ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E7B0u;
        goto label_20e7b0;
    }
    ctx->pc = 0x20E7A8u;
    SET_GPR_U32(ctx, 31, 0x20E7B0u);
    ctx->pc = 0x20E7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E7A8u;
    // 0x20e7ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x20E7A8u, 0x20E7B0u)) {
        return;
    }
    ctx->pc = 0x20E7B0u;
label_20e7b0:
    // 0x20e7b0: 0x9e030010  lwu         $v1, 0x10($s0)
    ctx->pc = 0x20e7b0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_20e7b4:
    // 0x20e7b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x20e7b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20e7b8:
    // 0x20e7b8: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_20e7bc:
    if (ctx->pc == 0x20E7BCu) {
        ctx->pc = 0x20E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7B8u;
        // 0x20e7bc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E7C0u;
        goto label_20e7c0;
    }
    ctx->pc = 0x20E7B8u;
    {
        const bool branch_taken_0x20e7b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7B8u;
        // 0x20e7bc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7b8) {
            ctx->pc = 0x20E8A0u;
            goto label_20e8a0;
        }
    }
    ctx->pc = 0x20E7C0u;
label_20e7c0:
    // 0x20e7c0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x20e7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_20e7c4:
    // 0x20e7c4: 0x9e060014  lwu         $a2, 0x14($s0)
    ctx->pc = 0x20e7c4u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_20e7c8:
    // 0x20e7c8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x20e7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_20e7cc:
    // 0x20e7cc: 0x9e050018  lwu         $a1, 0x18($s0)
    ctx->pc = 0x20e7ccu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_20e7d0:
    // 0x20e7d0: 0x72182f  dsubu       $v1, $v1, $s2
    ctx->pc = 0x20e7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 18));
label_20e7d4:
    // 0x20e7d4: 0x9e04001c  lwu         $a0, 0x1C($s0)
    ctx->pc = 0x20e7d4u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_20e7d8:
    // 0x20e7d8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x20e7d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_20e7dc:
    // 0x20e7dc: 0xb2282d  daddu       $a1, $a1, $s2
    ctx->pc = 0x20e7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 18));
label_20e7e0:
    // 0x20e7e0: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x20e7e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6));
label_20e7e4:
    // 0x20e7e4: 0x85202f  dsubu       $a0, $a0, $a1
    ctx->pc = 0x20e7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 5));
label_20e7e8:
    // 0x20e7e8: 0x9e060004  lwu         $a2, 0x4($s0)
    ctx->pc = 0x20e7e8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20e7ec:
    // 0x20e7ec: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x20e7ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_20e7f0:
    // 0x20e7f0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x20e7f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_20e7f4:
    // 0x20e7f4: 0xc5302f  dsubu       $a2, $a2, $a1
    ctx->pc = 0x20e7f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 5));
label_20e7f8:
    // 0x20e7f8: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x20e7f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_20e7fc:
    // 0x20e7fc: 0x82300b  movn        $a2, $a0, $v0
    ctx->pc = 0x20e7fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4));
label_20e800:
    // 0x20e800: 0x58c00028  blezl       $a2, . + 4 + (0x28 << 2)
label_20e804:
    if (ctx->pc == 0x20E804u) {
        ctx->pc = 0x20E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E800u;
        // 0x20e804: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E808u;
        goto label_20e808;
    }
    ctx->pc = 0x20E800u;
    {
        const bool branch_taken_0x20e800 = (GPR_S64(ctx, 6) <= 0);
        if (branch_taken_0x20e800) {
            ctx->pc = 0x20E804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E800u;
            // 0x20e804: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E8A4u;
            goto label_20e8a4;
        }
    }
    ctx->pc = 0x20E808u;
label_20e808:
    // 0x20e808: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x20e808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20e80c:
    // 0x20e80c: 0xc07e4e4  jal         func_1F9390
label_20e810:
    if (ctx->pc == 0x20E810u) {
        ctx->pc = 0x20E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E80Cu;
        // 0x20e810: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E814u;
        goto label_20e814;
    }
    ctx->pc = 0x20E80Cu;
    SET_GPR_U32(ctx, 31, 0x20E814u);
    ctx->pc = 0x20E810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E80Cu;
    // 0x20e810: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x20E80Cu, 0x20E814u)) {
        return;
    }
    ctx->pc = 0x20E814u;
label_20e814:
    // 0x20e814: 0x12c0000f  beqz        $s6, . + 4 + (0xF << 2)
label_20e818:
    if (ctx->pc == 0x20E818u) {
        ctx->pc = 0x20E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E814u;
        // 0x20e818: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E81Cu;
        goto label_20e81c;
    }
    ctx->pc = 0x20E814u;
    {
        const bool branch_taken_0x20e814 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E814u;
        // 0x20e818: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e814) {
            ctx->pc = 0x20E854u;
            goto label_20e854;
        }
    }
    ctx->pc = 0x20E81Cu;
label_20e81c:
    // 0x20e81c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x20e81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_20e820:
    // 0x20e820: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20e820u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20e824:
    // 0x20e824: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20e824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20e828:
    // 0x20e828: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20e828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20e82c:
    // 0x20e82c: 0x8e090034  lw          $t1, 0x34($s0)
    ctx->pc = 0x20e82cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_20e830:
    // 0x20e830: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e834:
    // 0x20e834: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20e834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20e838:
    // 0x20e838: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x20e838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20e83c:
    // 0x20e83c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x20e83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_20e840:
    // 0x20e840: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x20e840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20e844:
    // 0x20e844: 0x120f809  jalr        $t1
label_20e848:
    if (ctx->pc == 0x20E848u) {
        ctx->pc = 0x20E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E844u;
        // 0x20e848: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E84Cu;
        goto label_20e84c;
    }
    ctx->pc = 0x20E844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x20E84Cu);
        ctx->pc = 0x20E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E844u;
        // 0x20e848: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E844u, 0x20E84Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E84Cu;
label_20e84c:
    // 0x20e84c: 0x1000000e  b           . + 4 + (0xE << 2)
label_20e850:
    if (ctx->pc == 0x20E850u) {
        ctx->pc = 0x20E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E84Cu;
        // 0x20e850: 0x9e030014  lwu         $v1, 0x14($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E854u;
        goto label_20e854;
    }
    ctx->pc = 0x20E84Cu;
    {
        const bool branch_taken_0x20e84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E84Cu;
        // 0x20e850: 0x9e030014  lwu         $v1, 0x14($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e84c) {
            ctx->pc = 0x20E888u;
            goto label_20e888;
        }
    }
    ctx->pc = 0x20E854u;
label_20e854:
    // 0x20e854: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x20e854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_20e858:
    // 0x20e858: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20e858u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20e85c:
    // 0x20e85c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20e860:
    // 0x20e860: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20e860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20e864:
    // 0x20e864: 0x8e090030  lw          $t1, 0x30($s0)
    ctx->pc = 0x20e864u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_20e868:
    // 0x20e868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e86c:
    // 0x20e86c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20e86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20e870:
    // 0x20e870: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x20e870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20e874:
    // 0x20e874: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x20e874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_20e878:
    // 0x20e878: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x20e878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20e87c:
    // 0x20e87c: 0x120f809  jalr        $t1
label_20e880:
    if (ctx->pc == 0x20E880u) {
        ctx->pc = 0x20E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E87Cu;
        // 0x20e880: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E884u;
        goto label_20e884;
    }
    ctx->pc = 0x20E87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x20E884u);
        ctx->pc = 0x20E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E87Cu;
        // 0x20e880: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E87Cu, 0x20E884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E884u;
label_20e884:
    // 0x20e884: 0x9e030014  lwu         $v1, 0x14($s0)
    ctx->pc = 0x20e884u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_20e888:
    // 0x20e888: 0x271982d  daddu       $s3, $s3, $s1
    ctx->pc = 0x20e888u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 17));
label_20e88c:
    // 0x20e88c: 0x9e020010  lwu         $v0, 0x10($s0)
    ctx->pc = 0x20e88cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_20e890:
    // 0x20e890: 0x243902d  daddu       $s2, $s2, $v1
    ctx->pc = 0x20e890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 3));
label_20e894:
    // 0x20e894: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x20e894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20e898:
    // 0x20e898: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
label_20e89c:
    if (ctx->pc == 0x20E89Cu) {
        ctx->pc = 0x20E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E898u;
        // 0x20e89c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E8A0u;
        goto label_20e8a0;
    }
    ctx->pc = 0x20E898u;
    {
        const bool branch_taken_0x20e898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E898u;
        // 0x20e89c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e898) {
            ctx->pc = 0x20E7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e7c0;
        }
    }
    ctx->pc = 0x20E8A0u;
label_20e8a0:
    // 0x20e8a0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x20e8a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20e8a4:
    // 0x20e8a4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x20e8a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20e8a8:
    // 0x20e8a8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x20e8a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20e8ac:
    // 0x20e8ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20e8acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20e8b0:
    // 0x20e8b0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x20e8b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20e8b4:
    // 0x20e8b4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x20e8b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20e8b8:
    // 0x20e8b8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x20e8b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20e8bc:
    // 0x20e8bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20e8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20e8c0:
    // 0x20e8c0: 0x3e00008  jr          $ra
label_20e8c4:
    if (ctx->pc == 0x20E8C4u) {
        ctx->pc = 0x20E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8C0u;
        // 0x20e8c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E8C8u;
        goto label_fallthrough_0x20e8c0;
    }
    ctx->pc = 0x20E8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8C0u;
        // 0x20e8c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20e8c0:
    ctx->pc = 0x20E8C8u;
}
