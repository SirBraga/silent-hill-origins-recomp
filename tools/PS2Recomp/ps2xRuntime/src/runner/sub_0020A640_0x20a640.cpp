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

// Function: sub_0020A640
// Address: 0x20a640 - 0x20aa10
void sub_0020A640_0x20a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A640_0x20a640");
#endif

    switch (ctx->pc) {
        case 0x20a640u: goto label_20a640;
        case 0x20a644u: goto label_20a644;
        case 0x20a648u: goto label_20a648;
        case 0x20a64cu: goto label_20a64c;
        case 0x20a650u: goto label_20a650;
        case 0x20a654u: goto label_20a654;
        case 0x20a658u: goto label_20a658;
        case 0x20a65cu: goto label_20a65c;
        case 0x20a660u: goto label_20a660;
        case 0x20a664u: goto label_20a664;
        case 0x20a668u: goto label_20a668;
        case 0x20a66cu: goto label_20a66c;
        case 0x20a670u: goto label_20a670;
        case 0x20a674u: goto label_20a674;
        case 0x20a678u: goto label_20a678;
        case 0x20a67cu: goto label_20a67c;
        case 0x20a680u: goto label_20a680;
        case 0x20a684u: goto label_20a684;
        case 0x20a688u: goto label_20a688;
        case 0x20a68cu: goto label_20a68c;
        case 0x20a690u: goto label_20a690;
        case 0x20a694u: goto label_20a694;
        case 0x20a698u: goto label_20a698;
        case 0x20a69cu: goto label_20a69c;
        case 0x20a6a0u: goto label_20a6a0;
        case 0x20a6a4u: goto label_20a6a4;
        case 0x20a6a8u: goto label_20a6a8;
        case 0x20a6acu: goto label_20a6ac;
        case 0x20a6b0u: goto label_20a6b0;
        case 0x20a6b4u: goto label_20a6b4;
        case 0x20a6b8u: goto label_20a6b8;
        case 0x20a6bcu: goto label_20a6bc;
        case 0x20a6c0u: goto label_20a6c0;
        case 0x20a6c4u: goto label_20a6c4;
        case 0x20a6c8u: goto label_20a6c8;
        case 0x20a6ccu: goto label_20a6cc;
        case 0x20a6d0u: goto label_20a6d0;
        case 0x20a6d4u: goto label_20a6d4;
        case 0x20a6d8u: goto label_20a6d8;
        case 0x20a6dcu: goto label_20a6dc;
        case 0x20a6e0u: goto label_20a6e0;
        case 0x20a6e4u: goto label_20a6e4;
        case 0x20a6e8u: goto label_20a6e8;
        case 0x20a6ecu: goto label_20a6ec;
        case 0x20a6f0u: goto label_20a6f0;
        case 0x20a6f4u: goto label_20a6f4;
        case 0x20a6f8u: goto label_20a6f8;
        case 0x20a6fcu: goto label_20a6fc;
        case 0x20a700u: goto label_20a700;
        case 0x20a704u: goto label_20a704;
        case 0x20a708u: goto label_20a708;
        case 0x20a70cu: goto label_20a70c;
        case 0x20a710u: goto label_20a710;
        case 0x20a714u: goto label_20a714;
        case 0x20a718u: goto label_20a718;
        case 0x20a71cu: goto label_20a71c;
        case 0x20a720u: goto label_20a720;
        case 0x20a724u: goto label_20a724;
        case 0x20a728u: goto label_20a728;
        case 0x20a72cu: goto label_20a72c;
        case 0x20a730u: goto label_20a730;
        case 0x20a734u: goto label_20a734;
        case 0x20a738u: goto label_20a738;
        case 0x20a73cu: goto label_20a73c;
        case 0x20a740u: goto label_20a740;
        case 0x20a744u: goto label_20a744;
        case 0x20a748u: goto label_20a748;
        case 0x20a74cu: goto label_20a74c;
        case 0x20a750u: goto label_20a750;
        case 0x20a754u: goto label_20a754;
        case 0x20a758u: goto label_20a758;
        case 0x20a75cu: goto label_20a75c;
        case 0x20a760u: goto label_20a760;
        case 0x20a764u: goto label_20a764;
        case 0x20a768u: goto label_20a768;
        case 0x20a76cu: goto label_20a76c;
        case 0x20a770u: goto label_20a770;
        case 0x20a774u: goto label_20a774;
        case 0x20a778u: goto label_20a778;
        case 0x20a77cu: goto label_20a77c;
        case 0x20a780u: goto label_20a780;
        case 0x20a784u: goto label_20a784;
        case 0x20a788u: goto label_20a788;
        case 0x20a78cu: goto label_20a78c;
        case 0x20a790u: goto label_20a790;
        case 0x20a794u: goto label_20a794;
        case 0x20a798u: goto label_20a798;
        case 0x20a79cu: goto label_20a79c;
        case 0x20a7a0u: goto label_20a7a0;
        case 0x20a7a4u: goto label_20a7a4;
        case 0x20a7a8u: goto label_20a7a8;
        case 0x20a7acu: goto label_20a7ac;
        case 0x20a7b0u: goto label_20a7b0;
        case 0x20a7b4u: goto label_20a7b4;
        case 0x20a7b8u: goto label_20a7b8;
        case 0x20a7bcu: goto label_20a7bc;
        case 0x20a7c0u: goto label_20a7c0;
        case 0x20a7c4u: goto label_20a7c4;
        case 0x20a7c8u: goto label_20a7c8;
        case 0x20a7ccu: goto label_20a7cc;
        case 0x20a7d0u: goto label_20a7d0;
        case 0x20a7d4u: goto label_20a7d4;
        case 0x20a7d8u: goto label_20a7d8;
        case 0x20a7dcu: goto label_20a7dc;
        case 0x20a7e0u: goto label_20a7e0;
        case 0x20a7e4u: goto label_20a7e4;
        case 0x20a7e8u: goto label_20a7e8;
        case 0x20a7ecu: goto label_20a7ec;
        case 0x20a7f0u: goto label_20a7f0;
        case 0x20a7f4u: goto label_20a7f4;
        case 0x20a7f8u: goto label_20a7f8;
        case 0x20a7fcu: goto label_20a7fc;
        case 0x20a800u: goto label_20a800;
        case 0x20a804u: goto label_20a804;
        case 0x20a808u: goto label_20a808;
        case 0x20a80cu: goto label_20a80c;
        case 0x20a810u: goto label_20a810;
        case 0x20a814u: goto label_20a814;
        case 0x20a818u: goto label_20a818;
        case 0x20a81cu: goto label_20a81c;
        case 0x20a820u: goto label_20a820;
        case 0x20a824u: goto label_20a824;
        case 0x20a828u: goto label_20a828;
        case 0x20a82cu: goto label_20a82c;
        case 0x20a830u: goto label_20a830;
        case 0x20a834u: goto label_20a834;
        case 0x20a838u: goto label_20a838;
        case 0x20a83cu: goto label_20a83c;
        case 0x20a840u: goto label_20a840;
        case 0x20a844u: goto label_20a844;
        case 0x20a848u: goto label_20a848;
        case 0x20a84cu: goto label_20a84c;
        case 0x20a850u: goto label_20a850;
        case 0x20a854u: goto label_20a854;
        case 0x20a858u: goto label_20a858;
        case 0x20a85cu: goto label_20a85c;
        case 0x20a860u: goto label_20a860;
        case 0x20a864u: goto label_20a864;
        case 0x20a868u: goto label_20a868;
        case 0x20a86cu: goto label_20a86c;
        case 0x20a870u: goto label_20a870;
        case 0x20a874u: goto label_20a874;
        case 0x20a878u: goto label_20a878;
        case 0x20a87cu: goto label_20a87c;
        case 0x20a880u: goto label_20a880;
        case 0x20a884u: goto label_20a884;
        case 0x20a888u: goto label_20a888;
        case 0x20a88cu: goto label_20a88c;
        case 0x20a890u: goto label_20a890;
        case 0x20a894u: goto label_20a894;
        case 0x20a898u: goto label_20a898;
        case 0x20a89cu: goto label_20a89c;
        case 0x20a8a0u: goto label_20a8a0;
        case 0x20a8a4u: goto label_20a8a4;
        case 0x20a8a8u: goto label_20a8a8;
        case 0x20a8acu: goto label_20a8ac;
        case 0x20a8b0u: goto label_20a8b0;
        case 0x20a8b4u: goto label_20a8b4;
        case 0x20a8b8u: goto label_20a8b8;
        case 0x20a8bcu: goto label_20a8bc;
        case 0x20a8c0u: goto label_20a8c0;
        case 0x20a8c4u: goto label_20a8c4;
        case 0x20a8c8u: goto label_20a8c8;
        case 0x20a8ccu: goto label_20a8cc;
        case 0x20a8d0u: goto label_20a8d0;
        case 0x20a8d4u: goto label_20a8d4;
        case 0x20a8d8u: goto label_20a8d8;
        case 0x20a8dcu: goto label_20a8dc;
        case 0x20a8e0u: goto label_20a8e0;
        case 0x20a8e4u: goto label_20a8e4;
        case 0x20a8e8u: goto label_20a8e8;
        case 0x20a8ecu: goto label_20a8ec;
        case 0x20a8f0u: goto label_20a8f0;
        case 0x20a8f4u: goto label_20a8f4;
        case 0x20a8f8u: goto label_20a8f8;
        case 0x20a8fcu: goto label_20a8fc;
        case 0x20a900u: goto label_20a900;
        case 0x20a904u: goto label_20a904;
        case 0x20a908u: goto label_20a908;
        case 0x20a90cu: goto label_20a90c;
        case 0x20a910u: goto label_20a910;
        case 0x20a914u: goto label_20a914;
        case 0x20a918u: goto label_20a918;
        case 0x20a91cu: goto label_20a91c;
        case 0x20a920u: goto label_20a920;
        case 0x20a924u: goto label_20a924;
        case 0x20a928u: goto label_20a928;
        case 0x20a92cu: goto label_20a92c;
        case 0x20a930u: goto label_20a930;
        case 0x20a934u: goto label_20a934;
        case 0x20a938u: goto label_20a938;
        case 0x20a93cu: goto label_20a93c;
        case 0x20a940u: goto label_20a940;
        case 0x20a944u: goto label_20a944;
        case 0x20a948u: goto label_20a948;
        case 0x20a94cu: goto label_20a94c;
        case 0x20a950u: goto label_20a950;
        case 0x20a954u: goto label_20a954;
        case 0x20a958u: goto label_20a958;
        case 0x20a95cu: goto label_20a95c;
        case 0x20a960u: goto label_20a960;
        case 0x20a964u: goto label_20a964;
        case 0x20a968u: goto label_20a968;
        case 0x20a96cu: goto label_20a96c;
        case 0x20a970u: goto label_20a970;
        case 0x20a974u: goto label_20a974;
        case 0x20a978u: goto label_20a978;
        case 0x20a97cu: goto label_20a97c;
        case 0x20a980u: goto label_20a980;
        case 0x20a984u: goto label_20a984;
        case 0x20a988u: goto label_20a988;
        case 0x20a98cu: goto label_20a98c;
        case 0x20a990u: goto label_20a990;
        case 0x20a994u: goto label_20a994;
        case 0x20a998u: goto label_20a998;
        case 0x20a99cu: goto label_20a99c;
        case 0x20a9a0u: goto label_20a9a0;
        case 0x20a9a4u: goto label_20a9a4;
        case 0x20a9a8u: goto label_20a9a8;
        case 0x20a9acu: goto label_20a9ac;
        case 0x20a9b0u: goto label_20a9b0;
        case 0x20a9b4u: goto label_20a9b4;
        case 0x20a9b8u: goto label_20a9b8;
        case 0x20a9bcu: goto label_20a9bc;
        case 0x20a9c0u: goto label_20a9c0;
        case 0x20a9c4u: goto label_20a9c4;
        case 0x20a9c8u: goto label_20a9c8;
        case 0x20a9ccu: goto label_20a9cc;
        case 0x20a9d0u: goto label_20a9d0;
        case 0x20a9d4u: goto label_20a9d4;
        case 0x20a9d8u: goto label_20a9d8;
        case 0x20a9dcu: goto label_20a9dc;
        case 0x20a9e0u: goto label_20a9e0;
        case 0x20a9e4u: goto label_20a9e4;
        case 0x20a9e8u: goto label_20a9e8;
        case 0x20a9ecu: goto label_20a9ec;
        case 0x20a9f0u: goto label_20a9f0;
        case 0x20a9f4u: goto label_20a9f4;
        case 0x20a9f8u: goto label_20a9f8;
        case 0x20a9fcu: goto label_20a9fc;
        case 0x20aa00u: goto label_20aa00;
        case 0x20aa04u: goto label_20aa04;
        case 0x20aa08u: goto label_20aa08;
        case 0x20aa0cu: goto label_20aa0c;
        default: break;
    }

    ctx->pc = 0x20a640u;

