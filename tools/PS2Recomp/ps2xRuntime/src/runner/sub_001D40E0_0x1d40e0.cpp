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

// Function: sub_001D40E0
// Address: 0x1d40e0 - 0x1d5280
void sub_001D40E0_0x1d40e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D40E0_0x1d40e0");
#endif

    switch (ctx->pc) {
        case 0x1d40e0u: goto label_1d40e0;
        case 0x1d40e4u: goto label_1d40e4;
        case 0x1d40e8u: goto label_1d40e8;
        case 0x1d40ecu: goto label_1d40ec;
        case 0x1d40f0u: goto label_1d40f0;
        case 0x1d40f4u: goto label_1d40f4;
        case 0x1d40f8u: goto label_1d40f8;
        case 0x1d40fcu: goto label_1d40fc;
        case 0x1d4100u: goto label_1d4100;
        case 0x1d4104u: goto label_1d4104;
        case 0x1d4108u: goto label_1d4108;
        case 0x1d410cu: goto label_1d410c;
        case 0x1d4110u: goto label_1d4110;
        case 0x1d4114u: goto label_1d4114;
        case 0x1d4118u: goto label_1d4118;
        case 0x1d411cu: goto label_1d411c;
        case 0x1d4120u: goto label_1d4120;
        case 0x1d4124u: goto label_1d4124;
        case 0x1d4128u: goto label_1d4128;
        case 0x1d412cu: goto label_1d412c;
        case 0x1d4130u: goto label_1d4130;
        case 0x1d4134u: goto label_1d4134;
        case 0x1d4138u: goto label_1d4138;
        case 0x1d413cu: goto label_1d413c;
        case 0x1d4140u: goto label_1d4140;
        case 0x1d4144u: goto label_1d4144;
        case 0x1d4148u: goto label_1d4148;
        case 0x1d414cu: goto label_1d414c;
        case 0x1d4150u: goto label_1d4150;
        case 0x1d4154u: goto label_1d4154;
        case 0x1d4158u: goto label_1d4158;
        case 0x1d415cu: goto label_1d415c;
        case 0x1d4160u: goto label_1d4160;
        case 0x1d4164u: goto label_1d4164;
        case 0x1d4168u: goto label_1d4168;
        case 0x1d416cu: goto label_1d416c;
        case 0x1d4170u: goto label_1d4170;
        case 0x1d4174u: goto label_1d4174;
        case 0x1d4178u: goto label_1d4178;
        case 0x1d417cu: goto label_1d417c;
        case 0x1d4180u: goto label_1d4180;
        case 0x1d4184u: goto label_1d4184;
        case 0x1d4188u: goto label_1d4188;
        case 0x1d418cu: goto label_1d418c;
        case 0x1d4190u: goto label_1d4190;
        case 0x1d4194u: goto label_1d4194;
        case 0x1d4198u: goto label_1d4198;
        case 0x1d419cu: goto label_1d419c;
        case 0x1d41a0u: goto label_1d41a0;
        case 0x1d41a4u: goto label_1d41a4;
        case 0x1d41a8u: goto label_1d41a8;
        case 0x1d41acu: goto label_1d41ac;
        case 0x1d41b0u: goto label_1d41b0;
        case 0x1d41b4u: goto label_1d41b4;
        case 0x1d41b8u: goto label_1d41b8;
        case 0x1d41bcu: goto label_1d41bc;
        case 0x1d41c0u: goto label_1d41c0;
        case 0x1d41c4u: goto label_1d41c4;
        case 0x1d41c8u: goto label_1d41c8;
        case 0x1d41ccu: goto label_1d41cc;
        case 0x1d41d0u: goto label_1d41d0;
        case 0x1d41d4u: goto label_1d41d4;
        case 0x1d41d8u: goto label_1d41d8;
        case 0x1d41dcu: goto label_1d41dc;
        case 0x1d41e0u: goto label_1d41e0;
        case 0x1d41e4u: goto label_1d41e4;
        case 0x1d41e8u: goto label_1d41e8;
        case 0x1d41ecu: goto label_1d41ec;
        case 0x1d41f0u: goto label_1d41f0;
        case 0x1d41f4u: goto label_1d41f4;
        case 0x1d41f8u: goto label_1d41f8;
        case 0x1d41fcu: goto label_1d41fc;
        case 0x1d4200u: goto label_1d4200;
        case 0x1d4204u: goto label_1d4204;
        case 0x1d4208u: goto label_1d4208;
        case 0x1d420cu: goto label_1d420c;
        case 0x1d4210u: goto label_1d4210;
        case 0x1d4214u: goto label_1d4214;
        case 0x1d4218u: goto label_1d4218;
        case 0x1d421cu: goto label_1d421c;
        case 0x1d4220u: goto label_1d4220;
        case 0x1d4224u: goto label_1d4224;
        case 0x1d4228u: goto label_1d4228;
        case 0x1d422cu: goto label_1d422c;
        case 0x1d4230u: goto label_1d4230;
        case 0x1d4234u: goto label_1d4234;
        case 0x1d4238u: goto label_1d4238;
        case 0x1d423cu: goto label_1d423c;
        case 0x1d4240u: goto label_1d4240;
        case 0x1d4244u: goto label_1d4244;
        case 0x1d4248u: goto label_1d4248;
        case 0x1d424cu: goto label_1d424c;
        case 0x1d4250u: goto label_1d4250;
        case 0x1d4254u: goto label_1d4254;
        case 0x1d4258u: goto label_1d4258;
        case 0x1d425cu: goto label_1d425c;
        case 0x1d4260u: goto label_1d4260;
        case 0x1d4264u: goto label_1d4264;
        case 0x1d4268u: goto label_1d4268;
        case 0x1d426cu: goto label_1d426c;
        case 0x1d4270u: goto label_1d4270;
        case 0x1d4274u: goto label_1d4274;
        case 0x1d4278u: goto label_1d4278;
        case 0x1d427cu: goto label_1d427c;
        case 0x1d4280u: goto label_1d4280;
        case 0x1d4284u: goto label_1d4284;
        case 0x1d4288u: goto label_1d4288;
        case 0x1d428cu: goto label_1d428c;
        case 0x1d4290u: goto label_1d4290;
        case 0x1d4294u: goto label_1d4294;
        case 0x1d4298u: goto label_1d4298;
        case 0x1d429cu: goto label_1d429c;
        case 0x1d42a0u: goto label_1d42a0;
        case 0x1d42a4u: goto label_1d42a4;
        case 0x1d42a8u: goto label_1d42a8;
        case 0x1d42acu: goto label_1d42ac;
        case 0x1d42b0u: goto label_1d42b0;
        case 0x1d42b4u: goto label_1d42b4;
        case 0x1d42b8u: goto label_1d42b8;
        case 0x1d42bcu: goto label_1d42bc;
        case 0x1d42c0u: goto label_1d42c0;
        case 0x1d42c4u: goto label_1d42c4;
        case 0x1d42c8u: goto label_1d42c8;
        case 0x1d42ccu: goto label_1d42cc;
        case 0x1d42d0u: goto label_1d42d0;
        case 0x1d42d4u: goto label_1d42d4;
        case 0x1d42d8u: goto label_1d42d8;
        case 0x1d42dcu: goto label_1d42dc;
        case 0x1d42e0u: goto label_1d42e0;
        case 0x1d42e4u: goto label_1d42e4;
        case 0x1d42e8u: goto label_1d42e8;
        case 0x1d42ecu: goto label_1d42ec;
        case 0x1d42f0u: goto label_1d42f0;
        case 0x1d42f4u: goto label_1d42f4;
        case 0x1d42f8u: goto label_1d42f8;
        case 0x1d42fcu: goto label_1d42fc;
        case 0x1d4300u: goto label_1d4300;
        case 0x1d4304u: goto label_1d4304;
        case 0x1d4308u: goto label_1d4308;
        case 0x1d430cu: goto label_1d430c;
        case 0x1d4310u: goto label_1d4310;
        case 0x1d4314u: goto label_1d4314;
        case 0x1d4318u: goto label_1d4318;
        case 0x1d431cu: goto label_1d431c;
        case 0x1d4320u: goto label_1d4320;
        case 0x1d4324u: goto label_1d4324;
        case 0x1d4328u: goto label_1d4328;
        case 0x1d432cu: goto label_1d432c;
        case 0x1d4330u: goto label_1d4330;
        case 0x1d4334u: goto label_1d4334;
        case 0x1d4338u: goto label_1d4338;
        case 0x1d433cu: goto label_1d433c;
        case 0x1d4340u: goto label_1d4340;
        case 0x1d4344u: goto label_1d4344;
        case 0x1d4348u: goto label_1d4348;
        case 0x1d434cu: goto label_1d434c;
        case 0x1d4350u: goto label_1d4350;
        case 0x1d4354u: goto label_1d4354;
        case 0x1d4358u: goto label_1d4358;
        case 0x1d435cu: goto label_1d435c;
        case 0x1d4360u: goto label_1d4360;
        case 0x1d4364u: goto label_1d4364;
        case 0x1d4368u: goto label_1d4368;
        case 0x1d436cu: goto label_1d436c;
        case 0x1d4370u: goto label_1d4370;
        case 0x1d4374u: goto label_1d4374;
        case 0x1d4378u: goto label_1d4378;
        case 0x1d437cu: goto label_1d437c;
        case 0x1d4380u: goto label_1d4380;
        case 0x1d4384u: goto label_1d4384;
        case 0x1d4388u: goto label_1d4388;
        case 0x1d438cu: goto label_1d438c;
        case 0x1d4390u: goto label_1d4390;
        case 0x1d4394u: goto label_1d4394;
        case 0x1d4398u: goto label_1d4398;
        case 0x1d439cu: goto label_1d439c;
        case 0x1d43a0u: goto label_1d43a0;
        case 0x1d43a4u: goto label_1d43a4;
        case 0x1d43a8u: goto label_1d43a8;
        case 0x1d43acu: goto label_1d43ac;
        case 0x1d43b0u: goto label_1d43b0;
        case 0x1d43b4u: goto label_1d43b4;
        case 0x1d43b8u: goto label_1d43b8;
        case 0x1d43bcu: goto label_1d43bc;
        case 0x1d43c0u: goto label_1d43c0;
        case 0x1d43c4u: goto label_1d43c4;
        case 0x1d43c8u: goto label_1d43c8;
        case 0x1d43ccu: goto label_1d43cc;
        case 0x1d43d0u: goto label_1d43d0;
        case 0x1d43d4u: goto label_1d43d4;
        case 0x1d43d8u: goto label_1d43d8;
        case 0x1d43dcu: goto label_1d43dc;
        case 0x1d43e0u: goto label_1d43e0;
        case 0x1d43e4u: goto label_1d43e4;
        case 0x1d43e8u: goto label_1d43e8;
        case 0x1d43ecu: goto label_1d43ec;
        case 0x1d43f0u: goto label_1d43f0;
        case 0x1d43f4u: goto label_1d43f4;
        case 0x1d43f8u: goto label_1d43f8;
        case 0x1d43fcu: goto label_1d43fc;
        case 0x1d4400u: goto label_1d4400;
        case 0x1d4404u: goto label_1d4404;
        case 0x1d4408u: goto label_1d4408;
        case 0x1d440cu: goto label_1d440c;
        case 0x1d4410u: goto label_1d4410;
        case 0x1d4414u: goto label_1d4414;
        case 0x1d4418u: goto label_1d4418;
        case 0x1d441cu: goto label_1d441c;
        case 0x1d4420u: goto label_1d4420;
        case 0x1d4424u: goto label_1d4424;
        case 0x1d4428u: goto label_1d4428;
        case 0x1d442cu: goto label_1d442c;
        case 0x1d4430u: goto label_1d4430;
        case 0x1d4434u: goto label_1d4434;
        case 0x1d4438u: goto label_1d4438;
        case 0x1d443cu: goto label_1d443c;
        case 0x1d4440u: goto label_1d4440;
        case 0x1d4444u: goto label_1d4444;
        case 0x1d4448u: goto label_1d4448;
        case 0x1d444cu: goto label_1d444c;
        case 0x1d4450u: goto label_1d4450;
        case 0x1d4454u: goto label_1d4454;
        case 0x1d4458u: goto label_1d4458;
        case 0x1d445cu: goto label_1d445c;
        case 0x1d4460u: goto label_1d4460;
        case 0x1d4464u: goto label_1d4464;
        case 0x1d4468u: goto label_1d4468;
        case 0x1d446cu: goto label_1d446c;
        case 0x1d4470u: goto label_1d4470;
        case 0x1d4474u: goto label_1d4474;
        case 0x1d4478u: goto label_1d4478;
        case 0x1d447cu: goto label_1d447c;
        case 0x1d4480u: goto label_1d4480;
        case 0x1d4484u: goto label_1d4484;
        case 0x1d4488u: goto label_1d4488;
        case 0x1d448cu: goto label_1d448c;
        case 0x1d4490u: goto label_1d4490;
        case 0x1d4494u: goto label_1d4494;
        case 0x1d4498u: goto label_1d4498;
        case 0x1d449cu: goto label_1d449c;
        case 0x1d44a0u: goto label_1d44a0;
        case 0x1d44a4u: goto label_1d44a4;
        case 0x1d44a8u: goto label_1d44a8;
        case 0x1d44acu: goto label_1d44ac;
        case 0x1d44b0u: goto label_1d44b0;
        case 0x1d44b4u: goto label_1d44b4;
        case 0x1d44b8u: goto label_1d44b8;
        case 0x1d44bcu: goto label_1d44bc;
        case 0x1d44c0u: goto label_1d44c0;
        case 0x1d44c4u: goto label_1d44c4;
        case 0x1d44c8u: goto label_1d44c8;
        case 0x1d44ccu: goto label_1d44cc;
        case 0x1d44d0u: goto label_1d44d0;
        case 0x1d44d4u: goto label_1d44d4;
        case 0x1d44d8u: goto label_1d44d8;
        case 0x1d44dcu: goto label_1d44dc;
        case 0x1d44e0u: goto label_1d44e0;
        case 0x1d44e4u: goto label_1d44e4;
        case 0x1d44e8u: goto label_1d44e8;
        case 0x1d44ecu: goto label_1d44ec;
        case 0x1d44f0u: goto label_1d44f0;
        case 0x1d44f4u: goto label_1d44f4;
        case 0x1d44f8u: goto label_1d44f8;
        case 0x1d44fcu: goto label_1d44fc;
        case 0x1d4500u: goto label_1d4500;
        case 0x1d4504u: goto label_1d4504;
        case 0x1d4508u: goto label_1d4508;
        case 0x1d450cu: goto label_1d450c;
        case 0x1d4510u: goto label_1d4510;
        case 0x1d4514u: goto label_1d4514;
        case 0x1d4518u: goto label_1d4518;
        case 0x1d451cu: goto label_1d451c;
        case 0x1d4520u: goto label_1d4520;
        case 0x1d4524u: goto label_1d4524;
        case 0x1d4528u: goto label_1d4528;
        case 0x1d452cu: goto label_1d452c;
        case 0x1d4530u: goto label_1d4530;
        case 0x1d4534u: goto label_1d4534;
        case 0x1d4538u: goto label_1d4538;
        case 0x1d453cu: goto label_1d453c;
        case 0x1d4540u: goto label_1d4540;
        case 0x1d4544u: goto label_1d4544;
        case 0x1d4548u: goto label_1d4548;
        case 0x1d454cu: goto label_1d454c;
        case 0x1d4550u: goto label_1d4550;
        case 0x1d4554u: goto label_1d4554;
        case 0x1d4558u: goto label_1d4558;
        case 0x1d455cu: goto label_1d455c;
        case 0x1d4560u: goto label_1d4560;
        case 0x1d4564u: goto label_1d4564;
        case 0x1d4568u: goto label_1d4568;
        case 0x1d456cu: goto label_1d456c;
        case 0x1d4570u: goto label_1d4570;
        case 0x1d4574u: goto label_1d4574;
        case 0x1d4578u: goto label_1d4578;
        case 0x1d457cu: goto label_1d457c;
        case 0x1d4580u: goto label_1d4580;
        case 0x1d4584u: goto label_1d4584;
        case 0x1d4588u: goto label_1d4588;
        case 0x1d458cu: goto label_1d458c;
        case 0x1d4590u: goto label_1d4590;
        case 0x1d4594u: goto label_1d4594;
        case 0x1d4598u: goto label_1d4598;
        case 0x1d459cu: goto label_1d459c;
        case 0x1d45a0u: goto label_1d45a0;
        case 0x1d45a4u: goto label_1d45a4;
        case 0x1d45a8u: goto label_1d45a8;
        case 0x1d45acu: goto label_1d45ac;
        case 0x1d45b0u: goto label_1d45b0;
        case 0x1d45b4u: goto label_1d45b4;
        case 0x1d45b8u: goto label_1d45b8;
        case 0x1d45bcu: goto label_1d45bc;
        case 0x1d45c0u: goto label_1d45c0;
        case 0x1d45c4u: goto label_1d45c4;
        case 0x1d45c8u: goto label_1d45c8;
        case 0x1d45ccu: goto label_1d45cc;
        case 0x1d45d0u: goto label_1d45d0;
        case 0x1d45d4u: goto label_1d45d4;
        case 0x1d45d8u: goto label_1d45d8;
        case 0x1d45dcu: goto label_1d45dc;
        case 0x1d45e0u: goto label_1d45e0;
        case 0x1d45e4u: goto label_1d45e4;
        case 0x1d45e8u: goto label_1d45e8;
        case 0x1d45ecu: goto label_1d45ec;
        case 0x1d45f0u: goto label_1d45f0;
        case 0x1d45f4u: goto label_1d45f4;
        case 0x1d45f8u: goto label_1d45f8;
        case 0x1d45fcu: goto label_1d45fc;
        case 0x1d4600u: goto label_1d4600;
        case 0x1d4604u: goto label_1d4604;
        case 0x1d4608u: goto label_1d4608;
        case 0x1d460cu: goto label_1d460c;
        case 0x1d4610u: goto label_1d4610;
        case 0x1d4614u: goto label_1d4614;
        case 0x1d4618u: goto label_1d4618;
        case 0x1d461cu: goto label_1d461c;
        case 0x1d4620u: goto label_1d4620;
        case 0x1d4624u: goto label_1d4624;
        case 0x1d4628u: goto label_1d4628;
        case 0x1d462cu: goto label_1d462c;
        case 0x1d4630u: goto label_1d4630;
        case 0x1d4634u: goto label_1d4634;
        case 0x1d4638u: goto label_1d4638;
        case 0x1d463cu: goto label_1d463c;
        case 0x1d4640u: goto label_1d4640;
        case 0x1d4644u: goto label_1d4644;
        case 0x1d4648u: goto label_1d4648;
        case 0x1d464cu: goto label_1d464c;
        case 0x1d4650u: goto label_1d4650;
        case 0x1d4654u: goto label_1d4654;
        case 0x1d4658u: goto label_1d4658;
        case 0x1d465cu: goto label_1d465c;
        case 0x1d4660u: goto label_1d4660;
        case 0x1d4664u: goto label_1d4664;
        case 0x1d4668u: goto label_1d4668;
        case 0x1d466cu: goto label_1d466c;
        case 0x1d4670u: goto label_1d4670;
        case 0x1d4674u: goto label_1d4674;
        case 0x1d4678u: goto label_1d4678;
        case 0x1d467cu: goto label_1d467c;
        case 0x1d4680u: goto label_1d4680;
        case 0x1d4684u: goto label_1d4684;
        case 0x1d4688u: goto label_1d4688;
        case 0x1d468cu: goto label_1d468c;
        case 0x1d4690u: goto label_1d4690;
        case 0x1d4694u: goto label_1d4694;
        case 0x1d4698u: goto label_1d4698;
        case 0x1d469cu: goto label_1d469c;
        case 0x1d46a0u: goto label_1d46a0;
        case 0x1d46a4u: goto label_1d46a4;
        case 0x1d46a8u: goto label_1d46a8;
        case 0x1d46acu: goto label_1d46ac;
        case 0x1d46b0u: goto label_1d46b0;
        case 0x1d46b4u: goto label_1d46b4;
        case 0x1d46b8u: goto label_1d46b8;
        case 0x1d46bcu: goto label_1d46bc;
        case 0x1d46c0u: goto label_1d46c0;
        case 0x1d46c4u: goto label_1d46c4;
        case 0x1d46c8u: goto label_1d46c8;
        case 0x1d46ccu: goto label_1d46cc;
        case 0x1d46d0u: goto label_1d46d0;
        case 0x1d46d4u: goto label_1d46d4;
        case 0x1d46d8u: goto label_1d46d8;
        case 0x1d46dcu: goto label_1d46dc;
        case 0x1d46e0u: goto label_1d46e0;
        case 0x1d46e4u: goto label_1d46e4;
        case 0x1d46e8u: goto label_1d46e8;
        case 0x1d46ecu: goto label_1d46ec;
        case 0x1d46f0u: goto label_1d46f0;
        case 0x1d46f4u: goto label_1d46f4;
        case 0x1d46f8u: goto label_1d46f8;
        case 0x1d46fcu: goto label_1d46fc;
        case 0x1d4700u: goto label_1d4700;
        case 0x1d4704u: goto label_1d4704;
        case 0x1d4708u: goto label_1d4708;
        case 0x1d470cu: goto label_1d470c;
        case 0x1d4710u: goto label_1d4710;
        case 0x1d4714u: goto label_1d4714;
        case 0x1d4718u: goto label_1d4718;
        case 0x1d471cu: goto label_1d471c;
        case 0x1d4720u: goto label_1d4720;
        case 0x1d4724u: goto label_1d4724;
        case 0x1d4728u: goto label_1d4728;
        case 0x1d472cu: goto label_1d472c;
        case 0x1d4730u: goto label_1d4730;
        case 0x1d4734u: goto label_1d4734;
        case 0x1d4738u: goto label_1d4738;
        case 0x1d473cu: goto label_1d473c;
        case 0x1d4740u: goto label_1d4740;
        case 0x1d4744u: goto label_1d4744;
        case 0x1d4748u: goto label_1d4748;
        case 0x1d474cu: goto label_1d474c;
        case 0x1d4750u: goto label_1d4750;
        case 0x1d4754u: goto label_1d4754;
        case 0x1d4758u: goto label_1d4758;
        case 0x1d475cu: goto label_1d475c;
        case 0x1d4760u: goto label_1d4760;
        case 0x1d4764u: goto label_1d4764;
        case 0x1d4768u: goto label_1d4768;
        case 0x1d476cu: goto label_1d476c;
        case 0x1d4770u: goto label_1d4770;
        case 0x1d4774u: goto label_1d4774;
        case 0x1d4778u: goto label_1d4778;
        case 0x1d477cu: goto label_1d477c;
        case 0x1d4780u: goto label_1d4780;
        case 0x1d4784u: goto label_1d4784;
        case 0x1d4788u: goto label_1d4788;
        case 0x1d478cu: goto label_1d478c;
        case 0x1d4790u: goto label_1d4790;
        case 0x1d4794u: goto label_1d4794;
        case 0x1d4798u: goto label_1d4798;
        case 0x1d479cu: goto label_1d479c;
        case 0x1d47a0u: goto label_1d47a0;
        case 0x1d47a4u: goto label_1d47a4;
        case 0x1d47a8u: goto label_1d47a8;
        case 0x1d47acu: goto label_1d47ac;
        case 0x1d47b0u: goto label_1d47b0;
        case 0x1d47b4u: goto label_1d47b4;
        case 0x1d47b8u: goto label_1d47b8;
        case 0x1d47bcu: goto label_1d47bc;
        case 0x1d47c0u: goto label_1d47c0;
        case 0x1d47c4u: goto label_1d47c4;
        case 0x1d47c8u: goto label_1d47c8;
        case 0x1d47ccu: goto label_1d47cc;
        case 0x1d47d0u: goto label_1d47d0;
        case 0x1d47d4u: goto label_1d47d4;
        case 0x1d47d8u: goto label_1d47d8;
        case 0x1d47dcu: goto label_1d47dc;
        case 0x1d47e0u: goto label_1d47e0;
        case 0x1d47e4u: goto label_1d47e4;
        case 0x1d47e8u: goto label_1d47e8;
        case 0x1d47ecu: goto label_1d47ec;
        case 0x1d47f0u: goto label_1d47f0;
        case 0x1d47f4u: goto label_1d47f4;
        case 0x1d47f8u: goto label_1d47f8;
        case 0x1d47fcu: goto label_1d47fc;
        case 0x1d4800u: goto label_1d4800;
        case 0x1d4804u: goto label_1d4804;
        case 0x1d4808u: goto label_1d4808;
        case 0x1d480cu: goto label_1d480c;
        case 0x1d4810u: goto label_1d4810;
        case 0x1d4814u: goto label_1d4814;
        case 0x1d4818u: goto label_1d4818;
        case 0x1d481cu: goto label_1d481c;
        case 0x1d4820u: goto label_1d4820;
        case 0x1d4824u: goto label_1d4824;
        case 0x1d4828u: goto label_1d4828;
        case 0x1d482cu: goto label_1d482c;
        case 0x1d4830u: goto label_1d4830;
        case 0x1d4834u: goto label_1d4834;
        case 0x1d4838u: goto label_1d4838;
        case 0x1d483cu: goto label_1d483c;
        case 0x1d4840u: goto label_1d4840;
        case 0x1d4844u: goto label_1d4844;
        case 0x1d4848u: goto label_1d4848;
        case 0x1d484cu: goto label_1d484c;
        case 0x1d4850u: goto label_1d4850;
        case 0x1d4854u: goto label_1d4854;
        case 0x1d4858u: goto label_1d4858;
        case 0x1d485cu: goto label_1d485c;
        case 0x1d4860u: goto label_1d4860;
        case 0x1d4864u: goto label_1d4864;
        case 0x1d4868u: goto label_1d4868;
        case 0x1d486cu: goto label_1d486c;
        case 0x1d4870u: goto label_1d4870;
        case 0x1d4874u: goto label_1d4874;
        case 0x1d4878u: goto label_1d4878;
        case 0x1d487cu: goto label_1d487c;
        case 0x1d4880u: goto label_1d4880;
        case 0x1d4884u: goto label_1d4884;
        case 0x1d4888u: goto label_1d4888;
        case 0x1d488cu: goto label_1d488c;
        case 0x1d4890u: goto label_1d4890;
        case 0x1d4894u: goto label_1d4894;
        case 0x1d4898u: goto label_1d4898;
        case 0x1d489cu: goto label_1d489c;
        case 0x1d48a0u: goto label_1d48a0;
        case 0x1d48a4u: goto label_1d48a4;
        case 0x1d48a8u: goto label_1d48a8;
        case 0x1d48acu: goto label_1d48ac;
        case 0x1d48b0u: goto label_1d48b0;
        case 0x1d48b4u: goto label_1d48b4;
        case 0x1d48b8u: goto label_1d48b8;
        case 0x1d48bcu: goto label_1d48bc;
        case 0x1d48c0u: goto label_1d48c0;
        case 0x1d48c4u: goto label_1d48c4;
        case 0x1d48c8u: goto label_1d48c8;
        case 0x1d48ccu: goto label_1d48cc;
        case 0x1d48d0u: goto label_1d48d0;
        case 0x1d48d4u: goto label_1d48d4;
        case 0x1d48d8u: goto label_1d48d8;
        case 0x1d48dcu: goto label_1d48dc;
        case 0x1d48e0u: goto label_1d48e0;
        case 0x1d48e4u: goto label_1d48e4;
        case 0x1d48e8u: goto label_1d48e8;
        case 0x1d48ecu: goto label_1d48ec;
        case 0x1d48f0u: goto label_1d48f0;
        case 0x1d48f4u: goto label_1d48f4;
        case 0x1d48f8u: goto label_1d48f8;
        case 0x1d48fcu: goto label_1d48fc;
        case 0x1d4900u: goto label_1d4900;
        case 0x1d4904u: goto label_1d4904;
        case 0x1d4908u: goto label_1d4908;
        case 0x1d490cu: goto label_1d490c;
        case 0x1d4910u: goto label_1d4910;
        case 0x1d4914u: goto label_1d4914;
        case 0x1d4918u: goto label_1d4918;
        case 0x1d491cu: goto label_1d491c;
        case 0x1d4920u: goto label_1d4920;
        case 0x1d4924u: goto label_1d4924;
        case 0x1d4928u: goto label_1d4928;
        case 0x1d492cu: goto label_1d492c;
        case 0x1d4930u: goto label_1d4930;
        case 0x1d4934u: goto label_1d4934;
        case 0x1d4938u: goto label_1d4938;
        case 0x1d493cu: goto label_1d493c;
        case 0x1d4940u: goto label_1d4940;
        case 0x1d4944u: goto label_1d4944;
        case 0x1d4948u: goto label_1d4948;
        case 0x1d494cu: goto label_1d494c;
        case 0x1d4950u: goto label_1d4950;
        case 0x1d4954u: goto label_1d4954;
        case 0x1d4958u: goto label_1d4958;
        case 0x1d495cu: goto label_1d495c;
        case 0x1d4960u: goto label_1d4960;
        case 0x1d4964u: goto label_1d4964;
        case 0x1d4968u: goto label_1d4968;
        case 0x1d496cu: goto label_1d496c;
        case 0x1d4970u: goto label_1d4970;
        case 0x1d4974u: goto label_1d4974;
        case 0x1d4978u: goto label_1d4978;
        case 0x1d497cu: goto label_1d497c;
        case 0x1d4980u: goto label_1d4980;
        case 0x1d4984u: goto label_1d4984;
        case 0x1d4988u: goto label_1d4988;
        case 0x1d498cu: goto label_1d498c;
        case 0x1d4990u: goto label_1d4990;
        case 0x1d4994u: goto label_1d4994;
        case 0x1d4998u: goto label_1d4998;
        case 0x1d499cu: goto label_1d499c;
        case 0x1d49a0u: goto label_1d49a0;
        case 0x1d49a4u: goto label_1d49a4;
        case 0x1d49a8u: goto label_1d49a8;
        case 0x1d49acu: goto label_1d49ac;
        case 0x1d49b0u: goto label_1d49b0;
        case 0x1d49b4u: goto label_1d49b4;
        case 0x1d49b8u: goto label_1d49b8;
        case 0x1d49bcu: goto label_1d49bc;
        case 0x1d49c0u: goto label_1d49c0;
        case 0x1d49c4u: goto label_1d49c4;
        case 0x1d49c8u: goto label_1d49c8;
        case 0x1d49ccu: goto label_1d49cc;
        case 0x1d49d0u: goto label_1d49d0;
        case 0x1d49d4u: goto label_1d49d4;
        case 0x1d49d8u: goto label_1d49d8;
        case 0x1d49dcu: goto label_1d49dc;
        case 0x1d49e0u: goto label_1d49e0;
        case 0x1d49e4u: goto label_1d49e4;
        case 0x1d49e8u: goto label_1d49e8;
        case 0x1d49ecu: goto label_1d49ec;
        case 0x1d49f0u: goto label_1d49f0;
        case 0x1d49f4u: goto label_1d49f4;
        case 0x1d49f8u: goto label_1d49f8;
        case 0x1d49fcu: goto label_1d49fc;
        case 0x1d4a00u: goto label_1d4a00;
        case 0x1d4a04u: goto label_1d4a04;
        case 0x1d4a08u: goto label_1d4a08;
        case 0x1d4a0cu: goto label_1d4a0c;
        case 0x1d4a10u: goto label_1d4a10;
        case 0x1d4a14u: goto label_1d4a14;
        case 0x1d4a18u: goto label_1d4a18;
        case 0x1d4a1cu: goto label_1d4a1c;
        case 0x1d4a20u: goto label_1d4a20;
        case 0x1d4a24u: goto label_1d4a24;
        case 0x1d4a28u: goto label_1d4a28;
        case 0x1d4a2cu: goto label_1d4a2c;
        case 0x1d4a30u: goto label_1d4a30;
        case 0x1d4a34u: goto label_1d4a34;
        case 0x1d4a38u: goto label_1d4a38;
        case 0x1d4a3cu: goto label_1d4a3c;
        case 0x1d4a40u: goto label_1d4a40;
        case 0x1d4a44u: goto label_1d4a44;
        case 0x1d4a48u: goto label_1d4a48;
        case 0x1d4a4cu: goto label_1d4a4c;
        case 0x1d4a50u: goto label_1d4a50;
        case 0x1d4a54u: goto label_1d4a54;
        case 0x1d4a58u: goto label_1d4a58;
        case 0x1d4a5cu: goto label_1d4a5c;
        case 0x1d4a60u: goto label_1d4a60;
        case 0x1d4a64u: goto label_1d4a64;
        case 0x1d4a68u: goto label_1d4a68;
        case 0x1d4a6cu: goto label_1d4a6c;
        case 0x1d4a70u: goto label_1d4a70;
        case 0x1d4a74u: goto label_1d4a74;
        case 0x1d4a78u: goto label_1d4a78;
        case 0x1d4a7cu: goto label_1d4a7c;
        case 0x1d4a80u: goto label_1d4a80;
        case 0x1d4a84u: goto label_1d4a84;
        case 0x1d4a88u: goto label_1d4a88;
        case 0x1d4a8cu: goto label_1d4a8c;
        case 0x1d4a90u: goto label_1d4a90;
        case 0x1d4a94u: goto label_1d4a94;
        case 0x1d4a98u: goto label_1d4a98;
        case 0x1d4a9cu: goto label_1d4a9c;
        case 0x1d4aa0u: goto label_1d4aa0;
        case 0x1d4aa4u: goto label_1d4aa4;
        case 0x1d4aa8u: goto label_1d4aa8;
        case 0x1d4aacu: goto label_1d4aac;
        case 0x1d4ab0u: goto label_1d4ab0;
        case 0x1d4ab4u: goto label_1d4ab4;
        case 0x1d4ab8u: goto label_1d4ab8;
        case 0x1d4abcu: goto label_1d4abc;
        case 0x1d4ac0u: goto label_1d4ac0;
        case 0x1d4ac4u: goto label_1d4ac4;
        case 0x1d4ac8u: goto label_1d4ac8;
        case 0x1d4accu: goto label_1d4acc;
        case 0x1d4ad0u: goto label_1d4ad0;
        case 0x1d4ad4u: goto label_1d4ad4;
        case 0x1d4ad8u: goto label_1d4ad8;
        case 0x1d4adcu: goto label_1d4adc;
        case 0x1d4ae0u: goto label_1d4ae0;
        case 0x1d4ae4u: goto label_1d4ae4;
        case 0x1d4ae8u: goto label_1d4ae8;
        case 0x1d4aecu: goto label_1d4aec;
        case 0x1d4af0u: goto label_1d4af0;
        case 0x1d4af4u: goto label_1d4af4;
        case 0x1d4af8u: goto label_1d4af8;
        case 0x1d4afcu: goto label_1d4afc;
        case 0x1d4b00u: goto label_1d4b00;
        case 0x1d4b04u: goto label_1d4b04;
        case 0x1d4b08u: goto label_1d4b08;
        case 0x1d4b0cu: goto label_1d4b0c;
        case 0x1d4b10u: goto label_1d4b10;
        case 0x1d4b14u: goto label_1d4b14;
        case 0x1d4b18u: goto label_1d4b18;
        case 0x1d4b1cu: goto label_1d4b1c;
        case 0x1d4b20u: goto label_1d4b20;
        case 0x1d4b24u: goto label_1d4b24;
        case 0x1d4b28u: goto label_1d4b28;
        case 0x1d4b2cu: goto label_1d4b2c;
        case 0x1d4b30u: goto label_1d4b30;
        case 0x1d4b34u: goto label_1d4b34;
        case 0x1d4b38u: goto label_1d4b38;
        case 0x1d4b3cu: goto label_1d4b3c;
        case 0x1d4b40u: goto label_1d4b40;
        case 0x1d4b44u: goto label_1d4b44;
        case 0x1d4b48u: goto label_1d4b48;
        case 0x1d4b4cu: goto label_1d4b4c;
        case 0x1d4b50u: goto label_1d4b50;
        case 0x1d4b54u: goto label_1d4b54;
        case 0x1d4b58u: goto label_1d4b58;
        case 0x1d4b5cu: goto label_1d4b5c;
        case 0x1d4b60u: goto label_1d4b60;
        case 0x1d4b64u: goto label_1d4b64;
        case 0x1d4b68u: goto label_1d4b68;
        case 0x1d4b6cu: goto label_1d4b6c;
        case 0x1d4b70u: goto label_1d4b70;
        case 0x1d4b74u: goto label_1d4b74;
        case 0x1d4b78u: goto label_1d4b78;
        case 0x1d4b7cu: goto label_1d4b7c;
        case 0x1d4b80u: goto label_1d4b80;
        case 0x1d4b84u: goto label_1d4b84;
        case 0x1d4b88u: goto label_1d4b88;
        case 0x1d4b8cu: goto label_1d4b8c;
        case 0x1d4b90u: goto label_1d4b90;
        case 0x1d4b94u: goto label_1d4b94;
        case 0x1d4b98u: goto label_1d4b98;
        case 0x1d4b9cu: goto label_1d4b9c;
        case 0x1d4ba0u: goto label_1d4ba0;
        case 0x1d4ba4u: goto label_1d4ba4;
        case 0x1d4ba8u: goto label_1d4ba8;
        case 0x1d4bacu: goto label_1d4bac;
        case 0x1d4bb0u: goto label_1d4bb0;
        case 0x1d4bb4u: goto label_1d4bb4;
        case 0x1d4bb8u: goto label_1d4bb8;
        case 0x1d4bbcu: goto label_1d4bbc;
        case 0x1d4bc0u: goto label_1d4bc0;
        case 0x1d4bc4u: goto label_1d4bc4;
        case 0x1d4bc8u: goto label_1d4bc8;
        case 0x1d4bccu: goto label_1d4bcc;
        case 0x1d4bd0u: goto label_1d4bd0;
        case 0x1d4bd4u: goto label_1d4bd4;
        case 0x1d4bd8u: goto label_1d4bd8;
        case 0x1d4bdcu: goto label_1d4bdc;
        case 0x1d4be0u: goto label_1d4be0;
        case 0x1d4be4u: goto label_1d4be4;
        case 0x1d4be8u: goto label_1d4be8;
        case 0x1d4becu: goto label_1d4bec;
        case 0x1d4bf0u: goto label_1d4bf0;
        case 0x1d4bf4u: goto label_1d4bf4;
        case 0x1d4bf8u: goto label_1d4bf8;
        case 0x1d4bfcu: goto label_1d4bfc;
        case 0x1d4c00u: goto label_1d4c00;
        case 0x1d4c04u: goto label_1d4c04;
        case 0x1d4c08u: goto label_1d4c08;
        case 0x1d4c0cu: goto label_1d4c0c;
        case 0x1d4c10u: goto label_1d4c10;
        case 0x1d4c14u: goto label_1d4c14;
        case 0x1d4c18u: goto label_1d4c18;
        case 0x1d4c1cu: goto label_1d4c1c;
        case 0x1d4c20u: goto label_1d4c20;
        case 0x1d4c24u: goto label_1d4c24;
        case 0x1d4c28u: goto label_1d4c28;
        case 0x1d4c2cu: goto label_1d4c2c;
        case 0x1d4c30u: goto label_1d4c30;
        case 0x1d4c34u: goto label_1d4c34;
        case 0x1d4c38u: goto label_1d4c38;
        case 0x1d4c3cu: goto label_1d4c3c;
        case 0x1d4c40u: goto label_1d4c40;
        case 0x1d4c44u: goto label_1d4c44;
        case 0x1d4c48u: goto label_1d4c48;
        case 0x1d4c4cu: goto label_1d4c4c;
        case 0x1d4c50u: goto label_1d4c50;
        case 0x1d4c54u: goto label_1d4c54;
        case 0x1d4c58u: goto label_1d4c58;
        case 0x1d4c5cu: goto label_1d4c5c;
        case 0x1d4c60u: goto label_1d4c60;
        case 0x1d4c64u: goto label_1d4c64;
        case 0x1d4c68u: goto label_1d4c68;
        case 0x1d4c6cu: goto label_1d4c6c;
        case 0x1d4c70u: goto label_1d4c70;
        case 0x1d4c74u: goto label_1d4c74;
        case 0x1d4c78u: goto label_1d4c78;
        case 0x1d4c7cu: goto label_1d4c7c;
        case 0x1d4c80u: goto label_1d4c80;
        case 0x1d4c84u: goto label_1d4c84;
        case 0x1d4c88u: goto label_1d4c88;
        case 0x1d4c8cu: goto label_1d4c8c;
        case 0x1d4c90u: goto label_1d4c90;
        case 0x1d4c94u: goto label_1d4c94;
        case 0x1d4c98u: goto label_1d4c98;
        case 0x1d4c9cu: goto label_1d4c9c;
        case 0x1d4ca0u: goto label_1d4ca0;
        case 0x1d4ca4u: goto label_1d4ca4;
        case 0x1d4ca8u: goto label_1d4ca8;
        case 0x1d4cacu: goto label_1d4cac;
        case 0x1d4cb0u: goto label_1d4cb0;
        case 0x1d4cb4u: goto label_1d4cb4;
        case 0x1d4cb8u: goto label_1d4cb8;
        case 0x1d4cbcu: goto label_1d4cbc;
        case 0x1d4cc0u: goto label_1d4cc0;
        case 0x1d4cc4u: goto label_1d4cc4;
        case 0x1d4cc8u: goto label_1d4cc8;
        case 0x1d4cccu: goto label_1d4ccc;
        case 0x1d4cd0u: goto label_1d4cd0;
        case 0x1d4cd4u: goto label_1d4cd4;
        case 0x1d4cd8u: goto label_1d4cd8;
        case 0x1d4cdcu: goto label_1d4cdc;
        case 0x1d4ce0u: goto label_1d4ce0;
        case 0x1d4ce4u: goto label_1d4ce4;
        case 0x1d4ce8u: goto label_1d4ce8;
        case 0x1d4cecu: goto label_1d4cec;
        case 0x1d4cf0u: goto label_1d4cf0;
        case 0x1d4cf4u: goto label_1d4cf4;
        case 0x1d4cf8u: goto label_1d4cf8;
        case 0x1d4cfcu: goto label_1d4cfc;
        case 0x1d4d00u: goto label_1d4d00;
        case 0x1d4d04u: goto label_1d4d04;
        case 0x1d4d08u: goto label_1d4d08;
        case 0x1d4d0cu: goto label_1d4d0c;
        case 0x1d4d10u: goto label_1d4d10;
        case 0x1d4d14u: goto label_1d4d14;
        case 0x1d4d18u: goto label_1d4d18;
        case 0x1d4d1cu: goto label_1d4d1c;
        case 0x1d4d20u: goto label_1d4d20;
        case 0x1d4d24u: goto label_1d4d24;
        case 0x1d4d28u: goto label_1d4d28;
        case 0x1d4d2cu: goto label_1d4d2c;
        case 0x1d4d30u: goto label_1d4d30;
        case 0x1d4d34u: goto label_1d4d34;
        case 0x1d4d38u: goto label_1d4d38;
        case 0x1d4d3cu: goto label_1d4d3c;
        case 0x1d4d40u: goto label_1d4d40;
        case 0x1d4d44u: goto label_1d4d44;
        case 0x1d4d48u: goto label_1d4d48;
        case 0x1d4d4cu: goto label_1d4d4c;
        case 0x1d4d50u: goto label_1d4d50;
        case 0x1d4d54u: goto label_1d4d54;
        case 0x1d4d58u: goto label_1d4d58;
        case 0x1d4d5cu: goto label_1d4d5c;
        case 0x1d4d60u: goto label_1d4d60;
        case 0x1d4d64u: goto label_1d4d64;
        case 0x1d4d68u: goto label_1d4d68;
        case 0x1d4d6cu: goto label_1d4d6c;
        case 0x1d4d70u: goto label_1d4d70;
        case 0x1d4d74u: goto label_1d4d74;
        case 0x1d4d78u: goto label_1d4d78;
        case 0x1d4d7cu: goto label_1d4d7c;
        case 0x1d4d80u: goto label_1d4d80;
        case 0x1d4d84u: goto label_1d4d84;
        case 0x1d4d88u: goto label_1d4d88;
        case 0x1d4d8cu: goto label_1d4d8c;
        case 0x1d4d90u: goto label_1d4d90;
        case 0x1d4d94u: goto label_1d4d94;
        case 0x1d4d98u: goto label_1d4d98;
        case 0x1d4d9cu: goto label_1d4d9c;
        case 0x1d4da0u: goto label_1d4da0;
        case 0x1d4da4u: goto label_1d4da4;
        case 0x1d4da8u: goto label_1d4da8;
        case 0x1d4dacu: goto label_1d4dac;
        case 0x1d4db0u: goto label_1d4db0;
        case 0x1d4db4u: goto label_1d4db4;
        case 0x1d4db8u: goto label_1d4db8;
        case 0x1d4dbcu: goto label_1d4dbc;
        case 0x1d4dc0u: goto label_1d4dc0;
        case 0x1d4dc4u: goto label_1d4dc4;
        case 0x1d4dc8u: goto label_1d4dc8;
        case 0x1d4dccu: goto label_1d4dcc;
        case 0x1d4dd0u: goto label_1d4dd0;
        case 0x1d4dd4u: goto label_1d4dd4;
        case 0x1d4dd8u: goto label_1d4dd8;
        case 0x1d4ddcu: goto label_1d4ddc;
        case 0x1d4de0u: goto label_1d4de0;
        case 0x1d4de4u: goto label_1d4de4;
        case 0x1d4de8u: goto label_1d4de8;
        case 0x1d4decu: goto label_1d4dec;
        case 0x1d4df0u: goto label_1d4df0;
        case 0x1d4df4u: goto label_1d4df4;
        case 0x1d4df8u: goto label_1d4df8;
        case 0x1d4dfcu: goto label_1d4dfc;
        case 0x1d4e00u: goto label_1d4e00;
        case 0x1d4e04u: goto label_1d4e04;
        case 0x1d4e08u: goto label_1d4e08;
        case 0x1d4e0cu: goto label_1d4e0c;
        case 0x1d4e10u: goto label_1d4e10;
        case 0x1d4e14u: goto label_1d4e14;
        case 0x1d4e18u: goto label_1d4e18;
        case 0x1d4e1cu: goto label_1d4e1c;
        case 0x1d4e20u: goto label_1d4e20;
        case 0x1d4e24u: goto label_1d4e24;
        case 0x1d4e28u: goto label_1d4e28;
        case 0x1d4e2cu: goto label_1d4e2c;
        case 0x1d4e30u: goto label_1d4e30;
        case 0x1d4e34u: goto label_1d4e34;
        case 0x1d4e38u: goto label_1d4e38;
        case 0x1d4e3cu: goto label_1d4e3c;
        case 0x1d4e40u: goto label_1d4e40;
        case 0x1d4e44u: goto label_1d4e44;
        case 0x1d4e48u: goto label_1d4e48;
        case 0x1d4e4cu: goto label_1d4e4c;
        case 0x1d4e50u: goto label_1d4e50;
        case 0x1d4e54u: goto label_1d4e54;
        case 0x1d4e58u: goto label_1d4e58;
        case 0x1d4e5cu: goto label_1d4e5c;
        case 0x1d4e60u: goto label_1d4e60;
        case 0x1d4e64u: goto label_1d4e64;
        case 0x1d4e68u: goto label_1d4e68;
        case 0x1d4e6cu: goto label_1d4e6c;
        case 0x1d4e70u: goto label_1d4e70;
        case 0x1d4e74u: goto label_1d4e74;
        case 0x1d4e78u: goto label_1d4e78;
        case 0x1d4e7cu: goto label_1d4e7c;
        case 0x1d4e80u: goto label_1d4e80;
        case 0x1d4e84u: goto label_1d4e84;
        case 0x1d4e88u: goto label_1d4e88;
        case 0x1d4e8cu: goto label_1d4e8c;
        case 0x1d4e90u: goto label_1d4e90;
        case 0x1d4e94u: goto label_1d4e94;
        case 0x1d4e98u: goto label_1d4e98;
        case 0x1d4e9cu: goto label_1d4e9c;
        case 0x1d4ea0u: goto label_1d4ea0;
        case 0x1d4ea4u: goto label_1d4ea4;
        case 0x1d4ea8u: goto label_1d4ea8;
        case 0x1d4eacu: goto label_1d4eac;
        case 0x1d4eb0u: goto label_1d4eb0;
        case 0x1d4eb4u: goto label_1d4eb4;
        case 0x1d4eb8u: goto label_1d4eb8;
        case 0x1d4ebcu: goto label_1d4ebc;
        case 0x1d4ec0u: goto label_1d4ec0;
        case 0x1d4ec4u: goto label_1d4ec4;
        case 0x1d4ec8u: goto label_1d4ec8;
        case 0x1d4eccu: goto label_1d4ecc;
        case 0x1d4ed0u: goto label_1d4ed0;
        case 0x1d4ed4u: goto label_1d4ed4;
        case 0x1d4ed8u: goto label_1d4ed8;
        case 0x1d4edcu: goto label_1d4edc;
        case 0x1d4ee0u: goto label_1d4ee0;
        case 0x1d4ee4u: goto label_1d4ee4;
        case 0x1d4ee8u: goto label_1d4ee8;
        case 0x1d4eecu: goto label_1d4eec;
        case 0x1d4ef0u: goto label_1d4ef0;
        case 0x1d4ef4u: goto label_1d4ef4;
        case 0x1d4ef8u: goto label_1d4ef8;
        case 0x1d4efcu: goto label_1d4efc;
        case 0x1d4f00u: goto label_1d4f00;
        case 0x1d4f04u: goto label_1d4f04;
        case 0x1d4f08u: goto label_1d4f08;
        case 0x1d4f0cu: goto label_1d4f0c;
        case 0x1d4f10u: goto label_1d4f10;
        case 0x1d4f14u: goto label_1d4f14;
        case 0x1d4f18u: goto label_1d4f18;
        case 0x1d4f1cu: goto label_1d4f1c;
        case 0x1d4f20u: goto label_1d4f20;
        case 0x1d4f24u: goto label_1d4f24;
        case 0x1d4f28u: goto label_1d4f28;
        case 0x1d4f2cu: goto label_1d4f2c;
        case 0x1d4f30u: goto label_1d4f30;
        case 0x1d4f34u: goto label_1d4f34;
        case 0x1d4f38u: goto label_1d4f38;
        case 0x1d4f3cu: goto label_1d4f3c;
        case 0x1d4f40u: goto label_1d4f40;
        case 0x1d4f44u: goto label_1d4f44;
        case 0x1d4f48u: goto label_1d4f48;
        case 0x1d4f4cu: goto label_1d4f4c;
        case 0x1d4f50u: goto label_1d4f50;
        case 0x1d4f54u: goto label_1d4f54;
        case 0x1d4f58u: goto label_1d4f58;
        case 0x1d4f5cu: goto label_1d4f5c;
        case 0x1d4f60u: goto label_1d4f60;
        case 0x1d4f64u: goto label_1d4f64;
        case 0x1d4f68u: goto label_1d4f68;
        case 0x1d4f6cu: goto label_1d4f6c;
        case 0x1d4f70u: goto label_1d4f70;
        case 0x1d4f74u: goto label_1d4f74;
        case 0x1d4f78u: goto label_1d4f78;
        case 0x1d4f7cu: goto label_1d4f7c;
        case 0x1d4f80u: goto label_1d4f80;
        case 0x1d4f84u: goto label_1d4f84;
        case 0x1d4f88u: goto label_1d4f88;
        case 0x1d4f8cu: goto label_1d4f8c;
        case 0x1d4f90u: goto label_1d4f90;
        case 0x1d4f94u: goto label_1d4f94;
        case 0x1d4f98u: goto label_1d4f98;
        case 0x1d4f9cu: goto label_1d4f9c;
        case 0x1d4fa0u: goto label_1d4fa0;
        case 0x1d4fa4u: goto label_1d4fa4;
        case 0x1d4fa8u: goto label_1d4fa8;
        case 0x1d4facu: goto label_1d4fac;
        case 0x1d4fb0u: goto label_1d4fb0;
        case 0x1d4fb4u: goto label_1d4fb4;
        case 0x1d4fb8u: goto label_1d4fb8;
        case 0x1d4fbcu: goto label_1d4fbc;
        case 0x1d4fc0u: goto label_1d4fc0;
        case 0x1d4fc4u: goto label_1d4fc4;
        case 0x1d4fc8u: goto label_1d4fc8;
        case 0x1d4fccu: goto label_1d4fcc;
        case 0x1d4fd0u: goto label_1d4fd0;
        case 0x1d4fd4u: goto label_1d4fd4;
        case 0x1d4fd8u: goto label_1d4fd8;
        case 0x1d4fdcu: goto label_1d4fdc;
        case 0x1d4fe0u: goto label_1d4fe0;
        case 0x1d4fe4u: goto label_1d4fe4;
        case 0x1d4fe8u: goto label_1d4fe8;
        case 0x1d4fecu: goto label_1d4fec;
        case 0x1d4ff0u: goto label_1d4ff0;
        case 0x1d4ff4u: goto label_1d4ff4;
        case 0x1d4ff8u: goto label_1d4ff8;
        case 0x1d4ffcu: goto label_1d4ffc;
        case 0x1d5000u: goto label_1d5000;
        case 0x1d5004u: goto label_1d5004;
        case 0x1d5008u: goto label_1d5008;
        case 0x1d500cu: goto label_1d500c;
        case 0x1d5010u: goto label_1d5010;
        case 0x1d5014u: goto label_1d5014;
        case 0x1d5018u: goto label_1d5018;
        case 0x1d501cu: goto label_1d501c;
        case 0x1d5020u: goto label_1d5020;
        case 0x1d5024u: goto label_1d5024;
        case 0x1d5028u: goto label_1d5028;
        case 0x1d502cu: goto label_1d502c;
        case 0x1d5030u: goto label_1d5030;
        case 0x1d5034u: goto label_1d5034;
        case 0x1d5038u: goto label_1d5038;
        case 0x1d503cu: goto label_1d503c;
        case 0x1d5040u: goto label_1d5040;
        case 0x1d5044u: goto label_1d5044;
        case 0x1d5048u: goto label_1d5048;
        case 0x1d504cu: goto label_1d504c;
        case 0x1d5050u: goto label_1d5050;
        case 0x1d5054u: goto label_1d5054;
        case 0x1d5058u: goto label_1d5058;
        case 0x1d505cu: goto label_1d505c;
        case 0x1d5060u: goto label_1d5060;
        case 0x1d5064u: goto label_1d5064;
        case 0x1d5068u: goto label_1d5068;
        case 0x1d506cu: goto label_1d506c;
        case 0x1d5070u: goto label_1d5070;
        case 0x1d5074u: goto label_1d5074;
        case 0x1d5078u: goto label_1d5078;
        case 0x1d507cu: goto label_1d507c;
        case 0x1d5080u: goto label_1d5080;
        case 0x1d5084u: goto label_1d5084;
        case 0x1d5088u: goto label_1d5088;
        case 0x1d508cu: goto label_1d508c;
        case 0x1d5090u: goto label_1d5090;
        case 0x1d5094u: goto label_1d5094;
        case 0x1d5098u: goto label_1d5098;
        case 0x1d509cu: goto label_1d509c;
        case 0x1d50a0u: goto label_1d50a0;
        case 0x1d50a4u: goto label_1d50a4;
        case 0x1d50a8u: goto label_1d50a8;
        case 0x1d50acu: goto label_1d50ac;
        case 0x1d50b0u: goto label_1d50b0;
        case 0x1d50b4u: goto label_1d50b4;
        case 0x1d50b8u: goto label_1d50b8;
        case 0x1d50bcu: goto label_1d50bc;
        case 0x1d50c0u: goto label_1d50c0;
        case 0x1d50c4u: goto label_1d50c4;
        case 0x1d50c8u: goto label_1d50c8;
        case 0x1d50ccu: goto label_1d50cc;
        case 0x1d50d0u: goto label_1d50d0;
        case 0x1d50d4u: goto label_1d50d4;
        case 0x1d50d8u: goto label_1d50d8;
        case 0x1d50dcu: goto label_1d50dc;
        case 0x1d50e0u: goto label_1d50e0;
        case 0x1d50e4u: goto label_1d50e4;
        case 0x1d50e8u: goto label_1d50e8;
        case 0x1d50ecu: goto label_1d50ec;
        case 0x1d50f0u: goto label_1d50f0;
        case 0x1d50f4u: goto label_1d50f4;
        case 0x1d50f8u: goto label_1d50f8;
        case 0x1d50fcu: goto label_1d50fc;
        case 0x1d5100u: goto label_1d5100;
        case 0x1d5104u: goto label_1d5104;
        case 0x1d5108u: goto label_1d5108;
        case 0x1d510cu: goto label_1d510c;
        case 0x1d5110u: goto label_1d5110;
        case 0x1d5114u: goto label_1d5114;
        case 0x1d5118u: goto label_1d5118;
        case 0x1d511cu: goto label_1d511c;
        case 0x1d5120u: goto label_1d5120;
        case 0x1d5124u: goto label_1d5124;
        case 0x1d5128u: goto label_1d5128;
        case 0x1d512cu: goto label_1d512c;
        case 0x1d5130u: goto label_1d5130;
        case 0x1d5134u: goto label_1d5134;
        case 0x1d5138u: goto label_1d5138;
        case 0x1d513cu: goto label_1d513c;
        case 0x1d5140u: goto label_1d5140;
        case 0x1d5144u: goto label_1d5144;
        case 0x1d5148u: goto label_1d5148;
        case 0x1d514cu: goto label_1d514c;
        case 0x1d5150u: goto label_1d5150;
        case 0x1d5154u: goto label_1d5154;
        case 0x1d5158u: goto label_1d5158;
        case 0x1d515cu: goto label_1d515c;
        case 0x1d5160u: goto label_1d5160;
        case 0x1d5164u: goto label_1d5164;
        case 0x1d5168u: goto label_1d5168;
        case 0x1d516cu: goto label_1d516c;
        case 0x1d5170u: goto label_1d5170;
        case 0x1d5174u: goto label_1d5174;
        case 0x1d5178u: goto label_1d5178;
        case 0x1d517cu: goto label_1d517c;
        case 0x1d5180u: goto label_1d5180;
        case 0x1d5184u: goto label_1d5184;
        case 0x1d5188u: goto label_1d5188;
        case 0x1d518cu: goto label_1d518c;
        case 0x1d5190u: goto label_1d5190;
        case 0x1d5194u: goto label_1d5194;
        case 0x1d5198u: goto label_1d5198;
        case 0x1d519cu: goto label_1d519c;
        case 0x1d51a0u: goto label_1d51a0;
        case 0x1d51a4u: goto label_1d51a4;
        case 0x1d51a8u: goto label_1d51a8;
        case 0x1d51acu: goto label_1d51ac;
        case 0x1d51b0u: goto label_1d51b0;
        case 0x1d51b4u: goto label_1d51b4;
        case 0x1d51b8u: goto label_1d51b8;
        case 0x1d51bcu: goto label_1d51bc;
        case 0x1d51c0u: goto label_1d51c0;
        case 0x1d51c4u: goto label_1d51c4;
        case 0x1d51c8u: goto label_1d51c8;
        case 0x1d51ccu: goto label_1d51cc;
        case 0x1d51d0u: goto label_1d51d0;
        case 0x1d51d4u: goto label_1d51d4;
        case 0x1d51d8u: goto label_1d51d8;
        case 0x1d51dcu: goto label_1d51dc;
        case 0x1d51e0u: goto label_1d51e0;
        case 0x1d51e4u: goto label_1d51e4;
        case 0x1d51e8u: goto label_1d51e8;
        case 0x1d51ecu: goto label_1d51ec;
        case 0x1d51f0u: goto label_1d51f0;
        case 0x1d51f4u: goto label_1d51f4;
        case 0x1d51f8u: goto label_1d51f8;
        case 0x1d51fcu: goto label_1d51fc;
        case 0x1d5200u: goto label_1d5200;
        case 0x1d5204u: goto label_1d5204;
        case 0x1d5208u: goto label_1d5208;
        case 0x1d520cu: goto label_1d520c;
        case 0x1d5210u: goto label_1d5210;
        case 0x1d5214u: goto label_1d5214;
        case 0x1d5218u: goto label_1d5218;
        case 0x1d521cu: goto label_1d521c;
        case 0x1d5220u: goto label_1d5220;
        case 0x1d5224u: goto label_1d5224;
        case 0x1d5228u: goto label_1d5228;
        case 0x1d522cu: goto label_1d522c;
        case 0x1d5230u: goto label_1d5230;
        case 0x1d5234u: goto label_1d5234;
        case 0x1d5238u: goto label_1d5238;
        case 0x1d523cu: goto label_1d523c;
        case 0x1d5240u: goto label_1d5240;
        case 0x1d5244u: goto label_1d5244;
        case 0x1d5248u: goto label_1d5248;
        case 0x1d524cu: goto label_1d524c;
        case 0x1d5250u: goto label_1d5250;
        case 0x1d5254u: goto label_1d5254;
        case 0x1d5258u: goto label_1d5258;
        case 0x1d525cu: goto label_1d525c;
        case 0x1d5260u: goto label_1d5260;
        case 0x1d5264u: goto label_1d5264;
        case 0x1d5268u: goto label_1d5268;
        case 0x1d526cu: goto label_1d526c;
        case 0x1d5270u: goto label_1d5270;
        case 0x1d5274u: goto label_1d5274;
        case 0x1d5278u: goto label_1d5278;
        case 0x1d527cu: goto label_1d527c;
        default: break;
    }

    ctx->pc = 0x1d40e0u;

