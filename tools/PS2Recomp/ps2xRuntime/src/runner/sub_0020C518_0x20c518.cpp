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

// Function: sub_0020C518
// Address: 0x20c518 - 0x20ca90
void sub_0020C518_0x20c518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C518_0x20c518");
#endif

    switch (ctx->pc) {
        case 0x20c518u: goto label_20c518;
        case 0x20c51cu: goto label_20c51c;
        case 0x20c520u: goto label_20c520;
        case 0x20c524u: goto label_20c524;
        case 0x20c528u: goto label_20c528;
        case 0x20c52cu: goto label_20c52c;
        case 0x20c530u: goto label_20c530;
        case 0x20c534u: goto label_20c534;
        case 0x20c538u: goto label_20c538;
        case 0x20c53cu: goto label_20c53c;
        case 0x20c540u: goto label_20c540;
        case 0x20c544u: goto label_20c544;
        case 0x20c548u: goto label_20c548;
        case 0x20c54cu: goto label_20c54c;
        case 0x20c550u: goto label_20c550;
        case 0x20c554u: goto label_20c554;
        case 0x20c558u: goto label_20c558;
        case 0x20c55cu: goto label_20c55c;
        case 0x20c560u: goto label_20c560;
        case 0x20c564u: goto label_20c564;
        case 0x20c568u: goto label_20c568;
        case 0x20c56cu: goto label_20c56c;
        case 0x20c570u: goto label_20c570;
        case 0x20c574u: goto label_20c574;
        case 0x20c578u: goto label_20c578;
        case 0x20c57cu: goto label_20c57c;
        case 0x20c580u: goto label_20c580;
        case 0x20c584u: goto label_20c584;
        case 0x20c588u: goto label_20c588;
        case 0x20c58cu: goto label_20c58c;
        case 0x20c590u: goto label_20c590;
        case 0x20c594u: goto label_20c594;
        case 0x20c598u: goto label_20c598;
        case 0x20c59cu: goto label_20c59c;
        case 0x20c5a0u: goto label_20c5a0;
        case 0x20c5a4u: goto label_20c5a4;
        case 0x20c5a8u: goto label_20c5a8;
        case 0x20c5acu: goto label_20c5ac;
        case 0x20c5b0u: goto label_20c5b0;
        case 0x20c5b4u: goto label_20c5b4;
        case 0x20c5b8u: goto label_20c5b8;
        case 0x20c5bcu: goto label_20c5bc;
        case 0x20c5c0u: goto label_20c5c0;
        case 0x20c5c4u: goto label_20c5c4;
        case 0x20c5c8u: goto label_20c5c8;
        case 0x20c5ccu: goto label_20c5cc;
        case 0x20c5d0u: goto label_20c5d0;
        case 0x20c5d4u: goto label_20c5d4;
        case 0x20c5d8u: goto label_20c5d8;
        case 0x20c5dcu: goto label_20c5dc;
        case 0x20c5e0u: goto label_20c5e0;
        case 0x20c5e4u: goto label_20c5e4;
        case 0x20c5e8u: goto label_20c5e8;
        case 0x20c5ecu: goto label_20c5ec;
        case 0x20c5f0u: goto label_20c5f0;
        case 0x20c5f4u: goto label_20c5f4;
        case 0x20c5f8u: goto label_20c5f8;
        case 0x20c5fcu: goto label_20c5fc;
        case 0x20c600u: goto label_20c600;
        case 0x20c604u: goto label_20c604;
        case 0x20c608u: goto label_20c608;
        case 0x20c60cu: goto label_20c60c;
        case 0x20c610u: goto label_20c610;
        case 0x20c614u: goto label_20c614;
        case 0x20c618u: goto label_20c618;
        case 0x20c61cu: goto label_20c61c;
        case 0x20c620u: goto label_20c620;
        case 0x20c624u: goto label_20c624;
        case 0x20c628u: goto label_20c628;
        case 0x20c62cu: goto label_20c62c;
        case 0x20c630u: goto label_20c630;
        case 0x20c634u: goto label_20c634;
        case 0x20c638u: goto label_20c638;
        case 0x20c63cu: goto label_20c63c;
        case 0x20c640u: goto label_20c640;
        case 0x20c644u: goto label_20c644;
        case 0x20c648u: goto label_20c648;
        case 0x20c64cu: goto label_20c64c;
        case 0x20c650u: goto label_20c650;
        case 0x20c654u: goto label_20c654;
        case 0x20c658u: goto label_20c658;
        case 0x20c65cu: goto label_20c65c;
        case 0x20c660u: goto label_20c660;
        case 0x20c664u: goto label_20c664;
        case 0x20c668u: goto label_20c668;
        case 0x20c66cu: goto label_20c66c;
        case 0x20c670u: goto label_20c670;
        case 0x20c674u: goto label_20c674;
        case 0x20c678u: goto label_20c678;
        case 0x20c67cu: goto label_20c67c;
        case 0x20c680u: goto label_20c680;
        case 0x20c684u: goto label_20c684;
        case 0x20c688u: goto label_20c688;
        case 0x20c68cu: goto label_20c68c;
        case 0x20c690u: goto label_20c690;
        case 0x20c694u: goto label_20c694;
        case 0x20c698u: goto label_20c698;
        case 0x20c69cu: goto label_20c69c;
        case 0x20c6a0u: goto label_20c6a0;
        case 0x20c6a4u: goto label_20c6a4;
        case 0x20c6a8u: goto label_20c6a8;
        case 0x20c6acu: goto label_20c6ac;
        case 0x20c6b0u: goto label_20c6b0;
        case 0x20c6b4u: goto label_20c6b4;
        case 0x20c6b8u: goto label_20c6b8;
        case 0x20c6bcu: goto label_20c6bc;
        case 0x20c6c0u: goto label_20c6c0;
        case 0x20c6c4u: goto label_20c6c4;
        case 0x20c6c8u: goto label_20c6c8;
        case 0x20c6ccu: goto label_20c6cc;
        case 0x20c6d0u: goto label_20c6d0;
        case 0x20c6d4u: goto label_20c6d4;
        case 0x20c6d8u: goto label_20c6d8;
        case 0x20c6dcu: goto label_20c6dc;
        case 0x20c6e0u: goto label_20c6e0;
        case 0x20c6e4u: goto label_20c6e4;
        case 0x20c6e8u: goto label_20c6e8;
        case 0x20c6ecu: goto label_20c6ec;
        case 0x20c6f0u: goto label_20c6f0;
        case 0x20c6f4u: goto label_20c6f4;
        case 0x20c6f8u: goto label_20c6f8;
        case 0x20c6fcu: goto label_20c6fc;
        case 0x20c700u: goto label_20c700;
        case 0x20c704u: goto label_20c704;
        case 0x20c708u: goto label_20c708;
        case 0x20c70cu: goto label_20c70c;
        case 0x20c710u: goto label_20c710;
        case 0x20c714u: goto label_20c714;
        case 0x20c718u: goto label_20c718;
        case 0x20c71cu: goto label_20c71c;
        case 0x20c720u: goto label_20c720;
        case 0x20c724u: goto label_20c724;
        case 0x20c728u: goto label_20c728;
        case 0x20c72cu: goto label_20c72c;
        case 0x20c730u: goto label_20c730;
        case 0x20c734u: goto label_20c734;
        case 0x20c738u: goto label_20c738;
        case 0x20c73cu: goto label_20c73c;
        case 0x20c740u: goto label_20c740;
        case 0x20c744u: goto label_20c744;
        case 0x20c748u: goto label_20c748;
        case 0x20c74cu: goto label_20c74c;
        case 0x20c750u: goto label_20c750;
        case 0x20c754u: goto label_20c754;
        case 0x20c758u: goto label_20c758;
        case 0x20c75cu: goto label_20c75c;
        case 0x20c760u: goto label_20c760;
        case 0x20c764u: goto label_20c764;
        case 0x20c768u: goto label_20c768;
        case 0x20c76cu: goto label_20c76c;
        case 0x20c770u: goto label_20c770;
        case 0x20c774u: goto label_20c774;
        case 0x20c778u: goto label_20c778;
        case 0x20c77cu: goto label_20c77c;
        case 0x20c780u: goto label_20c780;
        case 0x20c784u: goto label_20c784;
        case 0x20c788u: goto label_20c788;
        case 0x20c78cu: goto label_20c78c;
        case 0x20c790u: goto label_20c790;
        case 0x20c794u: goto label_20c794;
        case 0x20c798u: goto label_20c798;
        case 0x20c79cu: goto label_20c79c;
        case 0x20c7a0u: goto label_20c7a0;
        case 0x20c7a4u: goto label_20c7a4;
        case 0x20c7a8u: goto label_20c7a8;
        case 0x20c7acu: goto label_20c7ac;
        case 0x20c7b0u: goto label_20c7b0;
        case 0x20c7b4u: goto label_20c7b4;
        case 0x20c7b8u: goto label_20c7b8;
        case 0x20c7bcu: goto label_20c7bc;
        case 0x20c7c0u: goto label_20c7c0;
        case 0x20c7c4u: goto label_20c7c4;
        case 0x20c7c8u: goto label_20c7c8;
        case 0x20c7ccu: goto label_20c7cc;
        case 0x20c7d0u: goto label_20c7d0;
        case 0x20c7d4u: goto label_20c7d4;
        case 0x20c7d8u: goto label_20c7d8;
        case 0x20c7dcu: goto label_20c7dc;
        case 0x20c7e0u: goto label_20c7e0;
        case 0x20c7e4u: goto label_20c7e4;
        case 0x20c7e8u: goto label_20c7e8;
        case 0x20c7ecu: goto label_20c7ec;
        case 0x20c7f0u: goto label_20c7f0;
        case 0x20c7f4u: goto label_20c7f4;
        case 0x20c7f8u: goto label_20c7f8;
        case 0x20c7fcu: goto label_20c7fc;
        case 0x20c800u: goto label_20c800;
        case 0x20c804u: goto label_20c804;
        case 0x20c808u: goto label_20c808;
        case 0x20c80cu: goto label_20c80c;
        case 0x20c810u: goto label_20c810;
        case 0x20c814u: goto label_20c814;
        case 0x20c818u: goto label_20c818;
        case 0x20c81cu: goto label_20c81c;
        case 0x20c820u: goto label_20c820;
        case 0x20c824u: goto label_20c824;
        case 0x20c828u: goto label_20c828;
        case 0x20c82cu: goto label_20c82c;
        case 0x20c830u: goto label_20c830;
        case 0x20c834u: goto label_20c834;
        case 0x20c838u: goto label_20c838;
        case 0x20c83cu: goto label_20c83c;
        case 0x20c840u: goto label_20c840;
        case 0x20c844u: goto label_20c844;
        case 0x20c848u: goto label_20c848;
        case 0x20c84cu: goto label_20c84c;
        case 0x20c850u: goto label_20c850;
        case 0x20c854u: goto label_20c854;
        case 0x20c858u: goto label_20c858;
        case 0x20c85cu: goto label_20c85c;
        case 0x20c860u: goto label_20c860;
        case 0x20c864u: goto label_20c864;
        case 0x20c868u: goto label_20c868;
        case 0x20c86cu: goto label_20c86c;
        case 0x20c870u: goto label_20c870;
        case 0x20c874u: goto label_20c874;
        case 0x20c878u: goto label_20c878;
        case 0x20c87cu: goto label_20c87c;
        case 0x20c880u: goto label_20c880;
        case 0x20c884u: goto label_20c884;
        case 0x20c888u: goto label_20c888;
        case 0x20c88cu: goto label_20c88c;
        case 0x20c890u: goto label_20c890;
        case 0x20c894u: goto label_20c894;
        case 0x20c898u: goto label_20c898;
        case 0x20c89cu: goto label_20c89c;
        case 0x20c8a0u: goto label_20c8a0;
        case 0x20c8a4u: goto label_20c8a4;
        case 0x20c8a8u: goto label_20c8a8;
        case 0x20c8acu: goto label_20c8ac;
        case 0x20c8b0u: goto label_20c8b0;
        case 0x20c8b4u: goto label_20c8b4;
        case 0x20c8b8u: goto label_20c8b8;
        case 0x20c8bcu: goto label_20c8bc;
        case 0x20c8c0u: goto label_20c8c0;
        case 0x20c8c4u: goto label_20c8c4;
        case 0x20c8c8u: goto label_20c8c8;
        case 0x20c8ccu: goto label_20c8cc;
        case 0x20c8d0u: goto label_20c8d0;
        case 0x20c8d4u: goto label_20c8d4;
        case 0x20c8d8u: goto label_20c8d8;
        case 0x20c8dcu: goto label_20c8dc;
        case 0x20c8e0u: goto label_20c8e0;
        case 0x20c8e4u: goto label_20c8e4;
        case 0x20c8e8u: goto label_20c8e8;
        case 0x20c8ecu: goto label_20c8ec;
        case 0x20c8f0u: goto label_20c8f0;
        case 0x20c8f4u: goto label_20c8f4;
        case 0x20c8f8u: goto label_20c8f8;
        case 0x20c8fcu: goto label_20c8fc;
        case 0x20c900u: goto label_20c900;
        case 0x20c904u: goto label_20c904;
        case 0x20c908u: goto label_20c908;
        case 0x20c90cu: goto label_20c90c;
        case 0x20c910u: goto label_20c910;
        case 0x20c914u: goto label_20c914;
        case 0x20c918u: goto label_20c918;
        case 0x20c91cu: goto label_20c91c;
        case 0x20c920u: goto label_20c920;
        case 0x20c924u: goto label_20c924;
        case 0x20c928u: goto label_20c928;
        case 0x20c92cu: goto label_20c92c;
        case 0x20c930u: goto label_20c930;
        case 0x20c934u: goto label_20c934;
        case 0x20c938u: goto label_20c938;
        case 0x20c93cu: goto label_20c93c;
        case 0x20c940u: goto label_20c940;
        case 0x20c944u: goto label_20c944;
        case 0x20c948u: goto label_20c948;
        case 0x20c94cu: goto label_20c94c;
        case 0x20c950u: goto label_20c950;
        case 0x20c954u: goto label_20c954;
        case 0x20c958u: goto label_20c958;
        case 0x20c95cu: goto label_20c95c;
        case 0x20c960u: goto label_20c960;
        case 0x20c964u: goto label_20c964;
        case 0x20c968u: goto label_20c968;
        case 0x20c96cu: goto label_20c96c;
        case 0x20c970u: goto label_20c970;
        case 0x20c974u: goto label_20c974;
        case 0x20c978u: goto label_20c978;
        case 0x20c97cu: goto label_20c97c;
        case 0x20c980u: goto label_20c980;
        case 0x20c984u: goto label_20c984;
        case 0x20c988u: goto label_20c988;
        case 0x20c98cu: goto label_20c98c;
        case 0x20c990u: goto label_20c990;
        case 0x20c994u: goto label_20c994;
        case 0x20c998u: goto label_20c998;
        case 0x20c99cu: goto label_20c99c;
        case 0x20c9a0u: goto label_20c9a0;
        case 0x20c9a4u: goto label_20c9a4;
        case 0x20c9a8u: goto label_20c9a8;
        case 0x20c9acu: goto label_20c9ac;
        case 0x20c9b0u: goto label_20c9b0;
        case 0x20c9b4u: goto label_20c9b4;
        case 0x20c9b8u: goto label_20c9b8;
        case 0x20c9bcu: goto label_20c9bc;
        case 0x20c9c0u: goto label_20c9c0;
        case 0x20c9c4u: goto label_20c9c4;
        case 0x20c9c8u: goto label_20c9c8;
        case 0x20c9ccu: goto label_20c9cc;
        case 0x20c9d0u: goto label_20c9d0;
        case 0x20c9d4u: goto label_20c9d4;
        case 0x20c9d8u: goto label_20c9d8;
        case 0x20c9dcu: goto label_20c9dc;
        case 0x20c9e0u: goto label_20c9e0;
        case 0x20c9e4u: goto label_20c9e4;
        case 0x20c9e8u: goto label_20c9e8;
        case 0x20c9ecu: goto label_20c9ec;
        case 0x20c9f0u: goto label_20c9f0;
        case 0x20c9f4u: goto label_20c9f4;
        case 0x20c9f8u: goto label_20c9f8;
        case 0x20c9fcu: goto label_20c9fc;
        case 0x20ca00u: goto label_20ca00;
        case 0x20ca04u: goto label_20ca04;
        case 0x20ca08u: goto label_20ca08;
        case 0x20ca0cu: goto label_20ca0c;
        case 0x20ca10u: goto label_20ca10;
        case 0x20ca14u: goto label_20ca14;
        case 0x20ca18u: goto label_20ca18;
        case 0x20ca1cu: goto label_20ca1c;
        case 0x20ca20u: goto label_20ca20;
        case 0x20ca24u: goto label_20ca24;
        case 0x20ca28u: goto label_20ca28;
        case 0x20ca2cu: goto label_20ca2c;
        case 0x20ca30u: goto label_20ca30;
        case 0x20ca34u: goto label_20ca34;
        case 0x20ca38u: goto label_20ca38;
        case 0x20ca3cu: goto label_20ca3c;
        case 0x20ca40u: goto label_20ca40;
        case 0x20ca44u: goto label_20ca44;
        case 0x20ca48u: goto label_20ca48;
        case 0x20ca4cu: goto label_20ca4c;
        case 0x20ca50u: goto label_20ca50;
        case 0x20ca54u: goto label_20ca54;
        case 0x20ca58u: goto label_20ca58;
        case 0x20ca5cu: goto label_20ca5c;
        case 0x20ca60u: goto label_20ca60;
        case 0x20ca64u: goto label_20ca64;
        case 0x20ca68u: goto label_20ca68;
        case 0x20ca6cu: goto label_20ca6c;
        case 0x20ca70u: goto label_20ca70;
        case 0x20ca74u: goto label_20ca74;
        case 0x20ca78u: goto label_20ca78;
        case 0x20ca7cu: goto label_20ca7c;
        case 0x20ca80u: goto label_20ca80;
        case 0x20ca84u: goto label_20ca84;
        case 0x20ca88u: goto label_20ca88;
        case 0x20ca8cu: goto label_20ca8c;
        default: break;
    }

    ctx->pc = 0x20c518u;

