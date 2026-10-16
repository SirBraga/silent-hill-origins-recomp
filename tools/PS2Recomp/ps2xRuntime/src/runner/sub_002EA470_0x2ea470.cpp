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

// Function: sub_002EA470
// Address: 0x2ea470 - 0x2ea754
void sub_002EA470_0x2ea470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA470_0x2ea470");
#endif

    switch (ctx->pc) {
        case 0x2ea470u: goto label_2ea470;
        case 0x2ea474u: goto label_2ea474;
        case 0x2ea478u: goto label_2ea478;
        case 0x2ea47cu: goto label_2ea47c;
        case 0x2ea480u: goto label_2ea480;
        case 0x2ea484u: goto label_2ea484;
        case 0x2ea488u: goto label_2ea488;
        case 0x2ea48cu: goto label_2ea48c;
        case 0x2ea490u: goto label_2ea490;
        case 0x2ea494u: goto label_2ea494;
        case 0x2ea498u: goto label_2ea498;
        case 0x2ea49cu: goto label_2ea49c;
        case 0x2ea4a0u: goto label_2ea4a0;
        case 0x2ea4a4u: goto label_2ea4a4;
        case 0x2ea4a8u: goto label_2ea4a8;
        case 0x2ea4acu: goto label_2ea4ac;
        case 0x2ea4b0u: goto label_2ea4b0;
        case 0x2ea4b4u: goto label_2ea4b4;
        case 0x2ea4b8u: goto label_2ea4b8;
        case 0x2ea4bcu: goto label_2ea4bc;
        case 0x2ea4c0u: goto label_2ea4c0;
        case 0x2ea4c4u: goto label_2ea4c4;
        case 0x2ea4c8u: goto label_2ea4c8;
        case 0x2ea4ccu: goto label_2ea4cc;
        case 0x2ea4d0u: goto label_2ea4d0;
        case 0x2ea4d4u: goto label_2ea4d4;
        case 0x2ea4d8u: goto label_2ea4d8;
        case 0x2ea4dcu: goto label_2ea4dc;
        case 0x2ea4e0u: goto label_2ea4e0;
        case 0x2ea4e4u: goto label_2ea4e4;
        case 0x2ea4e8u: goto label_2ea4e8;
        case 0x2ea4ecu: goto label_2ea4ec;
        case 0x2ea4f0u: goto label_2ea4f0;
        case 0x2ea4f4u: goto label_2ea4f4;
        case 0x2ea4f8u: goto label_2ea4f8;
        case 0x2ea4fcu: goto label_2ea4fc;
        case 0x2ea500u: goto label_2ea500;
        case 0x2ea504u: goto label_2ea504;
        case 0x2ea508u: goto label_2ea508;
        case 0x2ea50cu: goto label_2ea50c;
        case 0x2ea510u: goto label_2ea510;
        case 0x2ea514u: goto label_2ea514;
        case 0x2ea518u: goto label_2ea518;
        case 0x2ea51cu: goto label_2ea51c;
        case 0x2ea520u: goto label_2ea520;
        case 0x2ea524u: goto label_2ea524;
        case 0x2ea528u: goto label_2ea528;
        case 0x2ea52cu: goto label_2ea52c;
        case 0x2ea530u: goto label_2ea530;
        case 0x2ea534u: goto label_2ea534;
        case 0x2ea538u: goto label_2ea538;
        case 0x2ea53cu: goto label_2ea53c;
        case 0x2ea540u: goto label_2ea540;
        case 0x2ea544u: goto label_2ea544;
        case 0x2ea548u: goto label_2ea548;
        case 0x2ea54cu: goto label_2ea54c;
        case 0x2ea550u: goto label_2ea550;
        case 0x2ea554u: goto label_2ea554;
        case 0x2ea558u: goto label_2ea558;
        case 0x2ea55cu: goto label_2ea55c;
        case 0x2ea560u: goto label_2ea560;
        case 0x2ea564u: goto label_2ea564;
        case 0x2ea568u: goto label_2ea568;
        case 0x2ea56cu: goto label_2ea56c;
        case 0x2ea570u: goto label_2ea570;
        case 0x2ea574u: goto label_2ea574;
        case 0x2ea578u: goto label_2ea578;
        case 0x2ea57cu: goto label_2ea57c;
        case 0x2ea580u: goto label_2ea580;
        case 0x2ea584u: goto label_2ea584;
        case 0x2ea588u: goto label_2ea588;
        case 0x2ea58cu: goto label_2ea58c;
        case 0x2ea590u: goto label_2ea590;
        case 0x2ea594u: goto label_2ea594;
        case 0x2ea598u: goto label_2ea598;
        case 0x2ea59cu: goto label_2ea59c;
        case 0x2ea5a0u: goto label_2ea5a0;
        case 0x2ea5a4u: goto label_2ea5a4;
        case 0x2ea5a8u: goto label_2ea5a8;
        case 0x2ea5acu: goto label_2ea5ac;
        case 0x2ea5b0u: goto label_2ea5b0;
        case 0x2ea5b4u: goto label_2ea5b4;
        case 0x2ea5b8u: goto label_2ea5b8;
        case 0x2ea5bcu: goto label_2ea5bc;
        case 0x2ea5c0u: goto label_2ea5c0;
        case 0x2ea5c4u: goto label_2ea5c4;
        case 0x2ea5c8u: goto label_2ea5c8;
        case 0x2ea5ccu: goto label_2ea5cc;
        case 0x2ea5d0u: goto label_2ea5d0;
        case 0x2ea5d4u: goto label_2ea5d4;
        case 0x2ea5d8u: goto label_2ea5d8;
        case 0x2ea5dcu: goto label_2ea5dc;
        case 0x2ea5e0u: goto label_2ea5e0;
        case 0x2ea5e4u: goto label_2ea5e4;
        case 0x2ea5e8u: goto label_2ea5e8;
        case 0x2ea5ecu: goto label_2ea5ec;
        case 0x2ea5f0u: goto label_2ea5f0;
        case 0x2ea5f4u: goto label_2ea5f4;
        case 0x2ea5f8u: goto label_2ea5f8;
        case 0x2ea5fcu: goto label_2ea5fc;
        case 0x2ea600u: goto label_2ea600;
        case 0x2ea604u: goto label_2ea604;
        case 0x2ea608u: goto label_2ea608;
        case 0x2ea60cu: goto label_2ea60c;
        case 0x2ea610u: goto label_2ea610;
        case 0x2ea614u: goto label_2ea614;
        case 0x2ea618u: goto label_2ea618;
        case 0x2ea61cu: goto label_2ea61c;
        case 0x2ea620u: goto label_2ea620;
        case 0x2ea624u: goto label_2ea624;
        case 0x2ea628u: goto label_2ea628;
        case 0x2ea62cu: goto label_2ea62c;
        case 0x2ea630u: goto label_2ea630;
        case 0x2ea634u: goto label_2ea634;
        case 0x2ea638u: goto label_2ea638;
        case 0x2ea63cu: goto label_2ea63c;
        case 0x2ea640u: goto label_2ea640;
        case 0x2ea644u: goto label_2ea644;
        case 0x2ea648u: goto label_2ea648;
        case 0x2ea64cu: goto label_2ea64c;
        case 0x2ea650u: goto label_2ea650;
        case 0x2ea654u: goto label_2ea654;
        case 0x2ea658u: goto label_2ea658;
        case 0x2ea65cu: goto label_2ea65c;
        case 0x2ea660u: goto label_2ea660;
        case 0x2ea664u: goto label_2ea664;
        case 0x2ea668u: goto label_2ea668;
        case 0x2ea66cu: goto label_2ea66c;
        case 0x2ea670u: goto label_2ea670;
        case 0x2ea674u: goto label_2ea674;
        case 0x2ea678u: goto label_2ea678;
        case 0x2ea67cu: goto label_2ea67c;
        case 0x2ea680u: goto label_2ea680;
        case 0x2ea684u: goto label_2ea684;
        case 0x2ea688u: goto label_2ea688;
        case 0x2ea68cu: goto label_2ea68c;
        case 0x2ea690u: goto label_2ea690;
        case 0x2ea694u: goto label_2ea694;
        case 0x2ea698u: goto label_2ea698;
        case 0x2ea69cu: goto label_2ea69c;
        case 0x2ea6a0u: goto label_2ea6a0;
        case 0x2ea6a4u: goto label_2ea6a4;
        case 0x2ea6a8u: goto label_2ea6a8;
        case 0x2ea6acu: goto label_2ea6ac;
        case 0x2ea6b0u: goto label_2ea6b0;
        case 0x2ea6b4u: goto label_2ea6b4;
        case 0x2ea6b8u: goto label_2ea6b8;
        case 0x2ea6bcu: goto label_2ea6bc;
        case 0x2ea6c0u: goto label_2ea6c0;
        case 0x2ea6c4u: goto label_2ea6c4;
        case 0x2ea6c8u: goto label_2ea6c8;
        case 0x2ea6ccu: goto label_2ea6cc;
        case 0x2ea6d0u: goto label_2ea6d0;
        case 0x2ea6d4u: goto label_2ea6d4;
        case 0x2ea6d8u: goto label_2ea6d8;
        case 0x2ea6dcu: goto label_2ea6dc;
        case 0x2ea6e0u: goto label_2ea6e0;
        case 0x2ea6e4u: goto label_2ea6e4;
        case 0x2ea6e8u: goto label_2ea6e8;
        case 0x2ea6ecu: goto label_2ea6ec;
        case 0x2ea6f0u: goto label_2ea6f0;
        case 0x2ea6f4u: goto label_2ea6f4;
        case 0x2ea6f8u: goto label_2ea6f8;
        case 0x2ea6fcu: goto label_2ea6fc;
        case 0x2ea700u: goto label_2ea700;
        case 0x2ea704u: goto label_2ea704;
        case 0x2ea708u: goto label_2ea708;
        case 0x2ea70cu: goto label_2ea70c;
        case 0x2ea710u: goto label_2ea710;
        case 0x2ea714u: goto label_2ea714;
        case 0x2ea718u: goto label_2ea718;
        case 0x2ea71cu: goto label_2ea71c;
        case 0x2ea720u: goto label_2ea720;
        case 0x2ea724u: goto label_2ea724;
        case 0x2ea728u: goto label_2ea728;
        case 0x2ea72cu: goto label_2ea72c;
        case 0x2ea730u: goto label_2ea730;
        case 0x2ea734u: goto label_2ea734;
        case 0x2ea738u: goto label_2ea738;
        case 0x2ea73cu: goto label_2ea73c;
        case 0x2ea740u: goto label_2ea740;
        case 0x2ea744u: goto label_2ea744;
        case 0x2ea748u: goto label_2ea748;
        case 0x2ea74cu: goto label_2ea74c;
        case 0x2ea750u: goto label_2ea750;
        default: break;
    }

    ctx->pc = 0x2ea470u;