label_1d40e0:
    // 0x1d40e0: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x1d40e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
label_1d40e4:
    // 0x1d40e4: 0x7fb004b0  sq          $s0, 0x4B0($sp)
    ctx->pc = 0x1d40e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 16));
label_1d40e8:
    // 0x1d40e8: 0x7fb104a0  sq          $s1, 0x4A0($sp)
    ctx->pc = 0x1d40e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 17));
label_1d40ec:
    // 0x1d40ec: 0x7fb20490  sq          $s2, 0x490($sp)
    ctx->pc = 0x1d40ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 18));
label_1d40f0:
    // 0x1d40f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d40f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d40f4:
    // 0x1d40f4: 0x7fb30480  sq          $s3, 0x480($sp)
    ctx->pc = 0x1d40f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 19));
label_1d40f8:
    // 0x1d40f8: 0x7fb40470  sq          $s4, 0x470($sp)
    ctx->pc = 0x1d40f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 20));
label_1d40fc:
    // 0x1d40fc: 0x7fb50460  sq          $s5, 0x460($sp)
    ctx->pc = 0x1d40fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 21));
label_1d4100:
    // 0x1d4100: 0x7fb60450  sq          $s6, 0x450($sp)
    ctx->pc = 0x1d4100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 22));
label_1d4104:
    // 0x1d4104: 0x7fb70440  sq          $s7, 0x440($sp)
    ctx->pc = 0x1d4104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 23));
label_1d4108:
    // 0x1d4108: 0x7fbe0430  sq          $fp, 0x430($sp)
    ctx->pc = 0x1d4108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 30));
label_1d410c:
    // 0x1d410c: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x1d410cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
label_1d4110:
    // 0x1d4110: 0x8e260088  lw          $a2, 0x88($s1)
    ctx->pc = 0x1d4110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4114:
    // 0x1d4114: 0x10c00440  beqz        $a2, . + 4 + (0x440 << 2)
label_1d4118:
    if (ctx->pc == 0x1D4118u) {
        ctx->pc = 0x1D4118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4114u;
        // 0x1d4118: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D411Cu;
        goto label_1d411c;
    }
    ctx->pc = 0x1D4114u;
    {
        const bool branch_taken_0x1d4114 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4114u;
        // 0x1d4118: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4114) {
            ctx->pc = 0x1D5218u;
            goto label_1d5218;
        }
    }
    ctx->pc = 0x1D411Cu;
label_1d411c:
    // 0x1d411c: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x1d411cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_1d4120:
    // 0x1d4120: 0x24030098  addiu       $v1, $zero, 0x98
    ctx->pc = 0x1d4120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_1d4124:
    // 0x1d4124: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x1d4124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1d4128:
    // 0x1d4128: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1d4128u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d412c:
    // 0x1d412c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d412cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1d4130:
    // 0x1d4130: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x1d4130u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d4134:
    // 0x1d4134: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x1d4134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1d4138:
    // 0x1d4138: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_1d413c:
    if (ctx->pc == 0x1D413Cu) {
        ctx->pc = 0x1D413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4138u;
        // 0x1d413c: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4140u;
        goto label_1d4140;
    }
    ctx->pc = 0x1D4138u;
    {
        const bool branch_taken_0x1d4138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4138u;
        // 0x1d413c: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4138) {
            ctx->pc = 0x1D41C0u;
            goto label_1d41c0;
        }
    }
    ctx->pc = 0x1D4140u;
