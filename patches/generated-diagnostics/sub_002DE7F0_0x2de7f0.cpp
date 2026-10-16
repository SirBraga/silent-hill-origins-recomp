#include <stdexcept>
#include <cstdio>
#include <cstdlib>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "runtime/ee_scheduler.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DE7F0
// Address: 0x2de7f0 - 0x2ded18
void sub_002DE7F0_0x2de7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE7F0_0x2de7f0");
#endif

    switch (ctx->pc) {
        case 0x2de7f0u: goto label_2de7f0;
        case 0x2de7f4u: goto label_2de7f4;
        case 0x2de7f8u: goto label_2de7f8;
        case 0x2de7fcu: goto label_2de7fc;
        case 0x2de800u: goto label_2de800;
        case 0x2de804u: goto label_2de804;
        case 0x2de808u: goto label_2de808;
        case 0x2de80cu: goto label_2de80c;
        case 0x2de810u: goto label_2de810;
        case 0x2de814u: goto label_2de814;
        case 0x2de818u: goto label_2de818;
        case 0x2de81cu: goto label_2de81c;
        case 0x2de820u: goto label_2de820;
        case 0x2de824u: goto label_2de824;
        case 0x2de828u: goto label_2de828;
        case 0x2de82cu: goto label_2de82c;
        case 0x2de830u: goto label_2de830;
        case 0x2de834u: goto label_2de834;
        case 0x2de838u: goto label_2de838;
        case 0x2de83cu: goto label_2de83c;
        case 0x2de840u: goto label_2de840;
        case 0x2de844u: goto label_2de844;
        case 0x2de848u: goto label_2de848;
        case 0x2de84cu: goto label_2de84c;
        case 0x2de850u: goto label_2de850;
        case 0x2de854u: goto label_2de854;
        case 0x2de858u: goto label_2de858;
        case 0x2de85cu: goto label_2de85c;
        case 0x2de860u: goto label_2de860;
        case 0x2de864u: goto label_2de864;
        case 0x2de868u: goto label_2de868;
        case 0x2de86cu: goto label_2de86c;
        case 0x2de870u: goto label_2de870;
        case 0x2de874u: goto label_2de874;
        case 0x2de878u: goto label_2de878;
        case 0x2de87cu: goto label_2de87c;
        case 0x2de880u: goto label_2de880;
        case 0x2de884u: goto label_2de884;
        case 0x2de888u: goto label_2de888;
        case 0x2de88cu: goto label_2de88c;
        case 0x2de890u: goto label_2de890;
        case 0x2de894u: goto label_2de894;
        case 0x2de898u: goto label_2de898;
        case 0x2de89cu: goto label_2de89c;
        case 0x2de8a0u: goto label_2de8a0;
        case 0x2de8a4u: goto label_2de8a4;
        case 0x2de8a8u: goto label_2de8a8;
        case 0x2de8acu: goto label_2de8ac;
        case 0x2de8b0u: goto label_2de8b0;
        case 0x2de8b4u: goto label_2de8b4;
        case 0x2de8b8u: goto label_2de8b8;
        case 0x2de8bcu: goto label_2de8bc;
        case 0x2de8c0u: goto label_2de8c0;
        case 0x2de8c4u: goto label_2de8c4;
        case 0x2de8c8u: goto label_2de8c8;
        case 0x2de8ccu: goto label_2de8cc;
        case 0x2de8d0u: goto label_2de8d0;
        case 0x2de8d4u: goto label_2de8d4;
        case 0x2de8d8u: goto label_2de8d8;
        case 0x2de8dcu: goto label_2de8dc;
        case 0x2de8e0u: goto label_2de8e0;
        case 0x2de8e4u: goto label_2de8e4;
        case 0x2de8e8u: goto label_2de8e8;
        case 0x2de8ecu: goto label_2de8ec;
        case 0x2de8f0u: goto label_2de8f0;
        case 0x2de8f4u: goto label_2de8f4;
        case 0x2de8f8u: goto label_2de8f8;
        case 0x2de8fcu: goto label_2de8fc;
        case 0x2de900u: goto label_2de900;
        case 0x2de904u: goto label_2de904;
        case 0x2de908u: goto label_2de908;
        case 0x2de90cu: goto label_2de90c;
        case 0x2de910u: goto label_2de910;
        case 0x2de914u: goto label_2de914;
        case 0x2de918u: goto label_2de918;
        case 0x2de91cu: goto label_2de91c;
        case 0x2de920u: goto label_2de920;
        case 0x2de924u: goto label_2de924;
        case 0x2de928u: goto label_2de928;
        case 0x2de92cu: goto label_2de92c;
        case 0x2de930u: goto label_2de930;
        case 0x2de934u: goto label_2de934;
        case 0x2de938u: goto label_2de938;
        case 0x2de93cu: goto label_2de93c;
        case 0x2de940u: goto label_2de940;
        case 0x2de944u: goto label_2de944;
        case 0x2de948u: goto label_2de948;
        case 0x2de94cu: goto label_2de94c;
        case 0x2de950u: goto label_2de950;
        case 0x2de954u: goto label_2de954;
        case 0x2de958u: goto label_2de958;
        case 0x2de95cu: goto label_2de95c;
        case 0x2de960u: goto label_2de960;
        case 0x2de964u: goto label_2de964;
        case 0x2de968u: goto label_2de968;
        case 0x2de96cu: goto label_2de96c;
        case 0x2de970u: goto label_2de970;
        case 0x2de974u: goto label_2de974;
        case 0x2de978u: goto label_2de978;
        case 0x2de97cu: goto label_2de97c;
        case 0x2de980u: goto label_2de980;
        case 0x2de984u: goto label_2de984;
        case 0x2de988u: goto label_2de988;
        case 0x2de98cu: goto label_2de98c;
        case 0x2de990u: goto label_2de990;
        case 0x2de994u: goto label_2de994;
        case 0x2de998u: goto label_2de998;
        case 0x2de99cu: goto label_2de99c;
        case 0x2de9a0u: goto label_2de9a0;
        case 0x2de9a4u: goto label_2de9a4;
        case 0x2de9a8u: goto label_2de9a8;
        case 0x2de9acu: goto label_2de9ac;
        case 0x2de9b0u: goto label_2de9b0;
        case 0x2de9b4u: goto label_2de9b4;
        case 0x2de9b8u: goto label_2de9b8;
        case 0x2de9bcu: goto label_2de9bc;
        case 0x2de9c0u: goto label_2de9c0;
        case 0x2de9c4u: goto label_2de9c4;
        case 0x2de9c8u: goto label_2de9c8;
        case 0x2de9ccu: goto label_2de9cc;
        case 0x2de9d0u: goto label_2de9d0;
        case 0x2de9d4u: goto label_2de9d4;
        case 0x2de9d8u: goto label_2de9d8;
        case 0x2de9dcu: goto label_2de9dc;
        case 0x2de9e0u: goto label_2de9e0;
        case 0x2de9e4u: goto label_2de9e4;
        case 0x2de9e8u: goto label_2de9e8;
        case 0x2de9ecu: goto label_2de9ec;
        case 0x2de9f0u: goto label_2de9f0;
        case 0x2de9f4u: goto label_2de9f4;
        case 0x2de9f8u: goto label_2de9f8;
        case 0x2de9fcu: goto label_2de9fc;
        case 0x2dea00u: goto label_2dea00;
        case 0x2dea04u: goto label_2dea04;
        case 0x2dea08u: goto label_2dea08;
        case 0x2dea0cu: goto label_2dea0c;
        case 0x2dea10u: goto label_2dea10;
        case 0x2dea14u: goto label_2dea14;
        case 0x2dea18u: goto label_2dea18;
        case 0x2dea1cu: goto label_2dea1c;
        case 0x2dea20u: goto label_2dea20;
        case 0x2dea24u: goto label_2dea24;
        case 0x2dea28u: goto label_2dea28;
        case 0x2dea2cu: goto label_2dea2c;
        case 0x2dea30u: goto label_2dea30;
        case 0x2dea34u: goto label_2dea34;
        case 0x2dea38u: goto label_2dea38;
        case 0x2dea3cu: goto label_2dea3c;
        case 0x2dea40u: goto label_2dea40;
        case 0x2dea44u: goto label_2dea44;
        case 0x2dea48u: goto label_2dea48;
        case 0x2dea4cu: goto label_2dea4c;
        case 0x2dea50u: goto label_2dea50;
        case 0x2dea54u: goto label_2dea54;
        case 0x2dea58u: goto label_2dea58;
        case 0x2dea5cu: goto label_2dea5c;
        case 0x2dea60u: goto label_2dea60;
        case 0x2dea64u: goto label_2dea64;
        case 0x2dea68u: goto label_2dea68;
        case 0x2dea6cu: goto label_2dea6c;
        case 0x2dea70u: goto label_2dea70;
        case 0x2dea74u: goto label_2dea74;
        case 0x2dea78u: goto label_2dea78;
        case 0x2dea7cu: goto label_2dea7c;
        case 0x2dea80u: goto label_2dea80;
        case 0x2dea84u: goto label_2dea84;
        case 0x2dea88u: goto label_2dea88;
        case 0x2dea8cu: goto label_2dea8c;
        case 0x2dea90u: goto label_2dea90;
        case 0x2dea94u: goto label_2dea94;
        case 0x2dea98u: goto label_2dea98;
        case 0x2dea9cu: goto label_2dea9c;
        case 0x2deaa0u: goto label_2deaa0;
        case 0x2deaa4u: goto label_2deaa4;
        case 0x2deaa8u: goto label_2deaa8;
        case 0x2deaacu: goto label_2deaac;
        case 0x2deab0u: goto label_2deab0;
        case 0x2deab4u: goto label_2deab4;
        case 0x2deab8u: goto label_2deab8;
        case 0x2deabcu: goto label_2deabc;
        case 0x2deac0u: goto label_2deac0;
        case 0x2deac4u: goto label_2deac4;
        case 0x2deac8u: goto label_2deac8;
        case 0x2deaccu: goto label_2deacc;
        case 0x2dead0u: goto label_2dead0;
        case 0x2dead4u: goto label_2dead4;
        case 0x2dead8u: goto label_2dead8;
        case 0x2deadcu: goto label_2deadc;
        case 0x2deae0u: goto label_2deae0;
        case 0x2deae4u: goto label_2deae4;
        case 0x2deae8u: goto label_2deae8;
        case 0x2deaecu: goto label_2deaec;
        case 0x2deaf0u: goto label_2deaf0;
        case 0x2deaf4u: goto label_2deaf4;
        case 0x2deaf8u: goto label_2deaf8;
        case 0x2deafcu: goto label_2deafc;
        case 0x2deb00u: goto label_2deb00;
        case 0x2deb04u: goto label_2deb04;
        case 0x2deb08u: goto label_2deb08;
        case 0x2deb0cu: goto label_2deb0c;
        case 0x2deb10u: goto label_2deb10;
        case 0x2deb14u: goto label_2deb14;
        case 0x2deb18u: goto label_2deb18;
        case 0x2deb1cu: goto label_2deb1c;
        case 0x2deb20u: goto label_2deb20;
        case 0x2deb24u: goto label_2deb24;
        case 0x2deb28u: goto label_2deb28;
        case 0x2deb2cu: goto label_2deb2c;
        case 0x2deb30u: goto label_2deb30;
        case 0x2deb34u: goto label_2deb34;
        case 0x2deb38u: goto label_2deb38;
        case 0x2deb3cu: goto label_2deb3c;
        case 0x2deb40u: goto label_2deb40;
        case 0x2deb44u: goto label_2deb44;
        case 0x2deb48u: goto label_2deb48;
        case 0x2deb4cu: goto label_2deb4c;
        case 0x2deb50u: goto label_2deb50;
        case 0x2deb54u: goto label_2deb54;
        case 0x2deb58u: goto label_2deb58;
        case 0x2deb5cu: goto label_2deb5c;
        case 0x2deb60u: goto label_2deb60;
        case 0x2deb64u: goto label_2deb64;
        case 0x2deb68u: goto label_2deb68;
        case 0x2deb6cu: goto label_2deb6c;
        case 0x2deb70u: goto label_2deb70;
        case 0x2deb74u: goto label_2deb74;
        case 0x2deb78u: goto label_2deb78;
        case 0x2deb7cu: goto label_2deb7c;
        case 0x2deb80u: goto label_2deb80;
        case 0x2deb84u: goto label_2deb84;
        case 0x2deb88u: goto label_2deb88;
        case 0x2deb8cu: goto label_2deb8c;
        case 0x2deb90u: goto label_2deb90;
        case 0x2deb94u: goto label_2deb94;
        case 0x2deb98u: goto label_2deb98;
        case 0x2deb9cu: goto label_2deb9c;
        case 0x2deba0u: goto label_2deba0;
        case 0x2deba4u: goto label_2deba4;
        case 0x2deba8u: goto label_2deba8;
        case 0x2debacu: goto label_2debac;
        case 0x2debb0u: goto label_2debb0;
        case 0x2debb4u: goto label_2debb4;
        case 0x2debb8u: goto label_2debb8;
        case 0x2debbcu: goto label_2debbc;
        case 0x2debc0u: goto label_2debc0;
        case 0x2debc4u: goto label_2debc4;
        case 0x2debc8u: goto label_2debc8;
        case 0x2debccu: goto label_2debcc;
        case 0x2debd0u: goto label_2debd0;
        case 0x2debd4u: goto label_2debd4;
        case 0x2debd8u: goto label_2debd8;
        case 0x2debdcu: goto label_2debdc;
        case 0x2debe0u: goto label_2debe0;
        case 0x2debe4u: goto label_2debe4;
        case 0x2debe8u: goto label_2debe8;
        case 0x2debecu: goto label_2debec;
        case 0x2debf0u: goto label_2debf0;
        case 0x2debf4u: goto label_2debf4;
        case 0x2debf8u: goto label_2debf8;
        case 0x2debfcu: goto label_2debfc;
        case 0x2dec00u: goto label_2dec00;
        case 0x2dec04u: goto label_2dec04;
        case 0x2dec08u: goto label_2dec08;
        case 0x2dec0cu: goto label_2dec0c;
        case 0x2dec10u: goto label_2dec10;
        case 0x2dec14u: goto label_2dec14;
        case 0x2dec18u: goto label_2dec18;
        case 0x2dec1cu: goto label_2dec1c;
        case 0x2dec20u: goto label_2dec20;
        case 0x2dec24u: goto label_2dec24;
        case 0x2dec28u: goto label_2dec28;
        case 0x2dec2cu: goto label_2dec2c;
        case 0x2dec30u: goto label_2dec30;
        case 0x2dec34u: goto label_2dec34;
        case 0x2dec38u: goto label_2dec38;
        case 0x2dec3cu: goto label_2dec3c;
        case 0x2dec40u: goto label_2dec40;
        case 0x2dec44u: goto label_2dec44;
        case 0x2dec48u: goto label_2dec48;
        case 0x2dec4cu: goto label_2dec4c;
        case 0x2dec50u: goto label_2dec50;
        case 0x2dec54u: goto label_2dec54;
        case 0x2dec58u: goto label_2dec58;
        case 0x2dec5cu: goto label_2dec5c;
        case 0x2dec60u: goto label_2dec60;
        case 0x2dec64u: goto label_2dec64;
        case 0x2dec68u: goto label_2dec68;
        case 0x2dec6cu: goto label_2dec6c;
        case 0x2dec70u: goto label_2dec70;
        case 0x2dec74u: goto label_2dec74;
        case 0x2dec78u: goto label_2dec78;
        case 0x2dec7cu: goto label_2dec7c;
        case 0x2dec80u: goto label_2dec80;
        case 0x2dec84u: goto label_2dec84;
        case 0x2dec88u: goto label_2dec88;
        case 0x2dec8cu: goto label_2dec8c;
        case 0x2dec90u: goto label_2dec90;
        case 0x2dec94u: goto label_2dec94;
        case 0x2dec98u: goto label_2dec98;
        case 0x2dec9cu: goto label_2dec9c;
        case 0x2deca0u: goto label_2deca0;
        case 0x2deca4u: goto label_2deca4;
        case 0x2deca8u: goto label_2deca8;
        case 0x2decacu: goto label_2decac;
        case 0x2decb0u: goto label_2decb0;
        case 0x2decb4u: goto label_2decb4;
        case 0x2decb8u: goto label_2decb8;
        case 0x2decbcu: goto label_2decbc;
        case 0x2decc0u: goto label_2decc0;
        case 0x2decc4u: goto label_2decc4;
        case 0x2decc8u: goto label_2decc8;
        case 0x2decccu: goto label_2deccc;
        case 0x2decd0u: goto label_2decd0;
        case 0x2decd4u: goto label_2decd4;
        case 0x2decd8u: goto label_2decd8;
        case 0x2decdcu: goto label_2decdc;
        case 0x2dece0u: goto label_2dece0;
        case 0x2dece4u: goto label_2dece4;
        case 0x2dece8u: goto label_2dece8;
        case 0x2dececu: goto label_2decec;
        case 0x2decf0u: goto label_2decf0;
        case 0x2decf4u: goto label_2decf4;
        case 0x2decf8u: goto label_2decf8;
        case 0x2decfcu: goto label_2decfc;
        case 0x2ded00u: goto label_2ded00;
        case 0x2ded04u: goto label_2ded04;
        case 0x2ded08u: goto label_2ded08;
        case 0x2ded0cu: goto label_2ded0c;
        case 0x2ded10u: goto label_2ded10;
        case 0x2ded14u: goto label_2ded14;
        default: break;
    }

    ctx->pc = 0x2de7f0u;

