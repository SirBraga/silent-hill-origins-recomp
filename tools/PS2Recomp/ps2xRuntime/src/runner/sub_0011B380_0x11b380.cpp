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

// Function: sub_0011B380
// Address: 0x11b380 - 0x11b768
void sub_0011B380_0x11b380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B380_0x11b380");
#endif

    switch (ctx->pc) {
        case 0x11b380u: goto label_11b380;
        case 0x11b384u: goto label_11b384;
        case 0x11b388u: goto label_11b388;
        case 0x11b38cu: goto label_11b38c;
        case 0x11b390u: goto label_11b390;
        case 0x11b394u: goto label_11b394;
        case 0x11b398u: goto label_11b398;
        case 0x11b39cu: goto label_11b39c;
        case 0x11b3a0u: goto label_11b3a0;
        case 0x11b3a4u: goto label_11b3a4;
        case 0x11b3a8u: goto label_11b3a8;
        case 0x11b3acu: goto label_11b3ac;
        case 0x11b3b0u: goto label_11b3b0;
        case 0x11b3b4u: goto label_11b3b4;
        case 0x11b3b8u: goto label_11b3b8;
        case 0x11b3bcu: goto label_11b3bc;
        case 0x11b3c0u: goto label_11b3c0;
        case 0x11b3c4u: goto label_11b3c4;
        case 0x11b3c8u: goto label_11b3c8;
        case 0x11b3ccu: goto label_11b3cc;
        case 0x11b3d0u: goto label_11b3d0;
        case 0x11b3d4u: goto label_11b3d4;
        case 0x11b3d8u: goto label_11b3d8;
        case 0x11b3dcu: goto label_11b3dc;
        case 0x11b3e0u: goto label_11b3e0;
        case 0x11b3e4u: goto label_11b3e4;
        case 0x11b3e8u: goto label_11b3e8;
        case 0x11b3ecu: goto label_11b3ec;
        case 0x11b3f0u: goto label_11b3f0;
        case 0x11b3f4u: goto label_11b3f4;
        case 0x11b3f8u: goto label_11b3f8;
        case 0x11b3fcu: goto label_11b3fc;
        case 0x11b400u: goto label_11b400;
        case 0x11b404u: goto label_11b404;
        case 0x11b408u: goto label_11b408;
        case 0x11b40cu: goto label_11b40c;
        case 0x11b410u: goto label_11b410;
        case 0x11b414u: goto label_11b414;
        case 0x11b418u: goto label_11b418;
        case 0x11b41cu: goto label_11b41c;
        case 0x11b420u: goto label_11b420;
        case 0x11b424u: goto label_11b424;
        case 0x11b428u: goto label_11b428;
        case 0x11b42cu: goto label_11b42c;
        case 0x11b430u: goto label_11b430;
        case 0x11b434u: goto label_11b434;
        case 0x11b438u: goto label_11b438;
        case 0x11b43cu: goto label_11b43c;
        case 0x11b440u: goto label_11b440;
        case 0x11b444u: goto label_11b444;
        case 0x11b448u: goto label_11b448;
        case 0x11b44cu: goto label_11b44c;
        case 0x11b450u: goto label_11b450;
        case 0x11b454u: goto label_11b454;
        case 0x11b458u: goto label_11b458;
        case 0x11b45cu: goto label_11b45c;
        case 0x11b460u: goto label_11b460;
        case 0x11b464u: goto label_11b464;
        case 0x11b468u: goto label_11b468;
        case 0x11b46cu: goto label_11b46c;
        case 0x11b470u: goto label_11b470;
        case 0x11b474u: goto label_11b474;
        case 0x11b478u: goto label_11b478;
        case 0x11b47cu: goto label_11b47c;
        case 0x11b480u: goto label_11b480;
        case 0x11b484u: goto label_11b484;
        case 0x11b488u: goto label_11b488;
        case 0x11b48cu: goto label_11b48c;
        case 0x11b490u: goto label_11b490;
        case 0x11b494u: goto label_11b494;
        case 0x11b498u: goto label_11b498;
        case 0x11b49cu: goto label_11b49c;
        case 0x11b4a0u: goto label_11b4a0;
        case 0x11b4a4u: goto label_11b4a4;
        case 0x11b4a8u: goto label_11b4a8;
        case 0x11b4acu: goto label_11b4ac;
        case 0x11b4b0u: goto label_11b4b0;
        case 0x11b4b4u: goto label_11b4b4;
        case 0x11b4b8u: goto label_11b4b8;
        case 0x11b4bcu: goto label_11b4bc;
        case 0x11b4c0u: goto label_11b4c0;
        case 0x11b4c4u: goto label_11b4c4;
        case 0x11b4c8u: goto label_11b4c8;
        case 0x11b4ccu: goto label_11b4cc;
        case 0x11b4d0u: goto label_11b4d0;
        case 0x11b4d4u: goto label_11b4d4;
        case 0x11b4d8u: goto label_11b4d8;
        case 0x11b4dcu: goto label_11b4dc;
        case 0x11b4e0u: goto label_11b4e0;
        case 0x11b4e4u: goto label_11b4e4;
        case 0x11b4e8u: goto label_11b4e8;
        case 0x11b4ecu: goto label_11b4ec;
        case 0x11b4f0u: goto label_11b4f0;
        case 0x11b4f4u: goto label_11b4f4;
        case 0x11b4f8u: goto label_11b4f8;
        case 0x11b4fcu: goto label_11b4fc;
        case 0x11b500u: goto label_11b500;
        case 0x11b504u: goto label_11b504;
        case 0x11b508u: goto label_11b508;
        case 0x11b50cu: goto label_11b50c;
        case 0x11b510u: goto label_11b510;
        case 0x11b514u: goto label_11b514;
        case 0x11b518u: goto label_11b518;
        case 0x11b51cu: goto label_11b51c;
        case 0x11b520u: goto label_11b520;
        case 0x11b524u: goto label_11b524;
        case 0x11b528u: goto label_11b528;
        case 0x11b52cu: goto label_11b52c;
        case 0x11b530u: goto label_11b530;
        case 0x11b534u: goto label_11b534;
        case 0x11b538u: goto label_11b538;
        case 0x11b53cu: goto label_11b53c;
        case 0x11b540u: goto label_11b540;
        case 0x11b544u: goto label_11b544;
        case 0x11b548u: goto label_11b548;
        case 0x11b54cu: goto label_11b54c;
        case 0x11b550u: goto label_11b550;
        case 0x11b554u: goto label_11b554;
        case 0x11b558u: goto label_11b558;
        case 0x11b55cu: goto label_11b55c;
        case 0x11b560u: goto label_11b560;
        case 0x11b564u: goto label_11b564;
        case 0x11b568u: goto label_11b568;
        case 0x11b56cu: goto label_11b56c;
        case 0x11b570u: goto label_11b570;
        case 0x11b574u: goto label_11b574;
        case 0x11b578u: goto label_11b578;
        case 0x11b57cu: goto label_11b57c;
        case 0x11b580u: goto label_11b580;
        case 0x11b584u: goto label_11b584;
        case 0x11b588u: goto label_11b588;
        case 0x11b58cu: goto label_11b58c;
        case 0x11b590u: goto label_11b590;
        case 0x11b594u: goto label_11b594;
        case 0x11b598u: goto label_11b598;
        case 0x11b59cu: goto label_11b59c;
        case 0x11b5a0u: goto label_11b5a0;
        case 0x11b5a4u: goto label_11b5a4;
        case 0x11b5a8u: goto label_11b5a8;
        case 0x11b5acu: goto label_11b5ac;
        case 0x11b5b0u: goto label_11b5b0;
        case 0x11b5b4u: goto label_11b5b4;
        case 0x11b5b8u: goto label_11b5b8;
        case 0x11b5bcu: goto label_11b5bc;
        case 0x11b5c0u: goto label_11b5c0;
        case 0x11b5c4u: goto label_11b5c4;
        case 0x11b5c8u: goto label_11b5c8;
        case 0x11b5ccu: goto label_11b5cc;
        case 0x11b5d0u: goto label_11b5d0;
        case 0x11b5d4u: goto label_11b5d4;
        case 0x11b5d8u: goto label_11b5d8;
        case 0x11b5dcu: goto label_11b5dc;
        case 0x11b5e0u: goto label_11b5e0;
        case 0x11b5e4u: goto label_11b5e4;
        case 0x11b5e8u: goto label_11b5e8;
        case 0x11b5ecu: goto label_11b5ec;
        case 0x11b5f0u: goto label_11b5f0;
        case 0x11b5f4u: goto label_11b5f4;
        case 0x11b5f8u: goto label_11b5f8;
        case 0x11b5fcu: goto label_11b5fc;
        case 0x11b600u: goto label_11b600;
        case 0x11b604u: goto label_11b604;
        case 0x11b608u: goto label_11b608;
        case 0x11b60cu: goto label_11b60c;
        case 0x11b610u: goto label_11b610;
        case 0x11b614u: goto label_11b614;
        case 0x11b618u: goto label_11b618;
        case 0x11b61cu: goto label_11b61c;
        case 0x11b620u: goto label_11b620;
        case 0x11b624u: goto label_11b624;
        case 0x11b628u: goto label_11b628;
        case 0x11b62cu: goto label_11b62c;
        case 0x11b630u: goto label_11b630;
        case 0x11b634u: goto label_11b634;
        case 0x11b638u: goto label_11b638;
        case 0x11b63cu: goto label_11b63c;
        case 0x11b640u: goto label_11b640;
        case 0x11b644u: goto label_11b644;
        case 0x11b648u: goto label_11b648;
        case 0x11b64cu: goto label_11b64c;
        case 0x11b650u: goto label_11b650;
        case 0x11b654u: goto label_11b654;
        case 0x11b658u: goto label_11b658;
        case 0x11b65cu: goto label_11b65c;
        case 0x11b660u: goto label_11b660;
        case 0x11b664u: goto label_11b664;
        case 0x11b668u: goto label_11b668;
        case 0x11b66cu: goto label_11b66c;
        case 0x11b670u: goto label_11b670;
        case 0x11b674u: goto label_11b674;
        case 0x11b678u: goto label_11b678;
        case 0x11b67cu: goto label_11b67c;
        case 0x11b680u: goto label_11b680;
        case 0x11b684u: goto label_11b684;
        case 0x11b688u: goto label_11b688;
        case 0x11b68cu: goto label_11b68c;
        case 0x11b690u: goto label_11b690;
        case 0x11b694u: goto label_11b694;
        case 0x11b698u: goto label_11b698;
        case 0x11b69cu: goto label_11b69c;
        case 0x11b6a0u: goto label_11b6a0;
        case 0x11b6a4u: goto label_11b6a4;
        case 0x11b6a8u: goto label_11b6a8;
        case 0x11b6acu: goto label_11b6ac;
        case 0x11b6b0u: goto label_11b6b0;
        case 0x11b6b4u: goto label_11b6b4;
        case 0x11b6b8u: goto label_11b6b8;
        case 0x11b6bcu: goto label_11b6bc;
        case 0x11b6c0u: goto label_11b6c0;
        case 0x11b6c4u: goto label_11b6c4;
        case 0x11b6c8u: goto label_11b6c8;
        case 0x11b6ccu: goto label_11b6cc;
        case 0x11b6d0u: goto label_11b6d0;
        case 0x11b6d4u: goto label_11b6d4;
        case 0x11b6d8u: goto label_11b6d8;
        case 0x11b6dcu: goto label_11b6dc;
        case 0x11b6e0u: goto label_11b6e0;
        case 0x11b6e4u: goto label_11b6e4;
        case 0x11b6e8u: goto label_11b6e8;
        case 0x11b6ecu: goto label_11b6ec;
        case 0x11b6f0u: goto label_11b6f0;
        case 0x11b6f4u: goto label_11b6f4;
        case 0x11b6f8u: goto label_11b6f8;
        case 0x11b6fcu: goto label_11b6fc;
        case 0x11b700u: goto label_11b700;
        case 0x11b704u: goto label_11b704;
        case 0x11b708u: goto label_11b708;
        case 0x11b70cu: goto label_11b70c;
        case 0x11b710u: goto label_11b710;
        case 0x11b714u: goto label_11b714;
        case 0x11b718u: goto label_11b718;
        case 0x11b71cu: goto label_11b71c;
        case 0x11b720u: goto label_11b720;
        case 0x11b724u: goto label_11b724;
        case 0x11b728u: goto label_11b728;
        case 0x11b72cu: goto label_11b72c;
        case 0x11b730u: goto label_11b730;
        case 0x11b734u: goto label_11b734;
        case 0x11b738u: goto label_11b738;
        case 0x11b73cu: goto label_11b73c;
        case 0x11b740u: goto label_11b740;
        case 0x11b744u: goto label_11b744;
        case 0x11b748u: goto label_11b748;
        case 0x11b74cu: goto label_11b74c;
        case 0x11b750u: goto label_11b750;
        case 0x11b754u: goto label_11b754;
        case 0x11b758u: goto label_11b758;
        case 0x11b75cu: goto label_11b75c;
        case 0x11b760u: goto label_11b760;
        case 0x11b764u: goto label_11b764;
        default: break;
    }

    ctx->pc = 0x11b380u;

