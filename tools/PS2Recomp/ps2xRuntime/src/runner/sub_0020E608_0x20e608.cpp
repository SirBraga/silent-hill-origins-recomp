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

// Function: sub_0020E608
// Address: 0x20e608 - 0x20e768
void sub_0020E608_0x20e608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E608_0x20e608");
#endif

    switch (ctx->pc) {
        case 0x20e608u: goto label_20e608;
        case 0x20e60cu: goto label_20e60c;
        case 0x20e610u: goto label_20e610;
        case 0x20e614u: goto label_20e614;
        case 0x20e618u: goto label_20e618;
        case 0x20e61cu: goto label_20e61c;
        case 0x20e620u: goto label_20e620;
        case 0x20e624u: goto label_20e624;
        case 0x20e628u: goto label_20e628;
        case 0x20e62cu: goto label_20e62c;
        case 0x20e630u: goto label_20e630;
        case 0x20e634u: goto label_20e634;
        case 0x20e638u: goto label_20e638;
        case 0x20e63cu: goto label_20e63c;
        case 0x20e640u: goto label_20e640;
        case 0x20e644u: goto label_20e644;
        case 0x20e648u: goto label_20e648;
        case 0x20e64cu: goto label_20e64c;
        case 0x20e650u: goto label_20e650;
        case 0x20e654u: goto label_20e654;
        case 0x20e658u: goto label_20e658;
        case 0x20e65cu: goto label_20e65c;
        case 0x20e660u: goto label_20e660;
        case 0x20e664u: goto label_20e664;
        case 0x20e668u: goto label_20e668;
        case 0x20e66cu: goto label_20e66c;
        case 0x20e670u: goto label_20e670;
        case 0x20e674u: goto label_20e674;
        case 0x20e678u: goto label_20e678;
        case 0x20e67cu: goto label_20e67c;
        case 0x20e680u: goto label_20e680;
        case 0x20e684u: goto label_20e684;
        case 0x20e688u: goto label_20e688;
        case 0x20e68cu: goto label_20e68c;
        case 0x20e690u: goto label_20e690;
        case 0x20e694u: goto label_20e694;
        case 0x20e698u: goto label_20e698;
        case 0x20e69cu: goto label_20e69c;
        case 0x20e6a0u: goto label_20e6a0;
        case 0x20e6a4u: goto label_20e6a4;
        case 0x20e6a8u: goto label_20e6a8;
        case 0x20e6acu: goto label_20e6ac;
        case 0x20e6b0u: goto label_20e6b0;
        case 0x20e6b4u: goto label_20e6b4;
        case 0x20e6b8u: goto label_20e6b8;
        case 0x20e6bcu: goto label_20e6bc;
        case 0x20e6c0u: goto label_20e6c0;
        case 0x20e6c4u: goto label_20e6c4;
        case 0x20e6c8u: goto label_20e6c8;
        case 0x20e6ccu: goto label_20e6cc;
        case 0x20e6d0u: goto label_20e6d0;
        case 0x20e6d4u: goto label_20e6d4;
        case 0x20e6d8u: goto label_20e6d8;
        case 0x20e6dcu: goto label_20e6dc;
        case 0x20e6e0u: goto label_20e6e0;
        case 0x20e6e4u: goto label_20e6e4;
        case 0x20e6e8u: goto label_20e6e8;
        case 0x20e6ecu: goto label_20e6ec;
        case 0x20e6f0u: goto label_20e6f0;
        case 0x20e6f4u: goto label_20e6f4;
        case 0x20e6f8u: goto label_20e6f8;
        case 0x20e6fcu: goto label_20e6fc;
        case 0x20e700u: goto label_20e700;
        case 0x20e704u: goto label_20e704;
        case 0x20e708u: goto label_20e708;
        case 0x20e70cu: goto label_20e70c;
        case 0x20e710u: goto label_20e710;
        case 0x20e714u: goto label_20e714;
        case 0x20e718u: goto label_20e718;
        case 0x20e71cu: goto label_20e71c;
        case 0x20e720u: goto label_20e720;
        case 0x20e724u: goto label_20e724;
        case 0x20e728u: goto label_20e728;
        case 0x20e72cu: goto label_20e72c;
        case 0x20e730u: goto label_20e730;
        case 0x20e734u: goto label_20e734;
        case 0x20e738u: goto label_20e738;
        case 0x20e73cu: goto label_20e73c;
        case 0x20e740u: goto label_20e740;
        case 0x20e744u: goto label_20e744;
        case 0x20e748u: goto label_20e748;
        case 0x20e74cu: goto label_20e74c;
        case 0x20e750u: goto label_20e750;
        case 0x20e754u: goto label_20e754;
        case 0x20e758u: goto label_20e758;
        case 0x20e75cu: goto label_20e75c;
        case 0x20e760u: goto label_20e760;
        case 0x20e764u: goto label_20e764;
        default: break;
    }

    ctx->pc = 0x20e608u;

