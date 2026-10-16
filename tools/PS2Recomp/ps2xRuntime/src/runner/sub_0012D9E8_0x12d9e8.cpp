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

// Function: sub_0012D9E8
// Address: 0x12d9e8 - 0x12e2a0
void sub_0012D9E8_0x12d9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D9E8_0x12d9e8");
#endif

    switch (ctx->pc) {
        case 0x12d9e8u: goto label_12d9e8;
        case 0x12d9ecu: goto label_12d9ec;
        case 0x12d9f0u: goto label_12d9f0;
        case 0x12d9f4u: goto label_12d9f4;
        case 0x12d9f8u: goto label_12d9f8;
        case 0x12d9fcu: goto label_12d9fc;
        case 0x12da00u: goto label_12da00;
        case 0x12da04u: goto label_12da04;
        case 0x12da08u: goto label_12da08;
        case 0x12da0cu: goto label_12da0c;
        case 0x12da10u: goto label_12da10;
        case 0x12da14u: goto label_12da14;
        case 0x12da18u: goto label_12da18;
        case 0x12da1cu: goto label_12da1c;
        case 0x12da20u: goto label_12da20;
        case 0x12da24u: goto label_12da24;
        case 0x12da28u: goto label_12da28;
        case 0x12da2cu: goto label_12da2c;
        case 0x12da30u: goto label_12da30;
        case 0x12da34u: goto label_12da34;
        case 0x12da38u: goto label_12da38;
        case 0x12da3cu: goto label_12da3c;
        case 0x12da40u: goto label_12da40;
        case 0x12da44u: goto label_12da44;
        case 0x12da48u: goto label_12da48;
        case 0x12da4cu: goto label_12da4c;
        case 0x12da50u: goto label_12da50;
        case 0x12da54u: goto label_12da54;
        case 0x12da58u: goto label_12da58;
        case 0x12da5cu: goto label_12da5c;
        case 0x12da60u: goto label_12da60;
        case 0x12da64u: goto label_12da64;
        case 0x12da68u: goto label_12da68;
        case 0x12da6cu: goto label_12da6c;
        case 0x12da70u: goto label_12da70;
        case 0x12da74u: goto label_12da74;
        case 0x12da78u: goto label_12da78;
        case 0x12da7cu: goto label_12da7c;
        case 0x12da80u: goto label_12da80;
        case 0x12da84u: goto label_12da84;
        case 0x12da88u: goto label_12da88;
        case 0x12da8cu: goto label_12da8c;
        case 0x12da90u: goto label_12da90;
        case 0x12da94u: goto label_12da94;
        case 0x12da98u: goto label_12da98;
        case 0x12da9cu: goto label_12da9c;
        case 0x12daa0u: goto label_12daa0;
        case 0x12daa4u: goto label_12daa4;
        case 0x12daa8u: goto label_12daa8;
        case 0x12daacu: goto label_12daac;
        case 0x12dab0u: goto label_12dab0;
        case 0x12dab4u: goto label_12dab4;
        case 0x12dab8u: goto label_12dab8;
        case 0x12dabcu: goto label_12dabc;
        case 0x12dac0u: goto label_12dac0;
        case 0x12dac4u: goto label_12dac4;
        case 0x12dac8u: goto label_12dac8;
        case 0x12daccu: goto label_12dacc;
        case 0x12dad0u: goto label_12dad0;
        case 0x12dad4u: goto label_12dad4;
        case 0x12dad8u: goto label_12dad8;
        case 0x12dadcu: goto label_12dadc;
        case 0x12dae0u: goto label_12dae0;
        case 0x12dae4u: goto label_12dae4;
        case 0x12dae8u: goto label_12dae8;
        case 0x12daecu: goto label_12daec;
        case 0x12daf0u: goto label_12daf0;
        case 0x12daf4u: goto label_12daf4;
        case 0x12daf8u: goto label_12daf8;
        case 0x12dafcu: goto label_12dafc;
        case 0x12db00u: goto label_12db00;
        case 0x12db04u: goto label_12db04;
        case 0x12db08u: goto label_12db08;
        case 0x12db0cu: goto label_12db0c;
        case 0x12db10u: goto label_12db10;
        case 0x12db14u: goto label_12db14;
        case 0x12db18u: goto label_12db18;
        case 0x12db1cu: goto label_12db1c;
        case 0x12db20u: goto label_12db20;
        case 0x12db24u: goto label_12db24;
        case 0x12db28u: goto label_12db28;
        case 0x12db2cu: goto label_12db2c;
        case 0x12db30u: goto label_12db30;
        case 0x12db34u: goto label_12db34;
        case 0x12db38u: goto label_12db38;
        case 0x12db3cu: goto label_12db3c;
        case 0x12db40u: goto label_12db40;
        case 0x12db44u: goto label_12db44;
        case 0x12db48u: goto label_12db48;
        case 0x12db4cu: goto label_12db4c;
        case 0x12db50u: goto label_12db50;
        case 0x12db54u: goto label_12db54;
        case 0x12db58u: goto label_12db58;
        case 0x12db5cu: goto label_12db5c;
        case 0x12db60u: goto label_12db60;
        case 0x12db64u: goto label_12db64;
        case 0x12db68u: goto label_12db68;
        case 0x12db6cu: goto label_12db6c;
        case 0x12db70u: goto label_12db70;
        case 0x12db74u: goto label_12db74;
        case 0x12db78u: goto label_12db78;
        case 0x12db7cu: goto label_12db7c;
        case 0x12db80u: goto label_12db80;
        case 0x12db84u: goto label_12db84;
        case 0x12db88u: goto label_12db88;
        case 0x12db8cu: goto label_12db8c;
        case 0x12db90u: goto label_12db90;
        case 0x12db94u: goto label_12db94;
        case 0x12db98u: goto label_12db98;
        case 0x12db9cu: goto label_12db9c;
        case 0x12dba0u: goto label_12dba0;
        case 0x12dba4u: goto label_12dba4;
        case 0x12dba8u: goto label_12dba8;
        case 0x12dbacu: goto label_12dbac;
        case 0x12dbb0u: goto label_12dbb0;
        case 0x12dbb4u: goto label_12dbb4;
        case 0x12dbb8u: goto label_12dbb8;
        case 0x12dbbcu: goto label_12dbbc;
        case 0x12dbc0u: goto label_12dbc0;
        case 0x12dbc4u: goto label_12dbc4;
        case 0x12dbc8u: goto label_12dbc8;
        case 0x12dbccu: goto label_12dbcc;
        case 0x12dbd0u: goto label_12dbd0;
        case 0x12dbd4u: goto label_12dbd4;
        case 0x12dbd8u: goto label_12dbd8;
        case 0x12dbdcu: goto label_12dbdc;
        case 0x12dbe0u: goto label_12dbe0;
        case 0x12dbe4u: goto label_12dbe4;
        case 0x12dbe8u: goto label_12dbe8;
        case 0x12dbecu: goto label_12dbec;
        case 0x12dbf0u: goto label_12dbf0;
        case 0x12dbf4u: goto label_12dbf4;
        case 0x12dbf8u: goto label_12dbf8;
        case 0x12dbfcu: goto label_12dbfc;
        case 0x12dc00u: goto label_12dc00;
        case 0x12dc04u: goto label_12dc04;
        case 0x12dc08u: goto label_12dc08;
        case 0x12dc0cu: goto label_12dc0c;
        case 0x12dc10u: goto label_12dc10;
        case 0x12dc14u: goto label_12dc14;
        case 0x12dc18u: goto label_12dc18;
        case 0x12dc1cu: goto label_12dc1c;
        case 0x12dc20u: goto label_12dc20;
        case 0x12dc24u: goto label_12dc24;
        case 0x12dc28u: goto label_12dc28;
        case 0x12dc2cu: goto label_12dc2c;
        case 0x12dc30u: goto label_12dc30;
        case 0x12dc34u: goto label_12dc34;
        case 0x12dc38u: goto label_12dc38;
        case 0x12dc3cu: goto label_12dc3c;
        case 0x12dc40u: goto label_12dc40;
        case 0x12dc44u: goto label_12dc44;
        case 0x12dc48u: goto label_12dc48;
        case 0x12dc4cu: goto label_12dc4c;
        case 0x12dc50u: goto label_12dc50;
        case 0x12dc54u: goto label_12dc54;
        case 0x12dc58u: goto label_12dc58;
        case 0x12dc5cu: goto label_12dc5c;
        case 0x12dc60u: goto label_12dc60;
        case 0x12dc64u: goto label_12dc64;
        case 0x12dc68u: goto label_12dc68;
        case 0x12dc6cu: goto label_12dc6c;
        case 0x12dc70u: goto label_12dc70;
        case 0x12dc74u: goto label_12dc74;
        case 0x12dc78u: goto label_12dc78;
        case 0x12dc7cu: goto label_12dc7c;
        case 0x12dc80u: goto label_12dc80;
        case 0x12dc84u: goto label_12dc84;
        case 0x12dc88u: goto label_12dc88;
        case 0x12dc8cu: goto label_12dc8c;
        case 0x12dc90u: goto label_12dc90;
        case 0x12dc94u: goto label_12dc94;
        case 0x12dc98u: goto label_12dc98;
        case 0x12dc9cu: goto label_12dc9c;
        case 0x12dca0u: goto label_12dca0;
        case 0x12dca4u: goto label_12dca4;
        case 0x12dca8u: goto label_12dca8;
        case 0x12dcacu: goto label_12dcac;
        case 0x12dcb0u: goto label_12dcb0;
        case 0x12dcb4u: goto label_12dcb4;
        case 0x12dcb8u: goto label_12dcb8;
        case 0x12dcbcu: goto label_12dcbc;
        case 0x12dcc0u: goto label_12dcc0;
        case 0x12dcc4u: goto label_12dcc4;
        case 0x12dcc8u: goto label_12dcc8;
        case 0x12dcccu: goto label_12dccc;
        case 0x12dcd0u: goto label_12dcd0;
        case 0x12dcd4u: goto label_12dcd4;
        case 0x12dcd8u: goto label_12dcd8;
        case 0x12dcdcu: goto label_12dcdc;
        case 0x12dce0u: goto label_12dce0;
        case 0x12dce4u: goto label_12dce4;
        case 0x12dce8u: goto label_12dce8;
        case 0x12dcecu: goto label_12dcec;
        case 0x12dcf0u: goto label_12dcf0;
        case 0x12dcf4u: goto label_12dcf4;
        case 0x12dcf8u: goto label_12dcf8;
        case 0x12dcfcu: goto label_12dcfc;
        case 0x12dd00u: goto label_12dd00;
        case 0x12dd04u: goto label_12dd04;
        case 0x12dd08u: goto label_12dd08;
        case 0x12dd0cu: goto label_12dd0c;
        case 0x12dd10u: goto label_12dd10;
        case 0x12dd14u: goto label_12dd14;
        case 0x12dd18u: goto label_12dd18;
        case 0x12dd1cu: goto label_12dd1c;
        case 0x12dd20u: goto label_12dd20;
        case 0x12dd24u: goto label_12dd24;
        case 0x12dd28u: goto label_12dd28;
        case 0x12dd2cu: goto label_12dd2c;
        case 0x12dd30u: goto label_12dd30;
        case 0x12dd34u: goto label_12dd34;
        case 0x12dd38u: goto label_12dd38;
        case 0x12dd3cu: goto label_12dd3c;
        case 0x12dd40u: goto label_12dd40;
        case 0x12dd44u: goto label_12dd44;
        case 0x12dd48u: goto label_12dd48;
        case 0x12dd4cu: goto label_12dd4c;
        case 0x12dd50u: goto label_12dd50;
        case 0x12dd54u: goto label_12dd54;
        case 0x12dd58u: goto label_12dd58;
        case 0x12dd5cu: goto label_12dd5c;
        case 0x12dd60u: goto label_12dd60;
        case 0x12dd64u: goto label_12dd64;
        case 0x12dd68u: goto label_12dd68;
        case 0x12dd6cu: goto label_12dd6c;
        case 0x12dd70u: goto label_12dd70;
        case 0x12dd74u: goto label_12dd74;
        case 0x12dd78u: goto label_12dd78;
        case 0x12dd7cu: goto label_12dd7c;
        case 0x12dd80u: goto label_12dd80;
        case 0x12dd84u: goto label_12dd84;
        case 0x12dd88u: goto label_12dd88;
        case 0x12dd8cu: goto label_12dd8c;
        case 0x12dd90u: goto label_12dd90;
        case 0x12dd94u: goto label_12dd94;
        case 0x12dd98u: goto label_12dd98;
        case 0x12dd9cu: goto label_12dd9c;
        case 0x12dda0u: goto label_12dda0;
        case 0x12dda4u: goto label_12dda4;
        case 0x12dda8u: goto label_12dda8;
        case 0x12ddacu: goto label_12ddac;
        case 0x12ddb0u: goto label_12ddb0;
        case 0x12ddb4u: goto label_12ddb4;
        case 0x12ddb8u: goto label_12ddb8;
        case 0x12ddbcu: goto label_12ddbc;
        case 0x12ddc0u: goto label_12ddc0;
        case 0x12ddc4u: goto label_12ddc4;
        case 0x12ddc8u: goto label_12ddc8;
        case 0x12ddccu: goto label_12ddcc;
        case 0x12ddd0u: goto label_12ddd0;
        case 0x12ddd4u: goto label_12ddd4;
        case 0x12ddd8u: goto label_12ddd8;
        case 0x12dddcu: goto label_12dddc;
        case 0x12dde0u: goto label_12dde0;
        case 0x12dde4u: goto label_12dde4;
        case 0x12dde8u: goto label_12dde8;
        case 0x12ddecu: goto label_12ddec;
        case 0x12ddf0u: goto label_12ddf0;
        case 0x12ddf4u: goto label_12ddf4;
        case 0x12ddf8u: goto label_12ddf8;
        case 0x12ddfcu: goto label_12ddfc;
        case 0x12de00u: goto label_12de00;
        case 0x12de04u: goto label_12de04;
        case 0x12de08u: goto label_12de08;
        case 0x12de0cu: goto label_12de0c;
        case 0x12de10u: goto label_12de10;
        case 0x12de14u: goto label_12de14;
        case 0x12de18u: goto label_12de18;
        case 0x12de1cu: goto label_12de1c;
        case 0x12de20u: goto label_12de20;
        case 0x12de24u: goto label_12de24;
        case 0x12de28u: goto label_12de28;
        case 0x12de2cu: goto label_12de2c;
        case 0x12de30u: goto label_12de30;
        case 0x12de34u: goto label_12de34;
        case 0x12de38u: goto label_12de38;
        case 0x12de3cu: goto label_12de3c;
        case 0x12de40u: goto label_12de40;
        case 0x12de44u: goto label_12de44;
        case 0x12de48u: goto label_12de48;
        case 0x12de4cu: goto label_12de4c;
        case 0x12de50u: goto label_12de50;
        case 0x12de54u: goto label_12de54;
        case 0x12de58u: goto label_12de58;
        case 0x12de5cu: goto label_12de5c;
        case 0x12de60u: goto label_12de60;
        case 0x12de64u: goto label_12de64;
        case 0x12de68u: goto label_12de68;
        case 0x12de6cu: goto label_12de6c;
        case 0x12de70u: goto label_12de70;
        case 0x12de74u: goto label_12de74;
        case 0x12de78u: goto label_12de78;
        case 0x12de7cu: goto label_12de7c;
        case 0x12de80u: goto label_12de80;
        case 0x12de84u: goto label_12de84;
        case 0x12de88u: goto label_12de88;
        case 0x12de8cu: goto label_12de8c;
        case 0x12de90u: goto label_12de90;
        case 0x12de94u: goto label_12de94;
        case 0x12de98u: goto label_12de98;
        case 0x12de9cu: goto label_12de9c;
        case 0x12dea0u: goto label_12dea0;
        case 0x12dea4u: goto label_12dea4;
        case 0x12dea8u: goto label_12dea8;
        case 0x12deacu: goto label_12deac;
        case 0x12deb0u: goto label_12deb0;
        case 0x12deb4u: goto label_12deb4;
        case 0x12deb8u: goto label_12deb8;
        case 0x12debcu: goto label_12debc;
        case 0x12dec0u: goto label_12dec0;
        case 0x12dec4u: goto label_12dec4;
        case 0x12dec8u: goto label_12dec8;
        case 0x12deccu: goto label_12decc;
        case 0x12ded0u: goto label_12ded0;
        case 0x12ded4u: goto label_12ded4;
        case 0x12ded8u: goto label_12ded8;
        case 0x12dedcu: goto label_12dedc;
        case 0x12dee0u: goto label_12dee0;
        case 0x12dee4u: goto label_12dee4;
        case 0x12dee8u: goto label_12dee8;
        case 0x12deecu: goto label_12deec;
        case 0x12def0u: goto label_12def0;
        case 0x12def4u: goto label_12def4;
        case 0x12def8u: goto label_12def8;
        case 0x12defcu: goto label_12defc;
        case 0x12df00u: goto label_12df00;
        case 0x12df04u: goto label_12df04;
        case 0x12df08u: goto label_12df08;
        case 0x12df0cu: goto label_12df0c;
        case 0x12df10u: goto label_12df10;
        case 0x12df14u: goto label_12df14;
        case 0x12df18u: goto label_12df18;
        case 0x12df1cu: goto label_12df1c;
        case 0x12df20u: goto label_12df20;
        case 0x12df24u: goto label_12df24;
        case 0x12df28u: goto label_12df28;
        case 0x12df2cu: goto label_12df2c;
        case 0x12df30u: goto label_12df30;
        case 0x12df34u: goto label_12df34;
        case 0x12df38u: goto label_12df38;
        case 0x12df3cu: goto label_12df3c;
        case 0x12df40u: goto label_12df40;
        case 0x12df44u: goto label_12df44;
        case 0x12df48u: goto label_12df48;
        case 0x12df4cu: goto label_12df4c;
        case 0x12df50u: goto label_12df50;
        case 0x12df54u: goto label_12df54;
        case 0x12df58u: goto label_12df58;
        case 0x12df5cu: goto label_12df5c;
        case 0x12df60u: goto label_12df60;
        case 0x12df64u: goto label_12df64;
        case 0x12df68u: goto label_12df68;
        case 0x12df6cu: goto label_12df6c;
        case 0x12df70u: goto label_12df70;
        case 0x12df74u: goto label_12df74;
        case 0x12df78u: goto label_12df78;
        case 0x12df7cu: goto label_12df7c;
        case 0x12df80u: goto label_12df80;
        case 0x12df84u: goto label_12df84;
        case 0x12df88u: goto label_12df88;
        case 0x12df8cu: goto label_12df8c;
        case 0x12df90u: goto label_12df90;
        case 0x12df94u: goto label_12df94;
        case 0x12df98u: goto label_12df98;
        case 0x12df9cu: goto label_12df9c;
        case 0x12dfa0u: goto label_12dfa0;
        case 0x12dfa4u: goto label_12dfa4;
        case 0x12dfa8u: goto label_12dfa8;
        case 0x12dfacu: goto label_12dfac;
        case 0x12dfb0u: goto label_12dfb0;
        case 0x12dfb4u: goto label_12dfb4;
        case 0x12dfb8u: goto label_12dfb8;
        case 0x12dfbcu: goto label_12dfbc;
        case 0x12dfc0u: goto label_12dfc0;
        case 0x12dfc4u: goto label_12dfc4;
        case 0x12dfc8u: goto label_12dfc8;
        case 0x12dfccu: goto label_12dfcc;
        case 0x12dfd0u: goto label_12dfd0;
        case 0x12dfd4u: goto label_12dfd4;
        case 0x12dfd8u: goto label_12dfd8;
        case 0x12dfdcu: goto label_12dfdc;
        case 0x12dfe0u: goto label_12dfe0;
        case 0x12dfe4u: goto label_12dfe4;
        case 0x12dfe8u: goto label_12dfe8;
        case 0x12dfecu: goto label_12dfec;
        case 0x12dff0u: goto label_12dff0;
        case 0x12dff4u: goto label_12dff4;
        case 0x12dff8u: goto label_12dff8;
        case 0x12dffcu: goto label_12dffc;
        case 0x12e000u: goto label_12e000;
        case 0x12e004u: goto label_12e004;
        case 0x12e008u: goto label_12e008;
        case 0x12e00cu: goto label_12e00c;
        case 0x12e010u: goto label_12e010;
        case 0x12e014u: goto label_12e014;
        case 0x12e018u: goto label_12e018;
        case 0x12e01cu: goto label_12e01c;
        case 0x12e020u: goto label_12e020;
        case 0x12e024u: goto label_12e024;
        case 0x12e028u: goto label_12e028;
        case 0x12e02cu: goto label_12e02c;
        case 0x12e030u: goto label_12e030;
        case 0x12e034u: goto label_12e034;
        case 0x12e038u: goto label_12e038;
        case 0x12e03cu: goto label_12e03c;
        case 0x12e040u: goto label_12e040;
        case 0x12e044u: goto label_12e044;
        case 0x12e048u: goto label_12e048;
        case 0x12e04cu: goto label_12e04c;
        case 0x12e050u: goto label_12e050;
        case 0x12e054u: goto label_12e054;
        case 0x12e058u: goto label_12e058;
        case 0x12e05cu: goto label_12e05c;
        case 0x12e060u: goto label_12e060;
        case 0x12e064u: goto label_12e064;
        case 0x12e068u: goto label_12e068;
        case 0x12e06cu: goto label_12e06c;
        case 0x12e070u: goto label_12e070;
        case 0x12e074u: goto label_12e074;
        case 0x12e078u: goto label_12e078;
        case 0x12e07cu: goto label_12e07c;
        case 0x12e080u: goto label_12e080;
        case 0x12e084u: goto label_12e084;
        case 0x12e088u: goto label_12e088;
        case 0x12e08cu: goto label_12e08c;
        case 0x12e090u: goto label_12e090;
        case 0x12e094u: goto label_12e094;
        case 0x12e098u: goto label_12e098;
        case 0x12e09cu: goto label_12e09c;
        case 0x12e0a0u: goto label_12e0a0;
        case 0x12e0a4u: goto label_12e0a4;
        case 0x12e0a8u: goto label_12e0a8;
        case 0x12e0acu: goto label_12e0ac;
        case 0x12e0b0u: goto label_12e0b0;
        case 0x12e0b4u: goto label_12e0b4;
        case 0x12e0b8u: goto label_12e0b8;
        case 0x12e0bcu: goto label_12e0bc;
        case 0x12e0c0u: goto label_12e0c0;
        case 0x12e0c4u: goto label_12e0c4;
        case 0x12e0c8u: goto label_12e0c8;
        case 0x12e0ccu: goto label_12e0cc;
        case 0x12e0d0u: goto label_12e0d0;
        case 0x12e0d4u: goto label_12e0d4;
        case 0x12e0d8u: goto label_12e0d8;
        case 0x12e0dcu: goto label_12e0dc;
        case 0x12e0e0u: goto label_12e0e0;
        case 0x12e0e4u: goto label_12e0e4;
        case 0x12e0e8u: goto label_12e0e8;
        case 0x12e0ecu: goto label_12e0ec;
        case 0x12e0f0u: goto label_12e0f0;
        case 0x12e0f4u: goto label_12e0f4;
        case 0x12e0f8u: goto label_12e0f8;
        case 0x12e0fcu: goto label_12e0fc;
        case 0x12e100u: goto label_12e100;
        case 0x12e104u: goto label_12e104;
        case 0x12e108u: goto label_12e108;
        case 0x12e10cu: goto label_12e10c;
        case 0x12e110u: goto label_12e110;
        case 0x12e114u: goto label_12e114;
        case 0x12e118u: goto label_12e118;
        case 0x12e11cu: goto label_12e11c;
        case 0x12e120u: goto label_12e120;
        case 0x12e124u: goto label_12e124;
        case 0x12e128u: goto label_12e128;
        case 0x12e12cu: goto label_12e12c;
        case 0x12e130u: goto label_12e130;
        case 0x12e134u: goto label_12e134;
        case 0x12e138u: goto label_12e138;
        case 0x12e13cu: goto label_12e13c;
        case 0x12e140u: goto label_12e140;
        case 0x12e144u: goto label_12e144;
        case 0x12e148u: goto label_12e148;
        case 0x12e14cu: goto label_12e14c;
        case 0x12e150u: goto label_12e150;
        case 0x12e154u: goto label_12e154;
        case 0x12e158u: goto label_12e158;
        case 0x12e15cu: goto label_12e15c;
        case 0x12e160u: goto label_12e160;
        case 0x12e164u: goto label_12e164;
        case 0x12e168u: goto label_12e168;
        case 0x12e16cu: goto label_12e16c;
        case 0x12e170u: goto label_12e170;
        case 0x12e174u: goto label_12e174;
        case 0x12e178u: goto label_12e178;
        case 0x12e17cu: goto label_12e17c;
        case 0x12e180u: goto label_12e180;
        case 0x12e184u: goto label_12e184;
        case 0x12e188u: goto label_12e188;
        case 0x12e18cu: goto label_12e18c;
        case 0x12e190u: goto label_12e190;
        case 0x12e194u: goto label_12e194;
        case 0x12e198u: goto label_12e198;
        case 0x12e19cu: goto label_12e19c;
        case 0x12e1a0u: goto label_12e1a0;
        case 0x12e1a4u: goto label_12e1a4;
        case 0x12e1a8u: goto label_12e1a8;
        case 0x12e1acu: goto label_12e1ac;
        case 0x12e1b0u: goto label_12e1b0;
        case 0x12e1b4u: goto label_12e1b4;
        case 0x12e1b8u: goto label_12e1b8;
        case 0x12e1bcu: goto label_12e1bc;
        case 0x12e1c0u: goto label_12e1c0;
        case 0x12e1c4u: goto label_12e1c4;
        case 0x12e1c8u: goto label_12e1c8;
        case 0x12e1ccu: goto label_12e1cc;
        case 0x12e1d0u: goto label_12e1d0;
        case 0x12e1d4u: goto label_12e1d4;
        case 0x12e1d8u: goto label_12e1d8;
        case 0x12e1dcu: goto label_12e1dc;
        case 0x12e1e0u: goto label_12e1e0;
        case 0x12e1e4u: goto label_12e1e4;
        case 0x12e1e8u: goto label_12e1e8;
        case 0x12e1ecu: goto label_12e1ec;
        case 0x12e1f0u: goto label_12e1f0;
        case 0x12e1f4u: goto label_12e1f4;
        case 0x12e1f8u: goto label_12e1f8;
        case 0x12e1fcu: goto label_12e1fc;
        case 0x12e200u: goto label_12e200;
        case 0x12e204u: goto label_12e204;
        case 0x12e208u: goto label_12e208;
        case 0x12e20cu: goto label_12e20c;
        case 0x12e210u: goto label_12e210;
        case 0x12e214u: goto label_12e214;
        case 0x12e218u: goto label_12e218;
        case 0x12e21cu: goto label_12e21c;
        case 0x12e220u: goto label_12e220;
        case 0x12e224u: goto label_12e224;
        case 0x12e228u: goto label_12e228;
        case 0x12e22cu: goto label_12e22c;
        case 0x12e230u: goto label_12e230;
        case 0x12e234u: goto label_12e234;
        case 0x12e238u: goto label_12e238;
        case 0x12e23cu: goto label_12e23c;
        case 0x12e240u: goto label_12e240;
        case 0x12e244u: goto label_12e244;
        case 0x12e248u: goto label_12e248;
        case 0x12e24cu: goto label_12e24c;
        case 0x12e250u: goto label_12e250;
        case 0x12e254u: goto label_12e254;
        case 0x12e258u: goto label_12e258;
        case 0x12e25cu: goto label_12e25c;
        case 0x12e260u: goto label_12e260;
        case 0x12e264u: goto label_12e264;
        case 0x12e268u: goto label_12e268;
        case 0x12e26cu: goto label_12e26c;
        case 0x12e270u: goto label_12e270;
        case 0x12e274u: goto label_12e274;
        case 0x12e278u: goto label_12e278;
        case 0x12e27cu: goto label_12e27c;
        case 0x12e280u: goto label_12e280;
        case 0x12e284u: goto label_12e284;
        case 0x12e288u: goto label_12e288;
        case 0x12e28cu: goto label_12e28c;
        case 0x12e290u: goto label_12e290;
        case 0x12e294u: goto label_12e294;
        case 0x12e298u: goto label_12e298;
        case 0x12e29cu: goto label_12e29c;
        default: break;
    }

    ctx->pc = 0x12d9e8u;

