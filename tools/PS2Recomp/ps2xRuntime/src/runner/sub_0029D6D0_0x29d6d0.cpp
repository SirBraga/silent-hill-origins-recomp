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

// Function: sub_0029D6D0
// Address: 0x29d6d0 - 0x29e448
void sub_0029D6D0_0x29d6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D6D0_0x29d6d0");
#endif

    switch (ctx->pc) {
        case 0x29d6d0u: goto label_29d6d0;
        case 0x29d6d4u: goto label_29d6d4;
        case 0x29d6d8u: goto label_29d6d8;
        case 0x29d6dcu: goto label_29d6dc;
        case 0x29d6e0u: goto label_29d6e0;
        case 0x29d6e4u: goto label_29d6e4;
        case 0x29d6e8u: goto label_29d6e8;
        case 0x29d6ecu: goto label_29d6ec;
        case 0x29d6f0u: goto label_29d6f0;
        case 0x29d6f4u: goto label_29d6f4;
        case 0x29d6f8u: goto label_29d6f8;
        case 0x29d6fcu: goto label_29d6fc;
        case 0x29d700u: goto label_29d700;
        case 0x29d704u: goto label_29d704;
        case 0x29d708u: goto label_29d708;
        case 0x29d70cu: goto label_29d70c;
        case 0x29d710u: goto label_29d710;
        case 0x29d714u: goto label_29d714;
        case 0x29d718u: goto label_29d718;
        case 0x29d71cu: goto label_29d71c;
        case 0x29d720u: goto label_29d720;
        case 0x29d724u: goto label_29d724;
        case 0x29d728u: goto label_29d728;
        case 0x29d72cu: goto label_29d72c;
        case 0x29d730u: goto label_29d730;
        case 0x29d734u: goto label_29d734;
        case 0x29d738u: goto label_29d738;
        case 0x29d73cu: goto label_29d73c;
        case 0x29d740u: goto label_29d740;
        case 0x29d744u: goto label_29d744;
        case 0x29d748u: goto label_29d748;
        case 0x29d74cu: goto label_29d74c;
        case 0x29d750u: goto label_29d750;
        case 0x29d754u: goto label_29d754;
        case 0x29d758u: goto label_29d758;
        case 0x29d75cu: goto label_29d75c;
        case 0x29d760u: goto label_29d760;
        case 0x29d764u: goto label_29d764;
        case 0x29d768u: goto label_29d768;
        case 0x29d76cu: goto label_29d76c;
        case 0x29d770u: goto label_29d770;
        case 0x29d774u: goto label_29d774;
        case 0x29d778u: goto label_29d778;
        case 0x29d77cu: goto label_29d77c;
        case 0x29d780u: goto label_29d780;
        case 0x29d784u: goto label_29d784;
        case 0x29d788u: goto label_29d788;
        case 0x29d78cu: goto label_29d78c;
        case 0x29d790u: goto label_29d790;
        case 0x29d794u: goto label_29d794;
        case 0x29d798u: goto label_29d798;
        case 0x29d79cu: goto label_29d79c;
        case 0x29d7a0u: goto label_29d7a0;
        case 0x29d7a4u: goto label_29d7a4;
        case 0x29d7a8u: goto label_29d7a8;
        case 0x29d7acu: goto label_29d7ac;
        case 0x29d7b0u: goto label_29d7b0;
        case 0x29d7b4u: goto label_29d7b4;
        case 0x29d7b8u: goto label_29d7b8;
        case 0x29d7bcu: goto label_29d7bc;
        case 0x29d7c0u: goto label_29d7c0;
        case 0x29d7c4u: goto label_29d7c4;
        case 0x29d7c8u: goto label_29d7c8;
        case 0x29d7ccu: goto label_29d7cc;
        case 0x29d7d0u: goto label_29d7d0;
        case 0x29d7d4u: goto label_29d7d4;
        case 0x29d7d8u: goto label_29d7d8;
        case 0x29d7dcu: goto label_29d7dc;
        case 0x29d7e0u: goto label_29d7e0;
        case 0x29d7e4u: goto label_29d7e4;
        case 0x29d7e8u: goto label_29d7e8;
        case 0x29d7ecu: goto label_29d7ec;
        case 0x29d7f0u: goto label_29d7f0;
        case 0x29d7f4u: goto label_29d7f4;
        case 0x29d7f8u: goto label_29d7f8;
        case 0x29d7fcu: goto label_29d7fc;
        case 0x29d800u: goto label_29d800;
        case 0x29d804u: goto label_29d804;
        case 0x29d808u: goto label_29d808;
        case 0x29d80cu: goto label_29d80c;
        case 0x29d810u: goto label_29d810;
        case 0x29d814u: goto label_29d814;
        case 0x29d818u: goto label_29d818;
        case 0x29d81cu: goto label_29d81c;
        case 0x29d820u: goto label_29d820;
        case 0x29d824u: goto label_29d824;
        case 0x29d828u: goto label_29d828;
        case 0x29d82cu: goto label_29d82c;
        case 0x29d830u: goto label_29d830;
        case 0x29d834u: goto label_29d834;
        case 0x29d838u: goto label_29d838;
        case 0x29d83cu: goto label_29d83c;
        case 0x29d840u: goto label_29d840;
        case 0x29d844u: goto label_29d844;
        case 0x29d848u: goto label_29d848;
        case 0x29d84cu: goto label_29d84c;
        case 0x29d850u: goto label_29d850;
        case 0x29d854u: goto label_29d854;
        case 0x29d858u: goto label_29d858;
        case 0x29d85cu: goto label_29d85c;
        case 0x29d860u: goto label_29d860;
        case 0x29d864u: goto label_29d864;
        case 0x29d868u: goto label_29d868;
        case 0x29d86cu: goto label_29d86c;
        case 0x29d870u: goto label_29d870;
        case 0x29d874u: goto label_29d874;
        case 0x29d878u: goto label_29d878;
        case 0x29d87cu: goto label_29d87c;
        case 0x29d880u: goto label_29d880;
        case 0x29d884u: goto label_29d884;
        case 0x29d888u: goto label_29d888;
        case 0x29d88cu: goto label_29d88c;
        case 0x29d890u: goto label_29d890;
        case 0x29d894u: goto label_29d894;
        case 0x29d898u: goto label_29d898;
        case 0x29d89cu: goto label_29d89c;
        case 0x29d8a0u: goto label_29d8a0;
        case 0x29d8a4u: goto label_29d8a4;
        case 0x29d8a8u: goto label_29d8a8;
        case 0x29d8acu: goto label_29d8ac;
        case 0x29d8b0u: goto label_29d8b0;
        case 0x29d8b4u: goto label_29d8b4;
        case 0x29d8b8u: goto label_29d8b8;
        case 0x29d8bcu: goto label_29d8bc;
        case 0x29d8c0u: goto label_29d8c0;
        case 0x29d8c4u: goto label_29d8c4;
        case 0x29d8c8u: goto label_29d8c8;
        case 0x29d8ccu: goto label_29d8cc;
        case 0x29d8d0u: goto label_29d8d0;
        case 0x29d8d4u: goto label_29d8d4;
        case 0x29d8d8u: goto label_29d8d8;
        case 0x29d8dcu: goto label_29d8dc;
        case 0x29d8e0u: goto label_29d8e0;
        case 0x29d8e4u: goto label_29d8e4;
        case 0x29d8e8u: goto label_29d8e8;
        case 0x29d8ecu: goto label_29d8ec;
        case 0x29d8f0u: goto label_29d8f0;
        case 0x29d8f4u: goto label_29d8f4;
        case 0x29d8f8u: goto label_29d8f8;
        case 0x29d8fcu: goto label_29d8fc;
        case 0x29d900u: goto label_29d900;
        case 0x29d904u: goto label_29d904;
        case 0x29d908u: goto label_29d908;
        case 0x29d90cu: goto label_29d90c;
        case 0x29d910u: goto label_29d910;
        case 0x29d914u: goto label_29d914;
        case 0x29d918u: goto label_29d918;
        case 0x29d91cu: goto label_29d91c;
        case 0x29d920u: goto label_29d920;
        case 0x29d924u: goto label_29d924;
        case 0x29d928u: goto label_29d928;
        case 0x29d92cu: goto label_29d92c;
        case 0x29d930u: goto label_29d930;
        case 0x29d934u: goto label_29d934;
        case 0x29d938u: goto label_29d938;
        case 0x29d93cu: goto label_29d93c;
        case 0x29d940u: goto label_29d940;
        case 0x29d944u: goto label_29d944;
        case 0x29d948u: goto label_29d948;
        case 0x29d94cu: goto label_29d94c;
        case 0x29d950u: goto label_29d950;
        case 0x29d954u: goto label_29d954;
        case 0x29d958u: goto label_29d958;
        case 0x29d95cu: goto label_29d95c;
        case 0x29d960u: goto label_29d960;
        case 0x29d964u: goto label_29d964;
        case 0x29d968u: goto label_29d968;
        case 0x29d96cu: goto label_29d96c;
        case 0x29d970u: goto label_29d970;
        case 0x29d974u: goto label_29d974;
        case 0x29d978u: goto label_29d978;
        case 0x29d97cu: goto label_29d97c;
        case 0x29d980u: goto label_29d980;
        case 0x29d984u: goto label_29d984;
        case 0x29d988u: goto label_29d988;
        case 0x29d98cu: goto label_29d98c;
        case 0x29d990u: goto label_29d990;
        case 0x29d994u: goto label_29d994;
        case 0x29d998u: goto label_29d998;
        case 0x29d99cu: goto label_29d99c;
        case 0x29d9a0u: goto label_29d9a0;
        case 0x29d9a4u: goto label_29d9a4;
        case 0x29d9a8u: goto label_29d9a8;
        case 0x29d9acu: goto label_29d9ac;
        case 0x29d9b0u: goto label_29d9b0;
        case 0x29d9b4u: goto label_29d9b4;
        case 0x29d9b8u: goto label_29d9b8;
        case 0x29d9bcu: goto label_29d9bc;
        case 0x29d9c0u: goto label_29d9c0;
        case 0x29d9c4u: goto label_29d9c4;
        case 0x29d9c8u: goto label_29d9c8;
        case 0x29d9ccu: goto label_29d9cc;
        case 0x29d9d0u: goto label_29d9d0;
        case 0x29d9d4u: goto label_29d9d4;
        case 0x29d9d8u: goto label_29d9d8;
        case 0x29d9dcu: goto label_29d9dc;
        case 0x29d9e0u: goto label_29d9e0;
        case 0x29d9e4u: goto label_29d9e4;
        case 0x29d9e8u: goto label_29d9e8;
        case 0x29d9ecu: goto label_29d9ec;
        case 0x29d9f0u: goto label_29d9f0;
        case 0x29d9f4u: goto label_29d9f4;
        case 0x29d9f8u: goto label_29d9f8;
        case 0x29d9fcu: goto label_29d9fc;
        case 0x29da00u: goto label_29da00;
        case 0x29da04u: goto label_29da04;
        case 0x29da08u: goto label_29da08;
        case 0x29da0cu: goto label_29da0c;
        case 0x29da10u: goto label_29da10;
        case 0x29da14u: goto label_29da14;
        case 0x29da18u: goto label_29da18;
        case 0x29da1cu: goto label_29da1c;
        case 0x29da20u: goto label_29da20;
        case 0x29da24u: goto label_29da24;
        case 0x29da28u: goto label_29da28;
        case 0x29da2cu: goto label_29da2c;
        case 0x29da30u: goto label_29da30;
        case 0x29da34u: goto label_29da34;
        case 0x29da38u: goto label_29da38;
        case 0x29da3cu: goto label_29da3c;
        case 0x29da40u: goto label_29da40;
        case 0x29da44u: goto label_29da44;
        case 0x29da48u: goto label_29da48;
        case 0x29da4cu: goto label_29da4c;
        case 0x29da50u: goto label_29da50;
        case 0x29da54u: goto label_29da54;
        case 0x29da58u: goto label_29da58;
        case 0x29da5cu: goto label_29da5c;
        case 0x29da60u: goto label_29da60;
        case 0x29da64u: goto label_29da64;
        case 0x29da68u: goto label_29da68;
        case 0x29da6cu: goto label_29da6c;
        case 0x29da70u: goto label_29da70;
        case 0x29da74u: goto label_29da74;
        case 0x29da78u: goto label_29da78;
        case 0x29da7cu: goto label_29da7c;
        case 0x29da80u: goto label_29da80;
        case 0x29da84u: goto label_29da84;
        case 0x29da88u: goto label_29da88;
        case 0x29da8cu: goto label_29da8c;
        case 0x29da90u: goto label_29da90;
        case 0x29da94u: goto label_29da94;
        case 0x29da98u: goto label_29da98;
        case 0x29da9cu: goto label_29da9c;
        case 0x29daa0u: goto label_29daa0;
        case 0x29daa4u: goto label_29daa4;
        case 0x29daa8u: goto label_29daa8;
        case 0x29daacu: goto label_29daac;
        case 0x29dab0u: goto label_29dab0;
        case 0x29dab4u: goto label_29dab4;
        case 0x29dab8u: goto label_29dab8;
        case 0x29dabcu: goto label_29dabc;
        case 0x29dac0u: goto label_29dac0;
        case 0x29dac4u: goto label_29dac4;
        case 0x29dac8u: goto label_29dac8;
        case 0x29daccu: goto label_29dacc;
        case 0x29dad0u: goto label_29dad0;
        case 0x29dad4u: goto label_29dad4;
        case 0x29dad8u: goto label_29dad8;
        case 0x29dadcu: goto label_29dadc;
        case 0x29dae0u: goto label_29dae0;
        case 0x29dae4u: goto label_29dae4;
        case 0x29dae8u: goto label_29dae8;
        case 0x29daecu: goto label_29daec;
        case 0x29daf0u: goto label_29daf0;
        case 0x29daf4u: goto label_29daf4;
        case 0x29daf8u: goto label_29daf8;
        case 0x29dafcu: goto label_29dafc;
        case 0x29db00u: goto label_29db00;
        case 0x29db04u: goto label_29db04;
        case 0x29db08u: goto label_29db08;
        case 0x29db0cu: goto label_29db0c;
        case 0x29db10u: goto label_29db10;
        case 0x29db14u: goto label_29db14;
        case 0x29db18u: goto label_29db18;
        case 0x29db1cu: goto label_29db1c;
        case 0x29db20u: goto label_29db20;
        case 0x29db24u: goto label_29db24;
        case 0x29db28u: goto label_29db28;
        case 0x29db2cu: goto label_29db2c;
        case 0x29db30u: goto label_29db30;
        case 0x29db34u: goto label_29db34;
        case 0x29db38u: goto label_29db38;
        case 0x29db3cu: goto label_29db3c;
        case 0x29db40u: goto label_29db40;
        case 0x29db44u: goto label_29db44;
        case 0x29db48u: goto label_29db48;
        case 0x29db4cu: goto label_29db4c;
        case 0x29db50u: goto label_29db50;
        case 0x29db54u: goto label_29db54;
        case 0x29db58u: goto label_29db58;
        case 0x29db5cu: goto label_29db5c;
        case 0x29db60u: goto label_29db60;
        case 0x29db64u: goto label_29db64;
        case 0x29db68u: goto label_29db68;
        case 0x29db6cu: goto label_29db6c;
        case 0x29db70u: goto label_29db70;
        case 0x29db74u: goto label_29db74;
        case 0x29db78u: goto label_29db78;
        case 0x29db7cu: goto label_29db7c;
        case 0x29db80u: goto label_29db80;
        case 0x29db84u: goto label_29db84;
        case 0x29db88u: goto label_29db88;
        case 0x29db8cu: goto label_29db8c;
        case 0x29db90u: goto label_29db90;
        case 0x29db94u: goto label_29db94;
        case 0x29db98u: goto label_29db98;
        case 0x29db9cu: goto label_29db9c;
        case 0x29dba0u: goto label_29dba0;
        case 0x29dba4u: goto label_29dba4;
        case 0x29dba8u: goto label_29dba8;
        case 0x29dbacu: goto label_29dbac;
        case 0x29dbb0u: goto label_29dbb0;
        case 0x29dbb4u: goto label_29dbb4;
        case 0x29dbb8u: goto label_29dbb8;
        case 0x29dbbcu: goto label_29dbbc;
        case 0x29dbc0u: goto label_29dbc0;
        case 0x29dbc4u: goto label_29dbc4;
        case 0x29dbc8u: goto label_29dbc8;
        case 0x29dbccu: goto label_29dbcc;
        case 0x29dbd0u: goto label_29dbd0;
        case 0x29dbd4u: goto label_29dbd4;
        case 0x29dbd8u: goto label_29dbd8;
        case 0x29dbdcu: goto label_29dbdc;
        case 0x29dbe0u: goto label_29dbe0;
        case 0x29dbe4u: goto label_29dbe4;
        case 0x29dbe8u: goto label_29dbe8;
        case 0x29dbecu: goto label_29dbec;
        case 0x29dbf0u: goto label_29dbf0;
        case 0x29dbf4u: goto label_29dbf4;
        case 0x29dbf8u: goto label_29dbf8;
        case 0x29dbfcu: goto label_29dbfc;
        case 0x29dc00u: goto label_29dc00;
        case 0x29dc04u: goto label_29dc04;
        case 0x29dc08u: goto label_29dc08;
        case 0x29dc0cu: goto label_29dc0c;
        case 0x29dc10u: goto label_29dc10;
        case 0x29dc14u: goto label_29dc14;
        case 0x29dc18u: goto label_29dc18;
        case 0x29dc1cu: goto label_29dc1c;
        case 0x29dc20u: goto label_29dc20;
        case 0x29dc24u: goto label_29dc24;
        case 0x29dc28u: goto label_29dc28;
        case 0x29dc2cu: goto label_29dc2c;
        case 0x29dc30u: goto label_29dc30;
        case 0x29dc34u: goto label_29dc34;
        case 0x29dc38u: goto label_29dc38;
        case 0x29dc3cu: goto label_29dc3c;
        case 0x29dc40u: goto label_29dc40;
        case 0x29dc44u: goto label_29dc44;
        case 0x29dc48u: goto label_29dc48;
        case 0x29dc4cu: goto label_29dc4c;
        case 0x29dc50u: goto label_29dc50;
        case 0x29dc54u: goto label_29dc54;
        case 0x29dc58u: goto label_29dc58;
        case 0x29dc5cu: goto label_29dc5c;
        case 0x29dc60u: goto label_29dc60;
        case 0x29dc64u: goto label_29dc64;
        case 0x29dc68u: goto label_29dc68;
        case 0x29dc6cu: goto label_29dc6c;
        case 0x29dc70u: goto label_29dc70;
        case 0x29dc74u: goto label_29dc74;
        case 0x29dc78u: goto label_29dc78;
        case 0x29dc7cu: goto label_29dc7c;
        case 0x29dc80u: goto label_29dc80;
        case 0x29dc84u: goto label_29dc84;
        case 0x29dc88u: goto label_29dc88;
        case 0x29dc8cu: goto label_29dc8c;
        case 0x29dc90u: goto label_29dc90;
        case 0x29dc94u: goto label_29dc94;
        case 0x29dc98u: goto label_29dc98;
        case 0x29dc9cu: goto label_29dc9c;
        case 0x29dca0u: goto label_29dca0;
        case 0x29dca4u: goto label_29dca4;
        case 0x29dca8u: goto label_29dca8;
        case 0x29dcacu: goto label_29dcac;
        case 0x29dcb0u: goto label_29dcb0;
        case 0x29dcb4u: goto label_29dcb4;
        case 0x29dcb8u: goto label_29dcb8;
        case 0x29dcbcu: goto label_29dcbc;
        case 0x29dcc0u: goto label_29dcc0;
        case 0x29dcc4u: goto label_29dcc4;
        case 0x29dcc8u: goto label_29dcc8;
        case 0x29dcccu: goto label_29dccc;
        case 0x29dcd0u: goto label_29dcd0;
        case 0x29dcd4u: goto label_29dcd4;
        case 0x29dcd8u: goto label_29dcd8;
        case 0x29dcdcu: goto label_29dcdc;
        case 0x29dce0u: goto label_29dce0;
        case 0x29dce4u: goto label_29dce4;
        case 0x29dce8u: goto label_29dce8;
        case 0x29dcecu: goto label_29dcec;
        case 0x29dcf0u: goto label_29dcf0;
        case 0x29dcf4u: goto label_29dcf4;
        case 0x29dcf8u: goto label_29dcf8;
        case 0x29dcfcu: goto label_29dcfc;
        case 0x29dd00u: goto label_29dd00;
        case 0x29dd04u: goto label_29dd04;
        case 0x29dd08u: goto label_29dd08;
        case 0x29dd0cu: goto label_29dd0c;
        case 0x29dd10u: goto label_29dd10;
        case 0x29dd14u: goto label_29dd14;
        case 0x29dd18u: goto label_29dd18;
        case 0x29dd1cu: goto label_29dd1c;
        case 0x29dd20u: goto label_29dd20;
        case 0x29dd24u: goto label_29dd24;
        case 0x29dd28u: goto label_29dd28;
        case 0x29dd2cu: goto label_29dd2c;
        case 0x29dd30u: goto label_29dd30;
        case 0x29dd34u: goto label_29dd34;
        case 0x29dd38u: goto label_29dd38;
        case 0x29dd3cu: goto label_29dd3c;
        case 0x29dd40u: goto label_29dd40;
        case 0x29dd44u: goto label_29dd44;
        case 0x29dd48u: goto label_29dd48;
        case 0x29dd4cu: goto label_29dd4c;
        case 0x29dd50u: goto label_29dd50;
        case 0x29dd54u: goto label_29dd54;
        case 0x29dd58u: goto label_29dd58;
        case 0x29dd5cu: goto label_29dd5c;
        case 0x29dd60u: goto label_29dd60;
        case 0x29dd64u: goto label_29dd64;
        case 0x29dd68u: goto label_29dd68;
        case 0x29dd6cu: goto label_29dd6c;
        case 0x29dd70u: goto label_29dd70;
        case 0x29dd74u: goto label_29dd74;
        case 0x29dd78u: goto label_29dd78;
        case 0x29dd7cu: goto label_29dd7c;
        case 0x29dd80u: goto label_29dd80;
        case 0x29dd84u: goto label_29dd84;
        case 0x29dd88u: goto label_29dd88;
        case 0x29dd8cu: goto label_29dd8c;
        case 0x29dd90u: goto label_29dd90;
        case 0x29dd94u: goto label_29dd94;
        case 0x29dd98u: goto label_29dd98;
        case 0x29dd9cu: goto label_29dd9c;
        case 0x29dda0u: goto label_29dda0;
        case 0x29dda4u: goto label_29dda4;
        case 0x29dda8u: goto label_29dda8;
        case 0x29ddacu: goto label_29ddac;
        case 0x29ddb0u: goto label_29ddb0;
        case 0x29ddb4u: goto label_29ddb4;
        case 0x29ddb8u: goto label_29ddb8;
        case 0x29ddbcu: goto label_29ddbc;
        case 0x29ddc0u: goto label_29ddc0;
        case 0x29ddc4u: goto label_29ddc4;
        case 0x29ddc8u: goto label_29ddc8;
        case 0x29ddccu: goto label_29ddcc;
        case 0x29ddd0u: goto label_29ddd0;
        case 0x29ddd4u: goto label_29ddd4;
        case 0x29ddd8u: goto label_29ddd8;
        case 0x29dddcu: goto label_29dddc;
        case 0x29dde0u: goto label_29dde0;
        case 0x29dde4u: goto label_29dde4;
        case 0x29dde8u: goto label_29dde8;
        case 0x29ddecu: goto label_29ddec;
        case 0x29ddf0u: goto label_29ddf0;
        case 0x29ddf4u: goto label_29ddf4;
        case 0x29ddf8u: goto label_29ddf8;
        case 0x29ddfcu: goto label_29ddfc;
        case 0x29de00u: goto label_29de00;
        case 0x29de04u: goto label_29de04;
        case 0x29de08u: goto label_29de08;
        case 0x29de0cu: goto label_29de0c;
        case 0x29de10u: goto label_29de10;
        case 0x29de14u: goto label_29de14;
        case 0x29de18u: goto label_29de18;
        case 0x29de1cu: goto label_29de1c;
        case 0x29de20u: goto label_29de20;
        case 0x29de24u: goto label_29de24;
        case 0x29de28u: goto label_29de28;
        case 0x29de2cu: goto label_29de2c;
        case 0x29de30u: goto label_29de30;
        case 0x29de34u: goto label_29de34;
        case 0x29de38u: goto label_29de38;
        case 0x29de3cu: goto label_29de3c;
        case 0x29de40u: goto label_29de40;
        case 0x29de44u: goto label_29de44;
        case 0x29de48u: goto label_29de48;
        case 0x29de4cu: goto label_29de4c;
        case 0x29de50u: goto label_29de50;
        case 0x29de54u: goto label_29de54;
        case 0x29de58u: goto label_29de58;
        case 0x29de5cu: goto label_29de5c;
        case 0x29de60u: goto label_29de60;
        case 0x29de64u: goto label_29de64;
        case 0x29de68u: goto label_29de68;
        case 0x29de6cu: goto label_29de6c;
        case 0x29de70u: goto label_29de70;
        case 0x29de74u: goto label_29de74;
        case 0x29de78u: goto label_29de78;
        case 0x29de7cu: goto label_29de7c;
        case 0x29de80u: goto label_29de80;
        case 0x29de84u: goto label_29de84;
        case 0x29de88u: goto label_29de88;
        case 0x29de8cu: goto label_29de8c;
        case 0x29de90u: goto label_29de90;
        case 0x29de94u: goto label_29de94;
        case 0x29de98u: goto label_29de98;
        case 0x29de9cu: goto label_29de9c;
        case 0x29dea0u: goto label_29dea0;
        case 0x29dea4u: goto label_29dea4;
        case 0x29dea8u: goto label_29dea8;
        case 0x29deacu: goto label_29deac;
        case 0x29deb0u: goto label_29deb0;
        case 0x29deb4u: goto label_29deb4;
        case 0x29deb8u: goto label_29deb8;
        case 0x29debcu: goto label_29debc;
        case 0x29dec0u: goto label_29dec0;
        case 0x29dec4u: goto label_29dec4;
        case 0x29dec8u: goto label_29dec8;
        case 0x29deccu: goto label_29decc;
        case 0x29ded0u: goto label_29ded0;
        case 0x29ded4u: goto label_29ded4;
        case 0x29ded8u: goto label_29ded8;
        case 0x29dedcu: goto label_29dedc;
        case 0x29dee0u: goto label_29dee0;
        case 0x29dee4u: goto label_29dee4;
        case 0x29dee8u: goto label_29dee8;
        case 0x29deecu: goto label_29deec;
        case 0x29def0u: goto label_29def0;
        case 0x29def4u: goto label_29def4;
        case 0x29def8u: goto label_29def8;
        case 0x29defcu: goto label_29defc;
        case 0x29df00u: goto label_29df00;
        case 0x29df04u: goto label_29df04;
        case 0x29df08u: goto label_29df08;
        case 0x29df0cu: goto label_29df0c;
        case 0x29df10u: goto label_29df10;
        case 0x29df14u: goto label_29df14;
        case 0x29df18u: goto label_29df18;
        case 0x29df1cu: goto label_29df1c;
        case 0x29df20u: goto label_29df20;
        case 0x29df24u: goto label_29df24;
        case 0x29df28u: goto label_29df28;
        case 0x29df2cu: goto label_29df2c;
        case 0x29df30u: goto label_29df30;
        case 0x29df34u: goto label_29df34;
        case 0x29df38u: goto label_29df38;
        case 0x29df3cu: goto label_29df3c;
        case 0x29df40u: goto label_29df40;
        case 0x29df44u: goto label_29df44;
        case 0x29df48u: goto label_29df48;
        case 0x29df4cu: goto label_29df4c;
        case 0x29df50u: goto label_29df50;
        case 0x29df54u: goto label_29df54;
        case 0x29df58u: goto label_29df58;
        case 0x29df5cu: goto label_29df5c;
        case 0x29df60u: goto label_29df60;
        case 0x29df64u: goto label_29df64;
        case 0x29df68u: goto label_29df68;
        case 0x29df6cu: goto label_29df6c;
        case 0x29df70u: goto label_29df70;
        case 0x29df74u: goto label_29df74;
        case 0x29df78u: goto label_29df78;
        case 0x29df7cu: goto label_29df7c;
        case 0x29df80u: goto label_29df80;
        case 0x29df84u: goto label_29df84;
        case 0x29df88u: goto label_29df88;
        case 0x29df8cu: goto label_29df8c;
        case 0x29df90u: goto label_29df90;
        case 0x29df94u: goto label_29df94;
        case 0x29df98u: goto label_29df98;
        case 0x29df9cu: goto label_29df9c;
        case 0x29dfa0u: goto label_29dfa0;
        case 0x29dfa4u: goto label_29dfa4;
        case 0x29dfa8u: goto label_29dfa8;
        case 0x29dfacu: goto label_29dfac;
        case 0x29dfb0u: goto label_29dfb0;
        case 0x29dfb4u: goto label_29dfb4;
        case 0x29dfb8u: goto label_29dfb8;
        case 0x29dfbcu: goto label_29dfbc;
        case 0x29dfc0u: goto label_29dfc0;
        case 0x29dfc4u: goto label_29dfc4;
        case 0x29dfc8u: goto label_29dfc8;
        case 0x29dfccu: goto label_29dfcc;
        case 0x29dfd0u: goto label_29dfd0;
        case 0x29dfd4u: goto label_29dfd4;
        case 0x29dfd8u: goto label_29dfd8;
        case 0x29dfdcu: goto label_29dfdc;
        case 0x29dfe0u: goto label_29dfe0;
        case 0x29dfe4u: goto label_29dfe4;
        case 0x29dfe8u: goto label_29dfe8;
        case 0x29dfecu: goto label_29dfec;
        case 0x29dff0u: goto label_29dff0;
        case 0x29dff4u: goto label_29dff4;
        case 0x29dff8u: goto label_29dff8;
        case 0x29dffcu: goto label_29dffc;
        case 0x29e000u: goto label_29e000;
        case 0x29e004u: goto label_29e004;
        case 0x29e008u: goto label_29e008;
        case 0x29e00cu: goto label_29e00c;
        case 0x29e010u: goto label_29e010;
        case 0x29e014u: goto label_29e014;
        case 0x29e018u: goto label_29e018;
        case 0x29e01cu: goto label_29e01c;
        case 0x29e020u: goto label_29e020;
        case 0x29e024u: goto label_29e024;
        case 0x29e028u: goto label_29e028;
        case 0x29e02cu: goto label_29e02c;
        case 0x29e030u: goto label_29e030;
        case 0x29e034u: goto label_29e034;
        case 0x29e038u: goto label_29e038;
        case 0x29e03cu: goto label_29e03c;
        case 0x29e040u: goto label_29e040;
        case 0x29e044u: goto label_29e044;
        case 0x29e048u: goto label_29e048;
        case 0x29e04cu: goto label_29e04c;
        case 0x29e050u: goto label_29e050;
        case 0x29e054u: goto label_29e054;
        case 0x29e058u: goto label_29e058;
        case 0x29e05cu: goto label_29e05c;
        case 0x29e060u: goto label_29e060;
        case 0x29e064u: goto label_29e064;
        case 0x29e068u: goto label_29e068;
        case 0x29e06cu: goto label_29e06c;
        case 0x29e070u: goto label_29e070;
        case 0x29e074u: goto label_29e074;
        case 0x29e078u: goto label_29e078;
        case 0x29e07cu: goto label_29e07c;
        case 0x29e080u: goto label_29e080;
        case 0x29e084u: goto label_29e084;
        case 0x29e088u: goto label_29e088;
        case 0x29e08cu: goto label_29e08c;
        case 0x29e090u: goto label_29e090;
        case 0x29e094u: goto label_29e094;
        case 0x29e098u: goto label_29e098;
        case 0x29e09cu: goto label_29e09c;
        case 0x29e0a0u: goto label_29e0a0;
        case 0x29e0a4u: goto label_29e0a4;
        case 0x29e0a8u: goto label_29e0a8;
        case 0x29e0acu: goto label_29e0ac;
        case 0x29e0b0u: goto label_29e0b0;
        case 0x29e0b4u: goto label_29e0b4;
        case 0x29e0b8u: goto label_29e0b8;
        case 0x29e0bcu: goto label_29e0bc;
        case 0x29e0c0u: goto label_29e0c0;
        case 0x29e0c4u: goto label_29e0c4;
        case 0x29e0c8u: goto label_29e0c8;
        case 0x29e0ccu: goto label_29e0cc;
        case 0x29e0d0u: goto label_29e0d0;
        case 0x29e0d4u: goto label_29e0d4;
        case 0x29e0d8u: goto label_29e0d8;
        case 0x29e0dcu: goto label_29e0dc;
        case 0x29e0e0u: goto label_29e0e0;
        case 0x29e0e4u: goto label_29e0e4;
        case 0x29e0e8u: goto label_29e0e8;
        case 0x29e0ecu: goto label_29e0ec;
        case 0x29e0f0u: goto label_29e0f0;
        case 0x29e0f4u: goto label_29e0f4;
        case 0x29e0f8u: goto label_29e0f8;
        case 0x29e0fcu: goto label_29e0fc;
        case 0x29e100u: goto label_29e100;
        case 0x29e104u: goto label_29e104;
        case 0x29e108u: goto label_29e108;
        case 0x29e10cu: goto label_29e10c;
        case 0x29e110u: goto label_29e110;
        case 0x29e114u: goto label_29e114;
        case 0x29e118u: goto label_29e118;
        case 0x29e11cu: goto label_29e11c;
        case 0x29e120u: goto label_29e120;
        case 0x29e124u: goto label_29e124;
        case 0x29e128u: goto label_29e128;
        case 0x29e12cu: goto label_29e12c;
        case 0x29e130u: goto label_29e130;
        case 0x29e134u: goto label_29e134;
        case 0x29e138u: goto label_29e138;
        case 0x29e13cu: goto label_29e13c;
        case 0x29e140u: goto label_29e140;
        case 0x29e144u: goto label_29e144;
        case 0x29e148u: goto label_29e148;
        case 0x29e14cu: goto label_29e14c;
        case 0x29e150u: goto label_29e150;
        case 0x29e154u: goto label_29e154;
        case 0x29e158u: goto label_29e158;
        case 0x29e15cu: goto label_29e15c;
        case 0x29e160u: goto label_29e160;
        case 0x29e164u: goto label_29e164;
        case 0x29e168u: goto label_29e168;
        case 0x29e16cu: goto label_29e16c;
        case 0x29e170u: goto label_29e170;
        case 0x29e174u: goto label_29e174;
        case 0x29e178u: goto label_29e178;
        case 0x29e17cu: goto label_29e17c;
        case 0x29e180u: goto label_29e180;
        case 0x29e184u: goto label_29e184;
        case 0x29e188u: goto label_29e188;
        case 0x29e18cu: goto label_29e18c;
        case 0x29e190u: goto label_29e190;
        case 0x29e194u: goto label_29e194;
        case 0x29e198u: goto label_29e198;
        case 0x29e19cu: goto label_29e19c;
        case 0x29e1a0u: goto label_29e1a0;
        case 0x29e1a4u: goto label_29e1a4;
        case 0x29e1a8u: goto label_29e1a8;
        case 0x29e1acu: goto label_29e1ac;
        case 0x29e1b0u: goto label_29e1b0;
        case 0x29e1b4u: goto label_29e1b4;
        case 0x29e1b8u: goto label_29e1b8;
        case 0x29e1bcu: goto label_29e1bc;
        case 0x29e1c0u: goto label_29e1c0;
        case 0x29e1c4u: goto label_29e1c4;
        case 0x29e1c8u: goto label_29e1c8;
        case 0x29e1ccu: goto label_29e1cc;
        case 0x29e1d0u: goto label_29e1d0;
        case 0x29e1d4u: goto label_29e1d4;
        case 0x29e1d8u: goto label_29e1d8;
        case 0x29e1dcu: goto label_29e1dc;
        case 0x29e1e0u: goto label_29e1e0;
        case 0x29e1e4u: goto label_29e1e4;
        case 0x29e1e8u: goto label_29e1e8;
        case 0x29e1ecu: goto label_29e1ec;
        case 0x29e1f0u: goto label_29e1f0;
        case 0x29e1f4u: goto label_29e1f4;
        case 0x29e1f8u: goto label_29e1f8;
        case 0x29e1fcu: goto label_29e1fc;
        case 0x29e200u: goto label_29e200;
        case 0x29e204u: goto label_29e204;
        case 0x29e208u: goto label_29e208;
        case 0x29e20cu: goto label_29e20c;
        case 0x29e210u: goto label_29e210;
        case 0x29e214u: goto label_29e214;
        case 0x29e218u: goto label_29e218;
        case 0x29e21cu: goto label_29e21c;
        case 0x29e220u: goto label_29e220;
        case 0x29e224u: goto label_29e224;
        case 0x29e228u: goto label_29e228;
        case 0x29e22cu: goto label_29e22c;
        case 0x29e230u: goto label_29e230;
        case 0x29e234u: goto label_29e234;
        case 0x29e238u: goto label_29e238;
        case 0x29e23cu: goto label_29e23c;
        case 0x29e240u: goto label_29e240;
        case 0x29e244u: goto label_29e244;
        case 0x29e248u: goto label_29e248;
        case 0x29e24cu: goto label_29e24c;
        case 0x29e250u: goto label_29e250;
        case 0x29e254u: goto label_29e254;
        case 0x29e258u: goto label_29e258;
        case 0x29e25cu: goto label_29e25c;
        case 0x29e260u: goto label_29e260;
        case 0x29e264u: goto label_29e264;
        case 0x29e268u: goto label_29e268;
        case 0x29e26cu: goto label_29e26c;
        case 0x29e270u: goto label_29e270;
        case 0x29e274u: goto label_29e274;
        case 0x29e278u: goto label_29e278;
        case 0x29e27cu: goto label_29e27c;
        case 0x29e280u: goto label_29e280;
        case 0x29e284u: goto label_29e284;
        case 0x29e288u: goto label_29e288;
        case 0x29e28cu: goto label_29e28c;
        case 0x29e290u: goto label_29e290;
        case 0x29e294u: goto label_29e294;
        case 0x29e298u: goto label_29e298;
        case 0x29e29cu: goto label_29e29c;
        case 0x29e2a0u: goto label_29e2a0;
        case 0x29e2a4u: goto label_29e2a4;
        case 0x29e2a8u: goto label_29e2a8;
        case 0x29e2acu: goto label_29e2ac;
        case 0x29e2b0u: goto label_29e2b0;
        case 0x29e2b4u: goto label_29e2b4;
        case 0x29e2b8u: goto label_29e2b8;
        case 0x29e2bcu: goto label_29e2bc;
        case 0x29e2c0u: goto label_29e2c0;
        case 0x29e2c4u: goto label_29e2c4;
        case 0x29e2c8u: goto label_29e2c8;
        case 0x29e2ccu: goto label_29e2cc;
        case 0x29e2d0u: goto label_29e2d0;
        case 0x29e2d4u: goto label_29e2d4;
        case 0x29e2d8u: goto label_29e2d8;
        case 0x29e2dcu: goto label_29e2dc;
        case 0x29e2e0u: goto label_29e2e0;
        case 0x29e2e4u: goto label_29e2e4;
        case 0x29e2e8u: goto label_29e2e8;
        case 0x29e2ecu: goto label_29e2ec;
        case 0x29e2f0u: goto label_29e2f0;
        case 0x29e2f4u: goto label_29e2f4;
        case 0x29e2f8u: goto label_29e2f8;
        case 0x29e2fcu: goto label_29e2fc;
        case 0x29e300u: goto label_29e300;
        case 0x29e304u: goto label_29e304;
        case 0x29e308u: goto label_29e308;
        case 0x29e30cu: goto label_29e30c;
        case 0x29e310u: goto label_29e310;
        case 0x29e314u: goto label_29e314;
        case 0x29e318u: goto label_29e318;
        case 0x29e31cu: goto label_29e31c;
        case 0x29e320u: goto label_29e320;
        case 0x29e324u: goto label_29e324;
        case 0x29e328u: goto label_29e328;
        case 0x29e32cu: goto label_29e32c;
        case 0x29e330u: goto label_29e330;
        case 0x29e334u: goto label_29e334;
        case 0x29e338u: goto label_29e338;
        case 0x29e33cu: goto label_29e33c;
        case 0x29e340u: goto label_29e340;
        case 0x29e344u: goto label_29e344;
        case 0x29e348u: goto label_29e348;
        case 0x29e34cu: goto label_29e34c;
        case 0x29e350u: goto label_29e350;
        case 0x29e354u: goto label_29e354;
        case 0x29e358u: goto label_29e358;
        case 0x29e35cu: goto label_29e35c;
        case 0x29e360u: goto label_29e360;
        case 0x29e364u: goto label_29e364;
        case 0x29e368u: goto label_29e368;
        case 0x29e36cu: goto label_29e36c;
        case 0x29e370u: goto label_29e370;
        case 0x29e374u: goto label_29e374;
        case 0x29e378u: goto label_29e378;
        case 0x29e37cu: goto label_29e37c;
        case 0x29e380u: goto label_29e380;
        case 0x29e384u: goto label_29e384;
        case 0x29e388u: goto label_29e388;
        case 0x29e38cu: goto label_29e38c;
        case 0x29e390u: goto label_29e390;
        case 0x29e394u: goto label_29e394;
        case 0x29e398u: goto label_29e398;
        case 0x29e39cu: goto label_29e39c;
        case 0x29e3a0u: goto label_29e3a0;
        case 0x29e3a4u: goto label_29e3a4;
        case 0x29e3a8u: goto label_29e3a8;
        case 0x29e3acu: goto label_29e3ac;
        case 0x29e3b0u: goto label_29e3b0;
        case 0x29e3b4u: goto label_29e3b4;
        case 0x29e3b8u: goto label_29e3b8;
        case 0x29e3bcu: goto label_29e3bc;
        case 0x29e3c0u: goto label_29e3c0;
        case 0x29e3c4u: goto label_29e3c4;
        case 0x29e3c8u: goto label_29e3c8;
        case 0x29e3ccu: goto label_29e3cc;
        case 0x29e3d0u: goto label_29e3d0;
        case 0x29e3d4u: goto label_29e3d4;
        case 0x29e3d8u: goto label_29e3d8;
        case 0x29e3dcu: goto label_29e3dc;
        case 0x29e3e0u: goto label_29e3e0;
        case 0x29e3e4u: goto label_29e3e4;
        case 0x29e3e8u: goto label_29e3e8;
        case 0x29e3ecu: goto label_29e3ec;
        case 0x29e3f0u: goto label_29e3f0;
        case 0x29e3f4u: goto label_29e3f4;
        case 0x29e3f8u: goto label_29e3f8;
        case 0x29e3fcu: goto label_29e3fc;
        case 0x29e400u: goto label_29e400;
        case 0x29e404u: goto label_29e404;
        case 0x29e408u: goto label_29e408;
        case 0x29e40cu: goto label_29e40c;
        case 0x29e410u: goto label_29e410;
        case 0x29e414u: goto label_29e414;
        case 0x29e418u: goto label_29e418;
        case 0x29e41cu: goto label_29e41c;
        case 0x29e420u: goto label_29e420;
        case 0x29e424u: goto label_29e424;
        case 0x29e428u: goto label_29e428;
        case 0x29e42cu: goto label_29e42c;
        case 0x29e430u: goto label_29e430;
        case 0x29e434u: goto label_29e434;
        case 0x29e438u: goto label_29e438;
        case 0x29e43cu: goto label_29e43c;
        case 0x29e440u: goto label_29e440;
        case 0x29e444u: goto label_29e444;
        default: break;
    }

    ctx->pc = 0x29d6d0u;

