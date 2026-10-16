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

// Function: sub_0014D788
// Address: 0x14d788 - 0x14dee8
void sub_0014D788_0x14d788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D788_0x14d788");
#endif

    switch (ctx->pc) {
        case 0x14d788u: goto label_14d788;
        case 0x14d78cu: goto label_14d78c;
        case 0x14d790u: goto label_14d790;
        case 0x14d794u: goto label_14d794;
        case 0x14d798u: goto label_14d798;
        case 0x14d79cu: goto label_14d79c;
        case 0x14d7a0u: goto label_14d7a0;
        case 0x14d7a4u: goto label_14d7a4;
        case 0x14d7a8u: goto label_14d7a8;
        case 0x14d7acu: goto label_14d7ac;
        case 0x14d7b0u: goto label_14d7b0;
        case 0x14d7b4u: goto label_14d7b4;
        case 0x14d7b8u: goto label_14d7b8;
        case 0x14d7bcu: goto label_14d7bc;
        case 0x14d7c0u: goto label_14d7c0;
        case 0x14d7c4u: goto label_14d7c4;
        case 0x14d7c8u: goto label_14d7c8;
        case 0x14d7ccu: goto label_14d7cc;
        case 0x14d7d0u: goto label_14d7d0;
        case 0x14d7d4u: goto label_14d7d4;
        case 0x14d7d8u: goto label_14d7d8;
        case 0x14d7dcu: goto label_14d7dc;
        case 0x14d7e0u: goto label_14d7e0;
        case 0x14d7e4u: goto label_14d7e4;
        case 0x14d7e8u: goto label_14d7e8;
        case 0x14d7ecu: goto label_14d7ec;
        case 0x14d7f0u: goto label_14d7f0;
        case 0x14d7f4u: goto label_14d7f4;
        case 0x14d7f8u: goto label_14d7f8;
        case 0x14d7fcu: goto label_14d7fc;
        case 0x14d800u: goto label_14d800;
        case 0x14d804u: goto label_14d804;
        case 0x14d808u: goto label_14d808;
        case 0x14d80cu: goto label_14d80c;
        case 0x14d810u: goto label_14d810;
        case 0x14d814u: goto label_14d814;
        case 0x14d818u: goto label_14d818;
        case 0x14d81cu: goto label_14d81c;
        case 0x14d820u: goto label_14d820;
        case 0x14d824u: goto label_14d824;
        case 0x14d828u: goto label_14d828;
        case 0x14d82cu: goto label_14d82c;
        case 0x14d830u: goto label_14d830;
        case 0x14d834u: goto label_14d834;
        case 0x14d838u: goto label_14d838;
        case 0x14d83cu: goto label_14d83c;
        case 0x14d840u: goto label_14d840;
        case 0x14d844u: goto label_14d844;
        case 0x14d848u: goto label_14d848;
        case 0x14d84cu: goto label_14d84c;
        case 0x14d850u: goto label_14d850;
        case 0x14d854u: goto label_14d854;
        case 0x14d858u: goto label_14d858;
        case 0x14d85cu: goto label_14d85c;
        case 0x14d860u: goto label_14d860;
        case 0x14d864u: goto label_14d864;
        case 0x14d868u: goto label_14d868;
        case 0x14d86cu: goto label_14d86c;
        case 0x14d870u: goto label_14d870;
        case 0x14d874u: goto label_14d874;
        case 0x14d878u: goto label_14d878;
        case 0x14d87cu: goto label_14d87c;
        case 0x14d880u: goto label_14d880;
        case 0x14d884u: goto label_14d884;
        case 0x14d888u: goto label_14d888;
        case 0x14d88cu: goto label_14d88c;
        case 0x14d890u: goto label_14d890;
        case 0x14d894u: goto label_14d894;
        case 0x14d898u: goto label_14d898;
        case 0x14d89cu: goto label_14d89c;
        case 0x14d8a0u: goto label_14d8a0;
        case 0x14d8a4u: goto label_14d8a4;
        case 0x14d8a8u: goto label_14d8a8;
        case 0x14d8acu: goto label_14d8ac;
        case 0x14d8b0u: goto label_14d8b0;
        case 0x14d8b4u: goto label_14d8b4;
        case 0x14d8b8u: goto label_14d8b8;
        case 0x14d8bcu: goto label_14d8bc;
        case 0x14d8c0u: goto label_14d8c0;
        case 0x14d8c4u: goto label_14d8c4;
        case 0x14d8c8u: goto label_14d8c8;
        case 0x14d8ccu: goto label_14d8cc;
        case 0x14d8d0u: goto label_14d8d0;
        case 0x14d8d4u: goto label_14d8d4;
        case 0x14d8d8u: goto label_14d8d8;
        case 0x14d8dcu: goto label_14d8dc;
        case 0x14d8e0u: goto label_14d8e0;
        case 0x14d8e4u: goto label_14d8e4;
        case 0x14d8e8u: goto label_14d8e8;
        case 0x14d8ecu: goto label_14d8ec;
        case 0x14d8f0u: goto label_14d8f0;
        case 0x14d8f4u: goto label_14d8f4;
        case 0x14d8f8u: goto label_14d8f8;
        case 0x14d8fcu: goto label_14d8fc;
        case 0x14d900u: goto label_14d900;
        case 0x14d904u: goto label_14d904;
        case 0x14d908u: goto label_14d908;
        case 0x14d90cu: goto label_14d90c;
        case 0x14d910u: goto label_14d910;
        case 0x14d914u: goto label_14d914;
        case 0x14d918u: goto label_14d918;
        case 0x14d91cu: goto label_14d91c;
        case 0x14d920u: goto label_14d920;
        case 0x14d924u: goto label_14d924;
        case 0x14d928u: goto label_14d928;
        case 0x14d92cu: goto label_14d92c;
        case 0x14d930u: goto label_14d930;
        case 0x14d934u: goto label_14d934;
        case 0x14d938u: goto label_14d938;
        case 0x14d93cu: goto label_14d93c;
        case 0x14d940u: goto label_14d940;
        case 0x14d944u: goto label_14d944;
        case 0x14d948u: goto label_14d948;
        case 0x14d94cu: goto label_14d94c;
        case 0x14d950u: goto label_14d950;
        case 0x14d954u: goto label_14d954;
        case 0x14d958u: goto label_14d958;
        case 0x14d95cu: goto label_14d95c;
        case 0x14d960u: goto label_14d960;
        case 0x14d964u: goto label_14d964;
        case 0x14d968u: goto label_14d968;
        case 0x14d96cu: goto label_14d96c;
        case 0x14d970u: goto label_14d970;
        case 0x14d974u: goto label_14d974;
        case 0x14d978u: goto label_14d978;
        case 0x14d97cu: goto label_14d97c;
        case 0x14d980u: goto label_14d980;
        case 0x14d984u: goto label_14d984;
        case 0x14d988u: goto label_14d988;
        case 0x14d98cu: goto label_14d98c;
        case 0x14d990u: goto label_14d990;
        case 0x14d994u: goto label_14d994;
        case 0x14d998u: goto label_14d998;
        case 0x14d99cu: goto label_14d99c;
        case 0x14d9a0u: goto label_14d9a0;
        case 0x14d9a4u: goto label_14d9a4;
        case 0x14d9a8u: goto label_14d9a8;
        case 0x14d9acu: goto label_14d9ac;
        case 0x14d9b0u: goto label_14d9b0;
        case 0x14d9b4u: goto label_14d9b4;
        case 0x14d9b8u: goto label_14d9b8;
        case 0x14d9bcu: goto label_14d9bc;
        case 0x14d9c0u: goto label_14d9c0;
        case 0x14d9c4u: goto label_14d9c4;
        case 0x14d9c8u: goto label_14d9c8;
        case 0x14d9ccu: goto label_14d9cc;
        case 0x14d9d0u: goto label_14d9d0;
        case 0x14d9d4u: goto label_14d9d4;
        case 0x14d9d8u: goto label_14d9d8;
        case 0x14d9dcu: goto label_14d9dc;
        case 0x14d9e0u: goto label_14d9e0;
        case 0x14d9e4u: goto label_14d9e4;
        case 0x14d9e8u: goto label_14d9e8;
        case 0x14d9ecu: goto label_14d9ec;
        case 0x14d9f0u: goto label_14d9f0;
        case 0x14d9f4u: goto label_14d9f4;
        case 0x14d9f8u: goto label_14d9f8;
        case 0x14d9fcu: goto label_14d9fc;
        case 0x14da00u: goto label_14da00;
        case 0x14da04u: goto label_14da04;
        case 0x14da08u: goto label_14da08;
        case 0x14da0cu: goto label_14da0c;
        case 0x14da10u: goto label_14da10;
        case 0x14da14u: goto label_14da14;
        case 0x14da18u: goto label_14da18;
        case 0x14da1cu: goto label_14da1c;
        case 0x14da20u: goto label_14da20;
        case 0x14da24u: goto label_14da24;
        case 0x14da28u: goto label_14da28;
        case 0x14da2cu: goto label_14da2c;
        case 0x14da30u: goto label_14da30;
        case 0x14da34u: goto label_14da34;
        case 0x14da38u: goto label_14da38;
        case 0x14da3cu: goto label_14da3c;
        case 0x14da40u: goto label_14da40;
        case 0x14da44u: goto label_14da44;
        case 0x14da48u: goto label_14da48;
        case 0x14da4cu: goto label_14da4c;
        case 0x14da50u: goto label_14da50;
        case 0x14da54u: goto label_14da54;
        case 0x14da58u: goto label_14da58;
        case 0x14da5cu: goto label_14da5c;
        case 0x14da60u: goto label_14da60;
        case 0x14da64u: goto label_14da64;
        case 0x14da68u: goto label_14da68;
        case 0x14da6cu: goto label_14da6c;
        case 0x14da70u: goto label_14da70;
        case 0x14da74u: goto label_14da74;
        case 0x14da78u: goto label_14da78;
        case 0x14da7cu: goto label_14da7c;
        case 0x14da80u: goto label_14da80;
        case 0x14da84u: goto label_14da84;
        case 0x14da88u: goto label_14da88;
        case 0x14da8cu: goto label_14da8c;
        case 0x14da90u: goto label_14da90;
        case 0x14da94u: goto label_14da94;
        case 0x14da98u: goto label_14da98;
        case 0x14da9cu: goto label_14da9c;
        case 0x14daa0u: goto label_14daa0;
        case 0x14daa4u: goto label_14daa4;
        case 0x14daa8u: goto label_14daa8;
        case 0x14daacu: goto label_14daac;
        case 0x14dab0u: goto label_14dab0;
        case 0x14dab4u: goto label_14dab4;
        case 0x14dab8u: goto label_14dab8;
        case 0x14dabcu: goto label_14dabc;
        case 0x14dac0u: goto label_14dac0;
        case 0x14dac4u: goto label_14dac4;
        case 0x14dac8u: goto label_14dac8;
        case 0x14daccu: goto label_14dacc;
        case 0x14dad0u: goto label_14dad0;
        case 0x14dad4u: goto label_14dad4;
        case 0x14dad8u: goto label_14dad8;
        case 0x14dadcu: goto label_14dadc;
        case 0x14dae0u: goto label_14dae0;
        case 0x14dae4u: goto label_14dae4;
        case 0x14dae8u: goto label_14dae8;
        case 0x14daecu: goto label_14daec;
        case 0x14daf0u: goto label_14daf0;
        case 0x14daf4u: goto label_14daf4;
        case 0x14daf8u: goto label_14daf8;
        case 0x14dafcu: goto label_14dafc;
        case 0x14db00u: goto label_14db00;
        case 0x14db04u: goto label_14db04;
        case 0x14db08u: goto label_14db08;
        case 0x14db0cu: goto label_14db0c;
        case 0x14db10u: goto label_14db10;
        case 0x14db14u: goto label_14db14;
        case 0x14db18u: goto label_14db18;
        case 0x14db1cu: goto label_14db1c;
        case 0x14db20u: goto label_14db20;
        case 0x14db24u: goto label_14db24;
        case 0x14db28u: goto label_14db28;
        case 0x14db2cu: goto label_14db2c;
        case 0x14db30u: goto label_14db30;
        case 0x14db34u: goto label_14db34;
        case 0x14db38u: goto label_14db38;
        case 0x14db3cu: goto label_14db3c;
        case 0x14db40u: goto label_14db40;
        case 0x14db44u: goto label_14db44;
        case 0x14db48u: goto label_14db48;
        case 0x14db4cu: goto label_14db4c;
        case 0x14db50u: goto label_14db50;
        case 0x14db54u: goto label_14db54;
        case 0x14db58u: goto label_14db58;
        case 0x14db5cu: goto label_14db5c;
        case 0x14db60u: goto label_14db60;
        case 0x14db64u: goto label_14db64;
        case 0x14db68u: goto label_14db68;
        case 0x14db6cu: goto label_14db6c;
        case 0x14db70u: goto label_14db70;
        case 0x14db74u: goto label_14db74;
        case 0x14db78u: goto label_14db78;
        case 0x14db7cu: goto label_14db7c;
        case 0x14db80u: goto label_14db80;
        case 0x14db84u: goto label_14db84;
        case 0x14db88u: goto label_14db88;
        case 0x14db8cu: goto label_14db8c;
        case 0x14db90u: goto label_14db90;
        case 0x14db94u: goto label_14db94;
        case 0x14db98u: goto label_14db98;
        case 0x14db9cu: goto label_14db9c;
        case 0x14dba0u: goto label_14dba0;
        case 0x14dba4u: goto label_14dba4;
        case 0x14dba8u: goto label_14dba8;
        case 0x14dbacu: goto label_14dbac;
        case 0x14dbb0u: goto label_14dbb0;
        case 0x14dbb4u: goto label_14dbb4;
        case 0x14dbb8u: goto label_14dbb8;
        case 0x14dbbcu: goto label_14dbbc;
        case 0x14dbc0u: goto label_14dbc0;
        case 0x14dbc4u: goto label_14dbc4;
        case 0x14dbc8u: goto label_14dbc8;
        case 0x14dbccu: goto label_14dbcc;
        case 0x14dbd0u: goto label_14dbd0;
        case 0x14dbd4u: goto label_14dbd4;
        case 0x14dbd8u: goto label_14dbd8;
        case 0x14dbdcu: goto label_14dbdc;
        case 0x14dbe0u: goto label_14dbe0;
        case 0x14dbe4u: goto label_14dbe4;
        case 0x14dbe8u: goto label_14dbe8;
        case 0x14dbecu: goto label_14dbec;
        case 0x14dbf0u: goto label_14dbf0;
        case 0x14dbf4u: goto label_14dbf4;
        case 0x14dbf8u: goto label_14dbf8;
        case 0x14dbfcu: goto label_14dbfc;
        case 0x14dc00u: goto label_14dc00;
        case 0x14dc04u: goto label_14dc04;
        case 0x14dc08u: goto label_14dc08;
        case 0x14dc0cu: goto label_14dc0c;
        case 0x14dc10u: goto label_14dc10;
        case 0x14dc14u: goto label_14dc14;
        case 0x14dc18u: goto label_14dc18;
        case 0x14dc1cu: goto label_14dc1c;
        case 0x14dc20u: goto label_14dc20;
        case 0x14dc24u: goto label_14dc24;
        case 0x14dc28u: goto label_14dc28;
        case 0x14dc2cu: goto label_14dc2c;
        case 0x14dc30u: goto label_14dc30;
        case 0x14dc34u: goto label_14dc34;
        case 0x14dc38u: goto label_14dc38;
        case 0x14dc3cu: goto label_14dc3c;
        case 0x14dc40u: goto label_14dc40;
        case 0x14dc44u: goto label_14dc44;
        case 0x14dc48u: goto label_14dc48;
        case 0x14dc4cu: goto label_14dc4c;
        case 0x14dc50u: goto label_14dc50;
        case 0x14dc54u: goto label_14dc54;
        case 0x14dc58u: goto label_14dc58;
        case 0x14dc5cu: goto label_14dc5c;
        case 0x14dc60u: goto label_14dc60;
        case 0x14dc64u: goto label_14dc64;
        case 0x14dc68u: goto label_14dc68;
        case 0x14dc6cu: goto label_14dc6c;
        case 0x14dc70u: goto label_14dc70;
        case 0x14dc74u: goto label_14dc74;
        case 0x14dc78u: goto label_14dc78;
        case 0x14dc7cu: goto label_14dc7c;
        case 0x14dc80u: goto label_14dc80;
        case 0x14dc84u: goto label_14dc84;
        case 0x14dc88u: goto label_14dc88;
        case 0x14dc8cu: goto label_14dc8c;
        case 0x14dc90u: goto label_14dc90;
        case 0x14dc94u: goto label_14dc94;
        case 0x14dc98u: goto label_14dc98;
        case 0x14dc9cu: goto label_14dc9c;
        case 0x14dca0u: goto label_14dca0;
        case 0x14dca4u: goto label_14dca4;
        case 0x14dca8u: goto label_14dca8;
        case 0x14dcacu: goto label_14dcac;
        case 0x14dcb0u: goto label_14dcb0;
        case 0x14dcb4u: goto label_14dcb4;
        case 0x14dcb8u: goto label_14dcb8;
        case 0x14dcbcu: goto label_14dcbc;
        case 0x14dcc0u: goto label_14dcc0;
        case 0x14dcc4u: goto label_14dcc4;
        case 0x14dcc8u: goto label_14dcc8;
        case 0x14dcccu: goto label_14dccc;
        case 0x14dcd0u: goto label_14dcd0;
        case 0x14dcd4u: goto label_14dcd4;
        case 0x14dcd8u: goto label_14dcd8;
        case 0x14dcdcu: goto label_14dcdc;
        case 0x14dce0u: goto label_14dce0;
        case 0x14dce4u: goto label_14dce4;
        case 0x14dce8u: goto label_14dce8;
        case 0x14dcecu: goto label_14dcec;
        case 0x14dcf0u: goto label_14dcf0;
        case 0x14dcf4u: goto label_14dcf4;
        case 0x14dcf8u: goto label_14dcf8;
        case 0x14dcfcu: goto label_14dcfc;
        case 0x14dd00u: goto label_14dd00;
        case 0x14dd04u: goto label_14dd04;
        case 0x14dd08u: goto label_14dd08;
        case 0x14dd0cu: goto label_14dd0c;
        case 0x14dd10u: goto label_14dd10;
        case 0x14dd14u: goto label_14dd14;
        case 0x14dd18u: goto label_14dd18;
        case 0x14dd1cu: goto label_14dd1c;
        case 0x14dd20u: goto label_14dd20;
        case 0x14dd24u: goto label_14dd24;
        case 0x14dd28u: goto label_14dd28;
        case 0x14dd2cu: goto label_14dd2c;
        case 0x14dd30u: goto label_14dd30;
        case 0x14dd34u: goto label_14dd34;
        case 0x14dd38u: goto label_14dd38;
        case 0x14dd3cu: goto label_14dd3c;
        case 0x14dd40u: goto label_14dd40;
        case 0x14dd44u: goto label_14dd44;
        case 0x14dd48u: goto label_14dd48;
        case 0x14dd4cu: goto label_14dd4c;
        case 0x14dd50u: goto label_14dd50;
        case 0x14dd54u: goto label_14dd54;
        case 0x14dd58u: goto label_14dd58;
        case 0x14dd5cu: goto label_14dd5c;
        case 0x14dd60u: goto label_14dd60;
        case 0x14dd64u: goto label_14dd64;
        case 0x14dd68u: goto label_14dd68;
        case 0x14dd6cu: goto label_14dd6c;
        case 0x14dd70u: goto label_14dd70;
        case 0x14dd74u: goto label_14dd74;
        case 0x14dd78u: goto label_14dd78;
        case 0x14dd7cu: goto label_14dd7c;
        case 0x14dd80u: goto label_14dd80;
        case 0x14dd84u: goto label_14dd84;
        case 0x14dd88u: goto label_14dd88;
        case 0x14dd8cu: goto label_14dd8c;
        case 0x14dd90u: goto label_14dd90;
        case 0x14dd94u: goto label_14dd94;
        case 0x14dd98u: goto label_14dd98;
        case 0x14dd9cu: goto label_14dd9c;
        case 0x14dda0u: goto label_14dda0;
        case 0x14dda4u: goto label_14dda4;
        case 0x14dda8u: goto label_14dda8;
        case 0x14ddacu: goto label_14ddac;
        case 0x14ddb0u: goto label_14ddb0;
        case 0x14ddb4u: goto label_14ddb4;
        case 0x14ddb8u: goto label_14ddb8;
        case 0x14ddbcu: goto label_14ddbc;
        case 0x14ddc0u: goto label_14ddc0;
        case 0x14ddc4u: goto label_14ddc4;
        case 0x14ddc8u: goto label_14ddc8;
        case 0x14ddccu: goto label_14ddcc;
        case 0x14ddd0u: goto label_14ddd0;
        case 0x14ddd4u: goto label_14ddd4;
        case 0x14ddd8u: goto label_14ddd8;
        case 0x14dddcu: goto label_14dddc;
        case 0x14dde0u: goto label_14dde0;
        case 0x14dde4u: goto label_14dde4;
        case 0x14dde8u: goto label_14dde8;
        case 0x14ddecu: goto label_14ddec;
        case 0x14ddf0u: goto label_14ddf0;
        case 0x14ddf4u: goto label_14ddf4;
        case 0x14ddf8u: goto label_14ddf8;
        case 0x14ddfcu: goto label_14ddfc;
        case 0x14de00u: goto label_14de00;
        case 0x14de04u: goto label_14de04;
        case 0x14de08u: goto label_14de08;
        case 0x14de0cu: goto label_14de0c;
        case 0x14de10u: goto label_14de10;
        case 0x14de14u: goto label_14de14;
        case 0x14de18u: goto label_14de18;
        case 0x14de1cu: goto label_14de1c;
        case 0x14de20u: goto label_14de20;
        case 0x14de24u: goto label_14de24;
        case 0x14de28u: goto label_14de28;
        case 0x14de2cu: goto label_14de2c;
        case 0x14de30u: goto label_14de30;
        case 0x14de34u: goto label_14de34;
        case 0x14de38u: goto label_14de38;
        case 0x14de3cu: goto label_14de3c;
        case 0x14de40u: goto label_14de40;
        case 0x14de44u: goto label_14de44;
        case 0x14de48u: goto label_14de48;
        case 0x14de4cu: goto label_14de4c;
        case 0x14de50u: goto label_14de50;
        case 0x14de54u: goto label_14de54;
        case 0x14de58u: goto label_14de58;
        case 0x14de5cu: goto label_14de5c;
        case 0x14de60u: goto label_14de60;
        case 0x14de64u: goto label_14de64;
        case 0x14de68u: goto label_14de68;
        case 0x14de6cu: goto label_14de6c;
        case 0x14de70u: goto label_14de70;
        case 0x14de74u: goto label_14de74;
        case 0x14de78u: goto label_14de78;
        case 0x14de7cu: goto label_14de7c;
        case 0x14de80u: goto label_14de80;
        case 0x14de84u: goto label_14de84;
        case 0x14de88u: goto label_14de88;
        case 0x14de8cu: goto label_14de8c;
        case 0x14de90u: goto label_14de90;
        case 0x14de94u: goto label_14de94;
        case 0x14de98u: goto label_14de98;
        case 0x14de9cu: goto label_14de9c;
        case 0x14dea0u: goto label_14dea0;
        case 0x14dea4u: goto label_14dea4;
        case 0x14dea8u: goto label_14dea8;
        case 0x14deacu: goto label_14deac;
        case 0x14deb0u: goto label_14deb0;
        case 0x14deb4u: goto label_14deb4;
        case 0x14deb8u: goto label_14deb8;
        case 0x14debcu: goto label_14debc;
        case 0x14dec0u: goto label_14dec0;
        case 0x14dec4u: goto label_14dec4;
        case 0x14dec8u: goto label_14dec8;
        case 0x14deccu: goto label_14decc;
        case 0x14ded0u: goto label_14ded0;
        case 0x14ded4u: goto label_14ded4;
        case 0x14ded8u: goto label_14ded8;
        case 0x14dedcu: goto label_14dedc;
        case 0x14dee0u: goto label_14dee0;
        case 0x14dee4u: goto label_14dee4;
        default: break;
    }

    ctx->pc = 0x14d788u;

