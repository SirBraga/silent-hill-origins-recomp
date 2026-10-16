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

// Function: sub_0022D460
// Address: 0x22d460 - 0x22da28
void sub_0022D460_0x22d460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D460_0x22d460");
#endif

    switch (ctx->pc) {
        case 0x22d460u: goto label_22d460;
        case 0x22d464u: goto label_22d464;
        case 0x22d468u: goto label_22d468;
        case 0x22d46cu: goto label_22d46c;
        case 0x22d470u: goto label_22d470;
        case 0x22d474u: goto label_22d474;
        case 0x22d478u: goto label_22d478;
        case 0x22d47cu: goto label_22d47c;
        case 0x22d480u: goto label_22d480;
        case 0x22d484u: goto label_22d484;
        case 0x22d488u: goto label_22d488;
        case 0x22d48cu: goto label_22d48c;
        case 0x22d490u: goto label_22d490;
        case 0x22d494u: goto label_22d494;
        case 0x22d498u: goto label_22d498;
        case 0x22d49cu: goto label_22d49c;
        case 0x22d4a0u: goto label_22d4a0;
        case 0x22d4a4u: goto label_22d4a4;
        case 0x22d4a8u: goto label_22d4a8;
        case 0x22d4acu: goto label_22d4ac;
        case 0x22d4b0u: goto label_22d4b0;
        case 0x22d4b4u: goto label_22d4b4;
        case 0x22d4b8u: goto label_22d4b8;
        case 0x22d4bcu: goto label_22d4bc;
        case 0x22d4c0u: goto label_22d4c0;
        case 0x22d4c4u: goto label_22d4c4;
        case 0x22d4c8u: goto label_22d4c8;
        case 0x22d4ccu: goto label_22d4cc;
        case 0x22d4d0u: goto label_22d4d0;
        case 0x22d4d4u: goto label_22d4d4;
        case 0x22d4d8u: goto label_22d4d8;
        case 0x22d4dcu: goto label_22d4dc;
        case 0x22d4e0u: goto label_22d4e0;
        case 0x22d4e4u: goto label_22d4e4;
        case 0x22d4e8u: goto label_22d4e8;
        case 0x22d4ecu: goto label_22d4ec;
        case 0x22d4f0u: goto label_22d4f0;
        case 0x22d4f4u: goto label_22d4f4;
        case 0x22d4f8u: goto label_22d4f8;
        case 0x22d4fcu: goto label_22d4fc;
        case 0x22d500u: goto label_22d500;
        case 0x22d504u: goto label_22d504;
        case 0x22d508u: goto label_22d508;
        case 0x22d50cu: goto label_22d50c;
        case 0x22d510u: goto label_22d510;
        case 0x22d514u: goto label_22d514;
        case 0x22d518u: goto label_22d518;
        case 0x22d51cu: goto label_22d51c;
        case 0x22d520u: goto label_22d520;
        case 0x22d524u: goto label_22d524;
        case 0x22d528u: goto label_22d528;
        case 0x22d52cu: goto label_22d52c;
        case 0x22d530u: goto label_22d530;
        case 0x22d534u: goto label_22d534;
        case 0x22d538u: goto label_22d538;
        case 0x22d53cu: goto label_22d53c;
        case 0x22d540u: goto label_22d540;
        case 0x22d544u: goto label_22d544;
        case 0x22d548u: goto label_22d548;
        case 0x22d54cu: goto label_22d54c;
        case 0x22d550u: goto label_22d550;
        case 0x22d554u: goto label_22d554;
        case 0x22d558u: goto label_22d558;
        case 0x22d55cu: goto label_22d55c;
        case 0x22d560u: goto label_22d560;
        case 0x22d564u: goto label_22d564;
        case 0x22d568u: goto label_22d568;
        case 0x22d56cu: goto label_22d56c;
        case 0x22d570u: goto label_22d570;
        case 0x22d574u: goto label_22d574;
        case 0x22d578u: goto label_22d578;
        case 0x22d57cu: goto label_22d57c;
        case 0x22d580u: goto label_22d580;
        case 0x22d584u: goto label_22d584;
        case 0x22d588u: goto label_22d588;
        case 0x22d58cu: goto label_22d58c;
        case 0x22d590u: goto label_22d590;
        case 0x22d594u: goto label_22d594;
        case 0x22d598u: goto label_22d598;
        case 0x22d59cu: goto label_22d59c;
        case 0x22d5a0u: goto label_22d5a0;
        case 0x22d5a4u: goto label_22d5a4;
        case 0x22d5a8u: goto label_22d5a8;
        case 0x22d5acu: goto label_22d5ac;
        case 0x22d5b0u: goto label_22d5b0;
        case 0x22d5b4u: goto label_22d5b4;
        case 0x22d5b8u: goto label_22d5b8;
        case 0x22d5bcu: goto label_22d5bc;
        case 0x22d5c0u: goto label_22d5c0;
        case 0x22d5c4u: goto label_22d5c4;
        case 0x22d5c8u: goto label_22d5c8;
        case 0x22d5ccu: goto label_22d5cc;
        case 0x22d5d0u: goto label_22d5d0;
        case 0x22d5d4u: goto label_22d5d4;
        case 0x22d5d8u: goto label_22d5d8;
        case 0x22d5dcu: goto label_22d5dc;
        case 0x22d5e0u: goto label_22d5e0;
        case 0x22d5e4u: goto label_22d5e4;
        case 0x22d5e8u: goto label_22d5e8;
        case 0x22d5ecu: goto label_22d5ec;
        case 0x22d5f0u: goto label_22d5f0;
        case 0x22d5f4u: goto label_22d5f4;
        case 0x22d5f8u: goto label_22d5f8;
        case 0x22d5fcu: goto label_22d5fc;
        case 0x22d600u: goto label_22d600;
        case 0x22d604u: goto label_22d604;
        case 0x22d608u: goto label_22d608;
        case 0x22d60cu: goto label_22d60c;
        case 0x22d610u: goto label_22d610;
        case 0x22d614u: goto label_22d614;
        case 0x22d618u: goto label_22d618;
        case 0x22d61cu: goto label_22d61c;
        case 0x22d620u: goto label_22d620;
        case 0x22d624u: goto label_22d624;
        case 0x22d628u: goto label_22d628;
        case 0x22d62cu: goto label_22d62c;
        case 0x22d630u: goto label_22d630;
        case 0x22d634u: goto label_22d634;
        case 0x22d638u: goto label_22d638;
        case 0x22d63cu: goto label_22d63c;
        case 0x22d640u: goto label_22d640;
        case 0x22d644u: goto label_22d644;
        case 0x22d648u: goto label_22d648;
        case 0x22d64cu: goto label_22d64c;
        case 0x22d650u: goto label_22d650;
        case 0x22d654u: goto label_22d654;
        case 0x22d658u: goto label_22d658;
        case 0x22d65cu: goto label_22d65c;
        case 0x22d660u: goto label_22d660;
        case 0x22d664u: goto label_22d664;
        case 0x22d668u: goto label_22d668;
        case 0x22d66cu: goto label_22d66c;
        case 0x22d670u: goto label_22d670;
        case 0x22d674u: goto label_22d674;
        case 0x22d678u: goto label_22d678;
        case 0x22d67cu: goto label_22d67c;
        case 0x22d680u: goto label_22d680;
        case 0x22d684u: goto label_22d684;
        case 0x22d688u: goto label_22d688;
        case 0x22d68cu: goto label_22d68c;
        case 0x22d690u: goto label_22d690;
        case 0x22d694u: goto label_22d694;
        case 0x22d698u: goto label_22d698;
        case 0x22d69cu: goto label_22d69c;
        case 0x22d6a0u: goto label_22d6a0;
        case 0x22d6a4u: goto label_22d6a4;
        case 0x22d6a8u: goto label_22d6a8;
        case 0x22d6acu: goto label_22d6ac;
        case 0x22d6b0u: goto label_22d6b0;
        case 0x22d6b4u: goto label_22d6b4;
        case 0x22d6b8u: goto label_22d6b8;
        case 0x22d6bcu: goto label_22d6bc;
        case 0x22d6c0u: goto label_22d6c0;
        case 0x22d6c4u: goto label_22d6c4;
        case 0x22d6c8u: goto label_22d6c8;
        case 0x22d6ccu: goto label_22d6cc;
        case 0x22d6d0u: goto label_22d6d0;
        case 0x22d6d4u: goto label_22d6d4;
        case 0x22d6d8u: goto label_22d6d8;
        case 0x22d6dcu: goto label_22d6dc;
        case 0x22d6e0u: goto label_22d6e0;
        case 0x22d6e4u: goto label_22d6e4;
        case 0x22d6e8u: goto label_22d6e8;
        case 0x22d6ecu: goto label_22d6ec;
        case 0x22d6f0u: goto label_22d6f0;
        case 0x22d6f4u: goto label_22d6f4;
        case 0x22d6f8u: goto label_22d6f8;
        case 0x22d6fcu: goto label_22d6fc;
        case 0x22d700u: goto label_22d700;
        case 0x22d704u: goto label_22d704;
        case 0x22d708u: goto label_22d708;
        case 0x22d70cu: goto label_22d70c;
        case 0x22d710u: goto label_22d710;
        case 0x22d714u: goto label_22d714;
        case 0x22d718u: goto label_22d718;
        case 0x22d71cu: goto label_22d71c;
        case 0x22d720u: goto label_22d720;
        case 0x22d724u: goto label_22d724;
        case 0x22d728u: goto label_22d728;
        case 0x22d72cu: goto label_22d72c;
        case 0x22d730u: goto label_22d730;
        case 0x22d734u: goto label_22d734;
        case 0x22d738u: goto label_22d738;
        case 0x22d73cu: goto label_22d73c;
        case 0x22d740u: goto label_22d740;
        case 0x22d744u: goto label_22d744;
        case 0x22d748u: goto label_22d748;
        case 0x22d74cu: goto label_22d74c;
        case 0x22d750u: goto label_22d750;
        case 0x22d754u: goto label_22d754;
        case 0x22d758u: goto label_22d758;
        case 0x22d75cu: goto label_22d75c;
        case 0x22d760u: goto label_22d760;
        case 0x22d764u: goto label_22d764;
        case 0x22d768u: goto label_22d768;
        case 0x22d76cu: goto label_22d76c;
        case 0x22d770u: goto label_22d770;
        case 0x22d774u: goto label_22d774;
        case 0x22d778u: goto label_22d778;
        case 0x22d77cu: goto label_22d77c;
        case 0x22d780u: goto label_22d780;
        case 0x22d784u: goto label_22d784;
        case 0x22d788u: goto label_22d788;
        case 0x22d78cu: goto label_22d78c;
        case 0x22d790u: goto label_22d790;
        case 0x22d794u: goto label_22d794;
        case 0x22d798u: goto label_22d798;
        case 0x22d79cu: goto label_22d79c;
        case 0x22d7a0u: goto label_22d7a0;
        case 0x22d7a4u: goto label_22d7a4;
        case 0x22d7a8u: goto label_22d7a8;
        case 0x22d7acu: goto label_22d7ac;
        case 0x22d7b0u: goto label_22d7b0;
        case 0x22d7b4u: goto label_22d7b4;
        case 0x22d7b8u: goto label_22d7b8;
        case 0x22d7bcu: goto label_22d7bc;
        case 0x22d7c0u: goto label_22d7c0;
        case 0x22d7c4u: goto label_22d7c4;
        case 0x22d7c8u: goto label_22d7c8;
        case 0x22d7ccu: goto label_22d7cc;
        case 0x22d7d0u: goto label_22d7d0;
        case 0x22d7d4u: goto label_22d7d4;
        case 0x22d7d8u: goto label_22d7d8;
        case 0x22d7dcu: goto label_22d7dc;
        case 0x22d7e0u: goto label_22d7e0;
        case 0x22d7e4u: goto label_22d7e4;
        case 0x22d7e8u: goto label_22d7e8;
        case 0x22d7ecu: goto label_22d7ec;
        case 0x22d7f0u: goto label_22d7f0;
        case 0x22d7f4u: goto label_22d7f4;
        case 0x22d7f8u: goto label_22d7f8;
        case 0x22d7fcu: goto label_22d7fc;
        case 0x22d800u: goto label_22d800;
        case 0x22d804u: goto label_22d804;
        case 0x22d808u: goto label_22d808;
        case 0x22d80cu: goto label_22d80c;
        case 0x22d810u: goto label_22d810;
        case 0x22d814u: goto label_22d814;
        case 0x22d818u: goto label_22d818;
        case 0x22d81cu: goto label_22d81c;
        case 0x22d820u: goto label_22d820;
        case 0x22d824u: goto label_22d824;
        case 0x22d828u: goto label_22d828;
        case 0x22d82cu: goto label_22d82c;
        case 0x22d830u: goto label_22d830;
        case 0x22d834u: goto label_22d834;
        case 0x22d838u: goto label_22d838;
        case 0x22d83cu: goto label_22d83c;
        case 0x22d840u: goto label_22d840;
        case 0x22d844u: goto label_22d844;
        case 0x22d848u: goto label_22d848;
        case 0x22d84cu: goto label_22d84c;
        case 0x22d850u: goto label_22d850;
        case 0x22d854u: goto label_22d854;
        case 0x22d858u: goto label_22d858;
        case 0x22d85cu: goto label_22d85c;
        case 0x22d860u: goto label_22d860;
        case 0x22d864u: goto label_22d864;
        case 0x22d868u: goto label_22d868;
        case 0x22d86cu: goto label_22d86c;
        case 0x22d870u: goto label_22d870;
        case 0x22d874u: goto label_22d874;
        case 0x22d878u: goto label_22d878;
        case 0x22d87cu: goto label_22d87c;
        case 0x22d880u: goto label_22d880;
        case 0x22d884u: goto label_22d884;
        case 0x22d888u: goto label_22d888;
        case 0x22d88cu: goto label_22d88c;
        case 0x22d890u: goto label_22d890;
        case 0x22d894u: goto label_22d894;
        case 0x22d898u: goto label_22d898;
        case 0x22d89cu: goto label_22d89c;
        case 0x22d8a0u: goto label_22d8a0;
        case 0x22d8a4u: goto label_22d8a4;
        case 0x22d8a8u: goto label_22d8a8;
        case 0x22d8acu: goto label_22d8ac;
        case 0x22d8b0u: goto label_22d8b0;
        case 0x22d8b4u: goto label_22d8b4;
        case 0x22d8b8u: goto label_22d8b8;
        case 0x22d8bcu: goto label_22d8bc;
        case 0x22d8c0u: goto label_22d8c0;
        case 0x22d8c4u: goto label_22d8c4;
        case 0x22d8c8u: goto label_22d8c8;
        case 0x22d8ccu: goto label_22d8cc;
        case 0x22d8d0u: goto label_22d8d0;
        case 0x22d8d4u: goto label_22d8d4;
        case 0x22d8d8u: goto label_22d8d8;
        case 0x22d8dcu: goto label_22d8dc;
        case 0x22d8e0u: goto label_22d8e0;
        case 0x22d8e4u: goto label_22d8e4;
        case 0x22d8e8u: goto label_22d8e8;
        case 0x22d8ecu: goto label_22d8ec;
        case 0x22d8f0u: goto label_22d8f0;
        case 0x22d8f4u: goto label_22d8f4;
        case 0x22d8f8u: goto label_22d8f8;
        case 0x22d8fcu: goto label_22d8fc;
        case 0x22d900u: goto label_22d900;
        case 0x22d904u: goto label_22d904;
        case 0x22d908u: goto label_22d908;
        case 0x22d90cu: goto label_22d90c;
        case 0x22d910u: goto label_22d910;
        case 0x22d914u: goto label_22d914;
        case 0x22d918u: goto label_22d918;
        case 0x22d91cu: goto label_22d91c;
        case 0x22d920u: goto label_22d920;
        case 0x22d924u: goto label_22d924;
        case 0x22d928u: goto label_22d928;
        case 0x22d92cu: goto label_22d92c;
        case 0x22d930u: goto label_22d930;
        case 0x22d934u: goto label_22d934;
        case 0x22d938u: goto label_22d938;
        case 0x22d93cu: goto label_22d93c;
        case 0x22d940u: goto label_22d940;
        case 0x22d944u: goto label_22d944;
        case 0x22d948u: goto label_22d948;
        case 0x22d94cu: goto label_22d94c;
        case 0x22d950u: goto label_22d950;
        case 0x22d954u: goto label_22d954;
        case 0x22d958u: goto label_22d958;
        case 0x22d95cu: goto label_22d95c;
        case 0x22d960u: goto label_22d960;
        case 0x22d964u: goto label_22d964;
        case 0x22d968u: goto label_22d968;
        case 0x22d96cu: goto label_22d96c;
        case 0x22d970u: goto label_22d970;
        case 0x22d974u: goto label_22d974;
        case 0x22d978u: goto label_22d978;
        case 0x22d97cu: goto label_22d97c;
        case 0x22d980u: goto label_22d980;
        case 0x22d984u: goto label_22d984;
        case 0x22d988u: goto label_22d988;
        case 0x22d98cu: goto label_22d98c;
        case 0x22d990u: goto label_22d990;
        case 0x22d994u: goto label_22d994;
        case 0x22d998u: goto label_22d998;
        case 0x22d99cu: goto label_22d99c;
        case 0x22d9a0u: goto label_22d9a0;
        case 0x22d9a4u: goto label_22d9a4;
        case 0x22d9a8u: goto label_22d9a8;
        case 0x22d9acu: goto label_22d9ac;
        case 0x22d9b0u: goto label_22d9b0;
        case 0x22d9b4u: goto label_22d9b4;
        case 0x22d9b8u: goto label_22d9b8;
        case 0x22d9bcu: goto label_22d9bc;
        case 0x22d9c0u: goto label_22d9c0;
        case 0x22d9c4u: goto label_22d9c4;
        case 0x22d9c8u: goto label_22d9c8;
        case 0x22d9ccu: goto label_22d9cc;
        case 0x22d9d0u: goto label_22d9d0;
        case 0x22d9d4u: goto label_22d9d4;
        case 0x22d9d8u: goto label_22d9d8;
        case 0x22d9dcu: goto label_22d9dc;
        case 0x22d9e0u: goto label_22d9e0;
        case 0x22d9e4u: goto label_22d9e4;
        case 0x22d9e8u: goto label_22d9e8;
        case 0x22d9ecu: goto label_22d9ec;
        case 0x22d9f0u: goto label_22d9f0;
        case 0x22d9f4u: goto label_22d9f4;
        case 0x22d9f8u: goto label_22d9f8;
        case 0x22d9fcu: goto label_22d9fc;
        case 0x22da00u: goto label_22da00;
        case 0x22da04u: goto label_22da04;
        case 0x22da08u: goto label_22da08;
        case 0x22da0cu: goto label_22da0c;
        case 0x22da10u: goto label_22da10;
        case 0x22da14u: goto label_22da14;
        case 0x22da18u: goto label_22da18;
        case 0x22da1cu: goto label_22da1c;
        case 0x22da20u: goto label_22da20;
        case 0x22da24u: goto label_22da24;
        default: break;
    }

    ctx->pc = 0x22d460u;

