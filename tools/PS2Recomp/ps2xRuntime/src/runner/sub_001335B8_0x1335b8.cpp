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

// Function: sub_001335B8
// Address: 0x1335b8 - 0x133bb0
void sub_001335B8_0x1335b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001335B8_0x1335b8");
#endif

    switch (ctx->pc) {
        case 0x1335b8u: goto label_1335b8;
        case 0x1335bcu: goto label_1335bc;
        case 0x1335c0u: goto label_1335c0;
        case 0x1335c4u: goto label_1335c4;
        case 0x1335c8u: goto label_1335c8;
        case 0x1335ccu: goto label_1335cc;
        case 0x1335d0u: goto label_1335d0;
        case 0x1335d4u: goto label_1335d4;
        case 0x1335d8u: goto label_1335d8;
        case 0x1335dcu: goto label_1335dc;
        case 0x1335e0u: goto label_1335e0;
        case 0x1335e4u: goto label_1335e4;
        case 0x1335e8u: goto label_1335e8;
        case 0x1335ecu: goto label_1335ec;
        case 0x1335f0u: goto label_1335f0;
        case 0x1335f4u: goto label_1335f4;
        case 0x1335f8u: goto label_1335f8;
        case 0x1335fcu: goto label_1335fc;
        case 0x133600u: goto label_133600;
        case 0x133604u: goto label_133604;
        case 0x133608u: goto label_133608;
        case 0x13360cu: goto label_13360c;
        case 0x133610u: goto label_133610;
        case 0x133614u: goto label_133614;
        case 0x133618u: goto label_133618;
        case 0x13361cu: goto label_13361c;
        case 0x133620u: goto label_133620;
        case 0x133624u: goto label_133624;
        case 0x133628u: goto label_133628;
        case 0x13362cu: goto label_13362c;
        case 0x133630u: goto label_133630;
        case 0x133634u: goto label_133634;
        case 0x133638u: goto label_133638;
        case 0x13363cu: goto label_13363c;
        case 0x133640u: goto label_133640;
        case 0x133644u: goto label_133644;
        case 0x133648u: goto label_133648;
        case 0x13364cu: goto label_13364c;
        case 0x133650u: goto label_133650;
        case 0x133654u: goto label_133654;
        case 0x133658u: goto label_133658;
        case 0x13365cu: goto label_13365c;
        case 0x133660u: goto label_133660;
        case 0x133664u: goto label_133664;
        case 0x133668u: goto label_133668;
        case 0x13366cu: goto label_13366c;
        case 0x133670u: goto label_133670;
        case 0x133674u: goto label_133674;
        case 0x133678u: goto label_133678;
        case 0x13367cu: goto label_13367c;
        case 0x133680u: goto label_133680;
        case 0x133684u: goto label_133684;
        case 0x133688u: goto label_133688;
        case 0x13368cu: goto label_13368c;
        case 0x133690u: goto label_133690;
        case 0x133694u: goto label_133694;
        case 0x133698u: goto label_133698;
        case 0x13369cu: goto label_13369c;
        case 0x1336a0u: goto label_1336a0;
        case 0x1336a4u: goto label_1336a4;
        case 0x1336a8u: goto label_1336a8;
        case 0x1336acu: goto label_1336ac;
        case 0x1336b0u: goto label_1336b0;
        case 0x1336b4u: goto label_1336b4;
        case 0x1336b8u: goto label_1336b8;
        case 0x1336bcu: goto label_1336bc;
        case 0x1336c0u: goto label_1336c0;
        case 0x1336c4u: goto label_1336c4;
        case 0x1336c8u: goto label_1336c8;
        case 0x1336ccu: goto label_1336cc;
        case 0x1336d0u: goto label_1336d0;
        case 0x1336d4u: goto label_1336d4;
        case 0x1336d8u: goto label_1336d8;
        case 0x1336dcu: goto label_1336dc;
        case 0x1336e0u: goto label_1336e0;
        case 0x1336e4u: goto label_1336e4;
        case 0x1336e8u: goto label_1336e8;
        case 0x1336ecu: goto label_1336ec;
        case 0x1336f0u: goto label_1336f0;
        case 0x1336f4u: goto label_1336f4;
        case 0x1336f8u: goto label_1336f8;
        case 0x1336fcu: goto label_1336fc;
        case 0x133700u: goto label_133700;
        case 0x133704u: goto label_133704;
        case 0x133708u: goto label_133708;
        case 0x13370cu: goto label_13370c;
        case 0x133710u: goto label_133710;
        case 0x133714u: goto label_133714;
        case 0x133718u: goto label_133718;
        case 0x13371cu: goto label_13371c;
        case 0x133720u: goto label_133720;
        case 0x133724u: goto label_133724;
        case 0x133728u: goto label_133728;
        case 0x13372cu: goto label_13372c;
        case 0x133730u: goto label_133730;
        case 0x133734u: goto label_133734;
        case 0x133738u: goto label_133738;
        case 0x13373cu: goto label_13373c;
        case 0x133740u: goto label_133740;
        case 0x133744u: goto label_133744;
        case 0x133748u: goto label_133748;
        case 0x13374cu: goto label_13374c;
        case 0x133750u: goto label_133750;
        case 0x133754u: goto label_133754;
        case 0x133758u: goto label_133758;
        case 0x13375cu: goto label_13375c;
        case 0x133760u: goto label_133760;
        case 0x133764u: goto label_133764;
        case 0x133768u: goto label_133768;
        case 0x13376cu: goto label_13376c;
        case 0x133770u: goto label_133770;
        case 0x133774u: goto label_133774;
        case 0x133778u: goto label_133778;
        case 0x13377cu: goto label_13377c;
        case 0x133780u: goto label_133780;
        case 0x133784u: goto label_133784;
        case 0x133788u: goto label_133788;
        case 0x13378cu: goto label_13378c;
        case 0x133790u: goto label_133790;
        case 0x133794u: goto label_133794;
        case 0x133798u: goto label_133798;
        case 0x13379cu: goto label_13379c;
        case 0x1337a0u: goto label_1337a0;
        case 0x1337a4u: goto label_1337a4;
        case 0x1337a8u: goto label_1337a8;
        case 0x1337acu: goto label_1337ac;
        case 0x1337b0u: goto label_1337b0;
        case 0x1337b4u: goto label_1337b4;
        case 0x1337b8u: goto label_1337b8;
        case 0x1337bcu: goto label_1337bc;
        case 0x1337c0u: goto label_1337c0;
        case 0x1337c4u: goto label_1337c4;
        case 0x1337c8u: goto label_1337c8;
        case 0x1337ccu: goto label_1337cc;
        case 0x1337d0u: goto label_1337d0;
        case 0x1337d4u: goto label_1337d4;
        case 0x1337d8u: goto label_1337d8;
        case 0x1337dcu: goto label_1337dc;
        case 0x1337e0u: goto label_1337e0;
        case 0x1337e4u: goto label_1337e4;
        case 0x1337e8u: goto label_1337e8;
        case 0x1337ecu: goto label_1337ec;
        case 0x1337f0u: goto label_1337f0;
        case 0x1337f4u: goto label_1337f4;
        case 0x1337f8u: goto label_1337f8;
        case 0x1337fcu: goto label_1337fc;
        case 0x133800u: goto label_133800;
        case 0x133804u: goto label_133804;
        case 0x133808u: goto label_133808;
        case 0x13380cu: goto label_13380c;
        case 0x133810u: goto label_133810;
        case 0x133814u: goto label_133814;
        case 0x133818u: goto label_133818;
        case 0x13381cu: goto label_13381c;
        case 0x133820u: goto label_133820;
        case 0x133824u: goto label_133824;
        case 0x133828u: goto label_133828;
        case 0x13382cu: goto label_13382c;
        case 0x133830u: goto label_133830;
        case 0x133834u: goto label_133834;
        case 0x133838u: goto label_133838;
        case 0x13383cu: goto label_13383c;
        case 0x133840u: goto label_133840;
        case 0x133844u: goto label_133844;
        case 0x133848u: goto label_133848;
        case 0x13384cu: goto label_13384c;
        case 0x133850u: goto label_133850;
        case 0x133854u: goto label_133854;
        case 0x133858u: goto label_133858;
        case 0x13385cu: goto label_13385c;
        case 0x133860u: goto label_133860;
        case 0x133864u: goto label_133864;
        case 0x133868u: goto label_133868;
        case 0x13386cu: goto label_13386c;
        case 0x133870u: goto label_133870;
        case 0x133874u: goto label_133874;
        case 0x133878u: goto label_133878;
        case 0x13387cu: goto label_13387c;
        case 0x133880u: goto label_133880;
        case 0x133884u: goto label_133884;
        case 0x133888u: goto label_133888;
        case 0x13388cu: goto label_13388c;
        case 0x133890u: goto label_133890;
        case 0x133894u: goto label_133894;
        case 0x133898u: goto label_133898;
        case 0x13389cu: goto label_13389c;
        case 0x1338a0u: goto label_1338a0;
        case 0x1338a4u: goto label_1338a4;
        case 0x1338a8u: goto label_1338a8;
        case 0x1338acu: goto label_1338ac;
        case 0x1338b0u: goto label_1338b0;
        case 0x1338b4u: goto label_1338b4;
        case 0x1338b8u: goto label_1338b8;
        case 0x1338bcu: goto label_1338bc;
        case 0x1338c0u: goto label_1338c0;
        case 0x1338c4u: goto label_1338c4;
        case 0x1338c8u: goto label_1338c8;
        case 0x1338ccu: goto label_1338cc;
        case 0x1338d0u: goto label_1338d0;
        case 0x1338d4u: goto label_1338d4;
        case 0x1338d8u: goto label_1338d8;
        case 0x1338dcu: goto label_1338dc;
        case 0x1338e0u: goto label_1338e0;
        case 0x1338e4u: goto label_1338e4;
        case 0x1338e8u: goto label_1338e8;
        case 0x1338ecu: goto label_1338ec;
        case 0x1338f0u: goto label_1338f0;
        case 0x1338f4u: goto label_1338f4;
        case 0x1338f8u: goto label_1338f8;
        case 0x1338fcu: goto label_1338fc;
        case 0x133900u: goto label_133900;
        case 0x133904u: goto label_133904;
        case 0x133908u: goto label_133908;
        case 0x13390cu: goto label_13390c;
        case 0x133910u: goto label_133910;
        case 0x133914u: goto label_133914;
        case 0x133918u: goto label_133918;
        case 0x13391cu: goto label_13391c;
        case 0x133920u: goto label_133920;
        case 0x133924u: goto label_133924;
        case 0x133928u: goto label_133928;
        case 0x13392cu: goto label_13392c;
        case 0x133930u: goto label_133930;
        case 0x133934u: goto label_133934;
        case 0x133938u: goto label_133938;
        case 0x13393cu: goto label_13393c;
        case 0x133940u: goto label_133940;
        case 0x133944u: goto label_133944;
        case 0x133948u: goto label_133948;
        case 0x13394cu: goto label_13394c;
        case 0x133950u: goto label_133950;
        case 0x133954u: goto label_133954;
        case 0x133958u: goto label_133958;
        case 0x13395cu: goto label_13395c;
        case 0x133960u: goto label_133960;
        case 0x133964u: goto label_133964;
        case 0x133968u: goto label_133968;
        case 0x13396cu: goto label_13396c;
        case 0x133970u: goto label_133970;
        case 0x133974u: goto label_133974;
        case 0x133978u: goto label_133978;
        case 0x13397cu: goto label_13397c;
        case 0x133980u: goto label_133980;
        case 0x133984u: goto label_133984;
        case 0x133988u: goto label_133988;
        case 0x13398cu: goto label_13398c;
        case 0x133990u: goto label_133990;
        case 0x133994u: goto label_133994;
        case 0x133998u: goto label_133998;
        case 0x13399cu: goto label_13399c;
        case 0x1339a0u: goto label_1339a0;
        case 0x1339a4u: goto label_1339a4;
        case 0x1339a8u: goto label_1339a8;
        case 0x1339acu: goto label_1339ac;
        case 0x1339b0u: goto label_1339b0;
        case 0x1339b4u: goto label_1339b4;
        case 0x1339b8u: goto label_1339b8;
        case 0x1339bcu: goto label_1339bc;
        case 0x1339c0u: goto label_1339c0;
        case 0x1339c4u: goto label_1339c4;
        case 0x1339c8u: goto label_1339c8;
        case 0x1339ccu: goto label_1339cc;
        case 0x1339d0u: goto label_1339d0;
        case 0x1339d4u: goto label_1339d4;
        case 0x1339d8u: goto label_1339d8;
        case 0x1339dcu: goto label_1339dc;
        case 0x1339e0u: goto label_1339e0;
        case 0x1339e4u: goto label_1339e4;
        case 0x1339e8u: goto label_1339e8;
        case 0x1339ecu: goto label_1339ec;
        case 0x1339f0u: goto label_1339f0;
        case 0x1339f4u: goto label_1339f4;
        case 0x1339f8u: goto label_1339f8;
        case 0x1339fcu: goto label_1339fc;
        case 0x133a00u: goto label_133a00;
        case 0x133a04u: goto label_133a04;
        case 0x133a08u: goto label_133a08;
        case 0x133a0cu: goto label_133a0c;
        case 0x133a10u: goto label_133a10;
        case 0x133a14u: goto label_133a14;
        case 0x133a18u: goto label_133a18;
        case 0x133a1cu: goto label_133a1c;
        case 0x133a20u: goto label_133a20;
        case 0x133a24u: goto label_133a24;
        case 0x133a28u: goto label_133a28;
        case 0x133a2cu: goto label_133a2c;
        case 0x133a30u: goto label_133a30;
        case 0x133a34u: goto label_133a34;
        case 0x133a38u: goto label_133a38;
        case 0x133a3cu: goto label_133a3c;
        case 0x133a40u: goto label_133a40;
        case 0x133a44u: goto label_133a44;
        case 0x133a48u: goto label_133a48;
        case 0x133a4cu: goto label_133a4c;
        case 0x133a50u: goto label_133a50;
        case 0x133a54u: goto label_133a54;
        case 0x133a58u: goto label_133a58;
        case 0x133a5cu: goto label_133a5c;
        case 0x133a60u: goto label_133a60;
        case 0x133a64u: goto label_133a64;
        case 0x133a68u: goto label_133a68;
        case 0x133a6cu: goto label_133a6c;
        case 0x133a70u: goto label_133a70;
        case 0x133a74u: goto label_133a74;
        case 0x133a78u: goto label_133a78;
        case 0x133a7cu: goto label_133a7c;
        case 0x133a80u: goto label_133a80;
        case 0x133a84u: goto label_133a84;
        case 0x133a88u: goto label_133a88;
        case 0x133a8cu: goto label_133a8c;
        case 0x133a90u: goto label_133a90;
        case 0x133a94u: goto label_133a94;
        case 0x133a98u: goto label_133a98;
        case 0x133a9cu: goto label_133a9c;
        case 0x133aa0u: goto label_133aa0;
        case 0x133aa4u: goto label_133aa4;
        case 0x133aa8u: goto label_133aa8;
        case 0x133aacu: goto label_133aac;
        case 0x133ab0u: goto label_133ab0;
        case 0x133ab4u: goto label_133ab4;
        case 0x133ab8u: goto label_133ab8;
        case 0x133abcu: goto label_133abc;
        case 0x133ac0u: goto label_133ac0;
        case 0x133ac4u: goto label_133ac4;
        case 0x133ac8u: goto label_133ac8;
        case 0x133accu: goto label_133acc;
        case 0x133ad0u: goto label_133ad0;
        case 0x133ad4u: goto label_133ad4;
        case 0x133ad8u: goto label_133ad8;
        case 0x133adcu: goto label_133adc;
        case 0x133ae0u: goto label_133ae0;
        case 0x133ae4u: goto label_133ae4;
        case 0x133ae8u: goto label_133ae8;
        case 0x133aecu: goto label_133aec;
        case 0x133af0u: goto label_133af0;
        case 0x133af4u: goto label_133af4;
        case 0x133af8u: goto label_133af8;
        case 0x133afcu: goto label_133afc;
        case 0x133b00u: goto label_133b00;
        case 0x133b04u: goto label_133b04;
        case 0x133b08u: goto label_133b08;
        case 0x133b0cu: goto label_133b0c;
        case 0x133b10u: goto label_133b10;
        case 0x133b14u: goto label_133b14;
        case 0x133b18u: goto label_133b18;
        case 0x133b1cu: goto label_133b1c;
        case 0x133b20u: goto label_133b20;
        case 0x133b24u: goto label_133b24;
        case 0x133b28u: goto label_133b28;
        case 0x133b2cu: goto label_133b2c;
        case 0x133b30u: goto label_133b30;
        case 0x133b34u: goto label_133b34;
        case 0x133b38u: goto label_133b38;
        case 0x133b3cu: goto label_133b3c;
        case 0x133b40u: goto label_133b40;
        case 0x133b44u: goto label_133b44;
        case 0x133b48u: goto label_133b48;
        case 0x133b4cu: goto label_133b4c;
        case 0x133b50u: goto label_133b50;
        case 0x133b54u: goto label_133b54;
        case 0x133b58u: goto label_133b58;
        case 0x133b5cu: goto label_133b5c;
        case 0x133b60u: goto label_133b60;
        case 0x133b64u: goto label_133b64;
        case 0x133b68u: goto label_133b68;
        case 0x133b6cu: goto label_133b6c;
        case 0x133b70u: goto label_133b70;
        case 0x133b74u: goto label_133b74;
        case 0x133b78u: goto label_133b78;
        case 0x133b7cu: goto label_133b7c;
        case 0x133b80u: goto label_133b80;
        case 0x133b84u: goto label_133b84;
        case 0x133b88u: goto label_133b88;
        case 0x133b8cu: goto label_133b8c;
        case 0x133b90u: goto label_133b90;
        case 0x133b94u: goto label_133b94;
        case 0x133b98u: goto label_133b98;
        case 0x133b9cu: goto label_133b9c;
        case 0x133ba0u: goto label_133ba0;
        case 0x133ba4u: goto label_133ba4;
        case 0x133ba8u: goto label_133ba8;
        case 0x133bacu: goto label_133bac;
        default: break;
    }

    ctx->pc = 0x1335b8u;

