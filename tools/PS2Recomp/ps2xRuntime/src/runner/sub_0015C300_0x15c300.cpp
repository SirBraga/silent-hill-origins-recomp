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

// Function: sub_0015C300
// Address: 0x15c300 - 0x15c818
void sub_0015C300_0x15c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C300_0x15c300");
#endif

    switch (ctx->pc) {
        case 0x15c300u: goto label_15c300;
        case 0x15c304u: goto label_15c304;
        case 0x15c308u: goto label_15c308;
        case 0x15c30cu: goto label_15c30c;
        case 0x15c310u: goto label_15c310;
        case 0x15c314u: goto label_15c314;
        case 0x15c318u: goto label_15c318;
        case 0x15c31cu: goto label_15c31c;
        case 0x15c320u: goto label_15c320;
        case 0x15c324u: goto label_15c324;
        case 0x15c328u: goto label_15c328;
        case 0x15c32cu: goto label_15c32c;
        case 0x15c330u: goto label_15c330;
        case 0x15c334u: goto label_15c334;
        case 0x15c338u: goto label_15c338;
        case 0x15c33cu: goto label_15c33c;
        case 0x15c340u: goto label_15c340;
        case 0x15c344u: goto label_15c344;
        case 0x15c348u: goto label_15c348;
        case 0x15c34cu: goto label_15c34c;
        case 0x15c350u: goto label_15c350;
        case 0x15c354u: goto label_15c354;
        case 0x15c358u: goto label_15c358;
        case 0x15c35cu: goto label_15c35c;
        case 0x15c360u: goto label_15c360;
        case 0x15c364u: goto label_15c364;
        case 0x15c368u: goto label_15c368;
        case 0x15c36cu: goto label_15c36c;
        case 0x15c370u: goto label_15c370;
        case 0x15c374u: goto label_15c374;
        case 0x15c378u: goto label_15c378;
        case 0x15c37cu: goto label_15c37c;
        case 0x15c380u: goto label_15c380;
        case 0x15c384u: goto label_15c384;
        case 0x15c388u: goto label_15c388;
        case 0x15c38cu: goto label_15c38c;
        case 0x15c390u: goto label_15c390;
        case 0x15c394u: goto label_15c394;
        case 0x15c398u: goto label_15c398;
        case 0x15c39cu: goto label_15c39c;
        case 0x15c3a0u: goto label_15c3a0;
        case 0x15c3a4u: goto label_15c3a4;
        case 0x15c3a8u: goto label_15c3a8;
        case 0x15c3acu: goto label_15c3ac;
        case 0x15c3b0u: goto label_15c3b0;
        case 0x15c3b4u: goto label_15c3b4;
        case 0x15c3b8u: goto label_15c3b8;
        case 0x15c3bcu: goto label_15c3bc;
        case 0x15c3c0u: goto label_15c3c0;
        case 0x15c3c4u: goto label_15c3c4;
        case 0x15c3c8u: goto label_15c3c8;
        case 0x15c3ccu: goto label_15c3cc;
        case 0x15c3d0u: goto label_15c3d0;
        case 0x15c3d4u: goto label_15c3d4;
        case 0x15c3d8u: goto label_15c3d8;
        case 0x15c3dcu: goto label_15c3dc;
        case 0x15c3e0u: goto label_15c3e0;
        case 0x15c3e4u: goto label_15c3e4;
        case 0x15c3e8u: goto label_15c3e8;
        case 0x15c3ecu: goto label_15c3ec;
        case 0x15c3f0u: goto label_15c3f0;
        case 0x15c3f4u: goto label_15c3f4;
        case 0x15c3f8u: goto label_15c3f8;
        case 0x15c3fcu: goto label_15c3fc;
        case 0x15c400u: goto label_15c400;
        case 0x15c404u: goto label_15c404;
        case 0x15c408u: goto label_15c408;
        case 0x15c40cu: goto label_15c40c;
        case 0x15c410u: goto label_15c410;
        case 0x15c414u: goto label_15c414;
        case 0x15c418u: goto label_15c418;
        case 0x15c41cu: goto label_15c41c;
        case 0x15c420u: goto label_15c420;
        case 0x15c424u: goto label_15c424;
        case 0x15c428u: goto label_15c428;
        case 0x15c42cu: goto label_15c42c;
        case 0x15c430u: goto label_15c430;
        case 0x15c434u: goto label_15c434;
        case 0x15c438u: goto label_15c438;
        case 0x15c43cu: goto label_15c43c;
        case 0x15c440u: goto label_15c440;
        case 0x15c444u: goto label_15c444;
        case 0x15c448u: goto label_15c448;
        case 0x15c44cu: goto label_15c44c;
        case 0x15c450u: goto label_15c450;
        case 0x15c454u: goto label_15c454;
        case 0x15c458u: goto label_15c458;
        case 0x15c45cu: goto label_15c45c;
        case 0x15c460u: goto label_15c460;
        case 0x15c464u: goto label_15c464;
        case 0x15c468u: goto label_15c468;
        case 0x15c46cu: goto label_15c46c;
        case 0x15c470u: goto label_15c470;
        case 0x15c474u: goto label_15c474;
        case 0x15c478u: goto label_15c478;
        case 0x15c47cu: goto label_15c47c;
        case 0x15c480u: goto label_15c480;
        case 0x15c484u: goto label_15c484;
        case 0x15c488u: goto label_15c488;
        case 0x15c48cu: goto label_15c48c;
        case 0x15c490u: goto label_15c490;
        case 0x15c494u: goto label_15c494;
        case 0x15c498u: goto label_15c498;
        case 0x15c49cu: goto label_15c49c;
        case 0x15c4a0u: goto label_15c4a0;
        case 0x15c4a4u: goto label_15c4a4;
        case 0x15c4a8u: goto label_15c4a8;
        case 0x15c4acu: goto label_15c4ac;
        case 0x15c4b0u: goto label_15c4b0;
        case 0x15c4b4u: goto label_15c4b4;
        case 0x15c4b8u: goto label_15c4b8;
        case 0x15c4bcu: goto label_15c4bc;
        case 0x15c4c0u: goto label_15c4c0;
        case 0x15c4c4u: goto label_15c4c4;
        case 0x15c4c8u: goto label_15c4c8;
        case 0x15c4ccu: goto label_15c4cc;
        case 0x15c4d0u: goto label_15c4d0;
        case 0x15c4d4u: goto label_15c4d4;
        case 0x15c4d8u: goto label_15c4d8;
        case 0x15c4dcu: goto label_15c4dc;
        case 0x15c4e0u: goto label_15c4e0;
        case 0x15c4e4u: goto label_15c4e4;
        case 0x15c4e8u: goto label_15c4e8;
        case 0x15c4ecu: goto label_15c4ec;
        case 0x15c4f0u: goto label_15c4f0;
        case 0x15c4f4u: goto label_15c4f4;
        case 0x15c4f8u: goto label_15c4f8;
        case 0x15c4fcu: goto label_15c4fc;
        case 0x15c500u: goto label_15c500;
        case 0x15c504u: goto label_15c504;
        case 0x15c508u: goto label_15c508;
        case 0x15c50cu: goto label_15c50c;
        case 0x15c510u: goto label_15c510;
        case 0x15c514u: goto label_15c514;
        case 0x15c518u: goto label_15c518;
        case 0x15c51cu: goto label_15c51c;
        case 0x15c520u: goto label_15c520;
        case 0x15c524u: goto label_15c524;
        case 0x15c528u: goto label_15c528;
        case 0x15c52cu: goto label_15c52c;
        case 0x15c530u: goto label_15c530;
        case 0x15c534u: goto label_15c534;
        case 0x15c538u: goto label_15c538;
        case 0x15c53cu: goto label_15c53c;
        case 0x15c540u: goto label_15c540;
        case 0x15c544u: goto label_15c544;
        case 0x15c548u: goto label_15c548;
        case 0x15c54cu: goto label_15c54c;
        case 0x15c550u: goto label_15c550;
        case 0x15c554u: goto label_15c554;
        case 0x15c558u: goto label_15c558;
        case 0x15c55cu: goto label_15c55c;
        case 0x15c560u: goto label_15c560;
        case 0x15c564u: goto label_15c564;
        case 0x15c568u: goto label_15c568;
        case 0x15c56cu: goto label_15c56c;
        case 0x15c570u: goto label_15c570;
        case 0x15c574u: goto label_15c574;
        case 0x15c578u: goto label_15c578;
        case 0x15c57cu: goto label_15c57c;
        case 0x15c580u: goto label_15c580;
        case 0x15c584u: goto label_15c584;
        case 0x15c588u: goto label_15c588;
        case 0x15c58cu: goto label_15c58c;
        case 0x15c590u: goto label_15c590;
        case 0x15c594u: goto label_15c594;
        case 0x15c598u: goto label_15c598;
        case 0x15c59cu: goto label_15c59c;
        case 0x15c5a0u: goto label_15c5a0;
        case 0x15c5a4u: goto label_15c5a4;
        case 0x15c5a8u: goto label_15c5a8;
        case 0x15c5acu: goto label_15c5ac;
        case 0x15c5b0u: goto label_15c5b0;
        case 0x15c5b4u: goto label_15c5b4;
        case 0x15c5b8u: goto label_15c5b8;
        case 0x15c5bcu: goto label_15c5bc;
        case 0x15c5c0u: goto label_15c5c0;
        case 0x15c5c4u: goto label_15c5c4;
        case 0x15c5c8u: goto label_15c5c8;
        case 0x15c5ccu: goto label_15c5cc;
        case 0x15c5d0u: goto label_15c5d0;
        case 0x15c5d4u: goto label_15c5d4;
        case 0x15c5d8u: goto label_15c5d8;
        case 0x15c5dcu: goto label_15c5dc;
        case 0x15c5e0u: goto label_15c5e0;
        case 0x15c5e4u: goto label_15c5e4;
        case 0x15c5e8u: goto label_15c5e8;
        case 0x15c5ecu: goto label_15c5ec;
        case 0x15c5f0u: goto label_15c5f0;
        case 0x15c5f4u: goto label_15c5f4;
        case 0x15c5f8u: goto label_15c5f8;
        case 0x15c5fcu: goto label_15c5fc;
        case 0x15c600u: goto label_15c600;
        case 0x15c604u: goto label_15c604;
        case 0x15c608u: goto label_15c608;
        case 0x15c60cu: goto label_15c60c;
        case 0x15c610u: goto label_15c610;
        case 0x15c614u: goto label_15c614;
        case 0x15c618u: goto label_15c618;
        case 0x15c61cu: goto label_15c61c;
        case 0x15c620u: goto label_15c620;
        case 0x15c624u: goto label_15c624;
        case 0x15c628u: goto label_15c628;
        case 0x15c62cu: goto label_15c62c;
        case 0x15c630u: goto label_15c630;
        case 0x15c634u: goto label_15c634;
        case 0x15c638u: goto label_15c638;
        case 0x15c63cu: goto label_15c63c;
        case 0x15c640u: goto label_15c640;
        case 0x15c644u: goto label_15c644;
        case 0x15c648u: goto label_15c648;
        case 0x15c64cu: goto label_15c64c;
        case 0x15c650u: goto label_15c650;
        case 0x15c654u: goto label_15c654;
        case 0x15c658u: goto label_15c658;
        case 0x15c65cu: goto label_15c65c;
        case 0x15c660u: goto label_15c660;
        case 0x15c664u: goto label_15c664;
        case 0x15c668u: goto label_15c668;
        case 0x15c66cu: goto label_15c66c;
        case 0x15c670u: goto label_15c670;
        case 0x15c674u: goto label_15c674;
        case 0x15c678u: goto label_15c678;
        case 0x15c67cu: goto label_15c67c;
        case 0x15c680u: goto label_15c680;
        case 0x15c684u: goto label_15c684;
        case 0x15c688u: goto label_15c688;
        case 0x15c68cu: goto label_15c68c;
        case 0x15c690u: goto label_15c690;
        case 0x15c694u: goto label_15c694;
        case 0x15c698u: goto label_15c698;
        case 0x15c69cu: goto label_15c69c;
        case 0x15c6a0u: goto label_15c6a0;
        case 0x15c6a4u: goto label_15c6a4;
        case 0x15c6a8u: goto label_15c6a8;
        case 0x15c6acu: goto label_15c6ac;
        case 0x15c6b0u: goto label_15c6b0;
        case 0x15c6b4u: goto label_15c6b4;
        case 0x15c6b8u: goto label_15c6b8;
        case 0x15c6bcu: goto label_15c6bc;
        case 0x15c6c0u: goto label_15c6c0;
        case 0x15c6c4u: goto label_15c6c4;
        case 0x15c6c8u: goto label_15c6c8;
        case 0x15c6ccu: goto label_15c6cc;
        case 0x15c6d0u: goto label_15c6d0;
        case 0x15c6d4u: goto label_15c6d4;
        case 0x15c6d8u: goto label_15c6d8;
        case 0x15c6dcu: goto label_15c6dc;
        case 0x15c6e0u: goto label_15c6e0;
        case 0x15c6e4u: goto label_15c6e4;
        case 0x15c6e8u: goto label_15c6e8;
        case 0x15c6ecu: goto label_15c6ec;
        case 0x15c6f0u: goto label_15c6f0;
        case 0x15c6f4u: goto label_15c6f4;
        case 0x15c6f8u: goto label_15c6f8;
        case 0x15c6fcu: goto label_15c6fc;
        case 0x15c700u: goto label_15c700;
        case 0x15c704u: goto label_15c704;
        case 0x15c708u: goto label_15c708;
        case 0x15c70cu: goto label_15c70c;
        case 0x15c710u: goto label_15c710;
        case 0x15c714u: goto label_15c714;
        case 0x15c718u: goto label_15c718;
        case 0x15c71cu: goto label_15c71c;
        case 0x15c720u: goto label_15c720;
        case 0x15c724u: goto label_15c724;
        case 0x15c728u: goto label_15c728;
        case 0x15c72cu: goto label_15c72c;
        case 0x15c730u: goto label_15c730;
        case 0x15c734u: goto label_15c734;
        case 0x15c738u: goto label_15c738;
        case 0x15c73cu: goto label_15c73c;
        case 0x15c740u: goto label_15c740;
        case 0x15c744u: goto label_15c744;
        case 0x15c748u: goto label_15c748;
        case 0x15c74cu: goto label_15c74c;
        case 0x15c750u: goto label_15c750;
        case 0x15c754u: goto label_15c754;
        case 0x15c758u: goto label_15c758;
        case 0x15c75cu: goto label_15c75c;
        case 0x15c760u: goto label_15c760;
        case 0x15c764u: goto label_15c764;
        case 0x15c768u: goto label_15c768;
        case 0x15c76cu: goto label_15c76c;
        case 0x15c770u: goto label_15c770;
        case 0x15c774u: goto label_15c774;
        case 0x15c778u: goto label_15c778;
        case 0x15c77cu: goto label_15c77c;
        case 0x15c780u: goto label_15c780;
        case 0x15c784u: goto label_15c784;
        case 0x15c788u: goto label_15c788;
        case 0x15c78cu: goto label_15c78c;
        case 0x15c790u: goto label_15c790;
        case 0x15c794u: goto label_15c794;
        case 0x15c798u: goto label_15c798;
        case 0x15c79cu: goto label_15c79c;
        case 0x15c7a0u: goto label_15c7a0;
        case 0x15c7a4u: goto label_15c7a4;
        case 0x15c7a8u: goto label_15c7a8;
        case 0x15c7acu: goto label_15c7ac;
        case 0x15c7b0u: goto label_15c7b0;
        case 0x15c7b4u: goto label_15c7b4;
        case 0x15c7b8u: goto label_15c7b8;
        case 0x15c7bcu: goto label_15c7bc;
        case 0x15c7c0u: goto label_15c7c0;
        case 0x15c7c4u: goto label_15c7c4;
        case 0x15c7c8u: goto label_15c7c8;
        case 0x15c7ccu: goto label_15c7cc;
        case 0x15c7d0u: goto label_15c7d0;
        case 0x15c7d4u: goto label_15c7d4;
        case 0x15c7d8u: goto label_15c7d8;
        case 0x15c7dcu: goto label_15c7dc;
        case 0x15c7e0u: goto label_15c7e0;
        case 0x15c7e4u: goto label_15c7e4;
        case 0x15c7e8u: goto label_15c7e8;
        case 0x15c7ecu: goto label_15c7ec;
        case 0x15c7f0u: goto label_15c7f0;
        case 0x15c7f4u: goto label_15c7f4;
        case 0x15c7f8u: goto label_15c7f8;
        case 0x15c7fcu: goto label_15c7fc;
        case 0x15c800u: goto label_15c800;
        case 0x15c804u: goto label_15c804;
        case 0x15c808u: goto label_15c808;
        case 0x15c80cu: goto label_15c80c;
        case 0x15c810u: goto label_15c810;
        case 0x15c814u: goto label_15c814;
        default: break;
    }

    ctx->pc = 0x15c300u;

