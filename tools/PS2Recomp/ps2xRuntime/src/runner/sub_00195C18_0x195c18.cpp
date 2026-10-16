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

// Function: sub_00195C18
// Address: 0x195c18 - 0x196470
void sub_00195C18_0x195c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195C18_0x195c18");
#endif

    switch (ctx->pc) {
        case 0x195c18u: goto label_195c18;
        case 0x195c1cu: goto label_195c1c;
        case 0x195c20u: goto label_195c20;
        case 0x195c24u: goto label_195c24;
        case 0x195c28u: goto label_195c28;
        case 0x195c2cu: goto label_195c2c;
        case 0x195c30u: goto label_195c30;
        case 0x195c34u: goto label_195c34;
        case 0x195c38u: goto label_195c38;
        case 0x195c3cu: goto label_195c3c;
        case 0x195c40u: goto label_195c40;
        case 0x195c44u: goto label_195c44;
        case 0x195c48u: goto label_195c48;
        case 0x195c4cu: goto label_195c4c;
        case 0x195c50u: goto label_195c50;
        case 0x195c54u: goto label_195c54;
        case 0x195c58u: goto label_195c58;
        case 0x195c5cu: goto label_195c5c;
        case 0x195c60u: goto label_195c60;
        case 0x195c64u: goto label_195c64;
        case 0x195c68u: goto label_195c68;
        case 0x195c6cu: goto label_195c6c;
        case 0x195c70u: goto label_195c70;
        case 0x195c74u: goto label_195c74;
        case 0x195c78u: goto label_195c78;
        case 0x195c7cu: goto label_195c7c;
        case 0x195c80u: goto label_195c80;
        case 0x195c84u: goto label_195c84;
        case 0x195c88u: goto label_195c88;
        case 0x195c8cu: goto label_195c8c;
        case 0x195c90u: goto label_195c90;
        case 0x195c94u: goto label_195c94;
        case 0x195c98u: goto label_195c98;
        case 0x195c9cu: goto label_195c9c;
        case 0x195ca0u: goto label_195ca0;
        case 0x195ca4u: goto label_195ca4;
        case 0x195ca8u: goto label_195ca8;
        case 0x195cacu: goto label_195cac;
        case 0x195cb0u: goto label_195cb0;
        case 0x195cb4u: goto label_195cb4;
        case 0x195cb8u: goto label_195cb8;
        case 0x195cbcu: goto label_195cbc;
        case 0x195cc0u: goto label_195cc0;
        case 0x195cc4u: goto label_195cc4;
        case 0x195cc8u: goto label_195cc8;
        case 0x195cccu: goto label_195ccc;
        case 0x195cd0u: goto label_195cd0;
        case 0x195cd4u: goto label_195cd4;
        case 0x195cd8u: goto label_195cd8;
        case 0x195cdcu: goto label_195cdc;
        case 0x195ce0u: goto label_195ce0;
        case 0x195ce4u: goto label_195ce4;
        case 0x195ce8u: goto label_195ce8;
        case 0x195cecu: goto label_195cec;
        case 0x195cf0u: goto label_195cf0;
        case 0x195cf4u: goto label_195cf4;
        case 0x195cf8u: goto label_195cf8;
        case 0x195cfcu: goto label_195cfc;
        case 0x195d00u: goto label_195d00;
        case 0x195d04u: goto label_195d04;
        case 0x195d08u: goto label_195d08;
        case 0x195d0cu: goto label_195d0c;
        case 0x195d10u: goto label_195d10;
        case 0x195d14u: goto label_195d14;
        case 0x195d18u: goto label_195d18;
        case 0x195d1cu: goto label_195d1c;
        case 0x195d20u: goto label_195d20;
        case 0x195d24u: goto label_195d24;
        case 0x195d28u: goto label_195d28;
        case 0x195d2cu: goto label_195d2c;
        case 0x195d30u: goto label_195d30;
        case 0x195d34u: goto label_195d34;
        case 0x195d38u: goto label_195d38;
        case 0x195d3cu: goto label_195d3c;
        case 0x195d40u: goto label_195d40;
        case 0x195d44u: goto label_195d44;
        case 0x195d48u: goto label_195d48;
        case 0x195d4cu: goto label_195d4c;
        case 0x195d50u: goto label_195d50;
        case 0x195d54u: goto label_195d54;
        case 0x195d58u: goto label_195d58;
        case 0x195d5cu: goto label_195d5c;
        case 0x195d60u: goto label_195d60;
        case 0x195d64u: goto label_195d64;
        case 0x195d68u: goto label_195d68;
        case 0x195d6cu: goto label_195d6c;
        case 0x195d70u: goto label_195d70;
        case 0x195d74u: goto label_195d74;
        case 0x195d78u: goto label_195d78;
        case 0x195d7cu: goto label_195d7c;
        case 0x195d80u: goto label_195d80;
        case 0x195d84u: goto label_195d84;
        case 0x195d88u: goto label_195d88;
        case 0x195d8cu: goto label_195d8c;
        case 0x195d90u: goto label_195d90;
        case 0x195d94u: goto label_195d94;
        case 0x195d98u: goto label_195d98;
        case 0x195d9cu: goto label_195d9c;
        case 0x195da0u: goto label_195da0;
        case 0x195da4u: goto label_195da4;
        case 0x195da8u: goto label_195da8;
        case 0x195dacu: goto label_195dac;
        case 0x195db0u: goto label_195db0;
        case 0x195db4u: goto label_195db4;
        case 0x195db8u: goto label_195db8;
        case 0x195dbcu: goto label_195dbc;
        case 0x195dc0u: goto label_195dc0;
        case 0x195dc4u: goto label_195dc4;
        case 0x195dc8u: goto label_195dc8;
        case 0x195dccu: goto label_195dcc;
        case 0x195dd0u: goto label_195dd0;
        case 0x195dd4u: goto label_195dd4;
        case 0x195dd8u: goto label_195dd8;
        case 0x195ddcu: goto label_195ddc;
        case 0x195de0u: goto label_195de0;
        case 0x195de4u: goto label_195de4;
        case 0x195de8u: goto label_195de8;
        case 0x195decu: goto label_195dec;
        case 0x195df0u: goto label_195df0;
        case 0x195df4u: goto label_195df4;
        case 0x195df8u: goto label_195df8;
        case 0x195dfcu: goto label_195dfc;
        case 0x195e00u: goto label_195e00;
        case 0x195e04u: goto label_195e04;
        case 0x195e08u: goto label_195e08;
        case 0x195e0cu: goto label_195e0c;
        case 0x195e10u: goto label_195e10;
        case 0x195e14u: goto label_195e14;
        case 0x195e18u: goto label_195e18;
        case 0x195e1cu: goto label_195e1c;
        case 0x195e20u: goto label_195e20;
        case 0x195e24u: goto label_195e24;
        case 0x195e28u: goto label_195e28;
        case 0x195e2cu: goto label_195e2c;
        case 0x195e30u: goto label_195e30;
        case 0x195e34u: goto label_195e34;
        case 0x195e38u: goto label_195e38;
        case 0x195e3cu: goto label_195e3c;
        case 0x195e40u: goto label_195e40;
        case 0x195e44u: goto label_195e44;
        case 0x195e48u: goto label_195e48;
        case 0x195e4cu: goto label_195e4c;
        case 0x195e50u: goto label_195e50;
        case 0x195e54u: goto label_195e54;
        case 0x195e58u: goto label_195e58;
        case 0x195e5cu: goto label_195e5c;
        case 0x195e60u: goto label_195e60;
        case 0x195e64u: goto label_195e64;
        case 0x195e68u: goto label_195e68;
        case 0x195e6cu: goto label_195e6c;
        case 0x195e70u: goto label_195e70;
        case 0x195e74u: goto label_195e74;
        case 0x195e78u: goto label_195e78;
        case 0x195e7cu: goto label_195e7c;
        case 0x195e80u: goto label_195e80;
        case 0x195e84u: goto label_195e84;
        case 0x195e88u: goto label_195e88;
        case 0x195e8cu: goto label_195e8c;
        case 0x195e90u: goto label_195e90;
        case 0x195e94u: goto label_195e94;
        case 0x195e98u: goto label_195e98;
        case 0x195e9cu: goto label_195e9c;
        case 0x195ea0u: goto label_195ea0;
        case 0x195ea4u: goto label_195ea4;
        case 0x195ea8u: goto label_195ea8;
        case 0x195eacu: goto label_195eac;
        case 0x195eb0u: goto label_195eb0;
        case 0x195eb4u: goto label_195eb4;
        case 0x195eb8u: goto label_195eb8;
        case 0x195ebcu: goto label_195ebc;
        case 0x195ec0u: goto label_195ec0;
        case 0x195ec4u: goto label_195ec4;
        case 0x195ec8u: goto label_195ec8;
        case 0x195eccu: goto label_195ecc;
        case 0x195ed0u: goto label_195ed0;
        case 0x195ed4u: goto label_195ed4;
        case 0x195ed8u: goto label_195ed8;
        case 0x195edcu: goto label_195edc;
        case 0x195ee0u: goto label_195ee0;
        case 0x195ee4u: goto label_195ee4;
        case 0x195ee8u: goto label_195ee8;
        case 0x195eecu: goto label_195eec;
        case 0x195ef0u: goto label_195ef0;
        case 0x195ef4u: goto label_195ef4;
        case 0x195ef8u: goto label_195ef8;
        case 0x195efcu: goto label_195efc;
        case 0x195f00u: goto label_195f00;
        case 0x195f04u: goto label_195f04;
        case 0x195f08u: goto label_195f08;
        case 0x195f0cu: goto label_195f0c;
        case 0x195f10u: goto label_195f10;
        case 0x195f14u: goto label_195f14;
        case 0x195f18u: goto label_195f18;
        case 0x195f1cu: goto label_195f1c;
        case 0x195f20u: goto label_195f20;
        case 0x195f24u: goto label_195f24;
        case 0x195f28u: goto label_195f28;
        case 0x195f2cu: goto label_195f2c;
        case 0x195f30u: goto label_195f30;
        case 0x195f34u: goto label_195f34;
        case 0x195f38u: goto label_195f38;
        case 0x195f3cu: goto label_195f3c;
        case 0x195f40u: goto label_195f40;
        case 0x195f44u: goto label_195f44;
        case 0x195f48u: goto label_195f48;
        case 0x195f4cu: goto label_195f4c;
        case 0x195f50u: goto label_195f50;
        case 0x195f54u: goto label_195f54;
        case 0x195f58u: goto label_195f58;
        case 0x195f5cu: goto label_195f5c;
        case 0x195f60u: goto label_195f60;
        case 0x195f64u: goto label_195f64;
        case 0x195f68u: goto label_195f68;
        case 0x195f6cu: goto label_195f6c;
        case 0x195f70u: goto label_195f70;
        case 0x195f74u: goto label_195f74;
        case 0x195f78u: goto label_195f78;
        case 0x195f7cu: goto label_195f7c;
        case 0x195f80u: goto label_195f80;
        case 0x195f84u: goto label_195f84;
        case 0x195f88u: goto label_195f88;
        case 0x195f8cu: goto label_195f8c;
        case 0x195f90u: goto label_195f90;
        case 0x195f94u: goto label_195f94;
        case 0x195f98u: goto label_195f98;
        case 0x195f9cu: goto label_195f9c;
        case 0x195fa0u: goto label_195fa0;
        case 0x195fa4u: goto label_195fa4;
        case 0x195fa8u: goto label_195fa8;
        case 0x195facu: goto label_195fac;
        case 0x195fb0u: goto label_195fb0;
        case 0x195fb4u: goto label_195fb4;
        case 0x195fb8u: goto label_195fb8;
        case 0x195fbcu: goto label_195fbc;
        case 0x195fc0u: goto label_195fc0;
        case 0x195fc4u: goto label_195fc4;
        case 0x195fc8u: goto label_195fc8;
        case 0x195fccu: goto label_195fcc;
        case 0x195fd0u: goto label_195fd0;
        case 0x195fd4u: goto label_195fd4;
        case 0x195fd8u: goto label_195fd8;
        case 0x195fdcu: goto label_195fdc;
        case 0x195fe0u: goto label_195fe0;
        case 0x195fe4u: goto label_195fe4;
        case 0x195fe8u: goto label_195fe8;
        case 0x195fecu: goto label_195fec;
        case 0x195ff0u: goto label_195ff0;
        case 0x195ff4u: goto label_195ff4;
        case 0x195ff8u: goto label_195ff8;
        case 0x195ffcu: goto label_195ffc;
        case 0x196000u: goto label_196000;
        case 0x196004u: goto label_196004;
        case 0x196008u: goto label_196008;
        case 0x19600cu: goto label_19600c;
        case 0x196010u: goto label_196010;
        case 0x196014u: goto label_196014;
        case 0x196018u: goto label_196018;
        case 0x19601cu: goto label_19601c;
        case 0x196020u: goto label_196020;
        case 0x196024u: goto label_196024;
        case 0x196028u: goto label_196028;
        case 0x19602cu: goto label_19602c;
        case 0x196030u: goto label_196030;
        case 0x196034u: goto label_196034;
        case 0x196038u: goto label_196038;
        case 0x19603cu: goto label_19603c;
        case 0x196040u: goto label_196040;
        case 0x196044u: goto label_196044;
        case 0x196048u: goto label_196048;
        case 0x19604cu: goto label_19604c;
        case 0x196050u: goto label_196050;
        case 0x196054u: goto label_196054;
        case 0x196058u: goto label_196058;
        case 0x19605cu: goto label_19605c;
        case 0x196060u: goto label_196060;
        case 0x196064u: goto label_196064;
        case 0x196068u: goto label_196068;
        case 0x19606cu: goto label_19606c;
        case 0x196070u: goto label_196070;
        case 0x196074u: goto label_196074;
        case 0x196078u: goto label_196078;
        case 0x19607cu: goto label_19607c;
        case 0x196080u: goto label_196080;
        case 0x196084u: goto label_196084;
        case 0x196088u: goto label_196088;
        case 0x19608cu: goto label_19608c;
        case 0x196090u: goto label_196090;
        case 0x196094u: goto label_196094;
        case 0x196098u: goto label_196098;
        case 0x19609cu: goto label_19609c;
        case 0x1960a0u: goto label_1960a0;
        case 0x1960a4u: goto label_1960a4;
        case 0x1960a8u: goto label_1960a8;
        case 0x1960acu: goto label_1960ac;
        case 0x1960b0u: goto label_1960b0;
        case 0x1960b4u: goto label_1960b4;
        case 0x1960b8u: goto label_1960b8;
        case 0x1960bcu: goto label_1960bc;
        case 0x1960c0u: goto label_1960c0;
        case 0x1960c4u: goto label_1960c4;
        case 0x1960c8u: goto label_1960c8;
        case 0x1960ccu: goto label_1960cc;
        case 0x1960d0u: goto label_1960d0;
        case 0x1960d4u: goto label_1960d4;
        case 0x1960d8u: goto label_1960d8;
        case 0x1960dcu: goto label_1960dc;
        case 0x1960e0u: goto label_1960e0;
        case 0x1960e4u: goto label_1960e4;
        case 0x1960e8u: goto label_1960e8;
        case 0x1960ecu: goto label_1960ec;
        case 0x1960f0u: goto label_1960f0;
        case 0x1960f4u: goto label_1960f4;
        case 0x1960f8u: goto label_1960f8;
        case 0x1960fcu: goto label_1960fc;
        case 0x196100u: goto label_196100;
        case 0x196104u: goto label_196104;
        case 0x196108u: goto label_196108;
        case 0x19610cu: goto label_19610c;
        case 0x196110u: goto label_196110;
        case 0x196114u: goto label_196114;
        case 0x196118u: goto label_196118;
        case 0x19611cu: goto label_19611c;
        case 0x196120u: goto label_196120;
        case 0x196124u: goto label_196124;
        case 0x196128u: goto label_196128;
        case 0x19612cu: goto label_19612c;
        case 0x196130u: goto label_196130;
        case 0x196134u: goto label_196134;
        case 0x196138u: goto label_196138;
        case 0x19613cu: goto label_19613c;
        case 0x196140u: goto label_196140;
        case 0x196144u: goto label_196144;
        case 0x196148u: goto label_196148;
        case 0x19614cu: goto label_19614c;
        case 0x196150u: goto label_196150;
        case 0x196154u: goto label_196154;
        case 0x196158u: goto label_196158;
        case 0x19615cu: goto label_19615c;
        case 0x196160u: goto label_196160;
        case 0x196164u: goto label_196164;
        case 0x196168u: goto label_196168;
        case 0x19616cu: goto label_19616c;
        case 0x196170u: goto label_196170;
        case 0x196174u: goto label_196174;
        case 0x196178u: goto label_196178;
        case 0x19617cu: goto label_19617c;
        case 0x196180u: goto label_196180;
        case 0x196184u: goto label_196184;
        case 0x196188u: goto label_196188;
        case 0x19618cu: goto label_19618c;
        case 0x196190u: goto label_196190;
        case 0x196194u: goto label_196194;
        case 0x196198u: goto label_196198;
        case 0x19619cu: goto label_19619c;
        case 0x1961a0u: goto label_1961a0;
        case 0x1961a4u: goto label_1961a4;
        case 0x1961a8u: goto label_1961a8;
        case 0x1961acu: goto label_1961ac;
        case 0x1961b0u: goto label_1961b0;
        case 0x1961b4u: goto label_1961b4;
        case 0x1961b8u: goto label_1961b8;
        case 0x1961bcu: goto label_1961bc;
        case 0x1961c0u: goto label_1961c0;
        case 0x1961c4u: goto label_1961c4;
        case 0x1961c8u: goto label_1961c8;
        case 0x1961ccu: goto label_1961cc;
        case 0x1961d0u: goto label_1961d0;
        case 0x1961d4u: goto label_1961d4;
        case 0x1961d8u: goto label_1961d8;
        case 0x1961dcu: goto label_1961dc;
        case 0x1961e0u: goto label_1961e0;
        case 0x1961e4u: goto label_1961e4;
        case 0x1961e8u: goto label_1961e8;
        case 0x1961ecu: goto label_1961ec;
        case 0x1961f0u: goto label_1961f0;
        case 0x1961f4u: goto label_1961f4;
        case 0x1961f8u: goto label_1961f8;
        case 0x1961fcu: goto label_1961fc;
        case 0x196200u: goto label_196200;
        case 0x196204u: goto label_196204;
        case 0x196208u: goto label_196208;
        case 0x19620cu: goto label_19620c;
        case 0x196210u: goto label_196210;
        case 0x196214u: goto label_196214;
        case 0x196218u: goto label_196218;
        case 0x19621cu: goto label_19621c;
        case 0x196220u: goto label_196220;
        case 0x196224u: goto label_196224;
        case 0x196228u: goto label_196228;
        case 0x19622cu: goto label_19622c;
        case 0x196230u: goto label_196230;
        case 0x196234u: goto label_196234;
        case 0x196238u: goto label_196238;
        case 0x19623cu: goto label_19623c;
        case 0x196240u: goto label_196240;
        case 0x196244u: goto label_196244;
        case 0x196248u: goto label_196248;
        case 0x19624cu: goto label_19624c;
        case 0x196250u: goto label_196250;
        case 0x196254u: goto label_196254;
        case 0x196258u: goto label_196258;
        case 0x19625cu: goto label_19625c;
        case 0x196260u: goto label_196260;
        case 0x196264u: goto label_196264;
        case 0x196268u: goto label_196268;
        case 0x19626cu: goto label_19626c;
        case 0x196270u: goto label_196270;
        case 0x196274u: goto label_196274;
        case 0x196278u: goto label_196278;
        case 0x19627cu: goto label_19627c;
        case 0x196280u: goto label_196280;
        case 0x196284u: goto label_196284;
        case 0x196288u: goto label_196288;
        case 0x19628cu: goto label_19628c;
        case 0x196290u: goto label_196290;
        case 0x196294u: goto label_196294;
        case 0x196298u: goto label_196298;
        case 0x19629cu: goto label_19629c;
        case 0x1962a0u: goto label_1962a0;
        case 0x1962a4u: goto label_1962a4;
        case 0x1962a8u: goto label_1962a8;
        case 0x1962acu: goto label_1962ac;
        case 0x1962b0u: goto label_1962b0;
        case 0x1962b4u: goto label_1962b4;
        case 0x1962b8u: goto label_1962b8;
        case 0x1962bcu: goto label_1962bc;
        case 0x1962c0u: goto label_1962c0;
        case 0x1962c4u: goto label_1962c4;
        case 0x1962c8u: goto label_1962c8;
        case 0x1962ccu: goto label_1962cc;
        case 0x1962d0u: goto label_1962d0;
        case 0x1962d4u: goto label_1962d4;
        case 0x1962d8u: goto label_1962d8;
        case 0x1962dcu: goto label_1962dc;
        case 0x1962e0u: goto label_1962e0;
        case 0x1962e4u: goto label_1962e4;
        case 0x1962e8u: goto label_1962e8;
        case 0x1962ecu: goto label_1962ec;
        case 0x1962f0u: goto label_1962f0;
        case 0x1962f4u: goto label_1962f4;
        case 0x1962f8u: goto label_1962f8;
        case 0x1962fcu: goto label_1962fc;
        case 0x196300u: goto label_196300;
        case 0x196304u: goto label_196304;
        case 0x196308u: goto label_196308;
        case 0x19630cu: goto label_19630c;
        case 0x196310u: goto label_196310;
        case 0x196314u: goto label_196314;
        case 0x196318u: goto label_196318;
        case 0x19631cu: goto label_19631c;
        case 0x196320u: goto label_196320;
        case 0x196324u: goto label_196324;
        case 0x196328u: goto label_196328;
        case 0x19632cu: goto label_19632c;
        case 0x196330u: goto label_196330;
        case 0x196334u: goto label_196334;
        case 0x196338u: goto label_196338;
        case 0x19633cu: goto label_19633c;
        case 0x196340u: goto label_196340;
        case 0x196344u: goto label_196344;
        case 0x196348u: goto label_196348;
        case 0x19634cu: goto label_19634c;
        case 0x196350u: goto label_196350;
        case 0x196354u: goto label_196354;
        case 0x196358u: goto label_196358;
        case 0x19635cu: goto label_19635c;
        case 0x196360u: goto label_196360;
        case 0x196364u: goto label_196364;
        case 0x196368u: goto label_196368;
        case 0x19636cu: goto label_19636c;
        case 0x196370u: goto label_196370;
        case 0x196374u: goto label_196374;
        case 0x196378u: goto label_196378;
        case 0x19637cu: goto label_19637c;
        case 0x196380u: goto label_196380;
        case 0x196384u: goto label_196384;
        case 0x196388u: goto label_196388;
        case 0x19638cu: goto label_19638c;
        case 0x196390u: goto label_196390;
        case 0x196394u: goto label_196394;
        case 0x196398u: goto label_196398;
        case 0x19639cu: goto label_19639c;
        case 0x1963a0u: goto label_1963a0;
        case 0x1963a4u: goto label_1963a4;
        case 0x1963a8u: goto label_1963a8;
        case 0x1963acu: goto label_1963ac;
        case 0x1963b0u: goto label_1963b0;
        case 0x1963b4u: goto label_1963b4;
        case 0x1963b8u: goto label_1963b8;
        case 0x1963bcu: goto label_1963bc;
        case 0x1963c0u: goto label_1963c0;
        case 0x1963c4u: goto label_1963c4;
        case 0x1963c8u: goto label_1963c8;
        case 0x1963ccu: goto label_1963cc;
        case 0x1963d0u: goto label_1963d0;
        case 0x1963d4u: goto label_1963d4;
        case 0x1963d8u: goto label_1963d8;
        case 0x1963dcu: goto label_1963dc;
        case 0x1963e0u: goto label_1963e0;
        case 0x1963e4u: goto label_1963e4;
        case 0x1963e8u: goto label_1963e8;
        case 0x1963ecu: goto label_1963ec;
        case 0x1963f0u: goto label_1963f0;
        case 0x1963f4u: goto label_1963f4;
        case 0x1963f8u: goto label_1963f8;
        case 0x1963fcu: goto label_1963fc;
        case 0x196400u: goto label_196400;
        case 0x196404u: goto label_196404;
        case 0x196408u: goto label_196408;
        case 0x19640cu: goto label_19640c;
        case 0x196410u: goto label_196410;
        case 0x196414u: goto label_196414;
        case 0x196418u: goto label_196418;
        case 0x19641cu: goto label_19641c;
        case 0x196420u: goto label_196420;
        case 0x196424u: goto label_196424;
        case 0x196428u: goto label_196428;
        case 0x19642cu: goto label_19642c;
        case 0x196430u: goto label_196430;
        case 0x196434u: goto label_196434;
        case 0x196438u: goto label_196438;
        case 0x19643cu: goto label_19643c;
        case 0x196440u: goto label_196440;
        case 0x196444u: goto label_196444;
        case 0x196448u: goto label_196448;
        case 0x19644cu: goto label_19644c;
        case 0x196450u: goto label_196450;
        case 0x196454u: goto label_196454;
        case 0x196458u: goto label_196458;
        case 0x19645cu: goto label_19645c;
        case 0x196460u: goto label_196460;
        case 0x196464u: goto label_196464;
        case 0x196468u: goto label_196468;
        case 0x19646cu: goto label_19646c;
        default: break;
    }

    ctx->pc = 0x195c18u;