label_20e608:
    // 0x20e608: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20e608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_20e60c:
    // 0x20e60c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x20e60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_20e610:
    // 0x20e610: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x20e610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_20e614:
    // 0x20e614: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20e614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20e618:
    // 0x20e618: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20e618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_20e61c:
    // 0x20e61c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20e61cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e620:
    // 0x20e620: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x20e620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_20e624:
    // 0x20e624: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x20e624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_20e628:
    // 0x20e628: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20e628u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20e62c:
    // 0x20e62c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x20e62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_20e630:
    // 0x20e630: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x20e630u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20e634:
    // 0x20e634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20e634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20e638:
    // 0x20e638: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x20e638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_20e63c:
    // 0x20e63c: 0x9e150008  lwu         $s5, 0x8($s0)
    ctx->pc = 0x20e63cu;
    SET_GPR_ZE32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20e640:
    // 0x20e640: 0x9e040018  lwu         $a0, 0x18($s0)
    ctx->pc = 0x20e640u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_20e644:
    // 0x20e644: 0xc07e4e4  jal         func_1F9390
label_20e648:
    if (ctx->pc == 0x20E648u) {
        ctx->pc = 0x20E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E644u;
        // 0x20e648: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E64Cu;
        goto label_20e64c;
    }
    ctx->pc = 0x20E644u;
    SET_GPR_U32(ctx, 31, 0x20E64Cu);
    ctx->pc = 0x20E648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E644u;
    // 0x20e648: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x20E644u, 0x20E64Cu)) {
        return;
    }
    ctx->pc = 0x20E64Cu;
label_20e64c:
    // 0x20e64c: 0x9e030010  lwu         $v1, 0x10($s0)
    ctx->pc = 0x20e64cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_20e650:
    // 0x20e650: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x20e650u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20e654:
    // 0x20e654: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_20e658:
    if (ctx->pc == 0x20E658u) {
        ctx->pc = 0x20E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E654u;
        // 0x20e658: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E65Cu;
        goto label_20e65c;
    }
    ctx->pc = 0x20E654u;
    {
        const bool branch_taken_0x20e654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E654u;
        // 0x20e658: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e654) {
            ctx->pc = 0x20E740u;
            goto label_20e740;
        }
    }
    ctx->pc = 0x20E65Cu;
label_20e65c:
    // 0x20e65c: 0x0  nop
    ctx->pc = 0x20e65cu;
    // NOP
label_20e660:
    // 0x20e660: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x20e660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_20e664:
    // 0x20e664: 0x9e060014  lwu         $a2, 0x14($s0)
    ctx->pc = 0x20e664u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_20e668:
    // 0x20e668: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x20e668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_20e66c:
    // 0x20e66c: 0x9e050018  lwu         $a1, 0x18($s0)
    ctx->pc = 0x20e66cu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_20e670:
    // 0x20e670: 0x72182f  dsubu       $v1, $v1, $s2
    ctx->pc = 0x20e670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 18));