label_15c300:
    // 0x15c300: 0x27bd9f50  addiu       $sp, $sp, -0x60B0
    ctx->pc = 0x15c300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294942544));
label_15c304:
    // 0x15c304: 0x3c013d88  lui         $at, 0x3D88
    ctx->pc = 0x15c304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15752 << 16));
label_15c308:
    // 0x15c308: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x15c308u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_15c30c:
    // 0x15c30c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15c30cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15c310:
    // 0x15c310: 0x7fb16090  sq          $s1, 0x6090($sp)
    ctx->pc = 0x15c310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 24720), GPR_VEC(ctx, 17));
label_15c314:
    // 0x15c314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c318:
    // 0x15c318: 0x7fb26080  sq          $s2, 0x6080($sp)
    ctx->pc = 0x15c318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 24704), GPR_VEC(ctx, 18));
label_15c31c:
    // 0x15c31c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15c31cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15c320:
    // 0x15c320: 0x7fb56050  sq          $s5, 0x6050($sp)
    ctx->pc = 0x15c320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 24656), GPR_VEC(ctx, 21));
label_15c324:
    // 0x15c324: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15c324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c328:
    // 0x15c328: 0x7fb76030  sq          $s7, 0x6030($sp)
    ctx->pc = 0x15c328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 24624), GPR_VEC(ctx, 23));