label_20c518:
    // 0x20c518: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x20c518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_20c51c:
    // 0x20c51c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c520:
    // 0x20c520: 0x7fb001d0  sq          $s0, 0x1D0($sp)
    ctx->pc = 0x20c520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 16));
label_20c524:
    // 0x20c524: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x20c524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20c528:
    // 0x20c528: 0x7fb70160  sq          $s7, 0x160($sp)
    ctx->pc = 0x20c528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 23));
label_20c52c:
    // 0x20c52c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20c52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20c530:
    // 0x20c530: 0x7fb101c0  sq          $s1, 0x1C0($sp)
    ctx->pc = 0x20c530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 17));
label_20c534:
    // 0x20c534: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x20c534u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20c538:
    // 0x20c538: 0x7fb201b0  sq          $s2, 0x1B0($sp)
    ctx->pc = 0x20c538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 18));
label_20c53c:
    // 0x20c53c: 0x7fb301a0  sq          $s3, 0x1A0($sp)
    ctx->pc = 0x20c53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 19));
label_20c540:
    // 0x20c540: 0x7fb40190  sq          $s4, 0x190($sp)
    ctx->pc = 0x20c540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 20));
label_20c544:
    // 0x20c544: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x20c544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
label_20c548:
    // 0x20c548: 0x7fb60170  sq          $s6, 0x170($sp)
    ctx->pc = 0x20c548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 22));