label_2ea470:
    // 0x2ea470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ea470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ea474:
    // 0x2ea474: 0x24a3ffee  addiu       $v1, $a1, -0x12
    ctx->pc = 0x2ea474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967278));
label_2ea478:
    // 0x2ea478: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ea478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2ea47c:
    // 0x2ea47c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ea47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ea480:
    // 0x2ea480: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ea480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2ea484:
    // 0x2ea484: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ea484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ea488:
    // 0x2ea488: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ea488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2ea48c:
    // 0x2ea48c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2ea48cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ea490:
    // 0x2ea490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ea494:
    // 0x2ea494: 0x2c620036  sltiu       $v0, $v1, 0x36
    ctx->pc = 0x2ea494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)54) ? 1 : 0);
label_2ea498:
    // 0x2ea498: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
label_2ea49c:
    if (ctx->pc == 0x2EA49Cu) {
        ctx->pc = 0x2EA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA498u;
        // 0x2ea49c: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA4A0u;
        goto label_2ea4a0;
    }
    ctx->pc = 0x2EA498u;
    {
        const bool branch_taken_0x2ea498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA498u;
        // 0x2ea49c: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea498) {
            ctx->pc = 0x2EA754u;
            return;
        }
    }
    ctx->pc = 0x2EA4A0u;