label_15c32c:
    // 0x15c32c: 0x27aa4800  addiu       $t2, $sp, 0x4800
    ctx->pc = 0x15c32cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 18432));
label_15c330:
    // 0x15c330: 0x7fb060a0  sq          $s0, 0x60A0($sp)
    ctx->pc = 0x15c330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 24736), GPR_VEC(ctx, 16));
label_15c334:
    // 0x15c334: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x15c334u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_15c338:
    // 0x15c338: 0x7fb36070  sq          $s3, 0x6070($sp)
    ctx->pc = 0x15c338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 24688), GPR_VEC(ctx, 19));
label_15c33c:
    // 0x15c33c: 0x3a0c02d  daddu       $t8, $sp, $zero
    ctx->pc = 0x15c33cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15c340:
    // 0x15c340: 0x7fb46060  sq          $s4, 0x6060($sp)
    ctx->pc = 0x15c340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 24672), GPR_VEC(ctx, 20));
label_15c344:
    // 0x15c344: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x15c344u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c348:
    // 0x15c348: 0x7fb66040  sq          $s6, 0x6040($sp)
    ctx->pc = 0x15c348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 24640), GPR_VEC(ctx, 22));
label_15c34c:
    // 0x15c34c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x15c34cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c350:
    // 0x15c350: 0xffbf6020  sd          $ra, 0x6020($sp)
    ctx->pc = 0x15c350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24608), GPR_U64(ctx, 31));
label_15c354:
    // 0x15c354: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15c354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_15c358:
    // 0x15c358: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x15c358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_15c35c:
    // 0x15c35c: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x15c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_15c360:
    // 0x15c360: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x15c360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15c364:
    // 0x15c364: 0x8c8f0008  lw          $t7, 0x8($a0)
    ctx->pc = 0x15c364u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15c368:
    // 0x15c368: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15c368u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_15c36c:
    // 0x15c36c: 0xc6220048  lwc1        $f2, 0x48($s1)
    ctx->pc = 0x15c36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15c370:
    // 0x15c370: 0x25e2ffff  addiu       $v0, $t7, -0x1
    ctx->pc = 0x15c370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_15c374:
    // 0x15c374: 0x24f182a  slt         $v1, $s2, $t7
    ctx->pc = 0x15c374u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
label_15c378:
    // 0x15c378: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x15c378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_15c37c:
    // 0x15c37c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15c37cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15c380:
    // 0x15c380: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x15c380u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2));
label_15c384:
    // 0x15c384: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x15c384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_15c388:
    // 0x15c388: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x15c388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15c38c:
    // 0x15c38c: 0x0  nop
    ctx->pc = 0x15c38cu;
    // NOP
label_15c390:
    // 0x15c390: 0x0  nop
    ctx->pc = 0x15c390u;
    // NOP
label_15c394:
    // 0x15c394: 0x46020903  div.s       $f4, $f1, $f2
    ctx->pc = 0x15c394u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[2]);
label_15c398:
    // 0x15c398: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x15c398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15c39c:
    // 0x15c39c: 0x0  nop
    ctx->pc = 0x15c39cu;
    // NOP
label_15c3a0:
    // 0x15c3a0: 0x0  nop
    ctx->pc = 0x15c3a0u;
    // NOP
label_15c3a4:
    // 0x15c3a4: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x15c3a4u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
label_15c3a8:
    // 0x15c3a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_15c3ac:
    if (ctx->pc == 0x15C3ACu) {
        ctx->pc = 0x15C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3A8u;
        // 0x15c3ac: 0x922c0030  lbu         $t4, 0x30($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3B0u;
        goto label_15c3b0;
    }
    ctx->pc = 0x15C3A8u;
    {
        const bool branch_taken_0x15c3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3A8u;
        // 0x15c3ac: 0x922c0030  lbu         $t4, 0x30($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3a8) {
            ctx->pc = 0x15C3C4u;
            goto label_15c3c4;
        }
    }
    ctx->pc = 0x15C3B0u;
label_15c3b0:
    // 0x15c3b0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x15c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_15c3b4:
    // 0x15c3b4: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x15c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_15c3b8:
    // 0x15c3b8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x15c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_15c3bc:
    // 0x15c3bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_15c3c0:
    if (ctx->pc == 0x15C3C0u) {
        ctx->pc = 0x15C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3BCu;
        // 0x15c3c0: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3C4u;
        goto label_15c3c4;
    }
    ctx->pc = 0x15C3BCu;
    {
        const bool branch_taken_0x15c3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3BCu;
        // 0x15c3c0: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3bc) {
            ctx->pc = 0x15C3CCu;
            goto label_15c3cc;
        }
    }
    ctx->pc = 0x15C3C4u;