label_20c54c:
    // 0x20c54c: 0x7fbe0150  sq          $fp, 0x150($sp)
    ctx->pc = 0x20c54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 30));
label_20c550:
    // 0x20c550: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x20c550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_20c554:
    // 0x20c554: 0x8ee30194  lw          $v1, 0x194($s7)
    ctx->pc = 0x20c554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 404)));
label_20c558:
    // 0x20c558: 0x8efe01bc  lw          $fp, 0x1BC($s7)
    ctx->pc = 0x20c558u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 444)));
label_20c55c:
    // 0x20c55c: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x20c55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
label_20c560:
    // 0x20c560: 0x8ee3019c  lw          $v1, 0x19C($s7)
    ctx->pc = 0x20c560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 412)));
label_20c564:
    // 0x20c564: 0x8ee40114  lw          $a0, 0x114($s7)
    ctx->pc = 0x20c564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 276)));
label_20c568:
    // 0x20c568: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x20c568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_20c56c:
    // 0x20c56c: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x20c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_20c570:
    // 0x20c570: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x20c570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
label_20c574:
    // 0x20c574: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
label_20c578:
    if (ctx->pc == 0x20C578u) {
        ctx->pc = 0x20C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C574u;
        // 0x20c578: 0xafa30128  sw          $v1, 0x128($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C57Cu;
        goto label_20c57c;
    }
    ctx->pc = 0x20C574u;
    {
        const bool branch_taken_0x20c574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C574u;
        // 0x20c578: 0xafa30128  sw          $v1, 0x128($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c574) {
            ctx->pc = 0x20C61Cu;
            goto label_20c61c;
        }
    }
    ctx->pc = 0x20C57Cu;
label_20c57c:
    // 0x20c57c: 0x8fc20034  lw          $v0, 0x34($fp)
    ctx->pc = 0x20c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_20c580:
    // 0x20c580: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_20c584:
    if (ctx->pc == 0x20C584u) {
        ctx->pc = 0x20C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C580u;
        // 0x20c584: 0x8fc20008  lw          $v0, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C588u;
        goto label_20c588;
    }
    ctx->pc = 0x20C580u;
    {
        const bool branch_taken_0x20c580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c580) {
            ctx->pc = 0x20C584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C580u;
            // 0x20c584: 0x8fc20008  lw          $v0, 0x8($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C620u;
            goto label_20c620;
        }
    }
    ctx->pc = 0x20C588u;
label_20c588:
    // 0x20c588: 0x8fc50018  lw          $a1, 0x18($fp)
    ctx->pc = 0x20c588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_20c58c:
    // 0x20c58c: 0x8ee701b8  lw          $a3, 0x1B8($s7)
    ctx->pc = 0x20c58cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 440)));
label_20c590:
    // 0x20c590: 0xc5302a  slt         $a2, $a2, $a1
    ctx->pc = 0x20c590u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_20c594:
    // 0x20c594: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x20c594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_20c598:
    // 0x20c598: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x20c598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_20c59c:
    // 0x20c59c: 0xa6100b  movn        $v0, $a1, $a2
    ctx->pc = 0x20c59cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5));
label_20c5a0:
    // 0x20c5a0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x20c5a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_20c5a4:
    // 0x20c5a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20c5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20c5a8:
    // 0x20c5a8: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x20c5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_20c5ac:
    // 0x20c5ac: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x20c5acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
label_20c5b0:
    // 0x20c5b0: 0x8ee301b8  lw          $v1, 0x1B8($s7)
    ctx->pc = 0x20c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 440)));
label_20c5b4:
    // 0x20c5b4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20c5b8:
    // 0x20c5b8: 0x40f809  jalr        $v0
label_20c5bc:
    if (ctx->pc == 0x20C5BCu) {
        ctx->pc = 0x20C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5B8u;
        // 0x20c5bc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C5C0u;
        goto label_20c5c0;
    }
    ctx->pc = 0x20C5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20C5C0u);
        ctx->pc = 0x20C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5B8u;
        // 0x20c5bc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C5B8u, 0x20C5C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C5C0u;
label_20c5c0:
    // 0x20c5c0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_20c5c4:
    if (ctx->pc == 0x20C5C4u) {
        ctx->pc = 0x20C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5C0u;
        // 0x20c5c4: 0x8ee20148  lw          $v0, 0x148($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C5C8u;
        goto label_20c5c8;
    }
    ctx->pc = 0x20C5C0u;
    {
        const bool branch_taken_0x20c5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c5c0) {
            ctx->pc = 0x20C5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C5C0u;
            // 0x20c5c4: 0x8ee20148  lw          $v0, 0x148($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C5D0u;
            goto label_20c5d0;
        }
    }
    ctx->pc = 0x20C5C8u;
label_20c5c8:
    // 0x20c5c8: 0x10000012  b           . + 4 + (0x12 << 2)
label_20c5cc:
    if (ctx->pc == 0x20C5CCu) {
        ctx->pc = 0x20C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5C8u;
        // 0x20c5cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C5D0u;
        goto label_20c5d0;
    }
    ctx->pc = 0x20C5C8u;
    {
        const bool branch_taken_0x20c5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5C8u;
        // 0x20c5cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5c8) {
            ctx->pc = 0x20C614u;
            goto label_20c614;
        }
    }
    ctx->pc = 0x20C5D0u;
label_20c5d0:
    // 0x20c5d0: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_20c5d4:
    if (ctx->pc == 0x20C5D4u) {
        ctx->pc = 0x20C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5D0u;
        // 0x20c5d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C5D8u;
        goto label_20c5d8;
    }
    ctx->pc = 0x20C5D0u;
    {
        const bool branch_taken_0x20c5d0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5D0u;
        // 0x20c5d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5d0) {
            ctx->pc = 0x20C5F8u;
            goto label_20c5f8;
        }
    }
    ctx->pc = 0x20C5D8u;
label_20c5d8:
    // 0x20c5d8: 0x27c30024  addiu       $v1, $fp, 0x24
    ctx->pc = 0x20c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 36));
label_20c5dc:
    // 0x20c5dc: 0x0  nop
    ctx->pc = 0x20c5dcu;
    // NOP
label_20c5e0:
    // 0x20c5e0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x20c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_20c5e4:
    // 0x20c5e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20c5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20c5e8:
    // 0x20c5e8: 0x8ee20148  lw          $v0, 0x148($s7)
    ctx->pc = 0x20c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 328)));
label_20c5ec:
    // 0x20c5ec: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x20c5ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20c5f0:
    // 0x20c5f0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_20c5f4:
    if (ctx->pc == 0x20C5F4u) {
        ctx->pc = 0x20C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5F0u;
        // 0x20c5f4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C5F8u;
        goto label_20c5f8;
    }
    ctx->pc = 0x20C5F0u;
    {
        const bool branch_taken_0x20c5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5F0u;
        // 0x20c5f4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5f0) {
            ctx->pc = 0x20C5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c5e0;
        }
    }
    ctx->pc = 0x20C5F8u;
label_20c5f8:
    // 0x20c5f8: 0xafc00020  sw          $zero, 0x20($fp)
    ctx->pc = 0x20c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 0));
label_20c5fc:
    // 0x20c5fc: 0x8ee20114  lw          $v0, 0x114($s7)
    ctx->pc = 0x20c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 276)));
label_20c600:
    // 0x20c600: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x20c600u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
label_20c604:
    // 0x20c604: 0x8ee301a0  lw          $v1, 0x1A0($s7)
    ctx->pc = 0x20c604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 416)));
label_20c608:
    // 0x20c608: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_20c60c:
    if (ctx->pc == 0x20C60Cu) {
        ctx->pc = 0x20C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C608u;
        // 0x20c60c: 0xafc00008  sw          $zero, 0x8($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C610u;
        goto label_20c610;
    }
    ctx->pc = 0x20C608u;
    {
        const bool branch_taken_0x20c608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c608) {
            ctx->pc = 0x20C60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C608u;
            // 0x20c60c: 0xafc00008  sw          $zero, 0x8($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C610u;
            goto label_20c610;
        }
    }
    ctx->pc = 0x20C610u;