label_22d460:
    // 0x22d460: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x22d460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_22d464:
    // 0x22d464: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x22d464u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22d468:
    // 0x22d468: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x22d468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_22d46c:
    // 0x22d46c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22d470:
    // 0x22d470: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x22d470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_22d474:
    // 0x22d474: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x22d474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_22d478:
    // 0x22d478: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x22d478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_22d47c:
    // 0x22d47c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x22d47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_22d480:
    // 0x22d480: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x22d480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_22d484:
    // 0x22d484: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x22d484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_22d488:
    // 0x22d488: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x22d488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_22d48c:
    // 0x22d48c: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x22d48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_22d490:
    // 0x22d490: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22d490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22d494:
    // 0x22d494: 0x11820006  beq         $t4, $v0, . + 4 + (0x6 << 2)
label_22d498:
    if (ctx->pc == 0x22D498u) {
        ctx->pc = 0x22D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D494u;
        // 0x22d498: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D49Cu;
        goto label_22d49c;
    }
    ctx->pc = 0x22D494u;
    {
        const bool branch_taken_0x22d494 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D494u;
        // 0x22d498: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d494) {
            ctx->pc = 0x22D4B0u;
            goto label_22d4b0;
        }
    }
    ctx->pc = 0x22D49Cu;
label_22d49c:
    // 0x22d49c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22d4a0:
    // 0x22d4a0: 0x24423f14  addiu       $v0, $v0, 0x3F14
    ctx->pc = 0x22d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16148));