label_20e674:
    // 0x20e674: 0x9e04001c  lwu         $a0, 0x1C($s0)
    ctx->pc = 0x20e674u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_20e678:
    // 0x20e678: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x20e678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_20e67c:
    // 0x20e67c: 0xb2282d  daddu       $a1, $a1, $s2
    ctx->pc = 0x20e67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 18));
label_20e680:
    // 0x20e680: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x20e680u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6));
label_20e684:
    // 0x20e684: 0x85202f  dsubu       $a0, $a0, $a1
    ctx->pc = 0x20e684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 5));
label_20e688:
    // 0x20e688: 0x9e060004  lwu         $a2, 0x4($s0)
    ctx->pc = 0x20e688u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20e68c:
    // 0x20e68c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x20e68cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_20e690:
    // 0x20e690: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x20e690u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_20e694:
    // 0x20e694: 0xc5302f  dsubu       $a2, $a2, $a1
    ctx->pc = 0x20e694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 5));
label_20e698:
    // 0x20e698: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x20e698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_20e69c:
    // 0x20e69c: 0x82300b  movn        $a2, $a0, $v0
    ctx->pc = 0x20e69cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4));
label_20e6a0:
    // 0x20e6a0: 0x58c00028  blezl       $a2, . + 4 + (0x28 << 2)
label_20e6a4:
    if (ctx->pc == 0x20E6A4u) {
        ctx->pc = 0x20E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6A0u;
        // 0x20e6a4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E6A8u;
        goto label_20e6a8;
    }
    ctx->pc = 0x20E6A0u;
    {
        const bool branch_taken_0x20e6a0 = (GPR_S64(ctx, 6) <= 0);
        if (branch_taken_0x20e6a0) {
            ctx->pc = 0x20E6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E6A0u;
            // 0x20e6a4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E744u;
            goto label_20e744;
        }
    }
    ctx->pc = 0x20E6A8u;
label_20e6a8:
    // 0x20e6a8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x20e6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20e6ac:
    // 0x20e6ac: 0xc07e4e4  jal         func_1F9390
label_20e6b0:
    if (ctx->pc == 0x20E6B0u) {
        ctx->pc = 0x20E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6ACu;
        // 0x20e6b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E6B4u;
        goto label_20e6b4;
    }
    ctx->pc = 0x20E6ACu;
    SET_GPR_U32(ctx, 31, 0x20E6B4u);
    ctx->pc = 0x20E6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E6ACu;
    // 0x20e6b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x20E6ACu, 0x20E6B4u)) {
        return;
    }
    ctx->pc = 0x20E6B4u;
label_20e6b4:
    // 0x20e6b4: 0x12c0000f  beqz        $s6, . + 4 + (0xF << 2)
label_20e6b8:
    if (ctx->pc == 0x20E6B8u) {
        ctx->pc = 0x20E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6B4u;
        // 0x20e6b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E6BCu;
        goto label_20e6bc;
    }
    ctx->pc = 0x20E6B4u;
    {
        const bool branch_taken_0x20e6b4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6B4u;
        // 0x20e6b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6b4) {
            ctx->pc = 0x20E6F4u;
            goto label_20e6f4;
        }
    }
    ctx->pc = 0x20E6BCu;
label_20e6bc:
    // 0x20e6bc: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x20e6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_20e6c0:
    // 0x20e6c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20e6c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20e6c4:
    // 0x20e6c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20e6c8:
    // 0x20e6c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20e6cc:
    // 0x20e6cc: 0x8e090034  lw          $t1, 0x34($s0)
    ctx->pc = 0x20e6ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_20e6d0:
    // 0x20e6d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e6d4:
    // 0x20e6d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20e6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20e6d8:
    // 0x20e6d8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x20e6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20e6dc:
    // 0x20e6dc: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x20e6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_20e6e0:
    // 0x20e6e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x20e6e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20e6e4:
    // 0x20e6e4: 0x120f809  jalr        $t1