label_2ea4a0:
    // 0x2ea4a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2ea4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2ea4a4:
    // 0x2ea4a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ea4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ea4a8:
    // 0x2ea4a8: 0x2442fe10  addiu       $v0, $v0, -0x1F0
    ctx->pc = 0x2ea4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966800));
label_2ea4ac:
    // 0x2ea4ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ea4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ea4b0:
    // 0x2ea4b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ea4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ea4b4:
    // 0x2ea4b4: 0x800008  jr          $a0
label_2ea4b8:
    if (ctx->pc == 0x2EA4B8u) {
        ctx->pc = 0x2EA4BCu;
        goto label_2ea4bc;
    }
    ctx->pc = 0x2EA4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EA4BCu: goto label_2ea4bc;
            case 0x2EA4CCu: goto label_2ea4cc;
            case 0x2EA4D8u: goto label_2ea4d8;
            case 0x2EA4E8u: goto label_2ea4e8;
            case 0x2EA4F0u: goto label_2ea4f0;
            case 0x2EA504u: goto label_2ea504;
            case 0x2EA510u: goto label_2ea510;
            case 0x2EA548u: goto label_2ea548;
            case 0x2EA5B8u: goto label_2ea5b8;
            case 0x2EA5FCu: goto label_2ea5fc;
            case 0x2EA634u: goto label_2ea634;
            case 0x2EA684u: goto label_2ea684;
            case 0x2EA6D4u: goto label_2ea6d4;
            case 0x2EA73Cu: goto label_2ea73c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA4B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2EA4BCu;
label_2ea4bc:
    // 0x2ea4bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea4c0:
    // 0x2ea4c0: 0xaf828c98  sw          $v0, -0x7368($gp)
    ctx->pc = 0x2ea4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937752), GPR_U32(ctx, 2));
label_2ea4c4:
    // 0x2ea4c4: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_2ea4c8:
    if (ctx->pc == 0x2EA4C8u) {
        ctx->pc = 0x2EA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4C4u;
        // 0x2ea4c8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA4CCu;
        goto label_2ea4cc;
    }
    ctx->pc = 0x2EA4C4u;
    {
        const bool branch_taken_0x2ea4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4C4u;
        // 0x2ea4c8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea4c4) {
            ctx->pc = 0x2EA758u;
            return;
        }
    }
    ctx->pc = 0x2EA4CCu;
label_2ea4cc:
    // 0x2ea4cc: 0xaf808c98  sw          $zero, -0x7368($gp)
    ctx->pc = 0x2ea4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937752), GPR_U32(ctx, 0));
label_2ea4d0:
    // 0x2ea4d0: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_2ea4d4:
    if (ctx->pc == 0x2EA4D4u) {
        ctx->pc = 0x2EA4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4D0u;
        // 0x2ea4d4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA4D8u;
        goto label_2ea4d8;
    }
    ctx->pc = 0x2EA4D0u;
    {
        const bool branch_taken_0x2ea4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4D0u;
        // 0x2ea4d4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea4d0) {
            ctx->pc = 0x2EA758u;
            return;
        }
    }
    ctx->pc = 0x2EA4D8u;
label_2ea4d8:
    // 0x2ea4d8: 0xaf918c90  sw          $s1, -0x7370($gp)
    ctx->pc = 0x2ea4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937744), GPR_U32(ctx, 17));
label_2ea4dc:
    // 0x2ea4dc: 0xaf868c94  sw          $a2, -0x736C($gp)
    ctx->pc = 0x2ea4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937748), GPR_U32(ctx, 6));
label_2ea4e0:
    // 0x2ea4e0: 0x1000009d  b           . + 4 + (0x9D << 2)
label_2ea4e4:
    if (ctx->pc == 0x2EA4E4u) {
        ctx->pc = 0x2EA4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4E0u;
        // 0x2ea4e4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA4E8u;
        goto label_2ea4e8;
    }
    ctx->pc = 0x2EA4E0u;
    {
        const bool branch_taken_0x2ea4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4E0u;
        // 0x2ea4e4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea4e0) {
            ctx->pc = 0x2EA758u;
            return;
        }
    }
    ctx->pc = 0x2EA4E8u;
label_2ea4e8:
    // 0x2ea4e8: 0x1000009a  b           . + 4 + (0x9A << 2)
label_2ea4ec:
    if (ctx->pc == 0x2EA4ECu) {
        ctx->pc = 0x2EA4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4E8u;
        // 0x2ea4ec: 0xacb113a4  sw          $s1, 0x13A4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 5028), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA4F0u;
        goto label_2ea4f0;
    }
    ctx->pc = 0x2EA4E8u;
    {
        const bool branch_taken_0x2ea4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4E8u;
        // 0x2ea4ec: 0xacb113a4  sw          $s1, 0x13A4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 5028), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea4e8) {
            ctx->pc = 0x2EA754u;
            return;
        }
    }
    ctx->pc = 0x2EA4F0u;
