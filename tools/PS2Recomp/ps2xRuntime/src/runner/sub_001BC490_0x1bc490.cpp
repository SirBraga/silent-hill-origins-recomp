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

// Function: sub_001BC490
// Address: 0x1bc490 - 0x1bc758
void sub_001BC490_0x1bc490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC490_0x1bc490");
#endif

    switch (ctx->pc) {
        case 0x1bc490u: goto label_1bc490;
        case 0x1bc494u: goto label_1bc494;
        case 0x1bc498u: goto label_1bc498;
        case 0x1bc49cu: goto label_1bc49c;
        case 0x1bc4a0u: goto label_1bc4a0;
        case 0x1bc4a4u: goto label_1bc4a4;
        case 0x1bc4a8u: goto label_1bc4a8;
        case 0x1bc4acu: goto label_1bc4ac;
        case 0x1bc4b0u: goto label_1bc4b0;
        case 0x1bc4b4u: goto label_1bc4b4;
        case 0x1bc4b8u: goto label_1bc4b8;
        case 0x1bc4bcu: goto label_1bc4bc;
        case 0x1bc4c0u: goto label_1bc4c0;
        case 0x1bc4c4u: goto label_1bc4c4;
        case 0x1bc4c8u: goto label_1bc4c8;
        case 0x1bc4ccu: goto label_1bc4cc;
        case 0x1bc4d0u: goto label_1bc4d0;
        case 0x1bc4d4u: goto label_1bc4d4;
        case 0x1bc4d8u: goto label_1bc4d8;
        case 0x1bc4dcu: goto label_1bc4dc;
        case 0x1bc4e0u: goto label_1bc4e0;
        case 0x1bc4e4u: goto label_1bc4e4;
        case 0x1bc4e8u: goto label_1bc4e8;
        case 0x1bc4ecu: goto label_1bc4ec;
        case 0x1bc4f0u: goto label_1bc4f0;
        case 0x1bc4f4u: goto label_1bc4f4;
        case 0x1bc4f8u: goto label_1bc4f8;
        case 0x1bc4fcu: goto label_1bc4fc;
        case 0x1bc500u: goto label_1bc500;
        case 0x1bc504u: goto label_1bc504;
        case 0x1bc508u: goto label_1bc508;
        case 0x1bc50cu: goto label_1bc50c;
        case 0x1bc510u: goto label_1bc510;
        case 0x1bc514u: goto label_1bc514;
        case 0x1bc518u: goto label_1bc518;
        case 0x1bc51cu: goto label_1bc51c;
        case 0x1bc520u: goto label_1bc520;
        case 0x1bc524u: goto label_1bc524;
        case 0x1bc528u: goto label_1bc528;
        case 0x1bc52cu: goto label_1bc52c;
        case 0x1bc530u: goto label_1bc530;
        case 0x1bc534u: goto label_1bc534;
        case 0x1bc538u: goto label_1bc538;
        case 0x1bc53cu: goto label_1bc53c;
        case 0x1bc540u: goto label_1bc540;
        case 0x1bc544u: goto label_1bc544;
        case 0x1bc548u: goto label_1bc548;
        case 0x1bc54cu: goto label_1bc54c;
        case 0x1bc550u: goto label_1bc550;
        case 0x1bc554u: goto label_1bc554;
        case 0x1bc558u: goto label_1bc558;
        case 0x1bc55cu: goto label_1bc55c;
        case 0x1bc560u: goto label_1bc560;
        case 0x1bc564u: goto label_1bc564;
        case 0x1bc568u: goto label_1bc568;
        case 0x1bc56cu: goto label_1bc56c;
        case 0x1bc570u: goto label_1bc570;
        case 0x1bc574u: goto label_1bc574;
        case 0x1bc578u: goto label_1bc578;
        case 0x1bc57cu: goto label_1bc57c;
        case 0x1bc580u: goto label_1bc580;
        case 0x1bc584u: goto label_1bc584;
        case 0x1bc588u: goto label_1bc588;
        case 0x1bc58cu: goto label_1bc58c;
        case 0x1bc590u: goto label_1bc590;
        case 0x1bc594u: goto label_1bc594;
        case 0x1bc598u: goto label_1bc598;
        case 0x1bc59cu: goto label_1bc59c;
        case 0x1bc5a0u: goto label_1bc5a0;
        case 0x1bc5a4u: goto label_1bc5a4;
        case 0x1bc5a8u: goto label_1bc5a8;
        case 0x1bc5acu: goto label_1bc5ac;
        case 0x1bc5b0u: goto label_1bc5b0;
        case 0x1bc5b4u: goto label_1bc5b4;
        case 0x1bc5b8u: goto label_1bc5b8;
        case 0x1bc5bcu: goto label_1bc5bc;
        case 0x1bc5c0u: goto label_1bc5c0;
        case 0x1bc5c4u: goto label_1bc5c4;
        case 0x1bc5c8u: goto label_1bc5c8;
        case 0x1bc5ccu: goto label_1bc5cc;
        case 0x1bc5d0u: goto label_1bc5d0;
        case 0x1bc5d4u: goto label_1bc5d4;
        case 0x1bc5d8u: goto label_1bc5d8;
        case 0x1bc5dcu: goto label_1bc5dc;
        case 0x1bc5e0u: goto label_1bc5e0;
        case 0x1bc5e4u: goto label_1bc5e4;
        case 0x1bc5e8u: goto label_1bc5e8;
        case 0x1bc5ecu: goto label_1bc5ec;
        case 0x1bc5f0u: goto label_1bc5f0;
        case 0x1bc5f4u: goto label_1bc5f4;
        case 0x1bc5f8u: goto label_1bc5f8;
        case 0x1bc5fcu: goto label_1bc5fc;
        case 0x1bc600u: goto label_1bc600;
        case 0x1bc604u: goto label_1bc604;
        case 0x1bc608u: goto label_1bc608;
        case 0x1bc60cu: goto label_1bc60c;
        case 0x1bc610u: goto label_1bc610;
        case 0x1bc614u: goto label_1bc614;
        case 0x1bc618u: goto label_1bc618;
        case 0x1bc61cu: goto label_1bc61c;
        case 0x1bc620u: goto label_1bc620;
        case 0x1bc624u: goto label_1bc624;
        case 0x1bc628u: goto label_1bc628;
        case 0x1bc62cu: goto label_1bc62c;
        case 0x1bc630u: goto label_1bc630;
        case 0x1bc634u: goto label_1bc634;
        case 0x1bc638u: goto label_1bc638;
        case 0x1bc63cu: goto label_1bc63c;
        case 0x1bc640u: goto label_1bc640;
        case 0x1bc644u: goto label_1bc644;
        case 0x1bc648u: goto label_1bc648;
        case 0x1bc64cu: goto label_1bc64c;
        case 0x1bc650u: goto label_1bc650;
        case 0x1bc654u: goto label_1bc654;
        case 0x1bc658u: goto label_1bc658;
        case 0x1bc65cu: goto label_1bc65c;
        case 0x1bc660u: goto label_1bc660;
        case 0x1bc664u: goto label_1bc664;
        case 0x1bc668u: goto label_1bc668;
        case 0x1bc66cu: goto label_1bc66c;
        case 0x1bc670u: goto label_1bc670;
        case 0x1bc674u: goto label_1bc674;
        case 0x1bc678u: goto label_1bc678;
        case 0x1bc67cu: goto label_1bc67c;
        case 0x1bc680u: goto label_1bc680;
        case 0x1bc684u: goto label_1bc684;
        case 0x1bc688u: goto label_1bc688;
        case 0x1bc68cu: goto label_1bc68c;
        case 0x1bc690u: goto label_1bc690;
        case 0x1bc694u: goto label_1bc694;
        case 0x1bc698u: goto label_1bc698;
        case 0x1bc69cu: goto label_1bc69c;
        case 0x1bc6a0u: goto label_1bc6a0;
        case 0x1bc6a4u: goto label_1bc6a4;
        case 0x1bc6a8u: goto label_1bc6a8;
        case 0x1bc6acu: goto label_1bc6ac;
        case 0x1bc6b0u: goto label_1bc6b0;
        case 0x1bc6b4u: goto label_1bc6b4;
        case 0x1bc6b8u: goto label_1bc6b8;
        case 0x1bc6bcu: goto label_1bc6bc;
        case 0x1bc6c0u: goto label_1bc6c0;
        case 0x1bc6c4u: goto label_1bc6c4;
        case 0x1bc6c8u: goto label_1bc6c8;
        case 0x1bc6ccu: goto label_1bc6cc;
        case 0x1bc6d0u: goto label_1bc6d0;
        case 0x1bc6d4u: goto label_1bc6d4;
        case 0x1bc6d8u: goto label_1bc6d8;
        case 0x1bc6dcu: goto label_1bc6dc;
        case 0x1bc6e0u: goto label_1bc6e0;
        case 0x1bc6e4u: goto label_1bc6e4;
        case 0x1bc6e8u: goto label_1bc6e8;
        case 0x1bc6ecu: goto label_1bc6ec;
        case 0x1bc6f0u: goto label_1bc6f0;
        case 0x1bc6f4u: goto label_1bc6f4;
        case 0x1bc6f8u: goto label_1bc6f8;
        case 0x1bc6fcu: goto label_1bc6fc;
        case 0x1bc700u: goto label_1bc700;
        case 0x1bc704u: goto label_1bc704;
        case 0x1bc708u: goto label_1bc708;
        case 0x1bc70cu: goto label_1bc70c;
        case 0x1bc710u: goto label_1bc710;
        case 0x1bc714u: goto label_1bc714;
        case 0x1bc718u: goto label_1bc718;
        case 0x1bc71cu: goto label_1bc71c;
        case 0x1bc720u: goto label_1bc720;
        case 0x1bc724u: goto label_1bc724;
        case 0x1bc728u: goto label_1bc728;
        case 0x1bc72cu: goto label_1bc72c;
        case 0x1bc730u: goto label_1bc730;
        case 0x1bc734u: goto label_1bc734;
        case 0x1bc738u: goto label_1bc738;
        case 0x1bc73cu: goto label_1bc73c;
        case 0x1bc740u: goto label_1bc740;
        case 0x1bc744u: goto label_1bc744;
        case 0x1bc748u: goto label_1bc748;
        case 0x1bc74cu: goto label_1bc74c;
        case 0x1bc750u: goto label_1bc750;
        case 0x1bc754u: goto label_1bc754;
        default: break;
    }

    ctx->pc = 0x1bc490u;