label_2de7f0:
    // 0x2de7f0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2de7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2de7f4:
    // 0x2de7f4: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2de7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_2de7f8:
    // 0x2de7f8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2de7f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2de7fc:
    // 0x2de7fc: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2de7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_2de800:
    // 0x2de800: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2de800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_2de804:
    // 0x2de804: 0x111103  sra         $v0, $s1, 4
    ctx->pc = 0x2de804u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 4));
label_2de808:
    // 0x2de808: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2de808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2de80c:
    // 0x2de80c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2de80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_2de810:
    // 0x2de810: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2de810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2de814:
    // 0x2de814: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2de814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2de818:
    // 0x2de818: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2de818u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2de81c:
    // 0x2de81c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2de81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_2de820:
    // 0x2de820: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2de820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_2de824:
    // 0x2de824: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2de824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2de828:
    // 0x2de828: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2de828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_2de82c:
    // 0x2de82c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2de82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2de830:
    // 0x2de830: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x2de830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_2de834:
    // 0x2de834: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2de834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de838:
    // 0x2de838: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2de838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2de83c:
    // 0x2de83c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2de83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_2de840:
    // 0x2de840: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2de840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_2de844:
    // 0x2de844: 0x8f978bd0  lw          $s7, -0x7430($gp)
    ctx->pc = 0x2de844u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937552)));
label_2de848:
    // 0x2de848: 0xc0b85e6  jal         func_2E1798
label_2de84c:
    if (ctx->pc == 0x2DE84Cu) {
        ctx->pc = 0x2DE84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE848u;
        // 0x2de84c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE850u;
        goto label_2de850;
    }
    ctx->pc = 0x2DE848u;
    SET_GPR_U32(ctx, 31, 0x2DE850u);
    ctx->pc = 0x2DE84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE848u;
    // 0x2de84c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1798u, 0x2DE848u, 0x2DE850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE850u;
label_2de850:
    // 0x2de850: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2de854:
    if (ctx->pc == 0x2DE854u) {
        ctx->pc = 0x2DE854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE850u;
        // 0x2de854: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE858u;
        goto label_2de858;
    }
    ctx->pc = 0x2DE850u;
    {
        const bool branch_taken_0x2de850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE850u;
        // 0x2de854: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de850) {
            ctx->pc = 0x2DE894u;
            goto label_2de894;
        }
    }
    ctx->pc = 0x2DE858u;
label_2de858:
    // 0x2de858: 0x24020803  addiu       $v0, $zero, 0x803
    ctx->pc = 0x2de858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
label_2de85c:
    // 0x2de85c: 0x14620120  bne         $v1, $v0, . + 4 + (0x120 << 2)
label_2de860:
    if (ctx->pc == 0x2DE860u) {
        ctx->pc = 0x2DE860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE85Cu;
        // 0x2de860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE864u;
        goto label_2de864;
    }
    ctx->pc = 0x2DE85Cu;
    {
        const bool branch_taken_0x2de85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE85Cu;
        // 0x2de860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de85c) {
            ctx->pc = 0x2DECE0u;
            goto label_2dece0;
        }
    }
    ctx->pc = 0x2DE864u;
label_2de864:
    // 0x2de864: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2de864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2de868:
    // 0x2de868: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2de86c:
    if (ctx->pc == 0x2DE86Cu) {
        ctx->pc = 0x2DE86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE868u;
        // 0x2de86c: 0x8f828bd0  lw          $v0, -0x7430($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE870u;
        goto label_2de870;
    }
    ctx->pc = 0x2DE868u;
    {
        const bool branch_taken_0x2de868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE868u;
        // 0x2de86c: 0x8f828bd0  lw          $v0, -0x7430($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de868) {
            ctx->pc = 0x2DE894u;
            goto label_2de894;
        }
    }
    ctx->pc = 0x2DE870u;