label_20e6e8:
    if (ctx->pc == 0x20E6E8u) {
        ctx->pc = 0x20E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6E4u;
        // 0x20e6e8: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E6ECu;
        goto label_20e6ec;
    }
    ctx->pc = 0x20E6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x20E6ECu);
        ctx->pc = 0x20E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6E4u;
        // 0x20e6e8: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E6E4u, 0x20E6ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E6ECu;
label_20e6ec:
    // 0x20e6ec: 0x1000000e  b           . + 4 + (0xE << 2)
label_20e6f0:
    if (ctx->pc == 0x20E6F0u) {
        ctx->pc = 0x20E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6ECu;
        // 0x20e6f0: 0x9e030014  lwu         $v1, 0x14($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E6F4u;
        goto label_20e6f4;
    }
    ctx->pc = 0x20E6ECu;
    {
        const bool branch_taken_0x20e6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6ECu;
        // 0x20e6f0: 0x9e030014  lwu         $v1, 0x14($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6ec) {
            ctx->pc = 0x20E728u;
            goto label_20e728;
        }
    }
    ctx->pc = 0x20E6F4u;
label_20e6f4:
    // 0x20e6f4: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x20e6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_20e6f8:
    // 0x20e6f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20e6f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20e6fc:
    // 0x20e6fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20e700:
    // 0x20e700: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20e700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20e704:
    // 0x20e704: 0x8e090030  lw          $t1, 0x30($s0)
    ctx->pc = 0x20e704u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_20e708:
    // 0x20e708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e70c:
    // 0x20e70c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20e70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20e710:
    // 0x20e710: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x20e710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20e714:
    // 0x20e714: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x20e714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_20e718:
    // 0x20e718: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x20e718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20e71c:
    // 0x20e71c: 0x120f809  jalr        $t1
label_20e720:
    if (ctx->pc == 0x20E720u) {
        ctx->pc = 0x20E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E71Cu;
        // 0x20e720: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E724u;
        goto label_20e724;
    }
    ctx->pc = 0x20E71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x20E724u);
        ctx->pc = 0x20E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E71Cu;
        // 0x20e720: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E71Cu, 0x20E724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E724u;
label_20e724:
    // 0x20e724: 0x9e030014  lwu         $v1, 0x14($s0)
    ctx->pc = 0x20e724u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_20e728:
    // 0x20e728: 0x271982d  daddu       $s3, $s3, $s1
    ctx->pc = 0x20e728u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 17));
label_20e72c:
    // 0x20e72c: 0x9e020010  lwu         $v0, 0x10($s0)
    ctx->pc = 0x20e72cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_20e730:
    // 0x20e730: 0x243902d  daddu       $s2, $s2, $v1
    ctx->pc = 0x20e730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 3));
label_20e734:
    // 0x20e734: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x20e734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20e738:
    // 0x20e738: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
label_20e73c:
    if (ctx->pc == 0x20E73Cu) {
        ctx->pc = 0x20E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E738u;
        // 0x20e73c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E740u;
        goto label_20e740;
    }
    ctx->pc = 0x20E738u;
    {
        const bool branch_taken_0x20e738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E738u;
        // 0x20e73c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e738) {
            ctx->pc = 0x20E660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e660;
        }
    }
    ctx->pc = 0x20E740u;
label_20e740:
    // 0x20e740: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x20e740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20e744:
    // 0x20e744: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x20e744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20e748:
    // 0x20e748: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x20e748u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20e74c:
    // 0x20e74c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20e74cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20e750:
    // 0x20e750: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x20e750u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20e754:
    // 0x20e754: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x20e754u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20e758:
    // 0x20e758: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x20e758u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20e75c:
    // 0x20e75c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20e75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20e760:
    // 0x20e760: 0x3e00008  jr          $ra
label_20e764:
    if (ctx->pc == 0x20E764u) {
        ctx->pc = 0x20E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E760u;
        // 0x20e764: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E768u;
        goto label_fallthrough_0x20e760;
    }
    ctx->pc = 0x20E760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E760u;
        // 0x20e764: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20e760:
    ctx->pc = 0x20E768u;
}