label_12d9e8:
    // 0x12d9e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12d9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_12d9ec:
    // 0x12d9ec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x12d9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_12d9f0:
    // 0x12d9f0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x12d9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_12d9f4:
    // 0x12d9f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12d9f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12d9f8:
    // 0x12d9f8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x12d9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_12d9fc:
    // 0x12d9fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12d9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_12da00:
    // 0x12da00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12da00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_12da04:
    // 0x12da04: 0xc048080  jal         func_120200
label_12da08:
    if (ctx->pc == 0x12DA08u) {
        ctx->pc = 0x12DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA04u;
        // 0x12da08: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DA0Cu;
        goto label_12da0c;
    }
    ctx->pc = 0x12DA04u;
    SET_GPR_U32(ctx, 31, 0x12DA0Cu);
    ctx->pc = 0x12DA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA04u;
    // 0x12da08: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x120200u, 0x12DA04u, 0x12DA0Cu)) {
        return;
    }
    ctx->pc = 0x12DA0Cu;
label_12da0c:
    // 0x12da0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x12da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_12da10:
    // 0x12da10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12da10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12da14:
    // 0x12da14: 0x8c464748  lw          $a2, 0x4748($v0)
    ctx->pc = 0x12da14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18248)));
label_12da18:
    // 0x12da18: 0xc07f1c0  jal         func_1FC700
label_12da1c:
    if (ctx->pc == 0x12DA1Cu) {
        ctx->pc = 0x12DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA18u;
        // 0x12da1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DA20u;
        goto label_12da20;
    }
    ctx->pc = 0x12DA18u;
    SET_GPR_U32(ctx, 31, 0x12DA20u);
    ctx->pc = 0x12DA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA18u;
    // 0x12da1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x12DA18u, 0x12DA20u)) {
        return;
    }
    ctx->pc = 0x12DA20u;
label_12da20:
    // 0x12da20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12da20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12da24:
    // 0x12da24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12da24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12da28:
    // 0x12da28: 0x104001af  beqz        $v0, . + 4 + (0x1AF << 2)
label_12da2c:
    if (ctx->pc == 0x12DA2Cu) {
        ctx->pc = 0x12DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA28u;
        // 0x12da2c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DA30u;
        goto label_12da30;
    }
    ctx->pc = 0x12DA28u;
    {
        const bool branch_taken_0x12da28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA28u;
        // 0x12da2c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da28) {
            ctx->pc = 0x12E0E8u;
            goto label_12e0e8;
        }
    }
    ctx->pc = 0x12DA30u;