label_1d4140:
    // 0x1d4140: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1d4140u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1d4144:
    // 0x1d4144: 0x14600441  bnez        $v1, . + 4 + (0x441 << 2)
label_1d4148:
    if (ctx->pc == 0x1D4148u) {
        ctx->pc = 0x1D4148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4144u;
        // 0x1d4148: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D414Cu;
        goto label_1d414c;
    }
    ctx->pc = 0x1D4144u;
    {
        const bool branch_taken_0x1d4144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4144u;
        // 0x1d4148: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4144) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D414Cu;
label_1d414c:
    // 0x1d414c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d414cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d4150:
    // 0x1d4150: 0xc07555e  jal         func_1D5578
label_1d4154:
    if (ctx->pc == 0x1D4154u) {
        ctx->pc = 0x1D4154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4150u;
        // 0x1d4154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4158u;
        goto label_1d4158;
    }
    ctx->pc = 0x1D4150u;
    SET_GPR_U32(ctx, 31, 0x1D4158u);
    ctx->pc = 0x1D4154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4150u;
    // 0x1d4154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D4150u, 0x1D4158u)) {
        return;
    }
    ctx->pc = 0x1D4158u;
label_1d4158:
    // 0x1d4158: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x1d4158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1d415c:
    // 0x1d415c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d4160:
    if (ctx->pc == 0x1D4160u) {
        ctx->pc = 0x1D4160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D415Cu;
        // 0x1d4160: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4164u;
        goto label_1d4164;
    }
    ctx->pc = 0x1D415Cu;
    {
        const bool branch_taken_0x1d415c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D415Cu;
        // 0x1d4160: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d415c) {
            ctx->pc = 0x1D416Cu;
            goto label_1d416c;
        }
    }
    ctx->pc = 0x1D4164u;
label_1d4164:
    // 0x1d4164: 0xc07596a  jal         func_1D65A8
label_1d4168:
    if (ctx->pc == 0x1D4168u) {
        ctx->pc = 0x1D4168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4164u;
        // 0x1d4168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D416Cu;
        goto label_1d416c;
    }
    ctx->pc = 0x1D4164u;
    SET_GPR_U32(ctx, 31, 0x1D416Cu);
    ctx->pc = 0x1D4168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4164u;
    // 0x1d4168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D4164u, 0x1D416Cu)) {
        return;
    }
    ctx->pc = 0x1D416Cu;
label_1d416c:
    // 0x1d416c: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x1d416cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1d4170:
    // 0x1d4170: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_1d4174:
    if (ctx->pc == 0x1D4174u) {
        ctx->pc = 0x1D4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4170u;
        // 0x1d4174: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4178u;
        goto label_1d4178;
    }
    ctx->pc = 0x1D4170u;
    {
        const bool branch_taken_0x1d4170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4170) {
            ctx->pc = 0x1D4174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4170u;
            // 0x1d4174: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4184u;
            goto label_1d4184;
        }
    }
    ctx->pc = 0x1D4178u;
label_1d4178:
    // 0x1d4178: 0xc07596e  jal         func_1D65B8
label_1d417c:
    if (ctx->pc == 0x1D417Cu) {
        ctx->pc = 0x1D417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4178u;
        // 0x1d417c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4180u;
        goto label_1d4180;
    }
    ctx->pc = 0x1D4178u;
    SET_GPR_U32(ctx, 31, 0x1D4180u);
    ctx->pc = 0x1D417Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4178u;
    // 0x1d417c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D4178u, 0x1D4180u)) {
        return;
    }
    ctx->pc = 0x1D4180u;
label_1d4180:
    // 0x1d4180: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d4180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4184:
    // 0x1d4184: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d4184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4188:
    // 0x1d4188: 0x18400421  blez        $v0, . + 4 + (0x421 << 2)
label_1d418c:
    if (ctx->pc == 0x1D418Cu) {
        ctx->pc = 0x1D418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4188u;
        // 0x1d418c: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4190u;
        goto label_1d4190;
    }
    ctx->pc = 0x1D4188u;
    {
        const bool branch_taken_0x1d4188 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4188u;
        // 0x1d418c: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4188) {
            ctx->pc = 0x1D5210u;
            goto label_1d5210;
        }
    }
    ctx->pc = 0x1D4190u;
label_1d4190:
    // 0x1d4190: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d4190u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4194:
    // 0x1d4194: 0x0  nop
    ctx->pc = 0x1d4194u;
    // NOP
label_1d4198:
    // 0x1d4198: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1d4198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1d419c:
    // 0x1d419c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d419cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1d41a0:
    // 0x1d41a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d41a4:
    // 0x1d41a4: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x1d41a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
label_1d41a8:
    // 0x1d41a8: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d41ac:
    // 0x1d41ac: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d41acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d41b0:
    // 0x1d41b0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d41b4:
    if (ctx->pc == 0x1D41B4u) {
        ctx->pc = 0x1D41B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41B0u;
        // 0x1d41b4: 0x24630098  addiu       $v1, $v1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D41B8u;
        goto label_1d41b8;
    }
    ctx->pc = 0x1D41B0u;
    {
        const bool branch_taken_0x1d41b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D41B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41B0u;
        // 0x1d41b4: 0x24630098  addiu       $v1, $v1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41b0) {
            ctx->pc = 0x1D4198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4198;
        }
    }
    ctx->pc = 0x1D41B8u;
label_1d41b8:
    // 0x1d41b8: 0x10000424  b           . + 4 + (0x424 << 2)
label_1d41bc:
    if (ctx->pc == 0x1D41BCu) {
        ctx->pc = 0x1D41BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41B8u;
        // 0x1d41bc: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D41C0u;
        goto label_1d41c0;
    }
    ctx->pc = 0x1D41B8u;
    {
        const bool branch_taken_0x1d41b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D41BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41B8u;
        // 0x1d41bc: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41b8) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D41C0u;
label_1d41c0:
    // 0x1d41c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1d41c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d41c4:
    // 0x1d41c4: 0x2c620018  sltiu       $v0, $v1, 0x18
    ctx->pc = 0x1d41c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
label_1d41c8:
    // 0x1d41c8: 0x10400420  beqz        $v0, . + 4 + (0x420 << 2)
label_1d41cc:
    if (ctx->pc == 0x1D41CCu) {
        ctx->pc = 0x1D41CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41C8u;
        // 0x1d41cc: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D41D0u;
        goto label_1d41d0;
    }
    ctx->pc = 0x1D41C8u;
    {
        const bool branch_taken_0x1d41c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D41CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41C8u;
        // 0x1d41cc: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41c8) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D41D0u;
label_1d41d0:
    // 0x1d41d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d41d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d41d4:
    // 0x1d41d4: 0x244210c0  addiu       $v0, $v0, 0x10C0
    ctx->pc = 0x1d41d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4288));
label_1d41d8:
    // 0x1d41d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d41d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d41dc:
    // 0x1d41dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d41dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d41e0:
    // 0x1d41e0: 0x800008  jr          $a0
label_1d41e4:
    if (ctx->pc == 0x1D41E4u) {
        ctx->pc = 0x1D41E8u;
        goto label_1d41e8;
    }
    ctx->pc = 0x1D41E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D41E8u: goto label_1d41e8;
            case 0x1D4204u: goto label_1d4204;
            case 0x1D4218u: goto label_1d4218;
            case 0x1D426Cu: goto label_1d426c;
            case 0x1D4348u: goto label_1d4348;
            case 0x1D4364u: goto label_1d4364;
            case 0x1D43E8u: goto label_1d43e8;
            case 0x1D4434u: goto label_1d4434;
            case 0x1D444Cu: goto label_1d444c;
            case 0x1D4464u: goto label_1d4464;
            case 0x1D4488u: goto label_1d4488;
            case 0x1D44A4u: goto label_1d44a4;
            case 0x1D44BCu: goto label_1d44bc;
            case 0x1D4658u: goto label_1d4658;
            case 0x1D48D8u: goto label_1d48d8;
            case 0x1D4954u: goto label_1d4954;
            case 0x1D4A18u: goto label_1d4a18;
            case 0x1D4BB8u: goto label_1d4bb8;
            case 0x1D4D40u: goto label_1d4d40;
            case 0x1D4DD8u: goto label_1d4dd8;
            case 0x1D4E88u: goto label_1d4e88;
            case 0x1D4F20u: goto label_1d4f20;
            case 0x1D5070u: goto label_1d5070;
            case 0x1D524Cu: goto label_1d524c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D41E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D41E8u;
label_1d41e8:
    // 0x1d41e8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d41ec:
    // 0x1d41ec: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1d41ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_1d41f0:
    // 0x1d41f0: 0x8c448800  lw          $a0, -0x7800($v0)
    ctx->pc = 0x1d41f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936576)));
label_1d41f4:
    // 0x1d41f4: 0xc0bc3d8  jal         func_2F0F60
label_1d41f8:
    if (ctx->pc == 0x1D41F8u) {
        ctx->pc = 0x1D41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41F4u;
        // 0x1d41f8: 0x24a58808  addiu       $a1, $a1, -0x77F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D41FCu;
        goto label_1d41fc;
    }
    ctx->pc = 0x1D41F4u;
    SET_GPR_U32(ctx, 31, 0x1D41FCu);
    ctx->pc = 0x1D41F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D41F4u;
    // 0x1d41f8: 0x24a58808  addiu       $a1, $a1, -0x77F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0F60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F0F60u, 0x1D41F4u, 0x1D41FCu)) {
        return;
    }
    ctx->pc = 0x1D41FCu;
label_1d41fc:
    // 0x1d41fc: 0x10000414  b           . + 4 + (0x414 << 2)
label_1d4200:
    if (ctx->pc == 0x1D4200u) {
        ctx->pc = 0x1D4200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41FCu;
        // 0x1d4200: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4204u;
        goto label_1d4204;
    }
    ctx->pc = 0x1D41FCu;
    {
        const bool branch_taken_0x1d41fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41FCu;
        // 0x1d4200: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41fc) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D4204u;
label_1d4204:
    // 0x1d4204: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d4204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d4208:
    // 0x1d4208: 0xc0bc3ac  jal         func_2F0EB0
label_1d420c:
    if (ctx->pc == 0x1D420Cu) {
        ctx->pc = 0x1D420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4208u;
        // 0x1d420c: 0x8c448800  lw          $a0, -0x7800($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4210u;
        goto label_1d4210;
    }
    ctx->pc = 0x1D4208u;
    SET_GPR_U32(ctx, 31, 0x1D4210u);
    ctx->pc = 0x1D420Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4208u;
    // 0x1d420c: 0x8c448800  lw          $a0, -0x7800($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0EB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F0EB0u, 0x1D4208u, 0x1D4210u)) {
        return;
    }
    ctx->pc = 0x1D4210u;
label_1d4210:
    // 0x1d4210: 0x1000040f  b           . + 4 + (0x40F << 2)
label_1d4214:
    if (ctx->pc == 0x1D4214u) {
        ctx->pc = 0x1D4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4210u;
        // 0x1d4214: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4218u;
        goto label_1d4218;
    }
    ctx->pc = 0x1D4210u;
    {
        const bool branch_taken_0x1d4210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4210u;
        // 0x1d4214: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4210) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D4218u;
label_1d4218:
    // 0x1d4218: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x1d4218u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
label_1d421c:
    // 0x1d421c: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x1d421cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
label_1d4220:
    // 0x1d4220: 0xc0808b8  jal         func_2022E0
label_1d4224:
    if (ctx->pc == 0x1D4224u) {
        ctx->pc = 0x1D4224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4220u;
        // 0x1d4224: 0x8e048834  lw          $a0, -0x77CC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4228u;
        goto label_1d4228;
    }
    ctx->pc = 0x1D4220u;
    SET_GPR_U32(ctx, 31, 0x1D4228u);
    ctx->pc = 0x1D4224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4220u;
    // 0x1d4224: 0x8e048834  lw          $a0, -0x77CC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D4220u, 0x1D4228u)) {
        return;
    }
    ctx->pc = 0x1D4228u;
label_1d4228:
    // 0x1d4228: 0x8e248838  lw          $a0, -0x77C8($s1)
    ctx->pc = 0x1d4228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936632)));
label_1d422c:
    // 0x1d422c: 0xc0808b8  jal         func_2022E0
label_1d4230:
    if (ctx->pc == 0x1D4230u) {
        ctx->pc = 0x1D4230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D422Cu;
        // 0x1d4230: 0xae008834  sw          $zero, -0x77CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294936628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4234u;
        goto label_1d4234;
    }
    ctx->pc = 0x1D422Cu;
    SET_GPR_U32(ctx, 31, 0x1D4234u);
    ctx->pc = 0x1D4230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D422Cu;
    // 0x1d4230: 0xae008834  sw          $zero, -0x77CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D422Cu, 0x1D4234u)) {
        return;
    }
    ctx->pc = 0x1D4234u;
label_1d4234:
    // 0x1d4234: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d4234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4238:
    // 0x1d4238: 0xc0808b8  jal         func_2022E0
label_1d423c:
    if (ctx->pc == 0x1D423Cu) {
        ctx->pc = 0x1D423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4238u;
        // 0x1d423c: 0xae208838  sw          $zero, -0x77C8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294936632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4240u;
        goto label_1d4240;
    }
    ctx->pc = 0x1D4238u;
    SET_GPR_U32(ctx, 31, 0x1D4240u);
    ctx->pc = 0x1D423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4238u;
    // 0x1d423c: 0xae208838  sw          $zero, -0x77C8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294936632), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D4238u, 0x1D4240u)) {
        return;
    }
    ctx->pc = 0x1D4240u;
label_1d4240:
    // 0x1d4240: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d4240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d4244:
    // 0x1d4244: 0x3c090070  lui         $t1, 0x70
    ctx->pc = 0x1d4244u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)112 << 16));
label_1d4248:
    // 0x1d4248: 0x8c448800  lw          $a0, -0x7800($v0)
    ctx->pc = 0x1d4248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936576)));
label_1d424c:
    // 0x1d424c: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x1d424cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1d4250:
    // 0x1d4250: 0x2529883c  addiu       $t1, $t1, -0x77C4
    ctx->pc = 0x1d4250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294936636));
label_1d4254:
    // 0x1d4254: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4258:
    // 0x1d4258: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d4258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d425c:
    // 0x1d425c: 0xc0bc510  jal         func_2F1440
label_1d4260:
    if (ctx->pc == 0x1D4260u) {
        ctx->pc = 0x1D4260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D425Cu;
        // 0x1d4260: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4264u;
        goto label_1d4264;
    }
    ctx->pc = 0x1D425Cu;
    SET_GPR_U32(ctx, 31, 0x1D4264u);
    ctx->pc = 0x1D4260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D425Cu;
    // 0x1d4260: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1440u, 0x1D425Cu, 0x1D4264u)) {
        return;
    }
    ctx->pc = 0x1D4264u;
label_1d4264:
    // 0x1d4264: 0x100003fa  b           . + 4 + (0x3FA << 2)
label_1d4268:
    if (ctx->pc == 0x1D4268u) {
        ctx->pc = 0x1D4268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4264u;
        // 0x1d4268: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D426Cu;
        goto label_1d426c;
    }
    ctx->pc = 0x1D4264u;
    {
        const bool branch_taken_0x1d4264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4264u;
        // 0x1d4268: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4264) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D426Cu;
label_1d426c:
    // 0x1d426c: 0x3c130070  lui         $s3, 0x70
    ctx->pc = 0x1d426cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)112 << 16));
label_1d4270:
    // 0x1d4270: 0x8e62883c  lw          $v0, -0x77C4($s3)
    ctx->pc = 0x1d4270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936636)));
label_1d4274:
    // 0x1d4274: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1d4278:
    if (ctx->pc == 0x1D4278u) {
        ctx->pc = 0x1D4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4274u;
        // 0x1d4278: 0x2674883c  addiu       $s4, $s3, -0x77C4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936636));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D427Cu;
        goto label_1d427c;
    }
    ctx->pc = 0x1D4274u;
    {
        const bool branch_taken_0x1d4274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4274u;
        // 0x1d4278: 0x2674883c  addiu       $s4, $s3, -0x77C4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936636));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4274) {
            ctx->pc = 0x1D42BCu;
            goto label_1d42bc;
        }
    }
    ctx->pc = 0x1D427Cu;
label_1d427c:
    // 0x1d427c: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x1d427cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1d4280:
    // 0x1d4280: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d4280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4284:
    // 0x1d4284: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x1d4284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1d4288:
    // 0x1d4288: 0xc080924  jal         func_202490
label_1d428c:
    if (ctx->pc == 0x1D428Cu) {
        ctx->pc = 0x1D428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4288u;
        // 0x1d428c: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4290u;
        goto label_1d4290;
    }
    ctx->pc = 0x1D4288u;
    SET_GPR_U32(ctx, 31, 0x1D4290u);
    ctx->pc = 0x1D428Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4288u;
    // 0x1d428c: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1D4288u, 0x1D4290u)) {
        return;
    }
    ctx->pc = 0x1D4290u;
label_1d4290:
    // 0x1d4290: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d4290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1d4294:
    // 0x1d4294: 0x8e67883c  lw          $a3, -0x77C4($s3)
    ctx->pc = 0x1d4294u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936636)));
label_1d4298:
    // 0x1d4298: 0x8c648800  lw          $a0, -0x7800($v1)
    ctx->pc = 0x1d4298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936576)));
label_1d429c:
    // 0x1d429c: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x1d429cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1d42a0:
    // 0x1d42a0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1d42a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d42a4:
    // 0x1d42a4: 0xae028834  sw          $v0, -0x77CC($s0)
    ctx->pc = 0x1d42a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936628), GPR_U32(ctx, 2));
label_1d42a8:
    // 0x1d42a8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1d42a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d42ac:
    // 0x1d42ac: 0xc0bc510  jal         func_2F1440
label_1d42b0:
    if (ctx->pc == 0x1D42B0u) {
        ctx->pc = 0x1D42B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42ACu;
        // 0x1d42b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D42B4u;
        goto label_1d42b4;
    }
    ctx->pc = 0x1D42ACu;
    SET_GPR_U32(ctx, 31, 0x1D42B4u);
    ctx->pc = 0x1D42B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D42ACu;
    // 0x1d42b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1440u, 0x1D42ACu, 0x1D42B4u)) {
        return;
    }
    ctx->pc = 0x1D42B4u;
label_1d42b4:
    // 0x1d42b4: 0x100003e6  b           . + 4 + (0x3E6 << 2)
label_1d42b8:
    if (ctx->pc == 0x1D42B8u) {
        ctx->pc = 0x1D42B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42B4u;
        // 0x1d42b8: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D42BCu;
        goto label_1d42bc;
    }
    ctx->pc = 0x1D42B4u;
    {
        const bool branch_taken_0x1d42b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D42B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42B4u;
        // 0x1d42b8: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42b4) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D42BCu;
label_1d42bc:
    // 0x1d42bc: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x1d42bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1d42c0:
    // 0x1d42c0: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1d42c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d42c4:
    // 0x1d42c4: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x1d42c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_1d42c8:
    // 0x1d42c8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1d42c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1d42cc:
    // 0x1d42cc: 0x144003e0  bnez        $v0, . + 4 + (0x3E0 << 2)
label_1d42d0:
    if (ctx->pc == 0x1D42D0u) {
        ctx->pc = 0x1D42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42CCu;
        // 0x1d42d0: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D42D4u;
        goto label_1d42d4;
    }
    ctx->pc = 0x1D42CCu;
    {
        const bool branch_taken_0x1d42cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42CCu;
        // 0x1d42d0: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42cc) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D42D4u;
label_1d42d4:
    // 0x1d42d4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d42d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d42d8:
    // 0x1d42d8: 0xc07555e  jal         func_1D5578
label_1d42dc:
    if (ctx->pc == 0x1D42DCu) {
        ctx->pc = 0x1D42DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42D8u;
        // 0x1d42dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D42E0u;
        goto label_1d42e0;
    }
    ctx->pc = 0x1D42D8u;
    SET_GPR_U32(ctx, 31, 0x1D42E0u);
    ctx->pc = 0x1D42DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D42D8u;
    // 0x1d42dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D42D8u, 0x1D42E0u)) {
        return;
    }
    ctx->pc = 0x1D42E0u;
label_1d42e0:
    // 0x1d42e0: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x1d42e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1d42e4:
    // 0x1d42e4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d42e8:
    if (ctx->pc == 0x1D42E8u) {
        ctx->pc = 0x1D42E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42E4u;
        // 0x1d42e8: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D42ECu;
        goto label_1d42ec;
    }
    ctx->pc = 0x1D42E4u;
    {
        const bool branch_taken_0x1d42e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D42E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42E4u;
        // 0x1d42e8: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42e4) {
            ctx->pc = 0x1D42F4u;
            goto label_1d42f4;
        }
    }
    ctx->pc = 0x1D42ECu;
label_1d42ec:
    // 0x1d42ec: 0xc07596a  jal         func_1D65A8
label_1d42f0:
    if (ctx->pc == 0x1D42F0u) {
        ctx->pc = 0x1D42F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42ECu;
        // 0x1d42f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D42F4u;
        goto label_1d42f4;
    }
    ctx->pc = 0x1D42ECu;
    SET_GPR_U32(ctx, 31, 0x1D42F4u);
    ctx->pc = 0x1D42F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D42ECu;
    // 0x1d42f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D42ECu, 0x1D42F4u)) {
        return;
    }
    ctx->pc = 0x1D42F4u;
label_1d42f4:
    // 0x1d42f4: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x1d42f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1d42f8:
    // 0x1d42f8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_1d42fc:
    if (ctx->pc == 0x1D42FCu) {
        ctx->pc = 0x1D42FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42F8u;
        // 0x1d42fc: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4300u;
        goto label_1d4300;
    }
    ctx->pc = 0x1D42F8u;
    {
        const bool branch_taken_0x1d42f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d42f8) {
            ctx->pc = 0x1D42FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D42F8u;
            // 0x1d42fc: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D430Cu;
            goto label_1d430c;
        }
    }
    ctx->pc = 0x1D4300u;
label_1d4300:
    // 0x1d4300: 0xc07596e  jal         func_1D65B8
label_1d4304:
    if (ctx->pc == 0x1D4304u) {
        ctx->pc = 0x1D4304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4300u;
        // 0x1d4304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4308u;
        goto label_1d4308;
    }
    ctx->pc = 0x1D4300u;
    SET_GPR_U32(ctx, 31, 0x1D4308u);
    ctx->pc = 0x1D4304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4300u;
    // 0x1d4304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D4300u, 0x1D4308u)) {
        return;
    }
    ctx->pc = 0x1D4308u;
label_1d4308:
    // 0x1d4308: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d4308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d430c:
    // 0x1d430c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d430cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4310:
    // 0x1d4310: 0x184003bf  blez        $v0, . + 4 + (0x3BF << 2)
label_1d4314:
    if (ctx->pc == 0x1D4314u) {
        ctx->pc = 0x1D4314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4310u;
        // 0x1d4314: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4318u;
        goto label_1d4318;
    }
    ctx->pc = 0x1D4310u;
    {
        const bool branch_taken_0x1d4310 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D4314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4310u;
        // 0x1d4314: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4310) {
            ctx->pc = 0x1D5210u;
            goto label_1d5210;
        }
    }
    ctx->pc = 0x1D4318u;
label_1d4318:
    // 0x1d4318: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d4318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d431c:
    // 0x1d431c: 0x0  nop
    ctx->pc = 0x1d431cu;
    // NOP
label_1d4320:
    // 0x1d4320: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1d4320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1d4324:
    // 0x1d4324: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d4328:
    // 0x1d4328: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d4328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d432c:
    // 0x1d432c: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x1d432cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
label_1d4330:
    // 0x1d4330: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d4330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4334:
    // 0x1d4334: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d4334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d4338:
    // 0x1d4338: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d433c:
    if (ctx->pc == 0x1D433Cu) {
        ctx->pc = 0x1D433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4338u;
        // 0x1d433c: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4340u;
        goto label_1d4340;
    }
    ctx->pc = 0x1D4338u;
    {
        const bool branch_taken_0x1d4338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4338u;
        // 0x1d433c: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4338) {
            ctx->pc = 0x1D4320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4320;
        }
    }
    ctx->pc = 0x1D4340u;
label_1d4340:
    // 0x1d4340: 0x100003c2  b           . + 4 + (0x3C2 << 2)
label_1d4344:
    if (ctx->pc == 0x1D4344u) {
        ctx->pc = 0x1D4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4340u;
        // 0x1d4344: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4348u;
        goto label_1d4348;
    }
    ctx->pc = 0x1D4340u;
    {
        const bool branch_taken_0x1d4340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4340u;
        // 0x1d4344: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4340) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D4348u;
label_1d4348:
    // 0x1d4348: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d4348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d434c:
    // 0x1d434c: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x1d434cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1d4350:
    // 0x1d4350: 0x8c448800  lw          $a0, -0x7800($v0)
    ctx->pc = 0x1d4350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936576)));
label_1d4354:
    // 0x1d4354: 0xc0bc59a  jal         func_2F1668
label_1d4358:
    if (ctx->pc == 0x1D4358u) {
        ctx->pc = 0x1D4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4354u;
        // 0x1d4358: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D435Cu;
        goto label_1d435c;
    }
    ctx->pc = 0x1D4354u;
    SET_GPR_U32(ctx, 31, 0x1D435Cu);
    ctx->pc = 0x1D4358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4354u;
    // 0x1d4358: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1668u, 0x1D4354u, 0x1D435Cu)) {
        return;
    }
    ctx->pc = 0x1D435Cu;
label_1d435c:
    // 0x1d435c: 0x100003bc  b           . + 4 + (0x3BC << 2)
label_1d4360:
    if (ctx->pc == 0x1D4360u) {
        ctx->pc = 0x1D4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D435Cu;
        // 0x1d4360: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4364u;
        goto label_1d4364;
    }
    ctx->pc = 0x1D435Cu;
    {
        const bool branch_taken_0x1d435c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D435Cu;
        // 0x1d4360: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d435c) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D4364u;
label_1d4364:
    // 0x1d4364: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x1d4364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
label_1d4368:
    // 0x1d4368: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1d4368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d436c:
    // 0x1d436c: 0x3463f00d  ori         $v1, $v1, 0xF00D
    ctx->pc = 0x1d436cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61453);
label_1d4370:
    // 0x1d4370: 0x10430184  beq         $v0, $v1, . + 4 + (0x184 << 2)
label_1d4374:
    if (ctx->pc == 0x1D4374u) {
        ctx->pc = 0x1D4374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4370u;
        // 0x1d4374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4378u;
        goto label_1d4378;
    }
    ctx->pc = 0x1D4370u;
    {
        const bool branch_taken_0x1d4370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D4374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4370u;
        // 0x1d4374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4370) {
            ctx->pc = 0x1D4984u;
            goto label_1d4984;
        }
    }
    ctx->pc = 0x1D4378u;
label_1d4378:
    // 0x1d4378: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1d4378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1d437c:
    // 0x1d437c: 0x10430181  beq         $v0, $v1, . + 4 + (0x181 << 2)
label_1d4380:
    if (ctx->pc == 0x1D4380u) {
        ctx->pc = 0x1D4384u;
        goto label_1d4384;
    }
    ctx->pc = 0x1D437Cu;
    {
        const bool branch_taken_0x1d437c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d437c) {
            ctx->pc = 0x1D4984u;
            goto label_1d4984;
        }
    }
    ctx->pc = 0x1D4384u;
label_1d4384:
    // 0x1d4384: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d4384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d4388:
    // 0x1d4388: 0x1043017d  beq         $v0, $v1, . + 4 + (0x17D << 2)
label_1d438c:
    if (ctx->pc == 0x1D438Cu) {
        ctx->pc = 0x1D438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4388u;
        // 0x1d438c: 0x26240028  addiu       $a0, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4390u;
        goto label_1d4390;
    }
    ctx->pc = 0x1D4388u;
    {
        const bool branch_taken_0x1d4388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4388u;
        // 0x1d438c: 0x26240028  addiu       $a0, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4388) {
            ctx->pc = 0x1D4980u;
            goto label_1d4980;
        }
    }
    ctx->pc = 0x1D4390u;
label_1d4390:
    // 0x1d4390: 0xc074ce0  jal         func_1D3380
label_1d4394:
    if (ctx->pc == 0x1D4394u) {
        ctx->pc = 0x1D4394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4390u;
        // 0x1d4394: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4398u;
        goto label_1d4398;
    }
    ctx->pc = 0x1D4390u;
    SET_GPR_U32(ctx, 31, 0x1D4398u);
    ctx->pc = 0x1D4394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4390u;
    // 0x1d4394: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D3380u, 0x1D4390u, 0x1D4398u)) {
        return;
    }
    ctx->pc = 0x1D4398u;
label_1d4398:
    // 0x1d4398: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d4398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d439c:
    // 0x1d439c: 0x14430179  bne         $v0, $v1, . + 4 + (0x179 << 2)
label_1d43a0:
    if (ctx->pc == 0x1D43A0u) {
        ctx->pc = 0x1D43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D439Cu;
        // 0x1d43a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D43A4u;
        goto label_1d43a4;
    }
    ctx->pc = 0x1D439Cu;
    {
        const bool branch_taken_0x1d439c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D439Cu;
        // 0x1d43a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d439c) {
            ctx->pc = 0x1D4984u;
            goto label_1d4984;
        }
    }
    ctx->pc = 0x1D43A4u;
label_1d43a4:
    // 0x1d43a4: 0xafa00400  sw          $zero, 0x400($sp)
    ctx->pc = 0x1d43a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 0));
label_1d43a8:
    // 0x1d43a8: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x1d43a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_1d43ac:
    // 0x1d43ac: 0xafa00404  sw          $zero, 0x404($sp)
    ctx->pc = 0x1d43acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 0));
label_1d43b0:
    // 0x1d43b0: 0xc074ba4  jal         func_1D2E90
label_1d43b4:
    if (ctx->pc == 0x1D43B4u) {
        ctx->pc = 0x1D43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43B0u;
        // 0x1d43b4: 0x27a50404  addiu       $a1, $sp, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1028));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D43B8u;
        goto label_1d43b8;
    }
    ctx->pc = 0x1D43B0u;
    SET_GPR_U32(ctx, 31, 0x1D43B8u);
    ctx->pc = 0x1D43B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D43B0u;
    // 0x1d43b4: 0x27a50404  addiu       $a1, $sp, 0x404 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1028));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2E90u, 0x1D43B0u, 0x1D43B8u)) {
        return;
    }
    ctx->pc = 0x1D43B8u;
label_1d43b8:
    // 0x1d43b8: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x1d43b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_1d43bc:
    // 0x1d43bc: 0x8fa20400  lw          $v0, 0x400($sp)
    ctx->pc = 0x1d43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_1d43c0:
    // 0x1d43c0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_1d43c4:
    if (ctx->pc == 0x1D43C4u) {
        ctx->pc = 0x1D43C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43C0u;
        // 0x1d43c4: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D43C8u;
        goto label_1d43c8;
    }
    ctx->pc = 0x1D43C0u;
    {
        const bool branch_taken_0x1d43c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d43c0) {
            ctx->pc = 0x1D43C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D43C0u;
            // 0x1d43c4: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D43DCu;
            goto label_1d43dc;
        }
    }
    ctx->pc = 0x1D43C8u;
label_1d43c8:
    // 0x1d43c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d43c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d43cc:
    // 0x1d43cc: 0xc074b8e  jal         func_1D2E38
label_1d43d0:
    if (ctx->pc == 0x1D43D0u) {
        ctx->pc = 0x1D43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43CCu;
        // 0x1d43d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D43D4u;
        goto label_1d43d4;
    }
    ctx->pc = 0x1D43CCu;
    SET_GPR_U32(ctx, 31, 0x1D43D4u);
    ctx->pc = 0x1D43D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D43CCu;
    // 0x1d43d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2E38u, 0x1D43CCu, 0x1D43D4u)) {
        return;
    }
    ctx->pc = 0x1D43D4u;
label_1d43d4:
    // 0x1d43d4: 0xae400084  sw          $zero, 0x84($s2)
    ctx->pc = 0x1d43d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
label_1d43d8:
    // 0x1d43d8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1d43d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1d43dc:
    // 0x1d43dc: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1d43dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1d43e0:
    // 0x1d43e0: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x1d43e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
label_1d43e4:
    // 0x1d43e4: 0xae430088  sw          $v1, 0x88($s2)
    ctx->pc = 0x1d43e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 3));