label_195c18:
    // 0x195c18: 0x27bddf30  addiu       $sp, $sp, -0x20D0
    ctx->pc = 0x195c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294958896));
label_195c1c:
    // 0x195c1c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x195c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_195c20:
    // 0x195c20: 0x7fb62040  sq          $s6, 0x2040($sp)
    ctx->pc = 0x195c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8256), GPR_VEC(ctx, 22));
label_195c24:
    // 0x195c24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x195c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_195c28:
    // 0x195c28: 0x7fbe2020  sq          $fp, 0x2020($sp)
    ctx->pc = 0x195c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8224), GPR_VEC(ctx, 30));
label_195c2c:
    // 0x195c2c: 0x3c160034  lui         $s6, 0x34
    ctx->pc = 0x195c2cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
label_195c30:
    // 0x195c30: 0xe7b720c8  swc1        $f23, 0x20C8($sp)
    ctx->pc = 0x195c30u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8392), bits); }
label_195c34:
    // 0x195c34: 0x3c1e0034  lui         $fp, 0x34
    ctx->pc = 0x195c34u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)52 << 16));
label_195c38:
    // 0x195c38: 0xe7b620c0  swc1        $f22, 0x20C0($sp)
    ctx->pc = 0x195c38u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8384), bits); }
label_195c3c:
    // 0x195c3c: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x195c3cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