label_15c3c4:
    // 0x15c3c4: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x15c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_15c3c8:
    // 0x15c3c8: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x15c3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15c3cc:
    // 0x15c3cc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x15c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15c3d0:
    // 0x15c3d0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x15c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_15c3d4:
    // 0x15c3d4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x15c3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15c3d8:
    // 0x15c3d8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x15c3d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15c3dc:
    // 0x15c3dc: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x15c3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15c3e0:
    // 0x15c3e0: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x15c3e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
label_15c3e4:
    // 0x15c3e4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x15c3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_15c3e8:
    // 0x15c3e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15c3e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15c3ec:
    // 0x15c3ec: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x15c3ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15c3f0:
    // 0x15c3f0: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x15c3f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_15c3f4:
    // 0x15c3f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15c3f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15c3f8:
    // 0x15c3f8: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x15c3f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_15c3fc:
    // 0x15c3fc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x15c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_15c400:
    // 0x15c400: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x15c400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_15c404:
    // 0x15c404: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x15c404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_15c408:
    // 0x15c408: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x15c408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_15c40c:
    // 0x15c40c: 0xb3a35fe7  sdl         $v1, 0x5FE7($sp)
    ctx->pc = 0x15c40cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24551); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15c410:
    // 0x15c410: 0xb7a35fe0  sdr         $v1, 0x5FE0($sp)
    ctx->pc = 0x15c410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24544); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15c414:
    // 0x15c414: 0xafa45fe8  sw          $a0, 0x5FE8($sp)
    ctx->pc = 0x15c414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24552), GPR_U32(ctx, 4));
label_15c418:
    // 0x15c418: 0x6ba25fe7  ldl         $v0, 0x5FE7($sp)
    ctx->pc = 0x15c418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24551); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_15c41c:
    // 0x15c41c: 0x6fa25fe0  ldr         $v0, 0x5FE0($sp)
    ctx->pc = 0x15c41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24544); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_15c420:
    // 0x15c420: 0x8fa35fe8  lw          $v1, 0x5FE8($sp)
    ctx->pc = 0x15c420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24552)));
label_15c424:
    // 0x15c424: 0xb3a25ff7  sdl         $v0, 0x5FF7($sp)
    ctx->pc = 0x15c424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24567); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15c428:
    // 0x15c428: 0xb7a25ff0  sdr         $v0, 0x5FF0($sp)
    ctx->pc = 0x15c428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15c42c:
    // 0x15c42c: 0xafa35ff8  sw          $v1, 0x5FF8($sp)
    ctx->pc = 0x15c42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24568), GPR_U32(ctx, 3));
label_15c430:
    // 0x15c430: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_15c434:
    if (ctx->pc == 0x15C434u) {
        ctx->pc = 0x15C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C430u;
        // 0x15c434: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C438u;
        goto label_15c438;
    }
    ctx->pc = 0x15C430u;
    {
        const bool branch_taken_0x15c430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C430u;
        // 0x15c434: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c430) {
            ctx->pc = 0x15C470u;
            goto label_15c470;
        }
    }
    ctx->pc = 0x15C438u;
label_15c438:
    // 0x15c438: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x15c438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_15c43c:
    // 0x15c43c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15c440:
    // 0x15c440: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x15c440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_15c444:
    // 0x15c444: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x15c444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_15c448:
    // 0x15c448: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x15c448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15c44c:
    // 0x15c44c: 0xc2180a  movz        $v1, $a2, $v0
    ctx->pc = 0x15c44cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6));
label_15c450:
    // 0x15c450: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15c450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15c454:
    // 0x15c454: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x15c454u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15c458:
    // 0x15c458: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x15c458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15c45c:
    // 0x15c45c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x15c45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_15c460:
    // 0x15c460: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x15c460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_15c464:
    // 0x15c464: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x15c464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
label_15c468:
    // 0x15c468: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x15c468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15c46c:
    // 0x15c46c: 0x46040142  mul.s       $f5, $f0, $f4
    ctx->pc = 0x15c46cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_15c470:
    // 0x15c470: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x15c470u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c474:
    // 0x15c474: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15c474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c478:
    // 0x15c478: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x15c478u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c47c:
    // 0x15c47c: 0x19e0003e  blez        $t7, . + 4 + (0x3E << 2)
label_15c480:
    if (ctx->pc == 0x15C480u) {
        ctx->pc = 0x15C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C47Cu;
        // 0x15c480: 0x27b059e0  addiu       $s0, $sp, 0x59E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 23008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C484u;
        goto label_15c484;
    }
    ctx->pc = 0x15C47Cu;
    {
        const bool branch_taken_0x15c47c = (GPR_S64(ctx, 15) <= 0);
        ctx->pc = 0x15C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C47Cu;
        // 0x15c480: 0x27b059e0  addiu       $s0, $sp, 0x59E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 23008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c47c) {
            ctx->pc = 0x15C578u;
            goto label_15c578;
        }
    }
    ctx->pc = 0x15C484u;
label_15c484:
    // 0x15c484: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x15c484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_15c488:
    // 0x15c488: 0x24140014  addiu       $s4, $zero, 0x14
    ctx->pc = 0x15c488u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_15c48c:
    // 0x15c48c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x15c48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_15c490:
    // 0x15c490: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x15c490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_15c494:
    // 0x15c494: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x15c494u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_15c498:
    // 0x15c498: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x15c498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_15c49c:
    // 0x15c49c: 0x27a759e4  addiu       $a3, $sp, 0x59E4
    ctx->pc = 0x15c49cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 23012));
label_15c4a0:
    // 0x15c4a0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x15c4a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c4a4:
    // 0x15c4a4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x15c4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_15c4a8:
    // 0x15c4a8: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x15c4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15c4ac:
    // 0x15c4ac: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x15c4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_15c4b0:
    // 0x15c4b0: 0x163182a  slt         $v1, $t3, $v1
    ctx->pc = 0x15c4b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15c4b4:
    // 0x15c4b4: 0x163200b  movn        $a0, $t3, $v1
    ctx->pc = 0x15c4b4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11));
label_15c4b8:
    // 0x15c4b8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x15c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15c4bc:
    // 0x15c4bc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x15c4bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15c4c0:
    // 0x15c4c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15c4c4:
    if (ctx->pc == 0x15C4C4u) {
        ctx->pc = 0x15C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4C0u;
        // 0x15c4c4: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C4C8u;
        goto label_15c4c8;
    }
    ctx->pc = 0x15C4C0u;
    {
        const bool branch_taken_0x15c4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4C0u;
        // 0x15c4c4: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4c0) {
            ctx->pc = 0x15C4D8u;
            goto label_15c4d8;
        }
    }
    ctx->pc = 0x15C4C8u;
label_15c4c8:
    // 0x15c4c8: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x15c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_15c4cc:
    // 0x15c4cc: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x15c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_15c4d0:
    // 0x15c4d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_15c4d4:
    if (ctx->pc == 0x15C4D4u) {
        ctx->pc = 0x15C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4D0u;
        // 0x15c4d4: 0x621823  subu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C4D8u;
        goto label_15c4d8;
    }
    ctx->pc = 0x15C4D0u;
    {
        const bool branch_taken_0x15c4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4D0u;
        // 0x15c4d4: 0x621823  subu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4d0) {
            ctx->pc = 0x15C4E0u;
            goto label_15c4e0;
        }
    }
    ctx->pc = 0x15C4D8u;
label_15c4d8:
    // 0x15c4d8: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x15c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_15c4dc:
    // 0x15c4dc: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x15c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15c4e0:
    // 0x15c4e0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x15c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_15c4e4:
    // 0x15c4e4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x15c4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15c4e8:
    // 0x15c4e8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x15c4e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15c4ec:
    // 0x15c4ec: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x15c4ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_15c4f0:
    // 0x15c4f0: 0x741818  mult        $v1, $v1, $s4
    ctx->pc = 0x15c4f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15c4f4:
    // 0x15c4f4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x15c4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_15c4f8:
    // 0x15c4f8: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x15c4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
