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

// Function: sub_00104D18
// Address: 0x104d18 - 0x105388
void sub_00104D18_0x104d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104D18_0x104d18");
#endif

    switch (ctx->pc) {
        case 0x104d18u: goto label_104d18;
        case 0x104d1cu: goto label_104d1c;
        case 0x104d20u: goto label_104d20;
        case 0x104d24u: goto label_104d24;
        case 0x104d28u: goto label_104d28;
        case 0x104d2cu: goto label_104d2c;
        case 0x104d30u: goto label_104d30;
        case 0x104d34u: goto label_104d34;
        case 0x104d38u: goto label_104d38;
        case 0x104d3cu: goto label_104d3c;
        case 0x104d40u: goto label_104d40;
        case 0x104d44u: goto label_104d44;
        case 0x104d48u: goto label_104d48;
        case 0x104d4cu: goto label_104d4c;
        case 0x104d50u: goto label_104d50;
        case 0x104d54u: goto label_104d54;
        case 0x104d58u: goto label_104d58;
        case 0x104d5cu: goto label_104d5c;
        case 0x104d60u: goto label_104d60;
        case 0x104d64u: goto label_104d64;
        case 0x104d68u: goto label_104d68;
        case 0x104d6cu: goto label_104d6c;
        case 0x104d70u: goto label_104d70;
        case 0x104d74u: goto label_104d74;
        case 0x104d78u: goto label_104d78;
        case 0x104d7cu: goto label_104d7c;
        case 0x104d80u: goto label_104d80;
        case 0x104d84u: goto label_104d84;
        case 0x104d88u: goto label_104d88;
        case 0x104d8cu: goto label_104d8c;
        case 0x104d90u: goto label_104d90;
        case 0x104d94u: goto label_104d94;
        case 0x104d98u: goto label_104d98;
        case 0x104d9cu: goto label_104d9c;
        case 0x104da0u: goto label_104da0;
        case 0x104da4u: goto label_104da4;
        case 0x104da8u: goto label_104da8;
        case 0x104dacu: goto label_104dac;
        case 0x104db0u: goto label_104db0;
        case 0x104db4u: goto label_104db4;
        case 0x104db8u: goto label_104db8;
        case 0x104dbcu: goto label_104dbc;
        case 0x104dc0u: goto label_104dc0;
        case 0x104dc4u: goto label_104dc4;
        case 0x104dc8u: goto label_104dc8;
        case 0x104dccu: goto label_104dcc;
        case 0x104dd0u: goto label_104dd0;
        case 0x104dd4u: goto label_104dd4;
        case 0x104dd8u: goto label_104dd8;
        case 0x104ddcu: goto label_104ddc;
        case 0x104de0u: goto label_104de0;
        case 0x104de4u: goto label_104de4;
        case 0x104de8u: goto label_104de8;
        case 0x104decu: goto label_104dec;
        case 0x104df0u: goto label_104df0;
        case 0x104df4u: goto label_104df4;
        case 0x104df8u: goto label_104df8;
        case 0x104dfcu: goto label_104dfc;
        case 0x104e00u: goto label_104e00;
        case 0x104e04u: goto label_104e04;
        case 0x104e08u: goto label_104e08;
        case 0x104e0cu: goto label_104e0c;
        case 0x104e10u: goto label_104e10;
        case 0x104e14u: goto label_104e14;
        case 0x104e18u: goto label_104e18;
        case 0x104e1cu: goto label_104e1c;
        case 0x104e20u: goto label_104e20;
        case 0x104e24u: goto label_104e24;
        case 0x104e28u: goto label_104e28;
        case 0x104e2cu: goto label_104e2c;
        case 0x104e30u: goto label_104e30;
        case 0x104e34u: goto label_104e34;
        case 0x104e38u: goto label_104e38;
        case 0x104e3cu: goto label_104e3c;
        case 0x104e40u: goto label_104e40;
        case 0x104e44u: goto label_104e44;
        case 0x104e48u: goto label_104e48;
        case 0x104e4cu: goto label_104e4c;
        case 0x104e50u: goto label_104e50;
        case 0x104e54u: goto label_104e54;
        case 0x104e58u: goto label_104e58;
        case 0x104e5cu: goto label_104e5c;
        case 0x104e60u: goto label_104e60;
        case 0x104e64u: goto label_104e64;
        case 0x104e68u: goto label_104e68;
        case 0x104e6cu: goto label_104e6c;
        case 0x104e70u: goto label_104e70;
        case 0x104e74u: goto label_104e74;
        case 0x104e78u: goto label_104e78;
        case 0x104e7cu: goto label_104e7c;
        case 0x104e80u: goto label_104e80;
        case 0x104e84u: goto label_104e84;
        case 0x104e88u: goto label_104e88;
        case 0x104e8cu: goto label_104e8c;
        case 0x104e90u: goto label_104e90;
        case 0x104e94u: goto label_104e94;
        case 0x104e98u: goto label_104e98;
        case 0x104e9cu: goto label_104e9c;
        case 0x104ea0u: goto label_104ea0;
        case 0x104ea4u: goto label_104ea4;
        case 0x104ea8u: goto label_104ea8;
        case 0x104eacu: goto label_104eac;
        case 0x104eb0u: goto label_104eb0;
        case 0x104eb4u: goto label_104eb4;
        case 0x104eb8u: goto label_104eb8;
        case 0x104ebcu: goto label_104ebc;
        case 0x104ec0u: goto label_104ec0;
        case 0x104ec4u: goto label_104ec4;
        case 0x104ec8u: goto label_104ec8;
        case 0x104eccu: goto label_104ecc;
        case 0x104ed0u: goto label_104ed0;
        case 0x104ed4u: goto label_104ed4;
        case 0x104ed8u: goto label_104ed8;
        case 0x104edcu: goto label_104edc;
        case 0x104ee0u: goto label_104ee0;
        case 0x104ee4u: goto label_104ee4;
        case 0x104ee8u: goto label_104ee8;
        case 0x104eecu: goto label_104eec;
        case 0x104ef0u: goto label_104ef0;
        case 0x104ef4u: goto label_104ef4;
        case 0x104ef8u: goto label_104ef8;
        case 0x104efcu: goto label_104efc;
        case 0x104f00u: goto label_104f00;
        case 0x104f04u: goto label_104f04;
        case 0x104f08u: goto label_104f08;
        case 0x104f0cu: goto label_104f0c;
        case 0x104f10u: goto label_104f10;
        case 0x104f14u: goto label_104f14;
        case 0x104f18u: goto label_104f18;
        case 0x104f1cu: goto label_104f1c;
        case 0x104f20u: goto label_104f20;
        case 0x104f24u: goto label_104f24;
        case 0x104f28u: goto label_104f28;
        case 0x104f2cu: goto label_104f2c;
        case 0x104f30u: goto label_104f30;
        case 0x104f34u: goto label_104f34;
        case 0x104f38u: goto label_104f38;
        case 0x104f3cu: goto label_104f3c;
        case 0x104f40u: goto label_104f40;
        case 0x104f44u: goto label_104f44;
        case 0x104f48u: goto label_104f48;
        case 0x104f4cu: goto label_104f4c;
        case 0x104f50u: goto label_104f50;
        case 0x104f54u: goto label_104f54;
        case 0x104f58u: goto label_104f58;
        case 0x104f5cu: goto label_104f5c;
        case 0x104f60u: goto label_104f60;
        case 0x104f64u: goto label_104f64;
        case 0x104f68u: goto label_104f68;
        case 0x104f6cu: goto label_104f6c;
        case 0x104f70u: goto label_104f70;
        case 0x104f74u: goto label_104f74;
        case 0x104f78u: goto label_104f78;
        case 0x104f7cu: goto label_104f7c;
        case 0x104f80u: goto label_104f80;
        case 0x104f84u: goto label_104f84;
        case 0x104f88u: goto label_104f88;
        case 0x104f8cu: goto label_104f8c;
        case 0x104f90u: goto label_104f90;
        case 0x104f94u: goto label_104f94;
        case 0x104f98u: goto label_104f98;
        case 0x104f9cu: goto label_104f9c;
        case 0x104fa0u: goto label_104fa0;
        case 0x104fa4u: goto label_104fa4;
        case 0x104fa8u: goto label_104fa8;
        case 0x104facu: goto label_104fac;
        case 0x104fb0u: goto label_104fb0;
        case 0x104fb4u: goto label_104fb4;
        case 0x104fb8u: goto label_104fb8;
        case 0x104fbcu: goto label_104fbc;
        case 0x104fc0u: goto label_104fc0;
        case 0x104fc4u: goto label_104fc4;
        case 0x104fc8u: goto label_104fc8;
        case 0x104fccu: goto label_104fcc;
        case 0x104fd0u: goto label_104fd0;
        case 0x104fd4u: goto label_104fd4;
        case 0x104fd8u: goto label_104fd8;
        case 0x104fdcu: goto label_104fdc;
        case 0x104fe0u: goto label_104fe0;
        case 0x104fe4u: goto label_104fe4;
        case 0x104fe8u: goto label_104fe8;
        case 0x104fecu: goto label_104fec;
        case 0x104ff0u: goto label_104ff0;
        case 0x104ff4u: goto label_104ff4;
        case 0x104ff8u: goto label_104ff8;
        case 0x104ffcu: goto label_104ffc;
        case 0x105000u: goto label_105000;
        case 0x105004u: goto label_105004;
        case 0x105008u: goto label_105008;
        case 0x10500cu: goto label_10500c;
        case 0x105010u: goto label_105010;
        case 0x105014u: goto label_105014;
        case 0x105018u: goto label_105018;
        case 0x10501cu: goto label_10501c;
        case 0x105020u: goto label_105020;
        case 0x105024u: goto label_105024;
        case 0x105028u: goto label_105028;
        case 0x10502cu: goto label_10502c;
        case 0x105030u: goto label_105030;
        case 0x105034u: goto label_105034;
        case 0x105038u: goto label_105038;
        case 0x10503cu: goto label_10503c;
        case 0x105040u: goto label_105040;
        case 0x105044u: goto label_105044;
        case 0x105048u: goto label_105048;
        case 0x10504cu: goto label_10504c;
        case 0x105050u: goto label_105050;
        case 0x105054u: goto label_105054;
        case 0x105058u: goto label_105058;
        case 0x10505cu: goto label_10505c;
        case 0x105060u: goto label_105060;
        case 0x105064u: goto label_105064;
        case 0x105068u: goto label_105068;
        case 0x10506cu: goto label_10506c;
        case 0x105070u: goto label_105070;
        case 0x105074u: goto label_105074;
        case 0x105078u: goto label_105078;
        case 0x10507cu: goto label_10507c;
        case 0x105080u: goto label_105080;
        case 0x105084u: goto label_105084;
        case 0x105088u: goto label_105088;
        case 0x10508cu: goto label_10508c;
        case 0x105090u: goto label_105090;
        case 0x105094u: goto label_105094;
        case 0x105098u: goto label_105098;
        case 0x10509cu: goto label_10509c;
        case 0x1050a0u: goto label_1050a0;
        case 0x1050a4u: goto label_1050a4;
        case 0x1050a8u: goto label_1050a8;
        case 0x1050acu: goto label_1050ac;
        case 0x1050b0u: goto label_1050b0;
        case 0x1050b4u: goto label_1050b4;
        case 0x1050b8u: goto label_1050b8;
        case 0x1050bcu: goto label_1050bc;
        case 0x1050c0u: goto label_1050c0;
        case 0x1050c4u: goto label_1050c4;
        case 0x1050c8u: goto label_1050c8;
        case 0x1050ccu: goto label_1050cc;
        case 0x1050d0u: goto label_1050d0;
        case 0x1050d4u: goto label_1050d4;
        case 0x1050d8u: goto label_1050d8;
        case 0x1050dcu: goto label_1050dc;
        case 0x1050e0u: goto label_1050e0;
        case 0x1050e4u: goto label_1050e4;
        case 0x1050e8u: goto label_1050e8;
        case 0x1050ecu: goto label_1050ec;
        case 0x1050f0u: goto label_1050f0;
        case 0x1050f4u: goto label_1050f4;
        case 0x1050f8u: goto label_1050f8;
        case 0x1050fcu: goto label_1050fc;
        case 0x105100u: goto label_105100;
        case 0x105104u: goto label_105104;
        case 0x105108u: goto label_105108;
        case 0x10510cu: goto label_10510c;
        case 0x105110u: goto label_105110;
        case 0x105114u: goto label_105114;
        case 0x105118u: goto label_105118;
        case 0x10511cu: goto label_10511c;
        case 0x105120u: goto label_105120;
        case 0x105124u: goto label_105124;
        case 0x105128u: goto label_105128;
        case 0x10512cu: goto label_10512c;
        case 0x105130u: goto label_105130;
        case 0x105134u: goto label_105134;
        case 0x105138u: goto label_105138;
        case 0x10513cu: goto label_10513c;
        case 0x105140u: goto label_105140;
        case 0x105144u: goto label_105144;
        case 0x105148u: goto label_105148;
        case 0x10514cu: goto label_10514c;
        case 0x105150u: goto label_105150;
        case 0x105154u: goto label_105154;
        case 0x105158u: goto label_105158;
        case 0x10515cu: goto label_10515c;
        case 0x105160u: goto label_105160;
        case 0x105164u: goto label_105164;
        case 0x105168u: goto label_105168;
        case 0x10516cu: goto label_10516c;
        case 0x105170u: goto label_105170;
        case 0x105174u: goto label_105174;
        case 0x105178u: goto label_105178;
        case 0x10517cu: goto label_10517c;
        case 0x105180u: goto label_105180;
        case 0x105184u: goto label_105184;
        case 0x105188u: goto label_105188;
        case 0x10518cu: goto label_10518c;
        case 0x105190u: goto label_105190;
        case 0x105194u: goto label_105194;
        case 0x105198u: goto label_105198;
        case 0x10519cu: goto label_10519c;
        case 0x1051a0u: goto label_1051a0;
        case 0x1051a4u: goto label_1051a4;
        case 0x1051a8u: goto label_1051a8;
        case 0x1051acu: goto label_1051ac;
        case 0x1051b0u: goto label_1051b0;
        case 0x1051b4u: goto label_1051b4;
        case 0x1051b8u: goto label_1051b8;
        case 0x1051bcu: goto label_1051bc;
        case 0x1051c0u: goto label_1051c0;
        case 0x1051c4u: goto label_1051c4;
        case 0x1051c8u: goto label_1051c8;
        case 0x1051ccu: goto label_1051cc;
        case 0x1051d0u: goto label_1051d0;
        case 0x1051d4u: goto label_1051d4;
        case 0x1051d8u: goto label_1051d8;
        case 0x1051dcu: goto label_1051dc;
        case 0x1051e0u: goto label_1051e0;
        case 0x1051e4u: goto label_1051e4;
        case 0x1051e8u: goto label_1051e8;
        case 0x1051ecu: goto label_1051ec;
        case 0x1051f0u: goto label_1051f0;
        case 0x1051f4u: goto label_1051f4;
        case 0x1051f8u: goto label_1051f8;
        case 0x1051fcu: goto label_1051fc;
        case 0x105200u: goto label_105200;
        case 0x105204u: goto label_105204;
        case 0x105208u: goto label_105208;
        case 0x10520cu: goto label_10520c;
        case 0x105210u: goto label_105210;
        case 0x105214u: goto label_105214;
        case 0x105218u: goto label_105218;
        case 0x10521cu: goto label_10521c;
        case 0x105220u: goto label_105220;
        case 0x105224u: goto label_105224;
        case 0x105228u: goto label_105228;
        case 0x10522cu: goto label_10522c;
        case 0x105230u: goto label_105230;
        case 0x105234u: goto label_105234;
        case 0x105238u: goto label_105238;
        case 0x10523cu: goto label_10523c;
        case 0x105240u: goto label_105240;
        case 0x105244u: goto label_105244;
        case 0x105248u: goto label_105248;
        case 0x10524cu: goto label_10524c;
        case 0x105250u: goto label_105250;
        case 0x105254u: goto label_105254;
        case 0x105258u: goto label_105258;
        case 0x10525cu: goto label_10525c;
        case 0x105260u: goto label_105260;
        case 0x105264u: goto label_105264;
        case 0x105268u: goto label_105268;
        case 0x10526cu: goto label_10526c;
        case 0x105270u: goto label_105270;
        case 0x105274u: goto label_105274;
        case 0x105278u: goto label_105278;
        case 0x10527cu: goto label_10527c;
        case 0x105280u: goto label_105280;
        case 0x105284u: goto label_105284;
        case 0x105288u: goto label_105288;
        case 0x10528cu: goto label_10528c;
        case 0x105290u: goto label_105290;
        case 0x105294u: goto label_105294;
        case 0x105298u: goto label_105298;
        case 0x10529cu: goto label_10529c;
        case 0x1052a0u: goto label_1052a0;
        case 0x1052a4u: goto label_1052a4;
        case 0x1052a8u: goto label_1052a8;
        case 0x1052acu: goto label_1052ac;
        case 0x1052b0u: goto label_1052b0;
        case 0x1052b4u: goto label_1052b4;
        case 0x1052b8u: goto label_1052b8;
        case 0x1052bcu: goto label_1052bc;
        case 0x1052c0u: goto label_1052c0;
        case 0x1052c4u: goto label_1052c4;
        case 0x1052c8u: goto label_1052c8;
        case 0x1052ccu: goto label_1052cc;
        case 0x1052d0u: goto label_1052d0;
        case 0x1052d4u: goto label_1052d4;
        case 0x1052d8u: goto label_1052d8;
        case 0x1052dcu: goto label_1052dc;
        case 0x1052e0u: goto label_1052e0;
        case 0x1052e4u: goto label_1052e4;
        case 0x1052e8u: goto label_1052e8;
        case 0x1052ecu: goto label_1052ec;
        case 0x1052f0u: goto label_1052f0;
        case 0x1052f4u: goto label_1052f4;
        case 0x1052f8u: goto label_1052f8;
        case 0x1052fcu: goto label_1052fc;
        case 0x105300u: goto label_105300;
        case 0x105304u: goto label_105304;
        case 0x105308u: goto label_105308;
        case 0x10530cu: goto label_10530c;
        case 0x105310u: goto label_105310;
        case 0x105314u: goto label_105314;
        case 0x105318u: goto label_105318;
        case 0x10531cu: goto label_10531c;
        case 0x105320u: goto label_105320;
        case 0x105324u: goto label_105324;
        case 0x105328u: goto label_105328;
        case 0x10532cu: goto label_10532c;
        case 0x105330u: goto label_105330;
        case 0x105334u: goto label_105334;
        case 0x105338u: goto label_105338;
        case 0x10533cu: goto label_10533c;
        case 0x105340u: goto label_105340;
        case 0x105344u: goto label_105344;
        case 0x105348u: goto label_105348;
        case 0x10534cu: goto label_10534c;
        case 0x105350u: goto label_105350;
        case 0x105354u: goto label_105354;
        case 0x105358u: goto label_105358;
        case 0x10535cu: goto label_10535c;
        case 0x105360u: goto label_105360;
        case 0x105364u: goto label_105364;
        case 0x105368u: goto label_105368;
        case 0x10536cu: goto label_10536c;
        case 0x105370u: goto label_105370;
        case 0x105374u: goto label_105374;
        case 0x105378u: goto label_105378;
        case 0x10537cu: goto label_10537c;
        case 0x105380u: goto label_105380;
        case 0x105384u: goto label_105384;
        default: break;
    }

    ctx->pc = 0x104d18u;