label_11b380:
    // 0x11b380: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x11b380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_11b384:
    // 0x11b384: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x11b384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_11b388:
    // 0x11b388: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x11b388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_11b38c:
    // 0x11b38c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11b38cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11b390:
    // 0x11b390: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x11b390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_11b394:
    // 0x11b394: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x11b394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_11b398:
    // 0x11b398: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x11b398u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_11b39c:
    // 0x11b39c: 0xae4500a8  sw          $a1, 0xA8($s2)
    ctx->pc = 0x11b39cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 5));
label_11b3a0:
    // 0x11b3a0: 0xae4000ac  sw          $zero, 0xAC($s2)
    ctx->pc = 0x11b3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
label_11b3a4:
    // 0x11b3a4: 0xae4000b0  sw          $zero, 0xB0($s2)
    ctx->pc = 0x11b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
label_11b3a8:
    // 0x11b3a8: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x11b3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
label_11b3ac:
    // 0x11b3ac: 0xae4000b8  sw          $zero, 0xB8($s2)
    ctx->pc = 0x11b3acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 0));
label_11b3b0:
    // 0x11b3b0: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x11b3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_11b3b4:
    // 0x11b3b4: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x11b3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
label_11b3b8:
    // 0x11b3b8: 0xae4000c4  sw          $zero, 0xC4($s2)
    ctx->pc = 0x11b3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
