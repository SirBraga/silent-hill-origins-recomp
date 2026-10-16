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

// Function: sub_0030B488
// Address: 0x30b488 - 0x30b820
void sub_0030B488_0x30b488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B488_0x30b488");
#endif

    switch (ctx->pc) {
        case 0x30b488u: goto label_30b488;
        case 0x30b48cu: goto label_30b48c;
        case 0x30b490u: goto label_30b490;
        case 0x30b494u: goto label_30b494;
        case 0x30b498u: goto label_30b498;
        case 0x30b49cu: goto label_30b49c;
        case 0x30b4a0u: goto label_30b4a0;
        case 0x30b4a4u: goto label_30b4a4;
        case 0x30b4a8u: goto label_30b4a8;
        case 0x30b4acu: goto label_30b4ac;
        case 0x30b4b0u: goto label_30b4b0;
        case 0x30b4b4u: goto label_30b4b4;
        case 0x30b4b8u: goto label_30b4b8;
        case 0x30b4bcu: goto label_30b4bc;
        case 0x30b4c0u: goto label_30b4c0;
        case 0x30b4c4u: goto label_30b4c4;
        case 0x30b4c8u: goto label_30b4c8;
        case 0x30b4ccu: goto label_30b4cc;
        case 0x30b4d0u: goto label_30b4d0;
        case 0x30b4d4u: goto label_30b4d4;
        case 0x30b4d8u: goto label_30b4d8;
        case 0x30b4dcu: goto label_30b4dc;
        case 0x30b4e0u: goto label_30b4e0;
        case 0x30b4e4u: goto label_30b4e4;
        case 0x30b4e8u: goto label_30b4e8;
        case 0x30b4ecu: goto label_30b4ec;
        case 0x30b4f0u: goto label_30b4f0;
        case 0x30b4f4u: goto label_30b4f4;
        case 0x30b4f8u: goto label_30b4f8;
        case 0x30b4fcu: goto label_30b4fc;
        case 0x30b500u: goto label_30b500;
        case 0x30b504u: goto label_30b504;
        case 0x30b508u: goto label_30b508;
        case 0x30b50cu: goto label_30b50c;
        case 0x30b510u: goto label_30b510;
        case 0x30b514u: goto label_30b514;
        case 0x30b518u: goto label_30b518;
        case 0x30b51cu: goto label_30b51c;
        case 0x30b520u: goto label_30b520;
        case 0x30b524u: goto label_30b524;
        case 0x30b528u: goto label_30b528;
        case 0x30b52cu: goto label_30b52c;
        case 0x30b530u: goto label_30b530;
        case 0x30b534u: goto label_30b534;
        case 0x30b538u: goto label_30b538;
        case 0x30b53cu: goto label_30b53c;
        case 0x30b540u: goto label_30b540;
        case 0x30b544u: goto label_30b544;
        case 0x30b548u: goto label_30b548;
        case 0x30b54cu: goto label_30b54c;
        case 0x30b550u: goto label_30b550;
        case 0x30b554u: goto label_30b554;
        case 0x30b558u: goto label_30b558;
        case 0x30b55cu: goto label_30b55c;
        case 0x30b560u: goto label_30b560;
        case 0x30b564u: goto label_30b564;
        case 0x30b568u: goto label_30b568;
        case 0x30b56cu: goto label_30b56c;
        case 0x30b570u: goto label_30b570;
        case 0x30b574u: goto label_30b574;
        case 0x30b578u: goto label_30b578;
        case 0x30b57cu: goto label_30b57c;
        case 0x30b580u: goto label_30b580;
        case 0x30b584u: goto label_30b584;
        case 0x30b588u: goto label_30b588;
        case 0x30b58cu: goto label_30b58c;
        case 0x30b590u: goto label_30b590;
        case 0x30b594u: goto label_30b594;
        case 0x30b598u: goto label_30b598;
        case 0x30b59cu: goto label_30b59c;
        case 0x30b5a0u: goto label_30b5a0;
        case 0x30b5a4u: goto label_30b5a4;
        case 0x30b5a8u: goto label_30b5a8;
        case 0x30b5acu: goto label_30b5ac;
        case 0x30b5b0u: goto label_30b5b0;
        case 0x30b5b4u: goto label_30b5b4;
        case 0x30b5b8u: goto label_30b5b8;
        case 0x30b5bcu: goto label_30b5bc;
        case 0x30b5c0u: goto label_30b5c0;
        case 0x30b5c4u: goto label_30b5c4;
        case 0x30b5c8u: goto label_30b5c8;
        case 0x30b5ccu: goto label_30b5cc;
        case 0x30b5d0u: goto label_30b5d0;
        case 0x30b5d4u: goto label_30b5d4;
        case 0x30b5d8u: goto label_30b5d8;
        case 0x30b5dcu: goto label_30b5dc;
        case 0x30b5e0u: goto label_30b5e0;
        case 0x30b5e4u: goto label_30b5e4;
        case 0x30b5e8u: goto label_30b5e8;
        case 0x30b5ecu: goto label_30b5ec;
        case 0x30b5f0u: goto label_30b5f0;
        case 0x30b5f4u: goto label_30b5f4;
        case 0x30b5f8u: goto label_30b5f8;
        case 0x30b5fcu: goto label_30b5fc;
        case 0x30b600u: goto label_30b600;
        case 0x30b604u: goto label_30b604;
        case 0x30b608u: goto label_30b608;
        case 0x30b60cu: goto label_30b60c;
        case 0x30b610u: goto label_30b610;
        case 0x30b614u: goto label_30b614;
        case 0x30b618u: goto label_30b618;
        case 0x30b61cu: goto label_30b61c;
        case 0x30b620u: goto label_30b620;
        case 0x30b624u: goto label_30b624;
        case 0x30b628u: goto label_30b628;
        case 0x30b62cu: goto label_30b62c;
        case 0x30b630u: goto label_30b630;
        case 0x30b634u: goto label_30b634;
        case 0x30b638u: goto label_30b638;
        case 0x30b63cu: goto label_30b63c;
        case 0x30b640u: goto label_30b640;
        case 0x30b644u: goto label_30b644;
        case 0x30b648u: goto label_30b648;
        case 0x30b64cu: goto label_30b64c;
        case 0x30b650u: goto label_30b650;
        case 0x30b654u: goto label_30b654;
        case 0x30b658u: goto label_30b658;
        case 0x30b65cu: goto label_30b65c;
        case 0x30b660u: goto label_30b660;
        case 0x30b664u: goto label_30b664;
        case 0x30b668u: goto label_30b668;
        case 0x30b66cu: goto label_30b66c;
        case 0x30b670u: goto label_30b670;
        case 0x30b674u: goto label_30b674;
        case 0x30b678u: goto label_30b678;
        case 0x30b67cu: goto label_30b67c;
        case 0x30b680u: goto label_30b680;
        case 0x30b684u: goto label_30b684;
        case 0x30b688u: goto label_30b688;
        case 0x30b68cu: goto label_30b68c;
        case 0x30b690u: goto label_30b690;
        case 0x30b694u: goto label_30b694;
        case 0x30b698u: goto label_30b698;
        case 0x30b69cu: goto label_30b69c;
        case 0x30b6a0u: goto label_30b6a0;
        case 0x30b6a4u: goto label_30b6a4;
        case 0x30b6a8u: goto label_30b6a8;
        case 0x30b6acu: goto label_30b6ac;
        case 0x30b6b0u: goto label_30b6b0;
        case 0x30b6b4u: goto label_30b6b4;
        case 0x30b6b8u: goto label_30b6b8;
        case 0x30b6bcu: goto label_30b6bc;
        case 0x30b6c0u: goto label_30b6c0;
        case 0x30b6c4u: goto label_30b6c4;
        case 0x30b6c8u: goto label_30b6c8;
        case 0x30b6ccu: goto label_30b6cc;
        case 0x30b6d0u: goto label_30b6d0;
        case 0x30b6d4u: goto label_30b6d4;
        case 0x30b6d8u: goto label_30b6d8;
        case 0x30b6dcu: goto label_30b6dc;
        case 0x30b6e0u: goto label_30b6e0;
        case 0x30b6e4u: goto label_30b6e4;
        case 0x30b6e8u: goto label_30b6e8;
        case 0x30b6ecu: goto label_30b6ec;
        case 0x30b6f0u: goto label_30b6f0;
        case 0x30b6f4u: goto label_30b6f4;
        case 0x30b6f8u: goto label_30b6f8;
        case 0x30b6fcu: goto label_30b6fc;
        case 0x30b700u: goto label_30b700;
        case 0x30b704u: goto label_30b704;
        case 0x30b708u: goto label_30b708;
        case 0x30b70cu: goto label_30b70c;
        case 0x30b710u: goto label_30b710;
        case 0x30b714u: goto label_30b714;
        case 0x30b718u: goto label_30b718;
        case 0x30b71cu: goto label_30b71c;
        case 0x30b720u: goto label_30b720;
        case 0x30b724u: goto label_30b724;
        case 0x30b728u: goto label_30b728;
        case 0x30b72cu: goto label_30b72c;
        case 0x30b730u: goto label_30b730;
        case 0x30b734u: goto label_30b734;
        case 0x30b738u: goto label_30b738;
        case 0x30b73cu: goto label_30b73c;
        case 0x30b740u: goto label_30b740;
        case 0x30b744u: goto label_30b744;
        case 0x30b748u: goto label_30b748;
        case 0x30b74cu: goto label_30b74c;
        case 0x30b750u: goto label_30b750;
        case 0x30b754u: goto label_30b754;
        case 0x30b758u: goto label_30b758;
        case 0x30b75cu: goto label_30b75c;
        case 0x30b760u: goto label_30b760;
        case 0x30b764u: goto label_30b764;
        case 0x30b768u: goto label_30b768;
        case 0x30b76cu: goto label_30b76c;
        case 0x30b770u: goto label_30b770;
        case 0x30b774u: goto label_30b774;
        case 0x30b778u: goto label_30b778;
        case 0x30b77cu: goto label_30b77c;
        case 0x30b780u: goto label_30b780;
        case 0x30b784u: goto label_30b784;
        case 0x30b788u: goto label_30b788;
        case 0x30b78cu: goto label_30b78c;
        case 0x30b790u: goto label_30b790;
        case 0x30b794u: goto label_30b794;
        case 0x30b798u: goto label_30b798;
        case 0x30b79cu: goto label_30b79c;
        case 0x30b7a0u: goto label_30b7a0;
        case 0x30b7a4u: goto label_30b7a4;
        case 0x30b7a8u: goto label_30b7a8;
        case 0x30b7acu: goto label_30b7ac;
        case 0x30b7b0u: goto label_30b7b0;
        case 0x30b7b4u: goto label_30b7b4;
        case 0x30b7b8u: goto label_30b7b8;
        case 0x30b7bcu: goto label_30b7bc;
        case 0x30b7c0u: goto label_30b7c0;
        case 0x30b7c4u: goto label_30b7c4;
        case 0x30b7c8u: goto label_30b7c8;
        case 0x30b7ccu: goto label_30b7cc;
        case 0x30b7d0u: goto label_30b7d0;
        case 0x30b7d4u: goto label_30b7d4;
        case 0x30b7d8u: goto label_30b7d8;
        case 0x30b7dcu: goto label_30b7dc;
        case 0x30b7e0u: goto label_30b7e0;
        case 0x30b7e4u: goto label_30b7e4;
        case 0x30b7e8u: goto label_30b7e8;
        case 0x30b7ecu: goto label_30b7ec;
        case 0x30b7f0u: goto label_30b7f0;
        case 0x30b7f4u: goto label_30b7f4;
        case 0x30b7f8u: goto label_30b7f8;
        case 0x30b7fcu: goto label_30b7fc;
        case 0x30b800u: goto label_30b800;
        case 0x30b804u: goto label_30b804;
        case 0x30b808u: goto label_30b808;
        case 0x30b80cu: goto label_30b80c;
        case 0x30b810u: goto label_30b810;
        case 0x30b814u: goto label_30b814;
        case 0x30b818u: goto label_30b818;
        case 0x30b81cu: goto label_30b81c;
        default: break;
    }

    ctx->pc = 0x30b488u;