label_104d18:
    // 0x104d18: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x104d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_104d1c:
    // 0x104d1c: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x104d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_104d20:
    // 0x104d20: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x104d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_104d24:
    // 0x104d24: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x104d24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_104d28:
    // 0x104d28: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x104d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_104d2c:
    // 0x104d2c: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x104d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_104d30:
    // 0x104d30: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x104d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_104d34:
    // 0x104d34: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x104d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_104d38:
    // 0x104d38: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x104d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_104d3c:
    // 0x104d3c: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x104d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_104d40:
    // 0x104d40: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x104d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_104d44:
    // 0x104d44: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x104d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_104d48:
    // 0x104d48: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x104d48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_104d4c:
    // 0x104d4c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x104d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_104d50:
    // 0x104d50: 0x1040017f  beqz        $v0, . + 4 + (0x17F << 2)
label_104d54:
    if (ctx->pc == 0x104D54u) {
        ctx->pc = 0x104D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D50u;
        // 0x104d54: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104D58u;
        goto label_104d58;
    }
    ctx->pc = 0x104D50u;
    {
        const bool branch_taken_0x104d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D50u;
        // 0x104d54: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d50) {
            ctx->pc = 0x105350u;
            goto label_105350;
        }
    }
    ctx->pc = 0x104D58u;