label_1bc490:
    // 0x1bc490: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1bc490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1bc494:
    // 0x1bc494: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1bc494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1bc498:
    // 0x1bc498: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1bc498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1bc49c:
    // 0x1bc49c: 0x8c4843b8  lw          $t0, 0x43B8($v0)
    ctx->pc = 0x1bc49cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17336)));
label_1bc4a0:
    // 0x1bc4a0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1bc4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1bc4a4:
    // 0x1bc4a4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1bc4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1bc4a8:
    // 0x1bc4a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc4a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc4ac:
    // 0x1bc4ac: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1bc4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1bc4b0:
    // 0x1bc4b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bc4b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bc4b4:
    // 0x1bc4b4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1bc4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1bc4b8:
    // 0x1bc4b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1bc4b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bc4bc:
    // 0x1bc4bc: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1bc4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_1bc4c0:
    // 0x1bc4c0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1bc4c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1bc4c4:
    // 0x1bc4c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bc4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bc4c8:
    // 0x1bc4c8: 0x11020007  beq         $t0, $v0, . + 4 + (0x7 << 2)
label_1bc4cc:
    if (ctx->pc == 0x1BC4CCu) {
        ctx->pc = 0x1BC4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC4C8u;
        // 0x1bc4cc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC4D0u;
        goto label_1bc4d0;
    }
    ctx->pc = 0x1BC4C8u;
    {
        const bool branch_taken_0x1bc4c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC4C8u;
        // 0x1bc4cc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc4c8) {
            ctx->pc = 0x1BC4E8u;
            goto label_1bc4e8;
        }
    }
    ctx->pc = 0x1BC4D0u;