label_15c4fc:
    // 0x15c4fc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x15c4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15c500:
    // 0x15c500: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x15c500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_15c504:
    // 0x15c504: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x15c504u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_15c508:
    // 0x15c508: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x15c508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_15c50c:
    // 0x15c50c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x15c50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15c510:
    // 0x15c510: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x15c510u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_15c514:
    // 0x15c514: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x15c514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_15c518:
    // 0x15c518: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15c518u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_15c51c:
    // 0x15c51c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15c51cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15c520:
    // 0x15c520: 0x4620007  bltzl       $v1, . + 4 + (0x7 << 2)
label_15c524:
    if (ctx->pc == 0x15C524u) {
        ctx->pc = 0x15C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C520u;
        // 0x15c524: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C528u;
        goto label_15c528;
    }
    ctx->pc = 0x15C520u;
    {
        const bool branch_taken_0x15c520 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x15c520) {
            ctx->pc = 0x15C524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C520u;
            // 0x15c524: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C540u;
            goto label_15c540;
        }
    }
    ctx->pc = 0x15C528u;
label_15c528:
    // 0x15c528: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_15c52c:
    if (ctx->pc == 0x15C52Cu) {
        ctx->pc = 0x15C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C528u;
        // 0x15c52c: 0x28620100  slti        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C530u;
        goto label_15c530;
    }
    ctx->pc = 0x15C528u;
    {
        const bool branch_taken_0x15c528 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C528u;
        // 0x15c52c: 0x28620100  slti        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c528) {
            ctx->pc = 0x15C53Cu;
            goto label_15c53c;
        }
    }
    ctx->pc = 0x15C530u;
label_15c530:
    // 0x15c530: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c534:
    // 0x15c534: 0x10000002  b           . + 4 + (0x2 << 2)
label_15c538:
    if (ctx->pc == 0x15C538u) {
        ctx->pc = 0x15C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C534u;
        // 0x15c538: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C53Cu;
        goto label_15c53c;
    }
    ctx->pc = 0x15C534u;
    {
        const bool branch_taken_0x15c534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C534u;
        // 0x15c538: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c534) {
            ctx->pc = 0x15C540u;
            goto label_15c540;
        }
    }
    ctx->pc = 0x15C53Cu;
label_15c53c:
    // 0x15c53c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15c53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c540:
    // 0x15c540: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x15c540u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_15c544:
    // 0x15c544: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x15c544u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_15c548:
    // 0x15c548: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x15c548u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_15c54c:
    // 0x15c54c: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x15c54cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_15c550:
    // 0x15c550: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x15c550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
label_15c554:
    // 0x15c554: 0x46061834  c.lt.s      $f3, $f6
    ctx->pc = 0x15c554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15c558:
    // 0x15c558: 0x0  nop
    ctx->pc = 0x15c558u;
    // NOP
label_15c55c:
    // 0x15c55c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_15c560:
    if (ctx->pc == 0x15C560u) {
        ctx->pc = 0x15C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C55Cu;
        // 0x15c560: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C564u;
        goto label_15c564;
    }
    ctx->pc = 0x15C55Cu;
    {
        const bool branch_taken_0x15c55c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C55Cu;
        // 0x15c560: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c55c) {
            ctx->pc = 0x15C568u;
            goto label_15c568;
        }
    }
    ctx->pc = 0x15C564u;
label_15c564:
    // 0x15c564: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x15c564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_15c568:
    // 0x15c568: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x15c568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_15c56c:
    // 0x15c56c: 0x10f102a  slt         $v0, $t0, $t7
    ctx->pc = 0x15c56cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
label_15c570:
    // 0x15c570: 0x5440ffcd  bnel        $v0, $zero, . + 4 + (-0x33 << 2)
label_15c574:
    if (ctx->pc == 0x15C574u) {
        ctx->pc = 0x15C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C570u;
        // 0x15c574: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C578u;
        goto label_15c578;
    }
    ctx->pc = 0x15C570u;
    {
        const bool branch_taken_0x15c570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c570) {
            ctx->pc = 0x15C574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C570u;
            // 0x15c574: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c4a8;
        }
    }
    ctx->pc = 0x15C578u;
label_15c578:
    // 0x15c578: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15c578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c57c:
    // 0x15c57c: 0x19a0005c  blez        $t5, . + 4 + (0x5C << 2)
label_15c580:
    if (ctx->pc == 0x15C580u) {
        ctx->pc = 0x15C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C57Cu;
        // 0x15c580: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C584u;
        goto label_15c584;
    }
    ctx->pc = 0x15C57Cu;
    {
        const bool branch_taken_0x15c57c = (GPR_S64(ctx, 13) <= 0);
        ctx->pc = 0x15C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C57Cu;
        // 0x15c580: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c57c) {
            ctx->pc = 0x15C6F0u;
            goto label_15c6f0;
        }
    }
    ctx->pc = 0x15C584u;
label_15c584:
    // 0x15c584: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x15c584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_15c588:
    // 0x15c588: 0x25b4ffff  addiu       $s4, $t5, -0x1
    ctx->pc = 0x15c588u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_15c58c:
    // 0x15c58c: 0x1829818  mult        $s3, $t4, $v0
    ctx->pc = 0x15c58cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_15c590:
    // 0x15c590: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x15c590u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c594:
    // 0x15c594: 0x25990001  addiu       $t9, $t4, 0x1
    ctx->pc = 0x15c594u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_15c598:
    // 0x15c598: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x15c598u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_15c59c:
    // 0x15c59c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15c59cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15c5a0:
    // 0x15c5a0: 0x1500000a  bnez        $t0, . + 4 + (0xA << 2)
label_15c5a4:
    if (ctx->pc == 0x15C5A4u) {
        ctx->pc = 0x15C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5A0u;
        // 0x15c5a4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5A8u;
        goto label_15c5a8;
    }
    ctx->pc = 0x15C5A0u;
    {
        const bool branch_taken_0x15c5a0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5A0u;
        // 0x15c5a4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5a0) {
            ctx->pc = 0x15C5CCu;
            goto label_15c5cc;
        }
    }
    ctx->pc = 0x15C5A8u;
label_15c5a8:
    // 0x15c5a8: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
label_15c5ac:
    if (ctx->pc == 0x15C5ACu) {
        ctx->pc = 0x15C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5A8u;
        // 0x15c5ac: 0x246f0001  addiu       $t7, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5B0u;
        goto label_15c5b0;
    }
    ctx->pc = 0x15C5A8u;
    {
        const bool branch_taken_0x15c5a8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x15C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5A8u;
        // 0x15c5ac: 0x246f0001  addiu       $t7, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5a8) {
            ctx->pc = 0x15C5D0u;
            goto label_15c5d0;
        }
    }
    ctx->pc = 0x15C5B0u;
label_15c5b0:
    // 0x15c5b0: 0x8ce2fff8  lw          $v0, -0x8($a3)
    ctx->pc = 0x15c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967288)));
label_15c5b4:
    // 0x15c5b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_15c5b8:
    if (ctx->pc == 0x15C5B8u) {
        ctx->pc = 0x15C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5B4u;
        // 0x15c5b8: 0x74102a  slt         $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5BCu;
        goto label_15c5bc;
    }
    ctx->pc = 0x15C5B4u;
    {
        const bool branch_taken_0x15c5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5B4u;
        // 0x15c5b8: 0x74102a  slt         $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5b4) {
            ctx->pc = 0x15C5D0u;
            goto label_15c5d0;
        }
    }
    ctx->pc = 0x15C5BCu;