label_104d58:
    // 0x104d58: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x104d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_104d5c:
    // 0x104d5c: 0x0  nop
    ctx->pc = 0x104d5cu;
    // NOP
label_104d60:
    // 0x104d60: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x104d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_104d64:
    // 0x104d64: 0x2e21018  mult        $v0, $s7, $v0
    ctx->pc = 0x104d64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_104d68:
    // 0x104d68: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x104d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_104d6c:
    // 0x104d6c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x104d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_104d70:
    // 0x104d70: 0xaea40010  sw          $a0, 0x10($s5)
    ctx->pc = 0x104d70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 4));
label_104d74:
    // 0x104d74: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x104d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_104d78:
    // 0x104d78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x104d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_104d7c:
    // 0x104d7c: 0x50600170  beql        $v1, $zero, . + 4 + (0x170 << 2)
label_104d80:
    if (ctx->pc == 0x104D80u) {
        ctx->pc = 0x104D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D7Cu;
        // 0x104d80: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104D84u;
        goto label_104d84;
    }
    ctx->pc = 0x104D7Cu;
    {
        const bool branch_taken_0x104d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x104d7c) {
            ctx->pc = 0x104D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104D7Cu;
            // 0x104d80: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105340u;
            goto label_105340;
        }
    }
    ctx->pc = 0x104D84u;
label_104d84:
    // 0x104d84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x104d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_104d88:
    // 0x104d88: 0x1040016c  beqz        $v0, . + 4 + (0x16C << 2)
label_104d8c:
    if (ctx->pc == 0x104D8Cu) {
        ctx->pc = 0x104D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D88u;
        // 0x104d8c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104D90u;
        goto label_104d90;
    }
    ctx->pc = 0x104D88u;
    {
        const bool branch_taken_0x104d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D88u;
        // 0x104d8c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d88) {
            ctx->pc = 0x10533Cu;
            goto label_10533c;
        }
    }
    ctx->pc = 0x104D90u;
label_104d90:
    // 0x104d90: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x104d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_104d94:
    // 0x104d94: 0x0  nop
    ctx->pc = 0x104d94u;
    // NOP
label_104d98:
    // 0x104d98: 0x1321c0  sll         $a0, $s3, 7
    ctx->pc = 0x104d98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
label_104d9c:
    // 0x104d9c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x104d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_104da0:
    // 0x104da0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x104da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_104da4:
    // 0x104da4: 0xaea30014  sw          $v1, 0x14($s5)
    ctx->pc = 0x104da4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 3));
label_104da8:
    // 0x104da8: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x104da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_104dac:
    // 0x104dac: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x104dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_104db0:
    // 0x104db0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x104db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_104db4:
    // 0x104db4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_104db8:
    if (ctx->pc == 0x104DB8u) {
        ctx->pc = 0x104DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DB4u;
        // 0x104db8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104DBCu;
        goto label_104dbc;
    }
    ctx->pc = 0x104DB4u;
    {
        const bool branch_taken_0x104db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DB4u;
        // 0x104db8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104db4) {
            ctx->pc = 0x104DC0u;
            goto label_104dc0;
        }
    }
    ctx->pc = 0x104DBCu;
label_104dbc:
    // 0x104dbc: 0x8c70002c  lw          $s0, 0x2C($v1)
    ctx->pc = 0x104dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_104dc0:
    // 0x104dc0: 0x52000159  beql        $s0, $zero, . + 4 + (0x159 << 2)
label_104dc4:
    if (ctx->pc == 0x104DC4u) {
        ctx->pc = 0x104DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DC0u;
        // 0x104dc4: 0x8ea30010  lw          $v1, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104DC8u;
        goto label_104dc8;
    }
    ctx->pc = 0x104DC0u;
    {
        const bool branch_taken_0x104dc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x104dc0) {
            ctx->pc = 0x104DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104DC0u;
            // 0x104dc4: 0x8ea30010  lw          $v1, 0x10($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105328u;
            goto label_105328;
        }
    }
    ctx->pc = 0x104DC8u;
label_104dc8:
    // 0x104dc8: 0x8e14000c  lw          $s4, 0xC($s0)
    ctx->pc = 0x104dc8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_104dcc:
    // 0x104dcc: 0x0  nop
    ctx->pc = 0x104dccu;
    // NOP
label_104dd0:
    // 0x104dd0: 0x8e8600b4  lw          $a2, 0xB4($s4)
    ctx->pc = 0x104dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
label_104dd4:
    // 0x104dd4: 0x8e8300bc  lw          $v1, 0xBC($s4)
    ctx->pc = 0x104dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
label_104dd8:
    // 0x104dd8: 0x8cc50028  lw          $a1, 0x28($a2)
    ctx->pc = 0x104dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_104ddc:
    // 0x104ddc: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x104ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_104de0:
    // 0x104de0: 0x50a4014e  beql        $a1, $a0, . + 4 + (0x14E << 2)
label_104de4:
    if (ctx->pc == 0x104DE4u) {
        ctx->pc = 0x104DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DE0u;
        // 0x104de4: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104DE8u;
        goto label_104de8;
    }
    ctx->pc = 0x104DE0u;
    {
        const bool branch_taken_0x104de0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x104de0) {
            ctx->pc = 0x104DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104DE0u;
            // 0x104de4: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10531Cu;
            goto label_10531c;
        }
    }
    ctx->pc = 0x104DE8u;
label_104de8:
    // 0x104de8: 0x50a0014c  beql        $a1, $zero, . + 4 + (0x14C << 2)
label_104dec:
    if (ctx->pc == 0x104DECu) {
        ctx->pc = 0x104DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DE8u;
        // 0x104dec: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104DF0u;
        goto label_104df0;
    }
    ctx->pc = 0x104DE8u;
    {
        const bool branch_taken_0x104de8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x104de8) {
            ctx->pc = 0x104DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104DE8u;
            // 0x104dec: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10531Cu;
            goto label_10531c;
        }
    }
    ctx->pc = 0x104DF0u;
label_104df0:
    // 0x104df0: 0x5080014a  beql        $a0, $zero, . + 4 + (0x14A << 2)
label_104df4:
    if (ctx->pc == 0x104DF4u) {
        ctx->pc = 0x104DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DF0u;
        // 0x104df4: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104DF8u;
        goto label_104df8;
    }
    ctx->pc = 0x104DF0u;
    {
        const bool branch_taken_0x104df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x104df0) {
            ctx->pc = 0x104DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104DF0u;
            // 0x104df4: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10531Cu;
            goto label_10531c;
        }
    }
    ctx->pc = 0x104DF8u;