label_12da30:
    // 0x12da30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12da30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12da34:
    // 0x12da34: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x12da34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12da38:
    // 0x12da38: 0x2c830063  sltiu       $v1, $a0, 0x63
    ctx->pc = 0x12da38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
label_12da3c:
    // 0x12da3c: 0x1060019e  beqz        $v1, . + 4 + (0x19E << 2)
label_12da40:
    if (ctx->pc == 0x12DA40u) {
        ctx->pc = 0x12DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA3Cu;
        // 0x12da40: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DA44u;
        goto label_12da44;
    }
    ctx->pc = 0x12DA3Cu;
    {
        const bool branch_taken_0x12da3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA3Cu;
        // 0x12da40: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da3c) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DA44u;
label_12da44:
    // 0x12da44: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x12da44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_12da48:
    // 0x12da48: 0x2442dae0  addiu       $v0, $v0, -0x2520
    ctx->pc = 0x12da48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957792));
label_12da4c:
    // 0x12da4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12da50:
    // 0x12da50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12da50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12da54:
    // 0x12da54: 0x800008  jr          $a0
label_12da58:
    if (ctx->pc == 0x12DA58u) {
        ctx->pc = 0x12DA5Cu;
        goto label_12da5c;
    }
    ctx->pc = 0x12DA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DA5Cu: goto label_12da5c;
            case 0x12DA70u: goto label_12da70;
            case 0x12DA84u: goto label_12da84;
            case 0x12DA98u: goto label_12da98;
            case 0x12DAACu: goto label_12daac;
            case 0x12DAC0u: goto label_12dac0;
            case 0x12DAD4u: goto label_12dad4;
            case 0x12DAE8u: goto label_12dae8;
            case 0x12DAFCu: goto label_12dafc;
            case 0x12DB10u: goto label_12db10;
            case 0x12DB24u: goto label_12db24;
            case 0x12DB38u: goto label_12db38;
            case 0x12DB4Cu: goto label_12db4c;
            case 0x12DB60u: goto label_12db60;
            case 0x12DB74u: goto label_12db74;
            case 0x12DB88u: goto label_12db88;
            case 0x12DB9Cu: goto label_12db9c;
            case 0x12DBB0u: goto label_12dbb0;
            case 0x12DBC4u: goto label_12dbc4;
            case 0x12DBD4u: goto label_12dbd4;
            case 0x12DBE4u: goto label_12dbe4;
            case 0x12DBF4u: goto label_12dbf4;
            case 0x12DC08u: goto label_12dc08;
            case 0x12DC30u: goto label_12dc30;
            case 0x12DC58u: goto label_12dc58;
            case 0x12DC70u: goto label_12dc70;
            case 0x12DC80u: goto label_12dc80;
            case 0x12DC98u: goto label_12dc98;
            case 0x12DCB0u: goto label_12dcb0;
            case 0x12DCC0u: goto label_12dcc0;
            case 0x12DCD0u: goto label_12dcd0;
            case 0x12DCE0u: goto label_12dce0;
            case 0x12DCF8u: goto label_12dcf8;
            case 0x12DD08u: goto label_12dd08;
            case 0x12DD18u: goto label_12dd18;
            case 0x12DD28u: goto label_12dd28;
            case 0x12DD38u: goto label_12dd38;
            case 0x12DD48u: goto label_12dd48;
            case 0x12DD58u: goto label_12dd58;
            case 0x12DD68u: goto label_12dd68;
            case 0x12DD78u: goto label_12dd78;
            case 0x12DD88u: goto label_12dd88;
            case 0x12DDA8u: goto label_12dda8;
            case 0x12DDC0u: goto label_12ddc0;
            case 0x12DDECu: goto label_12ddec;
            case 0x12DE18u: goto label_12de18;
            case 0x12DE28u: goto label_12de28;
            case 0x12DE38u: goto label_12de38;
            case 0x12DE48u: goto label_12de48;
            case 0x12DE58u: goto label_12de58;
            case 0x12DE68u: goto label_12de68;
            case 0x12DE78u: goto label_12de78;
            case 0x12DE88u: goto label_12de88;
            case 0x12DE98u: goto label_12de98;
            case 0x12DEA8u: goto label_12dea8;
            case 0x12DEB8u: goto label_12deb8;
            case 0x12DEC8u: goto label_12dec8;
            case 0x12DED8u: goto label_12ded8;
            case 0x12DEE8u: goto label_12dee8;
            case 0x12DEF8u: goto label_12def8;
            case 0x12DF0Cu: goto label_12df0c;
            case 0x12DF1Cu: goto label_12df1c;
            case 0x12DF2Cu: goto label_12df2c;
            case 0x12DF3Cu: goto label_12df3c;
            case 0x12DF4Cu: goto label_12df4c;
            case 0x12DF5Cu: goto label_12df5c;
            case 0x12DF6Cu: goto label_12df6c;
            case 0x12DF7Cu: goto label_12df7c;
            case 0x12DF8Cu: goto label_12df8c;
            case 0x12DF9Cu: goto label_12df9c;
            case 0x12DFACu: goto label_12dfac;
            case 0x12DFBCu: goto label_12dfbc;
            case 0x12DFD4u: goto label_12dfd4;
            case 0x12DFECu: goto label_12dfec;
            case 0x12DFFCu: goto label_12dffc;
            case 0x12E00Cu: goto label_12e00c;
            case 0x12E01Cu: goto label_12e01c;
            case 0x12E02Cu: goto label_12e02c;
            case 0x12E03Cu: goto label_12e03c;
            case 0x12E04Cu: goto label_12e04c;
            case 0x12E05Cu: goto label_12e05c;
            case 0x12E06Cu: goto label_12e06c;
            case 0x12E07Cu: goto label_12e07c;
            case 0x12E08Cu: goto label_12e08c;
            case 0x12E09Cu: goto label_12e09c;
            case 0x12E0ACu: goto label_12e0ac;
            case 0x12E0B8u: goto label_12e0b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DA54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12DA5Cu;
label_12da5c:
    // 0x12da5c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12da5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12da60:
    // 0x12da60: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12da60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_12da64:
    // 0x12da64: 0x24c6dac8  addiu       $a2, $a2, -0x2538
    ctx->pc = 0x12da64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957768));
label_12da68:
    // 0x12da68: 0x100000cb  b           . + 4 + (0xCB << 2)
label_12da6c:
    if (ctx->pc == 0x12DA6Cu) {
        ctx->pc = 0x12DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA68u;
        // 0x12da6c: 0x26241630  addiu       $a0, $s1, 0x1630 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DA70u;
        goto label_12da70;
    }
    ctx->pc = 0x12DA68u;
    {
        const bool branch_taken_0x12da68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA68u;
        // 0x12da6c: 0x26241630  addiu       $a0, $s1, 0x1630 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da68) {
            ctx->pc = 0x12DD98u;
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DA70u;
label_12da70:
    // 0x12da70: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12da70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12da74:
    // 0x12da74: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12da74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_12da78:
    // 0x12da78: 0x24c6dac8  addiu       $a2, $a2, -0x2538
    ctx->pc = 0x12da78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957768));
label_12da7c:
    // 0x12da7c: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_12da80:
    if (ctx->pc == 0x12DA80u) {
        ctx->pc = 0x12DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA7Cu;
        // 0x12da80: 0x26241638  addiu       $a0, $s1, 0x1638 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DA84u;
        goto label_12da84;
    }
    ctx->pc = 0x12DA7Cu;
    {
        const bool branch_taken_0x12da7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA7Cu;
        // 0x12da80: 0x26241638  addiu       $a0, $s1, 0x1638 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da7c) {
            ctx->pc = 0x12DD98u;
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DA84u;
label_12da84:
    // 0x12da84: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12da84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12da88:
    // 0x12da88: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12da88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_12da8c:
    // 0x12da8c: 0x24c6dac8  addiu       $a2, $a2, -0x2538
    ctx->pc = 0x12da8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957768));
label_12da90:
    // 0x12da90: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_12da94:
    if (ctx->pc == 0x12DA94u) {
        ctx->pc = 0x12DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA90u;
        // 0x12da94: 0x26241640  addiu       $a0, $s1, 0x1640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5696));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DA98u;
        goto label_12da98;
    }
    ctx->pc = 0x12DA90u;
    {
        const bool branch_taken_0x12da90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA90u;
        // 0x12da94: 0x26241640  addiu       $a0, $s1, 0x1640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da90) {
            ctx->pc = 0x12DD98u;
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DA98u;
label_12da98:
    // 0x12da98: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12da98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12da9c:
    // 0x12da9c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12da9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_12daa0:
    // 0x12daa0: 0x24c6dac8  addiu       $a2, $a2, -0x2538
    ctx->pc = 0x12daa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957768));
label_12daa4:
    // 0x12daa4: 0x100000bc  b           . + 4 + (0xBC << 2)
label_12daa8:
    if (ctx->pc == 0x12DAA8u) {
        ctx->pc = 0x12DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAA4u;
        // 0x12daa8: 0x26241648  addiu       $a0, $s1, 0x1648 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DAACu;
        goto label_12daac;
    }
    ctx->pc = 0x12DAA4u;
    {
        const bool branch_taken_0x12daa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAA4u;
        // 0x12daa8: 0x26241648  addiu       $a0, $s1, 0x1648 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12daa4) {
            ctx->pc = 0x12DD98u;
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DAACu;
label_12daac:
    // 0x12daac: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12daacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dab0:
    // 0x12dab0: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12dab0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_12dab4:
    // 0x12dab4: 0x24c6dac8  addiu       $a2, $a2, -0x2538
    ctx->pc = 0x12dab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957768));
label_12dab8:
    // 0x12dab8: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_12dabc:
    if (ctx->pc == 0x12DABCu) {
        ctx->pc = 0x12DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAB8u;
        // 0x12dabc: 0x26241650  addiu       $a0, $s1, 0x1650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DAC0u;
        goto label_12dac0;
    }
    ctx->pc = 0x12DAB8u;
    {
        const bool branch_taken_0x12dab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAB8u;
        // 0x12dabc: 0x26241650  addiu       $a0, $s1, 0x1650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dab8) {
            ctx->pc = 0x12DD98u;
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DAC0u;
label_12dac0:
    // 0x12dac0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12dac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dac4:
    // 0x12dac4: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12dac4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_12dac8:
    // 0x12dac8: 0x24c6dac8  addiu       $a2, $a2, -0x2538
    ctx->pc = 0x12dac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957768));
label_12dacc:
    // 0x12dacc: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_12dad0:
    if (ctx->pc == 0x12DAD0u) {
        ctx->pc = 0x12DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DACCu;
        // 0x12dad0: 0x26241658  addiu       $a0, $s1, 0x1658 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DAD4u;
        goto label_12dad4;
    }
    ctx->pc = 0x12DACCu;
    {
        const bool branch_taken_0x12dacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DACCu;
        // 0x12dad0: 0x26241658  addiu       $a0, $s1, 0x1658 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dacc) {
            ctx->pc = 0x12DD98u;
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DAD4u;
label_12dad4:
    // 0x12dad4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12dad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dad8:
    // 0x12dad8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12dad8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_12dadc:
    // 0x12dadc: 0x24c6dac8  addiu       $a2, $a2, -0x2538
    ctx->pc = 0x12dadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957768));
label_12dae0:
    // 0x12dae0: 0x100000ad  b           . + 4 + (0xAD << 2)
label_12dae4:
    if (ctx->pc == 0x12DAE4u) {
        ctx->pc = 0x12DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAE0u;
        // 0x12dae4: 0x26241660  addiu       $a0, $s1, 0x1660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DAE8u;
        goto label_12dae8;
    }
    ctx->pc = 0x12DAE0u;
    {
        const bool branch_taken_0x12dae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAE0u;
        // 0x12dae4: 0x26241660  addiu       $a0, $s1, 0x1660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dae0) {
            ctx->pc = 0x12DD98u;
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DAE8u;
label_12dae8:
    // 0x12dae8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12dae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12daec:
    // 0x12daec: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12daecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_12daf0:
    // 0x12daf0: 0x24c6dac8  addiu       $a2, $a2, -0x2538
    ctx->pc = 0x12daf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957768));
label_12daf4:
    // 0x12daf4: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_12daf8:
    if (ctx->pc == 0x12DAF8u) {
        ctx->pc = 0x12DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAF4u;
        // 0x12daf8: 0x26241698  addiu       $a0, $s1, 0x1698 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DAFCu;
        goto label_12dafc;
    }
    ctx->pc = 0x12DAF4u;
    {
        const bool branch_taken_0x12daf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAF4u;
        // 0x12daf8: 0x26241698  addiu       $a0, $s1, 0x1698 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12daf4) {
            ctx->pc = 0x12DD98u;
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DAFCu;
label_12dafc:
    // 0x12dafc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12dafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12db00:
    // 0x12db00: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12db00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_12db04:
    // 0x12db04: 0x24c6dac8  addiu       $a2, $a2, -0x2538
    ctx->pc = 0x12db04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957768));
label_12db08:
    // 0x12db08: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_12db0c:
    if (ctx->pc == 0x12DB0Cu) {
        ctx->pc = 0x12DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB08u;
        // 0x12db0c: 0x26241668  addiu       $a0, $s1, 0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB10u;
        goto label_12db10;
    }
    ctx->pc = 0x12DB08u;
    {
        const bool branch_taken_0x12db08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB08u;
        // 0x12db0c: 0x26241668  addiu       $a0, $s1, 0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db08) {
            ctx->pc = 0x12DD98u;
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DB10u;
label_12db10:
    // 0x12db10: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12db10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12db14:
    // 0x12db14: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12db14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_12db18:
    // 0x12db18: 0x24c6dac8  addiu       $a2, $a2, -0x2538
    ctx->pc = 0x12db18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957768));
label_12db1c:
    // 0x12db1c: 0x1000009e  b           . + 4 + (0x9E << 2)
label_12db20:
    if (ctx->pc == 0x12DB20u) {
        ctx->pc = 0x12DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB1Cu;
        // 0x12db20: 0x26241670  addiu       $a0, $s1, 0x1670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB24u;
        goto label_12db24;
    }
    ctx->pc = 0x12DB1Cu;
    {
        const bool branch_taken_0x12db1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB1Cu;
        // 0x12db20: 0x26241670  addiu       $a0, $s1, 0x1670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db1c) {
            ctx->pc = 0x12DD98u;
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DB24u;
label_12db24:
    // 0x12db24: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12db24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12db28:
    // 0x12db28: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12db28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_12db2c:
    // 0x12db2c: 0x24c6dac8  addiu       $a2, $a2, -0x2538
    ctx->pc = 0x12db2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957768));
label_12db30:
    // 0x12db30: 0x10000099  b           . + 4 + (0x99 << 2)
label_12db34:
    if (ctx->pc == 0x12DB34u) {
        ctx->pc = 0x12DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB30u;
        // 0x12db34: 0x26241678  addiu       $a0, $s1, 0x1678 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB38u;
        goto label_12db38;
    }
    ctx->pc = 0x12DB30u;
    {
        const bool branch_taken_0x12db30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB30u;
        // 0x12db34: 0x26241678  addiu       $a0, $s1, 0x1678 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db30) {
            ctx->pc = 0x12DD98u;
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DB38u;
label_12db38:
    // 0x12db38: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12db38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12db3c:
    // 0x12db3c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12db3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_12db40:
    // 0x12db40: 0x24c6dac8  addiu       $a2, $a2, -0x2538
    ctx->pc = 0x12db40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957768));
label_12db44:
    // 0x12db44: 0x10000094  b           . + 4 + (0x94 << 2)