label_1bc4d0:
    // 0x1bc4d0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1bc4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1bc4d4:
    // 0x1bc4d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bc4d8:
    if (ctx->pc == 0x1BC4D8u) {
        ctx->pc = 0x1BC4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC4D4u;
        // 0x1bc4d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC4DCu;
        goto label_1bc4dc;
    }
    ctx->pc = 0x1BC4D4u;
    {
        const bool branch_taken_0x1bc4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC4D4u;
        // 0x1bc4d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc4d4) {
            ctx->pc = 0x1BC4E8u;
            goto label_1bc4e8;
        }
    }
    ctx->pc = 0x1BC4DCu;
label_1bc4dc:
    // 0x1bc4dc: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x1bc4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
label_1bc4e0:
    // 0x1bc4e0: 0xc07fd18  jal         func_1FF460
label_1bc4e4:
    if (ctx->pc == 0x1BC4E4u) {
        ctx->pc = 0x1BC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC4E0u;
        // 0x1bc4e4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC4E8u;
        goto label_1bc4e8;
    }
    ctx->pc = 0x1BC4E0u;
    SET_GPR_U32(ctx, 31, 0x1BC4E8u);
    ctx->pc = 0x1BC4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC4E0u;
    // 0x1bc4e4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BC4E0u, 0x1BC4E8u)) {
        return;
    }
    ctx->pc = 0x1BC4E8u;
label_1bc4e8:
    // 0x1bc4e8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1bc4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1bc4ec:
    // 0x1bc4ec: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1bc4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1bc4f0:
    // 0x1bc4f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bc4f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc4f4:
    // 0x1bc4f4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1bc4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1bc4f8:
    // 0x1bc4f8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1bc4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1bc4fc:
    // 0x1bc4fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc500:
    // 0x1bc500: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1bc500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_1bc504:
    // 0x1bc504: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1bc504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1bc508:
    // 0x1bc508: 0xc0c493d  jal         func_3124F4