label_20c610:
    // 0x20c610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c614:
    // 0x20c614: 0x10400111  beqz        $v0, . + 4 + (0x111 << 2)
label_20c618:
    if (ctx->pc == 0x20C618u) {
        ctx->pc = 0x20C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C614u;
        // 0x20c618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C61Cu;
        goto label_20c61c;
    }
    ctx->pc = 0x20C614u;
    {
        const bool branch_taken_0x20c614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C614u;
        // 0x20c618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c614) {
            ctx->pc = 0x20CA5Cu;
            goto label_20ca5c;
        }
    }
    ctx->pc = 0x20C61Cu;
label_20c61c:
    // 0x20c61c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x20c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_20c620:
    // 0x20c620: 0x544000f9  bnel        $v0, $zero, . + 4 + (0xF9 << 2)
label_20c624:
    if (ctx->pc == 0x20C624u) {
        ctx->pc = 0x20C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C620u;
        // 0x20c624: 0x8fc30034  lw          $v1, 0x34($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C628u;
        goto label_20c628;
    }
    ctx->pc = 0x20C620u;
    {
        const bool branch_taken_0x20c620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c620) {
            ctx->pc = 0x20C624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C620u;
            // 0x20c624: 0x8fc30034  lw          $v1, 0x34($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CA08u;
            goto label_20ca08;
        }
    }
    ctx->pc = 0x20C628u;
label_20c628:
    // 0x20c628: 0xafb70014  sw          $s7, 0x14($sp)
    ctx->pc = 0x20c628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 23));
label_20c62c:
    // 0x20c62c: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x20c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
label_20c630:
    // 0x20c630: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x20c630u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20c634:
    // 0x20c634: 0x8ee40018  lw          $a0, 0x18($s7)
    ctx->pc = 0x20c634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
label_20c638:
    // 0x20c638: 0xafb00130  sw          $s0, 0x130($sp)
    ctx->pc = 0x20c638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 16));
label_20c63c:
    // 0x20c63c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20c63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20c640:
    // 0x20c640: 0x8ef50190  lw          $s5, 0x190($s7)
    ctx->pc = 0x20c640u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 400)));
label_20c644:
    // 0x20c644: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x20c644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_20c648:
    // 0x20c648: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x20c648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_20c64c:
    // 0x20c64c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x20c64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_20c650:
    // 0x20c650: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x20c650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_20c654:
    // 0x20c654: 0xafa40134  sw          $a0, 0x134($sp)
    ctx->pc = 0x20c654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 4));
label_20c658:
    // 0x20c658: 0x8fc50020  lw          $a1, 0x20($fp)
    ctx->pc = 0x20c658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_20c65c:
    // 0x20c65c: 0xafa5012c  sw          $a1, 0x12C($sp)
    ctx->pc = 0x20c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 5));
label_20c660:
    // 0x20c660: 0xdfd40010  ld          $s4, 0x10($fp)
    ctx->pc = 0x20c660u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 30), 16)));
label_20c664:
    // 0x20c664: 0x14a000ab  bnez        $a1, . + 4 + (0xAB << 2)
label_20c668:
    if (ctx->pc == 0x20C668u) {
        ctx->pc = 0x20C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C664u;
        // 0x20c668: 0x8fd00018  lw          $s0, 0x18($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C66Cu;
        goto label_20c66c;
    }
    ctx->pc = 0x20C664u;
    {
        const bool branch_taken_0x20c664 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C664u;
        // 0x20c668: 0x8fd00018  lw          $s0, 0x18($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c664) {
            ctx->pc = 0x20C914u;
            goto label_20c914;
        }
    }
    ctx->pc = 0x20C66Cu;
label_20c66c:
    // 0x20c66c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x20c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_20c670:
    // 0x20c670: 0x75102a  slt         $v0, $v1, $s5
    ctx->pc = 0x20c670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_20c674:
    // 0x20c674: 0x144000a5  bnez        $v0, . + 4 + (0xA5 << 2)
label_20c678:
    if (ctx->pc == 0x20C678u) {
        ctx->pc = 0x20C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C674u;
        // 0x20c678: 0x8fa4012c  lw          $a0, 0x12C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C67Cu;
        goto label_20c67c;
    }
    ctx->pc = 0x20C674u;
    {
        const bool branch_taken_0x20c674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C674u;
        // 0x20c678: 0x8fa4012c  lw          $a0, 0x12C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c674) {
            ctx->pc = 0x20C90Cu;
            goto label_20c90c;
        }
    }
    ctx->pc = 0x20C67Cu;
label_20c67c:
    // 0x20c67c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20c680:
    // 0x20c680: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x20c680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_20c684:
    // 0x20c684: 0x244256b8  addiu       $v0, $v0, 0x56B8
    ctx->pc = 0x20c684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22200));
label_20c688:
    // 0x20c688: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x20c688u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20c68c:
    // 0x20c68c: 0x0  nop
    ctx->pc = 0x20c68cu;
    // NOP
label_20c690:
    // 0x20c690: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x20c690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_20c694:
    // 0x20c694: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_20c698:
    if (ctx->pc == 0x20C698u) {
        ctx->pc = 0x20C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C694u;
        // 0x20c698: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C69Cu;
        goto label_20c69c;
    }
    ctx->pc = 0x20C694u;
    {
        const bool branch_taken_0x20c694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C694u;
        // 0x20c698: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c694) {
            ctx->pc = 0x20C6C8u;
            goto label_20c6c8;
        }
    }
    ctx->pc = 0x20C69Cu;
label_20c69c:
    // 0x20c69c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20c69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c6a0:
    // 0x20c6a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20c6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20c6a4:
    // 0x20c6a4: 0xc087e18  jal         func_21F860
label_20c6a8:
    if (ctx->pc == 0x20C6A8u) {
        ctx->pc = 0x20C6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6A4u;
        // 0x20c6a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C6ACu;
        goto label_20c6ac;
    }
    ctx->pc = 0x20C6A4u;
    SET_GPR_U32(ctx, 31, 0x20C6ACu);
    ctx->pc = 0x20C6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C6A4u;
    // 0x20c6a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21F860u, 0x20C6A4u, 0x20C6ACu)) {
        return;
    }
    ctx->pc = 0x20C6ACu;
label_20c6ac:
    // 0x20c6ac: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
label_20c6b0:
    if (ctx->pc == 0x20C6B0u) {
        ctx->pc = 0x20C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6ACu;
        // 0x20c6b0: 0x8fb00010  lw          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C6B4u;
        goto label_20c6b4;
    }
    ctx->pc = 0x20C6ACu;
    {
        const bool branch_taken_0x20c6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6ACu;
        // 0x20c6b0: 0x8fb00010  lw          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6ac) {
            ctx->pc = 0x20CA18u;
            goto label_20ca18;
        }
    }
    ctx->pc = 0x20C6B4u;
label_20c6b4:
    // 0x20c6b4: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x20c6b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_20c6b8:
    // 0x20c6b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20c6bc:
    if (ctx->pc == 0x20C6BCu) {
        ctx->pc = 0x20C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6B8u;
        // 0x20c6bc: 0xdfb40008  ld          $s4, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C6C0u;
        goto label_20c6c0;
    }
    ctx->pc = 0x20C6B8u;
    {
        const bool branch_taken_0x20c6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6B8u;
        // 0x20c6bc: 0xdfb40008  ld          $s4, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6b8) {
            ctx->pc = 0x20C6C8u;
            goto label_20c6c8;
        }
    }
    ctx->pc = 0x20C6C0u;
label_20c6c0:
    // 0x20c6c0: 0x10000010  b           . + 4 + (0x10 << 2)
label_20c6c4:
    if (ctx->pc == 0x20C6C4u) {
        ctx->pc = 0x20C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6C0u;
        // 0x20c6c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C6C8u;
        goto label_20c6c8;
    }
    ctx->pc = 0x20C6C0u;
    {
        const bool branch_taken_0x20c6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6C0u;
        // 0x20c6c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6c0) {
            ctx->pc = 0x20C704u;
            goto label_20c704;
        }
    }
    ctx->pc = 0x20C6C8u;
label_20c6c8:
    // 0x20c6c8: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x20c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_20c6cc:
    // 0x20c6cc: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x20c6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_20c6d0:
    // 0x20c6d0: 0x541017  dsrav       $v0, $s4, $v0
    ctx->pc = 0x20c6d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 20) >> (GPR_U32(ctx, 2) & 0x3F));
label_20c6d4:
    // 0x20c6d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20c6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20c6d8:
    // 0x20c6d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20c6d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20c6dc:
    // 0x20c6dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_20c6e0:
    // 0x20c6e0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x20c6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20c6e4:
    // 0x20c6e4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x20c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_20c6e8:
    // 0x20c6e8: 0x8c68011c  lw          $t0, 0x11C($v1)
    ctx->pc = 0x20c6e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_20c6ec:
    // 0x20c6ec: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_20c6f0:
    if (ctx->pc == 0x20C6F0u) {
        ctx->pc = 0x20C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6ECu;
        // 0x20c6f0: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C6F4u;
        goto label_20c6f4;
    }
    ctx->pc = 0x20C6ECu;
    {
        const bool branch_taken_0x20c6ec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6ECu;
        // 0x20c6f0: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6ec) {
            ctx->pc = 0x20C700u;
            goto label_20c700;
        }
    }
    ctx->pc = 0x20C6F4u;