label_22d4a4:
    // 0x22d4a4: 0x39c1824  and         $v1, $gp, $gp
    ctx->pc = 0x22d4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 28) & GPR_U64(ctx, 28));
label_22d4a8:
    // 0x22d4a8: 0x8c5c0000  lw          $gp, 0x0($v0)
    ctx->pc = 0x22d4a8u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22d4ac:
    // 0x22d4ac: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x22d4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_22d4b0:
    // 0x22d4b0: 0x2582ffff  addiu       $v0, $t4, -0x1
    ctx->pc = 0x22d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_22d4b4:
    // 0x22d4b4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22d4b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_22d4b8:
    // 0x22d4b8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_22d4bc:
    if (ctx->pc == 0x22D4BCu) {
        ctx->pc = 0x22D4C0u;
        goto label_22d4c0;
    }
    ctx->pc = 0x22D4B8u;
    {
        const bool branch_taken_0x22d4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d4b8) {
            ctx->pc = 0x22D4E4u;
            goto label_22d4e4;
        }
    }
    ctx->pc = 0x22D4C0u;
label_22d4c0:
    // 0x22d4c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22d4c4:
    // 0x22d4c4: 0x90423ef8  lbu         $v0, 0x3EF8($v0)
    ctx->pc = 0x22d4c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16120)));
label_22d4c8:
    // 0x22d4c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_22d4cc:
    if (ctx->pc == 0x22D4CCu) {
        ctx->pc = 0x22D4D0u;
        goto label_22d4d0;
    }
    ctx->pc = 0x22D4C8u;
    {
        const bool branch_taken_0x22d4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d4c8) {
            ctx->pc = 0x22D4E4u;
            goto label_22d4e4;
        }
    }
    ctx->pc = 0x22D4D0u;
label_22d4d0:
    // 0x22d4d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22d4d4:
    // 0x22d4d4: 0x90423ef8  lbu         $v0, 0x3EF8($v0)
    ctx->pc = 0x22d4d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16120)));
label_22d4d8:
    // 0x22d4d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22d4dc:
    // 0x22d4dc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22d4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22d4e0:
    // 0x22d4e0: 0xa0223ef8  sb          $v0, 0x3EF8($at)
    ctx->pc = 0x22d4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 16120), (uint8_t)GPR_U32(ctx, 2));
label_22d4e4:
    // 0x22d4e4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22d4e8:
    // 0x22d4e8: 0x90423ef8  lbu         $v0, 0x3EF8($v0)
    ctx->pc = 0x22d4e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16120)));
label_22d4ec:
    // 0x22d4ec: 0x1440013b  bnez        $v0, . + 4 + (0x13B << 2)
label_22d4f0:
    if (ctx->pc == 0x22D4F0u) {
        ctx->pc = 0x22D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4ECu;
        // 0x22d4f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D4F4u;
        goto label_22d4f4;
    }
    ctx->pc = 0x22D4ECu;
    {
        const bool branch_taken_0x22d4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4ECu;
        // 0x22d4f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d4ec) {
            ctx->pc = 0x22D9DCu;
            goto label_22d9dc;
        }
    }
    ctx->pc = 0x22D4F4u;
label_22d4f4:
    // 0x22d4f4: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x22d4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_22d4f8:
    // 0x22d4f8: 0x8cc63f00  lw          $a2, 0x3F00($a2)
    ctx->pc = 0x22d4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16128)));
label_22d4fc:
    // 0x22d4fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22d500:
    // 0x22d500: 0x8c423f04  lw          $v0, 0x3F04($v0)
    ctx->pc = 0x22d500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16132)));
label_22d504:
    // 0x22d504: 0x10c20135  beq         $a2, $v0, . + 4 + (0x135 << 2)
label_22d508:
    if (ctx->pc == 0x22D508u) {
        ctx->pc = 0x22D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D504u;
        // 0x22d508: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D50Cu;
        goto label_22d50c;
    }
    ctx->pc = 0x22D504u;
    {
        const bool branch_taken_0x22d504 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D504u;
        // 0x22d508: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d504) {
            ctx->pc = 0x22D9DCu;
            goto label_22d9dc;
        }
    }
    ctx->pc = 0x22D50Cu;
label_22d50c:
    // 0x22d50c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22d510:
    // 0x22d510: 0x9042415c  lbu         $v0, 0x415C($v0)
    ctx->pc = 0x22d510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16732)));
label_22d514:
    // 0x22d514: 0x14400131  bnez        $v0, . + 4 + (0x131 << 2)
label_22d518:
    if (ctx->pc == 0x22D518u) {
        ctx->pc = 0x22D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D514u;
        // 0x22d518: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D51Cu;
        goto label_22d51c;
    }
    ctx->pc = 0x22D514u;
    {
        const bool branch_taken_0x22d514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D514u;
        // 0x22d518: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d514) {
            ctx->pc = 0x22D9DCu;
            goto label_22d9dc;
        }
    }
    ctx->pc = 0x22D51Cu;
label_22d51c:
    // 0x22d51c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22d51cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d520:
    // 0x22d520: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x22d520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
label_22d524:
    // 0x22d524: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x22d524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_22d528:
    // 0x22d528: 0x70622389  pcpyld      $a0, $v1, $v0
    ctx->pc = 0x22d528u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_22d52c:
    // 0x22d52c: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x22d52cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
label_22d530:
    // 0x22d530: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x22d530u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
label_22d534:
    // 0x22d534: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x22d534u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
label_22d538:
    // 0x22d538: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x22d538u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
label_22d53c:
    // 0x22d53c: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x22d53cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
label_22d540:
    // 0x22d540: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x22d540u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
label_22d544:
    // 0x22d544: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x22d544u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
label_22d548:
    // 0x22d548: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x22d548u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
label_22d54c:
    // 0x22d54c: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x22d54cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
label_22d550:
    // 0x22d550: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x22d550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_22d554:
    // 0x22d554: 0x37de3010  ori         $fp, $fp, 0x3010
    ctx->pc = 0x22d554u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)12304);
label_22d558:
    // 0x22d558: 0x36f7a030  ori         $s7, $s7, 0xA030
    ctx->pc = 0x22d558u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)41008);
label_22d55c:
    // 0x22d55c: 0x3694a020  ori         $s4, $s4, 0xA020
    ctx->pc = 0x22d55cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)40992);
label_22d560:
    // 0x22d560: 0x3673a000  ori         $s3, $s3, 0xA000
    ctx->pc = 0x22d560u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)40960);