label_1335b8:
    // 0x1335b8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1335b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1335bc:
    // 0x1335bc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1335bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1335c0:
    // 0x1335c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1335c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1335c4:
    // 0x1335c4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1335c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1335c8:
    // 0x1335c8: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x1335c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1335cc:
    // 0x1335cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1335ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1335d0:
    // 0x1335d0: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x1335d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1335d4:
    // 0x1335d4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1335d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_1335d8:
    // 0x1335d8: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1335d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1335dc:
    // 0x1335dc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1335dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_1335e0:
    // 0x1335e0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1335e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1335e4:
    // 0x1335e4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1335e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1335e8:
    // 0x1335e8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1335e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1335ec:
    // 0x1335ec: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x1335ecu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_1335f0:
    // 0x1335f0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1335f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1335f4:
    // 0x1335f4: 0x24a5de18  addiu       $a1, $a1, -0x21E8
    ctx->pc = 0x1335f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958616));
label_1335f8:
    // 0x1335f8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1335f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1335fc:
    // 0x1335fc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1335fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_133600:
    // 0x133600: 0xc065c58  jal         func_197160
label_133604:
    if (ctx->pc == 0x133604u) {
        ctx->pc = 0x133604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133600u;
        // 0x133604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133608u;
        goto label_133608;
    }
    ctx->pc = 0x133600u;
    SET_GPR_U32(ctx, 31, 0x133608u);
    ctx->pc = 0x133604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133600u;
    // 0x133604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x133600u, 0x133608u)) {
        return;
    }
    ctx->pc = 0x133608u;
label_133608:
    // 0x133608: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_13360c:
    if (ctx->pc == 0x13360Cu) {
        ctx->pc = 0x13360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133608u;
        // 0x13360c: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133610u;
        goto label_133610;
    }
    ctx->pc = 0x133608u;
    {
        const bool branch_taken_0x133608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133608u;
        // 0x13360c: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133608) {
            ctx->pc = 0x133624u;
            goto label_133624;
        }
    }
    ctx->pc = 0x133610u;
label_133610:
    // 0x133610: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x133610u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_133614:
    // 0x133614: 0xc042214  jal         func_108850
label_133618:
    if (ctx->pc == 0x133618u) {
        ctx->pc = 0x133618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133614u;
        // 0x133618: 0x24844238  addiu       $a0, $a0, 0x4238 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13361Cu;
        goto label_13361c;
    }
    ctx->pc = 0x133614u;
    SET_GPR_U32(ctx, 31, 0x13361Cu);
    ctx->pc = 0x133618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133614u;
    // 0x133618: 0x24844238  addiu       $a0, $a0, 0x4238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x108850u, 0x133614u, 0x13361Cu)) {
        return;
    }
    ctx->pc = 0x13361Cu;
label_13361c:
    // 0x13361c: 0x10000159  b           . + 4 + (0x159 << 2)
label_133620:
    if (ctx->pc == 0x133620u) {
        ctx->pc = 0x133620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13361Cu;
        // 0x133620: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133624u;
        goto label_133624;
    }
    ctx->pc = 0x13361Cu;
    {
        const bool branch_taken_0x13361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13361Cu;
        // 0x133620: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13361c) {
            ctx->pc = 0x133B84u;
            goto label_133b84;
        }
    }
    ctx->pc = 0x133624u;
label_133624:
    // 0x133624: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x133624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_133628:
    // 0x133628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13362c:
    // 0x13362c: 0xc065c58  jal         func_197160
label_133630:
    if (ctx->pc == 0x133630u) {
        ctx->pc = 0x133630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13362Cu;
        // 0x133630: 0x24a5de30  addiu       $a1, $a1, -0x21D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133634u;
        goto label_133634;
    }
    ctx->pc = 0x13362Cu;
    SET_GPR_U32(ctx, 31, 0x133634u);
    ctx->pc = 0x133630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13362Cu;
    // 0x133630: 0x24a5de30  addiu       $a1, $a1, -0x21D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x13362Cu, 0x133634u)) {
        return;
    }
    ctx->pc = 0x133634u;