label_20c6f4:
    // 0x20c6f4: 0x2088023  subu        $s0, $s0, $t0
    ctx->pc = 0x20c6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_20c6f8:
    // 0x20c6f8: 0x1000000b  b           . + 4 + (0xB << 2)
label_20c6fc:
    if (ctx->pc == 0x20C6FCu) {
        ctx->pc = 0x20C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6F8u;
        // 0x20c6fc: 0x9052051c  lbu         $s2, 0x51C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C700u;
        goto label_20c700;
    }
    ctx->pc = 0x20C6F8u;
    {
        const bool branch_taken_0x20c6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6F8u;
        // 0x20c6fc: 0x9052051c  lbu         $s2, 0x51C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6f8) {
            ctx->pc = 0x20C728u;
            goto label_20c728;
        }
    }
    ctx->pc = 0x20C700u;
label_20c700:
    // 0x20c700: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x20c700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_20c704:
    // 0x20c704: 0x8fa70134  lw          $a3, 0x134($sp)
    ctx->pc = 0x20c704u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_20c708:
    // 0x20c708: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20c708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20c70c:
    // 0x20c70c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20c70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c710:
    // 0x20c710: 0xc0879b4  jal         func_21E6D0
label_20c714:
    if (ctx->pc == 0x20C714u) {
        ctx->pc = 0x20C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C710u;
        // 0x20c714: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C718u;
        goto label_20c718;
    }
    ctx->pc = 0x20C710u;
    SET_GPR_U32(ctx, 31, 0x20C718u);
    ctx->pc = 0x20C714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C710u;
    // 0x20c714: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E6D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21E6D0u, 0x20C710u, 0x20C718u)) {
        return;
    }
    ctx->pc = 0x20C718u;
label_20c718:
    // 0x20c718: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20c718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c71c:
    // 0x20c71c: 0x64000be  bltz        $s2, . + 4 + (0xBE << 2)
label_20c720:
    if (ctx->pc == 0x20C720u) {
        ctx->pc = 0x20C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C71Cu;
        // 0x20c720: 0xdfb40008  ld          $s4, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C724u;
        goto label_20c724;
    }
    ctx->pc = 0x20C71Cu;
    {
        const bool branch_taken_0x20c71c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x20C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C71Cu;
        // 0x20c720: 0xdfb40008  ld          $s4, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c71c) {
            ctx->pc = 0x20CA18u;
            goto label_20ca18;
        }
    }
    ctx->pc = 0x20C724u;
label_20c724:
    // 0x20c724: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x20c724u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_20c728:
    // 0x20c728: 0x129903  sra         $s3, $s2, 4
    ctx->pc = 0x20c728u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 18), 4));
label_20c72c:
    // 0x20c72c: 0x3252000f  andi        $s2, $s2, 0xF
    ctx->pc = 0x20c72cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
label_20c730:
    // 0x20c730: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
label_20c734:
    if (ctx->pc == 0x20C734u) {
        ctx->pc = 0x20C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C730u;
        // 0x20c734: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C738u;
        goto label_20c738;
    }
    ctx->pc = 0x20C730u;
    {
        const bool branch_taken_0x20c730 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C730u;
        // 0x20c734: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c730) {
            ctx->pc = 0x20C7A8u;
            goto label_20c7a8;
        }
    }
    ctx->pc = 0x20C738u;
label_20c738:
    // 0x20c738: 0x12450008  beq         $s2, $a1, . + 4 + (0x8 << 2)
label_20c73c:
    if (ctx->pc == 0x20C73Cu) {
        ctx->pc = 0x20C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C738u;
        // 0x20c73c: 0x24030076  addiu       $v1, $zero, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C740u;
        goto label_20c740;
    }
    ctx->pc = 0x20C738u;
    {
        const bool branch_taken_0x20c738 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x20C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C738u;
        // 0x20c73c: 0x24030076  addiu       $v1, $zero, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c738) {
            ctx->pc = 0x20C75Cu;
            goto label_20c75c;
        }
    }
    ctx->pc = 0x20C740u;
label_20c740:
    // 0x20c740: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x20c740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_20c744:
    // 0x20c744: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x20c744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_20c748:
    // 0x20c748: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x20c748u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_20c74c:
    // 0x20c74c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x20c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_20c750:
    // 0x20c750: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20c750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_20c754:
    // 0x20c754: 0x60f809  jalr        $v1
label_20c758:
    if (ctx->pc == 0x20C758u) {
        ctx->pc = 0x20C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C754u;
        // 0x20c758: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C75Cu;
        goto label_20c75c;
    }
    ctx->pc = 0x20C754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20C75Cu);
        ctx->pc = 0x20C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C754u;
        // 0x20c758: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C754u, 0x20C75Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C75Cu;
label_20c75c:
    // 0x20c75c: 0x5e00000a  bgtzl       $s0, . + 4 + (0xA << 2)
label_20c760:
    if (ctx->pc == 0x20C760u) {
        ctx->pc = 0x20C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C75Cu;
        // 0x20c760: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C764u;
        goto label_20c764;
    }
    ctx->pc = 0x20C75Cu;
    {
        const bool branch_taken_0x20c75c = (GPR_S64(ctx, 16) > 0);
        if (branch_taken_0x20c75c) {
            ctx->pc = 0x20C760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C75Cu;
            // 0x20c760: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C788u;
            goto label_20c788;
        }
    }
    ctx->pc = 0x20C764u;
label_20c764:
    // 0x20c764: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20c764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20c768:
    // 0x20c768: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20c768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c76c:
    // 0x20c76c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20c76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20c770:
    // 0x20c770: 0xc087e18  jal         func_21F860
label_20c774:
    if (ctx->pc == 0x20C774u) {
        ctx->pc = 0x20C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C770u;
        // 0x20c774: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C778u;
        goto label_20c778;
    }
    ctx->pc = 0x20C770u;
    SET_GPR_U32(ctx, 31, 0x20C778u);
    ctx->pc = 0x20C774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C770u;
    // 0x20c774: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21F860u, 0x20C770u, 0x20C778u)) {
        return;
    }
    ctx->pc = 0x20C778u;
label_20c778:
    // 0x20c778: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
label_20c77c:
    if (ctx->pc == 0x20C77Cu) {
        ctx->pc = 0x20C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C778u;
        // 0x20c77c: 0xdfb40008  ld          $s4, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C780u;
        goto label_20c780;
    }
    ctx->pc = 0x20C778u;
    {
        const bool branch_taken_0x20c778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C778u;
        // 0x20c77c: 0xdfb40008  ld          $s4, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c778) {
            ctx->pc = 0x20CA18u;
            goto label_20ca18;
        }
    }
    ctx->pc = 0x20C780u;
label_20c780:
    // 0x20c780: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x20c780u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_20c784:
    // 0x20c784: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x20c784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_20c788:
    // 0x20c788: 0x8fb20124  lw          $s2, 0x124($sp)
    ctx->pc = 0x20c788u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_20c78c:
    // 0x20c78c: 0x2141017  dsrav       $v0, $s4, $s0
    ctx->pc = 0x20c78cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 20) >> (GPR_U32(ctx, 16) & 0x3F));
label_20c790:
    // 0x20c790: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x20c790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_20c794:
    // 0x20c794: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20c794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20c798:
    // 0x20c798: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20c798u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20c79c:
    // 0x20c79c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20c79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_20c7a0:
    // 0x20c7a0: 0x10000020  b           . + 4 + (0x20 << 2)
label_20c7a4:
    if (ctx->pc == 0x20C7A4u) {
        ctx->pc = 0x20C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7A0u;
        // 0x20c7a4: 0x62900a  movz        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C7A8u;
        goto label_20c7a8;
    }
    ctx->pc = 0x20C7A0u;
    {
        const bool branch_taken_0x20c7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7A0u;
        // 0x20c7a4: 0x62900a  movz        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7a0) {
            ctx->pc = 0x20C824u;
            goto label_20c824;
        }
    }
    ctx->pc = 0x20C7A8u;
label_20c7a8:
    // 0x20c7a8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x20c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_20c7ac:
    // 0x20c7ac: 0x1262001d  beq         $s3, $v0, . + 4 + (0x1D << 2)
label_20c7b0:
    if (ctx->pc == 0x20C7B0u) {
        ctx->pc = 0x20C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7ACu;
        // 0x20c7b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C7B4u;
        goto label_20c7b4;
    }
    ctx->pc = 0x20C7ACu;
    {
        const bool branch_taken_0x20c7ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7ACu;
        // 0x20c7b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7ac) {
            ctx->pc = 0x20C824u;
            goto label_20c824;
        }
    }
    ctx->pc = 0x20C7B4u;
label_20c7b4:
    // 0x20c7b4: 0x2642004  sllv        $a0, $a0, $s3
    ctx->pc = 0x20c7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 19) & 0x1F));
label_20c7b8:
    // 0x20c7b8: 0x12600053  beqz        $s3, . + 4 + (0x53 << 2)