label_1bc50c:
    if (ctx->pc == 0x1BC50Cu) {
        ctx->pc = 0x1BC50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC508u;
        // 0x1bc50c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC510u;
        goto label_1bc510;
    }
    ctx->pc = 0x1BC508u;
    SET_GPR_U32(ctx, 31, 0x1BC510u);
    ctx->pc = 0x1BC50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC508u;
    // 0x1bc50c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BC508u, 0x1BC510u)) {
        return;
    }
    ctx->pc = 0x1BC510u;
label_1bc510:
    // 0x1bc510: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bc510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bc514:
    // 0x1bc514: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x1bc514u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bc518:
    // 0x1bc518: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1bc518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bc51c:
    // 0x1bc51c: 0x0  nop
    ctx->pc = 0x1bc51cu;
    // NOP
label_1bc520:
    // 0x1bc520: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1bc520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1bc524:
    // 0x1bc524: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1bc524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1bc528:
    // 0x1bc528: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1bc528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1bc52c:
    // 0x1bc52c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1bc52cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1bc530:
    // 0x1bc530: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
label_1bc534:
    if (ctx->pc == 0x1BC534u) {
        ctx->pc = 0x1BC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC530u;
        // 0x1bc534: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC538u;
        goto label_1bc538;
    }
    ctx->pc = 0x1BC530u;
    {
        const bool branch_taken_0x1bc530 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1BC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC530u;
        // 0x1bc534: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc530) {
            ctx->pc = 0x1BC520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc520;
        }
    }
    ctx->pc = 0x1BC538u;
label_1bc538:
    // 0x1bc538: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1bc538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1bc53c:
    // 0x1bc53c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1bc540:
    if (ctx->pc == 0x1BC540u) {
        ctx->pc = 0x1BC540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC53Cu;
        // 0x1bc540: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC544u;
        goto label_1bc544;
    }
    ctx->pc = 0x1BC53Cu;
    {
        const bool branch_taken_0x1bc53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC53Cu;
        // 0x1bc540: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc53c) {
            ctx->pc = 0x1BC570u;
            goto label_1bc570;
        }
    }
    ctx->pc = 0x1BC544u;
label_1bc544:
    // 0x1bc544: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1bc544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1bc548:
    // 0x1bc548: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1bc54c:
    if (ctx->pc == 0x1BC54Cu) {
        ctx->pc = 0x1BC550u;
        goto label_1bc550;
    }
    ctx->pc = 0x1BC548u;
    {
        const bool branch_taken_0x1bc548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc548) {
            ctx->pc = 0x1BC570u;
            goto label_1bc570;
        }
    }
    ctx->pc = 0x1BC550u;
label_1bc550:
    // 0x1bc550: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1bc554:
    if (ctx->pc == 0x1BC554u) {
        ctx->pc = 0x1BC554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC550u;
        // 0x1bc554: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC558u;
        goto label_1bc558;
    }
    ctx->pc = 0x1BC550u;
    {
        const bool branch_taken_0x1bc550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC550u;
        // 0x1bc554: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc550) {
            ctx->pc = 0x1BC578u;
            goto label_1bc578;
        }
    }
    ctx->pc = 0x1BC558u;
label_1bc558:
    // 0x1bc558: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1bc558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1bc55c:
    // 0x1bc55c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1bc560:
    if (ctx->pc == 0x1BC560u) {
        ctx->pc = 0x1BC564u;
        goto label_1bc564;
    }
    ctx->pc = 0x1BC55Cu;
    {
        const bool branch_taken_0x1bc55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc55c) {
            ctx->pc = 0x1BC570u;
            goto label_1bc570;
        }
    }
    ctx->pc = 0x1BC564u;
label_1bc564:
    // 0x1bc564: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1bc564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1bc568:
    // 0x1bc568: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_1bc56c:
    if (ctx->pc == 0x1BC56Cu) {
        ctx->pc = 0x1BC56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC568u;
        // 0x1bc56c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC570u;
        goto label_1bc570;
    }
    ctx->pc = 0x1BC568u;
    {
        const bool branch_taken_0x1bc568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC568u;
        // 0x1bc56c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc568) {
            ctx->pc = 0x1BC738u;
            goto label_1bc738;
        }
    }
    ctx->pc = 0x1BC570u;
label_1bc570:
    // 0x1bc570: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1bc574:
    if (ctx->pc == 0x1BC574u) {
        ctx->pc = 0x1BC574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC570u;
        // 0x1bc574: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC578u;
        goto label_1bc578;
    }
    ctx->pc = 0x1BC570u;
    {
        const bool branch_taken_0x1bc570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC570u;
        // 0x1bc574: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc570) {
            ctx->pc = 0x1BC588u;
            goto label_1bc588;
        }
    }
    ctx->pc = 0x1BC578u;
label_1bc578:
    // 0x1bc578: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bc578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc57c:
    // 0x1bc57c: 0xc063d94  jal         func_18F650
