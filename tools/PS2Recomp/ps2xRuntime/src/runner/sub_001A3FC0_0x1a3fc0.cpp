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

// Function: sub_001A3FC0
// Address: 0x1a3fc0 - 0x1a46b0
void sub_001A3FC0_0x1a3fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3FC0_0x1a3fc0");
#endif

    switch (ctx->pc) {
        case 0x1a3fc0u: goto label_1a3fc0;
        case 0x1a3fc4u: goto label_1a3fc4;
        case 0x1a3fc8u: goto label_1a3fc8;
        case 0x1a3fccu: goto label_1a3fcc;
        case 0x1a3fd0u: goto label_1a3fd0;
        case 0x1a3fd4u: goto label_1a3fd4;
        case 0x1a3fd8u: goto label_1a3fd8;
        case 0x1a3fdcu: goto label_1a3fdc;
        case 0x1a3fe0u: goto label_1a3fe0;
        case 0x1a3fe4u: goto label_1a3fe4;
        case 0x1a3fe8u: goto label_1a3fe8;
        case 0x1a3fecu: goto label_1a3fec;
        case 0x1a3ff0u: goto label_1a3ff0;
        case 0x1a3ff4u: goto label_1a3ff4;
        case 0x1a3ff8u: goto label_1a3ff8;
        case 0x1a3ffcu: goto label_1a3ffc;
        case 0x1a4000u: goto label_1a4000;
        case 0x1a4004u: goto label_1a4004;
        case 0x1a4008u: goto label_1a4008;
        case 0x1a400cu: goto label_1a400c;
        case 0x1a4010u: goto label_1a4010;
        case 0x1a4014u: goto label_1a4014;
        case 0x1a4018u: goto label_1a4018;
        case 0x1a401cu: goto label_1a401c;
        case 0x1a4020u: goto label_1a4020;
        case 0x1a4024u: goto label_1a4024;
        case 0x1a4028u: goto label_1a4028;
        case 0x1a402cu: goto label_1a402c;
        case 0x1a4030u: goto label_1a4030;
        case 0x1a4034u: goto label_1a4034;
        case 0x1a4038u: goto label_1a4038;
        case 0x1a403cu: goto label_1a403c;
        case 0x1a4040u: goto label_1a4040;
        case 0x1a4044u: goto label_1a4044;
        case 0x1a4048u: goto label_1a4048;
        case 0x1a404cu: goto label_1a404c;
        case 0x1a4050u: goto label_1a4050;
        case 0x1a4054u: goto label_1a4054;
        case 0x1a4058u: goto label_1a4058;
        case 0x1a405cu: goto label_1a405c;
        case 0x1a4060u: goto label_1a4060;
        case 0x1a4064u: goto label_1a4064;
        case 0x1a4068u: goto label_1a4068;
        case 0x1a406cu: goto label_1a406c;
        case 0x1a4070u: goto label_1a4070;
        case 0x1a4074u: goto label_1a4074;
        case 0x1a4078u: goto label_1a4078;
        case 0x1a407cu: goto label_1a407c;
        case 0x1a4080u: goto label_1a4080;
        case 0x1a4084u: goto label_1a4084;
        case 0x1a4088u: goto label_1a4088;
        case 0x1a408cu: goto label_1a408c;
        case 0x1a4090u: goto label_1a4090;
        case 0x1a4094u: goto label_1a4094;
        case 0x1a4098u: goto label_1a4098;
        case 0x1a409cu: goto label_1a409c;
        case 0x1a40a0u: goto label_1a40a0;
        case 0x1a40a4u: goto label_1a40a4;
        case 0x1a40a8u: goto label_1a40a8;
        case 0x1a40acu: goto label_1a40ac;
        case 0x1a40b0u: goto label_1a40b0;
        case 0x1a40b4u: goto label_1a40b4;
        case 0x1a40b8u: goto label_1a40b8;
        case 0x1a40bcu: goto label_1a40bc;
        case 0x1a40c0u: goto label_1a40c0;
        case 0x1a40c4u: goto label_1a40c4;
        case 0x1a40c8u: goto label_1a40c8;
        case 0x1a40ccu: goto label_1a40cc;
        case 0x1a40d0u: goto label_1a40d0;
        case 0x1a40d4u: goto label_1a40d4;
        case 0x1a40d8u: goto label_1a40d8;
        case 0x1a40dcu: goto label_1a40dc;
        case 0x1a40e0u: goto label_1a40e0;
        case 0x1a40e4u: goto label_1a40e4;
        case 0x1a40e8u: goto label_1a40e8;
        case 0x1a40ecu: goto label_1a40ec;
        case 0x1a40f0u: goto label_1a40f0;
        case 0x1a40f4u: goto label_1a40f4;
        case 0x1a40f8u: goto label_1a40f8;
        case 0x1a40fcu: goto label_1a40fc;
        case 0x1a4100u: goto label_1a4100;
        case 0x1a4104u: goto label_1a4104;
        case 0x1a4108u: goto label_1a4108;
        case 0x1a410cu: goto label_1a410c;
        case 0x1a4110u: goto label_1a4110;
        case 0x1a4114u: goto label_1a4114;
        case 0x1a4118u: goto label_1a4118;
        case 0x1a411cu: goto label_1a411c;
        case 0x1a4120u: goto label_1a4120;
        case 0x1a4124u: goto label_1a4124;
        case 0x1a4128u: goto label_1a4128;
        case 0x1a412cu: goto label_1a412c;
        case 0x1a4130u: goto label_1a4130;
        case 0x1a4134u: goto label_1a4134;
        case 0x1a4138u: goto label_1a4138;
        case 0x1a413cu: goto label_1a413c;
        case 0x1a4140u: goto label_1a4140;
        case 0x1a4144u: goto label_1a4144;
        case 0x1a4148u: goto label_1a4148;
        case 0x1a414cu: goto label_1a414c;
        case 0x1a4150u: goto label_1a4150;
        case 0x1a4154u: goto label_1a4154;
        case 0x1a4158u: goto label_1a4158;
        case 0x1a415cu: goto label_1a415c;
        case 0x1a4160u: goto label_1a4160;
        case 0x1a4164u: goto label_1a4164;
        case 0x1a4168u: goto label_1a4168;
        case 0x1a416cu: goto label_1a416c;
        case 0x1a4170u: goto label_1a4170;
        case 0x1a4174u: goto label_1a4174;
        case 0x1a4178u: goto label_1a4178;
        case 0x1a417cu: goto label_1a417c;
        case 0x1a4180u: goto label_1a4180;
        case 0x1a4184u: goto label_1a4184;
        case 0x1a4188u: goto label_1a4188;
        case 0x1a418cu: goto label_1a418c;
        case 0x1a4190u: goto label_1a4190;
        case 0x1a4194u: goto label_1a4194;
        case 0x1a4198u: goto label_1a4198;
        case 0x1a419cu: goto label_1a419c;
        case 0x1a41a0u: goto label_1a41a0;
        case 0x1a41a4u: goto label_1a41a4;
        case 0x1a41a8u: goto label_1a41a8;
        case 0x1a41acu: goto label_1a41ac;
        case 0x1a41b0u: goto label_1a41b0;
        case 0x1a41b4u: goto label_1a41b4;
        case 0x1a41b8u: goto label_1a41b8;
        case 0x1a41bcu: goto label_1a41bc;
        case 0x1a41c0u: goto label_1a41c0;
        case 0x1a41c4u: goto label_1a41c4;
        case 0x1a41c8u: goto label_1a41c8;
        case 0x1a41ccu: goto label_1a41cc;
        case 0x1a41d0u: goto label_1a41d0;
        case 0x1a41d4u: goto label_1a41d4;
        case 0x1a41d8u: goto label_1a41d8;
        case 0x1a41dcu: goto label_1a41dc;
        case 0x1a41e0u: goto label_1a41e0;
        case 0x1a41e4u: goto label_1a41e4;
        case 0x1a41e8u: goto label_1a41e8;
        case 0x1a41ecu: goto label_1a41ec;
        case 0x1a41f0u: goto label_1a41f0;
        case 0x1a41f4u: goto label_1a41f4;
        case 0x1a41f8u: goto label_1a41f8;
        case 0x1a41fcu: goto label_1a41fc;
        case 0x1a4200u: goto label_1a4200;
        case 0x1a4204u: goto label_1a4204;
        case 0x1a4208u: goto label_1a4208;
        case 0x1a420cu: goto label_1a420c;
        case 0x1a4210u: goto label_1a4210;
        case 0x1a4214u: goto label_1a4214;
        case 0x1a4218u: goto label_1a4218;
        case 0x1a421cu: goto label_1a421c;
        case 0x1a4220u: goto label_1a4220;
        case 0x1a4224u: goto label_1a4224;
        case 0x1a4228u: goto label_1a4228;
        case 0x1a422cu: goto label_1a422c;
        case 0x1a4230u: goto label_1a4230;
        case 0x1a4234u: goto label_1a4234;
        case 0x1a4238u: goto label_1a4238;
        case 0x1a423cu: goto label_1a423c;
        case 0x1a4240u: goto label_1a4240;
        case 0x1a4244u: goto label_1a4244;
        case 0x1a4248u: goto label_1a4248;
        case 0x1a424cu: goto label_1a424c;
        case 0x1a4250u: goto label_1a4250;
        case 0x1a4254u: goto label_1a4254;
        case 0x1a4258u: goto label_1a4258;
        case 0x1a425cu: goto label_1a425c;
        case 0x1a4260u: goto label_1a4260;
        case 0x1a4264u: goto label_1a4264;
        case 0x1a4268u: goto label_1a4268;
        case 0x1a426cu: goto label_1a426c;
        case 0x1a4270u: goto label_1a4270;
        case 0x1a4274u: goto label_1a4274;
        case 0x1a4278u: goto label_1a4278;
        case 0x1a427cu: goto label_1a427c;
        case 0x1a4280u: goto label_1a4280;
        case 0x1a4284u: goto label_1a4284;
        case 0x1a4288u: goto label_1a4288;
        case 0x1a428cu: goto label_1a428c;
        case 0x1a4290u: goto label_1a4290;
        case 0x1a4294u: goto label_1a4294;
        case 0x1a4298u: goto label_1a4298;
        case 0x1a429cu: goto label_1a429c;
        case 0x1a42a0u: goto label_1a42a0;
        case 0x1a42a4u: goto label_1a42a4;
        case 0x1a42a8u: goto label_1a42a8;
        case 0x1a42acu: goto label_1a42ac;
        case 0x1a42b0u: goto label_1a42b0;
        case 0x1a42b4u: goto label_1a42b4;
        case 0x1a42b8u: goto label_1a42b8;
        case 0x1a42bcu: goto label_1a42bc;
        case 0x1a42c0u: goto label_1a42c0;
        case 0x1a42c4u: goto label_1a42c4;
        case 0x1a42c8u: goto label_1a42c8;
        case 0x1a42ccu: goto label_1a42cc;
        case 0x1a42d0u: goto label_1a42d0;
        case 0x1a42d4u: goto label_1a42d4;
        case 0x1a42d8u: goto label_1a42d8;
        case 0x1a42dcu: goto label_1a42dc;
        case 0x1a42e0u: goto label_1a42e0;
        case 0x1a42e4u: goto label_1a42e4;
        case 0x1a42e8u: goto label_1a42e8;
        case 0x1a42ecu: goto label_1a42ec;
        case 0x1a42f0u: goto label_1a42f0;
        case 0x1a42f4u: goto label_1a42f4;
        case 0x1a42f8u: goto label_1a42f8;
        case 0x1a42fcu: goto label_1a42fc;
        case 0x1a4300u: goto label_1a4300;
        case 0x1a4304u: goto label_1a4304;
        case 0x1a4308u: goto label_1a4308;
        case 0x1a430cu: goto label_1a430c;
        case 0x1a4310u: goto label_1a4310;
        case 0x1a4314u: goto label_1a4314;
        case 0x1a4318u: goto label_1a4318;
        case 0x1a431cu: goto label_1a431c;
        case 0x1a4320u: goto label_1a4320;
        case 0x1a4324u: goto label_1a4324;
        case 0x1a4328u: goto label_1a4328;
        case 0x1a432cu: goto label_1a432c;
        case 0x1a4330u: goto label_1a4330;
        case 0x1a4334u: goto label_1a4334;
        case 0x1a4338u: goto label_1a4338;
        case 0x1a433cu: goto label_1a433c;
        case 0x1a4340u: goto label_1a4340;
        case 0x1a4344u: goto label_1a4344;
        case 0x1a4348u: goto label_1a4348;
        case 0x1a434cu: goto label_1a434c;
        case 0x1a4350u: goto label_1a4350;
        case 0x1a4354u: goto label_1a4354;
        case 0x1a4358u: goto label_1a4358;
        case 0x1a435cu: goto label_1a435c;
        case 0x1a4360u: goto label_1a4360;
        case 0x1a4364u: goto label_1a4364;
        case 0x1a4368u: goto label_1a4368;
        case 0x1a436cu: goto label_1a436c;
        case 0x1a4370u: goto label_1a4370;
        case 0x1a4374u: goto label_1a4374;
        case 0x1a4378u: goto label_1a4378;
        case 0x1a437cu: goto label_1a437c;
        case 0x1a4380u: goto label_1a4380;
        case 0x1a4384u: goto label_1a4384;
        case 0x1a4388u: goto label_1a4388;
        case 0x1a438cu: goto label_1a438c;
        case 0x1a4390u: goto label_1a4390;
        case 0x1a4394u: goto label_1a4394;
        case 0x1a4398u: goto label_1a4398;
        case 0x1a439cu: goto label_1a439c;
        case 0x1a43a0u: goto label_1a43a0;
        case 0x1a43a4u: goto label_1a43a4;
        case 0x1a43a8u: goto label_1a43a8;
        case 0x1a43acu: goto label_1a43ac;
        case 0x1a43b0u: goto label_1a43b0;
        case 0x1a43b4u: goto label_1a43b4;
        case 0x1a43b8u: goto label_1a43b8;
        case 0x1a43bcu: goto label_1a43bc;
        case 0x1a43c0u: goto label_1a43c0;
        case 0x1a43c4u: goto label_1a43c4;
        case 0x1a43c8u: goto label_1a43c8;
        case 0x1a43ccu: goto label_1a43cc;
        case 0x1a43d0u: goto label_1a43d0;
        case 0x1a43d4u: goto label_1a43d4;
        case 0x1a43d8u: goto label_1a43d8;
        case 0x1a43dcu: goto label_1a43dc;
        case 0x1a43e0u: goto label_1a43e0;
        case 0x1a43e4u: goto label_1a43e4;
        case 0x1a43e8u: goto label_1a43e8;
        case 0x1a43ecu: goto label_1a43ec;
        case 0x1a43f0u: goto label_1a43f0;
        case 0x1a43f4u: goto label_1a43f4;
        case 0x1a43f8u: goto label_1a43f8;
        case 0x1a43fcu: goto label_1a43fc;
        case 0x1a4400u: goto label_1a4400;
        case 0x1a4404u: goto label_1a4404;
        case 0x1a4408u: goto label_1a4408;
        case 0x1a440cu: goto label_1a440c;
        case 0x1a4410u: goto label_1a4410;
        case 0x1a4414u: goto label_1a4414;
        case 0x1a4418u: goto label_1a4418;
        case 0x1a441cu: goto label_1a441c;
        case 0x1a4420u: goto label_1a4420;
        case 0x1a4424u: goto label_1a4424;
        case 0x1a4428u: goto label_1a4428;
        case 0x1a442cu: goto label_1a442c;
        case 0x1a4430u: goto label_1a4430;
        case 0x1a4434u: goto label_1a4434;
        case 0x1a4438u: goto label_1a4438;
        case 0x1a443cu: goto label_1a443c;
        case 0x1a4440u: goto label_1a4440;
        case 0x1a4444u: goto label_1a4444;
        case 0x1a4448u: goto label_1a4448;
        case 0x1a444cu: goto label_1a444c;
        case 0x1a4450u: goto label_1a4450;
        case 0x1a4454u: goto label_1a4454;
        case 0x1a4458u: goto label_1a4458;
        case 0x1a445cu: goto label_1a445c;
        case 0x1a4460u: goto label_1a4460;
        case 0x1a4464u: goto label_1a4464;
        case 0x1a4468u: goto label_1a4468;
        case 0x1a446cu: goto label_1a446c;
        case 0x1a4470u: goto label_1a4470;
        case 0x1a4474u: goto label_1a4474;
        case 0x1a4478u: goto label_1a4478;
        case 0x1a447cu: goto label_1a447c;
        case 0x1a4480u: goto label_1a4480;
        case 0x1a4484u: goto label_1a4484;
        case 0x1a4488u: goto label_1a4488;
        case 0x1a448cu: goto label_1a448c;
        case 0x1a4490u: goto label_1a4490;
        case 0x1a4494u: goto label_1a4494;
        case 0x1a4498u: goto label_1a4498;
        case 0x1a449cu: goto label_1a449c;
        case 0x1a44a0u: goto label_1a44a0;
        case 0x1a44a4u: goto label_1a44a4;
        case 0x1a44a8u: goto label_1a44a8;
        case 0x1a44acu: goto label_1a44ac;
        case 0x1a44b0u: goto label_1a44b0;
        case 0x1a44b4u: goto label_1a44b4;
        case 0x1a44b8u: goto label_1a44b8;
        case 0x1a44bcu: goto label_1a44bc;
        case 0x1a44c0u: goto label_1a44c0;
        case 0x1a44c4u: goto label_1a44c4;
        case 0x1a44c8u: goto label_1a44c8;
        case 0x1a44ccu: goto label_1a44cc;
        case 0x1a44d0u: goto label_1a44d0;
        case 0x1a44d4u: goto label_1a44d4;
        case 0x1a44d8u: goto label_1a44d8;
        case 0x1a44dcu: goto label_1a44dc;
        case 0x1a44e0u: goto label_1a44e0;
        case 0x1a44e4u: goto label_1a44e4;
        case 0x1a44e8u: goto label_1a44e8;
        case 0x1a44ecu: goto label_1a44ec;
        case 0x1a44f0u: goto label_1a44f0;
        case 0x1a44f4u: goto label_1a44f4;
        case 0x1a44f8u: goto label_1a44f8;
        case 0x1a44fcu: goto label_1a44fc;
        case 0x1a4500u: goto label_1a4500;
        case 0x1a4504u: goto label_1a4504;
        case 0x1a4508u: goto label_1a4508;
        case 0x1a450cu: goto label_1a450c;
        case 0x1a4510u: goto label_1a4510;
        case 0x1a4514u: goto label_1a4514;
        case 0x1a4518u: goto label_1a4518;
        case 0x1a451cu: goto label_1a451c;
        case 0x1a4520u: goto label_1a4520;
        case 0x1a4524u: goto label_1a4524;
        case 0x1a4528u: goto label_1a4528;
        case 0x1a452cu: goto label_1a452c;
        case 0x1a4530u: goto label_1a4530;
        case 0x1a4534u: goto label_1a4534;
        case 0x1a4538u: goto label_1a4538;
        case 0x1a453cu: goto label_1a453c;
        case 0x1a4540u: goto label_1a4540;
        case 0x1a4544u: goto label_1a4544;
        case 0x1a4548u: goto label_1a4548;
        case 0x1a454cu: goto label_1a454c;
        case 0x1a4550u: goto label_1a4550;
        case 0x1a4554u: goto label_1a4554;
        case 0x1a4558u: goto label_1a4558;
        case 0x1a455cu: goto label_1a455c;
        case 0x1a4560u: goto label_1a4560;
        case 0x1a4564u: goto label_1a4564;
        case 0x1a4568u: goto label_1a4568;
        case 0x1a456cu: goto label_1a456c;
        case 0x1a4570u: goto label_1a4570;
        case 0x1a4574u: goto label_1a4574;
        case 0x1a4578u: goto label_1a4578;
        case 0x1a457cu: goto label_1a457c;
        case 0x1a4580u: goto label_1a4580;
        case 0x1a4584u: goto label_1a4584;
        case 0x1a4588u: goto label_1a4588;
        case 0x1a458cu: goto label_1a458c;
        case 0x1a4590u: goto label_1a4590;
        case 0x1a4594u: goto label_1a4594;
        case 0x1a4598u: goto label_1a4598;
        case 0x1a459cu: goto label_1a459c;
        case 0x1a45a0u: goto label_1a45a0;
        case 0x1a45a4u: goto label_1a45a4;
        case 0x1a45a8u: goto label_1a45a8;
        case 0x1a45acu: goto label_1a45ac;
        case 0x1a45b0u: goto label_1a45b0;
        case 0x1a45b4u: goto label_1a45b4;
        case 0x1a45b8u: goto label_1a45b8;
        case 0x1a45bcu: goto label_1a45bc;
        case 0x1a45c0u: goto label_1a45c0;
        case 0x1a45c4u: goto label_1a45c4;
        case 0x1a45c8u: goto label_1a45c8;
        case 0x1a45ccu: goto label_1a45cc;
        case 0x1a45d0u: goto label_1a45d0;
        case 0x1a45d4u: goto label_1a45d4;
        case 0x1a45d8u: goto label_1a45d8;
        case 0x1a45dcu: goto label_1a45dc;
        case 0x1a45e0u: goto label_1a45e0;
        case 0x1a45e4u: goto label_1a45e4;
        case 0x1a45e8u: goto label_1a45e8;
        case 0x1a45ecu: goto label_1a45ec;
        case 0x1a45f0u: goto label_1a45f0;
        case 0x1a45f4u: goto label_1a45f4;
        case 0x1a45f8u: goto label_1a45f8;
        case 0x1a45fcu: goto label_1a45fc;
        case 0x1a4600u: goto label_1a4600;
        case 0x1a4604u: goto label_1a4604;
        case 0x1a4608u: goto label_1a4608;
        case 0x1a460cu: goto label_1a460c;
        case 0x1a4610u: goto label_1a4610;
        case 0x1a4614u: goto label_1a4614;
        case 0x1a4618u: goto label_1a4618;
        case 0x1a461cu: goto label_1a461c;
        case 0x1a4620u: goto label_1a4620;
        case 0x1a4624u: goto label_1a4624;
        case 0x1a4628u: goto label_1a4628;
        case 0x1a462cu: goto label_1a462c;
        case 0x1a4630u: goto label_1a4630;
        case 0x1a4634u: goto label_1a4634;
        case 0x1a4638u: goto label_1a4638;
        case 0x1a463cu: goto label_1a463c;
        case 0x1a4640u: goto label_1a4640;
        case 0x1a4644u: goto label_1a4644;
        case 0x1a4648u: goto label_1a4648;
        case 0x1a464cu: goto label_1a464c;
        case 0x1a4650u: goto label_1a4650;
        case 0x1a4654u: goto label_1a4654;
        case 0x1a4658u: goto label_1a4658;
        case 0x1a465cu: goto label_1a465c;
        case 0x1a4660u: goto label_1a4660;
        case 0x1a4664u: goto label_1a4664;
        case 0x1a4668u: goto label_1a4668;
        case 0x1a466cu: goto label_1a466c;
        case 0x1a4670u: goto label_1a4670;
        case 0x1a4674u: goto label_1a4674;
        case 0x1a4678u: goto label_1a4678;
        case 0x1a467cu: goto label_1a467c;
        case 0x1a4680u: goto label_1a4680;
        case 0x1a4684u: goto label_1a4684;
        case 0x1a4688u: goto label_1a4688;
        case 0x1a468cu: goto label_1a468c;
        case 0x1a4690u: goto label_1a4690;
        case 0x1a4694u: goto label_1a4694;
        case 0x1a4698u: goto label_1a4698;
        case 0x1a469cu: goto label_1a469c;
        case 0x1a46a0u: goto label_1a46a0;
        case 0x1a46a4u: goto label_1a46a4;
        case 0x1a46a8u: goto label_1a46a8;
        case 0x1a46acu: goto label_1a46ac;
        default: break;
    }

    ctx->pc = 0x1a3fc0u;