label_30b488:
    // 0x30b488: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x30b488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_30b48c:
    // 0x30b48c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x30b48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_30b490:
    // 0x30b490: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x30b490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_30b494:
    // 0x30b494: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x30b494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30b498:
    // 0x30b498: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x30b498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_30b49c:
    // 0x30b49c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x30b49cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30b4a0:
    // 0x30b4a0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x30b4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_30b4a4:
    // 0x30b4a4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x30b4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_30b4a8:
    // 0x30b4a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x30b4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_30b4ac:
    // 0x30b4ac: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x30b4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_30b4b0:
    // 0x30b4b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30b4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_30b4b4:
    // 0x30b4b4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x30b4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30b4b8:
    // 0x30b4b8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30b4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30b4bc:
    // 0x30b4bc: 0xc0927be  jal         func_249EF8
label_30b4c0:
    if (ctx->pc == 0x30B4C0u) {
        ctx->pc = 0x30B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4BCu;
        // 0x30b4c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B4C4u;
        goto label_30b4c4;
    }
    ctx->pc = 0x30B4BCu;
    SET_GPR_U32(ctx, 31, 0x30B4C4u);
    ctx->pc = 0x30B4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B4BCu;
    // 0x30b4c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B4BCu, 0x30B4C4u)) {
        return;
    }
    ctx->pc = 0x30B4C4u;