label_195c40:
    // 0x195c40: 0xe7b520b8  swc1        $f21, 0x20B8($sp)
    ctx->pc = 0x195c40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8376), bits); }
label_195c44:
    // 0x195c44: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x195c44u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_195c48:
    // 0x195c48: 0xe7b420b0  swc1        $f20, 0x20B0($sp)
    ctx->pc = 0x195c48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8368), bits); }
label_195c4c:
    // 0x195c4c: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x195c4cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
label_195c50:
    // 0x195c50: 0x7fb020a0  sq          $s0, 0x20A0($sp)
    ctx->pc = 0x195c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8352), GPR_VEC(ctx, 16));
label_195c54:
    // 0x195c54: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x195c54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_195c58:
    // 0x195c58: 0x7fb12090  sq          $s1, 0x2090($sp)
    ctx->pc = 0x195c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8336), GPR_VEC(ctx, 17));
label_195c5c:
    // 0x195c5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195c60:
    // 0x195c60: 0x7fb22080  sq          $s2, 0x2080($sp)
    ctx->pc = 0x195c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8320), GPR_VEC(ctx, 18));
label_195c64:
    // 0x195c64: 0x24061fc0  addiu       $a2, $zero, 0x1FC0
    ctx->pc = 0x195c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8128));
label_195c68:
    // 0x195c68: 0x7fb32070  sq          $s3, 0x2070($sp)
    ctx->pc = 0x195c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8304), GPR_VEC(ctx, 19));
label_195c6c:
    // 0x195c6c: 0x7fb42060  sq          $s4, 0x2060($sp)
    ctx->pc = 0x195c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8288), GPR_VEC(ctx, 20));
label_195c70:
    // 0x195c70: 0x7fb52050  sq          $s5, 0x2050($sp)
    ctx->pc = 0x195c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8272), GPR_VEC(ctx, 21));
label_195c74:
    // 0x195c74: 0x7fb72030  sq          $s7, 0x2030($sp)
    ctx->pc = 0x195c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8240), GPR_VEC(ctx, 23));
label_195c78:
    // 0x195c78: 0xffbf2010  sd          $ra, 0x2010($sp)
    ctx->pc = 0x195c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8208), GPR_U64(ctx, 31));
label_195c7c:
    // 0x195c7c: 0xafc08bb4  sw          $zero, -0x744C($fp)
    ctx->pc = 0x195c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294937524), GPR_U32(ctx, 0));
label_195c80:
    // 0x195c80: 0xaedd8bb8  sw          $sp, -0x7448($s6)
    ctx->pc = 0x195c80u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294937528), GPR_U32(ctx, 29));
label_195c84:
    // 0x195c84: 0xc0c493d  jal         func_3124F4
label_195c88:
    if (ctx->pc == 0x195C88u) {
        ctx->pc = 0x195C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C84u;
        // 0x195c88: 0xac5d8bbc  sw          $sp, -0x7444($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937532), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C8Cu;
        goto label_195c8c;
    }
    ctx->pc = 0x195C84u;
    SET_GPR_U32(ctx, 31, 0x195C8Cu);
    ctx->pc = 0x195C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C84u;
    // 0x195c88: 0xac5d8bbc  sw          $sp, -0x7444($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937532), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x195C84u, 0x195C8Cu)) {
        return;
    }
    ctx->pc = 0x195C8Cu;
label_195c8c:
    // 0x195c8c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x195c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_195c90:
    // 0x195c90: 0x3c023149  lui         $v0, 0x3149
    ctx->pc = 0x195c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12617 << 16));
label_195c94:
    // 0x195c94: 0x8c64bf80  lw          $a0, -0x4080($v1)
    ctx->pc = 0x195c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950784)));
label_195c98:
    // 0x195c98: 0x34424d43  ori         $v0, $v0, 0x4D43
    ctx->pc = 0x195c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19779);
label_195c9c:
    // 0x195c9c: 0x148201e4  bne         $a0, $v0, . + 4 + (0x1E4 << 2)
label_195ca0:
    if (ctx->pc == 0x195CA0u) {
        ctx->pc = 0x195CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C9Cu;
        // 0x195ca0: 0x7bb020a0  lq          $s0, 0x20A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 8352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CA4u;
        goto label_195ca4;
    }
    ctx->pc = 0x195C9Cu;
    {
        const bool branch_taken_0x195c9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x195CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C9Cu;
        // 0x195ca0: 0x7bb020a0  lq          $s0, 0x20A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 8352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c9c) {
            ctx->pc = 0x196430u;
            goto label_196430;
        }
    }
    ctx->pc = 0x195CA4u;
label_195ca4:
    // 0x195ca4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x195ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_195ca8:
    // 0x195ca8: 0x8c628b98  lw          $v0, -0x7468($v1)
    ctx->pc = 0x195ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937496)));
label_195cac:
    // 0x195cac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_195cb0:
    if (ctx->pc == 0x195CB0u) {
        ctx->pc = 0x195CB4u;
        goto label_195cb4;
    }
    ctx->pc = 0x195CACu;
    {
        const bool branch_taken_0x195cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195cac) {
            ctx->pc = 0x195CCCu;
            goto label_195ccc;
        }
    }
    ctx->pc = 0x195CB4u;
label_195cb4:
    // 0x195cb4: 0xc0659e0  jal         func_196780
label_195cb8:
    if (ctx->pc == 0x195CB8u) {
        ctx->pc = 0x195CBCu;
        goto label_195cbc;
    }
    ctx->pc = 0x195CB4u;
    SET_GPR_U32(ctx, 31, 0x195CBCu);
    ctx->pc = 0x196780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196780u, 0x195CB4u, 0x195CBCu)) {
        return;
    }
    ctx->pc = 0x195CBCu;
label_195cbc:
    // 0x195cbc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x195cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_195cc0:
    // 0x195cc0: 0x8c628b98  lw          $v0, -0x7468($v1)
    ctx->pc = 0x195cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937496)));
label_195cc4:
    // 0x195cc4: 0x504001da  beql        $v0, $zero, . + 4 + (0x1DA << 2)
label_195cc8:
    if (ctx->pc == 0x195CC8u) {
        ctx->pc = 0x195CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CC4u;
        // 0x195cc8: 0x7bb020a0  lq          $s0, 0x20A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 8352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CCCu;
        goto label_195ccc;
    }
    ctx->pc = 0x195CC4u;
    {
        const bool branch_taken_0x195cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195cc4) {
            ctx->pc = 0x195CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195CC4u;
            // 0x195cc8: 0x7bb020a0  lq          $s0, 0x20A0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 8352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196430u;
            goto label_196430;
        }
    }
    ctx->pc = 0x195CCCu;
label_195ccc:
    // 0x195ccc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x195cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_195cd0:
    // 0x195cd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x195cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_195cd4:
    // 0x195cd4: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x195cd4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
label_195cd8:
    // 0x195cd8: 0x3c140034  lui         $s4, 0x34
    ctx->pc = 0x195cd8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
label_195cdc:
    // 0x195cdc: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x195cdcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
label_195ce0:
    // 0x195ce0: 0x4600b842  mul.s       $f1, $f23, $f0
    ctx->pc = 0x195ce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_195ce4:
    // 0x195ce4: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x195ce4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
label_195ce8:
    // 0x195ce8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x195ce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_195cec:
    // 0x195cec: 0xe6768ba4  swc1        $f22, -0x745C($s3)
    ctx->pc = 0x195cecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294937508), bits); }
label_195cf0:
    // 0x195cf0: 0xe6948ba8  swc1        $f20, -0x7458($s4)
    ctx->pc = 0x195cf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294937512), bits); }
label_195cf4:
    // 0x195cf4: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x195cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_195cf8:
    // 0x195cf8: 0xe6a18bb0  swc1        $f1, -0x7450($s5)
    ctx->pc = 0x195cf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294937520), bits); }
label_195cfc:
    // 0x195cfc: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x195cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_195d00:
    // 0x195d00: 0xe6408bac  swc1        $f0, -0x7454($s2)
    ctx->pc = 0x195d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294937516), bits); }
label_195d04:
    // 0x195d04: 0xc0760d0  jal         func_1D8340
label_195d08:
    if (ctx->pc == 0x195D08u) {
        ctx->pc = 0x195D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D04u;
        // 0x195d08: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D0Cu;
        goto label_195d0c;
    }
    ctx->pc = 0x195D04u;
    SET_GPR_U32(ctx, 31, 0x195D0Cu);
    ctx->pc = 0x195D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195D04u;
    // 0x195d08: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8340u, 0x195D04u, 0x195D0Cu)) {
        return;
    }
    ctx->pc = 0x195D0Cu;
label_195d0c:
    // 0x195d0c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x195d0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195d10:
    // 0x195d10: 0xafa01ff0  sw          $zero, 0x1FF0($sp)
    ctx->pc = 0x195d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8176), GPR_U32(ctx, 0));
label_195d14:
    // 0x195d14: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x195d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_195d18:
    // 0x195d18: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_195d1c:
    // 0x195d1c: 0x40f809  jalr        $v0
label_195d20:
    if (ctx->pc == 0x195D20u) {
        ctx->pc = 0x195D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D1Cu;
        // 0x195d20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D24u;
        goto label_195d24;
    }
    ctx->pc = 0x195D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195D24u);
        ctx->pc = 0x195D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D1Cu;
        // 0x195d20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D1Cu, 0x195D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195D24u;
label_195d24:
    // 0x195d24: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_195d28:
    // 0x195d28: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x195d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_195d2c:
    // 0x195d2c: 0x40f809  jalr        $v0