label_20a640:
    // 0x20a640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20a640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20a644:
    // 0x20a644: 0x240300ca  addiu       $v1, $zero, 0xCA
    ctx->pc = 0x20a644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
label_20a648:
    // 0x20a648: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20a648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_20a64c:
    // 0x20a64c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20a64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20a650:
    // 0x20a650: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20a654:
    // 0x20a654: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x20a654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_20a658:
    // 0x20a658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20a65c:
    // 0x20a65c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x20a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_20a660:
    // 0x20a660: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_20a664:
    if (ctx->pc == 0x20A664u) {
        ctx->pc = 0x20A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A660u;
        // 0x20a664: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A668u;
        goto label_20a668;
    }
    ctx->pc = 0x20A660u;
    {
        const bool branch_taken_0x20a660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A660u;
        // 0x20a664: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a660) {
            ctx->pc = 0x20A68Cu;
            goto label_20a68c;
        }
    }
    ctx->pc = 0x20A668u;
label_20a668:
    // 0x20a668: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20a668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20a66c:
    // 0x20a66c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x20a66cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_20a670:
    // 0x20a670: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x20a670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_20a674:
    // 0x20a674: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x20a674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20a678:
    // 0x20a678: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x20a678u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_20a67c:
    // 0x20a67c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20a680:
    // 0x20a680: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20a680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20a684:
    // 0x20a684: 0x40f809  jalr        $v0