label_133634:
    // 0x133634: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_133638:
    if (ctx->pc == 0x133638u) {
        ctx->pc = 0x133638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133634u;
        // 0x133638: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13363Cu;
        goto label_13363c;
    }
    ctx->pc = 0x133634u;
    {
        const bool branch_taken_0x133634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133634u;
        // 0x133638: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133634) {
            ctx->pc = 0x133658u;
            goto label_133658;
        }
    }
    ctx->pc = 0x13363Cu;
label_13363c:
    // 0x13363c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13363cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_133640:
    // 0x133640: 0x24844238  addiu       $a0, $a0, 0x4238
    ctx->pc = 0x133640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16952));
label_133644:
    // 0x133644: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x133644u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_133648:
    // 0x133648: 0xc042262  jal         func_108988
label_13364c:
    if (ctx->pc == 0x13364Cu) {
        ctx->pc = 0x13364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133648u;
        // 0x13364c: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x133650u;
        goto label_133650;
    }
    ctx->pc = 0x133648u;
    SET_GPR_U32(ctx, 31, 0x133650u);
    ctx->pc = 0x13364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133648u;
    // 0x13364c: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x108988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x108988u, 0x133648u, 0x133650u)) {
        return;
    }
    ctx->pc = 0x133650u;
label_133650:
    // 0x133650: 0x1000014c  b           . + 4 + (0x14C << 2)
label_133654:
    if (ctx->pc == 0x133654u) {
        ctx->pc = 0x133654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133650u;
        // 0x133654: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133658u;
        goto label_133658;
    }
    ctx->pc = 0x133650u;
    {
        const bool branch_taken_0x133650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133650u;
        // 0x133654: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133650) {
            ctx->pc = 0x133B84u;
            goto label_133b84;
        }
    }
    ctx->pc = 0x133658u;
label_133658:
    // 0x133658: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x133658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_13365c:
    // 0x13365c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13365cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133660:
    // 0x133660: 0xc065c58  jal         func_197160
label_133664:
    if (ctx->pc == 0x133664u) {
        ctx->pc = 0x133664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133660u;
        // 0x133664: 0x24a5de48  addiu       $a1, $a1, -0x21B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133668u;
        goto label_133668;
    }
    ctx->pc = 0x133660u;
    SET_GPR_U32(ctx, 31, 0x133668u);
    ctx->pc = 0x133664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133660u;
    // 0x133664: 0x24a5de48  addiu       $a1, $a1, -0x21B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x133660u, 0x133668u)) {
        return;
    }
    ctx->pc = 0x133668u;
label_133668:
    // 0x133668: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_13366c:
    if (ctx->pc == 0x13366Cu) {
        ctx->pc = 0x13366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133668u;
        // 0x13366c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x133670u;
        goto label_133670;
    }
    ctx->pc = 0x133668u;
    {
        const bool branch_taken_0x133668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133668u;
        // 0x13366c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x133668) {
            ctx->pc = 0x13368Cu;
            goto label_13368c;
        }
    }
    ctx->pc = 0x133670u;
label_133670:
    // 0x133670: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x133670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_133674:
    // 0x133674: 0x844402a0  lh          $a0, 0x2A0($v0)
    ctx->pc = 0x133674u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 672)));
label_133678:
    // 0x133678: 0x8c4302a4  lw          $v1, 0x2A4($v0)
    ctx->pc = 0x133678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 676)));
label_13367c:
    // 0x13367c: 0x60f809  jalr        $v1
label_133680:
    if (ctx->pc == 0x133680u) {
        ctx->pc = 0x133680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13367Cu;
        // 0x133680: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133684u;
        goto label_133684;
    }
    ctx->pc = 0x13367Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x133684u);
        ctx->pc = 0x133680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13367Cu;
        // 0x133680: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13367Cu, 0x133684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x133684u;
label_133684:
    // 0x133684: 0x1000013f  b           . + 4 + (0x13F << 2)
label_133688:
    if (ctx->pc == 0x133688u) {
        ctx->pc = 0x133688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133684u;
        // 0x133688: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13368Cu;
        goto label_13368c;
    }
    ctx->pc = 0x133684u;
    {
        const bool branch_taken_0x133684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133684u;
        // 0x133688: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133684) {
            ctx->pc = 0x133B84u;
            goto label_133b84;
        }
    }
    ctx->pc = 0x13368Cu;
label_13368c:
    // 0x13368c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13368cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_133690:
    // 0x133690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133694:
    // 0x133694: 0xc065c58  jal         func_197160
label_133698:
    if (ctx->pc == 0x133698u) {
        ctx->pc = 0x133698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133694u;
        // 0x133698: 0x24a5de60  addiu       $a1, $a1, -0x21A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13369Cu;
        goto label_13369c;
    }
    ctx->pc = 0x133694u;
    SET_GPR_U32(ctx, 31, 0x13369Cu);
    ctx->pc = 0x133698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133694u;
    // 0x133698: 0x24a5de60  addiu       $a1, $a1, -0x21A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x133694u, 0x13369Cu)) {
        return;
    }
    ctx->pc = 0x13369Cu;
label_13369c:
    // 0x13369c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1336a0:
    if (ctx->pc == 0x1336A0u) {
        ctx->pc = 0x1336A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13369Cu;
        // 0x1336a0: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1336A4u;
        goto label_1336a4;
    }
    ctx->pc = 0x13369Cu;
    {
        const bool branch_taken_0x13369c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1336A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13369Cu;
        // 0x1336a0: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13369c) {
            ctx->pc = 0x1336D0u;
            goto label_1336d0;
        }
    }
    ctx->pc = 0x1336A4u;
label_1336a4:
    // 0x1336a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1336a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1336a8:
    // 0x1336a8: 0x0  nop
    ctx->pc = 0x1336a8u;
    // NOP
label_1336ac:
    // 0x1336ac: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x1336acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1336b0:
    // 0x1336b0: 0x0  nop
    ctx->pc = 0x1336b0u;
    // NOP
label_1336b4:
    // 0x1336b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1336b8:
    if (ctx->pc == 0x1336B8u) {
        ctx->pc = 0x1336B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336B4u;
        // 0x1336b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1336BCu;
        goto label_1336bc;
    }
    ctx->pc = 0x1336B4u;
    {
        const bool branch_taken_0x1336b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1336B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336B4u;
        // 0x1336b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1336b4) {
            ctx->pc = 0x1336C0u;
            goto label_1336c0;
        }
    }
    ctx->pc = 0x1336BCu;
label_1336bc:
    // 0x1336bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1336bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1336c0:
    // 0x1336c0: 0xc04d1c6  jal         func_134718
label_1336c4:
    if (ctx->pc == 0x1336C4u) {
        ctx->pc = 0x1336C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336C0u;
        // 0x1336c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1336C8u;
        goto label_1336c8;
    }
    ctx->pc = 0x1336C0u;
    SET_GPR_U32(ctx, 31, 0x1336C8u);
    ctx->pc = 0x1336C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336C0u;
    // 0x1336c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x134718u, 0x1336C0u, 0x1336C8u)) {
        return;
    }
    ctx->pc = 0x1336C8u;
label_1336c8:
    // 0x1336c8: 0x1000012e  b           . + 4 + (0x12E << 2)
label_1336cc:
    if (ctx->pc == 0x1336CCu) {
        ctx->pc = 0x1336CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336C8u;
        // 0x1336cc: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1336D0u;
        goto label_1336d0;
    }
    ctx->pc = 0x1336C8u;
    {
        const bool branch_taken_0x1336c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1336CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336C8u;
        // 0x1336cc: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1336c8) {
            ctx->pc = 0x133B84u;
            goto label_133b84;
        }
    }
    ctx->pc = 0x1336D0u;
label_1336d0:
    // 0x1336d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1336d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1336d4:
    // 0x1336d4: 0xc065c58  jal         func_197160
label_1336d8:
    if (ctx->pc == 0x1336D8u) {
        ctx->pc = 0x1336D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336D4u;
        // 0x1336d8: 0x24a5de70  addiu       $a1, $a1, -0x2190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1336DCu;
        goto label_1336dc;
    }
    ctx->pc = 0x1336D4u;
    SET_GPR_U32(ctx, 31, 0x1336DCu);
    ctx->pc = 0x1336D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336D4u;
    // 0x1336d8: 0x24a5de70  addiu       $a1, $a1, -0x2190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x1336D4u, 0x1336DCu)) {
        return;
    }
    ctx->pc = 0x1336DCu;
label_1336dc:
    // 0x1336dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1336e0:
    if (ctx->pc == 0x1336E0u) {
        ctx->pc = 0x1336E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336DCu;
        // 0x1336e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1336E4u;
        goto label_1336e4;
    }
    ctx->pc = 0x1336DCu;
    {
        const bool branch_taken_0x1336dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1336E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336DCu;
        // 0x1336e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1336dc) {
            ctx->pc = 0x1336ECu;
            goto label_1336ec;
        }
    }
    ctx->pc = 0x1336E4u;
label_1336e4:
    // 0x1336e4: 0x10000126  b           . + 4 + (0x126 << 2)
label_1336e8:
    if (ctx->pc == 0x1336E8u) {
        ctx->pc = 0x1336E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336E4u;
        // 0x1336e8: 0xae821a54  sw          $v0, 0x1A54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 6740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1336ECu;
        goto label_1336ec;
    }
    ctx->pc = 0x1336E4u;
    {
        const bool branch_taken_0x1336e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1336E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336E4u;
        // 0x1336e8: 0xae821a54  sw          $v0, 0x1A54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 6740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1336e4) {
            ctx->pc = 0x133B80u;
            goto label_133b80;
        }
    }
    ctx->pc = 0x1336ECu;
label_1336ec:
    // 0x1336ec: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1336ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_1336f0:
    // 0x1336f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1336f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1336f4:
    // 0x1336f4: 0xc065c58  jal         func_197160
label_1336f8:
    if (ctx->pc == 0x1336F8u) {
        ctx->pc = 0x1336F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336F4u;
        // 0x1336f8: 0x24a5de80  addiu       $a1, $a1, -0x2180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1336FCu;
        goto label_1336fc;
    }
    ctx->pc = 0x1336F4u;
    SET_GPR_U32(ctx, 31, 0x1336FCu);
    ctx->pc = 0x1336F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336F4u;
    // 0x1336f8: 0x24a5de80  addiu       $a1, $a1, -0x2180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x1336F4u, 0x1336FCu)) {
        return;
    }
    ctx->pc = 0x1336FCu;
label_1336fc:
    // 0x1336fc: 0x5040006b  beql        $v0, $zero, . + 4 + (0x6B << 2)
label_133700:
    if (ctx->pc == 0x133700u) {
        ctx->pc = 0x133700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336FCu;
        // 0x133700: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133704u;
        goto label_133704;
    }
    ctx->pc = 0x1336FCu;
    {
        const bool branch_taken_0x1336fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1336fc) {
            ctx->pc = 0x133700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1336FCu;
            // 0x133700: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1338ACu;
            goto label_1338ac;
        }
    }
    ctx->pc = 0x133704u;