label_195d30:
    if (ctx->pc == 0x195D30u) {
        ctx->pc = 0x195D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D2Cu;
        // 0x195d30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D34u;
        goto label_195d34;
    }
    ctx->pc = 0x195D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195D34u);
        ctx->pc = 0x195D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D2Cu;
        // 0x195d30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D2Cu, 0x195D34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195D34u;
label_195d34:
    // 0x195d34: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_195d38:
    // 0x195d38: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x195d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_195d3c:
    // 0x195d3c: 0x40f809  jalr        $v0
label_195d40:
    if (ctx->pc == 0x195D40u) {
        ctx->pc = 0x195D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D3Cu;
        // 0x195d40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D44u;
        goto label_195d44;
    }
    ctx->pc = 0x195D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195D44u);
        ctx->pc = 0x195D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D3Cu;
        // 0x195d40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D3Cu, 0x195D44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195D44u;
label_195d44:
    // 0x195d44: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_195d48:
    // 0x195d48: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x195d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_195d4c:
    // 0x195d4c: 0x40f809  jalr        $v0
label_195d50:
    if (ctx->pc == 0x195D50u) {
        ctx->pc = 0x195D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D4Cu;
        // 0x195d50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D54u;
        goto label_195d54;
    }
    ctx->pc = 0x195D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195D54u);
        ctx->pc = 0x195D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D4Cu;
        // 0x195d50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D4Cu, 0x195D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195D54u;
label_195d54:
    // 0x195d54: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_195d58:
    // 0x195d58: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x195d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_195d5c:
    // 0x195d5c: 0x40f809  jalr        $v0
label_195d60:
    if (ctx->pc == 0x195D60u) {
        ctx->pc = 0x195D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D5Cu;
        // 0x195d60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D64u;
        goto label_195d64;
    }
    ctx->pc = 0x195D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195D64u);
        ctx->pc = 0x195D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D5Cu;
        // 0x195d60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D5Cu, 0x195D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195D64u;
label_195d64:
    // 0x195d64: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_195d68:
    // 0x195d68: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x195d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_195d6c:
    // 0x195d6c: 0x40f809  jalr        $v0
label_195d70:
    if (ctx->pc == 0x195D70u) {
        ctx->pc = 0x195D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D6Cu;
        // 0x195d70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D74u;
        goto label_195d74;
    }
    ctx->pc = 0x195D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195D74u);
        ctx->pc = 0x195D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D6Cu;
        // 0x195d70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D6Cu, 0x195D74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195D74u;
label_195d74:
    // 0x195d74: 0x8ec68bb8  lw          $a2, -0x7448($s6)
    ctx->pc = 0x195d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937528)));
label_195d78:
    // 0x195d78: 0x3c0b0034  lui         $t3, 0x34
    ctx->pc = 0x195d78u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)52 << 16));
label_195d7c:
    // 0x195d7c: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x195d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_195d80:
    // 0x195d80: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_195d84:
    // 0x195d84: 0xad668bbc  sw          $a2, -0x7444($t3)
    ctx->pc = 0x195d84u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294937532), GPR_U32(ctx, 6));
label_195d88:
    // 0x195d88: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x195d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_195d8c:
    // 0x195d8c: 0xafc38bb4  sw          $v1, -0x744C($fp)
    ctx->pc = 0x195d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294937524), GPR_U32(ctx, 3));
label_195d90:
    // 0x195d90: 0x40f809  jalr        $v0
label_195d94:
    if (ctx->pc == 0x195D94u) {
        ctx->pc = 0x195D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D90u;
        // 0x195d94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D98u;
        goto label_195d98;
    }
    ctx->pc = 0x195D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195D98u);
        ctx->pc = 0x195D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D90u;
        // 0x195d94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D90u, 0x195D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195D98u;
label_195d98:
    // 0x195d98: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_195d9c:
    // 0x195d9c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x195d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_195da0:
    // 0x195da0: 0x40f809  jalr        $v0
label_195da4:
    if (ctx->pc == 0x195DA4u) {
        ctx->pc = 0x195DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DA0u;
        // 0x195da4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195DA8u;
        goto label_195da8;
    }
    ctx->pc = 0x195DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195DA8u);
        ctx->pc = 0x195DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DA0u;
        // 0x195da4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195DA0u, 0x195DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195DA8u;
label_195da8:
    // 0x195da8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x195da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_195dac:
    // 0x195dac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_195db0:
    // 0x195db0: 0x8c658ba0  lw          $a1, -0x7460($v1)
    ctx->pc = 0x195db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937504)));
label_195db4:
    // 0x195db4: 0x40f809  jalr        $v0
label_195db8:
    if (ctx->pc == 0x195DB8u) {
        ctx->pc = 0x195DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DB4u;
        // 0x195db8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195DBCu;
        goto label_195dbc;
    }
    ctx->pc = 0x195DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195DBCu);
        ctx->pc = 0x195DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DB4u;
        // 0x195db8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195DB4u, 0x195DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195DBCu;
label_195dbc:
    // 0x195dbc: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x195dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_195dc0:
    // 0x195dc0: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x195dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_195dc4:
    // 0x195dc4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x195dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_195dc8:
    // 0x195dc8: 0xdc6234d8  ld          $v0, 0x34D8($v1)
    ctx->pc = 0x195dc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 13528)));
label_195dcc:
    // 0x195dcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x195dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195dd0:
    // 0x195dd0: 0x4610a082  mul.s       $f2, $f20, $f16
    ctx->pc = 0x195dd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[16]);
label_195dd4:
    // 0x195dd4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x195dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_195dd8:
    // 0x195dd8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x195dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_195ddc:
    // 0x195ddc: 0x4610b142  mul.s       $f5, $f22, $f16
    ctx->pc = 0x195ddcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[22], ctx->f[16]);
label_195de0:
    // 0x195de0: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x195de0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
label_195de4:
    // 0x195de4: 0x460ea0c2  mul.s       $f3, $f20, $f14
    ctx->pc = 0x195de4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[14]);
label_195de8:
    // 0x195de8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x195de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_195dec:
    // 0x195dec: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x195decu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_195df0:
    // 0x195df0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x195df0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_195df4:
    // 0x195df4: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x195df4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
label_195df8:
    // 0x195df8: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x195df8u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
label_195dfc:
    // 0x195dfc: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x195dfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_195e00:
    // 0x195e00: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x195e00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
label_195e04:
    // 0x195e04: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x195e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
label_195e08:
    // 0x195e08: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x195e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_195e0c:
    // 0x195e0c: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x195e0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_195e10:
    // 0x195e10: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x195e10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_195e14:
    // 0x195e14: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x195e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
label_195e18:
    // 0x195e18: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x195e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_195e1c:
    // 0x195e1c: 0x226402a  slt         $t0, $s1, $a2
    ctx->pc = 0x195e1cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_195e20:
    // 0x195e20: 0x460eb102  mul.s       $f4, $f22, $f14
    ctx->pc = 0x195e20u;
    ctx->f[4] = FPU_MUL_S(ctx->f[22], ctx->f[14]);
label_195e24:
    // 0x195e24: 0x24c207ff  addiu       $v0, $a2, 0x7FF
    ctx->pc = 0x195e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
label_195e28:
    // 0x195e28: 0x0  nop
    ctx->pc = 0x195e28u;
    // NOP
label_195e2c:
    // 0x195e2c: 0x0  nop
    ctx->pc = 0x195e2cu;
    // NOP
label_195e30:
    // 0x195e30: 0x46175283  div.s       $f10, $f10, $f23
    ctx->pc = 0x195e30u;
    ctx->f[10] = FPU_DIV_S(ctx, ctx->f[10], ctx->f[23]);
label_195e34:
    // 0x195e34: 0xc8100b  movn        $v0, $a2, $t0
    ctx->pc = 0x195e34u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6));
label_195e38:
    // 0x195e38: 0x225382a  slt         $a3, $s1, $a1
    ctx->pc = 0x195e38u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_195e3c:
    // 0x195e3c: 0x24a307ff  addiu       $v1, $a1, 0x7FF
    ctx->pc = 0x195e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
label_195e40:
    // 0x195e40: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x195e40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_195e44:
    // 0x195e44: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x195e44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_195e48:
    // 0x195e48: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x195e48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_195e4c:
    // 0x195e4c: 0xa7180b  movn        $v1, $a1, $a3
    ctx->pc = 0x195e4cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5));
label_195e50:
    // 0x195e50: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x195e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_195e54:
    // 0x195e54: 0x22a402a  slt         $t0, $s1, $t2
    ctx->pc = 0x195e54u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_195e58:
    // 0x195e58: 0x254707ff  addiu       $a3, $t2, 0x7FF
    ctx->pc = 0x195e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 2047));
label_195e5c:
    // 0x195e5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_195e60:
    // 0x195e60: 0x0  nop
    ctx->pc = 0x195e60u;
    // NOP
label_195e64:
    // 0x195e64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195e64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_195e68:
    // 0x195e68: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x195e68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_195e6c:
    // 0x195e6c: 0x26c52000  addiu       $a1, $s6, 0x2000
    ctx->pc = 0x195e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 8192));
label_195e70:
    // 0x195e70: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x195e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_195e74:
    // 0x195e74: 0xffa51ff8  sd          $a1, 0x1FF8($sp)
    ctx->pc = 0x195e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8184), GPR_U64(ctx, 5));
label_195e78:
    // 0x195e78: 0x148380b  movn        $a3, $t2, $t0
    ctx->pc = 0x195e78u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10));
label_195e7c:
    // 0x195e7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x195e7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_195e80:
    // 0x195e80: 0x0  nop
    ctx->pc = 0x195e80u;
    // NOP
label_195e84:
    // 0x195e84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x195e84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_195e88:
    // 0x195e88: 0x229302a  slt         $a2, $s1, $t1
    ctx->pc = 0x195e88u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_195e8c:
    // 0x195e8c: 0x252507ff  addiu       $a1, $t1, 0x7FF
    ctx->pc = 0x195e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 2047));
label_195e90:
    // 0x195e90: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x195e90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
label_195e94:
    // 0x195e94: 0x73ac3  sra         $a3, $a3, 11
    ctx->pc = 0x195e94u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 11));
label_195e98:
    // 0x195e98: 0x126280b  movn        $a1, $t1, $a2
    ctx->pc = 0x195e98u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9));
label_195e9c:
    // 0x195e9c: 0x73ac0  sll         $a3, $a3, 11
    ctx->pc = 0x195e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
label_195ea0:
    // 0x195ea0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x195ea0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_195ea4:
    // 0x195ea4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x195ea4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_195ea8:
    // 0x195ea8: 0x0  nop
    ctx->pc = 0x195ea8u;
    // NOP
label_195eac:
    // 0x195eac: 0x0  nop
    ctx->pc = 0x195eacu;
    // NOP
label_195eb0:
    // 0x195eb0: 0x46156b43  div.s       $f13, $f13, $f21
    ctx->pc = 0x195eb0u;
    ctx->f[13] = FPU_DIV_S(ctx, ctx->f[13], ctx->f[21]);
label_195eb4:
    // 0x195eb4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x195eb4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_195eb8:
    // 0x195eb8: 0x52ac3  sra         $a1, $a1, 11
    ctx->pc = 0x195eb8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
label_195ebc:
    // 0x195ebc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x195ebcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_195ec0:
    // 0x195ec0: 0x0  nop
    ctx->pc = 0x195ec0u;
    // NOP
label_195ec4:
    // 0x195ec4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195ec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_195ec8:
    // 0x195ec8: 0xc6af8bb0  lwc1        $f15, -0x7450($s5)
    ctx->pc = 0x195ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294937520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_195ecc:
    // 0x195ecc: 0x44904800  mtc1        $s0, $f9
    ctx->pc = 0x195eccu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_195ed0:
    // 0x195ed0: 0x0  nop
    ctx->pc = 0x195ed0u;
    // NOP
label_195ed4:
    // 0x195ed4: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x195ed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
label_195ed8:
    // 0x195ed8: 0xc64c8bac  lwc1        $f12, -0x7454($s2)
    ctx->pc = 0x195ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294937516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_195edc:
    // 0x195edc: 0x44964000  mtc1        $s6, $f8
    ctx->pc = 0x195edcu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_195ee0:
    // 0x195ee0: 0x0  nop
    ctx->pc = 0x195ee0u;
    // NOP