label_2ea4f0:
    // 0x2ea4f0: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x2ea4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_2ea4f4:
    // 0x2ea4f4: 0xc0bafe6  jal         func_2EBF98
label_2ea4f8:
    if (ctx->pc == 0x2EA4F8u) {
        ctx->pc = 0x2EA4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4F4u;
        // 0x2ea4f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA4FCu;
        goto label_2ea4fc;
    }
    ctx->pc = 0x2EA4F4u;
    SET_GPR_U32(ctx, 31, 0x2EA4FCu);
    ctx->pc = 0x2EA4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA4F4u;
    // 0x2ea4f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EBF98u, 0x2EA4F4u, 0x2EA4FCu)) {
        return;
    }
    ctx->pc = 0x2EA4FCu;
label_2ea4fc:
    // 0x2ea4fc: 0x10000096  b           . + 4 + (0x96 << 2)
label_2ea500:
    if (ctx->pc == 0x2EA500u) {
        ctx->pc = 0x2EA500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4FCu;
        // 0x2ea500: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA504u;
        goto label_2ea504;
    }
    ctx->pc = 0x2EA4FCu;
    {
        const bool branch_taken_0x2ea4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4FCu;
        // 0x2ea500: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea4fc) {
            ctx->pc = 0x2EA758u;
            return;
        }
    }
    ctx->pc = 0x2EA504u;
label_2ea504:
    // 0x2ea504: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x2ea504u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_2ea508:
    // 0x2ea508: 0x10000093  b           . + 4 + (0x93 << 2)
label_2ea50c:
    if (ctx->pc == 0x2EA50Cu) {
        ctx->pc = 0x2EA50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA508u;
        // 0x2ea50c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA510u;
        goto label_2ea510;
    }
    ctx->pc = 0x2EA508u;
    {
        const bool branch_taken_0x2ea508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA508u;
        // 0x2ea50c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea508) {
            ctx->pc = 0x2EA758u;
            return;
        }
    }
    ctx->pc = 0x2EA510u;
label_2ea510:
    // 0x2ea510: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ea510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2ea514:
    // 0x2ea514: 0x2450e680  addiu       $s0, $v0, -0x1980
    ctx->pc = 0x2ea514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960768));
label_2ea518:
    // 0x2ea518: 0xac50e680  sw          $s0, -0x1980($v0)
    ctx->pc = 0x2ea518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960768), GPR_U32(ctx, 16));
label_2ea51c:
    // 0x2ea51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea520:
    // 0x2ea520: 0x2605003f  addiu       $a1, $s0, 0x3F
    ctx->pc = 0x2ea520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
label_2ea524:
    // 0x2ea524: 0xc0c86e4  jal         func_321B90
label_2ea528:
    if (ctx->pc == 0x2EA528u) {
        ctx->pc = 0x2EA528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA524u;
        // 0x2ea528: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA52Cu;
        goto label_2ea52c;
    }
    ctx->pc = 0x2EA524u;
    SET_GPR_U32(ctx, 31, 0x2EA52Cu);
    ctx->pc = 0x2EA528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA524u;
    // 0x2ea528: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2EA524u, 0x2EA52Cu)) {
        return;
    }
    ctx->pc = 0x2EA52Cu;
label_2ea52c:
    // 0x2ea52c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2ea52cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea530:
    // 0x2ea530: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2ea530u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea534:
    // 0x2ea534: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea538:
    // 0x2ea538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea53c:
    // 0x2ea53c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea540:
    // 0x2ea540: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2ea544:
    if (ctx->pc == 0x2EA544u) {
        ctx->pc = 0x2EA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA540u;
        // 0x2ea544: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA548u;
        goto label_2ea548;
    }
    ctx->pc = 0x2EA540u;
    {
        const bool branch_taken_0x2ea540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA540u;
        // 0x2ea544: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea540) {
            ctx->pc = 0x2EA6C0u;
            goto label_2ea6c0;
        }
    }
    ctx->pc = 0x2EA548u;
label_2ea548:
    // 0x2ea548: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ea548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2ea54c:
    // 0x2ea54c: 0x2450e680  addiu       $s0, $v0, -0x1980
    ctx->pc = 0x2ea54cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960768));
label_2ea550:
    // 0x2ea550: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x2ea550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2ea554:
    // 0x2ea554: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2ea554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2ea558:
    // 0x2ea558: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2ea558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ea55c:
    // 0x2ea55c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ea55cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea560:
    // 0x2ea560: 0xc0bac90  jal         func_2EB240
label_2ea564:
    if (ctx->pc == 0x2EA564u) {
        ctx->pc = 0x2EA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA560u;
        // 0x2ea564: 0x8e120004  lw          $s2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA568u;
        goto label_2ea568;
    }
    ctx->pc = 0x2EA560u;
    SET_GPR_U32(ctx, 31, 0x2EA568u);
    ctx->pc = 0x2EA564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA560u;
    // 0x2ea564: 0x8e120004  lw          $s2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EB240u, 0x2EA560u, 0x2EA568u)) {
        return;
    }
    ctx->pc = 0x2EA568u;
label_2ea568:
    // 0x2ea568: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2ea56c:
    if (ctx->pc == 0x2EA56Cu) {
        ctx->pc = 0x2EA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA568u;
        // 0x2ea56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA570u;
        goto label_2ea570;
    }
    ctx->pc = 0x2EA568u;
    {
        const bool branch_taken_0x2ea568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA568u;
        // 0x2ea56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea568) {
            ctx->pc = 0x2EA59Cu;
            goto label_2ea59c;
        }
    }
    ctx->pc = 0x2EA570u;