label_20a688:
    if (ctx->pc == 0x20A688u) {
        ctx->pc = 0x20A68Cu;
        goto label_20a68c;
    }
    ctx->pc = 0x20A684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A68Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A684u, 0x20A68Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A68Cu;
label_20a68c:
    // 0x20a68c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x20a68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_20a690:
    // 0x20a690: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x20a690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_20a694:
    // 0x20a694: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20a694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20a698:
    // 0x20a698: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x20a698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20a69c:
    // 0x20a69c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_20a6a0:
    if (ctx->pc == 0x20A6A0u) {
        ctx->pc = 0x20A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A69Cu;
        // 0x20a6a0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A6A4u;
        goto label_20a6a4;
    }
    ctx->pc = 0x20A69Cu;
    {
        const bool branch_taken_0x20a69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A69Cu;
        // 0x20a6a0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a69c) {
            ctx->pc = 0x20A6D8u;
            goto label_20a6d8;
        }
    }
    ctx->pc = 0x20A6A4u;
label_20a6a4:
    // 0x20a6a4: 0x9e04001c  lwu         $a0, 0x1C($s0)
    ctx->pc = 0x20a6a4u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_20a6a8:
    // 0x20a6a8: 0xc084860  jal         func_212180
label_20a6ac:
    if (ctx->pc == 0x20A6ACu) {
        ctx->pc = 0x20A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6A8u;
        // 0x20a6ac: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A6B0u;
        goto label_20a6b0;
    }
    ctx->pc = 0x20A6A8u;
    SET_GPR_U32(ctx, 31, 0x20A6B0u);
    ctx->pc = 0x20A6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A6A8u;
    // 0x20a6ac: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212180u, 0x20A6A8u, 0x20A6B0u)) {
        return;
    }
    ctx->pc = 0x20A6B0u;
label_20a6b0:
    // 0x20a6b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20a6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20a6b4:
    // 0x20a6b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20a6b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20a6b8:
    // 0x20a6b8: 0x9e040020  lwu         $a0, 0x20($s0)
    ctx->pc = 0x20a6b8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_20a6bc:
    // 0x20a6bc: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x20a6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_20a6c0:
    // 0x20a6c0: 0xc084860  jal         func_212180
label_20a6c4:
    if (ctx->pc == 0x20A6C4u) {
        ctx->pc = 0x20A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6C0u;
        // 0x20a6c4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A6C8u;
        goto label_20a6c8;
    }
    ctx->pc = 0x20A6C0u;
    SET_GPR_U32(ctx, 31, 0x20A6C8u);
    ctx->pc = 0x20A6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A6C0u;
    // 0x20a6c4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212180u, 0x20A6C0u, 0x20A6C8u)) {
        return;
    }
    ctx->pc = 0x20A6C8u;
label_20a6c8:
    // 0x20a6c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20a6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20a6cc:
    // 0x20a6cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20a6ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20a6d0:
    // 0x20a6d0: 0x10000020  b           . + 4 + (0x20 << 2)
label_20a6d4:
    if (ctx->pc == 0x20A6D4u) {
        ctx->pc = 0x20A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6D0u;
        // 0x20a6d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A6D8u;
        goto label_20a6d8;
    }
    ctx->pc = 0x20A6D0u;
    {
        const bool branch_taken_0x20a6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6D0u;
        // 0x20a6d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a6d0) {
            ctx->pc = 0x20A754u;
            goto label_20a754;
        }
    }
    ctx->pc = 0x20A6D8u;
label_20a6d8:
    // 0x20a6d8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x20a6d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20a6dc:
    // 0x20a6dc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_20a6e0:
    if (ctx->pc == 0x20A6E0u) {
        ctx->pc = 0x20A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6DCu;
        // 0x20a6e0: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A6E4u;
        goto label_20a6e4;
    }
    ctx->pc = 0x20A6DCu;
    {
        const bool branch_taken_0x20a6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6DCu;
        // 0x20a6e0: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a6dc) {
            ctx->pc = 0x20A718u;
            goto label_20a718;
        }
    }
    ctx->pc = 0x20A6E4u;
label_20a6e4:
    // 0x20a6e4: 0x9e04001c  lwu         $a0, 0x1C($s0)
    ctx->pc = 0x20a6e4u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_20a6e8:
    // 0x20a6e8: 0xc084860  jal         func_212180
label_20a6ec:
    if (ctx->pc == 0x20A6ECu) {
        ctx->pc = 0x20A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6E8u;
        // 0x20a6ec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A6F0u;
        goto label_20a6f0;
    }
    ctx->pc = 0x20A6E8u;
    SET_GPR_U32(ctx, 31, 0x20A6F0u);
    ctx->pc = 0x20A6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A6E8u;
    // 0x20a6ec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212180u, 0x20A6E8u, 0x20A6F0u)) {
        return;
    }
    ctx->pc = 0x20A6F0u;