label_29d6d0:
    // 0x29d6d0: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x29d6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
label_29d6d4:
    // 0x29d6d4: 0xffb702f0  sd          $s7, 0x2F0($sp)
    ctx->pc = 0x29d6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 23));
label_29d6d8:
    // 0x29d6d8: 0xffb602e0  sd          $s6, 0x2E0($sp)
    ctx->pc = 0x29d6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 22));
label_29d6dc:
    // 0x29d6dc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x29d6dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29d6e0:
    // 0x29d6e0: 0xffb402c0  sd          $s4, 0x2C0($sp)
    ctx->pc = 0x29d6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 20));
label_29d6e4:
    // 0x29d6e4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x29d6e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29d6e8:
    // 0x29d6e8: 0xffb302b0  sd          $s3, 0x2B0($sp)
    ctx->pc = 0x29d6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 19));
label_29d6ec:
    // 0x29d6ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29d6ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29d6f0:
    // 0x29d6f0: 0xffbf0310  sd          $ra, 0x310($sp)
    ctx->pc = 0x29d6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 31));
label_29d6f4:
    // 0x29d6f4: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x29d6f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_29d6f8:
    // 0x29d6f8: 0xffbe0300  sd          $fp, 0x300($sp)
    ctx->pc = 0x29d6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 30));
label_29d6fc:
    // 0x29d6fc: 0xffb502d0  sd          $s5, 0x2D0($sp)
    ctx->pc = 0x29d6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 21));
label_29d700:
    // 0x29d700: 0xffb202a0  sd          $s2, 0x2A0($sp)
    ctx->pc = 0x29d700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 18));
label_29d704:
    // 0x29d704: 0xffb10290  sd          $s1, 0x290($sp)
    ctx->pc = 0x29d704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 17));
label_29d708:
    // 0x29d708: 0xffb00280  sd          $s0, 0x280($sp)
    ctx->pc = 0x29d708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 16));
label_29d70c:
    // 0x29d70c: 0xafa70260  sw          $a3, 0x260($sp)
    ctx->pc = 0x29d70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 7));
label_29d710:
    // 0x29d710: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x29d710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
label_29d714:
    // 0x29d714: 0xafa00270  sw          $zero, 0x270($sp)
    ctx->pc = 0x29d714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 0));
label_29d718:
    // 0x29d718: 0xafa00274  sw          $zero, 0x274($sp)
    ctx->pc = 0x29d718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 0));
label_29d71c:
    // 0x29d71c: 0xafa00264  sw          $zero, 0x264($sp)
    ctx->pc = 0x29d71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
label_29d720:
    // 0x29d720: 0x10000008  b           . + 4 + (0x8 << 2)
label_29d724:
    if (ctx->pc == 0x29D724u) {
        ctx->pc = 0x29D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D720u;
        // 0x29d724: 0xafa00268  sw          $zero, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D728u;
        goto label_29d728;
    }
    ctx->pc = 0x29D720u;
    {
        const bool branch_taken_0x29d720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D720u;
        // 0x29d724: 0xafa00268  sw          $zero, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d720) {
            ctx->pc = 0x29D744u;
            goto label_29d744;
        }
    }
    ctx->pc = 0x29D728u;
label_29d728:
    // 0x29d728: 0x10000278  b           . + 4 + (0x278 << 2)
label_29d72c:
    if (ctx->pc == 0x29D72Cu) {
        ctx->pc = 0x29D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D728u;
        // 0x29d72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D730u;
        goto label_29d730;
    }
    ctx->pc = 0x29D728u;
    {
        const bool branch_taken_0x29d728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D728u;
        // 0x29d72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d728) {
            ctx->pc = 0x29E10Cu;
            goto label_29e10c;
        }
    }
    ctx->pc = 0x29D730u;