label_22d564:
    // 0x22d564: 0x36d69030  ori         $s6, $s6, 0x9030
    ctx->pc = 0x22d564u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)36912);
label_22d568:
    // 0x22d568: 0x36529020  ori         $s2, $s2, 0x9020
    ctx->pc = 0x22d568u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)36896);
label_22d56c:
    // 0x22d56c: 0x36319000  ori         $s1, $s1, 0x9000
    ctx->pc = 0x22d56cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)36864);
label_22d570:
    // 0x22d570: 0x3610f000  ori         $s0, $s0, 0xF000
    ctx->pc = 0x22d570u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)61440);
label_22d574:
    // 0x22d574: 0x36b53020  ori         $s5, $s5, 0x3020
    ctx->pc = 0x22d574u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)12320);
label_22d578:
    // 0x22d578: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x22d578u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d57c:
    // 0x22d57c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x22d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_22d580:
    // 0x22d580: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x22d580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_22d584:
    // 0x22d584: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x22d584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_22d588:
    // 0x22d588: 0x108200e9  beq         $a0, $v0, . + 4 + (0xE9 << 2)
label_22d58c:
    if (ctx->pc == 0x22D58Cu) {
        ctx->pc = 0x22D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D588u;
        // 0x22d58c: 0x2c820042  sltiu       $v0, $a0, 0x42 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)66) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D590u;
        goto label_22d590;
    }
    ctx->pc = 0x22D588u;
    {
        const bool branch_taken_0x22d588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D588u;
        // 0x22d58c: 0x2c820042  sltiu       $v0, $a0, 0x42 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)66) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d588) {
            ctx->pc = 0x22D930u;
            goto label_22d930;
        }
    }
    ctx->pc = 0x22D590u;
label_22d590:
    // 0x22d590: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_22d594:
    if (ctx->pc == 0x22D594u) {
        ctx->pc = 0x22D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D590u;
        // 0x22d594: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D598u;
        goto label_22d598;
    }
    ctx->pc = 0x22D590u;
    {
        const bool branch_taken_0x22d590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D590u;
        // 0x22d594: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d590) {
            ctx->pc = 0x22D5D4u;
            goto label_22d5d4;
        }
    }
    ctx->pc = 0x22D598u;
label_22d598:
    // 0x22d598: 0x10820072  beq         $a0, $v0, . + 4 + (0x72 << 2)
label_22d59c:
    if (ctx->pc == 0x22D59Cu) {
        ctx->pc = 0x22D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D598u;
        // 0x22d59c: 0x2c820003  sltiu       $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5A0u;
        goto label_22d5a0;
    }
    ctx->pc = 0x22D598u;
    {
        const bool branch_taken_0x22d598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D598u;
        // 0x22d59c: 0x2c820003  sltiu       $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d598) {
            ctx->pc = 0x22D764u;
            goto label_22d764;
        }
    }
    ctx->pc = 0x22D5A0u;
label_22d5a0:
    // 0x22d5a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22d5a4:
    if (ctx->pc == 0x22D5A4u) {
        ctx->pc = 0x22D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5A0u;
        // 0x22d5a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5A8u;
        goto label_22d5a8;
    }
    ctx->pc = 0x22D5A0u;
    {
        const bool branch_taken_0x22d5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5A0u;
        // 0x22d5a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5a0) {
            ctx->pc = 0x22D5B8u;
            goto label_22d5b8;
        }
    }
    ctx->pc = 0x22D5A8u;
label_22d5a8:
    // 0x22d5a8: 0x108200ac  beq         $a0, $v0, . + 4 + (0xAC << 2)
label_22d5ac:
    if (ctx->pc == 0x22D5ACu) {
        ctx->pc = 0x22D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5A8u;
        // 0x22d5ac: 0x8f828e90  lw          $v0, -0x7170($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5B0u;
        goto label_22d5b0;
    }
    ctx->pc = 0x22D5A8u;
    {
        const bool branch_taken_0x22d5a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5A8u;
        // 0x22d5ac: 0x8f828e90  lw          $v0, -0x7170($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5a8) {
            ctx->pc = 0x22D85Cu;
            goto label_22d85c;
        }
    }
    ctx->pc = 0x22D5B0u;
label_22d5b0:
    // 0x22d5b0: 0x100000fb  b           . + 4 + (0xFB << 2)
label_22d5b4:
    if (ctx->pc == 0x22D5B4u) {
        ctx->pc = 0x22D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5B0u;
        // 0x22d5b4: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5B8u;
        goto label_22d5b8;
    }
    ctx->pc = 0x22D5B0u;
    {
        const bool branch_taken_0x22d5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5B0u;
        // 0x22d5b4: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5b0) {
            ctx->pc = 0x22D9A0u;
            goto label_22d9a0;
        }
    }
    ctx->pc = 0x22D5B8u;
label_22d5b8:
    // 0x22d5b8: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x22d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_22d5bc:
    // 0x22d5bc: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
label_22d5c0:
    if (ctx->pc == 0x22D5C0u) {
        ctx->pc = 0x22D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5BCu;
        // 0x22d5c0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5C4u;
        goto label_22d5c4;
    }
    ctx->pc = 0x22D5BCu;
    {
        const bool branch_taken_0x22d5bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5BCu;
        // 0x22d5c0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5bc) {
            ctx->pc = 0x22D604u;
            goto label_22d604;
        }
    }
    ctx->pc = 0x22D5C4u;
label_22d5c4:
    // 0x22d5c4: 0x108200d1  beq         $a0, $v0, . + 4 + (0xD1 << 2)
label_22d5c8:
    if (ctx->pc == 0x22D5C8u) {
        ctx->pc = 0x22D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5C4u;
        // 0x22d5c8: 0x8f828e90  lw          $v0, -0x7170($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5CCu;
        goto label_22d5cc;
    }
    ctx->pc = 0x22D5C4u;
    {
        const bool branch_taken_0x22d5c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5C4u;
        // 0x22d5c8: 0x8f828e90  lw          $v0, -0x7170($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5c4) {
            ctx->pc = 0x22D90Cu;
            goto label_22d90c;
        }
    }
    ctx->pc = 0x22D5CCu;
label_22d5cc:
    // 0x22d5cc: 0x100000f4  b           . + 4 + (0xF4 << 2)
label_22d5d0:
    if (ctx->pc == 0x22D5D0u) {
        ctx->pc = 0x22D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5CCu;
        // 0x22d5d0: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5D4u;
        goto label_22d5d4;
    }
    ctx->pc = 0x22D5CCu;
    {
        const bool branch_taken_0x22d5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5CCu;
        // 0x22d5d0: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5cc) {
            ctx->pc = 0x22D9A0u;
            goto label_22d9a0;
        }
    }
    ctx->pc = 0x22D5D4u;
label_22d5d4:
    // 0x22d5d4: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x22d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_22d5d8:
    // 0x22d5d8: 0x108200ee  beq         $a0, $v0, . + 4 + (0xEE << 2)
label_22d5dc:
    if (ctx->pc == 0x22D5DCu) {
        ctx->pc = 0x22D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5D8u;
        // 0x22d5dc: 0x2c820043  sltiu       $v0, $a0, 0x43 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)67) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5E0u;
        goto label_22d5e0;
    }
    ctx->pc = 0x22D5D8u;
    {
        const bool branch_taken_0x22d5d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5D8u;
        // 0x22d5dc: 0x2c820043  sltiu       $v0, $a0, 0x43 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)67) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5d8) {
            ctx->pc = 0x22D994u;
            goto label_22d994;
        }
    }
    ctx->pc = 0x22D5E0u;
label_22d5e0:
    // 0x22d5e0: 0x144000be  bnez        $v0, . + 4 + (0xBE << 2)
label_22d5e4:
    if (ctx->pc == 0x22D5E4u) {
        ctx->pc = 0x22D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5E0u;
        // 0x22d5e4: 0x701024  and         $v0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5E8u;
        goto label_22d5e8;
    }
    ctx->pc = 0x22D5E0u;
    {
        const bool branch_taken_0x22d5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5E0u;
        // 0x22d5e4: 0x701024  and         $v0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5e0) {
            ctx->pc = 0x22D8DCu;
            goto label_22d8dc;
        }
    }
    ctx->pc = 0x22D5E8u;
label_22d5e8:
    // 0x22d5e8: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x22d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_22d5ec:
    // 0x22d5ec: 0x108200de  beq         $a0, $v0, . + 4 + (0xDE << 2)
label_22d5f0:
    if (ctx->pc == 0x22D5F0u) {
        ctx->pc = 0x22D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5ECu;
        // 0x22d5f0: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5F4u;
        goto label_22d5f4;
    }
    ctx->pc = 0x22D5ECu;
    {
        const bool branch_taken_0x22d5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5ECu;
        // 0x22d5f0: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5ec) {
            ctx->pc = 0x22D968u;
            goto label_22d968;
        }
    }
    ctx->pc = 0x22D5F4u;
label_22d5f4:
    // 0x22d5f4: 0x108200b7  beq         $a0, $v0, . + 4 + (0xB7 << 2)