label_20a6f0:
    // 0x20a6f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20a6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20a6f4:
    // 0x20a6f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20a6f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20a6f8:
    // 0x20a6f8: 0x9e040020  lwu         $a0, 0x20($s0)
    ctx->pc = 0x20a6f8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_20a6fc:
    // 0x20a6fc: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x20a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_20a700:
    // 0x20a700: 0xc084860  jal         func_212180
label_20a704:
    if (ctx->pc == 0x20A704u) {
        ctx->pc = 0x20A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A700u;
        // 0x20a704: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A708u;
        goto label_20a708;
    }
    ctx->pc = 0x20A700u;
    SET_GPR_U32(ctx, 31, 0x20A708u);
    ctx->pc = 0x20A704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A700u;
    // 0x20a704: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212180u, 0x20A700u, 0x20A708u)) {
        return;
    }
    ctx->pc = 0x20A708u;
label_20a708:
    // 0x20a708: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20a708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20a70c:
    // 0x20a70c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20a70cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20a710:
    // 0x20a710: 0x10000010  b           . + 4 + (0x10 << 2)
label_20a714:
    if (ctx->pc == 0x20A714u) {
        ctx->pc = 0x20A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A710u;
        // 0x20a714: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A718u;
        goto label_20a718;
    }
    ctx->pc = 0x20A710u;
    {
        const bool branch_taken_0x20a710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A710u;
        // 0x20a714: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a710) {
            ctx->pc = 0x20A754u;
            goto label_20a754;
        }
    }
    ctx->pc = 0x20A718u;
label_20a718:
    // 0x20a718: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x20a718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20a71c:
    // 0x20a71c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_20a720:
    if (ctx->pc == 0x20A720u) {
        ctx->pc = 0x20A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A71Cu;
        // 0x20a720: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A724u;
        goto label_20a724;
    }
    ctx->pc = 0x20A71Cu;
    {
        const bool branch_taken_0x20a71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a71c) {
            ctx->pc = 0x20A720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A71Cu;
            // 0x20a720: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A760u;
            goto label_20a760;
        }
    }
    ctx->pc = 0x20A724u;
label_20a724:
    // 0x20a724: 0x9e04001c  lwu         $a0, 0x1C($s0)
    ctx->pc = 0x20a724u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_20a728:
    // 0x20a728: 0xc084860  jal         func_212180
label_20a72c:
    if (ctx->pc == 0x20A72Cu) {
        ctx->pc = 0x20A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A728u;
        // 0x20a72c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A730u;
        goto label_20a730;
    }
    ctx->pc = 0x20A728u;
    SET_GPR_U32(ctx, 31, 0x20A730u);
    ctx->pc = 0x20A72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A728u;
    // 0x20a72c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212180u, 0x20A728u, 0x20A730u)) {
        return;
    }
    ctx->pc = 0x20A730u;
label_20a730:
    // 0x20a730: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20a730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20a734:
    // 0x20a734: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20a734u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20a738:
    // 0x20a738: 0x9e040020  lwu         $a0, 0x20($s0)
    ctx->pc = 0x20a738u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_20a73c:
    // 0x20a73c: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x20a73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_20a740:
    // 0x20a740: 0xc084860  jal         func_212180
label_20a744:
    if (ctx->pc == 0x20A744u) {
        ctx->pc = 0x20A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A740u;
        // 0x20a744: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A748u;
        goto label_20a748;
    }
    ctx->pc = 0x20A740u;
    SET_GPR_U32(ctx, 31, 0x20A748u);
    ctx->pc = 0x20A744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A740u;
    // 0x20a744: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212180u, 0x20A740u, 0x20A748u)) {
        return;
    }
    ctx->pc = 0x20A748u;
label_20a748:
    // 0x20a748: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20a748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20a74c:
    // 0x20a74c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20a74cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20a750:
    // 0x20a750: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20a750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20a754:
    // 0x20a754: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x20a754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_20a758:
    // 0x20a758: 0x10000006  b           . + 4 + (0x6 << 2)
label_20a75c:
    if (ctx->pc == 0x20A75Cu) {
        ctx->pc = 0x20A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A758u;
        // 0x20a75c: 0xae03013c  sw          $v1, 0x13C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A760u;
        goto label_20a760;
    }
    ctx->pc = 0x20A758u;
    {
        const bool branch_taken_0x20a758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A758u;
        // 0x20a75c: 0xae03013c  sw          $v1, 0x13C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a758) {
            ctx->pc = 0x20A774u;
            goto label_20a774;
        }
    }
    ctx->pc = 0x20A760u;
label_20a760:
    // 0x20a760: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20a760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20a764:
    // 0x20a764: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x20a764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_20a768:
    // 0x20a768: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x20a768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_20a76c:
    // 0x20a76c: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x20a76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
label_20a770:
    // 0x20a770: 0xae04013c  sw          $a0, 0x13C($s0)
    ctx->pc = 0x20a770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 4));
label_20a774:
    // 0x20a774: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x20a774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20a778:
    // 0x20a778: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20a778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a77c:
    // 0x20a77c: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
label_20a780:
    if (ctx->pc == 0x20A780u) {
        ctx->pc = 0x20A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A77Cu;
        // 0x20a780: 0x8e1100d8  lw          $s1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A784u;
        goto label_20a784;
    }
    ctx->pc = 0x20A77Cu;
    {
        const bool branch_taken_0x20a77c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A77Cu;
        // 0x20a780: 0x8e1100d8  lw          $s1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a77c) {
            ctx->pc = 0x20A81Cu;
            goto label_20a81c;
        }
    }
    ctx->pc = 0x20A784u;
label_20a784:
    // 0x20a784: 0x0  nop
    ctx->pc = 0x20a784u;
    // NOP
label_20a788:
    // 0x20a788: 0x8e04013c  lw          $a0, 0x13C($s0)
    ctx->pc = 0x20a788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_20a78c:
    // 0x20a78c: 0x26490001  addiu       $t1, $s2, 0x1
    ctx->pc = 0x20a78cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20a790:
    // 0x20a790: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x20a790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
label_20a794:
    // 0x20a794: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_20a798:
    if (ctx->pc == 0x20A798u) {
        ctx->pc = 0x20A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A794u;
        // 0x20a798: 0x26280054  addiu       $t0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A79Cu;
        goto label_20a79c;
    }
    ctx->pc = 0x20A794u;
    {
        const bool branch_taken_0x20a794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A794u;
        // 0x20a798: 0x26280054  addiu       $t0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a794) {
            ctx->pc = 0x20A7FCu;
            goto label_20a7fc;
        }
    }
    ctx->pc = 0x20A79Cu;