label_2de870:
    // 0x2de870: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2de874:
    if (ctx->pc == 0x2DE874u) {
        ctx->pc = 0x2DE874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE870u;
        // 0x2de874: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE878u;
        goto label_2de878;
    }
    ctx->pc = 0x2DE870u;
    {
        const bool branch_taken_0x2de870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE870u;
        // 0x2de874: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de870) {
            ctx->pc = 0x2DE89Cu;
            goto label_2de89c;
        }
    }
    ctx->pc = 0x2DE878u;
label_2de878:
    // 0x2de878: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2de878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2de87c:
    // 0x2de87c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2de87cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2de880:
    // 0x2de880: 0xc0b7076  jal         func_2DC1D8
label_2de884:
    if (ctx->pc == 0x2DE884u) {
        ctx->pc = 0x2DE884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE880u;
        // 0x2de884: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE888u;
        goto label_2de888;
    }
    ctx->pc = 0x2DE880u;
    SET_GPR_U32(ctx, 31, 0x2DE888u);
    ctx->pc = 0x2DE884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE880u;
    // 0x2de884: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC1D8u, 0x2DE880u, 0x2DE888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE888u;
label_2de888:
    // 0x2de888: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de88c:
    // 0x2de88c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_2de890:
    if (ctx->pc == 0x2DE890u) {
        ctx->pc = 0x2DE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE88Cu;
        // 0x2de890: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE894u;
        goto label_2de894;
    }
    ctx->pc = 0x2DE88Cu;
    {
        const bool branch_taken_0x2de88c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE88Cu;
        // 0x2de890: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de88c) {
            ctx->pc = 0x2DE8A0u;
            goto label_2de8a0;
        }
    }
    ctx->pc = 0x2DE894u;
label_2de894:
    // 0x2de894: 0x10000112  b           . + 4 + (0x112 << 2)
label_2de898:
    if (ctx->pc == 0x2DE898u) {
        ctx->pc = 0x2DE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE894u;
        // 0x2de898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE89Cu;
        goto label_2de89c;
    }
    ctx->pc = 0x2DE894u;
    {
        const bool branch_taken_0x2de894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE894u;
        // 0x2de898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de894) {
            ctx->pc = 0x2DECE0u;
            goto label_2dece0;
        }
    }
    ctx->pc = 0x2DE89Cu;
label_2de89c:
    // 0x2de89c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2de89cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2de8a0:
    // 0x2de8a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2de8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de8a4:
    // 0x2de8a4: 0xc093546  jal         func_24D518
label_2de8a8:
    if (ctx->pc == 0x2DE8A8u) {
        ctx->pc = 0x2DE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8A4u;
        // 0x2de8a8: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE8ACu;
        goto label_2de8ac;
    }
    ctx->pc = 0x2DE8A4u;
    SET_GPR_U32(ctx, 31, 0x2DE8ACu);
    ctx->pc = 0x2DE8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE8A4u;
    // 0x2de8a8: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D518u, 0x2DE8A4u, 0x2DE8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE8ACu;
label_2de8ac:
    // 0x2de8ac: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2de8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2de8b0:
    // 0x2de8b0: 0x1462010b  bne         $v1, $v0, . + 4 + (0x10B << 2)
label_2de8b4:
    if (ctx->pc == 0x2DE8B4u) {
        ctx->pc = 0x2DE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8B0u;
        // 0x2de8b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE8B8u;
        goto label_2de8b8;
    }
    ctx->pc = 0x2DE8B0u;
    {
        const bool branch_taken_0x2de8b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8B0u;
        // 0x2de8b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de8b0) {
            ctx->pc = 0x2DECE0u;
            goto label_2dece0;
        }
    }
    ctx->pc = 0x2DE8B8u;
label_2de8b8:
    // 0x2de8b8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2de8b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2de8bc:
    // 0x2de8bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2de8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2de8c0:
    // 0x2de8c0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2de8c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2de8c4:
    // 0x2de8c4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2de8c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2de8c8:
    // 0x2de8c8: 0xc0b7b46  jal         func_2DED18
label_2de8cc:
    if (ctx->pc == 0x2DE8CCu) {
        ctx->pc = 0x2DE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8C8u;
        // 0x2de8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE8D0u;
        goto label_2de8d0;
    }
    ctx->pc = 0x2DE8C8u;
    SET_GPR_U32(ctx, 31, 0x2DE8D0u);
    ctx->pc = 0x2DE8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE8C8u;
    // 0x2de8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DED18u, 0x2DE8C8u, 0x2DE8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE8D0u;
label_2de8d0:
    // 0x2de8d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2de8d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de8d4:
    // 0x2de8d4: 0x8f828bd0  lw          $v0, -0x7430($gp)
    ctx->pc = 0x2de8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937552)));
label_2de8d8:
    // 0x2de8d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2de8dc:
    if (ctx->pc == 0x2DE8DCu) {
        ctx->pc = 0x2DE8E0u;
        goto label_2de8e0;
    }
    ctx->pc = 0x2DE8D8u;
    {
        const bool branch_taken_0x2de8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de8d8) {
            ctx->pc = 0x2DE8E8u;
            goto label_2de8e8;
        }
    }
    ctx->pc = 0x2DE8E0u;
label_2de8e0:
    // 0x2de8e0: 0xc0b7080  jal         func_2DC200
label_2de8e4:
    if (ctx->pc == 0x2DE8E4u) {
        ctx->pc = 0x2DE8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8E0u;
        // 0x2de8e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE8E8u;
        goto label_2de8e8;
    }
    ctx->pc = 0x2DE8E0u;
    SET_GPR_U32(ctx, 31, 0x2DE8E8u);
    ctx->pc = 0x2DE8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE8E0u;
    // 0x2de8e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC200u, 0x2DE8E0u, 0x2DE8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE8E8u;
label_2de8e8:
    // 0x2de8e8: 0x1240ffea  beqz        $s2, . + 4 + (-0x16 << 2)
label_2de8ec:
    if (ctx->pc == 0x2DE8ECu) {
        ctx->pc = 0x2DE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8E8u;
        // 0x2de8ec: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE8F0u;
        goto label_2de8f0;
    }
    ctx->pc = 0x2DE8E8u;
    {
        const bool branch_taken_0x2de8e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8E8u;
        // 0x2de8ec: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de8e8) {
            ctx->pc = 0x2DE894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de894;
        }
    }
    ctx->pc = 0x2DE8F0u;
label_2de8f0:
    // 0x2de8f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2de8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2de8f4:
    // 0x2de8f4: 0xc0b85e6  jal         func_2E1798
label_2de8f8:
    if (ctx->pc == 0x2DE8F8u) {
        ctx->pc = 0x2DE8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8F4u;
        // 0x2de8f8: 0x8fa60048  lw          $a2, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE8FCu;
        goto label_2de8fc;
    }
    ctx->pc = 0x2DE8F4u;
    SET_GPR_U32(ctx, 31, 0x2DE8FCu);
    ctx->pc = 0x2DE8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE8F4u;
    // 0x2de8f8: 0x8fa60048  lw          $a2, 0x48($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1798u, 0x2DE8F4u, 0x2DE8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE8FCu;
label_2de8fc:
    // 0x2de8fc: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_2de900:
    if (ctx->pc == 0x2DE900u) {
        ctx->pc = 0x2DE900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8FCu;
        // 0x2de900: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE904u;
        goto label_2de904;
    }
    ctx->pc = 0x2DE8FCu;
    {
        const bool branch_taken_0x2de8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8FCu;
        // 0x2de900: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de8fc) {
            ctx->pc = 0x2DE998u;
            goto label_2de998;
        }
    }
    ctx->pc = 0x2DE904u;
label_2de904:
    // 0x2de904: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2de904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2de908:
    // 0x2de908: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2de908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2de90c:
    // 0x2de90c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2de910:
    if (ctx->pc == 0x2DE910u) {
        ctx->pc = 0x2DE914u;
        goto label_2de914;
    }
    ctx->pc = 0x2DE90Cu;
    {
        const bool branch_taken_0x2de90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de90c) {
            ctx->pc = 0x2DE91Cu;
            goto label_2de91c;
        }
    }
    ctx->pc = 0x2DE914u;
label_2de914:
    // 0x2de914: 0x40f809  jalr        $v0
label_2de918:
    if (ctx->pc == 0x2DE918u) {
        ctx->pc = 0x2DE918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE914u;
        // 0x2de918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE91Cu;
        goto label_2de91c;
    }
    ctx->pc = 0x2DE914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DE91Cu);
        ctx->pc = 0x2DE918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE914u;
        // 0x2de918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE914u, 0x2DE91Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DE91Cu;
label_2de91c:
    // 0x2de91c: 0xc0b7768  jal         func_2DDDA0
label_2de920:
    if (ctx->pc == 0x2DE920u) {
        ctx->pc = 0x2DE920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE91Cu;
        // 0x2de920: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE924u;
        goto label_2de924;
    }
    ctx->pc = 0x2DE91Cu;
    SET_GPR_U32(ctx, 31, 0x2DE924u);
    ctx->pc = 0x2DE920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE91Cu;
    // 0x2de920: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDDA0u, 0x2DE91Cu, 0x2DE924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE924u;
label_2de924:
    // 0x2de924: 0xc0b7768  jal         func_2DDDA0
label_2de928:
    if (ctx->pc == 0x2DE928u) {
        ctx->pc = 0x2DE928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE924u;
        // 0x2de928: 0x2644002c  addiu       $a0, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE92Cu;
        goto label_2de92c;
    }
    ctx->pc = 0x2DE924u;
    SET_GPR_U32(ctx, 31, 0x2DE92Cu);
    ctx->pc = 0x2DE928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE924u;
    // 0x2de928: 0x2644002c  addiu       $a0, $s2, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDDA0u, 0x2DE924u, 0x2DE92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE92Cu;
label_2de92c:
    // 0x2de92c: 0xc0b74c0  jal         func_2DD300
label_2de930:
    if (ctx->pc == 0x2DE930u) {
        ctx->pc = 0x2DE930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE92Cu;
        // 0x2de930: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE934u;
        goto label_2de934;
    }
    ctx->pc = 0x2DE92Cu;
    SET_GPR_U32(ctx, 31, 0x2DE934u);
    ctx->pc = 0x2DE930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE92Cu;
    // 0x2de930: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD300u, 0x2DE92Cu, 0x2DE934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE934u;
label_2de934:
    // 0x2de934: 0xc0b7d76  jal         func_2DF5D8