label_133704:
    // 0x133704: 0x8e83153c  lw          $v1, 0x153C($s4)
    ctx->pc = 0x133704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5436)));
label_133708:
    // 0x133708: 0x5060011e  beql        $v1, $zero, . + 4 + (0x11E << 2)
label_13370c:
    if (ctx->pc == 0x13370Cu) {
        ctx->pc = 0x13370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133708u;
        // 0x13370c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133710u;
        goto label_133710;
    }
    ctx->pc = 0x133708u;
    {
        const bool branch_taken_0x133708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133708) {
            ctx->pc = 0x13370Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133708u;
            // 0x13370c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133B84u;
            goto label_133b84;
        }
    }
    ctx->pc = 0x133710u;
label_133710:
    // 0x133710: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x133710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_133714:
    // 0x133714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x133714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_133718:
    // 0x133718: 0x0  nop
    ctx->pc = 0x133718u;
    // NOP
label_13371c:
    // 0x13371c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x13371cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_133720:
    // 0x133720: 0x0  nop
    ctx->pc = 0x133720u;
    // NOP
label_133724:
    // 0x133724: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_133728:
    if (ctx->pc == 0x133728u) {
        ctx->pc = 0x133728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133724u;
        // 0x133728: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13372Cu;
        goto label_13372c;
    }
    ctx->pc = 0x133724u;
    {
        const bool branch_taken_0x133724 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x133728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133724u;
        // 0x133728: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133724) {
            ctx->pc = 0x13374Cu;
            goto label_13374c;
        }
    }
    ctx->pc = 0x13372Cu;
label_13372c:
    // 0x13372c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x13372cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_133730:
    // 0x133730: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x133730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_133734:
    // 0x133734: 0x0  nop
    ctx->pc = 0x133734u;
    // NOP
label_133738:
    // 0x133738: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x133738u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13373c:
    // 0x13373c: 0x0  nop
    ctx->pc = 0x13373cu;
    // NOP
label_133740:
    // 0x133740: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_133744:
    if (ctx->pc == 0x133744u) {
        ctx->pc = 0x133744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133740u;
        // 0x133744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133748u;
        goto label_133748;
    }
    ctx->pc = 0x133740u;
    {
        const bool branch_taken_0x133740 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x133744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133740u;
        // 0x133744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133740) {
            ctx->pc = 0x13374Cu;
            goto label_13374c;
        }
    }
    ctx->pc = 0x133748u;
label_133748:
    // 0x133748: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x133748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13374c:
    // 0x13374c: 0xac622d80  sw          $v0, 0x2D80($v1)
    ctx->pc = 0x13374cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11648), GPR_U32(ctx, 2));
label_133750:
    // 0x133750: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x133750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_133754:
    // 0x133754: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x133754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_133758:
    // 0x133758: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x133758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_13375c:
    // 0x13375c: 0x8e90153c  lw          $s0, 0x153C($s4)
    ctx->pc = 0x13375cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5436)));
label_133760:
    // 0x133760: 0x8e110074  lw          $s1, 0x74($s0)
    ctx->pc = 0x133760u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_133764:
    // 0x133764: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x133764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_133768:
    // 0x133768: 0x862200d0  lh          $v0, 0xD0($s1)
    ctx->pc = 0x133768u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 208)));
label_13376c:
    // 0x13376c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13376cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133770:
    // 0x133770: 0x263100d0  addiu       $s1, $s1, 0xD0
    ctx->pc = 0x133770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_133774:
    // 0x133774: 0xc04f0cc  jal         func_13C330
label_133778:
    if (ctx->pc == 0x133778u) {
        ctx->pc = 0x133778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133774u;
        // 0x133778: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13377Cu;
        goto label_13377c;
    }
    ctx->pc = 0x133774u;
    SET_GPR_U32(ctx, 31, 0x13377Cu);
    ctx->pc = 0x133778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133774u;
    // 0x133778: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x133774u, 0x13377Cu)) {
        return;
    }
    ctx->pc = 0x13377Cu;
label_13377c:
    // 0x13377c: 0x8e83153c  lw          $v1, 0x153C($s4)
    ctx->pc = 0x13377cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5436)));
label_133780:
    // 0x133780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133784:
    // 0x133784: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x133784u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_133788:
    // 0x133788: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x133788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13378c:
    // 0x13378c: 0xc46c0c18  lwc1        $f12, 0xC18($v1)
    ctx->pc = 0x13378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_133790:
    // 0x133790: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x133790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_133794:
    // 0x133794: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x133794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_133798:
    // 0x133798: 0x120f809  jalr        $t1
label_13379c:
    if (ctx->pc == 0x13379Cu) {
        ctx->pc = 0x13379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133798u;
        // 0x13379c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1337A0u;
        goto label_1337a0;
    }
    ctx->pc = 0x133798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1337A0u);
        ctx->pc = 0x13379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133798u;
        // 0x13379c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133798u, 0x1337A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1337A0u;
label_1337a0:
    // 0x1337a0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1337a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1337a4:
    // 0x1337a4: 0x8c448b2c  lw          $a0, -0x74D4($v0)
    ctx->pc = 0x1337a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
label_1337a8:
    // 0x1337a8: 0x8c85006c  lw          $a1, 0x6C($a0)
    ctx->pc = 0x1337a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_1337ac:
    // 0x1337ac: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_1337b0:
    if (ctx->pc == 0x1337B0u) {
        ctx->pc = 0x1337B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337ACu;
        // 0x1337b0: 0xafa50050  sw          $a1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1337B4u;
        goto label_1337b4;
    }
    ctx->pc = 0x1337ACu;
    {
        const bool branch_taken_0x1337ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1337B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337ACu;
        // 0x1337b0: 0xafa50050  sw          $a1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1337ac) {
            ctx->pc = 0x1337DCu;
            goto label_1337dc;
        }
    }
    ctx->pc = 0x1337B4u;
label_1337b4:
    // 0x1337b4: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x1337b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_1337b8:
    // 0x1337b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1337b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1337bc:
    // 0x1337bc: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_1337c0:
    if (ctx->pc == 0x1337C0u) {
        ctx->pc = 0x1337C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337BCu;
        // 0x1337c0: 0x8e84153c  lw          $a0, 0x153C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1337C4u;
        goto label_1337c4;
    }
    ctx->pc = 0x1337BCu;
    {
        const bool branch_taken_0x1337bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1337bc) {
            ctx->pc = 0x1337C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1337BCu;
            // 0x1337c0: 0x8e84153c  lw          $a0, 0x153C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1337E0u;
            goto label_1337e0;
        }
    }
    ctx->pc = 0x1337C4u;
label_1337c4:
    // 0x1337c4: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x1337c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_1337c8:
    // 0x1337c8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1337c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1337cc:
    // 0x1337cc: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_1337d0:
    if (ctx->pc == 0x1337D0u) {
        ctx->pc = 0x1337D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337CCu;
        // 0x1337d0: 0x8e84153c  lw          $a0, 0x153C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1337D4u;
        goto label_1337d4;
    }
    ctx->pc = 0x1337CCu;
    {
        const bool branch_taken_0x1337cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1337cc) {
            ctx->pc = 0x1337D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1337CCu;
            // 0x1337d0: 0x8e84153c  lw          $a0, 0x153C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1337E0u;
            goto label_1337e0;
        }
    }
    ctx->pc = 0x1337D4u;
label_1337d4:
    // 0x1337d4: 0xc063c4e  jal         func_18F138
label_1337d8:
    if (ctx->pc == 0x1337D8u) {
        ctx->pc = 0x1337D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337D4u;
        // 0x1337d8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1337DCu;
        goto label_1337dc;
    }
    ctx->pc = 0x1337D4u;
    SET_GPR_U32(ctx, 31, 0x1337DCu);
    ctx->pc = 0x1337D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1337D4u;
    // 0x1337d8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18F138u, 0x1337D4u, 0x1337DCu)) {
        return;
    }
    ctx->pc = 0x1337DCu;
label_1337dc:
    // 0x1337dc: 0x8e84153c  lw          $a0, 0x153C($s4)
    ctx->pc = 0x1337dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5436)));
label_1337e0:
    // 0x1337e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1337e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1337e4:
    // 0x1337e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1337e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1337e8:
    // 0x1337e8: 0xc04f0cc  jal         func_13C330
label_1337ec:
    if (ctx->pc == 0x1337ECu) {
        ctx->pc = 0x1337ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337E8u;
        // 0x1337ec: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1337F0u;
        goto label_1337f0;
    }
    ctx->pc = 0x1337E8u;
    SET_GPR_U32(ctx, 31, 0x1337F0u);
    ctx->pc = 0x1337ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1337E8u;
    // 0x1337ec: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1337E8u, 0x1337F0u)) {
        return;
    }
    ctx->pc = 0x1337F0u;
label_1337f0:
    // 0x1337f0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1337f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1337f4:
    // 0x1337f4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1337f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1337f8:
    // 0x1337f8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1337f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1337fc:
    // 0x1337fc: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x1337fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_133800:
    // 0x133800: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x133800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_133804:
    // 0x133804: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x133804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_133808:
    // 0x133808: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x133808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13380c:
    // 0x13380c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x13380cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_133810:
    // 0x133810: 0x8e84153c  lw          $a0, 0x153C($s4)
    ctx->pc = 0x133810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5436)));
label_133814:
    // 0x133814: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x133814u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_133818:
    // 0x133818: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x133818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_13381c:
    // 0x13381c: 0xc04975a  jal         func_125D68
label_133820:
    if (ctx->pc == 0x133820u) {
        ctx->pc = 0x133820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13381Cu;
        // 0x133820: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133824u;
        goto label_133824;
    }
    ctx->pc = 0x13381Cu;
    SET_GPR_U32(ctx, 31, 0x133824u);
    ctx->pc = 0x133820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13381Cu;
    // 0x133820: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125D68u, 0x13381Cu, 0x133824u)) {
        return;
    }
    ctx->pc = 0x133824u;
label_133824:
    // 0x133824: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x133824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_133828:
    // 0x133828: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x133828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13382c:
    // 0x13382c: 0x8e83153c  lw          $v1, 0x153C($s4)
    ctx->pc = 0x13382cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5436)));
label_133830:
    // 0x133830: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x133830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_133834:
    // 0x133834: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x133834u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_133838:
    // 0x133838: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x133838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13383c:
    // 0x13383c: 0x24680084  addiu       $t0, $v1, 0x84
    ctx->pc = 0x13383cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_133840:
    // 0x133840: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x133840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_133844:
    // 0x133844: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x133844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_133848:
    // 0x133848: 0x84440100  lh          $a0, 0x100($v0)
    ctx->pc = 0x133848u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
label_13384c:
    // 0x13384c: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x13384cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_133850:
    // 0x133850: 0x60f809  jalr        $v1
label_133854:
    if (ctx->pc == 0x133854u) {
        ctx->pc = 0x133854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133850u;
        // 0x133854: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133858u;
        goto label_133858;
    }
    ctx->pc = 0x133850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x133858u);
        ctx->pc = 0x133854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133850u;
        // 0x133854: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133850u, 0x133858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x133858u;