label_14d788:
    // 0x14d788: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x14d788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_14d78c:
    // 0x14d78c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x14d78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_14d790:
    // 0x14d790: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x14d790u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_14d794:
    // 0x14d794: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14d798:
    // 0x14d798: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x14d798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_14d79c:
    // 0x14d79c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x14d79cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_14d7a0:
    // 0x14d7a0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14d7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_14d7a4:
    // 0x14d7a4: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x14d7a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_14d7a8:
    // 0x14d7a8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x14d7a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_14d7ac:
    // 0x14d7ac: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x14d7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14d7b0:
    // 0x14d7b0: 0x46150040  add.s       $f1, $f0, $f21
    ctx->pc = 0x14d7b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_14d7b4:
    // 0x14d7b4: 0x46150832  c.eq.s      $f1, $f21
    ctx->pc = 0x14d7b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14d7b8:
    // 0x14d7b8: 0x0  nop
    ctx->pc = 0x14d7b8u;
    // NOP
label_14d7bc:
    // 0x14d7bc: 0x450101c1  bc1t        . + 4 + (0x1C1 << 2)
label_14d7c0:
    if (ctx->pc == 0x14D7C0u) {
        ctx->pc = 0x14D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D7BCu;
        // 0x14d7c0: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D7C4u;
        goto label_14d7c4;
    }
    ctx->pc = 0x14D7BCu;
    {
        const bool branch_taken_0x14d7bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D7BCu;
        // 0x14d7c0: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d7bc) {
            ctx->pc = 0x14DEC4u;
            goto label_14dec4;
        }
    }
    ctx->pc = 0x14D7C4u;