label_2de938:
    if (ctx->pc == 0x2DE938u) {
        ctx->pc = 0x2DE938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE934u;
        // 0x2de938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE93Cu;
        goto label_2de93c;
    }
    ctx->pc = 0x2DE934u;
    SET_GPR_U32(ctx, 31, 0x2DE93Cu);
    ctx->pc = 0x2DE938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE934u;
    // 0x2de938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF5D8u, 0x2DE934u, 0x2DE93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE93Cu;
label_2de93c:
    // 0x2de93c: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x2de93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2de940:
    // 0x2de940: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2de940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2de944:
    // 0x2de944: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2de948:
    if (ctx->pc == 0x2DE948u) {
        ctx->pc = 0x2DE948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE944u;
        // 0x2de948: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE94Cu;
        goto label_2de94c;
    }
    ctx->pc = 0x2DE944u;
    {
        const bool branch_taken_0x2de944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE944u;
        // 0x2de948: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de944) {
            ctx->pc = 0x2DE980u;
            goto label_2de980;
        }
    }
    ctx->pc = 0x2DE94Cu;
label_2de94c:
    // 0x2de94c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2de94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2de950:
    // 0x2de950: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2de950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2de954:
    // 0x2de954: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2de958:
    if (ctx->pc == 0x2DE958u) {
        ctx->pc = 0x2DE958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE954u;
        // 0x2de958: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE95Cu;
        goto label_2de95c;
    }
    ctx->pc = 0x2DE954u;
    {
        const bool branch_taken_0x2de954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de954) {
            ctx->pc = 0x2DE958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE954u;
            // 0x2de958: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE96Cu;
            goto label_2de96c;
        }
    }
    ctx->pc = 0x2DE95Cu;
label_2de95c:
    // 0x2de95c: 0xc0b81ea  jal         func_2E07A8
label_2de960:
    if (ctx->pc == 0x2DE960u) {
        ctx->pc = 0x2DE960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE95Cu;
        // 0x2de960: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE964u;
        goto label_2de964;
    }
    ctx->pc = 0x2DE95Cu;
    SET_GPR_U32(ctx, 31, 0x2DE964u);
    ctx->pc = 0x2DE960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE95Cu;
    // 0x2de960: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E07A8u, 0x2DE95Cu, 0x2DE964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE964u;
label_2de964:
    // 0x2de964: 0x100000de  b           . + 4 + (0xDE << 2)
label_2de968:
    if (ctx->pc == 0x2DE968u) {
        ctx->pc = 0x2DE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE964u;
        // 0x2de968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE96Cu;
        goto label_2de96c;
    }
    ctx->pc = 0x2DE964u;
    {
        const bool branch_taken_0x2de964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE964u;
        // 0x2de968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de964) {
            ctx->pc = 0x2DECE0u;
            goto label_2dece0;
        }
    }
    ctx->pc = 0x2DE96Cu;
label_2de96c:
    // 0x2de96c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2de96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2de970:
    // 0x2de970: 0xc0b81ea  jal         func_2E07A8
label_2de974:
    if (ctx->pc == 0x2DE974u) {
        ctx->pc = 0x2DE974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE970u;
        // 0x2de974: 0x24848068  addiu       $a0, $a0, -0x7F98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE978u;
        goto label_2de978;
    }
    ctx->pc = 0x2DE970u;
    SET_GPR_U32(ctx, 31, 0x2DE978u);
    ctx->pc = 0x2DE974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE970u;
    // 0x2de974: 0x24848068  addiu       $a0, $a0, -0x7F98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E07A8u, 0x2DE970u, 0x2DE978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE978u;
label_2de978:
    // 0x2de978: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_2de97c:
    if (ctx->pc == 0x2DE97Cu) {
        ctx->pc = 0x2DE97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE978u;
        // 0x2de97c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE980u;
        goto label_2de980;
    }
    ctx->pc = 0x2DE978u;
    {
        const bool branch_taken_0x2de978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE978u;
        // 0x2de97c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de978) {
            ctx->pc = 0x2DECE0u;
            goto label_2dece0;
        }
    }
    ctx->pc = 0x2DE980u;
label_2de980:
    // 0x2de980: 0x144000d7  bnez        $v0, . + 4 + (0xD7 << 2)
label_2de984:
    if (ctx->pc == 0x2DE984u) {
        ctx->pc = 0x2DE984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE980u;
        // 0x2de984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE988u;
        goto label_2de988;
    }
    ctx->pc = 0x2DE980u;
    {
        const bool branch_taken_0x2de980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE980u;
        // 0x2de984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de980) {
            ctx->pc = 0x2DECE0u;
            goto label_2dece0;
        }
    }
    ctx->pc = 0x2DE988u;
label_2de988:
    // 0x2de988: 0xc0b7080  jal         func_2DC200
label_2de98c:
    if (ctx->pc == 0x2DE98Cu) {
        ctx->pc = 0x2DE98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE988u;
        // 0x2de98c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE990u;
        goto label_2de990;
    }
    ctx->pc = 0x2DE988u;
    SET_GPR_U32(ctx, 31, 0x2DE990u);
    ctx->pc = 0x2DE98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE988u;
    // 0x2de98c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC200u, 0x2DE988u, 0x2DE990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE990u;
label_2de990:
    // 0x2de990: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_2de994:
    if (ctx->pc == 0x2DE994u) {
        ctx->pc = 0x2DE994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE990u;
        // 0x2de994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE998u;
        goto label_2de998;
    }
    ctx->pc = 0x2DE990u;
    {
        const bool branch_taken_0x2de990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE990u;
        // 0x2de994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de990) {
            ctx->pc = 0x2DECE0u;
            goto label_2dece0;
        }
    }
    ctx->pc = 0x2DE998u;
label_2de998:
    // 0x2de998: 0x24020804  addiu       $v0, $zero, 0x804
    ctx->pc = 0x2de998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
label_2de99c:
    // 0x2de99c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_2de9a0:
    if (ctx->pc == 0x2DE9A0u) {
        ctx->pc = 0x2DE9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE99Cu;
        // 0x2de9a0: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE9A4u;
        goto label_2de9a4;
    }
    ctx->pc = 0x2DE99Cu;
    {
        const bool branch_taken_0x2de99c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2de99c) {
            ctx->pc = 0x2DE9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE99Cu;
            // 0x2de9a0: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE9B4u;
            goto label_2de9b4;
        }
    }
    ctx->pc = 0x2DE9A4u;
label_2de9a4:
    // 0x2de9a4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2de9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2de9a8:
    // 0x2de9a8: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_2de9ac:
    if (ctx->pc == 0x2DE9ACu) {
        ctx->pc = 0x2DE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9A8u;
        // 0x2de9ac: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE9B0u;
        goto label_2de9b0;
    }
    ctx->pc = 0x2DE9A8u;
    {
        const bool branch_taken_0x2de9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de9a8) {
            ctx->pc = 0x2DE9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE9A8u;
            // 0x2de9ac: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEA44u;
            goto label_2dea44;
        }
    }
    ctx->pc = 0x2DE9B0u;
label_2de9b0:
    // 0x2de9b0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2de9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2de9b4:
    // 0x2de9b4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2de9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2de9b8:
    // 0x2de9b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2de9bc:
    if (ctx->pc == 0x2DE9BCu) {
        ctx->pc = 0x2DE9C0u;
        goto label_2de9c0;
    }
    ctx->pc = 0x2DE9B8u;
    {
        const bool branch_taken_0x2de9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de9b8) {
            ctx->pc = 0x2DE9C8u;
            goto label_2de9c8;
        }
    }
    ctx->pc = 0x2DE9C0u;
label_2de9c0:
    // 0x2de9c0: 0x40f809  jalr        $v0
label_2de9c4:
    if (ctx->pc == 0x2DE9C4u) {
        ctx->pc = 0x2DE9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9C0u;
        // 0x2de9c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE9C8u;
        goto label_2de9c8;
    }
    ctx->pc = 0x2DE9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DE9C8u);
        ctx->pc = 0x2DE9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9C0u;
        // 0x2de9c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE9C0u, 0x2DE9C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DE9C8u;
label_2de9c8:
    // 0x2de9c8: 0xc0b7768  jal         func_2DDDA0
label_2de9cc:
    if (ctx->pc == 0x2DE9CCu) {
        ctx->pc = 0x2DE9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9C8u;
        // 0x2de9cc: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE9D0u;
        goto label_2de9d0;
    }
    ctx->pc = 0x2DE9C8u;
    SET_GPR_U32(ctx, 31, 0x2DE9D0u);
    ctx->pc = 0x2DE9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE9C8u;
    // 0x2de9cc: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDDA0u, 0x2DE9C8u, 0x2DE9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE9D0u;
label_2de9d0:
    // 0x2de9d0: 0xc0b7768  jal         func_2DDDA0
label_2de9d4:
    if (ctx->pc == 0x2DE9D4u) {
        ctx->pc = 0x2DE9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9D0u;
        // 0x2de9d4: 0x2644002c  addiu       $a0, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE9D8u;
        goto label_2de9d8;
    }
    ctx->pc = 0x2DE9D0u;
    SET_GPR_U32(ctx, 31, 0x2DE9D8u);
    ctx->pc = 0x2DE9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE9D0u;
    // 0x2de9d4: 0x2644002c  addiu       $a0, $s2, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDDA0u, 0x2DE9D0u, 0x2DE9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE9D8u;
label_2de9d8:
    // 0x2de9d8: 0xc0b74c0  jal         func_2DD300
label_2de9dc:
    if (ctx->pc == 0x2DE9DCu) {
        ctx->pc = 0x2DE9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9D8u;
        // 0x2de9dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE9E0u;
        goto label_2de9e0;
    }
    ctx->pc = 0x2DE9D8u;
    SET_GPR_U32(ctx, 31, 0x2DE9E0u);
    ctx->pc = 0x2DE9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE9D8u;
    // 0x2de9dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD300u, 0x2DE9D8u, 0x2DE9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE9E0u;
label_2de9e0:
    // 0x2de9e0: 0xc0b7d76  jal         func_2DF5D8
label_2de9e4:
    if (ctx->pc == 0x2DE9E4u) {
        ctx->pc = 0x2DE9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9E0u;
        // 0x2de9e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE9E8u;
        goto label_2de9e8;
    }
    ctx->pc = 0x2DE9E0u;
    SET_GPR_U32(ctx, 31, 0x2DE9E8u);
    ctx->pc = 0x2DE9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE9E0u;
    // 0x2de9e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF5D8u, 0x2DE9E0u, 0x2DE9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE9E8u;