label_1a3fc0:
    // 0x1a3fc0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1a3fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_1a3fc4:
    // 0x1a3fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3fc8:
    // 0x1a3fc8: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x1a3fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_1a3fcc:
    // 0x1a3fcc: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1a3fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_1a3fd0:
    // 0x1a3fd0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a3fd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a3fd4:
    // 0x1a3fd4: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x1a3fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_1a3fd8:
    // 0x1a3fd8: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x1a3fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_1a3fdc:
    // 0x1a3fdc: 0x26721510  addiu       $s2, $s3, 0x1510
    ctx->pc = 0x1a3fdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 5392));
label_1a3fe0:
    // 0x1a3fe0: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x1a3fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_1a3fe4:
    // 0x1a3fe4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1a3fe4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3fe8:
    // 0x1a3fe8: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x1a3fe8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1a3fec:
    // 0x1a3fec: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1a3fecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ff0:
    // 0x1a3ff0: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x1a3ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_1a3ff4:
    // 0x1a3ff4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1a3ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ff8:
    // 0x1a3ff8: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x1a3ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_1a3ffc:
    // 0x1a3ffc: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1a3ffcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_1a4000:
    // 0x1a4000: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x1a4000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_1a4004:
    // 0x1a4004: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x1a4004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
label_1a4008:
    // 0x1a4008: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1a4008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1a400c:
    // 0x1a400c: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x1a400cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_1a4010:
    // 0x1a4010: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x1a4010u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1a4014:
    // 0x1a4014: 0x8e431390  lw          $v1, 0x1390($s2)
    ctx->pc = 0x1a4014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5008)));