label_14d7c4:
    // 0x14d7c4: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x14d7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14d7c8:
    // 0x14d7c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14d7c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14d7cc:
    // 0x14d7cc: 0x0  nop
    ctx->pc = 0x14d7ccu;
    // NOP
label_14d7d0:
    // 0x14d7d0: 0x450100b9  bc1t        . + 4 + (0xB9 << 2)
label_14d7d4:
    if (ctx->pc == 0x14D7D4u) {
        ctx->pc = 0x14D7D8u;
        goto label_14d7d8;
    }
    ctx->pc = 0x14D7D0u;
    {
        const bool branch_taken_0x14d7d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d7d0) {
            ctx->pc = 0x14DAB8u;
            goto label_14dab8;
        }
    }
    ctx->pc = 0x14D7D8u;
label_14d7d8:
    // 0x14d7d8: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x14d7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14d7dc:
    // 0x14d7dc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x14d7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_14d7e0:
    // 0x14d7e0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x14d7e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_14d7e4:
    // 0x14d7e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14d7e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d7e8:
    // 0x14d7e8: 0x0  nop
    ctx->pc = 0x14d7e8u;
    // NOP
label_14d7ec:
    // 0x14d7ec: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x14d7ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14d7f0:
    // 0x14d7f0: 0x0  nop
    ctx->pc = 0x14d7f0u;
    // NOP
label_14d7f4:
    // 0x14d7f4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_14d7f8:
    if (ctx->pc == 0x14D7F8u) {
        ctx->pc = 0x14D7FCu;
        goto label_14d7fc;
    }
    ctx->pc = 0x14D7F4u;
    {
        const bool branch_taken_0x14d7f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d7f4) {
            ctx->pc = 0x14D80Cu;
            goto label_14d80c;
        }
    }
    ctx->pc = 0x14D7FCu;
label_14d7fc:
    // 0x14d7fc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x14d7fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14d800:
    // 0x14d800: 0x0  nop
    ctx->pc = 0x14d800u;
    // NOP
label_14d804:
    // 0x14d804: 0x45010032  bc1t        . + 4 + (0x32 << 2)
label_14d808:
    if (ctx->pc == 0x14D808u) {
        ctx->pc = 0x14D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D804u;
        // 0x14d808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D80Cu;
        goto label_14d80c;
    }
    ctx->pc = 0x14D804u;
    {
        const bool branch_taken_0x14d804 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D804u;
        // 0x14d808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d804) {
            ctx->pc = 0x14D8D0u;
            goto label_14d8d0;
        }
    }
    ctx->pc = 0x14D80Cu;
label_14d80c:
    // 0x14d80c: 0xc053c8c  jal         func_14F230
label_14d810:
    if (ctx->pc == 0x14D810u) {
        ctx->pc = 0x14D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D80Cu;
        // 0x14d810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D814u;
        goto label_14d814;
    }
    ctx->pc = 0x14D80Cu;
    SET_GPR_U32(ctx, 31, 0x14D814u);
    ctx->pc = 0x14D810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D80Cu;
    // 0x14d810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14F230u, 0x14D80Cu, 0x14D814u)) {
        return;
    }
    ctx->pc = 0x14D814u;
label_14d814:
    // 0x14d814: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_14d818:
    if (ctx->pc == 0x14D818u) {
        ctx->pc = 0x14D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D814u;
        // 0x14d818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D81Cu;
        goto label_14d81c;
    }
    ctx->pc = 0x14D814u;
    {
        const bool branch_taken_0x14d814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D814u;
        // 0x14d818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d814) {
            ctx->pc = 0x14D8D0u;
            goto label_14d8d0;
        }
    }
    ctx->pc = 0x14D81Cu;
label_14d81c:
    // 0x14d81c: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x14d81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_14d820:
    // 0x14d820: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_14d824:
    if (ctx->pc == 0x14D824u) {
        ctx->pc = 0x14D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D820u;
        // 0x14d824: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D828u;
        goto label_14d828;
    }
    ctx->pc = 0x14D820u;
    {
        const bool branch_taken_0x14d820 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D820u;
        // 0x14d824: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d820) {
            ctx->pc = 0x14D830u;
            goto label_14d830;
        }
    }
    ctx->pc = 0x14D828u;
label_14d828:
    // 0x14d828: 0xc043c92  jal         func_10F248
label_14d82c:
    if (ctx->pc == 0x14D82Cu) {
        ctx->pc = 0x14D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D828u;
        // 0x14d82c: 0x2606007c  addiu       $a2, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D830u;
        goto label_14d830;
    }
    ctx->pc = 0x14D828u;
    SET_GPR_U32(ctx, 31, 0x14D830u);
    ctx->pc = 0x14D82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D828u;
    // 0x14d82c: 0x2606007c  addiu       $a2, $s0, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F248u, 0x14D828u, 0x14D830u)) {
        return;
    }
    ctx->pc = 0x14D830u;
label_14d830:
    // 0x14d830: 0x6a020083  ldl         $v0, 0x83($s0)
    ctx->pc = 0x14d830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_14d834:
    // 0x14d834: 0x6e02007c  ldr         $v0, 0x7C($s0)
    ctx->pc = 0x14d834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_14d838:
    // 0x14d838: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x14d838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_14d83c:
    // 0x14d83c: 0xb202008f  sdl         $v0, 0x8F($s0)
    ctx->pc = 0x14d83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14d840:
    // 0x14d840: 0xb6020088  sdr         $v0, 0x88($s0)
    ctx->pc = 0x14d840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14d844:
    // 0x14d844: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x14d844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
label_14d848:
    // 0x14d848: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x14d848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_14d84c:
    // 0x14d84c: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x14d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_14d850:
    // 0x14d850: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x14d850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_14d854:
    // 0x14d854: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_14d858:
    if (ctx->pc == 0x14D858u) {
        ctx->pc = 0x14D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D854u;
        // 0x14d858: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D85Cu;
        goto label_14d85c;
    }
    ctx->pc = 0x14D854u;
    {
        const bool branch_taken_0x14d854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D854u;
        // 0x14d858: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d854) {
            ctx->pc = 0x14D8E0u;
            goto label_14d8e0;
        }
    }
    ctx->pc = 0x14D85Cu;
label_14d85c:
    // 0x14d85c: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x14d85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_14d860:
    // 0x14d860: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_14d864:
    if (ctx->pc == 0x14D864u) {
        ctx->pc = 0x14D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D860u;
        // 0x14d864: 0xc7a40004  lwc1        $f4, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D868u;
        goto label_14d868;
    }
    ctx->pc = 0x14D860u;
    {
        const bool branch_taken_0x14d860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D860u;
        // 0x14d864: 0xc7a40004  lwc1        $f4, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d860) {
            ctx->pc = 0x14D874u;
            goto label_14d874;
        }
    }
    ctx->pc = 0x14D868u;