label_20c7bc:
    if (ctx->pc == 0x20C7BCu) {
        ctx->pc = 0x20C7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7B8u;
        // 0x20c7bc: 0xafa4012c  sw          $a0, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C7C0u;
        goto label_20c7c0;
    }
    ctx->pc = 0x20C7B8u;
    {
        const bool branch_taken_0x20c7b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7B8u;
        // 0x20c7bc: 0xafa4012c  sw          $a0, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7b8) {
            ctx->pc = 0x20C908u;
            goto label_20c908;
        }
    }
    ctx->pc = 0x20C7C0u;
label_20c7c0:
    // 0x20c7c0: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x20c7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_20c7c4:
    // 0x20c7c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_20c7c8:
    if (ctx->pc == 0x20C7C8u) {
        ctx->pc = 0x20C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7C4u;
        // 0x20c7c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C7CCu;
        goto label_20c7cc;
    }
    ctx->pc = 0x20C7C4u;
    {
        const bool branch_taken_0x20c7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7C4u;
        // 0x20c7c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7c4) {
            ctx->pc = 0x20C7E8u;
            goto label_20c7e8;
        }
    }
    ctx->pc = 0x20C7CCu;
label_20c7cc:
    // 0x20c7cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20c7ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c7d0:
    // 0x20c7d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20c7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20c7d4:
    // 0x20c7d4: 0xc087e18  jal         func_21F860
label_20c7d8:
    if (ctx->pc == 0x20C7D8u) {
        ctx->pc = 0x20C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7D4u;
        // 0x20c7d8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C7DCu;
        goto label_20c7dc;
    }
    ctx->pc = 0x20C7D4u;
    SET_GPR_U32(ctx, 31, 0x20C7DCu);
    ctx->pc = 0x20C7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C7D4u;
    // 0x20c7d8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21F860u, 0x20C7D4u, 0x20C7DCu)) {
        return;
    }
    ctx->pc = 0x20C7DCu;
label_20c7dc:
    // 0x20c7dc: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
label_20c7e0:
    if (ctx->pc == 0x20C7E0u) {
        ctx->pc = 0x20C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7DCu;
        // 0x20c7e0: 0xdfb40008  ld          $s4, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C7E4u;
        goto label_20c7e4;
    }
    ctx->pc = 0x20C7DCu;
    {
        const bool branch_taken_0x20c7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7DCu;
        // 0x20c7e0: 0xdfb40008  ld          $s4, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7dc) {
            ctx->pc = 0x20CA18u;
            goto label_20ca18;
        }
    }
    ctx->pc = 0x20C7E4u;
label_20c7e4:
    // 0x20c7e4: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x20c7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_20c7e8:
    // 0x20c7e8: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x20c7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_20c7ec:
    // 0x20c7ec: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x20c7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_20c7f0:
    // 0x20c7f0: 0x2141017  dsrav       $v0, $s4, $s0
    ctx->pc = 0x20c7f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 20) >> (GPR_U32(ctx, 16) & 0x3F));
label_20c7f4:
    // 0x20c7f4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x20c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_20c7f8:
    // 0x20c7f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20c7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20c7fc:
    // 0x20c7fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20c7fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20c800:
    // 0x20c800: 0x439824  and         $s3, $v0, $v1
    ctx->pc = 0x20c800u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_20c804:
    // 0x20c804: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x20c804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_20c808:
    // 0x20c808: 0x1000003f  b           . + 4 + (0x3F << 2)
label_20c80c:
    if (ctx->pc == 0x20C80Cu) {
        ctx->pc = 0x20C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C808u;
        // 0x20c80c: 0xafa5012c  sw          $a1, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C810u;
        goto label_20c810;
    }
    ctx->pc = 0x20C808u;
    {
        const bool branch_taken_0x20c808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C808u;
        // 0x20c80c: 0xafa5012c  sw          $a1, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c808) {
            ctx->pc = 0x20C908u;
            goto label_20c908;
        }
    }
    ctx->pc = 0x20C810u;
label_20c810:
    // 0x20c810: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x20c810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_20c814:
    // 0x20c814: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x20c814u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_20c818:
    // 0x20c818: 0x75102a  slt         $v0, $v1, $s5
    ctx->pc = 0x20c818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_20c81c:
    // 0x20c81c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_20c820:
    if (ctx->pc == 0x20C820u) {
        ctx->pc = 0x20C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C81Cu;
        // 0x20c820: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C824u;
        goto label_20c824;
    }
    ctx->pc = 0x20C81Cu;
    {
        const bool branch_taken_0x20c81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C81Cu;
        // 0x20c820: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c81c) {
            ctx->pc = 0x20C8C0u;
            goto label_20c8c0;
        }
    }
    ctx->pc = 0x20C824u;
label_20c824:
    // 0x20c824: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x20c824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20c828:
    // 0x20c828: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x20c828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_20c82c:
    // 0x20c82c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_20c830:
    // 0x20c830: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x20c830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20c834:
    // 0x20c834: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x20c834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_20c838:
    // 0x20c838: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
label_20c83c:
    if (ctx->pc == 0x20C83Cu) {
        ctx->pc = 0x20C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C838u;
        // 0x20c83c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C840u;
        goto label_20c840;
    }
    ctx->pc = 0x20C838u;
    {
        const bool branch_taken_0x20c838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c838) {
            ctx->pc = 0x20C83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C838u;
            // 0x20c83c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C8B8u;
            goto label_20c8b8;
        }
    }
    ctx->pc = 0x20C840u;
label_20c840:
    // 0x20c840: 0x5e00000a  bgtzl       $s0, . + 4 + (0xA << 2)
label_20c844:
    if (ctx->pc == 0x20C844u) {
        ctx->pc = 0x20C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C840u;
        // 0x20c844: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C848u;
        goto label_20c848;
    }
    ctx->pc = 0x20C840u;
    {
        const bool branch_taken_0x20c840 = (GPR_S64(ctx, 16) > 0);
        if (branch_taken_0x20c840) {
            ctx->pc = 0x20C844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C840u;
            // 0x20c844: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C86Cu;
            goto label_20c86c;
        }
    }
    ctx->pc = 0x20C848u;
label_20c848:
    // 0x20c848: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20c848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20c84c:
    // 0x20c84c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20c84cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c850:
    // 0x20c850: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20c850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20c854:
    // 0x20c854: 0xc087e18  jal         func_21F860
label_20c858:
    if (ctx->pc == 0x20C858u) {
        ctx->pc = 0x20C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C854u;
        // 0x20c858: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C85Cu;
        goto label_20c85c;
    }
    ctx->pc = 0x20C854u;
    SET_GPR_U32(ctx, 31, 0x20C85Cu);
    ctx->pc = 0x20C858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C854u;
    // 0x20c858: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21F860u, 0x20C854u, 0x20C85Cu)) {
        return;
    }
    ctx->pc = 0x20C85Cu;
label_20c85c:
    // 0x20c85c: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
label_20c860:
    if (ctx->pc == 0x20C860u) {
        ctx->pc = 0x20C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C85Cu;
        // 0x20c860: 0xdfb40008  ld          $s4, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C864u;
        goto label_20c864;
    }
    ctx->pc = 0x20C85Cu;
    {
        const bool branch_taken_0x20c85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C85Cu;
        // 0x20c860: 0xdfb40008  ld          $s4, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c85c) {
            ctx->pc = 0x20CA18u;
            goto label_20ca18;
        }
    }
    ctx->pc = 0x20C864u;
label_20c864:
    // 0x20c864: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x20c864u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_20c868:
    // 0x20c868: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x20c868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_20c86c:
    // 0x20c86c: 0x2141017  dsrav       $v0, $s4, $s0
    ctx->pc = 0x20c86cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 20) >> (GPR_U32(ctx, 16) & 0x3F));
label_20c870:
    // 0x20c870: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20c870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20c874:
    // 0x20c874: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20c874u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20c878:
    // 0x20c878: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20c878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_20c87c:
    // 0x20c87c: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
label_20c880:
    if (ctx->pc == 0x20C880u) {
        ctx->pc = 0x20C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C87Cu;
        // 0x20c880: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C884u;
        goto label_20c884;
    }
    ctx->pc = 0x20C87Cu;
    {
        const bool branch_taken_0x20c87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C87Cu;
        // 0x20c880: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c87c) {
            ctx->pc = 0x20C814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c814;
        }
    }
    ctx->pc = 0x20C884u;
label_20c884:
    // 0x20c884: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x20c884u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_20c888:
    // 0x20c888: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x20c888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_20c88c:
    // 0x20c88c: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x20c88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_20c890:
    // 0x20c890: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_20c894:
    if (ctx->pc == 0x20C894u) {
        ctx->pc = 0x20C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C890u;
        // 0x20c894: 0x96240000  lhu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C898u;
        goto label_20c898;
    }
    ctx->pc = 0x20C890u;
    {
        const bool branch_taken_0x20c890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C890u;
        // 0x20c894: 0x96240000  lhu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c890) {
            ctx->pc = 0x20C810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c810;
        }
    }
    ctx->pc = 0x20C898u;
label_20c898:
    // 0x20c898: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