label_11b3bc:
    // 0x11b3bc: 0xae4000c8  sw          $zero, 0xC8($s2)
    ctx->pc = 0x11b3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
label_11b3c0:
    // 0x11b3c0: 0xae4000cc  sw          $zero, 0xCC($s2)
    ctx->pc = 0x11b3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 0));
label_11b3c4:
    // 0x11b3c4: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x11b3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
label_11b3c8:
    // 0x11b3c8: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x11b3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
label_11b3cc:
    // 0x11b3cc: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x11b3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
label_11b3d0:
    // 0x11b3d0: 0xae4000dc  sw          $zero, 0xDC($s2)
    ctx->pc = 0x11b3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
label_11b3d4:
    // 0x11b3d4: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x11b3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
label_11b3d8:
    // 0x11b3d8: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x11b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
label_11b3dc:
    // 0x11b3dc: 0xae4000e8  sw          $zero, 0xE8($s2)
    ctx->pc = 0x11b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 0));
label_11b3e0:
    // 0x11b3e0: 0x10a000d9  beqz        $a1, . + 4 + (0xD9 << 2)
label_11b3e4:
    if (ctx->pc == 0x11B3E4u) {
        ctx->pc = 0x11B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3E0u;
        // 0x11b3e4: 0xae4000ec  sw          $zero, 0xEC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B3E8u;
        goto label_11b3e8;
    }
    ctx->pc = 0x11B3E0u;
    {
        const bool branch_taken_0x11b3e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3E0u;
        // 0x11b3e4: 0xae4000ec  sw          $zero, 0xEC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3e0) {
            ctx->pc = 0x11B748u;
            goto label_11b748;
        }
    }
    ctx->pc = 0x11B3E8u;
label_11b3e8:
    // 0x11b3e8: 0xc4a0005c  lwc1        $f0, 0x5C($a1)
    ctx->pc = 0x11b3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b3ec:
    // 0x11b3ec: 0xe64000b0  swc1        $f0, 0xB0($s2)
    ctx->pc = 0x11b3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 176), bits); }
label_11b3f0:
    // 0x11b3f0: 0xc0446c6  jal         func_111B18
label_11b3f4:
    if (ctx->pc == 0x11B3F4u) {
        ctx->pc = 0x11B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3F0u;
        // 0x11b3f4: 0xc4ac0064  lwc1        $f12, 0x64($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B3F8u;
        goto label_11b3f8;
    }
    ctx->pc = 0x11B3F0u;
    SET_GPR_U32(ctx, 31, 0x11B3F8u);
    ctx->pc = 0x11B3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B3F0u;
    // 0x11b3f4: 0xc4ac0064  lwc1        $f12, 0x64($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111B18u, 0x11B3F0u, 0x11B3F8u)) {
        return;
    }
    ctx->pc = 0x11B3F8u;
label_11b3f8:
    // 0x11b3f8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x11b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_11b3fc:
    // 0x11b3fc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_11b400:
    if (ctx->pc == 0x11B400u) {
        ctx->pc = 0x11B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3FCu;
        // 0x11b400: 0x8e4200a8  lw          $v0, 0xA8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B404u;
        goto label_11b404;
    }
    ctx->pc = 0x11B3FCu;
    {
        const bool branch_taken_0x11b3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3FCu;
        // 0x11b400: 0x8e4200a8  lw          $v0, 0xA8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3fc) {
            ctx->pc = 0x11B428u;
            goto label_11b428;
        }
    }
    ctx->pc = 0x11B404u;
label_11b404:
    // 0x11b404: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x11b404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_11b408:
    // 0x11b408: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x11b408u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_11b40c:
    // 0x11b40c: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x11b40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_11b410:
    // 0x11b410: 0x8c66003c  lw          $a2, 0x3C($v1)
    ctx->pc = 0x11b410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_11b414:
    // 0x11b414: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x11b414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_11b418:
    // 0x11b418: 0xc0f809  jalr        $a2