label_30b4c4:
    // 0x30b4c4: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
label_30b4c8:
    if (ctx->pc == 0x30B4C8u) {
        ctx->pc = 0x30B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4C4u;
        // 0x30b4c8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B4CCu;
        goto label_30b4cc;
    }
    ctx->pc = 0x30B4C4u;
    {
        const bool branch_taken_0x30b4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4C4u;
        // 0x30b4c8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b4c4) {
            ctx->pc = 0x30B758u;
            goto label_30b758;
        }
    }
    ctx->pc = 0x30B4CCu;
label_30b4cc:
    // 0x30b4cc: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x30b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_30b4d0:
    // 0x30b4d0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30b4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_30b4d4:
    // 0x30b4d4: 0x144300a0  bne         $v0, $v1, . + 4 + (0xA0 << 2)
label_30b4d8:
    if (ctx->pc == 0x30B4D8u) {
        ctx->pc = 0x30B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4D4u;
        // 0x30b4d8: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B4DCu;
        goto label_30b4dc;
    }
    ctx->pc = 0x30B4D4u;
    {
        const bool branch_taken_0x30b4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4D4u;
        // 0x30b4d8: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b4d4) {
            ctx->pc = 0x30B758u;
            goto label_30b758;
        }
    }
    ctx->pc = 0x30B4DCu;
label_30b4dc:
    // 0x30b4dc: 0x1440009e  bnez        $v0, . + 4 + (0x9E << 2)
label_30b4e0:
    if (ctx->pc == 0x30B4E0u) {
        ctx->pc = 0x30B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4DCu;
        // 0x30b4e0: 0x27b00004  addiu       $s0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B4E4u;
        goto label_30b4e4;
    }
    ctx->pc = 0x30B4DCu;
    {
        const bool branch_taken_0x30b4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4DCu;
        // 0x30b4e0: 0x27b00004  addiu       $s0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b4dc) {
            ctx->pc = 0x30B758u;
            goto label_30b758;
        }
    }
    ctx->pc = 0x30B4E4u;
label_30b4e4:
    // 0x30b4e4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x30b4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30b4e8:
    // 0x30b4e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30b4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30b4ec:
    // 0x30b4ec: 0xc0927be  jal         func_249EF8
label_30b4f0:
    if (ctx->pc == 0x30B4F0u) {
        ctx->pc = 0x30B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4ECu;
        // 0x30b4f0: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B4F4u;
        goto label_30b4f4;
    }
    ctx->pc = 0x30B4ECu;
    SET_GPR_U32(ctx, 31, 0x30B4F4u);
    ctx->pc = 0x30B4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B4ECu;
    // 0x30b4f0: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B4ECu, 0x30B4F4u)) {
        return;
    }
    ctx->pc = 0x30B4F4u;
label_30b4f4:
    // 0x30b4f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_30b4f8:
    if (ctx->pc == 0x30B4F8u) {
        ctx->pc = 0x30B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4F4u;
        // 0x30b4f8: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B4FCu;
        goto label_30b4fc;
    }
    ctx->pc = 0x30B4F4u;
    {
        const bool branch_taken_0x30b4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4F4u;
        // 0x30b4f8: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b4f4) {
            ctx->pc = 0x30B528u;
            goto label_30b528;
        }
    }
    ctx->pc = 0x30B4FCu;
label_30b4fc:
    // 0x30b4fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30b4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30b500:
    // 0x30b500: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30b500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_30b504:
    // 0x30b504: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_30b508:
    if (ctx->pc == 0x30B508u) {
        ctx->pc = 0x30B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B504u;
        // 0x30b508: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B50Cu;
        goto label_30b50c;
    }
    ctx->pc = 0x30B504u;
    {
        const bool branch_taken_0x30b504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B504u;
        // 0x30b508: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b504) {
            ctx->pc = 0x30B528u;
            goto label_30b528;
        }
    }
    ctx->pc = 0x30B50Cu;
label_30b50c:
    // 0x30b50c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_30b510:
    if (ctx->pc == 0x30B510u) {
        ctx->pc = 0x30B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B50Cu;
        // 0x30b510: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B514u;
        goto label_30b514;
    }
    ctx->pc = 0x30B50Cu;
    {
        const bool branch_taken_0x30b50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B50Cu;
        // 0x30b510: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b50c) {
            ctx->pc = 0x30B528u;
            goto label_30b528;
        }
    }
    ctx->pc = 0x30B514u;
label_30b514:
    // 0x30b514: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x30b514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30b518:
    // 0x30b518: 0xc0927be  jal         func_249EF8
label_30b51c:
    if (ctx->pc == 0x30B51Cu) {
        ctx->pc = 0x30B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B518u;
        // 0x30b51c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B520u;
        goto label_30b520;
    }
    ctx->pc = 0x30B518u;
    SET_GPR_U32(ctx, 31, 0x30B520u);
    ctx->pc = 0x30B51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B518u;
    // 0x30b51c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B518u, 0x30B520u)) {
        return;
    }
    ctx->pc = 0x30B520u;
label_30b520:
    // 0x30b520: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_30b524:
    if (ctx->pc == 0x30B524u) {
        ctx->pc = 0x30B528u;
        goto label_30b528;
    }
    ctx->pc = 0x30B520u;
    {
        const bool branch_taken_0x30b520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b520) {
            ctx->pc = 0x30B530u;
            goto label_30b530;
        }
    }
    ctx->pc = 0x30B528u;
label_30b528:
    // 0x30b528: 0x10000007  b           . + 4 + (0x7 << 2)
label_30b52c:
    if (ctx->pc == 0x30B52Cu) {
        ctx->pc = 0x30B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B528u;
        // 0x30b52c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B530u;
        goto label_30b530;
    }
    ctx->pc = 0x30B528u;
    {
        const bool branch_taken_0x30b528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B528u;
        // 0x30b52c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b528) {
            ctx->pc = 0x30B548u;
            goto label_30b548;
        }
    }
    ctx->pc = 0x30B530u;
label_30b530:
    // 0x30b530: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_30b534:
    if (ctx->pc == 0x30B534u) {
        ctx->pc = 0x30B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B530u;
        // 0x30b534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B538u;
        goto label_30b538;
    }
    ctx->pc = 0x30B530u;
    {
        const bool branch_taken_0x30b530 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B530u;
        // 0x30b534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b530) {
            ctx->pc = 0x30B548u;
            goto label_30b548;
        }
    }
    ctx->pc = 0x30B538u;