label_29d730:
    // 0x29d730: 0x8fa20274  lw          $v0, 0x274($sp)
    ctx->pc = 0x29d730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_29d734:
    // 0x29d734: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29d734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29d738:
    // 0x29d738: 0x10000002  b           . + 4 + (0x2 << 2)
label_29d73c:
    if (ctx->pc == 0x29D73Cu) {
        ctx->pc = 0x29D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D738u;
        // 0x29d73c: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D740u;
        goto label_29d740;
    }
    ctx->pc = 0x29D738u;
    {
        const bool branch_taken_0x29d738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D738u;
        // 0x29d73c: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d738) {
            ctx->pc = 0x29D744u;
            goto label_29d744;
        }
    }
    ctx->pc = 0x29D740u;
label_29d740:
    // 0x29d740: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x29d740u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_29d744:
    // 0x29d744: 0x92f10000  lbu         $s1, 0x0($s7)
    ctx->pc = 0x29d744u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_29d748:
    // 0x29d748: 0x12200329  beqz        $s1, . + 4 + (0x329 << 2)
label_29d74c:
    if (ctx->pc == 0x29D74Cu) {
        ctx->pc = 0x29D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D748u;
        // 0x29d74c: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D750u;
        goto label_29d750;
    }
    ctx->pc = 0x29D748u;
    {
        const bool branch_taken_0x29d748 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D748u;
        // 0x29d74c: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d748) {
            ctx->pc = 0x29E3F0u;
            goto label_29e3f0;
        }
    }
    ctx->pc = 0x29D750u;
label_29d750:
    // 0x29d750: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x29d750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_29d754:
    // 0x29d754: 0x246211d1  addiu       $v0, $v1, 0x11D1
    ctx->pc = 0x29d754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4561));
label_29d758:
    // 0x29d758: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29d758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_29d75c:
    // 0x29d75c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x29d75cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_29d760:
    // 0x29d760: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x29d760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_29d764:
    // 0x29d764: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_29d768:
    if (ctx->pc == 0x29D768u) {
        ctx->pc = 0x29D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D764u;
        // 0x29d768: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D76Cu;
        goto label_29d76c;
    }
    ctx->pc = 0x29D764u;
    {
        const bool branch_taken_0x29d764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D764u;
        // 0x29d768: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d764) {
            ctx->pc = 0x29D7C4u;
            goto label_29d7c4;
        }
    }
    ctx->pc = 0x29D76Cu;
label_29d76c:
    // 0x29d76c: 0x10000004  b           . + 4 + (0x4 << 2)
label_29d770:
    if (ctx->pc == 0x29D770u) {
        ctx->pc = 0x29D774u;
        goto label_29d774;
    }
    ctx->pc = 0x29D76Cu;
    {
        const bool branch_taken_0x29d76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d76c) {
            ctx->pc = 0x29D780u;
            goto label_29d780;
        }
    }
    ctx->pc = 0x29D774u;
label_29d774:
    // 0x29d774: 0x0  nop
    ctx->pc = 0x29d774u;
    // NOP
label_29d778:
    // 0x29d778: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29d778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_29d77c:
    // 0x29d77c: 0xafa40268  sw          $a0, 0x268($sp)
    ctx->pc = 0x29d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
label_29d780:
    // 0x29d780: 0xc0a7bbe  jal         func_29EEF8
label_29d784:
    if (ctx->pc == 0x29D784u) {
        ctx->pc = 0x29D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D780u;
        // 0x29d784: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D788u;
        goto label_29d788;
    }
    ctx->pc = 0x29D780u;
    SET_GPR_U32(ctx, 31, 0x29D788u);
    ctx->pc = 0x29D784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D780u;
    // 0x29d784: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEF8u, 0x29D780u, 0x29D788u)) {
        return;
    }
    ctx->pc = 0x29D788u;
label_29d788:
    // 0x29d788: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29d788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d78c:
    // 0x29d78c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29d790:
    // 0x29d790: 0x1222ffe7  beq         $s1, $v0, . + 4 + (-0x19 << 2)
label_29d794:
    if (ctx->pc == 0x29D794u) {
        ctx->pc = 0x29D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D790u;
        // 0x29d794: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D798u;
        goto label_29d798;
    }
    ctx->pc = 0x29D790u;
    {
        const bool branch_taken_0x29d790 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x29D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D790u;
        // 0x29d794: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d790) {
            ctx->pc = 0x29D730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d730;
        }
    }
    ctx->pc = 0x29D798u;
label_29d798:
    // 0x29d798: 0x246211d1  addiu       $v0, $v1, 0x11D1
    ctx->pc = 0x29d798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4561));
label_29d79c:
    // 0x29d79c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_29d7a0:
    // 0x29d7a0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x29d7a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_29d7a4:
    // 0x29d7a4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x29d7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_29d7a8:
    // 0x29d7a8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_29d7ac:
    if (ctx->pc == 0x29D7ACu) {
        ctx->pc = 0x29D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7A8u;
        // 0x29d7ac: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D7B0u;
        goto label_29d7b0;
    }
    ctx->pc = 0x29D7A8u;
    {
        const bool branch_taken_0x29d7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7A8u;
        // 0x29d7ac: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d7a8) {
            ctx->pc = 0x29D778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d778;
        }
    }
    ctx->pc = 0x29D7B0u;
label_29d7b0:
    // 0x29d7b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29d7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29d7b4:
    // 0x29d7b4: 0xc0a7bb2  jal         func_29EEC8
label_29d7b8:
    if (ctx->pc == 0x29D7B8u) {
        ctx->pc = 0x29D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7B4u;
        // 0x29d7b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D7BCu;
        goto label_29d7bc;
    }
    ctx->pc = 0x29D7B4u;
    SET_GPR_U32(ctx, 31, 0x29D7BCu);
    ctx->pc = 0x29D7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D7B4u;
    // 0x29d7b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEC8u, 0x29D7B4u, 0x29D7BCu)) {
        return;
    }
    ctx->pc = 0x29D7BCu;
label_29d7bc:
    // 0x29d7bc: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_29d7c0:
    if (ctx->pc == 0x29D7C0u) {
        ctx->pc = 0x29D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7BCu;
        // 0x29d7c0: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D7C4u;
        goto label_29d7c4;
    }
    ctx->pc = 0x29D7BCu;
    {
        const bool branch_taken_0x29d7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7BCu;
        // 0x29d7c0: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d7bc) {
            ctx->pc = 0x29D748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d748;
        }
    }
    ctx->pc = 0x29D7C4u;
label_29d7c4:
    // 0x29d7c4: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x29d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_29d7c8:
    // 0x29d7c8: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
label_29d7cc:
    if (ctx->pc == 0x29D7CCu) {
        ctx->pc = 0x29D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7C8u;
        // 0x29d7cc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D7D0u;
        goto label_29d7d0;
    }
    ctx->pc = 0x29D7C8u;
    {
        const bool branch_taken_0x29d7c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x29D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7C8u;
        // 0x29d7cc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d7c8) {
            ctx->pc = 0x29D800u;
            goto label_29d800;
        }
    }
    ctx->pc = 0x29D7D0u;
label_29d7d0:
    // 0x29d7d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29d7d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d7d4:
    // 0x29d7d4: 0x92f10000  lbu         $s1, 0x0($s7)
    ctx->pc = 0x29d7d4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_29d7d8:
    // 0x29d7d8: 0x2e220079  sltiu       $v0, $s1, 0x79
    ctx->pc = 0x29d7d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
label_29d7dc:
    // 0x29d7dc: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_29d7e0:
    if (ctx->pc == 0x29D7E0u) {
        ctx->pc = 0x29D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7DCu;
        // 0x29d7e0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D7E4u;
        goto label_29d7e4;
    }
    ctx->pc = 0x29D7DCu;
    {
        const bool branch_taken_0x29d7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7DCu;
        // 0x29d7e0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d7dc) {
            ctx->pc = 0x29DA0Cu;
            goto label_29da0c;
        }
    }
    ctx->pc = 0x29D7E4u;
label_29d7e4:
    // 0x29d7e4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x29d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_29d7e8:
    // 0x29d7e8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x29d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_29d7ec:
    // 0x29d7ec: 0x2442daa0  addiu       $v0, $v0, -0x2560
    ctx->pc = 0x29d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957728));
label_29d7f0:
    // 0x29d7f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29d7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29d7f4:
    // 0x29d7f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29d7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29d7f8:
    // 0x29d7f8: 0x800008  jr          $a0
label_29d7fc:
    if (ctx->pc == 0x29D7FCu) {
        ctx->pc = 0x29D800u;
        goto label_29d800;
    }
    ctx->pc = 0x29D7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29D800u: goto label_29d800;
            case 0x29D830u: goto label_29d830;
            case 0x29D840u: goto label_29d840;
            case 0x29D858u: goto label_29d858;
            case 0x29D870u: goto label_29d870;
            case 0x29D888u: goto label_29d888;
            case 0x29D8B0u: goto label_29d8b0;
            case 0x29D8B4u: goto label_29d8b4;
            case 0x29D8D0u: goto label_29d8d0;
            case 0x29D8E8u: goto label_29d8e8;
            case 0x29D8ECu: goto label_29d8ec;
            case 0x29D908u: goto label_29d908;
            case 0x29D924u: goto label_29d924;
            case 0x29D944u: goto label_29d944;
            case 0x29D94Cu: goto label_29d94c;
            case 0x29D954u: goto label_29d954;
            case 0x29D970u: goto label_29d970;
            case 0x29D97Cu: goto label_29d97c;
            case 0x29D99Cu: goto label_29d99c;
            case 0x29DA00u: goto label_29da00;
            case 0x29DA0Cu: goto label_29da0c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D7F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D800u;
label_29d800:
    // 0x29d800: 0xc0a7bbe  jal         func_29EEF8
label_29d804:
    if (ctx->pc == 0x29D804u) {
        ctx->pc = 0x29D804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D800u;
        // 0x29d804: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D808u;
        goto label_29d808;
    }
    ctx->pc = 0x29D800u;
    SET_GPR_U32(ctx, 31, 0x29D808u);
    ctx->pc = 0x29D804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D800u;
    // 0x29d804: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEF8u, 0x29D800u, 0x29D808u)) {
        return;
    }
    ctx->pc = 0x29D808u;
label_29d808:
    // 0x29d808: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d80c:
    // 0x29d80c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29d810:
    // 0x29d810: 0x120202eb  beq         $s0, $v0, . + 4 + (0x2EB << 2)
label_29d814:
    if (ctx->pc == 0x29D814u) {
        ctx->pc = 0x29D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D810u;
        // 0x29d814: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D818u;
        goto label_29d818;
    }
    ctx->pc = 0x29D810u;
    {
        const bool branch_taken_0x29d810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x29D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D810u;
        // 0x29d814: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d810) {
            ctx->pc = 0x29E3C0u;
            goto label_29e3c0;
        }
    }
    ctx->pc = 0x29D818u;
label_29d818:
    // 0x29d818: 0x1611ffc3  bne         $s0, $s1, . + 4 + (-0x3D << 2)
label_29d81c:
    if (ctx->pc == 0x29D81Cu) {
        ctx->pc = 0x29D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D818u;
        // 0x29d81c: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D820u;
        goto label_29d820;
    }
    ctx->pc = 0x29D818u;
    {
        const bool branch_taken_0x29d818 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x29D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D818u;
        // 0x29d81c: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d818) {
            ctx->pc = 0x29D728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d728;
        }
    }
    ctx->pc = 0x29D820u;
label_29d820:
    // 0x29d820: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x29d820u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_29d824:
    // 0x29d824: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29d824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_29d828:
    // 0x29d828: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
label_29d82c:
    if (ctx->pc == 0x29D82Cu) {
        ctx->pc = 0x29D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D828u;
        // 0x29d82c: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D830u;
        goto label_29d830;
    }
    ctx->pc = 0x29D828u;
    {
        const bool branch_taken_0x29d828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D828u;
        // 0x29d82c: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d828) {
            ctx->pc = 0x29D744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d744;
        }
    }
    ctx->pc = 0x29D830u;
label_29d830:
    // 0x29d830: 0x166002e9  bnez        $s3, . + 4 + (0x2E9 << 2)
label_29d834:
    if (ctx->pc == 0x29D834u) {
        ctx->pc = 0x29D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D830u;
        // 0x29d834: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D838u;
        goto label_29d838;
    }
    ctx->pc = 0x29D830u;
    {
        const bool branch_taken_0x29d830 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D830u;
        // 0x29d834: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d830) {
            ctx->pc = 0x29E3D8u;
            goto label_29e3d8;
        }
    }
    ctx->pc = 0x29D838u;
label_29d838:
    // 0x29d838: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_29d83c:
    if (ctx->pc == 0x29D83Cu) {
        ctx->pc = 0x29D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D838u;
        // 0x29d83c: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D840u;
        goto label_29d840;
    }
    ctx->pc = 0x29D838u;
    {
        const bool branch_taken_0x29d838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D838u;
        // 0x29d83c: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d838) {
            ctx->pc = 0x29D7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d7d8;
        }
    }
    ctx->pc = 0x29D840u;
label_29d840:
    // 0x29d840: 0x2402ffb7  addiu       $v0, $zero, -0x49
    ctx->pc = 0x29d840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967223));
label_29d844:
    // 0x29d844: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x29d844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_29d848:
    // 0x29d848: 0x144002e3  bnez        $v0, . + 4 + (0x2E3 << 2)
label_29d84c:
    if (ctx->pc == 0x29D84Cu) {
        ctx->pc = 0x29D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D848u;
        // 0x29d84c: 0x36730001  ori         $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D850u;
        goto label_29d850;
    }
    ctx->pc = 0x29D848u;
    {
        const bool branch_taken_0x29d848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D848u;
        // 0x29d84c: 0x36730001  ori         $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d848) {
            ctx->pc = 0x29E3D8u;
            goto label_29e3d8;
        }
    }
    ctx->pc = 0x29D850u;
label_29d850:
    // 0x29d850: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
label_29d854:
    if (ctx->pc == 0x29D854u) {
        ctx->pc = 0x29D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D850u;
        // 0x29d854: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D858u;
        goto label_29d858;
    }
    ctx->pc = 0x29D850u;
    {
        const bool branch_taken_0x29d850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D850u;
        // 0x29d854: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d850) {
            ctx->pc = 0x29D7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d7d8;
        }
    }
    ctx->pc = 0x29D858u;
label_29d858:
    // 0x29d858: 0x2402ffb7  addiu       $v0, $zero, -0x49
    ctx->pc = 0x29d858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967223));
label_29d85c:
    // 0x29d85c: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x29d85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_29d860:
    // 0x29d860: 0x144002dd  bnez        $v0, . + 4 + (0x2DD << 2)
label_29d864:
    if (ctx->pc == 0x29D864u) {
        ctx->pc = 0x29D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D860u;
        // 0x29d864: 0x36730002  ori         $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D868u;
        goto label_29d868;
    }
    ctx->pc = 0x29D860u;
    {
        const bool branch_taken_0x29d860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D860u;
        // 0x29d864: 0x36730002  ori         $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d860) {
            ctx->pc = 0x29E3D8u;
            goto label_29e3d8;
        }
    }
    ctx->pc = 0x29D868u;
label_29d868:
    // 0x29d868: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_29d86c:
    if (ctx->pc == 0x29D86Cu) {
        ctx->pc = 0x29D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D868u;
        // 0x29d86c: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D870u;
        goto label_29d870;
    }
    ctx->pc = 0x29D868u;
    {
        const bool branch_taken_0x29d868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D868u;
        // 0x29d86c: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d868) {
            ctx->pc = 0x29D7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d7d8;
        }
    }
    ctx->pc = 0x29D870u;
label_29d870:
    // 0x29d870: 0x2402ffb7  addiu       $v0, $zero, -0x49
    ctx->pc = 0x29d870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967223));
label_29d874:
    // 0x29d874: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x29d874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_29d878:
    // 0x29d878: 0x144002d7  bnez        $v0, . + 4 + (0x2D7 << 2)
label_29d87c:
    if (ctx->pc == 0x29D87Cu) {
        ctx->pc = 0x29D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D878u;
        // 0x29d87c: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D880u;
        goto label_29d880;
    }
    ctx->pc = 0x29D878u;
    {
        const bool branch_taken_0x29d878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D878u;
        // 0x29d87c: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d878) {
            ctx->pc = 0x29E3D8u;
            goto label_29e3d8;
        }
    }
    ctx->pc = 0x29D880u;
label_29d880:
    // 0x29d880: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
label_29d884:
    if (ctx->pc == 0x29D884u) {
        ctx->pc = 0x29D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D880u;
        // 0x29d884: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D888u;
        goto label_29d888;
    }
    ctx->pc = 0x29D880u;
    {
        const bool branch_taken_0x29d880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D880u;
        // 0x29d884: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d880) {
            ctx->pc = 0x29D7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d7d8;
        }
    }
    ctx->pc = 0x29D888u;
label_29d888:
    // 0x29d888: 0x2402ffb7  addiu       $v0, $zero, -0x49
    ctx->pc = 0x29d888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967223));
label_29d88c:
    // 0x29d88c: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x29d88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_29d890:
    // 0x29d890: 0x144002d1  bnez        $v0, . + 4 + (0x2D1 << 2)
label_29d894:
    if (ctx->pc == 0x29D894u) {
        ctx->pc = 0x29D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D890u;
        // 0x29d894: 0x1510b8  dsll        $v0, $s5, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << 2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D898u;
        goto label_29d898;
    }
    ctx->pc = 0x29D890u;
    {
        const bool branch_taken_0x29d890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D890u;
        // 0x29d894: 0x1510b8  dsll        $v0, $s5, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d890) {
            ctx->pc = 0x29E3D8u;
            goto label_29e3d8;
        }
    }
    ctx->pc = 0x29D898u;
label_29d898:
    // 0x29d898: 0x36730040  ori         $s3, $s3, 0x40
    ctx->pc = 0x29d898u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)64);
label_29d89c:
    // 0x29d89c: 0x55102d  daddu       $v0, $v0, $s5
    ctx->pc = 0x29d89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 21));
label_29d8a0:
    // 0x29d8a0: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x29d8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
label_29d8a4:
    // 0x29d8a4: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x29d8a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_29d8a8:
    // 0x29d8a8: 0x1000ffca  b           . + 4 + (-0x36 << 2)
label_29d8ac:
    if (ctx->pc == 0x29D8ACu) {
        ctx->pc = 0x29D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8A8u;
        // 0x29d8ac: 0x6455ffd0  daddiu      $s5, $v0, -0x30 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D8B0u;
        goto label_29d8b0;
    }
    ctx->pc = 0x29D8A8u;
    {
        const bool branch_taken_0x29d8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8A8u;
        // 0x29d8ac: 0x6455ffd0  daddiu      $s5, $v0, -0x30 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d8a8) {
            ctx->pc = 0x29D7D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d7d4;
        }
    }
    ctx->pc = 0x29D8B0u;
label_29d8b0:
    // 0x29d8b0: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x29d8b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_29d8b4:
    // 0x29d8b4: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x29d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_29d8b8:
    // 0x29d8b8: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x29d8b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29d8bc:
    // 0x29d8bc: 0x2442e6b0  addiu       $v0, $v0, -0x1950
    ctx->pc = 0x29d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960816));
label_29d8c0:
    // 0x29d8c0: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x29d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_29d8c4:
    // 0x29d8c4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x29d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_29d8c8:
    // 0x29d8c8: 0x1000005c  b           . + 4 + (0x5C << 2)
label_29d8cc:
    if (ctx->pc == 0x29D8CCu) {
        ctx->pc = 0x29D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8C8u;
        // 0x29d8cc: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D8D0u;
        goto label_29d8d0;
    }
    ctx->pc = 0x29D8C8u;
    {
        const bool branch_taken_0x29d8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8C8u;
        // 0x29d8cc: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d8c8) {
            ctx->pc = 0x29DA3Cu;
            goto label_29da3c;
        }
    }
    ctx->pc = 0x29D8D0u;
label_29d8d0:
    // 0x29d8d0: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x29d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_29d8d4:
    // 0x29d8d4: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x29d8d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29d8d8:
    // 0x29d8d8: 0x2442e6b0  addiu       $v0, $v0, -0x1950
    ctx->pc = 0x29d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960816));
label_29d8dc:
    // 0x29d8dc: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x29d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
label_29d8e0:
    // 0x29d8e0: 0x10000056  b           . + 4 + (0x56 << 2)
label_29d8e4:
    if (ctx->pc == 0x29D8E4u) {
        ctx->pc = 0x29D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8E0u;
        // 0x29d8e4: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D8E8u;
        goto label_29d8e8;
    }
    ctx->pc = 0x29D8E0u;
    {
        const bool branch_taken_0x29d8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8E0u;
        // 0x29d8e4: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d8e0) {
            ctx->pc = 0x29DA3Cu;
            goto label_29da3c;
        }
    }
    ctx->pc = 0x29D8E8u;
label_29d8e8:
    // 0x29d8e8: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x29d8e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_29d8ec:
    // 0x29d8ec: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x29d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
label_29d8f0:
    // 0x29d8f0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x29d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_29d8f4:
    // 0x29d8f4: 0x24427200  addiu       $v0, $v0, 0x7200
    ctx->pc = 0x29d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29184));
label_29d8f8:
    // 0x29d8f8: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x29d8f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29d8fc:
    // 0x29d8fc: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x29d8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_29d900:
    // 0x29d900: 0x1000004e  b           . + 4 + (0x4E << 2)
label_29d904:
    if (ctx->pc == 0x29D904u) {
        ctx->pc = 0x29D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D900u;
        // 0x29d904: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D908u;
        goto label_29d908;
    }
    ctx->pc = 0x29D900u;
    {
        const bool branch_taken_0x29d900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D900u;
        // 0x29d904: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d900) {
            ctx->pc = 0x29DA3Cu;
            goto label_29da3c;
        }
    }
    ctx->pc = 0x29D908u;
label_29d908:
    // 0x29d908: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x29d908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
label_29d90c:
    // 0x29d90c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x29d90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_29d910:
    // 0x29d910: 0x24427200  addiu       $v0, $v0, 0x7200
    ctx->pc = 0x29d910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29184));
label_29d914:
    // 0x29d914: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x29d914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29d918:
    // 0x29d918: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x29d918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_29d91c:
    // 0x29d91c: 0x10000047  b           . + 4 + (0x47 << 2)
label_29d920:
    if (ctx->pc == 0x29D920u) {
        ctx->pc = 0x29D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D91Cu;
        // 0x29d920: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D924u;
        goto label_29d924;
    }
    ctx->pc = 0x29D91Cu;
    {
        const bool branch_taken_0x29d91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D91Cu;
        // 0x29d920: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d91c) {
            ctx->pc = 0x29DA3Cu;
            goto label_29da3c;
        }
    }
    ctx->pc = 0x29D924u;
label_29d924:
    // 0x29d924: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x29d924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
label_29d928:
    // 0x29d928: 0x36730100  ori         $s3, $s3, 0x100
    ctx->pc = 0x29d928u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
label_29d92c:
    // 0x29d92c: 0x24427200  addiu       $v0, $v0, 0x7200
    ctx->pc = 0x29d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29184));
label_29d930:
    // 0x29d930: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x29d930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29d934:
    // 0x29d934: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x29d934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_29d938:
    // 0x29d938: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x29d938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29d93c:
    // 0x29d93c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_29d940:
    if (ctx->pc == 0x29D940u) {
        ctx->pc = 0x29D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D93Cu;
        // 0x29d940: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D944u;
        goto label_29d944;
    }
    ctx->pc = 0x29D93Cu;
    {
        const bool branch_taken_0x29d93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D93Cu;
        // 0x29d940: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d93c) {
            ctx->pc = 0x29DA3Cu;
            goto label_29da3c;
        }
    }
    ctx->pc = 0x29D944u;