label_12db48:
    if (ctx->pc == 0x12DB48u) {
        ctx->pc = 0x12DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB44u;
        // 0x12db48: 0x26241680  addiu       $a0, $s1, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB4Cu;
        goto label_12db4c;
    }
    ctx->pc = 0x12DB44u;
    {
        const bool branch_taken_0x12db44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB44u;
        // 0x12db48: 0x26241680  addiu       $a0, $s1, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db44) {
            ctx->pc = 0x12DD98u;
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DB4Cu;
label_12db4c:
    // 0x12db4c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12db4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12db50:
    // 0x12db50: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12db50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_12db54:
    // 0x12db54: 0x24c6dac8  addiu       $a2, $a2, -0x2538
    ctx->pc = 0x12db54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957768));
label_12db58:
    // 0x12db58: 0x1000008f  b           . + 4 + (0x8F << 2)
label_12db5c:
    if (ctx->pc == 0x12DB5Cu) {
        ctx->pc = 0x12DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB58u;
        // 0x12db5c: 0x26241688  addiu       $a0, $s1, 0x1688 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB60u;
        goto label_12db60;
    }
    ctx->pc = 0x12DB58u;
    {
        const bool branch_taken_0x12db58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB58u;
        // 0x12db5c: 0x26241688  addiu       $a0, $s1, 0x1688 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db58) {
            ctx->pc = 0x12DD98u;
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DB60u;
label_12db60:
    // 0x12db60: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12db60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12db64:
    // 0x12db64: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12db64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_12db68:
    // 0x12db68: 0x24c6dac8  addiu       $a2, $a2, -0x2538
    ctx->pc = 0x12db68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957768));
label_12db6c:
    // 0x12db6c: 0x1000008a  b           . + 4 + (0x8A << 2)
label_12db70:
    if (ctx->pc == 0x12DB70u) {
        ctx->pc = 0x12DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB6Cu;
        // 0x12db70: 0x26241690  addiu       $a0, $s1, 0x1690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB74u;
        goto label_12db74;
    }
    ctx->pc = 0x12DB6Cu;
    {
        const bool branch_taken_0x12db6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB6Cu;
        // 0x12db70: 0x26241690  addiu       $a0, $s1, 0x1690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db6c) {
            ctx->pc = 0x12DD98u;
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DB74u;
label_12db74:
    // 0x12db74: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12db74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12db78:
    // 0x12db78: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12db78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_12db7c:
    // 0x12db7c: 0x24c6dac8  addiu       $a2, $a2, -0x2538
    ctx->pc = 0x12db7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957768));
label_12db80:
    // 0x12db80: 0x10000085  b           . + 4 + (0x85 << 2)
label_12db84:
    if (ctx->pc == 0x12DB84u) {
        ctx->pc = 0x12DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB80u;
        // 0x12db84: 0x262416a0  addiu       $a0, $s1, 0x16A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB88u;
        goto label_12db88;
    }
    ctx->pc = 0x12DB80u;
    {
        const bool branch_taken_0x12db80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB80u;
        // 0x12db84: 0x262416a0  addiu       $a0, $s1, 0x16A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db80) {
            ctx->pc = 0x12DD98u;
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DB88u;
label_12db88:
    // 0x12db88: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12db88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12db8c:
    // 0x12db8c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12db8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_12db90:
    // 0x12db90: 0x24c6dac8  addiu       $a2, $a2, -0x2538
    ctx->pc = 0x12db90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957768));
label_12db94:
    // 0x12db94: 0x10000080  b           . + 4 + (0x80 << 2)
label_12db98:
    if (ctx->pc == 0x12DB98u) {
        ctx->pc = 0x12DB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB94u;
        // 0x12db98: 0x262416a8  addiu       $a0, $s1, 0x16A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB9Cu;
        goto label_12db9c;
    }
    ctx->pc = 0x12DB94u;
    {
        const bool branch_taken_0x12db94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB94u;
        // 0x12db98: 0x262416a8  addiu       $a0, $s1, 0x16A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db94) {
            ctx->pc = 0x12DD98u;
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DB9Cu;
label_12db9c:
    // 0x12db9c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12db9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dba0:
    // 0x12dba0: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12dba0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_12dba4:
    // 0x12dba4: 0x24c6dac8  addiu       $a2, $a2, -0x2538
    ctx->pc = 0x12dba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957768));
label_12dba8:
    // 0x12dba8: 0x1000007b  b           . + 4 + (0x7B << 2)
label_12dbac:
    if (ctx->pc == 0x12DBACu) {
        ctx->pc = 0x12DBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBA8u;
        // 0x12dbac: 0x262416b0  addiu       $a0, $s1, 0x16B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DBB0u;
        goto label_12dbb0;
    }
    ctx->pc = 0x12DBA8u;
    {
        const bool branch_taken_0x12dba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBA8u;
        // 0x12dbac: 0x262416b0  addiu       $a0, $s1, 0x16B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dba8) {
            ctx->pc = 0x12DD98u;
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DBB0u;
label_12dbb0:
    // 0x12dbb0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12dbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dbb4:
    // 0x12dbb4: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12dbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_12dbb8:
    // 0x12dbb8: 0x24c6dac8  addiu       $a2, $a2, -0x2538
    ctx->pc = 0x12dbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957768));
label_12dbbc:
    // 0x12dbbc: 0x10000076  b           . + 4 + (0x76 << 2)