label_2de9e8:
    // 0x2de9e8: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x2de9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2de9ec:
    // 0x2de9ec: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2de9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2de9f0:
    // 0x2de9f0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2de9f4:
    if (ctx->pc == 0x2DE9F4u) {
        ctx->pc = 0x2DE9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9F0u;
        // 0x2de9f4: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE9F8u;
        goto label_2de9f8;
    }
    ctx->pc = 0x2DE9F0u;
    {
        const bool branch_taken_0x2de9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9F0u;
        // 0x2de9f4: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de9f0) {
            ctx->pc = 0x2DEA2Cu;
            goto label_2dea2c;
        }
    }
    ctx->pc = 0x2DE9F8u;
label_2de9f8:
    // 0x2de9f8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2de9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2de9fc:
    // 0x2de9fc: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2de9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2dea00:
    // 0x2dea00: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2dea04:
    if (ctx->pc == 0x2DEA04u) {
        ctx->pc = 0x2DEA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA00u;
        // 0x2dea04: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA08u;
        goto label_2dea08;
    }
    ctx->pc = 0x2DEA00u;
    {
        const bool branch_taken_0x2dea00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dea00) {
            ctx->pc = 0x2DEA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEA00u;
            // 0x2dea04: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEA18u;
            goto label_2dea18;
        }
    }
    ctx->pc = 0x2DEA08u;
label_2dea08:
    // 0x2dea08: 0xc0b81ea  jal         func_2E07A8
label_2dea0c:
    if (ctx->pc == 0x2DEA0Cu) {
        ctx->pc = 0x2DEA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA08u;
        // 0x2dea0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA10u;
        goto label_2dea10;
    }
    ctx->pc = 0x2DEA08u;
    SET_GPR_U32(ctx, 31, 0x2DEA10u);
    ctx->pc = 0x2DEA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEA08u;
    // 0x2dea0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E07A8u, 0x2DEA08u, 0x2DEA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA10u;
label_2dea10:
    // 0x2dea10: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_2dea14:
    if (ctx->pc == 0x2DEA14u) {
        ctx->pc = 0x2DEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA10u;
        // 0x2dea14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA18u;
        goto label_2dea18;
    }
    ctx->pc = 0x2DEA10u;
    {
        const bool branch_taken_0x2dea10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA10u;
        // 0x2dea14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dea10) {
            ctx->pc = 0x2DECE0u;
            goto label_2dece0;
        }
    }
    ctx->pc = 0x2DEA18u;
label_2dea18:
    // 0x2dea18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dea18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dea1c:
    // 0x2dea1c: 0xc0b81ea  jal         func_2E07A8
label_2dea20:
    if (ctx->pc == 0x2DEA20u) {
        ctx->pc = 0x2DEA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA1Cu;
        // 0x2dea20: 0x24848068  addiu       $a0, $a0, -0x7F98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA24u;
        goto label_2dea24;
    }
    ctx->pc = 0x2DEA1Cu;
    SET_GPR_U32(ctx, 31, 0x2DEA24u);
    ctx->pc = 0x2DEA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEA1Cu;
    // 0x2dea20: 0x24848068  addiu       $a0, $a0, -0x7F98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E07A8u, 0x2DEA1Cu, 0x2DEA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA24u;
label_2dea24:
    // 0x2dea24: 0x100000ae  b           . + 4 + (0xAE << 2)
label_2dea28:
    if (ctx->pc == 0x2DEA28u) {
        ctx->pc = 0x2DEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA24u;
        // 0x2dea28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA2Cu;
        goto label_2dea2c;
    }
    ctx->pc = 0x2DEA24u;
    {
        const bool branch_taken_0x2dea24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA24u;
        // 0x2dea28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dea24) {
            ctx->pc = 0x2DECE0u;
            goto label_2dece0;
        }
    }
    ctx->pc = 0x2DEA2Cu;
label_2dea2c:
    // 0x2dea2c: 0x144000ac  bnez        $v0, . + 4 + (0xAC << 2)
label_2dea30:
    if (ctx->pc == 0x2DEA30u) {
        ctx->pc = 0x2DEA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA2Cu;
        // 0x2dea30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA34u;
        goto label_2dea34;
    }
    ctx->pc = 0x2DEA2Cu;
    {
        const bool branch_taken_0x2dea2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA2Cu;
        // 0x2dea30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dea2c) {
            ctx->pc = 0x2DECE0u;
            goto label_2dece0;
        }
    }
    ctx->pc = 0x2DEA34u;
label_2dea34:
    // 0x2dea34: 0xc0b7080  jal         func_2DC200
label_2dea38:
    if (ctx->pc == 0x2DEA38u) {
        ctx->pc = 0x2DEA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA34u;
        // 0x2dea38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA3Cu;
        goto label_2dea3c;
    }
    ctx->pc = 0x2DEA34u;
    SET_GPR_U32(ctx, 31, 0x2DEA3Cu);
    ctx->pc = 0x2DEA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEA34u;
    // 0x2dea38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC200u, 0x2DEA34u, 0x2DEA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA3Cu;
label_2dea3c:
    // 0x2dea3c: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_2dea40:
    if (ctx->pc == 0x2DEA40u) {
        ctx->pc = 0x2DEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA3Cu;
        // 0x2dea40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA44u;
        goto label_2dea44;
    }
    ctx->pc = 0x2DEA3Cu;
    {
        const bool branch_taken_0x2dea3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA3Cu;
        // 0x2dea40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dea3c) {
            ctx->pc = 0x2DECE0u;
            goto label_2dece0;
        }
    }
    ctx->pc = 0x2DEA44u;
label_2dea44:
    // 0x2dea44: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2dea44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dea48:
    // 0x2dea48: 0xc0b7d14  jal         func_2DF450
label_2dea4c:
    if (ctx->pc == 0x2DEA4Cu) {
        ctx->pc = 0x2DEA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA48u;
        // 0x2dea4c: 0x8e450030  lw          $a1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA50u;
        goto label_2dea50;
    }
    ctx->pc = 0x2DEA48u;
    SET_GPR_U32(ctx, 31, 0x2DEA50u);
    ctx->pc = 0x2DEA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEA48u;
    // 0x2dea4c: 0x8e450030  lw          $a1, 0x30($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF450u, 0x2DEA48u, 0x2DEA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA50u;
label_2dea50:
    // 0x2dea50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2dea50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dea54:
    // 0x2dea54: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2dea54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2dea58:
    // 0x2dea58: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2dea58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2dea5c:
    // 0x2dea5c: 0x2451f0f0  addiu       $s1, $v0, -0xF10
    ctx->pc = 0x2dea5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
label_2dea60:
    // 0x2dea60: 0xc0b7d14  jal         func_2DF450
label_2dea64:
    if (ctx->pc == 0x2DEA64u) {
        ctx->pc = 0x2DEA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA60u;
        // 0x2dea64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA68u;
        goto label_2dea68;
    }
    ctx->pc = 0x2DEA60u;
    SET_GPR_U32(ctx, 31, 0x2DEA68u);
    ctx->pc = 0x2DEA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEA60u;
    // 0x2dea64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF450u, 0x2DEA60u, 0x2DEA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA68u;
label_2dea68:
    // 0x2dea68: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2dea6c:
    if (ctx->pc == 0x2DEA6Cu) {
        ctx->pc = 0x2DEA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA68u;
        // 0x2dea6c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA70u;
        goto label_2dea70;
    }
    ctx->pc = 0x2DEA68u;
    {
        const bool branch_taken_0x2dea68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA68u;
        // 0x2dea6c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dea68) {
            ctx->pc = 0x2DEAB0u;
            goto label_2deab0;
        }
    }
    ctx->pc = 0x2DEA70u;
label_2dea70:
    // 0x2dea70: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2dea70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2dea74:
    // 0x2dea74: 0x2450f120  addiu       $s0, $v0, -0xEE0
    ctx->pc = 0x2dea74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963488));
label_2dea78:
    // 0x2dea78: 0xc0b7d14  jal         func_2DF450
label_2dea7c:
    if (ctx->pc == 0x2DEA7Cu) {
        ctx->pc = 0x2DEA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA78u;
        // 0x2dea7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA80u;
        goto label_2dea80;
    }
    ctx->pc = 0x2DEA78u;
    SET_GPR_U32(ctx, 31, 0x2DEA80u);
    ctx->pc = 0x2DEA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEA78u;
    // 0x2dea7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF450u, 0x2DEA78u, 0x2DEA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA80u;
label_2dea80:
    // 0x2dea80: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_2dea84:
    if (ctx->pc == 0x2DEA84u) {
        ctx->pc = 0x2DEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA80u;
        // 0x2dea84: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA88u;
        goto label_2dea88;
    }
    ctx->pc = 0x2DEA80u;
    {
        const bool branch_taken_0x2dea80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dea80) {
            ctx->pc = 0x2DEA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEA80u;
            // 0x2dea84: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEAB4u;
            goto label_2deab4;
        }
    }
    ctx->pc = 0x2DEA88u;
label_2dea88:
    // 0x2dea88: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x2dea88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2dea8c:
    // 0x2dea8c: 0xc0b7d14  jal         func_2DF450
label_2dea90:
    if (ctx->pc == 0x2DEA90u) {
        ctx->pc = 0x2DEA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA8Cu;
        // 0x2dea90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA94u;
        goto label_2dea94;
    }
    ctx->pc = 0x2DEA8Cu;
    SET_GPR_U32(ctx, 31, 0x2DEA94u);
    ctx->pc = 0x2DEA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEA8Cu;
    // 0x2dea90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF450u, 0x2DEA8Cu, 0x2DEA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA94u;
label_2dea94:
    // 0x2dea94: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2dea98:
    if (ctx->pc == 0x2DEA98u) {
        ctx->pc = 0x2DEA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA94u;
        // 0x2dea98: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA9Cu;
        goto label_2dea9c;
    }
    ctx->pc = 0x2DEA94u;
    {
        const bool branch_taken_0x2dea94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dea94) {
            ctx->pc = 0x2DEA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEA94u;
            // 0x2dea98: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEAB4u;
            goto label_2deab4;
        }
    }
    ctx->pc = 0x2DEA9Cu;
label_2dea9c:
    // 0x2dea9c: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x2dea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2deaa0:
    // 0x2deaa0: 0xc0b7d14  jal         func_2DF450
label_2deaa4:
    if (ctx->pc == 0x2DEAA4u) {
        ctx->pc = 0x2DEAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAA0u;
        // 0x2deaa4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEAA8u;
        goto label_2deaa8;
    }
    ctx->pc = 0x2DEAA0u;
    SET_GPR_U32(ctx, 31, 0x2DEAA8u);
    ctx->pc = 0x2DEAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEAA0u;
    // 0x2deaa4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF450u, 0x2DEAA0u, 0x2DEAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEAA8u;