label_30b538:
    // 0x30b538: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x30b538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_30b53c:
    // 0x30b53c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_30b540:
    // 0x30b540: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x30b540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_30b544:
    // 0x30b544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b548:
    // 0x30b548: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
label_30b54c:
    if (ctx->pc == 0x30B54Cu) {
        ctx->pc = 0x30B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B548u;
        // 0x30b54c: 0x27b0000c  addiu       $s0, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B550u;
        goto label_30b550;
    }
    ctx->pc = 0x30B548u;
    {
        const bool branch_taken_0x30b548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B548u;
        // 0x30b54c: 0x27b0000c  addiu       $s0, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b548) {
            ctx->pc = 0x30B758u;
            goto label_30b758;
        }
    }
    ctx->pc = 0x30B550u;
label_30b550:
    // 0x30b550: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x30b550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30b554:
    // 0x30b554: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30b554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30b558:
    // 0x30b558: 0xc0927be  jal         func_249EF8
label_30b55c:
    if (ctx->pc == 0x30B55Cu) {
        ctx->pc = 0x30B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B558u;
        // 0x30b55c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B560u;
        goto label_30b560;
    }
    ctx->pc = 0x30B558u;
    SET_GPR_U32(ctx, 31, 0x30B560u);
    ctx->pc = 0x30B55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B558u;
    // 0x30b55c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B558u, 0x30B560u)) {
        return;
    }
    ctx->pc = 0x30B560u;
label_30b560:
    // 0x30b560: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_30b564:
    if (ctx->pc == 0x30B564u) {
        ctx->pc = 0x30B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B560u;
        // 0x30b564: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B568u;
        goto label_30b568;
    }
    ctx->pc = 0x30B560u;
    {
        const bool branch_taken_0x30b560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B560u;
        // 0x30b564: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b560) {
            ctx->pc = 0x30B598u;
            goto label_30b598;
        }
    }
    ctx->pc = 0x30B568u;
label_30b568:
    // 0x30b568: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30b568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30b56c:
    // 0x30b56c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30b56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_30b570:
    // 0x30b570: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_30b574:
    if (ctx->pc == 0x30B574u) {
        ctx->pc = 0x30B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B570u;
        // 0x30b574: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B578u;
        goto label_30b578;
    }
    ctx->pc = 0x30B570u;
    {
        const bool branch_taken_0x30b570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B570u;
        // 0x30b574: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b570) {
            ctx->pc = 0x30B598u;
            goto label_30b598;
        }
    }
    ctx->pc = 0x30B578u;
label_30b578:
    // 0x30b578: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_30b57c:
    if (ctx->pc == 0x30B57Cu) {
        ctx->pc = 0x30B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B578u;
        // 0x30b57c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B580u;
        goto label_30b580;
    }
    ctx->pc = 0x30B578u;
    {
        const bool branch_taken_0x30b578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B578u;
        // 0x30b57c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b578) {
            ctx->pc = 0x30B598u;
            goto label_30b598;
        }
    }
    ctx->pc = 0x30B580u;
label_30b580:
    // 0x30b580: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x30b580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30b584:
    // 0x30b584: 0xc0927be  jal         func_249EF8
label_30b588:
    if (ctx->pc == 0x30B588u) {
        ctx->pc = 0x30B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B584u;
        // 0x30b588: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B58Cu;
        goto label_30b58c;
    }
    ctx->pc = 0x30B584u;
    SET_GPR_U32(ctx, 31, 0x30B58Cu);
    ctx->pc = 0x30B588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B584u;
    // 0x30b588: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B584u, 0x30B58Cu)) {
        return;
    }
    ctx->pc = 0x30B58Cu;
label_30b58c:
    // 0x30b58c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_30b590:
    if (ctx->pc == 0x30B590u) {
        ctx->pc = 0x30B594u;
        goto label_30b594;
    }
    ctx->pc = 0x30B58Cu;
    {
        const bool branch_taken_0x30b58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b58c) {
            ctx->pc = 0x30B5A0u;
            goto label_30b5a0;
        }
    }
    ctx->pc = 0x30B594u;
label_30b594:
    // 0x30b594: 0x0  nop
    ctx->pc = 0x30b594u;
    // NOP
label_30b598:
    // 0x30b598: 0x10000007  b           . + 4 + (0x7 << 2)
label_30b59c:
    if (ctx->pc == 0x30B59Cu) {
        ctx->pc = 0x30B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B598u;
        // 0x30b59c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B5A0u;
        goto label_30b5a0;
    }
    ctx->pc = 0x30B598u;
    {
        const bool branch_taken_0x30b598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B598u;
        // 0x30b59c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b598) {
            ctx->pc = 0x30B5B8u;
            goto label_30b5b8;
        }
    }
    ctx->pc = 0x30B5A0u;
label_30b5a0:
    // 0x30b5a0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_30b5a4:
    if (ctx->pc == 0x30B5A4u) {
        ctx->pc = 0x30B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B5A0u;
        // 0x30b5a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B5A8u;
        goto label_30b5a8;
    }
    ctx->pc = 0x30B5A0u;
    {
        const bool branch_taken_0x30b5a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B5A0u;
        // 0x30b5a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b5a0) {
            ctx->pc = 0x30B5B8u;
            goto label_30b5b8;
        }
    }
    ctx->pc = 0x30B5A8u;
label_30b5a8:
    // 0x30b5a8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x30b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_30b5ac:
    // 0x30b5ac: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_30b5b0:
    // 0x30b5b0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x30b5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_30b5b4:
    // 0x30b5b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b5b8:
    // 0x30b5b8: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_30b5bc:
    if (ctx->pc == 0x30B5BCu) {
        ctx->pc = 0x30B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B5B8u;
        // 0x30b5bc: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B5C0u;
        goto label_30b5c0;
    }
    ctx->pc = 0x30B5B8u;
    {
        const bool branch_taken_0x30b5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B5B8u;
        // 0x30b5bc: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b5b8) {
            ctx->pc = 0x30B758u;
            goto label_30b758;
        }
    }
    ctx->pc = 0x30B5C0u;
label_30b5c0:
    // 0x30b5c0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x30b5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_30b5c4:
    // 0x30b5c4: 0x26030fc8  addiu       $v1, $s0, 0xFC8
    ctx->pc = 0x30b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_30b5c8:
    // 0x30b5c8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x30b5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_30b5cc:
    // 0x30b5cc: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x30b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_30b5d0:
    // 0x30b5d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30b5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30b5d4:
    // 0x30b5d4: 0x40f809  jalr        $v0
label_30b5d8:
    if (ctx->pc == 0x30B5D8u) {
        ctx->pc = 0x30B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B5D4u;
        // 0x30b5d8: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B5DCu;
        goto label_30b5dc;
    }
    ctx->pc = 0x30B5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30B5DCu);
        ctx->pc = 0x30B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B5D4u;
        // 0x30b5d8: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B5D4u, 0x30B5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30B5DCu;