label_22d5f8:
    if (ctx->pc == 0x22D5F8u) {
        ctx->pc = 0x22D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5F4u;
        // 0x22d5f8: 0x8f828e90  lw          $v0, -0x7170($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5FCu;
        goto label_22d5fc;
    }
    ctx->pc = 0x22D5F4u;
    {
        const bool branch_taken_0x22d5f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5F4u;
        // 0x22d5f8: 0x8f828e90  lw          $v0, -0x7170($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5f4) {
            ctx->pc = 0x22D8D4u;
            goto label_22d8d4;
        }
    }
    ctx->pc = 0x22D5FCu;
label_22d5fc:
    // 0x22d5fc: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_22d600:
    if (ctx->pc == 0x22D600u) {
        ctx->pc = 0x22D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5FCu;
        // 0x22d600: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D604u;
        goto label_22d604;
    }
    ctx->pc = 0x22D5FCu;
    {
        const bool branch_taken_0x22d5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5FCu;
        // 0x22d600: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5fc) {
            ctx->pc = 0x22D9A0u;
            goto label_22d9a0;
        }
    }
    ctx->pc = 0x22D604u;
label_22d604:
    // 0x22d604: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x22d604u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
label_22d608:
    // 0x22d608: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x22d608u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
label_22d60c:
    // 0x22d60c: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x22d60cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
label_22d610:
    // 0x22d610: 0x3c081f00  lui         $t0, 0x1F00
    ctx->pc = 0x22d610u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)7936 << 16));
label_22d614:
    // 0x22d614: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x22d614u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_22d618:
    // 0x22d618: 0x356b9000  ori         $t3, $t3, 0x9000
    ctx->pc = 0x22d618u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)36864);
label_22d61c:
    // 0x22d61c: 0x354aa000  ori         $t2, $t2, 0xA000
    ctx->pc = 0x22d61cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)40960);
label_22d620:
    // 0x22d620: 0x35293c00  ori         $t1, $t1, 0x3C00
    ctx->pc = 0x22d620u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)15360);
label_22d624:
    // 0x22d624: 0x35080003  ori         $t0, $t0, 0x3
    ctx->pc = 0x22d624u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)3);
label_22d628:
    // 0x22d628: 0x10000003  b           . + 4 + (0x3 << 2)
label_22d62c:
    if (ctx->pc == 0x22D62Cu) {
        ctx->pc = 0x22D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D628u;
        // 0x22d62c: 0x34e73020  ori         $a3, $a3, 0x3020 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12320);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D630u;
        goto label_22d630;
    }
    ctx->pc = 0x22D628u;
    {
        const bool branch_taken_0x22d628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D628u;
        // 0x22d62c: 0x34e73020  ori         $a3, $a3, 0x3020 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12320);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d628) {
            ctx->pc = 0x22D638u;
            goto label_22d638;
        }
    }
    ctx->pc = 0x22D630u;
label_22d630:
    // 0x22d630: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_22d634:
    if (ctx->pc == 0x22D634u) {
        ctx->pc = 0x22D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D630u;
        // 0x22d634: 0x7ba30010  lq          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D638u;
        goto label_22d638;
    }
    ctx->pc = 0x22D630u;
    {
        const bool branch_taken_0x22d630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D630u;
        // 0x22d634: 0x7ba30010  lq          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d630) {
            ctx->pc = 0x22D688u;
            goto label_22d688;
        }
    }
    ctx->pc = 0x22D638u;
label_22d638:
    // 0x22d638: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x22d638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_22d63c:
    // 0x22d63c: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x22d63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_22d640:
    // 0x22d640: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x22d640u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
label_22d644:
    // 0x22d644: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x22d644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_22d648:
    // 0x22d648: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x22d648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_22d64c:
    // 0x22d64c: 0x30a50100  andi        $a1, $a1, 0x100
    ctx->pc = 0x22d64cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
label_22d650:
    // 0x22d650: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x22d650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_22d654:
    // 0x22d654: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x22d654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
label_22d658:
    // 0x22d658: 0x65100a  movz        $v0, $v1, $a1
    ctx->pc = 0x22d658u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
label_22d65c:
    // 0x22d65c: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x22d65cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_22d660:
    // 0x22d660: 0x46200a  movz        $a0, $v0, $a2
    ctx->pc = 0x22d660u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
label_22d664:
    // 0x22d664: 0x4843e800  cfc2.ni     $v1, $vi29
    ctx->pc = 0x22d664u;
    SET_GPR_U32(ctx, 3, ctx->vu0_vpu_stat);
label_22d668:
    // 0x22d668: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x22d668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_22d66c:
    // 0x22d66c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x22d66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_22d670:
    // 0x22d670: 0x34850008  ori         $a1, $a0, 0x8
    ctx->pc = 0x22d670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_22d674:
    // 0x22d674: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x22d674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_22d678:
    // 0x22d678: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
label_22d67c:
    if (ctx->pc == 0x22D67Cu) {
        ctx->pc = 0x22D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D678u;
        // 0x22d67c: 0x83280a  movz        $a1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D680u;
        goto label_22d680;
    }
    ctx->pc = 0x22D678u;
    {
        const bool branch_taken_0x22d678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D678u;
        // 0x22d67c: 0x83280a  movz        $a1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d678) {
            ctx->pc = 0x22D630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d630;
        }
    }
    ctx->pc = 0x22D680u;
label_22d680:
    // 0x22d680: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_22d684:
    if (ctx->pc == 0x22D684u) {
        ctx->pc = 0x22D688u;
        goto label_22d688;
    }
    ctx->pc = 0x22D680u;
    {
        const bool branch_taken_0x22d680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d680) {
            ctx->pc = 0x22D638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d638;
        }
    }
    ctx->pc = 0x22D688u;
label_22d688:
    // 0x22d688: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22d688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_22d68c:
    // 0x22d68c: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x22d68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
label_22d690:
    // 0x22d690: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x22d690u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_22d694:
    // 0x22d694: 0xf  sync
    ctx->pc = 0x22d694u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22d698:
    // 0x22d698: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x22d698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_22d69c:
    // 0x22d69c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22d69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_22d6a0:
    // 0x22d6a0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_22d6a4:
    if (ctx->pc == 0x22D6A4u) {
        ctx->pc = 0x22D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6A0u;
        // 0x22d6a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D6A8u;
        goto label_22d6a8;
    }
    ctx->pc = 0x22D6A0u;
    {
        const bool branch_taken_0x22d6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6A0u;
        // 0x22d6a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d6a0) {
            ctx->pc = 0x22D6C8u;
            goto label_22d6c8;
        }
    }
    ctx->pc = 0x22D6A8u;
label_22d6a8:
    // 0x22d6a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x22d6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_22d6ac:
    // 0x22d6ac: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x22d6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
label_22d6b0:
    // 0x22d6b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10003020
label_22d6b4:
    // 0x22d6b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22d6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_22d6b8:
    // 0x22d6b8: 0x0  nop
    ctx->pc = 0x22d6b8u;
    // NOP
label_22d6bc:
    // 0x22d6bc: 0x0  nop
    ctx->pc = 0x22d6bcu;
    // NOP
label_22d6c0:
    // 0x22d6c0: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
label_22d6c4:
    if (ctx->pc == 0x22D6C4u) {
        ctx->pc = 0x22D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6C0u;
        // 0x22d6c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D6C8u;
        goto label_22d6c8;
    }
    ctx->pc = 0x22D6C0u;
    {
        const bool branch_taken_0x22d6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6C0u;
        // 0x22d6c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d6c0) {
            ctx->pc = 0x22D6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d6b0;
        }
    }
    ctx->pc = 0x22D6C8u;
label_22d6c8:
    // 0x22d6c8: 0x24040104  addiu       $a0, $zero, 0x104
    ctx->pc = 0x22d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_22d6cc:
    // 0x22d6cc: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x22d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_22d6d0:
    // 0x22d6d0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22d6d4:
    // 0x22d6d4: 0x8c633f00  lw          $v1, 0x3F00($v1)
    ctx->pc = 0x22d6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16128)));
label_22d6d8:
    // 0x22d6d8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x22d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_22d6dc:
    // 0x22d6dc: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x22d6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_22d6e0:
    // 0x22d6e0: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x22d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_22d6e4:
    // 0x22d6e4: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x22d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_22d6e8:
    // 0x22d6e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x22d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_22d6ec:
    // 0x22d6ec: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x22d6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_22d6f0:
    // 0x22d6f0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x22d6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_22d6f4:
    // 0x22d6f4: 0xf  sync
    ctx->pc = 0x22d6f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22d6f8:
    // 0x22d6f8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x22d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_22d6fc:
    // 0x22d6fc: 0x3c031f00  lui         $v1, 0x1F00
    ctx->pc = 0x22d6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7936 << 16));