label_1d43e8:
    // 0x1d43e8: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x1d43e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_1d43ec:
    // 0x1d43ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1d43f0:
    if (ctx->pc == 0x1D43F0u) {
        ctx->pc = 0x1D43F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43ECu;
        // 0x1d43f0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D43F4u;
        goto label_1d43f4;
    }
    ctx->pc = 0x1D43ECu;
    {
        const bool branch_taken_0x1d43ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D43F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43ECu;
        // 0x1d43f0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d43ec) {
            ctx->pc = 0x1D4414u;
            goto label_1d4414;
        }
    }
    ctx->pc = 0x1D43F4u;
label_1d43f4:
    // 0x1d43f4: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x1d43f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1d43f8:
    // 0x1d43f8: 0xc080924  jal         func_202490
label_1d43fc:
    if (ctx->pc == 0x1D43FCu) {
        ctx->pc = 0x1D43FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43F8u;
        // 0x1d43fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4400u;
        goto label_1d4400;
    }
    ctx->pc = 0x1D43F8u;
    SET_GPR_U32(ctx, 31, 0x1D4400u);
    ctx->pc = 0x1D43FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D43F8u;
    // 0x1d43fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1D43F8u, 0x1D4400u)) {
        return;
    }
    ctx->pc = 0x1D4400u;
label_1d4400:
    // 0x1d4400: 0x8e450088  lw          $a1, 0x88($s2)
    ctx->pc = 0x1d4400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1d4404:
    // 0x1d4404: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4408:
    // 0x1d4408: 0xc074b8e  jal         func_1D2E38
label_1d440c:
    if (ctx->pc == 0x1D440Cu) {
        ctx->pc = 0x1D440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4408u;
        // 0x1d440c: 0xae420084  sw          $v0, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4410u;
        goto label_1d4410;
    }
    ctx->pc = 0x1D4408u;
    SET_GPR_U32(ctx, 31, 0x1D4410u);
    ctx->pc = 0x1D440Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4408u;
    // 0x1d440c: 0xae420084  sw          $v0, 0x84($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2E38u, 0x1D4408u, 0x1D4410u)) {
        return;
    }
    ctx->pc = 0x1D4410u;
label_1d4410:
    // 0x1d4410: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d4410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d4414:
    // 0x1d4414: 0x8e480088  lw          $t0, 0x88($s2)
    ctx->pc = 0x1d4414u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1d4418:
    // 0x1d4418: 0x8c448800  lw          $a0, -0x7800($v0)
    ctx->pc = 0x1d4418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936576)));
label_1d441c:
    // 0x1d441c: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x1d441cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1d4420:
    // 0x1d4420: 0x8e460084  lw          $a2, 0x84($s2)
    ctx->pc = 0x1d4420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_1d4424:
    // 0x1d4424: 0xc0bc408  jal         func_2F1020
label_1d4428:
    if (ctx->pc == 0x1D4428u) {
        ctx->pc = 0x1D4428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4424u;
        // 0x1d4428: 0x8e47008c  lw          $a3, 0x8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D442Cu;
        goto label_1d442c;
    }
    ctx->pc = 0x1D4424u;
    SET_GPR_U32(ctx, 31, 0x1D442Cu);
    ctx->pc = 0x1D4428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4424u;
    // 0x1d4428: 0x8e47008c  lw          $a3, 0x8C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1020u, 0x1D4424u, 0x1D442Cu)) {
        return;
    }
    ctx->pc = 0x1D442Cu;
label_1d442c:
    // 0x1d442c: 0x10000388  b           . + 4 + (0x388 << 2)
label_1d4430:
    if (ctx->pc == 0x1D4430u) {
        ctx->pc = 0x1D4430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D442Cu;
        // 0x1d4430: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4434u;
        goto label_1d4434;
    }
    ctx->pc = 0x1D442Cu;
    {
        const bool branch_taken_0x1d442c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D442Cu;
        // 0x1d4430: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d442c) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D4434u;
label_1d4434:
    // 0x1d4434: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d4434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d4438:
    // 0x1d4438: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x1d4438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1d443c:
    // 0x1d443c: 0xc0bc55c  jal         func_2F1570
label_1d4440:
    if (ctx->pc == 0x1D4440u) {
        ctx->pc = 0x1D4440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D443Cu;
        // 0x1d4440: 0x8c448800  lw          $a0, -0x7800($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4444u;
        goto label_1d4444;
    }
    ctx->pc = 0x1D443Cu;
    SET_GPR_U32(ctx, 31, 0x1D4444u);
    ctx->pc = 0x1D4440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D443Cu;
    // 0x1d4440: 0x8c448800  lw          $a0, -0x7800($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1570u, 0x1D443Cu, 0x1D4444u)) {
        return;
    }
    ctx->pc = 0x1D4444u;
label_1d4444:
    // 0x1d4444: 0x10000382  b           . + 4 + (0x382 << 2)
label_1d4448:
    if (ctx->pc == 0x1D4448u) {
        ctx->pc = 0x1D4448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4444u;
        // 0x1d4448: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D444Cu;
        goto label_1d444c;
    }
    ctx->pc = 0x1D4444u;
    {
        const bool branch_taken_0x1d4444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4444u;
        // 0x1d4448: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4444) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D444Cu;
label_1d444c:
    // 0x1d444c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d444cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d4450:
    // 0x1d4450: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x1d4450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1d4454:
    // 0x1d4454: 0xc0bc498  jal         func_2F1260
label_1d4458:
    if (ctx->pc == 0x1D4458u) {
        ctx->pc = 0x1D4458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4454u;
        // 0x1d4458: 0x8c448800  lw          $a0, -0x7800($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D445Cu;
        goto label_1d445c;
    }
    ctx->pc = 0x1D4454u;
    SET_GPR_U32(ctx, 31, 0x1D445Cu);
    ctx->pc = 0x1D4458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4454u;
    // 0x1d4458: 0x8c448800  lw          $a0, -0x7800($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1260u, 0x1D4454u, 0x1D445Cu)) {
        return;
    }
    ctx->pc = 0x1D445Cu;
label_1d445c:
    // 0x1d445c: 0x1000037c  b           . + 4 + (0x37C << 2)
label_1d4460:
    if (ctx->pc == 0x1D4460u) {
        ctx->pc = 0x1D4460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D445Cu;
        // 0x1d4460: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4464u;
        goto label_1d4464;
    }
    ctx->pc = 0x1D445Cu;
    {
        const bool branch_taken_0x1d445c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D445Cu;
        // 0x1d4460: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d445c) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D4464u;
label_1d4464:
    // 0x1d4464: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d4464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d4468:
    // 0x1d4468: 0x8e480088  lw          $t0, 0x88($s2)
    ctx->pc = 0x1d4468u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1d446c:
    // 0x1d446c: 0x8c448800  lw          $a0, -0x7800($v0)
    ctx->pc = 0x1d446cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936576)));
label_1d4470:
    // 0x1d4470: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x1d4470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1d4474:
    // 0x1d4474: 0x8e460084  lw          $a2, 0x84($s2)
    ctx->pc = 0x1d4474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_1d4478:
    // 0x1d4478: 0xc0bc450  jal         func_2F1140
label_1d447c:
    if (ctx->pc == 0x1D447Cu) {
        ctx->pc = 0x1D447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4478u;
        // 0x1d447c: 0x8e47008c  lw          $a3, 0x8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4480u;
        goto label_1d4480;
    }
    ctx->pc = 0x1D4478u;
    SET_GPR_U32(ctx, 31, 0x1D4480u);
    ctx->pc = 0x1D447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4478u;
    // 0x1d447c: 0x8e47008c  lw          $a3, 0x8C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1140u, 0x1D4478u, 0x1D4480u)) {
        return;
    }
    ctx->pc = 0x1D4480u;
label_1d4480:
    // 0x1d4480: 0x10000373  b           . + 4 + (0x373 << 2)
label_1d4484:
    if (ctx->pc == 0x1D4484u) {
        ctx->pc = 0x1D4484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4480u;
        // 0x1d4484: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4488u;
        goto label_1d4488;
    }
    ctx->pc = 0x1D4480u;
    {
        const bool branch_taken_0x1d4480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4480u;
        // 0x1d4484: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4480) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D4488u;
label_1d4488:
    // 0x1d4488: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d4488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d448c:
    // 0x1d448c: 0x8e460084  lw          $a2, 0x84($s2)
    ctx->pc = 0x1d448cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_1d4490:
    // 0x1d4490: 0x8c448800  lw          $a0, -0x7800($v0)
    ctx->pc = 0x1d4490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936576)));
label_1d4494:
    // 0x1d4494: 0xc0bc5da  jal         func_2F1768
label_1d4498:
    if (ctx->pc == 0x1D4498u) {
        ctx->pc = 0x1D4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4494u;
        // 0x1d4498: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D449Cu;
        goto label_1d449c;
    }
    ctx->pc = 0x1D4494u;
    SET_GPR_U32(ctx, 31, 0x1D449Cu);
    ctx->pc = 0x1D4498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4494u;
    // 0x1d4498: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1768u, 0x1D4494u, 0x1D449Cu)) {
        return;
    }
    ctx->pc = 0x1D449Cu;
label_1d449c:
    // 0x1d449c: 0x1000036c  b           . + 4 + (0x36C << 2)
label_1d44a0:
    if (ctx->pc == 0x1D44A0u) {
        ctx->pc = 0x1D44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D449Cu;
        // 0x1d44a0: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D44A4u;
        goto label_1d44a4;
    }
    ctx->pc = 0x1D449Cu;
    {
        const bool branch_taken_0x1d449c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D449Cu;
        // 0x1d44a0: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d449c) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D44A4u;
label_1d44a4:
    // 0x1d44a4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d44a8:
    // 0x1d44a8: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x1d44a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1d44ac:
    // 0x1d44ac: 0xc0bc4d6  jal         func_2F1358
label_1d44b0:
    if (ctx->pc == 0x1D44B0u) {
        ctx->pc = 0x1D44B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44ACu;
        // 0x1d44b0: 0x8c448800  lw          $a0, -0x7800($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D44B4u;
        goto label_1d44b4;
    }
    ctx->pc = 0x1D44ACu;
    SET_GPR_U32(ctx, 31, 0x1D44B4u);
    ctx->pc = 0x1D44B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D44ACu;
    // 0x1d44b0: 0x8c448800  lw          $a0, -0x7800($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1358u, 0x1D44ACu, 0x1D44B4u)) {
        return;
    }
    ctx->pc = 0x1D44B4u;
label_1d44b4:
    // 0x1d44b4: 0x10000366  b           . + 4 + (0x366 << 2)
label_1d44b8:
    if (ctx->pc == 0x1D44B8u) {
        ctx->pc = 0x1D44B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44B4u;
        // 0x1d44b8: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D44BCu;
        goto label_1d44bc;
    }
    ctx->pc = 0x1D44B4u;
    {
        const bool branch_taken_0x1d44b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D44B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44B4u;
        // 0x1d44b8: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44b4) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D44BCu;
label_1d44bc:
    // 0x1d44bc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d44bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d44c0:
    // 0x1d44c0: 0x26540004  addiu       $s4, $s2, 0x4
    ctx->pc = 0x1d44c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1d44c4:
    // 0x1d44c4: 0x8c43883c  lw          $v1, -0x77C4($v0)
    ctx->pc = 0x1d44c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936636)));
label_1d44c8:
    // 0x1d44c8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1d44c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d44cc:
    // 0x1d44cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d44ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d44d0:
    // 0x1d44d0: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
label_1d44d4:
    if (ctx->pc == 0x1D44D4u) {
        ctx->pc = 0x1D44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44D0u;
        // 0x1d44d4: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D44D8u;
        goto label_1d44d8;
    }
    ctx->pc = 0x1D44D0u;
    {
        const bool branch_taken_0x1d44d0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1D44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44D0u;
        // 0x1d44d4: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44d0) {
            ctx->pc = 0x1D4520u;
            goto label_1d4520;
        }
    }
    ctx->pc = 0x1D44D8u;
label_1d44d8:
    // 0x1d44d8: 0x3c170070  lui         $s7, 0x70
    ctx->pc = 0x1d44d8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)112 << 16));
label_1d44dc:
    // 0x1d44dc: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1d44dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d44e0:
    // 0x1d44e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d44e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d44e4:
    // 0x1d44e4: 0x8ee58834  lw          $a1, -0x77CC($s7)
    ctx->pc = 0x1d44e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936628)));
label_1d44e8:
    // 0x1d44e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d44e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d44ec:
    // 0x1d44ec: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x1d44ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_1d44f0:
    // 0x1d44f0: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x1d44f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_1d44f4:
    // 0x1d44f4: 0xc0c4a1f  jal         func_31287C
label_1d44f8:
    if (ctx->pc == 0x1D44F8u) {
        ctx->pc = 0x1D44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44F4u;
        // 0x1d44f8: 0x26730038  addiu       $s3, $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D44FCu;
        goto label_1d44fc;
    }
    ctx->pc = 0x1D44F4u;
    SET_GPR_U32(ctx, 31, 0x1D44FCu);
    ctx->pc = 0x1D44F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D44F4u;
    // 0x1d44f8: 0x26730038  addiu       $s3, $s3, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1D44F4u, 0x1D44FCu)) {
        return;
    }
    ctx->pc = 0x1D44FCu;
label_1d44fc:
    // 0x1d44fc: 0x202900a  movz        $s2, $s0, $v0
    ctx->pc = 0x1d44fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16));
label_1d4500:
    // 0x1d4500: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d4500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1d4504:
    // 0x1d4504: 0x8c62883c  lw          $v0, -0x77C4($v1)
    ctx->pc = 0x1d4504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936636)));
label_1d4508:
    // 0x1d4508: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d4508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d450c:
    // 0x1d450c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1d450cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d4510:
    // 0x1d4510: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d4514:
    if (ctx->pc == 0x1D4514u) {
        ctx->pc = 0x1D4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4510u;
        // 0x1d4514: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4518u;
        goto label_1d4518;
    }
    ctx->pc = 0x1D4510u;
    {
        const bool branch_taken_0x1d4510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4510u;
        // 0x1d4514: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4510) {
            ctx->pc = 0x1D4524u;
            goto label_1d4524;
        }
    }
    ctx->pc = 0x1D4518u;
label_1d4518:
    // 0x1d4518: 0x1256fff3  beq         $s2, $s6, . + 4 + (-0xD << 2)
label_1d451c:
    if (ctx->pc == 0x1D451Cu) {
        ctx->pc = 0x1D451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4518u;
        // 0x1d451c: 0x8ee58834  lw          $a1, -0x77CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4520u;
        goto label_1d4520;
    }
    ctx->pc = 0x1D4518u;
    {
        const bool branch_taken_0x1d4518 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 22));
        ctx->pc = 0x1D451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4518u;
        // 0x1d451c: 0x8ee58834  lw          $a1, -0x77CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4518) {
            ctx->pc = 0x1D44E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d44e8;
        }
    }
    ctx->pc = 0x1D4520u;
label_1d4520:
    // 0x1d4520: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d4520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d4524:
    // 0x1d4524: 0x1242000d  beq         $s2, $v0, . + 4 + (0xD << 2)
label_1d4528:
    if (ctx->pc == 0x1D4528u) {
        ctx->pc = 0x1D4528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4524u;
        // 0x1d4528: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D452Cu;
        goto label_1d452c;
    }
    ctx->pc = 0x1D4524u;
    {
        const bool branch_taken_0x1d4524 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D4528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4524u;
        // 0x1d4528: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4524) {
            ctx->pc = 0x1D455Cu;
            goto label_1d455c;
        }
    }
    ctx->pc = 0x1D452Cu;
label_1d452c:
    // 0x1d452c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d452cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4530:
    // 0x1d4530: 0xc07588a  jal         func_1D6228
label_1d4534:
    if (ctx->pc == 0x1D4534u) {
        ctx->pc = 0x1D4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4530u;
        // 0x1d4534: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4538u;
        goto label_1d4538;
    }
    ctx->pc = 0x1D4530u;
    SET_GPR_U32(ctx, 31, 0x1D4538u);
    ctx->pc = 0x1D4534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4530u;
    // 0x1d4534: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6228u, 0x1D4530u, 0x1D4538u)) {
        return;
    }
    ctx->pc = 0x1D4538u;
label_1d4538:
    // 0x1d4538: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d4538u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d453c:
    // 0x1d453c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1d4540:
    if (ctx->pc == 0x1D4540u) {
        ctx->pc = 0x1D4540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D453Cu;
        // 0x1d4540: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4544u;
        goto label_1d4544;
    }
    ctx->pc = 0x1D453Cu;
    {
        const bool branch_taken_0x1d453c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D453Cu;
        // 0x1d4540: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d453c) {
            ctx->pc = 0x1D4548u;
            goto label_1d4548;
        }
    }
    ctx->pc = 0x1D4544u;
label_1d4544:
    // 0x1d4544: 0xac620094  sw          $v0, 0x94($v1)
    ctx->pc = 0x1d4544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
label_1d4548:
    // 0x1d4548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d454c:
    // 0x1d454c: 0xc07555e  jal         func_1D5578
label_1d4550:
    if (ctx->pc == 0x1D4550u) {
        ctx->pc = 0x1D4550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D454Cu;
        // 0x1d4550: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4554u;
        goto label_1d4554;
    }
    ctx->pc = 0x1D454Cu;
    SET_GPR_U32(ctx, 31, 0x1D4554u);
    ctx->pc = 0x1D4550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D454Cu;
    // 0x1d4550: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D454Cu, 0x1D4554u)) {
        return;
    }
    ctx->pc = 0x1D4554u;
label_1d4554:
    // 0x1d4554: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1d4558:
    if (ctx->pc == 0x1D4558u) {
        ctx->pc = 0x1D4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4554u;
        // 0x1d4558: 0x8e22008c  lw          $v0, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D455Cu;
        goto label_1d455c;
    }
    ctx->pc = 0x1D4554u;
    {
        const bool branch_taken_0x1d4554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4554u;
        // 0x1d4558: 0x8e22008c  lw          $v0, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4554) {
            ctx->pc = 0x1D45D4u;
            goto label_1d45d4;
        }
    }
    ctx->pc = 0x1D455Cu;
label_1d455c:
    // 0x1d455c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d455cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1d4560:
    // 0x1d4560: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d4560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d4564:
    // 0x1d4564: 0x24a50fd8  addiu       $a1, $a1, 0xFD8
    ctx->pc = 0x1d4564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4056));
label_1d4568:
    // 0x1d4568: 0xc0c4fc4  jal         func_313F10
label_1d456c:
    if (ctx->pc == 0x1D456Cu) {
        ctx->pc = 0x1D456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4568u;
        // 0x1d456c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4570u;
        goto label_1d4570;
    }
    ctx->pc = 0x1D4568u;
    SET_GPR_U32(ctx, 31, 0x1D4570u);
    ctx->pc = 0x1D456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4568u;
    // 0x1d456c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1D4568u, 0x1D4570u)) {
        return;
    }
    ctx->pc = 0x1D4570u;
label_1d4570:
    // 0x1d4570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4574:
    // 0x1d4574: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d4574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d4578:
    // 0x1d4578: 0xc07588a  jal         func_1D6228
label_1d457c:
    if (ctx->pc == 0x1D457Cu) {
        ctx->pc = 0x1D457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4578u;
        // 0x1d457c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4580u;
        goto label_1d4580;
    }
    ctx->pc = 0x1D4578u;
    SET_GPR_U32(ctx, 31, 0x1D4580u);
    ctx->pc = 0x1D457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4578u;
    // 0x1d457c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6228u, 0x1D4578u, 0x1D4580u)) {
        return;
    }
    ctx->pc = 0x1D4580u;
label_1d4580:
    // 0x1d4580: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d4580u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4584:
    // 0x1d4584: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1d4588:
    if (ctx->pc == 0x1D4588u) {
        ctx->pc = 0x1D4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4584u;
        // 0x1d4588: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D458Cu;
        goto label_1d458c;
    }
    ctx->pc = 0x1D4584u;
    {
        const bool branch_taken_0x1d4584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4584u;
        // 0x1d4588: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4584) {
            ctx->pc = 0x1D4590u;
            goto label_1d4590;
        }
    }
    ctx->pc = 0x1D458Cu;
label_1d458c:
    // 0x1d458c: 0xac620094  sw          $v0, 0x94($v1)
    ctx->pc = 0x1d458cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
label_1d4590:
    // 0x1d4590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4594:
    // 0x1d4594: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d4594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d4598:
    // 0x1d4598: 0xc07588a  jal         func_1D6228
label_1d459c:
    if (ctx->pc == 0x1D459Cu) {
        ctx->pc = 0x1D459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4598u;
        // 0x1d459c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D45A0u;
        goto label_1d45a0;
    }
    ctx->pc = 0x1D4598u;
    SET_GPR_U32(ctx, 31, 0x1D45A0u);
    ctx->pc = 0x1D459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4598u;
    // 0x1d459c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6228u, 0x1D4598u, 0x1D45A0u)) {
        return;
    }
    ctx->pc = 0x1D45A0u;
label_1d45a0:
    // 0x1d45a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d45a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d45a4:
    // 0x1d45a4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1d45a8:
    if (ctx->pc == 0x1D45A8u) {
        ctx->pc = 0x1D45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45A4u;
        // 0x1d45a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D45ACu;
        goto label_1d45ac;
    }
    ctx->pc = 0x1D45A4u;
    {
        const bool branch_taken_0x1d45a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45A4u;
        // 0x1d45a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45a4) {
            ctx->pc = 0x1D45B0u;
            goto label_1d45b0;
        }
    }
    ctx->pc = 0x1D45ACu;
label_1d45ac:
    // 0x1d45ac: 0xac620094  sw          $v0, 0x94($v1)
    ctx->pc = 0x1d45acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
label_1d45b0:
    // 0x1d45b0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1d45b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d45b4:
    // 0x1d45b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d45b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d45b8:
    // 0x1d45b8: 0xc07588a  jal         func_1D6228
label_1d45bc:
    if (ctx->pc == 0x1D45BCu) {
        ctx->pc = 0x1D45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45B8u;
        // 0x1d45bc: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D45C0u;
        goto label_1d45c0;
    }
    ctx->pc = 0x1D45B8u;
    SET_GPR_U32(ctx, 31, 0x1D45C0u);
    ctx->pc = 0x1D45BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D45B8u;
    // 0x1d45bc: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6228u, 0x1D45B8u, 0x1D45C0u)) {
        return;
    }
    ctx->pc = 0x1D45C0u;
label_1d45c0:
    // 0x1d45c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d45c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d45c4:
    // 0x1d45c4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1d45c8:
    if (ctx->pc == 0x1D45C8u) {
        ctx->pc = 0x1D45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45C4u;
        // 0x1d45c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D45CCu;
        goto label_1d45cc;
    }
    ctx->pc = 0x1D45C4u;
    {
        const bool branch_taken_0x1d45c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45C4u;
        // 0x1d45c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45c4) {
            ctx->pc = 0x1D45D0u;
            goto label_1d45d0;
        }
    }
    ctx->pc = 0x1D45CCu;
label_1d45cc:
    // 0x1d45cc: 0xac620094  sw          $v0, 0x94($v1)
    ctx->pc = 0x1d45ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
label_1d45d0:
    // 0x1d45d0: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x1d45d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_1d45d4:
    // 0x1d45d4: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1d45d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d45d8:
    // 0x1d45d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d45dc:
    // 0x1d45dc: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1d45dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1d45e0:
    // 0x1d45e0: 0x1460031a  bnez        $v1, . + 4 + (0x31A << 2)
label_1d45e4:
    if (ctx->pc == 0x1D45E4u) {
        ctx->pc = 0x1D45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45E0u;
        // 0x1d45e4: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D45E8u;
        goto label_1d45e8;
    }
    ctx->pc = 0x1D45E0u;
    {
        const bool branch_taken_0x1d45e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45E0u;
        // 0x1d45e4: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45e0) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D45E8u;
label_1d45e8:
    // 0x1d45e8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d45e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d45ec:
    // 0x1d45ec: 0xc07555e  jal         func_1D5578
label_1d45f0:
    if (ctx->pc == 0x1D45F0u) {
        ctx->pc = 0x1D45F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45ECu;
        // 0x1d45f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D45F4u;
        goto label_1d45f4;
    }
    ctx->pc = 0x1D45ECu;
    SET_GPR_U32(ctx, 31, 0x1D45F4u);
    ctx->pc = 0x1D45F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D45ECu;
    // 0x1d45f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D45ECu, 0x1D45F4u)) {
        return;
    }
    ctx->pc = 0x1D45F4u;
label_1d45f4:
    // 0x1d45f4: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x1d45f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1d45f8:
    // 0x1d45f8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d45fc:
    if (ctx->pc == 0x1D45FCu) {
        ctx->pc = 0x1D45FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45F8u;
        // 0x1d45fc: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4600u;
        goto label_1d4600;
    }
    ctx->pc = 0x1D45F8u;
    {
        const bool branch_taken_0x1d45f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D45FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45F8u;
        // 0x1d45fc: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45f8) {
            ctx->pc = 0x1D4608u;
            goto label_1d4608;
        }
    }
    ctx->pc = 0x1D4600u;
label_1d4600:
    // 0x1d4600: 0xc07596a  jal         func_1D65A8
label_1d4604:
    if (ctx->pc == 0x1D4604u) {
        ctx->pc = 0x1D4604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4600u;
        // 0x1d4604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4608u;
        goto label_1d4608;
    }
    ctx->pc = 0x1D4600u;
    SET_GPR_U32(ctx, 31, 0x1D4608u);
    ctx->pc = 0x1D4604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4600u;
    // 0x1d4604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D4600u, 0x1D4608u)) {
        return;
    }
    ctx->pc = 0x1D4608u;
label_1d4608:
    // 0x1d4608: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x1d4608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1d460c:
    // 0x1d460c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_1d4610:
    if (ctx->pc == 0x1D4610u) {
        ctx->pc = 0x1D4610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D460Cu;
        // 0x1d4610: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4614u;
        goto label_1d4614;
    }
    ctx->pc = 0x1D460Cu;
    {
        const bool branch_taken_0x1d460c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d460c) {
            ctx->pc = 0x1D4610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D460Cu;
            // 0x1d4610: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4620u;
            goto label_1d4620;
        }
    }
    ctx->pc = 0x1D4614u;
label_1d4614:
    // 0x1d4614: 0xc07596e  jal         func_1D65B8
label_1d4618:
    if (ctx->pc == 0x1D4618u) {
        ctx->pc = 0x1D4618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4614u;
        // 0x1d4618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D461Cu;
        goto label_1d461c;
    }
    ctx->pc = 0x1D4614u;
    SET_GPR_U32(ctx, 31, 0x1D461Cu);
    ctx->pc = 0x1D4618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4614u;
    // 0x1d4618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D4614u, 0x1D461Cu)) {
        return;
    }
    ctx->pc = 0x1D461Cu;
label_1d461c:
    // 0x1d461c: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4620:
    // 0x1d4620: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d4620u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4624:
    // 0x1d4624: 0x184002fa  blez        $v0, . + 4 + (0x2FA << 2)
label_1d4628:
    if (ctx->pc == 0x1D4628u) {
        ctx->pc = 0x1D4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4624u;
        // 0x1d4628: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D462Cu;
        goto label_1d462c;
    }
    ctx->pc = 0x1D4624u;
    {
        const bool branch_taken_0x1d4624 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4624u;
        // 0x1d4628: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4624) {
            ctx->pc = 0x1D5210u;
            goto label_1d5210;
        }
    }
    ctx->pc = 0x1D462Cu;
label_1d462c:
    // 0x1d462c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d462cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4630:
    // 0x1d4630: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1d4630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1d4634:
    // 0x1d4634: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d4638:
    // 0x1d4638: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d4638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d463c:
    // 0x1d463c: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x1d463cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
label_1d4640:
    // 0x1d4640: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d4640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4644:
    // 0x1d4644: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d4644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d4648:
    // 0x1d4648: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d464c:
    if (ctx->pc == 0x1D464Cu) {
        ctx->pc = 0x1D464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4648u;
        // 0x1d464c: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4650u;
        goto label_1d4650;
    }
    ctx->pc = 0x1D4648u;
    {
        const bool branch_taken_0x1d4648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4648u;
        // 0x1d464c: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4648) {
            ctx->pc = 0x1D4630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4630;
        }
    }
    ctx->pc = 0x1D4650u;
label_1d4650:
    // 0x1d4650: 0x100002fe  b           . + 4 + (0x2FE << 2)
label_1d4654:
    if (ctx->pc == 0x1D4654u) {
        ctx->pc = 0x1D4654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4650u;
        // 0x1d4654: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4658u;
        goto label_1d4658;
    }
    ctx->pc = 0x1D4650u;
    {
        const bool branch_taken_0x1d4650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4650u;
        // 0x1d4654: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4650) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D4658u;
label_1d4658:
    // 0x1d4658: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d4658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d465c:
    // 0x1d465c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d465cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d4660:
    // 0x1d4660: 0x26550004  addiu       $s5, $s2, 0x4
    ctx->pc = 0x1d4660u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1d4664:
    // 0x1d4664: 0x8c44883c  lw          $a0, -0x77C4($v0)
    ctx->pc = 0x1d4664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936636)));
label_1d4668:
    // 0x1d4668: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x1d4668u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d466c:
    // 0x1d466c: 0x8c749b80  lw          $s4, -0x6480($v1)
    ctx->pc = 0x1d466cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941568)));
label_1d4670:
    // 0x1d4670: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1d4670u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d4674:
    // 0x1d4674: 0x18800014  blez        $a0, . + 4 + (0x14 << 2)
label_1d4678:
    if (ctx->pc == 0x1D4678u) {
        ctx->pc = 0x1D4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4674u;
        // 0x1d4678: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D467Cu;
        goto label_1d467c;
    }
    ctx->pc = 0x1D4674u;
    {
        const bool branch_taken_0x1d4674 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x1D4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4674u;
        // 0x1d4678: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4674) {
            ctx->pc = 0x1D46C8u;
            goto label_1d46c8;
        }
    }
    ctx->pc = 0x1D467Cu;
label_1d467c:
    // 0x1d467c: 0x3c170070  lui         $s7, 0x70
    ctx->pc = 0x1d467cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)112 << 16));
label_1d4680:
    // 0x1d4680: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1d4680u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d4684:
    // 0x1d4684: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d4684u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4688:
    // 0x1d4688: 0x8ee58834  lw          $a1, -0x77CC($s7)
    ctx->pc = 0x1d4688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936628)));
label_1d468c:
    // 0x1d468c: 0x0  nop
    ctx->pc = 0x1d468cu;
    // NOP
label_1d4690:
    // 0x1d4690: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d4694:
    // 0x1d4694: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x1d4694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_1d4698:
    // 0x1d4698: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x1d4698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_1d469c:
    // 0x1d469c: 0xc0c4a1f  jal         func_31287C
label_1d46a0:
    if (ctx->pc == 0x1D46A0u) {
        ctx->pc = 0x1D46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D469Cu;
        // 0x1d46a0: 0x26730038  addiu       $s3, $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D46A4u;
        goto label_1d46a4;
    }
    ctx->pc = 0x1D469Cu;
    SET_GPR_U32(ctx, 31, 0x1D46A4u);
    ctx->pc = 0x1D46A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D469Cu;
    // 0x1d46a0: 0x26730038  addiu       $s3, $s3, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1D469Cu, 0x1D46A4u)) {
        return;
    }
    ctx->pc = 0x1D46A4u;
label_1d46a4:
    // 0x1d46a4: 0x202900a  movz        $s2, $s0, $v0
    ctx->pc = 0x1d46a4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16));
label_1d46a8:
    // 0x1d46a8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d46a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1d46ac:
    // 0x1d46ac: 0x8c62883c  lw          $v0, -0x77C4($v1)
    ctx->pc = 0x1d46acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936636)));
label_1d46b0:
    // 0x1d46b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d46b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d46b4:
    // 0x1d46b4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1d46b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d46b8:
    // 0x1d46b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d46bc:
    if (ctx->pc == 0x1D46BCu) {
        ctx->pc = 0x1D46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46B8u;
        // 0x1d46bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D46C0u;
        goto label_1d46c0;
    }
    ctx->pc = 0x1D46B8u;
    {
        const bool branch_taken_0x1d46b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46B8u;
        // 0x1d46bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46b8) {
            ctx->pc = 0x1D46CCu;
            goto label_1d46cc;
        }
    }
    ctx->pc = 0x1D46C0u;
label_1d46c0:
    // 0x1d46c0: 0x1256fff3  beq         $s2, $s6, . + 4 + (-0xD << 2)