label_30b5dc:
    // 0x30b5dc: 0x8fb30004  lw          $s3, 0x4($sp)
    ctx->pc = 0x30b5dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_30b5e0:
    // 0x30b5e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30b5e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b5e4:
    // 0x30b5e4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x30b5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30b5e8:
    // 0x30b5e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30b5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30b5ec:
    // 0x30b5ec: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x30b5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_30b5f0:
    // 0x30b5f0: 0xc0927be  jal         func_249EF8
label_30b5f4:
    if (ctx->pc == 0x30B5F4u) {
        ctx->pc = 0x30B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B5F0u;
        // 0x30b5f4: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B5F8u;
        goto label_30b5f8;
    }
    ctx->pc = 0x30B5F0u;
    SET_GPR_U32(ctx, 31, 0x30B5F8u);
    ctx->pc = 0x30B5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B5F0u;
    // 0x30b5f4: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B5F0u, 0x30B5F8u)) {
        return;
    }
    ctx->pc = 0x30B5F8u;
label_30b5f8:
    // 0x30b5f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_30b5fc:
    if (ctx->pc == 0x30B5FCu) {
        ctx->pc = 0x30B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B5F8u;
        // 0x30b5fc: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B600u;
        goto label_30b600;
    }
    ctx->pc = 0x30B5F8u;
    {
        const bool branch_taken_0x30b5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B5F8u;
        // 0x30b5fc: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b5f8) {
            ctx->pc = 0x30B638u;
            goto label_30b638;
        }
    }
    ctx->pc = 0x30B600u;
label_30b600:
    // 0x30b600: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30b600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30b604:
    // 0x30b604: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30b604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_30b608:
    // 0x30b608: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_30b60c:
    if (ctx->pc == 0x30B60Cu) {
        ctx->pc = 0x30B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B608u;
        // 0x30b60c: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B610u;
        goto label_30b610;
    }
    ctx->pc = 0x30B608u;
    {
        const bool branch_taken_0x30b608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B608u;
        // 0x30b60c: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b608) {
            ctx->pc = 0x30B638u;
            goto label_30b638;
        }
    }
    ctx->pc = 0x30B610u;
label_30b610:
    // 0x30b610: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_30b614:
    if (ctx->pc == 0x30B614u) {
        ctx->pc = 0x30B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B610u;
        // 0x30b614: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B618u;
        goto label_30b618;
    }
    ctx->pc = 0x30B610u;
    {
        const bool branch_taken_0x30b610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B610u;
        // 0x30b614: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b610) {
            ctx->pc = 0x30B638u;
            goto label_30b638;
        }
    }
    ctx->pc = 0x30B618u;
label_30b618:
    // 0x30b618: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x30b618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30b61c:
    // 0x30b61c: 0xc0927be  jal         func_249EF8
label_30b620:
    if (ctx->pc == 0x30B620u) {
        ctx->pc = 0x30B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B61Cu;
        // 0x30b620: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B624u;
        goto label_30b624;
    }
    ctx->pc = 0x30B61Cu;
    SET_GPR_U32(ctx, 31, 0x30B624u);
    ctx->pc = 0x30B620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B61Cu;
    // 0x30b620: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B61Cu, 0x30B624u)) {
        return;
    }
    ctx->pc = 0x30B624u;
label_30b624:
    // 0x30b624: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_30b628:
    if (ctx->pc == 0x30B628u) {
        ctx->pc = 0x30B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B624u;
        // 0x30b628: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B62Cu;
        goto label_30b62c;
    }
    ctx->pc = 0x30B624u;
    {
        const bool branch_taken_0x30b624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B624u;
        // 0x30b628: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b624) {
            ctx->pc = 0x30B638u;
            goto label_30b638;
        }
    }
    ctx->pc = 0x30B62Cu;
label_30b62c:
    // 0x30b62c: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
label_30b630:
    if (ctx->pc == 0x30B630u) {
        ctx->pc = 0x30B634u;
        goto label_30b634;
    }
    ctx->pc = 0x30B62Cu;
    {
        const bool branch_taken_0x30b62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x30b62c) {
            ctx->pc = 0x30B640u;
            goto label_30b640;
        }
    }
    ctx->pc = 0x30B634u;
label_30b634:
    // 0x30b634: 0x0  nop
    ctx->pc = 0x30b634u;
    // NOP
label_30b638:
    // 0x30b638: 0x10000045  b           . + 4 + (0x45 << 2)
label_30b63c:
    if (ctx->pc == 0x30B63Cu) {
        ctx->pc = 0x30B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B638u;
        // 0x30b63c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B640u;
        goto label_30b640;
    }
    ctx->pc = 0x30B638u;
    {
        const bool branch_taken_0x30b638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B638u;
        // 0x30b63c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b638) {
            ctx->pc = 0x30B750u;
            goto label_30b750;
        }
    }
    ctx->pc = 0x30B640u;
label_30b640:
    // 0x30b640: 0x1260003b  beqz        $s3, . + 4 + (0x3B << 2)
label_30b644:
    if (ctx->pc == 0x30B644u) {
        ctx->pc = 0x30B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B640u;
        // 0x30b644: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B648u;
        goto label_30b648;
    }
    ctx->pc = 0x30B640u;
    {
        const bool branch_taken_0x30b640 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B640u;
        // 0x30b644: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b640) {
            ctx->pc = 0x30B730u;
            goto label_30b730;
        }
    }
    ctx->pc = 0x30B648u;
label_30b648:
    // 0x30b648: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x30b648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30b64c:
    // 0x30b64c: 0x1a600016  blez        $s3, . + 4 + (0x16 << 2)
label_30b650:
    if (ctx->pc == 0x30B650u) {
        ctx->pc = 0x30B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B64Cu;
        // 0x30b650: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B654u;
        goto label_30b654;
    }
    ctx->pc = 0x30B64Cu;
    {
        const bool branch_taken_0x30b64c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x30B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B64Cu;
        // 0x30b650: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b64c) {
            ctx->pc = 0x30B6A8u;
            goto label_30b6a8;
        }
    }
    ctx->pc = 0x30B654u;
label_30b654:
    // 0x30b654: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
label_30b658:
    if (ctx->pc == 0x30B658u) {
        ctx->pc = 0x30B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B654u;
        // 0x30b658: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B65Cu;
        goto label_30b65c;
    }
    ctx->pc = 0x30B654u;
    {
        const bool branch_taken_0x30b654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b654) {
            ctx->pc = 0x30B658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B654u;
            // 0x30b658: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B6D4u;
            goto label_30b6d4;
        }
    }
    ctx->pc = 0x30B65Cu;