label_1a4018:
    // 0x1a4018: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1a401c:
    if (ctx->pc == 0x1A401Cu) {
        ctx->pc = 0x1A401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4018u;
        // 0x1a401c: 0xafa70098  sw          $a3, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4020u;
        goto label_1a4020;
    }
    ctx->pc = 0x1A4018u;
    {
        const bool branch_taken_0x1a4018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4018u;
        // 0x1a401c: 0xafa70098  sw          $a3, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4018) {
            ctx->pc = 0x1A4040u;
            goto label_1a4040;
        }
    }
    ctx->pc = 0x1A4020u;
label_1a4020:
    // 0x1a4020: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1a4020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a4024:
    // 0x1a4024: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1a4028:
    if (ctx->pc == 0x1A4028u) {
        ctx->pc = 0x1A4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4024u;
        // 0x1a4028: 0x241e0002  addiu       $fp, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A402Cu;
        goto label_1a402c;
    }
    ctx->pc = 0x1A4024u;
    {
        const bool branch_taken_0x1a4024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4024u;
        // 0x1a4028: 0x241e0002  addiu       $fp, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4024) {
            ctx->pc = 0x1A4060u;
            goto label_1a4060;
        }
    }
    ctx->pc = 0x1A402Cu;
label_1a402c:
    // 0x1a402c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a402cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a4030:
    // 0x1a4030: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_1a4034:
    if (ctx->pc == 0x1A4034u) {
        ctx->pc = 0x1A4034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4030u;
        // 0x1a4034: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4038u;
        goto label_1a4038;
    }
    ctx->pc = 0x1A4030u;
    {
        const bool branch_taken_0x1a4030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4030) {
            ctx->pc = 0x1A4034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4030u;
            // 0x1a4034: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4060u;
            goto label_1a4060;
        }
    }
    ctx->pc = 0x1A4038u;
label_1a4038:
    // 0x1a4038: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a403c:
    if (ctx->pc == 0x1A403Cu) {
        ctx->pc = 0x1A403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4038u;
        // 0x1a403c: 0xc640134c  lwc1        $f0, 0x134C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4040u;
        goto label_1a4040;
    }
    ctx->pc = 0x1A4038u;
    {
        const bool branch_taken_0x1a4038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4038u;
        // 0x1a403c: 0xc640134c  lwc1        $f0, 0x134C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4038) {
            ctx->pc = 0x1A4064u;
            goto label_1a4064;
        }
    }
    ctx->pc = 0x1A4040u;
label_1a4040:
    // 0x1a4040: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a4044:
    if (ctx->pc == 0x1A4044u) {
        ctx->pc = 0x1A4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4040u;
        // 0x1a4044: 0x241e0003  addiu       $fp, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4048u;
        goto label_1a4048;
    }
    ctx->pc = 0x1A4040u;
    {
        const bool branch_taken_0x1a4040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4040u;
        // 0x1a4044: 0x241e0003  addiu       $fp, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4040) {
            ctx->pc = 0x1A4060u;
            goto label_1a4060;
        }
    }
    ctx->pc = 0x1A4048u;
label_1a4048:
    // 0x1a4048: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a4048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a404c:
    // 0x1a404c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a404cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4050:
    // 0x1a4050: 0x0  nop
    ctx->pc = 0x1a4050u;
    // NOP
label_1a4054:
    // 0x1a4054: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1a4054u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_1a4058:
    // 0x1a4058: 0x10000093  b           . + 4 + (0x93 << 2)
label_1a405c:
    if (ctx->pc == 0x1A405Cu) {
        ctx->pc = 0x1A405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4058u;
        // 0x1a405c: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4060u;
        goto label_1a4060;
    }
    ctx->pc = 0x1A4058u;
    {
        const bool branch_taken_0x1a4058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4058u;
        // 0x1a405c: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4058) {
            ctx->pc = 0x1A42A8u;
            goto label_1a42a8;
        }
    }
    ctx->pc = 0x1A4060u;
label_1a4060:
    // 0x1a4060: 0xc640134c  lwc1        $f0, 0x134C($s2)
    ctx->pc = 0x1a4060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4064:
    // 0x1a4064: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1a4064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1a4068:
    // 0x1a4068: 0x0  nop
    ctx->pc = 0x1a4068u;
    // NOP
label_1a406c:
    // 0x1a406c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1a406cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4070:
    // 0x1a4070: 0x0  nop
    ctx->pc = 0x1a4070u;
    // NOP
label_1a4074:
    // 0x1a4074: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1a4078:
    if (ctx->pc == 0x1A4078u) {
        ctx->pc = 0x1A4078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4074u;
        // 0x1a4078: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A407Cu;
        goto label_1a407c;
    }
    ctx->pc = 0x1A4074u;
    {
        const bool branch_taken_0x1a4074 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4074u;
        // 0x1a4078: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4074) {
            ctx->pc = 0x1A4080u;
            goto label_1a4080;
        }
    }
    ctx->pc = 0x1A407Cu;
label_1a407c:
    // 0x1a407c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a407cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4080:
    // 0x1a4080: 0x280b82d  daddu       $s7, $s4, $zero
    ctx->pc = 0x1a4080u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a4084:
    // 0x1a4084: 0x12a00115  beqz        $s5, . + 4 + (0x115 << 2)
label_1a4088:
    if (ctx->pc == 0x1A4088u) {
        ctx->pc = 0x1A4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4084u;
        // 0x1a4088: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A408Cu;
        goto label_1a408c;
    }
    ctx->pc = 0x1A4084u;
    {
        const bool branch_taken_0x1a4084 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4084u;
        // 0x1a4088: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4084) {
            ctx->pc = 0x1A44DCu;
            goto label_1a44dc;
        }
    }
    ctx->pc = 0x1A408Cu;
label_1a408c:
    // 0x1a408c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a408cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a4090:
    // 0x1a4090: 0xc04f0cc  jal         func_13C330
label_1a4094:
    if (ctx->pc == 0x1A4094u) {
        ctx->pc = 0x1A4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4090u;
        // 0x1a4094: 0x26700040  addiu       $s0, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4098u;
        goto label_1a4098;
    }
    ctx->pc = 0x1A4090u;
    SET_GPR_U32(ctx, 31, 0x1A4098u);
    ctx->pc = 0x1A4094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4090u;
    // 0x1a4094: 0x26700040  addiu       $s0, $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A4090u, 0x1A4098u)) {
        return;
    }
    ctx->pc = 0x1A4098u;