label_104df8:
    // 0x104df8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x104df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_104dfc:
    // 0x104dfc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_104e00:
    if (ctx->pc == 0x104E00u) {
        ctx->pc = 0x104E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DFCu;
        // 0x104e00: 0x24420044  addiu       $v0, $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104E04u;
        goto label_104e04;
    }
    ctx->pc = 0x104DFCu;
    {
        const bool branch_taken_0x104dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DFCu;
        // 0x104e00: 0x24420044  addiu       $v0, $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104dfc) {
            ctx->pc = 0x104E1Cu;
            goto label_104e1c;
        }
    }
    ctx->pc = 0x104E04u;
label_104e04:
    // 0x104e04: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_104e08:
    if (ctx->pc == 0x104E08u) {
        ctx->pc = 0x104E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E04u;
        // 0x104e08: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104E0Cu;
        goto label_104e0c;
    }
    ctx->pc = 0x104E04u;
    {
        const bool branch_taken_0x104e04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x104E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E04u;
        // 0x104e08: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e04) {
            ctx->pc = 0x104E20u;
            goto label_104e20;
        }
    }
    ctx->pc = 0x104E0Cu;
label_104e0c:
    // 0x104e0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x104e0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_104e10:
    // 0x104e10: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x104e10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_104e14:
    // 0x104e14: 0x10000004  b           . + 4 + (0x4 << 2)
label_104e18:
    if (ctx->pc == 0x104E18u) {
        ctx->pc = 0x104E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E14u;
        // 0x104e18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104E1Cu;
        goto label_104e1c;
    }
    ctx->pc = 0x104E14u;
    {
        const bool branch_taken_0x104e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E14u;
        // 0x104e18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e14) {
            ctx->pc = 0x104E28u;
            goto label_104e28;
        }
    }
    ctx->pc = 0x104E1Cu;
label_104e1c:
    // 0x104e1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x104e1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_104e20:
    // 0x104e20: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x104e20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_104e24:
    // 0x104e24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x104e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_104e28:
    // 0x104e28: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x104e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_104e2c:
    // 0x104e2c: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x104e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_104e30:
    // 0x104e30: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_104e34:
    if (ctx->pc == 0x104E34u) {
        ctx->pc = 0x104E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E30u;
        // 0x104e34: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104E38u;
        goto label_104e38;
    }
    ctx->pc = 0x104E30u;
    {
        const bool branch_taken_0x104e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E30u;
        // 0x104e34: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e30) {
            ctx->pc = 0x104E58u;
            goto label_104e58;
        }
    }
    ctx->pc = 0x104E38u;
label_104e38:
    // 0x104e38: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x104e38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_104e3c:
    // 0x104e3c: 0x24429870  addiu       $v0, $v0, -0x6790
    ctx->pc = 0x104e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940784));
label_104e40:
    // 0x104e40: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x104e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_104e44:
    // 0x104e44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x104e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_104e48:
    // 0x104e48: 0x600008  jr          $v1
label_104e4c:
    if (ctx->pc == 0x104E4Cu) {
        ctx->pc = 0x104E50u;
        goto label_104e50;
    }
    ctx->pc = 0x104E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x104E50u: goto label_104e50;
            case 0x104E58u: goto label_104e58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104E48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x104E50u;
label_104e50:
    // 0x104e50: 0x10000002  b           . + 4 + (0x2 << 2)
label_104e54:
    if (ctx->pc == 0x104E54u) {
        ctx->pc = 0x104E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E50u;
        // 0x104e54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104E58u;
        goto label_104e58;
    }
    ctx->pc = 0x104E50u;
    {
        const bool branch_taken_0x104e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E50u;
        // 0x104e54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e50) {
            ctx->pc = 0x104E5Cu;
            goto label_104e5c;
        }
    }
    ctx->pc = 0x104E58u;
label_104e58:
    // 0x104e58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x104e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_104e5c:
    // 0x104e5c: 0x1040012e  beqz        $v0, . + 4 + (0x12E << 2)
label_104e60:
    if (ctx->pc == 0x104E60u) {
        ctx->pc = 0x104E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E5Cu;
        // 0x104e60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104E64u;
        goto label_104e64;
    }
    ctx->pc = 0x104E5Cu;
    {
        const bool branch_taken_0x104e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E5Cu;
        // 0x104e60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e5c) {
            ctx->pc = 0x105318u;
            goto label_105318;
        }
    }
    ctx->pc = 0x104E64u;
label_104e64:
    // 0x104e64: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x104e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_104e68:
    // 0x104e68: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x104e68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_104e6c:
    // 0x104e6c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x104e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_104e70:
    // 0x104e70: 0x40f809  jalr        $v0
label_104e74:
    if (ctx->pc == 0x104E74u) {
        ctx->pc = 0x104E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E70u;
        // 0x104e74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104E78u;
        goto label_104e78;
    }
    ctx->pc = 0x104E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x104E78u);
        ctx->pc = 0x104E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E70u;
        // 0x104e74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104E70u, 0x104E78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104E78u;
label_104e78:
    // 0x104e78: 0x50400128  beql        $v0, $zero, . + 4 + (0x128 << 2)
label_104e7c:
    if (ctx->pc == 0x104E7Cu) {
        ctx->pc = 0x104E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E78u;
        // 0x104e7c: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104E80u;
        goto label_104e80;
    }
    ctx->pc = 0x104E78u;
    {
        const bool branch_taken_0x104e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104e78) {
            ctx->pc = 0x104E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104E78u;
            // 0x104e7c: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10531Cu;
            goto label_10531c;
        }
    }
    ctx->pc = 0x104E80u;
label_104e80:
    // 0x104e80: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x104e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_104e84:
    // 0x104e84: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x104e84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_104e88:
    // 0x104e88: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x104e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_104e8c:
    // 0x104e8c: 0x40f809  jalr        $v0
label_104e90:
    if (ctx->pc == 0x104E90u) {
        ctx->pc = 0x104E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E8Cu;
        // 0x104e90: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104E94u;
        goto label_104e94;
    }
    ctx->pc = 0x104E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x104E94u);
        ctx->pc = 0x104E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E8Cu;
        // 0x104e90: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104E8Cu, 0x104E94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104E94u;
label_104e94:
    // 0x104e94: 0x50400121  beql        $v0, $zero, . + 4 + (0x121 << 2)
label_104e98:
    if (ctx->pc == 0x104E98u) {
        ctx->pc = 0x104E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E94u;
        // 0x104e98: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104E9Cu;
        goto label_104e9c;
    }
    ctx->pc = 0x104E94u;
    {
        const bool branch_taken_0x104e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104e94) {
            ctx->pc = 0x104E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104E94u;
            // 0x104e98: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10531Cu;
            goto label_10531c;
        }
    }
    ctx->pc = 0x104E9Cu;
label_104e9c:
    // 0x104e9c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x104e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_104ea0:
    // 0x104ea0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x104ea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_104ea4:
    // 0x104ea4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x104ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_104ea8:
    // 0x104ea8: 0x40f809  jalr        $v0
label_104eac:
    if (ctx->pc == 0x104EACu) {
        ctx->pc = 0x104EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EA8u;
        // 0x104eac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104EB0u;
        goto label_104eb0;
    }
    ctx->pc = 0x104EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x104EB0u);
        ctx->pc = 0x104EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EA8u;
        // 0x104eac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104EA8u, 0x104EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104EB0u;
label_104eb0:
    // 0x104eb0: 0x5040011a  beql        $v0, $zero, . + 4 + (0x11A << 2)
label_104eb4:
    if (ctx->pc == 0x104EB4u) {
        ctx->pc = 0x104EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EB0u;
        // 0x104eb4: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104EB8u;
        goto label_104eb8;
    }
    ctx->pc = 0x104EB0u;
    {
        const bool branch_taken_0x104eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104eb0) {
            ctx->pc = 0x104EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104EB0u;
            // 0x104eb4: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10531Cu;
            goto label_10531c;
        }
    }
    ctx->pc = 0x104EB8u;
label_104eb8:
    // 0x104eb8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x104eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_104ebc:
    // 0x104ebc: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x104ebcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_104ec0:
    // 0x104ec0: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x104ec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_104ec4:
    // 0x104ec4: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x104ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_104ec8:
    // 0x104ec8: 0x40f809  jalr        $v0
label_104ecc:
    if (ctx->pc == 0x104ECCu) {
        ctx->pc = 0x104ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EC8u;
        // 0x104ecc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104ED0u;
        goto label_104ed0;
    }
    ctx->pc = 0x104EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x104ED0u);
        ctx->pc = 0x104ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EC8u;
        // 0x104ecc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104EC8u, 0x104ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104ED0u;
label_104ed0:
    // 0x104ed0: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_104ed4:
    if (ctx->pc == 0x104ED4u) {
        ctx->pc = 0x104ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104ED0u;
        // 0x104ed4: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104ED8u;
        goto label_104ed8;
    }
    ctx->pc = 0x104ED0u;
    {
        const bool branch_taken_0x104ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104ed0) {
            ctx->pc = 0x104ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104ED0u;
            // 0x104ed4: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104F48u;
            goto label_104f48;
        }
    }
    ctx->pc = 0x104ED8u;