label_133858:
    // 0x133858: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x133858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_13385c:
    // 0x13385c: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x13385cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_133860:
    // 0x133860: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x133860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_133864:
    // 0x133864: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x133864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_133868:
    // 0x133868: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x133868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13386c:
    // 0x13386c: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x13386cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_133870:
    // 0x133870: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x133870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_133874:
    // 0x133874: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x133874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_133878:
    // 0x133878: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x133878u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_13387c:
    // 0x13387c: 0xc0561b6  jal         func_1586D8
label_133880:
    if (ctx->pc == 0x133880u) {
        ctx->pc = 0x133880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13387Cu;
        // 0x133880: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133884u;
        goto label_133884;
    }
    ctx->pc = 0x13387Cu;
    SET_GPR_U32(ctx, 31, 0x133884u);
    ctx->pc = 0x133880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13387Cu;
    // 0x133880: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1586D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1586D8u, 0x13387Cu, 0x133884u)) {
        return;
    }
    ctx->pc = 0x133884u;
label_133884:
    // 0x133884: 0x8e83153c  lw          $v1, 0x153C($s4)
    ctx->pc = 0x133884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5436)));
label_133888:
    // 0x133888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13388c:
    // 0x13388c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x13388cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133890:
    // 0x133890: 0xc4600c18  lwc1        $f0, 0xC18($v1)
    ctx->pc = 0x133890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_133894:
    // 0x133894: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x133894u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_133898:
    // 0x133898: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x133898u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_13389c:
    // 0x13389c: 0xc055e08  jal         func_157820
label_1338a0:
    if (ctx->pc == 0x1338A0u) {
        ctx->pc = 0x1338A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13389Cu;
        // 0x1338a0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1338A4u;
        goto label_1338a4;
    }
    ctx->pc = 0x13389Cu;
    SET_GPR_U32(ctx, 31, 0x1338A4u);
    ctx->pc = 0x1338A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13389Cu;
    // 0x1338a0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x157820u, 0x13389Cu, 0x1338A4u)) {
        return;
    }
    ctx->pc = 0x1338A4u;
label_1338a4:
    // 0x1338a4: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_1338a8:
    if (ctx->pc == 0x1338A8u) {
        ctx->pc = 0x1338A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338A4u;
        // 0x1338a8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1338ACu;
        goto label_1338ac;
    }
    ctx->pc = 0x1338A4u;
    {
        const bool branch_taken_0x1338a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1338A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338A4u;
        // 0x1338a8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1338a4) {
            ctx->pc = 0x133B84u;
            goto label_133b84;
        }
    }
    ctx->pc = 0x1338ACu;
label_1338ac:
    // 0x1338ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1338acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1338b0:
    // 0x1338b0: 0xc065c58  jal         func_197160
label_1338b4:
    if (ctx->pc == 0x1338B4u) {
        ctx->pc = 0x1338B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338B0u;
        // 0x1338b4: 0x24a5de98  addiu       $a1, $a1, -0x2168 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1338B8u;
        goto label_1338b8;
    }
    ctx->pc = 0x1338B0u;
    SET_GPR_U32(ctx, 31, 0x1338B8u);
    ctx->pc = 0x1338B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338B0u;
    // 0x1338b4: 0x24a5de98  addiu       $a1, $a1, -0x2168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x1338B0u, 0x1338B8u)) {
        return;
    }
    ctx->pc = 0x1338B8u;
label_1338b8:
    // 0x1338b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1338bc:
    if (ctx->pc == 0x1338BCu) {
        ctx->pc = 0x1338BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338B8u;
        // 0x1338bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1338C0u;
        goto label_1338c0;
    }
    ctx->pc = 0x1338B8u;
    {
        const bool branch_taken_0x1338b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1338BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338B8u;
        // 0x1338bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1338b8) {
            ctx->pc = 0x1338D0u;
            goto label_1338d0;
        }
    }
    ctx->pc = 0x1338C0u;
label_1338c0:
    // 0x1338c0: 0xc04dfc2  jal         func_137F08
label_1338c4:
    if (ctx->pc == 0x1338C4u) {
        ctx->pc = 0x1338C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338C0u;
        // 0x1338c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1338C8u;
        goto label_1338c8;
    }
    ctx->pc = 0x1338C0u;
    SET_GPR_U32(ctx, 31, 0x1338C8u);
    ctx->pc = 0x1338C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338C0u;
    // 0x1338c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137F08u, 0x1338C0u, 0x1338C8u)) {
        return;
    }
    ctx->pc = 0x1338C8u;
label_1338c8:
    // 0x1338c8: 0x100000ae  b           . + 4 + (0xAE << 2)
label_1338cc:
    if (ctx->pc == 0x1338CCu) {
        ctx->pc = 0x1338CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338C8u;
        // 0x1338cc: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1338D0u;
        goto label_1338d0;
    }
    ctx->pc = 0x1338C8u;
    {
        const bool branch_taken_0x1338c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1338CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338C8u;
        // 0x1338cc: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1338c8) {
            ctx->pc = 0x133B84u;
            goto label_133b84;
        }
    }
    ctx->pc = 0x1338D0u;
label_1338d0:
    // 0x1338d0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1338d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_1338d4:
    // 0x1338d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1338d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1338d8:
    // 0x1338d8: 0xc065c58  jal         func_197160
label_1338dc:
    if (ctx->pc == 0x1338DCu) {
        ctx->pc = 0x1338DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338D8u;
        // 0x1338dc: 0x24a5dea0  addiu       $a1, $a1, -0x2160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1338E0u;
        goto label_1338e0;
    }
    ctx->pc = 0x1338D8u;
    SET_GPR_U32(ctx, 31, 0x1338E0u);
    ctx->pc = 0x1338DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338D8u;
    // 0x1338dc: 0x24a5dea0  addiu       $a1, $a1, -0x2160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x1338D8u, 0x1338E0u)) {
        return;
    }
    ctx->pc = 0x1338E0u;
label_1338e0:
    // 0x1338e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1338e4:
    if (ctx->pc == 0x1338E4u) {
        ctx->pc = 0x1338E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338E0u;
        // 0x1338e4: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1338E8u;
        goto label_1338e8;
    }
    ctx->pc = 0x1338E0u;
    {
        const bool branch_taken_0x1338e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1338E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338E0u;
        // 0x1338e4: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1338e0) {
            ctx->pc = 0x1338F8u;
            goto label_1338f8;
        }
    }
    ctx->pc = 0x1338E8u;
label_1338e8:
    // 0x1338e8: 0xc04c604  jal         func_131810
label_1338ec:
    if (ctx->pc == 0x1338ECu) {
        ctx->pc = 0x1338ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338E8u;
        // 0x1338ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1338F0u;
        goto label_1338f0;
    }
    ctx->pc = 0x1338E8u;
    SET_GPR_U32(ctx, 31, 0x1338F0u);
    ctx->pc = 0x1338ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338E8u;
    // 0x1338ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x131810u, 0x1338E8u, 0x1338F0u)) {
        return;
    }
    ctx->pc = 0x1338F0u;
label_1338f0:
    // 0x1338f0: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_1338f4:
    if (ctx->pc == 0x1338F4u) {
        ctx->pc = 0x1338F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338F0u;
        // 0x1338f4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1338F8u;
        goto label_1338f8;
    }
    ctx->pc = 0x1338F0u;
    {
        const bool branch_taken_0x1338f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1338F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338F0u;
        // 0x1338f4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1338f0) {
            ctx->pc = 0x133B84u;
            goto label_133b84;
        }
    }
    ctx->pc = 0x1338F8u;
label_1338f8:
    // 0x1338f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1338f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1338fc:
    // 0x1338fc: 0xc065c58  jal         func_197160
label_133900:
    if (ctx->pc == 0x133900u) {
        ctx->pc = 0x133900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338FCu;
        // 0x133900: 0x24a5deb0  addiu       $a1, $a1, -0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133904u;
        goto label_133904;
    }
    ctx->pc = 0x1338FCu;
    SET_GPR_U32(ctx, 31, 0x133904u);
    ctx->pc = 0x133900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338FCu;
    // 0x133900: 0x24a5deb0  addiu       $a1, $a1, -0x2150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x1338FCu, 0x133904u)) {
        return;
    }
    ctx->pc = 0x133904u;
label_133904:
    // 0x133904: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_133908:
    if (ctx->pc == 0x133908u) {
        ctx->pc = 0x133908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133904u;
        // 0x133908: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13390Cu;
        goto label_13390c;
    }
    ctx->pc = 0x133904u;
    {
        const bool branch_taken_0x133904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133904u;
        // 0x133908: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133904) {
            ctx->pc = 0x13393Cu;
            goto label_13393c;
        }
    }
    ctx->pc = 0x13390Cu;
label_13390c:
    // 0x13390c: 0x8c448b2c  lw          $a0, -0x74D4($v0)
    ctx->pc = 0x13390cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
label_133910:
    // 0x133910: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x133910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_133914:
    // 0x133914: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
label_133918:
    if (ctx->pc == 0x133918u) {
        ctx->pc = 0x133918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133914u;
        // 0x133918: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13391Cu;
        goto label_13391c;
    }
    ctx->pc = 0x133914u;
    {
        const bool branch_taken_0x133914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133914u;
        // 0x133918: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133914) {
            ctx->pc = 0x133B80u;
            goto label_133b80;
        }
    }
    ctx->pc = 0x13391Cu;
label_13391c:
    // 0x13391c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x13391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_133920:
    // 0x133920: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x133920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_133924:
    // 0x133924: 0x14620097  bne         $v1, $v0, . + 4 + (0x97 << 2)
label_133928:
    if (ctx->pc == 0x133928u) {
        ctx->pc = 0x133928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133924u;
        // 0x133928: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13392Cu;
        goto label_13392c;
    }
    ctx->pc = 0x133924u;
    {
        const bool branch_taken_0x133924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x133928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133924u;
        // 0x133928: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133924) {
            ctx->pc = 0x133B84u;
            goto label_133b84;
        }
    }
    ctx->pc = 0x13392Cu;
label_13392c:
    // 0x13392c: 0xc063e10  jal         func_18F840
label_133930:
    if (ctx->pc == 0x133930u) {
        ctx->pc = 0x133930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13392Cu;
        // 0x133930: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133934u;
        goto label_133934;
    }
    ctx->pc = 0x13392Cu;
    SET_GPR_U32(ctx, 31, 0x133934u);
    ctx->pc = 0x133930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13392Cu;
    // 0x133930: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F840u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18F840u, 0x13392Cu, 0x133934u)) {
        return;
    }
    ctx->pc = 0x133934u;
label_133934:
    // 0x133934: 0x10000093  b           . + 4 + (0x93 << 2)
label_133938:
    if (ctx->pc == 0x133938u) {
        ctx->pc = 0x133938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133934u;
        // 0x133938: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13393Cu;
        goto label_13393c;
    }
    ctx->pc = 0x133934u;
    {
        const bool branch_taken_0x133934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133934u;
        // 0x133938: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133934) {
            ctx->pc = 0x133B84u;
            goto label_133b84;
        }
    }
    ctx->pc = 0x13393Cu;