label_11b41c:
    if (ctx->pc == 0x11B41Cu) {
        ctx->pc = 0x11B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B418u;
        // 0x11b41c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B420u;
        goto label_11b420;
    }
    ctx->pc = 0x11B418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x11B420u);
        ctx->pc = 0x11B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B418u;
        // 0x11b41c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B418u, 0x11B420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B420u;
label_11b420:
    // 0x11b420: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x11b420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_11b424:
    // 0x11b424: 0x0  nop
    ctx->pc = 0x11b424u;
    // NOP
label_11b428:
    // 0x11b428: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x11b428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_11b42c:
    // 0x11b42c: 0x108000bd  beqz        $a0, . + 4 + (0xBD << 2)
label_11b430:
    if (ctx->pc == 0x11B430u) {
        ctx->pc = 0x11B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B42Cu;
        // 0x11b430: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B434u;
        goto label_11b434;
    }
    ctx->pc = 0x11B42Cu;
    {
        const bool branch_taken_0x11b42c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B42Cu;
        // 0x11b430: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b42c) {
            ctx->pc = 0x11B724u;
            goto label_11b724;
        }
    }
    ctx->pc = 0x11B434u;
label_11b434:
    // 0x11b434: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11b434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_11b438:
    // 0x11b438: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x11b438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
label_11b43c:
    // 0x11b43c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_11b440:
    if (ctx->pc == 0x11B440u) {
        ctx->pc = 0x11B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B43Cu;
        // 0x11b440: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B444u;
        goto label_11b444;
    }
    ctx->pc = 0x11B43Cu;
    {
        const bool branch_taken_0x11b43c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x11B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B43Cu;
        // 0x11b440: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b43c) {
            ctx->pc = 0x11B458u;
            goto label_11b458;
        }
    }
    ctx->pc = 0x11B444u;
label_11b444:
    // 0x11b444: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11b448:
    // 0x11b448: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_11b44c:
    if (ctx->pc == 0x11B44Cu) {
        ctx->pc = 0x11B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B448u;
        // 0x11b44c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B450u;
        goto label_11b450;
    }
    ctx->pc = 0x11B448u;
    {
        const bool branch_taken_0x11b448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B448u;
        // 0x11b44c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b448) {
            ctx->pc = 0x11B45Cu;
            goto label_11b45c;
        }
    }
    ctx->pc = 0x11B450u;
label_11b450:
    // 0x11b450: 0xc07fd18  jal         func_1FF460
label_11b454:
    if (ctx->pc == 0x11B454u) {
        ctx->pc = 0x11B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B450u;
        // 0x11b454: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B458u;
        goto label_11b458;
    }
    ctx->pc = 0x11B450u;
    SET_GPR_U32(ctx, 31, 0x11B458u);
    ctx->pc = 0x11B454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B450u;
    // 0x11b454: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x11B450u, 0x11B458u)) {
        return;
    }
    ctx->pc = 0x11B458u;
label_11b458:
    // 0x11b458: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x11b458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_11b45c:
    // 0x11b45c: 0x108000b1  beqz        $a0, . + 4 + (0xB1 << 2)
label_11b460:
    if (ctx->pc == 0x11B460u) {
        ctx->pc = 0x11B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B45Cu;
        // 0x11b460: 0xae4400ac  sw          $a0, 0xAC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B464u;
        goto label_11b464;
    }
    ctx->pc = 0x11B45Cu;
    {
        const bool branch_taken_0x11b45c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B45Cu;
        // 0x11b460: 0xae4400ac  sw          $a0, 0xAC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b45c) {
            ctx->pc = 0x11B724u;
            goto label_11b724;
        }
    }
    ctx->pc = 0x11B464u;
label_11b464:
    // 0x11b464: 0xc04f0cc  jal         func_13C330
label_11b468:
    if (ctx->pc == 0x11B468u) {
        ctx->pc = 0x11B46Cu;
        goto label_11b46c;
    }
    ctx->pc = 0x11B464u;
    SET_GPR_U32(ctx, 31, 0x11B46Cu);
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x11B464u, 0x11B46Cu)) {
        return;
    }
    ctx->pc = 0x11B46Cu;
label_11b46c:
    // 0x11b46c: 0x8e4400a8  lw          $a0, 0xA8($s2)
    ctx->pc = 0x11b46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_11b470:
    // 0x11b470: 0xc04f0cc  jal         func_13C330
label_11b474:
    if (ctx->pc == 0x11B474u) {
        ctx->pc = 0x11B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B470u;
        // 0x11b474: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B478u;
        goto label_11b478;
    }
    ctx->pc = 0x11B470u;
    SET_GPR_U32(ctx, 31, 0x11B478u);
    ctx->pc = 0x11B474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B470u;
    // 0x11b474: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x11B470u, 0x11B478u)) {
        return;
    }
    ctx->pc = 0x11B478u;
label_11b478:
    // 0x11b478: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x11b478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b47c:
    // 0x11b47c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x11b47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b480:
    // 0x11b480: 0x8e4400ac  lw          $a0, 0xAC($s2)
    ctx->pc = 0x11b480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_11b484:
    // 0x11b484: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11b484u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_11b488:
    // 0x11b488: 0xc04f0cc  jal         func_13C330
label_11b48c:
    if (ctx->pc == 0x11B48Cu) {
        ctx->pc = 0x11B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B488u;
        // 0x11b48c: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B490u;
        goto label_11b490;
    }
    ctx->pc = 0x11B488u;
    SET_GPR_U32(ctx, 31, 0x11B490u);
    ctx->pc = 0x11B48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B488u;
    // 0x11b48c: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x11B488u, 0x11B490u)) {
        return;
    }
    ctx->pc = 0x11B490u;
label_11b490:
    // 0x11b490: 0x8e4400a8  lw          $a0, 0xA8($s2)
    ctx->pc = 0x11b490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_11b494:
    // 0x11b494: 0xc04f0cc  jal         func_13C330
label_11b498:
    if (ctx->pc == 0x11B498u) {
        ctx->pc = 0x11B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B494u;
        // 0x11b498: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B49Cu;
        goto label_11b49c;
    }
    ctx->pc = 0x11B494u;
    SET_GPR_U32(ctx, 31, 0x11B49Cu);
    ctx->pc = 0x11B498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B494u;
    // 0x11b498: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x11B494u, 0x11B49Cu)) {
        return;
    }
    ctx->pc = 0x11B49Cu;