label_14d868:
    // 0x14d868: 0xc04f0c2  jal         func_13C308
label_14d86c:
    if (ctx->pc == 0x14D86Cu) {
        ctx->pc = 0x14D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D868u;
        // 0x14d86c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D870u;
        goto label_14d870;
    }
    ctx->pc = 0x14D868u;
    SET_GPR_U32(ctx, 31, 0x14D870u);
    ctx->pc = 0x14D86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D868u;
    // 0x14d86c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x14D868u, 0x14D870u)) {
        return;
    }
    ctx->pc = 0x14D870u;
label_14d870:
    // 0x14d870: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x14d870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14d874:
    // 0x14d874: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14d874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_14d878:
    // 0x14d878: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14d878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d87c:
    // 0x14d87c: 0x0  nop
    ctx->pc = 0x14d87cu;
    // NOP
label_14d880:
    // 0x14d880: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x14d880u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_14d884:
    // 0x14d884: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x14d884u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_14d888:
    // 0x14d888: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x14d888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14d88c:
    // 0x14d88c: 0xc603007c  lwc1        $f3, 0x7C($s0)
    ctx->pc = 0x14d88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14d890:
    // 0x14d890: 0xc6050080  lwc1        $f5, 0x80($s0)
    ctx->pc = 0x14d890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_14d894:
    // 0x14d894: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x14d894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14d898:
    // 0x14d898: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x14d898u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_14d89c:
    // 0x14d89c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x14d89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14d8a0:
    // 0x14d8a0: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x14d8a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
label_14d8a4:
    // 0x14d8a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14d8a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14d8a8:
    // 0x14d8a8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x14d8a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_14d8ac:
    // 0x14d8ac: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x14d8acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_14d8b0:
    // 0x14d8b0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x14d8b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_14d8b4:
    // 0x14d8b4: 0xc093aa8  jal         func_24EAA0
label_14d8b8:
    if (ctx->pc == 0x14D8B8u) {
        ctx->pc = 0x14D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D8B4u;
        // 0x14d8b8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D8BCu;
        goto label_14d8bc;
    }
    ctx->pc = 0x14D8B4u;
    SET_GPR_U32(ctx, 31, 0x14D8BCu);
    ctx->pc = 0x14D8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D8B4u;
    // 0x14d8b8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x14D8B4u, 0x14D8BCu)) {
        return;
    }
    ctx->pc = 0x14D8BCu;
label_14d8bc:
    // 0x14d8bc: 0xc60100ac  lwc1        $f1, 0xAC($s0)
    ctx->pc = 0x14d8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14d8c0:
    // 0x14d8c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14d8c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14d8c4:
    // 0x14d8c4: 0x0  nop
    ctx->pc = 0x14d8c4u;
    // NOP
label_14d8c8:
    // 0x14d8c8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_14d8cc:
    if (ctx->pc == 0x14D8CCu) {
        ctx->pc = 0x14D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D8C8u;
        // 0x14d8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D8D0u;
        goto label_14d8d0;
    }
    ctx->pc = 0x14D8C8u;
    {
        const bool branch_taken_0x14d8c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D8C8u;
        // 0x14d8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d8c8) {
            ctx->pc = 0x14D8E0u;
            goto label_14d8e0;
        }
    }
    ctx->pc = 0x14D8D0u;
label_14d8d0:
    // 0x14d8d0: 0xc0538ae  jal         func_14E2B8
label_14d8d4:
    if (ctx->pc == 0x14D8D4u) {
        ctx->pc = 0x14D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D8D0u;
        // 0x14d8d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D8D8u;
        goto label_14d8d8;
    }
    ctx->pc = 0x14D8D0u;
    SET_GPR_U32(ctx, 31, 0x14D8D8u);
    ctx->pc = 0x14D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D8D0u;
    // 0x14d8d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14E2B8u, 0x14D8D0u, 0x14D8D8u)) {
        return;
    }
    ctx->pc = 0x14D8D8u;
label_14d8d8:
    // 0x14d8d8: 0x1000017b  b           . + 4 + (0x17B << 2)
label_14d8dc:
    if (ctx->pc == 0x14D8DCu) {
        ctx->pc = 0x14D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D8D8u;
        // 0x14d8dc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D8E0u;
        goto label_14d8e0;
    }
    ctx->pc = 0x14D8D8u;
    {
        const bool branch_taken_0x14d8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D8D8u;
        // 0x14d8dc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d8d8) {
            ctx->pc = 0x14DEC8u;
            goto label_14dec8;
        }
    }
    ctx->pc = 0x14D8E0u;
label_14d8e0:
    // 0x14d8e0: 0xc6060130  lwc1        $f6, 0x130($s0)
    ctx->pc = 0x14d8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_14d8e4:
    // 0x14d8e4: 0x46153502  mul.s       $f20, $f6, $f21
    ctx->pc = 0x14d8e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[6], ctx->f[21]);
label_14d8e8:
    // 0x14d8e8: 0xc6080024  lwc1        $f8, 0x24($s0)
    ctx->pc = 0x14d8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_14d8ec:
    // 0x14d8ec: 0xc6090028  lwc1        $f9, 0x28($s0)
    ctx->pc = 0x14d8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_14d8f0:
    // 0x14d8f0: 0x46144142  mul.s       $f5, $f8, $f20
    ctx->pc = 0x14d8f0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[20]);
label_14d8f4:
    // 0x14d8f4: 0xc607002c  lwc1        $f7, 0x2C($s0)
    ctx->pc = 0x14d8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_14d8f8:
    // 0x14d8f8: 0x46144902  mul.s       $f4, $f9, $f20
    ctx->pc = 0x14d8f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[20]);
label_14d8fc:
    // 0x14d8fc: 0xc602007c  lwc1        $f2, 0x7C($s0)
    ctx->pc = 0x14d8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14d900:
    // 0x14d900: 0x461438c2  mul.s       $f3, $f7, $f20
    ctx->pc = 0x14d900u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[20]);
label_14d904:
    // 0x14d904: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x14d904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14d908:
    // 0x14d908: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x14d908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14d90c:
    // 0x14d90c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x14d90cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_14d910:
    // 0x14d910: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x14d910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_14d914:
    // 0x14d914: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x14d914u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_14d918:
    // 0x14d918: 0xe602007c  swc1        $f2, 0x7C($s0)
    ctx->pc = 0x14d918u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
label_14d91c:
    // 0x14d91c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x14d91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_14d920:
    // 0x14d920: 0xe6010084  swc1        $f1, 0x84($s0)
    ctx->pc = 0x14d920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_14d924:
    // 0x14d924: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x14d924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_14d928:
    // 0x14d928: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x14d928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_14d92c:
    // 0x14d92c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x14d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_14d930:
    // 0x14d930: 0x46064202  mul.s       $f8, $f8, $f6
    ctx->pc = 0x14d930u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
label_14d934:
    // 0x14d934: 0x46063882  mul.s       $f2, $f7, $f6
    ctx->pc = 0x14d934u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
label_14d938:
    // 0x14d938: 0xe7a80010  swc1        $f8, 0x10($sp)
    ctx->pc = 0x14d938u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_14d93c:
    // 0x14d93c: 0x46064a42  mul.s       $f9, $f9, $f6
    ctx->pc = 0x14d93cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
label_14d940:
    // 0x14d940: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x14d940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_14d944:
    // 0x14d944: 0xe7a90014  swc1        $f9, 0x14($sp)
    ctx->pc = 0x14d944u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_14d948:
    // 0x14d948: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x14d948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_14d94c:
    // 0x14d94c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_14d950:
    if (ctx->pc == 0x14D950u) {
        ctx->pc = 0x14D954u;
        goto label_14d954;
    }
    ctx->pc = 0x14D94Cu;
    {
        const bool branch_taken_0x14d94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d94c) {
            ctx->pc = 0x14D990u;
            goto label_14d990;
        }
    }
    ctx->pc = 0x14D954u;
label_14d954:
    // 0x14d954: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14d954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_14d958:
    // 0x14d958: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14d958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d95c:
    // 0x14d95c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x14d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_14d960:
    // 0x14d960: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x14d960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_14d964:
    // 0x14d964: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x14d964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_14d968:
    // 0x14d968: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x14d968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14d96c:
    // 0x14d96c: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x14d96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14d970:
    // 0x14d970: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14d970u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14d974:
    // 0x14d974: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x14d974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_14d978:
    // 0x14d978: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x14d978u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_14d97c:
    // 0x14d97c: 0x46014040  add.s       $f1, $f8, $f1
    ctx->pc = 0x14d97cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
label_14d980:
    // 0x14d980: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x14d980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_14d984:
    // 0x14d984: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x14d984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_14d988:
    // 0x14d988: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x14d988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_14d98c:
    // 0x14d98c: 0x0  nop
    ctx->pc = 0x14d98cu;
    // NOP
label_14d990:
    // 0x14d990: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x14d990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_14d994:
    // 0x14d994: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x14d994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_14d998:
    // 0x14d998: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_14d99c:
    // 0x14d99c: 0xb2060127  sdl         $a2, 0x127($s0)
    ctx->pc = 0x14d99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14d9a0:
    // 0x14d9a0: 0xb6060120  sdr         $a2, 0x120($s0)
    ctx->pc = 0x14d9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14d9a4:
    // 0x14d9a4: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x14d9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
label_14d9a8:
    // 0x14d9a8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x14d9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_14d9ac:
    // 0x14d9ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14d9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d9b0:
    // 0x14d9b0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x14d9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_14d9b4:
    // 0x14d9b4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x14d9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_14d9b8:
    // 0x14d9b8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x14d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_14d9bc:
    // 0x14d9bc: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x14d9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14d9c0:
    // 0x14d9c0: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x14d9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14d9c4:
    // 0x14d9c4: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x14d9c4u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
label_14d9c8:
    // 0x14d9c8: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x14d9c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_14d9cc:
    // 0x14d9cc: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x14d9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14d9d0:
    // 0x14d9d0: 0x46152942  mul.s       $f5, $f5, $f21
    ctx->pc = 0x14d9d0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[21]);
label_14d9d4:
    // 0x14d9d4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x14d9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14d9d8:
    // 0x14d9d8: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x14d9d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
label_14d9dc:
    // 0x14d9dc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x14d9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14d9e0:
    // 0x14d9e0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x14d9e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_14d9e4:
    // 0x14d9e4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x14d9e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_14d9e8:
    // 0x14d9e8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x14d9e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_14d9ec:
    // 0x14d9ec: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x14d9ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_14d9f0:
    // 0x14d9f0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x14d9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_14d9f4:
    // 0x14d9f4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x14d9f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_14d9f8:
    // 0x14d9f8: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x14d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_14d9fc:
    // 0x14d9fc: 0x504000c2  beql        $v0, $zero, . + 4 + (0xC2 << 2)