label_1bc580:
    if (ctx->pc == 0x1BC580u) {
        ctx->pc = 0x1BC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC57Cu;
        // 0x1bc580: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC584u;
        goto label_1bc584;
    }
    ctx->pc = 0x1BC57Cu;
    SET_GPR_U32(ctx, 31, 0x1BC584u);
    ctx->pc = 0x1BC580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC57Cu;
    // 0x1bc580: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18F650u, 0x1BC57Cu, 0x1BC584u)) {
        return;
    }
    ctx->pc = 0x1BC584u;
label_1bc584:
    // 0x1bc584: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1bc584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_1bc588:
    // 0x1bc588: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1bc588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1bc58c:
    // 0x1bc58c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1bc590:
    if (ctx->pc == 0x1BC590u) {
        ctx->pc = 0x1BC590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC58Cu;
        // 0x1bc590: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC594u;
        goto label_1bc594;
    }
    ctx->pc = 0x1BC58Cu;
    {
        const bool branch_taken_0x1bc58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC58Cu;
        // 0x1bc590: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc58c) {
            ctx->pc = 0x1BC5C8u;
            goto label_1bc5c8;
        }
    }
    ctx->pc = 0x1BC594u;
label_1bc594:
    // 0x1bc594: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1bc594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_1bc598:
    // 0x1bc598: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1bc59c:
    if (ctx->pc == 0x1BC59Cu) {
        ctx->pc = 0x1BC59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC598u;
        // 0x1bc59c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC5A0u;
        goto label_1bc5a0;
    }
    ctx->pc = 0x1BC598u;
    {
        const bool branch_taken_0x1bc598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BC59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC598u;
        // 0x1bc59c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc598) {
            ctx->pc = 0x1BC5B4u;
            goto label_1bc5b4;
        }
    }
    ctx->pc = 0x1BC5A0u;
label_1bc5a0:
    // 0x1bc5a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bc5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc5a4:
    // 0x1bc5a4: 0xc064452  jal         func_191148
label_1bc5a8:
    if (ctx->pc == 0x1BC5A8u) {
        ctx->pc = 0x1BC5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5A4u;
        // 0x1bc5a8: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC5ACu;
        goto label_1bc5ac;
    }
    ctx->pc = 0x1BC5A4u;
    SET_GPR_U32(ctx, 31, 0x1BC5ACu);
    ctx->pc = 0x1BC5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC5A4u;
    // 0x1bc5a8: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191148u, 0x1BC5A4u, 0x1BC5ACu)) {
        return;
    }
    ctx->pc = 0x1BC5ACu;
label_1bc5ac:
    // 0x1bc5ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_1bc5b0:
    if (ctx->pc == 0x1BC5B0u) {
        ctx->pc = 0x1BC5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5ACu;
        // 0x1bc5b0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC5B4u;
        goto label_1bc5b4;
    }
    ctx->pc = 0x1BC5ACu;
    {
        const bool branch_taken_0x1bc5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5ACu;
        // 0x1bc5b0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc5ac) {
            ctx->pc = 0x1BC5C8u;
            goto label_1bc5c8;
        }
    }
    ctx->pc = 0x1BC5B4u;
label_1bc5b4:
    // 0x1bc5b4: 0x8c448b2c  lw          $a0, -0x74D4($v0)
    ctx->pc = 0x1bc5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
label_1bc5b8:
    // 0x1bc5b8: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x1bc5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_1bc5bc:
    // 0x1bc5bc: 0x711826  xor         $v1, $v1, $s1
    ctx->pc = 0x1bc5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 17));
label_1bc5c0:
    // 0x1bc5c0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1bc5c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1bc5c4:
    // 0x1bc5c4: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1bc5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_1bc5c8:
    // 0x1bc5c8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1bc5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1bc5cc:
    // 0x1bc5cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1bc5d0:
    if (ctx->pc == 0x1BC5D0u) {
        ctx->pc = 0x1BC5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5CCu;
        // 0x1bc5d0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC5D4u;
        goto label_1bc5d4;
    }
    ctx->pc = 0x1BC5CCu;
    {
        const bool branch_taken_0x1bc5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5CCu;
        // 0x1bc5d0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc5cc) {
            ctx->pc = 0x1BC5DCu;
            goto label_1bc5dc;
        }
    }
    ctx->pc = 0x1BC5D4u;
label_1bc5d4:
    // 0x1bc5d4: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x1bc5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_1bc5d8:
    // 0x1bc5d8: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1bc5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_1bc5dc:
    // 0x1bc5dc: 0xae140038  sw          $s4, 0x38($s0)
    ctx->pc = 0x1bc5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
label_1bc5e0:
    // 0x1bc5e0: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1bc5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_1bc5e4:
    // 0x1bc5e4: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x1bc5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
label_1bc5e8:
    // 0x1bc5e8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1bc5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1bc5ec:
    // 0x1bc5ec: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1bc5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1bc5f0:
    // 0x1bc5f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc5f4:
    // 0x1bc5f4: 0x8ca210b0  lw          $v0, 0x10B0($a1)
    ctx->pc = 0x1bc5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4272)));