label_30b65c:
    // 0x30b65c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x30b65cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_30b660:
    // 0x30b660: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_30b664:
    if (ctx->pc == 0x30B664u) {
        ctx->pc = 0x30B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B660u;
        // 0x30b664: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B668u;
        goto label_30b668;
    }
    ctx->pc = 0x30B660u;
    {
        const bool branch_taken_0x30b660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B660u;
        // 0x30b664: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b660) {
            ctx->pc = 0x30B6ACu;
            goto label_30b6ac;
        }
    }
    ctx->pc = 0x30B668u;
label_30b668:
    // 0x30b668: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x30b668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_30b66c:
    // 0x30b66c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_30b670:
    if (ctx->pc == 0x30B670u) {
        ctx->pc = 0x30B674u;
        goto label_30b674;
    }
    ctx->pc = 0x30B66Cu;
    {
        const bool branch_taken_0x30b66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b66c) {
            ctx->pc = 0x30B690u;
            goto label_30b690;
        }
    }
    ctx->pc = 0x30B674u;
label_30b674:
    // 0x30b674: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30b674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30b678:
    // 0x30b678: 0xc0927be  jal         func_249EF8
label_30b67c:
    if (ctx->pc == 0x30B67Cu) {
        ctx->pc = 0x30B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B678u;
        // 0x30b67c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B680u;
        goto label_30b680;
    }
    ctx->pc = 0x30B678u;
    SET_GPR_U32(ctx, 31, 0x30B680u);
    ctx->pc = 0x30B67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B678u;
    // 0x30b67c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B678u, 0x30B680u)) {
        return;
    }
    ctx->pc = 0x30B680u;
label_30b680:
    // 0x30b680: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
label_30b684:
    if (ctx->pc == 0x30B684u) {
        ctx->pc = 0x30B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B680u;
        // 0x30b684: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B688u;
        goto label_30b688;
    }
    ctx->pc = 0x30B680u;
    {
        const bool branch_taken_0x30b680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B680u;
        // 0x30b684: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b680) {
            ctx->pc = 0x30B638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b638;
        }
    }
    ctx->pc = 0x30B688u;
label_30b688:
    // 0x30b688: 0x26900004  addiu       $s0, $s4, 0x4
    ctx->pc = 0x30b688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_30b68c:
    // 0x30b68c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x30b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30b690:
    // 0x30b690: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30b690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b694:
    // 0x30b694: 0xc0927be  jal         func_249EF8
label_30b698:
    if (ctx->pc == 0x30B698u) {
        ctx->pc = 0x30B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B694u;
        // 0x30b698: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B69Cu;
        goto label_30b69c;
    }
    ctx->pc = 0x30B694u;
    SET_GPR_U32(ctx, 31, 0x30B69Cu);
    ctx->pc = 0x30B698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B694u;
    // 0x30b698: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B694u, 0x30B69Cu)) {
        return;
    }
    ctx->pc = 0x30B69Cu;
label_30b69c:
    // 0x30b69c: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
label_30b6a0:
    if (ctx->pc == 0x30B6A0u) {
        ctx->pc = 0x30B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B69Cu;
        // 0x30b6a0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B6A4u;
        goto label_30b6a4;
    }
    ctx->pc = 0x30B69Cu;
    {
        const bool branch_taken_0x30b69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B69Cu;
        // 0x30b6a0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b69c) {
            ctx->pc = 0x30B638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b638;
        }
    }
    ctx->pc = 0x30B6A4u;
label_30b6a4:
    // 0x30b6a4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x30b6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_30b6a8:
    // 0x30b6a8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x30b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30b6ac:
    // 0x30b6ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30b6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b6b0:
    // 0x30b6b0: 0xc0927be  jal         func_249EF8
label_30b6b4:
    if (ctx->pc == 0x30B6B4u) {
        ctx->pc = 0x30B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6B0u;
        // 0x30b6b4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B6B8u;
        goto label_30b6b8;
    }
    ctx->pc = 0x30B6B0u;
    SET_GPR_U32(ctx, 31, 0x30B6B8u);
    ctx->pc = 0x30B6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B6B0u;
    // 0x30b6b4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B6B0u, 0x30B6B8u)) {
        return;
    }
    ctx->pc = 0x30B6B8u;
label_30b6b8:
    // 0x30b6b8: 0x1040ffdf  beqz        $v0, . + 4 + (-0x21 << 2)
label_30b6bc:
    if (ctx->pc == 0x30B6BCu) {
        ctx->pc = 0x30B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6B8u;
        // 0x30b6bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B6C0u;
        goto label_30b6c0;
    }
    ctx->pc = 0x30B6B8u;
    {
        const bool branch_taken_0x30b6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6B8u;
        // 0x30b6bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b6b8) {
            ctx->pc = 0x30B638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b638;
        }
    }
    ctx->pc = 0x30B6C0u;
label_30b6c0:
    // 0x30b6c0: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x30b6c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_30b6c4:
    // 0x30b6c4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_30b6c8:
    if (ctx->pc == 0x30B6C8u) {
        ctx->pc = 0x30B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6C4u;
        // 0x30b6c8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B6CCu;
        goto label_30b6cc;
    }
    ctx->pc = 0x30B6C4u;
    {
        const bool branch_taken_0x30b6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6C4u;
        // 0x30b6c8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b6c4) {
            ctx->pc = 0x30B730u;
            goto label_30b730;
        }
    }
    ctx->pc = 0x30B6CCu;
label_30b6cc:
    // 0x30b6cc: 0x0  nop
    ctx->pc = 0x30b6ccu;
    // NOP
label_30b6d0:
    // 0x30b6d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x30b6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30b6d4:
    // 0x30b6d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30b6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b6d8:
    // 0x30b6d8: 0xc0927be  jal         func_249EF8
label_30b6dc:
    if (ctx->pc == 0x30B6DCu) {
        ctx->pc = 0x30B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6D8u;
        // 0x30b6dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B6E0u;
        goto label_30b6e0;
    }
    ctx->pc = 0x30B6D8u;
    SET_GPR_U32(ctx, 31, 0x30B6E0u);
    ctx->pc = 0x30B6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B6D8u;
    // 0x30b6dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B6D8u, 0x30B6E0u)) {
        return;
    }
    ctx->pc = 0x30B6E0u;
label_30b6e0:
    // 0x30b6e0: 0x1040ffd5  beqz        $v0, . + 4 + (-0x2B << 2)