label_195ee4:
    // 0x195ee4: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x195ee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
label_195ee8:
    // 0x195ee8: 0x52ac0  sll         $a1, $a1, 11
    ctx->pc = 0x195ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
label_195eec:
    // 0x195eec: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x195eecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_195ef0:
    // 0x195ef0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x195ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
label_195ef4:
    // 0x195ef4: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x195ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_195ef8:
    // 0x195ef8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x195ef8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_195efc:
    // 0x195efc: 0x0  nop
    ctx->pc = 0x195efcu;
    // NOP
label_195f00:
    // 0x195f00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x195f00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_195f04:
    // 0x195f04: 0xc6678ba4  lwc1        $f7, -0x745C($s3)
    ctx->pc = 0x195f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294937508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_195f08:
    // 0x195f08: 0x0  nop
    ctx->pc = 0x195f08u;
    // NOP
label_195f0c:
    // 0x195f0c: 0x460c4203  div.s       $f8, $f8, $f12
    ctx->pc = 0x195f0cu;
    ctx->f[8] = FPU_DIV_S(ctx, ctx->f[8], ctx->f[12]);
label_195f10:
    // 0x195f10: 0xc6868ba8  lwc1        $f6, -0x7458($s4)
    ctx->pc = 0x195f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294937512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_195f14:
    // 0x195f14: 0x0  nop
    ctx->pc = 0x195f14u;
    // NOP
label_195f18:
    // 0x195f18: 0x460f4a43  div.s       $f9, $f9, $f15
    ctx->pc = 0x195f18u;
    ctx->f[9] = FPU_DIV_S(ctx, ctx->f[9], ctx->f[15]);
label_195f1c:
    // 0x195f1c: 0x10f438  dsll        $fp, $s0, 16
    ctx->pc = 0x195f1cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 16) << 16);
label_195f20:
    // 0x195f20: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x195f20u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_195f24:
    // 0x195f24: 0x460e5002  mul.s       $f0, $f10, $f14
    ctx->pc = 0x195f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[14]);
label_195f28:
    // 0x195f28: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x195f28u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_195f2c:
    // 0x195f2c: 0x460b18c0  add.s       $f3, $f3, $f11
    ctx->pc = 0x195f2cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[11]);
label_195f30:
    // 0x195f30: 0xe7a51fc0  swc1        $f5, 0x1FC0($sp)
    ctx->pc = 0x195f30u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8128), bits); }
label_195f34:
    // 0x195f34: 0x460b1080  add.s       $f2, $f2, $f11
    ctx->pc = 0x195f34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[11]);
label_195f38:
    // 0x195f38: 0x460e6b82  mul.s       $f14, $f13, $f14
    ctx->pc = 0x195f38u;
    ctx->f[14] = FPU_MUL_S(ctx->f[13], ctx->f[14]);
label_195f3c:
    // 0x195f3c: 0xe7a41fd8  swc1        $f4, 0x1FD8($sp)
    ctx->pc = 0x195f3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8152), bits); }
label_195f40:
    // 0x195f40: 0x46105282  mul.s       $f10, $f10, $f16
    ctx->pc = 0x195f40u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[16]);
label_195f44:
    // 0x195f44: 0xe7a31fdc  swc1        $f3, 0x1FDC($sp)
    ctx->pc = 0x195f44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8156), bits); }
label_195f48:
    // 0x195f48: 0x46106b42  mul.s       $f13, $f13, $f16
    ctx->pc = 0x195f48u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[16]);
label_195f4c:
    // 0x195f4c: 0xe7a21fc4  swc1        $f2, 0x1FC4($sp)
    ctx->pc = 0x195f4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8132), bits); }
label_195f50:
    // 0x195f50: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x195f50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_195f54:
    // 0x195f54: 0x460a1080  add.s       $f2, $f2, $f10
    ctx->pc = 0x195f54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[10]);
label_195f58:
    // 0x195f58: 0x460e2100  add.s       $f4, $f4, $f14
    ctx->pc = 0x195f58u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[14]);
label_195f5c:
    // 0x195f5c: 0x460d2940  add.s       $f5, $f5, $f13
    ctx->pc = 0x195f5cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[13]);
label_195f60:
    // 0x195f60: 0xe7a31fe8  swc1        $f3, 0x1FE8($sp)
    ctx->pc = 0x195f60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8168), bits); }
label_195f64:
    // 0x195f64: 0x460839c1  sub.s       $f7, $f7, $f8
    ctx->pc = 0x195f64u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
label_195f68:
    // 0x195f68: 0xe7a21fd0  swc1        $f2, 0x1FD0($sp)
    ctx->pc = 0x195f68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8144), bits); }
label_195f6c:
    // 0x195f6c: 0x46093181  sub.s       $f6, $f6, $f9
    ctx->pc = 0x195f6cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[9]);
label_195f70:
    // 0x195f70: 0xe7a41fe4  swc1        $f4, 0x1FE4($sp)
    ctx->pc = 0x195f70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8164), bits); }
label_195f74:
    // 0x195f74: 0xe7a51fcc  swc1        $f5, 0x1FCC($sp)
    ctx->pc = 0x195f74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8140), bits); }
label_195f78:
    // 0x195f78: 0xe6678ba4  swc1        $f7, -0x745C($s3)
    ctx->pc = 0x195f78u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294937508), bits); }
label_195f7c:
    // 0x195f7c: 0xc079cfa  jal         func_1E73E8
label_195f80:
    if (ctx->pc == 0x195F80u) {
        ctx->pc = 0x195F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F7Cu;
        // 0x195f80: 0xe6868ba8  swc1        $f6, -0x7458($s4) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294937512), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F84u;
        goto label_195f84;
    }
    ctx->pc = 0x195F7Cu;
    SET_GPR_U32(ctx, 31, 0x195F84u);
    ctx->pc = 0x195F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F7Cu;
    // 0x195f80: 0xe6868ba8  swc1        $f6, -0x7458($s4) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294937512), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x195F7Cu, 0x195F84u)) {
        return;
    }
    ctx->pc = 0x195F84u;
label_195f84:
    // 0x195f84: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x195f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_195f88:
    // 0x195f88: 0xc079d0e  jal         func_1E7438
label_195f8c:
    if (ctx->pc == 0x195F8Cu) {
        ctx->pc = 0x195F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F88u;
        // 0x195f8c: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F90u;
        goto label_195f90;
    }
    ctx->pc = 0x195F88u;
    SET_GPR_U32(ctx, 31, 0x195F90u);
    ctx->pc = 0x195F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F88u;
    // 0x195f8c: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x195F88u, 0x195F90u)) {
        return;
    }
    ctx->pc = 0x195F90u;
label_195f90:
    // 0x195f90: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x195f90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_195f94:
    // 0x195f94: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x195f94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
label_195f98:
    // 0x195f98: 0xc079d0e  jal         func_1E7438
label_195f9c:
    if (ctx->pc == 0x195F9Cu) {
        ctx->pc = 0x195F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F98u;
        // 0x195f9c: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FA0u;
        goto label_195fa0;
    }
    ctx->pc = 0x195F98u;
    SET_GPR_U32(ctx, 31, 0x195FA0u);
    ctx->pc = 0x195F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F98u;
    // 0x195f9c: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x195F98u, 0x195FA0u)) {
        return;
    }
    ctx->pc = 0x195FA0u;
label_195fa0:
    // 0x195fa0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x195fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_195fa4:
    // 0x195fa4: 0xc079d0e  jal         func_1E7438
label_195fa8:
    if (ctx->pc == 0x195FA8u) {
        ctx->pc = 0x195FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FA4u;
        // 0x195fa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FACu;
        goto label_195fac;
    }
    ctx->pc = 0x195FA4u;
    SET_GPR_U32(ctx, 31, 0x195FACu);
    ctx->pc = 0x195FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195FA4u;
    // 0x195fa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x195FA4u, 0x195FACu)) {
        return;
    }
    ctx->pc = 0x195FACu;
label_195fac:
    // 0x195fac: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x195facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_195fb0:
    // 0x195fb0: 0xc079d0e  jal         func_1E7438
label_195fb4:
    if (ctx->pc == 0x195FB4u) {
        ctx->pc = 0x195FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FB0u;
        // 0x195fb4: 0x24050241  addiu       $a1, $zero, 0x241 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FB8u;
        goto label_195fb8;
    }
    ctx->pc = 0x195FB0u;
    SET_GPR_U32(ctx, 31, 0x195FB8u);
    ctx->pc = 0x195FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195FB0u;
    // 0x195fb4: 0x24050241  addiu       $a1, $zero, 0x241 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x195FB0u, 0x195FB8u)) {
        return;
    }
    ctx->pc = 0x195FB8u;
label_195fb8:
    // 0x195fb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x195fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195fbc:
    // 0x195fbc: 0xc079d0e  jal         func_1E7438
label_195fc0:
    if (ctx->pc == 0x195FC0u) {
        ctx->pc = 0x195FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FBCu;
        // 0x195fc0: 0x24050156  addiu       $a1, $zero, 0x156 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FC4u;
        goto label_195fc4;
    }
    ctx->pc = 0x195FBCu;
    SET_GPR_U32(ctx, 31, 0x195FC4u);
    ctx->pc = 0x195FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195FBCu;
    // 0x195fc0: 0x24050156  addiu       $a1, $zero, 0x156 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x195FBCu, 0x195FC4u)) {
        return;
    }
    ctx->pc = 0x195FC4u;
label_195fc4:
    // 0x195fc4: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x195fc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
label_195fc8:
    // 0x195fc8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x195fc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_195fcc:
    // 0x195fcc: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x195fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
label_195fd0:
    // 0x195fd0: 0xc079d0e  jal         func_1E7438
label_195fd4:
    if (ctx->pc == 0x195FD4u) {
        ctx->pc = 0x195FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FD0u;
        // 0x195fd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FD8u;
        goto label_195fd8;
    }
    ctx->pc = 0x195FD0u;
    SET_GPR_U32(ctx, 31, 0x195FD8u);
    ctx->pc = 0x195FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195FD0u;
    // 0x195fd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x195FD0u, 0x195FD8u)) {
        return;
    }
    ctx->pc = 0x195FD8u;
label_195fd8:
    // 0x195fd8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x195fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_195fdc:
    // 0x195fdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x195fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_195fe0:
    // 0x195fe0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_195fe4:
    // 0x195fe4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x195fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_195fe8:
    // 0x195fe8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x195fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_195fec:
    // 0x195fec: 0x26101c00  addiu       $s0, $s0, 0x1C00
    ctx->pc = 0x195fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7168));
label_195ff0:
    // 0x195ff0: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x195ff0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_195ff4:
    // 0x195ff4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x195ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_195ff8:
    // 0x195ff8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x195ff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_195ffc:
    // 0x195ffc: 0x10ac38  dsll        $s5, $s0, 16
    ctx->pc = 0x195ffcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 16) << 16);
label_196000:
    // 0x196000: 0x27b41fc4  addiu       $s4, $sp, 0x1FC4
    ctx->pc = 0x196000u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 8132));
label_196004:
    // 0x196004: 0x27b31fc0  addiu       $s3, $sp, 0x1FC0
    ctx->pc = 0x196004u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 8128));
label_196008:
    // 0x196008: 0x0  nop
    ctx->pc = 0x196008u;
    // NOP
label_19600c:
    // 0x19600c: 0x0  nop
    ctx->pc = 0x19600cu;
    // NOP
label_196010:
    // 0x196010: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x196010u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
label_196014:
    // 0x196014: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x196014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_196018:
    // 0x196018: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196018u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_19601c:
    // 0x19601c: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x19601cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_196020:
    // 0x196020: 0x232882a  slt         $s1, $s1, $s2
    ctx->pc = 0x196020u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_196024:
    // 0x196024: 0x11900a  movz        $s2, $zero, $s1
    ctx->pc = 0x196024u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0));
label_196028:
    // 0x196028: 0x2a420100  slti        $v0, $s2, 0x100
    ctx->pc = 0x196028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)256) ? 1 : 0);
label_19602c:
    // 0x19602c: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x19602cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3));
label_196030:
    // 0x196030: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x196030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_196034:
    // 0x196034: 0x0  nop
    ctx->pc = 0x196034u;
    // NOP