label_1a4098:
    // 0x1a4098: 0xafb000a0  sw          $s0, 0xA0($sp)
    ctx->pc = 0x1a4098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 16));
label_1a409c:
    // 0x1a409c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a409cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a40a0:
    // 0x1a40a0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1a40a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a40a4:
    // 0x1a40a4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1a40a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a40a8:
    // 0x1a40a8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1a40a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a40ac:
    // 0x1a40ac: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1a40acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a40b0:
    // 0x1a40b0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1a40b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a40b4:
    // 0x1a40b4: 0xc04f0f0  jal         func_13C3C0
label_1a40b8:
    if (ctx->pc == 0x1A40B8u) {
        ctx->pc = 0x1A40B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40B4u;
        // 0x1a40b8: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A40BCu;
        goto label_1a40bc;
    }
    ctx->pc = 0x1A40B4u;
    SET_GPR_U32(ctx, 31, 0x1A40BCu);
    ctx->pc = 0x1A40B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A40B4u;
    // 0x1a40b8: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x1A40B4u, 0x1A40BCu)) {
        return;
    }
    ctx->pc = 0x1A40BCu;
label_1a40bc:
    // 0x1a40bc: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1a40bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a40c0:
    // 0x1a40c0: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1a40c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a40c4:
    // 0x1a40c4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1a40c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a40c8:
    // 0x1a40c8: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x1a40c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a40cc:
    // 0x1a40cc: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x1a40ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a40d0:
    // 0x1a40d0: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x1a40d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
label_1a40d4:
    // 0x1a40d4: 0xc04f0cc  jal         func_13C330
label_1a40d8:
    if (ctx->pc == 0x1A40D8u) {
        ctx->pc = 0x1A40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40D4u;
        // 0x1a40d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A40DCu;
        goto label_1a40dc;
    }
    ctx->pc = 0x1A40D4u;
    SET_GPR_U32(ctx, 31, 0x1A40DCu);
    ctx->pc = 0x1A40D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A40D4u;
    // 0x1a40d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A40D4u, 0x1A40DCu)) {
        return;
    }
    ctx->pc = 0x1A40DCu;
label_1a40dc:
    // 0x1a40dc: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1a40dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a40e0:
    // 0x1a40e0: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1a40e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a40e4:
    // 0x1a40e4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1a40e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a40e8:
    // 0x1a40e8: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x1a40e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a40ec:
    // 0x1a40ec: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x1a40ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a40f0:
    // 0x1a40f0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1a40f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
label_1a40f4:
    // 0x1a40f4: 0xc04f0f0  jal         func_13C3C0
label_1a40f8:
    if (ctx->pc == 0x1A40F8u) {
        ctx->pc = 0x1A40F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40F4u;
        // 0x1a40f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A40FCu;
        goto label_1a40fc;
    }
    ctx->pc = 0x1A40F4u;
    SET_GPR_U32(ctx, 31, 0x1A40FCu);
    ctx->pc = 0x1A40F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A40F4u;
    // 0x1a40f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x1A40F4u, 0x1A40FCu)) {
        return;
    }
    ctx->pc = 0x1A40FCu;
label_1a40fc:
    // 0x1a40fc: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1a40fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a4100:
    // 0x1a4100: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1a4100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a4104:
    // 0x1a4104: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1a4104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a4108:
    // 0x1a4108: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x1a4108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a410c:
    // 0x1a410c: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x1a410cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4110:
    // 0x1a4110: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1a4110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_1a4114:
    // 0x1a4114: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a4114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a4118:
    // 0x1a4118: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x1a4118u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1a411c:
    // 0x1a411c: 0xe7b50054  swc1        $f21, 0x54($sp)
    ctx->pc = 0x1a411cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1a4120:
    // 0x1a4120: 0xc04f0cc  jal         func_13C330
label_1a4124:
    if (ctx->pc == 0x1A4124u) {
        ctx->pc = 0x1A4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4120u;
        // 0x1a4124: 0xe7b50058  swc1        $f21, 0x58($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4128u;
        goto label_1a4128;
    }
    ctx->pc = 0x1A4120u;
    SET_GPR_U32(ctx, 31, 0x1A4128u);
    ctx->pc = 0x1A4124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4120u;
    // 0x1a4124: 0xe7b50058  swc1        $f21, 0x58($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A4120u, 0x1A4128u)) {
        return;
    }
    ctx->pc = 0x1A4128u;
label_1a4128:
    // 0x1a4128: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x1a4128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a412c:
    // 0x1a412c: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x1a412cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1a4130:
    // 0x1a4130: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x1a4130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1a4134:
    // 0x1a4134: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a4134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a4138:
    // 0x1a4138: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x1a4138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a413c:
    // 0x1a413c: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x1a413cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4140:
    // 0x1a4140: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1a4140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_1a4144:
    // 0x1a4144: 0x45000034  bc1f        . + 4 + (0x34 << 2)
label_1a4148:
    if (ctx->pc == 0x1A4148u) {
        ctx->pc = 0x1A414Cu;
        goto label_1a414c;
    }
    ctx->pc = 0x1A4144u;
    {
        const bool branch_taken_0x1a4144 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a4144) {
            ctx->pc = 0x1A4218u;
            goto label_1a4218;
        }
    }
    ctx->pc = 0x1A414Cu;
label_1a414c:
    // 0x1a414c: 0xc6b41500  lwc1        $f20, 0x1500($s5)
    ctx->pc = 0x1a414cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 5376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a4150:
    // 0x1a4150: 0xc04f0f0  jal         func_13C3C0
label_1a4154:
    if (ctx->pc == 0x1A4154u) {
        ctx->pc = 0x1A4154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4150u;
        // 0x1a4154: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4158u;
        goto label_1a4158;
    }
    ctx->pc = 0x1A4150u;
    SET_GPR_U32(ctx, 31, 0x1A4158u);
    ctx->pc = 0x1A4154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4150u;
    // 0x1a4154: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x1A4150u, 0x1A4158u)) {
        return;
    }
    ctx->pc = 0x1A4158u;
label_1a4158:
    // 0x1a4158: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a4158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a415c:
    // 0x1a415c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a415cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4160:
    // 0x1a4160: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x1a4160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a4164:
    // 0x1a4164: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x1a4164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a4168:
    // 0x1a4168: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x1a4168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a416c:
    // 0x1a416c: 0xb3a60067  sdl         $a2, 0x67($sp)
    ctx->pc = 0x1a416cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4170:
    // 0x1a4170: 0xb7a60060  sdr         $a2, 0x60($sp)
    ctx->pc = 0x1a4170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4174:
    // 0x1a4174: 0xafa70068  sw          $a3, 0x68($sp)
    ctx->pc = 0x1a4174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
label_1a4178:
    // 0x1a4178: 0x0  nop
    ctx->pc = 0x1a4178u;
    // NOP
label_1a417c:
    // 0x1a417c: 0x0  nop
    ctx->pc = 0x1a417cu;
    // NOP
label_1a4180:
    // 0x1a4180: 0x46160843  div.s       $f1, $f1, $f22
    ctx->pc = 0x1a4180u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[22]);
label_1a4184:
    // 0x1a4184: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x1a4184u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_1a4188:
    // 0x1a4188: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1a4188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a418c:
    // 0x1a418c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1a418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4190:
    // 0x1a4190: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a4190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1a4194:
    // 0x1a4194: 0x4615a0c2  mul.s       $f3, $f20, $f21
    ctx->pc = 0x1a4194u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
label_1a4198:
    // 0x1a4198: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1a4198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1a419c:
    // 0x1a419c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1a419cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1a41a0:
    // 0x1a41a0: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x1a41a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1a41a4:
    // 0x1a41a4: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1a41a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1a41a8:
    // 0x1a41a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a41a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a41ac:
    // 0x1a41ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a41acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a41b0:
    // 0x1a41b0: 0x0  nop
    ctx->pc = 0x1a41b0u;
    // NOP
label_1a41b4:
    // 0x1a41b4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a41b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1a41b8:
    // 0x1a41b8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a41b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1a41bc:
    // 0x1a41bc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1a41bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1a41c0:
    // 0x1a41c0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1a41c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1a41c4:
    // 0x1a41c4: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x1a41c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1a41c8:
    // 0x1a41c8: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x1a41c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1a41cc:
    // 0x1a41cc: 0x6ba50087  ldl         $a1, 0x87($sp)
    ctx->pc = 0x1a41ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a41d0:
    // 0x1a41d0: 0x6fa50080  ldr         $a1, 0x80($sp)
    ctx->pc = 0x1a41d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a41d4:
    // 0x1a41d4: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x1a41d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1a41d8:
    // 0x1a41d8: 0xb3a50077  sdl         $a1, 0x77($sp)
    ctx->pc = 0x1a41d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a41dc:
    // 0x1a41dc: 0xb7a50070  sdr         $a1, 0x70($sp)
    ctx->pc = 0x1a41dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a41e0:
    // 0x1a41e0: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x1a41e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
label_1a41e4:
    // 0x1a41e4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1a41e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1a41e8:
    // 0x1a41e8: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1a41e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a41ec:
    // 0x1a41ec: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1a41ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a41f0:
    // 0x1a41f0: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x1a41f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a41f4:
    // 0x1a41f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a41f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a41f8:
    // 0x1a41f8: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1a41f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1a41fc:
    // 0x1a41fc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a41fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4200:
    // 0x1a4200: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1a4200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a4204:
    // 0x1a4204: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a4204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1a4208:
    // 0x1a4208: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1a4208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1a420c:
    // 0x1a420c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1a420cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4210:
    // 0x1a4210: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1a4210u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1a4214:
    // 0x1a4214: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x1a4214u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1a4218:
    // 0x1a4218: 0x6ba30057  ldl         $v1, 0x57($sp)
    ctx->pc = 0x1a4218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a421c:
    // 0x1a421c: 0x6fa30050  ldr         $v1, 0x50($sp)
    ctx->pc = 0x1a421cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a4220:
    // 0x1a4220: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a4224:
    // 0x1a4224: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x1a4224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4228:
    // 0x1a4228: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x1a4228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a422c:
    // 0x1a422c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1a422cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_1a4230:
    // 0x1a4230: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1a4230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4234:
    // 0x1a4234: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1a4234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a4238:
    // 0x1a4238: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x1a4238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a423c:
    // 0x1a423c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a423cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1a4240:
    // 0x1a4240: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x1a4240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a4244:
    // 0x1a4244: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1a4244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4248:
    // 0x1a4248: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x1a4248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a424c:
    // 0x1a424c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1a424cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_1a4250:
    // 0x1a4250: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1a4250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1a4254:
    // 0x1a4254: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1a4254u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1a4258:
    // 0x1a4258: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1a4258u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1a425c:
    // 0x1a425c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1a425cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1a4260:
    // 0x1a4260: 0x6ba70067  ldl         $a3, 0x67($sp)
    ctx->pc = 0x1a4260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1a4264:
    // 0x1a4264: 0x6fa70060  ldr         $a3, 0x60($sp)
    ctx->pc = 0x1a4264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1a4268:
    // 0x1a4268: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1a4268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1a426c:
    // 0x1a426c: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x1a426cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4270:
    // 0x1a4270: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x1a4270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4274:
    // 0x1a4274: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1a4274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_1a4278:
    // 0x1a4278: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1a4278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1a427c:
    // 0x1a427c: 0xe7b50054  swc1        $f21, 0x54($sp)
    ctx->pc = 0x1a427cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1a4280:
    // 0x1a4280: 0xc04642c  jal         func_1190B0