label_20a79c:
    // 0x20a79c: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x20a79cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_20a7a0:
    // 0x20a7a0: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x20a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_20a7a4:
    // 0x20a7a4: 0xe41018  mult        $v0, $a3, $a0
    ctx->pc = 0x20a7a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20a7a8:
    // 0x20a7a8: 0x642818  mult        $a1, $v1, $a0
    ctx->pc = 0x20a7a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_20a7ac:
    // 0x20a7ac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_20a7b0:
    // 0x20a7b0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x20a7b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20a7b4:
    // 0x20a7b4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_20a7b8:
    if (ctx->pc == 0x20A7B8u) {
        ctx->pc = 0x20A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7B4u;
        // 0x20a7b8: 0xae240024  sw          $a0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A7BCu;
        goto label_20a7bc;
    }
    ctx->pc = 0x20A7B4u;
    {
        const bool branch_taken_0x20a7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a7b4) {
            ctx->pc = 0x20A7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A7B4u;
            // 0x20a7b8: 0xae240024  sw          $a0, 0x24($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A800u;
            goto label_20a800;
        }
    }
    ctx->pc = 0x20A7BCu;
label_20a7bc:
    // 0x20a7bc: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x20a7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20a7c0:
    // 0x20a7c0: 0x8e030138  lw          $v1, 0x138($s0)
    ctx->pc = 0x20a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_20a7c4:
    // 0x20a7c4: 0xc41018  mult        $v0, $a2, $a0
    ctx->pc = 0x20a7c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20a7c8:
    // 0x20a7c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_20a7cc:
    if (ctx->pc == 0x20A7CCu) {
        ctx->pc = 0x20A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7C8u;
        // 0x20a7cc: 0x641818  mult        $v1, $v1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A7D0u;
        goto label_20a7d0;
    }
    ctx->pc = 0x20A7C8u;
    {
        const bool branch_taken_0x20a7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7C8u;
        // 0x20a7cc: 0x641818  mult        $v1, $v1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7c8) {
            ctx->pc = 0x20A7ECu;
            goto label_20a7ec;
        }
    }
    ctx->pc = 0x20A7D0u;
label_20a7d0:
    // 0x20a7d0: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x20a7d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
label_20a7d4:
    // 0x20a7d4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_20a7d8:
    if (ctx->pc == 0x20A7D8u) {
        ctx->pc = 0x20A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7D4u;
        // 0x20a7d8: 0xe41018  mult        $v0, $a3, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A7DCu;
        goto label_20a7dc;
    }
    ctx->pc = 0x20A7D4u;
    {
        const bool branch_taken_0x20a7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7D4u;
        // 0x20a7d8: 0xe41018  mult        $v0, $a3, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7d4) {
            ctx->pc = 0x20A7FCu;
            goto label_20a7fc;
        }
    }
    ctx->pc = 0x20A7DCu;
label_20a7dc:
    // 0x20a7dc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_20a7e0:
    // 0x20a7e0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x20a7e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20a7e4:
    // 0x20a7e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_20a7e8:
    if (ctx->pc == 0x20A7E8u) {
        ctx->pc = 0x20A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7E4u;
        // 0x20a7e8: 0xc41018  mult        $v0, $a2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A7ECu;
        goto label_20a7ec;
    }
    ctx->pc = 0x20A7E4u;
    {
        const bool branch_taken_0x20a7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7E4u;
        // 0x20a7e8: 0xc41018  mult        $v0, $a2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7e4) {
            ctx->pc = 0x20A7FCu;
            goto label_20a7fc;
        }
    }
    ctx->pc = 0x20A7ECu;
label_20a7ec:
    // 0x20a7ec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_20a7f0:
    // 0x20a7f0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20a7f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20a7f4:
    // 0x20a7f4: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_20a7f8:
    if (ctx->pc == 0x20A7F8u) {
        ctx->pc = 0x20A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7F4u;
        // 0x20a7f8: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A7FCu;
        goto label_20a7fc;
    }
    ctx->pc = 0x20A7F4u;
    {
        const bool branch_taken_0x20a7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a7f4) {
            ctx->pc = 0x20A7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A7F4u;
            // 0x20a7f8: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a7d0;
        }
    }
    ctx->pc = 0x20A7FCu;
label_20a7fc:
    // 0x20a7fc: 0xae240024  sw          $a0, 0x24($s1)
    ctx->pc = 0x20a7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
label_20a800:
    // 0x20a800: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x20a800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_20a804:
    // 0x20a804: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x20a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20a808:
    // 0x20a808: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x20a808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20a80c:
    // 0x20a80c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_20a810:
    if (ctx->pc == 0x20A810u) {
        ctx->pc = 0x20A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A80Cu;
        // 0x20a810: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A814u;
        goto label_20a814;
    }
    ctx->pc = 0x20A80Cu;
    {
        const bool branch_taken_0x20a80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A80Cu;
        // 0x20a810: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a80c) {
            ctx->pc = 0x20A788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a788;
        }
    }
    ctx->pc = 0x20A814u;
label_20a814:
    // 0x20a814: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x20a814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20a818:
    // 0x20a818: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20a818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a81c:
    // 0x20a81c: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_20a820:
    if (ctx->pc == 0x20A820u) {
        ctx->pc = 0x20A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A81Cu;
        // 0x20a820: 0x8e1100d8  lw          $s1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A824u;
        goto label_20a824;
    }
    ctx->pc = 0x20A81Cu;
    {
        const bool branch_taken_0x20a81c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A81Cu;
        // 0x20a820: 0x8e1100d8  lw          $s1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a81c) {
            ctx->pc = 0x20A8ACu;
            goto label_20a8ac;
        }
    }
    ctx->pc = 0x20A824u;
label_20a824:
    // 0x20a824: 0x0  nop
    ctx->pc = 0x20a824u;
    // NOP
label_20a828:
    // 0x20a828: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x20a828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_20a82c:
    // 0x20a82c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20a82cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20a830:
    // 0x20a830: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x20a830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_20a834:
    // 0x20a834: 0x9e04001c  lwu         $a0, 0x1C($s0)
    ctx->pc = 0x20a834u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_20a838:
    // 0x20a838: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x20a838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_20a83c:
    // 0x20a83c: 0xc07e4e4  jal         func_1F9390