label_14da00:
    if (ctx->pc == 0x14DA00u) {
        ctx->pc = 0x14DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D9FCu;
        // 0x14da00: 0x8e02009c  lw          $v0, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DA04u;
        goto label_14da04;
    }
    ctx->pc = 0x14D9FCu;
    {
        const bool branch_taken_0x14d9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d9fc) {
            ctx->pc = 0x14DA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D9FCu;
            // 0x14da00: 0x8e02009c  lw          $v0, 0x9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DD08u;
            goto label_14dd08;
        }
    }
    ctx->pc = 0x14DA04u;
label_14da04:
    // 0x14da04: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14da04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14da08:
    // 0x14da08: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_14da0c:
    if (ctx->pc == 0x14DA0Cu) {
        ctx->pc = 0x14DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA08u;
        // 0x14da0c: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DA10u;
        goto label_14da10;
    }
    ctx->pc = 0x14DA08u;
    {
        const bool branch_taken_0x14da08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14da08) {
            ctx->pc = 0x14DA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DA08u;
            // 0x14da0c: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DA28u;
            goto label_14da28;
        }
    }
    ctx->pc = 0x14DA10u;
label_14da10:
    // 0x14da10: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x14da10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_14da14:
    // 0x14da14: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_14da18:
    if (ctx->pc == 0x14DA18u) {
        ctx->pc = 0x14DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA14u;
        // 0x14da18: 0xc60000d0  lwc1        $f0, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DA1Cu;
        goto label_14da1c;
    }
    ctx->pc = 0x14DA14u;
    {
        const bool branch_taken_0x14da14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da14) {
            ctx->pc = 0x14DA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DA14u;
            // 0x14da18: 0xc60000d0  lwc1        $f0, 0xD0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DA38u;
            goto label_14da38;
        }
    }
    ctx->pc = 0x14DA1Cu;
label_14da1c:
    // 0x14da1c: 0x1000000c  b           . + 4 + (0xC << 2)
label_14da20:
    if (ctx->pc == 0x14DA20u) {
        ctx->pc = 0x14DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA1Cu;
        // 0x14da20: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DA24u;
        goto label_14da24;
    }
    ctx->pc = 0x14DA1Cu;
    {
        const bool branch_taken_0x14da1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA1Cu;
        // 0x14da20: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da1c) {
            ctx->pc = 0x14DA50u;
            goto label_14da50;
        }
    }
    ctx->pc = 0x14DA24u;
label_14da24:
    // 0x14da24: 0x0  nop
    ctx->pc = 0x14da24u;
    // NOP
label_14da28:
    // 0x14da28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14da28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14da2c:
    // 0x14da2c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_14da30:
    if (ctx->pc == 0x14DA30u) {
        ctx->pc = 0x14DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA2Cu;
        // 0x14da30: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DA34u;
        goto label_14da34;
    }
    ctx->pc = 0x14DA2Cu;
    {
        const bool branch_taken_0x14da2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14da2c) {
            ctx->pc = 0x14DA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DA2Cu;
            // 0x14da30: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DA44u;
            goto label_14da44;
        }
    }
    ctx->pc = 0x14DA34u;
label_14da34:
    // 0x14da34: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x14da34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14da38:
    // 0x14da38: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x14da38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_14da3c:
    // 0x14da3c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x14da3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_14da40:
    // 0x14da40: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14da40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14da44:
    // 0x14da44: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_14da48:
    if (ctx->pc == 0x14DA48u) {
        ctx->pc = 0x14DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA44u;
        // 0x14da48: 0xc60100d0  lwc1        $f1, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DA4Cu;
        goto label_14da4c;
    }
    ctx->pc = 0x14DA44u;
    {
        const bool branch_taken_0x14da44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14da44) {
            ctx->pc = 0x14DA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DA44u;
            // 0x14da48: 0xc60100d0  lwc1        $f1, 0xD0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DA6Cu;
            goto label_14da6c;
        }
    }
    ctx->pc = 0x14DA4Cu;
label_14da4c:
    // 0x14da4c: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x14da4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_14da50:
    // 0x14da50: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_14da54:
    if (ctx->pc == 0x14DA54u) {
        ctx->pc = 0x14DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA50u;
        // 0x14da54: 0xc60100d0  lwc1        $f1, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DA58u;
        goto label_14da58;
    }
    ctx->pc = 0x14DA50u;
    {
        const bool branch_taken_0x14da50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da50) {
            ctx->pc = 0x14DA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DA50u;
            // 0x14da54: 0xc60100d0  lwc1        $f1, 0xD0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DA6Cu;
            goto label_14da6c;
        }
    }
    ctx->pc = 0x14DA58u;
label_14da58:
    // 0x14da58: 0xc0693d6  jal         func_1A4F58
label_14da5c:
    if (ctx->pc == 0x14DA5Cu) {
        ctx->pc = 0x14DA60u;
        goto label_14da60;
    }
    ctx->pc = 0x14DA58u;
    SET_GPR_U32(ctx, 31, 0x14DA60u);
    ctx->pc = 0x1A4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4F58u, 0x14DA58u, 0x14DA60u)) {
        return;
    }
    ctx->pc = 0x14DA60u;
label_14da60:
    // 0x14da60: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_14da64:
    if (ctx->pc == 0x14DA64u) {
        ctx->pc = 0x14DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA60u;
        // 0x14da64: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DA68u;
        goto label_14da68;
    }
    ctx->pc = 0x14DA60u;
    {
        const bool branch_taken_0x14da60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da60) {
            ctx->pc = 0x14DA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DA60u;
            // 0x14da64: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DA84u;
            goto label_14da84;
        }
    }
    ctx->pc = 0x14DA68u;
label_14da68:
    // 0x14da68: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x14da68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14da6c:
    // 0x14da6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14da6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14da70:
    // 0x14da70: 0x0  nop
    ctx->pc = 0x14da70u;
    // NOP
label_14da74:
    // 0x14da74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14da74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14da78:
    // 0x14da78: 0x0  nop
    ctx->pc = 0x14da78u;
    // NOP
label_14da7c:
    // 0x14da7c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_14da80:
    if (ctx->pc == 0x14DA80u) {
        ctx->pc = 0x14DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA7Cu;
        // 0x14da80: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DA84u;
        goto label_14da84;
    }
    ctx->pc = 0x14DA7Cu;
    {
        const bool branch_taken_0x14da7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA7Cu;
        // 0x14da80: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da7c) {
            ctx->pc = 0x14DAC8u;
            goto label_14dac8;
        }
    }
    ctx->pc = 0x14DA84u;
label_14da84:
    // 0x14da84: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_14da88:
    if (ctx->pc == 0x14DA88u) {
        ctx->pc = 0x14DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA84u;
        // 0x14da88: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DA8Cu;
        goto label_14da8c;
    }
    ctx->pc = 0x14DA84u;
    {
        const bool branch_taken_0x14da84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14da84) {
            ctx->pc = 0x14DA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DA84u;
            // 0x14da88: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DAE4u;
            goto label_14dae4;
        }
    }
    ctx->pc = 0x14DA8Cu;
label_14da8c:
    // 0x14da8c: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x14da8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
label_14da90:
    // 0x14da90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14da90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14da94:
    // 0x14da94: 0xc053c54  jal         func_14F150
label_14da98:
    if (ctx->pc == 0x14DA98u) {
        ctx->pc = 0x14DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA94u;
        // 0x14da98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DA9Cu;
        goto label_14da9c;
    }
    ctx->pc = 0x14DA94u;
    SET_GPR_U32(ctx, 31, 0x14DA9Cu);
    ctx->pc = 0x14DA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA94u;
    // 0x14da98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14F150u, 0x14DA94u, 0x14DA9Cu)) {
        return;
    }
    ctx->pc = 0x14DA9Cu;
label_14da9c:
    // 0x14da9c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14daa0:
    // 0x14daa0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_14daa4:
    if (ctx->pc == 0x14DAA4u) {
        ctx->pc = 0x14DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAA0u;
        // 0x14daa4: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DAA8u;
        goto label_14daa8;
    }
    ctx->pc = 0x14DAA0u;
    {
        const bool branch_taken_0x14daa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14daa0) {
            ctx->pc = 0x14DAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DAA0u;
            // 0x14daa4: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DAE4u;
            goto label_14dae4;
        }
    }
    ctx->pc = 0x14DAA8u;
label_14daa8:
    // 0x14daa8: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x14daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_14daac:
    // 0x14daac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_14dab0:
    if (ctx->pc == 0x14DAB0u) {
        ctx->pc = 0x14DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAACu;
        // 0x14dab0: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DAB4u;
        goto label_14dab4;
    }
    ctx->pc = 0x14DAACu;
    {
        const bool branch_taken_0x14daac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14daac) {
            ctx->pc = 0x14DAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DAACu;
            // 0x14dab0: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DAC8u;
            goto label_14dac8;
        }
    }
    ctx->pc = 0x14DAB4u;
label_14dab4:
    // 0x14dab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14dab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14dab8:
    // 0x14dab8: 0xc0538ae  jal         func_14E2B8
label_14dabc:
    if (ctx->pc == 0x14DABCu) {
        ctx->pc = 0x14DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAB8u;
        // 0x14dabc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DAC0u;
        goto label_14dac0;
    }
    ctx->pc = 0x14DAB8u;
    SET_GPR_U32(ctx, 31, 0x14DAC0u);
    ctx->pc = 0x14DABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DAB8u;
    // 0x14dabc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14E2B8u, 0x14DAB8u, 0x14DAC0u)) {
        return;
    }
    ctx->pc = 0x14DAC0u;
label_14dac0:
    // 0x14dac0: 0x10000101  b           . + 4 + (0x101 << 2)
label_14dac4:
    if (ctx->pc == 0x14DAC4u) {
        ctx->pc = 0x14DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAC0u;
        // 0x14dac4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DAC8u;
        goto label_14dac8;
    }
    ctx->pc = 0x14DAC0u;
    {
        const bool branch_taken_0x14dac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAC0u;
        // 0x14dac4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dac0) {
            ctx->pc = 0x14DEC8u;
            goto label_14dec8;
        }
    }
    ctx->pc = 0x14DAC8u;
label_14dac8:
    // 0x14dac8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_14dacc:
    if (ctx->pc == 0x14DACCu) {
        ctx->pc = 0x14DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAC8u;
        // 0x14dacc: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DAD0u;
        goto label_14dad0;
    }
    ctx->pc = 0x14DAC8u;
    {
        const bool branch_taken_0x14dac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dac8) {
            ctx->pc = 0x14DACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DAC8u;
            // 0x14dacc: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DAE4u;
            goto label_14dae4;
        }
    }
    ctx->pc = 0x14DAD0u;
label_14dad0:
    // 0x14dad0: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x14dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_14dad4:
    // 0x14dad4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_14dad8:
    if (ctx->pc == 0x14DAD8u) {
        ctx->pc = 0x14DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAD4u;
        // 0x14dad8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DADCu;
        goto label_14dadc;
    }
    ctx->pc = 0x14DAD4u;
    {
        const bool branch_taken_0x14dad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dad4) {
            ctx->pc = 0x14DAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DAD4u;
            // 0x14dad8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DAF4u;
            goto label_14daf4;
        }
    }
    ctx->pc = 0x14DADCu;