label_2deaa8:
    // 0x2deaa8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2deaac:
    if (ctx->pc == 0x2DEAACu) {
        ctx->pc = 0x2DEAB0u;
        goto label_2deab0;
    }
    ctx->pc = 0x2DEAA8u;
    {
        const bool branch_taken_0x2deaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2deaa8) {
            ctx->pc = 0x2DEAB4u;
            goto label_2deab4;
        }
    }
    ctx->pc = 0x2DEAB0u;
label_2deab0:
    // 0x2deab0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2deab0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2deab4:
    // 0x2deab4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_2deab8:
    if (ctx->pc == 0x2DEAB8u) {
        ctx->pc = 0x2DEABCu;
        goto label_2deabc;
    }
    ctx->pc = 0x2DEAB4u;
    {
        const bool branch_taken_0x2deab4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deab4) {
            ctx->pc = 0x2DEAC4u;
            goto label_2deac4;
        }
    }
    ctx->pc = 0x2DEABCu;
label_2deabc:
    // 0x2deabc: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
label_2deac0:
    if (ctx->pc == 0x2DEAC0u) {
        ctx->pc = 0x2DEAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEABCu;
        // 0x2deac0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEAC4u;
        goto label_2deac4;
    }
    ctx->pc = 0x2DEABCu;
    {
        const bool branch_taken_0x2deabc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEABCu;
        // 0x2deac0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deabc) {
            ctx->pc = 0x2DEAD0u;
            goto label_2dead0;
        }
    }
    ctx->pc = 0x2DEAC4u;
label_2deac4:
    // 0x2deac4: 0x16e00009  bnez        $s7, . + 4 + (0x9 << 2)
label_2deac8:
    if (ctx->pc == 0x2DEAC8u) {
        ctx->pc = 0x2DEAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAC4u;
        // 0x2deac8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEACCu;
        goto label_2deacc;
    }
    ctx->pc = 0x2DEAC4u;
    {
        const bool branch_taken_0x2deac4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAC4u;
        // 0x2deac8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deac4) {
            ctx->pc = 0x2DEAECu;
            goto label_2deaec;
        }
    }
    ctx->pc = 0x2DEACCu;
label_2deacc:
    // 0x2deacc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2deaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dead0:
    // 0x2dead0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2dead0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2dead4:
    // 0x2dead4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2dead4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2dead8:
    // 0x2dead8: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x2dead8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_2deadc:
    // 0x2deadc: 0xc0b7096  jal         func_2DC258
label_2deae0:
    if (ctx->pc == 0x2DEAE0u) {
        ctx->pc = 0x2DEAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEADCu;
        // 0x2deae0: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEAE4u;
        goto label_2deae4;
    }
    ctx->pc = 0x2DEADCu;
    SET_GPR_U32(ctx, 31, 0x2DEAE4u);
    ctx->pc = 0x2DEAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEADCu;
    // 0x2deae0: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC258u, 0x2DEADCu, 0x2DEAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEAE4u;
label_2deae4:
    // 0x2deae4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2deae4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2deae8:
    // 0x2deae8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2deae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2deaec:
    // 0x2deaec: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2deaecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_2deaf0:
    // 0x2deaf0: 0x10000061  b           . + 4 + (0x61 << 2)
label_2deaf4:
    if (ctx->pc == 0x2DEAF4u) {
        ctx->pc = 0x2DEAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAF0u;
        // 0x2deaf4: 0xafa40050  sw          $a0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEAF8u;
        goto label_2deaf8;
    }
    ctx->pc = 0x2DEAF0u;
    {
        const bool branch_taken_0x2deaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAF0u;
        // 0x2deaf4: 0xafa40050  sw          $a0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deaf0) {
            ctx->pc = 0x2DEC78u;
            goto label_2dec78;
        }
    }
    ctx->pc = 0x2DEAF8u;
label_2deaf8:
    // 0x2deaf8: 0x5100000a  beql        $t0, $zero, . + 4 + (0xA << 2)
label_2deafc:
    if (ctx->pc == 0x2DEAFCu) {
        ctx->pc = 0x2DEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAF8u;
        // 0x2deafc: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB00u;
        goto label_2deb00;
    }
    ctx->pc = 0x2DEAF8u;
    {
        const bool branch_taken_0x2deaf8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deaf8) {
            ctx->pc = 0x2DEAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEAF8u;
            // 0x2deafc: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEB24u;
            goto label_2deb24;
        }
    }
    ctx->pc = 0x2DEB00u;
label_2deb00:
    // 0x2deb00: 0x9246001c  lbu         $a2, 0x1C($s2)
    ctx->pc = 0x2deb00u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
label_2deb04:
    // 0x2deb04: 0x2cc20009  sltiu       $v0, $a2, 0x9
    ctx->pc = 0x2deb04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_2deb08:
    // 0x2deb08: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2deb0c:
    if (ctx->pc == 0x2DEB0Cu) {
        ctx->pc = 0x2DEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB08u;
        // 0x2deb0c: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB10u;
        goto label_2deb10;
    }
    ctx->pc = 0x2DEB08u;
    {
        const bool branch_taken_0x2deb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2deb08) {
            ctx->pc = 0x2DEB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEB08u;
            // 0x2deb0c: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEB24u;
            goto label_2deb24;
        }
    }
    ctx->pc = 0x2DEB10u;
label_2deb10:
    // 0x2deb10: 0x630c2  srl         $a2, $a2, 3
    ctx->pc = 0x2deb10u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
label_2deb14:
    // 0x2deb14: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2deb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2deb18:
    // 0x2deb18: 0xc0b83ec  jal         func_2E0FB0
label_2deb1c:
    if (ctx->pc == 0x2DEB1Cu) {
        ctx->pc = 0x2DEB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB18u;
        // 0x2deb1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB20u;
        goto label_2deb20;
    }
    ctx->pc = 0x2DEB18u;
    SET_GPR_U32(ctx, 31, 0x2DEB20u);
    ctx->pc = 0x2DEB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEB18u;
    // 0x2deb1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0FB0u, 0x2DEB18u, 0x2DEB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB20u;
label_2deb20:
    // 0x2deb20: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2deb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2deb24:
    // 0x2deb24: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x2deb24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2deb28:
    // 0x2deb28: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2deb28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2deb2c:
    // 0x2deb2c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x2deb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2deb30:
    // 0x2deb30: 0x8c5e0014  lw          $fp, 0x14($v0)
    ctx->pc = 0x2deb30u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2deb34:
    // 0x2deb34: 0x13c0002f  beqz        $fp, . + 4 + (0x2F << 2)
label_2deb38:
    if (ctx->pc == 0x2DEB38u) {
        ctx->pc = 0x2DEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB34u;
        // 0x2deb38: 0x2651002c  addiu       $s1, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB3Cu;
        goto label_2deb3c;
    }
    ctx->pc = 0x2DEB34u;
    {
        const bool branch_taken_0x2deb34 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB34u;
        // 0x2deb38: 0x2651002c  addiu       $s1, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deb34) {
            ctx->pc = 0x2DEBF4u;
            goto label_2debf4;
        }
    }
    ctx->pc = 0x2DEB3Cu;
label_2deb3c:
    // 0x2deb3c: 0xc0b76b0  jal         func_2DDAC0
label_2deb40:
    if (ctx->pc == 0x2DEB40u) {
        ctx->pc = 0x2DEB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB3Cu;
        // 0x2deb40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB44u;
        goto label_2deb44;
    }
    ctx->pc = 0x2DEB3Cu;
    SET_GPR_U32(ctx, 31, 0x2DEB44u);
    ctx->pc = 0x2DEB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEB3Cu;
    // 0x2deb40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDAC0u, 0x2DEB3Cu, 0x2DEB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB44u;
label_2deb44:
    // 0x2deb44: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_2deb48:
    if (ctx->pc == 0x2DEB48u) {
        ctx->pc = 0x2DEB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB44u;
        // 0x2deb48: 0x8fb6004c  lw          $s6, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB4Cu;
        goto label_2deb4c;
    }
    ctx->pc = 0x2DEB44u;
    {
        const bool branch_taken_0x2deb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB44u;
        // 0x2deb48: 0x8fb6004c  lw          $s6, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deb44) {
            ctx->pc = 0x2DEBFCu;
            goto label_2debfc;
        }
    }
    ctx->pc = 0x2DEB4Cu;
label_2deb4c:
    // 0x2deb4c: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x2deb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2deb50:
    // 0x2deb50: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2deb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2deb54:
    // 0x2deb54: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2deb54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2deb58:
    // 0x2deb58: 0x6a490017  ldl         $t1, 0x17($s2)
    ctx->pc = 0x2deb58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_2deb5c:
    // 0x2deb5c: 0x6e490010  ldr         $t1, 0x10($s2)
    ctx->pc = 0x2deb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2deb60:
    // 0x2deb60: 0x6a42001f  ldl         $v0, 0x1F($s2)
    ctx->pc = 0x2deb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2deb64:
    // 0x2deb64: 0x6e420018  ldr         $v0, 0x18($s2)
    ctx->pc = 0x2deb64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2deb68:
    // 0x2deb68: 0x6a430027  ldl         $v1, 0x27($s2)
    ctx->pc = 0x2deb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2deb6c:
    // 0x2deb6c: 0x6e430020  ldr         $v1, 0x20($s2)
    ctx->pc = 0x2deb6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2deb70:
    // 0x2deb70: 0x8e480028  lw          $t0, 0x28($s2)
    ctx->pc = 0x2deb70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2deb74:
    // 0x2deb74: 0xb3a90027  sdl         $t1, 0x27($sp)
    ctx->pc = 0x2deb74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2deb78:
    // 0x2deb78: 0xb7a90020  sdr         $t1, 0x20($sp)
    ctx->pc = 0x2deb78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2deb7c:
    // 0x2deb7c: 0xb3a2002f  sdl         $v0, 0x2F($sp)
    ctx->pc = 0x2deb7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2deb80:
    // 0x2deb80: 0xb7a20028  sdr         $v0, 0x28($sp)
    ctx->pc = 0x2deb80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2deb84:
    // 0x2deb84: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x2deb84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2deb88:
    // 0x2deb88: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x2deb88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2deb8c:
    // 0x2deb8c: 0xafa80038  sw          $t0, 0x38($sp)
    ctx->pc = 0x2deb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
label_2deb90:
    // 0x2deb90: 0xc0b9f68  jal         func_2E7DA0
label_2deb94:
    if (ctx->pc == 0x2DEB94u) {
        ctx->pc = 0x2DEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB90u;
        // 0x2deb94: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB98u;
        goto label_2deb98;
    }
    ctx->pc = 0x2DEB90u;
    SET_GPR_U32(ctx, 31, 0x2DEB98u);
    ctx->pc = 0x2DEB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEB90u;
    // 0x2deb94: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7DA0u, 0x2DEB90u, 0x2DEB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB98u;