label_1d46c4:
    if (ctx->pc == 0x1D46C4u) {
        ctx->pc = 0x1D46C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46C0u;
        // 0x1d46c4: 0x8ee58834  lw          $a1, -0x77CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D46C8u;
        goto label_1d46c8;
    }
    ctx->pc = 0x1D46C0u;
    {
        const bool branch_taken_0x1d46c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 22));
        ctx->pc = 0x1D46C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46C0u;
        // 0x1d46c4: 0x8ee58834  lw          $a1, -0x77CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46c0) {
            ctx->pc = 0x1D4690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4690;
        }
    }
    ctx->pc = 0x1D46C8u;
label_1d46c8:
    // 0x1d46c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d46cc:
    // 0x1d46cc: 0x1242000e  beq         $s2, $v0, . + 4 + (0xE << 2)
label_1d46d0:
    if (ctx->pc == 0x1D46D0u) {
        ctx->pc = 0x1D46D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46CCu;
        // 0x1d46d0: 0x8fc79b80  lw          $a3, -0x6480($fp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294941568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D46D4u;
        goto label_1d46d4;
    }
    ctx->pc = 0x1D46CCu;
    {
        const bool branch_taken_0x1d46cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D46D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46CCu;
        // 0x1d46d0: 0x8fc79b80  lw          $a3, -0x6480($fp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294941568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46cc) {
            ctx->pc = 0x1D4708u;
            goto label_1d4708;
        }
    }
    ctx->pc = 0x1D46D4u;
label_1d46d4:
    // 0x1d46d4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d46d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1d46d8:
    // 0x1d46d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d46d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d46dc:
    // 0x1d46dc: 0x24a51098  addiu       $a1, $a1, 0x1098
    ctx->pc = 0x1d46dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4248));
label_1d46e0:
    // 0x1d46e0: 0xc0c4fc4  jal         func_313F10
label_1d46e4:
    if (ctx->pc == 0x1D46E4u) {
        ctx->pc = 0x1D46E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46E0u;
        // 0x1d46e4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D46E8u;
        goto label_1d46e8;
    }
    ctx->pc = 0x1D46E0u;
    SET_GPR_U32(ctx, 31, 0x1D46E8u);
    ctx->pc = 0x1D46E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46E0u;
    // 0x1d46e4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1D46E0u, 0x1D46E8u)) {
        return;
    }
    ctx->pc = 0x1D46E8u;
label_1d46e8:
    // 0x1d46e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d46e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d46ec:
    // 0x1d46ec: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d46ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d46f0:
    // 0x1d46f0: 0xc07588a  jal         func_1D6228
label_1d46f4:
    if (ctx->pc == 0x1D46F4u) {
        ctx->pc = 0x1D46F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46F0u;
        // 0x1d46f4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D46F8u;
        goto label_1d46f8;
    }
    ctx->pc = 0x1D46F0u;
    SET_GPR_U32(ctx, 31, 0x1D46F8u);
    ctx->pc = 0x1D46F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46F0u;
    // 0x1d46f4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6228u, 0x1D46F0u, 0x1D46F8u)) {
        return;
    }
    ctx->pc = 0x1D46F8u;
label_1d46f8:
    // 0x1d46f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d46f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d46fc:
    // 0x1d46fc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1d4700:
    if (ctx->pc == 0x1D4700u) {
        ctx->pc = 0x1D4700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46FCu;
        // 0x1d4700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4704u;
        goto label_1d4704;
    }
    ctx->pc = 0x1D46FCu;
    {
        const bool branch_taken_0x1d46fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46FCu;
        // 0x1d4700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46fc) {
            ctx->pc = 0x1D4708u;
            goto label_1d4708;
        }
    }
    ctx->pc = 0x1D4704u;
label_1d4704:
    // 0x1d4704: 0xac620094  sw          $v0, 0x94($v1)
    ctx->pc = 0x1d4704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
label_1d4708:
    // 0x1d4708: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d4708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1d470c:
    // 0x1d470c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1d470cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d4710:
    // 0x1d4710: 0x8c62883c  lw          $v0, -0x77C4($v1)
    ctx->pc = 0x1d4710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936636)));
label_1d4714:
    // 0x1d4714: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d4714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4718:
    // 0x1d4718: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d4718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d471c:
    // 0x1d471c: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_1d4720:
    if (ctx->pc == 0x1D4720u) {
        ctx->pc = 0x1D4720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D471Cu;
        // 0x1d4720: 0x8c749b84  lw          $s4, -0x647C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4724u;
        goto label_1d4724;
    }
    ctx->pc = 0x1D471Cu;
    {
        const bool branch_taken_0x1d471c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D4720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D471Cu;
        // 0x1d4720: 0x8c749b84  lw          $s4, -0x647C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d471c) {
            ctx->pc = 0x1D4770u;
            goto label_1d4770;
        }
    }
    ctx->pc = 0x1D4724u;
label_1d4724:
    // 0x1d4724: 0x3c170070  lui         $s7, 0x70
    ctx->pc = 0x1d4724u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)112 << 16));
label_1d4728:
    // 0x1d4728: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1d4728u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d472c:
    // 0x1d472c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d472cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4730:
    // 0x1d4730: 0x8ee58834  lw          $a1, -0x77CC($s7)
    ctx->pc = 0x1d4730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936628)));
label_1d4734:
    // 0x1d4734: 0x0  nop
    ctx->pc = 0x1d4734u;
    // NOP
label_1d4738:
    // 0x1d4738: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d473c:
    // 0x1d473c: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x1d473cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_1d4740:
    // 0x1d4740: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x1d4740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_1d4744:
    // 0x1d4744: 0xc0c4a1f  jal         func_31287C
label_1d4748:
    if (ctx->pc == 0x1D4748u) {
        ctx->pc = 0x1D4748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4744u;
        // 0x1d4748: 0x26730038  addiu       $s3, $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D474Cu;
        goto label_1d474c;
    }
    ctx->pc = 0x1D4744u;
    SET_GPR_U32(ctx, 31, 0x1D474Cu);
    ctx->pc = 0x1D4748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4744u;
    // 0x1d4748: 0x26730038  addiu       $s3, $s3, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1D4744u, 0x1D474Cu)) {
        return;
    }
    ctx->pc = 0x1D474Cu;
label_1d474c:
    // 0x1d474c: 0x202900a  movz        $s2, $s0, $v0
    ctx->pc = 0x1d474cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16));
label_1d4750:
    // 0x1d4750: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d4750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1d4754:
    // 0x1d4754: 0x8c62883c  lw          $v0, -0x77C4($v1)
    ctx->pc = 0x1d4754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936636)));
label_1d4758:
    // 0x1d4758: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d4758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d475c:
    // 0x1d475c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1d475cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d4760:
    // 0x1d4760: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d4764:
    if (ctx->pc == 0x1D4764u) {
        ctx->pc = 0x1D4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4760u;
        // 0x1d4764: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4768u;
        goto label_1d4768;
    }
    ctx->pc = 0x1D4760u;
    {
        const bool branch_taken_0x1d4760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4760u;
        // 0x1d4764: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4760) {
            ctx->pc = 0x1D4774u;
            goto label_1d4774;
        }
    }
    ctx->pc = 0x1D4768u;
label_1d4768:
    // 0x1d4768: 0x1256fff3  beq         $s2, $s6, . + 4 + (-0xD << 2)
label_1d476c:
    if (ctx->pc == 0x1D476Cu) {
        ctx->pc = 0x1D476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4768u;
        // 0x1d476c: 0x8ee58834  lw          $a1, -0x77CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4770u;
        goto label_1d4770;
    }
    ctx->pc = 0x1D4768u;
    {
        const bool branch_taken_0x1d4768 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 22));
        ctx->pc = 0x1D476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4768u;
        // 0x1d476c: 0x8ee58834  lw          $a1, -0x77CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4768) {
            ctx->pc = 0x1D4738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4738;
        }
    }
    ctx->pc = 0x1D4770u;
label_1d4770:
    // 0x1d4770: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d4770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d4774:
    // 0x1d4774: 0x1242000f  beq         $s2, $v0, . + 4 + (0xF << 2)
label_1d4778:
    if (ctx->pc == 0x1D4778u) {
        ctx->pc = 0x1D4778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4774u;
        // 0x1d4778: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D477Cu;
        goto label_1d477c;
    }
    ctx->pc = 0x1D4774u;
    {
        const bool branch_taken_0x1d4774 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D4778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4774u;
        // 0x1d4778: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4774) {
            ctx->pc = 0x1D47B4u;
            goto label_1d47b4;
        }
    }
    ctx->pc = 0x1D477Cu;
label_1d477c:
    // 0x1d477c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d477cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1d4780:
    // 0x1d4780: 0x8c479b84  lw          $a3, -0x647C($v0)
    ctx->pc = 0x1d4780u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941572)));
label_1d4784:
    // 0x1d4784: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d4784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d4788:
    // 0x1d4788: 0x24a51098  addiu       $a1, $a1, 0x1098
    ctx->pc = 0x1d4788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4248));
label_1d478c:
    // 0x1d478c: 0xc0c4fc4  jal         func_313F10
label_1d4790:
    if (ctx->pc == 0x1D4790u) {
        ctx->pc = 0x1D4790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D478Cu;
        // 0x1d4790: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4794u;
        goto label_1d4794;
    }
    ctx->pc = 0x1D478Cu;
    SET_GPR_U32(ctx, 31, 0x1D4794u);
    ctx->pc = 0x1D4790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D478Cu;
    // 0x1d4790: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1D478Cu, 0x1D4794u)) {
        return;
    }
    ctx->pc = 0x1D4794u;
label_1d4794:
    // 0x1d4794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4798:
    // 0x1d4798: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d4798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d479c:
    // 0x1d479c: 0xc07588a  jal         func_1D6228
label_1d47a0:
    if (ctx->pc == 0x1D47A0u) {
        ctx->pc = 0x1D47A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D479Cu;
        // 0x1d47a0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D47A4u;
        goto label_1d47a4;
    }
    ctx->pc = 0x1D479Cu;
    SET_GPR_U32(ctx, 31, 0x1D47A4u);
    ctx->pc = 0x1D47A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D479Cu;
    // 0x1d47a0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6228u, 0x1D479Cu, 0x1D47A4u)) {
        return;
    }
    ctx->pc = 0x1D47A4u;
label_1d47a4:
    // 0x1d47a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d47a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d47a8:
    // 0x1d47a8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1d47ac:
    if (ctx->pc == 0x1D47ACu) {
        ctx->pc = 0x1D47ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47A8u;
        // 0x1d47ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D47B0u;
        goto label_1d47b0;
    }
    ctx->pc = 0x1D47A8u;
    {
        const bool branch_taken_0x1d47a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47A8u;
        // 0x1d47ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47a8) {
            ctx->pc = 0x1D47B4u;
            goto label_1d47b4;
        }
    }
    ctx->pc = 0x1D47B0u;
label_1d47b0:
    // 0x1d47b0: 0xac620094  sw          $v0, 0x94($v1)
    ctx->pc = 0x1d47b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
label_1d47b4:
    // 0x1d47b4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d47b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1d47b8:
    // 0x1d47b8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1d47b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d47bc:
    // 0x1d47bc: 0x8c62883c  lw          $v0, -0x77C4($v1)
    ctx->pc = 0x1d47bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936636)));
label_1d47c0:
    // 0x1d47c0: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_1d47c4:
    if (ctx->pc == 0x1D47C4u) {
        ctx->pc = 0x1D47C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47C0u;
        // 0x1d47c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D47C8u;
        goto label_1d47c8;
    }
    ctx->pc = 0x1D47C0u;
    {
        const bool branch_taken_0x1d47c0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D47C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47C0u;
        // 0x1d47c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47c0) {
            ctx->pc = 0x1D4810u;
            goto label_1d4810;
        }
    }
    ctx->pc = 0x1D47C8u;
label_1d47c8:
    // 0x1d47c8: 0x3c160070  lui         $s6, 0x70
    ctx->pc = 0x1d47c8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)112 << 16));
label_1d47cc:
    // 0x1d47cc: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1d47ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d47d0:
    // 0x1d47d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d47d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d47d4:
    // 0x1d47d4: 0x8ec58834  lw          $a1, -0x77CC($s6)
    ctx->pc = 0x1d47d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936628)));
label_1d47d8:
    // 0x1d47d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d47d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d47dc:
    // 0x1d47dc: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x1d47dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_1d47e0:
    // 0x1d47e0: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x1d47e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_1d47e4:
    // 0x1d47e4: 0xc0c4a1f  jal         func_31287C
label_1d47e8:
    if (ctx->pc == 0x1D47E8u) {
        ctx->pc = 0x1D47E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47E4u;
        // 0x1d47e8: 0x26730038  addiu       $s3, $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D47ECu;
        goto label_1d47ec;
    }
    ctx->pc = 0x1D47E4u;
    SET_GPR_U32(ctx, 31, 0x1D47ECu);
    ctx->pc = 0x1D47E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47E4u;
    // 0x1d47e8: 0x26730038  addiu       $s3, $s3, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1D47E4u, 0x1D47ECu)) {
        return;
    }
    ctx->pc = 0x1D47ECu;
label_1d47ec:
    // 0x1d47ec: 0x202900a  movz        $s2, $s0, $v0
    ctx->pc = 0x1d47ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16));
label_1d47f0:
    // 0x1d47f0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d47f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1d47f4:
    // 0x1d47f4: 0x8c62883c  lw          $v0, -0x77C4($v1)
    ctx->pc = 0x1d47f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936636)));
label_1d47f8:
    // 0x1d47f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d47f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d47fc:
    // 0x1d47fc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1d47fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d4800:
    // 0x1d4800: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d4804:
    if (ctx->pc == 0x1D4804u) {
        ctx->pc = 0x1D4804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4800u;
        // 0x1d4804: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4808u;
        goto label_1d4808;
    }
    ctx->pc = 0x1D4800u;
    {
        const bool branch_taken_0x1d4800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4800u;
        // 0x1d4804: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4800) {
            ctx->pc = 0x1D4814u;
            goto label_1d4814;
        }
    }
    ctx->pc = 0x1D4808u;
label_1d4808:
    // 0x1d4808: 0x1254fff3  beq         $s2, $s4, . + 4 + (-0xD << 2)
label_1d480c:
    if (ctx->pc == 0x1D480Cu) {
        ctx->pc = 0x1D480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4808u;
        // 0x1d480c: 0x8ec58834  lw          $a1, -0x77CC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4810u;
        goto label_1d4810;
    }
    ctx->pc = 0x1D4808u;
    {
        const bool branch_taken_0x1d4808 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x1D480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4808u;
        // 0x1d480c: 0x8ec58834  lw          $a1, -0x77CC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4808) {
            ctx->pc = 0x1D47D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d47d8;
        }
    }
    ctx->pc = 0x1D4810u;
label_1d4810:
    // 0x1d4810: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d4810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d4814:
    // 0x1d4814: 0x1242000e  beq         $s2, $v0, . + 4 + (0xE << 2)
label_1d4818:
    if (ctx->pc == 0x1D4818u) {
        ctx->pc = 0x1D4818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4814u;
        // 0x1d4818: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D481Cu;
        goto label_1d481c;
    }
    ctx->pc = 0x1D4814u;
    {
        const bool branch_taken_0x1d4814 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D4818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4814u;
        // 0x1d4818: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4814) {
            ctx->pc = 0x1D4850u;
            goto label_1d4850;
        }
    }
    ctx->pc = 0x1D481Cu;
label_1d481c:
    // 0x1d481c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1d481cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d4820:
    // 0x1d4820: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d4820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d4824:
    // 0x1d4824: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1d4824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d4828:
    // 0x1d4828: 0xc0c4fc4  jal         func_313F10
label_1d482c:
    if (ctx->pc == 0x1D482Cu) {
        ctx->pc = 0x1D482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4828u;
        // 0x1d482c: 0x24a51098  addiu       $a1, $a1, 0x1098 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4830u;
        goto label_1d4830;
    }
    ctx->pc = 0x1D4828u;
    SET_GPR_U32(ctx, 31, 0x1D4830u);
    ctx->pc = 0x1D482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4828u;
    // 0x1d482c: 0x24a51098  addiu       $a1, $a1, 0x1098 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1D4828u, 0x1D4830u)) {
        return;
    }
    ctx->pc = 0x1D4830u;
label_1d4830:
    // 0x1d4830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4834:
    // 0x1d4834: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d4834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d4838:
    // 0x1d4838: 0xc07588a  jal         func_1D6228
label_1d483c:
    if (ctx->pc == 0x1D483Cu) {
        ctx->pc = 0x1D483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4838u;
        // 0x1d483c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4840u;
        goto label_1d4840;
    }
    ctx->pc = 0x1D4838u;
    SET_GPR_U32(ctx, 31, 0x1D4840u);
    ctx->pc = 0x1D483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4838u;
    // 0x1d483c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6228u, 0x1D4838u, 0x1D4840u)) {
        return;
    }
    ctx->pc = 0x1D4840u;
label_1d4840:
    // 0x1d4840: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d4840u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4844:
    // 0x1d4844: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1d4848:
    if (ctx->pc == 0x1D4848u) {
        ctx->pc = 0x1D4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4844u;
        // 0x1d4848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D484Cu;
        goto label_1d484c;
    }
    ctx->pc = 0x1D4844u;
    {
        const bool branch_taken_0x1d4844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4844u;
        // 0x1d4848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4844) {
            ctx->pc = 0x1D4850u;
            goto label_1d4850;
        }
    }
    ctx->pc = 0x1D484Cu;
label_1d484c:
    // 0x1d484c: 0xac620094  sw          $v0, 0x94($v1)
    ctx->pc = 0x1d484cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
label_1d4850:
    // 0x1d4850: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x1d4850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_1d4854:
    // 0x1d4854: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1d4854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4858:
    // 0x1d4858: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d4858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d485c:
    // 0x1d485c: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1d485cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1d4860:
    // 0x1d4860: 0x1460027a  bnez        $v1, . + 4 + (0x27A << 2)
label_1d4864:
    if (ctx->pc == 0x1D4864u) {
        ctx->pc = 0x1D4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4860u;
        // 0x1d4864: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4868u;
        goto label_1d4868;
    }
    ctx->pc = 0x1D4860u;
    {
        const bool branch_taken_0x1d4860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4860u;
        // 0x1d4864: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4860) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D4868u;
label_1d4868:
    // 0x1d4868: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d4868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d486c:
    // 0x1d486c: 0xc07555e  jal         func_1D5578
label_1d4870:
    if (ctx->pc == 0x1D4870u) {
        ctx->pc = 0x1D4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D486Cu;
        // 0x1d4870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4874u;
        goto label_1d4874;
    }
    ctx->pc = 0x1D486Cu;
    SET_GPR_U32(ctx, 31, 0x1D4874u);
    ctx->pc = 0x1D4870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D486Cu;
    // 0x1d4870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D486Cu, 0x1D4874u)) {
        return;
    }
    ctx->pc = 0x1D4874u;
label_1d4874:
    // 0x1d4874: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x1d4874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1d4878:
    // 0x1d4878: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d487c:
    if (ctx->pc == 0x1D487Cu) {
        ctx->pc = 0x1D487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4878u;
        // 0x1d487c: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4880u;
        goto label_1d4880;
    }
    ctx->pc = 0x1D4878u;
    {
        const bool branch_taken_0x1d4878 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4878u;
        // 0x1d487c: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4878) {
            ctx->pc = 0x1D4888u;
            goto label_1d4888;
        }
    }
    ctx->pc = 0x1D4880u;
label_1d4880:
    // 0x1d4880: 0xc07596a  jal         func_1D65A8
label_1d4884:
    if (ctx->pc == 0x1D4884u) {
        ctx->pc = 0x1D4884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4880u;
        // 0x1d4884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4888u;
        goto label_1d4888;
    }
    ctx->pc = 0x1D4880u;
    SET_GPR_U32(ctx, 31, 0x1D4888u);
    ctx->pc = 0x1D4884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4880u;
    // 0x1d4884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D4880u, 0x1D4888u)) {
        return;
    }
    ctx->pc = 0x1D4888u;
label_1d4888:
    // 0x1d4888: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x1d4888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1d488c:
    // 0x1d488c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_1d4890:
    if (ctx->pc == 0x1D4890u) {
        ctx->pc = 0x1D4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D488Cu;
        // 0x1d4890: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4894u;
        goto label_1d4894;
    }
    ctx->pc = 0x1D488Cu;
    {
        const bool branch_taken_0x1d488c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d488c) {
            ctx->pc = 0x1D4890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D488Cu;
            // 0x1d4890: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D48A0u;
            goto label_1d48a0;
        }
    }
    ctx->pc = 0x1D4894u;
label_1d4894:
    // 0x1d4894: 0xc07596e  jal         func_1D65B8
label_1d4898:
    if (ctx->pc == 0x1D4898u) {
        ctx->pc = 0x1D4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4894u;
        // 0x1d4898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D489Cu;
        goto label_1d489c;
    }
    ctx->pc = 0x1D4894u;
    SET_GPR_U32(ctx, 31, 0x1D489Cu);
    ctx->pc = 0x1D4898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4894u;
    // 0x1d4898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D4894u, 0x1D489Cu)) {
        return;
    }
    ctx->pc = 0x1D489Cu;
label_1d489c:
    // 0x1d489c: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d489cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d48a0:
    // 0x1d48a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d48a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d48a4:
    // 0x1d48a4: 0x1840025a  blez        $v0, . + 4 + (0x25A << 2)
label_1d48a8:
    if (ctx->pc == 0x1D48A8u) {
        ctx->pc = 0x1D48A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48A4u;
        // 0x1d48a8: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D48ACu;
        goto label_1d48ac;
    }
    ctx->pc = 0x1D48A4u;
    {
        const bool branch_taken_0x1d48a4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D48A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48A4u;
        // 0x1d48a8: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48a4) {
            ctx->pc = 0x1D5210u;
            goto label_1d5210;
        }
    }
    ctx->pc = 0x1D48ACu;
label_1d48ac:
    // 0x1d48ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d48acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d48b0:
    // 0x1d48b0: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1d48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1d48b4:
    // 0x1d48b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d48b8:
    // 0x1d48b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d48b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d48bc:
    // 0x1d48bc: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x1d48bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
label_1d48c0:
    // 0x1d48c0: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d48c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d48c4:
    // 0x1d48c4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d48c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d48c8:
    // 0x1d48c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d48cc:
    if (ctx->pc == 0x1D48CCu) {
        ctx->pc = 0x1D48CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48C8u;
        // 0x1d48cc: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D48D0u;
        goto label_1d48d0;
    }
    ctx->pc = 0x1D48C8u;
    {
        const bool branch_taken_0x1d48c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D48CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48C8u;
        // 0x1d48cc: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48c8) {
            ctx->pc = 0x1D48B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d48b0;
        }
    }
    ctx->pc = 0x1D48D0u;
label_1d48d0:
    // 0x1d48d0: 0x1000025e  b           . + 4 + (0x25E << 2)
label_1d48d4:
    if (ctx->pc == 0x1D48D4u) {
        ctx->pc = 0x1D48D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48D0u;
        // 0x1d48d4: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D48D8u;
        goto label_1d48d8;
    }
    ctx->pc = 0x1D48D0u;
    {
        const bool branch_taken_0x1d48d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48D0u;
        // 0x1d48d4: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48d0) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D48D8u;
label_1d48d8:
    // 0x1d48d8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d48dc:
    // 0x1d48dc: 0x26540004  addiu       $s4, $s2, 0x4
    ctx->pc = 0x1d48dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1d48e0:
    // 0x1d48e0: 0x8c43883c  lw          $v1, -0x77C4($v0)
    ctx->pc = 0x1d48e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936636)));
label_1d48e4:
    // 0x1d48e4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1d48e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d48e8:
    // 0x1d48e8: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
label_1d48ec:
    if (ctx->pc == 0x1D48ECu) {
        ctx->pc = 0x1D48ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48E8u;
        // 0x1d48ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D48F0u;
        goto label_1d48f0;
    }
    ctx->pc = 0x1D48E8u;
    {
        const bool branch_taken_0x1d48e8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1D48ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48E8u;
        // 0x1d48ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48e8) {
            ctx->pc = 0x1D4938u;
            goto label_1d4938;
        }
    }
    ctx->pc = 0x1D48F0u;
label_1d48f0:
    // 0x1d48f0: 0x3c160070  lui         $s6, 0x70
    ctx->pc = 0x1d48f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)112 << 16));
label_1d48f4:
    // 0x1d48f4: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1d48f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d48f8:
    // 0x1d48f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d48f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d48fc:
    // 0x1d48fc: 0x8ec58834  lw          $a1, -0x77CC($s6)
    ctx->pc = 0x1d48fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936628)));
label_1d4900:
    // 0x1d4900: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d4904:
    // 0x1d4904: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x1d4904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_1d4908:
    // 0x1d4908: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x1d4908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_1d490c:
    // 0x1d490c: 0xc0c4a1f  jal         func_31287C
label_1d4910:
    if (ctx->pc == 0x1D4910u) {
        ctx->pc = 0x1D4910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D490Cu;
        // 0x1d4910: 0x26730038  addiu       $s3, $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4914u;
        goto label_1d4914;
    }
    ctx->pc = 0x1D490Cu;
    SET_GPR_U32(ctx, 31, 0x1D4914u);
    ctx->pc = 0x1D4910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D490Cu;
    // 0x1d4910: 0x26730038  addiu       $s3, $s3, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1D490Cu, 0x1D4914u)) {
        return;
    }
    ctx->pc = 0x1D4914u;
label_1d4914:
    // 0x1d4914: 0x202900a  movz        $s2, $s0, $v0
    ctx->pc = 0x1d4914u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16));
label_1d4918:
    // 0x1d4918: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d4918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1d491c:
    // 0x1d491c: 0x8c62883c  lw          $v0, -0x77C4($v1)
    ctx->pc = 0x1d491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936636)));
label_1d4920:
    // 0x1d4920: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d4920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d4924:
    // 0x1d4924: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1d4924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d4928:
    // 0x1d4928: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d492c:
    if (ctx->pc == 0x1D492Cu) {
        ctx->pc = 0x1D492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4928u;
        // 0x1d492c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4930u;
        goto label_1d4930;
    }
    ctx->pc = 0x1D4928u;
    {
        const bool branch_taken_0x1d4928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4928u;
        // 0x1d492c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4928) {
            ctx->pc = 0x1D493Cu;
            goto label_1d493c;
        }
    }
    ctx->pc = 0x1D4930u;
label_1d4930:
    // 0x1d4930: 0x1255fff3  beq         $s2, $s5, . + 4 + (-0xD << 2)
label_1d4934:
    if (ctx->pc == 0x1D4934u) {
        ctx->pc = 0x1D4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4930u;
        // 0x1d4934: 0x8ec58834  lw          $a1, -0x77CC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4938u;
        goto label_1d4938;
    }
    ctx->pc = 0x1D4930u;
    {
        const bool branch_taken_0x1d4930 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x1D4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4930u;
        // 0x1d4934: 0x8ec58834  lw          $a1, -0x77CC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4930) {
            ctx->pc = 0x1D4900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4900;
        }
    }
    ctx->pc = 0x1D4938u;
label_1d4938:
    // 0x1d4938: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d4938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d493c:
    // 0x1d493c: 0x12420243  beq         $s2, $v0, . + 4 + (0x243 << 2)
label_1d4940:
    if (ctx->pc == 0x1D4940u) {
        ctx->pc = 0x1D4940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D493Cu;
        // 0x1d4940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4944u;
        goto label_1d4944;
    }
    ctx->pc = 0x1D493Cu;
    {
        const bool branch_taken_0x1d493c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D4940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D493Cu;
        // 0x1d4940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d493c) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D4944u;
label_1d4944:
    // 0x1d4944: 0xc07555e  jal         func_1D5578
label_1d4948:
    if (ctx->pc == 0x1D4948u) {
        ctx->pc = 0x1D4948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4944u;
        // 0x1d4948: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D494Cu;
        goto label_1d494c;
    }
    ctx->pc = 0x1D4944u;
    SET_GPR_U32(ctx, 31, 0x1D494Cu);
    ctx->pc = 0x1D4948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4944u;
    // 0x1d4948: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D4944u, 0x1D494Cu)) {
        return;
    }
    ctx->pc = 0x1D494Cu;
label_1d494c:
    // 0x1d494c: 0x10000240  b           . + 4 + (0x240 << 2)
label_1d4950:
    if (ctx->pc == 0x1D4950u) {
        ctx->pc = 0x1D4950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D494Cu;
        // 0x1d4950: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4954u;
        goto label_1d4954;
    }
    ctx->pc = 0x1D494Cu;
    {
        const bool branch_taken_0x1d494c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D494Cu;
        // 0x1d4950: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d494c) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D4954u;
label_1d4954:
    // 0x1d4954: 0x27a40408  addiu       $a0, $sp, 0x408
    ctx->pc = 0x1d4954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1032));
label_1d4958:
    // 0x1d4958: 0x27a5040c  addiu       $a1, $sp, 0x40C
    ctx->pc = 0x1d4958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1036));
label_1d495c:
    // 0x1d495c: 0xafa00408  sw          $zero, 0x408($sp)
    ctx->pc = 0x1d495cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 0));
label_1d4960:
    // 0x1d4960: 0xc074ba4  jal         func_1D2E90
label_1d4964:
    if (ctx->pc == 0x1D4964u) {
        ctx->pc = 0x1D4964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4960u;
        // 0x1d4964: 0xafa0040c  sw          $zero, 0x40C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1036), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4968u;
        goto label_1d4968;
    }
    ctx->pc = 0x1D4960u;
    SET_GPR_U32(ctx, 31, 0x1D4968u);
    ctx->pc = 0x1D4964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4960u;
    // 0x1d4964: 0xafa0040c  sw          $zero, 0x40C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1036), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2E90u, 0x1D4960u, 0x1D4968u)) {
        return;
    }
    ctx->pc = 0x1D4968u;
label_1d4968:
    // 0x1d4968: 0x8fa40408  lw          $a0, 0x408($sp)
    ctx->pc = 0x1d4968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1032)));
label_1d496c:
    // 0x1d496c: 0xc074ce0  jal         func_1D3380
label_1d4970:
    if (ctx->pc == 0x1D4970u) {
        ctx->pc = 0x1D4970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D496Cu;
        // 0x1d4970: 0x8fa5040c  lw          $a1, 0x40C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4974u;
        goto label_1d4974;
    }
    ctx->pc = 0x1D496Cu;
    SET_GPR_U32(ctx, 31, 0x1D4974u);
    ctx->pc = 0x1D4970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D496Cu;
    // 0x1d4970: 0x8fa5040c  lw          $a1, 0x40C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1036)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D3380u, 0x1D496Cu, 0x1D4974u)) {
        return;
    }
    ctx->pc = 0x1D4974u;
label_1d4974:
    // 0x1d4974: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1d4974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d4978:
    // 0x1d4978: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
label_1d497c:
    if (ctx->pc == 0x1D497Cu) {
        ctx->pc = 0x1D497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4978u;
        // 0x1d497c: 0x8e22008c  lw          $v0, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4980u;
        goto label_1d4980;
    }
    ctx->pc = 0x1D4978u;
    {
        const bool branch_taken_0x1d4978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d4978) {
            ctx->pc = 0x1D497Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4978u;
            // 0x1d497c: 0x8e22008c  lw          $v0, 0x8C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4994u;
            goto label_1d4994;
        }
    }
    ctx->pc = 0x1D4980u;
label_1d4980:
    // 0x1d4980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4984:
    // 0x1d4984: 0xc07555e  jal         func_1D5578
label_1d4988:
    if (ctx->pc == 0x1D4988u) {
        ctx->pc = 0x1D4988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4984u;
        // 0x1d4988: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D498Cu;
        goto label_1d498c;
    }
    ctx->pc = 0x1D4984u;
    SET_GPR_U32(ctx, 31, 0x1D498Cu);
    ctx->pc = 0x1D4988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4984u;
    // 0x1d4988: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D4984u, 0x1D498Cu)) {
        return;
    }
    ctx->pc = 0x1D498Cu;
label_1d498c:
    // 0x1d498c: 0x10000230  b           . + 4 + (0x230 << 2)