label_14dadc:
    // 0x14dadc: 0x1000008a  b           . + 4 + (0x8A << 2)
label_14dae0:
    if (ctx->pc == 0x14DAE0u) {
        ctx->pc = 0x14DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DADCu;
        // 0x14dae0: 0x8e02009c  lw          $v0, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DAE4u;
        goto label_14dae4;
    }
    ctx->pc = 0x14DADCu;
    {
        const bool branch_taken_0x14dadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DADCu;
        // 0x14dae0: 0x8e02009c  lw          $v0, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dadc) {
            ctx->pc = 0x14DD08u;
            goto label_14dd08;
        }
    }
    ctx->pc = 0x14DAE4u;
label_14dae4:
    // 0x14dae4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14dae8:
    // 0x14dae8: 0x50620087  beql        $v1, $v0, . + 4 + (0x87 << 2)
label_14daec:
    if (ctx->pc == 0x14DAECu) {
        ctx->pc = 0x14DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAE8u;
        // 0x14daec: 0x8e02009c  lw          $v0, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DAF0u;
        goto label_14daf0;
    }
    ctx->pc = 0x14DAE8u;
    {
        const bool branch_taken_0x14dae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14dae8) {
            ctx->pc = 0x14DAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DAE8u;
            // 0x14daec: 0x8e02009c  lw          $v0, 0x9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DD08u;
            goto label_14dd08;
        }
    }
    ctx->pc = 0x14DAF0u;
label_14daf0:
    // 0x14daf0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14daf4:
    // 0x14daf4: 0x6a050083  ldl         $a1, 0x83($s0)
    ctx->pc = 0x14daf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_14daf8:
    // 0x14daf8: 0x6e05007c  ldr         $a1, 0x7C($s0)
    ctx->pc = 0x14daf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_14dafc:
    // 0x14dafc: 0x8e060084  lw          $a2, 0x84($s0)
    ctx->pc = 0x14dafcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_14db00:
    // 0x14db00: 0xb3a50057  sdl         $a1, 0x57($sp)
    ctx->pc = 0x14db00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14db04:
    // 0x14db04: 0xb7a50050  sdr         $a1, 0x50($sp)
    ctx->pc = 0x14db04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14db08:
    // 0x14db08: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x14db08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
label_14db0c:
    // 0x14db0c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_14db10:
    if (ctx->pc == 0x14DB10u) {
        ctx->pc = 0x14DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB0Cu;
        // 0x14db10: 0x260200c0  addiu       $v0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DB14u;
        goto label_14db14;
    }
    ctx->pc = 0x14DB0Cu;
    {
        const bool branch_taken_0x14db0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB0Cu;
        // 0x14db10: 0x260200c0  addiu       $v0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db0c) {
            ctx->pc = 0x14DB50u;
            goto label_14db50;
        }
    }
    ctx->pc = 0x14DB14u;
label_14db14:
    // 0x14db14: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x14db14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_14db18:
    // 0x14db18: 0xc04f0c2  jal         func_13C308
label_14db1c:
    if (ctx->pc == 0x14DB1Cu) {
        ctx->pc = 0x14DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB18u;
        // 0x14db1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DB20u;
        goto label_14db20;
    }
    ctx->pc = 0x14DB18u;
    SET_GPR_U32(ctx, 31, 0x14DB20u);
    ctx->pc = 0x14DB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DB18u;
    // 0x14db1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x14DB18u, 0x14DB20u)) {
        return;
    }
    ctx->pc = 0x14DB20u;
label_14db20:
    // 0x14db20: 0x8e0600b8  lw          $a2, 0xB8($s0)
    ctx->pc = 0x14db20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_14db24:
    // 0x14db24: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x14db24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_14db28:
    // 0x14db28: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x14db28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_14db2c:
    // 0x14db2c: 0x844401a0  lh          $a0, 0x1A0($v0)
    ctx->pc = 0x14db2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 416)));
label_14db30:
    // 0x14db30: 0x8c4301a4  lw          $v1, 0x1A4($v0)
    ctx->pc = 0x14db30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
label_14db34:
    // 0x14db34: 0x60f809  jalr        $v1
label_14db38:
    if (ctx->pc == 0x14DB38u) {
        ctx->pc = 0x14DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB34u;
        // 0x14db38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DB3Cu;
        goto label_14db3c;
    }
    ctx->pc = 0x14DB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14DB3Cu);
        ctx->pc = 0x14DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB34u;
        // 0x14db38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DB34u, 0x14DB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14DB3Cu;
label_14db3c:
    // 0x14db3c: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x14db3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14db40:
    // 0x14db40: 0xc7a50064  lwc1        $f5, 0x64($sp)
    ctx->pc = 0x14db40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_14db44:
    // 0x14db44: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x14db44u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_14db48:
    // 0x14db48: 0x1000001d  b           . + 4 + (0x1D << 2)
label_14db4c:
    if (ctx->pc == 0x14DB4Cu) {
        ctx->pc = 0x14DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB48u;
        // 0x14db4c: 0xc7a20068  lwc1        $f2, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DB50u;
        goto label_14db50;
    }
    ctx->pc = 0x14DB48u;
    {
        const bool branch_taken_0x14db48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB48u;
        // 0x14db4c: 0xc7a20068  lwc1        $f2, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db48) {
            ctx->pc = 0x14DBC0u;
            goto label_14dbc0;
        }
    }
    ctx->pc = 0x14DB50u;
label_14db50:
    // 0x14db50: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x14db50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14db54:
    // 0x14db54: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x14db54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14db58:
    // 0x14db58: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x14db58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14db5c:
    // 0x14db5c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14db5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14db60:
    // 0x14db60: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x14db60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14db64:
    // 0x14db64: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x14db64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_14db68:
    // 0x14db68: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x14db68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14db6c:
    // 0x14db6c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x14db6cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_14db70:
    // 0x14db70: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x14db70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_14db74:
    // 0x14db74: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x14db74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14db78:
    // 0x14db78: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x14db78u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_14db7c:
    // 0x14db7c: 0xe7a30088  swc1        $f3, 0x88($sp)
    ctx->pc = 0x14db7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_14db80:
    // 0x14db80: 0x6ba50087  ldl         $a1, 0x87($sp)
    ctx->pc = 0x14db80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_14db84:
    // 0x14db84: 0x6fa50080  ldr         $a1, 0x80($sp)
    ctx->pc = 0x14db84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_14db88:
    // 0x14db88: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x14db88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_14db8c:
    // 0x14db8c: 0xb3a50077  sdl         $a1, 0x77($sp)
    ctx->pc = 0x14db8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14db90:
    // 0x14db90: 0xb7a50070  sdr         $a1, 0x70($sp)
    ctx->pc = 0x14db90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14db94:
    // 0x14db94: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x14db94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
label_14db98:
    // 0x14db98: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x14db98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_14db9c:
    // 0x14db9c: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x14db9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_14dba0:
    // 0x14dba0: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x14dba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_14dba4:
    // 0x14dba4: 0xb20400c7  sdl         $a0, 0xC7($s0)
    ctx->pc = 0x14dba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14dba8:
    // 0x14dba8: 0xb60400c0  sdr         $a0, 0xC0($s0)
    ctx->pc = 0x14dba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14dbac:
    // 0x14dbac: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x14dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_14dbb0:
    // 0x14dbb0: 0xc7a40070  lwc1        $f4, 0x70($sp)
    ctx->pc = 0x14dbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14dbb4:
    // 0x14dbb4: 0xc7a50074  lwc1        $f5, 0x74($sp)
    ctx->pc = 0x14dbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_14dbb8:
    // 0x14dbb8: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x14dbb8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_14dbbc:
    // 0x14dbbc: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x14dbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14dbc0:
    // 0x14dbc0: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x14dbc0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_14dbc4:
    // 0x14dbc4: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x14dbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14dbc8:
    // 0x14dbc8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x14dbc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_14dbcc:
    // 0x14dbcc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x14dbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14dbd0:
    // 0x14dbd0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x14dbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14dbd4:
    // 0x14dbd4: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x14dbd4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_14dbd8:
    // 0x14dbd8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x14dbd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_14dbdc:
    // 0x14dbdc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14dbdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_14dbe0:
    // 0x14dbe0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x14dbe0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_14dbe4:
    // 0x14dbe4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x14dbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_14dbe8:
    // 0x14dbe8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x14dbe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_14dbec:
    // 0x14dbec: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x14dbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14dbf0:
    // 0x14dbf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14dbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_14dbf4:
    // 0x14dbf4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x14dbf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_14dbf8:
    // 0x14dbf8: 0x0  nop
    ctx->pc = 0x14dbf8u;
    // NOP
label_14dbfc:
    // 0x14dbfc: 0x46162100  add.s       $f4, $f4, $f22
    ctx->pc = 0x14dbfcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[22]);
label_14dc00:
    // 0x14dc00: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x14dc00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_14dc04:
    // 0x14dc04: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x14dc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14dc08:
    // 0x14dc08: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x14dc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14dc0c:
    // 0x14dc0c: 0xc7a50054  lwc1        $f5, 0x54($sp)
    ctx->pc = 0x14dc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_14dc10:
    // 0x14dc10: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x14dc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14dc14:
    // 0x14dc14: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x14dc14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_14dc18:
    // 0x14dc18: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x14dc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14dc1c:
    // 0x14dc1c: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x14dc1cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
label_14dc20:
    // 0x14dc20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14dc20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14dc24:
    // 0x14dc24: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x14dc24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_14dc28:
    // 0x14dc28: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x14dc28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_14dc2c:
    // 0x14dc2c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x14dc2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_14dc30:
    // 0x14dc30: 0xc093aa8  jal         func_24EAA0
label_14dc34:
    if (ctx->pc == 0x14DC34u) {
        ctx->pc = 0x14DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC30u;
        // 0x14dc34: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DC38u;
        goto label_14dc38;
    }
    ctx->pc = 0x14DC30u;
    SET_GPR_U32(ctx, 31, 0x14DC38u);
    ctx->pc = 0x14DC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DC30u;
    // 0x14dc34: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x14DC30u, 0x14DC38u)) {
        return;
    }
    ctx->pc = 0x14DC38u;
label_14dc38:
    // 0x14dc38: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x14dc38u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
label_14dc3c:
    // 0x14dc3c: 0xc7a50030  lwc1        $f5, 0x30($sp)
    ctx->pc = 0x14dc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_14dc40:
    // 0x14dc40: 0x0  nop
    ctx->pc = 0x14dc40u;
    // NOP
label_14dc44:
    // 0x14dc44: 0x0  nop
    ctx->pc = 0x14dc44u;
    // NOP
label_14dc48:
    // 0x14dc48: 0x4606b003  div.s       $f0, $f22, $f6
    ctx->pc = 0x14dc48u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[22], ctx->f[6]);