label_2ea570:
    // 0x2ea570: 0xc0bb652  jal         func_2ED948
label_2ea574:
    if (ctx->pc == 0x2EA574u) {
        ctx->pc = 0x2EA574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA570u;
        // 0x2ea574: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA578u;
        goto label_2ea578;
    }
    ctx->pc = 0x2EA570u;
    SET_GPR_U32(ctx, 31, 0x2EA578u);
    ctx->pc = 0x2EA574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA570u;
    // 0x2ea574: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED948u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ED948u, 0x2EA570u, 0x2EA578u)) {
        return;
    }
    ctx->pc = 0x2EA578u;
label_2ea578:
    // 0x2ea578: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ea57c:
    if (ctx->pc == 0x2EA57Cu) {
        ctx->pc = 0x2EA57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA578u;
        // 0x2ea57c: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA580u;
        goto label_2ea580;
    }
    ctx->pc = 0x2EA578u;
    {
        const bool branch_taken_0x2ea578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA578u;
        // 0x2ea57c: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea578) {
            ctx->pc = 0x2EA590u;
            goto label_2ea590;
        }
    }
    ctx->pc = 0x2EA580u;
label_2ea580:
    // 0x2ea580: 0xc0bb682  jal         func_2EDA08
label_2ea584:
    if (ctx->pc == 0x2EA584u) {
        ctx->pc = 0x2EA584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA580u;
        // 0x2ea584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA588u;
        goto label_2ea588;
    }
    ctx->pc = 0x2EA580u;
    SET_GPR_U32(ctx, 31, 0x2EA588u);
    ctx->pc = 0x2EA584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA580u;
    // 0x2ea584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDA08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EDA08u, 0x2EA580u, 0x2EA588u)) {
        return;
    }
    ctx->pc = 0x2EA588u;
label_2ea588:
    // 0x2ea588: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ea58c:
    if (ctx->pc == 0x2EA58Cu) {
        ctx->pc = 0x2EA58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA588u;
        // 0x2ea58c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA590u;
        goto label_2ea590;
    }
    ctx->pc = 0x2EA588u;
    {
        const bool branch_taken_0x2ea588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA588u;
        // 0x2ea58c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea588) {
            ctx->pc = 0x2EA598u;
            goto label_2ea598;
        }
    }
    ctx->pc = 0x2EA590u;
label_2ea590:
    // 0x2ea590: 0xc0bad68  jal         func_2EB5A0
label_2ea594:
    if (ctx->pc == 0x2EA594u) {
        ctx->pc = 0x2EA594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA590u;
        // 0x2ea594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA598u;
        goto label_2ea598;
    }
    ctx->pc = 0x2EA590u;
    SET_GPR_U32(ctx, 31, 0x2EA598u);
    ctx->pc = 0x2EA594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA590u;
    // 0x2ea594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EB5A0u, 0x2EA590u, 0x2EA598u)) {
        return;
    }
    ctx->pc = 0x2EA598u;
label_2ea598:
    // 0x2ea598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea59c:
    // 0x2ea59c: 0xc0c86e4  jal         func_321B90
label_2ea5a0:
    if (ctx->pc == 0x2EA5A0u) {
        ctx->pc = 0x2EA5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA59Cu;
        // 0x2ea5a0: 0x2605003f  addiu       $a1, $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA5A4u;
        goto label_2ea5a4;
    }
    ctx->pc = 0x2EA59Cu;
    SET_GPR_U32(ctx, 31, 0x2EA5A4u);
    ctx->pc = 0x2EA5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA59Cu;
    // 0x2ea5a0: 0x2605003f  addiu       $a1, $s0, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2EA59Cu, 0x2EA5A4u)) {
        return;
    }
    ctx->pc = 0x2EA5A4u;
label_2ea5a4:
    // 0x2ea5a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ea5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ea5a8:
    // 0x2ea5a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ea5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea5ac:
    // 0x2ea5ac: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2ea5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2ea5b0:
    // 0x2ea5b0: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2ea5b4:
    if (ctx->pc == 0x2EA5B4u) {
        ctx->pc = 0x2EA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5B0u;
        // 0x2ea5b4: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA5B8u;
        goto label_2ea5b8;
    }
    ctx->pc = 0x2EA5B0u;
    {
        const bool branch_taken_0x2ea5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5B0u;
        // 0x2ea5b4: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea5b0) {
            ctx->pc = 0x2EA668u;
            goto label_2ea668;
        }
    }
    ctx->pc = 0x2EA5B8u;
label_2ea5b8:
    // 0x2ea5b8: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2ea5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_2ea5bc:
    // 0x2ea5bc: 0x2610e680  addiu       $s0, $s0, -0x1980
    ctx->pc = 0x2ea5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960768));
label_2ea5c0:
    // 0x2ea5c0: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x2ea5c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ea5c4:
    // 0x2ea5c4: 0xc0bad68  jal         func_2EB5A0
label_2ea5c8:
    if (ctx->pc == 0x2EA5C8u) {
        ctx->pc = 0x2EA5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5C4u;
        // 0x2ea5c8: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA5CCu;
        goto label_2ea5cc;
    }
    ctx->pc = 0x2EA5C4u;
    SET_GPR_U32(ctx, 31, 0x2EA5CCu);
    ctx->pc = 0x2EA5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA5C4u;
    // 0x2ea5c8: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EB5A0u, 0x2EA5C4u, 0x2EA5CCu)) {
        return;
    }
    ctx->pc = 0x2EA5CCu;
label_2ea5cc:
    // 0x2ea5cc: 0xc0bb66c  jal         func_2ED9B0