label_30b6e4:
    if (ctx->pc == 0x30B6E4u) {
        ctx->pc = 0x30B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6E0u;
        // 0x30b6e4: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B6E8u;
        goto label_30b6e8;
    }
    ctx->pc = 0x30B6E0u;
    {
        const bool branch_taken_0x30b6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6E0u;
        // 0x30b6e4: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b6e0) {
            ctx->pc = 0x30B638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b638;
        }
    }
    ctx->pc = 0x30B6E8u;
label_30b6e8:
    // 0x30b6e8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x30b6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30b6ec:
    // 0x30b6ec: 0xc0927be  jal         func_249EF8
label_30b6f0:
    if (ctx->pc == 0x30B6F0u) {
        ctx->pc = 0x30B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6ECu;
        // 0x30b6f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B6F4u;
        goto label_30b6f4;
    }
    ctx->pc = 0x30B6ECu;
    SET_GPR_U32(ctx, 31, 0x30B6F4u);
    ctx->pc = 0x30B6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B6ECu;
    // 0x30b6f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B6ECu, 0x30B6F4u)) {
        return;
    }
    ctx->pc = 0x30B6F4u;
label_30b6f4:
    // 0x30b6f4: 0x1040ffd0  beqz        $v0, . + 4 + (-0x30 << 2)
label_30b6f8:
    if (ctx->pc == 0x30B6F8u) {
        ctx->pc = 0x30B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6F4u;
        // 0x30b6f8: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B6FCu;
        goto label_30b6fc;
    }
    ctx->pc = 0x30B6F4u;
    {
        const bool branch_taken_0x30b6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6F4u;
        // 0x30b6f8: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b6f4) {
            ctx->pc = 0x30B638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b638;
        }
    }
    ctx->pc = 0x30B6FCu;
label_30b6fc:
    // 0x30b6fc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x30b6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30b700:
    // 0x30b700: 0xc0927be  jal         func_249EF8
label_30b704:
    if (ctx->pc == 0x30B704u) {
        ctx->pc = 0x30B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B700u;
        // 0x30b704: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B708u;
        goto label_30b708;
    }
    ctx->pc = 0x30B700u;
    SET_GPR_U32(ctx, 31, 0x30B708u);
    ctx->pc = 0x30B704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B700u;
    // 0x30b704: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B700u, 0x30B708u)) {
        return;
    }
    ctx->pc = 0x30B708u;
label_30b708:
    // 0x30b708: 0x1040ffcb  beqz        $v0, . + 4 + (-0x35 << 2)
label_30b70c:
    if (ctx->pc == 0x30B70Cu) {
        ctx->pc = 0x30B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B708u;
        // 0x30b70c: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B710u;
        goto label_30b710;
    }
    ctx->pc = 0x30B708u;
    {
        const bool branch_taken_0x30b708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B708u;
        // 0x30b70c: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b708) {
            ctx->pc = 0x30B638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b638;
        }
    }
    ctx->pc = 0x30B710u;
label_30b710:
    // 0x30b710: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x30b710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30b714:
    // 0x30b714: 0xc0927be  jal         func_249EF8
label_30b718:
    if (ctx->pc == 0x30B718u) {
        ctx->pc = 0x30B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B714u;
        // 0x30b718: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B71Cu;
        goto label_30b71c;
    }
    ctx->pc = 0x30B714u;
    SET_GPR_U32(ctx, 31, 0x30B71Cu);
    ctx->pc = 0x30B718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B714u;
    // 0x30b718: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B714u, 0x30B71Cu)) {
        return;
    }
    ctx->pc = 0x30B71Cu;
label_30b71c:
    // 0x30b71c: 0x1040ffc6  beqz        $v0, . + 4 + (-0x3A << 2)
label_30b720:
    if (ctx->pc == 0x30B720u) {
        ctx->pc = 0x30B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B71Cu;
        // 0x30b720: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B724u;
        goto label_30b724;
    }
    ctx->pc = 0x30B71Cu;
    {
        const bool branch_taken_0x30b71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B71Cu;
        // 0x30b720: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b71c) {
            ctx->pc = 0x30B638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b638;
        }
    }
    ctx->pc = 0x30B724u;
label_30b724:
    // 0x30b724: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x30b724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_30b728:
    // 0x30b728: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_30b72c:
    if (ctx->pc == 0x30B72Cu) {
        ctx->pc = 0x30B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B728u;
        // 0x30b72c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B730u;
        goto label_30b730;
    }
    ctx->pc = 0x30B728u;
    {
        const bool branch_taken_0x30b728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B728u;
        // 0x30b72c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b728) {
            ctx->pc = 0x30B6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b6d0;
        }
    }
    ctx->pc = 0x30B730u;
label_30b730:
    // 0x30b730: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_30b734:
    if (ctx->pc == 0x30B734u) {
        ctx->pc = 0x30B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B730u;
        // 0x30b734: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B738u;
        goto label_30b738;
    }
    ctx->pc = 0x30B730u;
    {
        const bool branch_taken_0x30b730 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B730u;
        // 0x30b734: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b730) {
            ctx->pc = 0x30B74Cu;
            goto label_30b74c;
        }
    }
    ctx->pc = 0x30B738u;
label_30b738:
    // 0x30b738: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x30b738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_30b73c:
    // 0x30b73c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30b740:
    // 0x30b740: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x30b740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_30b744:
    // 0x30b744: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30b744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30b748:
    // 0x30b748: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x30b748u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_30b74c:
    // 0x30b74c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b750:
    // 0x30b750: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_30b754:
    if (ctx->pc == 0x30B754u) {
        ctx->pc = 0x30B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B750u;
        // 0x30b754: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B758u;
        goto label_30b758;
    }
    ctx->pc = 0x30B750u;
    {
        const bool branch_taken_0x30b750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B750u;
        // 0x30b754: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b750) {
            ctx->pc = 0x30B760u;
            goto label_30b760;
        }
    }
    ctx->pc = 0x30B758u;
label_30b758:
    // 0x30b758: 0x10000027  b           . + 4 + (0x27 << 2)
label_30b75c:
    if (ctx->pc == 0x30B75Cu) {
        ctx->pc = 0x30B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B758u;
        // 0x30b75c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B760u;
        goto label_30b760;
    }
    ctx->pc = 0x30B758u;
    {
        const bool branch_taken_0x30b758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B758u;
        // 0x30b75c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b758) {
            ctx->pc = 0x30B7F8u;
            goto label_30b7f8;
        }
    }
    ctx->pc = 0x30B760u;
label_30b760:
    // 0x30b760: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x30b760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_30b764:
    // 0x30b764: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x30b764u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_30b768:
    // 0x30b768: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x30b768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_30b76c:
    // 0x30b76c: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x30b76cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_30b770:
    // 0x30b770: 0x34c60900  ori         $a2, $a2, 0x900
    ctx->pc = 0x30b770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
label_30b774:
    // 0x30b774: 0xc0ad2b4  jal         func_2B4AD0