label_22d700:
    // 0x22d700: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22d700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_22d704:
    // 0x22d704: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22d708:
    if (ctx->pc == 0x22D708u) {
        ctx->pc = 0x22D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D704u;
        // 0x22d708: 0x24020145  addiu       $v0, $zero, 0x145 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D70Cu;
        goto label_22d70c;
    }
    ctx->pc = 0x22D704u;
    {
        const bool branch_taken_0x22d704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D704u;
        // 0x22d708: 0x24020145  addiu       $v0, $zero, 0x145 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d704) {
            ctx->pc = 0x22D730u;
            goto label_22d730;
        }
    }
    ctx->pc = 0x22D70Cu;
label_22d70c:
    // 0x22d70c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x22d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_22d710:
    // 0x22d710: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x22d710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
label_22d714:
    // 0x22d714: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x22d714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
label_22d718:
    // 0x22d718: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22d718u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10003020
label_22d71c:
    // 0x22d71c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x22d71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_22d720:
    // 0x22d720: 0x0  nop
    ctx->pc = 0x22d720u;
    // NOP
label_22d724:
    // 0x22d724: 0x0  nop
    ctx->pc = 0x22d724u;
    // NOP
label_22d728:
    // 0x22d728: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
label_22d72c:
    if (ctx->pc == 0x22D72Cu) {
        ctx->pc = 0x22D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D728u;
        // 0x22d72c: 0x24020145  addiu       $v0, $zero, 0x145 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D730u;
        goto label_22d730;
    }
    ctx->pc = 0x22D728u;
    {
        const bool branch_taken_0x22d728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D728u;
        // 0x22d72c: 0x24020145  addiu       $v0, $zero, 0x145 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d728) {
            ctx->pc = 0x22D718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d718;
        }
    }
    ctx->pc = 0x22D730u;
label_22d730:
    // 0x22d730: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22d730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22d734:
    // 0x22d734: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22d734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22d738:
    // 0x22d738: 0x8c633f00  lw          $v1, 0x3F00($v1)
    ctx->pc = 0x22d738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16128)));
label_22d73c:
    // 0x22d73c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22d740:
    // 0x22d740: 0x90423ef8  lbu         $v0, 0x3EF8($v0)
    ctx->pc = 0x22d740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16120)));
label_22d744:
    // 0x22d744: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x22d744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_22d748:
    // 0x22d748: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x22d748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_22d74c:
    // 0x22d74c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22d74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22d750:
    // 0x22d750: 0xac233f00  sw          $v1, 0x3F00($at)
    ctx->pc = 0x22d750u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16128), GPR_U32(ctx, 3));
label_22d754:
    // 0x22d754: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22d754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22d758:
    // 0x22d758: 0xa0223ef8  sb          $v0, 0x3EF8($at)
    ctx->pc = 0x22d758u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 16120), (uint8_t)GPR_U32(ctx, 2));
label_22d75c:
    // 0x22d75c: 0x1000008f  b           . + 4 + (0x8F << 2)
label_22d760:
    if (ctx->pc == 0x22D760u) {
        ctx->pc = 0x22D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D75Cu;
        // 0x22d760: 0x8f828e90  lw          $v0, -0x7170($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D764u;
        goto label_22d764;
    }
    ctx->pc = 0x22D75Cu;
    {
        const bool branch_taken_0x22d75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D75Cu;
        // 0x22d760: 0x8f828e90  lw          $v0, -0x7170($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d75c) {
            ctx->pc = 0x22D99Cu;
            goto label_22d99c;
        }
    }
    ctx->pc = 0x22D764u;
label_22d764:
    // 0x22d764: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x22d764u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
label_22d768:
    // 0x22d768: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x22d768u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
label_22d76c:
    // 0x22d76c: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x22d76cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
label_22d770:
    // 0x22d770: 0x3c081f00  lui         $t0, 0x1F00
    ctx->pc = 0x22d770u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)7936 << 16));
label_22d774:
    // 0x22d774: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x22d774u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_22d778:
    // 0x22d778: 0x356b9000  ori         $t3, $t3, 0x9000
    ctx->pc = 0x22d778u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)36864);
label_22d77c:
    // 0x22d77c: 0x354aa000  ori         $t2, $t2, 0xA000
    ctx->pc = 0x22d77cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)40960);
label_22d780:
    // 0x22d780: 0x35293c00  ori         $t1, $t1, 0x3C00
    ctx->pc = 0x22d780u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)15360);
label_22d784:
    // 0x22d784: 0x35080003  ori         $t0, $t0, 0x3
    ctx->pc = 0x22d784u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)3);
label_22d788:
    // 0x22d788: 0x10000003  b           . + 4 + (0x3 << 2)
label_22d78c:
    if (ctx->pc == 0x22D78Cu) {
        ctx->pc = 0x22D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D788u;
        // 0x22d78c: 0x34e73020  ori         $a3, $a3, 0x3020 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12320);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D790u;
        goto label_22d790;
    }
    ctx->pc = 0x22D788u;
    {
        const bool branch_taken_0x22d788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D788u;
        // 0x22d78c: 0x34e73020  ori         $a3, $a3, 0x3020 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12320);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d788) {
            ctx->pc = 0x22D798u;
            goto label_22d798;
        }
    }
    ctx->pc = 0x22D790u;
label_22d790:
    // 0x22d790: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_22d794:
    if (ctx->pc == 0x22D794u) {
        ctx->pc = 0x22D798u;
        goto label_22d798;
    }
    ctx->pc = 0x22D790u;
    {
        const bool branch_taken_0x22d790 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d790) {
            ctx->pc = 0x22D7E8u;
            goto label_22d7e8;
        }
    }
    ctx->pc = 0x22D798u;
label_22d798:
    // 0x22d798: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x22d798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_22d79c:
    // 0x22d79c: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x22d79cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_22d7a0:
    // 0x22d7a0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x22d7a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
label_22d7a4:
    // 0x22d7a4: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x22d7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_22d7a8:
    // 0x22d7a8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x22d7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_22d7ac:
    // 0x22d7ac: 0x30a50100  andi        $a1, $a1, 0x100
    ctx->pc = 0x22d7acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
label_22d7b0:
    // 0x22d7b0: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x22d7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_22d7b4:
    // 0x22d7b4: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x22d7b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
label_22d7b8:
    // 0x22d7b8: 0x65100a  movz        $v0, $v1, $a1
    ctx->pc = 0x22d7b8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
label_22d7bc:
    // 0x22d7bc: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x22d7bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_22d7c0:
    // 0x22d7c0: 0x46200a  movz        $a0, $v0, $a2
    ctx->pc = 0x22d7c0u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
label_22d7c4:
    // 0x22d7c4: 0x4843e800  cfc2.ni     $v1, $vi29
    ctx->pc = 0x22d7c4u;
    SET_GPR_U32(ctx, 3, ctx->vu0_vpu_stat);
label_22d7c8:
    // 0x22d7c8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x22d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_22d7cc:
    // 0x22d7cc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x22d7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_22d7d0:
    // 0x22d7d0: 0x34850008  ori         $a1, $a0, 0x8
    ctx->pc = 0x22d7d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_22d7d4:
    // 0x22d7d4: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x22d7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_22d7d8:
    // 0x22d7d8: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
label_22d7dc:
    if (ctx->pc == 0x22D7DCu) {
        ctx->pc = 0x22D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7D8u;
        // 0x22d7dc: 0x83280a  movz        $a1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D7E0u;
        goto label_22d7e0;
    }
    ctx->pc = 0x22D7D8u;
    {
        const bool branch_taken_0x22d7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7D8u;
        // 0x22d7dc: 0x83280a  movz        $a1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d7d8) {
            ctx->pc = 0x22D790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d790;
        }
    }
    ctx->pc = 0x22D7E0u;
label_22d7e0:
    // 0x22d7e0: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_22d7e4:
    if (ctx->pc == 0x22D7E4u) {
        ctx->pc = 0x22D7E8u;
        goto label_22d7e8;
    }
    ctx->pc = 0x22D7E0u;
    {
        const bool branch_taken_0x22d7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d7e0) {
            ctx->pc = 0x22D798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d798;
        }
    }
    ctx->pc = 0x22D7E8u;
label_22d7e8:
    // 0x22d7e8: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x22d7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_22d7ec:
    // 0x22d7ec: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x22d7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_22d7f0:
    // 0x22d7f0: 0x8cc63f00  lw          $a2, 0x3F00($a2)
    ctx->pc = 0x22d7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16128)));
label_22d7f4:
    // 0x22d7f4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x22d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_22d7f8:
    // 0x22d7f8: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x22d7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
label_22d7fc:
    // 0x22d7fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_22d800:
    if (ctx->pc == 0x22D800u) {
        ctx->pc = 0x22D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7FCu;
        // 0x22d800: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D804u;
        goto label_22d804;
    }
    ctx->pc = 0x22D7FCu;
    {
        const bool branch_taken_0x22d7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d7fc) {
            ctx->pc = 0x22D800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D7FCu;
            // 0x22d800: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D82Cu;
            goto label_22d82c;
        }
    }
    ctx->pc = 0x22D804u;
label_22d804:
    // 0x22d804: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22d804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_22d808:
    // 0x22d808: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x22d808u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_22d80c:
    // 0x22d80c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x22d80cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_22d810:
    // 0x22d810: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x22d810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_22d814:
    // 0x22d814: 0x30421300  andi        $v0, $v0, 0x1300
    ctx->pc = 0x22d814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4864);