label_29d944:
    // 0x29d944: 0x1000003d  b           . + 4 + (0x3D << 2)
label_29d948:
    if (ctx->pc == 0x29D948u) {
        ctx->pc = 0x29D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D944u;
        // 0x29d948: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D94Cu;
        goto label_29d94c;
    }
    ctx->pc = 0x29D944u;
    {
        const bool branch_taken_0x29d944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D944u;
        // 0x29d948: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d944) {
            ctx->pc = 0x29DA3Cu;
            goto label_29da3c;
        }
    }
    ctx->pc = 0x29D94Cu;
label_29d94c:
    // 0x29d94c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_29d950:
    if (ctx->pc == 0x29D950u) {
        ctx->pc = 0x29D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D94Cu;
        // 0x29d950: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D954u;
        goto label_29d954;
    }
    ctx->pc = 0x29D94Cu;
    {
        const bool branch_taken_0x29d94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D94Cu;
        // 0x29d950: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d94c) {
            ctx->pc = 0x29DA3Cu;
            goto label_29da3c;
        }
    }
    ctx->pc = 0x29D954u;
label_29d954:
    // 0x29d954: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x29d954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29d958:
    // 0x29d958: 0xc0a7912  jal         func_29E448
label_29d95c:
    if (ctx->pc == 0x29D95Cu) {
        ctx->pc = 0x29D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D958u;
        // 0x29d95c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D960u;
        goto label_29d960;
    }
    ctx->pc = 0x29D958u;
    SET_GPR_U32(ctx, 31, 0x29D960u);
    ctx->pc = 0x29D95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D958u;
    // 0x29d95c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E448u, 0x29D958u, 0x29D960u)) {
        return;
    }
    ctx->pc = 0x29D960u;
label_29d960:
    // 0x29d960: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x29d960u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
label_29d964:
    // 0x29d964: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x29d964u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d968:
    // 0x29d968: 0x10000034  b           . + 4 + (0x34 << 2)
label_29d96c:
    if (ctx->pc == 0x29D96Cu) {
        ctx->pc = 0x29D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D968u;
        // 0x29d96c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D970u;
        goto label_29d970;
    }
    ctx->pc = 0x29D968u;
    {
        const bool branch_taken_0x29d968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D968u;
        // 0x29d96c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d968) {
            ctx->pc = 0x29DA3Cu;
            goto label_29da3c;
        }
    }
    ctx->pc = 0x29D970u;
label_29d970:
    // 0x29d970: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x29d970u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
label_29d974:
    // 0x29d974: 0x10000031  b           . + 4 + (0x31 << 2)
label_29d978:
    if (ctx->pc == 0x29D978u) {
        ctx->pc = 0x29D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D974u;
        // 0x29d978: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D97Cu;
        goto label_29d97c;
    }
    ctx->pc = 0x29D974u;
    {
        const bool branch_taken_0x29d974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D974u;
        // 0x29d978: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d974) {
            ctx->pc = 0x29DA3Cu;
            goto label_29da3c;
        }
    }
    ctx->pc = 0x29D97Cu;
label_29d97c:
    // 0x29d97c: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x29d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
label_29d980:
    // 0x29d980: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x29d980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29d984:
    // 0x29d984: 0x24427200  addiu       $v0, $v0, 0x7200
    ctx->pc = 0x29d984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29184));
label_29d988:
    // 0x29d988: 0x36730110  ori         $s3, $s3, 0x110
    ctx->pc = 0x29d988u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)272);
label_29d98c:
    // 0x29d98c: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x29d98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_29d990:
    // 0x29d990: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x29d990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29d994:
    // 0x29d994: 0x10000029  b           . + 4 + (0x29 << 2)
label_29d998:
    if (ctx->pc == 0x29D998u) {
        ctx->pc = 0x29D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D994u;
        // 0x29d998: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D99Cu;
        goto label_29d99c;
    }
    ctx->pc = 0x29D994u;
    {
        const bool branch_taken_0x29d994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D994u;
        // 0x29d998: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d994) {
            ctx->pc = 0x29DA3Cu;
            goto label_29da3c;
        }
    }
    ctx->pc = 0x29D99Cu;
label_29d99c:
    // 0x29d99c: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x29d99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_29d9a0:
    // 0x29d9a0: 0x5440ff68  bnel        $v0, $zero, . + 4 + (-0x98 << 2)
label_29d9a4:
    if (ctx->pc == 0x29D9A4u) {
        ctx->pc = 0x29D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9A0u;
        // 0x29d9a4: 0x26f30001  addiu       $s3, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D9A8u;
        goto label_29d9a8;
    }
    ctx->pc = 0x29D9A0u;
    {
        const bool branch_taken_0x29d9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d9a0) {
            ctx->pc = 0x29D9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D9A0u;
            // 0x29d9a4: 0x26f30001  addiu       $s3, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d744;
        }
    }
    ctx->pc = 0x29D9A8u;
label_29d9a8:
    // 0x29d9a8: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x29d9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_29d9ac:
    // 0x29d9ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_29d9b0:
    if (ctx->pc == 0x29D9B0u) {
        ctx->pc = 0x29D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9ACu;
        // 0x29d9b0: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D9B4u;
        goto label_29d9b4;
    }
    ctx->pc = 0x29D9ACu;
    {
        const bool branch_taken_0x29d9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9ACu;
        // 0x29d9b0: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d9ac) {
            ctx->pc = 0x29D9C8u;
            goto label_29d9c8;
        }
    }
    ctx->pc = 0x29D9B4u;
label_29d9b4:
    // 0x29d9b4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x29d9b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_29d9b8:
    // 0x29d9b8: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x29d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_29d9bc:
    // 0x29d9bc: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x29d9bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_29d9c0:
    // 0x29d9c0: 0x1000ff60  b           . + 4 + (-0xA0 << 2)
label_29d9c4:
    if (ctx->pc == 0x29D9C4u) {
        ctx->pc = 0x29D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9C0u;
        // 0x29d9c4: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D9C8u;
        goto label_29d9c8;
    }
    ctx->pc = 0x29D9C0u;
    {
        const bool branch_taken_0x29d9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9C0u;
        // 0x29d9c4: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d9c0) {
            ctx->pc = 0x29D744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d744;
        }
    }
    ctx->pc = 0x29D9C8u;
label_29d9c8:
    // 0x29d9c8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x29d9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_29d9cc:
    // 0x29d9cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_29d9d0:
    if (ctx->pc == 0x29D9D0u) {
        ctx->pc = 0x29D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9CCu;
        // 0x29d9d0: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D9D4u;
        goto label_29d9d4;
    }
    ctx->pc = 0x29D9CCu;
    {
        const bool branch_taken_0x29d9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9CCu;
        // 0x29d9d0: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d9cc) {
            ctx->pc = 0x29D9E8u;
            goto label_29d9e8;
        }
    }
    ctx->pc = 0x29D9D4u;
label_29d9d4:
    // 0x29d9d4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x29d9d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_29d9d8:
    // 0x29d9d8: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x29d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_29d9dc:
    // 0x29d9dc: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x29d9dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_29d9e0:
    // 0x29d9e0: 0x1000ff58  b           . + 4 + (-0xA8 << 2)
label_29d9e4:
    if (ctx->pc == 0x29D9E4u) {
        ctx->pc = 0x29D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9E0u;
        // 0x29d9e4: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D9E8u;
        goto label_29d9e8;
    }
    ctx->pc = 0x29D9E0u;
    {
        const bool branch_taken_0x29d9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9E0u;
        // 0x29d9e4: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d9e0) {
            ctx->pc = 0x29D744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d744;
        }
    }
    ctx->pc = 0x29D9E8u;
label_29d9e8:
    // 0x29d9e8: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x29d9e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_29d9ec:
    // 0x29d9ec: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x29d9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_29d9f0:
    // 0x29d9f0: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x29d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_29d9f4:
    // 0x29d9f4: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x29d9f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_29d9f8:
    // 0x29d9f8: 0x1000ff52  b           . + 4 + (-0xAE << 2)
label_29d9fc:
    if (ctx->pc == 0x29D9FCu) {
        ctx->pc = 0x29D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9F8u;
        // 0x29d9fc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA00u;
        goto label_29da00;
    }
    ctx->pc = 0x29D9F8u;
    {
        const bool branch_taken_0x29d9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9F8u;
        // 0x29d9fc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d9f8) {
            ctx->pc = 0x29D744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d744;
        }
    }
    ctx->pc = 0x29DA00u;
label_29da00:
    // 0x29da00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29da00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29da04:
    // 0x29da04: 0x1000027a  b           . + 4 + (0x27A << 2)
label_29da08:
    if (ctx->pc == 0x29DA08u) {
        ctx->pc = 0x29DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA04u;
        // 0x29da08: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA0Cu;
        goto label_29da0c;
    }
    ctx->pc = 0x29DA04u;
    {
        const bool branch_taken_0x29da04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA04u;
        // 0x29da08: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29da04) {
            ctx->pc = 0x29E3F0u;
            goto label_29e3f0;
        }
    }
    ctx->pc = 0x29DA0Cu;
label_29da0c:
    // 0x29da0c: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x29da0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
label_29da10:
    // 0x29da10: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x29da10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_29da14:
    // 0x29da14: 0x2484e6b0  addiu       $a0, $a0, -0x1950
    ctx->pc = 0x29da14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960816));
label_29da18:
    // 0x29da18: 0x246211d1  addiu       $v0, $v1, 0x11D1
    ctx->pc = 0x29da18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4561));
label_29da1c:
    // 0x29da1c: 0xafa40270  sw          $a0, 0x270($sp)
    ctx->pc = 0x29da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 4));
label_29da20:
    // 0x29da20: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29da20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_29da24:
    // 0x29da24: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x29da24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_29da28:
    // 0x29da28: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x29da28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29da2c:
    // 0x29da2c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x29da2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_29da30:
    // 0x29da30: 0xafa4026c  sw          $a0, 0x26C($sp)
    ctx->pc = 0x29da30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
label_29da34:
    // 0x29da34: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29da34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_29da38:
    // 0x29da38: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x29da38u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_29da3c:
    // 0x29da3c: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x29da3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29da40:
    // 0x29da40: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x29da40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_29da44:
    // 0x29da44: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x29da44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29da48:
    // 0x29da48: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_29da4c:
    if (ctx->pc == 0x29DA4Cu) {
        ctx->pc = 0x29DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA48u;
        // 0x29da4c: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA50u;
        goto label_29da50;
    }
    ctx->pc = 0x29DA48u;
    {
        const bool branch_taken_0x29da48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29da48) {
            ctx->pc = 0x29DA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DA48u;
            // 0x29da4c: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DA6Cu;
            goto label_29da6c;
        }
    }
    ctx->pc = 0x29DA50u;
label_29da50:
    // 0x29da50: 0xc0a7274  jal         func_29C9D0
label_29da54:
    if (ctx->pc == 0x29DA54u) {
        ctx->pc = 0x29DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA50u;
        // 0x29da54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA58u;
        goto label_29da58;
    }
    ctx->pc = 0x29DA50u;
    SET_GPR_U32(ctx, 31, 0x29DA58u);
    ctx->pc = 0x29DA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DA50u;
    // 0x29da54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C9D0u, 0x29DA50u, 0x29DA58u)) {
        return;
    }
    ctx->pc = 0x29DA58u;
label_29da58:
    // 0x29da58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29da58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29da5c:
    // 0x29da5c: 0x50430257  beql        $v0, $v1, . + 4 + (0x257 << 2)
label_29da60:
    if (ctx->pc == 0x29DA60u) {
        ctx->pc = 0x29DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA5Cu;
        // 0x29da60: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA64u;
        goto label_29da64;
    }
    ctx->pc = 0x29DA5Cu;
    {
        const bool branch_taken_0x29da5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29da5c) {
            ctx->pc = 0x29DA60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DA5Cu;
            // 0x29da60: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E3BCu;
            goto label_29e3bc;
        }
    }
    ctx->pc = 0x29DA64u;
label_29da64:
    // 0x29da64: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x29da64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29da68:
    // 0x29da68: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x29da68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29da6c:
    // 0x29da6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29da70:
    // 0x29da70: 0x10620251  beq         $v1, $v0, . + 4 + (0x251 << 2)
label_29da74:
    if (ctx->pc == 0x29DA74u) {
        ctx->pc = 0x29DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA70u;
        // 0x29da74: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA78u;
        goto label_29da78;
    }
    ctx->pc = 0x29DA70u;
    {
        const bool branch_taken_0x29da70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA70u;
        // 0x29da74: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29da70) {
            ctx->pc = 0x29E3B8u;
            goto label_29e3b8;
        }
    }
    ctx->pc = 0x29DA78u;
label_29da78:
    // 0x29da78: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_29da7c:
    if (ctx->pc == 0x29DA7Cu) {
        ctx->pc = 0x29DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA78u;
        // 0x29da7c: 0x2e220005  sltiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA80u;
        goto label_29da80;
    }
    ctx->pc = 0x29DA78u;
    {
        const bool branch_taken_0x29da78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA78u;
        // 0x29da7c: 0x2e220005  sltiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29da78) {
            ctx->pc = 0x29DAFCu;
            goto label_29dafc;
        }
    }
    ctx->pc = 0x29DA80u;
label_29da80:
    // 0x29da80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x29da80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_29da84:
    // 0x29da84: 0x244411d1  addiu       $a0, $v0, 0x11D1
    ctx->pc = 0x29da84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4561));
label_29da88:
    // 0x29da88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29da88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_29da8c:
    // 0x29da8c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x29da8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29da90:
    // 0x29da90: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x29da90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_29da94:
    // 0x29da94: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_29da98:
    if (ctx->pc == 0x29DA98u) {
        ctx->pc = 0x29DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA94u;
        // 0x29da98: 0x2e220005  sltiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA9Cu;
        goto label_29da9c;
    }
    ctx->pc = 0x29DA94u;
    {
        const bool branch_taken_0x29da94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA94u;
        // 0x29da98: 0x2e220005  sltiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29da94) {
            ctx->pc = 0x29DAFCu;
            goto label_29dafc;
        }
    }
    ctx->pc = 0x29DA9Cu;
label_29da9c:
    // 0x29da9c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x29da9cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29daa0:
    // 0x29daa0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x29daa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29daa4:
    // 0x29daa4: 0x0  nop
    ctx->pc = 0x29daa4u;
    // NOP
label_29daa8:
    // 0x29daa8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x29daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_29daac:
    // 0x29daac: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x29daacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_29dab0:
    // 0x29dab0: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x29dab0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_29dab4:
    // 0x29dab4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x29dab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29dab8:
    // 0x29dab8: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x29dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_29dabc:
    // 0x29dabc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29dabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_29dac0:
    // 0x29dac0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_29dac4:
    if (ctx->pc == 0x29DAC4u) {
        ctx->pc = 0x29DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAC0u;
        // 0x29dac4: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DAC8u;
        goto label_29dac8;
    }
    ctx->pc = 0x29DAC0u;
    {
        const bool branch_taken_0x29dac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAC0u;
        // 0x29dac4: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dac0) {
            ctx->pc = 0x29DAD8u;
            goto label_29dad8;
        }
    }
    ctx->pc = 0x29DAC8u;
label_29dac8:
    // 0x29dac8: 0xc0a7274  jal         func_29C9D0
label_29dacc:
    if (ctx->pc == 0x29DACCu) {
        ctx->pc = 0x29DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAC8u;
        // 0x29dacc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DAD0u;
        goto label_29dad0;
    }
    ctx->pc = 0x29DAC8u;
    SET_GPR_U32(ctx, 31, 0x29DAD0u);
    ctx->pc = 0x29DACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DAC8u;
    // 0x29dacc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C9D0u, 0x29DAC8u, 0x29DAD0u)) {
        return;
    }
    ctx->pc = 0x29DAD0u;
label_29dad0:
    // 0x29dad0: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
label_29dad4:
    if (ctx->pc == 0x29DAD4u) {
        ctx->pc = 0x29DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAD0u;
        // 0x29dad4: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DAD8u;
        goto label_29dad8;
    }
    ctx->pc = 0x29DAD0u;
    {
        const bool branch_taken_0x29dad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x29DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAD0u;
        // 0x29dad4: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dad0) {
            ctx->pc = 0x29DAE0u;
            goto label_29dae0;
        }
    }
    ctx->pc = 0x29DAD8u;
label_29dad8:
    // 0x29dad8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x29dad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29dadc:
    // 0x29dadc: 0x90b00000  lbu         $s0, 0x0($a1)
    ctx->pc = 0x29dadcu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29dae0:
    // 0x29dae0: 0x12120235  beq         $s0, $s2, . + 4 + (0x235 << 2)
label_29dae4:
    if (ctx->pc == 0x29DAE4u) {
        ctx->pc = 0x29DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAE0u;
        // 0x29dae4: 0x21e1821  addu        $v1, $s0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DAE8u;
        goto label_29dae8;
    }
    ctx->pc = 0x29DAE0u;
    {
        const bool branch_taken_0x29dae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x29DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAE0u;
        // 0x29dae4: 0x21e1821  addu        $v1, $s0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dae0) {
            ctx->pc = 0x29E3B8u;
            goto label_29e3b8;
        }
    }
    ctx->pc = 0x29DAE8u;
label_29dae8:
    // 0x29dae8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x29dae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29daec:
    // 0x29daec: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x29daecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_29daf0:
    // 0x29daf0: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_29daf4:
    if (ctx->pc == 0x29DAF4u) {
        ctx->pc = 0x29DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAF0u;
        // 0x29daf4: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DAF8u;
        goto label_29daf8;
    }
    ctx->pc = 0x29DAF0u;
    {
        const bool branch_taken_0x29daf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29daf0) {
            ctx->pc = 0x29DAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DAF0u;
            // 0x29daf4: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29daa8;
        }
    }
    ctx->pc = 0x29DAF8u;
label_29daf8:
    // 0x29daf8: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x29daf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_29dafc:
    // 0x29dafc: 0x1040ff10  beqz        $v0, . + 4 + (-0xF0 << 2)
label_29db00:
    if (ctx->pc == 0x29DB00u) {
        ctx->pc = 0x29DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAFCu;
        // 0x29db00: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB04u;
        goto label_29db04;
    }
    ctx->pc = 0x29DAFCu;
    {
        const bool branch_taken_0x29dafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAFCu;
        // 0x29db00: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dafc) {
            ctx->pc = 0x29D740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d740;
        }
    }
    ctx->pc = 0x29DB04u;
label_29db04:
    // 0x29db04: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x29db04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_29db08:
    // 0x29db08: 0x2442dc90  addiu       $v0, $v0, -0x2370
    ctx->pc = 0x29db08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958224));
label_29db0c:
    // 0x29db0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29db0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29db10:
    // 0x29db10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29db10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29db14:
    // 0x29db14: 0x800008  jr          $a0
label_29db18:
    if (ctx->pc == 0x29DB18u) {
        ctx->pc = 0x29DB1Cu;
        goto label_29db1c;
    }
    ctx->pc = 0x29DB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29DB1Cu: goto label_29db1c;
            case 0x29DBF4u: goto label_29dbf4;
            case 0x29DD88u: goto label_29dd88;
            case 0x29DF70u: goto label_29df70;
            case 0x29E1CCu: goto label_29e1cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DB14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29DB1Cu;
label_29db1c:
    // 0x29db1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29db20:
    // 0x29db20: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x29db20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_29db24:
    // 0x29db24: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_29db28:
    if (ctx->pc == 0x29DB28u) {
        ctx->pc = 0x29DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB24u;
        // 0x29db28: 0x55a80a  movz        $s5, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB2Cu;
        goto label_29db2c;
    }
    ctx->pc = 0x29DB24u;
    {
        const bool branch_taken_0x29db24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB24u;
        // 0x29db28: 0x55a80a  movz        $s5, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db24) {
            ctx->pc = 0x29DBA4u;
            goto label_29dba4;
        }
    }
    ctx->pc = 0x29DB2Cu;
label_29db2c:
    // 0x29db2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29db2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29db30:
    // 0x29db30: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x29db30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29db34:
    // 0x29db34: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x29db34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_29db38:
    // 0x29db38: 0x15303c  dsll32      $a2, $s5, 0
    ctx->pc = 0x29db38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (32 + 0));
label_29db3c:
    // 0x29db3c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29db3cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_29db40:
    // 0x29db40: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x29db40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29db44:
    // 0x29db44: 0x658023  subu        $s0, $v1, $a1
    ctx->pc = 0x29db44u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_29db48:
    // 0x29db48: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x29db48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_29db4c:
    // 0x29db4c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_29db50:
    if (ctx->pc == 0x29DB50u) {
        ctx->pc = 0x29DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB4Cu;
        // 0x29db50: 0xb01021  addu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB54u;
        goto label_29db54;
    }
    ctx->pc = 0x29DB4Cu;
    {
        const bool branch_taken_0x29db4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB4Cu;
        // 0x29db50: 0xb01021  addu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db4c) {
            ctx->pc = 0x29DB84u;
            goto label_29db84;
        }
    }
    ctx->pc = 0x29DB54u;
label_29db54:
    // 0x29db54: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x29db54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_29db58:
    // 0x29db58: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x29db58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_29db5c:
    // 0x29db5c: 0x2b0a82f  dsubu       $s5, $s5, $s0
    ctx->pc = 0x29db5cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) - GPR_U64(ctx, 16));
label_29db60:
    // 0x29db60: 0xc0a7274  jal         func_29C9D0
label_29db64:
    if (ctx->pc == 0x29DB64u) {
        ctx->pc = 0x29DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB60u;
        // 0x29db64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB68u;
        goto label_29db68;
    }
    ctx->pc = 0x29DB60u;
    SET_GPR_U32(ctx, 31, 0x29DB68u);
    ctx->pc = 0x29DB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DB60u;
    // 0x29db64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C9D0u, 0x29DB60u, 0x29DB68u)) {
        return;
    }
    ctx->pc = 0x29DB68u;
label_29db68:
    // 0x29db68: 0x5452fff3  bnel        $v0, $s2, . + 4 + (-0xD << 2)
label_29db6c:
    if (ctx->pc == 0x29DB6Cu) {
        ctx->pc = 0x29DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB68u;
        // 0x29db6c: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB70u;
        goto label_29db70;
    }
    ctx->pc = 0x29DB68u;
    {
        const bool branch_taken_0x29db68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x29db68) {
            ctx->pc = 0x29DB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DB68u;
            // 0x29db6c: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29db38;
        }
    }
    ctx->pc = 0x29DB70u;
label_29db70:
    // 0x29db70: 0x12200211  beqz        $s1, . + 4 + (0x211 << 2)
label_29db74:
    if (ctx->pc == 0x29DB74u) {
        ctx->pc = 0x29DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB70u;
        // 0x29db74: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB78u;
        goto label_29db78;
    }
    ctx->pc = 0x29DB70u;
    {
        const bool branch_taken_0x29db70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB70u;
        // 0x29db74: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db70) {
            ctx->pc = 0x29E3B8u;
            goto label_29e3b8;
        }
    }
    ctx->pc = 0x29DB78u;
label_29db78:
    // 0x29db78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29db78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29db7c:
    // 0x29db7c: 0x10000004  b           . + 4 + (0x4 << 2)
label_29db80:
    if (ctx->pc == 0x29DB80u) {
        ctx->pc = 0x29DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB7Cu;
        // 0x29db80: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB84u;
        goto label_29db84;
    }
    ctx->pc = 0x29DB7Cu;
    {
        const bool branch_taken_0x29db7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB7Cu;
        // 0x29db80: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db7c) {
            ctx->pc = 0x29DB90u;
            goto label_29db90;
        }
    }
    ctx->pc = 0x29DB84u;