label_12dbc0:
    if (ctx->pc == 0x12DBC0u) {
        ctx->pc = 0x12DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBBCu;
        // 0x12dbc0: 0x262416b8  addiu       $a0, $s1, 0x16B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DBC4u;
        goto label_12dbc4;
    }
    ctx->pc = 0x12DBBCu;
    {
        const bool branch_taken_0x12dbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBBCu;
        // 0x12dbc0: 0x262416b8  addiu       $a0, $s1, 0x16B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dbbc) {
            ctx->pc = 0x12DD98u;
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DBC4u;
label_12dbc4:
    // 0x12dbc4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dbc8:
    // 0x12dbc8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dbcc:
    // 0x12dbcc: 0x1000013a  b           . + 4 + (0x13A << 2)
label_12dbd0:
    if (ctx->pc == 0x12DBD0u) {
        ctx->pc = 0x12DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBCCu;
        // 0x12dbd0: 0xe6201944  swc1        $f0, 0x1944($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6468), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DBD4u;
        goto label_12dbd4;
    }
    ctx->pc = 0x12DBCCu;
    {
        const bool branch_taken_0x12dbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBCCu;
        // 0x12dbd0: 0xe6201944  swc1        $f0, 0x1944($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6468), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dbcc) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DBD4u;
label_12dbd4:
    // 0x12dbd4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dbd8:
    // 0x12dbd8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dbdc:
    // 0x12dbdc: 0x10000136  b           . + 4 + (0x136 << 2)
label_12dbe0:
    if (ctx->pc == 0x12DBE0u) {
        ctx->pc = 0x12DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBDCu;
        // 0x12dbe0: 0xe6201948  swc1        $f0, 0x1948($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6472), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DBE4u;
        goto label_12dbe4;
    }
    ctx->pc = 0x12DBDCu;
    {
        const bool branch_taken_0x12dbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBDCu;
        // 0x12dbe0: 0xe6201948  swc1        $f0, 0x1948($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6472), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dbdc) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DBE4u;
label_12dbe4:
    // 0x12dbe4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dbe8:
    // 0x12dbe8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dbec:
    // 0x12dbec: 0x10000132  b           . + 4 + (0x132 << 2)
label_12dbf0:
    if (ctx->pc == 0x12DBF0u) {
        ctx->pc = 0x12DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBECu;
        // 0x12dbf0: 0xe620194c  swc1        $f0, 0x194C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6476), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DBF4u;
        goto label_12dbf4;
    }
    ctx->pc = 0x12DBECu;
    {
        const bool branch_taken_0x12dbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBECu;
        // 0x12dbf0: 0xe620194c  swc1        $f0, 0x194C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dbec) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DBF4u;
label_12dbf4:
    // 0x12dbf4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dbf8:
    // 0x12dbf8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dbfc:
    // 0x12dbfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12dbfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_12dc00:
    // 0x12dc00: 0x1000012d  b           . + 4 + (0x12D << 2)
label_12dc04:
    if (ctx->pc == 0x12DC04u) {
        ctx->pc = 0x12DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC00u;
        // 0x12dc04: 0xe62014d0  swc1        $f0, 0x14D0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5328), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC08u;
        goto label_12dc08;
    }
    ctx->pc = 0x12DC00u;
    {
        const bool branch_taken_0x12dc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC00u;
        // 0x12dc04: 0xe62014d0  swc1        $f0, 0x14D0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5328), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc00) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DC08u;
label_12dc08:
    // 0x12dc08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dc0c:
    // 0x12dc0c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x12dc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_12dc10:
    // 0x12dc10: 0x3421fa33  ori         $at, $at, 0xFA33
    ctx->pc = 0x12dc10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64051);
label_12dc14:
    // 0x12dc14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12dc14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12dc18:
    // 0x12dc18: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dc1c:
    // 0x12dc1c: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x12dc1cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_12dc20:
    // 0x12dc20: 0xc09b0e8  jal         func_26C3A0
label_12dc24:
    if (ctx->pc == 0x12DC24u) {
        ctx->pc = 0x12DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC20u;
        // 0x12dc24: 0xe6201928  swc1        $f0, 0x1928($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6440), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC28u;
        goto label_12dc28;
    }
    ctx->pc = 0x12DC20u;
    SET_GPR_U32(ctx, 31, 0x12DC28u);
    ctx->pc = 0x12DC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC20u;
    // 0x12dc24: 0xe6201928  swc1        $f0, 0x1928($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6440), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x12DC20u, 0x12DC28u)) {
        return;
    }
    ctx->pc = 0x12DC28u;
label_12dc28:
    // 0x12dc28: 0x10000123  b           . + 4 + (0x123 << 2)
label_12dc2c:
    if (ctx->pc == 0x12DC2Cu) {
        ctx->pc = 0x12DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC28u;
        // 0x12dc2c: 0xe620192c  swc1        $f0, 0x192C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6444), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC30u;
        goto label_12dc30;
    }
    ctx->pc = 0x12DC28u;
    {
        const bool branch_taken_0x12dc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC28u;
        // 0x12dc2c: 0xe620192c  swc1        $f0, 0x192C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc28) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DC30u;
label_12dc30:
    // 0x12dc30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dc34:
    // 0x12dc34: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x12dc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_12dc38:
    // 0x12dc38: 0x3421fa33  ori         $at, $at, 0xFA33
    ctx->pc = 0x12dc38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64051);
label_12dc3c:
    // 0x12dc3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12dc3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12dc40:
    // 0x12dc40: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dc44:
    // 0x12dc44: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x12dc44u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_12dc48:
    // 0x12dc48: 0xc09b0e8  jal         func_26C3A0
label_12dc4c:
    if (ctx->pc == 0x12DC4Cu) {
        ctx->pc = 0x12DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC48u;
        // 0x12dc4c: 0xe6201930  swc1        $f0, 0x1930($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC50u;
        goto label_12dc50;
    }
    ctx->pc = 0x12DC48u;
    SET_GPR_U32(ctx, 31, 0x12DC50u);
    ctx->pc = 0x12DC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC48u;
    // 0x12dc4c: 0xe6201930  swc1        $f0, 0x1930($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x12DC48u, 0x12DC50u)) {
        return;
    }
    ctx->pc = 0x12DC50u;
label_12dc50:
    // 0x12dc50: 0x10000119  b           . + 4 + (0x119 << 2)
label_12dc54:
    if (ctx->pc == 0x12DC54u) {
        ctx->pc = 0x12DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC50u;
        // 0x12dc54: 0xe6201934  swc1        $f0, 0x1934($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6452), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC58u;
        goto label_12dc58;
    }
    ctx->pc = 0x12DC50u;
    {
        const bool branch_taken_0x12dc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC50u;
        // 0x12dc54: 0xe6201934  swc1        $f0, 0x1934($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc50) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DC58u;
label_12dc58:
    // 0x12dc58: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12dc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dc5c:
    // 0x12dc5c: 0x26240310  addiu       $a0, $s1, 0x310
    ctx->pc = 0x12dc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
label_12dc60:
    // 0x12dc60: 0xc043ce6  jal         func_10F398
label_12dc64:
    if (ctx->pc == 0x12DC64u) {
        ctx->pc = 0x12DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC60u;
        // 0x12dc64: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC68u;
        goto label_12dc68;
    }
    ctx->pc = 0x12DC60u;
    SET_GPR_U32(ctx, 31, 0x12DC68u);
    ctx->pc = 0x12DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC60u;
    // 0x12dc64: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x12DC60u, 0x12DC68u)) {
        return;
    }
    ctx->pc = 0x12DC68u;
label_12dc68:
    // 0x12dc68: 0x10000113  b           . + 4 + (0x113 << 2)
label_12dc6c:
    if (ctx->pc == 0x12DC6Cu) {
        ctx->pc = 0x12DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC68u;
        // 0x12dc6c: 0xae2214e8  sw          $v0, 0x14E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC70u;
        goto label_12dc70;
    }
    ctx->pc = 0x12DC68u;
    {
        const bool branch_taken_0x12dc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC68u;
        // 0x12dc6c: 0xae2214e8  sw          $v0, 0x14E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc68) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DC70u;
label_12dc70:
    // 0x12dc70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dc74:
    // 0x12dc74: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dc78:
    // 0x12dc78: 0x1000010f  b           . + 4 + (0x10F << 2)
label_12dc7c:
    if (ctx->pc == 0x12DC7Cu) {
        ctx->pc = 0x12DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC78u;
        // 0x12dc7c: 0xe62014d4  swc1        $f0, 0x14D4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5332), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC80u;
        goto label_12dc80;
    }
    ctx->pc = 0x12DC78u;
    {
        const bool branch_taken_0x12dc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC78u;
        // 0x12dc7c: 0xe62014d4  swc1        $f0, 0x14D4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5332), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc78) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DC80u;
label_12dc80:
    // 0x12dc80: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12dc80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dc84:
    // 0x12dc84: 0x26240310  addiu       $a0, $s1, 0x310
    ctx->pc = 0x12dc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
label_12dc88:
    // 0x12dc88: 0xc043ce6  jal         func_10F398
label_12dc8c:
    if (ctx->pc == 0x12DC8Cu) {
        ctx->pc = 0x12DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC88u;
        // 0x12dc8c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC90u;
        goto label_12dc90;
    }
    ctx->pc = 0x12DC88u;
    SET_GPR_U32(ctx, 31, 0x12DC90u);
    ctx->pc = 0x12DC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC88u;
    // 0x12dc8c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x12DC88u, 0x12DC90u)) {
        return;
    }
    ctx->pc = 0x12DC90u;
label_12dc90:
    // 0x12dc90: 0x10000109  b           . + 4 + (0x109 << 2)
label_12dc94:
    if (ctx->pc == 0x12DC94u) {
        ctx->pc = 0x12DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC90u;
        // 0x12dc94: 0xae2214d8  sw          $v0, 0x14D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC98u;
        goto label_12dc98;
    }
    ctx->pc = 0x12DC90u;
    {
        const bool branch_taken_0x12dc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC90u;
        // 0x12dc94: 0xae2214d8  sw          $v0, 0x14D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc90) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DC98u;
label_12dc98:
    // 0x12dc98: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12dc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dc9c:
    // 0x12dc9c: 0x26240310  addiu       $a0, $s1, 0x310
    ctx->pc = 0x12dc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
label_12dca0:
    // 0x12dca0: 0xc043ce6  jal         func_10F398
label_12dca4:
    if (ctx->pc == 0x12DCA4u) {
        ctx->pc = 0x12DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCA0u;
        // 0x12dca4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DCA8u;
        goto label_12dca8;
    }
    ctx->pc = 0x12DCA0u;
    SET_GPR_U32(ctx, 31, 0x12DCA8u);
    ctx->pc = 0x12DCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCA0u;
    // 0x12dca4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x12DCA0u, 0x12DCA8u)) {
        return;
    }
    ctx->pc = 0x12DCA8u;
label_12dca8:
    // 0x12dca8: 0x10000103  b           . + 4 + (0x103 << 2)
label_12dcac:
    if (ctx->pc == 0x12DCACu) {
        ctx->pc = 0x12DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCA8u;
        // 0x12dcac: 0xae221504  sw          $v0, 0x1504($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DCB0u;
        goto label_12dcb0;
    }
    ctx->pc = 0x12DCA8u;
    {
        const bool branch_taken_0x12dca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCA8u;
        // 0x12dcac: 0xae221504  sw          $v0, 0x1504($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dca8) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DCB0u;
label_12dcb0:
    // 0x12dcb0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dcb4:
    // 0x12dcb4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dcb8:
    // 0x12dcb8: 0x100000ff  b           . + 4 + (0xFF << 2)
label_12dcbc:
    if (ctx->pc == 0x12DCBCu) {
        ctx->pc = 0x12DCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCB8u;
        // 0x12dcbc: 0xe6201508  swc1        $f0, 0x1508($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5384), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DCC0u;
        goto label_12dcc0;
    }
    ctx->pc = 0x12DCB8u;
    {
        const bool branch_taken_0x12dcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCB8u;
        // 0x12dcbc: 0xe6201508  swc1        $f0, 0x1508($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5384), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dcb8) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DCC0u;
label_12dcc0:
    // 0x12dcc0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dcc4:
    // 0x12dcc4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dcc8:
    // 0x12dcc8: 0x100000fb  b           . + 4 + (0xFB << 2)
label_12dccc:
    if (ctx->pc == 0x12DCCCu) {
        ctx->pc = 0x12DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCC8u;
        // 0x12dccc: 0xe620150c  swc1        $f0, 0x150C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5388), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DCD0u;
        goto label_12dcd0;
    }
    ctx->pc = 0x12DCC8u;
    {
        const bool branch_taken_0x12dcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCC8u;
        // 0x12dccc: 0xe620150c  swc1        $f0, 0x150C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5388), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dcc8) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DCD0u;
label_12dcd0:
    // 0x12dcd0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dcd4:
    // 0x12dcd4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dcd8:
    // 0x12dcd8: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_12dcdc:
    if (ctx->pc == 0x12DCDCu) {
        ctx->pc = 0x12DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCD8u;
        // 0x12dcdc: 0xe6201510  swc1        $f0, 0x1510($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5392), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DCE0u;
        goto label_12dce0;
    }
    ctx->pc = 0x12DCD8u;
    {
        const bool branch_taken_0x12dcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCD8u;
        // 0x12dcdc: 0xe6201510  swc1        $f0, 0x1510($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dcd8) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DCE0u;
label_12dce0:
    // 0x12dce0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12dce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dce4:
    // 0x12dce4: 0x26240310  addiu       $a0, $s1, 0x310
    ctx->pc = 0x12dce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
label_12dce8:
    // 0x12dce8: 0xc043ce6  jal         func_10F398
label_12dcec:
    if (ctx->pc == 0x12DCECu) {
        ctx->pc = 0x12DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCE8u;
        // 0x12dcec: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DCF0u;
        goto label_12dcf0;
    }
    ctx->pc = 0x12DCE8u;
    SET_GPR_U32(ctx, 31, 0x12DCF0u);
    ctx->pc = 0x12DCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCE8u;
    // 0x12dcec: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x12DCE8u, 0x12DCF0u)) {
        return;
    }
    ctx->pc = 0x12DCF0u;
label_12dcf0:
    // 0x12dcf0: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_12dcf4:
    if (ctx->pc == 0x12DCF4u) {
        ctx->pc = 0x12DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCF0u;
        // 0x12dcf4: 0xae221514  sw          $v0, 0x1514($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DCF8u;
        goto label_12dcf8;
    }
    ctx->pc = 0x12DCF0u;
    {
        const bool branch_taken_0x12dcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCF0u;
        // 0x12dcf4: 0xae221514  sw          $v0, 0x1514($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dcf0) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DCF8u;
label_12dcf8:
    // 0x12dcf8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dcfc:
    // 0x12dcfc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dd00:
    // 0x12dd00: 0x100000ed  b           . + 4 + (0xED << 2)
label_12dd04:
    if (ctx->pc == 0x12DD04u) {
        ctx->pc = 0x12DD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD00u;
        // 0x12dd04: 0xe6201518  swc1        $f0, 0x1518($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5400), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DD08u;
        goto label_12dd08;
    }
    ctx->pc = 0x12DD00u;
    {
        const bool branch_taken_0x12dd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD00u;
        // 0x12dd04: 0xe6201518  swc1        $f0, 0x1518($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd00) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DD08u;
label_12dd08:
    // 0x12dd08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dd0c:
    // 0x12dd0c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dd10:
    // 0x12dd10: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_12dd14:
    if (ctx->pc == 0x12DD14u) {
        ctx->pc = 0x12DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD10u;
        // 0x12dd14: 0xe620151c  swc1        $f0, 0x151C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5404), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DD18u;
        goto label_12dd18;
    }
    ctx->pc = 0x12DD10u;
    {
        const bool branch_taken_0x12dd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD10u;
        // 0x12dd14: 0xe620151c  swc1        $f0, 0x151C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5404), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd10) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DD18u;
label_12dd18:
    // 0x12dd18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dd1c:
    // 0x12dd1c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dd20:
    // 0x12dd20: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_12dd24:
    if (ctx->pc == 0x12DD24u) {
        ctx->pc = 0x12DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD20u;
        // 0x12dd24: 0xe6201520  swc1        $f0, 0x1520($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5408), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DD28u;
        goto label_12dd28;
    }
    ctx->pc = 0x12DD20u;
    {
        const bool branch_taken_0x12dd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD20u;
        // 0x12dd24: 0xe6201520  swc1        $f0, 0x1520($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5408), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd20) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DD28u;
label_12dd28:
    // 0x12dd28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dd2c:
    // 0x12dd2c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x12dd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12dd30:
    // 0x12dd30: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_12dd34:
    if (ctx->pc == 0x12DD34u) {
        ctx->pc = 0x12DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD30u;
        // 0x12dd34: 0xae231b2c  sw          $v1, 0x1B2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6956), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DD38u;
        goto label_12dd38;
    }
    ctx->pc = 0x12DD30u;
    {
        const bool branch_taken_0x12dd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD30u;
        // 0x12dd34: 0xae231b2c  sw          $v1, 0x1B2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6956), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd30) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DD38u;
label_12dd38:
    // 0x12dd38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dd3c:
    // 0x12dd3c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dd40:
    // 0x12dd40: 0x100000dd  b           . + 4 + (0xDD << 2)
label_12dd44:
    if (ctx->pc == 0x12DD44u) {
        ctx->pc = 0x12DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD40u;
        // 0x12dd44: 0xe6201b3c  swc1        $f0, 0x1B3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6972), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DD48u;
        goto label_12dd48;
    }
    ctx->pc = 0x12DD40u;
    {
        const bool branch_taken_0x12dd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD40u;
        // 0x12dd44: 0xe6201b3c  swc1        $f0, 0x1B3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6972), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd40) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DD48u;
label_12dd48:
    // 0x12dd48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dd4c:
    // 0x12dd4c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dd50:
    // 0x12dd50: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_12dd54:
    if (ctx->pc == 0x12DD54u) {
        ctx->pc = 0x12DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD50u;
        // 0x12dd54: 0xe6201b40  swc1        $f0, 0x1B40($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6976), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DD58u;
        goto label_12dd58;
    }
    ctx->pc = 0x12DD50u;
    {
        const bool branch_taken_0x12dd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD50u;
        // 0x12dd54: 0xe6201b40  swc1        $f0, 0x1B40($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6976), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd50) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DD58u;
label_12dd58:
    // 0x12dd58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dd5c:
    // 0x12dd5c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dd60:
    // 0x12dd60: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_12dd64:
    if (ctx->pc == 0x12DD64u) {
        ctx->pc = 0x12DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD60u;
        // 0x12dd64: 0xe6201b44  swc1        $f0, 0x1B44($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6980), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DD68u;
        goto label_12dd68;
    }
    ctx->pc = 0x12DD60u;
    {
        const bool branch_taken_0x12dd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD60u;
        // 0x12dd64: 0xe6201b44  swc1        $f0, 0x1B44($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6980), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd60) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DD68u;
label_12dd68:
    // 0x12dd68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dd6c:
    // 0x12dd6c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dd70:
    // 0x12dd70: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_12dd74:
    if (ctx->pc == 0x12DD74u) {
        ctx->pc = 0x12DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD70u;
        // 0x12dd74: 0xe6201b34  swc1        $f0, 0x1B34($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6964), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DD78u;
        goto label_12dd78;
    }
    ctx->pc = 0x12DD70u;
    {
        const bool branch_taken_0x12dd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD70u;
        // 0x12dd74: 0xe6201b34  swc1        $f0, 0x1B34($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6964), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd70) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DD78u;
label_12dd78:
    // 0x12dd78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dd7c:
    // 0x12dd7c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dd80:
    // 0x12dd80: 0x100000cd  b           . + 4 + (0xCD << 2)
label_12dd84:
    if (ctx->pc == 0x12DD84u) {
        ctx->pc = 0x12DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD80u;
        // 0x12dd84: 0xe6201b38  swc1        $f0, 0x1B38($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6968), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DD88u;
        goto label_12dd88;
    }
    ctx->pc = 0x12DD80u;
    {
        const bool branch_taken_0x12dd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD80u;
        // 0x12dd84: 0xe6201b38  swc1        $f0, 0x1B38($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6968), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd80) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DD88u;
label_12dd88:
    // 0x12dd88: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12dd88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dd8c:
    // 0x12dd8c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12dd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_12dd90:
    // 0x12dd90: 0x24c6d8a0  addiu       $a2, $a2, -0x2760
    ctx->pc = 0x12dd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957216));
label_12dd94:
    // 0x12dd94: 0x262414c4  addiu       $a0, $s1, 0x14C4
    ctx->pc = 0x12dd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5316));
label_12dd98:
    // 0x12dd98: 0xc07fce0  jal         func_1FF380
label_12dd9c:
    if (ctx->pc == 0x12DD9Cu) {
        ctx->pc = 0x12DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD98u;
        // 0x12dd9c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DDA0u;
        goto label_12dda0;
    }
    ctx->pc = 0x12DD98u;
    SET_GPR_U32(ctx, 31, 0x12DDA0u);
    ctx->pc = 0x12DD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD98u;
    // 0x12dd9c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x12DD98u, 0x12DDA0u)) {
        return;
    }
    ctx->pc = 0x12DDA0u;
label_12dda0:
    // 0x12dda0: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_12dda4:
    if (ctx->pc == 0x12DDA4u) {
        ctx->pc = 0x12DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DDA0u;
        // 0x12dda4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DDA8u;
        goto label_12dda8;
    }
    ctx->pc = 0x12DDA0u;
    {
        const bool branch_taken_0x12dda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DDA0u;
        // 0x12dda4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dda0) {
            ctx->pc = 0x12E0BCu;
            goto label_12e0bc;
        }
    }
    ctx->pc = 0x12DDA8u;
label_12dda8:
    // 0x12dda8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x12dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12ddac:
    // 0x12ddac: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x12ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_12ddb0:
    // 0x12ddb0: 0x8c438ac0  lw          $v1, -0x7540($v0)
    ctx->pc = 0x12ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937280)));
label_12ddb4:
    // 0x12ddb4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x12ddb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ddb8:
    // 0x12ddb8: 0x100000bf  b           . + 4 + (0xBF << 2)
label_12ddbc:
    if (ctx->pc == 0x12DDBCu) {
        ctx->pc = 0x12DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DDB8u;
        // 0x12ddbc: 0xe4600128  swc1        $f0, 0x128($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DDC0u;
        goto label_12ddc0;
    }
    ctx->pc = 0x12DDB8u;
    {
        const bool branch_taken_0x12ddb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DDB8u;
        // 0x12ddbc: 0xe4600128  swc1        $f0, 0x128($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ddb8) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DDC0u;
label_12ddc0:
    // 0x12ddc0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12ddc4:
    // 0x12ddc4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x12ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_12ddc8:
    // 0x12ddc8: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x12ddc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
label_12ddcc:
    // 0x12ddcc: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x12ddccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
label_12ddd0:
    // 0x12ddd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ddd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12ddd4:
    // 0x12ddd4: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x12ddd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12ddd8:
    // 0x12ddd8: 0x8c708ac0  lw          $s0, -0x7540($v1)
    ctx->pc = 0x12ddd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937280)));
label_12dddc:
    // 0x12dddc: 0xc09b0e8  jal         func_26C3A0
label_12dde0:
    if (ctx->pc == 0x12DDE0u) {
        ctx->pc = 0x12DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DDDCu;
        // 0x12dde0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DDE4u;
        goto label_12dde4;
    }
    ctx->pc = 0x12DDDCu;
    SET_GPR_U32(ctx, 31, 0x12DDE4u);
    ctx->pc = 0x12DDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DDDCu;
    // 0x12dde0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x12DDDCu, 0x12DDE4u)) {
        return;
    }
    ctx->pc = 0x12DDE4u;
label_12dde4:
    // 0x12dde4: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_12dde8:
    if (ctx->pc == 0x12DDE8u) {
        ctx->pc = 0x12DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DDE4u;
        // 0x12dde8: 0xe600012c  swc1        $f0, 0x12C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DDECu;
        goto label_12ddec;
    }
    ctx->pc = 0x12DDE4u;
    {
        const bool branch_taken_0x12dde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DDE4u;
        // 0x12dde8: 0xe600012c  swc1        $f0, 0x12C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dde4) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DDECu;
label_12ddec:
    // 0x12ddec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12ddf0:
    // 0x12ddf0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x12ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_12ddf4:
    // 0x12ddf4: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x12ddf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
label_12ddf8:
    // 0x12ddf8: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x12ddf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
label_12ddfc:
    // 0x12ddfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ddfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12de00:
    // 0x12de00: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x12de00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12de04:
    // 0x12de04: 0x8c708ac0  lw          $s0, -0x7540($v1)
    ctx->pc = 0x12de04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937280)));
label_12de08:
    // 0x12de08: 0xc09b0e8  jal         func_26C3A0
label_12de0c:
    if (ctx->pc == 0x12DE0Cu) {
        ctx->pc = 0x12DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE08u;
        // 0x12de0c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DE10u;
        goto label_12de10;
    }
    ctx->pc = 0x12DE08u;
    SET_GPR_U32(ctx, 31, 0x12DE10u);
    ctx->pc = 0x12DE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE08u;
    // 0x12de0c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x12DE08u, 0x12DE10u)) {
        return;
    }
    ctx->pc = 0x12DE10u;
label_12de10:
    // 0x12de10: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_12de14:
    if (ctx->pc == 0x12DE14u) {
        ctx->pc = 0x12DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE10u;
        // 0x12de14: 0xe6000130  swc1        $f0, 0x130($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DE18u;
        goto label_12de18;
    }
    ctx->pc = 0x12DE10u;
    {
        const bool branch_taken_0x12de10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE10u;
        // 0x12de14: 0xe6000130  swc1        $f0, 0x130($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de10) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DE18u;
label_12de18:
    // 0x12de18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12de18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12de1c:
    // 0x12de1c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12de1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12de20:
    // 0x12de20: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_12de24:
    if (ctx->pc == 0x12DE24u) {
        ctx->pc = 0x12DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE20u;
        // 0x12de24: 0xe62019a8  swc1        $f0, 0x19A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6568), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DE28u;
        goto label_12de28;
    }
    ctx->pc = 0x12DE20u;
    {
        const bool branch_taken_0x12de20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE20u;
        // 0x12de24: 0xe62019a8  swc1        $f0, 0x19A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de20) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DE28u;
label_12de28:
    // 0x12de28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12de28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12de2c:
    // 0x12de2c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12de2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12de30:
    // 0x12de30: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_12de34:
    if (ctx->pc == 0x12DE34u) {
        ctx->pc = 0x12DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE30u;
        // 0x12de34: 0xe62019ac  swc1        $f0, 0x19AC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6572), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DE38u;
        goto label_12de38;
    }
    ctx->pc = 0x12DE30u;
    {
        const bool branch_taken_0x12de30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE30u;
        // 0x12de34: 0xe62019ac  swc1        $f0, 0x19AC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de30) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DE38u;
label_12de38:
    // 0x12de38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12de38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12de3c:
    // 0x12de3c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12de3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12de40:
    // 0x12de40: 0x1000009d  b           . + 4 + (0x9D << 2)
label_12de44:
    if (ctx->pc == 0x12DE44u) {
        ctx->pc = 0x12DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE40u;
        // 0x12de44: 0xe62019b0  swc1        $f0, 0x19B0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6576), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DE48u;
        goto label_12de48;
    }
    ctx->pc = 0x12DE40u;
    {
        const bool branch_taken_0x12de40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE40u;
        // 0x12de44: 0xe62019b0  swc1        $f0, 0x19B0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6576), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de40) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DE48u;
label_12de48:
    // 0x12de48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12de48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12de4c:
    // 0x12de4c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12de4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12de50:
    // 0x12de50: 0x10000099  b           . + 4 + (0x99 << 2)
label_12de54:
    if (ctx->pc == 0x12DE54u) {
        ctx->pc = 0x12DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE50u;
        // 0x12de54: 0xe62019b4  swc1        $f0, 0x19B4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6580), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DE58u;
        goto label_12de58;
    }
    ctx->pc = 0x12DE50u;
    {
        const bool branch_taken_0x12de50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE50u;
        // 0x12de54: 0xe62019b4  swc1        $f0, 0x19B4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6580), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de50) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DE58u;
label_12de58:
    // 0x12de58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12de58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12de5c:
    // 0x12de5c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12de5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12de60:
    // 0x12de60: 0x10000095  b           . + 4 + (0x95 << 2)
label_12de64:
    if (ctx->pc == 0x12DE64u) {
        ctx->pc = 0x12DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE60u;
        // 0x12de64: 0xe62019b8  swc1        $f0, 0x19B8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6584), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DE68u;
        goto label_12de68;
    }
    ctx->pc = 0x12DE60u;
    {
        const bool branch_taken_0x12de60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE60u;
        // 0x12de64: 0xe62019b8  swc1        $f0, 0x19B8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6584), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de60) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DE68u;
label_12de68:
    // 0x12de68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12de68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12de6c:
    // 0x12de6c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12de6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12de70:
    // 0x12de70: 0x10000091  b           . + 4 + (0x91 << 2)
label_12de74:
    if (ctx->pc == 0x12DE74u) {
        ctx->pc = 0x12DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE70u;
        // 0x12de74: 0xe62019bc  swc1        $f0, 0x19BC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DE78u;
        goto label_12de78;
    }
    ctx->pc = 0x12DE70u;
    {
        const bool branch_taken_0x12de70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE70u;
        // 0x12de74: 0xe62019bc  swc1        $f0, 0x19BC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de70) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DE78u;
label_12de78:
    // 0x12de78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12de7c:
    // 0x12de7c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12de7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12de80:
    // 0x12de80: 0x1000008d  b           . + 4 + (0x8D << 2)
label_12de84:
    if (ctx->pc == 0x12DE84u) {
        ctx->pc = 0x12DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE80u;
        // 0x12de84: 0xe62019c0  swc1        $f0, 0x19C0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6592), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DE88u;
        goto label_12de88;
    }
    ctx->pc = 0x12DE80u;
    {
        const bool branch_taken_0x12de80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE80u;
        // 0x12de84: 0xe62019c0  swc1        $f0, 0x19C0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de80) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DE88u;
label_12de88:
    // 0x12de88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12de8c:
    // 0x12de8c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12de8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12de90:
    // 0x12de90: 0x10000089  b           . + 4 + (0x89 << 2)
label_12de94:
    if (ctx->pc == 0x12DE94u) {
        ctx->pc = 0x12DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE90u;
        // 0x12de94: 0xe6201a08  swc1        $f0, 0x1A08($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6664), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DE98u;
        goto label_12de98;
    }
    ctx->pc = 0x12DE90u;
    {
        const bool branch_taken_0x12de90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE90u;
        // 0x12de94: 0xe6201a08  swc1        $f0, 0x1A08($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6664), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de90) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DE98u;
label_12de98:
    // 0x12de98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12de9c:
    // 0x12de9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12de9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dea0:
    // 0x12dea0: 0x10000085  b           . + 4 + (0x85 << 2)
label_12dea4:
    if (ctx->pc == 0x12DEA4u) {
        ctx->pc = 0x12DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEA0u;
        // 0x12dea4: 0xe6201a0c  swc1        $f0, 0x1A0C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6668), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DEA8u;
        goto label_12dea8;
    }
    ctx->pc = 0x12DEA0u;
    {
        const bool branch_taken_0x12dea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEA0u;
        // 0x12dea4: 0xe6201a0c  swc1        $f0, 0x1A0C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6668), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dea0) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DEA8u;
label_12dea8:
    // 0x12dea8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12deac:
    // 0x12deac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12deacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12deb0:
    // 0x12deb0: 0x10000081  b           . + 4 + (0x81 << 2)
label_12deb4:
    if (ctx->pc == 0x12DEB4u) {
        ctx->pc = 0x12DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEB0u;
        // 0x12deb4: 0xe6201a10  swc1        $f0, 0x1A10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6672), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DEB8u;
        goto label_12deb8;
    }
    ctx->pc = 0x12DEB0u;
    {
        const bool branch_taken_0x12deb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEB0u;
        // 0x12deb4: 0xe6201a10  swc1        $f0, 0x1A10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6672), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12deb0) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DEB8u;
label_12deb8:
    // 0x12deb8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12debc:
    // 0x12debc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12debcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dec0:
    // 0x12dec0: 0x1000007d  b           . + 4 + (0x7D << 2)
label_12dec4:
    if (ctx->pc == 0x12DEC4u) {
        ctx->pc = 0x12DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEC0u;
        // 0x12dec4: 0xe6201a14  swc1        $f0, 0x1A14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6676), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DEC8u;
        goto label_12dec8;
    }
    ctx->pc = 0x12DEC0u;
    {
        const bool branch_taken_0x12dec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEC0u;
        // 0x12dec4: 0xe6201a14  swc1        $f0, 0x1A14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6676), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dec0) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DEC8u;
label_12dec8:
    // 0x12dec8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12decc:
    // 0x12decc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12deccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ded0:
    // 0x12ded0: 0x10000079  b           . + 4 + (0x79 << 2)
label_12ded4:
    if (ctx->pc == 0x12DED4u) {
        ctx->pc = 0x12DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DED0u;
        // 0x12ded4: 0xe6201a18  swc1        $f0, 0x1A18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6680), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DED8u;
        goto label_12ded8;
    }
    ctx->pc = 0x12DED0u;
    {
        const bool branch_taken_0x12ded0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DED0u;
        // 0x12ded4: 0xe6201a18  swc1        $f0, 0x1A18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6680), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ded0) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DED8u;
label_12ded8:
    // 0x12ded8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dedc:
    // 0x12dedc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dee0:
    // 0x12dee0: 0x10000075  b           . + 4 + (0x75 << 2)
label_12dee4:
    if (ctx->pc == 0x12DEE4u) {
        ctx->pc = 0x12DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEE0u;
        // 0x12dee4: 0xe6201a1c  swc1        $f0, 0x1A1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6684), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DEE8u;
        goto label_12dee8;
    }
    ctx->pc = 0x12DEE0u;
    {
        const bool branch_taken_0x12dee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEE0u;
        // 0x12dee4: 0xe6201a1c  swc1        $f0, 0x1A1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6684), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dee0) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DEE8u;
label_12dee8:
    // 0x12dee8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12deec:
    // 0x12deec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12deecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12def0:
    // 0x12def0: 0x10000071  b           . + 4 + (0x71 << 2)
label_12def4:
    if (ctx->pc == 0x12DEF4u) {
        ctx->pc = 0x12DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEF0u;
        // 0x12def4: 0xe6201a20  swc1        $f0, 0x1A20($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6688), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DEF8u;
        goto label_12def8;
    }
    ctx->pc = 0x12DEF0u;
    {
        const bool branch_taken_0x12def0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEF0u;
        // 0x12def4: 0xe6201a20  swc1        $f0, 0x1A20($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6688), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12def0) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DEF8u;
label_12def8:
    // 0x12def8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12def8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12defc:
    // 0x12defc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12defcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12df00:
    // 0x12df00: 0xe6201abc  swc1        $f0, 0x1ABC($s1)
    ctx->pc = 0x12df00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6844), bits); }
label_12df04:
    // 0x12df04: 0x1000006c  b           . + 4 + (0x6C << 2)
label_12df08:
    if (ctx->pc == 0x12DF08u) {
        ctx->pc = 0x12DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF04u;
        // 0x12df08: 0xe6201ac0  swc1        $f0, 0x1AC0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6848), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF0Cu;
        goto label_12df0c;
    }
    ctx->pc = 0x12DF04u;
    {
        const bool branch_taken_0x12df04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF04u;
        // 0x12df08: 0xe6201ac0  swc1        $f0, 0x1AC0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6848), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df04) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DF0Cu;
label_12df0c:
    // 0x12df0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12df10:
    // 0x12df10: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12df10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12df14:
    // 0x12df14: 0x10000068  b           . + 4 + (0x68 << 2)
label_12df18:
    if (ctx->pc == 0x12DF18u) {
        ctx->pc = 0x12DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF14u;
        // 0x12df18: 0xe6201ad0  swc1        $f0, 0x1AD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6864), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF1Cu;
        goto label_12df1c;
    }
    ctx->pc = 0x12DF14u;
    {
        const bool branch_taken_0x12df14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF14u;
        // 0x12df18: 0xe6201ad0  swc1        $f0, 0x1AD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6864), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df14) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DF1Cu;
label_12df1c:
    // 0x12df1c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12df20:
    // 0x12df20: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12df20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12df24:
    // 0x12df24: 0x10000064  b           . + 4 + (0x64 << 2)
label_12df28:
    if (ctx->pc == 0x12DF28u) {
        ctx->pc = 0x12DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF24u;
        // 0x12df28: 0xe6201ad4  swc1        $f0, 0x1AD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6868), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF2Cu;
        goto label_12df2c;
    }
    ctx->pc = 0x12DF24u;
    {
        const bool branch_taken_0x12df24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF24u;
        // 0x12df28: 0xe6201ad4  swc1        $f0, 0x1AD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6868), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df24) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DF2Cu;
label_12df2c:
    // 0x12df2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12df30:
    // 0x12df30: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12df34:
    // 0x12df34: 0x10000060  b           . + 4 + (0x60 << 2)
label_12df38:
    if (ctx->pc == 0x12DF38u) {
        ctx->pc = 0x12DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF34u;
        // 0x12df38: 0xe6201ad8  swc1        $f0, 0x1AD8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6872), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF3Cu;
        goto label_12df3c;
    }
    ctx->pc = 0x12DF34u;
    {
        const bool branch_taken_0x12df34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF34u;
        // 0x12df38: 0xe6201ad8  swc1        $f0, 0x1AD8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6872), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df34) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DF3Cu;
label_12df3c:
    // 0x12df3c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12df40:
    // 0x12df40: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12df40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12df44:
    // 0x12df44: 0x1000005c  b           . + 4 + (0x5C << 2)
label_12df48:
    if (ctx->pc == 0x12DF48u) {
        ctx->pc = 0x12DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF44u;
        // 0x12df48: 0xe6201adc  swc1        $f0, 0x1ADC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6876), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF4Cu;
        goto label_12df4c;
    }
    ctx->pc = 0x12DF44u;
    {
        const bool branch_taken_0x12df44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF44u;
        // 0x12df48: 0xe6201adc  swc1        $f0, 0x1ADC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6876), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df44) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DF4Cu;
label_12df4c:
    // 0x12df4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12df50:
    // 0x12df50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12df50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12df54:
    // 0x12df54: 0x10000058  b           . + 4 + (0x58 << 2)
label_12df58:
    if (ctx->pc == 0x12DF58u) {
        ctx->pc = 0x12DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF54u;
        // 0x12df58: 0xe6201ac4  swc1        $f0, 0x1AC4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6852), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF5Cu;
        goto label_12df5c;
    }
    ctx->pc = 0x12DF54u;
    {
        const bool branch_taken_0x12df54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF54u;
        // 0x12df58: 0xe6201ac4  swc1        $f0, 0x1AC4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6852), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df54) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DF5Cu;
label_12df5c:
    // 0x12df5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12df60:
    // 0x12df60: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12df64:
    // 0x12df64: 0x10000054  b           . + 4 + (0x54 << 2)
label_12df68:
    if (ctx->pc == 0x12DF68u) {
        ctx->pc = 0x12DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF64u;
        // 0x12df68: 0xe6201ac8  swc1        $f0, 0x1AC8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6856), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF6Cu;
        goto label_12df6c;
    }
    ctx->pc = 0x12DF64u;
    {
        const bool branch_taken_0x12df64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF64u;
        // 0x12df68: 0xe6201ac8  swc1        $f0, 0x1AC8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6856), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df64) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DF6Cu;
label_12df6c:
    // 0x12df6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12df6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12df70:
    // 0x12df70: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12df70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12df74:
    // 0x12df74: 0x10000050  b           . + 4 + (0x50 << 2)
label_12df78:
    if (ctx->pc == 0x12DF78u) {
        ctx->pc = 0x12DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF74u;
        // 0x12df78: 0xe6201ae0  swc1        $f0, 0x1AE0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6880), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF7Cu;
        goto label_12df7c;
    }
    ctx->pc = 0x12DF74u;
    {
        const bool branch_taken_0x12df74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF74u;
        // 0x12df78: 0xe6201ae0  swc1        $f0, 0x1AE0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6880), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df74) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DF7Cu;
label_12df7c:
    // 0x12df7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12df80:
    // 0x12df80: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12df80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12df84:
    // 0x12df84: 0x1000004c  b           . + 4 + (0x4C << 2)
label_12df88:
    if (ctx->pc == 0x12DF88u) {
        ctx->pc = 0x12DF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF84u;
        // 0x12df88: 0xe6201ae4  swc1        $f0, 0x1AE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6884), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF8Cu;
        goto label_12df8c;
    }
    ctx->pc = 0x12DF84u;
    {
        const bool branch_taken_0x12df84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF84u;
        // 0x12df88: 0xe6201ae4  swc1        $f0, 0x1AE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6884), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df84) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DF8Cu;
label_12df8c:
    // 0x12df8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12df90:
    // 0x12df90: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12df90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12df94:
    // 0x12df94: 0x10000048  b           . + 4 + (0x48 << 2)
label_12df98:
    if (ctx->pc == 0x12DF98u) {
        ctx->pc = 0x12DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF94u;
        // 0x12df98: 0xe6201ae8  swc1        $f0, 0x1AE8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6888), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF9Cu;
        goto label_12df9c;
    }
    ctx->pc = 0x12DF94u;
    {
        const bool branch_taken_0x12df94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF94u;
        // 0x12df98: 0xe6201ae8  swc1        $f0, 0x1AE8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6888), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df94) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DF9Cu;
label_12df9c:
    // 0x12df9c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dfa0:
    // 0x12dfa0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dfa4:
    // 0x12dfa4: 0x10000044  b           . + 4 + (0x44 << 2)
label_12dfa8:
    if (ctx->pc == 0x12DFA8u) {
        ctx->pc = 0x12DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFA4u;
        // 0x12dfa8: 0xe6201aec  swc1        $f0, 0x1AEC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6892), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DFACu;
        goto label_12dfac;
    }
    ctx->pc = 0x12DFA4u;
    {
        const bool branch_taken_0x12dfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFA4u;
        // 0x12dfa8: 0xe6201aec  swc1        $f0, 0x1AEC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6892), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dfa4) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DFACu;
label_12dfac:
    // 0x12dfac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dfb0:
    // 0x12dfb0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dfb4:
    // 0x12dfb4: 0x10000040  b           . + 4 + (0x40 << 2)
label_12dfb8:
    if (ctx->pc == 0x12DFB8u) {
        ctx->pc = 0x12DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFB4u;
        // 0x12dfb8: 0xe6201af0  swc1        $f0, 0x1AF0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6896), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DFBCu;
        goto label_12dfbc;
    }
    ctx->pc = 0x12DFB4u;
    {
        const bool branch_taken_0x12dfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFB4u;
        // 0x12dfb8: 0xe6201af0  swc1        $f0, 0x1AF0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6896), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dfb4) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DFBCu;
label_12dfbc:
    // 0x12dfbc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12dfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dfc0:
    // 0x12dfc0: 0x26240310  addiu       $a0, $s1, 0x310
    ctx->pc = 0x12dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
label_12dfc4:
    // 0x12dfc4: 0xc043ce6  jal         func_10F398
label_12dfc8:
    if (ctx->pc == 0x12DFC8u) {
        ctx->pc = 0x12DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFC4u;
        // 0x12dfc8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DFCCu;
        goto label_12dfcc;
    }
    ctx->pc = 0x12DFC4u;
    SET_GPR_U32(ctx, 31, 0x12DFCCu);
    ctx->pc = 0x12DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DFC4u;
    // 0x12dfc8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x12DFC4u, 0x12DFCCu)) {
        return;
    }
    ctx->pc = 0x12DFCCu;
label_12dfcc:
    // 0x12dfcc: 0x1000003a  b           . + 4 + (0x3A << 2)
label_12dfd0:
    if (ctx->pc == 0x12DFD0u) {
        ctx->pc = 0x12DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFCCu;
        // 0x12dfd0: 0xae221af4  sw          $v0, 0x1AF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6900), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DFD4u;
        goto label_12dfd4;
    }
    ctx->pc = 0x12DFCCu;
    {
        const bool branch_taken_0x12dfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFCCu;
        // 0x12dfd0: 0xae221af4  sw          $v0, 0x1AF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6900), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dfcc) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DFD4u;
label_12dfd4:
    // 0x12dfd4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12dfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dfd8:
    // 0x12dfd8: 0x26240310  addiu       $a0, $s1, 0x310
    ctx->pc = 0x12dfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
label_12dfdc:
    // 0x12dfdc: 0xc043ce6  jal         func_10F398
label_12dfe0:
    if (ctx->pc == 0x12DFE0u) {
        ctx->pc = 0x12DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFDCu;
        // 0x12dfe0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DFE4u;
        goto label_12dfe4;
    }
    ctx->pc = 0x12DFDCu;
    SET_GPR_U32(ctx, 31, 0x12DFE4u);
    ctx->pc = 0x12DFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DFDCu;
    // 0x12dfe0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x12DFDCu, 0x12DFE4u)) {
        return;
    }
    ctx->pc = 0x12DFE4u;
label_12dfe4:
    // 0x12dfe4: 0x10000034  b           . + 4 + (0x34 << 2)
label_12dfe8:
    if (ctx->pc == 0x12DFE8u) {
        ctx->pc = 0x12DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFE4u;
        // 0x12dfe8: 0xae221af8  sw          $v0, 0x1AF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6904), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DFECu;
        goto label_12dfec;
    }
    ctx->pc = 0x12DFE4u;
    {
        const bool branch_taken_0x12dfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFE4u;
        // 0x12dfe8: 0xae221af8  sw          $v0, 0x1AF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6904), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dfe4) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DFECu;
label_12dfec:
    // 0x12dfec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dff0:
    // 0x12dff0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dff4:
    // 0x12dff4: 0x10000030  b           . + 4 + (0x30 << 2)
label_12dff8:
    if (ctx->pc == 0x12DFF8u) {
        ctx->pc = 0x12DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFF4u;
        // 0x12dff8: 0xe6201b1c  swc1        $f0, 0x1B1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6940), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DFFCu;
        goto label_12dffc;
    }
    ctx->pc = 0x12DFF4u;
    {
        const bool branch_taken_0x12dff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFF4u;
        // 0x12dff8: 0xe6201b1c  swc1        $f0, 0x1B1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6940), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dff4) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12DFFCu;
label_12dffc:
    // 0x12dffc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e000:
    // 0x12e000: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e004:
    // 0x12e004: 0x1000002c  b           . + 4 + (0x2C << 2)
label_12e008:
    if (ctx->pc == 0x12E008u) {
        ctx->pc = 0x12E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E004u;
        // 0x12e008: 0xe6201b20  swc1        $f0, 0x1B20($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6944), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E00Cu;
        goto label_12e00c;
    }
    ctx->pc = 0x12E004u;
    {
        const bool branch_taken_0x12e004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E004u;
        // 0x12e008: 0xe6201b20  swc1        $f0, 0x1B20($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6944), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e004) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12E00Cu;
label_12e00c:
    // 0x12e00c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e010:
    // 0x12e010: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e014:
    // 0x12e014: 0x10000028  b           . + 4 + (0x28 << 2)
label_12e018:
    if (ctx->pc == 0x12E018u) {
        ctx->pc = 0x12E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E014u;
        // 0x12e018: 0xe6201b24  swc1        $f0, 0x1B24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6948), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E01Cu;
        goto label_12e01c;
    }
    ctx->pc = 0x12E014u;
    {
        const bool branch_taken_0x12e014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E014u;
        // 0x12e018: 0xe6201b24  swc1        $f0, 0x1B24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e014) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12E01Cu;
label_12e01c:
    // 0x12e01c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e020:
    // 0x12e020: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e024:
    // 0x12e024: 0x10000024  b           . + 4 + (0x24 << 2)
label_12e028:
    if (ctx->pc == 0x12E028u) {
        ctx->pc = 0x12E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E024u;
        // 0x12e028: 0xe6201b0c  swc1        $f0, 0x1B0C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6924), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E02Cu;
        goto label_12e02c;
    }
    ctx->pc = 0x12E024u;
    {
        const bool branch_taken_0x12e024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E024u;
        // 0x12e028: 0xe6201b0c  swc1        $f0, 0x1B0C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6924), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e024) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12E02Cu;
label_12e02c:
    // 0x12e02c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e030:
    // 0x12e030: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e034:
    // 0x12e034: 0x10000020  b           . + 4 + (0x20 << 2)
label_12e038:
    if (ctx->pc == 0x12E038u) {
        ctx->pc = 0x12E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E034u;
        // 0x12e038: 0xe6201b10  swc1        $f0, 0x1B10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6928), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E03Cu;
        goto label_12e03c;
    }
    ctx->pc = 0x12E034u;
    {
        const bool branch_taken_0x12e034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E034u;
        // 0x12e038: 0xe6201b10  swc1        $f0, 0x1B10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6928), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e034) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12E03Cu;
label_12e03c:
    // 0x12e03c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e040:
    // 0x12e040: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e044:
    // 0x12e044: 0x1000001c  b           . + 4 + (0x1C << 2)
label_12e048:
    if (ctx->pc == 0x12E048u) {
        ctx->pc = 0x12E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E044u;
        // 0x12e048: 0xe6201b14  swc1        $f0, 0x1B14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6932), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E04Cu;
        goto label_12e04c;
    }
    ctx->pc = 0x12E044u;
    {
        const bool branch_taken_0x12e044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E044u;
        // 0x12e048: 0xe6201b14  swc1        $f0, 0x1B14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6932), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e044) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12E04Cu;
label_12e04c:
    // 0x12e04c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e050:
    // 0x12e050: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e054:
    // 0x12e054: 0x10000018  b           . + 4 + (0x18 << 2)
label_12e058:
    if (ctx->pc == 0x12E058u) {
        ctx->pc = 0x12E058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E054u;
        // 0x12e058: 0xe6201b18  swc1        $f0, 0x1B18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6936), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E05Cu;
        goto label_12e05c;
    }
    ctx->pc = 0x12E054u;
    {
        const bool branch_taken_0x12e054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E054u;
        // 0x12e058: 0xe6201b18  swc1        $f0, 0x1B18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6936), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e054) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12E05Cu;
label_12e05c:
    // 0x12e05c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e060:
    // 0x12e060: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e064:
    // 0x12e064: 0x10000014  b           . + 4 + (0x14 << 2)
label_12e068:
    if (ctx->pc == 0x12E068u) {
        ctx->pc = 0x12E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E064u;
        // 0x12e068: 0xe6201954  swc1        $f0, 0x1954($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6484), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E06Cu;
        goto label_12e06c;
    }
    ctx->pc = 0x12E064u;
    {
        const bool branch_taken_0x12e064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E064u;
        // 0x12e068: 0xe6201954  swc1        $f0, 0x1954($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6484), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e064) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12E06Cu;
label_12e06c:
    // 0x12e06c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e070:
    // 0x12e070: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e074:
    // 0x12e074: 0x10000010  b           . + 4 + (0x10 << 2)
label_12e078:
    if (ctx->pc == 0x12E078u) {
        ctx->pc = 0x12E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E074u;
        // 0x12e078: 0xe6201bd0  swc1        $f0, 0x1BD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E07Cu;
        goto label_12e07c;
    }
    ctx->pc = 0x12E074u;
    {
        const bool branch_taken_0x12e074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E074u;
        // 0x12e078: 0xe6201bd0  swc1        $f0, 0x1BD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e074) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12E07Cu;
label_12e07c:
    // 0x12e07c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e080:
    // 0x12e080: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e084:
    // 0x12e084: 0x1000000c  b           . + 4 + (0xC << 2)
label_12e088:
    if (ctx->pc == 0x12E088u) {
        ctx->pc = 0x12E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E084u;
        // 0x12e088: 0xe6201bd4  swc1        $f0, 0x1BD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7124), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E08Cu;
        goto label_12e08c;
    }
    ctx->pc = 0x12E084u;
    {
        const bool branch_taken_0x12e084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E084u;
        // 0x12e088: 0xe6201bd4  swc1        $f0, 0x1BD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e084) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12E08Cu;
label_12e08c:
    // 0x12e08c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e090:
    // 0x12e090: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e094:
    // 0x12e094: 0x10000008  b           . + 4 + (0x8 << 2)
label_12e098:
    if (ctx->pc == 0x12E098u) {
        ctx->pc = 0x12E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E094u;
        // 0x12e098: 0xe6201bd8  swc1        $f0, 0x1BD8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E09Cu;
        goto label_12e09c;
    }
    ctx->pc = 0x12E094u;
    {
        const bool branch_taken_0x12e094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E094u;
        // 0x12e098: 0xe6201bd8  swc1        $f0, 0x1BD8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e094) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12E09Cu;
label_12e09c:
    // 0x12e09c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e0a0:
    // 0x12e0a0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e0a4:
    // 0x12e0a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_12e0a8:
    if (ctx->pc == 0x12E0A8u) {
        ctx->pc = 0x12E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0A4u;
        // 0x12e0a8: 0xe6201bdc  swc1        $f0, 0x1BDC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E0ACu;
        goto label_12e0ac;
    }
    ctx->pc = 0x12E0A4u;
    {
        const bool branch_taken_0x12e0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0A4u;
        // 0x12e0a8: 0xe6201bdc  swc1        $f0, 0x1BDC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0a4) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12E0ACu;
label_12e0ac:
    // 0x12e0ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e0b0:
    // 0x12e0b0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e0b4:
    // 0x12e0b4: 0xe6201be0  swc1        $f0, 0x1BE0($s1)
    ctx->pc = 0x12e0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7136), bits); }
label_12e0b8:
    // 0x12e0b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e0bc:
    // 0x12e0bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12e0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12e0c0:
    // 0x12e0c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12e0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12e0c4:
    // 0x12e0c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12e0c8:
    // 0x12e0c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12e0cc:
    // 0x12e0cc: 0xc07f0c8  jal         func_1FC320
label_12e0d0:
    if (ctx->pc == 0x12E0D0u) {
        ctx->pc = 0x12E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0CCu;
        // 0x12e0d0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E0D4u;
        goto label_12e0d4;
    }
    ctx->pc = 0x12E0CCu;
    SET_GPR_U32(ctx, 31, 0x12E0D4u);
    ctx->pc = 0x12E0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E0CCu;
    // 0x12e0d0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x12E0CCu, 0x12E0D4u)) {
        return;
    }
    ctx->pc = 0x12E0D4u;
label_12e0d4:
    // 0x12e0d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e0d8:
    // 0x12e0d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12e0dc:
    // 0x12e0dc: 0x5460fe56  bnel        $v1, $zero, . + 4 + (-0x1AA << 2)
label_12e0e0:
    if (ctx->pc == 0x12E0E0u) {
        ctx->pc = 0x12E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0DCu;
        // 0x12e0e0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E0E4u;
        goto label_12e0e4;
    }
    ctx->pc = 0x12E0DCu;
    {
        const bool branch_taken_0x12e0dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e0dc) {
            ctx->pc = 0x12E0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E0DCu;
            // 0x12e0e0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12da38;
        }
    }
    ctx->pc = 0x12E0E4u;
label_12e0e4:
    // 0x12e0e4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x12e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_12e0e8:
    // 0x12e0e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12e0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12e0ec:
    // 0x12e0ec: 0x8c464660  lw          $a2, 0x4660($v0)
    ctx->pc = 0x12e0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18016)));
label_12e0f0:
    // 0x12e0f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12e0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12e0f4:
    // 0x12e0f4: 0xc07f1c0  jal         func_1FC700
label_12e0f8:
    if (ctx->pc == 0x12E0F8u) {
        ctx->pc = 0x12E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0F4u;
        // 0x12e0f8: 0x26320004  addiu       $s2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E0FCu;
        goto label_12e0fc;
    }
    ctx->pc = 0x12E0F4u;
    SET_GPR_U32(ctx, 31, 0x12E0FCu);
    ctx->pc = 0x12E0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E0F4u;
    // 0x12e0f8: 0x26320004  addiu       $s2, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x12E0F4u, 0x12E0FCu)) {
        return;
    }
    ctx->pc = 0x12E0FCu;
label_12e0fc:
    // 0x12e0fc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e100:
    // 0x12e100: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12e100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12e104:
    // 0x12e104: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_12e108:
    if (ctx->pc == 0x12E108u) {
        ctx->pc = 0x12E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E104u;
        // 0x12e108: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E10Cu;
        goto label_12e10c;
    }
    ctx->pc = 0x12E104u;
    {
        const bool branch_taken_0x12e104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E104u;
        // 0x12e108: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e104) {
            ctx->pc = 0x12E158u;
            goto label_12e158;
        }
    }
    ctx->pc = 0x12E10Cu;
label_12e10c:
    // 0x12e10c: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x12e10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_12e110:
    // 0x12e110: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12e110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e114:
    // 0x12e114: 0x0  nop
    ctx->pc = 0x12e114u;
    // NOP
label_12e118:
    // 0x12e118: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x12e118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_12e11c:
    // 0x12e11c: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
label_12e120:
    if (ctx->pc == 0x12E120u) {
        ctx->pc = 0x12E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E11Cu;
        // 0x12e120: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E124u;
        goto label_12e124;
    }
    ctx->pc = 0x12E11Cu;
    {
        const bool branch_taken_0x12e11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x12E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E11Cu;
        // 0x12e120: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e11c) {
            ctx->pc = 0x12E130u;
            goto label_12e130;
        }
    }
    ctx->pc = 0x12E124u;
label_12e124:
    // 0x12e124: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x12e124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e128:
    // 0x12e128: 0xe6200bd8  swc1        $f0, 0xBD8($s1)
    ctx->pc = 0x12e128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3032), bits); }
label_12e12c:
    // 0x12e12c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e130:
    // 0x12e130: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12e130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12e134:
    // 0x12e134: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12e134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12e138:
    // 0x12e138: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12e138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12e13c:
    // 0x12e13c: 0xc07f0c8  jal         func_1FC320
label_12e140:
    if (ctx->pc == 0x12E140u) {
        ctx->pc = 0x12E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E13Cu;
        // 0x12e140: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E144u;
        goto label_12e144;
    }
    ctx->pc = 0x12E13Cu;
    SET_GPR_U32(ctx, 31, 0x12E144u);
    ctx->pc = 0x12E140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E13Cu;
    // 0x12e140: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x12E13Cu, 0x12E144u)) {
        return;
    }
    ctx->pc = 0x12E144u;
label_12e144:
    // 0x12e144: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e148:
    // 0x12e148: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12e148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12e14c:
    // 0x12e14c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_12e150:
    if (ctx->pc == 0x12E150u) {
        ctx->pc = 0x12E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E14Cu;
        // 0x12e150: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E154u;
        goto label_12e154;
    }
    ctx->pc = 0x12E14Cu;
    {
        const bool branch_taken_0x12e14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E14Cu;
        // 0x12e150: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e14c) {
            ctx->pc = 0x12E118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e118;
        }
    }
    ctx->pc = 0x12E154u;
label_12e154:
    // 0x12e154: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x12e154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_12e158:
    // 0x12e158: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12e158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12e15c:
    // 0x12e15c: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x12e15cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
label_12e160:
    // 0x12e160: 0xc07f1c0  jal         func_1FC700
label_12e164:
    if (ctx->pc == 0x12E164u) {
        ctx->pc = 0x12E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E160u;
        // 0x12e164: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E168u;
        goto label_12e168;
    }
    ctx->pc = 0x12E160u;
    SET_GPR_U32(ctx, 31, 0x12E168u);
    ctx->pc = 0x12E164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E160u;
    // 0x12e164: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x12E160u, 0x12E168u)) {
        return;
    }
    ctx->pc = 0x12E168u;
label_12e168:
    // 0x12e168: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12e168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e16c:
    // 0x12e16c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12e170:
    // 0x12e170: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_12e174:
    if (ctx->pc == 0x12E174u) {
        ctx->pc = 0x12E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E170u;
        // 0x12e174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E178u;
        goto label_12e178;
    }
    ctx->pc = 0x12E170u;
    {
        const bool branch_taken_0x12e170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E170u;
        // 0x12e174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e170) {
            ctx->pc = 0x12E1E8u;
            goto label_12e1e8;
        }
    }
    ctx->pc = 0x12E178u;
label_12e178:
    // 0x12e178: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12e178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e17c:
    // 0x12e17c: 0x0  nop
    ctx->pc = 0x12e17cu;
    // NOP
label_12e180:
    // 0x12e180: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x12e180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_12e184:
    // 0x12e184: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
label_12e188:
    if (ctx->pc == 0x12E188u) {
        ctx->pc = 0x12E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E184u;
        // 0x12e188: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E18Cu;
        goto label_12e18c;
    }
    ctx->pc = 0x12E184u;
    {
        const bool branch_taken_0x12e184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e184) {
            ctx->pc = 0x12E188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E184u;
            // 0x12e188: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E1BCu;
            goto label_12e1bc;
        }
    }
    ctx->pc = 0x12E18Cu;
label_12e18c:
    // 0x12e18c: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x12e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_12e190:
    // 0x12e190: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x12e190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_12e194:
    // 0x12e194: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x12e194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12e198:
    // 0x12e198: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_12e19c:
    if (ctx->pc == 0x12E19Cu) {
        ctx->pc = 0x12E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E198u;
        // 0x12e19c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E1A0u;
        goto label_12e1a0;
    }
    ctx->pc = 0x12E198u;
    {
        const bool branch_taken_0x12e198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E198u;
        // 0x12e19c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e198) {
            ctx->pc = 0x12E1A4u;
            goto label_12e1a4;
        }
    }
    ctx->pc = 0x12E1A0u;
label_12e1a0:
    // 0x12e1a0: 0x8e2600d8  lw          $a2, 0xD8($s1)
    ctx->pc = 0x12e1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_12e1a4:
    // 0x12e1a4: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x12e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_12e1a8:
    // 0x12e1a8: 0x844402b8  lh          $a0, 0x2B8($v0)
    ctx->pc = 0x12e1a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 696)));
label_12e1ac:
    // 0x12e1ac: 0x8c4302bc  lw          $v1, 0x2BC($v0)
    ctx->pc = 0x12e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 700)));
label_12e1b0:
    // 0x12e1b0: 0x60f809  jalr        $v1
label_12e1b4:
    if (ctx->pc == 0x12E1B4u) {
        ctx->pc = 0x12E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1B0u;
        // 0x12e1b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E1B8u;
        goto label_12e1b8;
    }
    ctx->pc = 0x12E1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12E1B8u);
        ctx->pc = 0x12E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1B0u;
        // 0x12e1b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E1B0u, 0x12E1B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12E1B8u;
label_12e1b8:
    // 0x12e1b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e1bc:
    // 0x12e1bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12e1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12e1c0:
    // 0x12e1c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12e1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12e1c4:
    // 0x12e1c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12e1c8:
    // 0x12e1c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12e1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12e1cc:
    // 0x12e1cc: 0xc07f0c8  jal         func_1FC320
label_12e1d0:
    if (ctx->pc == 0x12E1D0u) {
        ctx->pc = 0x12E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1CCu;
        // 0x12e1d0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E1D4u;
        goto label_12e1d4;
    }
    ctx->pc = 0x12E1CCu;
    SET_GPR_U32(ctx, 31, 0x12E1D4u);
    ctx->pc = 0x12E1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1CCu;
    // 0x12e1d0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x12E1CCu, 0x12E1D4u)) {
        return;
    }
    ctx->pc = 0x12E1D4u;
label_12e1d4:
    // 0x12e1d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e1d8:
    // 0x12e1d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12e1dc:
    // 0x12e1dc: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_12e1e0:
    if (ctx->pc == 0x12E1E0u) {
        ctx->pc = 0x12E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1DCu;
        // 0x12e1e0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E1E4u;
        goto label_12e1e4;
    }
    ctx->pc = 0x12E1DCu;
    {
        const bool branch_taken_0x12e1dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1DCu;
        // 0x12e1e0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1dc) {
            ctx->pc = 0x12E180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e180;
        }
    }
    ctx->pc = 0x12E1E4u;
label_12e1e4:
    // 0x12e1e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12e1e8:
    // 0x12e1e8: 0xc04df54  jal         func_137D50
label_12e1ec:
    if (ctx->pc == 0x12E1ECu) {
        ctx->pc = 0x12E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1E8u;
        // 0x12e1ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E1F0u;
        goto label_12e1f0;
    }
    ctx->pc = 0x12E1E8u;
    SET_GPR_U32(ctx, 31, 0x12E1F0u);
    ctx->pc = 0x12E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1E8u;
    // 0x12e1ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137D50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137D50u, 0x12E1E8u, 0x12E1F0u)) {
        return;
    }
    ctx->pc = 0x12E1F0u;
label_12e1f0:
    // 0x12e1f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12e1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12e1f4:
    // 0x12e1f4: 0xc04e2de  jal         func_138B78
label_12e1f8:
    if (ctx->pc == 0x12E1F8u) {
        ctx->pc = 0x12E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1F4u;
        // 0x12e1f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E1FCu;
        goto label_12e1fc;
    }
    ctx->pc = 0x12E1F4u;
    SET_GPR_U32(ctx, 31, 0x12E1FCu);
    ctx->pc = 0x12E1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1F4u;
    // 0x12e1f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x138B78u, 0x12E1F4u, 0x12E1FCu)) {
        return;
    }
    ctx->pc = 0x12E1FCu;
label_12e1fc:
    // 0x12e1fc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x12e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_12e200:
    // 0x12e200: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12e200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12e204:
    // 0x12e204: 0xc4400130  lwc1        $f0, 0x130($v0)
    ctx->pc = 0x12e204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e208:
    // 0x12e208: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12e208u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e20c:
    // 0x12e20c: 0x0  nop
    ctx->pc = 0x12e20cu;
    // NOP
label_12e210:
    // 0x12e210: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_12e214:
    if (ctx->pc == 0x12E214u) {
        ctx->pc = 0x12E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E210u;
        // 0x12e214: 0xc6201ac0  lwc1        $f0, 0x1AC0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E218u;
        goto label_12e218;
    }
    ctx->pc = 0x12E210u;
    {
        const bool branch_taken_0x12e210 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12e210) {
            ctx->pc = 0x12E214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E210u;
            // 0x12e214: 0xc6201ac0  lwc1        $f0, 0x1AC0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E218u;
            goto label_12e218;
        }
    }
    ctx->pc = 0x12E218u;
label_12e218:
    // 0x12e218: 0xe6201abc  swc1        $f0, 0x1ABC($s1)
    ctx->pc = 0x12e218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6844), bits); }
label_12e21c:
    // 0x12e21c: 0xe6201ac0  swc1        $f0, 0x1AC0($s1)
    ctx->pc = 0x12e21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6848), bits); }