label_15c5bc:
    // 0x15c5bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_15c5c0:
    if (ctx->pc == 0x15C5C0u) {
        ctx->pc = 0x15C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5BCu;
        // 0x15c5c0: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5C4u;
        goto label_15c5c4;
    }
    ctx->pc = 0x15C5BCu;
    {
        const bool branch_taken_0x15c5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5BCu;
        // 0x15c5c0: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5bc) {
            ctx->pc = 0x15C5D0u;
            goto label_15c5d0;
        }
    }
    ctx->pc = 0x15C5C4u;
label_15c5c4:
    // 0x15c5c4: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x15c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_15c5c8:
    // 0x15c5c8: 0x2580a  movz        $t3, $zero, $v0
    ctx->pc = 0x15c5c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0));
label_15c5cc:
    // 0x15c5cc: 0x246f0001  addiu       $t7, $v1, 0x1
    ctx->pc = 0x15c5ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15c5d0:
    // 0x15c5d0: 0x11d60016  beq         $t6, $s6, . + 4 + (0x16 << 2)
label_15c5d4:
    if (ctx->pc == 0x15C5D4u) {
        ctx->pc = 0x15C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5D0u;
        // 0x15c5d4: 0x24f0000c  addiu       $s0, $a3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5D8u;
        goto label_15c5d8;
    }
    ctx->pc = 0x15C5D0u;
    {
        const bool branch_taken_0x15c5d0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 22));
        ctx->pc = 0x15C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5D0u;
        // 0x15c5d4: 0x24f0000c  addiu       $s0, $a3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5d0) {
            ctx->pc = 0x15C62Cu;
            goto label_15c62c;
        }
    }
    ctx->pc = 0x15C5D8u;
label_15c5d8:
    // 0x15c5d8: 0x2589ffff  addiu       $t1, $t4, -0x1
    ctx->pc = 0x15c5d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_15c5dc:
    // 0x15c5dc: 0x19200013  blez        $t1, . + 4 + (0x13 << 2)
label_15c5e0:
    if (ctx->pc == 0x15C5E0u) {
        ctx->pc = 0x15C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5DCu;
        // 0x15c5e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5E4u;
        goto label_15c5e4;
    }
    ctx->pc = 0x15C5DCu;
    {
        const bool branch_taken_0x15c5dc = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x15C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5DCu;
        // 0x15c5e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5dc) {
            ctx->pc = 0x15C62Cu;
            goto label_15c62c;
        }
    }
    ctx->pc = 0x15C5E4u;
label_15c5e4:
    // 0x15c5e4: 0x1d93021  addu        $a2, $t6, $t9
    ctx->pc = 0x15c5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 25)));
label_15c5e8:
    // 0x15c5e8: 0x1cc2021  addu        $a0, $t6, $t4
    ctx->pc = 0x15c5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_15c5ec:
    // 0x15c5ec: 0x25c30001  addiu       $v1, $t6, 0x1
    ctx->pc = 0x15c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_15c5f0:
    // 0x15c5f0: 0x1c51021  addu        $v0, $t6, $a1
    ctx->pc = 0x15c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_15c5f4:
    // 0x15c5f4: 0xa5430002  sh          $v1, 0x2($t2)
    ctx->pc = 0x15c5f4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 3));
label_15c5f8:
    // 0x15c5f8: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x15c5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
label_15c5fc:
    // 0x15c5fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15c5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15c600:
    // 0x15c600: 0xa5440004  sh          $a0, 0x4($t2)
    ctx->pc = 0x15c600u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 4));
label_15c604:
    // 0x15c604: 0x26520006  addiu       $s2, $s2, 0x6
    ctx->pc = 0x15c604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
label_15c608:
    // 0x15c608: 0xa5430006  sh          $v1, 0x6($t2)
    ctx->pc = 0x15c608u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 3));
label_15c60c:
    // 0x15c60c: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x15c60cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_15c610:
    // 0x15c610: 0xa5460008  sh          $a2, 0x8($t2)
    ctx->pc = 0x15c610u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 8), (uint16_t)GPR_U32(ctx, 6));
label_15c614:
    // 0x15c614: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15c614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15c618:
    // 0x15c618: 0xa544000a  sh          $a0, 0xA($t2)
    ctx->pc = 0x15c618u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 10), (uint16_t)GPR_U32(ctx, 4));
label_15c61c:
    // 0x15c61c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15c61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15c620:
    // 0x15c620: 0x254a000c  addiu       $t2, $t2, 0xC
    ctx->pc = 0x15c620u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
label_15c624:
    // 0x15c624: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_15c628:
    if (ctx->pc == 0x15C628u) {
        ctx->pc = 0x15C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C624u;
        // 0x15c628: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C62Cu;
        goto label_15c62c;
    }
    ctx->pc = 0x15C624u;
    {
        const bool branch_taken_0x15c624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C624u;
        // 0x15c628: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c624) {
            ctx->pc = 0x15C5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c5f0;
        }
    }
    ctx->pc = 0x15C62Cu;
label_15c62c:
    // 0x15c62c: 0x1160002b  beqz        $t3, . + 4 + (0x2B << 2)
label_15c630:
    if (ctx->pc == 0x15C630u) {
        ctx->pc = 0x15C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C62Cu;
        // 0x15c630: 0x2a0702d  daddu       $t6, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C634u;
        goto label_15c634;
    }
    ctx->pc = 0x15C62Cu;
    {
        const bool branch_taken_0x15c62c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C62Cu;
        // 0x15c630: 0x2a0702d  daddu       $t6, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c62c) {
            ctx->pc = 0x15C6DCu;
            goto label_15c6dc;
        }
    }
    ctx->pc = 0x15C634u;
label_15c634:
    // 0x15c634: 0x11800026  beqz        $t4, . + 4 + (0x26 << 2)
label_15c638:
    if (ctx->pc == 0x15C638u) {
        ctx->pc = 0x15C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C634u;
        // 0x15c638: 0x1cc2821  addu        $a1, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C63Cu;
        goto label_15c63c;
    }
    ctx->pc = 0x15C634u;
    {
        const bool branch_taken_0x15c634 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C634u;
        // 0x15c638: 0x1cc2821  addu        $a1, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c634) {
            ctx->pc = 0x15C6D0u;
            goto label_15c6d0;
        }
    }
    ctx->pc = 0x15C63Cu;
label_15c63c:
    // 0x15c63c: 0x300202d  daddu       $a0, $t8, $zero
    ctx->pc = 0x15c63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_15c640:
    // 0x15c640: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c644:
    // 0x15c644: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x15c644u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_15c648:
    // 0x15c648: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x15c648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_15c64c:
    // 0x15c64c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15c650:
    // 0x15c650: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x15c650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_15c654:
    // 0x15c654: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x15c654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15c658:
    // 0x15c658: 0xe7a06000  swc1        $f0, 0x6000($sp)
    ctx->pc = 0x15c658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24576), bits); }
label_15c65c:
    // 0x15c65c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x15c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_15c660:
    // 0x15c660: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15c660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15c664:
    // 0x15c664: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x15c664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_15c668:
    // 0x15c668: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15c668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15c66c:
    // 0x15c66c: 0xe7a06004  swc1        $f0, 0x6004($sp)
    ctx->pc = 0x15c66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24580), bits); }
label_15c670:
    // 0x15c670: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x15c670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_15c674:
    // 0x15c674: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15c674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15c678:
    // 0x15c678: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x15c678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_15c67c:
    // 0x15c67c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15c67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15c680:
    // 0x15c680: 0xe7a06008  swc1        $f0, 0x6008($sp)
    ctx->pc = 0x15c680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24584), bits); }
label_15c684:
    // 0x15c684: 0x6ba26007  ldl         $v0, 0x6007($sp)
    ctx->pc = 0x15c684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24583); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_15c688:
    // 0x15c688: 0x6fa26000  ldr         $v0, 0x6000($sp)
    ctx->pc = 0x15c688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_15c68c:
    // 0x15c68c: 0x8fa36008  lw          $v1, 0x6008($sp)
    ctx->pc = 0x15c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24584)));