label_30b778:
    if (ctx->pc == 0x30B778u) {
        ctx->pc = 0x30B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B774u;
        // 0x30b778: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B77Cu;
        goto label_30b77c;
    }
    ctx->pc = 0x30B774u;
    SET_GPR_U32(ctx, 31, 0x30B77Cu);
    ctx->pc = 0x30B778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B774u;
    // 0x30b778: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4AD0u, 0x30B774u, 0x30B77Cu)) {
        return;
    }
    ctx->pc = 0x30B77Cu;
label_30b77c:
    // 0x30b77c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30b77cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b780:
    // 0x30b780: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x30b780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_30b784:
    // 0x30b784: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_30b788:
    if (ctx->pc == 0x30B788u) {
        ctx->pc = 0x30B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B784u;
        // 0x30b788: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B78Cu;
        goto label_30b78c;
    }
    ctx->pc = 0x30B784u;
    {
        const bool branch_taken_0x30b784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B784u;
        // 0x30b788: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b784) {
            ctx->pc = 0x30B7B8u;
            goto label_30b7b8;
        }
    }
    ctx->pc = 0x30B78Cu;
label_30b78c:
    // 0x30b78c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x30b78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30b790:
    // 0x30b790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b794:
    // 0x30b794: 0xc0c2f30  jal         func_30BCC0
label_30b798:
    if (ctx->pc == 0x30B798u) {
        ctx->pc = 0x30B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B794u;
        // 0x30b798: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B79Cu;
        goto label_30b79c;
    }
    ctx->pc = 0x30B794u;
    SET_GPR_U32(ctx, 31, 0x30B79Cu);
    ctx->pc = 0x30B798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B794u;
    // 0x30b798: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BCC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30BCC0u, 0x30B794u, 0x30B79Cu)) {
        return;
    }
    ctx->pc = 0x30B79Cu;
label_30b79c:
    // 0x30b79c: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
label_30b7a0:
    if (ctx->pc == 0x30B7A0u) {
        ctx->pc = 0x30B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B79Cu;
        // 0x30b7a0: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B7A4u;
        goto label_30b7a4;
    }
    ctx->pc = 0x30B79Cu;
    {
        const bool branch_taken_0x30b79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B79Cu;
        // 0x30b7a0: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b79c) {
            ctx->pc = 0x30B758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b758;
        }
    }
    ctx->pc = 0x30B7A4u;
label_30b7a4:
    // 0x30b7a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30b7a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_30b7a8:
    // 0x30b7a8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x30b7a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30b7ac:
    // 0x30b7ac: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_30b7b0:
    if (ctx->pc == 0x30B7B0u) {
        ctx->pc = 0x30B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B7ACu;
        // 0x30b7b0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B7B4u;
        goto label_30b7b4;
    }
    ctx->pc = 0x30B7ACu;
    {
        const bool branch_taken_0x30b7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B7ACu;
        // 0x30b7b0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b7ac) {
            ctx->pc = 0x30B790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b790;
        }
    }
    ctx->pc = 0x30B7B4u;
label_30b7b4:
    // 0x30b7b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30b7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30b7b8:
    // 0x30b7b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30b7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30b7bc:
    // 0x30b7bc: 0xc0b4744  jal         func_2D1D10
label_30b7c0:
    if (ctx->pc == 0x30B7C0u) {
        ctx->pc = 0x30B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B7BCu;
        // 0x30b7c0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B7C4u;
        goto label_30b7c4;
    }
    ctx->pc = 0x30B7BCu;
    SET_GPR_U32(ctx, 31, 0x30B7C4u);
    ctx->pc = 0x30B7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B7BCu;
    // 0x30b7c0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D1D10u, 0x30B7BCu, 0x30B7C4u)) {
        return;
    }
    ctx->pc = 0x30B7C4u;
label_30b7c4:
    // 0x30b7c4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x30b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_30b7c8:
    // 0x30b7c8: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_30b7cc:
    if (ctx->pc == 0x30B7CCu) {
        ctx->pc = 0x30B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B7C8u;
        // 0x30b7cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B7D0u;
        goto label_30b7d0;
    }
    ctx->pc = 0x30B7C8u;
    {
        const bool branch_taken_0x30b7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B7C8u;
        // 0x30b7cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b7c8) {
            ctx->pc = 0x30B7F8u;
            goto label_30b7f8;
        }
    }
    ctx->pc = 0x30B7D0u;
label_30b7d0:
    // 0x30b7d0: 0x26a30fc8  addiu       $v1, $s5, 0xFC8
    ctx->pc = 0x30b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4040));
label_30b7d4:
    // 0x30b7d4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x30b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_30b7d8:
    // 0x30b7d8: 0x40f809  jalr        $v0
label_30b7dc:
    if (ctx->pc == 0x30B7DCu) {
        ctx->pc = 0x30B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B7D8u;
        // 0x30b7dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B7E0u;
        goto label_30b7e0;
    }
    ctx->pc = 0x30B7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30B7E0u);
        ctx->pc = 0x30B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B7D8u;
        // 0x30b7dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B7D8u, 0x30B7E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30B7E0u;
label_30b7e0:
    // 0x30b7e0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_30b7e4:
    if (ctx->pc == 0x30B7E4u) {
        ctx->pc = 0x30B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B7E0u;
        // 0x30b7e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B7E8u;
        goto label_30b7e8;
    }
    ctx->pc = 0x30B7E0u;
    {
        const bool branch_taken_0x30b7e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B7E0u;
        // 0x30b7e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b7e0) {
            ctx->pc = 0x30B7F8u;
            goto label_30b7f8;
        }
    }
    ctx->pc = 0x30B7E8u;
label_30b7e8:
    // 0x30b7e8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x30b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_30b7ec:
    // 0x30b7ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_30b7f0:
    // 0x30b7f0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x30b7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_30b7f4:
    // 0x30b7f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b7f8:
    // 0x30b7f8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x30b7f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_30b7fc:
    // 0x30b7fc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x30b7fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_30b800:
    // 0x30b800: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x30b800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30b804:
    // 0x30b804: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x30b804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30b808:
    // 0x30b808: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30b808u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30b80c:
    // 0x30b80c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x30b80cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30b810:
    // 0x30b810: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x30b810u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30b814:
    // 0x30b814: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30b814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30b818:
    // 0x30b818: 0x3e00008  jr          $ra
label_30b81c:
    if (ctx->pc == 0x30B81Cu) {
        ctx->pc = 0x30B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B818u;
        // 0x30b81c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B820u;
        goto label_fallthrough_0x30b818;
    }
    ctx->pc = 0x30B818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B818u;
        // 0x30b81c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30b818:
    ctx->pc = 0x30B820u;
}