label_13393c:
    // 0x13393c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13393cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_133940:
    // 0x133940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133944:
    // 0x133944: 0xc065c68  jal         func_1971A0
label_133948:
    if (ctx->pc == 0x133948u) {
        ctx->pc = 0x133948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133944u;
        // 0x133948: 0x24a5dec0  addiu       $a1, $a1, -0x2140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13394Cu;
        goto label_13394c;
    }
    ctx->pc = 0x133944u;
    SET_GPR_U32(ctx, 31, 0x13394Cu);
    ctx->pc = 0x133948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133944u;
    // 0x133948: 0x24a5dec0  addiu       $a1, $a1, -0x2140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x133944u, 0x13394Cu)) {
        return;
    }
    ctx->pc = 0x13394Cu;
label_13394c:
    // 0x13394c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_133950:
    if (ctx->pc == 0x133950u) {
        ctx->pc = 0x133950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13394Cu;
        // 0x133950: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133954u;
        goto label_133954;
    }
    ctx->pc = 0x13394Cu;
    {
        const bool branch_taken_0x13394c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13394Cu;
        // 0x133950: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13394c) {
            ctx->pc = 0x13397Cu;
            goto label_13397c;
        }
    }
    ctx->pc = 0x133954u;
label_133954:
    // 0x133954: 0x8e831bb0  lw          $v1, 0x1BB0($s4)
    ctx->pc = 0x133954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 7088)));
label_133958:
    // 0x133958: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_13395c:
    if (ctx->pc == 0x13395Cu) {
        ctx->pc = 0x13395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133958u;
        // 0x13395c: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133960u;
        goto label_133960;
    }
    ctx->pc = 0x133958u;
    {
        const bool branch_taken_0x133958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133958u;
        // 0x13395c: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133958) {
            ctx->pc = 0x133974u;
            goto label_133974;
        }
    }
    ctx->pc = 0x133960u;
label_133960:
    // 0x133960: 0x8c8200e4  lw          $v0, 0xE4($a0)
    ctx->pc = 0x133960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_133964:
    // 0x133964: 0x50400086  beql        $v0, $zero, . + 4 + (0x86 << 2)
label_133968:
    if (ctx->pc == 0x133968u) {
        ctx->pc = 0x133968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133964u;
        // 0x133968: 0xae801a58  sw          $zero, 0x1A58($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 6744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13396Cu;
        goto label_13396c;
    }
    ctx->pc = 0x133964u;
    {
        const bool branch_taken_0x133964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133964) {
            ctx->pc = 0x133968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133964u;
            // 0x133968: 0xae801a58  sw          $zero, 0x1A58($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 6744), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133B80u;
            goto label_133b80;
        }
    }
    ctx->pc = 0x13396Cu;
label_13396c:
    // 0x13396c: 0xc0644e4  jal         func_191390
label_133970:
    if (ctx->pc == 0x133970u) {
        ctx->pc = 0x133974u;
        goto label_133974;
    }
    ctx->pc = 0x13396Cu;
    SET_GPR_U32(ctx, 31, 0x133974u);
    ctx->pc = 0x191390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191390u, 0x13396Cu, 0x133974u)) {
        return;
    }
    ctx->pc = 0x133974u;
label_133974:
    // 0x133974: 0x10000082  b           . + 4 + (0x82 << 2)
label_133978:
    if (ctx->pc == 0x133978u) {
        ctx->pc = 0x133978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133974u;
        // 0x133978: 0xae801a58  sw          $zero, 0x1A58($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 6744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13397Cu;
        goto label_13397c;
    }
    ctx->pc = 0x133974u;
    {
        const bool branch_taken_0x133974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133974u;
        // 0x133978: 0xae801a58  sw          $zero, 0x1A58($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 6744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133974) {
            ctx->pc = 0x133B80u;
            goto label_133b80;
        }
    }
    ctx->pc = 0x13397Cu;
label_13397c:
    // 0x13397c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13397cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_133980:
    // 0x133980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133984:
    // 0x133984: 0xc065c68  jal         func_1971A0
label_133988:
    if (ctx->pc == 0x133988u) {
        ctx->pc = 0x133988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133984u;
        // 0x133988: 0x24a5d918  addiu       $a1, $a1, -0x26E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13398Cu;
        goto label_13398c;
    }
    ctx->pc = 0x133984u;
    SET_GPR_U32(ctx, 31, 0x13398Cu);
    ctx->pc = 0x133988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133984u;
    // 0x133988: 0x24a5d918  addiu       $a1, $a1, -0x26E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x133984u, 0x13398Cu)) {
        return;
    }
    ctx->pc = 0x13398Cu;
label_13398c:
    // 0x13398c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_133990:
    if (ctx->pc == 0x133990u) {
        ctx->pc = 0x133990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13398Cu;
        // 0x133990: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133994u;
        goto label_133994;
    }
    ctx->pc = 0x13398Cu;
    {
        const bool branch_taken_0x13398c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13398Cu;
        // 0x133990: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13398c) {
            ctx->pc = 0x1339ACu;
            goto label_1339ac;
        }
    }
    ctx->pc = 0x133994u;
label_133994:
    // 0x133994: 0x8e831bb0  lw          $v1, 0x1BB0($s4)
    ctx->pc = 0x133994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 7088)));
label_133998:
    // 0x133998: 0x1462007a  bne         $v1, $v0, . + 4 + (0x7A << 2)
label_13399c:
    if (ctx->pc == 0x13399Cu) {
        ctx->pc = 0x13399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133998u;
        // 0x13399c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1339A0u;
        goto label_1339a0;
    }
    ctx->pc = 0x133998u;
    {
        const bool branch_taken_0x133998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133998u;
        // 0x13399c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133998) {
            ctx->pc = 0x133B84u;
            goto label_133b84;
        }
    }
    ctx->pc = 0x1339A0u;
label_1339a0:
    // 0x1339a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1339a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1339a4:
    // 0x1339a4: 0x10000077  b           . + 4 + (0x77 << 2)
label_1339a8:
    if (ctx->pc == 0x1339A8u) {
        ctx->pc = 0x1339A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339A4u;
        // 0x1339a8: 0xae821bb8  sw          $v0, 0x1BB8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 7096), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1339ACu;
        goto label_1339ac;
    }
    ctx->pc = 0x1339A4u;
    {
        const bool branch_taken_0x1339a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1339A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339A4u;
        // 0x1339a8: 0xae821bb8  sw          $v0, 0x1BB8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 7096), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339a4) {
            ctx->pc = 0x133B84u;
            goto label_133b84;
        }
    }
    ctx->pc = 0x1339ACu;
label_1339ac:
    // 0x1339ac: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1339acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_1339b0:
    // 0x1339b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1339b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1339b4:
    // 0x1339b4: 0xc065c68  jal         func_1971A0
label_1339b8:
    if (ctx->pc == 0x1339B8u) {
        ctx->pc = 0x1339B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339B4u;
        // 0x1339b8: 0x24a5ded0  addiu       $a1, $a1, -0x2130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1339BCu;
        goto label_1339bc;
    }
    ctx->pc = 0x1339B4u;
    SET_GPR_U32(ctx, 31, 0x1339BCu);
    ctx->pc = 0x1339B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339B4u;
    // 0x1339b8: 0x24a5ded0  addiu       $a1, $a1, -0x2130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x1339B4u, 0x1339BCu)) {
        return;
    }
    ctx->pc = 0x1339BCu;
label_1339bc:
    // 0x1339bc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1339c0:
    if (ctx->pc == 0x1339C0u) {
        ctx->pc = 0x1339C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339BCu;
        // 0x1339c0: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1339C4u;
        goto label_1339c4;
    }
    ctx->pc = 0x1339BCu;
    {
        const bool branch_taken_0x1339bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1339C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339BCu;
        // 0x1339c0: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339bc) {
            ctx->pc = 0x133A14u;
            goto label_133a14;
        }
    }
    ctx->pc = 0x1339C4u;
label_1339c4:
    // 0x1339c4: 0x269016c0  addiu       $s0, $s4, 0x16C0
    ctx->pc = 0x1339c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 5824));
label_1339c8:
    // 0x1339c8: 0xc053450  jal         func_14D140
label_1339cc:
    if (ctx->pc == 0x1339CCu) {
        ctx->pc = 0x1339CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339C8u;
        // 0x1339cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1339D0u;
        goto label_1339d0;
    }
    ctx->pc = 0x1339C8u;
    SET_GPR_U32(ctx, 31, 0x1339D0u);
    ctx->pc = 0x1339CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339C8u;
    // 0x1339cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D140u, 0x1339C8u, 0x1339D0u)) {
        return;
    }
    ctx->pc = 0x1339D0u;
label_1339d0:
    // 0x1339d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1339d4:
    if (ctx->pc == 0x1339D4u) {
        ctx->pc = 0x1339D8u;
        goto label_1339d8;
    }
    ctx->pc = 0x1339D0u;
    {
        const bool branch_taken_0x1339d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1339d0) {
            ctx->pc = 0x1339E8u;
            goto label_1339e8;
        }
    }
    ctx->pc = 0x1339D8u;
label_1339d8:
    // 0x1339d8: 0xc053450  jal         func_14D140
label_1339dc:
    if (ctx->pc == 0x1339DCu) {
        ctx->pc = 0x1339DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339D8u;
        // 0x1339dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1339E0u;
        goto label_1339e0;
    }
    ctx->pc = 0x1339D8u;
    SET_GPR_U32(ctx, 31, 0x1339E0u);
    ctx->pc = 0x1339DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339D8u;
    // 0x1339dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D140u, 0x1339D8u, 0x1339E0u)) {
        return;
    }
    ctx->pc = 0x1339E0u;
label_1339e0:
    // 0x1339e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1339e4:
    if (ctx->pc == 0x1339E4u) {
        ctx->pc = 0x1339E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339E0u;
        // 0x1339e4: 0x24550030  addiu       $s5, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1339E8u;
        goto label_1339e8;
    }
    ctx->pc = 0x1339E0u;
    {
        const bool branch_taken_0x1339e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1339E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339E0u;
        // 0x1339e4: 0x24550030  addiu       $s5, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339e0) {
            ctx->pc = 0x1339F4u;
            goto label_1339f4;
        }
    }
    ctx->pc = 0x1339E8u;
label_1339e8:
    // 0x1339e8: 0xc04f0cc  jal         func_13C330
label_1339ec:
    if (ctx->pc == 0x1339ECu) {
        ctx->pc = 0x1339ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339E8u;
        // 0x1339ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1339F0u;
        goto label_1339f0;
    }
    ctx->pc = 0x1339E8u;
    SET_GPR_U32(ctx, 31, 0x1339F0u);
    ctx->pc = 0x1339ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339E8u;
    // 0x1339ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1339E8u, 0x1339F0u)) {
        return;
    }
    ctx->pc = 0x1339F0u;
label_1339f0:
    // 0x1339f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1339f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1339f4:
    // 0x1339f4: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x1339f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