label_11b49c:
    // 0x11b49c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x11b49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b4a0:
    // 0x11b4a0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x11b4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b4a4:
    // 0x11b4a4: 0x8e4400ac  lw          $a0, 0xAC($s2)
    ctx->pc = 0x11b4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_11b4a8:
    // 0x11b4a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11b4a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_11b4ac:
    // 0x11b4ac: 0xc04f0cc  jal         func_13C330
label_11b4b0:
    if (ctx->pc == 0x11B4B0u) {
        ctx->pc = 0x11B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4ACu;
        // 0x11b4b0: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B4B4u;
        goto label_11b4b4;
    }
    ctx->pc = 0x11B4ACu;
    SET_GPR_U32(ctx, 31, 0x11B4B4u);
    ctx->pc = 0x11B4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B4ACu;
    // 0x11b4b0: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x11B4ACu, 0x11B4B4u)) {
        return;
    }
    ctx->pc = 0x11B4B4u;
label_11b4b4:
    // 0x11b4b4: 0x8e4400a8  lw          $a0, 0xA8($s2)
    ctx->pc = 0x11b4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_11b4b8:
    // 0x11b4b8: 0xc04f0cc  jal         func_13C330
label_11b4bc:
    if (ctx->pc == 0x11B4BCu) {
        ctx->pc = 0x11B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4B8u;
        // 0x11b4bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B4C0u;
        goto label_11b4c0;
    }
    ctx->pc = 0x11B4B8u;
    SET_GPR_U32(ctx, 31, 0x11B4C0u);
    ctx->pc = 0x11B4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B4B8u;
    // 0x11b4bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x11B4B8u, 0x11B4C0u)) {
        return;
    }
    ctx->pc = 0x11B4C0u;
label_11b4c0:
    // 0x11b4c0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x11b4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b4c4:
    // 0x11b4c4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x11b4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b4c8:
    // 0x11b4c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11b4c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_11b4cc:
    // 0x11b4cc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x11b4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_11b4d0:
    // 0x11b4d0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x11b4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_11b4d4:
    // 0x11b4d4: 0xc093aa8  jal         func_24EAA0
label_11b4d8:
    if (ctx->pc == 0x11B4D8u) {
        ctx->pc = 0x11B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4D4u;
        // 0x11b4d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B4DCu;
        goto label_11b4dc;
    }
    ctx->pc = 0x11B4D4u;
    SET_GPR_U32(ctx, 31, 0x11B4DCu);
    ctx->pc = 0x11B4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B4D4u;
    // 0x11b4d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x11B4D4u, 0x11B4DCu)) {
        return;
    }
    ctx->pc = 0x11B4DCu;
label_11b4dc:
    // 0x11b4dc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x11b4dcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_11b4e0:
    // 0x11b4e0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x11b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_11b4e4:
    // 0x11b4e4: 0xc4408320  lwc1        $f0, -0x7CE0($v0)
    ctx->pc = 0x11b4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b4e8:
    // 0x11b4e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11b4e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11b4ec:
    // 0x11b4ec: 0x0  nop
    ctx->pc = 0x11b4ecu;
    // NOP
label_11b4f0:
    // 0x11b4f0: 0x4500008c  bc1f        . + 4 + (0x8C << 2)
label_11b4f4:
    if (ctx->pc == 0x11B4F4u) {
        ctx->pc = 0x11B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4F0u;
        // 0x11b4f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B4F8u;
        goto label_11b4f8;
    }
    ctx->pc = 0x11B4F0u;
    {
        const bool branch_taken_0x11b4f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4F0u;
        // 0x11b4f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4f0) {
            ctx->pc = 0x11B724u;
            goto label_11b724;
        }
    }
    ctx->pc = 0x11B4F8u;
label_11b4f8:
    // 0x11b4f8: 0xe64100c0  swc1        $f1, 0xC0($s2)
    ctx->pc = 0x11b4f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_11b4fc:
    // 0x11b4fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11b4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11b500:
    // 0x11b500: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11b500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_11b504:
    // 0x11b504: 0xc093a88  jal         func_24EA20
label_11b508:
    if (ctx->pc == 0x11B508u) {
        ctx->pc = 0x11B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B504u;
        // 0x11b508: 0x264400b4  addiu       $a0, $s2, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B50Cu;
        goto label_11b50c;
    }
    ctx->pc = 0x11B504u;
    SET_GPR_U32(ctx, 31, 0x11B50Cu);
    ctx->pc = 0x11B508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B504u;
    // 0x11b508: 0x264400b4  addiu       $a0, $s2, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11B504u, 0x11B50Cu)) {
        return;
    }
    ctx->pc = 0x11B50Cu;