label_196038:
    // 0x196038: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x196038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19603c:
    // 0x19603c: 0xb21023  subu        $v0, $a1, $s2
    ctx->pc = 0x19603cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_196040:
    // 0x196040: 0x57280b  movn        $a1, $v0, $s7
    ctx->pc = 0x196040u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2));
label_196044:
    // 0x196044: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x196044u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_196048:
    // 0x196048: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x196048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_19604c:
    // 0x19604c: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x19604cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_196050:
    // 0x196050: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x196050u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_196054:
    // 0x196054: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x196054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
label_196058:
    // 0x196058: 0xc079d0e  jal         func_1E7438
label_19605c:
    if (ctx->pc == 0x19605Cu) {
        ctx->pc = 0x19605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196058u;
        // 0x19605c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196060u;
        goto label_196060;
    }
    ctx->pc = 0x196058u;
    SET_GPR_U32(ctx, 31, 0x196060u);
    ctx->pc = 0x19605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196058u;
    // 0x19605c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x196058u, 0x196060u)) {
        return;
    }
    ctx->pc = 0x196060u;
label_196060:
    // 0x196060: 0xc07da6c  jal         func_1F69B0
label_196064:
    if (ctx->pc == 0x196064u) {
        ctx->pc = 0x196064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196060u;
        // 0x196064: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x196068u;
        goto label_196068;
    }
    ctx->pc = 0x196060u;
    SET_GPR_U32(ctx, 31, 0x196068u);
    ctx->pc = 0x196064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196060u;
    // 0x196064: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F69B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F69B0u, 0x196060u, 0x196068u)) {
        return;
    }
    ctx->pc = 0x196068u;
label_196068:
    // 0x196068: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x196068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19606c:
    // 0x19606c: 0xc07da6c  jal         func_1F69B0
label_196070:
    if (ctx->pc == 0x196070u) {
        ctx->pc = 0x196070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19606Cu;
        // 0x196070: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196074u;
        goto label_196074;
    }
    ctx->pc = 0x19606Cu;
    SET_GPR_U32(ctx, 31, 0x196074u);
    ctx->pc = 0x196070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19606Cu;
    // 0x196070: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F69B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F69B0u, 0x19606Cu, 0x196074u)) {
        return;
    }
    ctx->pc = 0x196074u;
label_196074:
    // 0x196074: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x196074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_196078:
    // 0x196078: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x196078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19607c:
    // 0x19607c: 0xc079d0e  jal         func_1E7438
label_196080:
    if (ctx->pc == 0x196080u) {
        ctx->pc = 0x196080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19607Cu;
        // 0x196080: 0x2022825  or          $a1, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196084u;
        goto label_196084;
    }
    ctx->pc = 0x19607Cu;
    SET_GPR_U32(ctx, 31, 0x196084u);
    ctx->pc = 0x196080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19607Cu;
    // 0x196080: 0x2022825  or          $a1, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x19607Cu, 0x196084u)) {
        return;
    }
    ctx->pc = 0x196084u;
label_196084:
    // 0x196084: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x196084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_196088:
    // 0x196088: 0xc079d0e  jal         func_1E7438
label_19608c:
    if (ctx->pc == 0x19608Cu) {
        ctx->pc = 0x19608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196088u;
        // 0x19608c: 0x2de2825  or          $a1, $s6, $fp (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196090u;
        goto label_196090;
    }
    ctx->pc = 0x196088u;
    SET_GPR_U32(ctx, 31, 0x196090u);
    ctx->pc = 0x19608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196088u;
    // 0x19608c: 0x2de2825  or          $a1, $s6, $fp (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | GPR_U64(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x196088u, 0x196090u)) {
        return;
    }
    ctx->pc = 0x196090u;
label_196090:
    // 0x196090: 0xc66c000c  lwc1        $f12, 0xC($s3)
    ctx->pc = 0x196090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_196094:
    // 0x196094: 0xc07da6c  jal         func_1F69B0
label_196098:
    if (ctx->pc == 0x196098u) {
        ctx->pc = 0x196098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196094u;
        // 0x196098: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19609Cu;
        goto label_19609c;
    }
    ctx->pc = 0x196094u;
    SET_GPR_U32(ctx, 31, 0x19609Cu);
    ctx->pc = 0x196098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196094u;
    // 0x196098: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F69B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F69B0u, 0x196094u, 0x19609Cu)) {
        return;
    }
    ctx->pc = 0x19609Cu;
label_19609c:
    // 0x19609c: 0xc68c000c  lwc1        $f12, 0xC($s4)
    ctx->pc = 0x19609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1960a0:
    // 0x1960a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1960a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1960a4:
    // 0x1960a4: 0xc07da6c  jal         func_1F69B0
label_1960a8:
    if (ctx->pc == 0x1960A8u) {
        ctx->pc = 0x1960A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960A4u;
        // 0x1960a8: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960ACu;
        goto label_1960ac;
    }
    ctx->pc = 0x1960A4u;
    SET_GPR_U32(ctx, 31, 0x1960ACu);
    ctx->pc = 0x1960A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1960A4u;
    // 0x1960a8: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F69B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F69B0u, 0x1960A4u, 0x1960ACu)) {
        return;
    }
    ctx->pc = 0x1960ACu;
label_1960ac:
    // 0x1960ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1960acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1960b0:
    // 0x1960b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1960b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1960b4:
    // 0x1960b4: 0xc079d0e  jal         func_1E7438
label_1960b8:
    if (ctx->pc == 0x1960B8u) {
        ctx->pc = 0x1960B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960B4u;
        // 0x1960b8: 0x2022825  or          $a1, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960BCu;
        goto label_1960bc;
    }
    ctx->pc = 0x1960B4u;
    SET_GPR_U32(ctx, 31, 0x1960BCu);
    ctx->pc = 0x1960B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1960B4u;
    // 0x1960b8: 0x2022825  or          $a1, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1960B4u, 0x1960BCu)) {
        return;
    }
    ctx->pc = 0x1960BCu;
label_1960bc:
    // 0x1960bc: 0xdfa31ff8  ld          $v1, 0x1FF8($sp)
    ctx->pc = 0x1960bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8184)));
label_1960c0:
    // 0x1960c0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1960c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1960c4:
    // 0x1960c4: 0xc079d0e  jal         func_1E7438
label_1960c8:
    if (ctx->pc == 0x1960C8u) {
        ctx->pc = 0x1960C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960C4u;
        // 0x1960c8: 0x752825  or          $a1, $v1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960CCu;
        goto label_1960cc;
    }
    ctx->pc = 0x1960C4u;
    SET_GPR_U32(ctx, 31, 0x1960CCu);
    ctx->pc = 0x1960C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1960C4u;
    // 0x1960c8: 0x752825  or          $a1, $v1, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1960C4u, 0x1960CCu)) {
        return;
    }
    ctx->pc = 0x1960CCu;
label_1960cc:
    // 0x1960cc: 0x2ae20002  slti        $v0, $s7, 0x2
    ctx->pc = 0x1960ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
label_1960d0:
    // 0x1960d0: 0x5440ffd9  bnel        $v0, $zero, . + 4 + (-0x27 << 2)
label_1960d4:
    if (ctx->pc == 0x1960D4u) {
        ctx->pc = 0x1960D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960D0u;
        // 0x1960d4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960D8u;
        goto label_1960d8;
    }
    ctx->pc = 0x1960D0u;
    {
        const bool branch_taken_0x1960d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1960d0) {
            ctx->pc = 0x1960D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1960D0u;
            // 0x1960d4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196038;
        }
    }
    ctx->pc = 0x1960D8u;
label_1960d8:
    // 0x1960d8: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x1960d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
label_1960dc:
    // 0x1960dc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1960dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_1960e0:
    // 0x1960e0: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1960e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
label_1960e4:
    // 0x1960e4: 0xc079d0e  jal         func_1E7438
label_1960e8:
    if (ctx->pc == 0x1960E8u) {
        ctx->pc = 0x1960E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960E4u;
        // 0x1960e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960ECu;
        goto label_1960ec;
    }
    ctx->pc = 0x1960E4u;
    SET_GPR_U32(ctx, 31, 0x1960ECu);
    ctx->pc = 0x1960E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1960E4u;
    // 0x1960e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1960E4u, 0x1960ECu)) {
        return;
    }
    ctx->pc = 0x1960ECu;
label_1960ec:
    // 0x1960ec: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x1960ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_1960f0:
    // 0x1960f0: 0x24900fd8  addiu       $s0, $a0, 0xFD8
    ctx->pc = 0x1960f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
label_1960f4:
    // 0x1960f4: 0xc079ca0  jal         func_1E7280
label_1960f8:
    if (ctx->pc == 0x1960F8u) {
        ctx->pc = 0x1960F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960F4u;
        // 0x1960f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960FCu;
        goto label_1960fc;
    }
    ctx->pc = 0x1960F4u;
    SET_GPR_U32(ctx, 31, 0x1960FCu);
    ctx->pc = 0x1960F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1960F4u;
    // 0x1960f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1960F4u, 0x1960FCu)) {
        return;
    }
    ctx->pc = 0x1960FCu;
label_1960fc:
    // 0x1960fc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1960fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_196100:
    // 0x196100: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x196100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_196104:
    // 0x196104: 0x40f809  jalr        $v0
label_196108:
    if (ctx->pc == 0x196108u) {
        ctx->pc = 0x196108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196104u;
        // 0x196108: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19610Cu;
        goto label_19610c;
    }
    ctx->pc = 0x196104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19610Cu);
        ctx->pc = 0x196108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196104u;
        // 0x196108: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196104u, 0x19610Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19610Cu;
label_19610c:
    // 0x19610c: 0x3c0b0034  lui         $t3, 0x34
    ctx->pc = 0x19610cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)52 << 16));
label_196110:
    // 0x196110: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x196110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_196114:
    // 0x196114: 0x8d658b98  lw          $a1, -0x7468($t3)
    ctx->pc = 0x196114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294937496)));
label_196118:
    // 0x196118: 0x40f809  jalr        $v0
label_19611c:
    if (ctx->pc == 0x19611Cu) {
        ctx->pc = 0x19611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196118u;
        // 0x19611c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196120u;
        goto label_196120;
    }
    ctx->pc = 0x196118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196120u);
        ctx->pc = 0x19611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196118u;
        // 0x19611c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196118u, 0x196120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196120u;
label_196120:
    // 0x196120: 0x4600a064  .word       0x4600A064                   # cvt.w.s     $f1, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196120u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_196124:
    // 0x196124: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x196124u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_196128:
    // 0x196128: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x196128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
label_19612c:
    // 0x19612c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19612cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_196130:
    // 0x196130: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x196130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
label_196134:
    // 0x196134: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x196134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_196138:
    // 0x196138: 0x4600b0a4  .word       0x4600B0A4                   # cvt.w.s     $f2, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196138u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_19613c:
    // 0x19613c: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x19613cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_196140:
    // 0x196140: 0x0  nop
    ctx->pc = 0x196140u;
    // NOP
label_196144:
    // 0x196144: 0x0  nop
    ctx->pc = 0x196144u;
    // NOP
label_196148:
    // 0x196148: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x196148u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[23]);
label_19614c:
    // 0x19614c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x19614cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_196150:
    // 0x196150: 0x0  nop
    ctx->pc = 0x196150u;
    // NOP
label_196154:
    // 0x196154: 0x0  nop
    ctx->pc = 0x196154u;
    // NOP
label_196158:
    // 0x196158: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x196158u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[21]);
label_19615c:
    // 0x19615c: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x19615cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_196160:
    // 0x196160: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x196160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
label_196164:
    // 0x196164: 0x3c013d00  lui         $at, 0x3D00
    ctx->pc = 0x196164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15616 << 16));
label_196168:
    // 0x196168: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x196168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19616c:
    // 0x19616c: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x19616cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
label_196170:
    // 0x196170: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x196170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_196174:
    // 0x196174: 0x24a4001f  addiu       $a0, $a1, 0x1F
    ctx->pc = 0x196174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
label_196178:
    // 0x196178: 0x2447bf80  addiu       $a3, $v0, -0x4080
    ctx->pc = 0x196178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950784));
label_19617c:
    // 0x19617c: 0x35143  sra         $t2, $v1, 5
    ctx->pc = 0x19617cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 5));