label_1bc5f8:
    // 0x1bc5f8: 0x40f809  jalr        $v0
label_1bc5fc:
    if (ctx->pc == 0x1BC5FCu) {
        ctx->pc = 0x1BC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5F8u;
        // 0x1bc5fc: 0x8c65932c  lw          $a1, -0x6CD4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC600u;
        goto label_1bc600;
    }
    ctx->pc = 0x1BC5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC600u);
        ctx->pc = 0x1BC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5F8u;
        // 0x1bc5fc: 0x8c65932c  lw          $a1, -0x6CD4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939436)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC5F8u, 0x1BC600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC600u;
label_1bc600:
    // 0x1bc600: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_1bc604:
    if (ctx->pc == 0x1BC604u) {
        ctx->pc = 0x1BC604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC600u;
        // 0x1bc604: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC608u;
        goto label_1bc608;
    }
    ctx->pc = 0x1BC600u;
    {
        const bool branch_taken_0x1bc600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc600) {
            ctx->pc = 0x1BC604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC600u;
            // 0x1bc604: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC638u;
            goto label_1bc638;
        }
    }
    ctx->pc = 0x1BC608u;
label_1bc608:
    // 0x1bc608: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bc608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bc60c:
    // 0x1bc60c: 0x8c438474  lw          $v1, -0x7B8C($v0)
    ctx->pc = 0x1bc60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935668)));
label_1bc610:
    // 0x1bc610: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1bc614:
    if (ctx->pc == 0x1BC614u) {
        ctx->pc = 0x1BC614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC610u;
        // 0x1bc614: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC618u;
        goto label_1bc618;
    }
    ctx->pc = 0x1BC610u;
    {
        const bool branch_taken_0x1bc610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC610u;
        // 0x1bc614: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc610) {
            ctx->pc = 0x1BC628u;
            goto label_1bc628;
        }
    }
    ctx->pc = 0x1BC618u;
label_1bc618:
    // 0x1bc618: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1bc618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1bc61c:
    // 0x1bc61c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bc620:
    // 0x1bc620: 0x8c628478  lw          $v0, -0x7B88($v1)
    ctx->pc = 0x1bc620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935672)));
label_1bc624:
    // 0x1bc624: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x1bc624u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_1bc628:
    // 0x1bc628: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_1bc62c:
    if (ctx->pc == 0x1BC62Cu) {
        ctx->pc = 0x1BC62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC628u;
        // 0x1bc62c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC630u;
        goto label_1bc630;
    }
    ctx->pc = 0x1BC628u;
    {
        const bool branch_taken_0x1bc628 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc628) {
            ctx->pc = 0x1BC62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC628u;
            // 0x1bc62c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC638u;
            goto label_1bc638;
        }
    }
    ctx->pc = 0x1BC630u;
label_1bc630:
    // 0x1bc630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc634:
    // 0x1bc634: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1bc634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1bc638:
    // 0x1bc638: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bc638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bc63c:
    // 0x1bc63c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bc63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc640:
    // 0x1bc640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc644:
    // 0x1bc644: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x1bc644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_1bc648:
    // 0x1bc648: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bc648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bc64c:
    // 0x1bc64c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1bc650:
    if (ctx->pc == 0x1BC650u) {
        ctx->pc = 0x1BC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC64Cu;
        // 0x1bc650: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC654u;
        goto label_1bc654;
    }
    ctx->pc = 0x1BC64Cu;
    {
        const bool branch_taken_0x1bc64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc64c) {
            ctx->pc = 0x1BC650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC64Cu;
            // 0x1bc650: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC664u;
            goto label_1bc664;
        }
    }
    ctx->pc = 0x1BC654u;
label_1bc654:
    // 0x1bc654: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1bc654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1bc658:
    // 0x1bc658: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1bc658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1bc65c:
    // 0x1bc65c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1bc65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1bc660:
    // 0x1bc660: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1bc660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1bc664:
    // 0x1bc664: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x1bc664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
label_1bc668:
    // 0x1bc668: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1bc66c:
    if (ctx->pc == 0x1BC66Cu) {
        ctx->pc = 0x1BC66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC668u;
        // 0x1bc66c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC670u;
        goto label_1bc670;
    }
    ctx->pc = 0x1BC668u;
    {
        const bool branch_taken_0x1bc668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC668u;
        // 0x1bc66c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc668) {
            ctx->pc = 0x1BC648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc648;
        }
    }
    ctx->pc = 0x1BC670u;
label_1bc670:
    // 0x1bc670: 0xae060030  sw          $a2, 0x30($s0)
    ctx->pc = 0x1bc670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 6));