label_2deb98:
    // 0x2deb98: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2deb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2deb9c:
    // 0x2deb9c: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x2deb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
label_2deba0:
    // 0x2deba0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2deba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2deba4:
    // 0x2deba4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2deba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2deba8:
    // 0x2deba8: 0xc0b9f74  jal         func_2E7DD0
label_2debac:
    if (ctx->pc == 0x2DEBACu) {
        ctx->pc = 0x2DEBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBA8u;
        // 0x2debac: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEBB0u;
        goto label_2debb0;
    }
    ctx->pc = 0x2DEBA8u;
    SET_GPR_U32(ctx, 31, 0x2DEBB0u);
    ctx->pc = 0x2DEBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEBA8u;
    // 0x2debac: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7DD0u, 0x2DEBA8u, 0x2DEBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEBB0u;
label_2debb0:
    // 0x2debb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2debb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2debb4:
    // 0x2debb4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2debb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2debb8:
    // 0x2debb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2debb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2debbc:
    // 0x2debbc: 0xc0b7096  jal         func_2DC258
label_2debc0:
    if (ctx->pc == 0x2DEBC0u) {
        ctx->pc = 0x2DEBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBBCu;
        // 0x2debc0: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEBC4u;
        goto label_2debc4;
    }
    ctx->pc = 0x2DEBBCu;
    SET_GPR_U32(ctx, 31, 0x2DEBC4u);
    ctx->pc = 0x2DEBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEBBCu;
    // 0x2debc0: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC258u, 0x2DEBBCu, 0x2DEBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEBC4u;
label_2debc4:
    // 0x2debc4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2debc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2debc8:
    // 0x2debc8: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_2debcc:
    if (ctx->pc == 0x2DEBCCu) {
        ctx->pc = 0x2DEBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBC8u;
        // 0x2debcc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEBD0u;
        goto label_2debd0;
    }
    ctx->pc = 0x2DEBC8u;
    {
        const bool branch_taken_0x2debc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBC8u;
        // 0x2debcc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2debc8) {
            ctx->pc = 0x2DEBF4u;
            goto label_2debf4;
        }
    }
    ctx->pc = 0x2DEBD0u;
label_2debd0:
    // 0x2debd0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2debd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2debd4:
    // 0x2debd4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2debd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2debd8:
    // 0x2debd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2debd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2debdc:
    // 0x2debdc: 0xc0b92ba  jal         func_2E4AE8
label_2debe0:
    if (ctx->pc == 0x2DEBE0u) {
        ctx->pc = 0x2DEBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBDCu;
        // 0x2debe0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEBE4u;
        goto label_2debe4;
    }
    ctx->pc = 0x2DEBDCu;
    SET_GPR_U32(ctx, 31, 0x2DEBE4u);
    ctx->pc = 0x2DEBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEBDCu;
    // 0x2debe0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4AE8u, 0x2DEBDCu, 0x2DEBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEBE4u;
label_2debe4:
    // 0x2debe4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2debe8:
    if (ctx->pc == 0x2DEBE8u) {
        ctx->pc = 0x2DEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBE4u;
        // 0x2debe8: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEBECu;
        goto label_2debec;
    }
    ctx->pc = 0x2DEBE4u;
    {
        const bool branch_taken_0x2debe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBE4u;
        // 0x2debe8: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2debe4) {
            ctx->pc = 0x2DEC00u;
            goto label_2dec00;
        }
    }
    ctx->pc = 0x2DEBECu;
label_2debec:
    // 0x2debec: 0xc0b70a6  jal         func_2DC298
label_2debf0:
    if (ctx->pc == 0x2DEBF0u) {
        ctx->pc = 0x2DEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBECu;
        // 0x2debf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEBF4u;
        goto label_2debf4;
    }
    ctx->pc = 0x2DEBECu;
    SET_GPR_U32(ctx, 31, 0x2DEBF4u);
    ctx->pc = 0x2DEBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEBECu;
    // 0x2debf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC298u, 0x2DEBECu, 0x2DEBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEBF4u;
label_2debf4:
    // 0x2debf4: 0x10000011  b           . + 4 + (0x11 << 2)
label_2debf8:
    if (ctx->pc == 0x2DEBF8u) {
        ctx->pc = 0x2DEBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBF4u;
        // 0x2debf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEBFCu;
        goto label_2debfc;
    }
    ctx->pc = 0x2DEBF4u;
    {
        const bool branch_taken_0x2debf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBF4u;
        // 0x2debf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2debf4) {
            ctx->pc = 0x2DEC3Cu;
            goto label_2dec3c;
        }
    }
    ctx->pc = 0x2DEBFCu;
label_2debfc:
    // 0x2debfc: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2debfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dec00:
    // 0x2dec00: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2dec00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dec04:
    // 0x2dec04: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2dec04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2dec08:
    // 0x2dec08: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2dec08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2dec0c:
    // 0x2dec0c: 0x3c0f809  jalr        $fp
label_2dec10:
    if (ctx->pc == 0x2DEC10u) {
        ctx->pc = 0x2DEC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC0Cu;
        // 0x2dec10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC14u;
        goto label_2dec14;
    }
    ctx->pc = 0x2DEC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2DEC14u);
        ctx->pc = 0x2DEC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC0Cu;
        // 0x2dec10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEC0Cu, 0x2DEC14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DEC14u;
label_2dec14:
    // 0x2dec14: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_2dec18:
    if (ctx->pc == 0x2DEC18u) {
        ctx->pc = 0x2DEC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC14u;
        // 0x2dec18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC1Cu;
        goto label_2dec1c;
    }
    ctx->pc = 0x2DEC14u;
    {
        const bool branch_taken_0x2dec14 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC14u;
        // 0x2dec18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec14) {
            ctx->pc = 0x2DEC38u;
            goto label_2dec38;
        }
    }
    ctx->pc = 0x2DEC1Cu;
label_2dec1c:
    // 0x2dec1c: 0x0  nop
    ctx->pc = 0x2dec1cu;
    // NOP
label_2dec20:
    // 0x2dec20: 0xc0b7c7e  jal         func_2DF1F8
label_2dec24:
    if (ctx->pc == 0x2DEC24u) {
        ctx->pc = 0x2DEC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC20u;
        // 0x2dec24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC28u;
        goto label_2dec28;
    }
    ctx->pc = 0x2DEC20u;
    SET_GPR_U32(ctx, 31, 0x2DEC28u);
    ctx->pc = 0x2DEC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEC20u;
    // 0x2dec24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1F8u, 0x2DEC20u, 0x2DEC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEC28u;
label_2dec28:
    // 0x2dec28: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
label_2dec2c:
    if (ctx->pc == 0x2DEC2Cu) {
        ctx->pc = 0x2DEC30u;
        goto label_2dec30;
    }
    ctx->pc = 0x2DEC28u;
    {
        const bool branch_taken_0x2dec28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dec28) {
            ctx->pc = 0x2DEC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dec20;
        }
    }
    ctx->pc = 0x2DEC30u;
label_2dec30:
    // 0x2dec30: 0xc0b70a6  jal         func_2DC298
label_2dec34:
    if (ctx->pc == 0x2DEC34u) {
        ctx->pc = 0x2DEC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC30u;
        // 0x2dec34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC38u;
        goto label_2dec38;
    }
    ctx->pc = 0x2DEC30u;
    SET_GPR_U32(ctx, 31, 0x2DEC38u);
    ctx->pc = 0x2DEC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEC30u;
    // 0x2dec34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC298u, 0x2DEC30u, 0x2DEC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEC38u;
label_2dec38:
    // 0x2dec38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dec38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dec3c:
    // 0x2dec3c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_2dec40:
    if (ctx->pc == 0x2DEC40u) {
        ctx->pc = 0x2DEC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC3Cu;
        // 0x2dec40: 0x8fa9004c  lw          $t1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC44u;
        goto label_2dec44;
    }
    ctx->pc = 0x2DEC3Cu;
    {
        const bool branch_taken_0x2dec3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC3Cu;
        // 0x2dec40: 0x8fa9004c  lw          $t1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec3c) {
            ctx->pc = 0x2DECC8u;
            goto label_2decc8;
        }
    }
    ctx->pc = 0x2DEC44u;
label_2dec44:
    // 0x2dec44: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2dec44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dec48:
    // 0x2dec48: 0x1338021  addu        $s0, $t1, $s3
    ctx->pc = 0x2dec48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
label_2dec4c:
    // 0x2dec4c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2dec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2dec50:
    // 0x2dec50: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2dec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2dec54:
    // 0x2dec54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2dec58:
    if (ctx->pc == 0x2DEC58u) {
        ctx->pc = 0x2DEC5Cu;
        goto label_2dec5c;
    }
    ctx->pc = 0x2DEC54u;
    {
        const bool branch_taken_0x2dec54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dec54) {
            ctx->pc = 0x2DEC64u;
            goto label_2dec64;
        }
    }
    ctx->pc = 0x2DEC5Cu;
label_2dec5c:
    // 0x2dec5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2dec60:
    if (ctx->pc == 0x2DEC60u) {
        ctx->pc = 0x2DEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC5Cu;
        // 0x2dec60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC64u;
        goto label_2dec64;
    }
    ctx->pc = 0x2DEC5Cu;
    {
        const bool branch_taken_0x2dec5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC5Cu;
        // 0x2dec60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec5c) {
            ctx->pc = 0x2DEC6Cu;
            goto label_2dec6c;
        }
    }
    ctx->pc = 0x2DEC64u;
label_2dec64:
    // 0x2dec64: 0x40f809  jalr        $v0
label_2dec68:
    if (ctx->pc == 0x2DEC68u) {
        ctx->pc = 0x2DEC6Cu;
        goto label_2dec6c;
    }
    ctx->pc = 0x2DEC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DEC6Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEC64u, 0x2DEC6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DEC6Cu;