label_11b50c:
    // 0x11b50c: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x11b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_11b510:
    // 0x11b510: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x11b510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_11b514:
    // 0x11b514: 0x8e4600ac  lw          $a2, 0xAC($s2)
    ctx->pc = 0x11b514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_11b518:
    // 0x11b518: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x11b518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_11b51c:
    // 0x11b51c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x11b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_11b520:
    // 0x11b520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b524:
    // 0x11b524: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b528:
    // 0x11b528: 0x68620017  ldl         $v0, 0x17($v1)
    ctx->pc = 0x11b528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_11b52c:
    // 0x11b52c: 0x6c620010  ldr         $v0, 0x10($v1)
    ctx->pc = 0x11b52cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_11b530:
    // 0x11b530: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x11b530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_11b534:
    // 0x11b534: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x11b534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_11b538:
    // 0x11b538: 0x68680027  ldl         $t0, 0x27($v1)
    ctx->pc = 0x11b538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_11b53c:
    // 0x11b53c: 0x6c680020  ldr         $t0, 0x20($v1)
    ctx->pc = 0x11b53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_11b540:
    // 0x11b540: 0x6869002f  ldl         $t1, 0x2F($v1)
    ctx->pc = 0x11b540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_11b544:
    // 0x11b544: 0x6c690028  ldr         $t1, 0x28($v1)
    ctx->pc = 0x11b544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_11b548:
    // 0x11b548: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x11b548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b54c:
    // 0x11b54c: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x11b54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b550:
    // 0x11b550: 0xb3a7002f  sdl         $a3, 0x2F($sp)
    ctx->pc = 0x11b550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b554:
    // 0x11b554: 0xb7a70028  sdr         $a3, 0x28($sp)
    ctx->pc = 0x11b554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b558:
    // 0x11b558: 0xb3a80037  sdl         $t0, 0x37($sp)
    ctx->pc = 0x11b558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b55c:
    // 0x11b55c: 0xb7a80030  sdr         $t0, 0x30($sp)
    ctx->pc = 0x11b55cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b560:
    // 0x11b560: 0xb3a9003f  sdl         $t1, 0x3F($sp)
    ctx->pc = 0x11b560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b564:
    // 0x11b564: 0xb7a90038  sdr         $t1, 0x38($sp)
    ctx->pc = 0x11b564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b568:
    // 0x11b568: 0x68620037  ldl         $v0, 0x37($v1)
    ctx->pc = 0x11b568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_11b56c:
    // 0x11b56c: 0x6c620030  ldr         $v0, 0x30($v1)
    ctx->pc = 0x11b56cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_11b570:
    // 0x11b570: 0x6867003f  ldl         $a3, 0x3F($v1)
    ctx->pc = 0x11b570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_11b574:
    // 0x11b574: 0x6c670038  ldr         $a3, 0x38($v1)
    ctx->pc = 0x11b574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_11b578:
    // 0x11b578: 0x68680047  ldl         $t0, 0x47($v1)
    ctx->pc = 0x11b578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_11b57c:
    // 0x11b57c: 0x6c680040  ldr         $t0, 0x40($v1)
    ctx->pc = 0x11b57cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_11b580:
    // 0x11b580: 0x6869004f  ldl         $t1, 0x4F($v1)
    ctx->pc = 0x11b580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_11b584:
    // 0x11b584: 0x6c690048  ldr         $t1, 0x48($v1)
    ctx->pc = 0x11b584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_11b588:
    // 0x11b588: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x11b588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b58c:
    // 0x11b58c: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x11b58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b590:
    // 0x11b590: 0xb3a7004f  sdl         $a3, 0x4F($sp)
    ctx->pc = 0x11b590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b594:
    // 0x11b594: 0xb7a70048  sdr         $a3, 0x48($sp)
    ctx->pc = 0x11b594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b598:
    // 0x11b598: 0xb3a80057  sdl         $t0, 0x57($sp)
    ctx->pc = 0x11b598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b59c:
    // 0x11b59c: 0xb7a80050  sdr         $t0, 0x50($sp)
    ctx->pc = 0x11b59cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b5a0:
    // 0x11b5a0: 0xb3a9005f  sdl         $t1, 0x5F($sp)
    ctx->pc = 0x11b5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b5a4:
    // 0x11b5a4: 0xb7a90058  sdr         $t1, 0x58($sp)
    ctx->pc = 0x11b5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b5a8:
    // 0x11b5a8: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x11b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
label_11b5ac:
    // 0x11b5ac: 0x68430017  ldl         $v1, 0x17($v0)
    ctx->pc = 0x11b5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_11b5b0:
    // 0x11b5b0: 0x6c430010  ldr         $v1, 0x10($v0)
    ctx->pc = 0x11b5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_11b5b4:
    // 0x11b5b4: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x11b5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_11b5b8:
    // 0x11b5b8: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x11b5b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_11b5bc:
    // 0x11b5bc: 0x68470027  ldl         $a3, 0x27($v0)
    ctx->pc = 0x11b5bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_11b5c0:
    // 0x11b5c0: 0x6c470020  ldr         $a3, 0x20($v0)
    ctx->pc = 0x11b5c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_11b5c4:
    // 0x11b5c4: 0x6848002f  ldl         $t0, 0x2F($v0)
    ctx->pc = 0x11b5c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_11b5c8:
    // 0x11b5c8: 0x6c480028  ldr         $t0, 0x28($v0)
    ctx->pc = 0x11b5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_11b5cc:
    // 0x11b5cc: 0xb3a30067  sdl         $v1, 0x67($sp)
    ctx->pc = 0x11b5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b5d0:
    // 0x11b5d0: 0xb7a30060  sdr         $v1, 0x60($sp)
    ctx->pc = 0x11b5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b5d4:
    // 0x11b5d4: 0xb3a6006f  sdl         $a2, 0x6F($sp)
    ctx->pc = 0x11b5d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b5d8:
    // 0x11b5d8: 0xb7a60068  sdr         $a2, 0x68($sp)
    ctx->pc = 0x11b5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b5dc:
    // 0x11b5dc: 0xb3a70077  sdl         $a3, 0x77($sp)
    ctx->pc = 0x11b5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b5e0:
    // 0x11b5e0: 0xb7a70070  sdr         $a3, 0x70($sp)
    ctx->pc = 0x11b5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b5e4:
    // 0x11b5e4: 0xb3a8007f  sdl         $t0, 0x7F($sp)
    ctx->pc = 0x11b5e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b5e8:
    // 0x11b5e8: 0xb7a80078  sdr         $t0, 0x78($sp)
    ctx->pc = 0x11b5e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b5ec:
    // 0x11b5ec: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x11b5ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_11b5f0:
    // 0x11b5f0: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x11b5f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_11b5f4:
    // 0x11b5f4: 0x6846003f  ldl         $a2, 0x3F($v0)
    ctx->pc = 0x11b5f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_11b5f8:
    // 0x11b5f8: 0x6c460038  ldr         $a2, 0x38($v0)
    ctx->pc = 0x11b5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_11b5fc:
    // 0x11b5fc: 0x68470047  ldl         $a3, 0x47($v0)
    ctx->pc = 0x11b5fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_11b600:
    // 0x11b600: 0x6c470040  ldr         $a3, 0x40($v0)
    ctx->pc = 0x11b600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_11b604:
    // 0x11b604: 0x6848004f  ldl         $t0, 0x4F($v0)
    ctx->pc = 0x11b604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_11b608:
    // 0x11b608: 0x6c480048  ldr         $t0, 0x48($v0)
    ctx->pc = 0x11b608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_11b60c:
    // 0x11b60c: 0xb3a30087  sdl         $v1, 0x87($sp)
    ctx->pc = 0x11b60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b610:
    // 0x11b610: 0xb7a30080  sdr         $v1, 0x80($sp)
    ctx->pc = 0x11b610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b614:
    // 0x11b614: 0xb3a6008f  sdl         $a2, 0x8F($sp)
    ctx->pc = 0x11b614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b618:
    // 0x11b618: 0xb7a60088  sdr         $a2, 0x88($sp)
    ctx->pc = 0x11b618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b61c:
    // 0x11b61c: 0xb3a70097  sdl         $a3, 0x97($sp)
    ctx->pc = 0x11b61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b620:
    // 0x11b620: 0xb7a70090  sdr         $a3, 0x90($sp)
    ctx->pc = 0x11b620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b624:
    // 0x11b624: 0xb3a8009f  sdl         $t0, 0x9F($sp)
    ctx->pc = 0x11b624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b628:
    // 0x11b628: 0xb7a80098  sdr         $t0, 0x98($sp)
    ctx->pc = 0x11b628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b62c:
    // 0x11b62c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x11b62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_11b630:
    // 0x11b630: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x11b630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_11b634:
    // 0x11b634: 0xc092dbc  jal         func_24B6F0