label_2ea5d0:
    if (ctx->pc == 0x2EA5D0u) {
        ctx->pc = 0x2EA5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5CCu;
        // 0x2ea5d0: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA5D4u;
        goto label_2ea5d4;
    }
    ctx->pc = 0x2EA5CCu;
    SET_GPR_U32(ctx, 31, 0x2EA5D4u);
    ctx->pc = 0x2EA5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA5CCu;
    // 0x2ea5d0: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ED9B0u, 0x2EA5CCu, 0x2EA5D4u)) {
        return;
    }
    ctx->pc = 0x2EA5D4u;
label_2ea5d4:
    // 0x2ea5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea5d8:
    // 0x2ea5d8: 0xc0c86e4  jal         func_321B90
label_2ea5dc:
    if (ctx->pc == 0x2EA5DCu) {
        ctx->pc = 0x2EA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5D8u;
        // 0x2ea5dc: 0x2605003f  addiu       $a1, $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA5E0u;
        goto label_2ea5e0;
    }
    ctx->pc = 0x2EA5D8u;
    SET_GPR_U32(ctx, 31, 0x2EA5E0u);
    ctx->pc = 0x2EA5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA5D8u;
    // 0x2ea5dc: 0x2605003f  addiu       $a1, $s0, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2EA5D8u, 0x2EA5E0u)) {
        return;
    }
    ctx->pc = 0x2EA5E0u;
label_2ea5e0:
    // 0x2ea5e0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2ea5e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea5e4:
    // 0x2ea5e4: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2ea5e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea5e8:
    // 0x2ea5e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea5ec:
    // 0x2ea5ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea5f0:
    // 0x2ea5f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea5f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea5f4:
    // 0x2ea5f4: 0x10000032  b           . + 4 + (0x32 << 2)
label_2ea5f8:
    if (ctx->pc == 0x2EA5F8u) {
        ctx->pc = 0x2EA5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5F4u;
        // 0x2ea5f8: 0x24070023  addiu       $a3, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA5FCu;
        goto label_2ea5fc;
    }
    ctx->pc = 0x2EA5F4u;
    {
        const bool branch_taken_0x2ea5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5F4u;
        // 0x2ea5f8: 0x24070023  addiu       $a3, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea5f4) {
            ctx->pc = 0x2EA6C0u;
            goto label_2ea6c0;
        }
    }
    ctx->pc = 0x2EA5FCu;
label_2ea5fc:
    // 0x2ea5fc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ea5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2ea600:
    // 0x2ea600: 0x2450e6c0  addiu       $s0, $v0, -0x1940
    ctx->pc = 0x2ea600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960832));
label_2ea604:
    // 0x2ea604: 0xac50e6c0  sw          $s0, -0x1940($v0)
    ctx->pc = 0x2ea604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960832), GPR_U32(ctx, 16));
label_2ea608:
    // 0x2ea608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea60c:
    // 0x2ea60c: 0x2605003f  addiu       $a1, $s0, 0x3F
    ctx->pc = 0x2ea60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
label_2ea610:
    // 0x2ea610: 0xc0c86e4  jal         func_321B90
label_2ea614:
    if (ctx->pc == 0x2EA614u) {
        ctx->pc = 0x2EA614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA610u;
        // 0x2ea614: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA618u;
        goto label_2ea618;
    }
    ctx->pc = 0x2EA610u;
    SET_GPR_U32(ctx, 31, 0x2EA618u);
    ctx->pc = 0x2EA614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA610u;
    // 0x2ea614: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2EA610u, 0x2EA618u)) {
        return;
    }
    ctx->pc = 0x2EA618u;
label_2ea618:
    // 0x2ea618: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2ea618u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea61c:
    // 0x2ea61c: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2ea61cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea620:
    // 0x2ea620: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea624:
    // 0x2ea624: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea628:
    // 0x2ea628: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea62c:
    // 0x2ea62c: 0x10000024  b           . + 4 + (0x24 << 2)
label_2ea630:
    if (ctx->pc == 0x2EA630u) {
        ctx->pc = 0x2EA630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA62Cu;
        // 0x2ea630: 0x24070026  addiu       $a3, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA634u;
        goto label_2ea634;
    }
    ctx->pc = 0x2EA62Cu;
    {
        const bool branch_taken_0x2ea62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA62Cu;
        // 0x2ea630: 0x24070026  addiu       $a3, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea62c) {
            ctx->pc = 0x2EA6C0u;
            goto label_2ea6c0;
        }
    }
    ctx->pc = 0x2EA634u;
label_2ea634:
    // 0x2ea634: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2ea634u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_2ea638:
    // 0x2ea638: 0x2610e6c0  addiu       $s0, $s0, -0x1940
    ctx->pc = 0x2ea638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960832));
label_2ea63c:
    // 0x2ea63c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2ea63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ea640:
    // 0x2ea640: 0xc0bb6d0  jal         func_2EDB40
label_2ea644:
    if (ctx->pc == 0x2EA644u) {
        ctx->pc = 0x2EA644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA640u;
        // 0x2ea644: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA648u;
        goto label_2ea648;
    }
    ctx->pc = 0x2EA640u;
    SET_GPR_U32(ctx, 31, 0x2EA648u);
    ctx->pc = 0x2EA644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA640u;
    // 0x2ea644: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDB40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EDB40u, 0x2EA640u, 0x2EA648u)) {
        return;
    }
    ctx->pc = 0x2EA648u;
label_2ea648:
    // 0x2ea648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea64c:
    // 0x2ea64c: 0x2605003f  addiu       $a1, $s0, 0x3F
    ctx->pc = 0x2ea64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
label_2ea650:
    // 0x2ea650: 0xc0c86e4  jal         func_321B90