label_1bc674:
    // 0x1bc674: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1bc674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1bc678:
    // 0x1bc678: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1bc678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1bc67c:
    // 0x1bc67c: 0xc085ba8  jal         func_216EA0
label_1bc680:
    if (ctx->pc == 0x1BC680u) {
        ctx->pc = 0x1BC680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC67Cu;
        // 0x1bc680: 0x8c640144  lw          $a0, 0x144($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC684u;
        goto label_1bc684;
    }
    ctx->pc = 0x1BC67Cu;
    SET_GPR_U32(ctx, 31, 0x1BC684u);
    ctx->pc = 0x1BC680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC67Cu;
    // 0x1bc680: 0x8c640144  lw          $a0, 0x144($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1BC67Cu, 0x1BC684u)) {
        return;
    }
    ctx->pc = 0x1BC684u;
label_1bc684:
    // 0x1bc684: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1bc684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_1bc688:
    // 0x1bc688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc68c:
    // 0x1bc68c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bc68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bc690:
    // 0x1bc690: 0xc07cd92  jal         func_1F3648
label_1bc694:
    if (ctx->pc == 0x1BC694u) {
        ctx->pc = 0x1BC694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC690u;
        // 0x1bc694: 0x8c4492f8  lw          $a0, -0x6D08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC698u;
        goto label_1bc698;
    }
    ctx->pc = 0x1BC690u;
    SET_GPR_U32(ctx, 31, 0x1BC698u);
    ctx->pc = 0x1BC694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC690u;
    // 0x1bc694: 0x8c4492f8  lw          $a0, -0x6D08($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1BC690u, 0x1BC698u)) {
        return;
    }
    ctx->pc = 0x1BC698u;
label_1bc698:
    // 0x1bc698: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1bc698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_1bc69c:
    // 0x1bc69c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc6a0:
    // 0x1bc6a0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bc6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bc6a4:
    // 0x1bc6a4: 0xc07cd92  jal         func_1F3648
label_1bc6a8:
    if (ctx->pc == 0x1BC6A8u) {
        ctx->pc = 0x1BC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6A4u;
        // 0x1bc6a8: 0x8c4492fc  lw          $a0, -0x6D04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC6ACu;
        goto label_1bc6ac;
    }
    ctx->pc = 0x1BC6A4u;
    SET_GPR_U32(ctx, 31, 0x1BC6ACu);
    ctx->pc = 0x1BC6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC6A4u;
    // 0x1bc6a8: 0x8c4492fc  lw          $a0, -0x6D04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1BC6A4u, 0x1BC6ACu)) {
        return;
    }
    ctx->pc = 0x1BC6ACu;
label_1bc6ac:
    // 0x1bc6ac: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1bc6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_1bc6b0:
    // 0x1bc6b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc6b4:
    // 0x1bc6b4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bc6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bc6b8:
    // 0x1bc6b8: 0xc07cd92  jal         func_1F3648
label_1bc6bc:
    if (ctx->pc == 0x1BC6BCu) {
        ctx->pc = 0x1BC6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6B8u;
        // 0x1bc6bc: 0x8c449300  lw          $a0, -0x6D00($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC6C0u;
        goto label_1bc6c0;
    }
    ctx->pc = 0x1BC6B8u;
    SET_GPR_U32(ctx, 31, 0x1BC6C0u);
    ctx->pc = 0x1BC6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC6B8u;
    // 0x1bc6bc: 0x8c449300  lw          $a0, -0x6D00($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1BC6B8u, 0x1BC6C0u)) {
        return;
    }
    ctx->pc = 0x1BC6C0u;
label_1bc6c0:
    // 0x1bc6c0: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1bc6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_1bc6c4:
    // 0x1bc6c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc6c8:
    // 0x1bc6c8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bc6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bc6cc:
    // 0x1bc6cc: 0xc07cd92  jal         func_1F3648
label_1bc6d0:
    if (ctx->pc == 0x1BC6D0u) {
        ctx->pc = 0x1BC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6CCu;
        // 0x1bc6d0: 0x8c449304  lw          $a0, -0x6CFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939396)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC6D4u;
        goto label_1bc6d4;
    }
    ctx->pc = 0x1BC6CCu;
    SET_GPR_U32(ctx, 31, 0x1BC6D4u);
    ctx->pc = 0x1BC6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC6CCu;
    // 0x1bc6d0: 0x8c449304  lw          $a0, -0x6CFC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1BC6CCu, 0x1BC6D4u)) {
        return;
    }
    ctx->pc = 0x1BC6D4u;
label_1bc6d4:
    // 0x1bc6d4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1bc6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_1bc6d8:
    // 0x1bc6d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc6dc:
    // 0x1bc6dc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bc6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bc6e0:
    // 0x1bc6e0: 0xc07cd92  jal         func_1F3648