label_29db84:
    // 0x29db84: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x29db84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_29db88:
    // 0x29db88: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x29db88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_29db8c:
    // 0x29db8c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x29db8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_29db90:
    // 0x29db90: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x29db90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_29db94:
    // 0x29db94: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x29db94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_29db98:
    // 0x29db98: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x29db98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_29db9c:
    // 0x29db9c: 0x1000fee9  b           . + 4 + (-0x117 << 2)
label_29dba0:
    if (ctx->pc == 0x29DBA0u) {
        ctx->pc = 0x29DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB9Cu;
        // 0x29dba0: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DBA4u;
        goto label_29dba4;
    }
    ctx->pc = 0x29DB9Cu;
    {
        const bool branch_taken_0x29db9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB9Cu;
        // 0x29dba0: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db9c) {
            ctx->pc = 0x29D744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d744;
        }
    }
    ctx->pc = 0x29DBA4u;
label_29dba4:
    // 0x29dba4: 0x8e830050  lw          $v1, 0x50($s4)
    ctx->pc = 0x29dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_29dba8:
    // 0x29dba8: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x29dba8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_29dbac:
    // 0x29dbac: 0x8ec5fff8  lw          $a1, -0x8($s6)
    ctx->pc = 0x29dbacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_29dbb0:
    // 0x29dbb0: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x29dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_29dbb4:
    // 0x29dbb4: 0x15303c  dsll32      $a2, $s5, 0
    ctx->pc = 0x29dbb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (32 + 0));
label_29dbb8:
    // 0x29dbb8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29dbb8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_29dbbc:
    // 0x29dbbc: 0x40f809  jalr        $v0
label_29dbc0:
    if (ctx->pc == 0x29DBC0u) {
        ctx->pc = 0x29DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBBCu;
        // 0x29dbc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DBC4u;
        goto label_29dbc4;
    }
    ctx->pc = 0x29DBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29DBC4u);
        ctx->pc = 0x29DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBBCu;
        // 0x29dbc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DBBCu, 0x29DBC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29DBC4u;
label_29dbc4:
    // 0x29dbc4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29dbc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29dbc8:
    // 0x29dbc8: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x29dbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_29dbcc:
    // 0x29dbcc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29dbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_29dbd0:
    // 0x29dbd0: 0x145501f9  bne         $v0, $s5, . + 4 + (0x1F9 << 2)
label_29dbd4:
    if (ctx->pc == 0x29DBD4u) {
        ctx->pc = 0x29DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBD0u;
        // 0x29dbd4: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DBD8u;
        goto label_29dbd8;
    }
    ctx->pc = 0x29DBD0u;
    {
        const bool branch_taken_0x29dbd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x29DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBD0u;
        // 0x29dbd4: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbd0) {
            ctx->pc = 0x29E3B8u;
            goto label_29e3b8;
        }
    }
    ctx->pc = 0x29DBD8u;
label_29dbd8:
    // 0x29dbd8: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x29dbd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_29dbdc:
    // 0x29dbdc: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x29dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_29dbe0:
    // 0x29dbe0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x29dbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_29dbe4:
    // 0x29dbe4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29dbe8:
    // 0x29dbe8: 0xafa40268  sw          $a0, 0x268($sp)
    ctx->pc = 0x29dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
label_29dbec:
    // 0x29dbec: 0x1000fed5  b           . + 4 + (-0x12B << 2)
label_29dbf0:
    if (ctx->pc == 0x29DBF0u) {
        ctx->pc = 0x29DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBECu;
        // 0x29dbf0: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DBF4u;
        goto label_29dbf4;
    }
    ctx->pc = 0x29DBECu;
    {
        const bool branch_taken_0x29dbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBECu;
        // 0x29dbf0: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbec) {
            ctx->pc = 0x29D744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d744;
        }
    }
    ctx->pc = 0x29DBF4u;
label_29dbf4:
    // 0x29dbf4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29dbf8:
    // 0x29dbf8: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x29dbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_29dbfc:
    // 0x29dbfc: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_29dc00:
    if (ctx->pc == 0x29DC00u) {
        ctx->pc = 0x29DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBFCu;
        // 0x29dc00: 0x55a80a  movz        $s5, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DC04u;
        goto label_29dc04;
    }
    ctx->pc = 0x29DBFCu;
    {
        const bool branch_taken_0x29dbfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBFCu;
        // 0x29dc00: 0x55a80a  movz        $s5, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbfc) {
            ctx->pc = 0x29DCB0u;
            goto label_29dcb0;
        }
    }
    ctx->pc = 0x29DC04u;
label_29dc04:
    // 0x29dc04: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x29dc04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29dc08:
    // 0x29dc08: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x29dc08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29dc0c:
    // 0x29dc0c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x29dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_29dc10:
    // 0x29dc10: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x29dc10u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29dc14:
    // 0x29dc14: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
label_29dc18:
    if (ctx->pc == 0x29DC18u) {
        ctx->pc = 0x29DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC14u;
        // 0x29dc18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DC1Cu;
        goto label_29dc1c;
    }
    ctx->pc = 0x29DC14u;
    {
        const bool branch_taken_0x29dc14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC14u;
        // 0x29dc18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc14) {
            ctx->pc = 0x29DCA0u;
            goto label_29dca0;
        }
    }
    ctx->pc = 0x29DC1Cu;
label_29dc1c:
    // 0x29dc1c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x29dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_29dc20:
    // 0x29dc20: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x29dc20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29dc24:
    // 0x29dc24: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x29dc24u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_29dc28:
    // 0x29dc28: 0x12a0001d  beqz        $s5, . + 4 + (0x1D << 2)
label_29dc2c:
    if (ctx->pc == 0x29DC2Cu) {
        ctx->pc = 0x29DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC28u;
        // 0x29dc2c: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DC30u;
        goto label_29dc30;
    }
    ctx->pc = 0x29DC28u;
    {
        const bool branch_taken_0x29dc28 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC28u;
        // 0x29dc2c: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc28) {
            ctx->pc = 0x29DCA0u;
            goto label_29dca0;
        }
    }
    ctx->pc = 0x29DC30u;
label_29dc30:
    // 0x29dc30: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x29dc30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29dc34:
    // 0x29dc34: 0x0  nop
    ctx->pc = 0x29dc34u;
    // NOP
label_29dc38:
    // 0x29dc38: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x29dc38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29dc3c:
    // 0x29dc3c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x29dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_29dc40:
    // 0x29dc40: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x29dc40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29dc44:
    // 0x29dc44: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_29dc48:
    if (ctx->pc == 0x29DC48u) {
        ctx->pc = 0x29DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC44u;
        // 0x29dc48: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DC4Cu;
        goto label_29dc4c;
    }
    ctx->pc = 0x29DC44u;
    {
        const bool branch_taken_0x29dc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29dc44) {
            ctx->pc = 0x29DC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DC44u;
            // 0x29dc48: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DC64u;
            goto label_29dc64;
        }
    }
    ctx->pc = 0x29DC4Cu;
label_29dc4c:
    // 0x29dc4c: 0xc0a7274  jal         func_29C9D0
label_29dc50:
    if (ctx->pc == 0x29DC50u) {
        ctx->pc = 0x29DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC4Cu;
        // 0x29dc50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DC54u;
        goto label_29dc54;
    }
    ctx->pc = 0x29DC4Cu;
    SET_GPR_U32(ctx, 31, 0x29DC54u);
    ctx->pc = 0x29DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DC4Cu;
    // 0x29dc50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C9D0u, 0x29DC4Cu, 0x29DC54u)) {
        return;
    }
    ctx->pc = 0x29DC54u;
label_29dc54:
    // 0x29dc54: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_29dc58:
    if (ctx->pc == 0x29DC58u) {
        ctx->pc = 0x29DC5Cu;
        goto label_29dc5c;
    }
    ctx->pc = 0x29DC54u;
    {
        const bool branch_taken_0x29dc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x29dc54) {
            ctx->pc = 0x29DC6Cu;
            goto label_29dc6c;
        }
    }
    ctx->pc = 0x29DC5Cu;
label_29dc5c:
    // 0x29dc5c: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x29dc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29dc60:
    // 0x29dc60: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x29dc60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29dc64:
    // 0x29dc64: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
label_29dc68:
    if (ctx->pc == 0x29DC68u) {
        ctx->pc = 0x29DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC64u;
        // 0x29dc68: 0x3a21021  addu        $v0, $sp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DC6Cu;
        goto label_29dc6c;
    }
    ctx->pc = 0x29DC64u;
    {
        const bool branch_taken_0x29dc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x29dc64) {
            ctx->pc = 0x29DC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DC64u;
            // 0x29dc68: 0x3a21021  addu        $v0, $sp, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DC80u;
            goto label_29dc80;
        }
    }
    ctx->pc = 0x29DC6Cu;
label_29dc6c:
    // 0x29dc6c: 0x120001d2  beqz        $s0, . + 4 + (0x1D2 << 2)
label_29dc70:
    if (ctx->pc == 0x29DC70u) {
        ctx->pc = 0x29DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC6Cu;
        // 0x29dc70: 0x8fa30274  lw          $v1, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DC74u;
        goto label_29dc74;
    }
    ctx->pc = 0x29DC6Cu;
    {
        const bool branch_taken_0x29dc6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC6Cu;
        // 0x29dc70: 0x8fa30274  lw          $v1, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc6c) {
            ctx->pc = 0x29E3B8u;
            goto label_29e3b8;
        }
    }
    ctx->pc = 0x29DC74u;
label_29dc74:
    // 0x29dc74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29dc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29dc78:
    // 0x29dc78: 0x10000009  b           . + 4 + (0x9 << 2)
label_29dc7c:
    if (ctx->pc == 0x29DC7Cu) {
        ctx->pc = 0x29DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC78u;
        // 0x29dc7c: 0xafa30274  sw          $v1, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DC80u;
        goto label_29dc80;
    }
    ctx->pc = 0x29DC78u;
    {
        const bool branch_taken_0x29dc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC78u;
        // 0x29dc7c: 0xafa30274  sw          $v1, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc78) {
            ctx->pc = 0x29DCA0u;
            goto label_29dca0;
        }
    }
    ctx->pc = 0x29DC80u;
label_29dc80:
    // 0x29dc80: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x29dc80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_29dc84:
    // 0x29dc84: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_29dc88:
    if (ctx->pc == 0x29DC88u) {
        ctx->pc = 0x29DC8Cu;
        goto label_29dc8c;
    }
    ctx->pc = 0x29DC84u;
    {
        const bool branch_taken_0x29dc84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dc84) {
            ctx->pc = 0x29DCA0u;
            goto label_29dca0;
        }
    }
    ctx->pc = 0x29DC8Cu;
label_29dc8c:
    // 0x29dc8c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x29dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_29dc90:
    // 0x29dc90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29dc90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29dc94:
    // 0x29dc94: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x29dc94u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_29dc98:
    // 0x29dc98: 0x16a0ffe7  bnez        $s5, . + 4 + (-0x19 << 2)
label_29dc9c:
    if (ctx->pc == 0x29DC9Cu) {
        ctx->pc = 0x29DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC98u;
        // 0x29dc9c: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DCA0u;
        goto label_29dca0;
    }
    ctx->pc = 0x29DC98u;
    {
        const bool branch_taken_0x29dc98 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC98u;
        // 0x29dc9c: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc98) {
            ctx->pc = 0x29DC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29dc38;
        }
    }
    ctx->pc = 0x29DCA0u;
label_29dca0:
    // 0x29dca0: 0x120001cd  beqz        $s0, . + 4 + (0x1CD << 2)
label_29dca4:
    if (ctx->pc == 0x29DCA4u) {
        ctx->pc = 0x29DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCA0u;
        // 0x29dca4: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DCA8u;
        goto label_29dca8;
    }
    ctx->pc = 0x29DCA0u;
    {
        const bool branch_taken_0x29dca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCA0u;
        // 0x29dca4: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dca0) {
            ctx->pc = 0x29E3D8u;
            goto label_29e3d8;
        }
    }
    ctx->pc = 0x29DCA8u;
label_29dca8:
    // 0x29dca8: 0x10000034  b           . + 4 + (0x34 << 2)
label_29dcac:
    if (ctx->pc == 0x29DCACu) {
        ctx->pc = 0x29DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCA8u;
        // 0x29dcac: 0x26f30001  addiu       $s3, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DCB0u;
        goto label_29dcb0;
    }
    ctx->pc = 0x29DCA8u;
    {
        const bool branch_taken_0x29dca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCA8u;
        // 0x29dcac: 0x26f30001  addiu       $s3, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dca8) {
            ctx->pc = 0x29DD7Cu;
            goto label_29dd7c;
        }
    }
    ctx->pc = 0x29DCB0u;
label_29dcb0:
    // 0x29dcb0: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x29dcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29dcb4:
    // 0x29dcb4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x29dcb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_29dcb8:
    // 0x29dcb8: 0x8ed2fff8  lw          $s2, -0x8($s6)
    ctx->pc = 0x29dcb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_29dcbc:
    // 0x29dcbc: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x29dcbcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29dcc0:
    // 0x29dcc0: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x29dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_29dcc4:
    // 0x29dcc4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x29dcc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_29dcc8:
    // 0x29dcc8: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_29dccc:
    if (ctx->pc == 0x29DCCCu) {
        ctx->pc = 0x29DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCC8u;
        // 0x29dccc: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DCD0u;
        goto label_29dcd0;
    }
    ctx->pc = 0x29DCC8u;
    {
        const bool branch_taken_0x29dcc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCC8u;
        // 0x29dccc: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dcc8) {
            ctx->pc = 0x29DD58u;
            goto label_29dd58;
        }
    }
    ctx->pc = 0x29DCD0u;
label_29dcd0:
    // 0x29dcd0: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x29dcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
label_29dcd4:
    // 0x29dcd4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x29dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_29dcd8:
    // 0x29dcd8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x29dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_29dcdc:
    // 0x29dcdc: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x29dcdcu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_29dce0:
    // 0x29dce0: 0x12a0001d  beqz        $s5, . + 4 + (0x1D << 2)
label_29dce4:
    if (ctx->pc == 0x29DCE4u) {
        ctx->pc = 0x29DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCE0u;
        // 0x29dce4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DCE8u;
        goto label_29dce8;
    }
    ctx->pc = 0x29DCE0u;
    {
        const bool branch_taken_0x29dce0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCE0u;
        // 0x29dce4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dce0) {
            ctx->pc = 0x29DD58u;
            goto label_29dd58;
        }
    }
    ctx->pc = 0x29DCE8u;
label_29dce8:
    // 0x29dce8: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x29dce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29dcec:
    // 0x29dcec: 0x0  nop
    ctx->pc = 0x29dcecu;
    // NOP
label_29dcf0:
    // 0x29dcf0: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x29dcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29dcf4:
    // 0x29dcf4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x29dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_29dcf8:
    // 0x29dcf8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x29dcf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29dcfc:
    // 0x29dcfc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_29dd00:
    if (ctx->pc == 0x29DD00u) {
        ctx->pc = 0x29DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCFCu;
        // 0x29dd00: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DD04u;
        goto label_29dd04;
    }
    ctx->pc = 0x29DCFCu;
    {
        const bool branch_taken_0x29dcfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29dcfc) {
            ctx->pc = 0x29DD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DCFCu;
            // 0x29dd00: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DD1Cu;
            goto label_29dd1c;
        }
    }
    ctx->pc = 0x29DD04u;
label_29dd04:
    // 0x29dd04: 0xc0a7274  jal         func_29C9D0
label_29dd08:
    if (ctx->pc == 0x29DD08u) {
        ctx->pc = 0x29DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD04u;
        // 0x29dd08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DD0Cu;
        goto label_29dd0c;
    }
    ctx->pc = 0x29DD04u;
    SET_GPR_U32(ctx, 31, 0x29DD0Cu);
    ctx->pc = 0x29DD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DD04u;
    // 0x29dd08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C9D0u, 0x29DD04u, 0x29DD0Cu)) {
        return;
    }
    ctx->pc = 0x29DD0Cu;
label_29dd0c:
    // 0x29dd0c: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_29dd10:
    if (ctx->pc == 0x29DD10u) {
        ctx->pc = 0x29DD14u;
        goto label_29dd14;
    }
    ctx->pc = 0x29DD0Cu;
    {
        const bool branch_taken_0x29dd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x29dd0c) {
            ctx->pc = 0x29DD24u;
            goto label_29dd24;
        }
    }
    ctx->pc = 0x29DD14u;
label_29dd14:
    // 0x29dd14: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x29dd14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29dd18:
    // 0x29dd18: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x29dd18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29dd1c:
    // 0x29dd1c: 0x14900006  bne         $a0, $s0, . + 4 + (0x6 << 2)
label_29dd20:
    if (ctx->pc == 0x29DD20u) {
        ctx->pc = 0x29DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD1Cu;
        // 0x29dd20: 0x3a41021  addu        $v0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DD24u;
        goto label_29dd24;
    }
    ctx->pc = 0x29DD1Cu;
    {
        const bool branch_taken_0x29dd1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x29DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD1Cu;
        // 0x29dd20: 0x3a41021  addu        $v0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd1c) {
            ctx->pc = 0x29DD38u;
            goto label_29dd38;
        }
    }
    ctx->pc = 0x29DD24u;
label_29dd24:
    // 0x29dd24: 0x125101a4  beq         $s2, $s1, . + 4 + (0x1A4 << 2)
label_29dd28:
    if (ctx->pc == 0x29DD28u) {
        ctx->pc = 0x29DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD24u;
        // 0x29dd28: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DD2Cu;
        goto label_29dd2c;
    }
    ctx->pc = 0x29DD24u;
    {
        const bool branch_taken_0x29dd24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x29DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD24u;
        // 0x29dd28: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd24) {
            ctx->pc = 0x29E3B8u;
            goto label_29e3b8;
        }
    }
    ctx->pc = 0x29DD2Cu;
label_29dd2c:
    // 0x29dd2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29dd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_29dd30:
    // 0x29dd30: 0x10000009  b           . + 4 + (0x9 << 2)
label_29dd34:
    if (ctx->pc == 0x29DD34u) {
        ctx->pc = 0x29DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD30u;
        // 0x29dd34: 0xafa40274  sw          $a0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DD38u;
        goto label_29dd38;
    }
    ctx->pc = 0x29DD30u;
    {
        const bool branch_taken_0x29dd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD30u;
        // 0x29dd34: 0xafa40274  sw          $a0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd30) {
            ctx->pc = 0x29DD58u;
            goto label_29dd58;
        }
    }
    ctx->pc = 0x29DD38u;
label_29dd38:
    // 0x29dd38: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x29dd38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_29dd3c:
    // 0x29dd3c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_29dd40:
    if (ctx->pc == 0x29DD40u) {
        ctx->pc = 0x29DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD3Cu;
        // 0x29dd40: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DD44u;
        goto label_29dd44;
    }
    ctx->pc = 0x29DD3Cu;
    {
        const bool branch_taken_0x29dd3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD3Cu;
        // 0x29dd40: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd3c) {
            ctx->pc = 0x29DD58u;
            goto label_29dd58;
        }
    }
    ctx->pc = 0x29DD44u;
label_29dd44:
    // 0x29dd44: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x29dd44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
label_29dd48:
    // 0x29dd48: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x29dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_29dd4c:
    // 0x29dd4c: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x29dd4cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_29dd50:
    // 0x29dd50: 0x16a0ffe7  bnez        $s5, . + 4 + (-0x19 << 2)
label_29dd54:
    if (ctx->pc == 0x29DD54u) {
        ctx->pc = 0x29DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD50u;
        // 0x29dd54: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DD58u;
        goto label_29dd58;
    }
    ctx->pc = 0x29DD50u;
    {
        const bool branch_taken_0x29dd50 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD50u;
        // 0x29dd54: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd50) {
            ctx->pc = 0x29DCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29dcf0;
        }
    }
    ctx->pc = 0x29DD58u;
label_29dd58:
    // 0x29dd58: 0x2518023  subu        $s0, $s2, $s1
    ctx->pc = 0x29dd58u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_29dd5c:
    // 0x29dd5c: 0x1200019f  beqz        $s0, . + 4 + (0x19F << 2)
label_29dd60:
    if (ctx->pc == 0x29DD60u) {
        ctx->pc = 0x29DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD5Cu;
        // 0x29dd60: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DD64u;
        goto label_29dd64;
    }
    ctx->pc = 0x29DD5Cu;
    {
        const bool branch_taken_0x29dd5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD5Cu;
        // 0x29dd60: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd5c) {
            ctx->pc = 0x29E3DCu;
            goto label_29e3dc;
        }
    }
    ctx->pc = 0x29DD64u;
label_29dd64:
    // 0x29dd64: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x29dd64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_29dd68:
    // 0x29dd68: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x29dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_29dd6c:
    // 0x29dd6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29dd70:
    // 0x29dd70: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x29dd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_29dd74:
    // 0x29dd74: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x29dd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_29dd78:
    // 0x29dd78: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x29dd78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_29dd7c:
    // 0x29dd7c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x29dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_29dd80:
    // 0x29dd80: 0x1000fe70  b           . + 4 + (-0x190 << 2)
label_29dd84:
    if (ctx->pc == 0x29DD84u) {
        ctx->pc = 0x29DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD80u;
        // 0x29dd84: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DD88u;
        goto label_29dd88;
    }
    ctx->pc = 0x29DD80u;
    {
        const bool branch_taken_0x29dd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD80u;
        // 0x29dd84: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd80) {
            ctx->pc = 0x29D744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d744;
        }
    }
    ctx->pc = 0x29DD88u;
label_29dd88:
    // 0x29dd88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29dd8c:
    // 0x29dd8c: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x29dd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_29dd90:
    // 0x29dd90: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
label_29dd94:
    if (ctx->pc == 0x29DD94u) {
        ctx->pc = 0x29DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD90u;
        // 0x29dd94: 0x55a80a  movz        $s5, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DD98u;
        goto label_29dd98;
    }
    ctx->pc = 0x29DD90u;
    {
        const bool branch_taken_0x29dd90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD90u;
        // 0x29dd94: 0x55a80a  movz        $s5, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd90) {
            ctx->pc = 0x29DE68u;
            goto label_29de68;
        }
    }
    ctx->pc = 0x29DD98u;
label_29dd98:
    // 0x29dd98: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x29dd98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29dd9c:
    // 0x29dd9c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x29dd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_29dda0:
    // 0x29dda0: 0x248211d1  addiu       $v0, $a0, 0x11D1
    ctx->pc = 0x29dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4561));
label_29dda4:
    // 0x29dda4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x29dda4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29dda8:
    // 0x29dda8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29ddac:
    // 0x29ddac: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x29ddacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29ddb0:
    // 0x29ddb0: 0x30840008  andi        $a0, $a0, 0x8
    ctx->pc = 0x29ddb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_29ddb4:
    // 0x29ddb4: 0x14800027  bnez        $a0, . + 4 + (0x27 << 2)
label_29ddb8:
    if (ctx->pc == 0x29DDB8u) {
        ctx->pc = 0x29DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDB4u;
        // 0x29ddb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DDBCu;
        goto label_29ddbc;
    }
    ctx->pc = 0x29DDB4u;
    {
        const bool branch_taken_0x29ddb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDB4u;
        // 0x29ddb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ddb4) {
            ctx->pc = 0x29DE54u;
            goto label_29de54;
        }
    }
    ctx->pc = 0x29DDBCu;
label_29ddbc:
    // 0x29ddbc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x29ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_29ddc0:
    // 0x29ddc0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x29ddc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ddc4:
    // 0x29ddc4: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x29ddc4u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_29ddc8:
    // 0x29ddc8: 0x12a00022  beqz        $s5, . + 4 + (0x22 << 2)