label_20c89c:
    if (ctx->pc == 0x20C89Cu) {
        ctx->pc = 0x20C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C898u;
        // 0x20c89c: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C8A0u;
        goto label_20c8a0;
    }
    ctx->pc = 0x20C898u;
    {
        const bool branch_taken_0x20c898 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x20C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C898u;
        // 0x20c89c: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c898) {
            ctx->pc = 0x20C8A8u;
            goto label_20c8a8;
        }
    }
    ctx->pc = 0x20C8A0u;
label_20c8a0:
    // 0x20c8a0: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_20c8a4:
    if (ctx->pc == 0x20C8A4u) {
        ctx->pc = 0x20C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8A0u;
        // 0x20c8a4: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C8A8u;
        goto label_20c8a8;
    }
    ctx->pc = 0x20C8A0u;
    {
        const bool branch_taken_0x20c8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8A0u;
        // 0x20c8a4: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8a0) {
            ctx->pc = 0x20C810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c810;
        }
    }
    ctx->pc = 0x20C8A8u;
label_20c8a8:
    // 0x20c8a8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x20c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_20c8ac:
    // 0x20c8ac: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x20c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_20c8b0:
    // 0x20c8b0: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
label_20c8b4:
    if (ctx->pc == 0x20C8B4u) {
        ctx->pc = 0x20C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8B0u;
        // 0x20c8b4: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C8B8u;
        goto label_20c8b8;
    }
    ctx->pc = 0x20C8B0u;
    {
        const bool branch_taken_0x20c8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8B0u;
        // 0x20c8b4: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8b0) {
            ctx->pc = 0x20C810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c810;
        }
    }
    ctx->pc = 0x20C8B8u;
label_20c8b8:
    // 0x20c8b8: 0x661ffd6  bgez        $s3, . + 4 + (-0x2A << 2)
label_20c8bc:
    if (ctx->pc == 0x20C8BCu) {
        ctx->pc = 0x20C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8B8u;
        // 0x20c8bc: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C8C0u;
        goto label_20c8c0;
    }
    ctx->pc = 0x20C8B8u;
    {
        const bool branch_taken_0x20c8b8 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x20C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8B8u;
        // 0x20c8bc: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8b8) {
            ctx->pc = 0x20C814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c814;
        }
    }
    ctx->pc = 0x20C8C0u;
label_20c8c0:
    // 0x20c8c0: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_20c8c4:
    if (ctx->pc == 0x20C8C4u) {
        ctx->pc = 0x20C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8C0u;
        // 0x20c8c4: 0x8fa40138  lw          $a0, 0x138($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C8C8u;
        goto label_20c8c8;
    }
    ctx->pc = 0x20C8C0u;
    {
        const bool branch_taken_0x20c8c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8C0u;
        // 0x20c8c4: 0x8fa40138  lw          $a0, 0x138($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8c0) {
            ctx->pc = 0x20C8F4u;
            goto label_20c8f4;
        }
    }
    ctx->pc = 0x20C8C8u;
label_20c8c8:
    // 0x20c8c8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x20c8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_20c8cc:
    // 0x20c8cc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x20c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20c8d0:
    // 0x20c8d0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x20c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20c8d4:
    // 0x20c8d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20c8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_20c8d8:
    // 0x20c8d8: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x20c8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_20c8dc:
    // 0x20c8dc: 0xafa50138  sw          $a1, 0x138($sp)
    ctx->pc = 0x20c8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 5));
label_20c8e0:
    // 0x20c8e0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_20c8e4:
    // 0x20c8e4: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x20c8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_20c8e8:
    // 0x20c8e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20c8ec:
    // 0x20c8ec: 0xa4520000  sh          $s2, 0x0($v0)
    ctx->pc = 0x20c8ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 18));
label_20c8f0:
    // 0x20c8f0: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x20c8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_20c8f4:
    // 0x20c8f4: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x20c8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_20c8f8:
    // 0x20c8f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x20c8f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_20c8fc:
    // 0x20c8fc: 0x75102a  slt         $v0, $v1, $s5
    ctx->pc = 0x20c8fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_20c900:
    // 0x20c900: 0x1040ff63  beqz        $v0, . + 4 + (-0x9D << 2)
label_20c904:
    if (ctx->pc == 0x20C904u) {
        ctx->pc = 0x20C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C900u;
        // 0x20c904: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C908u;
        goto label_20c908;
    }
    ctx->pc = 0x20C900u;
    {
        const bool branch_taken_0x20c900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C900u;
        // 0x20c904: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c900) {
            ctx->pc = 0x20C690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c690;
        }
    }
    ctx->pc = 0x20C908u;
label_20c908:
    // 0x20c908: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x20c908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_20c90c:
    // 0x20c90c: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
label_20c910:
    if (ctx->pc == 0x20C910u) {
        ctx->pc = 0x20C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C90Cu;
        // 0x20c910: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C914u;
        goto label_20c914;
    }
    ctx->pc = 0x20C90Cu;
    {
        const bool branch_taken_0x20c90c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C90Cu;
        // 0x20c910: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c90c) {
            ctx->pc = 0x20C9E0u;
            goto label_20c9e0;
        }
    }
    ctx->pc = 0x20C914u;
label_20c914:
    // 0x20c914: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x20c914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_20c918:
    // 0x20c918: 0xb5102a  slt         $v0, $a1, $s5
    ctx->pc = 0x20c918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_20c91c:
    // 0x20c91c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_20c920:
    if (ctx->pc == 0x20C920u) {
        ctx->pc = 0x20C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C91Cu;
        // 0x20c920: 0x8fa5012c  lw          $a1, 0x12C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C924u;
        goto label_20c924;
    }
    ctx->pc = 0x20C91Cu;
    {
        const bool branch_taken_0x20c91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C91Cu;
        // 0x20c920: 0x8fa5012c  lw          $a1, 0x12C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c91c) {
            ctx->pc = 0x20C9D4u;
            goto label_20c9d4;
        }
    }
    ctx->pc = 0x20C924u;
label_20c924:
    // 0x20c924: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20c924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20c928:
    // 0x20c928: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x20c928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_20c92c:
    // 0x20c92c: 0x244256b8  addiu       $v0, $v0, 0x56B8
    ctx->pc = 0x20c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22200));
label_20c930:
    // 0x20c930: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x20c930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20c934:
    // 0x20c934: 0x0  nop
    ctx->pc = 0x20c934u;
    // NOP
label_20c938:
    // 0x20c938: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20c938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20c93c:
    // 0x20c93c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x20c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_20c940:
    // 0x20c940: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20c940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_20c944:
    // 0x20c944: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x20c944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20c948:
    // 0x20c948: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x20c948u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_20c94c:
    // 0x20c94c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_20c950:
    if (ctx->pc == 0x20C950u) {
        ctx->pc = 0x20C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C94Cu;
        // 0x20c950: 0x8fa40120  lw          $a0, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C954u;
        goto label_20c954;
    }
    ctx->pc = 0x20C94Cu;
    {
        const bool branch_taken_0x20c94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C94Cu;
        // 0x20c950: 0x8fa40120  lw          $a0, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c94c) {
            ctx->pc = 0x20C9C0u;
            goto label_20c9c0;
        }
    }
    ctx->pc = 0x20C954u;
label_20c954:
    // 0x20c954: 0x5e00000a  bgtzl       $s0, . + 4 + (0xA << 2)
label_20c958:
    if (ctx->pc == 0x20C958u) {
        ctx->pc = 0x20C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C954u;
        // 0x20c958: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C95Cu;
        goto label_20c95c;
    }
    ctx->pc = 0x20C954u;
    {
        const bool branch_taken_0x20c954 = (GPR_S64(ctx, 16) > 0);
        if (branch_taken_0x20c954) {
            ctx->pc = 0x20C958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C954u;
            // 0x20c958: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C980u;
            goto label_20c980;
        }
    }
    ctx->pc = 0x20C95Cu;
label_20c95c:
    // 0x20c95c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20c95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20c960:
    // 0x20c960: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20c960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c964:
    // 0x20c964: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20c964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20c968:
    // 0x20c968: 0xc087e18  jal         func_21F860
label_20c96c:
    if (ctx->pc == 0x20C96Cu) {
        ctx->pc = 0x20C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C968u;
        // 0x20c96c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C970u;
        goto label_20c970;
    }
    ctx->pc = 0x20C968u;
    SET_GPR_U32(ctx, 31, 0x20C970u);
    ctx->pc = 0x20C96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C968u;
    // 0x20c96c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21F860u, 0x20C968u, 0x20C970u)) {
        return;
    }
    ctx->pc = 0x20C970u;
label_20c970:
    // 0x20c970: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_20c974:
    if (ctx->pc == 0x20C974u) {
        ctx->pc = 0x20C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C970u;
        // 0x20c974: 0xdfb40008  ld          $s4, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C978u;
        goto label_20c978;
    }
    ctx->pc = 0x20C970u;
    {
        const bool branch_taken_0x20c970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C970u;
        // 0x20c974: 0xdfb40008  ld          $s4, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c970) {
            ctx->pc = 0x20CA18u;
            goto label_20ca18;
        }
    }
    ctx->pc = 0x20C978u;
label_20c978:
    // 0x20c978: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x20c978u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_20c97c:
    // 0x20c97c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x20c97cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_20c980:
    // 0x20c980: 0x2141017  dsrav       $v0, $s4, $s0
    ctx->pc = 0x20c980u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 20) >> (GPR_U32(ctx, 16) & 0x3F));