label_20a840:
    if (ctx->pc == 0x20A840u) {
        ctx->pc = 0x20A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A83Cu;
        // 0x20a840: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A844u;
        goto label_20a844;
    }
    ctx->pc = 0x20A83Cu;
    SET_GPR_U32(ctx, 31, 0x20A844u);
    ctx->pc = 0x20A840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A83Cu;
    // 0x20a840: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x20A83Cu, 0x20A844u)) {
        return;
    }
    ctx->pc = 0x20A844u;
label_20a844:
    // 0x20a844: 0x8e050134  lw          $a1, 0x134($s0)
    ctx->pc = 0x20a844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_20a848:
    // 0x20a848: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20a84c:
    // 0x20a84c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x20a84cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_20a850:
    // 0x20a850: 0xc084860  jal         func_212180
label_20a854:
    if (ctx->pc == 0x20A854u) {
        ctx->pc = 0x20A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A850u;
        // 0x20a854: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A858u;
        goto label_20a858;
    }
    ctx->pc = 0x20A850u;
    SET_GPR_U32(ctx, 31, 0x20A858u);
    ctx->pc = 0x20A854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A850u;
    // 0x20a854: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212180u, 0x20A850u, 0x20A858u)) {
        return;
    }
    ctx->pc = 0x20A858u;
label_20a858:
    // 0x20a858: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x20a858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_20a85c:
    // 0x20a85c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20a85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20a860:
    // 0x20a860: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20a860u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20a864:
    // 0x20a864: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x20a864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20a868:
    // 0x20a868: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x20a868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_20a86c:
    // 0x20a86c: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x20a86cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_20a870:
    // 0x20a870: 0x9e040020  lwu         $a0, 0x20($s0)
    ctx->pc = 0x20a870u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_20a874:
    // 0x20a874: 0xc07e4e4  jal         func_1F9390
label_20a878:
    if (ctx->pc == 0x20A878u) {
        ctx->pc = 0x20A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A874u;
        // 0x20a878: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A87Cu;
        goto label_20a87c;
    }
    ctx->pc = 0x20A874u;
    SET_GPR_U32(ctx, 31, 0x20A87Cu);
    ctx->pc = 0x20A878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A874u;
    // 0x20a878: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x20A874u, 0x20A87Cu)) {
        return;
    }
    ctx->pc = 0x20A87Cu;
label_20a87c:
    // 0x20a87c: 0x8e050138  lw          $a1, 0x138($s0)
    ctx->pc = 0x20a87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_20a880:
    // 0x20a880: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20a884:
    // 0x20a884: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x20a884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_20a888:
    // 0x20a888: 0xc084860  jal         func_212180
label_20a88c:
    if (ctx->pc == 0x20A88Cu) {
        ctx->pc = 0x20A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A888u;
        // 0x20a88c: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A890u;
        goto label_20a890;
    }
    ctx->pc = 0x20A888u;
    SET_GPR_U32(ctx, 31, 0x20A890u);
    ctx->pc = 0x20A88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A888u;
    // 0x20a88c: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212180u, 0x20A888u, 0x20A890u)) {
        return;
    }
    ctx->pc = 0x20A890u;
label_20a890:
    // 0x20a890: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20a890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20a894:
    // 0x20a894: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20a894u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20a898:
    // 0x20a898: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x20a898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_20a89c:
    // 0x20a89c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x20a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20a8a0:
    // 0x20a8a0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x20a8a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20a8a4:
    // 0x20a8a4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_20a8a8:
    if (ctx->pc == 0x20A8A8u) {
        ctx->pc = 0x20A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8A4u;
        // 0x20a8a8: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A8ACu;
        goto label_20a8ac;
    }
    ctx->pc = 0x20A8A4u;
    {
        const bool branch_taken_0x20a8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8A4u;
        // 0x20a8a8: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8a4) {
            ctx->pc = 0x20A828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a828;
        }
    }
    ctx->pc = 0x20A8ACu;
label_20a8ac:
    // 0x20a8ac: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x20a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_20a8b0:
    // 0x20a8b0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x20a8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_20a8b4:
    // 0x20a8b4: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x20a8b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_20a8b8:
    // 0x20a8b8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_20a8bc:
    if (ctx->pc == 0x20A8BCu) {
        ctx->pc = 0x20A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8B8u;
        // 0x20a8bc: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A8C0u;
        goto label_20a8c0;
    }
    ctx->pc = 0x20A8B8u;
    {
        const bool branch_taken_0x20a8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8B8u;
        // 0x20a8bc: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8b8) {
            ctx->pc = 0x20A8F8u;
            goto label_20a8f8;
        }
    }
    ctx->pc = 0x20A8C0u;
label_20a8c0:
    // 0x20a8c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20a8c4:
    // 0x20a8c4: 0x24423f80  addiu       $v0, $v0, 0x3F80
    ctx->pc = 0x20a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16256));
label_20a8c8:
    // 0x20a8c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20a8cc:
    // 0x20a8cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20a8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20a8d0:
    // 0x20a8d0: 0x800008  jr          $a0
label_20a8d4:
    if (ctx->pc == 0x20A8D4u) {
        ctx->pc = 0x20A8D8u;
        goto label_20a8d8;
    }
    ctx->pc = 0x20A8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A8D8u: goto label_20a8d8;
            case 0x20A8E0u: goto label_20a8e0;
            case 0x20A8E8u: goto label_20a8e8;
            case 0x20A8F0u: goto label_20a8f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A8D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20A8D8u;
label_20a8d8:
    // 0x20a8d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_20a8dc:
    if (ctx->pc == 0x20A8DCu) {
        ctx->pc = 0x20A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8D8u;
        // 0x20a8dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A8E0u;
        goto label_20a8e0;
    }
    ctx->pc = 0x20A8D8u;
    {
        const bool branch_taken_0x20a8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8D8u;
        // 0x20a8dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8d8) {
            ctx->pc = 0x20A8FCu;
            goto label_20a8fc;
        }
    }
    ctx->pc = 0x20A8E0u;
label_20a8e0:
    // 0x20a8e0: 0x10000006  b           . + 4 + (0x6 << 2)
label_20a8e4:
    if (ctx->pc == 0x20A8E4u) {
        ctx->pc = 0x20A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8E0u;
        // 0x20a8e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A8E8u;
        goto label_20a8e8;
    }
    ctx->pc = 0x20A8E0u;
    {
        const bool branch_taken_0x20a8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8E0u;
        // 0x20a8e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8e0) {
            ctx->pc = 0x20A8FCu;
            goto label_20a8fc;
        }
    }
    ctx->pc = 0x20A8E8u;