label_29ddcc:
    if (ctx->pc == 0x29DDCCu) {
        ctx->pc = 0x29DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDC8u;
        // 0x29ddcc: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DDD0u;
        goto label_29ddd0;
    }
    ctx->pc = 0x29DDC8u;
    {
        const bool branch_taken_0x29ddc8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDC8u;
        // 0x29ddcc: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ddc8) {
            ctx->pc = 0x29DE54u;
            goto label_29de54;
        }
    }
    ctx->pc = 0x29DDD0u;
label_29ddd0:
    // 0x29ddd0: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x29ddd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_29ddd4:
    // 0x29ddd4: 0x0  nop
    ctx->pc = 0x29ddd4u;
    // NOP
label_29ddd8:
    // 0x29ddd8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x29ddd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29dddc:
    // 0x29dddc: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x29dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_29dde0:
    // 0x29dde0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x29dde0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29dde4:
    // 0x29dde4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_29dde8:
    if (ctx->pc == 0x29DDE8u) {
        ctx->pc = 0x29DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDE4u;
        // 0x29dde8: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DDECu;
        goto label_29ddec;
    }
    ctx->pc = 0x29DDE4u;
    {
        const bool branch_taken_0x29dde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29dde4) {
            ctx->pc = 0x29DDE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DDE4u;
            // 0x29dde8: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DE08u;
            goto label_29de08;
        }
    }
    ctx->pc = 0x29DDECu;
label_29ddec:
    // 0x29ddec: 0xc0a7274  jal         func_29C9D0
label_29ddf0:
    if (ctx->pc == 0x29DDF0u) {
        ctx->pc = 0x29DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDECu;
        // 0x29ddf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DDF4u;
        goto label_29ddf4;
    }
    ctx->pc = 0x29DDECu;
    SET_GPR_U32(ctx, 31, 0x29DDF4u);
    ctx->pc = 0x29DDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DDECu;
    // 0x29ddf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C9D0u, 0x29DDECu, 0x29DDF4u)) {
        return;
    }
    ctx->pc = 0x29DDF4u;
label_29ddf4:
    // 0x29ddf4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29ddf8:
    // 0x29ddf8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_29ddfc:
    if (ctx->pc == 0x29DDFCu) {
        ctx->pc = 0x29DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDF8u;
        // 0x29ddfc: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DE00u;
        goto label_29de00;
    }
    ctx->pc = 0x29DDF8u;
    {
        const bool branch_taken_0x29ddf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x29DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDF8u;
        // 0x29ddfc: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ddf8) {
            ctx->pc = 0x29DE18u;
            goto label_29de18;
        }
    }
    ctx->pc = 0x29DE00u;
label_29de00:
    // 0x29de00: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x29de00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29de04:
    // 0x29de04: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x29de04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29de08:
    // 0x29de08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29de08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29de0c:
    // 0x29de0c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_29de10:
    if (ctx->pc == 0x29DE10u) {
        ctx->pc = 0x29DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE0Cu;
        // 0x29de10: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DE14u;
        goto label_29de14;
    }
    ctx->pc = 0x29DE0Cu;
    {
        const bool branch_taken_0x29de0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE0Cu;
        // 0x29de10: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de0c) {
            ctx->pc = 0x29DE24u;
            goto label_29de24;
        }
    }
    ctx->pc = 0x29DE14u;
label_29de14:
    // 0x29de14: 0x8fa20274  lw          $v0, 0x274($sp)
    ctx->pc = 0x29de14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_29de18:
    // 0x29de18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29de18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29de1c:
    // 0x29de1c: 0x1000000e  b           . + 4 + (0xE << 2)
label_29de20:
    if (ctx->pc == 0x29DE20u) {
        ctx->pc = 0x29DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE1Cu;
        // 0x29de20: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DE24u;
        goto label_29de24;
    }
    ctx->pc = 0x29DE1Cu;
    {
        const bool branch_taken_0x29de1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE1Cu;
        // 0x29de20: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de1c) {
            ctx->pc = 0x29DE58u;
            goto label_29de58;
        }
    }
    ctx->pc = 0x29DE24u;
label_29de24:
    // 0x29de24: 0x248211d1  addiu       $v0, $a0, 0x11D1
    ctx->pc = 0x29de24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4561));
label_29de28:
    // 0x29de28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29de28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29de2c:
    // 0x29de2c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x29de2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_29de30:
    // 0x29de30: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x29de30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_29de34:
    // 0x29de34: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_29de38:
    if (ctx->pc == 0x29DE38u) {
        ctx->pc = 0x29DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE34u;
        // 0x29de38: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DE3Cu;
        goto label_29de3c;
    }
    ctx->pc = 0x29DE34u;
    {
        const bool branch_taken_0x29de34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE34u;
        // 0x29de38: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de34) {
            ctx->pc = 0x29DE58u;
            goto label_29de58;
        }
    }
    ctx->pc = 0x29DE3Cu;
label_29de3c:
    // 0x29de3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29de3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29de40:
    // 0x29de40: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x29de40u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_29de44:
    // 0x29de44: 0x16a0ffe4  bnez        $s5, . + 4 + (-0x1C << 2)
label_29de48:
    if (ctx->pc == 0x29DE48u) {
        ctx->pc = 0x29DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE44u;
        // 0x29de48: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DE4Cu;
        goto label_29de4c;
    }
    ctx->pc = 0x29DE44u;
    {
        const bool branch_taken_0x29de44 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE44u;
        // 0x29de48: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de44) {
            ctx->pc = 0x29DDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ddd8;
        }
    }
    ctx->pc = 0x29DE4Cu;
label_29de4c:
    // 0x29de4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_29de50:
    if (ctx->pc == 0x29DE50u) {
        ctx->pc = 0x29DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE4Cu;
        // 0x29de50: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DE54u;
        goto label_29de54;
    }
    ctx->pc = 0x29DE4Cu;
    {
        const bool branch_taken_0x29de4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE4Cu;
        // 0x29de50: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de4c) {
            ctx->pc = 0x29DE5Cu;
            goto label_29de5c;
        }
    }
    ctx->pc = 0x29DE54u;
label_29de54:
    // 0x29de54: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x29de54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_29de58:
    // 0x29de58: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x29de58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_29de5c:
    // 0x29de5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_29de60:
    // 0x29de60: 0x1000fe38  b           . + 4 + (-0x1C8 << 2)
label_29de64:
    if (ctx->pc == 0x29DE64u) {
        ctx->pc = 0x29DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE60u;
        // 0x29de64: 0xafa20268  sw          $v0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DE68u;
        goto label_29de68;
    }
    ctx->pc = 0x29DE60u;
    {
        const bool branch_taken_0x29de60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE60u;
        // 0x29de64: 0xafa20268  sw          $v0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de60) {
            ctx->pc = 0x29D744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d744;
        }
    }
    ctx->pc = 0x29DE68u;
label_29de68:
    // 0x29de68: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x29de68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_29de6c:
    // 0x29de6c: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x29de6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29de70:
    // 0x29de70: 0x248311d1  addiu       $v1, $a0, 0x11D1
    ctx->pc = 0x29de70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4561));
label_29de74:
    // 0x29de74: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x29de74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_29de78:
    // 0x29de78: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x29de78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29de7c:
    // 0x29de7c: 0x8ed2fff8  lw          $s2, -0x8($s6)
    ctx->pc = 0x29de7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_29de80:
    // 0x29de80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x29de80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_29de84:
    // 0x29de84: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x29de84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29de88:
    // 0x29de88: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x29de88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_29de8c:
    // 0x29de8c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_29de90:
    if (ctx->pc == 0x29DE90u) {
        ctx->pc = 0x29DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE8Cu;
        // 0x29de90: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DE94u;
        goto label_29de94;
    }
    ctx->pc = 0x29DE8Cu;
    {
        const bool branch_taken_0x29de8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE8Cu;
        // 0x29de90: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de8c) {
            ctx->pc = 0x29DF38u;
            goto label_29df38;
        }
    }
    ctx->pc = 0x29DE94u;
label_29de94:
    // 0x29de94: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x29de94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
label_29de98:
    // 0x29de98: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x29de98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_29de9c:
    // 0x29de9c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x29de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_29dea0:
    // 0x29dea0: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x29dea0u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_29dea4:
    // 0x29dea4: 0x12a00028  beqz        $s5, . + 4 + (0x28 << 2)
label_29dea8:
    if (ctx->pc == 0x29DEA8u) {
        ctx->pc = 0x29DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DEA4u;
        // 0x29dea8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DEACu;
        goto label_29deac;
    }
    ctx->pc = 0x29DEA4u;
    {
        const bool branch_taken_0x29dea4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DEA4u;
        // 0x29dea8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dea4) {
            ctx->pc = 0x29DF48u;
            goto label_29df48;
        }
    }
    ctx->pc = 0x29DEACu;
label_29deac:
    // 0x29deac: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x29deacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_29deb0:
    // 0x29deb0: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x29deb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_29deb4:
    // 0x29deb4: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x29deb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29deb8:
    // 0x29deb8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x29deb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29debc:
    // 0x29debc: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x29debcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_29dec0:
    // 0x29dec0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x29dec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29dec4:
    // 0x29dec4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_29dec8:
    if (ctx->pc == 0x29DEC8u) {
        ctx->pc = 0x29DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DEC4u;
        // 0x29dec8: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DECCu;
        goto label_29decc;
    }
    ctx->pc = 0x29DEC4u;
    {
        const bool branch_taken_0x29dec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29dec4) {
            ctx->pc = 0x29DEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DEC4u;
            // 0x29dec8: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DEE8u;
            goto label_29dee8;
        }
    }
    ctx->pc = 0x29DECCu;
label_29decc:
    // 0x29decc: 0xc0a7274  jal         func_29C9D0
label_29ded0:
    if (ctx->pc == 0x29DED0u) {
        ctx->pc = 0x29DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DECCu;
        // 0x29ded0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DED4u;
        goto label_29ded4;
    }
    ctx->pc = 0x29DECCu;
    SET_GPR_U32(ctx, 31, 0x29DED4u);
    ctx->pc = 0x29DED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DECCu;
    // 0x29ded0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C9D0u, 0x29DECCu, 0x29DED4u)) {
        return;
    }
    ctx->pc = 0x29DED4u;
label_29ded4:
    // 0x29ded4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29ded4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29ded8:
    // 0x29ded8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_29dedc:
    if (ctx->pc == 0x29DEDCu) {
        ctx->pc = 0x29DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DED8u;
        // 0x29dedc: 0x8fa30274  lw          $v1, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DEE0u;
        goto label_29dee0;
    }
    ctx->pc = 0x29DED8u;
    {
        const bool branch_taken_0x29ded8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x29DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DED8u;
        // 0x29dedc: 0x8fa30274  lw          $v1, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ded8) {
            ctx->pc = 0x29DEF8u;
            goto label_29def8;
        }
    }
    ctx->pc = 0x29DEE0u;
label_29dee0:
    // 0x29dee0: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x29dee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29dee4:
    // 0x29dee4: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x29dee4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29dee8:
    // 0x29dee8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29deec:
    // 0x29deec: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_29def0:
    if (ctx->pc == 0x29DEF0u) {
        ctx->pc = 0x29DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DEECu;
        // 0x29def0: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DEF4u;
        goto label_29def4;
    }
    ctx->pc = 0x29DEECu;
    {
        const bool branch_taken_0x29deec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x29DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DEECu;
        // 0x29def0: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29deec) {
            ctx->pc = 0x29DF04u;
            goto label_29df04;
        }
    }
    ctx->pc = 0x29DEF4u;
label_29def4:
    // 0x29def4: 0x8fa30274  lw          $v1, 0x274($sp)
    ctx->pc = 0x29def4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_29def8:
    // 0x29def8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29def8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29defc:
    // 0x29defc: 0x10000015  b           . + 4 + (0x15 << 2)
label_29df00:
    if (ctx->pc == 0x29DF00u) {
        ctx->pc = 0x29DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DEFCu;
        // 0x29df00: 0xafa30274  sw          $v1, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DF04u;
        goto label_29df04;
    }
    ctx->pc = 0x29DEFCu;
    {
        const bool branch_taken_0x29defc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DEFCu;
        // 0x29df00: 0xafa30274  sw          $v1, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29defc) {
            ctx->pc = 0x29DF54u;
            goto label_29df54;
        }
    }
    ctx->pc = 0x29DF04u;
label_29df04:
    // 0x29df04: 0x246211d1  addiu       $v0, $v1, 0x11D1
    ctx->pc = 0x29df04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4561));
label_29df08:
    // 0x29df08: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x29df08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_29df0c:
    // 0x29df0c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x29df0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_29df10:
    // 0x29df10: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x29df10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_29df14:
    // 0x29df14: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_29df18:
    if (ctx->pc == 0x29DF18u) {
        ctx->pc = 0x29DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF14u;
        // 0x29df18: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DF1Cu;
        goto label_29df1c;
    }
    ctx->pc = 0x29DF14u;
    {
        const bool branch_taken_0x29df14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF14u;
        // 0x29df18: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df14) {
            ctx->pc = 0x29DF54u;
            goto label_29df54;
        }
    }
    ctx->pc = 0x29DF1Cu;
label_29df1c:
    // 0x29df1c: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x29df1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
label_29df20:
    // 0x29df20: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x29df20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_29df24:
    // 0x29df24: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x29df24u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_29df28:
    // 0x29df28: 0x16a0ffe3  bnez        $s5, . + 4 + (-0x1D << 2)
label_29df2c:
    if (ctx->pc == 0x29DF2Cu) {
        ctx->pc = 0x29DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF28u;
        // 0x29df2c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DF30u;
        goto label_29df30;
    }
    ctx->pc = 0x29DF28u;
    {
        const bool branch_taken_0x29df28 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF28u;
        // 0x29df2c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df28) {
            ctx->pc = 0x29DEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29deb8;
        }
    }
    ctx->pc = 0x29DF30u;
label_29df30:
    // 0x29df30: 0x10000009  b           . + 4 + (0x9 << 2)
label_29df34:
    if (ctx->pc == 0x29DF34u) {
        ctx->pc = 0x29DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF30u;
        // 0x29df34: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DF38u;
        goto label_29df38;
    }
    ctx->pc = 0x29DF30u;
    {
        const bool branch_taken_0x29df30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF30u;
        // 0x29df34: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df30) {
            ctx->pc = 0x29DF58u;
            goto label_29df58;
        }
    }
    ctx->pc = 0x29DF38u;
label_29df38:
    // 0x29df38: 0x8fa40264  lw          $a0, 0x264($sp)
    ctx->pc = 0x29df38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_29df3c:
    // 0x29df3c: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x29df3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_29df40:
    // 0x29df40: 0x10000004  b           . + 4 + (0x4 << 2)
label_29df44:
    if (ctx->pc == 0x29DF44u) {
        ctx->pc = 0x29DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF40u;
        // 0x29df44: 0x24900001  addiu       $s0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DF48u;
        goto label_29df48;
    }
    ctx->pc = 0x29DF40u;
    {
        const bool branch_taken_0x29df40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF40u;
        // 0x29df44: 0x24900001  addiu       $s0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df40) {
            ctx->pc = 0x29DF54u;
            goto label_29df54;
        }
    }
    ctx->pc = 0x29DF48u;
label_29df48:
    // 0x29df48: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x29df48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_29df4c:
    // 0x29df4c: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x29df4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_29df50:
    // 0x29df50: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x29df50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29df54:
    // 0x29df54: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x29df54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_29df58:
    // 0x29df58: 0x2511023  subu        $v0, $s2, $s1
    ctx->pc = 0x29df58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_29df5c:
    // 0x29df5c: 0xafb00264  sw          $s0, 0x264($sp)
    ctx->pc = 0x29df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 16));
label_29df60:
    // 0x29df60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29df60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29df64:
    // 0x29df64: 0xafa30268  sw          $v1, 0x268($sp)
    ctx->pc = 0x29df64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
label_29df68:
    // 0x29df68: 0x1000fdf6  b           . + 4 + (-0x20A << 2)
label_29df6c:
    if (ctx->pc == 0x29DF6Cu) {
        ctx->pc = 0x29DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF68u;
        // 0x29df6c: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DF70u;
        goto label_29df70;
    }
    ctx->pc = 0x29DF68u;
    {
        const bool branch_taken_0x29df68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF68u;
        // 0x29df6c: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df68) {
            ctx->pc = 0x29D744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d744;
        }
    }
    ctx->pc = 0x29DF70u;
label_29df70:
    // 0x29df70: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_29df74:
    if (ctx->pc == 0x29DF74u) {
        ctx->pc = 0x29DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF70u;
        // 0x29df74: 0x2aa2015e  slti        $v0, $s5, 0x15E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)350) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DF78u;
        goto label_29df78;
    }
    ctx->pc = 0x29DF70u;
    {
        const bool branch_taken_0x29df70 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF70u;
        // 0x29df74: 0x2aa2015e  slti        $v0, $s5, 0x15E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)350) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df70) {
            ctx->pc = 0x29DF80u;
            goto label_29df80;
        }
    }
    ctx->pc = 0x29DF78u;
label_29df78:
    // 0x29df78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_29df7c:
    if (ctx->pc == 0x29DF7Cu) {
        ctx->pc = 0x29DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF78u;
        // 0x29df7c: 0x27b20100  addiu       $s2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DF80u;
        goto label_29df80;
    }
    ctx->pc = 0x29DF78u;
    {
        const bool branch_taken_0x29df78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF78u;
        // 0x29df7c: 0x27b20100  addiu       $s2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df78) {
            ctx->pc = 0x29DF88u;
            goto label_29df88;
        }
    }
    ctx->pc = 0x29DF80u;
label_29df80:
    // 0x29df80: 0x2415015d  addiu       $s5, $zero, 0x15D
    ctx->pc = 0x29df80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 349));
label_29df84:
    // 0x29df84: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x29df84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_29df88:
    // 0x29df88: 0x367302c0  ori         $s3, $s3, 0x2C0
    ctx->pc = 0x29df88u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)704);
label_29df8c:
    // 0x29df8c: 0x12a00059  beqz        $s5, . + 4 + (0x59 << 2)
label_29df90:
    if (ctx->pc == 0x29DF90u) {
        ctx->pc = 0x29DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF8Cu;
        // 0x29df90: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DF94u;
        goto label_29df94;
    }
    ctx->pc = 0x29DF8Cu;
    {
        const bool branch_taken_0x29df8c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF8Cu;
        // 0x29df90: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df8c) {
            ctx->pc = 0x29E0F4u;
            goto label_29e0f4;
        }
    }
    ctx->pc = 0x29DF94u;
label_29df94:
    // 0x29df94: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x29df94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29df98:
    // 0x29df98: 0x90b10000  lbu         $s1, 0x0($a1)
    ctx->pc = 0x29df98u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29df9c:
    // 0x29df9c: 0x0  nop
    ctx->pc = 0x29df9cu;
    // NOP
label_29dfa0:
    // 0x29dfa0: 0x2623ffd5  addiu       $v1, $s1, -0x2B
    ctx->pc = 0x29dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967253));
label_29dfa4:
    // 0x29dfa4: 0x2c62004e  sltiu       $v0, $v1, 0x4E
    ctx->pc = 0x29dfa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)78) ? 1 : 0);
label_29dfa8:
    // 0x29dfa8: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_29dfac:
    if (ctx->pc == 0x29DFACu) {
        ctx->pc = 0x29DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DFA8u;
        // 0x29dfac: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DFB0u;
        goto label_29dfb0;
    }
    ctx->pc = 0x29DFA8u;
    {
        const bool branch_taken_0x29dfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DFA8u;
        // 0x29dfac: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dfa8) {
            ctx->pc = 0x29E0F4u;
            goto label_29e0f4;
        }
    }
    ctx->pc = 0x29DFB0u;
label_29dfb0:
    // 0x29dfb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_29dfb4:
    // 0x29dfb4: 0x2442dcb0  addiu       $v0, $v0, -0x2350
    ctx->pc = 0x29dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958256));
label_29dfb8:
    // 0x29dfb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29dfbc:
    // 0x29dfbc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29dfc0:
    // 0x29dfc0: 0x800008  jr          $a0
label_29dfc4:
    if (ctx->pc == 0x29DFC4u) {
        ctx->pc = 0x29DFC8u;
        goto label_29dfc8;
    }
    ctx->pc = 0x29DFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29DFC8u: goto label_29dfc8;
            case 0x29DFF4u: goto label_29dff4;
            case 0x29E01Cu: goto label_29e01c;
            case 0x29E048u: goto label_29e048;
            case 0x29E060u: goto label_29e060;
            case 0x29E074u: goto label_29e074;
            case 0x29E0F4u: goto label_29e0f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DFC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29DFC8u;
label_29dfc8:
    // 0x29dfc8: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x29dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_29dfcc:
    // 0x29dfcc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_29dfd0:
    if (ctx->pc == 0x29DFD0u) {
        ctx->pc = 0x29DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DFCCu;
        // 0x29dfd0: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DFD4u;
        goto label_29dfd4;
    }
    ctx->pc = 0x29DFCCu;
    {
        const bool branch_taken_0x29dfcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DFCCu;
        // 0x29dfd0: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dfcc) {
            ctx->pc = 0x29DFE4u;
            goto label_29dfe4;
        }
    }
    ctx->pc = 0x29DFD4u;
label_29dfd4:
    // 0x29dfd4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x29dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_29dfd8:
    // 0x29dfd8: 0x36730100  ori         $s3, $s3, 0x100
    ctx->pc = 0x29dfd8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
label_29dfdc:
    // 0x29dfdc: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x29dfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
label_29dfe0:
    // 0x29dfe0: 0x32620200  andi        $v0, $s3, 0x200
    ctx->pc = 0x29dfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
label_29dfe4:
    // 0x29dfe4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_29dfe8:
    if (ctx->pc == 0x29DFE8u) {
        ctx->pc = 0x29DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DFE4u;
        // 0x29dfe8: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DFECu;
        goto label_29dfec;
    }
    ctx->pc = 0x29DFE4u;
    {
        const bool branch_taken_0x29dfe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DFE4u;
        // 0x29dfe8: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dfe4) {
            ctx->pc = 0x29E090u;
            goto label_29e090;
        }
    }
    ctx->pc = 0x29DFECu;
label_29dfec:
    // 0x29dfec: 0x10000028  b           . + 4 + (0x28 << 2)
label_29dff0:
    if (ctx->pc == 0x29DFF0u) {
        ctx->pc = 0x29DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DFECu;
        // 0x29dff0: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DFF4u;
        goto label_29dff4;
    }
    ctx->pc = 0x29DFECu;
    {
        const bool branch_taken_0x29dfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DFECu;
        // 0x29dff0: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dfec) {
            ctx->pc = 0x29E090u;
            goto label_29e090;
        }
    }
    ctx->pc = 0x29DFF4u;
label_29dff4:
    // 0x29dff4: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x29dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_29dff8:
    // 0x29dff8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x29dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_29dffc:
    // 0x29dffc: 0x24422648  addiu       $v0, $v0, 0x2648
    ctx->pc = 0x29dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9800));
label_29e000:
    // 0x29e000: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x29e000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_29e004:
    // 0x29e004: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29e004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29e008:
    // 0x29e008: 0x2404fe3f  addiu       $a0, $zero, -0x1C1
    ctx->pc = 0x29e008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
label_29e00c:
    // 0x29e00c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x29e00cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_29e010:
    // 0x29e010: 0x2649824  and         $s3, $s3, $a0
    ctx->pc = 0x29e010u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 4));
label_29e014:
    // 0x29e014: 0x1000001f  b           . + 4 + (0x1F << 2)