label_15c690:
    // 0x15c690: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x15c690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15c694:
    // 0x15c694: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x15c694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15c698:
    // 0x15c698: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x15c698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_15c69c:
    // 0x15c69c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x15c69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15c6a0:
    // 0x15c6a0: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x15c6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_15c6a4:
    // 0x15c6a4: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x15c6a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_15c6a8:
    // 0x15c6a8: 0xa088000c  sb          $t0, 0xC($a0)
    ctx->pc = 0x15c6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 8));
label_15c6ac:
    // 0x15c6ac: 0xa088000d  sb          $t0, 0xD($a0)
    ctx->pc = 0x15c6acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 8));
label_15c6b0:
    // 0x15c6b0: 0xa088000e  sb          $t0, 0xE($a0)
    ctx->pc = 0x15c6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 8));
label_15c6b4:
    // 0x15c6b4: 0xa088000f  sb          $t0, 0xF($a0)
    ctx->pc = 0x15c6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 8));
label_15c6b8:
    // 0x15c6b8: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x15c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
label_15c6bc:
    // 0x15c6bc: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x15c6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15c6c0:
    // 0x15c6c0: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x15c6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_15c6c4:
    // 0x15c6c4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x15c6c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_15c6c8:
    // 0x15c6c8: 0x1520ffdf  bnez        $t1, . + 4 + (-0x21 << 2)
label_15c6cc:
    if (ctx->pc == 0x15C6CCu) {
        ctx->pc = 0x15C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6C8u;
        // 0x15c6cc: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C6D0u;
        goto label_15c6d0;
    }
    ctx->pc = 0x15C6C8u;
    {
        const bool branch_taken_0x15c6c8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6C8u;
        // 0x15c6cc: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6c8) {
            ctx->pc = 0x15C648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c648;
        }
    }
    ctx->pc = 0x15C6D0u;
label_15c6d0:
    // 0x15c6d0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x15c6d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15c6d4:
    // 0x15c6d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_15c6d8:
    if (ctx->pc == 0x15C6D8u) {
        ctx->pc = 0x15C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6D4u;
        // 0x15c6d8: 0x313c021  addu        $t8, $t8, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C6DCu;
        goto label_15c6dc;
    }
    ctx->pc = 0x15C6D4u;
    {
        const bool branch_taken_0x15c6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6D4u;
        // 0x15c6d8: 0x313c021  addu        $t8, $t8, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6d4) {
            ctx->pc = 0x15C6E0u;
            goto label_15c6e0;
        }
    }
    ctx->pc = 0x15C6DCu;
label_15c6dc:
    // 0x15c6dc: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x15c6dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c6e0:
    // 0x15c6e0: 0x1e0182d  daddu       $v1, $t7, $zero
    ctx->pc = 0x15c6e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_15c6e4:
    // 0x15c6e4: 0x6d102a  slt         $v0, $v1, $t5
    ctx->pc = 0x15c6e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
label_15c6e8:
    // 0x15c6e8: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
label_15c6ec:
    if (ctx->pc == 0x15C6ECu) {
        ctx->pc = 0x15C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6E8u;
        // 0x15c6ec: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C6F0u;
        goto label_15c6f0;
    }
    ctx->pc = 0x15C6E8u;
    {
        const bool branch_taken_0x15c6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6E8u;
        // 0x15c6ec: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6e8) {
            ctx->pc = 0x15C598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c598;
        }
    }
    ctx->pc = 0x15C6F0u;
label_15c6f0:
    // 0x15c6f0: 0x1a40003d  blez        $s2, . + 4 + (0x3D << 2)
label_15c6f4:
    if (ctx->pc == 0x15C6F4u) {
        ctx->pc = 0x15C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6F0u;
        // 0x15c6f4: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C6F8u;
        goto label_15c6f8;
    }
    ctx->pc = 0x15C6F0u;
    {
        const bool branch_taken_0x15c6f0 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x15C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6F0u;
        // 0x15c6f4: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6f0) {
            ctx->pc = 0x15C7E8u;
            goto label_15c7e8;
        }
    }
    ctx->pc = 0x15C6F8u;
label_15c6f8:
    // 0x15c6f8: 0x27a56010  addiu       $a1, $sp, 0x6010
    ctx->pc = 0x15c6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24592));
label_15c6fc:
    // 0x15c6fc: 0x24500fd8  addiu       $s0, $v0, 0xFD8
    ctx->pc = 0x15c6fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
label_15c700:
    // 0x15c700: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x15c700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_15c704:
    // 0x15c704: 0x40f809  jalr        $v0
label_15c708:
    if (ctx->pc == 0x15C708u) {
        ctx->pc = 0x15C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C704u;
        // 0x15c708: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C70Cu;
        goto label_15c70c;
    }
    ctx->pc = 0x15C704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C70Cu);
        ctx->pc = 0x15C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C704u;
        // 0x15c708: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C704u, 0x15C70Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C70Cu;
label_15c70c:
    // 0x15c70c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x15c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_15c710:
    // 0x15c710: 0x27a56014  addiu       $a1, $sp, 0x6014
    ctx->pc = 0x15c710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24596));
label_15c714:
    // 0x15c714: 0x40f809  jalr        $v0
label_15c718:
    if (ctx->pc == 0x15C718u) {
        ctx->pc = 0x15C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C714u;
        // 0x15c718: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C71Cu;
        goto label_15c71c;
    }
    ctx->pc = 0x15C714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C71Cu);
        ctx->pc = 0x15C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C714u;
        // 0x15c718: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C714u, 0x15C71Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C71Cu;
label_15c71c:
    // 0x15c71c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15c720:
    // 0x15c720: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x15c720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_15c724:
    // 0x15c724: 0x40f809  jalr        $v0
label_15c728:
    if (ctx->pc == 0x15C728u) {
        ctx->pc = 0x15C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C724u;
        // 0x15c728: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C72Cu;
        goto label_15c72c;
    }
    ctx->pc = 0x15C724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C72Cu);
        ctx->pc = 0x15C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C724u;
        // 0x15c728: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C724u, 0x15C72Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C72Cu;
label_15c72c:
    // 0x15c72c: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x15c72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_15c730:
    // 0x15c730: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15c730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15c734:
    // 0x15c734: 0x40f809  jalr        $v0
label_15c738:
    if (ctx->pc == 0x15C738u) {
        ctx->pc = 0x15C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C734u;
        // 0x15c738: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C73Cu;
        goto label_15c73c;
    }
    ctx->pc = 0x15C734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C73Cu);
        ctx->pc = 0x15C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C734u;
        // 0x15c738: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C734u, 0x15C73Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C73Cu;
label_15c73c:
    // 0x15c73c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15c740:
    // 0x15c740: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x15c740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_15c744:
    // 0x15c744: 0x40f809  jalr        $v0
label_15c748:
    if (ctx->pc == 0x15C748u) {
        ctx->pc = 0x15C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C744u;
        // 0x15c748: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C74Cu;
        goto label_15c74c;
    }
    ctx->pc = 0x15C744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C74Cu);
        ctx->pc = 0x15C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C744u;
        // 0x15c748: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C744u, 0x15C74Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C74Cu;
label_15c74c:
    // 0x15c74c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15c750:
    // 0x15c750: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x15c750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15c754:
    // 0x15c754: 0x40f809  jalr        $v0
label_15c758:
    if (ctx->pc == 0x15C758u) {
        ctx->pc = 0x15C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C754u;
        // 0x15c758: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C75Cu;
        goto label_15c75c;
    }
    ctx->pc = 0x15C754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C75Cu);
        ctx->pc = 0x15C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C754u;
        // 0x15c758: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C754u, 0x15C75Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C75Cu;
label_15c75c:
    // 0x15c75c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15c760:
    // 0x15c760: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x15c760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_15c764:
    // 0x15c764: 0x40f809  jalr        $v0