label_2ea654:
    if (ctx->pc == 0x2EA654u) {
        ctx->pc = 0x2EA654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA650u;
        // 0x2ea654: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA658u;
        goto label_2ea658;
    }
    ctx->pc = 0x2EA650u;
    SET_GPR_U32(ctx, 31, 0x2EA658u);
    ctx->pc = 0x2EA654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA650u;
    // 0x2ea654: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2EA650u, 0x2EA658u)) {
        return;
    }
    ctx->pc = 0x2EA658u;
label_2ea658:
    // 0x2ea658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea65c:
    // 0x2ea65c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ea65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea660:
    // 0x2ea660: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2ea660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2ea664:
    // 0x2ea664: 0x24070027  addiu       $a3, $zero, 0x27
    ctx->pc = 0x2ea664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_2ea668:
    // 0x2ea668: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ea668u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea66c:
    // 0x2ea66c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea66cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea670:
    // 0x2ea670: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2ea670u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ea674:
    // 0x2ea674: 0xc0ba380  jal         func_2E8E00
label_2ea678:
    if (ctx->pc == 0x2EA678u) {
        ctx->pc = 0x2EA678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA674u;
        // 0x2ea678: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA67Cu;
        goto label_2ea67c;
    }
    ctx->pc = 0x2EA674u;
    SET_GPR_U32(ctx, 31, 0x2EA67Cu);
    ctx->pc = 0x2EA678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA674u;
    // 0x2ea678: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EA674u, 0x2EA67Cu)) {
        return;
    }
    ctx->pc = 0x2EA67Cu;
label_2ea67c:
    // 0x2ea67c: 0x10000036  b           . + 4 + (0x36 << 2)
label_2ea680:
    if (ctx->pc == 0x2EA680u) {
        ctx->pc = 0x2EA680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA67Cu;
        // 0x2ea680: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA684u;
        goto label_2ea684;
    }
    ctx->pc = 0x2EA67Cu;
    {
        const bool branch_taken_0x2ea67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA67Cu;
        // 0x2ea680: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea67c) {
            ctx->pc = 0x2EA758u;
            return;
        }
    }
    ctx->pc = 0x2EA684u;
label_2ea684:
    // 0x2ea684: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2ea684u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_2ea688:
    // 0x2ea688: 0x2610e6c0  addiu       $s0, $s0, -0x1940
    ctx->pc = 0x2ea688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960832));
label_2ea68c:
    // 0x2ea68c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2ea68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ea690:
    // 0x2ea690: 0xc0bb6e0  jal         func_2EDB80
label_2ea694:
    if (ctx->pc == 0x2EA694u) {
        ctx->pc = 0x2EA694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA690u;
        // 0x2ea694: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA698u;
        goto label_2ea698;
    }
    ctx->pc = 0x2EA690u;
    SET_GPR_U32(ctx, 31, 0x2EA698u);
    ctx->pc = 0x2EA694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA690u;
    // 0x2ea694: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDB80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EDB80u, 0x2EA690u, 0x2EA698u)) {
        return;
    }
    ctx->pc = 0x2EA698u;
label_2ea698:
    // 0x2ea698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea69c:
    // 0x2ea69c: 0x2605003f  addiu       $a1, $s0, 0x3F
    ctx->pc = 0x2ea69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
label_2ea6a0:
    // 0x2ea6a0: 0xc0c86e4  jal         func_321B90
label_2ea6a4:
    if (ctx->pc == 0x2EA6A4u) {
        ctx->pc = 0x2EA6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6A0u;
        // 0x2ea6a4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA6A8u;
        goto label_2ea6a8;
    }
    ctx->pc = 0x2EA6A0u;
    SET_GPR_U32(ctx, 31, 0x2EA6A8u);
    ctx->pc = 0x2EA6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA6A0u;
    // 0x2ea6a4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2EA6A0u, 0x2EA6A8u)) {
        return;
    }
    ctx->pc = 0x2EA6A8u;
label_2ea6a8:
    // 0x2ea6a8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2ea6a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea6ac:
    // 0x2ea6ac: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2ea6acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea6b0:
    // 0x2ea6b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea6b4:
    // 0x2ea6b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea6b8:
    // 0x2ea6b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea6bc:
    // 0x2ea6bc: 0x24070029  addiu       $a3, $zero, 0x29
    ctx->pc = 0x2ea6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_2ea6c0:
    // 0x2ea6c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ea6c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea6c4:
    // 0x2ea6c4: 0xc0ba380  jal         func_2E8E00
label_2ea6c8:
    if (ctx->pc == 0x2EA6C8u) {
        ctx->pc = 0x2EA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6C4u;
        // 0x2ea6c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA6CCu;
        goto label_2ea6cc;
    }
    ctx->pc = 0x2EA6C4u;
    SET_GPR_U32(ctx, 31, 0x2EA6CCu);
    ctx->pc = 0x2EA6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA6C4u;
    // 0x2ea6c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EA6C4u, 0x2EA6CCu)) {
        return;
    }
    ctx->pc = 0x2EA6CCu;
label_2ea6cc:
    // 0x2ea6cc: 0x10000022  b           . + 4 + (0x22 << 2)
label_2ea6d0:
    if (ctx->pc == 0x2EA6D0u) {
        ctx->pc = 0x2EA6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6CCu;
        // 0x2ea6d0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA6D4u;
        goto label_2ea6d4;
    }
    ctx->pc = 0x2EA6CCu;
    {
        const bool branch_taken_0x2ea6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6CCu;
        // 0x2ea6d0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea6cc) {
            ctx->pc = 0x2EA758u;
            return;
        }
    }
    ctx->pc = 0x2EA6D4u;
label_2ea6d4:
    // 0x2ea6d4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ea6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2ea6d8:
    // 0x2ea6d8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2ea6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2ea6dc:
    // 0x2ea6dc: 0x2450e540  addiu       $s0, $v0, -0x1AC0
    ctx->pc = 0x2ea6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960448));