label_11b638:
    if (ctx->pc == 0x11B638u) {
        ctx->pc = 0x11B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B634u;
        // 0x11b638: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B63Cu;
        goto label_11b63c;
    }
    ctx->pc = 0x11B634u;
    SET_GPR_U32(ctx, 31, 0x11B63Cu);
    ctx->pc = 0x11B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B634u;
    // 0x11b638: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B6F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B6F0u, 0x11B634u, 0x11B63Cu)) {
        return;
    }
    ctx->pc = 0x11B63Cu;
label_11b63c:
    // 0x11b63c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11b640:
    // 0x11b640: 0xc092dbc  jal         func_24B6F0
label_11b644:
    if (ctx->pc == 0x11B644u) {
        ctx->pc = 0x11B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B640u;
        // 0x11b644: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B648u;
        goto label_11b648;
    }
    ctx->pc = 0x11B640u;
    SET_GPR_U32(ctx, 31, 0x11B648u);
    ctx->pc = 0x11B644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B640u;
    // 0x11b644: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B6F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B6F0u, 0x11B640u, 0x11B648u)) {
        return;
    }
    ctx->pc = 0x11B648u;
label_11b648:
    // 0x11b648: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b64c:
    // 0x11b64c: 0xc0a4cd2  jal         func_293348
label_11b650:
    if (ctx->pc == 0x11B650u) {
        ctx->pc = 0x11B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B64Cu;
        // 0x11b650: 0x264400c8  addiu       $a0, $s2, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B654u;
        goto label_11b654;
    }
    ctx->pc = 0x11B64Cu;
    SET_GPR_U32(ctx, 31, 0x11B654u);
    ctx->pc = 0x11B650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B64Cu;
    // 0x11b650: 0x264400c8  addiu       $a0, $s2, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x293348u, 0x11B64Cu, 0x11B654u)) {
        return;
    }
    ctx->pc = 0x11B654u;
label_11b654:
    // 0x11b654: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11b654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11b658:
    // 0x11b658: 0xc0a4cd2  jal         func_293348
label_11b65c:
    if (ctx->pc == 0x11B65Cu) {
        ctx->pc = 0x11B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B658u;
        // 0x11b65c: 0x264400d8  addiu       $a0, $s2, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B660u;
        goto label_11b660;
    }
    ctx->pc = 0x11B658u;
    SET_GPR_U32(ctx, 31, 0x11B660u);
    ctx->pc = 0x11B65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B658u;
    // 0x11b65c: 0x264400d8  addiu       $a0, $s2, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x293348u, 0x11B658u, 0x11B660u)) {
        return;
    }
    ctx->pc = 0x11B660u;
label_11b660:
    // 0x11b660: 0xc64100e4  lwc1        $f1, 0xE4($s2)
    ctx->pc = 0x11b660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b664:
    // 0x11b664: 0x27a200a4  addiu       $v0, $sp, 0xA4
    ctx->pc = 0x11b664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_11b668:
    // 0x11b668: 0xc64300d8  lwc1        $f3, 0xD8($s2)
    ctx->pc = 0x11b668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11b66c:
    // 0x11b66c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x11b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_11b670:
    // 0x11b670: 0xc64000d4  lwc1        $f0, 0xD4($s2)
    ctx->pc = 0x11b670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b674:
    // 0x11b674: 0xc64200c8  lwc1        $f2, 0xC8($s2)
    ctx->pc = 0x11b674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11b678:
    // 0x11b678: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11b678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_11b67c:
    // 0x11b67c: 0xc64400cc  lwc1        $f4, 0xCC($s2)
    ctx->pc = 0x11b67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11b680:
    // 0x11b680: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x11b680u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_11b684:
    // 0x11b684: 0xc64100dc  lwc1        $f1, 0xDC($s2)
    ctx->pc = 0x11b684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b688:
    // 0x11b688: 0xc64300d0  lwc1        $f3, 0xD0($s2)
    ctx->pc = 0x11b688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11b68c:
    // 0x11b68c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x11b68cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_11b690:
    // 0x11b690: 0xc64500e0  lwc1        $f5, 0xE0($s2)
    ctx->pc = 0x11b690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_11b694:
    // 0x11b694: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11b694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_11b698:
    // 0x11b698: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11b698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_11b69c:
    // 0x11b69c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11b69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11b6a0:
    // 0x11b6a0: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x11b6a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_11b6a4:
    // 0x11b6a4: 0xe7b400a8  swc1        $f20, 0xA8($sp)
    ctx->pc = 0x11b6a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_11b6a8:
    // 0x11b6a8: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x11b6a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_11b6ac:
    // 0x11b6ac: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x11b6acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_11b6b0:
    // 0x11b6b0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x11b6b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_11b6b4:
    // 0x11b6b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11b6b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11b6b8:
    // 0x11b6b8: 0x0  nop
    ctx->pc = 0x11b6b8u;
    // NOP
label_11b6bc:
    // 0x11b6bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_11b6c0:
    if (ctx->pc == 0x11B6C0u) {
        ctx->pc = 0x11B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6BCu;
        // 0x11b6c0: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B6C4u;
        goto label_11b6c4;
    }
    ctx->pc = 0x11B6BCu;
    {
        const bool branch_taken_0x11b6bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6BCu;
        // 0x11b6c0: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6bc) {
            ctx->pc = 0x11B6C8u;
            goto label_11b6c8;
        }
    }
    ctx->pc = 0x11B6C4u;