label_104ed8:
    // 0x104ed8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x104ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_104edc:
    // 0x104edc: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x104edcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_104ee0:
    // 0x104ee0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x104ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_104ee4:
    // 0x104ee4: 0x40f809  jalr        $v0
label_104ee8:
    if (ctx->pc == 0x104EE8u) {
        ctx->pc = 0x104EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EE4u;
        // 0x104ee8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104EECu;
        goto label_104eec;
    }
    ctx->pc = 0x104EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x104EECu);
        ctx->pc = 0x104EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EE4u;
        // 0x104ee8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104EE4u, 0x104EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104EECu;
label_104eec:
    // 0x104eec: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_104ef0:
    if (ctx->pc == 0x104EF0u) {
        ctx->pc = 0x104EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EECu;
        // 0x104ef0: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104EF4u;
        goto label_104ef4;
    }
    ctx->pc = 0x104EECu;
    {
        const bool branch_taken_0x104eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EECu;
        // 0x104ef0: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104eec) {
            ctx->pc = 0x104F48u;
            goto label_104f48;
        }
    }
    ctx->pc = 0x104EF4u;
label_104ef4:
    // 0x104ef4: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x104ef4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_104ef8:
    // 0x104ef8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x104ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_104efc:
    // 0x104efc: 0x40f809  jalr        $v0
label_104f00:
    if (ctx->pc == 0x104F00u) {
        ctx->pc = 0x104F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EFCu;
        // 0x104f00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104F04u;
        goto label_104f04;
    }
    ctx->pc = 0x104EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x104F04u);
        ctx->pc = 0x104F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EFCu;
        // 0x104f00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104EFCu, 0x104F04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104F04u;
label_104f04:
    // 0x104f04: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_104f08:
    if (ctx->pc == 0x104F08u) {
        ctx->pc = 0x104F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F04u;
        // 0x104f08: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104F0Cu;
        goto label_104f0c;
    }
    ctx->pc = 0x104F04u;
    {
        const bool branch_taken_0x104f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104f04) {
            ctx->pc = 0x104F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104F04u;
            // 0x104f08: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104F14u;
            goto label_104f14;
        }
    }
    ctx->pc = 0x104F0Cu;
label_104f0c:
    // 0x104f0c: 0x1000000d  b           . + 4 + (0xD << 2)
label_104f10:
    if (ctx->pc == 0x104F10u) {
        ctx->pc = 0x104F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F0Cu;
        // 0x104f10: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104F14u;
        goto label_104f14;
    }
    ctx->pc = 0x104F0Cu;
    {
        const bool branch_taken_0x104f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F0Cu;
        // 0x104f10: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f0c) {
            ctx->pc = 0x104F44u;
            goto label_104f44;
        }
    }
    ctx->pc = 0x104F14u;
label_104f14:
    // 0x104f14: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x104f14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_104f18:
    // 0x104f18: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x104f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_104f1c:
    // 0x104f1c: 0x40f809  jalr        $v0
label_104f20:
    if (ctx->pc == 0x104F20u) {
        ctx->pc = 0x104F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F1Cu;
        // 0x104f20: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104F24u;
        goto label_104f24;
    }
    ctx->pc = 0x104F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x104F24u);
        ctx->pc = 0x104F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F1Cu;
        // 0x104f20: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104F1Cu, 0x104F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104F24u;
label_104f24:
    // 0x104f24: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_104f28:
    if (ctx->pc == 0x104F28u) {
        ctx->pc = 0x104F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F24u;
        // 0x104f28: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104F2Cu;
        goto label_104f2c;
    }
    ctx->pc = 0x104F24u;
    {
        const bool branch_taken_0x104f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104f24) {
            ctx->pc = 0x104F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104F24u;
            // 0x104f28: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104F48u;
            goto label_104f48;
        }
    }
    ctx->pc = 0x104F2Cu;
label_104f2c:
    // 0x104f2c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x104f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_104f30:
    // 0x104f30: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x104f30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_104f34:
    // 0x104f34: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x104f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_104f38:
    // 0x104f38: 0x40f809  jalr        $v0
label_104f3c:
    if (ctx->pc == 0x104F3Cu) {
        ctx->pc = 0x104F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F38u;
        // 0x104f3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104F40u;
        goto label_104f40;
    }
    ctx->pc = 0x104F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x104F40u);
        ctx->pc = 0x104F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F38u;
        // 0x104f3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104F38u, 0x104F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104F40u;
label_104f40:
    // 0x104f40: 0x2b80a  movz        $s7, $zero, $v0
    ctx->pc = 0x104f40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0));
label_104f44:
    // 0x104f44: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x104f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_104f48:
    // 0x104f48: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x104f48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_104f4c:
    // 0x104f4c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x104f4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_104f50:
    // 0x104f50: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x104f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_104f54:
    // 0x104f54: 0x40f809  jalr        $v0
label_104f58:
    if (ctx->pc == 0x104F58u) {
        ctx->pc = 0x104F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F54u;
        // 0x104f58: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104F5Cu;
        goto label_104f5c;
    }
    ctx->pc = 0x104F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x104F5Cu);
        ctx->pc = 0x104F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F54u;
        // 0x104f58: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104F54u, 0x104F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104F5Cu;
label_104f5c:
    // 0x104f5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x104f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104f60:
    // 0x104f60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x104f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_104f64:
    // 0x104f64: 0x1453000f  bne         $v0, $s3, . + 4 + (0xF << 2)
label_104f68:
    if (ctx->pc == 0x104F68u) {
        ctx->pc = 0x104F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F64u;
        // 0x104f68: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104F6Cu;
        goto label_104f6c;
    }
    ctx->pc = 0x104F64u;
    {
        const bool branch_taken_0x104f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x104F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F64u;
        // 0x104f68: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f64) {
            ctx->pc = 0x104FA4u;
            goto label_104fa4;
        }
    }
    ctx->pc = 0x104F6Cu;
label_104f6c:
    // 0x104f6c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x104f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_104f70:
    // 0x104f70: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x104f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_104f74:
    // 0x104f74: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x104f74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_104f78:
    // 0x104f78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x104f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_104f7c:
    // 0x104f7c: 0x24a59860  addiu       $a1, $a1, -0x67A0
    ctx->pc = 0x104f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940768));
label_104f80:
    // 0x104f80: 0x84440108  lh          $a0, 0x108($v0)
    ctx->pc = 0x104f80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 264)));
label_104f84:
    // 0x104f84: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x104f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_104f88:
    // 0x104f88: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x104f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
label_104f8c:
    // 0x104f8c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x104f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_104f90:
    // 0x104f90: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x104f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
label_104f94:
    // 0x104f94: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x104f94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_104f98:
    // 0x104f98: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x104f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_104f9c:
    // 0x104f9c: 0x60f809  jalr        $v1
label_104fa0:
    if (ctx->pc == 0x104FA0u) {
        ctx->pc = 0x104FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F9Cu;
        // 0x104fa0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104FA4u;
        goto label_104fa4;
    }
    ctx->pc = 0x104F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x104FA4u);
        ctx->pc = 0x104FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F9Cu;
        // 0x104fa0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104F9Cu, 0x104FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104FA4u;
label_104fa4:
    // 0x104fa4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_104fa8:
    if (ctx->pc == 0x104FA8u) {
        ctx->pc = 0x104FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FA4u;
        // 0x104fa8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104FACu;
        goto label_104fac;
    }
    ctx->pc = 0x104FA4u;
    {
        const bool branch_taken_0x104fa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x104FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FA4u;
        // 0x104fa8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104fa4) {
            ctx->pc = 0x104FBCu;
            goto label_104fbc;
        }
    }
    ctx->pc = 0x104FACu;
label_104fac:
    // 0x104fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_104fb0:
    // 0x104fb0: 0xc041684  jal         func_105A10
label_104fb4:
    if (ctx->pc == 0x104FB4u) {
        ctx->pc = 0x104FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FB0u;
        // 0x104fb4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104FB8u;
        goto label_104fb8;
    }
    ctx->pc = 0x104FB0u;
    SET_GPR_U32(ctx, 31, 0x104FB8u);
    ctx->pc = 0x104FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104FB0u;
    // 0x104fb4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105A10u, 0x104FB0u, 0x104FB8u)) {
        return;
    }
    ctx->pc = 0x104FB8u;
label_104fb8:
    // 0x104fb8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x104fb8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104fbc:
    // 0x104fbc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x104fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_104fc0:
    // 0x104fc0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x104fc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_104fc4:
    // 0x104fc4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x104fc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_104fc8:
    // 0x104fc8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x104fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_104fcc:
    // 0x104fcc: 0x40f809  jalr        $v0
label_104fd0:
    if (ctx->pc == 0x104FD0u) {
        ctx->pc = 0x104FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FCCu;
        // 0x104fd0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104FD4u;
        goto label_104fd4;
    }
    ctx->pc = 0x104FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x104FD4u);
        ctx->pc = 0x104FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FCCu;
        // 0x104fd0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104FCCu, 0x104FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104FD4u;