label_1a4284:
    if (ctx->pc == 0x1A4284u) {
        ctx->pc = 0x1A4284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4280u;
        // 0x1a4284: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4288u;
        goto label_1a4288;
    }
    ctx->pc = 0x1A4280u;
    SET_GPR_U32(ctx, 31, 0x1A4288u);
    ctx->pc = 0x1A4284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4280u;
    // 0x1a4284: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1A4280u, 0x1A4288u)) {
        return;
    }
    ctx->pc = 0x1A4288u;
label_1a4288:
    // 0x1a4288: 0x0  nop
    ctx->pc = 0x1a4288u;
    // NOP
label_1a428c:
    // 0x1a428c: 0x0  nop
    ctx->pc = 0x1a428cu;
    // NOP
label_1a4290:
    // 0x1a4290: 0x46000044  c1          0x44
    ctx->pc = 0x1a4290u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_1a4294:
    // 0x1a4294: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x1a4294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4298:
    // 0x1a4298: 0x0  nop
    ctx->pc = 0x1a4298u;
    // NOP
label_1a429c:
    // 0x1a429c: 0x4501ff6a  bc1t        . + 4 + (-0x96 << 2)
label_1a42a0:
    if (ctx->pc == 0x1A42A0u) {
        ctx->pc = 0x1A42A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A429Cu;
        // 0x1a42a0: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A42A4u;
        goto label_1a42a4;
    }
    ctx->pc = 0x1A429Cu;
    {
        const bool branch_taken_0x1a429c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A42A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A429Cu;
        // 0x1a42a0: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a429c) {
            ctx->pc = 0x1A4048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4048;
        }
    }
    ctx->pc = 0x1A42A4u;
label_1a42a4:
    // 0x1a42a4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1a42a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a42a8:
    // 0x1a42a8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1a42a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a42ac:
    // 0x1a42ac: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x1a42acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a42b0:
    // 0x1a42b0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1a42b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1a42b4:
    // 0x1a42b4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1a42b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1a42b8:
    // 0x1a42b8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1a42b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1a42bc:
    // 0x1a42bc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1a42bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1a42c0:
    // 0x1a42c0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1a42c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1a42c4:
    // 0x1a42c4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x1a42c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1a42c8:
    // 0x1a42c8: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1a42c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1a42cc:
    // 0x1a42cc: 0x6ba60057  ldl         $a2, 0x57($sp)
    ctx->pc = 0x1a42ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a42d0:
    // 0x1a42d0: 0x6fa60050  ldr         $a2, 0x50($sp)
    ctx->pc = 0x1a42d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a42d4:
    // 0x1a42d4: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1a42d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a42d8:
    // 0x1a42d8: 0xb0a60007  sdl         $a2, 0x7($a1)
    ctx->pc = 0x1a42d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a42dc:
    // 0x1a42dc: 0xb4a60000  sdr         $a2, 0x0($a1)
    ctx->pc = 0x1a42dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a42e0:
    // 0x1a42e0: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x1a42e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
label_1a42e4:
    // 0x1a42e4: 0x56800085  bnel        $s4, $zero, . + 4 + (0x85 << 2)
label_1a42e8:
    if (ctx->pc == 0x1A42E8u) {
        ctx->pc = 0x1A42E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42E4u;
        // 0x1a42e8: 0x8e622aa8  lw          $v0, 0x2AA8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A42ECu;
        goto label_1a42ec;
    }
    ctx->pc = 0x1A42E4u;
    {
        const bool branch_taken_0x1a42e4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a42e4) {
            ctx->pc = 0x1A42E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A42E4u;
            // 0x1a42e8: 0x8e622aa8  lw          $v0, 0x2AA8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10920)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A44FCu;
            goto label_1a44fc;
        }
    }
    ctx->pc = 0x1A42ECu;
label_1a42ec:
    // 0x1a42ec: 0x8e501394  lw          $s0, 0x1394($s2)
    ctx->pc = 0x1a42ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5012)));
label_1a42f0:
    // 0x1a42f0: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x1a42f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a42f4:
    // 0x1a42f4: 0x12140025  beq         $s0, $s4, . + 4 + (0x25 << 2)
label_1a42f8:
    if (ctx->pc == 0x1A42F8u) {
        ctx->pc = 0x1A42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42F4u;
        // 0x1a42f8: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A42FCu;
        goto label_1a42fc;
    }
    ctx->pc = 0x1A42F4u;
    {
        const bool branch_taken_0x1a42f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x1A42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42F4u;
        // 0x1a42f8: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a42f4) {
            ctx->pc = 0x1A438Cu;
            goto label_1a438c;
        }
    }
    ctx->pc = 0x1A42FCu;
label_1a42fc:
    // 0x1a42fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a4300:
    if (ctx->pc == 0x1A4300u) {
        ctx->pc = 0x1A4300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42FCu;
        // 0x1a4300: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4304u;
        goto label_1a4304;
    }
    ctx->pc = 0x1A42FCu;
    {
        const bool branch_taken_0x1a42fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42FCu;
        // 0x1a4300: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a42fc) {
            ctx->pc = 0x1A4314u;
            goto label_1a4314;
        }
    }
    ctx->pc = 0x1A4304u;
label_1a4304:
    // 0x1a4304: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_1a4308:
    if (ctx->pc == 0x1A4308u) {
        ctx->pc = 0x1A4308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4304u;
        // 0x1a4308: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A430Cu;
        goto label_1a430c;
    }
    ctx->pc = 0x1A4304u;
    {
        const bool branch_taken_0x1a4304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A4308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4304u;
        // 0x1a4308: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4304) {
            ctx->pc = 0x1A4328u;
            goto label_1a4328;
        }
    }
    ctx->pc = 0x1A430Cu;
label_1a430c:
    // 0x1a430c: 0x10000078  b           . + 4 + (0x78 << 2)
label_1a4310:
    if (ctx->pc == 0x1A4310u) {
        ctx->pc = 0x1A4314u;
        goto label_1a4314;
    }
    ctx->pc = 0x1A430Cu;
    {
        const bool branch_taken_0x1a430c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a430c) {
            ctx->pc = 0x1A44F0u;
            goto label_1a44f0;
        }
    }
    ctx->pc = 0x1A4314u;
label_1a4314:
    // 0x1a4314: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a4314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a4318:
    // 0x1a4318: 0x52020066  beql        $s0, $v0, . + 4 + (0x66 << 2)
label_1a431c:
    if (ctx->pc == 0x1A431Cu) {
        ctx->pc = 0x1A431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4318u;
        // 0x1a431c: 0x8e630074  lw          $v1, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4320u;
        goto label_1a4320;
    }
    ctx->pc = 0x1A4318u;
    {
        const bool branch_taken_0x1a4318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4318) {
            ctx->pc = 0x1A431Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4318u;
            // 0x1a431c: 0x8e630074  lw          $v1, 0x74($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A44B4u;
            goto label_1a44b4;
        }
    }
    ctx->pc = 0x1A4320u;
label_1a4320:
    // 0x1a4320: 0x10000073  b           . + 4 + (0x73 << 2)
label_1a4324:
    if (ctx->pc == 0x1A4324u) {
        ctx->pc = 0x1A4328u;
        goto label_1a4328;
    }
    ctx->pc = 0x1A4320u;
    {
        const bool branch_taken_0x1a4320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4320) {
            ctx->pc = 0x1A44F0u;
            goto label_1a44f0;
        }
    }
    ctx->pc = 0x1A4328u;
label_1a4328:
    // 0x1a4328: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x1a4328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a432c:
    // 0x1a432c: 0x8e451390  lw          $a1, 0x1390($s2)
    ctx->pc = 0x1a432cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5008)));
label_1a4330:
    // 0x1a4330: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a4334:
    // 0x1a4334: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a4334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4338:
    // 0x1a4338: 0xc0689f6  jal         func_1A27D8
label_1a433c:
    if (ctx->pc == 0x1A433Cu) {
        ctx->pc = 0x1A433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4338u;
        // 0x1a433c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4340u;
        goto label_1a4340;
    }
    ctx->pc = 0x1A4338u;
    SET_GPR_U32(ctx, 31, 0x1A4340u);
    ctx->pc = 0x1A433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4338u;
    // 0x1a433c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A27D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A27D8u, 0x1A4338u, 0x1A4340u)) {
        return;
    }
    ctx->pc = 0x1A4340u;
label_1a4340:
    // 0x1a4340: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_1a4344:
    if (ctx->pc == 0x1A4344u) {
        ctx->pc = 0x1A4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4340u;
        // 0x1a4344: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4348u;
        goto label_1a4348;
    }
    ctx->pc = 0x1A4340u;
    {
        const bool branch_taken_0x1a4340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4340u;
        // 0x1a4344: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4340) {
            ctx->pc = 0x1A44ACu;
            goto label_1a44ac;
        }
    }
    ctx->pc = 0x1A4348u;
label_1a4348:
    // 0x1a4348: 0x8e451390  lw          $a1, 0x1390($s2)
    ctx->pc = 0x1a4348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5008)));
label_1a434c:
    // 0x1a434c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1a434cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4350:
    // 0x1a4350: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a4354:
    // 0x1a4354: 0xc0689b0  jal         func_1A26C0
label_1a4358:
    if (ctx->pc == 0x1A4358u) {
        ctx->pc = 0x1A4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4354u;
        // 0x1a4358: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A435Cu;
        goto label_1a435c;
    }
    ctx->pc = 0x1A4354u;
    SET_GPR_U32(ctx, 31, 0x1A435Cu);
    ctx->pc = 0x1A4358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4354u;
    // 0x1a4358: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A26C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A26C0u, 0x1A4354u, 0x1A435Cu)) {
        return;
    }
    ctx->pc = 0x1A435Cu;