label_1bc6e4:
    if (ctx->pc == 0x1BC6E4u) {
        ctx->pc = 0x1BC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6E0u;
        // 0x1bc6e4: 0x8c449308  lw          $a0, -0x6CF8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC6E8u;
        goto label_1bc6e8;
    }
    ctx->pc = 0x1BC6E0u;
    SET_GPR_U32(ctx, 31, 0x1BC6E8u);
    ctx->pc = 0x1BC6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC6E0u;
    // 0x1bc6e4: 0x8c449308  lw          $a0, -0x6CF8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1BC6E0u, 0x1BC6E8u)) {
        return;
    }
    ctx->pc = 0x1BC6E8u;
label_1bc6e8:
    // 0x1bc6e8: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1bc6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_1bc6ec:
    // 0x1bc6ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc6f0:
    // 0x1bc6f0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bc6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bc6f4:
    // 0x1bc6f4: 0xc07cd92  jal         func_1F3648
label_1bc6f8:
    if (ctx->pc == 0x1BC6F8u) {
        ctx->pc = 0x1BC6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6F4u;
        // 0x1bc6f8: 0x8c44930c  lw          $a0, -0x6CF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939404)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC6FCu;
        goto label_1bc6fc;
    }
    ctx->pc = 0x1BC6F4u;
    SET_GPR_U32(ctx, 31, 0x1BC6FCu);
    ctx->pc = 0x1BC6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC6F4u;
    // 0x1bc6f8: 0x8c44930c  lw          $a0, -0x6CF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1BC6F4u, 0x1BC6FCu)) {
        return;
    }
    ctx->pc = 0x1BC6FCu;
label_1bc6fc:
    // 0x1bc6fc: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1bc6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_1bc700:
    // 0x1bc700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc704:
    // 0x1bc704: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bc704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bc708:
    // 0x1bc708: 0xc07cd92  jal         func_1F3648
label_1bc70c:
    if (ctx->pc == 0x1BC70Cu) {
        ctx->pc = 0x1BC70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC708u;
        // 0x1bc70c: 0x8c449310  lw          $a0, -0x6CF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC710u;
        goto label_1bc710;
    }
    ctx->pc = 0x1BC708u;
    SET_GPR_U32(ctx, 31, 0x1BC710u);
    ctx->pc = 0x1BC70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC708u;
    // 0x1bc70c: 0x8c449310  lw          $a0, -0x6CF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1BC708u, 0x1BC710u)) {
        return;
    }
    ctx->pc = 0x1BC710u;
label_1bc710:
    // 0x1bc710: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1bc710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_1bc714:
    // 0x1bc714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc718:
    // 0x1bc718: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bc718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bc71c:
    // 0x1bc71c: 0xc07cd92  jal         func_1F3648
label_1bc720:
    if (ctx->pc == 0x1BC720u) {
        ctx->pc = 0x1BC720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC71Cu;
        // 0x1bc720: 0x8c449314  lw          $a0, -0x6CEC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC724u;
        goto label_1bc724;
    }
    ctx->pc = 0x1BC71Cu;
    SET_GPR_U32(ctx, 31, 0x1BC724u);
    ctx->pc = 0x1BC720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC71Cu;
    // 0x1bc720: 0x8c449314  lw          $a0, -0x6CEC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1BC71Cu, 0x1BC724u)) {
        return;
    }
    ctx->pc = 0x1BC724u;
label_1bc724:
    // 0x1bc724: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x1bc724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_1bc728:
    // 0x1bc728: 0xc06f968  jal         func_1BE5A0
label_1bc72c:
    if (ctx->pc == 0x1BC72Cu) {
        ctx->pc = 0x1BC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC728u;
        // 0x1bc72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC730u;
        goto label_1bc730;
    }
    ctx->pc = 0x1BC728u;
    SET_GPR_U32(ctx, 31, 0x1BC730u);
    ctx->pc = 0x1BC72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC728u;
    // 0x1bc72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE5A0u, 0x1BC728u, 0x1BC730u)) {
        return;
    }
    ctx->pc = 0x1BC730u;
label_1bc730:
    // 0x1bc730: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1bc730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1bc734:
    // 0x1bc734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc738:
    // 0x1bc738: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1bc738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bc73c:
    // 0x1bc73c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1bc73cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bc740:
    // 0x1bc740: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1bc740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bc744:
    // 0x1bc744: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bc744u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bc748:
    // 0x1bc748: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1bc748u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bc74c:
    // 0x1bc74c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bc750:
    // 0x1bc750: 0x3e00008  jr          $ra
label_1bc754:
    if (ctx->pc == 0x1BC754u) {
        ctx->pc = 0x1BC754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC750u;
        // 0x1bc754: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC758u;
        goto label_fallthrough_0x1bc750;
    }
    ctx->pc = 0x1BC750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC750u;
        // 0x1bc754: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bc750:
    ctx->pc = 0x1BC758u;
}