label_104fd4:
    // 0x104fd4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_104fd8:
    if (ctx->pc == 0x104FD8u) {
        ctx->pc = 0x104FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FD4u;
        // 0x104fd8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104FDCu;
        goto label_104fdc;
    }
    ctx->pc = 0x104FD4u;
    {
        const bool branch_taken_0x104fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104fd4) {
            ctx->pc = 0x104FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104FD4u;
            // 0x104fd8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104FF8u;
            goto label_104ff8;
        }
    }
    ctx->pc = 0x104FDCu;
label_104fdc:
    // 0x104fdc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x104fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_104fe0:
    // 0x104fe0: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x104fe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_104fe4:
    // 0x104fe4: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x104fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_104fe8:
    // 0x104fe8: 0x40f809  jalr        $v0
label_104fec:
    if (ctx->pc == 0x104FECu) {
        ctx->pc = 0x104FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FE8u;
        // 0x104fec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104FF0u;
        goto label_104ff0;
    }
    ctx->pc = 0x104FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x104FF0u);
        ctx->pc = 0x104FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FE8u;
        // 0x104fec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104FE8u, 0x104FF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104FF0u;
label_104ff0:
    // 0x104ff0: 0x262b00a  movz        $s6, $s3, $v0
    ctx->pc = 0x104ff0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 19));
label_104ff4:
    // 0x104ff4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x104ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_104ff8:
    // 0x104ff8: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x104ff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_104ffc:
    // 0x104ffc: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x104ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_105000:
    // 0x105000: 0x60f809  jalr        $v1
label_105004:
    if (ctx->pc == 0x105004u) {
        ctx->pc = 0x105004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105000u;
        // 0x105004: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105008u;
        goto label_105008;
    }
    ctx->pc = 0x105000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x105008u);
        ctx->pc = 0x105004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105000u;
        // 0x105004: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105000u, 0x105008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105008u;
label_105008:
    // 0x105008: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x105008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_10500c:
    // 0x10500c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x10500cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_105010:
    // 0x105010: 0x84a400f8  lh          $a0, 0xF8($a1)
    ctx->pc = 0x105010u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 248)));
label_105014:
    // 0x105014: 0x8ca200fc  lw          $v0, 0xFC($a1)
    ctx->pc = 0x105014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 252)));
label_105018:
    // 0x105018: 0x40f809  jalr        $v0
label_10501c:
    if (ctx->pc == 0x10501Cu) {
        ctx->pc = 0x10501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105018u;
        // 0x10501c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105020u;
        goto label_105020;
    }
    ctx->pc = 0x105018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x105020u);
        ctx->pc = 0x10501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105018u;
        // 0x10501c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105018u, 0x105020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105020u;
label_105020:
    // 0x105020: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_105024:
    if (ctx->pc == 0x105024u) {
        ctx->pc = 0x105024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105020u;
        // 0x105024: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105028u;
        goto label_105028;
    }
    ctx->pc = 0x105020u;
    {
        const bool branch_taken_0x105020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105020u;
        // 0x105024: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105020) {
            ctx->pc = 0x105038u;
            goto label_105038;
        }
    }
    ctx->pc = 0x105028u;
label_105028:
    // 0x105028: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x105028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_10502c:
    // 0x10502c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10502cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_105030:
    // 0x105030: 0x0  nop
    ctx->pc = 0x105030u;
    // NOP
label_105034:
    // 0x105034: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x105034u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_105038:
    // 0x105038: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x105038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10503c:
    // 0x10503c: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x10503cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_105040:
    // 0x105040: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x105040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_105044:
    // 0x105044: 0x60f809  jalr        $v1
label_105048:
    if (ctx->pc == 0x105048u) {
        ctx->pc = 0x105048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105044u;
        // 0x105048: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10504Cu;
        goto label_10504c;
    }
    ctx->pc = 0x105044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10504Cu);
        ctx->pc = 0x105048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105044u;
        // 0x105048: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105044u, 0x10504Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10504Cu;
label_10504c:
    // 0x10504c: 0x6a820013  ldl         $v0, 0x13($s4)
    ctx->pc = 0x10504cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_105050:
    // 0x105050: 0x6e82000c  ldr         $v0, 0xC($s4)
    ctx->pc = 0x105050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_105054:
    // 0x105054: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x105054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_105058:
    // 0x105058: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x105058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10505c:
    // 0x10505c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x10505cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_105060:
    // 0x105060: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x105060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_105064:
    // 0x105064: 0x6a820007  ldl         $v0, 0x7($s4)
    ctx->pc = 0x105064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_105068:
    // 0x105068: 0x6e820000  ldr         $v0, 0x0($s4)
    ctx->pc = 0x105068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_10506c:
    // 0x10506c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x10506cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_105070:
    // 0x105070: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x105070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_105074:
    // 0x105074: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x105074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_105078:
    // 0x105078: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x105078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_10507c:
    // 0x10507c: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x10507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_105080:
    // 0x105080: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x105080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_105084:
    // 0x105084: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x105084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_105088:
    // 0x105088: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x105088u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_10508c:
    // 0x10508c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x10508cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_105090:
    // 0x105090: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x105090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_105094:
    // 0x105094: 0xc4420044  lwc1        $f2, 0x44($v0)
    ctx->pc = 0x105094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_105098:
    // 0x105098: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x105098u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_10509c:
    // 0x10509c: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x10509cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1050a0:
    // 0x1050a0: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x1050a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1050a4:
    // 0x1050a4: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x1050a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1050a8:
    // 0x1050a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1050a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1050ac:
    // 0x1050ac: 0x16c00054  bnez        $s6, . + 4 + (0x54 << 2)
label_1050b0:
    if (ctx->pc == 0x1050B0u) {
        ctx->pc = 0x1050B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050ACu;
        // 0x1050b0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1050B4u;
        goto label_1050b4;
    }
    ctx->pc = 0x1050ACu;
    {
        const bool branch_taken_0x1050ac = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1050B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050ACu;
        // 0x1050b0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1050ac) {
            ctx->pc = 0x105200u;
            goto label_105200;
        }
    }
    ctx->pc = 0x1050B4u;
label_1050b4:
    // 0x1050b4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1050b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_1050b8:
    // 0x1050b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1050b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1050bc:
    // 0x1050bc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1050bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1050c0:
    // 0x1050c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1050c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1050c4:
    // 0x1050c4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1050c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1050c8:
    // 0x1050c8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1050c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1050cc:
    // 0x1050cc: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x1050ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_1050d0:
    // 0x1050d0: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1050d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_1050d4:
    // 0x1050d4: 0x40f809  jalr        $v0
label_1050d8:
    if (ctx->pc == 0x1050D8u) {
        ctx->pc = 0x1050D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050D4u;
        // 0x1050d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1050DCu;
        goto label_1050dc;
    }
    ctx->pc = 0x1050D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1050DCu);
        ctx->pc = 0x1050D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050D4u;
        // 0x1050d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1050D4u, 0x1050DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1050DCu;
label_1050dc:
    // 0x1050dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1050e0:
    if (ctx->pc == 0x1050E0u) {
        ctx->pc = 0x1050E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050DCu;
        // 0x1050e0: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1050E4u;
        goto label_1050e4;
    }
    ctx->pc = 0x1050DCu;
    {
        const bool branch_taken_0x1050dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1050E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050DCu;
        // 0x1050e0: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1050dc) {
            ctx->pc = 0x1050F0u;
            goto label_1050f0;
        }
    }
    ctx->pc = 0x1050E4u;
label_1050e4:
    // 0x1050e4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1050e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1050e8:
    // 0x1050e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1050ec:
    if (ctx->pc == 0x1050ECu) {
        ctx->pc = 0x1050ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050E8u;
        // 0x1050ec: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1050F0u;
        goto label_1050f0;
    }
    ctx->pc = 0x1050E8u;
    {
        const bool branch_taken_0x1050e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1050ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050E8u;
        // 0x1050ec: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1050e8) {
            ctx->pc = 0x105100u;
            goto label_105100;
        }
    }
    ctx->pc = 0x1050F0u;
label_1050f0:
    // 0x1050f0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1050f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1050f4:
    // 0x1050f4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1050f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1050f8:
    // 0x1050f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1050f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1050fc:
    // 0x1050fc: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1050fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_105100:
    // 0x105100: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x105100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_105104:
    // 0x105104: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x105104u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_105108:
    // 0x105108: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x105108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_10510c:
    // 0x10510c: 0x40f809  jalr        $v0
label_105110:
    if (ctx->pc == 0x105110u) {
        ctx->pc = 0x105110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10510Cu;
        // 0x105110: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105114u;
        goto label_105114;
    }
    ctx->pc = 0x10510Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x105114u);
        ctx->pc = 0x105110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10510Cu;
        // 0x105110: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10510Cu, 0x105114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105114u;
label_105114:
    // 0x105114: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_105118:
    if (ctx->pc == 0x105118u) {
        ctx->pc = 0x105118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105114u;
        // 0x105118: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10511Cu;
        goto label_10511c;
    }
    ctx->pc = 0x105114u;
    {
        const bool branch_taken_0x105114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105114u;
        // 0x105118: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105114) {
            ctx->pc = 0x105128u;
            goto label_105128;
        }
    }
    ctx->pc = 0x10511Cu;
label_10511c:
    // 0x10511c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x10511cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_105120:
    // 0x105120: 0x10000005  b           . + 4 + (0x5 << 2)