label_14dc4c:
    // 0x14dc4c: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x14dc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14dc50:
    // 0x14dc50: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x14dc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14dc54:
    // 0x14dc54: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x14dc54u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_14dc58:
    // 0x14dc58: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x14dc58u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_14dc5c:
    // 0x14dc5c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x14dc5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_14dc60:
    // 0x14dc60: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x14dc60u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_14dc64:
    // 0x14dc64: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x14dc64u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_14dc68:
    // 0x14dc68: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x14dc68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_14dc6c:
    // 0x14dc6c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x14dc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14dc70:
    // 0x14dc70: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x14dc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14dc74:
    // 0x14dc74: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x14dc74u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_14dc78:
    // 0x14dc78: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x14dc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14dc7c:
    // 0x14dc7c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x14dc7cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_14dc80:
    // 0x14dc80: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x14dc80u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_14dc84:
    // 0x14dc84: 0xe7a50060  swc1        $f5, 0x60($sp)
    ctx->pc = 0x14dc84u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_14dc88:
    // 0x14dc88: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x14dc88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_14dc8c:
    // 0x14dc8c: 0x46143034  c.lt.s      $f6, $f20
    ctx->pc = 0x14dc8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14dc90:
    // 0x14dc90: 0x0  nop
    ctx->pc = 0x14dc90u;
    // NOP
label_14dc94:
    // 0x14dc94: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_14dc98:
    if (ctx->pc == 0x14DC98u) {
        ctx->pc = 0x14DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC94u;
        // 0x14dc98: 0xe7a40068  swc1        $f4, 0x68($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DC9Cu;
        goto label_14dc9c;
    }
    ctx->pc = 0x14DC94u;
    {
        const bool branch_taken_0x14dc94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC94u;
        // 0x14dc98: 0xe7a40068  swc1        $f4, 0x68($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc94) {
            ctx->pc = 0x14DCB8u;
            goto label_14dcb8;
        }
    }
    ctx->pc = 0x14DC9Cu;
label_14dc9c:
    // 0x14dc9c: 0x0  nop
    ctx->pc = 0x14dc9cu;
    // NOP
label_14dca0:
    // 0x14dca0: 0x0  nop
    ctx->pc = 0x14dca0u;
    // NOP
label_14dca4:
    // 0x14dca4: 0x46143043  div.s       $f1, $f6, $f20
    ctx->pc = 0x14dca4u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[6], ctx->f[20]);
label_14dca8:
    // 0x14dca8: 0xc6000138  lwc1        $f0, 0x138($s0)
    ctx->pc = 0x14dca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14dcac:
    // 0x14dcac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14dcacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14dcb0:
    // 0x14dcb0: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x14dcb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
label_14dcb4:
    // 0x14dcb4: 0x0  nop
    ctx->pc = 0x14dcb4u;
    // NOP
label_14dcb8:
    // 0x14dcb8: 0xc60c0138  lwc1        $f12, 0x138($s0)
    ctx->pc = 0x14dcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14dcbc:
    // 0x14dcbc: 0xc09b3ec  jal         func_26CFB0
label_14dcc0:
    if (ctx->pc == 0x14DCC0u) {
        ctx->pc = 0x14DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DCBCu;
        // 0x14dcc0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DCC4u;
        goto label_14dcc4;
    }
    ctx->pc = 0x14DCBCu;
    SET_GPR_U32(ctx, 31, 0x14DCC4u);
    ctx->pc = 0x14DCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DCBCu;
    // 0x14dcc0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CFB0u, 0x14DCBCu, 0x14DCC4u)) {
        return;
    }
    ctx->pc = 0x14DCC4u;
label_14dcc4:
    // 0x14dcc4: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x14dcc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_14dcc8:
    // 0x14dcc8: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x14dcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14dccc:
    // 0x14dccc: 0xc7a50064  lwc1        $f5, 0x64($sp)
    ctx->pc = 0x14dcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_14dcd0:
    // 0x14dcd0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x14dcd0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_14dcd4:
    // 0x14dcd4: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x14dcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14dcd8:
    // 0x14dcd8: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x14dcd8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_14dcdc:
    // 0x14dcdc: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x14dcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14dce0:
    // 0x14dce0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x14dce0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_14dce4:
    // 0x14dce4: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x14dce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14dce8:
    // 0x14dce8: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x14dce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14dcec:
    // 0x14dcec: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x14dcecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_14dcf0:
    // 0x14dcf0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x14dcf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_14dcf4:
    // 0x14dcf4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x14dcf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_14dcf8:
    // 0x14dcf8: 0xe6020024  swc1        $f2, 0x24($s0)
    ctx->pc = 0x14dcf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_14dcfc:
    // 0x14dcfc: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x14dcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_14dd00:
    // 0x14dd00: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x14dd00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_14dd04:
    // 0x14dd04: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x14dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_14dd08:
    // 0x14dd08: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_14dd0c:
    if (ctx->pc == 0x14DD0Cu) {
        ctx->pc = 0x14DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD08u;
        // 0x14dd0c: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DD10u;
        goto label_14dd10;
    }
    ctx->pc = 0x14DD08u;
    {
        const bool branch_taken_0x14dd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dd08) {
            ctx->pc = 0x14DD0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DD08u;
            // 0x14dd0c: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DD40u;
            goto label_14dd40;
        }
    }
    ctx->pc = 0x14DD10u;
label_14dd10:
    // 0x14dd10: 0x3c01411c  lui         $at, 0x411C
    ctx->pc = 0x14dd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16668 << 16));
label_14dd14:
    // 0x14dd14: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x14dd14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_14dd18:
    // 0x14dd18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14dd18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14dd1c:
    // 0x14dd1c: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x14dd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14dd20:
    // 0x14dd20: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x14dd20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_14dd24:
    // 0x14dd24: 0xc6020080  lwc1        $f2, 0x80($s0)
    ctx->pc = 0x14dd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14dd28:
    // 0x14dd28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14dd28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14dd2c:
    // 0x14dd2c: 0x461508c2  mul.s       $f3, $f1, $f21
    ctx->pc = 0x14dd2cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_14dd30:
    // 0x14dd30: 0xe6010074  swc1        $f1, 0x74($s0)
    ctx->pc = 0x14dd30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_14dd34:
    // 0x14dd34: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x14dd34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_14dd38:
    // 0x14dd38: 0xe6020080  swc1        $f2, 0x80($s0)
    ctx->pc = 0x14dd38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_14dd3c:
    // 0x14dd3c: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x14dd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_14dd40:
    // 0x14dd40: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_14dd44:
    if (ctx->pc == 0x14DD44u) {
        ctx->pc = 0x14DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD40u;
        // 0x14dd44: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DD48u;
        goto label_14dd48;
    }
    ctx->pc = 0x14DD40u;
    {
        const bool branch_taken_0x14dd40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD40u;
        // 0x14dd44: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd40) {
            ctx->pc = 0x14DD54u;
            goto label_14dd54;
        }
    }
    ctx->pc = 0x14DD48u;
label_14dd48:
    // 0x14dd48: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14dd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14dd4c:
    // 0x14dd4c: 0xc05961e  jal         func_165878
label_14dd50:
    if (ctx->pc == 0x14DD50u) {
        ctx->pc = 0x14DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD4Cu;
        // 0x14dd50: 0x8c448668  lw          $a0, -0x7998($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DD54u;
        goto label_14dd54;
    }
    ctx->pc = 0x14DD4Cu;
    SET_GPR_U32(ctx, 31, 0x14DD54u);
    ctx->pc = 0x14DD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DD4Cu;
    // 0x14dd50: 0x8c448668  lw          $a0, -0x7998($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165878u, 0x14DD4Cu, 0x14DD54u)) {
        return;
    }
    ctx->pc = 0x14DD54u;
label_14dd54:
    // 0x14dd54: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x14dd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14dd58:
    // 0x14dd58: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x14dd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_14dd5c:
    // 0x14dd5c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x14dd5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_14dd60:
    // 0x14dd60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14dd60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14dd64:
    // 0x14dd64: 0x0  nop
    ctx->pc = 0x14dd64u;
    // NOP
label_14dd68:
    // 0x14dd68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14dd68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14dd6c:
    // 0x14dd6c: 0x0  nop
    ctx->pc = 0x14dd6cu;
    // NOP
label_14dd70:
    // 0x14dd70: 0x45000038  bc1f        . + 4 + (0x38 << 2)
label_14dd74:
    if (ctx->pc == 0x14DD74u) {
        ctx->pc = 0x14DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD70u;
        // 0x14dd74: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DD78u;
        goto label_14dd78;
    }
    ctx->pc = 0x14DD70u;
    {
        const bool branch_taken_0x14dd70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD70u;
        // 0x14dd74: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd70) {
            ctx->pc = 0x14DE54u;
            goto label_14de54;
        }
    }
    ctx->pc = 0x14DD78u;
label_14dd78:
    // 0x14dd78: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_14dd7c:
    // 0x14dd7c: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x14dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
label_14dd80:
    // 0x14dd80: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x14dd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_14dd84:
    // 0x14dd84: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
label_14dd88:
    if (ctx->pc == 0x14DD88u) {
        ctx->pc = 0x14DD8Cu;
        goto label_14dd8c;
    }
    ctx->pc = 0x14DD84u;
    {
        const bool branch_taken_0x14dd84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dd84) {
            ctx->pc = 0x14DE54u;
            goto label_14de54;
        }
    }
    ctx->pc = 0x14DD8Cu;
label_14dd8c:
    // 0x14dd8c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x14dd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14dd90:
    // 0x14dd90: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x14dd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_14dd94:
    // 0x14dd94: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x14dd94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_14dd98:
    // 0x14dd98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14dd98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14dd9c:
    // 0x14dd9c: 0x0  nop
    ctx->pc = 0x14dd9cu;
    // NOP
label_14dda0:
    // 0x14dda0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14dda0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14dda4:
    // 0x14dda4: 0x0  nop
    ctx->pc = 0x14dda4u;
    // NOP
label_14dda8:
    // 0x14dda8: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_14ddac:
    if (ctx->pc == 0x14DDACu) {
        ctx->pc = 0x14DDB0u;
        goto label_14ddb0;
    }
    ctx->pc = 0x14DDA8u;
    {
        const bool branch_taken_0x14dda8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14dda8) {
            ctx->pc = 0x14DE30u;
            goto label_14de30;
        }
    }
    ctx->pc = 0x14DDB0u;
label_14ddb0:
    // 0x14ddb0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x14ddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ddb4:
    // 0x14ddb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14ddb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14ddb8:
    // 0x14ddb8: 0x0  nop
    ctx->pc = 0x14ddb8u;
    // NOP
label_14ddbc:
    // 0x14ddbc: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_14ddc0:
    if (ctx->pc == 0x14DDC0u) {
        ctx->pc = 0x14DDC4u;
        goto label_14ddc4;
    }
    ctx->pc = 0x14DDBCu;
    {
        const bool branch_taken_0x14ddbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ddbc) {
            ctx->pc = 0x14DE54u;
            goto label_14de54;
        }
    }
    ctx->pc = 0x14DDC4u;