label_12e220:
    // 0x12e220: 0xc4400134  lwc1        $f0, 0x134($v0)
    ctx->pc = 0x12e220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e224:
    // 0x12e224: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12e224u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e228:
    // 0x12e228: 0x0  nop
    ctx->pc = 0x12e228u;
    // NOP
label_12e22c:
    // 0x12e22c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_12e230:
    if (ctx->pc == 0x12E230u) {
        ctx->pc = 0x12E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E22Cu;
        // 0x12e230: 0xc6201ad0  lwc1        $f0, 0x1AD0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E234u;
        goto label_12e234;
    }
    ctx->pc = 0x12E22Cu;
    {
        const bool branch_taken_0x12e22c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12e22c) {
            ctx->pc = 0x12E230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E22Cu;
            // 0x12e230: 0xc6201ad0  lwc1        $f0, 0x1AD0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E234u;
            goto label_12e234;
        }
    }
    ctx->pc = 0x12E234u;
label_12e234:
    // 0x12e234: 0xe6201ad0  swc1        $f0, 0x1AD0($s1)
    ctx->pc = 0x12e234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6864), bits); }
label_12e238:
    // 0x12e238: 0xc4400138  lwc1        $f0, 0x138($v0)
    ctx->pc = 0x12e238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e23c:
    // 0x12e23c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12e23cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e240:
    // 0x12e240: 0x0  nop
    ctx->pc = 0x12e240u;
    // NOP