label_11b6c4:
    // 0x11b6c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11b6c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11b6c8:
    // 0x11b6c8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x11b6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b6cc:
    // 0x11b6cc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x11b6ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11b6d0:
    // 0x11b6d0: 0x0  nop
    ctx->pc = 0x11b6d0u;
    // NOP
label_11b6d4:
    // 0x11b6d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_11b6d8:
    if (ctx->pc == 0x11B6D8u) {
        ctx->pc = 0x11B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6D4u;
        // 0x11b6d8: 0x27a200a8  addiu       $v0, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B6DCu;
        goto label_11b6dc;
    }
    ctx->pc = 0x11B6D4u;
    {
        const bool branch_taken_0x11b6d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6D4u;
        // 0x11b6d8: 0x27a200a8  addiu       $v0, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6d4) {
            ctx->pc = 0x11B6E0u;
            goto label_11b6e0;
        }
    }
    ctx->pc = 0x11B6DCu;
label_11b6dc:
    // 0x11b6dc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11b6dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11b6e0:
    // 0x11b6e0: 0xc09b320  jal         func_26CC80
label_11b6e4:
    if (ctx->pc == 0x11B6E4u) {
        ctx->pc = 0x11B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6E0u;
        // 0x11b6e4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B6E8u;
        goto label_11b6e8;
    }
    ctx->pc = 0x11B6E0u;
    SET_GPR_U32(ctx, 31, 0x11B6E8u);
    ctx->pc = 0x11B6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B6E0u;
    // 0x11b6e4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CC80u, 0x11B6E0u, 0x11B6E8u)) {
        return;
    }
    ctx->pc = 0x11B6E8u;
label_11b6e8:
    // 0x11b6e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11b6e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11b6ec:
    // 0x11b6ec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x11b6ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_11b6f0:
    // 0x11b6f0: 0xc09b164  jal         func_26C590
label_11b6f4:
    if (ctx->pc == 0x11B6F4u) {
        ctx->pc = 0x11B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6F0u;
        // 0x11b6f4: 0xe64000e8  swc1        $f0, 0xE8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B6F8u;
        goto label_11b6f8;
    }
    ctx->pc = 0x11B6F0u;
    SET_GPR_U32(ctx, 31, 0x11B6F8u);
    ctx->pc = 0x11B6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B6F0u;
    // 0x11b6f4: 0xe64000e8  swc1        $f0, 0xE8($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x11B6F0u, 0x11B6F8u)) {
        return;
    }
    ctx->pc = 0x11B6F8u;
label_11b6f8:
    // 0x11b6f8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x11b6f8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_11b6fc:
    // 0x11b6fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11b6fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b700:
    // 0x11b700: 0x0  nop
    ctx->pc = 0x11b700u;
    // NOP
label_11b704:
    // 0x11b704: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x11b704u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11b708:
    // 0x11b708: 0x0  nop
    ctx->pc = 0x11b708u;
    // NOP
label_11b70c:
    // 0x11b70c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_11b710:
    if (ctx->pc == 0x11B710u) {
        ctx->pc = 0x11B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B70Cu;
        // 0x11b710: 0xe65400ec  swc1        $f20, 0xEC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B714u;
        goto label_11b714;
    }
    ctx->pc = 0x11B70Cu;
    {
        const bool branch_taken_0x11b70c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x11B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B70Cu;
        // 0x11b710: 0xe65400ec  swc1        $f20, 0xEC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b70c) {
            ctx->pc = 0x11B724u;
            goto label_11b724;
        }
    }
    ctx->pc = 0x11B714u;
label_11b714:
    // 0x11b714: 0x0  nop
    ctx->pc = 0x11b714u;
    // NOP
label_11b718:
    // 0x11b718: 0x0  nop
    ctx->pc = 0x11b718u;
    // NOP
label_11b71c:
    // 0x11b71c: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x11b71cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[1]);
label_11b720:
    // 0x11b720: 0xe64000ec  swc1        $f0, 0xEC($s2)
    ctx->pc = 0x11b720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
label_11b724:
    // 0x11b724: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x11b724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_11b728:
    // 0x11b728: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x11b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_11b72c:
    // 0x11b72c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_11b730:
    if (ctx->pc == 0x11B730u) {
        ctx->pc = 0x11B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B72Cu;
        // 0x11b730: 0x26440038  addiu       $a0, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B734u;
        goto label_11b734;
    }
    ctx->pc = 0x11B72Cu;
    {
        const bool branch_taken_0x11b72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B72Cu;
        // 0x11b730: 0x26440038  addiu       $a0, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b72c) {
            ctx->pc = 0x11B748u;
            goto label_11b748;
        }
    }
    ctx->pc = 0x11B734u;
label_11b734:
    // 0x11b734: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11b734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_11b738:
    // 0x11b738: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11b738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_11b73c:
    // 0x11b73c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11b73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11b740:
    // 0x11b740: 0xc07fc26  jal         func_1FF098
label_11b744:
    if (ctx->pc == 0x11B744u) {
        ctx->pc = 0x11B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B740u;
        // 0x11b744: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B748u;
        goto label_11b748;
    }
    ctx->pc = 0x11B740u;
    SET_GPR_U32(ctx, 31, 0x11B748u);
    ctx->pc = 0x11B744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B740u;
    // 0x11b744: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF098u, 0x11B740u, 0x11B748u)) {
        return;
    }
    ctx->pc = 0x11B748u;
label_11b748:
    // 0x11b748: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x11b748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_11b74c:
    // 0x11b74c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x11b74cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_11b750:
    // 0x11b750: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x11b750u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_11b754:
    // 0x11b754: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x11b754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_11b758:
    // 0x11b758: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x11b758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11b75c:
    // 0x11b75c: 0x3e00008  jr          $ra
label_11b760:
    if (ctx->pc == 0x11B760u) {
        ctx->pc = 0x11B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B75Cu;
        // 0x11b760: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B764u;
        goto label_11b764;
    }
    ctx->pc = 0x11B75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B75Cu;
        // 0x11b760: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B764u;
label_11b764:
    // 0x11b764: 0x0  nop
    ctx->pc = 0x11b764u;
    // NOP
    ctx->pc = 0x11b768u;
}