label_196180:
    // 0x196180: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x196180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_196184:
    // 0x196184: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x196184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_196188:
    // 0x196188: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x196188u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5));
label_19618c:
    // 0x19618c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x19618cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_196190:
    // 0x196190: 0x4a943  sra         $s5, $a0, 5
    ctx->pc = 0x196190u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 4), 5));
label_196194:
    // 0x196194: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x196194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_196198:
    // 0x196198: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196198u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_19619c:
    // 0x19619c: 0x440c1000  mfc1        $t4, $f2
    ctx->pc = 0x19619cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
label_1961a0:
    // 0x1961a0: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x1961a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1961a4:
    // 0x1961a4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1961a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1961a8:
    // 0x1961a8: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x1961a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
label_1961ac:
    // 0x1961ac: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1961acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1961b0:
    // 0x1961b0: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x1961b0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
label_1961b4:
    // 0x1961b4: 0xca402a  slt         $t0, $a2, $t2
    ctx->pc = 0x1961b4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_1961b8:
    // 0x1961b8: 0x14c2021  addu        $a0, $t2, $t4
    ctx->pc = 0x1961b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_1961bc:
    // 0x1961bc: 0x2469ffff  addiu       $t1, $v1, -0x1
    ctx->pc = 0x1961bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1961c0:
    // 0x1961c0: 0x2ab1021  addu        $v0, $s5, $t3
    ctx->pc = 0x1961c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 11)));
label_1961c4:
    // 0x1961c4: 0x24960001  addiu       $s6, $a0, 0x1
    ctx->pc = 0x1961c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1961c8:
    // 0x1961c8: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x1961c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1961cc:
    // 0x1961cc: 0x24a7ffff  addiu       $a3, $a1, -0x1
    ctx->pc = 0x1961ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1961d0:
    // 0x1961d0: 0x285102a  slt         $v0, $s4, $a1
    ctx->pc = 0x1961d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1961d4:
    // 0x1961d4: 0x8500a  movz        $t2, $zero, $t0
    ctx->pc = 0x1961d4u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0));
label_1961d8:
    // 0x1961d8: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x1961d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1961dc:
    // 0x1961dc: 0xd5302a  slt         $a2, $a2, $s5
    ctx->pc = 0x1961dcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_1961e0:
    // 0x1961e0: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x1961e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1961e4:
    // 0x1961e4: 0x123b00a  movz        $s6, $t1, $v1
    ctx->pc = 0x1961e4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 9));
label_1961e8:
    // 0x1961e8: 0xe2a00a  movz        $s4, $a3, $v0
    ctx->pc = 0x1961e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7));
label_1961ec:
    // 0x1961ec: 0x6a80a  movz        $s5, $zero, $a2
    ctx->pc = 0x1961ecu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0));
label_1961f0:
    // 0x1961f0: 0x2d3102a  slt         $v0, $s6, $s3
    ctx->pc = 0x1961f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1961f4:
    // 0x1961f4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_1961f8:
    if (ctx->pc == 0x1961F8u) {
        ctx->pc = 0x1961F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961F4u;
        // 0x1961f8: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1961FCu;
        goto label_1961fc;
    }
    ctx->pc = 0x1961F4u;
    {
        const bool branch_taken_0x1961f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1961F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961F4u;
        // 0x1961f8: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1961f4) {
            ctx->pc = 0x196284u;
            goto label_196284;
        }
    }
    ctx->pc = 0x1961FCu;
label_1961fc:
    // 0x1961fc: 0x295182a  slt         $v1, $s4, $s5
    ctx->pc = 0x1961fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_196200:
    // 0x196200: 0xafa32000  sw          $v1, 0x2000($sp)
    ctx->pc = 0x196200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8192), GPR_U32(ctx, 3));
label_196204:
    // 0x196204: 0x27e1818  mult        $v1, $s3, $fp
    ctx->pc = 0x196204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_196208:
    // 0x196208: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x196208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_19620c:
    // 0x19620c: 0x24846060  addiu       $a0, $a0, 0x6060
    ctx->pc = 0x19620cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24672));
label_196210:
    // 0x196210: 0x8fa52000  lw          $a1, 0x2000($sp)
    ctx->pc = 0x196210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8192)));
label_196214:
    // 0x196214: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x196214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_196218:
    // 0x196218: 0x26770001  addiu       $s7, $s3, 0x1
    ctx->pc = 0x196218u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_19621c:
    // 0x19621c: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x19621cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_196220:
    // 0x196220: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x196220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_196224:
    // 0x196224: 0x14a00013  bnez        $a1, . + 4 + (0x13 << 2)
label_196228:
    if (ctx->pc == 0x196228u) {
        ctx->pc = 0x196228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196224u;
        // 0x196228: 0x448821  addu        $s1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19622Cu;
        goto label_19622c;
    }
    ctx->pc = 0x196224u;
    {
        const bool branch_taken_0x196224 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x196228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196224u;
        // 0x196228: 0x448821  addu        $s1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196224) {
            ctx->pc = 0x196274u;
            goto label_196274;
        }
    }
    ctx->pc = 0x19622Cu;
label_19622c:
    // 0x19622c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x19622cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_196230:
    // 0x196230: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x196230u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_196234:
    // 0x196234: 0x0  nop
    ctx->pc = 0x196234u;
    // NOP
label_196238:
    // 0x196238: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x196238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19623c:
    // 0x19623c: 0x10d20009  beq         $a2, $s2, . + 4 + (0x9 << 2)
label_196240:
    if (ctx->pc == 0x196240u) {
        ctx->pc = 0x196240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19623Cu;
        // 0x196240: 0x63a42  srl         $a3, $a2, 9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196244u;
        goto label_196244;
    }
    ctx->pc = 0x19623Cu;
    {
        const bool branch_taken_0x19623c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 18));
        ctx->pc = 0x196240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19623Cu;
        // 0x196240: 0x63a42  srl         $a3, $a2, 9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19623c) {
            ctx->pc = 0x196264u;
            goto label_196264;
        }
    }
    ctx->pc = 0x196244u;
label_196244:
    // 0x196244: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x196244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
label_196248:
    // 0x196248: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x196248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19624c:
    // 0x19624c: 0x30c601ff  andi        $a2, $a2, 0x1FF
    ctx->pc = 0x19624cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
label_196250:
    // 0x196250: 0x30e701ff  andi        $a3, $a3, 0x1FF
    ctx->pc = 0x196250u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)511);
label_196254:
    // 0x196254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196258:
    // 0x196258: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x196258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19625c:
    // 0x19625c: 0xc065634  jal         func_1958D0
label_196260:
    if (ctx->pc == 0x196260u) {
        ctx->pc = 0x196260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19625Cu;
        // 0x196260: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196264u;
        goto label_196264;
    }
    ctx->pc = 0x19625Cu;
    SET_GPR_U32(ctx, 31, 0x196264u);
    ctx->pc = 0x196260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19625Cu;
    // 0x196260: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1958D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1958D0u, 0x19625Cu, 0x196264u)) {
        return;
    }
    ctx->pc = 0x196264u;
label_196264:
    // 0x196264: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x196264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_196268:
    // 0x196268: 0x290102a  slt         $v0, $s4, $s0
    ctx->pc = 0x196268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_19626c:
    // 0x19626c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
label_196270:
    if (ctx->pc == 0x196270u) {
        ctx->pc = 0x196270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19626Cu;
        // 0x196270: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196274u;
        goto label_196274;
    }
    ctx->pc = 0x19626Cu;
    {
        const bool branch_taken_0x19626c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19626Cu;
        // 0x196270: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19626c) {
            ctx->pc = 0x196238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196238;
        }
    }
    ctx->pc = 0x196274u;
label_196274:
    // 0x196274: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x196274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_196278:
    // 0x196278: 0x2d3102a  slt         $v0, $s6, $s3
    ctx->pc = 0x196278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_19627c:
    // 0x19627c: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
label_196280:
    if (ctx->pc == 0x196280u) {
        ctx->pc = 0x196280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19627Cu;
        // 0x196280: 0x27e1818  mult        $v1, $s3, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x196284u;
        goto label_196284;
    }
    ctx->pc = 0x19627Cu;
    {
        const bool branch_taken_0x19627c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19627Cu;
        // 0x196280: 0x27e1818  mult        $v1, $s3, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19627c) {
            ctx->pc = 0x196208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196208;
        }
    }
    ctx->pc = 0x196284u;
label_196284:
    // 0x196284: 0xc0655fe  jal         func_1957F8
label_196288:
    if (ctx->pc == 0x196288u) {
        ctx->pc = 0x19628Cu;
        goto label_19628c;
    }
    ctx->pc = 0x196284u;
    SET_GPR_U32(ctx, 31, 0x19628Cu);
    ctx->pc = 0x1957F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1957F8u, 0x196284u, 0x19628Cu)) {
        return;
    }
    ctx->pc = 0x19628Cu;
label_19628c:
    // 0x19628c: 0x3c0b0034  lui         $t3, 0x34
    ctx->pc = 0x19628cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)52 << 16));
label_196290:
    // 0x196290: 0x3c0140b3  lui         $at, 0x40B3
    ctx->pc = 0x196290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16563 << 16));
label_196294:
    // 0x196294: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x196294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_196298:
    // 0x196298: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x196298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19629c:
    // 0x19629c: 0xc5618bac  lwc1        $f1, -0x7454($t3)
    ctx->pc = 0x19629cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4294937516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1962a0:
    // 0x1962a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1962a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1962a4:
    // 0x1962a4: 0x0  nop
    ctx->pc = 0x1962a4u;
    // NOP
label_1962a8:
    // 0x1962a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1962ac:
    if (ctx->pc == 0x1962ACu) {
        ctx->pc = 0x1962ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962A8u;
        // 0x1962ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1962B0u;
        goto label_1962b0;
    }
    ctx->pc = 0x1962A8u;
    {
        const bool branch_taken_0x1962a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1962ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962A8u;
        // 0x1962ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962a8) {
            ctx->pc = 0x1962B4u;
            goto label_1962b4;
        }
    }
    ctx->pc = 0x1962B0u;
label_1962b0:
    // 0x1962b0: 0xafa21ff0  sw          $v0, 0x1FF0($sp)
    ctx->pc = 0x1962b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8176), GPR_U32(ctx, 2));
label_1962b4:
    // 0x1962b4: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x1962b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_1962b8:
    // 0x1962b8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1962b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1962bc:
    // 0x1962bc: 0x24830fd8  addiu       $v1, $a0, 0xFD8
    ctx->pc = 0x1962bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
label_1962c0:
    // 0x1962c0: 0x8c458b9c  lw          $a1, -0x7464($v0)
    ctx->pc = 0x1962c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937500)));
label_1962c4:
    // 0x1962c4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1962c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1962c8:
    // 0x1962c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1962c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1962cc:
    // 0x1962cc: 0x40f809  jalr        $v0
label_1962d0:
    if (ctx->pc == 0x1962D0u) {
        ctx->pc = 0x1962D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962CCu;
        // 0x1962d0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1962D4u;
        goto label_1962d4;
    }
    ctx->pc = 0x1962CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1962D4u);
        ctx->pc = 0x1962D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962CCu;
        // 0x1962d0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1962CCu, 0x1962D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1962D4u;
label_1962d4:
    // 0x1962d4: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x1962d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
label_1962d8:
    // 0x1962d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1962d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1962dc:
    // 0x1962dc: 0x4600a0a4  .word       0x4600A0A4                   # cvt.w.s     $f2, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1962dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1962e0:
    // 0x1962e0: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1962e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1962e4:
    // 0x1962e4: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1962e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
label_1962e8:
    // 0x1962e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1962e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1962ec:
    // 0x1962ec: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x1962ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
label_1962f0:
    // 0x1962f0: 0x0  nop
    ctx->pc = 0x1962f0u;
    // NOP
label_1962f4:
    // 0x1962f4: 0x0  nop
    ctx->pc = 0x1962f4u;
    // NOP
label_1962f8:
    // 0x1962f8: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x1962f8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[23]);
label_1962fc:
    // 0x1962fc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1962fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_196300:
    // 0x196300: 0x0  nop
    ctx->pc = 0x196300u;
    // NOP