label_14ddc4:
    // 0x14ddc4: 0x6a030083  ldl         $v1, 0x83($s0)
    ctx->pc = 0x14ddc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_14ddc8:
    // 0x14ddc8: 0x6e03007c  ldr         $v1, 0x7C($s0)
    ctx->pc = 0x14ddc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_14ddcc:
    // 0x14ddcc: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x14ddccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_14ddd0:
    // 0x14ddd0: 0xb3a30057  sdl         $v1, 0x57($sp)
    ctx->pc = 0x14ddd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14ddd4:
    // 0x14ddd4: 0xb7a30050  sdr         $v1, 0x50($sp)
    ctx->pc = 0x14ddd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14ddd8:
    // 0x14ddd8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x14ddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_14dddc:
    // 0x14dddc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14dddcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14dde0:
    // 0x14dde0: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x14dde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14dde4:
    // 0x14dde4: 0xc6060024  lwc1        $f6, 0x24($s0)
    ctx->pc = 0x14dde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_14dde8:
    // 0x14dde8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14dde8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_14ddec:
    // 0x14ddec: 0xc6040028  lwc1        $f4, 0x28($s0)
    ctx->pc = 0x14ddecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14ddf0:
    // 0x14ddf0: 0xc602002c  lwc1        $f2, 0x2C($s0)
    ctx->pc = 0x14ddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14ddf4:
    // 0x14ddf4: 0xc7a50050  lwc1        $f5, 0x50($sp)
    ctx->pc = 0x14ddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_14ddf8:
    // 0x14ddf8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x14ddf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_14ddfc:
    // 0x14ddfc: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x14ddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14de00:
    // 0x14de00: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x14de00u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_14de04:
    // 0x14de04: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x14de04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14de08:
    // 0x14de08: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x14de08u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_14de0c:
    // 0x14de0c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14de0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_14de10:
    // 0x14de10: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x14de10u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_14de14:
    // 0x14de14: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x14de14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_14de18:
    // 0x14de18: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x14de18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_14de1c:
    // 0x14de1c: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x14de1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_14de20:
    // 0x14de20: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x14de20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_14de24:
    // 0x14de24: 0x1000000b  b           . + 4 + (0xB << 2)
label_14de28:
    if (ctx->pc == 0x14DE28u) {
        ctx->pc = 0x14DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE24u;
        // 0x14de28: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DE2Cu;
        goto label_14de2c;
    }
    ctx->pc = 0x14DE24u;
    {
        const bool branch_taken_0x14de24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE24u;
        // 0x14de28: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de24) {
            ctx->pc = 0x14DE54u;
            goto label_14de54;
        }
    }
    ctx->pc = 0x14DE2Cu;
label_14de2c:
    // 0x14de2c: 0x0  nop
    ctx->pc = 0x14de2cu;
    // NOP
label_14de30:
    // 0x14de30: 0xc05e396  jal         func_178E58
label_14de34:
    if (ctx->pc == 0x14DE34u) {
        ctx->pc = 0x14DE38u;
        goto label_14de38;
    }
    ctx->pc = 0x14DE30u;
    SET_GPR_U32(ctx, 31, 0x14DE38u);
    ctx->pc = 0x178E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178E58u, 0x14DE30u, 0x14DE38u)) {
        return;
    }
    ctx->pc = 0x14DE38u;
label_14de38:
    // 0x14de38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_14de3c:
    if (ctx->pc == 0x14DE3Cu) {
        ctx->pc = 0x14DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE38u;
        // 0x14de3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DE40u;
        goto label_14de40;
    }
    ctx->pc = 0x14DE38u;
    {
        const bool branch_taken_0x14de38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE38u;
        // 0x14de3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de38) {
            ctx->pc = 0x14DE54u;
            goto label_14de54;
        }
    }
    ctx->pc = 0x14DE40u;
label_14de40:
    // 0x14de40: 0x26050088  addiu       $a1, $s0, 0x88
    ctx->pc = 0x14de40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
label_14de44:
    // 0x14de44: 0x2606007c  addiu       $a2, $s0, 0x7C
    ctx->pc = 0x14de44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
label_14de48:
    // 0x14de48: 0xc086156  jal         func_218558
label_14de4c:
    if (ctx->pc == 0x14DE4Cu) {
        ctx->pc = 0x14DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE48u;
        // 0x14de4c: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DE50u;
        goto label_14de50;
    }
    ctx->pc = 0x14DE48u;
    SET_GPR_U32(ctx, 31, 0x14DE50u);
    ctx->pc = 0x14DE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DE48u;
    // 0x14de4c: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x218558u, 0x14DE48u, 0x14DE50u)) {
        return;
    }
    ctx->pc = 0x14DE50u;
label_14de50:
    // 0x14de50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14de50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14de54:
    // 0x14de54: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_14de58:
    if (ctx->pc == 0x14DE58u) {
        ctx->pc = 0x14DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE54u;
        // 0x14de58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DE5Cu;
        goto label_14de5c;
    }
    ctx->pc = 0x14DE54u;
    {
        const bool branch_taken_0x14de54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE54u;
        // 0x14de58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de54) {
            ctx->pc = 0x14DEBCu;
            goto label_14debc;
        }
    }
    ctx->pc = 0x14DE5Cu;
label_14de5c:
    // 0x14de5c: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x14de5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_14de60:
    // 0x14de60: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x14de60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_14de64:
    // 0x14de64: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x14de64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_14de68:
    // 0x14de68: 0xb2020083  sdl         $v0, 0x83($s0)
    ctx->pc = 0x14de68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14de6c:
    // 0x14de6c: 0xb602007c  sdr         $v0, 0x7C($s0)
    ctx->pc = 0x14de6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14de70:
    // 0x14de70: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x14de70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
label_14de74:
    // 0x14de74: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14de74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14de78:
    // 0x14de78: 0xc60000ec  lwc1        $f0, 0xEC($s0)
    ctx->pc = 0x14de78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14de7c:
    // 0x14de7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14de7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14de80:
    // 0x14de80: 0x0  nop
    ctx->pc = 0x14de80u;
    // NOP
label_14de84:
    // 0x14de84: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_14de88:
    if (ctx->pc == 0x14DE88u) {
        ctx->pc = 0x14DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE84u;
        // 0x14de88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DE8Cu;
        goto label_14de8c;
    }
    ctx->pc = 0x14DE84u;
    {
        const bool branch_taken_0x14de84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE84u;
        // 0x14de88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de84) {
            ctx->pc = 0x14DEA4u;
            goto label_14dea4;
        }
    }
    ctx->pc = 0x14DE8Cu;
label_14de8c:
    // 0x14de8c: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x14de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_14de90:
    // 0x14de90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_14de94:
    if (ctx->pc == 0x14DE94u) {
        ctx->pc = 0x14DE98u;
        goto label_14de98;
    }
    ctx->pc = 0x14DE90u;
    {
        const bool branch_taken_0x14de90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14de90) {
            ctx->pc = 0x14DEA4u;
            goto label_14dea4;
        }
    }
    ctx->pc = 0x14DE98u;
label_14de98:
    // 0x14de98: 0xc0537ba  jal         func_14DEE8
label_14de9c:
    if (ctx->pc == 0x14DE9Cu) {
        ctx->pc = 0x14DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE98u;
        // 0x14de9c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DEA0u;
        goto label_14dea0;
    }
    ctx->pc = 0x14DE98u;
    SET_GPR_U32(ctx, 31, 0x14DEA0u);
    ctx->pc = 0x14DE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DE98u;
    // 0x14de9c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DEE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14DEE8u, 0x14DE98u, 0x14DEA0u)) {
        return;
    }
    ctx->pc = 0x14DEA0u;
label_14dea0:
    // 0x14dea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14dea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14dea4:
    // 0x14dea4: 0xc0538ae  jal         func_14E2B8
label_14dea8:
    if (ctx->pc == 0x14DEA8u) {
        ctx->pc = 0x14DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DEA4u;
        // 0x14dea8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DEACu;
        goto label_14deac;
    }
    ctx->pc = 0x14DEA4u;
    SET_GPR_U32(ctx, 31, 0x14DEACu);
    ctx->pc = 0x14DEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DEA4u;
    // 0x14dea8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14E2B8u, 0x14DEA4u, 0x14DEACu)) {
        return;
    }
    ctx->pc = 0x14DEACu;
label_14deac:
    // 0x14deac: 0xc053c74  jal         func_14F1D0
label_14deb0:
    if (ctx->pc == 0x14DEB0u) {
        ctx->pc = 0x14DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DEACu;
        // 0x14deb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DEB4u;
        goto label_14deb4;
    }
    ctx->pc = 0x14DEACu;
    SET_GPR_U32(ctx, 31, 0x14DEB4u);
    ctx->pc = 0x14DEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DEACu;
    // 0x14deb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F1D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14F1D0u, 0x14DEACu, 0x14DEB4u)) {
        return;
    }
    ctx->pc = 0x14DEB4u;
label_14deb4:
    // 0x14deb4: 0x10000004  b           . + 4 + (0x4 << 2)
label_14deb8:
    if (ctx->pc == 0x14DEB8u) {
        ctx->pc = 0x14DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DEB4u;
        // 0x14deb8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DEBCu;
        goto label_14debc;
    }
    ctx->pc = 0x14DEB4u;
    {
        const bool branch_taken_0x14deb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DEB4u;
        // 0x14deb8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14deb4) {
            ctx->pc = 0x14DEC8u;
            goto label_14dec8;
        }
    }
    ctx->pc = 0x14DEBCu;
label_14debc:
    // 0x14debc: 0xc05392c  jal         func_14E4B0
label_14dec0:
    if (ctx->pc == 0x14DEC0u) {
        ctx->pc = 0x14DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DEBCu;
        // 0x14dec0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DEC4u;
        goto label_14dec4;
    }
    ctx->pc = 0x14DEBCu;
    SET_GPR_U32(ctx, 31, 0x14DEC4u);
    ctx->pc = 0x14DEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DEBCu;
    // 0x14dec0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E4B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14E4B0u, 0x14DEBCu, 0x14DEC4u)) {
        return;
    }
    ctx->pc = 0x14DEC4u;
label_14dec4:
    // 0x14dec4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x14dec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_14dec8:
    // 0x14dec8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x14dec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_14decc:
    // 0x14decc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14deccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_14ded0:
    // 0x14ded0: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x14ded0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_14ded4:
    // 0x14ded4: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x14ded4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_14ded8:
    // 0x14ded8: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x14ded8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_14dedc:
    // 0x14dedc: 0x3e00008  jr          $ra
label_14dee0:
    if (ctx->pc == 0x14DEE0u) {
        ctx->pc = 0x14DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DEDCu;
        // 0x14dee0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DEE4u;
        goto label_14dee4;
    }
    ctx->pc = 0x14DEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DEDCu;
        // 0x14dee0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DEE4u;
label_14dee4:
    // 0x14dee4: 0x0  nop
    ctx->pc = 0x14dee4u;
    // NOP
    ctx->pc = 0x14dee8u;
}