label_29e018:
    if (ctx->pc == 0x29E018u) {
        ctx->pc = 0x29E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E014u;
        // 0x29e018: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E01Cu;
        goto label_29e01c;
    }
    ctx->pc = 0x29E014u;
    {
        const bool branch_taken_0x29e014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E014u;
        // 0x29e018: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e014) {
            ctx->pc = 0x29E094u;
            goto label_29e094;
        }
    }
    ctx->pc = 0x29E01Cu;
label_29e01c:
    // 0x29e01c: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x29e01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_29e020:
    // 0x29e020: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x29e020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_29e024:
    // 0x29e024: 0x24422648  addiu       $v0, $v0, 0x2648
    ctx->pc = 0x29e024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9800));
label_29e028:
    // 0x29e028: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x29e028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_29e02c:
    // 0x29e02c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29e02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29e030:
    // 0x29e030: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x29e030u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_29e034:
    // 0x29e034: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x29e034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_29e038:
    // 0x29e038: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_29e03c:
    if (ctx->pc == 0x29E03Cu) {
        ctx->pc = 0x29E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E038u;
        // 0x29e03c: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E040u;
        goto label_29e040;
    }
    ctx->pc = 0x29E038u;
    {
        const bool branch_taken_0x29e038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E038u;
        // 0x29e03c: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e038) {
            ctx->pc = 0x29E0F4u;
            goto label_29e0f4;
        }
    }
    ctx->pc = 0x29E040u;
label_29e040:
    // 0x29e040: 0x10000013  b           . + 4 + (0x13 << 2)
label_29e044:
    if (ctx->pc == 0x29E044u) {
        ctx->pc = 0x29E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E040u;
        // 0x29e044: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E048u;
        goto label_29e048;
    }
    ctx->pc = 0x29E040u;
    {
        const bool branch_taken_0x29e040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E040u;
        // 0x29e044: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e040) {
            ctx->pc = 0x29E090u;
            goto label_29e090;
        }
    }
    ctx->pc = 0x29E048u;
label_29e048:
    // 0x29e048: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x29e048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_29e04c:
    // 0x29e04c: 0x2862000b  slti        $v0, $v1, 0xB
    ctx->pc = 0x29e04cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
label_29e050:
    // 0x29e050: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_29e054:
    if (ctx->pc == 0x29E054u) {
        ctx->pc = 0x29E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E050u;
        // 0x29e054: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E058u;
        goto label_29e058;
    }
    ctx->pc = 0x29E050u;
    {
        const bool branch_taken_0x29e050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E050u;
        // 0x29e054: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e050) {
            ctx->pc = 0x29E0F4u;
            goto label_29e0f4;
        }
    }
    ctx->pc = 0x29E058u;
label_29e058:
    // 0x29e058: 0x1000000e  b           . + 4 + (0xE << 2)
label_29e05c:
    if (ctx->pc == 0x29E05Cu) {
        ctx->pc = 0x29E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E058u;
        // 0x29e05c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E060u;
        goto label_29e060;
    }
    ctx->pc = 0x29E058u;
    {
        const bool branch_taken_0x29e058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E058u;
        // 0x29e05c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e058) {
            ctx->pc = 0x29E094u;
            goto label_29e094;
        }
    }
    ctx->pc = 0x29E060u;
label_29e060:
    // 0x29e060: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x29e060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_29e064:
    // 0x29e064: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_29e068:
    if (ctx->pc == 0x29E068u) {
        ctx->pc = 0x29E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E064u;
        // 0x29e068: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E06Cu;
        goto label_29e06c;
    }
    ctx->pc = 0x29E064u;
    {
        const bool branch_taken_0x29e064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E064u;
        // 0x29e068: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e064) {
            ctx->pc = 0x29E0F4u;
            goto label_29e0f4;
        }
    }
    ctx->pc = 0x29E06Cu;
label_29e06c:
    // 0x29e06c: 0x10000009  b           . + 4 + (0x9 << 2)
label_29e070:
    if (ctx->pc == 0x29E070u) {
        ctx->pc = 0x29E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E06Cu;
        // 0x29e070: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E074u;
        goto label_29e074;
    }
    ctx->pc = 0x29E06Cu;
    {
        const bool branch_taken_0x29e06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E06Cu;
        // 0x29e070: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e06c) {
            ctx->pc = 0x29E094u;
            goto label_29e094;
        }
    }
    ctx->pc = 0x29E074u;
label_29e074:
    // 0x29e074: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x29e074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_29e078:
    // 0x29e078: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_29e07c:
    if (ctx->pc == 0x29E07Cu) {
        ctx->pc = 0x29E07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E078u;
        // 0x29e07c: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E080u;
        goto label_29e080;
    }
    ctx->pc = 0x29E078u;
    {
        const bool branch_taken_0x29e078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E078u;
        // 0x29e07c: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e078) {
            ctx->pc = 0x29E0F4u;
            goto label_29e0f4;
        }
    }
    ctx->pc = 0x29E080u;
label_29e080:
    // 0x29e080: 0x1642001c  bne         $s2, $v0, . + 4 + (0x1C << 2)
label_29e084:
    if (ctx->pc == 0x29E084u) {
        ctx->pc = 0x29E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E080u;
        // 0x29e084: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E088u;
        goto label_29e088;
    }
    ctx->pc = 0x29E080u;
    {
        const bool branch_taken_0x29e080 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x29E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E080u;
        // 0x29e084: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e080) {
            ctx->pc = 0x29E0F4u;
            goto label_29e0f4;
        }
    }
    ctx->pc = 0x29E088u;
label_29e088:
    // 0x29e088: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x29e088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_29e08c:
    // 0x29e08c: 0xafa4026c  sw          $a0, 0x26C($sp)
    ctx->pc = 0x29e08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
label_29e090:
    // 0x29e090: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x29e090u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_29e094:
    // 0x29e094: 0xa2510000  sb          $s1, 0x0($s2)
    ctx->pc = 0x29e094u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 17));
label_29e098:
    // 0x29e098: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29e098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_29e09c:
    // 0x29e09c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x29e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29e0a0:
    // 0x29e0a0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x29e0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_29e0a4:
    // 0x29e0a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29e0a8:
    // 0x29e0a8: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x29e0a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29e0ac:
    // 0x29e0ac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_29e0b0:
    if (ctx->pc == 0x29E0B0u) {
        ctx->pc = 0x29E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E0ACu;
        // 0x29e0b0: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E0B4u;
        goto label_29e0b4;
    }
    ctx->pc = 0x29E0ACu;
    {
        const bool branch_taken_0x29e0ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E0ACu;
        // 0x29e0b0: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e0ac) {
            ctx->pc = 0x29E0C8u;
            goto label_29e0c8;
        }
    }
    ctx->pc = 0x29E0B4u;
label_29e0b4:
    // 0x29e0b4: 0xc0a7274  jal         func_29C9D0
label_29e0b8:
    if (ctx->pc == 0x29E0B8u) {
        ctx->pc = 0x29E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E0B4u;
        // 0x29e0b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E0BCu;
        goto label_29e0bc;
    }
    ctx->pc = 0x29E0B4u;
    SET_GPR_U32(ctx, 31, 0x29E0BCu);
    ctx->pc = 0x29E0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E0B4u;
    // 0x29e0b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C9D0u, 0x29E0B4u, 0x29E0BCu)) {
        return;
    }
    ctx->pc = 0x29E0BCu;
label_29e0bc:
    // 0x29e0bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29e0c0:
    // 0x29e0c0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_29e0c4:
    if (ctx->pc == 0x29E0C4u) {
        ctx->pc = 0x29E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E0C0u;
        // 0x29e0c4: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E0C8u;
        goto label_29e0c8;
    }
    ctx->pc = 0x29E0C0u;
    {
        const bool branch_taken_0x29e0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x29E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E0C0u;
        // 0x29e0c4: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e0c0) {
            ctx->pc = 0x29E0E0u;
            goto label_29e0e0;
        }
    }
    ctx->pc = 0x29E0C8u;
label_29e0c8:
    // 0x29e0c8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x29e0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29e0cc:
    // 0x29e0cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29e0d0:
    // 0x29e0d0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x29e0d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29e0d4:
    // 0x29e0d4: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_29e0d8:
    if (ctx->pc == 0x29E0D8u) {
        ctx->pc = 0x29E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E0D4u;
        // 0x29e0d8: 0x66b5ffff  daddiu      $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E0DCu;
        goto label_29e0dc;
    }
    ctx->pc = 0x29E0D4u;
    {
        const bool branch_taken_0x29e0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29e0d4) {
            ctx->pc = 0x29E0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E0D4u;
            // 0x29e0d8: 0x66b5ffff  daddiu      $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E0ECu;
            goto label_29e0ec;
        }
    }
    ctx->pc = 0x29E0DCu;
label_29e0dc:
    // 0x29e0dc: 0x8fa20274  lw          $v0, 0x274($sp)
    ctx->pc = 0x29e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_29e0e0:
    // 0x29e0e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29e0e4:
    // 0x29e0e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_29e0e8:
    if (ctx->pc == 0x29E0E8u) {
        ctx->pc = 0x29E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E0E4u;
        // 0x29e0e8: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E0ECu;
        goto label_29e0ec;
    }
    ctx->pc = 0x29E0E4u;
    {
        const bool branch_taken_0x29e0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E0E4u;
        // 0x29e0e8: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e0e4) {
            ctx->pc = 0x29E0F4u;
            goto label_29e0f4;
        }
    }
    ctx->pc = 0x29E0ECu;
label_29e0ec:
    // 0x29e0ec: 0x56a0ffac  bnel        $s5, $zero, . + 4 + (-0x54 << 2)
label_29e0f0:
    if (ctx->pc == 0x29E0F0u) {
        ctx->pc = 0x29E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E0ECu;
        // 0x29e0f0: 0x90b10000  lbu         $s1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E0F4u;
        goto label_29e0f4;
    }
    ctx->pc = 0x29E0ECu;
    {
        const bool branch_taken_0x29e0ec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e0ec) {
            ctx->pc = 0x29E0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E0ECu;
            // 0x29e0f0: 0x90b10000  lbu         $s1, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29dfa0;
        }
    }
    ctx->pc = 0x29E0F4u;
label_29e0f4:
    // 0x29e0f4: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x29e0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_29e0f8:
    // 0x29e0f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_29e0fc:
    if (ctx->pc == 0x29E0FCu) {
        ctx->pc = 0x29E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E0F8u;
        // 0x29e0fc: 0x3d2102b  sltu        $v0, $fp, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E100u;
        goto label_29e100;
    }
    ctx->pc = 0x29E0F8u;
    {
        const bool branch_taken_0x29e0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E0F8u;
        // 0x29e0fc: 0x3d2102b  sltu        $v0, $fp, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e0f8) {
            ctx->pc = 0x29E11Cu;
            goto label_29e11c;
        }
    }
    ctx->pc = 0x29E100u;
label_29e100:
    // 0x29e100: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
label_29e104:
    if (ctx->pc == 0x29E104u) {
        ctx->pc = 0x29E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E100u;
        // 0x29e104: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E108u;
        goto label_29e108;
    }
    ctx->pc = 0x29E100u;
    {
        const bool branch_taken_0x29e100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E100u;
        // 0x29e104: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e100) {
            ctx->pc = 0x29E3DCu;
            goto label_29e3dc;
        }
    }
    ctx->pc = 0x29E108u;
label_29e108:
    // 0x29e108: 0x9244ffff  lbu         $a0, -0x1($s2)
    ctx->pc = 0x29e108u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_29e10c:
    // 0x29e10c: 0xc0a7bb2  jal         func_29EEC8
label_29e110:
    if (ctx->pc == 0x29E110u) {
        ctx->pc = 0x29E110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E10Cu;
        // 0x29e110: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E114u;
        goto label_29e114;
    }
    ctx->pc = 0x29E10Cu;
    SET_GPR_U32(ctx, 31, 0x29E114u);
    ctx->pc = 0x29E110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E10Cu;
    // 0x29e110: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEC8u, 0x29E10Cu, 0x29E114u)) {
        return;
    }
    ctx->pc = 0x29E114u;
label_29e114:
    // 0x29e114: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_29e118:
    if (ctx->pc == 0x29E118u) {
        ctx->pc = 0x29E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E114u;
        // 0x29e118: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E11Cu;
        goto label_29e11c;
    }
    ctx->pc = 0x29E114u;
    {
        const bool branch_taken_0x29e114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E114u;
        // 0x29e118: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e114) {
            ctx->pc = 0x29E3DCu;
            goto label_29e3dc;
        }
    }
    ctx->pc = 0x29E11Cu;
label_29e11c:
    // 0x29e11c: 0x9251ffff  lbu         $s1, -0x1($s2)
    ctx->pc = 0x29e11cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_29e120:
    // 0x29e120: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x29e120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_29e124:
    // 0x29e124: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_29e128:
    if (ctx->pc == 0x29E128u) {
        ctx->pc = 0x29E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E124u;
        // 0x29e128: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E12Cu;
        goto label_29e12c;
    }
    ctx->pc = 0x29E124u;
    {
        const bool branch_taken_0x29e124 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x29E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E124u;
        // 0x29e128: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e124) {
            ctx->pc = 0x29E134u;
            goto label_29e134;
        }
    }
    ctx->pc = 0x29E12Cu;
label_29e12c:
    // 0x29e12c: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
label_29e130:
    if (ctx->pc == 0x29E130u) {
        ctx->pc = 0x29E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E12Cu;
        // 0x29e130: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E134u;
        goto label_29e134;
    }
    ctx->pc = 0x29E12Cu;
    {
        const bool branch_taken_0x29e12c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x29E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E12Cu;
        // 0x29e130: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e12c) {
            ctx->pc = 0x29E148u;
            goto label_29e148;
        }
    }
    ctx->pc = 0x29E134u;
label_29e134:
    // 0x29e134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29e134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29e138:
    // 0x29e138: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x29e138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_29e13c:
    // 0x29e13c: 0xc0a7bb2  jal         func_29EEC8
label_29e140:
    if (ctx->pc == 0x29E140u) {
        ctx->pc = 0x29E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E13Cu;
        // 0x29e140: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E144u;
        goto label_29e144;
    }
    ctx->pc = 0x29E13Cu;
    SET_GPR_U32(ctx, 31, 0x29E144u);
    ctx->pc = 0x29E140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E13Cu;
    // 0x29e140: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEC8u, 0x29E13Cu, 0x29E144u)) {
        return;
    }
    ctx->pc = 0x29E144u;
label_29e144:
    // 0x29e144: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x29e144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_29e148:
    // 0x29e148: 0x14400096  bnez        $v0, . + 4 + (0x96 << 2)
label_29e14c:
    if (ctx->pc == 0x29E14Cu) {
        ctx->pc = 0x29E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E148u;
        // 0x29e14c: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E150u;
        goto label_29e150;
    }
    ctx->pc = 0x29E148u;
    {
        const bool branch_taken_0x29e148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E148u;
        // 0x29e14c: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e148) {
            ctx->pc = 0x29E3A4u;
            goto label_29e3a4;
        }
    }
    ctx->pc = 0x29E150u;
label_29e150:
    // 0x29e150: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x29e150u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_29e154:
    // 0x29e154: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x29e154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_29e158:
    // 0x29e158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29e158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e15c:
    // 0x29e15c: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x29e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_29e160:
    // 0x29e160: 0x60f809  jalr        $v1
label_29e164:
    if (ctx->pc == 0x29E164u) {
        ctx->pc = 0x29E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E160u;
        // 0x29e164: 0x8fa6026c  lw          $a2, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E168u;
        goto label_29e168;
    }
    ctx->pc = 0x29E160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29E168u);
        ctx->pc = 0x29E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E160u;
        // 0x29e164: 0x8fa6026c  lw          $a2, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E160u, 0x29E168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29E168u;
label_29e168:
    // 0x29e168: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29e168u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29e16c:
    // 0x29e16c: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x29e16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_29e170:
    // 0x29e170: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_29e174:
    if (ctx->pc == 0x29E174u) {
        ctx->pc = 0x29E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E170u;
        // 0x29e174: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E178u;
        goto label_29e178;
    }
    ctx->pc = 0x29E170u;
    {
        const bool branch_taken_0x29e170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e170) {
            ctx->pc = 0x29E174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E170u;
            // 0x29e174: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E1ACu;
            goto label_29e1ac;
        }
    }
    ctx->pc = 0x29E178u;
label_29e178:
    // 0x29e178: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x29e178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_29e17c:
    // 0x29e17c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_29e180:
    if (ctx->pc == 0x29E180u) {
        ctx->pc = 0x29E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E17Cu;
        // 0x29e180: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E184u;
        goto label_29e184;
    }
    ctx->pc = 0x29E17Cu;
    {
        const bool branch_taken_0x29e17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E17Cu;
        // 0x29e180: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e17c) {
            ctx->pc = 0x29E198u;
            goto label_29e198;
        }
    }
    ctx->pc = 0x29E184u;
label_29e184:
    // 0x29e184: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x29e184u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_29e188:
    // 0x29e188: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29e188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_29e18c:
    // 0x29e18c: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x29e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_29e190:
    // 0x29e190: 0x1000000a  b           . + 4 + (0xA << 2)
label_29e194:
    if (ctx->pc == 0x29E194u) {
        ctx->pc = 0x29E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E190u;
        // 0x29e194: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E198u;
        goto label_29e198;
    }
    ctx->pc = 0x29E190u;
    {
        const bool branch_taken_0x29e190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E190u;
        // 0x29e194: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e190) {
            ctx->pc = 0x29E1BCu;
            goto label_29e1bc;
        }
    }
    ctx->pc = 0x29E198u;
label_29e198:
    // 0x29e198: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29e19c:
    if (ctx->pc == 0x29E19Cu) {
        ctx->pc = 0x29E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E198u;
        // 0x29e19c: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E1A0u;
        goto label_29e1a0;
    }
    ctx->pc = 0x29E198u;
    {
        const bool branch_taken_0x29e198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E198u;
        // 0x29e19c: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e198) {
            ctx->pc = 0x29E1ACu;
            goto label_29e1ac;
        }
    }
    ctx->pc = 0x29E1A0u;
label_29e1a0:
    // 0x29e1a0: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x29e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_29e1a4:
    // 0x29e1a4: 0x10000005  b           . + 4 + (0x5 << 2)
label_29e1a8:
    if (ctx->pc == 0x29E1A8u) {
        ctx->pc = 0x29E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1A4u;
        // 0x29e1a8: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E1ACu;
        goto label_29e1ac;
    }
    ctx->pc = 0x29E1A4u;
    {
        const bool branch_taken_0x29e1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1A4u;
        // 0x29e1a8: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e1a4) {
            ctx->pc = 0x29E1BCu;
            goto label_29e1bc;
        }
    }
    ctx->pc = 0x29E1ACu;
label_29e1ac:
    // 0x29e1ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29e1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_29e1b0:
    // 0x29e1b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29e1b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_29e1b4:
    // 0x29e1b4: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x29e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_29e1b8:
    // 0x29e1b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29e1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_29e1bc:
    // 0x29e1bc: 0x8fa40264  lw          $a0, 0x264($sp)
    ctx->pc = 0x29e1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_29e1c0:
    // 0x29e1c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_29e1c4:
    // 0x29e1c4: 0x10000076  b           . + 4 + (0x76 << 2)
label_29e1c8:
    if (ctx->pc == 0x29E1C8u) {
        ctx->pc = 0x29E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1C4u;
        // 0x29e1c8: 0xafa40264  sw          $a0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E1CCu;
        goto label_29e1cc;
    }
    ctx->pc = 0x29E1C4u;
    {
        const bool branch_taken_0x29e1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1C4u;
        // 0x29e1c8: 0xafa40264  sw          $a0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e1c4) {
            ctx->pc = 0x29E3A0u;
            goto label_29e3a0;
        }
    }
    ctx->pc = 0x29E1CCu;
label_29e1cc:
    // 0x29e1cc: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_29e1d0:
    if (ctx->pc == 0x29E1D0u) {
        ctx->pc = 0x29E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1CCu;
        // 0x29e1d0: 0x2aa2015e  slti        $v0, $s5, 0x15E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)350) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E1D4u;
        goto label_29e1d4;
    }
    ctx->pc = 0x29E1CCu;
    {
        const bool branch_taken_0x29e1cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1CCu;
        // 0x29e1d0: 0x2aa2015e  slti        $v0, $s5, 0x15E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)350) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e1cc) {
            ctx->pc = 0x29E1DCu;
            goto label_29e1dc;
        }
    }
    ctx->pc = 0x29E1D4u;
label_29e1d4:
    // 0x29e1d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_29e1d8:
    if (ctx->pc == 0x29E1D8u) {
        ctx->pc = 0x29E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1D4u;
        // 0x29e1d8: 0x27b20100  addiu       $s2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E1DCu;
        goto label_29e1dc;
    }
    ctx->pc = 0x29E1D4u;
    {
        const bool branch_taken_0x29e1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1D4u;
        // 0x29e1d8: 0x27b20100  addiu       $s2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e1d4) {
            ctx->pc = 0x29E1E4u;
            goto label_29e1e4;
        }
    }
    ctx->pc = 0x29E1DCu;
label_29e1dc:
    // 0x29e1dc: 0x2415015d  addiu       $s5, $zero, 0x15D
    ctx->pc = 0x29e1dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 349));
label_29e1e0:
    // 0x29e1e0: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x29e1e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_29e1e4:
    // 0x29e1e4: 0x367303c0  ori         $s3, $s3, 0x3C0
    ctx->pc = 0x29e1e4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)960);
label_29e1e8:
    // 0x29e1e8: 0x12a00039  beqz        $s5, . + 4 + (0x39 << 2)
label_29e1ec:
    if (ctx->pc == 0x29E1ECu) {
        ctx->pc = 0x29E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1E8u;
        // 0x29e1ec: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E1F0u;
        goto label_29e1f0;
    }
    ctx->pc = 0x29E1E8u;
    {
        const bool branch_taken_0x29e1e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1E8u;
        // 0x29e1ec: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e1e8) {
            ctx->pc = 0x29E2D0u;
            goto label_29e2d0;
        }
    }
    ctx->pc = 0x29E1F0u;
label_29e1f0:
    // 0x29e1f0: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x29e1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29e1f4:
    // 0x29e1f4: 0x90b10000  lbu         $s1, 0x0($a1)
    ctx->pc = 0x29e1f4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29e1f8:
    // 0x29e1f8: 0x2623ffd5  addiu       $v1, $s1, -0x2B
    ctx->pc = 0x29e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967253));
label_29e1fc:
    // 0x29e1fc: 0x2c62003b  sltiu       $v0, $v1, 0x3B
    ctx->pc = 0x29e1fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_29e200:
    // 0x29e200: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_29e204:
    if (ctx->pc == 0x29E204u) {
        ctx->pc = 0x29E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E200u;
        // 0x29e204: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E208u;
        goto label_29e208;
    }
    ctx->pc = 0x29E200u;
    {
        const bool branch_taken_0x29e200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E200u;
        // 0x29e204: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e200) {
            ctx->pc = 0x29E2D0u;
            goto label_29e2d0;
        }
    }
    ctx->pc = 0x29E208u;
label_29e208:
    // 0x29e208: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29e208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_29e20c:
    // 0x29e20c: 0x2442ddf0  addiu       $v0, $v0, -0x2210
    ctx->pc = 0x29e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958576));
label_29e210:
    // 0x29e210: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29e210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29e214:
    // 0x29e214: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29e214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29e218:
    // 0x29e218: 0x800008  jr          $a0
label_29e21c:
    if (ctx->pc == 0x29E21Cu) {
        ctx->pc = 0x29E220u;
        goto label_29e220;
    }
    ctx->pc = 0x29E218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29E220u: goto label_29e220;
            case 0x29E22Cu: goto label_29e22c;
            case 0x29E240u: goto label_29e240;
            case 0x29E254u: goto label_29e254;
            case 0x29E2D0u: goto label_29e2d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E218u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29E220u;