label_1339f8:
    // 0x1339f8: 0x26900310  addiu       $s0, $s4, 0x310
    ctx->pc = 0x1339f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
label_1339fc:
    // 0x1339fc: 0x8e648b2c  lw          $a0, -0x74D4($s3)
    ctx->pc = 0x1339fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937388)));
label_133a00:
    // 0x133a00: 0x8c92006c  lw          $s2, 0x6C($a0)
    ctx->pc = 0x133a00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_133a04:
    // 0x133a04: 0xc0640b8  jal         func_1902E0
label_133a08:
    if (ctx->pc == 0x133A08u) {
        ctx->pc = 0x133A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A04u;
        // 0x133a08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A0Cu;
        goto label_133a0c;
    }
    ctx->pc = 0x133A04u;
    SET_GPR_U32(ctx, 31, 0x133A0Cu);
    ctx->pc = 0x133A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A04u;
    // 0x133a08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1902E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1902E0u, 0x133A04u, 0x133A0Cu)) {
        return;
    }
    ctx->pc = 0x133A0Cu;
label_133a0c:
    // 0x133a0c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_133a10:
    if (ctx->pc == 0x133A10u) {
        ctx->pc = 0x133A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A0Cu;
        // 0x133a10: 0x8c4500a8  lw          $a1, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A14u;
        goto label_133a14;
    }
    ctx->pc = 0x133A0Cu;
    {
        const bool branch_taken_0x133a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A0Cu;
        // 0x133a10: 0x8c4500a8  lw          $a1, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a0c) {
            ctx->pc = 0x133B00u;
            goto label_133b00;
        }
    }
    ctx->pc = 0x133A14u;
label_133a14:
    // 0x133a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133a18:
    // 0x133a18: 0xc065c68  jal         func_1971A0
label_133a1c:
    if (ctx->pc == 0x133A1Cu) {
        ctx->pc = 0x133A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A18u;
        // 0x133a1c: 0x24a5dee0  addiu       $a1, $a1, -0x2120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A20u;
        goto label_133a20;
    }
    ctx->pc = 0x133A18u;
    SET_GPR_U32(ctx, 31, 0x133A20u);
    ctx->pc = 0x133A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A18u;
    // 0x133a1c: 0x24a5dee0  addiu       $a1, $a1, -0x2120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x133A18u, 0x133A20u)) {
        return;
    }
    ctx->pc = 0x133A20u;
label_133a20:
    // 0x133a20: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_133a24:
    if (ctx->pc == 0x133A24u) {
        ctx->pc = 0x133A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A20u;
        // 0x133a24: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A28u;
        goto label_133a28;
    }
    ctx->pc = 0x133A20u;
    {
        const bool branch_taken_0x133a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A20u;
        // 0x133a24: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a20) {
            ctx->pc = 0x133AA0u;
            goto label_133aa0;
        }
    }
    ctx->pc = 0x133A28u;
label_133a28:
    // 0x133a28: 0x269016c0  addiu       $s0, $s4, 0x16C0
    ctx->pc = 0x133a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 5824));
label_133a2c:
    // 0x133a2c: 0xc053450  jal         func_14D140
label_133a30:
    if (ctx->pc == 0x133A30u) {
        ctx->pc = 0x133A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A2Cu;
        // 0x133a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A34u;
        goto label_133a34;
    }
    ctx->pc = 0x133A2Cu;
    SET_GPR_U32(ctx, 31, 0x133A34u);
    ctx->pc = 0x133A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A2Cu;
    // 0x133a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D140u, 0x133A2Cu, 0x133A34u)) {
        return;
    }
    ctx->pc = 0x133A34u;
label_133a34:
    // 0x133a34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_133a38:
    if (ctx->pc == 0x133A38u) {
        ctx->pc = 0x133A3Cu;
        goto label_133a3c;
    }
    ctx->pc = 0x133A34u;
    {
        const bool branch_taken_0x133a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133a34) {
            ctx->pc = 0x133A4Cu;
            goto label_133a4c;
        }
    }
    ctx->pc = 0x133A3Cu;
label_133a3c:
    // 0x133a3c: 0xc053450  jal         func_14D140
label_133a40:
    if (ctx->pc == 0x133A40u) {
        ctx->pc = 0x133A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A3Cu;
        // 0x133a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A44u;
        goto label_133a44;
    }
    ctx->pc = 0x133A3Cu;
    SET_GPR_U32(ctx, 31, 0x133A44u);
    ctx->pc = 0x133A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A3Cu;
    // 0x133a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D140u, 0x133A3Cu, 0x133A44u)) {
        return;
    }
    ctx->pc = 0x133A44u;
label_133a44:
    // 0x133a44: 0x10000004  b           . + 4 + (0x4 << 2)
label_133a48:
    if (ctx->pc == 0x133A48u) {
        ctx->pc = 0x133A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A44u;
        // 0x133a48: 0x24530030  addiu       $s3, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A4Cu;
        goto label_133a4c;
    }
    ctx->pc = 0x133A44u;
    {
        const bool branch_taken_0x133a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A44u;
        // 0x133a48: 0x24530030  addiu       $s3, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a44) {
            ctx->pc = 0x133A58u;
            goto label_133a58;
        }
    }
    ctx->pc = 0x133A4Cu;
label_133a4c:
    // 0x133a4c: 0xc04f0cc  jal         func_13C330
label_133a50:
    if (ctx->pc == 0x133A50u) {
        ctx->pc = 0x133A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A4Cu;
        // 0x133a50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A54u;
        goto label_133a54;
    }
    ctx->pc = 0x133A4Cu;
    SET_GPR_U32(ctx, 31, 0x133A54u);
    ctx->pc = 0x133A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A4Cu;
    // 0x133a50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x133A4Cu, 0x133A54u)) {
        return;
    }
    ctx->pc = 0x133A54u;
label_133a54:
    // 0x133a54: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x133a54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133a58:
    // 0x133a58: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x133a58u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
label_133a5c:
    // 0x133a5c: 0x26900310  addiu       $s0, $s4, 0x310
    ctx->pc = 0x133a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
label_133a60:
    // 0x133a60: 0x8e448b2c  lw          $a0, -0x74D4($s2)
    ctx->pc = 0x133a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937388)));
label_133a64:
    // 0x133a64: 0x8c91006c  lw          $s1, 0x6C($a0)
    ctx->pc = 0x133a64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_133a68:
    // 0x133a68: 0xc0640b8  jal         func_1902E0
label_133a6c:
    if (ctx->pc == 0x133A6Cu) {
        ctx->pc = 0x133A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A68u;
        // 0x133a6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A70u;
        goto label_133a70;
    }
    ctx->pc = 0x133A68u;
    SET_GPR_U32(ctx, 31, 0x133A70u);
    ctx->pc = 0x133A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A68u;
    // 0x133a6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1902E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1902E0u, 0x133A68u, 0x133A70u)) {
        return;
    }
    ctx->pc = 0x133A70u;
label_133a70:
    // 0x133a70: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x133a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_133a74:
    // 0x133a74: 0xc043ce6  jal         func_10F398
label_133a78:
    if (ctx->pc == 0x133A78u) {
        ctx->pc = 0x133A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A74u;
        // 0x133a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A7Cu;
        goto label_133a7c;
    }
    ctx->pc = 0x133A74u;
    SET_GPR_U32(ctx, 31, 0x133A7Cu);
    ctx->pc = 0x133A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A74u;
    // 0x133a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x133A74u, 0x133A7Cu)) {
        return;
    }
    ctx->pc = 0x133A7Cu;
label_133a7c:
    // 0x133a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133a80:
    // 0x133a80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x133a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133a84:
    // 0x133a84: 0xc043c7c  jal         func_10F1F0
label_133a88:
    if (ctx->pc == 0x133A88u) {
        ctx->pc = 0x133A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A84u;
        // 0x133a88: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A8Cu;
        goto label_133a8c;
    }
    ctx->pc = 0x133A84u;
    SET_GPR_U32(ctx, 31, 0x133A8Cu);
    ctx->pc = 0x133A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A84u;
    // 0x133a88: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x133A84u, 0x133A8Cu)) {
        return;
    }
    ctx->pc = 0x133A8Cu;
label_133a8c:
    // 0x133a8c: 0x8e448b2c  lw          $a0, -0x74D4($s2)
    ctx->pc = 0x133a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937388)));
label_133a90:
    // 0x133a90: 0xc0640c6  jal         func_190318
label_133a94:
    if (ctx->pc == 0x133A94u) {
        ctx->pc = 0x133A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A90u;
        // 0x133a94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A98u;
        goto label_133a98;
    }
    ctx->pc = 0x133A90u;
    SET_GPR_U32(ctx, 31, 0x133A98u);
    ctx->pc = 0x133A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A90u;
    // 0x133a94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190318u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190318u, 0x133A90u, 0x133A98u)) {
        return;
    }
    ctx->pc = 0x133A98u;
label_133a98:
    // 0x133a98: 0x1000003a  b           . + 4 + (0x3A << 2)
label_133a9c:
    if (ctx->pc == 0x133A9Cu) {
        ctx->pc = 0x133A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A98u;
        // 0x133a9c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133AA0u;
        goto label_133aa0;
    }
    ctx->pc = 0x133A98u;
    {
        const bool branch_taken_0x133a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A98u;
        // 0x133a9c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a98) {
            ctx->pc = 0x133B84u;
            goto label_133b84;
        }
    }
    ctx->pc = 0x133AA0u;
label_133aa0:
    // 0x133aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133aa4:
    // 0x133aa4: 0xc065c68  jal         func_1971A0
label_133aa8:
    if (ctx->pc == 0x133AA8u) {
        ctx->pc = 0x133AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AA4u;
        // 0x133aa8: 0x24a5def0  addiu       $a1, $a1, -0x2110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133AACu;
        goto label_133aac;
    }
    ctx->pc = 0x133AA4u;
    SET_GPR_U32(ctx, 31, 0x133AACu);
    ctx->pc = 0x133AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133AA4u;
    // 0x133aa8: 0x24a5def0  addiu       $a1, $a1, -0x2110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x133AA4u, 0x133AACu)) {
        return;
    }
    ctx->pc = 0x133AACu;
label_133aac:
    // 0x133aac: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_133ab0:
    if (ctx->pc == 0x133AB0u) {
        ctx->pc = 0x133AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AACu;
        // 0x133ab0: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133AB4u;
        goto label_133ab4;
    }
    ctx->pc = 0x133AACu;
    {
        const bool branch_taken_0x133aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AACu;
        // 0x133ab0: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133aac) {
            ctx->pc = 0x133B3Cu;
            goto label_133b3c;
        }
    }
    ctx->pc = 0x133AB4u;
label_133ab4:
    // 0x133ab4: 0x269016c0  addiu       $s0, $s4, 0x16C0
    ctx->pc = 0x133ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 5824));
label_133ab8:
    // 0x133ab8: 0xc053450  jal         func_14D140