label_22d818:
    // 0x22d818: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x22d818u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_22d81c:
    // 0x22d81c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x22d81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_22d820:
    // 0x22d820: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x22d820u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_22d824:
    // 0x22d824: 0x1000000a  b           . + 4 + (0xA << 2)
label_22d828:
    if (ctx->pc == 0x22D828u) {
        ctx->pc = 0x22D82Cu;
        goto label_22d82c;
    }
    ctx->pc = 0x22D824u;
    {
        const bool branch_taken_0x22d824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d824) {
            ctx->pc = 0x22D850u;
            goto label_22d850;
        }
    }
    ctx->pc = 0x22D82Cu;
label_22d82c:
    // 0x22d82c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x22d82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_22d830:
    // 0x22d830: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x22d830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
label_22d834:
    // 0x22d834: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x22d834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_22d838:
    // 0x22d838: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x22d838u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x1000a010
label_22d83c:
    // 0x22d83c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x22d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_22d840:
    // 0x22d840: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x22d840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_22d844:
    // 0x22d844: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x22d844u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_22d848:
    // 0x22d848: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x22d848u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_22d84c:
    // 0x22d84c: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x22d84cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
label_22d850:
    // 0x22d850: 0xf  sync
    ctx->pc = 0x22d850u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22d854:
    // 0x22d854: 0x10000018  b           . + 4 + (0x18 << 2)
label_22d858:
    if (ctx->pc == 0x22D858u) {
        ctx->pc = 0x22D85Cu;
        goto label_22d85c;
    }
    ctx->pc = 0x22D854u;
    {
        const bool branch_taken_0x22d854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d854) {
            ctx->pc = 0x22D8B8u;
            goto label_22d8b8;
        }
    }
    ctx->pc = 0x22D85Cu;
label_22d85c:
    // 0x22d85c: 0x30620300  andi        $v0, $v1, 0x300
    ctx->pc = 0x22d85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)768);
label_22d860:
    // 0x22d860: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_22d864:
    if (ctx->pc == 0x22D864u) {
        ctx->pc = 0x22D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D860u;
        // 0x22d864: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D868u;
        goto label_22d868;
    }
    ctx->pc = 0x22D860u;
    {
        const bool branch_taken_0x22d860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d860) {
            ctx->pc = 0x22D864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D860u;
            // 0x22d864: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D890u;
            goto label_22d890;
        }
    }
    ctx->pc = 0x22D868u;
label_22d868:
    // 0x22d868: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22d868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_22d86c:
    // 0x22d86c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x22d86cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_22d870:
    // 0x22d870: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x22d870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_22d874:
    // 0x22d874: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x22d874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_22d878:
    // 0x22d878: 0x30421300  andi        $v0, $v0, 0x1300
    ctx->pc = 0x22d878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4864);
label_22d87c:
    // 0x22d87c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x22d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_22d880:
    // 0x22d880: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x22d880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
label_22d884:
    // 0x22d884: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22d884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22d888:
    // 0x22d888: 0x1000000a  b           . + 4 + (0xA << 2)
label_22d88c:
    if (ctx->pc == 0x22D88Cu) {
        ctx->pc = 0x22D890u;
        goto label_22d890;
    }
    ctx->pc = 0x22D888u;
    {
        const bool branch_taken_0x22d888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d888) {
            ctx->pc = 0x22D8B4u;
            goto label_22d8b4;
        }
    }
    ctx->pc = 0x22D890u;
label_22d890:
    // 0x22d890: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x22d890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_22d894:
    // 0x22d894: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x22d894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
label_22d898:
    // 0x22d898: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x22d898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_22d89c:
    // 0x22d89c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x22d89cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10009010
label_22d8a0:
    // 0x22d8a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x22d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_22d8a4:
    // 0x22d8a4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x22d8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_22d8a8:
    // 0x22d8a8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x22d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_22d8ac:
    // 0x22d8ac: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x22d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_22d8b0:
    // 0x22d8b0: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x22d8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_22d8b4:
    // 0x22d8b4: 0xf  sync
    ctx->pc = 0x22d8b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22d8b8:
    // 0x22d8b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22d8bc:
    // 0x22d8bc: 0x90423ef8  lbu         $v0, 0x3EF8($v0)
    ctx->pc = 0x22d8bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16120)));
label_22d8c0:
    // 0x22d8c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22d8c4:
    // 0x22d8c4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22d8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22d8c8:
    // 0x22d8c8: 0xa0223ef8  sb          $v0, 0x3EF8($at)
    ctx->pc = 0x22d8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 16120), (uint8_t)GPR_U32(ctx, 2));
label_22d8cc:
    // 0x22d8cc: 0x10000033  b           . + 4 + (0x33 << 2)
label_22d8d0:
    if (ctx->pc == 0x22D8D0u) {
        ctx->pc = 0x22D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8CCu;
        // 0x22d8d0: 0x8f828e90  lw          $v0, -0x7170($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8D4u;
        goto label_22d8d4;
    }
    ctx->pc = 0x22D8CCu;
    {
        const bool branch_taken_0x22d8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8CCu;
        // 0x22d8d0: 0x8f828e90  lw          $v0, -0x7170($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d8cc) {
            ctx->pc = 0x22D99Cu;
            goto label_22d99c;
        }
    }
    ctx->pc = 0x22D8D4u;
label_22d8d4:
    // 0x22d8d4: 0x10000032  b           . + 4 + (0x32 << 2)
label_22d8d8:
    if (ctx->pc == 0x22D8D8u) {
        ctx->pc = 0x22D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8D4u;
        // 0x22d8d8: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8DCu;
        goto label_22d8dc;
    }
    ctx->pc = 0x22D8D4u;
    {
        const bool branch_taken_0x22d8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8D4u;
        // 0x22d8d8: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d8d4) {
            ctx->pc = 0x22D9A0u;
            goto label_22d9a0;
        }
    }
    ctx->pc = 0x22D8DCu;
label_22d8dc:
    // 0x22d8dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_22d8e0:
    if (ctx->pc == 0x22D8E0u) {
        ctx->pc = 0x22D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8DCu;
        // 0x22d8e0: 0x21b02  srl         $v1, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8E4u;
        goto label_22d8e4;
    }
    ctx->pc = 0x22D8DCu;
    {
        const bool branch_taken_0x22d8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8DCu;
        // 0x22d8e0: 0x21b02  srl         $v1, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d8dc) {
            ctx->pc = 0x22D8F8u;
            goto label_22d8f8;
        }
    }
    ctx->pc = 0x22D8E4u;
label_22d8e4:
    // 0x22d8e4: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x22d8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_22d8e8:
    // 0x22d8e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x22d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22d8ec:
    // 0x22d8ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x22d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22d8f0:
    // 0x22d8f0: 0x10000028  b           . + 4 + (0x28 << 2)
label_22d8f4:
    if (ctx->pc == 0x22D8F4u) {
        ctx->pc = 0x22D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8F0u;
        // 0x22d8f4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8F8u;
        goto label_22d8f8;
    }
    ctx->pc = 0x22D8F0u;
    {
        const bool branch_taken_0x22d8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8F0u;
        // 0x22d8f4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d8f0) {
            ctx->pc = 0x22D994u;
            goto label_22d994;
        }
    }
    ctx->pc = 0x22D8F8u;
label_22d8f8:
    // 0x22d8f8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x22d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_22d8fc:
    // 0x22d8fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22d900:
    // 0x22d900: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22d900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22d904:
    // 0x22d904: 0x10000023  b           . + 4 + (0x23 << 2)
label_22d908:
    if (ctx->pc == 0x22D908u) {
        ctx->pc = 0x22D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D904u;
        // 0x22d908: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D90Cu;
        goto label_22d90c;
    }
    ctx->pc = 0x22D904u;
    {
        const bool branch_taken_0x22d904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D904u;
        // 0x22d908: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d904) {
            ctx->pc = 0x22D994u;
            goto label_22d994;
        }
    }
    ctx->pc = 0x22D90Cu;
label_22d90c:
    // 0x22d90c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x22d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_22d910:
    // 0x22d910: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22d910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22d914:
    // 0x22d914: 0xa02d415c  sb          $t5, 0x415C($at)
    ctx->pc = 0x22d914u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 16732), (uint8_t)GPR_U32(ctx, 13));
label_22d918:
    // 0x22d918: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22d918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22d91c:
    // 0x22d91c: 0xac233efc  sw          $v1, 0x3EFC($at)
    ctx->pc = 0x22d91cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16124), GPR_U32(ctx, 3));
label_22d920:
    // 0x22d920: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22d920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22d924:
    // 0x22d924: 0x9042415d  lbu         $v0, 0x415D($v0)
    ctx->pc = 0x22d924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16733)));
label_22d928:
    // 0x22d928: 0x1000000a  b           . + 4 + (0xA << 2)