label_15c768:
    if (ctx->pc == 0x15C768u) {
        ctx->pc = 0x15C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C764u;
        // 0x15c768: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C76Cu;
        goto label_15c76c;
    }
    ctx->pc = 0x15C764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C76Cu);
        ctx->pc = 0x15C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C764u;
        // 0x15c768: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C764u, 0x15C76Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C76Cu;
label_15c76c:
    // 0x15c76c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15c770:
    // 0x15c770: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x15c770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_15c774:
    // 0x15c774: 0x40f809  jalr        $v0
label_15c778:
    if (ctx->pc == 0x15C778u) {
        ctx->pc = 0x15C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C774u;
        // 0x15c778: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C77Cu;
        goto label_15c77c;
    }
    ctx->pc = 0x15C774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C77Cu);
        ctx->pc = 0x15C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C774u;
        // 0x15c778: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C774u, 0x15C77Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C77Cu;
label_15c77c:
    // 0x15c77c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15c780:
    // 0x15c780: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15c780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15c784:
    // 0x15c784: 0x40f809  jalr        $v0
label_15c788:
    if (ctx->pc == 0x15C788u) {
        ctx->pc = 0x15C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C784u;
        // 0x15c788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C78Cu;
        goto label_15c78c;
    }
    ctx->pc = 0x15C784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C78Cu);
        ctx->pc = 0x15C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C784u;
        // 0x15c788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C784u, 0x15C78Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C78Cu;
label_15c78c:
    // 0x15c78c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x15c78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_15c790:
    // 0x15c790: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x15c790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15c794:
    // 0x15c794: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15c794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15c798:
    // 0x15c798: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x15c798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_15c79c:
    // 0x15c79c: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x15c79cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15c7a0:
    // 0x15c7a0: 0xc091fea  jal         func_247FA8
label_15c7a4:
    if (ctx->pc == 0x15C7A4u) {
        ctx->pc = 0x15C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7A0u;
        // 0x15c7a4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C7A8u;
        goto label_15c7a8;
    }
    ctx->pc = 0x15C7A0u;
    SET_GPR_U32(ctx, 31, 0x15C7A8u);
    ctx->pc = 0x15C7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C7A0u;
    // 0x15c7a4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247FA8u, 0x15C7A0u, 0x15C7A8u)) {
        return;
    }
    ctx->pc = 0x15C7A8u;
label_15c7a8:
    // 0x15c7a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_15c7ac:
    if (ctx->pc == 0x15C7ACu) {
        ctx->pc = 0x15C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7A8u;
        // 0x15c7ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C7B0u;
        goto label_15c7b0;
    }
    ctx->pc = 0x15C7A8u;
    {
        const bool branch_taken_0x15c7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7A8u;
        // 0x15c7ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7a8) {
            ctx->pc = 0x15C7C4u;
            goto label_15c7c4;
        }
    }
    ctx->pc = 0x15C7B0u;
label_15c7b0:
    // 0x15c7b0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x15c7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_15c7b4:
    // 0x15c7b4: 0xc09202a  jal         func_2480A8
label_15c7b8:
    if (ctx->pc == 0x15C7B8u) {
        ctx->pc = 0x15C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7B4u;
        // 0x15c7b8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C7BCu;
        goto label_15c7bc;
    }
    ctx->pc = 0x15C7B4u;
    SET_GPR_U32(ctx, 31, 0x15C7BCu);
    ctx->pc = 0x15C7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C7B4u;
    // 0x15c7b8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2480A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2480A8u, 0x15C7B4u, 0x15C7BCu)) {
        return;
    }
    ctx->pc = 0x15C7BCu;
label_15c7bc:
    // 0x15c7bc: 0xc092016  jal         func_248058
label_15c7c0:
    if (ctx->pc == 0x15C7C0u) {
        ctx->pc = 0x15C7C4u;
        goto label_15c7c4;
    }
    ctx->pc = 0x15C7BCu;
    SET_GPR_U32(ctx, 31, 0x15C7C4u);
    ctx->pc = 0x248058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248058u, 0x15C7BCu, 0x15C7C4u)) {
        return;
    }
    ctx->pc = 0x15C7C4u;
label_15c7c4:
    // 0x15c7c4: 0x8fa56010  lw          $a1, 0x6010($sp)
    ctx->pc = 0x15c7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24592)));
label_15c7c8:
    // 0x15c7c8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15c7cc:
    // 0x15c7cc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15c7d0:
    // 0x15c7d0: 0x40f809  jalr        $v0
label_15c7d4:
    if (ctx->pc == 0x15C7D4u) {
        ctx->pc = 0x15C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7D0u;
        // 0x15c7d4: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C7D8u;
        goto label_15c7d8;
    }
    ctx->pc = 0x15C7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C7D8u);
        ctx->pc = 0x15C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7D0u;
        // 0x15c7d4: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C7D0u, 0x15C7D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C7D8u;
label_15c7d8:
    // 0x15c7d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15c7dc:
    // 0x15c7dc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x15c7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_15c7e0:
    // 0x15c7e0: 0x40f809  jalr        $v0
label_15c7e4:
    if (ctx->pc == 0x15C7E4u) {
        ctx->pc = 0x15C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7E0u;
        // 0x15c7e4: 0x8fa56014  lw          $a1, 0x6014($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24596)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C7E8u;
        goto label_15c7e8;
    }
    ctx->pc = 0x15C7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C7E8u);
        ctx->pc = 0x15C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7E0u;
        // 0x15c7e4: 0x8fa56014  lw          $a1, 0x6014($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24596)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C7E0u, 0x15C7E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C7E8u;
label_15c7e8:
    // 0x15c7e8: 0x7bb060a0  lq          $s0, 0x60A0($sp)
    ctx->pc = 0x15c7e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 24736)));
label_15c7ec:
    // 0x15c7ec: 0x7bb16090  lq          $s1, 0x6090($sp)
    ctx->pc = 0x15c7ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 24720)));
label_15c7f0:
    // 0x15c7f0: 0x7bb26080  lq          $s2, 0x6080($sp)
    ctx->pc = 0x15c7f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 24704)));
label_15c7f4:
    // 0x15c7f4: 0x7bb36070  lq          $s3, 0x6070($sp)
    ctx->pc = 0x15c7f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 24688)));
label_15c7f8:
    // 0x15c7f8: 0x7bb46060  lq          $s4, 0x6060($sp)
    ctx->pc = 0x15c7f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 24672)));
label_15c7fc:
    // 0x15c7fc: 0x7bb56050  lq          $s5, 0x6050($sp)
    ctx->pc = 0x15c7fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 24656)));
label_15c800:
    // 0x15c800: 0x7bb66040  lq          $s6, 0x6040($sp)
    ctx->pc = 0x15c800u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 24640)));
label_15c804:
    // 0x15c804: 0x7bb76030  lq          $s7, 0x6030($sp)
    ctx->pc = 0x15c804u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 24624)));
label_15c808:
    // 0x15c808: 0xdfbf6020  ld          $ra, 0x6020($sp)
    ctx->pc = 0x15c808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24608)));
label_15c80c:
    // 0x15c80c: 0x3e00008  jr          $ra
label_15c810:
    if (ctx->pc == 0x15C810u) {
        ctx->pc = 0x15C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C80Cu;
        // 0x15c810: 0x27bd60b0  addiu       $sp, $sp, 0x60B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 24752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C814u;
        goto label_15c814;
    }
    ctx->pc = 0x15C80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C80Cu;
        // 0x15c810: 0x27bd60b0  addiu       $sp, $sp, 0x60B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 24752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C814u;
label_15c814:
    // 0x15c814: 0x0  nop
    ctx->pc = 0x15c814u;
    // NOP
    ctx->pc = 0x15c818u;
}