label_1a435c:
    // 0x1a435c: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_1a4360:
    if (ctx->pc == 0x1A4360u) {
        ctx->pc = 0x1A4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A435Cu;
        // 0x1a4360: 0x1e1880  sll         $v1, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4364u;
        goto label_1a4364;
    }
    ctx->pc = 0x1A435Cu;
    {
        const bool branch_taken_0x1a435c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A435Cu;
        // 0x1a4360: 0x1e1880  sll         $v1, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a435c) {
            ctx->pc = 0x1A44F0u;
            goto label_1a44f0;
        }
    }
    ctx->pc = 0x1A4364u;
label_1a4364:
    // 0x1a4364: 0xae541394  sw          $s4, 0x1394($s2)
    ctx->pc = 0x1a4364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5012), GPR_U32(ctx, 20));
label_1a4368:
    // 0x1a4368: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a4368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a436c:
    // 0x1a436c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a436cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4370:
    // 0x1a4370: 0x8e622aa8  lw          $v0, 0x2AA8($s3)
    ctx->pc = 0x1a4370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10920)));
label_1a4374:
    // 0x1a4374: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1a4374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_1a4378:
    // 0x1a4378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a4378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a437c:
    // 0x1a437c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a4380:
    // 0x1a4380: 0xe4410050  swc1        $f1, 0x50($v0)
    ctx->pc = 0x1a4380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_1a4384:
    // 0x1a4384: 0x1000005a  b           . + 4 + (0x5A << 2)
label_1a4388:
    if (ctx->pc == 0x1A4388u) {
        ctx->pc = 0x1A4388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4384u;
        // 0x1a4388: 0xe6c00470  swc1        $f0, 0x470($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 1136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A438Cu;
        goto label_1a438c;
    }
    ctx->pc = 0x1A4384u;
    {
        const bool branch_taken_0x1a4384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4384u;
        // 0x1a4388: 0xe6c00470  swc1        $f0, 0x470($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 1136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4384) {
            ctx->pc = 0x1A44F0u;
            goto label_1a44f0;
        }
    }
    ctx->pc = 0x1A438Cu;
label_1a438c:
    // 0x1a438c: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x1a438cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_1a4390:
    // 0x1a4390: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1a4390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1a4394:
    // 0x1a4394: 0x84640178  lh          $a0, 0x178($v1)
    ctx->pc = 0x1a4394u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 376)));
label_1a4398:
    // 0x1a4398: 0x8c62017c  lw          $v0, 0x17C($v1)
    ctx->pc = 0x1a4398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 380)));
label_1a439c:
    // 0x1a439c: 0x40f809  jalr        $v0
label_1a43a0:
    if (ctx->pc == 0x1A43A0u) {
        ctx->pc = 0x1A43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A439Cu;
        // 0x1a43a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43A4u;
        goto label_1a43a4;
    }
    ctx->pc = 0x1A439Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A43A4u);
        ctx->pc = 0x1A43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A439Cu;
        // 0x1a43a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A439Cu, 0x1A43A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A43A4u;
label_1a43a4:
    // 0x1a43a4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_1a43a8:
    if (ctx->pc == 0x1A43A8u) {
        ctx->pc = 0x1A43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43A4u;
        // 0x1a43a8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43ACu;
        goto label_1a43ac;
    }
    ctx->pc = 0x1A43A4u;
    {
        const bool branch_taken_0x1a43a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43A4u;
        // 0x1a43a8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a43a4) {
            ctx->pc = 0x1A4490u;
            goto label_1a4490;
        }
    }
    ctx->pc = 0x1A43ACu;
label_1a43ac:
    // 0x1a43ac: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x1a43acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_1a43b0:
    // 0x1a43b0: 0xae431394  sw          $v1, 0x1394($s2)
    ctx->pc = 0x1a43b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5012), GPR_U32(ctx, 3));
label_1a43b4:
    // 0x1a43b4: 0x8e622aa8  lw          $v0, 0x2AA8($s3)
    ctx->pc = 0x1a43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10920)));
label_1a43b8:
    // 0x1a43b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a43bc:
    // 0x1a43bc: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1a43bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_1a43c0:
    // 0x1a43c0: 0x8e431390  lw          $v1, 0x1390($s2)
    ctx->pc = 0x1a43c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5008)));
label_1a43c4:
    // 0x1a43c4: 0x14700018  bne         $v1, $s0, . + 4 + (0x18 << 2)
label_1a43c8:
    if (ctx->pc == 0x1A43C8u) {
        ctx->pc = 0x1A43CCu;
        goto label_1a43cc;
    }
    ctx->pc = 0x1A43C4u;
    {
        const bool branch_taken_0x1a43c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x1a43c4) {
            ctx->pc = 0x1A4428u;
            goto label_1a4428;
        }
    }
    ctx->pc = 0x1A43CCu;
label_1a43cc:
    // 0x1a43cc: 0x8e421330  lw          $v0, 0x1330($s2)
    ctx->pc = 0x1a43ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4912)));
label_1a43d0:
    // 0x1a43d0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1a43d4:
    if (ctx->pc == 0x1A43D4u) {
        ctx->pc = 0x1A43D8u;
        goto label_1a43d8;
    }
    ctx->pc = 0x1A43D0u;
    {
        const bool branch_taken_0x1a43d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a43d0) {
            ctx->pc = 0x1A4428u;
            goto label_1a4428;
        }
    }
    ctx->pc = 0x1A43D8u;
label_1a43d8:
    // 0x1a43d8: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1a43d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_1a43dc:
    // 0x1a43dc: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1a43dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_1a43e0:
    // 0x1a43e0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1a43e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_1a43e4:
    // 0x1a43e4: 0x6ba60067  ldl         $a2, 0x67($sp)
    ctx->pc = 0x1a43e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a43e8:
    // 0x1a43e8: 0x6fa60060  ldr         $a2, 0x60($sp)
    ctx->pc = 0x1a43e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a43ec:
    // 0x1a43ec: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1a43ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1a43f0:
    // 0x1a43f0: 0xb2261377  sdl         $a2, 0x1377($s1)
    ctx->pc = 0x1a43f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4983); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a43f4:
    // 0x1a43f4: 0xb6261370  sdr         $a2, 0x1370($s1)
    ctx->pc = 0x1a43f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4976); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a43f8:
    // 0x1a43f8: 0xae271378  sw          $a3, 0x1378($s1)
    ctx->pc = 0x1a43f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4984), GPR_U32(ctx, 7));
label_1a43fc:
    // 0x1a43fc: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1a43fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_1a4400:
    // 0x1a4400: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1a4400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_1a4404:
    // 0x1a4404: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1a4404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_1a4408:
    // 0x1a4408: 0x6ba40067  ldl         $a0, 0x67($sp)
    ctx->pc = 0x1a4408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a440c:
    // 0x1a440c: 0x6fa40060  ldr         $a0, 0x60($sp)
    ctx->pc = 0x1a440cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a4410:
    // 0x1a4410: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1a4410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1a4414:
    // 0x1a4414: 0xb2241387  sdl         $a0, 0x1387($s1)
    ctx->pc = 0x1a4414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4999); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4418:
    // 0x1a4418: 0xb6241380  sdr         $a0, 0x1380($s1)
    ctx->pc = 0x1a4418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4992); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a441c:
    // 0x1a441c: 0xae251388  sw          $a1, 0x1388($s1)
    ctx->pc = 0x1a441cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5000), GPR_U32(ctx, 5));
label_1a4420:
    // 0x1a4420: 0x10000033  b           . + 4 + (0x33 << 2)
label_1a4424:
    if (ctx->pc == 0x1A4424u) {
        ctx->pc = 0x1A4428u;
        goto label_1a4428;
    }
    ctx->pc = 0x1A4420u;
    {
        const bool branch_taken_0x1a4420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4420) {
            ctx->pc = 0x1A44F0u;
            goto label_1a44f0;
        }
    }
    ctx->pc = 0x1A4428u;
label_1a4428:
    // 0x1a4428: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x1a4428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a442c:
    // 0x1a442c: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x1a442cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a4430:
    // 0x1a4430: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a4430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a4434:
    // 0x1a4434: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x1a4434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4438:
    // 0x1a4438: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x1a4438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a443c:
    // 0x1a443c: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x1a443cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_1a4440:
    // 0x1a4440: 0x6ba60067  ldl         $a2, 0x67($sp)
    ctx->pc = 0x1a4440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a4444:
    // 0x1a4444: 0x6fa60060  ldr         $a2, 0x60($sp)
    ctx->pc = 0x1a4444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a4448:
    // 0x1a4448: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1a4448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1a444c:
    // 0x1a444c: 0xb2261377  sdl         $a2, 0x1377($s1)
    ctx->pc = 0x1a444cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4983); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4450:
    // 0x1a4450: 0xb6261370  sdr         $a2, 0x1370($s1)
    ctx->pc = 0x1a4450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4976); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4454:
    // 0x1a4454: 0xae271378  sw          $a3, 0x1378($s1)
    ctx->pc = 0x1a4454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4984), GPR_U32(ctx, 7));
label_1a4458:
    // 0x1a4458: 0x6ba40057  ldl         $a0, 0x57($sp)
    ctx->pc = 0x1a4458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a445c:
    // 0x1a445c: 0x6fa40050  ldr         $a0, 0x50($sp)
    ctx->pc = 0x1a445cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a4460:
    // 0x1a4460: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a4460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a4464:
    // 0x1a4464: 0xb3a40067  sdl         $a0, 0x67($sp)
    ctx->pc = 0x1a4464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4468:
    // 0x1a4468: 0xb7a40060  sdr         $a0, 0x60($sp)
    ctx->pc = 0x1a4468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a446c:
    // 0x1a446c: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x1a446cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
label_1a4470:
    // 0x1a4470: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x1a4470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a4474:
    // 0x1a4474: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x1a4474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a4478:
    // 0x1a4478: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a4478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1a447c:
    // 0x1a447c: 0xb2221387  sdl         $v0, 0x1387($s1)
    ctx->pc = 0x1a447cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4999); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4480:
    // 0x1a4480: 0xb6221380  sdr         $v0, 0x1380($s1)
    ctx->pc = 0x1a4480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4992); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4484:
    // 0x1a4484: 0xae231388  sw          $v1, 0x1388($s1)
    ctx->pc = 0x1a4484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5000), GPR_U32(ctx, 3));
label_1a4488:
    // 0x1a4488: 0x10000019  b           . + 4 + (0x19 << 2)
label_1a448c:
    if (ctx->pc == 0x1A448Cu) {
        ctx->pc = 0x1A4490u;
        goto label_1a4490;
    }
    ctx->pc = 0x1A4488u;
    {
        const bool branch_taken_0x1a4488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4488) {
            ctx->pc = 0x1A44F0u;
            goto label_1a44f0;
        }
    }
    ctx->pc = 0x1A4490u;