label_22d92c:
    if (ctx->pc == 0x22D92Cu) {
        ctx->pc = 0x22D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D928u;
        // 0x22d92c: 0xa38090c0  sb          $zero, -0x6F40($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938816), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D930u;
        goto label_22d930;
    }
    ctx->pc = 0x22D928u;
    {
        const bool branch_taken_0x22d928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D928u;
        // 0x22d92c: 0xa38090c0  sb          $zero, -0x6F40($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938816), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d928) {
            ctx->pc = 0x22D954u;
            goto label_22d954;
        }
    }
    ctx->pc = 0x22D930u;
label_22d930:
    // 0x22d930: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x22d930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_22d934:
    // 0x22d934: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22d934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22d938:
    // 0x22d938: 0xa02d415c  sb          $t5, 0x415C($at)
    ctx->pc = 0x22d938u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 16732), (uint8_t)GPR_U32(ctx, 13));
label_22d93c:
    // 0x22d93c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22d93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22d940:
    // 0x22d940: 0xac233efc  sw          $v1, 0x3EFC($at)
    ctx->pc = 0x22d940u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16124), GPR_U32(ctx, 3));
label_22d944:
    // 0x22d944: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22d944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22d948:
    // 0x22d948: 0x9042415d  lbu         $v0, 0x415D($v0)
    ctx->pc = 0x22d948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16733)));
label_22d94c:
    // 0x22d94c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22d94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22d950:
    // 0x22d950: 0xa02d4130  sb          $t5, 0x4130($at)
    ctx->pc = 0x22d950u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 16688), (uint8_t)GPR_U32(ctx, 13));
label_22d954:
    // 0x22d954: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22d954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22d958:
    // 0x22d958: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22d958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22d95c:
    // 0x22d95c: 0xa022415d  sb          $v0, 0x415D($at)
    ctx->pc = 0x22d95cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 16733), (uint8_t)GPR_U32(ctx, 2));
label_22d960:
    // 0x22d960: 0x1000000e  b           . + 4 + (0xE << 2)
label_22d964:
    if (ctx->pc == 0x22D964u) {
        ctx->pc = 0x22D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D960u;
        // 0x22d964: 0x8f828e90  lw          $v0, -0x7170($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D968u;
        goto label_22d968;
    }
    ctx->pc = 0x22D960u;
    {
        const bool branch_taken_0x22d960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D960u;
        // 0x22d964: 0x8f828e90  lw          $v0, -0x7170($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d960) {
            ctx->pc = 0x22D99Cu;
            goto label_22d99c;
        }
    }
    ctx->pc = 0x22D968u;
label_22d968:
    // 0x22d968: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22d968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_22d96c:
    // 0x22d96c: 0xc2027  nor         $a0, $zero, $t4
    ctx->pc = 0x22d96cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 12)));
label_22d970:
    // 0x22d970: 0x7fac0020  sq          $t4, 0x20($sp)
    ctx->pc = 0x22d970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 12));
label_22d974:
    // 0x22d974: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x22d974u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_22d978:
    // 0x22d978: 0x40f809  jalr        $v0
label_22d97c:
    if (ctx->pc == 0x22D97Cu) {
        ctx->pc = 0x22D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D978u;
        // 0x22d97c: 0x7fad0030  sq          $t5, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D980u;
        goto label_22d980;
    }
    ctx->pc = 0x22D978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22D980u);
        ctx->pc = 0x22D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D978u;
        // 0x22d97c: 0x7fad0030  sq          $t5, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D978u, 0x22D980u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D980u;
label_22d980:
    // 0x22d980: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x22d980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22d984:
    // 0x22d984: 0x7bad0030  lq          $t5, 0x30($sp)
    ctx->pc = 0x22d984u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22d988:
    // 0x22d988: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22d988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22d98c:
    // 0x22d98c: 0xa0223ef8  sb          $v0, 0x3EF8($at)
    ctx->pc = 0x22d98cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 16120), (uint8_t)GPR_U32(ctx, 2));
label_22d990:
    // 0x22d990: 0x7bac0020  lq          $t4, 0x20($sp)
    ctx->pc = 0x22d990u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22d994:
    // 0x22d994: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22d994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22d998:
    // 0x22d998: 0x8c423f00  lw          $v0, 0x3F00($v0)
    ctx->pc = 0x22d998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16128)));
label_22d99c:
    // 0x22d99c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x22d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_22d9a0:
    // 0x22d9a0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22d9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22d9a4:
    // 0x22d9a4: 0xac223f00  sw          $v0, 0x3F00($at)
    ctx->pc = 0x22d9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16128), GPR_U32(ctx, 2));
label_22d9a8:
    // 0x22d9a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22d9ac:
    // 0x22d9ac: 0x90423ef8  lbu         $v0, 0x3EF8($v0)
    ctx->pc = 0x22d9acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16120)));
label_22d9b0:
    // 0x22d9b0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_22d9b4:
    if (ctx->pc == 0x22D9B4u) {
        ctx->pc = 0x22D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9B0u;
        // 0x22d9b4: 0x8f828e94  lw          $v0, -0x716C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D9B8u;
        goto label_22d9b8;
    }
    ctx->pc = 0x22D9B0u;
    {
        const bool branch_taken_0x22d9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9B0u;
        // 0x22d9b4: 0x8f828e94  lw          $v0, -0x716C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9b0) {
            ctx->pc = 0x22D9D8u;
            goto label_22d9d8;
        }
    }
    ctx->pc = 0x22D9B8u;
label_22d9b8:
    // 0x22d9b8: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x22d9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_22d9bc:
    // 0x22d9bc: 0x8cc63f00  lw          $a2, 0x3F00($a2)
    ctx->pc = 0x22d9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16128)));
label_22d9c0:
    // 0x22d9c0: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
label_22d9c4:
    if (ctx->pc == 0x22D9C4u) {
        ctx->pc = 0x22D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9C0u;
        // 0x22d9c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D9C8u;
        goto label_22d9c8;
    }
    ctx->pc = 0x22D9C0u;
    {
        const bool branch_taken_0x22d9c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9C0u;
        // 0x22d9c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9c0) {
            ctx->pc = 0x22D9DCu;
            goto label_22d9dc;
        }
    }
    ctx->pc = 0x22D9C8u;
label_22d9c8:
    // 0x22d9c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22d9cc:
    // 0x22d9cc: 0x9042415c  lbu         $v0, 0x415C($v0)
    ctx->pc = 0x22d9ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16732)));
label_22d9d0:
    // 0x22d9d0: 0x5040feeb  beql        $v0, $zero, . + 4 + (-0x115 << 2)
label_22d9d4:
    if (ctx->pc == 0x22D9D4u) {
        ctx->pc = 0x22D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9D0u;
        // 0x22d9d4: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D9D8u;
        goto label_22d9d8;
    }
    ctx->pc = 0x22D9D0u;
    {
        const bool branch_taken_0x22d9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d9d0) {
            ctx->pc = 0x22D9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D9D0u;
            // 0x22d9d4: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d580;
        }
    }
    ctx->pc = 0x22D9D8u;
label_22d9d8:
    // 0x22d9d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22d9dc:
    // 0x22d9dc: 0x11820004  beq         $t4, $v0, . + 4 + (0x4 << 2)
label_22d9e0:
    if (ctx->pc == 0x22D9E0u) {
        ctx->pc = 0x22D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9DCu;
        // 0x22d9e0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D9E4u;
        goto label_22d9e4;
    }
    ctx->pc = 0x22D9DCu;
    {
        const bool branch_taken_0x22d9dc = (GPR_U64(ctx, 12) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9DCu;
        // 0x22d9e0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9dc) {
            ctx->pc = 0x22D9F0u;
            goto label_22d9f0;
        }
    }
    ctx->pc = 0x22D9E4u;
label_22d9e4:
    // 0x22d9e4: 0x84e024  and         $gp, $a0, $a0
    ctx->pc = 0x22d9e4u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 4) & GPR_U64(ctx, 4));
label_22d9e8:
    // 0x22d9e8: 0xf  sync
    ctx->pc = 0x22d9e8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22d9ec:
    // 0x22d9ec: 0x42000038  ei
    ctx->pc = 0x22d9ecu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_22d9f0:
    // 0x22d9f0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x22d9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_22d9f4:
    // 0x22d9f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22d9f8:
    // 0x22d9f8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x22d9f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_22d9fc:
    // 0x22d9fc: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x22d9fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_22da00:
    // 0x22da00: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x22da00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_22da04:
    // 0x22da04: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x22da04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_22da08:
    // 0x22da08: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x22da08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_22da0c:
    // 0x22da0c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x22da0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_22da10:
    // 0x22da10: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x22da10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22da14:
    // 0x22da14: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x22da14u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22da18:
    // 0x22da18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22da18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22da1c:
    // 0x22da1c: 0x3e00008  jr          $ra
label_22da20:
    if (ctx->pc == 0x22DA20u) {
        ctx->pc = 0x22DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA1Cu;
        // 0x22da20: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DA24u;
        goto label_22da24;
    }
    ctx->pc = 0x22DA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA1Cu;
        // 0x22da20: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DA24u;
label_22da24:
    // 0x22da24: 0x0  nop
    ctx->pc = 0x22da24u;
    // NOP
    ctx->pc = 0x22da28u;
}