label_1d4990:
    if (ctx->pc == 0x1D4990u) {
        ctx->pc = 0x1D4990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D498Cu;
        // 0x1d4990: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4994u;
        goto label_1d4994;
    }
    ctx->pc = 0x1D498Cu;
    {
        const bool branch_taken_0x1d498c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D498Cu;
        // 0x1d4990: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d498c) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D4994u;
label_1d4994:
    // 0x1d4994: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1d4994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4998:
    // 0x1d4998: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d4998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d499c:
    // 0x1d499c: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1d499cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1d49a0:
    // 0x1d49a0: 0x1460022a  bnez        $v1, . + 4 + (0x22A << 2)
label_1d49a4:
    if (ctx->pc == 0x1D49A4u) {
        ctx->pc = 0x1D49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49A0u;
        // 0x1d49a4: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D49A8u;
        goto label_1d49a8;
    }
    ctx->pc = 0x1D49A0u;
    {
        const bool branch_taken_0x1d49a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49A0u;
        // 0x1d49a4: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49a0) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D49A8u;
label_1d49a8:
    // 0x1d49a8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d49a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d49ac:
    // 0x1d49ac: 0xc07555e  jal         func_1D5578
label_1d49b0:
    if (ctx->pc == 0x1D49B0u) {
        ctx->pc = 0x1D49B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49ACu;
        // 0x1d49b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D49B4u;
        goto label_1d49b4;
    }
    ctx->pc = 0x1D49ACu;
    SET_GPR_U32(ctx, 31, 0x1D49B4u);
    ctx->pc = 0x1D49B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D49ACu;
    // 0x1d49b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D49ACu, 0x1D49B4u)) {
        return;
    }
    ctx->pc = 0x1D49B4u;
label_1d49b4:
    // 0x1d49b4: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x1d49b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1d49b8:
    // 0x1d49b8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d49bc:
    if (ctx->pc == 0x1D49BCu) {
        ctx->pc = 0x1D49BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49B8u;
        // 0x1d49bc: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D49C0u;
        goto label_1d49c0;
    }
    ctx->pc = 0x1D49B8u;
    {
        const bool branch_taken_0x1d49b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D49BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49B8u;
        // 0x1d49bc: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49b8) {
            ctx->pc = 0x1D49C8u;
            goto label_1d49c8;
        }
    }
    ctx->pc = 0x1D49C0u;
label_1d49c0:
    // 0x1d49c0: 0xc07596a  jal         func_1D65A8
label_1d49c4:
    if (ctx->pc == 0x1D49C4u) {
        ctx->pc = 0x1D49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49C0u;
        // 0x1d49c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D49C8u;
        goto label_1d49c8;
    }
    ctx->pc = 0x1D49C0u;
    SET_GPR_U32(ctx, 31, 0x1D49C8u);
    ctx->pc = 0x1D49C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D49C0u;
    // 0x1d49c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D49C0u, 0x1D49C8u)) {
        return;
    }
    ctx->pc = 0x1D49C8u;
label_1d49c8:
    // 0x1d49c8: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x1d49c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1d49cc:
    // 0x1d49cc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_1d49d0:
    if (ctx->pc == 0x1D49D0u) {
        ctx->pc = 0x1D49D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49CCu;
        // 0x1d49d0: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D49D4u;
        goto label_1d49d4;
    }
    ctx->pc = 0x1D49CCu;
    {
        const bool branch_taken_0x1d49cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d49cc) {
            ctx->pc = 0x1D49D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D49CCu;
            // 0x1d49d0: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D49E0u;
            goto label_1d49e0;
        }
    }
    ctx->pc = 0x1D49D4u;
label_1d49d4:
    // 0x1d49d4: 0xc07596e  jal         func_1D65B8
label_1d49d8:
    if (ctx->pc == 0x1D49D8u) {
        ctx->pc = 0x1D49D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49D4u;
        // 0x1d49d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D49DCu;
        goto label_1d49dc;
    }
    ctx->pc = 0x1D49D4u;
    SET_GPR_U32(ctx, 31, 0x1D49DCu);
    ctx->pc = 0x1D49D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D49D4u;
    // 0x1d49d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D49D4u, 0x1D49DCu)) {
        return;
    }
    ctx->pc = 0x1D49DCu;
label_1d49dc:
    // 0x1d49dc: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d49dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d49e0:
    // 0x1d49e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d49e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d49e4:
    // 0x1d49e4: 0x1840020a  blez        $v0, . + 4 + (0x20A << 2)
label_1d49e8:
    if (ctx->pc == 0x1D49E8u) {
        ctx->pc = 0x1D49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49E4u;
        // 0x1d49e8: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D49ECu;
        goto label_1d49ec;
    }
    ctx->pc = 0x1D49E4u;
    {
        const bool branch_taken_0x1d49e4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49E4u;
        // 0x1d49e8: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49e4) {
            ctx->pc = 0x1D5210u;
            goto label_1d5210;
        }
    }
    ctx->pc = 0x1D49ECu;
label_1d49ec:
    // 0x1d49ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d49ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d49f0:
    // 0x1d49f0: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1d49f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1d49f4:
    // 0x1d49f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d49f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d49f8:
    // 0x1d49f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d49f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d49fc:
    // 0x1d49fc: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x1d49fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
label_1d4a00:
    // 0x1d4a00: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d4a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4a04:
    // 0x1d4a04: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d4a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d4a08:
    // 0x1d4a08: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d4a0c:
    if (ctx->pc == 0x1D4A0Cu) {
        ctx->pc = 0x1D4A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A08u;
        // 0x1d4a0c: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4A10u;
        goto label_1d4a10;
    }
    ctx->pc = 0x1D4A08u;
    {
        const bool branch_taken_0x1d4a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A08u;
        // 0x1d4a0c: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a08) {
            ctx->pc = 0x1D49F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d49f0;
        }
    }
    ctx->pc = 0x1D4A10u;
label_1d4a10:
    // 0x1d4a10: 0x1000020e  b           . + 4 + (0x20E << 2)
label_1d4a14:
    if (ctx->pc == 0x1D4A14u) {
        ctx->pc = 0x1D4A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A10u;
        // 0x1d4a14: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4A18u;
        goto label_1d4a18;
    }
    ctx->pc = 0x1D4A10u;
    {
        const bool branch_taken_0x1d4a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A10u;
        // 0x1d4a14: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a10) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D4A18u;
label_1d4a18:
    // 0x1d4a18: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d4a1c:
    // 0x1d4a1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d4a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4a20:
    // 0x1d4a20: 0x8c44883c  lw          $a0, -0x77C4($v0)
    ctx->pc = 0x1d4a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936636)));
label_1d4a24:
    // 0x1d4a24: 0x18800012  blez        $a0, . + 4 + (0x12 << 2)
label_1d4a28:
    if (ctx->pc == 0x1D4A28u) {
        ctx->pc = 0x1D4A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A24u;
        // 0x1d4a28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4A2Cu;
        goto label_1d4a2c;
    }
    ctx->pc = 0x1D4A24u;
    {
        const bool branch_taken_0x1d4a24 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x1D4A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A24u;
        // 0x1d4a28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a24) {
            ctx->pc = 0x1D4A70u;
            goto label_1d4a70;
        }
    }
    ctx->pc = 0x1D4A2Cu;
label_1d4a2c:
    // 0x1d4a2c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d4a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d4a30:
    // 0x1d4a30: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x1d4a30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
label_1d4a34:
    // 0x1d4a34: 0x8c438838  lw          $v1, -0x77C8($v0)
    ctx->pc = 0x1d4a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936632)));
label_1d4a38:
    // 0x1d4a38: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1d4a38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d4a3c:
    // 0x1d4a3c: 0x34c6f00d  ori         $a2, $a2, 0xF00D
    ctx->pc = 0x1d4a3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)61453);
label_1d4a40:
    // 0x1d4a40: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1d4a40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4a44:
    // 0x1d4a44: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1d4a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1d4a48:
    // 0x1d4a48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d4a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d4a4c:
    // 0x1d4a4c: 0x0  nop
    ctx->pc = 0x1d4a4cu;
    // NOP
label_1d4a50:
    // 0x1d4a50: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d4a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1d4a54:
    // 0x1d4a54: 0x24840034  addiu       $a0, $a0, 0x34
    ctx->pc = 0x1d4a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
label_1d4a58:
    // 0x1d4a58: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1d4a58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1d4a5c:
    // 0x1d4a5c: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x1d4a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
label_1d4a60:
    // 0x1d4a60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1d4a64:
    if (ctx->pc == 0x1D4A64u) {
        ctx->pc = 0x1D4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A60u;
        // 0x1d4a64: 0x142280b  movn        $a1, $t2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4A68u;
        goto label_1d4a68;
    }
    ctx->pc = 0x1D4A60u;
    {
        const bool branch_taken_0x1d4a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A60u;
        // 0x1d4a64: 0x142280b  movn        $a1, $t2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a60) {
            ctx->pc = 0x1D4A70u;
            goto label_1d4a70;
        }
    }
    ctx->pc = 0x1D4A68u;
label_1d4a68:
    // 0x1d4a68: 0x50a0fff9  beql        $a1, $zero, . + 4 + (-0x7 << 2)
label_1d4a6c:
    if (ctx->pc == 0x1D4A6Cu) {
        ctx->pc = 0x1D4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A68u;
        // 0x1d4a6c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4A70u;
        goto label_1d4a70;
    }
    ctx->pc = 0x1D4A68u;
    {
        const bool branch_taken_0x1d4a68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4a68) {
            ctx->pc = 0x1D4A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4A68u;
            // 0x1d4a6c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4a50;
        }
    }
    ctx->pc = 0x1D4A70u;
label_1d4a70:
    // 0x1d4a70: 0x14a0002f  bnez        $a1, . + 4 + (0x2F << 2)
label_1d4a74:
    if (ctx->pc == 0x1D4A74u) {
        ctx->pc = 0x1D4A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A70u;
        // 0x1d4a74: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4A78u;
        goto label_1d4a78;
    }
    ctx->pc = 0x1D4A70u;
    {
        const bool branch_taken_0x1d4a70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A70u;
        // 0x1d4a74: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a70) {
            ctx->pc = 0x1D4B30u;
            goto label_1d4b30;
        }
    }
    ctx->pc = 0x1D4A78u;
label_1d4a78:
    // 0x1d4a78: 0xc07597a  jal         func_1D65E8
label_1d4a7c:
    if (ctx->pc == 0x1D4A7Cu) {
        ctx->pc = 0x1D4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A78u;
        // 0x1d4a7c: 0x27a40410  addiu       $a0, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4A80u;
        goto label_1d4a80;
    }
    ctx->pc = 0x1D4A78u;
    SET_GPR_U32(ctx, 31, 0x1D4A80u);
    ctx->pc = 0x1D4A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A78u;
    // 0x1d4a7c: 0x27a40410  addiu       $a0, $sp, 0x410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65E8u, 0x1D4A78u, 0x1D4A80u)) {
        return;
    }
    ctx->pc = 0x1D4A80u;
label_1d4a80:
    // 0x1d4a80: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d4a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1d4a84:
    // 0x1d4a84: 0xdfa40410  ld          $a0, 0x410($sp)
    ctx->pc = 0x1d4a84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_1d4a88:
    // 0x1d4a88: 0x8c628810  lw          $v0, -0x77F0($v1)
    ctx->pc = 0x1d4a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936592)));
label_1d4a8c:
    // 0x1d4a8c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1d4a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1d4a90:
    // 0x1d4a90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d4a94:
    if (ctx->pc == 0x1D4A94u) {
        ctx->pc = 0x1D4A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A90u;
        // 0x1d4a94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4A98u;
        goto label_1d4a98;
    }
    ctx->pc = 0x1D4A90u;
    {
        const bool branch_taken_0x1d4a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A90u;
        // 0x1d4a94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a90) {
            ctx->pc = 0x1D4AA8u;
            goto label_1d4aa8;
        }
    }
    ctx->pc = 0x1D4A98u;
label_1d4a98:
    // 0x1d4a98: 0xc07555e  jal         func_1D5578
label_1d4a9c:
    if (ctx->pc == 0x1D4A9Cu) {
        ctx->pc = 0x1D4A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A98u;
        // 0x1d4a9c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4AA0u;
        goto label_1d4aa0;
    }
    ctx->pc = 0x1D4A98u;
    SET_GPR_U32(ctx, 31, 0x1D4AA0u);
    ctx->pc = 0x1D4A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A98u;
    // 0x1d4a9c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D4A98u, 0x1D4AA0u)) {
        return;
    }
    ctx->pc = 0x1D4AA0u;
label_1d4aa0:
    // 0x1d4aa0: 0x100001eb  b           . + 4 + (0x1EB << 2)
label_1d4aa4:
    if (ctx->pc == 0x1D4AA4u) {
        ctx->pc = 0x1D4AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AA0u;
        // 0x1d4aa4: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4AA8u;
        goto label_1d4aa8;
    }
    ctx->pc = 0x1D4AA0u;
    {
        const bool branch_taken_0x1d4aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AA0u;
        // 0x1d4aa4: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4aa0) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D4AA8u;
label_1d4aa8:
    // 0x1d4aa8: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x1d4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_1d4aac:
    // 0x1d4aac: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1d4aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4ab0:
    // 0x1d4ab0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d4ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d4ab4:
    // 0x1d4ab4: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1d4ab4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1d4ab8:
    // 0x1d4ab8: 0x146001e4  bnez        $v1, . + 4 + (0x1E4 << 2)
label_1d4abc:
    if (ctx->pc == 0x1D4ABCu) {
        ctx->pc = 0x1D4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AB8u;
        // 0x1d4abc: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4AC0u;
        goto label_1d4ac0;
    }
    ctx->pc = 0x1D4AB8u;
    {
        const bool branch_taken_0x1d4ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AB8u;
        // 0x1d4abc: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ab8) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D4AC0u;
label_1d4ac0:
    // 0x1d4ac0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d4ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d4ac4:
    // 0x1d4ac4: 0xc07555e  jal         func_1D5578
label_1d4ac8:
    if (ctx->pc == 0x1D4AC8u) {
        ctx->pc = 0x1D4AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AC4u;
        // 0x1d4ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4ACCu;
        goto label_1d4acc;
    }
    ctx->pc = 0x1D4AC4u;
    SET_GPR_U32(ctx, 31, 0x1D4ACCu);
    ctx->pc = 0x1D4AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4AC4u;
    // 0x1d4ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D4AC4u, 0x1D4ACCu)) {
        return;
    }
    ctx->pc = 0x1D4ACCu;
label_1d4acc:
    // 0x1d4acc: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x1d4accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1d4ad0:
    // 0x1d4ad0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d4ad4:
    if (ctx->pc == 0x1D4AD4u) {
        ctx->pc = 0x1D4AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AD0u;
        // 0x1d4ad4: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4AD8u;
        goto label_1d4ad8;
    }
    ctx->pc = 0x1D4AD0u;
    {
        const bool branch_taken_0x1d4ad0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AD0u;
        // 0x1d4ad4: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ad0) {
            ctx->pc = 0x1D4AE0u;
            goto label_1d4ae0;
        }
    }
    ctx->pc = 0x1D4AD8u;
label_1d4ad8:
    // 0x1d4ad8: 0xc07596a  jal         func_1D65A8
label_1d4adc:
    if (ctx->pc == 0x1D4ADCu) {
        ctx->pc = 0x1D4ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AD8u;
        // 0x1d4adc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4AE0u;
        goto label_1d4ae0;
    }
    ctx->pc = 0x1D4AD8u;
    SET_GPR_U32(ctx, 31, 0x1D4AE0u);
    ctx->pc = 0x1D4ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4AD8u;
    // 0x1d4adc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D4AD8u, 0x1D4AE0u)) {
        return;
    }
    ctx->pc = 0x1D4AE0u;
label_1d4ae0:
    // 0x1d4ae0: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x1d4ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1d4ae4:
    // 0x1d4ae4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_1d4ae8:
    if (ctx->pc == 0x1D4AE8u) {
        ctx->pc = 0x1D4AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AE4u;
        // 0x1d4ae8: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4AECu;
        goto label_1d4aec;
    }
    ctx->pc = 0x1D4AE4u;
    {
        const bool branch_taken_0x1d4ae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4ae4) {
            ctx->pc = 0x1D4AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4AE4u;
            // 0x1d4ae8: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4AF8u;
            goto label_1d4af8;
        }
    }
    ctx->pc = 0x1D4AECu;
label_1d4aec:
    // 0x1d4aec: 0xc07596e  jal         func_1D65B8
label_1d4af0:
    if (ctx->pc == 0x1D4AF0u) {
        ctx->pc = 0x1D4AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AECu;
        // 0x1d4af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4AF4u;
        goto label_1d4af4;
    }
    ctx->pc = 0x1D4AECu;
    SET_GPR_U32(ctx, 31, 0x1D4AF4u);
    ctx->pc = 0x1D4AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4AECu;
    // 0x1d4af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D4AECu, 0x1D4AF4u)) {
        return;
    }
    ctx->pc = 0x1D4AF4u;
label_1d4af4:
    // 0x1d4af4: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d4af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4af8:
    // 0x1d4af8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d4af8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4afc:
    // 0x1d4afc: 0x184001c4  blez        $v0, . + 4 + (0x1C4 << 2)
label_1d4b00:
    if (ctx->pc == 0x1D4B00u) {
        ctx->pc = 0x1D4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AFCu;
        // 0x1d4b00: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B04u;
        goto label_1d4b04;
    }
    ctx->pc = 0x1D4AFCu;
    {
        const bool branch_taken_0x1d4afc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AFCu;
        // 0x1d4b00: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4afc) {
            ctx->pc = 0x1D5210u;
            goto label_1d5210;
        }
    }
    ctx->pc = 0x1D4B04u;
label_1d4b04:
    // 0x1d4b04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d4b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b08:
    // 0x1d4b08: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1d4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1d4b0c:
    // 0x1d4b0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d4b10:
    // 0x1d4b10: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d4b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d4b14:
    // 0x1d4b14: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x1d4b14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
label_1d4b18:
    // 0x1d4b18: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d4b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4b1c:
    // 0x1d4b1c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d4b1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d4b20:
    // 0x1d4b20: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d4b24:
    if (ctx->pc == 0x1D4B24u) {
        ctx->pc = 0x1D4B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B20u;
        // 0x1d4b24: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B28u;
        goto label_1d4b28;
    }
    ctx->pc = 0x1D4B20u;
    {
        const bool branch_taken_0x1d4b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B20u;
        // 0x1d4b24: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b20) {
            ctx->pc = 0x1D4B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4b08;
        }
    }
    ctx->pc = 0x1D4B28u;
label_1d4b28:
    // 0x1d4b28: 0x100001c8  b           . + 4 + (0x1C8 << 2)
label_1d4b2c:
    if (ctx->pc == 0x1D4B2Cu) {
        ctx->pc = 0x1D4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B28u;
        // 0x1d4b2c: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B30u;
        goto label_1d4b30;
    }
    ctx->pc = 0x1D4B28u;
    {
        const bool branch_taken_0x1d4b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B28u;
        // 0x1d4b2c: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b28) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D4B30u;
label_1d4b30:
    // 0x1d4b30: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1d4b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4b34:
    // 0x1d4b34: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x1d4b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_1d4b38:
    // 0x1d4b38: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1d4b38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1d4b3c:
    // 0x1d4b3c: 0x144001c4  bnez        $v0, . + 4 + (0x1C4 << 2)
label_1d4b40:
    if (ctx->pc == 0x1D4B40u) {
        ctx->pc = 0x1D4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B3Cu;
        // 0x1d4b40: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B44u;
        goto label_1d4b44;
    }
    ctx->pc = 0x1D4B3Cu;
    {
        const bool branch_taken_0x1d4b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B3Cu;
        // 0x1d4b40: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b3c) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D4B44u;
label_1d4b44:
    // 0x1d4b44: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d4b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d4b48:
    // 0x1d4b48: 0xc07555e  jal         func_1D5578
label_1d4b4c:
    if (ctx->pc == 0x1D4B4Cu) {
        ctx->pc = 0x1D4B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B48u;
        // 0x1d4b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B50u;
        goto label_1d4b50;
    }
    ctx->pc = 0x1D4B48u;
    SET_GPR_U32(ctx, 31, 0x1D4B50u);
    ctx->pc = 0x1D4B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B48u;
    // 0x1d4b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D4B48u, 0x1D4B50u)) {
        return;
    }
    ctx->pc = 0x1D4B50u;
label_1d4b50:
    // 0x1d4b50: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x1d4b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1d4b54:
    // 0x1d4b54: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d4b58:
    if (ctx->pc == 0x1D4B58u) {
        ctx->pc = 0x1D4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B54u;
        // 0x1d4b58: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B5Cu;
        goto label_1d4b5c;
    }
    ctx->pc = 0x1D4B54u;
    {
        const bool branch_taken_0x1d4b54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B54u;
        // 0x1d4b58: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b54) {
            ctx->pc = 0x1D4B64u;
            goto label_1d4b64;
        }
    }
    ctx->pc = 0x1D4B5Cu;
label_1d4b5c:
    // 0x1d4b5c: 0xc07596a  jal         func_1D65A8
label_1d4b60:
    if (ctx->pc == 0x1D4B60u) {
        ctx->pc = 0x1D4B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B5Cu;
        // 0x1d4b60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B64u;
        goto label_1d4b64;
    }
    ctx->pc = 0x1D4B5Cu;
    SET_GPR_U32(ctx, 31, 0x1D4B64u);
    ctx->pc = 0x1D4B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B5Cu;
    // 0x1d4b60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D4B5Cu, 0x1D4B64u)) {
        return;
    }
    ctx->pc = 0x1D4B64u;
label_1d4b64:
    // 0x1d4b64: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x1d4b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1d4b68:
    // 0x1d4b68: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_1d4b6c:
    if (ctx->pc == 0x1D4B6Cu) {
        ctx->pc = 0x1D4B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B68u;
        // 0x1d4b6c: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B70u;
        goto label_1d4b70;
    }
    ctx->pc = 0x1D4B68u;
    {
        const bool branch_taken_0x1d4b68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4b68) {
            ctx->pc = 0x1D4B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4B68u;
            // 0x1d4b6c: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4B7Cu;
            goto label_1d4b7c;
        }
    }
    ctx->pc = 0x1D4B70u;
label_1d4b70:
    // 0x1d4b70: 0xc07596e  jal         func_1D65B8
label_1d4b74:
    if (ctx->pc == 0x1D4B74u) {
        ctx->pc = 0x1D4B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B70u;
        // 0x1d4b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B78u;
        goto label_1d4b78;
    }
    ctx->pc = 0x1D4B70u;
    SET_GPR_U32(ctx, 31, 0x1D4B78u);
    ctx->pc = 0x1D4B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B70u;
    // 0x1d4b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D4B70u, 0x1D4B78u)) {
        return;
    }
    ctx->pc = 0x1D4B78u;
label_1d4b78:
    // 0x1d4b78: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d4b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4b7c:
    // 0x1d4b7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d4b7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b80:
    // 0x1d4b80: 0x184001a3  blez        $v0, . + 4 + (0x1A3 << 2)
label_1d4b84:
    if (ctx->pc == 0x1D4B84u) {
        ctx->pc = 0x1D4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B80u;
        // 0x1d4b84: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B88u;
        goto label_1d4b88;
    }
    ctx->pc = 0x1D4B80u;
    {
        const bool branch_taken_0x1d4b80 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B80u;
        // 0x1d4b84: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b80) {
            ctx->pc = 0x1D5210u;
            goto label_1d5210;
        }
    }
    ctx->pc = 0x1D4B88u;
label_1d4b88:
    // 0x1d4b88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d4b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b8c:
    // 0x1d4b8c: 0x0  nop
    ctx->pc = 0x1d4b8cu;
    // NOP
label_1d4b90:
    // 0x1d4b90: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1d4b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1d4b94:
    // 0x1d4b94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d4b98:
    // 0x1d4b98: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d4b9c:
    // 0x1d4b9c: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x1d4b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
label_1d4ba0:
    // 0x1d4ba0: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d4ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4ba4:
    // 0x1d4ba4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d4ba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d4ba8:
    // 0x1d4ba8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d4bac:
    if (ctx->pc == 0x1D4BACu) {
        ctx->pc = 0x1D4BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BA8u;
        // 0x1d4bac: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4BB0u;
        goto label_1d4bb0;
    }
    ctx->pc = 0x1D4BA8u;
    {
        const bool branch_taken_0x1d4ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BA8u;
        // 0x1d4bac: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ba8) {
            ctx->pc = 0x1D4B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4b90;
        }
    }
    ctx->pc = 0x1D4BB0u;
label_1d4bb0:
    // 0x1d4bb0: 0x100001a6  b           . + 4 + (0x1A6 << 2)
label_1d4bb4:
    if (ctx->pc == 0x1D4BB4u) {
        ctx->pc = 0x1D4BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BB0u;
        // 0x1d4bb4: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4BB8u;
        goto label_1d4bb8;
    }
    ctx->pc = 0x1D4BB0u;
    {
        const bool branch_taken_0x1d4bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BB0u;
        // 0x1d4bb4: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bb0) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D4BB8u;
label_1d4bb8:
    // 0x1d4bb8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d4bbc:
    // 0x1d4bbc: 0x26550004  addiu       $s5, $s2, 0x4
    ctx->pc = 0x1d4bbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1d4bc0:
    // 0x1d4bc0: 0x8c43883c  lw          $v1, -0x77C4($v0)
    ctx->pc = 0x1d4bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936636)));
label_1d4bc4:
    // 0x1d4bc4: 0x18600029  blez        $v1, . + 4 + (0x29 << 2)
label_1d4bc8:
    if (ctx->pc == 0x1D4BC8u) {
        ctx->pc = 0x1D4BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BC4u;
        // 0x1d4bc8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4BCCu;
        goto label_1d4bcc;
    }
    ctx->pc = 0x1D4BC4u;
    {
        const bool branch_taken_0x1d4bc4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1D4BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BC4u;
        // 0x1d4bc8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bc4) {
            ctx->pc = 0x1D4C6Cu;
            goto label_1d4c6c;
        }
    }
    ctx->pc = 0x1D4BCCu;
label_1d4bcc:
    // 0x1d4bcc: 0x3c170070  lui         $s7, 0x70
    ctx->pc = 0x1d4bccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)112 << 16));
label_1d4bd0:
    // 0x1d4bd0: 0x3c16006a  lui         $s6, 0x6A
    ctx->pc = 0x1d4bd0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)106 << 16));
label_1d4bd4:
    // 0x1d4bd4: 0x24140098  addiu       $s4, $zero, 0x98
    ctx->pc = 0x1d4bd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_1d4bd8:
    // 0x1d4bd8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d4bd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4bdc:
    // 0x1d4bdc: 0x0  nop
    ctx->pc = 0x1d4bdcu;
    // NOP
label_1d4be0:
    // 0x1d4be0: 0x8ee38834  lw          $v1, -0x77CC($s7)
    ctx->pc = 0x1d4be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936628)));
label_1d4be4:
    // 0x1d4be4: 0x2633821  addu        $a3, $s3, $v1
    ctx->pc = 0x1d4be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1d4be8:
    // 0x1d4be8: 0x94e20014  lhu         $v0, 0x14($a3)
    ctx->pc = 0x1d4be8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 20)));
label_1d4bec:
    // 0x1d4bec: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1d4becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1d4bf0:
    // 0x1d4bf0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1d4bf4:
    if (ctx->pc == 0x1D4BF4u) {
        ctx->pc = 0x1D4BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BF0u;
        // 0x1d4bf4: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4BF8u;
        goto label_1d4bf8;
    }
    ctx->pc = 0x1D4BF0u;
    {
        const bool branch_taken_0x1d4bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BF0u;
        // 0x1d4bf4: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bf0) {
            ctx->pc = 0x1D4C58u;
            goto label_1d4c58;
        }
    }
    ctx->pc = 0x1D4BF8u;
label_1d4bf8:
    // 0x1d4bf8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d4bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d4bfc:
    // 0x1d4bfc: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x1d4bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_1d4c00:
    // 0x1d4c00: 0x26c51098  addiu       $a1, $s6, 0x1098
    ctx->pc = 0x1d4c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4248));
label_1d4c04:
    // 0x1d4c04: 0xc0c4fc4  jal         func_313F10
label_1d4c08:
    if (ctx->pc == 0x1D4C08u) {
        ctx->pc = 0x1D4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C04u;
        // 0x1d4c08: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C0Cu;
        goto label_1d4c0c;
    }
    ctx->pc = 0x1D4C04u;
    SET_GPR_U32(ctx, 31, 0x1D4C0Cu);
    ctx->pc = 0x1D4C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4C04u;
    // 0x1d4c08: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1D4C04u, 0x1D4C0Cu)) {
        return;
    }
    ctx->pc = 0x1D4C0Cu;
label_1d4c0c:
    // 0x1d4c0c: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1d4c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4c10:
    // 0x1d4c10: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x1d4c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_1d4c14:
    // 0x1d4c14: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1d4c18:
    if (ctx->pc == 0x1D4C18u) {
        ctx->pc = 0x1D4C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C14u;
        // 0x1d4c18: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C1Cu;
        goto label_1d4c1c;
    }
    ctx->pc = 0x1D4C14u;
    {
        const bool branch_taken_0x1d4c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C14u;
        // 0x1d4c18: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c14) {
            ctx->pc = 0x1D4C54u;
            goto label_1d4c54;
        }
    }
    ctx->pc = 0x1D4C1Cu;
label_1d4c1c:
    // 0x1d4c1c: 0x741018  mult        $v0, $v1, $s4
    ctx->pc = 0x1d4c1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1d4c20:
    // 0x1d4c20: 0x8e300084  lw          $s0, 0x84($s1)
    ctx->pc = 0x1d4c20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1d4c24:
    // 0x1d4c24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d4c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c28:
    // 0x1d4c28: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d4c28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1d4c2c:
    // 0x1d4c2c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1d4c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_1d4c30:
    // 0x1d4c30: 0xc0c4a72  jal         func_3129C8
label_1d4c34:
    if (ctx->pc == 0x1D4C34u) {
        ctx->pc = 0x1D4C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C30u;
        // 0x1d4c34: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C38u;
        goto label_1d4c38;
    }
    ctx->pc = 0x1D4C30u;
    SET_GPR_U32(ctx, 31, 0x1D4C38u);
    ctx->pc = 0x1D4C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4C30u;
    // 0x1d4c34: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x1D4C30u, 0x1D4C38u)) {
        return;
    }
    ctx->pc = 0x1D4C38u;
label_1d4c38:
    // 0x1d4c38: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x1d4c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_1d4c3c:
    // 0x1d4c3c: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1d4c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_1d4c40:
    // 0x1d4c40: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1d4c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_1d4c44:
    // 0x1d4c44: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1d4c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_1d4c48:
    // 0x1d4c48: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d4c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4c4c:
    // 0x1d4c4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d4c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d4c50:
    // 0x1d4c50: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x1d4c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_1d4c54:
    // 0x1d4c54: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d4c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1d4c58:
    // 0x1d4c58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d4c58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d4c5c:
    // 0x1d4c5c: 0x8c62883c  lw          $v0, -0x77C4($v1)
    ctx->pc = 0x1d4c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936636)));
label_1d4c60:
    // 0x1d4c60: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d4c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d4c64:
    // 0x1d4c64: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_1d4c68:
    if (ctx->pc == 0x1D4C68u) {
        ctx->pc = 0x1D4C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C64u;
        // 0x1d4c68: 0x26730038  addiu       $s3, $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C6Cu;
        goto label_1d4c6c;
    }
    ctx->pc = 0x1D4C64u;
    {
        const bool branch_taken_0x1d4c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C64u;
        // 0x1d4c68: 0x26730038  addiu       $s3, $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c64) {
            ctx->pc = 0x1D4BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4be0;
        }
    }
    ctx->pc = 0x1D4C6Cu;
label_1d4c6c:
    // 0x1d4c6c: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1d4c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4c70:
    // 0x1d4c70: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x1d4c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_1d4c74:
    // 0x1d4c74: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1d4c78:
    if (ctx->pc == 0x1D4C78u) {
        ctx->pc = 0x1D4C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C74u;
        // 0x1d4c78: 0x24020098  addiu       $v0, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C7Cu;
        goto label_1d4c7c;
    }
    ctx->pc = 0x1D4C74u;
    {
        const bool branch_taken_0x1d4c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C74u;
        // 0x1d4c78: 0x24020098  addiu       $v0, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c74) {
            ctx->pc = 0x1D4CB8u;
            goto label_1d4cb8;
        }
    }
    ctx->pc = 0x1D4C7Cu;
label_1d4c7c:
    // 0x1d4c7c: 0x8e300084  lw          $s0, 0x84($s1)
    ctx->pc = 0x1d4c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1d4c80:
    // 0x1d4c80: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1d4c80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1d4c84:
    // 0x1d4c84: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d4c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c88:
    // 0x1d4c88: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1d4c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d4c8c:
    // 0x1d4c8c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d4c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1d4c90:
    // 0x1d4c90: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d4c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1d4c94:
    // 0x1d4c94: 0xc0c4a72  jal         func_3129C8