label_1a4490:
    // 0x1a4490: 0xc6c00470  lwc1        $f0, 0x470($s6)
    ctx->pc = 0x1a4490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4494:
    // 0x1a4494: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a4494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4498:
    // 0x1a4498: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x1a4498u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_1a449c:
    // 0x1a449c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a449cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a44a0:
    // 0x1a44a0: 0x0  nop
    ctx->pc = 0x1a44a0u;
    // NOP
label_1a44a4:
    // 0x1a44a4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_1a44a8:
    if (ctx->pc == 0x1A44A8u) {
        ctx->pc = 0x1A44A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44A4u;
        // 0x1a44a8: 0xe6c00470  swc1        $f0, 0x470($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 1136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A44ACu;
        goto label_1a44ac;
    }
    ctx->pc = 0x1A44A4u;
    {
        const bool branch_taken_0x1a44a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A44A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44A4u;
        // 0x1a44a8: 0xe6c00470  swc1        $f0, 0x470($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 1136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a44a4) {
            ctx->pc = 0x1A44F0u;
            goto label_1a44f0;
        }
    }
    ctx->pc = 0x1A44ACu;
label_1a44ac:
    // 0x1a44ac: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a44b0:
    if (ctx->pc == 0x1A44B0u) {
        ctx->pc = 0x1A44B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44ACu;
        // 0x1a44b0: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A44B4u;
        goto label_1a44b4;
    }
    ctx->pc = 0x1A44ACu;
    {
        const bool branch_taken_0x1a44ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A44B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44ACu;
        // 0x1a44b0: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a44ac) {
            ctx->pc = 0x1A44F0u;
            goto label_1a44f0;
        }
    }
    ctx->pc = 0x1A44B4u;
label_1a44b4:
    // 0x1a44b4: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x1a44b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1a44b8:
    // 0x1a44b8: 0x84640178  lh          $a0, 0x178($v1)
    ctx->pc = 0x1a44b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 376)));
label_1a44bc:
    // 0x1a44bc: 0x8c62017c  lw          $v0, 0x17C($v1)
    ctx->pc = 0x1a44bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 380)));
label_1a44c0:
    // 0x1a44c0: 0x40f809  jalr        $v0
label_1a44c4:
    if (ctx->pc == 0x1A44C4u) {
        ctx->pc = 0x1A44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44C0u;
        // 0x1a44c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A44C8u;
        goto label_1a44c8;
    }
    ctx->pc = 0x1A44C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A44C8u);
        ctx->pc = 0x1A44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44C0u;
        // 0x1a44c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A44C0u, 0x1A44C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A44C8u;
label_1a44c8:
    // 0x1a44c8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1a44cc:
    if (ctx->pc == 0x1A44CCu) {
        ctx->pc = 0x1A44D0u;
        goto label_1a44d0;
    }
    ctx->pc = 0x1A44C8u;
    {
        const bool branch_taken_0x1a44c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a44c8) {
            ctx->pc = 0x1A44F0u;
            goto label_1a44f0;
        }
    }
    ctx->pc = 0x1A44D0u;
label_1a44d0:
    // 0x1a44d0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1a44d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a44d4:
    // 0x1a44d4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a44d8:
    if (ctx->pc == 0x1A44D8u) {
        ctx->pc = 0x1A44D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44D4u;
        // 0x1a44d8: 0xafb7009c  sw          $s7, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A44DCu;
        goto label_1a44dc;
    }
    ctx->pc = 0x1A44D4u;
    {
        const bool branch_taken_0x1a44d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A44D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44D4u;
        // 0x1a44d8: 0xafb7009c  sw          $s7, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a44d4) {
            ctx->pc = 0x1A44F0u;
            goto label_1a44f0;
        }
    }
    ctx->pc = 0x1A44DCu;
label_1a44dc:
    // 0x1a44dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a44dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a44e0:
    // 0x1a44e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a44e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a44e4:
    // 0x1a44e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a44e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a44e8:
    // 0x1a44e8: 0xc0685da  jal         func_1A1768
label_1a44ec:
    if (ctx->pc == 0x1A44ECu) {
        ctx->pc = 0x1A44ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44E8u;
        // 0x1a44ec: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A44F0u;
        goto label_1a44f0;
    }
    ctx->pc = 0x1A44E8u;
    SET_GPR_U32(ctx, 31, 0x1A44F0u);
    ctx->pc = 0x1A44ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A44E8u;
    // 0x1a44ec: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1768u, 0x1A44E8u, 0x1A44F0u)) {
        return;
    }
    ctx->pc = 0x1A44F0u;
label_1a44f0:
    // 0x1a44f0: 0x12e00060  beqz        $s7, . + 4 + (0x60 << 2)
label_1a44f4:
    if (ctx->pc == 0x1A44F4u) {
        ctx->pc = 0x1A44F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44F0u;
        // 0x1a44f4: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A44F8u;
        goto label_1a44f8;
    }
    ctx->pc = 0x1A44F0u;
    {
        const bool branch_taken_0x1a44f0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A44F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44F0u;
        // 0x1a44f4: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a44f0) {
            ctx->pc = 0x1A4674u;
            goto label_1a4674;
        }
    }
    ctx->pc = 0x1A44F8u;
label_1a44f8:
    // 0x1a44f8: 0x8e622aa8  lw          $v0, 0x2AA8($s3)
    ctx->pc = 0x1a44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10920)));
label_1a44fc:
    // 0x1a44fc: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x1a44fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_1a4500:
    // 0x1a4500: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1a4500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1a4504:
    // 0x1a4504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a4504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a4508:
    // 0x1a4508: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a4508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1a450c:
    // 0x1a450c: 0x8fa7009c  lw          $a3, 0x9C($sp)
    ctx->pc = 0x1a450cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1a4510:
    // 0x1a4510: 0x50e00035  beql        $a3, $zero, . + 4 + (0x35 << 2)
label_1a4514:
    if (ctx->pc == 0x1A4514u) {
        ctx->pc = 0x1A4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4510u;
        // 0x1a4514: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4518u;
        goto label_1a4518;
    }
    ctx->pc = 0x1A4510u;
    {
        const bool branch_taken_0x1a4510 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4510) {
            ctx->pc = 0x1A4514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4510u;
            // 0x1a4514: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A45E8u;
            goto label_1a45e8;
        }
    }
    ctx->pc = 0x1A4518u;
label_1a4518:
    // 0x1a4518: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1a4518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1a451c:
    // 0x1a451c: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_1a4520:
    if (ctx->pc == 0x1A4520u) {
        ctx->pc = 0x1A4520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A451Cu;
        // 0x1a4520: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4524u;
        goto label_1a4524;
    }
    ctx->pc = 0x1A451Cu;
    {
        const bool branch_taken_0x1a451c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A451Cu;
        // 0x1a4520: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a451c) {
            ctx->pc = 0x1A4634u;
            goto label_1a4634;
        }
    }
    ctx->pc = 0x1A4524u;
label_1a4524:
    // 0x1a4524: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x1a4524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
label_1a4528:
    // 0x1a4528: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1a4528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1a452c:
    // 0x1a452c: 0x265e12d8  addiu       $fp, $s2, 0x12D8
    ctx->pc = 0x1a452cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 4824));
label_1a4530:
    // 0x1a4530: 0x265712dc  addiu       $s7, $s2, 0x12DC
    ctx->pc = 0x1a4530u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 4828));
label_1a4534:
    // 0x1a4534: 0x26d1000c  addiu       $s1, $s6, 0xC
    ctx->pc = 0x1a4534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
label_1a4538:
    // 0x1a4538: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1a4538u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a453c:
    // 0x1a453c: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
label_1a4540:
    if (ctx->pc == 0x1A4540u) {
        ctx->pc = 0x1A4540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A453Cu;
        // 0x1a4540: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4544u;
        goto label_1a4544;
    }
    ctx->pc = 0x1A453Cu;
    {
        const bool branch_taken_0x1a453c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A453Cu;
        // 0x1a4540: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a453c) {
            ctx->pc = 0x1A45CCu;
            goto label_1a45cc;
        }
    }
    ctx->pc = 0x1A4544u;
label_1a4544:
    // 0x1a4544: 0x8e421390  lw          $v0, 0x1390($s2)
    ctx->pc = 0x1a4544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5008)));
label_1a4548:
    // 0x1a4548: 0x26141510  addiu       $s4, $s0, 0x1510
    ctx->pc = 0x1a4548u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 5392));
label_1a454c:
    // 0x1a454c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1a454cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1a4550:
    // 0x1a4550: 0x2e21821  addu        $v1, $s7, $v0
    ctx->pc = 0x1a4550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_1a4554:
    // 0x1a4554: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1a4554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_1a4558:
    // 0x1a4558: 0xc4750000  lwc1        $f21, 0x0($v1)
    ctx->pc = 0x1a4558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a455c:
    // 0x1a455c: 0xc0c580c  jal         func_316030
label_1a4560:
    if (ctx->pc == 0x1A4560u) {
        ctx->pc = 0x1A4560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A455Cu;
        // 0x1a4560: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4564u;
        goto label_1a4564;
    }
    ctx->pc = 0x1A455Cu;
    SET_GPR_U32(ctx, 31, 0x1A4564u);
    ctx->pc = 0x1A4560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A455Cu;
    // 0x1a4560: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x1A455Cu, 0x1A4564u)) {
        return;
    }
    ctx->pc = 0x1A4564u;
label_1a4564:
    // 0x1a4564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4568:
    // 0x1a4568: 0x0  nop
    ctx->pc = 0x1a4568u;
    // NOP
label_1a456c:
    // 0x1a456c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a456cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a4570:
    // 0x1a4570: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x1a4570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_1a4574:
    // 0x1a4574: 0x4614ad41  sub.s       $f21, $f21, $f20
    ctx->pc = 0x1a4574u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_1a4578:
    // 0x1a4578: 0x27a30094  addiu       $v1, $sp, 0x94
    ctx->pc = 0x1a4578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_1a457c:
    // 0x1a457c: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1a457cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4580:
    // 0x1a4580: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1a4580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1a4584:
    // 0x1a4584: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1a4584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_1a4588:
    // 0x1a4588: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1a4588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1a458c:
    // 0x1a458c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a458cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1a4590:
    // 0x1a4590: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1a4590u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4594:
    // 0x1a4594: 0x0  nop
    ctx->pc = 0x1a4594u;
    // NOP