label_12e244:
    // 0x12e244: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_12e248:
    if (ctx->pc == 0x12E248u) {
        ctx->pc = 0x12E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E244u;
        // 0x12e248: 0xc6201ad4  lwc1        $f0, 0x1AD4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E24Cu;
        goto label_12e24c;
    }
    ctx->pc = 0x12E244u;
    {
        const bool branch_taken_0x12e244 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12e244) {
            ctx->pc = 0x12E248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E244u;
            // 0x12e248: 0xc6201ad4  lwc1        $f0, 0x1AD4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E24Cu;
            goto label_12e24c;
        }
    }
    ctx->pc = 0x12E24Cu;
label_12e24c:
    // 0x12e24c: 0xe6201ad4  swc1        $f0, 0x1AD4($s1)
    ctx->pc = 0x12e24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6868), bits); }
label_12e250:
    // 0x12e250: 0xc440013c  lwc1        $f0, 0x13C($v0)
    ctx->pc = 0x12e250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e254:
    // 0x12e254: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12e254u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e258:
    // 0x12e258: 0x0  nop
    ctx->pc = 0x12e258u;
    // NOP
label_12e25c:
    // 0x12e25c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_12e260:
    if (ctx->pc == 0x12E260u) {
        ctx->pc = 0x12E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E25Cu;
        // 0x12e260: 0xc6201ac4  lwc1        $f0, 0x1AC4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E264u;
        goto label_12e264;
    }
    ctx->pc = 0x12E25Cu;
    {
        const bool branch_taken_0x12e25c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12e25c) {
            ctx->pc = 0x12E260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E25Cu;
            // 0x12e260: 0xc6201ac4  lwc1        $f0, 0x1AC4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E264u;
            goto label_12e264;
        }
    }
    ctx->pc = 0x12E264u;