label_29e220:
    // 0x29e220: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x29e220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_29e224:
    // 0x29e224: 0x10000011  b           . + 4 + (0x11 << 2)
label_29e228:
    if (ctx->pc == 0x29E228u) {
        ctx->pc = 0x29E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E224u;
        // 0x29e228: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E22Cu;
        goto label_29e22c;
    }
    ctx->pc = 0x29E224u;
    {
        const bool branch_taken_0x29e224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E224u;
        // 0x29e228: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e224) {
            ctx->pc = 0x29E26Cu;
            goto label_29e26c;
        }
    }
    ctx->pc = 0x29E22Cu;
label_29e22c:
    // 0x29e22c: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x29e22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_29e230:
    // 0x29e230: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_29e234:
    if (ctx->pc == 0x29E234u) {
        ctx->pc = 0x29E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E230u;
        // 0x29e234: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E238u;
        goto label_29e238;
    }
    ctx->pc = 0x29E230u;
    {
        const bool branch_taken_0x29e230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E230u;
        // 0x29e234: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e230) {
            ctx->pc = 0x29E2D0u;
            goto label_29e2d0;
        }
    }
    ctx->pc = 0x29E238u;
label_29e238:
    // 0x29e238: 0x1000000c  b           . + 4 + (0xC << 2)
label_29e23c:
    if (ctx->pc == 0x29E23Cu) {
        ctx->pc = 0x29E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E238u;
        // 0x29e23c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E240u;
        goto label_29e240;
    }
    ctx->pc = 0x29E238u;
    {
        const bool branch_taken_0x29e238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E238u;
        // 0x29e23c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e238) {
            ctx->pc = 0x29E26Cu;
            goto label_29e26c;
        }
    }
    ctx->pc = 0x29E240u;
label_29e240:
    // 0x29e240: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x29e240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_29e244:
    // 0x29e244: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_29e248:
    if (ctx->pc == 0x29E248u) {
        ctx->pc = 0x29E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E244u;
        // 0x29e248: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E24Cu;
        goto label_29e24c;
    }
    ctx->pc = 0x29E244u;
    {
        const bool branch_taken_0x29e244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E244u;
        // 0x29e248: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e244) {
            ctx->pc = 0x29E2D0u;
            goto label_29e2d0;
        }
    }
    ctx->pc = 0x29E24Cu;
label_29e24c:
    // 0x29e24c: 0x10000007  b           . + 4 + (0x7 << 2)
label_29e250:
    if (ctx->pc == 0x29E250u) {
        ctx->pc = 0x29E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E24Cu;
        // 0x29e250: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E254u;
        goto label_29e254;
    }
    ctx->pc = 0x29E24Cu;
    {
        const bool branch_taken_0x29e24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E24Cu;
        // 0x29e250: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e24c) {
            ctx->pc = 0x29E26Cu;
            goto label_29e26c;
        }
    }
    ctx->pc = 0x29E254u;
label_29e254:
    // 0x29e254: 0x32630280  andi        $v1, $s3, 0x280
    ctx->pc = 0x29e254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)640);
label_29e258:
    // 0x29e258: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x29e258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_29e25c:
    // 0x29e25c: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_29e260:
    if (ctx->pc == 0x29E260u) {
        ctx->pc = 0x29E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E25Cu;
        // 0x29e260: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E264u;
        goto label_29e264;
    }
    ctx->pc = 0x29E25Cu;
    {
        const bool branch_taken_0x29e25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E25Cu;
        // 0x29e260: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e25c) {
            ctx->pc = 0x29E2D0u;
            goto label_29e2d0;
        }
    }
    ctx->pc = 0x29E264u;
label_29e264:
    // 0x29e264: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x29e264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_29e268:
    // 0x29e268: 0x345300c0  ori         $s3, $v0, 0xC0
    ctx->pc = 0x29e268u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
label_29e26c:
    // 0x29e26c: 0xa2510000  sb          $s1, 0x0($s2)
    ctx->pc = 0x29e26cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 17));
label_29e270:
    // 0x29e270: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29e270u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_29e274:
    // 0x29e274: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x29e274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29e278:
    // 0x29e278: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x29e278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_29e27c:
    // 0x29e27c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29e280:
    // 0x29e280: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x29e280u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29e284:
    // 0x29e284: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_29e288:
    if (ctx->pc == 0x29E288u) {
        ctx->pc = 0x29E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E284u;
        // 0x29e288: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E28Cu;
        goto label_29e28c;
    }
    ctx->pc = 0x29E284u;
    {
        const bool branch_taken_0x29e284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E284u;
        // 0x29e288: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e284) {
            ctx->pc = 0x29E2A0u;
            goto label_29e2a0;
        }
    }
    ctx->pc = 0x29E28Cu;
label_29e28c:
    // 0x29e28c: 0xc0a7274  jal         func_29C9D0
label_29e290:
    if (ctx->pc == 0x29E290u) {
        ctx->pc = 0x29E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E28Cu;
        // 0x29e290: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E294u;
        goto label_29e294;
    }
    ctx->pc = 0x29E28Cu;
    SET_GPR_U32(ctx, 31, 0x29E294u);
    ctx->pc = 0x29E290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E28Cu;
    // 0x29e290: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C9D0u, 0x29E28Cu, 0x29E294u)) {
        return;
    }
    ctx->pc = 0x29E294u;
label_29e294:
    // 0x29e294: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29e294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29e298:
    // 0x29e298: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_29e29c:
    if (ctx->pc == 0x29E29Cu) {
        ctx->pc = 0x29E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E298u;
        // 0x29e29c: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E2A0u;
        goto label_29e2a0;
    }
    ctx->pc = 0x29E298u;
    {
        const bool branch_taken_0x29e298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x29E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E298u;
        // 0x29e29c: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e298) {
            ctx->pc = 0x29E2BCu;
            goto label_29e2bc;
        }
    }
    ctx->pc = 0x29E2A0u;
label_29e2a0:
    // 0x29e2a0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x29e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29e2a4:
    // 0x29e2a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x29e2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29e2a8:
    // 0x29e2a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29e2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29e2ac:
    // 0x29e2ac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x29e2acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29e2b0:
    // 0x29e2b0: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
label_29e2b4:
    if (ctx->pc == 0x29E2B4u) {
        ctx->pc = 0x29E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2B0u;
        // 0x29e2b4: 0x66b5ffff  daddiu      $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E2B8u;
        goto label_29e2b8;
    }
    ctx->pc = 0x29E2B0u;
    {
        const bool branch_taken_0x29e2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x29e2b0) {
            ctx->pc = 0x29E2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E2B0u;
            // 0x29e2b4: 0x66b5ffff  daddiu      $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E2C8u;
            goto label_29e2c8;
        }
    }
    ctx->pc = 0x29E2B8u;
label_29e2b8:
    // 0x29e2b8: 0x8fa40274  lw          $a0, 0x274($sp)
    ctx->pc = 0x29e2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_29e2bc:
    // 0x29e2bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29e2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_29e2c0:
    // 0x29e2c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_29e2c4:
    if (ctx->pc == 0x29E2C4u) {
        ctx->pc = 0x29E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2C0u;
        // 0x29e2c4: 0xafa40274  sw          $a0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E2C8u;
        goto label_29e2c8;
    }
    ctx->pc = 0x29E2C0u;
    {
        const bool branch_taken_0x29e2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2C0u;
        // 0x29e2c4: 0xafa40274  sw          $a0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e2c0) {
            ctx->pc = 0x29E2D0u;
            goto label_29e2d0;
        }
    }
    ctx->pc = 0x29E2C8u;
label_29e2c8:
    // 0x29e2c8: 0x56a0ffcb  bnel        $s5, $zero, . + 4 + (-0x35 << 2)
label_29e2cc:
    if (ctx->pc == 0x29E2CCu) {
        ctx->pc = 0x29E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2C8u;
        // 0x29e2cc: 0x90b10000  lbu         $s1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E2D0u;
        goto label_29e2d0;
    }
    ctx->pc = 0x29E2C8u;
    {
        const bool branch_taken_0x29e2c8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e2c8) {
            ctx->pc = 0x29E2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E2C8u;
            // 0x29e2cc: 0x90b10000  lbu         $s1, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e1f8;
        }
    }
    ctx->pc = 0x29E2D0u;
label_29e2d0:
    // 0x29e2d0: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x29e2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_29e2d4:
    // 0x29e2d4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_29e2d8:
    if (ctx->pc == 0x29E2D8u) {
        ctx->pc = 0x29E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2D4u;
        // 0x29e2d8: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E2DCu;
        goto label_29e2dc;
    }
    ctx->pc = 0x29E2D4u;
    {
        const bool branch_taken_0x29e2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2D4u;
        // 0x29e2d8: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e2d4) {
            ctx->pc = 0x29E348u;
            goto label_29e348;
        }
    }
    ctx->pc = 0x29E2DCu;
label_29e2dc:
    // 0x29e2dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_29e2e0:
    if (ctx->pc == 0x29E2E0u) {
        ctx->pc = 0x29E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2DCu;
        // 0x29e2e0: 0x3d2102b  sltu        $v0, $fp, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E2E4u;
        goto label_29e2e4;
    }
    ctx->pc = 0x29E2DCu;
    {
        const bool branch_taken_0x29e2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2DCu;
        // 0x29e2e0: 0x3d2102b  sltu        $v0, $fp, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e2dc) {
            ctx->pc = 0x29E310u;
            goto label_29e310;
        }
    }
    ctx->pc = 0x29E2E4u;
label_29e2e4:
    // 0x29e2e4: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_29e2e8:
    if (ctx->pc == 0x29E2E8u) {
        ctx->pc = 0x29E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2E4u;
        // 0x29e2e8: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E2ECu;
        goto label_29e2ec;
    }
    ctx->pc = 0x29E2E4u;
    {
        const bool branch_taken_0x29e2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2E4u;
        // 0x29e2e8: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e2e4) {
            ctx->pc = 0x29E3DCu;
            goto label_29e3dc;
        }
    }
    ctx->pc = 0x29E2ECu;
label_29e2ec:
    // 0x29e2ec: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x29e2ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_29e2f0:
    // 0x29e2f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29e2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29e2f4:
    // 0x29e2f4: 0xc0a7bb2  jal         func_29EEC8
label_29e2f8:
    if (ctx->pc == 0x29E2F8u) {
        ctx->pc = 0x29E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2F4u;
        // 0x29e2f8: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E2FCu;
        goto label_29e2fc;
    }
    ctx->pc = 0x29E2F4u;
    SET_GPR_U32(ctx, 31, 0x29E2FCu);
    ctx->pc = 0x29E2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E2F4u;
    // 0x29e2f8: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEC8u, 0x29E2F4u, 0x29E2FCu)) {
        return;
    }
    ctx->pc = 0x29E2FCu;
label_29e2fc:
    // 0x29e2fc: 0x3d2182b  sltu        $v1, $fp, $s2
    ctx->pc = 0x29e2fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_29e300:
    // 0x29e300: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_29e304:
    if (ctx->pc == 0x29E304u) {
        ctx->pc = 0x29E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E300u;
        // 0x29e304: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E308u;
        goto label_29e308;
    }
    ctx->pc = 0x29E300u;
    {
        const bool branch_taken_0x29e300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E300u;
        // 0x29e304: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e300) {
            ctx->pc = 0x29E2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e2f0;
        }
    }
    ctx->pc = 0x29E308u;
label_29e308:
    // 0x29e308: 0x10000034  b           . + 4 + (0x34 << 2)
label_29e30c:
    if (ctx->pc == 0x29E30Cu) {
        ctx->pc = 0x29E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E308u;
        // 0x29e30c: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E310u;
        goto label_29e310;
    }
    ctx->pc = 0x29E308u;
    {
        const bool branch_taken_0x29e308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E308u;
        // 0x29e30c: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e308) {
            ctx->pc = 0x29E3DCu;
            goto label_29e3dc;
        }
    }
    ctx->pc = 0x29E310u;
label_29e310:
    // 0x29e310: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x29e310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_29e314:
    // 0x29e314: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x29e314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_29e318:
    // 0x29e318: 0x92510000  lbu         $s1, 0x0($s2)
    ctx->pc = 0x29e318u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_29e31c:
    // 0x29e31c: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_29e320:
    if (ctx->pc == 0x29E320u) {
        ctx->pc = 0x29E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E31Cu;
        // 0x29e320: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E324u;
        goto label_29e324;
    }
    ctx->pc = 0x29E31Cu;
    {
        const bool branch_taken_0x29e31c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x29E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E31Cu;
        // 0x29e320: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e31c) {
            ctx->pc = 0x29E33Cu;
            goto label_29e33c;
        }
    }
    ctx->pc = 0x29E324u;
label_29e324:
    // 0x29e324: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
label_29e328:
    if (ctx->pc == 0x29E328u) {
        ctx->pc = 0x29E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E324u;
        // 0x29e328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E32Cu;
        goto label_29e32c;
    }
    ctx->pc = 0x29E324u;
    {
        const bool branch_taken_0x29e324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x29E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E324u;
        // 0x29e328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e324) {
            ctx->pc = 0x29E33Cu;
            goto label_29e33c;
        }
    }
    ctx->pc = 0x29E32Cu;
label_29e32c:
    // 0x29e32c: 0xc0a7bb2  jal         func_29EEC8
label_29e330:
    if (ctx->pc == 0x29E330u) {
        ctx->pc = 0x29E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E32Cu;
        // 0x29e330: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E334u;
        goto label_29e334;
    }
    ctx->pc = 0x29E32Cu;
    SET_GPR_U32(ctx, 31, 0x29E334u);
    ctx->pc = 0x29E330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E32Cu;
    // 0x29e330: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEC8u, 0x29E32Cu, 0x29E334u)) {
        return;
    }
    ctx->pc = 0x29E334u;
label_29e334:
    // 0x29e334: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x29e334u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_29e338:
    // 0x29e338: 0x92510000  lbu         $s1, 0x0($s2)
    ctx->pc = 0x29e338u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_29e33c:
    // 0x29e33c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29e33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29e340:
    // 0x29e340: 0xc0a7bb2  jal         func_29EEC8
label_29e344:
    if (ctx->pc == 0x29E344u) {
        ctx->pc = 0x29E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E340u;
        // 0x29e344: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E348u;
        goto label_29e348;
    }
    ctx->pc = 0x29E340u;
    SET_GPR_U32(ctx, 31, 0x29E348u);
    ctx->pc = 0x29E344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E340u;
    // 0x29e344: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEC8u, 0x29E340u, 0x29E348u)) {
        return;
    }
    ctx->pc = 0x29E348u;
label_29e348:
    // 0x29e348: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x29e348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_29e34c:
    // 0x29e34c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_29e350:
    if (ctx->pc == 0x29E350u) {
        ctx->pc = 0x29E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E34Cu;
        // 0x29e350: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E354u;
        goto label_29e354;
    }
    ctx->pc = 0x29E34Cu;
    {
        const bool branch_taken_0x29e34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E34Cu;
        // 0x29e350: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e34c) {
            ctx->pc = 0x29E3A4u;
            goto label_29e3a4;
        }
    }
    ctx->pc = 0x29E354u;
label_29e354:
    // 0x29e354: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x29e354u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_29e358:
    // 0x29e358: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x29e358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_29e35c:
    // 0x29e35c: 0xc0a8200  jal         func_2A0800
label_29e360:
    if (ctx->pc == 0x29E360u) {
        ctx->pc = 0x29E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E35Cu;
        // 0x29e360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E364u;
        goto label_29e364;
    }
    ctx->pc = 0x29E35Cu;
    SET_GPR_U32(ctx, 31, 0x29E364u);
    ctx->pc = 0x29E360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E35Cu;
    // 0x29e360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0800u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0800u, 0x29E35Cu, 0x29E364u)) {
        return;
    }
    ctx->pc = 0x29E364u;
label_29e364:
    // 0x29e364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29e364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29e368:
    // 0x29e368: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x29e368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_29e36c:
    // 0x29e36c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29e370:
    if (ctx->pc == 0x29E370u) {
        ctx->pc = 0x29E374u;
        goto label_29e374;
    }
    ctx->pc = 0x29E36Cu;
    {
        const bool branch_taken_0x29e36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e36c) {
            ctx->pc = 0x29E384u;
            goto label_29e384;
        }
    }
    ctx->pc = 0x29E374u;
label_29e374:
    // 0x29e374: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x29e374u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_29e378:
    // 0x29e378: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x29e378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_29e37c:
    // 0x29e37c: 0x10000005  b           . + 4 + (0x5 << 2)
label_29e380:
    if (ctx->pc == 0x29E380u) {
        ctx->pc = 0x29E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E37Cu;
        // 0x29e380: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E384u;
        goto label_29e384;
    }
    ctx->pc = 0x29E37Cu;
    {
        const bool branch_taken_0x29e37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E37Cu;
        // 0x29e380: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e37c) {
            ctx->pc = 0x29E394u;
            goto label_29e394;
        }
    }
    ctx->pc = 0x29E384u;
label_29e384:
    // 0x29e384: 0xc07df98  jal         func_1F7E60
label_29e388:
    if (ctx->pc == 0x29E388u) {
        ctx->pc = 0x29E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E384u;
        // 0x29e388: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E38Cu;
        goto label_29e38c;
    }
    ctx->pc = 0x29E384u;
    SET_GPR_U32(ctx, 31, 0x29E38Cu);
    ctx->pc = 0x29E388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E384u;
    // 0x29e388: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x29E384u, 0x29E38Cu)) {
        return;
    }
    ctx->pc = 0x29E38Cu;
label_29e38c:
    // 0x29e38c: 0x8ed0fff8  lw          $s0, -0x8($s6)
    ctx->pc = 0x29e38cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_29e390:
    // 0x29e390: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x29e390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_29e394:
    // 0x29e394: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x29e394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_29e398:
    // 0x29e398: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29e398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29e39c:
    // 0x29e39c: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x29e39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_29e3a0:
    // 0x29e3a0: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x29e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_29e3a4:
    // 0x29e3a4: 0x25e1023  subu        $v0, $s2, $fp
    ctx->pc = 0x29e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
label_29e3a8:
    // 0x29e3a8: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x29e3a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_29e3ac:
    // 0x29e3ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29e3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29e3b0:
    // 0x29e3b0: 0x1000fce4  b           . + 4 + (-0x31C << 2)
label_29e3b4:
    if (ctx->pc == 0x29E3B4u) {
        ctx->pc = 0x29E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3B0u;
        // 0x29e3b4: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E3B8u;
        goto label_29e3b8;
    }
    ctx->pc = 0x29E3B0u;
    {
        const bool branch_taken_0x29e3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3B0u;
        // 0x29e3b4: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e3b0) {
            ctx->pc = 0x29D744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d744;
        }
    }
    ctx->pc = 0x29E3B8u;
label_29e3b8:
    // 0x29e3b8: 0x8fa40274  lw          $a0, 0x274($sp)
    ctx->pc = 0x29e3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_29e3bc:
    // 0x29e3bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29e3c0:
    // 0x29e3c0: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x29e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_29e3c4:
    // 0x29e3c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29e3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_29e3c8:
    // 0x29e3c8: 0xafa40274  sw          $a0, 0x274($sp)
    ctx->pc = 0x29e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 4));
label_29e3cc:
    // 0x29e3cc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x29e3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_29e3d0:
    // 0x29e3d0: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x29e3d0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
label_29e3d4:
    // 0x29e3d4: 0xafa30264  sw          $v1, 0x264($sp)
    ctx->pc = 0x29e3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
label_29e3d8:
    // 0x29e3d8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x29e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_29e3dc:
    // 0x29e3dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_29e3e0:
    if (ctx->pc == 0x29E3E0u) {
        ctx->pc = 0x29E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3DCu;
        // 0x29e3e0: 0x8fa30260  lw          $v1, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E3E4u;
        goto label_29e3e4;
    }
    ctx->pc = 0x29E3DCu;
    {
        const bool branch_taken_0x29e3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3DCu;
        // 0x29e3e0: 0x8fa30260  lw          $v1, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e3dc) {
            ctx->pc = 0x29E410u;
            goto label_29e410;
        }
    }
    ctx->pc = 0x29E3E4u;
label_29e3e4:
    // 0x29e3e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29e3e8:
    // 0x29e3e8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x29e3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_29e3ec:
    // 0x29e3ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29e3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_29e3f0:
    // 0x29e3f0: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x29e3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_29e3f4:
    // 0x29e3f4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_29e3f8:
    if (ctx->pc == 0x29E3F8u) {
        ctx->pc = 0x29E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3F4u;
        // 0x29e3f8: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E3FCu;
        goto label_29e3fc;
    }
    ctx->pc = 0x29E3F4u;
    {
        const bool branch_taken_0x29e3f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3F4u;
        // 0x29e3f8: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e3f4) {
            ctx->pc = 0x29E410u;
            goto label_29e410;
        }
    }
    ctx->pc = 0x29E3FCu;
label_29e3fc:
    // 0x29e3fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29e400:
    if (ctx->pc == 0x29E400u) {
        ctx->pc = 0x29E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3FCu;
        // 0x29e400: 0x8fa20264  lw          $v0, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E404u;
        goto label_29e404;
    }
    ctx->pc = 0x29E3FCu;
    {
        const bool branch_taken_0x29e3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3FCu;
        // 0x29e400: 0x8fa20264  lw          $v0, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e3fc) {
            ctx->pc = 0x29E414u;
            goto label_29e414;
        }
    }
    ctx->pc = 0x29E404u;
label_29e404:
    // 0x29e404: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29e404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29e408:
    // 0x29e408: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x29e408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_29e40c:
    // 0x29e40c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x29e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_29e410:
    // 0x29e410: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x29e410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_29e414:
    // 0x29e414: 0xdfbf0310  ld          $ra, 0x310($sp)
    ctx->pc = 0x29e414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 784)));
label_29e418:
    // 0x29e418: 0xdfbe0300  ld          $fp, 0x300($sp)
    ctx->pc = 0x29e418u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 768)));
label_29e41c:
    // 0x29e41c: 0xdfb702f0  ld          $s7, 0x2F0($sp)
    ctx->pc = 0x29e41cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 752)));
label_29e420:
    // 0x29e420: 0xdfb602e0  ld          $s6, 0x2E0($sp)
    ctx->pc = 0x29e420u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 736)));
label_29e424:
    // 0x29e424: 0xdfb502d0  ld          $s5, 0x2D0($sp)
    ctx->pc = 0x29e424u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 720)));
label_29e428:
    // 0x29e428: 0xdfb402c0  ld          $s4, 0x2C0($sp)
    ctx->pc = 0x29e428u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_29e42c:
    // 0x29e42c: 0xdfb302b0  ld          $s3, 0x2B0($sp)
    ctx->pc = 0x29e42cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_29e430:
    // 0x29e430: 0xdfb202a0  ld          $s2, 0x2A0($sp)
    ctx->pc = 0x29e430u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_29e434:
    // 0x29e434: 0xdfb10290  ld          $s1, 0x290($sp)
    ctx->pc = 0x29e434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_29e438:
    // 0x29e438: 0xdfb00280  ld          $s0, 0x280($sp)
    ctx->pc = 0x29e438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_29e43c:
    // 0x29e43c: 0x3e00008  jr          $ra
label_29e440:
    if (ctx->pc == 0x29E440u) {
        ctx->pc = 0x29E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E43Cu;
        // 0x29e440: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E444u;
        goto label_29e444;
    }
    ctx->pc = 0x29E43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E43Cu;
        // 0x29e440: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E444u;
label_29e444:
    // 0x29e444: 0x0  nop
    ctx->pc = 0x29e444u;
    // NOP
    ctx->pc = 0x29e448u;
}