label_133abc:
    if (ctx->pc == 0x133ABCu) {
        ctx->pc = 0x133ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AB8u;
        // 0x133abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133AC0u;
        goto label_133ac0;
    }
    ctx->pc = 0x133AB8u;
    SET_GPR_U32(ctx, 31, 0x133AC0u);
    ctx->pc = 0x133ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133AB8u;
    // 0x133abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D140u, 0x133AB8u, 0x133AC0u)) {
        return;
    }
    ctx->pc = 0x133AC0u;
label_133ac0:
    // 0x133ac0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_133ac4:
    if (ctx->pc == 0x133AC4u) {
        ctx->pc = 0x133AC8u;
        goto label_133ac8;
    }
    ctx->pc = 0x133AC0u;
    {
        const bool branch_taken_0x133ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133ac0) {
            ctx->pc = 0x133AD8u;
            goto label_133ad8;
        }
    }
    ctx->pc = 0x133AC8u;
label_133ac8:
    // 0x133ac8: 0xc053450  jal         func_14D140
label_133acc:
    if (ctx->pc == 0x133ACCu) {
        ctx->pc = 0x133ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AC8u;
        // 0x133acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133AD0u;
        goto label_133ad0;
    }
    ctx->pc = 0x133AC8u;
    SET_GPR_U32(ctx, 31, 0x133AD0u);
    ctx->pc = 0x133ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133AC8u;
    // 0x133acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D140u, 0x133AC8u, 0x133AD0u)) {
        return;
    }
    ctx->pc = 0x133AD0u;
label_133ad0:
    // 0x133ad0: 0x10000004  b           . + 4 + (0x4 << 2)
label_133ad4:
    if (ctx->pc == 0x133AD4u) {
        ctx->pc = 0x133AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AD0u;
        // 0x133ad4: 0x24550030  addiu       $s5, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133AD8u;
        goto label_133ad8;
    }
    ctx->pc = 0x133AD0u;
    {
        const bool branch_taken_0x133ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AD0u;
        // 0x133ad4: 0x24550030  addiu       $s5, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ad0) {
            ctx->pc = 0x133AE4u;
            goto label_133ae4;
        }
    }
    ctx->pc = 0x133AD8u;
label_133ad8:
    // 0x133ad8: 0xc04f0cc  jal         func_13C330
label_133adc:
    if (ctx->pc == 0x133ADCu) {
        ctx->pc = 0x133ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AD8u;
        // 0x133adc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133AE0u;
        goto label_133ae0;
    }
    ctx->pc = 0x133AD8u;
    SET_GPR_U32(ctx, 31, 0x133AE0u);
    ctx->pc = 0x133ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133AD8u;
    // 0x133adc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x133AD8u, 0x133AE0u)) {
        return;
    }
    ctx->pc = 0x133AE0u;
label_133ae0:
    // 0x133ae0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x133ae0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133ae4:
    // 0x133ae4: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x133ae4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
label_133ae8:
    // 0x133ae8: 0x26900310  addiu       $s0, $s4, 0x310
    ctx->pc = 0x133ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
label_133aec:
    // 0x133aec: 0x8e648b2c  lw          $a0, -0x74D4($s3)
    ctx->pc = 0x133aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937388)));
label_133af0:
    // 0x133af0: 0x8c92006c  lw          $s2, 0x6C($a0)
    ctx->pc = 0x133af0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_133af4:
    // 0x133af4: 0xc0640b8  jal         func_1902E0
label_133af8:
    if (ctx->pc == 0x133AF8u) {
        ctx->pc = 0x133AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AF4u;
        // 0x133af8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133AFCu;
        goto label_133afc;
    }
    ctx->pc = 0x133AF4u;
    SET_GPR_U32(ctx, 31, 0x133AFCu);
    ctx->pc = 0x133AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133AF4u;
    // 0x133af8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1902E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1902E0u, 0x133AF4u, 0x133AFCu)) {
        return;
    }
    ctx->pc = 0x133AFCu;
label_133afc:
    // 0x133afc: 0x8c4500b0  lw          $a1, 0xB0($v0)
    ctx->pc = 0x133afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_133b00:
    // 0x133b00: 0xc043ce6  jal         func_10F398
label_133b04:
    if (ctx->pc == 0x133B04u) {
        ctx->pc = 0x133B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B00u;
        // 0x133b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133B08u;
        goto label_133b08;
    }
    ctx->pc = 0x133B00u;
    SET_GPR_U32(ctx, 31, 0x133B08u);
    ctx->pc = 0x133B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B00u;
    // 0x133b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x133B00u, 0x133B08u)) {
        return;
    }
    ctx->pc = 0x133B08u;
label_133b08:
    // 0x133b08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x133b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133b0c:
    // 0x133b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133b10:
    // 0x133b10: 0xc043c88  jal         func_10F220
label_133b14:
    if (ctx->pc == 0x133B14u) {
        ctx->pc = 0x133B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B10u;
        // 0x133b14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133B18u;
        goto label_133b18;
    }
    ctx->pc = 0x133B10u;
    SET_GPR_U32(ctx, 31, 0x133B18u);
    ctx->pc = 0x133B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B10u;
    // 0x133b14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F220u, 0x133B10u, 0x133B18u)) {
        return;
    }
    ctx->pc = 0x133B18u;
label_133b18:
    // 0x133b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133b1c:
    // 0x133b1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x133b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133b20:
    // 0x133b20: 0xc043c7c  jal         func_10F1F0
label_133b24:
    if (ctx->pc == 0x133B24u) {
        ctx->pc = 0x133B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B20u;
        // 0x133b24: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133B28u;
        goto label_133b28;
    }
    ctx->pc = 0x133B20u;
    SET_GPR_U32(ctx, 31, 0x133B28u);
    ctx->pc = 0x133B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B20u;
    // 0x133b24: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x133B20u, 0x133B28u)) {
        return;
    }
    ctx->pc = 0x133B28u;
label_133b28:
    // 0x133b28: 0x8e648b2c  lw          $a0, -0x74D4($s3)
    ctx->pc = 0x133b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937388)));
label_133b2c:
    // 0x133b2c: 0xc0640c6  jal         func_190318
label_133b30:
    if (ctx->pc == 0x133B30u) {
        ctx->pc = 0x133B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B2Cu;
        // 0x133b30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133B34u;
        goto label_133b34;
    }
    ctx->pc = 0x133B2Cu;
    SET_GPR_U32(ctx, 31, 0x133B34u);
    ctx->pc = 0x133B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B2Cu;
    // 0x133b30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190318u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190318u, 0x133B2Cu, 0x133B34u)) {
        return;
    }
    ctx->pc = 0x133B34u;
label_133b34:
    // 0x133b34: 0x10000013  b           . + 4 + (0x13 << 2)
label_133b38:
    if (ctx->pc == 0x133B38u) {
        ctx->pc = 0x133B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B34u;
        // 0x133b38: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133B3Cu;
        goto label_133b3c;
    }
    ctx->pc = 0x133B34u;
    {
        const bool branch_taken_0x133b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B34u;
        // 0x133b38: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133b34) {
            ctx->pc = 0x133B84u;
            goto label_133b84;
        }
    }
    ctx->pc = 0x133B3Cu;
label_133b3c:
    // 0x133b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133b40:
    // 0x133b40: 0xc065c68  jal         func_1971A0
label_133b44:
    if (ctx->pc == 0x133B44u) {
        ctx->pc = 0x133B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B40u;
        // 0x133b44: 0x24a5df00  addiu       $a1, $a1, -0x2100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133B48u;
        goto label_133b48;
    }
    ctx->pc = 0x133B40u;
    SET_GPR_U32(ctx, 31, 0x133B48u);
    ctx->pc = 0x133B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B40u;
    // 0x133b44: 0x24a5df00  addiu       $a1, $a1, -0x2100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x133B40u, 0x133B48u)) {
        return;
    }
    ctx->pc = 0x133B48u;
label_133b48:
    // 0x133b48: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_133b4c:
    if (ctx->pc == 0x133B4Cu) {
        ctx->pc = 0x133B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B48u;
        // 0x133b4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133B50u;
        goto label_133b50;
    }
    ctx->pc = 0x133B48u;
    {
        const bool branch_taken_0x133b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B48u;
        // 0x133b4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133b48) {
            ctx->pc = 0x133B6Cu;
            goto label_133b6c;
        }
    }
    ctx->pc = 0x133B50u;
label_133b50:
    // 0x133b50: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x133b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_133b54:
    // 0x133b54: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x133b54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_133b58:
    // 0x133b58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x133b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_133b5c:
    // 0x133b5c: 0xc04de54  jal         func_137950
label_133b60:
    if (ctx->pc == 0x133B60u) {
        ctx->pc = 0x133B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B5Cu;
        // 0x133b60: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x133B64u;
        goto label_133b64;
    }
    ctx->pc = 0x133B5Cu;
    SET_GPR_U32(ctx, 31, 0x133B64u);
    ctx->pc = 0x133B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B5Cu;
    // 0x133b60: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137950u, 0x133B5Cu, 0x133B64u)) {
        return;
    }
    ctx->pc = 0x133B64u;
label_133b64:
    // 0x133b64: 0x10000007  b           . + 4 + (0x7 << 2)
label_133b68:
    if (ctx->pc == 0x133B68u) {
        ctx->pc = 0x133B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B64u;
        // 0x133b68: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133B6Cu;
        goto label_133b6c;
    }
    ctx->pc = 0x133B64u;
    {
        const bool branch_taken_0x133b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B64u;
        // 0x133b68: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133b64) {
            ctx->pc = 0x133B84u;
            goto label_133b84;
        }
    }
    ctx->pc = 0x133B6Cu;
label_133b6c:
    // 0x133b6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133b70:
    // 0x133b70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x133b70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_133b74:
    // 0x133b74: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x133b74u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_133b78:
    // 0x133b78: 0xc049248  jal         func_124920
label_133b7c:
    if (ctx->pc == 0x133B7Cu) {
        ctx->pc = 0x133B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B78u;
        // 0x133b7c: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x133B80u;
        goto label_133b80;
    }
    ctx->pc = 0x133B78u;
    SET_GPR_U32(ctx, 31, 0x133B80u);
    ctx->pc = 0x133B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B78u;
    // 0x133b7c: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x124920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x124920u, 0x133B78u, 0x133B80u)) {
        return;
    }
    ctx->pc = 0x133B80u;
label_133b80:
    // 0x133b80: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x133b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_133b84:
    // 0x133b84: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x133b84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_133b88:
    // 0x133b88: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x133b88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_133b8c:
    // 0x133b8c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x133b8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_133b90:
    // 0x133b90: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x133b90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_133b94:
    // 0x133b94: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x133b94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_133b98:
    // 0x133b98: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x133b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_133b9c:
    // 0x133b9c: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x133b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_133ba0:
    // 0x133ba0: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x133ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_133ba4:
    // 0x133ba4: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x133ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_133ba8:
    // 0x133ba8: 0x3e00008  jr          $ra
label_133bac:
    if (ctx->pc == 0x133BACu) {
        ctx->pc = 0x133BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BA8u;
        // 0x133bac: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133BB0u;
        goto label_fallthrough_0x133ba8;
    }
    ctx->pc = 0x133BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BA8u;
        // 0x133bac: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x133ba8:
    ctx->pc = 0x133BB0u;
}