label_1a4598:
    // 0x1a4598: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1a459c:
    if (ctx->pc == 0x1A459Cu) {
        ctx->pc = 0x1A459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4598u;
        // 0x1a459c: 0xe7b40094  swc1        $f20, 0x94($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A45A0u;
        goto label_1a45a0;
    }
    ctx->pc = 0x1A4598u;
    {
        const bool branch_taken_0x1a4598 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4598u;
        // 0x1a459c: 0xe7b40094  swc1        $f20, 0x94($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4598) {
            ctx->pc = 0x1A45A4u;
            goto label_1a45a4;
        }
    }
    ctx->pc = 0x1A45A0u;
label_1a45a0:
    // 0x1a45a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a45a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a45a4:
    // 0x1a45a4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1a45a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a45a8:
    // 0x1a45a8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1a45a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1a45ac:
    // 0x1a45ac: 0xc600285c  lwc1        $f0, 0x285C($s0)
    ctx->pc = 0x1a45acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a45b0:
    // 0x1a45b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a45b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a45b4:
    // 0x1a45b4: 0x0  nop
    ctx->pc = 0x1a45b4u;
    // NOP
label_1a45b8:
    // 0x1a45b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1a45bc:
    if (ctx->pc == 0x1A45BCu) {
        ctx->pc = 0x1A45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45B8u;
        // 0x1a45bc: 0x2602285c  addiu       $v0, $s0, 0x285C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10332));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A45C0u;
        goto label_1a45c0;
    }
    ctx->pc = 0x1A45B8u;
    {
        const bool branch_taken_0x1a45b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45B8u;
        // 0x1a45bc: 0x2602285c  addiu       $v0, $s0, 0x285C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a45b8) {
            ctx->pc = 0x1A45C4u;
            goto label_1a45c4;
        }
    }
    ctx->pc = 0x1A45C0u;
label_1a45c0:
    // 0x1a45c0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a45c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a45c4:
    // 0x1a45c4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a45c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a45c8:
    // 0x1a45c8: 0xe680134c  swc1        $f0, 0x134C($s4)
    ctx->pc = 0x1a45c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4940), bits); }
label_1a45cc:
    // 0x1a45cc: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1a45ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1a45d0:
    // 0x1a45d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a45d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1a45d4:
    // 0x1a45d4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1a45d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a45d8:
    // 0x1a45d8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_1a45dc:
    if (ctx->pc == 0x1A45DCu) {
        ctx->pc = 0x1A45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45D8u;
        // 0x1a45dc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A45E0u;
        goto label_1a45e0;
    }
    ctx->pc = 0x1A45D8u;
    {
        const bool branch_taken_0x1a45d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45D8u;
        // 0x1a45dc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a45d8) {
            ctx->pc = 0x1A4538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4538;
        }
    }
    ctx->pc = 0x1A45E0u;
label_1a45e0:
    // 0x1a45e0: 0x10000015  b           . + 4 + (0x15 << 2)
label_1a45e4:
    if (ctx->pc == 0x1A45E4u) {
        ctx->pc = 0x1A45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45E0u;
        // 0x1a45e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A45E8u;
        goto label_1a45e8;
    }
    ctx->pc = 0x1A45E0u;
    {
        const bool branch_taken_0x1a45e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45E0u;
        // 0x1a45e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a45e0) {
            ctx->pc = 0x1A4638u;
            goto label_1a4638;
        }
    }
    ctx->pc = 0x1A45E8u;
label_1a45e8:
    // 0x1a45e8: 0xc640134c  lwc1        $f0, 0x134C($s2)
    ctx->pc = 0x1a45e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a45ec:
    // 0x1a45ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a45ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a45f0:
    // 0x1a45f0: 0x0  nop
    ctx->pc = 0x1a45f0u;
    // NOP
label_1a45f4:
    // 0x1a45f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1a45f8:
    if (ctx->pc == 0x1A45F8u) {
        ctx->pc = 0x1A45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45F4u;
        // 0x1a45f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A45FCu;
        goto label_1a45fc;
    }
    ctx->pc = 0x1A45F4u;
    {
        const bool branch_taken_0x1a45f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45F4u;
        // 0x1a45f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a45f4) {
            ctx->pc = 0x1A4600u;
            goto label_1a4600;
        }
    }
    ctx->pc = 0x1A45FCu;
label_1a45fc:
    // 0x1a45fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a45fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4600:
    // 0x1a4600: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1a4604:
    if (ctx->pc == 0x1A4604u) {
        ctx->pc = 0x1A4604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4600u;
        // 0x1a4604: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4608u;
        goto label_1a4608;
    }
    ctx->pc = 0x1A4600u;
    {
        const bool branch_taken_0x1a4600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4600u;
        // 0x1a4604: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4600) {
            ctx->pc = 0x1A4638u;
            goto label_1a4638;
        }
    }
    ctx->pc = 0x1A4608u;
label_1a4608:
    // 0x1a4608: 0x8e431390  lw          $v1, 0x1390($s2)
    ctx->pc = 0x1a4608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5008)));
label_1a460c:
    // 0x1a460c: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x1a460cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1a4610:
    // 0x1a4610: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a4614:
    if (ctx->pc == 0x1A4614u) {
        ctx->pc = 0x1A4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4610u;
        // 0x1a4614: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4618u;
        goto label_1a4618;
    }
    ctx->pc = 0x1A4610u;
    {
        const bool branch_taken_0x1a4610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4610u;
        // 0x1a4614: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4610) {
            ctx->pc = 0x1A4634u;
            goto label_1a4634;
        }
    }
    ctx->pc = 0x1A4618u;
label_1a4618:
    // 0x1a4618: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a461c:
    // 0x1a461c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1a461cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1a4620:
    // 0x1a4620: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1a4620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1a4624:
    // 0x1a4624: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a4624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a4628:
    // 0x1a4628: 0xc46d12dc  lwc1        $f13, 0x12DC($v1)
    ctx->pc = 0x1a4628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a462c:
    // 0x1a462c: 0xc0688dc  jal         func_1A2370
label_1a4630:
    if (ctx->pc == 0x1A4630u) {
        ctx->pc = 0x1A4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A462Cu;
        // 0x1a4630: 0xc44c12d8  lwc1        $f12, 0x12D8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4634u;
        goto label_1a4634;
    }
    ctx->pc = 0x1A462Cu;
    SET_GPR_U32(ctx, 31, 0x1A4634u);
    ctx->pc = 0x1A4630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A462Cu;
    // 0x1a4630: 0xc44c12d8  lwc1        $f12, 0x12D8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A2370u, 0x1A462Cu, 0x1A4634u)) {
        return;
    }
    ctx->pc = 0x1A4634u;
label_1a4634:
    // 0x1a4634: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a4634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a4638:
    // 0x1a4638: 0xae401394  sw          $zero, 0x1394($s2)
    ctx->pc = 0x1a4638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5012), GPR_U32(ctx, 0));
label_1a463c:
    // 0x1a463c: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_1a4640:
    if (ctx->pc == 0x1A4640u) {
        ctx->pc = 0x1A4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A463Cu;
        // 0x1a4640: 0xae421390  sw          $v0, 0x1390($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4644u;
        goto label_1a4644;
    }
    ctx->pc = 0x1A463Cu;
    {
        const bool branch_taken_0x1a463c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A463Cu;
        // 0x1a4640: 0xae421390  sw          $v0, 0x1390($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a463c) {
            ctx->pc = 0x1A4654u;
            goto label_1a4654;
        }
    }
    ctx->pc = 0x1A4644u;
label_1a4644:
    // 0x1a4644: 0xc04f0cc  jal         func_13C330
label_1a4648:
    if (ctx->pc == 0x1A4648u) {
        ctx->pc = 0x1A4648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4644u;
        // 0x1a4648: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A464Cu;
        goto label_1a464c;
    }
    ctx->pc = 0x1A4644u;
    SET_GPR_U32(ctx, 31, 0x1A464Cu);
    ctx->pc = 0x1A4648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4644u;
    // 0x1a4648: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A4644u, 0x1A464Cu)) {
        return;
    }
    ctx->pc = 0x1A464Cu;
label_1a464c:
    // 0x1a464c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a4650:
    if (ctx->pc == 0x1A4650u) {
        ctx->pc = 0x1A4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A464Cu;
        // 0x1a4650: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4654u;
        goto label_1a4654;
    }
    ctx->pc = 0x1A464Cu;
    {
        const bool branch_taken_0x1a464c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A464Cu;
        // 0x1a4650: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a464c) {
            ctx->pc = 0x1A465Cu;
            goto label_1a465c;
        }
    }
    ctx->pc = 0x1A4654u;
label_1a4654:
    // 0x1a4654: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4658:
    // 0x1a4658: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a465c:
    // 0x1a465c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a465cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4660:
    // 0x1a4660: 0xc0685da  jal         func_1A1768
label_1a4664:
    if (ctx->pc == 0x1A4664u) {
        ctx->pc = 0x1A4664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4660u;
        // 0x1a4664: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4668u;
        goto label_1a4668;
    }
    ctx->pc = 0x1A4660u;
    SET_GPR_U32(ctx, 31, 0x1A4668u);
    ctx->pc = 0x1A4664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4660u;
    // 0x1a4664: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1768u, 0x1A4660u, 0x1A4668u)) {
        return;
    }
    ctx->pc = 0x1A4668u;
label_1a4668:
    // 0x1a4668: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1a4668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_1a466c:
    // 0x1a466c: 0xac80909c  sw          $zero, -0x6F64($a0)
    ctx->pc = 0x1a466cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294938780), GPR_U32(ctx, 0));
label_1a4670:
    // 0x1a4670: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x1a4670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1a4674:
    // 0x1a4674: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1a4674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1a4678:
    // 0x1a4678: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x1a4678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1a467c:
    // 0x1a467c: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x1a467cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1a4680:
    // 0x1a4680: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x1a4680u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1a4684:
    // 0x1a4684: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x1a4684u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1a4688:
    // 0x1a4688: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x1a4688u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1a468c:
    // 0x1a468c: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x1a468cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1a4690:
    // 0x1a4690: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x1a4690u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1a4694:
    // 0x1a4694: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1a4694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1a4698:
    // 0x1a4698: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x1a4698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1a469c:
    // 0x1a469c: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x1a469cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a46a0:
    // 0x1a46a0: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x1a46a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a46a4:
    // 0x1a46a4: 0x3e00008  jr          $ra
label_1a46a8:
    if (ctx->pc == 0x1A46A8u) {
        ctx->pc = 0x1A46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46A4u;
        // 0x1a46a8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A46ACu;
        goto label_1a46ac;
    }
    ctx->pc = 0x1A46A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46A4u;
        // 0x1a46a8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A46A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A46ACu;
label_1a46ac:
    // 0x1a46ac: 0x0  nop
    ctx->pc = 0x1a46acu;
    // NOP
    ctx->pc = 0x1a46b0u;
}