label_2ea6e0:
    // 0x2ea6e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2ea6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ea6e4:
    // 0x2ea6e4: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
label_2ea6e8:
    if (ctx->pc == 0x2EA6E8u) {
        ctx->pc = 0x2EA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6E4u;
        // 0x2ea6e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA6ECu;
        goto label_2ea6ec;
    }
    ctx->pc = 0x2EA6E4u;
    {
        const bool branch_taken_0x2ea6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6E4u;
        // 0x2ea6e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea6e4) {
            ctx->pc = 0x2EA708u;
            goto label_2ea708;
        }
    }
    ctx->pc = 0x2EA6ECu;
label_2ea6ec:
    // 0x2ea6ec: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2ea6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2ea6f0:
    // 0x2ea6f0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2ea6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2ea6f4:
    // 0x2ea6f4: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2ea6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2ea6f8:
    // 0x2ea6f8: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x2ea6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2ea6fc:
    // 0x2ea6fc: 0x40f809  jalr        $v0
label_2ea700:
    if (ctx->pc == 0x2EA700u) {
        ctx->pc = 0x2EA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6FCu;
        // 0x2ea700: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA704u;
        goto label_2ea704;
    }
    ctx->pc = 0x2EA6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EA704u);
        ctx->pc = 0x2EA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6FCu;
        // 0x2ea700: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA6FCu, 0x2EA704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EA704u;
label_2ea704:
    // 0x2ea704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea708:
    // 0x2ea708: 0xc0c86e4  jal         func_321B90
label_2ea70c:
    if (ctx->pc == 0x2EA70Cu) {
        ctx->pc = 0x2EA70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA708u;
        // 0x2ea70c: 0x2605007f  addiu       $a1, $s0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA710u;
        goto label_2ea710;
    }
    ctx->pc = 0x2EA708u;
    SET_GPR_U32(ctx, 31, 0x2EA710u);
    ctx->pc = 0x2EA70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA708u;
    // 0x2ea70c: 0x2605007f  addiu       $a1, $s0, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2EA708u, 0x2EA710u)) {
        return;
    }
    ctx->pc = 0x2EA710u;
label_2ea710:
    // 0x2ea710: 0x8f848c88  lw          $a0, -0x7378($gp)
    ctx->pc = 0x2ea710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_2ea714:
    // 0x2ea714: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ea714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea718:
    // 0x2ea718: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2ea718u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ea71c:
    // 0x2ea71c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2ea71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2ea720:
    // 0x2ea720: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x2ea720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_2ea724:
    // 0x2ea724: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ea724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea728:
    // 0x2ea728: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ea728u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea72c:
    // 0x2ea72c: 0xc0ba380  jal         func_2E8E00
label_2ea730:
    if (ctx->pc == 0x2EA730u) {
        ctx->pc = 0x2EA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA72Cu;
        // 0x2ea730: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA734u;
        goto label_2ea734;
    }
    ctx->pc = 0x2EA72Cu;
    SET_GPR_U32(ctx, 31, 0x2EA734u);
    ctx->pc = 0x2EA730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA72Cu;
    // 0x2ea730: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EA72Cu, 0x2EA734u)) {
        return;
    }
    ctx->pc = 0x2EA734u;
label_2ea734:
    // 0x2ea734: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ea738:
    if (ctx->pc == 0x2EA738u) {
        ctx->pc = 0x2EA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA734u;
        // 0x2ea738: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA73Cu;
        goto label_2ea73c;
    }
    ctx->pc = 0x2EA734u;
    {
        const bool branch_taken_0x2ea734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA734u;
        // 0x2ea738: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea734) {
            ctx->pc = 0x2EA758u;
            return;
        }
    }
    ctx->pc = 0x2EA73Cu;
label_2ea73c:
    // 0x2ea73c: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
label_2ea740:
    if (ctx->pc == 0x2EA740u) {
        ctx->pc = 0x2EA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA73Cu;
        // 0x2ea740: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA744u;
        goto label_2ea744;
    }
    ctx->pc = 0x2EA73Cu;
    {
        const bool branch_taken_0x2ea73c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea73c) {
            ctx->pc = 0x2EA740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA73Cu;
            // 0x2ea740: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA744u;
            goto label_2ea744;
        }
    }
    ctx->pc = 0x2EA744u;
label_2ea744:
    // 0x2ea744: 0x1a400004  blez        $s2, . + 4 + (0x4 << 2)
label_2ea748:
    if (ctx->pc == 0x2EA748u) {
        ctx->pc = 0x2EA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA744u;
        // 0x2ea748: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA74Cu;
        goto label_2ea74c;
    }
    ctx->pc = 0x2EA744u;
    {
        const bool branch_taken_0x2ea744 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x2EA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA744u;
        // 0x2ea748: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea744) {
            ctx->pc = 0x2EA758u;
            return;
        }
    }
    ctx->pc = 0x2EA74Cu;
label_2ea74c:
    // 0x2ea74c: 0xc0c8494  jal         func_321250
label_2ea750:
    if (ctx->pc == 0x2EA750u) {
        ctx->pc = 0x2EA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA74Cu;
        // 0x2ea750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA754u;
        goto label_fallthrough_0x2ea74c;
    }
    ctx->pc = 0x2EA74Cu;
    SET_GPR_U32(ctx, 31, 0x2EA754u);
    ctx->pc = 0x2EA750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA74Cu;
    // 0x2ea750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321250u, 0x2EA74Cu, 0x2EA754u)) {
        return;
    }
label_fallthrough_0x2ea74c:
    ctx->pc = 0x2EA754u;
}