label_20c984:
    // 0x20c984: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20c984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20c988:
    // 0x20c988: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20c988u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20c98c:
    // 0x20c98c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20c98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_20c990:
    // 0x20c990: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_20c994:
    if (ctx->pc == 0x20C994u) {
        ctx->pc = 0x20C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C990u;
        // 0x20c994: 0x8fa50124  lw          $a1, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C998u;
        goto label_20c998;
    }
    ctx->pc = 0x20C990u;
    {
        const bool branch_taken_0x20c990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C990u;
        // 0x20c994: 0x8fa50124  lw          $a1, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c990) {
            ctx->pc = 0x20C9BCu;
            goto label_20c9bc;
        }
    }
    ctx->pc = 0x20C998u;
label_20c998:
    // 0x20c998: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x20c998u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_20c99c:
    // 0x20c99c: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x20c99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_20c9a0:
    // 0x20c9a0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_20c9a4:
    if (ctx->pc == 0x20C9A4u) {
        ctx->pc = 0x20C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9A0u;
        // 0x20c9a4: 0x96240000  lhu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C9A8u;
        goto label_20c9a8;
    }
    ctx->pc = 0x20C9A0u;
    {
        const bool branch_taken_0x20c9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9A0u;
        // 0x20c9a4: 0x96240000  lhu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9a0) {
            ctx->pc = 0x20C9BCu;
            goto label_20c9bc;
        }
    }
    ctx->pc = 0x20C9A8u;
label_20c9a8:
    // 0x20c9a8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_20c9ac:
    if (ctx->pc == 0x20C9ACu) {
        ctx->pc = 0x20C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9A8u;
        // 0x20c9ac: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C9B0u;
        goto label_20c9b0;
    }
    ctx->pc = 0x20C9A8u;
    {
        const bool branch_taken_0x20c9a8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x20C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9A8u;
        // 0x20c9ac: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9a8) {
            ctx->pc = 0x20C9B8u;
            goto label_20c9b8;
        }
    }
    ctx->pc = 0x20C9B0u;
label_20c9b0:
    // 0x20c9b0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x20c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_20c9b4:
    // 0x20c9b4: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x20c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_20c9b8:
    // 0x20c9b8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x20c9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_20c9bc:
    // 0x20c9bc: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x20c9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_20c9c0:
    // 0x20c9c0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x20c9c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_20c9c4:
    // 0x20c9c4: 0x95102a  slt         $v0, $a0, $s5
    ctx->pc = 0x20c9c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_20c9c8:
    // 0x20c9c8: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
label_20c9cc:
    if (ctx->pc == 0x20C9CCu) {
        ctx->pc = 0x20C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9C8u;
        // 0x20c9cc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C9D0u;
        goto label_20c9d0;
    }
    ctx->pc = 0x20C9C8u;
    {
        const bool branch_taken_0x20c9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9C8u;
        // 0x20c9cc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9c8) {
            ctx->pc = 0x20C938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c938;
        }
    }
    ctx->pc = 0x20C9D0u;
label_20c9d0:
    // 0x20c9d0: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x20c9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_20c9d4:
    // 0x20c9d4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x20c9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_20c9d8:
    // 0x20c9d8: 0xafa5012c  sw          $a1, 0x12C($sp)
    ctx->pc = 0x20c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 5));
label_20c9dc:
    // 0x20c9dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20c9e0:
    // 0x20c9e0: 0x8ee30018  lw          $v1, 0x18($s7)
    ctx->pc = 0x20c9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
label_20c9e4:
    // 0x20c9e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20c9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_20c9e8:
    // 0x20c9e8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x20c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20c9ec:
    // 0x20c9ec: 0x8ee40018  lw          $a0, 0x18($s7)
    ctx->pc = 0x20c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
label_20c9f0:
    // 0x20c9f0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x20c9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_20c9f4:
    // 0x20c9f4: 0xffd40010  sd          $s4, 0x10($fp)
    ctx->pc = 0x20c9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 16), GPR_U64(ctx, 20));
label_20c9f8:
    // 0x20c9f8: 0xafd00018  sw          $s0, 0x18($fp)
    ctx->pc = 0x20c9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 16));
label_20c9fc:
    // 0x20c9fc: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x20c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_20ca00:
    // 0x20ca00: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x20ca00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_20ca04:
    // 0x20ca04: 0x8fc30034  lw          $v1, 0x34($fp)
    ctx->pc = 0x20ca04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_20ca08:
    // 0x20ca08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ca0c:
    // 0x20ca0c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20ca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20ca10:
    // 0x20ca10: 0x10000012  b           . + 4 + (0x12 << 2)
label_20ca14:
    if (ctx->pc == 0x20CA14u) {
        ctx->pc = 0x20CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA10u;
        // 0x20ca14: 0xafc30034  sw          $v1, 0x34($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CA18u;
        goto label_20ca18;
    }
    ctx->pc = 0x20CA10u;
    {
        const bool branch_taken_0x20ca10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA10u;
        // 0x20ca14: 0xafc30034  sw          $v1, 0x34($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca10) {
            ctx->pc = 0x20CA5Cu;
            goto label_20ca5c;
        }
    }
    ctx->pc = 0x20CA18u;
label_20ca18:
    // 0x20ca18: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x20ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_20ca1c:
    // 0x20ca1c: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_20ca20:
    if (ctx->pc == 0x20CA20u) {
        ctx->pc = 0x20CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA1Cu;
        // 0x20ca20: 0x8fa40138  lw          $a0, 0x138($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CA24u;
        goto label_20ca24;
    }
    ctx->pc = 0x20CA1Cu;
    {
        const bool branch_taken_0x20ca1c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x20CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA1Cu;
        // 0x20ca20: 0x8fa40138  lw          $a0, 0x138($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca1c) {
            ctx->pc = 0x20CA58u;
            goto label_20ca58;
        }
    }
    ctx->pc = 0x20CA24u;
label_20ca24:
    // 0x20ca24: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x20ca24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20ca28:
    // 0x20ca28: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x20ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20ca2c:
    // 0x20ca2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20ca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20ca30:
    // 0x20ca30: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x20ca30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_20ca34:
    // 0x20ca34: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x20ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_20ca38:
    // 0x20ca38: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x20ca38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_20ca3c:
    // 0x20ca3c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x20ca3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_20ca40:
    // 0x20ca40: 0xafa50138  sw          $a1, 0x138($sp)
    ctx->pc = 0x20ca40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 5));
label_20ca44:
    // 0x20ca44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20ca48:
    // 0x20ca48: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_20ca4c:
    // 0x20ca4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20ca50:
    // 0x20ca50: 0x1ca0fff7  bgtz        $a1, . + 4 + (-0x9 << 2)
label_20ca54:
    if (ctx->pc == 0x20CA54u) {
        ctx->pc = 0x20CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA50u;
        // 0x20ca54: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CA58u;
        goto label_20ca58;
    }
    ctx->pc = 0x20CA50u;
    {
        const bool branch_taken_0x20ca50 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x20CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA50u;
        // 0x20ca54: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca50) {
            ctx->pc = 0x20CA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ca30;
        }
    }
    ctx->pc = 0x20CA58u;
label_20ca58:
    // 0x20ca58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20ca58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ca5c:
    // 0x20ca5c: 0x7bb001d0  lq          $s0, 0x1D0($sp)
    ctx->pc = 0x20ca5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_20ca60:
    // 0x20ca60: 0x7bb101c0  lq          $s1, 0x1C0($sp)
    ctx->pc = 0x20ca60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_20ca64:
    // 0x20ca64: 0x7bb201b0  lq          $s2, 0x1B0($sp)
    ctx->pc = 0x20ca64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_20ca68:
    // 0x20ca68: 0x7bb301a0  lq          $s3, 0x1A0($sp)
    ctx->pc = 0x20ca68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_20ca6c:
    // 0x20ca6c: 0x7bb40190  lq          $s4, 0x190($sp)
    ctx->pc = 0x20ca6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_20ca70:
    // 0x20ca70: 0x7bb50180  lq          $s5, 0x180($sp)
    ctx->pc = 0x20ca70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_20ca74:
    // 0x20ca74: 0x7bb60170  lq          $s6, 0x170($sp)
    ctx->pc = 0x20ca74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_20ca78:
    // 0x20ca78: 0x7bb70160  lq          $s7, 0x160($sp)
    ctx->pc = 0x20ca78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_20ca7c:
    // 0x20ca7c: 0x7bbe0150  lq          $fp, 0x150($sp)
    ctx->pc = 0x20ca7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_20ca80:
    // 0x20ca80: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x20ca80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_20ca84:
    // 0x20ca84: 0x3e00008  jr          $ra
label_20ca88:
    if (ctx->pc == 0x20CA88u) {
        ctx->pc = 0x20CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA84u;
        // 0x20ca88: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CA8Cu;
        goto label_20ca8c;
    }
    ctx->pc = 0x20CA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA84u;
        // 0x20ca88: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CA8Cu;
label_20ca8c:
    // 0x20ca8c: 0x0  nop
    ctx->pc = 0x20ca8cu;
    // NOP
    ctx->pc = 0x20ca90u;
}