label_1d4c98:
    if (ctx->pc == 0x1D4C98u) {
        ctx->pc = 0x1D4C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C94u;
        // 0x1d4c98: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C9Cu;
        goto label_1d4c9c;
    }
    ctx->pc = 0x1D4C94u;
    SET_GPR_U32(ctx, 31, 0x1D4C9Cu);
    ctx->pc = 0x1D4C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4C94u;
    // 0x1d4c98: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x1D4C94u, 0x1D4C9Cu)) {
        return;
    }
    ctx->pc = 0x1D4C9Cu;
label_1d4c9c:
    // 0x1d4c9c: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x1d4c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_1d4ca0:
    // 0x1d4ca0: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1d4ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_1d4ca4:
    // 0x1d4ca4: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1d4ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_1d4ca8:
    // 0x1d4ca8: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1d4ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_1d4cac:
    // 0x1d4cac: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d4cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4cb0:
    // 0x1d4cb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d4cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d4cb4:
    // 0x1d4cb4: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x1d4cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_1d4cb8:
    // 0x1d4cb8: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x1d4cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_1d4cbc:
    // 0x1d4cbc: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1d4cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4cc0:
    // 0x1d4cc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d4cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d4cc4:
    // 0x1d4cc4: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1d4cc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1d4cc8:
    // 0x1d4cc8: 0x14600160  bnez        $v1, . + 4 + (0x160 << 2)
label_1d4ccc:
    if (ctx->pc == 0x1D4CCCu) {
        ctx->pc = 0x1D4CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CC8u;
        // 0x1d4ccc: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CD0u;
        goto label_1d4cd0;
    }
    ctx->pc = 0x1D4CC8u;
    {
        const bool branch_taken_0x1d4cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CC8u;
        // 0x1d4ccc: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4cc8) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D4CD0u;
label_1d4cd0:
    // 0x1d4cd0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d4cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d4cd4:
    // 0x1d4cd4: 0xc07555e  jal         func_1D5578
label_1d4cd8:
    if (ctx->pc == 0x1D4CD8u) {
        ctx->pc = 0x1D4CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CD4u;
        // 0x1d4cd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CDCu;
        goto label_1d4cdc;
    }
    ctx->pc = 0x1D4CD4u;
    SET_GPR_U32(ctx, 31, 0x1D4CDCu);
    ctx->pc = 0x1D4CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4CD4u;
    // 0x1d4cd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D4CD4u, 0x1D4CDCu)) {
        return;
    }
    ctx->pc = 0x1D4CDCu;
label_1d4cdc:
    // 0x1d4cdc: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x1d4cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1d4ce0:
    // 0x1d4ce0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d4ce4:
    if (ctx->pc == 0x1D4CE4u) {
        ctx->pc = 0x1D4CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CE0u;
        // 0x1d4ce4: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CE8u;
        goto label_1d4ce8;
    }
    ctx->pc = 0x1D4CE0u;
    {
        const bool branch_taken_0x1d4ce0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CE0u;
        // 0x1d4ce4: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ce0) {
            ctx->pc = 0x1D4CF0u;
            goto label_1d4cf0;
        }
    }
    ctx->pc = 0x1D4CE8u;
label_1d4ce8:
    // 0x1d4ce8: 0xc07596a  jal         func_1D65A8
label_1d4cec:
    if (ctx->pc == 0x1D4CECu) {
        ctx->pc = 0x1D4CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CE8u;
        // 0x1d4cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CF0u;
        goto label_1d4cf0;
    }
    ctx->pc = 0x1D4CE8u;
    SET_GPR_U32(ctx, 31, 0x1D4CF0u);
    ctx->pc = 0x1D4CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4CE8u;
    // 0x1d4cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D4CE8u, 0x1D4CF0u)) {
        return;
    }
    ctx->pc = 0x1D4CF0u;
label_1d4cf0:
    // 0x1d4cf0: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x1d4cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1d4cf4:
    // 0x1d4cf4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_1d4cf8:
    if (ctx->pc == 0x1D4CF8u) {
        ctx->pc = 0x1D4CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CF4u;
        // 0x1d4cf8: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CFCu;
        goto label_1d4cfc;
    }
    ctx->pc = 0x1D4CF4u;
    {
        const bool branch_taken_0x1d4cf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4cf4) {
            ctx->pc = 0x1D4CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4CF4u;
            // 0x1d4cf8: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4D08u;
            goto label_1d4d08;
        }
    }
    ctx->pc = 0x1D4CFCu;
label_1d4cfc:
    // 0x1d4cfc: 0xc07596e  jal         func_1D65B8
label_1d4d00:
    if (ctx->pc == 0x1D4D00u) {
        ctx->pc = 0x1D4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CFCu;
        // 0x1d4d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D04u;
        goto label_1d4d04;
    }
    ctx->pc = 0x1D4CFCu;
    SET_GPR_U32(ctx, 31, 0x1D4D04u);
    ctx->pc = 0x1D4D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4CFCu;
    // 0x1d4d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D4CFCu, 0x1D4D04u)) {
        return;
    }
    ctx->pc = 0x1D4D04u;
label_1d4d04:
    // 0x1d4d04: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d4d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4d08:
    // 0x1d4d08: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d4d08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4d0c:
    // 0x1d4d0c: 0x18400140  blez        $v0, . + 4 + (0x140 << 2)
label_1d4d10:
    if (ctx->pc == 0x1D4D10u) {
        ctx->pc = 0x1D4D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D0Cu;
        // 0x1d4d10: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D14u;
        goto label_1d4d14;
    }
    ctx->pc = 0x1D4D0Cu;
    {
        const bool branch_taken_0x1d4d0c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D4D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D0Cu;
        // 0x1d4d10: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d0c) {
            ctx->pc = 0x1D5210u;
            goto label_1d5210;
        }
    }
    ctx->pc = 0x1D4D14u;
label_1d4d14:
    // 0x1d4d14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d4d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4d18:
    // 0x1d4d18: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1d4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1d4d1c:
    // 0x1d4d1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d4d20:
    // 0x1d4d20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d4d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d4d24:
    // 0x1d4d24: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x1d4d24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
label_1d4d28:
    // 0x1d4d28: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d4d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4d2c:
    // 0x1d4d2c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d4d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d4d30:
    // 0x1d4d30: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d4d34:
    if (ctx->pc == 0x1D4D34u) {
        ctx->pc = 0x1D4D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D30u;
        // 0x1d4d34: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D38u;
        goto label_1d4d38;
    }
    ctx->pc = 0x1D4D30u;
    {
        const bool branch_taken_0x1d4d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D30u;
        // 0x1d4d34: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d30) {
            ctx->pc = 0x1D4D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4d18;
        }
    }
    ctx->pc = 0x1D4D38u;
label_1d4d38:
    // 0x1d4d38: 0x10000144  b           . + 4 + (0x144 << 2)
label_1d4d3c:
    if (ctx->pc == 0x1D4D3Cu) {
        ctx->pc = 0x1D4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D38u;
        // 0x1d4d3c: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D40u;
        goto label_1d4d40;
    }
    ctx->pc = 0x1D4D38u;
    {
        const bool branch_taken_0x1d4d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D38u;
        // 0x1d4d3c: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d38) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D4D40u;
label_1d4d40:
    // 0x1d4d40: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d4d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d4d44:
    // 0x1d4d44: 0x8c43883c  lw          $v1, -0x77C4($v0)
    ctx->pc = 0x1d4d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936636)));
label_1d4d48:
    // 0x1d4d48: 0x106000cf  beqz        $v1, . + 4 + (0xCF << 2)
label_1d4d4c:
    if (ctx->pc == 0x1D4D4Cu) {
        ctx->pc = 0x1D4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D48u;
        // 0x1d4d4c: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D50u;
        goto label_1d4d50;
    }
    ctx->pc = 0x1D4D48u;
    {
        const bool branch_taken_0x1d4d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D48u;
        // 0x1d4d4c: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d48) {
            ctx->pc = 0x1D5088u;
            goto label_1d5088;
        }
    }
    ctx->pc = 0x1D4D50u;
label_1d4d50:
    // 0x1d4d50: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1d4d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4d54:
    // 0x1d4d54: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x1d4d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_1d4d58:
    // 0x1d4d58: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1d4d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1d4d5c:
    // 0x1d4d5c: 0x1440013c  bnez        $v0, . + 4 + (0x13C << 2)
label_1d4d60:
    if (ctx->pc == 0x1D4D60u) {
        ctx->pc = 0x1D4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D5Cu;
        // 0x1d4d60: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D64u;
        goto label_1d4d64;
    }
    ctx->pc = 0x1D4D5Cu;
    {
        const bool branch_taken_0x1d4d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D5Cu;
        // 0x1d4d60: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d5c) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D4D64u;
label_1d4d64:
    // 0x1d4d64: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d4d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d4d68:
    // 0x1d4d68: 0xc07555e  jal         func_1D5578
label_1d4d6c:
    if (ctx->pc == 0x1D4D6Cu) {
        ctx->pc = 0x1D4D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D68u;
        // 0x1d4d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D70u;
        goto label_1d4d70;
    }
    ctx->pc = 0x1D4D68u;
    SET_GPR_U32(ctx, 31, 0x1D4D70u);
    ctx->pc = 0x1D4D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4D68u;
    // 0x1d4d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D4D68u, 0x1D4D70u)) {
        return;
    }
    ctx->pc = 0x1D4D70u;
label_1d4d70:
    // 0x1d4d70: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x1d4d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1d4d74:
    // 0x1d4d74: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d4d78:
    if (ctx->pc == 0x1D4D78u) {
        ctx->pc = 0x1D4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D74u;
        // 0x1d4d78: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D7Cu;
        goto label_1d4d7c;
    }
    ctx->pc = 0x1D4D74u;
    {
        const bool branch_taken_0x1d4d74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D74u;
        // 0x1d4d78: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d74) {
            ctx->pc = 0x1D4D84u;
            goto label_1d4d84;
        }
    }
    ctx->pc = 0x1D4D7Cu;
label_1d4d7c:
    // 0x1d4d7c: 0xc07596a  jal         func_1D65A8
label_1d4d80:
    if (ctx->pc == 0x1D4D80u) {
        ctx->pc = 0x1D4D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D7Cu;
        // 0x1d4d80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D84u;
        goto label_1d4d84;
    }
    ctx->pc = 0x1D4D7Cu;
    SET_GPR_U32(ctx, 31, 0x1D4D84u);
    ctx->pc = 0x1D4D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4D7Cu;
    // 0x1d4d80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D4D7Cu, 0x1D4D84u)) {
        return;
    }
    ctx->pc = 0x1D4D84u;
label_1d4d84:
    // 0x1d4d84: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x1d4d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1d4d88:
    // 0x1d4d88: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_1d4d8c:
    if (ctx->pc == 0x1D4D8Cu) {
        ctx->pc = 0x1D4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D88u;
        // 0x1d4d8c: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D90u;
        goto label_1d4d90;
    }
    ctx->pc = 0x1D4D88u;
    {
        const bool branch_taken_0x1d4d88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4d88) {
            ctx->pc = 0x1D4D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4D88u;
            // 0x1d4d8c: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4D9Cu;
            goto label_1d4d9c;
        }
    }
    ctx->pc = 0x1D4D90u;
label_1d4d90:
    // 0x1d4d90: 0xc07596e  jal         func_1D65B8
label_1d4d94:
    if (ctx->pc == 0x1D4D94u) {
        ctx->pc = 0x1D4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D90u;
        // 0x1d4d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D98u;
        goto label_1d4d98;
    }
    ctx->pc = 0x1D4D90u;
    SET_GPR_U32(ctx, 31, 0x1D4D98u);
    ctx->pc = 0x1D4D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4D90u;
    // 0x1d4d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D4D90u, 0x1D4D98u)) {
        return;
    }
    ctx->pc = 0x1D4D98u;
label_1d4d98:
    // 0x1d4d98: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d4d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4d9c:
    // 0x1d4d9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d4d9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4da0:
    // 0x1d4da0: 0x1840011b  blez        $v0, . + 4 + (0x11B << 2)
label_1d4da4:
    if (ctx->pc == 0x1D4DA4u) {
        ctx->pc = 0x1D4DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DA0u;
        // 0x1d4da4: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4DA8u;
        goto label_1d4da8;
    }
    ctx->pc = 0x1D4DA0u;
    {
        const bool branch_taken_0x1d4da0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D4DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DA0u;
        // 0x1d4da4: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4da0) {
            ctx->pc = 0x1D5210u;
            goto label_1d5210;
        }
    }
    ctx->pc = 0x1D4DA8u;
label_1d4da8:
    // 0x1d4da8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d4da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4dac:
    // 0x1d4dac: 0x0  nop
    ctx->pc = 0x1d4dacu;
    // NOP
label_1d4db0:
    // 0x1d4db0: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1d4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1d4db4:
    // 0x1d4db4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d4db8:
    // 0x1d4db8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d4db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d4dbc:
    // 0x1d4dbc: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x1d4dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
label_1d4dc0:
    // 0x1d4dc0: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4dc4:
    // 0x1d4dc4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d4dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d4dc8:
    // 0x1d4dc8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d4dcc:
    if (ctx->pc == 0x1D4DCCu) {
        ctx->pc = 0x1D4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DC8u;
        // 0x1d4dcc: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4DD0u;
        goto label_1d4dd0;
    }
    ctx->pc = 0x1D4DC8u;
    {
        const bool branch_taken_0x1d4dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DC8u;
        // 0x1d4dcc: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4dc8) {
            ctx->pc = 0x1D4DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4db0;
        }
    }
    ctx->pc = 0x1D4DD0u;
label_1d4dd0:
    // 0x1d4dd0: 0x1000011e  b           . + 4 + (0x11E << 2)
label_1d4dd4:
    if (ctx->pc == 0x1D4DD4u) {
        ctx->pc = 0x1D4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DD0u;
        // 0x1d4dd4: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4DD8u;
        goto label_1d4dd8;
    }
    ctx->pc = 0x1D4DD0u;
    {
        const bool branch_taken_0x1d4dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DD0u;
        // 0x1d4dd4: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4dd0) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D4DD8u;
label_1d4dd8:
    // 0x1d4dd8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d4dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d4ddc:
    // 0x1d4ddc: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x1d4ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1d4de0:
    // 0x1d4de0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4de4:
    // 0x1d4de4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d4de4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4de8:
    // 0x1d4de8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1d4de8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1d4dec:
    // 0x1d4dec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d4decu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4df0:
    // 0x1d4df0: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1d4df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1d4df4:
    // 0x1d4df4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d4df4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4df8:
    // 0x1d4df8: 0x60f809  jalr        $v1
label_1d4dfc:
    if (ctx->pc == 0x1D4DFCu) {
        ctx->pc = 0x1D4DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DF8u;
        // 0x1d4dfc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E00u;
        goto label_1d4e00;
    }
    ctx->pc = 0x1D4DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D4E00u);
        ctx->pc = 0x1D4DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DF8u;
        // 0x1d4dfc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4DF8u, 0x1D4E00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4E00u;
label_1d4e00:
    // 0x1d4e00: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x1d4e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_1d4e04:
    // 0x1d4e04: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1d4e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4e08:
    // 0x1d4e08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d4e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d4e0c:
    // 0x1d4e0c: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1d4e0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1d4e10:
    // 0x1d4e10: 0x1460010e  bnez        $v1, . + 4 + (0x10E << 2)
label_1d4e14:
    if (ctx->pc == 0x1D4E14u) {
        ctx->pc = 0x1D4E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E10u;
        // 0x1d4e14: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E18u;
        goto label_1d4e18;
    }
    ctx->pc = 0x1D4E10u;
    {
        const bool branch_taken_0x1d4e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E10u;
        // 0x1d4e14: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e10) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D4E18u;
label_1d4e18:
    // 0x1d4e18: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d4e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d4e1c:
    // 0x1d4e1c: 0xc07555e  jal         func_1D5578
label_1d4e20:
    if (ctx->pc == 0x1D4E20u) {
        ctx->pc = 0x1D4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E1Cu;
        // 0x1d4e20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E24u;
        goto label_1d4e24;
    }
    ctx->pc = 0x1D4E1Cu;
    SET_GPR_U32(ctx, 31, 0x1D4E24u);
    ctx->pc = 0x1D4E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4E1Cu;
    // 0x1d4e20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D4E1Cu, 0x1D4E24u)) {
        return;
    }
    ctx->pc = 0x1D4E24u;
label_1d4e24:
    // 0x1d4e24: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x1d4e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1d4e28:
    // 0x1d4e28: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d4e2c:
    if (ctx->pc == 0x1D4E2Cu) {
        ctx->pc = 0x1D4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E28u;
        // 0x1d4e2c: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E30u;
        goto label_1d4e30;
    }
    ctx->pc = 0x1D4E28u;
    {
        const bool branch_taken_0x1d4e28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E28u;
        // 0x1d4e2c: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e28) {
            ctx->pc = 0x1D4E38u;
            goto label_1d4e38;
        }
    }
    ctx->pc = 0x1D4E30u;
label_1d4e30:
    // 0x1d4e30: 0xc07596a  jal         func_1D65A8
label_1d4e34:
    if (ctx->pc == 0x1D4E34u) {
        ctx->pc = 0x1D4E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E30u;
        // 0x1d4e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E38u;
        goto label_1d4e38;
    }
    ctx->pc = 0x1D4E30u;
    SET_GPR_U32(ctx, 31, 0x1D4E38u);
    ctx->pc = 0x1D4E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4E30u;
    // 0x1d4e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D4E30u, 0x1D4E38u)) {
        return;
    }
    ctx->pc = 0x1D4E38u;
label_1d4e38:
    // 0x1d4e38: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x1d4e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1d4e3c:
    // 0x1d4e3c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_1d4e40:
    if (ctx->pc == 0x1D4E40u) {
        ctx->pc = 0x1D4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E3Cu;
        // 0x1d4e40: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E44u;
        goto label_1d4e44;
    }
    ctx->pc = 0x1D4E3Cu;
    {
        const bool branch_taken_0x1d4e3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e3c) {
            ctx->pc = 0x1D4E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4E3Cu;
            // 0x1d4e40: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4E50u;
            goto label_1d4e50;
        }
    }
    ctx->pc = 0x1D4E44u;
label_1d4e44:
    // 0x1d4e44: 0xc07596e  jal         func_1D65B8
label_1d4e48:
    if (ctx->pc == 0x1D4E48u) {
        ctx->pc = 0x1D4E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E44u;
        // 0x1d4e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E4Cu;
        goto label_1d4e4c;
    }
    ctx->pc = 0x1D4E44u;
    SET_GPR_U32(ctx, 31, 0x1D4E4Cu);
    ctx->pc = 0x1D4E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4E44u;
    // 0x1d4e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D4E44u, 0x1D4E4Cu)) {
        return;
    }
    ctx->pc = 0x1D4E4Cu;
label_1d4e4c:
    // 0x1d4e4c: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d4e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4e50:
    // 0x1d4e50: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d4e50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e54:
    // 0x1d4e54: 0x184000ee  blez        $v0, . + 4 + (0xEE << 2)
label_1d4e58:
    if (ctx->pc == 0x1D4E58u) {
        ctx->pc = 0x1D4E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E54u;
        // 0x1d4e58: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E5Cu;
        goto label_1d4e5c;
    }
    ctx->pc = 0x1D4E54u;
    {
        const bool branch_taken_0x1d4e54 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D4E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E54u;
        // 0x1d4e58: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e54) {
            ctx->pc = 0x1D5210u;
            goto label_1d5210;
        }
    }
    ctx->pc = 0x1D4E5Cu;
label_1d4e5c:
    // 0x1d4e5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d4e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e60:
    // 0x1d4e60: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1d4e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1d4e64:
    // 0x1d4e64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d4e68:
    // 0x1d4e68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d4e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d4e6c:
    // 0x1d4e6c: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x1d4e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
label_1d4e70:
    // 0x1d4e70: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4e74:
    // 0x1d4e74: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d4e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d4e78:
    // 0x1d4e78: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d4e7c:
    if (ctx->pc == 0x1D4E7Cu) {
        ctx->pc = 0x1D4E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E78u;
        // 0x1d4e7c: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E80u;
        goto label_1d4e80;
    }
    ctx->pc = 0x1D4E78u;
    {
        const bool branch_taken_0x1d4e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E78u;
        // 0x1d4e7c: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e78) {
            ctx->pc = 0x1D4E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4e60;
        }
    }
    ctx->pc = 0x1D4E80u;
label_1d4e80:
    // 0x1d4e80: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_1d4e84:
    if (ctx->pc == 0x1D4E84u) {
        ctx->pc = 0x1D4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E80u;
        // 0x1d4e84: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E88u;
        goto label_1d4e88;
    }
    ctx->pc = 0x1D4E80u;
    {
        const bool branch_taken_0x1d4e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E80u;
        // 0x1d4e84: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e80) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D4E88u;
label_1d4e88:
    // 0x1d4e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e8c:
    // 0x1d4e8c: 0xc07555e  jal         func_1D5578
label_1d4e90:
    if (ctx->pc == 0x1D4E90u) {
        ctx->pc = 0x1D4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E8Cu;
        // 0x1d4e90: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E94u;
        goto label_1d4e94;
    }
    ctx->pc = 0x1D4E8Cu;
    SET_GPR_U32(ctx, 31, 0x1D4E94u);
    ctx->pc = 0x1D4E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4E8Cu;
    // 0x1d4e90: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D4E8Cu, 0x1D4E94u)) {
        return;
    }
    ctx->pc = 0x1D4E94u;
label_1d4e94:
    // 0x1d4e94: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x1d4e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_1d4e98:
    // 0x1d4e98: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1d4e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4e9c:
    // 0x1d4e9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d4e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d4ea0:
    // 0x1d4ea0: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1d4ea0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1d4ea4:
    // 0x1d4ea4: 0x146000e9  bnez        $v1, . + 4 + (0xE9 << 2)
label_1d4ea8:
    if (ctx->pc == 0x1D4EA8u) {
        ctx->pc = 0x1D4EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EA4u;
        // 0x1d4ea8: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4EACu;
        goto label_1d4eac;
    }
    ctx->pc = 0x1D4EA4u;
    {
        const bool branch_taken_0x1d4ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EA4u;
        // 0x1d4ea8: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ea4) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D4EACu;
label_1d4eac:
    // 0x1d4eac: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d4eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d4eb0:
    // 0x1d4eb0: 0xc07555e  jal         func_1D5578
label_1d4eb4:
    if (ctx->pc == 0x1D4EB4u) {
        ctx->pc = 0x1D4EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EB0u;
        // 0x1d4eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4EB8u;
        goto label_1d4eb8;
    }
    ctx->pc = 0x1D4EB0u;
    SET_GPR_U32(ctx, 31, 0x1D4EB8u);
    ctx->pc = 0x1D4EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4EB0u;
    // 0x1d4eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D4EB0u, 0x1D4EB8u)) {
        return;
    }
    ctx->pc = 0x1D4EB8u;
label_1d4eb8:
    // 0x1d4eb8: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x1d4eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1d4ebc:
    // 0x1d4ebc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d4ec0:
    if (ctx->pc == 0x1D4EC0u) {
        ctx->pc = 0x1D4EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EBCu;
        // 0x1d4ec0: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4EC4u;
        goto label_1d4ec4;
    }
    ctx->pc = 0x1D4EBCu;
    {
        const bool branch_taken_0x1d4ebc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EBCu;
        // 0x1d4ec0: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ebc) {
            ctx->pc = 0x1D4ECCu;
            goto label_1d4ecc;
        }
    }
    ctx->pc = 0x1D4EC4u;
label_1d4ec4:
    // 0x1d4ec4: 0xc07596a  jal         func_1D65A8
label_1d4ec8:
    if (ctx->pc == 0x1D4EC8u) {
        ctx->pc = 0x1D4EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EC4u;
        // 0x1d4ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4ECCu;
        goto label_1d4ecc;
    }
    ctx->pc = 0x1D4EC4u;
    SET_GPR_U32(ctx, 31, 0x1D4ECCu);
    ctx->pc = 0x1D4EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4EC4u;
    // 0x1d4ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D4EC4u, 0x1D4ECCu)) {
        return;
    }
    ctx->pc = 0x1D4ECCu;
label_1d4ecc:
    // 0x1d4ecc: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x1d4eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1d4ed0:
    // 0x1d4ed0: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_1d4ed4:
    if (ctx->pc == 0x1D4ED4u) {
        ctx->pc = 0x1D4ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4ED0u;
        // 0x1d4ed4: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4ED8u;
        goto label_1d4ed8;
    }
    ctx->pc = 0x1D4ED0u;
    {
        const bool branch_taken_0x1d4ed0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4ed0) {
            ctx->pc = 0x1D4ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4ED0u;
            // 0x1d4ed4: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4EE4u;
            goto label_1d4ee4;
        }
    }
    ctx->pc = 0x1D4ED8u;
label_1d4ed8:
    // 0x1d4ed8: 0xc07596e  jal         func_1D65B8
label_1d4edc:
    if (ctx->pc == 0x1D4EDCu) {
        ctx->pc = 0x1D4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4ED8u;
        // 0x1d4edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4EE0u;
        goto label_1d4ee0;
    }
    ctx->pc = 0x1D4ED8u;
    SET_GPR_U32(ctx, 31, 0x1D4EE0u);
    ctx->pc = 0x1D4EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4ED8u;
    // 0x1d4edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D4ED8u, 0x1D4EE0u)) {
        return;
    }
    ctx->pc = 0x1D4EE0u;
label_1d4ee0:
    // 0x1d4ee0: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d4ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4ee4:
    // 0x1d4ee4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d4ee4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ee8:
    // 0x1d4ee8: 0x184000c9  blez        $v0, . + 4 + (0xC9 << 2)
label_1d4eec:
    if (ctx->pc == 0x1D4EECu) {
        ctx->pc = 0x1D4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EE8u;
        // 0x1d4eec: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4EF0u;
        goto label_1d4ef0;
    }
    ctx->pc = 0x1D4EE8u;
    {
        const bool branch_taken_0x1d4ee8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EE8u;
        // 0x1d4eec: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ee8) {
            ctx->pc = 0x1D5210u;
            goto label_1d5210;
        }
    }
    ctx->pc = 0x1D4EF0u;
label_1d4ef0:
    // 0x1d4ef0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d4ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ef4:
    // 0x1d4ef4: 0x0  nop
    ctx->pc = 0x1d4ef4u;
    // NOP
label_1d4ef8:
    // 0x1d4ef8: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1d4ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1d4efc:
    // 0x1d4efc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d4f00:
    // 0x1d4f00: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d4f04:
    // 0x1d4f04: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x1d4f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
label_1d4f08:
    // 0x1d4f08: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d4f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4f0c:
    // 0x1d4f0c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d4f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d4f10:
    // 0x1d4f10: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d4f14:
    if (ctx->pc == 0x1D4F14u) {
        ctx->pc = 0x1D4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F10u;
        // 0x1d4f14: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4F18u;
        goto label_1d4f18;
    }
    ctx->pc = 0x1D4F10u;
    {
        const bool branch_taken_0x1d4f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F10u;
        // 0x1d4f14: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f10) {
            ctx->pc = 0x1D4EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4ef8;
        }
    }
    ctx->pc = 0x1D4F18u;
label_1d4f18:
    // 0x1d4f18: 0x100000cc  b           . + 4 + (0xCC << 2)
label_1d4f1c:
    if (ctx->pc == 0x1D4F1Cu) {
        ctx->pc = 0x1D4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F18u;
        // 0x1d4f1c: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4F20u;
        goto label_1d4f20;
    }
    ctx->pc = 0x1D4F18u;
    {
        const bool branch_taken_0x1d4f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F18u;
        // 0x1d4f1c: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f18) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D4F20u;
label_1d4f20:
    // 0x1d4f20: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d4f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d4f24:
    // 0x1d4f24: 0x8c448838  lw          $a0, -0x77C8($v0)
    ctx->pc = 0x1d4f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936632)));
label_1d4f28:
    // 0x1d4f28: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d4f2c:
    if (ctx->pc == 0x1D4F2Cu) {
        ctx->pc = 0x1D4F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F28u;
        // 0x1d4f2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4F30u;
        goto label_1d4f30;
    }
    ctx->pc = 0x1D4F28u;
    {
        const bool branch_taken_0x1d4f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F28u;
        // 0x1d4f2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f28) {
            ctx->pc = 0x1D4F3Cu;
            goto label_1d4f3c;
        }
    }
    ctx->pc = 0x1D4F30u;
label_1d4f30:
    // 0x1d4f30: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x1d4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_1d4f34:
    // 0x1d4f34: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_1d4f38:
    if (ctx->pc == 0x1D4F38u) {
        ctx->pc = 0x1D4F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F34u;
        // 0x1d4f38: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4F3Cu;
        goto label_1d4f3c;
    }
    ctx->pc = 0x1D4F34u;
    {
        const bool branch_taken_0x1d4f34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D4F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F34u;
        // 0x1d4f38: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f34) {
            ctx->pc = 0x1D4F78u;
            goto label_1d4f78;
        }
    }
    ctx->pc = 0x1D4F3Cu;
label_1d4f3c:
    // 0x1d4f3c: 0xc0808b8  jal         func_2022E0
label_1d4f40:
    if (ctx->pc == 0x1D4F40u) {
        ctx->pc = 0x1D4F44u;
        goto label_1d4f44;
    }
    ctx->pc = 0x1D4F3Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F44u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D4F3Cu, 0x1D4F44u)) {
        return;
    }
    ctx->pc = 0x1D4F44u;
label_1d4f44:
    // 0x1d4f44: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d4f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d4f48:
    // 0x1d4f48: 0xae008838  sw          $zero, -0x77C8($s0)
    ctx->pc = 0x1d4f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936632), GPR_U32(ctx, 0));
label_1d4f4c:
    // 0x1d4f4c: 0x8c43883c  lw          $v1, -0x77C4($v0)
    ctx->pc = 0x1d4f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936636)));
label_1d4f50:
    // 0x1d4f50: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1d4f54:
    if (ctx->pc == 0x1D4F54u) {
        ctx->pc = 0x1D4F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F50u;
        // 0x1d4f54: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4F58u;
        goto label_1d4f58;
    }
    ctx->pc = 0x1D4F50u;
    {
        const bool branch_taken_0x1d4f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F50u;
        // 0x1d4f54: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f50) {
            ctx->pc = 0x1D4F68u;
            goto label_1d4f68;
        }
    }
    ctx->pc = 0x1D4F58u;
label_1d4f58:
    // 0x1d4f58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d4f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4f5c:
    // 0x1d4f5c: 0xc080924  jal         func_202490
label_1d4f60:
    if (ctx->pc == 0x1D4F60u) {
        ctx->pc = 0x1D4F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F5Cu;
        // 0x1d4f60: 0x642018  mult        $a0, $v1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4F64u;
        goto label_1d4f64;
    }
    ctx->pc = 0x1D4F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F64u);
    ctx->pc = 0x1D4F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4F5Cu;
    // 0x1d4f60: 0x642018  mult        $a0, $v1, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1D4F5Cu, 0x1D4F64u)) {
        return;
    }
    ctx->pc = 0x1D4F64u;
label_1d4f64:
    // 0x1d4f64: 0xae028838  sw          $v0, -0x77C8($s0)
    ctx->pc = 0x1d4f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936632), GPR_U32(ctx, 2));
label_1d4f68:
    // 0x1d4f68: 0x8e028838  lw          $v0, -0x77C8($s0)
    ctx->pc = 0x1d4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936632)));
label_1d4f6c:
    // 0x1d4f6c: 0xae400088  sw          $zero, 0x88($s2)
    ctx->pc = 0x1d4f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 0));
label_1d4f70:
    // 0x1d4f70: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x1d4f70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
label_1d4f74:
    // 0x1d4f74: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d4f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1d4f78:
    // 0x1d4f78: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x1d4f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1d4f7c:
    // 0x1d4f7c: 0x8c62883c  lw          $v0, -0x77C4($v1)
    ctx->pc = 0x1d4f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936636)));
label_1d4f80:
    // 0x1d4f80: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d4f80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d4f84:
    // 0x1d4f84: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_1d4f88:
    if (ctx->pc == 0x1D4F88u) {
        ctx->pc = 0x1D4F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F84u;
        // 0x1d4f88: 0x8e22008c  lw          $v0, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4F8Cu;
        goto label_1d4f8c;
    }
    ctx->pc = 0x1D4F84u;
    {
        const bool branch_taken_0x1d4f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4f84) {
            ctx->pc = 0x1D4F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4F84u;
            // 0x1d4f88: 0x8e22008c  lw          $v0, 0x8C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4FE8u;
            goto label_1d4fe8;
        }
    }
    ctx->pc = 0x1D4F8Cu;