label_20a8e8:
    // 0x20a8e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_20a8ec:
    if (ctx->pc == 0x20A8ECu) {
        ctx->pc = 0x20A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8E8u;
        // 0x20a8ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A8F0u;
        goto label_20a8f0;
    }
    ctx->pc = 0x20A8E8u;
    {
        const bool branch_taken_0x20a8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8E8u;
        // 0x20a8ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8e8) {
            ctx->pc = 0x20A8FCu;
            goto label_20a8fc;
        }
    }
    ctx->pc = 0x20A8F0u;
label_20a8f0:
    // 0x20a8f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_20a8f4:
    if (ctx->pc == 0x20A8F4u) {
        ctx->pc = 0x20A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8F0u;
        // 0x20a8f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A8F8u;
        goto label_20a8f8;
    }
    ctx->pc = 0x20A8F0u;
    {
        const bool branch_taken_0x20a8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8F0u;
        // 0x20a8f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8f0) {
            ctx->pc = 0x20A8FCu;
            goto label_20a8fc;
        }
    }
    ctx->pc = 0x20A8F8u;
label_20a8f8:
    // 0x20a8f8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x20a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20a8fc:
    // 0x20a8fc: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x20a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
label_20a900:
    // 0x20a900: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x20a900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_20a904:
    // 0x20a904: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_20a908:
    if (ctx->pc == 0x20A908u) {
        ctx->pc = 0x20A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A904u;
        // 0x20a908: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A90Cu;
        goto label_20a90c;
    }
    ctx->pc = 0x20A904u;
    {
        const bool branch_taken_0x20a904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A904u;
        // 0x20a908: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a904) {
            ctx->pc = 0x20A910u;
            goto label_20a910;
        }
    }
    ctx->pc = 0x20A90Cu;
label_20a90c:
    // 0x20a90c: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x20a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_20a910:
    // 0x20a910: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x20a910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_20a914:
    // 0x20a914: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_20a918:
    if (ctx->pc == 0x20A918u) {
        ctx->pc = 0x20A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A914u;
        // 0x20a918: 0xae03007c  sw          $v1, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A91Cu;
        goto label_20a91c;
    }
    ctx->pc = 0x20A914u;
    {
        const bool branch_taken_0x20a914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A914u;
        // 0x20a918: 0xae03007c  sw          $v1, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a914) {
            ctx->pc = 0x20A9E0u;
            goto label_20a9e0;
        }
    }
    ctx->pc = 0x20A91Cu;
label_20a91c:
    // 0x20a91c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x20a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_20a920:
    // 0x20a920: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_20a924:
    if (ctx->pc == 0x20A924u) {
        ctx->pc = 0x20A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A920u;
        // 0x20a924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A928u;
        goto label_20a928;
    }
    ctx->pc = 0x20A920u;
    {
        const bool branch_taken_0x20a920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A920u;
        // 0x20a924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a920) {
            ctx->pc = 0x20A9E4u;
            goto label_20a9e4;
        }
    }
    ctx->pc = 0x20A928u;
label_20a928:
    // 0x20a928: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x20a928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_20a92c:
    // 0x20a92c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20a930:
    // 0x20a930: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
label_20a934:
    if (ctx->pc == 0x20A934u) {
        ctx->pc = 0x20A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A930u;
        // 0x20a934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A938u;
        goto label_20a938;
    }
    ctx->pc = 0x20A930u;
    {
        const bool branch_taken_0x20a930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A930u;
        // 0x20a934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a930) {
            ctx->pc = 0x20A9E4u;
            goto label_20a9e4;
        }
    }
    ctx->pc = 0x20A938u;
label_20a938:
    // 0x20a938: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x20a938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20a93c:
    // 0x20a93c: 0x14430029  bne         $v0, $v1, . + 4 + (0x29 << 2)
label_20a940:
    if (ctx->pc == 0x20A940u) {
        ctx->pc = 0x20A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A93Cu;
        // 0x20a940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A944u;
        goto label_20a944;
    }
    ctx->pc = 0x20A93Cu;
    {
        const bool branch_taken_0x20a93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A93Cu;
        // 0x20a940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a93c) {
            ctx->pc = 0x20A9E4u;
            goto label_20a9e4;
        }
    }
    ctx->pc = 0x20A944u;
label_20a944:
    // 0x20a944: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x20a944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_20a948:
    // 0x20a948: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20a948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20a94c:
    // 0x20a94c: 0x14820025  bne         $a0, $v0, . + 4 + (0x25 << 2)
label_20a950:
    if (ctx->pc == 0x20A950u) {
        ctx->pc = 0x20A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A94Cu;
        // 0x20a950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A954u;
        goto label_20a954;
    }
    ctx->pc = 0x20A94Cu;
    {
        const bool branch_taken_0x20a94c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A94Cu;
        // 0x20a950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a94c) {
            ctx->pc = 0x20A9E4u;
            goto label_20a9e4;
        }
    }
    ctx->pc = 0x20A954u;
label_20a954:
    // 0x20a954: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x20a954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_20a958:
    // 0x20a958: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20a958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20a95c:
    // 0x20a95c: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
label_20a960:
    if (ctx->pc == 0x20A960u) {
        ctx->pc = 0x20A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A95Cu;
        // 0x20a960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A964u;
        goto label_20a964;
    }
    ctx->pc = 0x20A95Cu;
    {
        const bool branch_taken_0x20a95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A95Cu;
        // 0x20a960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a95c) {
            ctx->pc = 0x20A9E4u;
            goto label_20a9e4;
        }
    }
    ctx->pc = 0x20A964u;
label_20a964:
    // 0x20a964: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x20a964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_20a968:
    // 0x20a968: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20a968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20a96c:
    // 0x20a96c: 0x1444001d  bne         $v0, $a0, . + 4 + (0x1D << 2)
label_20a970:
    if (ctx->pc == 0x20A970u) {
        ctx->pc = 0x20A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A96Cu;
        // 0x20a970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A974u;
        goto label_20a974;
    }
    ctx->pc = 0x20A96Cu;
    {
        const bool branch_taken_0x20a96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A96Cu;
        // 0x20a970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a96c) {
            ctx->pc = 0x20A9E4u;
            goto label_20a9e4;
        }
    }
    ctx->pc = 0x20A974u;
label_20a974:
    // 0x20a974: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x20a974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_20a978:
    // 0x20a978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a97c:
    // 0x20a97c: 0x14820019  bne         $a0, $v0, . + 4 + (0x19 << 2)