label_12e264:
    // 0x12e264: 0xe6201ac4  swc1        $f0, 0x1AC4($s1)
    ctx->pc = 0x12e264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6852), bits); }
label_12e268:
    // 0x12e268: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x12e268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e26c:
    // 0x12e26c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12e26cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e270:
    // 0x12e270: 0x0  nop
    ctx->pc = 0x12e270u;
    // NOP
label_12e274:
    // 0x12e274: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_12e278:
    if (ctx->pc == 0x12E278u) {
        ctx->pc = 0x12E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E274u;
        // 0x12e278: 0xc6201ac8  lwc1        $f0, 0x1AC8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E27Cu;
        goto label_12e27c;
    }
    ctx->pc = 0x12E274u;
    {
        const bool branch_taken_0x12e274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12e274) {
            ctx->pc = 0x12E278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E274u;
            // 0x12e278: 0xc6201ac8  lwc1        $f0, 0x1AC8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E27Cu;
            goto label_12e27c;
        }
    }
    ctx->pc = 0x12E27Cu;
label_12e27c:
    // 0x12e27c: 0xe6201ac8  swc1        $f0, 0x1AC8($s1)
    ctx->pc = 0x12e27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6856), bits); }
label_12e280:
    // 0x12e280: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x12e280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12e284:
    // 0x12e284: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x12e284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12e288:
    // 0x12e288: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12e288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12e28c:
    // 0x12e28c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x12e28cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12e290:
    // 0x12e290: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12e290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12e294:
    // 0x12e294: 0x3e00008  jr          $ra
label_12e298:
    if (ctx->pc == 0x12E298u) {
        ctx->pc = 0x12E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E294u;
        // 0x12e298: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E29Cu;
        goto label_12e29c;
    }
    ctx->pc = 0x12E294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E294u;
        // 0x12e298: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E29Cu;
label_12e29c:
    // 0x12e29c: 0x0  nop
    ctx->pc = 0x12e29cu;
    // NOP
    ctx->pc = 0x12e2a0u;
}