label_1d4f8c:
    // 0x1d4f8c: 0xc0759be  jal         func_1D66F8
label_1d4f90:
    if (ctx->pc == 0x1D4F90u) {
        ctx->pc = 0x1D4F94u;
        goto label_1d4f94;
    }
    ctx->pc = 0x1D4F8Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F94u);
    ctx->pc = 0x1D66F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D66F8u, 0x1D4F8Cu, 0x1D4F94u)) {
        return;
    }
    ctx->pc = 0x1D4F94u;
label_1d4f94:
    // 0x1d4f94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d4f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4f98:
    // 0x1d4f98: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d4f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1d4f9c:
    // 0x1d4f9c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1d4f9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d4fa0:
    // 0x1d4fa0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d4fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d4fa4:
    // 0x1d4fa4: 0xc0c4fc4  jal         func_313F10
label_1d4fa8:
    if (ctx->pc == 0x1D4FA8u) {
        ctx->pc = 0x1D4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FA4u;
        // 0x1d4fa8: 0x24a51098  addiu       $a1, $a1, 0x1098 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4FACu;
        goto label_1d4fac;
    }
    ctx->pc = 0x1D4FA4u;
    SET_GPR_U32(ctx, 31, 0x1D4FACu);
    ctx->pc = 0x1D4FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4FA4u;
    // 0x1d4fa8: 0x24a51098  addiu       $a1, $a1, 0x1098 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1D4FA4u, 0x1D4FACu)) {
        return;
    }
    ctx->pc = 0x1D4FACu;
label_1d4fac:
    // 0x1d4fac: 0x8e460088  lw          $a2, 0x88($s2)
    ctx->pc = 0x1d4facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1d4fb0:
    // 0x1d4fb0: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x1d4fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1d4fb4:
    // 0x1d4fb4: 0x8e098838  lw          $t1, -0x77C8($s0)
    ctx->pc = 0x1d4fb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936632)));
label_1d4fb8:
    // 0x1d4fb8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d4fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d4fbc:
    // 0x1d4fbc: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x1d4fbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1d4fc0:
    // 0x1d4fc0: 0x8c448800  lw          $a0, -0x7800($v0)
    ctx->pc = 0x1d4fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936576)));
label_1d4fc4:
    // 0x1d4fc4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d4fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d4fc8:
    // 0x1d4fc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d4fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4fcc:
    // 0x1d4fcc: 0x24080034  addiu       $t0, $zero, 0x34
    ctx->pc = 0x1d4fccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1d4fd0:
    // 0x1d4fd0: 0xc0bc408  jal         func_2F1020
label_1d4fd4:
    if (ctx->pc == 0x1D4FD4u) {
        ctx->pc = 0x1D4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FD0u;
        // 0x1d4fd4: 0x1263021  addu        $a2, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4FD8u;
        goto label_1d4fd8;
    }
    ctx->pc = 0x1D4FD0u;
    SET_GPR_U32(ctx, 31, 0x1D4FD8u);
    ctx->pc = 0x1D4FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4FD0u;
    // 0x1d4fd4: 0x1263021  addu        $a2, $t1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1020u, 0x1D4FD0u, 0x1D4FD8u)) {
        return;
    }
    ctx->pc = 0x1D4FD8u;
label_1d4fd8:
    // 0x1d4fd8: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x1d4fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1d4fdc:
    // 0x1d4fdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d4fe0:
    // 0x1d4fe0: 0x1000009a  b           . + 4 + (0x9A << 2)
label_1d4fe4:
    if (ctx->pc == 0x1D4FE4u) {
        ctx->pc = 0x1D4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FE0u;
        // 0x1d4fe4: 0xae430088  sw          $v1, 0x88($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4FE8u;
        goto label_1d4fe8;
    }
    ctx->pc = 0x1D4FE0u;
    {
        const bool branch_taken_0x1d4fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FE0u;
        // 0x1d4fe4: 0xae430088  sw          $v1, 0x88($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4fe0) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D4FE8u;
label_1d4fe8:
    // 0x1d4fe8: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1d4fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d4fec:
    // 0x1d4fec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d4fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d4ff0:
    // 0x1d4ff0: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1d4ff0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1d4ff4:
    // 0x1d4ff4: 0x14600095  bnez        $v1, . + 4 + (0x95 << 2)
label_1d4ff8:
    if (ctx->pc == 0x1D4FF8u) {
        ctx->pc = 0x1D4FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FF4u;
        // 0x1d4ff8: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4FFCu;
        goto label_1d4ffc;
    }
    ctx->pc = 0x1D4FF4u;
    {
        const bool branch_taken_0x1d4ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FF4u;
        // 0x1d4ff8: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ff4) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D4FFCu;
label_1d4ffc:
    // 0x1d4ffc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d4ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d5000:
    // 0x1d5000: 0xc07555e  jal         func_1D5578
label_1d5004:
    if (ctx->pc == 0x1D5004u) {
        ctx->pc = 0x1D5004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5000u;
        // 0x1d5004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5008u;
        goto label_1d5008;
    }
    ctx->pc = 0x1D5000u;
    SET_GPR_U32(ctx, 31, 0x1D5008u);
    ctx->pc = 0x1D5004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5000u;
    // 0x1d5004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D5000u, 0x1D5008u)) {
        return;
    }
    ctx->pc = 0x1D5008u;
label_1d5008:
    // 0x1d5008: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x1d5008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1d500c:
    // 0x1d500c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d5010:
    if (ctx->pc == 0x1D5010u) {
        ctx->pc = 0x1D5010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D500Cu;
        // 0x1d5010: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5014u;
        goto label_1d5014;
    }
    ctx->pc = 0x1D500Cu;
    {
        const bool branch_taken_0x1d500c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D500Cu;
        // 0x1d5010: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d500c) {
            ctx->pc = 0x1D501Cu;
            goto label_1d501c;
        }
    }
    ctx->pc = 0x1D5014u;
label_1d5014:
    // 0x1d5014: 0xc07596a  jal         func_1D65A8
label_1d5018:
    if (ctx->pc == 0x1D5018u) {
        ctx->pc = 0x1D5018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5014u;
        // 0x1d5018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D501Cu;
        goto label_1d501c;
    }
    ctx->pc = 0x1D5014u;
    SET_GPR_U32(ctx, 31, 0x1D501Cu);
    ctx->pc = 0x1D5018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5014u;
    // 0x1d5018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D5014u, 0x1D501Cu)) {
        return;
    }
    ctx->pc = 0x1D501Cu;
label_1d501c:
    // 0x1d501c: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x1d501cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1d5020:
    // 0x1d5020: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_1d5024:
    if (ctx->pc == 0x1D5024u) {
        ctx->pc = 0x1D5024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5020u;
        // 0x1d5024: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5028u;
        goto label_1d5028;
    }
    ctx->pc = 0x1D5020u;
    {
        const bool branch_taken_0x1d5020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5020) {
            ctx->pc = 0x1D5024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5020u;
            // 0x1d5024: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5034u;
            goto label_1d5034;
        }
    }
    ctx->pc = 0x1D5028u;
label_1d5028:
    // 0x1d5028: 0xc07596e  jal         func_1D65B8
label_1d502c:
    if (ctx->pc == 0x1D502Cu) {
        ctx->pc = 0x1D502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5028u;
        // 0x1d502c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5030u;
        goto label_1d5030;
    }
    ctx->pc = 0x1D5028u;
    SET_GPR_U32(ctx, 31, 0x1D5030u);
    ctx->pc = 0x1D502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5028u;
    // 0x1d502c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D5028u, 0x1D5030u)) {
        return;
    }
    ctx->pc = 0x1D5030u;
label_1d5030:
    // 0x1d5030: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d5030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d5034:
    // 0x1d5034: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d5034u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5038:
    // 0x1d5038: 0x18400075  blez        $v0, . + 4 + (0x75 << 2)
label_1d503c:
    if (ctx->pc == 0x1D503Cu) {
        ctx->pc = 0x1D503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5038u;
        // 0x1d503c: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5040u;
        goto label_1d5040;
    }
    ctx->pc = 0x1D5038u;
    {
        const bool branch_taken_0x1d5038 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5038u;
        // 0x1d503c: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5038) {
            ctx->pc = 0x1D5210u;
            goto label_1d5210;
        }
    }
    ctx->pc = 0x1D5040u;
label_1d5040:
    // 0x1d5040: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d5040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5044:
    // 0x1d5044: 0x0  nop
    ctx->pc = 0x1d5044u;
    // NOP
label_1d5048:
    // 0x1d5048: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1d5048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1d504c:
    // 0x1d504c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d504cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d5050:
    // 0x1d5050: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d5050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d5054:
    // 0x1d5054: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x1d5054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
label_1d5058:
    // 0x1d5058: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d5058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d505c:
    // 0x1d505c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d505cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d5060:
    // 0x1d5060: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d5064:
    if (ctx->pc == 0x1D5064u) {
        ctx->pc = 0x1D5064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5060u;
        // 0x1d5064: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5068u;
        goto label_1d5068;
    }
    ctx->pc = 0x1D5060u;
    {
        const bool branch_taken_0x1d5060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5060u;
        // 0x1d5064: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5060) {
            ctx->pc = 0x1D5048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5048;
        }
    }
    ctx->pc = 0x1D5068u;
label_1d5068:
    // 0x1d5068: 0x10000078  b           . + 4 + (0x78 << 2)
label_1d506c:
    if (ctx->pc == 0x1D506Cu) {
        ctx->pc = 0x1D506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5068u;
        // 0x1d506c: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5070u;
        goto label_1d5070;
    }
    ctx->pc = 0x1D5068u;
    {
        const bool branch_taken_0x1d5068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5068u;
        // 0x1d506c: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5068) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D5070u;
label_1d5070:
    // 0x1d5070: 0xc074ef2  jal         func_1D3BC8
label_1d5074:
    if (ctx->pc == 0x1D5074u) {
        ctx->pc = 0x1D5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5070u;
        // 0x1d5074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5078u;
        goto label_1d5078;
    }
    ctx->pc = 0x1D5070u;
    SET_GPR_U32(ctx, 31, 0x1D5078u);
    ctx->pc = 0x1D5074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5070u;
    // 0x1d5074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D3BC8u, 0x1D5070u, 0x1D5078u)) {
        return;
    }
    ctx->pc = 0x1D5078u;
label_1d5078:
    // 0x1d5078: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d5078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d507c:
    // 0x1d507c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d507cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d5080:
    // 0x1d5080: 0x14e20006  bne         $a3, $v0, . + 4 + (0x6 << 2)
label_1d5084:
    if (ctx->pc == 0x1D5084u) {
        ctx->pc = 0x1D5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5080u;
        // 0x1d5084: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5088u;
        goto label_1d5088;
    }
    ctx->pc = 0x1D5080u;
    {
        const bool branch_taken_0x1d5080 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5080u;
        // 0x1d5084: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5080) {
            ctx->pc = 0x1D509Cu;
            goto label_1d509c;
        }
    }
    ctx->pc = 0x1D5088u;
label_1d5088:
    // 0x1d5088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d508c:
    // 0x1d508c: 0xc07555e  jal         func_1D5578
label_1d5090:
    if (ctx->pc == 0x1D5090u) {
        ctx->pc = 0x1D5090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D508Cu;
        // 0x1d5090: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5094u;
        goto label_1d5094;
    }
    ctx->pc = 0x1D508Cu;
    SET_GPR_U32(ctx, 31, 0x1D5094u);
    ctx->pc = 0x1D5090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D508Cu;
    // 0x1d5090: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D508Cu, 0x1D5094u)) {
        return;
    }
    ctx->pc = 0x1D5094u;
label_1d5094:
    // 0x1d5094: 0x1000006e  b           . + 4 + (0x6E << 2)
label_1d5098:
    if (ctx->pc == 0x1D5098u) {
        ctx->pc = 0x1D5098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5094u;
        // 0x1d5098: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D509Cu;
        goto label_1d509c;
    }
    ctx->pc = 0x1D5094u;
    {
        const bool branch_taken_0x1d5094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5094u;
        // 0x1d5098: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5094) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D509Cu;
label_1d509c:
    // 0x1d509c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d509cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1d50a0:
    // 0x1d50a0: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x1d50a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1d50a4:
    // 0x1d50a4: 0x8c658838  lw          $a1, -0x77C8($v1)
    ctx->pc = 0x1d50a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936632)));
label_1d50a8:
    // 0x1d50a8: 0x3c02dead  lui         $v0, 0xDEAD
    ctx->pc = 0x1d50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57005 << 16));
label_1d50ac:
    // 0x1d50ac: 0x3442f00d  ori         $v0, $v0, 0xF00D
    ctx->pc = 0x1d50acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61453);
label_1d50b0:
    // 0x1d50b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d50b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d50b4:
    // 0x1d50b4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1d50b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1d50b8:
    // 0x1d50b8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1d50bc:
    if (ctx->pc == 0x1D50BCu) {
        ctx->pc = 0x1D50BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50B8u;
        // 0x1d50bc: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D50C0u;
        goto label_1d50c0;
    }
    ctx->pc = 0x1D50B8u;
    {
        const bool branch_taken_0x1d50b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D50BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50B8u;
        // 0x1d50bc: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d50b8) {
            ctx->pc = 0x1D50D4u;
            goto label_1d50d4;
        }
    }
    ctx->pc = 0x1D50C0u;
label_1d50c0:
    // 0x1d50c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d50c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d50c4:
    // 0x1d50c4: 0xc07555e  jal         func_1D5578
label_1d50c8:
    if (ctx->pc == 0x1D50C8u) {
        ctx->pc = 0x1D50C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50C4u;
        // 0x1d50c8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D50CCu;
        goto label_1d50cc;
    }
    ctx->pc = 0x1D50C4u;
    SET_GPR_U32(ctx, 31, 0x1D50CCu);
    ctx->pc = 0x1D50C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D50C4u;
    // 0x1d50c8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D50C4u, 0x1D50CCu)) {
        return;
    }
    ctx->pc = 0x1D50CCu;
label_1d50cc:
    // 0x1d50cc: 0x10000030  b           . + 4 + (0x30 << 2)
label_1d50d0:
    if (ctx->pc == 0x1D50D0u) {
        ctx->pc = 0x1D50D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50CCu;
        // 0x1d50d0: 0x8e22008c  lw          $v0, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D50D4u;
        goto label_1d50d4;
    }
    ctx->pc = 0x1D50CCu;
    {
        const bool branch_taken_0x1d50cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D50D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50CCu;
        // 0x1d50d0: 0x8e22008c  lw          $v0, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d50cc) {
            ctx->pc = 0x1D5190u;
            goto label_1d5190;
        }
    }
    ctx->pc = 0x1D50D4u;
label_1d50d4:
    // 0x1d50d4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d50d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d50d8:
    // 0x1d50d8: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1d50d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1d50dc:
    // 0x1d50dc: 0x8c438834  lw          $v1, -0x77CC($v0)
    ctx->pc = 0x1d50dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936628)));
label_1d50e0:
    // 0x1d50e0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d50e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1d50e4:
    // 0x1d50e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d50e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d50e8:
    // 0x1d50e8: 0x24a51098  addiu       $a1, $a1, 0x1098
    ctx->pc = 0x1d50e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4248));
label_1d50ec:
    // 0x1d50ec: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1d50ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1d50f0:
    // 0x1d50f0: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x1d50f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_1d50f4:
    // 0x1d50f4: 0xc0c4fc4  jal         func_313F10
label_1d50f8:
    if (ctx->pc == 0x1D50F8u) {
        ctx->pc = 0x1D50F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50F4u;
        // 0x1d50f8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D50FCu;
        goto label_1d50fc;
    }
    ctx->pc = 0x1D50F4u;
    SET_GPR_U32(ctx, 31, 0x1D50FCu);
    ctx->pc = 0x1D50F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D50F4u;
    // 0x1d50f8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1D50F4u, 0x1D50FCu)) {
        return;
    }
    ctx->pc = 0x1D50FCu;
label_1d50fc:
    // 0x1d50fc: 0x8e260088  lw          $a2, 0x88($s1)
    ctx->pc = 0x1d50fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d5100:
    // 0x1d5100: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5104:
    // 0x1d5104: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
label_1d5108:
    if (ctx->pc == 0x1D5108u) {
        ctx->pc = 0x1D5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5104u;
        // 0x1d5108: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D510Cu;
        goto label_1d510c;
    }
    ctx->pc = 0x1D5104u;
    {
        const bool branch_taken_0x1d5104 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x1D5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5104u;
        // 0x1d5108: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5104) {
            ctx->pc = 0x1D5138u;
            goto label_1d5138;
        }
    }
    ctx->pc = 0x1D510Cu;
label_1d510c:
    // 0x1d510c: 0x8e250084  lw          $a1, 0x84($s1)
    ctx->pc = 0x1d510cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1d5110:
    // 0x1d5110: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d5110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d5114:
    // 0x1d5114: 0x0  nop
    ctx->pc = 0x1d5114u;
    // NOP
label_1d5118:
    // 0x1d5118: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d5118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1d511c:
    // 0x1d511c: 0xe6182a  slt         $v1, $a3, $a2
    ctx->pc = 0x1d511cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1d5120:
    // 0x1d5120: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1d5120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_1d5124:
    // 0x1d5124: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x1d5124u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5));
label_1d5128:
    // 0x1d5128: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1d512c:
    if (ctx->pc == 0x1D512Cu) {
        ctx->pc = 0x1D512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5128u;
        // 0x1d512c: 0x24a50098  addiu       $a1, $a1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5130u;
        goto label_1d5130;
    }
    ctx->pc = 0x1D5128u;
    {
        const bool branch_taken_0x1d5128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5128u;
        // 0x1d512c: 0x24a50098  addiu       $a1, $a1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5128) {
            ctx->pc = 0x1D5138u;
            goto label_1d5138;
        }
    }
    ctx->pc = 0x1D5130u;
label_1d5130:
    // 0x1d5130: 0x5080fff9  beql        $a0, $zero, . + 4 + (-0x7 << 2)
label_1d5134:
    if (ctx->pc == 0x1D5134u) {
        ctx->pc = 0x1D5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5130u;
        // 0x1d5134: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5138u;
        goto label_1d5138;
    }
    ctx->pc = 0x1D5130u;
    {
        const bool branch_taken_0x1d5130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5130) {
            ctx->pc = 0x1D5134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5130u;
            // 0x1d5134: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5118;
        }
    }
    ctx->pc = 0x1D5138u;
label_1d5138:
    // 0x1d5138: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1d5138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1d513c:
    // 0x1d513c: 0xc0c4a72  jal         func_3129C8
label_1d5140:
    if (ctx->pc == 0x1D5140u) {
        ctx->pc = 0x1D5140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D513Cu;
        // 0x1d5140: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5144u;
        goto label_1d5144;
    }
    ctx->pc = 0x1D513Cu;
    SET_GPR_U32(ctx, 31, 0x1D5144u);
    ctx->pc = 0x1D5140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D513Cu;
    // 0x1d5140: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x1D513Cu, 0x1D5144u)) {
        return;
    }
    ctx->pc = 0x1D5144u;
label_1d5144:
    // 0x1d5144: 0x8e260088  lw          $a2, 0x88($s1)
    ctx->pc = 0x1d5144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d5148:
    // 0x1d5148: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d514c:
    // 0x1d514c: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
label_1d5150:
    if (ctx->pc == 0x1D5150u) {
        ctx->pc = 0x1D5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D514Cu;
        // 0x1d5150: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5154u;
        goto label_1d5154;
    }
    ctx->pc = 0x1D514Cu;
    {
        const bool branch_taken_0x1d514c = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x1D5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D514Cu;
        // 0x1d5150: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d514c) {
            ctx->pc = 0x1D5180u;
            goto label_1d5180;
        }
    }
    ctx->pc = 0x1D5154u;
label_1d5154:
    // 0x1d5154: 0x8e250084  lw          $a1, 0x84($s1)
    ctx->pc = 0x1d5154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1d5158:
    // 0x1d5158: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d5158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d515c:
    // 0x1d515c: 0x0  nop
    ctx->pc = 0x1d515cu;
    // NOP
label_1d5160:
    // 0x1d5160: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d5160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1d5164:
    // 0x1d5164: 0xe6182a  slt         $v1, $a3, $a2
    ctx->pc = 0x1d5164u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1d5168:
    // 0x1d5168: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1d5168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_1d516c:
    // 0x1d516c: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x1d516cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5));
label_1d5170:
    // 0x1d5170: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1d5174:
    if (ctx->pc == 0x1D5174u) {
        ctx->pc = 0x1D5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5170u;
        // 0x1d5174: 0x24a50098  addiu       $a1, $a1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5178u;
        goto label_1d5178;
    }
    ctx->pc = 0x1D5170u;
    {
        const bool branch_taken_0x1d5170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5170u;
        // 0x1d5174: 0x24a50098  addiu       $a1, $a1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5170) {
            ctx->pc = 0x1D5180u;
            goto label_1d5180;
        }
    }
    ctx->pc = 0x1D5178u;
label_1d5178:
    // 0x1d5178: 0x5080fff9  beql        $a0, $zero, . + 4 + (-0x7 << 2)
label_1d517c:
    if (ctx->pc == 0x1D517Cu) {
        ctx->pc = 0x1D517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5178u;
        // 0x1d517c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5180u;
        goto label_1d5180;
    }
    ctx->pc = 0x1D5178u;
    {
        const bool branch_taken_0x1d5178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5178) {
            ctx->pc = 0x1D517Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5178u;
            // 0x1d517c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5160;
        }
    }
    ctx->pc = 0x1D5180u;
label_1d5180:
    // 0x1d5180: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1d5180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1d5184:
    // 0x1d5184: 0xc0c4a72  jal         func_3129C8
label_1d5188:
    if (ctx->pc == 0x1D5188u) {
        ctx->pc = 0x1D5188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5184u;
        // 0x1d5188: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D518Cu;
        goto label_1d518c;
    }
    ctx->pc = 0x1D5184u;
    SET_GPR_U32(ctx, 31, 0x1D518Cu);
    ctx->pc = 0x1D5188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5184u;
    // 0x1d5188: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x1D5184u, 0x1D518Cu)) {
        return;
    }
    ctx->pc = 0x1D518Cu;
label_1d518c:
    // 0x1d518c: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x1d518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_1d5190:
    // 0x1d5190: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1d5190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d5194:
    // 0x1d5194: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d5194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d5198:
    // 0x1d5198: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1d5198u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1d519c:
    // 0x1d519c: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_1d51a0:
    if (ctx->pc == 0x1D51A0u) {
        ctx->pc = 0x1D51A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D519Cu;
        // 0x1d51a0: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D51A4u;
        goto label_1d51a4;
    }
    ctx->pc = 0x1D519Cu;
    {
        const bool branch_taken_0x1d519c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D51A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D519Cu;
        // 0x1d51a0: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d519c) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D51A4u;
label_1d51a4:
    // 0x1d51a4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d51a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d51a8:
    // 0x1d51a8: 0xc07555e  jal         func_1D5578
label_1d51ac:
    if (ctx->pc == 0x1D51ACu) {
        ctx->pc = 0x1D51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51A8u;
        // 0x1d51ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D51B0u;
        goto label_1d51b0;
    }
    ctx->pc = 0x1D51A8u;
    SET_GPR_U32(ctx, 31, 0x1D51B0u);
    ctx->pc = 0x1D51ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51A8u;
    // 0x1d51ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D51A8u, 0x1D51B0u)) {
        return;
    }
    ctx->pc = 0x1D51B0u;
label_1d51b0:
    // 0x1d51b0: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x1d51b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1d51b4:
    // 0x1d51b4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d51b8:
    if (ctx->pc == 0x1D51B8u) {
        ctx->pc = 0x1D51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51B4u;
        // 0x1d51b8: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D51BCu;
        goto label_1d51bc;
    }
    ctx->pc = 0x1D51B4u;
    {
        const bool branch_taken_0x1d51b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51B4u;
        // 0x1d51b8: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51b4) {
            ctx->pc = 0x1D51C4u;
            goto label_1d51c4;
        }
    }
    ctx->pc = 0x1D51BCu;
label_1d51bc:
    // 0x1d51bc: 0xc07596a  jal         func_1D65A8
label_1d51c0:
    if (ctx->pc == 0x1D51C0u) {
        ctx->pc = 0x1D51C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51BCu;
        // 0x1d51c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D51C4u;
        goto label_1d51c4;
    }
    ctx->pc = 0x1D51BCu;
    SET_GPR_U32(ctx, 31, 0x1D51C4u);
    ctx->pc = 0x1D51C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51BCu;
    // 0x1d51c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D51BCu, 0x1D51C4u)) {
        return;
    }
    ctx->pc = 0x1D51C4u;
label_1d51c4:
    // 0x1d51c4: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x1d51c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1d51c8:
    // 0x1d51c8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_1d51cc:
    if (ctx->pc == 0x1D51CCu) {
        ctx->pc = 0x1D51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51C8u;
        // 0x1d51cc: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D51D0u;
        goto label_1d51d0;
    }
    ctx->pc = 0x1D51C8u;
    {
        const bool branch_taken_0x1d51c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d51c8) {
            ctx->pc = 0x1D51CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D51C8u;
            // 0x1d51cc: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D51DCu;
            goto label_1d51dc;
        }
    }
    ctx->pc = 0x1D51D0u;
label_1d51d0:
    // 0x1d51d0: 0xc07596e  jal         func_1D65B8
label_1d51d4:
    if (ctx->pc == 0x1D51D4u) {
        ctx->pc = 0x1D51D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51D0u;
        // 0x1d51d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D51D8u;
        goto label_1d51d8;
    }
    ctx->pc = 0x1D51D0u;
    SET_GPR_U32(ctx, 31, 0x1D51D8u);
    ctx->pc = 0x1D51D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51D0u;
    // 0x1d51d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D51D0u, 0x1D51D8u)) {
        return;
    }
    ctx->pc = 0x1D51D8u;
label_1d51d8:
    // 0x1d51d8: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d51d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d51dc:
    // 0x1d51dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d51dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d51e0:
    // 0x1d51e0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_1d51e4:
    if (ctx->pc == 0x1D51E4u) {
        ctx->pc = 0x1D51E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51E0u;
        // 0x1d51e4: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D51E8u;
        goto label_1d51e8;
    }
    ctx->pc = 0x1D51E0u;
    {
        const bool branch_taken_0x1d51e0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D51E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51E0u;
        // 0x1d51e4: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51e0) {
            ctx->pc = 0x1D5210u;
            goto label_1d5210;
        }
    }
    ctx->pc = 0x1D51E8u;
label_1d51e8:
    // 0x1d51e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d51e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d51ec:
    // 0x1d51ec: 0x0  nop
    ctx->pc = 0x1d51ecu;
    // NOP
label_1d51f0:
    // 0x1d51f0: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1d51f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1d51f4:
    // 0x1d51f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d51f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d51f8:
    // 0x1d51f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d51f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d51fc:
    // 0x1d51fc: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x1d51fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
label_1d5200:
    // 0x1d5200: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1d5200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1d5204:
    // 0x1d5204: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d5204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d5208:
    // 0x1d5208: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d520c:
    if (ctx->pc == 0x1D520Cu) {
        ctx->pc = 0x1D520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5208u;
        // 0x1d520c: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5210u;
        goto label_1d5210;
    }
    ctx->pc = 0x1D5208u;
    {
        const bool branch_taken_0x1d5208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5208u;
        // 0x1d520c: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5208) {
            ctx->pc = 0x1D51F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d51f0;
        }
    }
    ctx->pc = 0x1D5210u;
label_1d5210:
    // 0x1d5210: 0x1000000e  b           . + 4 + (0xE << 2)
label_1d5214:
    if (ctx->pc == 0x1D5214u) {
        ctx->pc = 0x1D5214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5210u;
        // 0x1d5214: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5218u;
        goto label_1d5218;
    }
    ctx->pc = 0x1D5210u;
    {
        const bool branch_taken_0x1d5210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5210u;
        // 0x1d5214: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5210) {
            ctx->pc = 0x1D524Cu;
            goto label_1d524c;
        }
    }
    ctx->pc = 0x1D5218u;
label_1d5218:
    // 0x1d5218: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d5218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d521c:
    // 0x1d521c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1d521cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_1d5220:
    // 0x1d5220: 0x8c448800  lw          $a0, -0x7800($v0)
    ctx->pc = 0x1d5220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936576)));
label_1d5224:
    // 0x1d5224: 0xc0bc6e6  jal         func_2F1B98
label_1d5228:
    if (ctx->pc == 0x1D5228u) {
        ctx->pc = 0x1D5228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5224u;
        // 0x1d5228: 0x24a58808  addiu       $a1, $a1, -0x77F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D522Cu;
        goto label_1d522c;
    }
    ctx->pc = 0x1D5224u;
    SET_GPR_U32(ctx, 31, 0x1D522Cu);
    ctx->pc = 0x1D5228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5224u;
    // 0x1d5228: 0x24a58808  addiu       $a1, $a1, -0x77F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1B98u, 0x1D5224u, 0x1D522Cu)) {
        return;
    }
    ctx->pc = 0x1D522Cu;
label_1d522c:
    // 0x1d522c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d522cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5230:
    // 0x1d5230: 0x34039003  ori         $v1, $zero, 0x9003
    ctx->pc = 0x1d5230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36867);
label_1d5234:
    // 0x1d5234: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1d5234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_1d5238:
    // 0x1d5238: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_1d523c:
    if (ctx->pc == 0x1D523Cu) {
        ctx->pc = 0x1D523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5238u;
        // 0x1d523c: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5240u;
        goto label_1d5240;
    }
    ctx->pc = 0x1D5238u;
    {
        const bool branch_taken_0x1d5238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d5238) {
            ctx->pc = 0x1D523Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5238u;
            // 0x1d523c: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D5240u;
label_1d5240:
    // 0x1d5240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d5244:
    // 0x1d5244: 0xc0754a0  jal         func_1D5280
label_1d5248:
    if (ctx->pc == 0x1D5248u) {
        ctx->pc = 0x1D5248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5244u;
        // 0x1d5248: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D524Cu;
        goto label_1d524c;
    }
    ctx->pc = 0x1D5244u;
    SET_GPR_U32(ctx, 31, 0x1D524Cu);
    ctx->pc = 0x1D5248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5244u;
    // 0x1d5248: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5280u, 0x1D5244u, 0x1D524Cu)) {
        return;
    }
    ctx->pc = 0x1D524Cu;
label_1d524c:
    // 0x1d524c: 0x7bb004b0  lq          $s0, 0x4B0($sp)
    ctx->pc = 0x1d524cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_1d5250:
    // 0x1d5250: 0x7bb104a0  lq          $s1, 0x4A0($sp)
    ctx->pc = 0x1d5250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_1d5254:
    // 0x1d5254: 0x7bb20490  lq          $s2, 0x490($sp)
    ctx->pc = 0x1d5254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_1d5258:
    // 0x1d5258: 0x7bb30480  lq          $s3, 0x480($sp)
    ctx->pc = 0x1d5258u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_1d525c:
    // 0x1d525c: 0x7bb40470  lq          $s4, 0x470($sp)
    ctx->pc = 0x1d525cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_1d5260:
    // 0x1d5260: 0x7bb50460  lq          $s5, 0x460($sp)
    ctx->pc = 0x1d5260u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_1d5264:
    // 0x1d5264: 0x7bb60450  lq          $s6, 0x450($sp)
    ctx->pc = 0x1d5264u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_1d5268:
    // 0x1d5268: 0x7bb70440  lq          $s7, 0x440($sp)
    ctx->pc = 0x1d5268u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_1d526c:
    // 0x1d526c: 0x7bbe0430  lq          $fp, 0x430($sp)
    ctx->pc = 0x1d526cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_1d5270:
    // 0x1d5270: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x1d5270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_1d5274:
    // 0x1d5274: 0x3e00008  jr          $ra
label_1d5278:
    if (ctx->pc == 0x1D5278u) {
        ctx->pc = 0x1D5278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5274u;
        // 0x1d5278: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D527Cu;
        goto label_1d527c;
    }
    ctx->pc = 0x1D5274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5274u;
        // 0x1d5278: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D527Cu;
label_1d527c:
    // 0x1d527c: 0x0  nop
    ctx->pc = 0x1d527cu;
    // NOP
    ctx->pc = 0x1d5280u;
}