label_20a980:
    if (ctx->pc == 0x20A980u) {
        ctx->pc = 0x20A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A97Cu;
        // 0x20a980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A984u;
        goto label_20a984;
    }
    ctx->pc = 0x20A97Cu;
    {
        const bool branch_taken_0x20a97c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A97Cu;
        // 0x20a980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a97c) {
            ctx->pc = 0x20A9E4u;
            goto label_20a9e4;
        }
    }
    ctx->pc = 0x20A984u;
label_20a984:
    // 0x20a984: 0x8c6500b0  lw          $a1, 0xB0($v1)
    ctx->pc = 0x20a984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_20a988:
    // 0x20a988: 0x14a40016  bne         $a1, $a0, . + 4 + (0x16 << 2)
label_20a98c:
    if (ctx->pc == 0x20A98Cu) {
        ctx->pc = 0x20A990u;
        goto label_20a990;
    }
    ctx->pc = 0x20A988u;
    {
        const bool branch_taken_0x20a988 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x20a988) {
            ctx->pc = 0x20A9E4u;
            goto label_20a9e4;
        }
    }
    ctx->pc = 0x20A990u;
label_20a990:
    // 0x20a990: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20a990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_20a994:
    // 0x20a994: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x20a994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_20a998:
    // 0x20a998: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_20a99c:
    if (ctx->pc == 0x20A99Cu) {
        ctx->pc = 0x20A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A998u;
        // 0x20a99c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A9A0u;
        goto label_20a9a0;
    }
    ctx->pc = 0x20A998u;
    {
        const bool branch_taken_0x20a998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A998u;
        // 0x20a99c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a998) {
            ctx->pc = 0x20A9E4u;
            goto label_20a9e4;
        }
    }
    ctx->pc = 0x20A9A0u;
label_20a9a0:
    // 0x20a9a0: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x20a9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_20a9a4:
    // 0x20a9a4: 0x1485000f  bne         $a0, $a1, . + 4 + (0xF << 2)
label_20a9a8:
    if (ctx->pc == 0x20A9A8u) {
        ctx->pc = 0x20A9ACu;
        goto label_20a9ac;
    }
    ctx->pc = 0x20A9A4u;
    {
        const bool branch_taken_0x20a9a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x20a9a4) {
            ctx->pc = 0x20A9E4u;
            goto label_20a9e4;
        }
    }
    ctx->pc = 0x20A9ACu;
label_20a9ac:
    // 0x20a9ac: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x20a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_20a9b0:
    // 0x20a9b0: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
label_20a9b4:
    if (ctx->pc == 0x20A9B4u) {
        ctx->pc = 0x20A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9B0u;
        // 0x20a9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A9B8u;
        goto label_20a9b8;
    }
    ctx->pc = 0x20A9B0u;
    {
        const bool branch_taken_0x20a9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9B0u;
        // 0x20a9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9b0) {
            ctx->pc = 0x20A9E4u;
            goto label_20a9e4;
        }
    }
    ctx->pc = 0x20A9B8u;
label_20a9b8:
    // 0x20a9b8: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x20a9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_20a9bc:
    // 0x20a9bc: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x20a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_20a9c0:
    // 0x20a9c0: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
label_20a9c4:
    if (ctx->pc == 0x20A9C4u) {
        ctx->pc = 0x20A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9C0u;
        // 0x20a9c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A9C8u;
        goto label_20a9c8;
    }
    ctx->pc = 0x20A9C0u;
    {
        const bool branch_taken_0x20a9c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9C0u;
        // 0x20a9c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9c0) {
            ctx->pc = 0x20A9E4u;
            goto label_20a9e4;
        }
    }
    ctx->pc = 0x20A9C8u;
label_20a9c8:
    // 0x20a9c8: 0x8c640078  lw          $a0, 0x78($v1)
    ctx->pc = 0x20a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_20a9cc:
    // 0x20a9cc: 0x14850005  bne         $a0, $a1, . + 4 + (0x5 << 2)
label_20a9d0:
    if (ctx->pc == 0x20A9D0u) {
        ctx->pc = 0x20A9D4u;
        goto label_20a9d4;
    }
    ctx->pc = 0x20A9CCu;
    {
        const bool branch_taken_0x20a9cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x20a9cc) {
            ctx->pc = 0x20A9E4u;
            goto label_20a9e4;
        }
    }
    ctx->pc = 0x20A9D4u;
label_20a9d4:
    // 0x20a9d4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x20a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_20a9d8:
    // 0x20a9d8: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
label_20a9dc:
    if (ctx->pc == 0x20A9DCu) {
        ctx->pc = 0x20A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9D8u;
        // 0x20a9dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A9E0u;
        goto label_20a9e0;
    }
    ctx->pc = 0x20A9D8u;
    {
        const bool branch_taken_0x20a9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x20A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9D8u;
        // 0x20a9dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9d8) {
            ctx->pc = 0x20A9E4u;
            goto label_20a9e4;
        }
    }
    ctx->pc = 0x20A9E0u;
label_20a9e0:
    // 0x20a9e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20a9e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a9e4:
    // 0x20a9e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20a9e8:
    if (ctx->pc == 0x20A9E8u) {
        ctx->pc = 0x20A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9E4u;
        // 0x20a9e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A9ECu;
        goto label_20a9ec;
    }
    ctx->pc = 0x20A9E4u;
    {
        const bool branch_taken_0x20a9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9E4u;
        // 0x20a9e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9e4) {
            ctx->pc = 0x20A9F0u;
            goto label_20a9f0;
        }
    }
    ctx->pc = 0x20A9ECu;
label_20a9ec:
    // 0x20a9ec: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x20a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_20a9f0:
    // 0x20a9f0: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x20a9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_20a9f4:
    // 0x20a9f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20a9f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20a9f8:
    // 0x20a9f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20a9f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20a9fc:
    // 0x20a9fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20a9fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20aa00:
    // 0x20aa00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20aa00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20aa04:
    // 0x20aa04: 0x3e00008  jr          $ra
label_20aa08:
    if (ctx->pc == 0x20AA08u) {
        ctx->pc = 0x20AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA04u;
        // 0x20aa08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AA0Cu;
        goto label_20aa0c;
    }
    ctx->pc = 0x20AA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA04u;
        // 0x20aa08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AA0Cu;
label_20aa0c:
    // 0x20aa0c: 0x0  nop
    ctx->pc = 0x20aa0cu;
    // NOP
    ctx->pc = 0x20aa10u;
}