label_105124:
    if (ctx->pc == 0x105124u) {
        ctx->pc = 0x105124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105120u;
        // 0x105124: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105128u;
        goto label_105128;
    }
    ctx->pc = 0x105120u;
    {
        const bool branch_taken_0x105120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105120u;
        // 0x105124: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105120) {
            ctx->pc = 0x105138u;
            goto label_105138;
        }
    }
    ctx->pc = 0x105128u;
label_105128:
    // 0x105128: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x105128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10512c:
    // 0x10512c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x10512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_105130:
    // 0x105130: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x105130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_105134:
    // 0x105134: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x105134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_105138:
    // 0x105138: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
label_10513c:
    if (ctx->pc == 0x10513Cu) {
        ctx->pc = 0x10513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105138u;
        // 0x10513c: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105140u;
        goto label_105140;
    }
    ctx->pc = 0x105138u;
    {
        const bool branch_taken_0x105138 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x10513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105138u;
        // 0x10513c: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105138) {
            ctx->pc = 0x10514Cu;
            goto label_10514c;
        }
    }
    ctx->pc = 0x105140u;
label_105140:
    // 0x105140: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x105140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_105144:
    // 0x105144: 0x10000005  b           . + 4 + (0x5 << 2)
label_105148:
    if (ctx->pc == 0x105148u) {
        ctx->pc = 0x105148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105144u;
        // 0x105148: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10514Cu;
        goto label_10514c;
    }
    ctx->pc = 0x105144u;
    {
        const bool branch_taken_0x105144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105144u;
        // 0x105148: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105144) {
            ctx->pc = 0x10515Cu;
            goto label_10515c;
        }
    }
    ctx->pc = 0x10514Cu;
label_10514c:
    // 0x10514c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10514cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_105150:
    // 0x105150: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x105150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_105154:
    // 0x105154: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x105154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_105158:
    // 0x105158: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x105158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_10515c:
    // 0x10515c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x10515cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_105160:
    // 0x105160: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x105160u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_105164:
    // 0x105164: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x105164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_105168:
    // 0x105168: 0x40f809  jalr        $v0
label_10516c:
    if (ctx->pc == 0x10516Cu) {
        ctx->pc = 0x10516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105168u;
        // 0x10516c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105170u;
        goto label_105170;
    }
    ctx->pc = 0x105168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x105170u);
        ctx->pc = 0x10516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105168u;
        // 0x10516c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105168u, 0x105170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105170u;
label_105170:
    // 0x105170: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_105174:
    if (ctx->pc == 0x105174u) {
        ctx->pc = 0x105174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105170u;
        // 0x105174: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105178u;
        goto label_105178;
    }
    ctx->pc = 0x105170u;
    {
        const bool branch_taken_0x105170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105170u;
        // 0x105174: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105170) {
            ctx->pc = 0x105184u;
            goto label_105184;
        }
    }
    ctx->pc = 0x105178u;
label_105178:
    // 0x105178: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x105178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_10517c:
    // 0x10517c: 0x10000005  b           . + 4 + (0x5 << 2)
label_105180:
    if (ctx->pc == 0x105180u) {
        ctx->pc = 0x105180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10517Cu;
        // 0x105180: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105184u;
        goto label_105184;
    }
    ctx->pc = 0x10517Cu;
    {
        const bool branch_taken_0x10517c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10517Cu;
        // 0x105180: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10517c) {
            ctx->pc = 0x105194u;
            goto label_105194;
        }
    }
    ctx->pc = 0x105184u;
label_105184:
    // 0x105184: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x105184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_105188:
    // 0x105188: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x105188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_10518c:
    // 0x10518c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x10518cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_105190:
    // 0x105190: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x105190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_105194:
    // 0x105194: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x105194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_105198:
    // 0x105198: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x105198u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_10519c:
    // 0x10519c: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x10519cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_1051a0:
    // 0x1051a0: 0x40f809  jalr        $v0
label_1051a4:
    if (ctx->pc == 0x1051A4u) {
        ctx->pc = 0x1051A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051A0u;
        // 0x1051a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1051A8u;
        goto label_1051a8;
    }
    ctx->pc = 0x1051A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1051A8u);
        ctx->pc = 0x1051A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051A0u;
        // 0x1051a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1051A0u, 0x1051A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1051A8u;
label_1051a8:
    // 0x1051a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1051ac:
    if (ctx->pc == 0x1051ACu) {
        ctx->pc = 0x1051ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051A8u;
        // 0x1051ac: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1051B0u;
        goto label_1051b0;
    }
    ctx->pc = 0x1051A8u;
    {
        const bool branch_taken_0x1051a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1051ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051A8u;
        // 0x1051ac: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051a8) {
            ctx->pc = 0x1051BCu;
            goto label_1051bc;
        }
    }
    ctx->pc = 0x1051B0u;
label_1051b0:
    // 0x1051b0: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x1051b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_1051b4:
    // 0x1051b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1051b8:
    if (ctx->pc == 0x1051B8u) {
        ctx->pc = 0x1051B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051B4u;
        // 0x1051b8: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1051BCu;
        goto label_1051bc;
    }
    ctx->pc = 0x1051B4u;
    {
        const bool branch_taken_0x1051b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1051B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051B4u;
        // 0x1051b8: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051b4) {
            ctx->pc = 0x1051CCu;
            goto label_1051cc;
        }
    }
    ctx->pc = 0x1051BCu;
label_1051bc:
    // 0x1051bc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1051bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1051c0:
    // 0x1051c0: 0x2402fdff  addiu       $v0, $zero, -0x201
    ctx->pc = 0x1051c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_1051c4:
    // 0x1051c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1051c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1051c8:
    // 0x1051c8: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1051c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1051cc:
    // 0x1051cc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1051ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1051d0:
    // 0x1051d0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1051d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1051d4:
    // 0x1051d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1051d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1051d8:
    // 0x1051d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1051d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1051dc:
    // 0x1051dc: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1051dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1051e0:
    // 0x1051e0: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x1051e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1051e4:
    // 0x1051e4: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1051e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1051e8:
    // 0x1051e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1051e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1051ec:
    // 0x1051ec: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1051ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1051f0:
    // 0x1051f0: 0x60f809  jalr        $v1
label_1051f4:
    if (ctx->pc == 0x1051F4u) {
        ctx->pc = 0x1051F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051F0u;
        // 0x1051f4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1051F8u;
        goto label_1051f8;
    }
    ctx->pc = 0x1051F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1051F8u);
        ctx->pc = 0x1051F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051F0u;
        // 0x1051f4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1051F0u, 0x1051F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1051F8u;
label_1051f8:
    // 0x1051f8: 0x1000000f  b           . + 4 + (0xF << 2)
label_1051fc:
    if (ctx->pc == 0x1051FCu) {
        ctx->pc = 0x1051FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051F8u;
        // 0x1051fc: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105200u;
        goto label_105200;
    }
    ctx->pc = 0x1051F8u;
    {
        const bool branch_taken_0x1051f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1051FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051F8u;
        // 0x1051fc: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051f8) {
            ctx->pc = 0x105238u;
            goto label_105238;
        }
    }
    ctx->pc = 0x105200u;
label_105200:
    // 0x105200: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x105200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_105204:
    // 0x105204: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x105204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_105208:
    // 0x105208: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x105208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_10520c:
    // 0x10520c: 0x40f809  jalr        $v0
label_105210:
    if (ctx->pc == 0x105210u) {
        ctx->pc = 0x105210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10520Cu;
        // 0x105210: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105214u;
        goto label_105214;
    }
    ctx->pc = 0x10520Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x105214u);
        ctx->pc = 0x105210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10520Cu;
        // 0x105210: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10520Cu, 0x105214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105214u;
label_105214:
    // 0x105214: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_105218:
    if (ctx->pc == 0x105218u) {
        ctx->pc = 0x105218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105214u;
        // 0x105218: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10521Cu;
        goto label_10521c;
    }
    ctx->pc = 0x105214u;
    {
        const bool branch_taken_0x105214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105214u;
        // 0x105218: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105214) {
            ctx->pc = 0x105234u;
            goto label_105234;
        }
    }
    ctx->pc = 0x10521Cu;
label_10521c:
    // 0x10521c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x10521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_105220:
    // 0x105220: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x105220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_105224:
    // 0x105224: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x105224u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
label_105228:
    // 0x105228: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x105228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_10522c:
    // 0x10522c: 0x60f809  jalr        $v1
label_105230:
    if (ctx->pc == 0x105230u) {
        ctx->pc = 0x105230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10522Cu;
        // 0x105230: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105234u;
        goto label_105234;
    }
    ctx->pc = 0x10522Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x105234u);
        ctx->pc = 0x105230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10522Cu;
        // 0x105230: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10522Cu, 0x105234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105234u;
label_105234:
    // 0x105234: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x105234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_105238:
    // 0x105238: 0x846400e8  lh          $a0, 0xE8($v1)
    ctx->pc = 0x105238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 232)));
label_10523c:
    // 0x10523c: 0x8c6200ec  lw          $v0, 0xEC($v1)
    ctx->pc = 0x10523cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
label_105240:
    // 0x105240: 0x40f809  jalr        $v0