label_196304:
    // 0x196304: 0x0  nop
    ctx->pc = 0x196304u;
    // NOP
label_196308:
    // 0x196308: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x196308u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[21]);
label_19630c:
    // 0x19630c: 0x24a9bf80  addiu       $t1, $a1, -0x4080
    ctx->pc = 0x19630cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950784));
label_196310:
    // 0x196310: 0x4600b0e4  .word       0x4600B0E4                   # cvt.w.s     $f3, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196310u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_196314:
    // 0x196314: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x196314u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_196318:
    // 0x196318: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x196318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
label_19631c:
    // 0x19631c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19631cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_196320:
    // 0x196320: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x196320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_196324:
    // 0x196324: 0x2465000f  addiu       $a1, $v1, 0xF
    ctx->pc = 0x196324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_196328:
    // 0x196328: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x196328u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
label_19632c:
    // 0x19632c: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x19632cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_196330:
    // 0x196330: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x196330u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_196334:
    // 0x196334: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x196334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_196338:
    // 0x196338: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x196338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_19633c:
    // 0x19633c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x19633cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
label_196340:
    // 0x196340: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x196340u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_196344:
    // 0x196344: 0x2a903  sra         $s5, $v0, 4
    ctx->pc = 0x196344u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 4));
label_196348:
    // 0x196348: 0x55103  sra         $t2, $a1, 4
    ctx->pc = 0x196348u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 4));
label_19634c:
    // 0x19634c: 0x8d280004  lw          $t0, 0x4($t1)
    ctx->pc = 0x19634cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_196350:
    // 0x196350: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196350u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_196354:
    // 0x196354: 0x440c1000  mfc1        $t4, $f2
    ctx->pc = 0x196354u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
label_196358:
    // 0x196358: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x196358u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
label_19635c:
    // 0x19635c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19635cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_196360:
    // 0x196360: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x196360u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
label_196364:
    // 0x196364: 0x84103  sra         $t0, $t0, 4
    ctx->pc = 0x196364u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 4));
label_196368:
    // 0x196368: 0xea102a  slt         $v0, $a3, $t2
    ctx->pc = 0x196368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_19636c:
    // 0x19636c: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x19636cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_196370:
    // 0x196370: 0x142980b  movn        $s3, $t2, $v0
    ctx->pc = 0x196370u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 10));
label_196374:
    // 0x196374: 0x14cb021  addu        $s6, $t2, $t4
    ctx->pc = 0x196374u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_196378:
    // 0x196378: 0x2aba021  addu        $s4, $s5, $t3
    ctx->pc = 0x196378u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 11)));
label_19637c:
    // 0x19637c: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x19637cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_196380:
    // 0x196380: 0x2c6302a  slt         $a2, $s6, $a2
    ctx->pc = 0x196380u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_196384:
    // 0x196384: 0x288182a  slt         $v1, $s4, $t0
    ctx->pc = 0x196384u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_196388:
    // 0x196388: 0xf5382a  slt         $a3, $a3, $s5
    ctx->pc = 0x196388u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_19638c:
    // 0x19638c: 0x86b00a  movz        $s6, $a0, $a2
    ctx->pc = 0x19638cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4));
label_196390:
    // 0x196390: 0x43a00a  movz        $s4, $v0, $v1
    ctx->pc = 0x196390u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2));
label_196394:
    // 0x196394: 0x7a80a  movz        $s5, $zero, $a3
    ctx->pc = 0x196394u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0));
label_196398:
    // 0x196398: 0x2d3102a  slt         $v0, $s6, $s3
    ctx->pc = 0x196398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_19639c:
    // 0x19639c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_1963a0:
    if (ctx->pc == 0x1963A0u) {
        ctx->pc = 0x1963A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19639Cu;
        // 0x1963a0: 0x100f02d  daddu       $fp, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963A4u;
        goto label_1963a4;
    }
    ctx->pc = 0x19639Cu;
    {
        const bool branch_taken_0x19639c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1963A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19639Cu;
        // 0x1963a0: 0x100f02d  daddu       $fp, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19639c) {
            ctx->pc = 0x196424u;
            goto label_196424;
        }
    }
    ctx->pc = 0x1963A4u;
label_1963a4:
    // 0x1963a4: 0x27e1818  mult        $v1, $s3, $fp
    ctx->pc = 0x1963a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1963a8:
    // 0x1963a8: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x1963a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_1963ac:
    // 0x1963ac: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1963acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1963b0:
    // 0x1963b0: 0x2484e060  addiu       $a0, $a0, -0x1FA0
    ctx->pc = 0x1963b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959200));
label_1963b4:
    // 0x1963b4: 0x26770001  addiu       $s7, $s3, 0x1
    ctx->pc = 0x1963b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1963b8:
    // 0x1963b8: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x1963b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1963bc:
    // 0x1963bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1963bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1963c0:
    // 0x1963c0: 0x290182a  slt         $v1, $s4, $s0
    ctx->pc = 0x1963c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1963c4:
    // 0x1963c4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_1963c8:
    if (ctx->pc == 0x1963C8u) {
        ctx->pc = 0x1963C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963C4u;
        // 0x1963c8: 0x448821  addu        $s1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963CCu;
        goto label_1963cc;
    }
    ctx->pc = 0x1963C4u;
    {
        const bool branch_taken_0x1963c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1963C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963C4u;
        // 0x1963c8: 0x448821  addu        $s1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963c4) {
            ctx->pc = 0x196414u;
            goto label_196414;
        }
    }
    ctx->pc = 0x1963CCu;
label_1963cc:
    // 0x1963cc: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x1963ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_1963d0:
    // 0x1963d0: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x1963d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_1963d4:
    // 0x1963d4: 0x0  nop
    ctx->pc = 0x1963d4u;
    // NOP
label_1963d8:
    // 0x1963d8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1963d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1963dc:
    // 0x1963dc: 0x10d20009  beq         $a2, $s2, . + 4 + (0x9 << 2)
label_1963e0:
    if (ctx->pc == 0x1963E0u) {
        ctx->pc = 0x1963E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963DCu;
        // 0x1963e0: 0x63a42  srl         $a3, $a2, 9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963E4u;
        goto label_1963e4;
    }
    ctx->pc = 0x1963DCu;
    {
        const bool branch_taken_0x1963dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 18));
        ctx->pc = 0x1963E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963DCu;
        // 0x1963e0: 0x63a42  srl         $a3, $a2, 9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963dc) {
            ctx->pc = 0x196404u;
            goto label_196404;
        }
    }
    ctx->pc = 0x1963E4u;
label_1963e4:
    // 0x1963e4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1963e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_1963e8:
    // 0x1963e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1963e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1963ec:
    // 0x1963ec: 0x8fa81ff0  lw          $t0, 0x1FF0($sp)
    ctx->pc = 0x1963ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8176)));
label_1963f0:
    // 0x1963f0: 0x30c601ff  andi        $a2, $a2, 0x1FF
    ctx->pc = 0x1963f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
label_1963f4:
    // 0x1963f4: 0x30e701ff  andi        $a3, $a3, 0x1FF
    ctx->pc = 0x1963f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)511);
label_1963f8:
    // 0x1963f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1963f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1963fc:
    // 0x1963fc: 0xc065634  jal         func_1958D0
label_196400:
    if (ctx->pc == 0x196400u) {
        ctx->pc = 0x196400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963FCu;
        // 0x196400: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196404u;
        goto label_196404;
    }
    ctx->pc = 0x1963FCu;
    SET_GPR_U32(ctx, 31, 0x196404u);
    ctx->pc = 0x196400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1963FCu;
    // 0x196400: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1958D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1958D0u, 0x1963FCu, 0x196404u)) {
        return;
    }
    ctx->pc = 0x196404u;
label_196404:
    // 0x196404: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x196404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_196408:
    // 0x196408: 0x290102a  slt         $v0, $s4, $s0
    ctx->pc = 0x196408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_19640c:
    // 0x19640c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
label_196410:
    if (ctx->pc == 0x196410u) {
        ctx->pc = 0x196410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19640Cu;
        // 0x196410: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196414u;
        goto label_196414;
    }
    ctx->pc = 0x19640Cu;
    {
        const bool branch_taken_0x19640c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19640Cu;
        // 0x196410: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19640c) {
            ctx->pc = 0x1963D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1963d8;
        }
    }
    ctx->pc = 0x196414u;
label_196414:
    // 0x196414: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x196414u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_196418:
    // 0x196418: 0x2d3102a  slt         $v0, $s6, $s3
    ctx->pc = 0x196418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_19641c:
    // 0x19641c: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
label_196420:
    if (ctx->pc == 0x196420u) {
        ctx->pc = 0x196420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19641Cu;
        // 0x196420: 0x27e1818  mult        $v1, $s3, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x196424u;
        goto label_196424;
    }
    ctx->pc = 0x19641Cu;
    {
        const bool branch_taken_0x19641c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19641Cu;
        // 0x196420: 0x27e1818  mult        $v1, $s3, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19641c) {
            ctx->pc = 0x1963A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1963a8;
        }
    }
    ctx->pc = 0x196424u;
label_196424:
    // 0x196424: 0xc0655fe  jal         func_1957F8
label_196428:
    if (ctx->pc == 0x196428u) {
        ctx->pc = 0x19642Cu;
        goto label_19642c;
    }
    ctx->pc = 0x196424u;
    SET_GPR_U32(ctx, 31, 0x19642Cu);
    ctx->pc = 0x1957F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1957F8u, 0x196424u, 0x19642Cu)) {
        return;
    }
    ctx->pc = 0x19642Cu;
label_19642c:
    // 0x19642c: 0x7bb020a0  lq          $s0, 0x20A0($sp)
    ctx->pc = 0x19642cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 8352)));
label_196430:
    // 0x196430: 0x7bb12090  lq          $s1, 0x2090($sp)
    ctx->pc = 0x196430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 8336)));
label_196434:
    // 0x196434: 0x7bb22080  lq          $s2, 0x2080($sp)
    ctx->pc = 0x196434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 8320)));
label_196438:
    // 0x196438: 0x7bb32070  lq          $s3, 0x2070($sp)
    ctx->pc = 0x196438u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 8304)));
label_19643c:
    // 0x19643c: 0x7bb42060  lq          $s4, 0x2060($sp)
    ctx->pc = 0x19643cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 8288)));
label_196440:
    // 0x196440: 0x7bb52050  lq          $s5, 0x2050($sp)
    ctx->pc = 0x196440u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 8272)));
label_196444:
    // 0x196444: 0x7bb62040  lq          $s6, 0x2040($sp)
    ctx->pc = 0x196444u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 8256)));
label_196448:
    // 0x196448: 0x7bb72030  lq          $s7, 0x2030($sp)
    ctx->pc = 0x196448u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 8240)));
label_19644c:
    // 0x19644c: 0x7bbe2020  lq          $fp, 0x2020($sp)
    ctx->pc = 0x19644cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 8224)));
label_196450:
    // 0x196450: 0xdfbf2010  ld          $ra, 0x2010($sp)
    ctx->pc = 0x196450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8208)));
label_196454:
    // 0x196454: 0xc7b720c8  lwc1        $f23, 0x20C8($sp)
    ctx->pc = 0x196454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_196458:
    // 0x196458: 0xc7b620c0  lwc1        $f22, 0x20C0($sp)
    ctx->pc = 0x196458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_19645c:
    // 0x19645c: 0xc7b520b8  lwc1        $f21, 0x20B8($sp)
    ctx->pc = 0x19645cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_196460:
    // 0x196460: 0xc7b420b0  lwc1        $f20, 0x20B0($sp)
    ctx->pc = 0x196460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_196464:
    // 0x196464: 0x3e00008  jr          $ra
label_196468:
    if (ctx->pc == 0x196468u) {
        ctx->pc = 0x196468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196464u;
        // 0x196468: 0x27bd20d0  addiu       $sp, $sp, 0x20D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19646Cu;
        goto label_19646c;
    }
    ctx->pc = 0x196464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196464u;
        // 0x196468: 0x27bd20d0  addiu       $sp, $sp, 0x20D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19646Cu;
label_19646c:
    // 0x19646c: 0x0  nop
    ctx->pc = 0x19646cu;
    // NOP
    ctx->pc = 0x196470u;
}