label_2dec6c:
    // 0x2dec6c: 0x5051fff8  beql        $v0, $s1, . + 4 + (-0x8 << 2)
    if (std::getenv("SHO_DIAG_CALLBACK") != nullptr) {
        static uint64_t callbackDiagCount = 0;
        if ((callbackDiagCount++ % 100000u) == 0u) {
            const uint32_t callbackNode = READ32(ADD32(GPR_U32(ctx, 18), 12));
            const uint32_t callbackTarget = callbackNode == 0 ? 0 : READ32(ADD32(callbackNode, 28));
            const uint32_t callbackPhase = READ32(ADD32(GPR_U32(ctx, 28), 4294937712));
            const uint32_t callbackQueue = READ32(ADD32(GPR_U32(ctx, 28), 4294937716));
            const uint32_t callbackWorkState = READ32(ADD32(GPR_U32(ctx, 28), 4294938736));
            std::fprintf(stderr,
                         "[sho:callback-wait] count=%llu pc=0x%08x s2=0x%08x node=0x%08x target=0x%08x result=0x%08x expected=0x%08x s3=0x%08x s4=0x%08x s5=0x%08x s6=0x%08x done=0x%08x queued=0x%08x work=0x%08x\n",
                         static_cast<unsigned long long>(callbackDiagCount), ctx->pc,
                         GPR_U32(ctx, 18), callbackNode, callbackTarget, GPR_U32(ctx, 2),
                         GPR_U32(ctx, 17), GPR_U32(ctx, 19), GPR_U32(ctx, 20),
                         GPR_U32(ctx, 21), GPR_U32(ctx, 22), callbackPhase, callbackQueue, callbackWorkState);
            std::fprintf(stderr,
                         "[sho:callback-state] s2={%08x,%08x,%08x,%08x,%08x,%08x,%08x,%08x} node={%08x,%08x,%08x,%08x,%08x,%08x,%08x,%08x}\n",
                         READ32(ADD32(GPR_U32(ctx, 18), 0)), READ32(ADD32(GPR_U32(ctx, 18), 4)),
                         READ32(ADD32(GPR_U32(ctx, 18), 8)), READ32(ADD32(GPR_U32(ctx, 18), 12)),
                         READ32(ADD32(GPR_U32(ctx, 18), 16)), READ32(ADD32(GPR_U32(ctx, 18), 20)),
                         READ32(ADD32(GPR_U32(ctx, 18), 24)), READ32(ADD32(GPR_U32(ctx, 18), 28)),
                         READ32(ADD32(callbackNode, 0)), READ32(ADD32(callbackNode, 4)),
                         READ32(ADD32(callbackNode, 8)), READ32(ADD32(callbackNode, 12)),
                         READ32(ADD32(callbackNode, 16)), READ32(ADD32(callbackNode, 20)),
                         READ32(ADD32(callbackNode, 24)), READ32(ADD32(callbackNode, 28)));
            if ((callbackDiagCount % 1000000u) == 1u) {
                const EeKernelSnapshot kernel = runtime->eeScheduler().snapshot();
                std::fprintf(stderr, "[sho:kernel] seq=%llu running=%d threads=%zu semas=%zu flags=%zu\n",
                             static_cast<unsigned long long>(kernel.sequence), kernel.runningThreadId,
                             kernel.threads.size(), kernel.semaphores.size(), kernel.eventFlags.size());
                for (const EeThreadSnapshot &thread : kernel.threads) {
                    std::fprintf(stderr, "[sho:thread] id=%d status=%u wait=%u waitId=%d pc=0x%08x entry=0x%08x\n",
                                 thread.id, static_cast<unsigned>(thread.status),
                                 static_cast<unsigned>(thread.waitReason), thread.waitId, thread.pc, thread.entry);
                }
                for (const EeSemaphoreSnapshot &sema : kernel.semaphores) {
                    if (sema.waiters != 0u || sema.count == 0) {
                        std::fprintf(stderr, "[sho:sema] id=%d count=%d max=%d waiters=%u\n",
                                     sema.id, sema.count, sema.maxCount, sema.waiters);
                    }
                }
            }
        }
    }
label_2dec70:
    if (ctx->pc == 0x2DEC70u) {
        ctx->pc = 0x2DEC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC6Cu;
        // 0x2dec70: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC74u;
        goto label_2dec74;
    }
    ctx->pc = 0x2DEC6Cu;
    {
        const bool branch_taken_0x2dec6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2dec6c) {
            ctx->pc = 0x2DEC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEC6Cu;
            // 0x2dec70: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dec50;
        }
    }
    ctx->pc = 0x2DEC74u;
label_2dec74:
    if (std::getenv("SHO_DIAG_CALLBACK") != nullptr) {
        static uint64_t callbackExitCount = 0;
        if (callbackExitCount < 128u) {
            ++callbackExitCount;
            std::fprintf(stderr,
                         "[sho:callback-exit] count=%llu pc=0x%08x s2=0x%08x s3=0x%08x s0=0x%08x s1=0x%08x v0=0x%08x done=0x%08x queued=0x%08x work=0x%08x\n",
                         static_cast<unsigned long long>(callbackExitCount), ctx->pc,
                         GPR_U32(ctx, 18), GPR_U32(ctx, 19), GPR_U32(ctx, 16), GPR_U32(ctx, 17),
                         GPR_U32(ctx, 2), READ32(ADD32(GPR_U32(ctx, 28), 4294937712)),
                         READ32(ADD32(GPR_U32(ctx, 28), 4294937716)),
                         READ32(ADD32(GPR_U32(ctx, 28), 4294938736)));
        }
    }
    // 0x2dec74: 0xafb0004c  sw          $s0, 0x4C($sp)
    ctx->pc = 0x2dec74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 16));
label_2dec78:
    // 0x2dec78: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2dec78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2dec7c:
    // 0x2dec7c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2dec7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2dec80:
    // 0x2dec80: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2dec80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2dec84:
    // 0x2dec84: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2dec88:
    if (ctx->pc == 0x2DEC88u) {
        ctx->pc = 0x2DEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC84u;
        // 0x2dec88: 0x8fa80044  lw          $t0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC8Cu;
        goto label_2dec8c;
    }
    ctx->pc = 0x2DEC84u;
    {
        const bool branch_taken_0x2dec84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC84u;
        // 0x2dec88: 0x8fa80044  lw          $t0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec84) {
            ctx->pc = 0x2DECC8u;
            goto label_2decc8;
        }
    }
    ctx->pc = 0x2DEC8Cu;
label_2dec8c:
    // 0x2dec8c: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
label_2dec90:
    if (ctx->pc == 0x2DEC90u) {
        ctx->pc = 0x2DEC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC8Cu;
        // 0x2dec90: 0x8fb30004  lw          $s3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC94u;
        goto label_2dec94;
    }
    ctx->pc = 0x2DEC8Cu;
    {
        const bool branch_taken_0x2dec8c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC8Cu;
        // 0x2dec90: 0x8fb30004  lw          $s3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec8c) {
            ctx->pc = 0x2DECB0u;
            goto label_2decb0;
        }
    }
    ctx->pc = 0x2DEC94u;
label_2dec94:
    // 0x2dec94: 0x8fa90050  lw          $t1, 0x50($sp)
    ctx->pc = 0x2dec94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2dec98:
    // 0x2dec98: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2dec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2dec9c:
    // 0x2dec9c: 0x8f938bd4  lw          $s3, -0x742C($gp)
    ctx->pc = 0x2dec9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937556)));
label_2deca0:
    // 0x2deca0: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x2deca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_2deca4:
    // 0x2deca4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2deca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2deca8:
    // 0x2deca8: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x2deca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2decac:
    // 0x2decac: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x2decacu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_2decb0:
    // 0x2decb0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2decb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2decb4:
    // 0x2decb4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2decb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2decb8:
    // 0x2decb8: 0xc093546  jal         func_24D518
label_2decbc:
    if (ctx->pc == 0x2DECBCu) {
        ctx->pc = 0x2DECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DECB8u;
        // 0x2decbc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DECC0u;
        goto label_2decc0;
    }
    ctx->pc = 0x2DECB8u;
    SET_GPR_U32(ctx, 31, 0x2DECC0u);
    ctx->pc = 0x2DECBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DECB8u;
    // 0x2decbc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D518u, 0x2DECB8u, 0x2DECC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DECC0u;
label_2decc0:
    // 0x2decc0: 0x1262ff8d  beq         $s3, $v0, . + 4 + (-0x73 << 2)
label_2decc4:
    if (ctx->pc == 0x2DECC4u) {
        ctx->pc = 0x2DECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DECC0u;
        // 0x2decc4: 0x8fa80048  lw          $t0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DECC8u;
        goto label_2decc8;
    }
    ctx->pc = 0x2DECC0u;
    {
        const bool branch_taken_0x2decc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DECC0u;
        // 0x2decc4: 0x8fa80048  lw          $t0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2decc0) {
            ctx->pc = 0x2DEAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2deaf8;
        }
    }
    ctx->pc = 0x2DECC8u;
label_2decc8:
    // 0x2decc8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2decc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2deccc:
    // 0x2deccc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2decd0:
    if (ctx->pc == 0x2DECD0u) {
        ctx->pc = 0x2DECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DECCCu;
        // 0x2decd0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DECD4u;
        goto label_2decd4;
    }
    ctx->pc = 0x2DECCCu;
    {
        const bool branch_taken_0x2deccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DECCCu;
        // 0x2decd0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deccc) {
            ctx->pc = 0x2DECE0u;
            goto label_2dece0;
        }
    }
    ctx->pc = 0x2DECD4u;
label_2decd4:
    // 0x2decd4: 0xc0b70a6  jal         func_2DC298
label_2decd8:
    if (ctx->pc == 0x2DECD8u) {
        ctx->pc = 0x2DECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DECD4u;
        // 0x2decd8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DECDCu;
        goto label_2decdc;
    }
    ctx->pc = 0x2DECD4u;
    SET_GPR_U32(ctx, 31, 0x2DECDCu);
    ctx->pc = 0x2DECD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DECD4u;
    // 0x2decd8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC298u, 0x2DECD4u, 0x2DECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DECDCu;
label_2decdc:
    // 0x2decdc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2decdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dece0:
    // 0x2dece0: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2dece0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2dece4:
    // 0x2dece4: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2dece4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2dece8:
    // 0x2dece8: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2dece8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2decec:
    // 0x2decec: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2dececu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2decf0:
    // 0x2decf0: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2decf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2decf4:
    // 0x2decf4: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2decf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2decf8:
    // 0x2decf8: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2decf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2decfc:
    // 0x2decfc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2decfcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ded00:
    // 0x2ded00: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x2ded00u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ded04:
    // 0x2ded04: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ded04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ded08:
    // 0x2ded08: 0x3e00008  jr          $ra
label_2ded0c:
    if (ctx->pc == 0x2DED0Cu) {
        ctx->pc = 0x2DED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED08u;
        // 0x2ded0c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DED10u;
        goto label_2ded10;
    }
    ctx->pc = 0x2DED08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED08u;
        // 0x2ded0c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DED08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DED10u;
label_2ded10:
    // 0x2ded10: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2ded10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2ded14:
    // 0x2ded14: 0x0  nop
    ctx->pc = 0x2ded14u;
    // NOP
    ctx->pc = 0x2ded18u;
}