label_105244:
    if (ctx->pc == 0x105244u) {
        ctx->pc = 0x105244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105240u;
        // 0x105244: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105248u;
        goto label_105248;
    }
    ctx->pc = 0x105240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x105248u);
        ctx->pc = 0x105244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105240u;
        // 0x105244: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105240u, 0x105248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105248u;
label_105248:
    // 0x105248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x105248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10524c:
    // 0x10524c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10524cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_105250:
    // 0x105250: 0x62b00b  movn        $s6, $v1, $v0
    ctx->pc = 0x105250u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3));
label_105254:
    // 0x105254: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x105254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105258:
    // 0x105258: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x105258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10525c:
    // 0x10525c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x10525cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_105260:
    // 0x105260: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x105260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_105264:
    // 0x105264: 0xc0416a0  jal         func_105A80
label_105268:
    if (ctx->pc == 0x105268u) {
        ctx->pc = 0x105268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105264u;
        // 0x105268: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10526Cu;
        goto label_10526c;
    }
    ctx->pc = 0x105264u;
    SET_GPR_U32(ctx, 31, 0x10526Cu);
    ctx->pc = 0x105268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105264u;
    // 0x105268: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105A80u, 0x105264u, 0x10526Cu)) {
        return;
    }
    ctx->pc = 0x10526Cu;
label_10526c:
    // 0x10526c: 0x16c00039  bnez        $s6, . + 4 + (0x39 << 2)
label_105270:
    if (ctx->pc == 0x105270u) {
        ctx->pc = 0x105270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10526Cu;
        // 0x105270: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105274u;
        goto label_105274;
    }
    ctx->pc = 0x10526Cu;
    {
        const bool branch_taken_0x10526c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x105270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10526Cu;
        // 0x105270: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10526c) {
            ctx->pc = 0x105354u;
            goto label_105354;
        }
    }
    ctx->pc = 0x105274u;
label_105274:
    // 0x105274: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x105274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_105278:
    // 0x105278: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x105278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_10527c:
    // 0x10527c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x10527cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_105280:
    // 0x105280: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x105280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_105284:
    // 0x105284: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x105284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_105288:
    // 0x105288: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x105288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_10528c:
    // 0x10528c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x10528cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_105290:
    // 0x105290: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x105290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_105294:
    // 0x105294: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x105294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_105298:
    // 0x105298: 0x40f809  jalr        $v0
label_10529c:
    if (ctx->pc == 0x10529Cu) {
        ctx->pc = 0x10529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105298u;
        // 0x10529c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1052A0u;
        goto label_1052a0;
    }
    ctx->pc = 0x105298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1052A0u);
        ctx->pc = 0x10529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105298u;
        // 0x10529c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105298u, 0x1052A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1052A0u;
label_1052a0:
    // 0x1052a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1052a4:
    if (ctx->pc == 0x1052A4u) {
        ctx->pc = 0x1052A8u;
        goto label_1052a8;
    }
    ctx->pc = 0x1052A0u;
    {
        const bool branch_taken_0x1052a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1052a0) {
            ctx->pc = 0x1052C0u;
            goto label_1052c0;
        }
    }
    ctx->pc = 0x1052A8u;
label_1052a8:
    // 0x1052a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1052a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1052ac:
    // 0x1052ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1052acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1052b0:
    // 0x1052b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1052b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1052b4:
    // 0x1052b4: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1052b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1052b8:
    // 0x1052b8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1052b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1052bc:
    // 0x1052bc: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1052bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1052c0:
    // 0x1052c0: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1052c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1052c4:
    // 0x1052c4: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1052c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1052c8:
    // 0x1052c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1052c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1052cc:
    // 0x1052cc: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x1052ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1052d0:
    // 0x1052d0: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x1052d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1052d4:
    // 0x1052d4: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x1052d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_1052d8:
    // 0x1052d8: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x1052d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1052dc:
    // 0x1052dc: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x1052dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1052e0:
    // 0x1052e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1052e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1052e4:
    // 0x1052e4: 0xb3a20077  sdl         $v0, 0x77($sp)
    ctx->pc = 0x1052e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1052e8:
    // 0x1052e8: 0xb7a20070  sdr         $v0, 0x70($sp)
    ctx->pc = 0x1052e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1052ec:
    // 0x1052ec: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x1052ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
label_1052f0:
    // 0x1052f0: 0xc0561b6  jal         func_1586D8
label_1052f4:
    if (ctx->pc == 0x1052F4u) {
        ctx->pc = 0x1052F8u;
        goto label_1052f8;
    }
    ctx->pc = 0x1052F0u;
    SET_GPR_U32(ctx, 31, 0x1052F8u);
    ctx->pc = 0x1586D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1586D8u, 0x1052F0u, 0x1052F8u)) {
        return;
    }
    ctx->pc = 0x1052F8u;
label_1052f8:
    // 0x1052f8: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1052f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1052fc:
    // 0x1052fc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1052fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_105300:
    // 0x105300: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105304:
    // 0x105304: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x105304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_105308:
    // 0x105308: 0xc055e08  jal         func_157820
label_10530c:
    if (ctx->pc == 0x10530Cu) {
        ctx->pc = 0x10530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105308u;
        // 0x10530c: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105310u;
        goto label_105310;
    }
    ctx->pc = 0x105308u;
    SET_GPR_U32(ctx, 31, 0x105310u);
    ctx->pc = 0x10530Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105308u;
    // 0x10530c: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x157820u, 0x105308u, 0x105310u)) {
        return;
    }
    ctx->pc = 0x105310u;
label_105310:
    // 0x105310: 0x10000010  b           . + 4 + (0x10 << 2)
label_105314:
    if (ctx->pc == 0x105314u) {
        ctx->pc = 0x105314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105310u;
        // 0x105314: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105318u;
        goto label_105318;
    }
    ctx->pc = 0x105310u;
    {
        const bool branch_taken_0x105310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105310u;
        // 0x105314: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105310) {
            ctx->pc = 0x105354u;
            goto label_105354;
        }
    }
    ctx->pc = 0x105318u;
label_105318:
    // 0x105318: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x105318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_10531c:
    // 0x10531c: 0x5600feac  bnel        $s0, $zero, . + 4 + (-0x154 << 2)
label_105320:
    if (ctx->pc == 0x105320u) {
        ctx->pc = 0x105320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10531Cu;
        // 0x105320: 0x8e14000c  lw          $s4, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105324u;
        goto label_105324;
    }
    ctx->pc = 0x10531Cu;
    {
        const bool branch_taken_0x10531c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10531c) {
            ctx->pc = 0x105320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10531Cu;
            // 0x105320: 0x8e14000c  lw          $s4, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104dd0;
        }
    }
    ctx->pc = 0x105324u;
label_105324:
    // 0x105324: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x105324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_105328:
    // 0x105328: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x105328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_10532c:
    // 0x10532c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10532cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_105330:
    // 0x105330: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x105330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_105334:
    // 0x105334: 0x5440fe98  bnel        $v0, $zero, . + 4 + (-0x168 << 2)
label_105338:
    if (ctx->pc == 0x105338u) {
        ctx->pc = 0x105338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105334u;
        // 0x105338: 0x8ea20010  lw          $v0, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10533Cu;
        goto label_10533c;
    }
    ctx->pc = 0x105334u;
    {
        const bool branch_taken_0x105334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105334) {
            ctx->pc = 0x105338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105334u;
            // 0x105338: 0x8ea20010  lw          $v0, 0x10($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104d98;
        }
    }
    ctx->pc = 0x10533Cu;
label_10533c:
    // 0x10533c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x10533cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_105340:
    // 0x105340: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x105340u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_105344:
    // 0x105344: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x105344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_105348:
    // 0x105348: 0x1440fe85  bnez        $v0, . + 4 + (-0x17B << 2)
label_10534c:
    if (ctx->pc == 0x10534Cu) {
        ctx->pc = 0x10534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105348u;
        // 0x10534c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105350u;
        goto label_105350;
    }
    ctx->pc = 0x105348u;
    {
        const bool branch_taken_0x105348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105348u;
        // 0x10534c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105348) {
            ctx->pc = 0x104D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104d60;
        }
    }
    ctx->pc = 0x105350u;
label_105350:
    // 0x105350: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x105350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_105354:
    // 0x105354: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x105354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_105358:
    // 0x105358: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x105358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_10535c:
    // 0x10535c: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x10535cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_105360:
    // 0x105360: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x105360u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_105364:
    // 0x105364: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x105364u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_105368:
    // 0x105368: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x105368u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_10536c:
    // 0x10536c: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x10536cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_105370:
    // 0x105370: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x105370u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_105374:
    // 0x105374: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x105374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_105378:
    // 0x105378: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x105378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10537c:
    // 0x10537c: 0x3e00008  jr          $ra
label_105380:
    if (ctx->pc == 0x105380u) {
        ctx->pc = 0x105380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10537Cu;
        // 0x105380: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105384u;
        goto label_105384;
    }
    ctx->pc = 0x10537Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10537Cu;
        // 0x105380: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10537Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105384u;
label_105384:
    // 0x105384: 0x0  nop
    ctx->pc = 0x105384u;
    // NOP
    ctx->pc = 0x105388u;
}
