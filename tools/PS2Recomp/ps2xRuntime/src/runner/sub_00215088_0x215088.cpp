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

// Function: sub_00215088
// Address: 0x215088 - 0x2157b8
void sub_00215088_0x215088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215088_0x215088");
#endif

    switch (ctx->pc) {
        case 0x215088u: goto label_215088;
        case 0x21508cu: goto label_21508c;
        case 0x215090u: goto label_215090;
        case 0x215094u: goto label_215094;
        case 0x215098u: goto label_215098;
        case 0x21509cu: goto label_21509c;
        case 0x2150a0u: goto label_2150a0;
        case 0x2150a4u: goto label_2150a4;
        case 0x2150a8u: goto label_2150a8;
        case 0x2150acu: goto label_2150ac;
        case 0x2150b0u: goto label_2150b0;
        case 0x2150b4u: goto label_2150b4;
        case 0x2150b8u: goto label_2150b8;
        case 0x2150bcu: goto label_2150bc;
        case 0x2150c0u: goto label_2150c0;
        case 0x2150c4u: goto label_2150c4;
        case 0x2150c8u: goto label_2150c8;
        case 0x2150ccu: goto label_2150cc;
        case 0x2150d0u: goto label_2150d0;
        case 0x2150d4u: goto label_2150d4;
        case 0x2150d8u: goto label_2150d8;
        case 0x2150dcu: goto label_2150dc;
        case 0x2150e0u: goto label_2150e0;
        case 0x2150e4u: goto label_2150e4;
        case 0x2150e8u: goto label_2150e8;
        case 0x2150ecu: goto label_2150ec;
        case 0x2150f0u: goto label_2150f0;
        case 0x2150f4u: goto label_2150f4;
        case 0x2150f8u: goto label_2150f8;
        case 0x2150fcu: goto label_2150fc;
        case 0x215100u: goto label_215100;
        case 0x215104u: goto label_215104;
        case 0x215108u: goto label_215108;
        case 0x21510cu: goto label_21510c;
        case 0x215110u: goto label_215110;
        case 0x215114u: goto label_215114;
        case 0x215118u: goto label_215118;
        case 0x21511cu: goto label_21511c;
        case 0x215120u: goto label_215120;
        case 0x215124u: goto label_215124;
        case 0x215128u: goto label_215128;
        case 0x21512cu: goto label_21512c;
        case 0x215130u: goto label_215130;
        case 0x215134u: goto label_215134;
        case 0x215138u: goto label_215138;
        case 0x21513cu: goto label_21513c;
        case 0x215140u: goto label_215140;
        case 0x215144u: goto label_215144;
        case 0x215148u: goto label_215148;
        case 0x21514cu: goto label_21514c;
        case 0x215150u: goto label_215150;
        case 0x215154u: goto label_215154;
        case 0x215158u: goto label_215158;
        case 0x21515cu: goto label_21515c;
        case 0x215160u: goto label_215160;
        case 0x215164u: goto label_215164;
        case 0x215168u: goto label_215168;
        case 0x21516cu: goto label_21516c;
        case 0x215170u: goto label_215170;
        case 0x215174u: goto label_215174;
        case 0x215178u: goto label_215178;
        case 0x21517cu: goto label_21517c;
        case 0x215180u: goto label_215180;
        case 0x215184u: goto label_215184;
        case 0x215188u: goto label_215188;
        case 0x21518cu: goto label_21518c;
        case 0x215190u: goto label_215190;
        case 0x215194u: goto label_215194;
        case 0x215198u: goto label_215198;
        case 0x21519cu: goto label_21519c;
        case 0x2151a0u: goto label_2151a0;
        case 0x2151a4u: goto label_2151a4;
        case 0x2151a8u: goto label_2151a8;
        case 0x2151acu: goto label_2151ac;
        case 0x2151b0u: goto label_2151b0;
        case 0x2151b4u: goto label_2151b4;
        case 0x2151b8u: goto label_2151b8;
        case 0x2151bcu: goto label_2151bc;
        case 0x2151c0u: goto label_2151c0;
        case 0x2151c4u: goto label_2151c4;
        case 0x2151c8u: goto label_2151c8;
        case 0x2151ccu: goto label_2151cc;
        case 0x2151d0u: goto label_2151d0;
        case 0x2151d4u: goto label_2151d4;
        case 0x2151d8u: goto label_2151d8;
        case 0x2151dcu: goto label_2151dc;
        case 0x2151e0u: goto label_2151e0;
        case 0x2151e4u: goto label_2151e4;
        case 0x2151e8u: goto label_2151e8;
        case 0x2151ecu: goto label_2151ec;
        case 0x2151f0u: goto label_2151f0;
        case 0x2151f4u: goto label_2151f4;
        case 0x2151f8u: goto label_2151f8;
        case 0x2151fcu: goto label_2151fc;
        case 0x215200u: goto label_215200;
        case 0x215204u: goto label_215204;
        case 0x215208u: goto label_215208;
        case 0x21520cu: goto label_21520c;
        case 0x215210u: goto label_215210;
        case 0x215214u: goto label_215214;
        case 0x215218u: goto label_215218;
        case 0x21521cu: goto label_21521c;
        case 0x215220u: goto label_215220;
        case 0x215224u: goto label_215224;
        case 0x215228u: goto label_215228;
        case 0x21522cu: goto label_21522c;
        case 0x215230u: goto label_215230;
        case 0x215234u: goto label_215234;
        case 0x215238u: goto label_215238;
        case 0x21523cu: goto label_21523c;
        case 0x215240u: goto label_215240;
        case 0x215244u: goto label_215244;
        case 0x215248u: goto label_215248;
        case 0x21524cu: goto label_21524c;
        case 0x215250u: goto label_215250;
        case 0x215254u: goto label_215254;
        case 0x215258u: goto label_215258;
        case 0x21525cu: goto label_21525c;
        case 0x215260u: goto label_215260;
        case 0x215264u: goto label_215264;
        case 0x215268u: goto label_215268;
        case 0x21526cu: goto label_21526c;
        case 0x215270u: goto label_215270;
        case 0x215274u: goto label_215274;
        case 0x215278u: goto label_215278;
        case 0x21527cu: goto label_21527c;
        case 0x215280u: goto label_215280;
        case 0x215284u: goto label_215284;
        case 0x215288u: goto label_215288;
        case 0x21528cu: goto label_21528c;
        case 0x215290u: goto label_215290;
        case 0x215294u: goto label_215294;
        case 0x215298u: goto label_215298;
        case 0x21529cu: goto label_21529c;
        case 0x2152a0u: goto label_2152a0;
        case 0x2152a4u: goto label_2152a4;
        case 0x2152a8u: goto label_2152a8;
        case 0x2152acu: goto label_2152ac;
        case 0x2152b0u: goto label_2152b0;
        case 0x2152b4u: goto label_2152b4;
        case 0x2152b8u: goto label_2152b8;
        case 0x2152bcu: goto label_2152bc;
        case 0x2152c0u: goto label_2152c0;
        case 0x2152c4u: goto label_2152c4;
        case 0x2152c8u: goto label_2152c8;
        case 0x2152ccu: goto label_2152cc;
        case 0x2152d0u: goto label_2152d0;
        case 0x2152d4u: goto label_2152d4;
        case 0x2152d8u: goto label_2152d8;
        case 0x2152dcu: goto label_2152dc;
        case 0x2152e0u: goto label_2152e0;
        case 0x2152e4u: goto label_2152e4;
        case 0x2152e8u: goto label_2152e8;
        case 0x2152ecu: goto label_2152ec;
        case 0x2152f0u: goto label_2152f0;
        case 0x2152f4u: goto label_2152f4;
        case 0x2152f8u: goto label_2152f8;
        case 0x2152fcu: goto label_2152fc;
        case 0x215300u: goto label_215300;
        case 0x215304u: goto label_215304;
        case 0x215308u: goto label_215308;
        case 0x21530cu: goto label_21530c;
        case 0x215310u: goto label_215310;
        case 0x215314u: goto label_215314;
        case 0x215318u: goto label_215318;
        case 0x21531cu: goto label_21531c;
        case 0x215320u: goto label_215320;
        case 0x215324u: goto label_215324;
        case 0x215328u: goto label_215328;
        case 0x21532cu: goto label_21532c;
        case 0x215330u: goto label_215330;
        case 0x215334u: goto label_215334;
        case 0x215338u: goto label_215338;
        case 0x21533cu: goto label_21533c;
        case 0x215340u: goto label_215340;
        case 0x215344u: goto label_215344;
        case 0x215348u: goto label_215348;
        case 0x21534cu: goto label_21534c;
        case 0x215350u: goto label_215350;
        case 0x215354u: goto label_215354;
        case 0x215358u: goto label_215358;
        case 0x21535cu: goto label_21535c;
        case 0x215360u: goto label_215360;
        case 0x215364u: goto label_215364;
        case 0x215368u: goto label_215368;
        case 0x21536cu: goto label_21536c;
        case 0x215370u: goto label_215370;
        case 0x215374u: goto label_215374;
        case 0x215378u: goto label_215378;
        case 0x21537cu: goto label_21537c;
        case 0x215380u: goto label_215380;
        case 0x215384u: goto label_215384;
        case 0x215388u: goto label_215388;
        case 0x21538cu: goto label_21538c;
        case 0x215390u: goto label_215390;
        case 0x215394u: goto label_215394;
        case 0x215398u: goto label_215398;
        case 0x21539cu: goto label_21539c;
        case 0x2153a0u: goto label_2153a0;
        case 0x2153a4u: goto label_2153a4;
        case 0x2153a8u: goto label_2153a8;
        case 0x2153acu: goto label_2153ac;
        case 0x2153b0u: goto label_2153b0;
        case 0x2153b4u: goto label_2153b4;
        case 0x2153b8u: goto label_2153b8;
        case 0x2153bcu: goto label_2153bc;
        case 0x2153c0u: goto label_2153c0;
        case 0x2153c4u: goto label_2153c4;
        case 0x2153c8u: goto label_2153c8;
        case 0x2153ccu: goto label_2153cc;
        case 0x2153d0u: goto label_2153d0;
        case 0x2153d4u: goto label_2153d4;
        case 0x2153d8u: goto label_2153d8;
        case 0x2153dcu: goto label_2153dc;
        case 0x2153e0u: goto label_2153e0;
        case 0x2153e4u: goto label_2153e4;
        case 0x2153e8u: goto label_2153e8;
        case 0x2153ecu: goto label_2153ec;
        case 0x2153f0u: goto label_2153f0;
        case 0x2153f4u: goto label_2153f4;
        case 0x2153f8u: goto label_2153f8;
        case 0x2153fcu: goto label_2153fc;
        case 0x215400u: goto label_215400;
        case 0x215404u: goto label_215404;
        case 0x215408u: goto label_215408;
        case 0x21540cu: goto label_21540c;
        case 0x215410u: goto label_215410;
        case 0x215414u: goto label_215414;
        case 0x215418u: goto label_215418;
        case 0x21541cu: goto label_21541c;
        case 0x215420u: goto label_215420;
        case 0x215424u: goto label_215424;
        case 0x215428u: goto label_215428;
        case 0x21542cu: goto label_21542c;
        case 0x215430u: goto label_215430;
        case 0x215434u: goto label_215434;
        case 0x215438u: goto label_215438;
        case 0x21543cu: goto label_21543c;
        case 0x215440u: goto label_215440;
        case 0x215444u: goto label_215444;
        case 0x215448u: goto label_215448;
        case 0x21544cu: goto label_21544c;
        case 0x215450u: goto label_215450;
        case 0x215454u: goto label_215454;
        case 0x215458u: goto label_215458;
        case 0x21545cu: goto label_21545c;
        case 0x215460u: goto label_215460;
        case 0x215464u: goto label_215464;
        case 0x215468u: goto label_215468;
        case 0x21546cu: goto label_21546c;
        case 0x215470u: goto label_215470;
        case 0x215474u: goto label_215474;
        case 0x215478u: goto label_215478;
        case 0x21547cu: goto label_21547c;
        case 0x215480u: goto label_215480;
        case 0x215484u: goto label_215484;
        case 0x215488u: goto label_215488;
        case 0x21548cu: goto label_21548c;
        case 0x215490u: goto label_215490;
        case 0x215494u: goto label_215494;
        case 0x215498u: goto label_215498;
        case 0x21549cu: goto label_21549c;
        case 0x2154a0u: goto label_2154a0;
        case 0x2154a4u: goto label_2154a4;
        case 0x2154a8u: goto label_2154a8;
        case 0x2154acu: goto label_2154ac;
        case 0x2154b0u: goto label_2154b0;
        case 0x2154b4u: goto label_2154b4;
        case 0x2154b8u: goto label_2154b8;
        case 0x2154bcu: goto label_2154bc;
        case 0x2154c0u: goto label_2154c0;
        case 0x2154c4u: goto label_2154c4;
        case 0x2154c8u: goto label_2154c8;
        case 0x2154ccu: goto label_2154cc;
        case 0x2154d0u: goto label_2154d0;
        case 0x2154d4u: goto label_2154d4;
        case 0x2154d8u: goto label_2154d8;
        case 0x2154dcu: goto label_2154dc;
        case 0x2154e0u: goto label_2154e0;
        case 0x2154e4u: goto label_2154e4;
        case 0x2154e8u: goto label_2154e8;
        case 0x2154ecu: goto label_2154ec;
        case 0x2154f0u: goto label_2154f0;
        case 0x2154f4u: goto label_2154f4;
        case 0x2154f8u: goto label_2154f8;
        case 0x2154fcu: goto label_2154fc;
        case 0x215500u: goto label_215500;
        case 0x215504u: goto label_215504;
        case 0x215508u: goto label_215508;
        case 0x21550cu: goto label_21550c;
        case 0x215510u: goto label_215510;
        case 0x215514u: goto label_215514;
        case 0x215518u: goto label_215518;
        case 0x21551cu: goto label_21551c;
        case 0x215520u: goto label_215520;
        case 0x215524u: goto label_215524;
        case 0x215528u: goto label_215528;
        case 0x21552cu: goto label_21552c;
        case 0x215530u: goto label_215530;
        case 0x215534u: goto label_215534;
        case 0x215538u: goto label_215538;
        case 0x21553cu: goto label_21553c;
        case 0x215540u: goto label_215540;
        case 0x215544u: goto label_215544;
        case 0x215548u: goto label_215548;
        case 0x21554cu: goto label_21554c;
        case 0x215550u: goto label_215550;
        case 0x215554u: goto label_215554;
        case 0x215558u: goto label_215558;
        case 0x21555cu: goto label_21555c;
        case 0x215560u: goto label_215560;
        case 0x215564u: goto label_215564;
        case 0x215568u: goto label_215568;
        case 0x21556cu: goto label_21556c;
        case 0x215570u: goto label_215570;
        case 0x215574u: goto label_215574;
        case 0x215578u: goto label_215578;
        case 0x21557cu: goto label_21557c;
        case 0x215580u: goto label_215580;
        case 0x215584u: goto label_215584;
        case 0x215588u: goto label_215588;
        case 0x21558cu: goto label_21558c;
        case 0x215590u: goto label_215590;
        case 0x215594u: goto label_215594;
        case 0x215598u: goto label_215598;
        case 0x21559cu: goto label_21559c;
        case 0x2155a0u: goto label_2155a0;
        case 0x2155a4u: goto label_2155a4;
        case 0x2155a8u: goto label_2155a8;
        case 0x2155acu: goto label_2155ac;
        case 0x2155b0u: goto label_2155b0;
        case 0x2155b4u: goto label_2155b4;
        case 0x2155b8u: goto label_2155b8;
        case 0x2155bcu: goto label_2155bc;
        case 0x2155c0u: goto label_2155c0;
        case 0x2155c4u: goto label_2155c4;
        case 0x2155c8u: goto label_2155c8;
        case 0x2155ccu: goto label_2155cc;
        case 0x2155d0u: goto label_2155d0;
        case 0x2155d4u: goto label_2155d4;
        case 0x2155d8u: goto label_2155d8;
        case 0x2155dcu: goto label_2155dc;
        case 0x2155e0u: goto label_2155e0;
        case 0x2155e4u: goto label_2155e4;
        case 0x2155e8u: goto label_2155e8;
        case 0x2155ecu: goto label_2155ec;
        case 0x2155f0u: goto label_2155f0;
        case 0x2155f4u: goto label_2155f4;
        case 0x2155f8u: goto label_2155f8;
        case 0x2155fcu: goto label_2155fc;
        case 0x215600u: goto label_215600;
        case 0x215604u: goto label_215604;
        case 0x215608u: goto label_215608;
        case 0x21560cu: goto label_21560c;
        case 0x215610u: goto label_215610;
        case 0x215614u: goto label_215614;
        case 0x215618u: goto label_215618;
        case 0x21561cu: goto label_21561c;
        case 0x215620u: goto label_215620;
        case 0x215624u: goto label_215624;
        case 0x215628u: goto label_215628;
        case 0x21562cu: goto label_21562c;
        case 0x215630u: goto label_215630;
        case 0x215634u: goto label_215634;
        case 0x215638u: goto label_215638;
        case 0x21563cu: goto label_21563c;
        case 0x215640u: goto label_215640;
        case 0x215644u: goto label_215644;
        case 0x215648u: goto label_215648;
        case 0x21564cu: goto label_21564c;
        case 0x215650u: goto label_215650;
        case 0x215654u: goto label_215654;
        case 0x215658u: goto label_215658;
        case 0x21565cu: goto label_21565c;
        case 0x215660u: goto label_215660;
        case 0x215664u: goto label_215664;
        case 0x215668u: goto label_215668;
        case 0x21566cu: goto label_21566c;
        case 0x215670u: goto label_215670;
        case 0x215674u: goto label_215674;
        case 0x215678u: goto label_215678;
        case 0x21567cu: goto label_21567c;
        case 0x215680u: goto label_215680;
        case 0x215684u: goto label_215684;
        case 0x215688u: goto label_215688;
        case 0x21568cu: goto label_21568c;
        case 0x215690u: goto label_215690;
        case 0x215694u: goto label_215694;
        case 0x215698u: goto label_215698;
        case 0x21569cu: goto label_21569c;
        case 0x2156a0u: goto label_2156a0;
        case 0x2156a4u: goto label_2156a4;
        case 0x2156a8u: goto label_2156a8;
        case 0x2156acu: goto label_2156ac;
        case 0x2156b0u: goto label_2156b0;
        case 0x2156b4u: goto label_2156b4;
        case 0x2156b8u: goto label_2156b8;
        case 0x2156bcu: goto label_2156bc;
        case 0x2156c0u: goto label_2156c0;
        case 0x2156c4u: goto label_2156c4;
        case 0x2156c8u: goto label_2156c8;
        case 0x2156ccu: goto label_2156cc;
        case 0x2156d0u: goto label_2156d0;
        case 0x2156d4u: goto label_2156d4;
        case 0x2156d8u: goto label_2156d8;
        case 0x2156dcu: goto label_2156dc;
        case 0x2156e0u: goto label_2156e0;
        case 0x2156e4u: goto label_2156e4;
        case 0x2156e8u: goto label_2156e8;
        case 0x2156ecu: goto label_2156ec;
        case 0x2156f0u: goto label_2156f0;
        case 0x2156f4u: goto label_2156f4;
        case 0x2156f8u: goto label_2156f8;
        case 0x2156fcu: goto label_2156fc;
        case 0x215700u: goto label_215700;
        case 0x215704u: goto label_215704;
        case 0x215708u: goto label_215708;
        case 0x21570cu: goto label_21570c;
        case 0x215710u: goto label_215710;
        case 0x215714u: goto label_215714;
        case 0x215718u: goto label_215718;
        case 0x21571cu: goto label_21571c;
        case 0x215720u: goto label_215720;
        case 0x215724u: goto label_215724;
        case 0x215728u: goto label_215728;
        case 0x21572cu: goto label_21572c;
        case 0x215730u: goto label_215730;
        case 0x215734u: goto label_215734;
        case 0x215738u: goto label_215738;
        case 0x21573cu: goto label_21573c;
        case 0x215740u: goto label_215740;
        case 0x215744u: goto label_215744;
        case 0x215748u: goto label_215748;
        case 0x21574cu: goto label_21574c;
        case 0x215750u: goto label_215750;
        case 0x215754u: goto label_215754;
        case 0x215758u: goto label_215758;
        case 0x21575cu: goto label_21575c;
        case 0x215760u: goto label_215760;
        case 0x215764u: goto label_215764;
        case 0x215768u: goto label_215768;
        case 0x21576cu: goto label_21576c;
        case 0x215770u: goto label_215770;
        case 0x215774u: goto label_215774;
        case 0x215778u: goto label_215778;
        case 0x21577cu: goto label_21577c;
        case 0x215780u: goto label_215780;
        case 0x215784u: goto label_215784;
        case 0x215788u: goto label_215788;
        case 0x21578cu: goto label_21578c;
        case 0x215790u: goto label_215790;
        case 0x215794u: goto label_215794;
        case 0x215798u: goto label_215798;
        case 0x21579cu: goto label_21579c;
        case 0x2157a0u: goto label_2157a0;
        case 0x2157a4u: goto label_2157a4;
        case 0x2157a8u: goto label_2157a8;
        case 0x2157acu: goto label_2157ac;
        case 0x2157b0u: goto label_2157b0;
        case 0x2157b4u: goto label_2157b4;
        default: break;
    }

    ctx->pc = 0x215088u;

label_215088:
    // 0x215088: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x215088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_21508c:
    // 0x21508c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x21508cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_215090:
    // 0x215090: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x215090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_215094:
    // 0x215094: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x215094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_215098:
    // 0x215098: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x215098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21509c:
    // 0x21509c: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x21509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_2150a0:
    // 0x2150a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2150a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2150a4:
    // 0x2150a4: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x2150a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_2150a8:
    // 0x2150a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2150a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2150ac:
    // 0x2150ac: 0xe7bd01f8  swc1        $f29, 0x1F8($sp)
    ctx->pc = 0x2150acu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_2150b0:
    // 0x2150b0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2150b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2150b4:
    // 0x2150b4: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x2150b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_2150b8:
    // 0x2150b8: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x2150b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_2150bc:
    // 0x2150bc: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2150bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_2150c0:
    // 0x2150c0: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x2150c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
label_2150c4:
    // 0x2150c4: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x2150c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
label_2150c8:
    // 0x2150c8: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x2150c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
label_2150cc:
    // 0x2150cc: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x2150ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
label_2150d0:
    // 0x2150d0: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x2150d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_2150d4:
    // 0x2150d4: 0xe7bf0208  swc1        $f31, 0x208($sp)
    ctx->pc = 0x2150d4u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_2150d8:
    // 0x2150d8: 0xe7be0200  swc1        $f30, 0x200($sp)
    ctx->pc = 0x2150d8u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_2150dc:
    // 0x2150dc: 0xe7bc01f0  swc1        $f28, 0x1F0($sp)
    ctx->pc = 0x2150dcu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_2150e0:
    // 0x2150e0: 0xe7bb01e8  swc1        $f27, 0x1E8($sp)
    ctx->pc = 0x2150e0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_2150e4:
    // 0x2150e4: 0xe7ba01e0  swc1        $f26, 0x1E0($sp)
    ctx->pc = 0x2150e4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_2150e8:
    // 0x2150e8: 0xe7b901d8  swc1        $f25, 0x1D8($sp)
    ctx->pc = 0x2150e8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_2150ec:
    // 0x2150ec: 0xe7b801d0  swc1        $f24, 0x1D0($sp)
    ctx->pc = 0x2150ecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_2150f0:
    // 0x2150f0: 0xe7b701c8  swc1        $f23, 0x1C8($sp)
    ctx->pc = 0x2150f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_2150f4:
    // 0x2150f4: 0xe7b601c0  swc1        $f22, 0x1C0($sp)
    ctx->pc = 0x2150f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_2150f8:
    // 0x2150f8: 0xe7b501b8  swc1        $f21, 0x1B8($sp)
    ctx->pc = 0x2150f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_2150fc:
    // 0x2150fc: 0x8c44830c  lw          $a0, -0x7CF4($v0)
    ctx->pc = 0x2150fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
label_215100:
    // 0x215100: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x215100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_215104:
    // 0x215104: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x215104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
label_215108:
    // 0x215108: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x215108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
label_21510c:
    // 0x21510c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21510cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_215110:
    // 0x215110: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x215110u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_215114:
    // 0x215114: 0x8c830198  lw          $v1, 0x198($a0)
    ctx->pc = 0x215114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
label_215118:
    // 0x215118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21511c:
    // 0x21511c: 0x0  nop
    ctx->pc = 0x21511cu;
    // NOP
label_215120:
    // 0x215120: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_215124:
    // 0x215124: 0x0  nop
    ctx->pc = 0x215124u;
    // NOP
label_215128:
    // 0x215128: 0x0  nop
    ctx->pc = 0x215128u;
    // NOP
label_21512c:
    // 0x21512c: 0x4600a743  div.s       $f29, $f20, $f0
    ctx->pc = 0x21512cu;
    ctx->f[29] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
label_215130:
    // 0x215130: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_215134:
    if (ctx->pc == 0x215134u) {
        ctx->pc = 0x215134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215130u;
        // 0x215134: 0xe7ac0104  swc1        $f12, 0x104($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x215138u;
        goto label_215138;
    }
    ctx->pc = 0x215130u;
    {
        const bool branch_taken_0x215130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215130u;
        // 0x215134: 0xe7ac0104  swc1        $f12, 0x104($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215130) {
            ctx->pc = 0x215144u;
            goto label_215144;
        }
    }
    ctx->pc = 0x215138u;
label_215138:
    // 0x215138: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x215138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
label_21513c:
    // 0x21513c: 0x3421924a  ori         $at, $at, 0x924A
    ctx->pc = 0x21513cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37450);
label_215140:
    // 0x215140: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x215140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_215144:
    // 0x215144: 0x0  nop
    ctx->pc = 0x215144u;
    // NOP
label_215148:
    // 0x215148: 0x4601efc2  mul.s       $f31, $f29, $f1
    ctx->pc = 0x215148u;
    ctx->f[31] = FPU_MUL_S(ctx->f[29], ctx->f[1]);
label_21514c:
    // 0x21514c: 0xc076198  jal         func_1D8660
label_215150:
    if (ctx->pc == 0x215150u) {
        ctx->pc = 0x215150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21514Cu;
        // 0x215150: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215154u;
        goto label_215154;
    }
    ctx->pc = 0x21514Cu;
    SET_GPR_U32(ctx, 31, 0x215154u);
    ctx->pc = 0x215150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21514Cu;
    // 0x215150: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8660u, 0x21514Cu, 0x215154u)) {
        return;
    }
    ctx->pc = 0x215154u;
label_215154:
    // 0x215154: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x215154u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215158:
    // 0x215158: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x215158u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_21515c:
    // 0x21515c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x21515cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_215160:
    // 0x215160: 0xc4410080  lwc1        $f1, 0x80($v0)
    ctx->pc = 0x215160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215164:
    // 0x215164: 0x26102d40  addiu       $s0, $s0, 0x2D40
    ctx->pc = 0x215164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11584));
label_215168:
    // 0x215168: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x215168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_21516c:
    // 0x21516c: 0x24530fd8  addiu       $s3, $v0, 0xFD8
    ctx->pc = 0x21516cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
label_215170:
    // 0x215170: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x215170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_215174:
    // 0x215174: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215178:
    // 0x215178: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x215178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
label_21517c:
    // 0x21517c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x21517cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_215180:
    // 0x215180: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x215180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
label_215184:
    // 0x215184: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x215184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_215188:
    // 0x215188: 0x0  nop
    ctx->pc = 0x215188u;
    // NOP
label_21518c:
    // 0x21518c: 0x0  nop
    ctx->pc = 0x21518cu;
    // NOP
label_215190:
    // 0x215190: 0x46010703  div.s       $f28, $f0, $f1
    ctx->pc = 0x215190u;
    ctx->f[28] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_215194:
    // 0x215194: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x215194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_215198:
    // 0x215198: 0xc6be0004  lwc1        $f30, 0x4($s5)
    ctx->pc = 0x215198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_21519c:
    // 0x21519c: 0x40f809  jalr        $v0
label_2151a0:
    if (ctx->pc == 0x2151A0u) {
        ctx->pc = 0x2151A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21519Cu;
        // 0x2151a0: 0xc6bb0000  lwc1        $f27, 0x0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2151A4u;
        goto label_2151a4;
    }
    ctx->pc = 0x21519Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2151A4u);
        ctx->pc = 0x2151A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21519Cu;
        // 0x2151a0: 0xc6bb0000  lwc1        $f27, 0x0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21519Cu, 0x2151A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2151A4u;
label_2151a4:
    // 0x2151a4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2151a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2151a8:
    // 0x2151a8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2151a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2151ac:
    // 0x2151ac: 0x40f809  jalr        $v0
label_2151b0:
    if (ctx->pc == 0x2151B0u) {
        ctx->pc = 0x2151B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2151ACu;
        // 0x2151b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2151B4u;
        goto label_2151b4;
    }
    ctx->pc = 0x2151ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2151B4u);
        ctx->pc = 0x2151B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2151ACu;
        // 0x2151b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2151ACu, 0x2151B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2151B4u;
label_2151b4:
    // 0x2151b4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2151b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2151b8:
    // 0x2151b8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2151b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2151bc:
    // 0x2151bc: 0x40f809  jalr        $v0
label_2151c0:
    if (ctx->pc == 0x2151C0u) {
        ctx->pc = 0x2151C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2151BCu;
        // 0x2151c0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2151C4u;
        goto label_2151c4;
    }
    ctx->pc = 0x2151BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2151C4u);
        ctx->pc = 0x2151C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2151BCu;
        // 0x2151c0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2151BCu, 0x2151C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2151C4u;
label_2151c4:
    // 0x2151c4: 0x12400159  beqz        $s2, . + 4 + (0x159 << 2)
label_2151c8:
    if (ctx->pc == 0x2151C8u) {
        ctx->pc = 0x2151C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2151C4u;
        // 0x2151c8: 0x2417000a  addiu       $s7, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2151CCu;
        goto label_2151cc;
    }
    ctx->pc = 0x2151C4u;
    {
        const bool branch_taken_0x2151c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2151C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2151C4u;
        // 0x2151c8: 0x2417000a  addiu       $s7, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2151c4) {
            ctx->pc = 0x21572Cu;
            goto label_21572c;
        }
    }
    ctx->pc = 0x2151CCu;
label_2151cc:
    // 0x2151cc: 0x3c16005c  lui         $s6, 0x5C
    ctx->pc = 0x2151ccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)92 << 16));
label_2151d0:
    // 0x2151d0: 0x8e220284  lw          $v0, 0x284($s1)
    ctx->pc = 0x2151d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
label_2151d4:
    // 0x2151d4: 0x4600f906  mov.s       $f4, $f31
    ctx->pc = 0x2151d4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[31]);
label_2151d8:
    // 0x2151d8: 0x8e280278  lw          $t0, 0x278($s1)
    ctx->pc = 0x2151d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_2151dc:
    // 0x2151dc: 0x4600e946  mov.s       $f5, $f29
    ctx->pc = 0x2151dcu;
    ctx->f[5] = FPU_MOV_S(ctx->f[29]);
label_2151e0:
    // 0x2151e0: 0x8e250264  lw          $a1, 0x264($s1)
    ctx->pc = 0x2151e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_2151e4:
    // 0x2151e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2151e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2151e8:
    // 0x2151e8: 0xae220280  sw          $v0, 0x280($s1)
    ctx->pc = 0x2151e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 2));
label_2151ec:
    // 0x2151ec: 0xae280274  sw          $t0, 0x274($s1)
    ctx->pc = 0x2151ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 8));
label_2151f0:
    // 0x2151f0: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x2151f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_2151f4:
    // 0x2151f4: 0x9227025c  lbu         $a3, 0x25C($s1)
    ctx->pc = 0x2151f4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
label_2151f8:
    // 0x2151f8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2151f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2151fc:
    // 0x2151fc: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2151fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_215200:
    // 0x215200: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x215200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_215204:
    // 0x215204: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x215204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_215208:
    // 0x215208: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x215208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_21520c:
    // 0x21520c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x21520cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_215210:
    // 0x215210: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_215214:
    if (ctx->pc == 0x215214u) {
        ctx->pc = 0x215214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215210u;
        // 0x215214: 0xa7a30100  sh          $v1, 0x100($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215218u;
        goto label_215218;
    }
    ctx->pc = 0x215210u;
    {
        const bool branch_taken_0x215210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x215214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215210u;
        // 0x215214: 0xa7a30100  sh          $v1, 0x100($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215210) {
            ctx->pc = 0x215228u;
            goto label_215228;
        }
    }
    ctx->pc = 0x215218u;
label_215218:
    // 0x215218: 0x8e260260  lw          $a2, 0x260($s1)
    ctx->pc = 0x215218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_21521c:
    // 0x21521c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21521cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_215220:
    // 0x215220: 0x14570003  bne         $v0, $s7, . + 4 + (0x3 << 2)
label_215224:
    if (ctx->pc == 0x215224u) {
        ctx->pc = 0x215224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215220u;
        // 0x215224: 0x2469021  addu        $s2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215228u;
        goto label_215228;
    }
    ctx->pc = 0x215220u;
    {
        const bool branch_taken_0x215220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x215224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215220u;
        // 0x215224: 0x2469021  addu        $s2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215220) {
            ctx->pc = 0x215230u;
            goto label_215230;
        }
    }
    ctx->pc = 0x215228u;
label_215228:
    // 0x215228: 0x10000067  b           . + 4 + (0x67 << 2)
label_21522c:
    if (ctx->pc == 0x21522Cu) {
        ctx->pc = 0x21522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215228u;
        // 0x21522c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215230u;
        goto label_215230;
    }
    ctx->pc = 0x215228u;
    {
        const bool branch_taken_0x215228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215228u;
        // 0x21522c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215228) {
            ctx->pc = 0x2153C8u;
            goto label_2153c8;
        }
    }
    ctx->pc = 0x215230u;
label_215230:
    // 0x215230: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x215230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_215234:
    // 0x215234: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_215238:
    if (ctx->pc == 0x215238u) {
        ctx->pc = 0x215238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215234u;
        // 0x215238: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21523Cu;
        goto label_21523c;
    }
    ctx->pc = 0x215234u;
    {
        const bool branch_taken_0x215234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215234u;
        // 0x215238: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215234) {
            ctx->pc = 0x215378u;
            goto label_215378;
        }
    }
    ctx->pc = 0x21523Cu;
label_21523c:
    // 0x21523c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21523cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_215240:
    // 0x215240: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x215240u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_215244:
    // 0x215244: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x215244u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_215248:
    // 0x215248: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x215248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_21524c:
    // 0x21524c: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x21524cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_215250:
    // 0x215250: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x215250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_215254:
    // 0x215254: 0x97a60100  lhu         $a2, 0x100($sp)
    ctx->pc = 0x215254u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
label_215258:
    // 0x215258: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x215258u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_21525c:
    // 0x21525c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x21525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_215260:
    // 0x215260: 0x10c4001b  beq         $a2, $a0, . + 4 + (0x1B << 2)
label_215264:
    if (ctx->pc == 0x215264u) {
        ctx->pc = 0x215264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215260u;
        // 0x215264: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x215268u;
        goto label_215268;
    }
    ctx->pc = 0x215260u;
    {
        const bool branch_taken_0x215260 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x215264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215260u;
        // 0x215264: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215260) {
            ctx->pc = 0x2152D0u;
            goto label_2152d0;
        }
    }
    ctx->pc = 0x215268u;
label_215268:
    // 0x215268: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x215268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_21526c:
    // 0x21526c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_215270:
    if (ctx->pc == 0x215270u) {
        ctx->pc = 0x215270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21526Cu;
        // 0x215270: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215274u;
        goto label_215274;
    }
    ctx->pc = 0x21526Cu;
    {
        const bool branch_taken_0x21526c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21526Cu;
        // 0x215270: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21526c) {
            ctx->pc = 0x215284u;
            goto label_215284;
        }
    }
    ctx->pc = 0x215274u;
label_215274:
    // 0x215274: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
label_215278:
    if (ctx->pc == 0x215278u) {
        ctx->pc = 0x215278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215274u;
        // 0x215278: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21527Cu;
        goto label_21527c;
    }
    ctx->pc = 0x215274u;
    {
        const bool branch_taken_0x215274 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x215278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215274u;
        // 0x215278: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215274) {
            ctx->pc = 0x2152A0u;
            goto label_2152a0;
        }
    }
    ctx->pc = 0x21527Cu;
label_21527c:
    // 0x21527c: 0x10000053  b           . + 4 + (0x53 << 2)
label_215280:
    if (ctx->pc == 0x215280u) {
        ctx->pc = 0x215280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21527Cu;
        // 0x215280: 0xc6a00000  lwc1        $f0, 0x0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x215284u;
        goto label_215284;
    }
    ctx->pc = 0x21527Cu;
    {
        const bool branch_taken_0x21527c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21527Cu;
        // 0x215280: 0xc6a00000  lwc1        $f0, 0x0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21527c) {
            ctx->pc = 0x2153CCu;
            goto label_2153cc;
        }
    }
    ctx->pc = 0x215284u;
label_215284:
    // 0x215284: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x215284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_215288:
    // 0x215288: 0x10c20013  beq         $a2, $v0, . + 4 + (0x13 << 2)
label_21528c:
    if (ctx->pc == 0x21528Cu) {
        ctx->pc = 0x21528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215288u;
        // 0x21528c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215290u;
        goto label_215290;
    }
    ctx->pc = 0x215288u;
    {
        const bool branch_taken_0x215288 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x21528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215288u;
        // 0x21528c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215288) {
            ctx->pc = 0x2152D8u;
            goto label_2152d8;
        }
    }
    ctx->pc = 0x215290u;
label_215290:
    // 0x215290: 0x10c20029  beq         $a2, $v0, . + 4 + (0x29 << 2)
label_215294:
    if (ctx->pc == 0x215294u) {
        ctx->pc = 0x215294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215290u;
        // 0x215294: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215298u;
        goto label_215298;
    }
    ctx->pc = 0x215290u;
    {
        const bool branch_taken_0x215290 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x215294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215290u;
        // 0x215294: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215290) {
            ctx->pc = 0x215338u;
            goto label_215338;
        }
    }
    ctx->pc = 0x215298u;
label_215298:
    // 0x215298: 0x1000004c  b           . + 4 + (0x4C << 2)
label_21529c:
    if (ctx->pc == 0x21529Cu) {
        ctx->pc = 0x21529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215298u;
        // 0x21529c: 0xc6a00000  lwc1        $f0, 0x0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2152A0u;
        goto label_2152a0;
    }
    ctx->pc = 0x215298u;
    {
        const bool branch_taken_0x215298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215298u;
        // 0x21529c: 0xc6a00000  lwc1        $f0, 0x0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215298) {
            ctx->pc = 0x2153CCu;
            goto label_2153cc;
        }
    }
    ctx->pc = 0x2152A0u;
label_2152a0:
    // 0x2152a0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_2152a4:
    if (ctx->pc == 0x2152A4u) {
        ctx->pc = 0x2152A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152A0u;
        // 0x2152a4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2152A8u;
        goto label_2152a8;
    }
    ctx->pc = 0x2152A0u;
    {
        const bool branch_taken_0x2152a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2152A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152A0u;
        // 0x2152a4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2152a0) {
            ctx->pc = 0x2152BCu;
            goto label_2152bc;
        }
    }
    ctx->pc = 0x2152A8u;
label_2152a8:
    // 0x2152a8: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2152a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2152ac:
    // 0x2152ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2152acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2152b0:
    // 0x2152b0: 0xae230280  sw          $v1, 0x280($s1)
    ctx->pc = 0x2152b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 3));
label_2152b4:
    // 0x2152b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2152b8:
    if (ctx->pc == 0x2152B8u) {
        ctx->pc = 0x2152B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152B4u;
        // 0x2152b8: 0xae230284  sw          $v1, 0x284($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2152BCu;
        goto label_2152bc;
    }
    ctx->pc = 0x2152B4u;
    {
        const bool branch_taken_0x2152b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2152B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152B4u;
        // 0x2152b8: 0xae230284  sw          $v1, 0x284($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2152b4) {
            ctx->pc = 0x2152C8u;
            goto label_2152c8;
        }
    }
    ctx->pc = 0x2152BCu;
label_2152bc:
    // 0x2152bc: 0x8e22027c  lw          $v0, 0x27C($s1)
    ctx->pc = 0x2152bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
label_2152c0:
    // 0x2152c0: 0xae220280  sw          $v0, 0x280($s1)
    ctx->pc = 0x2152c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 2));
label_2152c4:
    // 0x2152c4: 0xae220284  sw          $v0, 0x284($s1)
    ctx->pc = 0x2152c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 2));
label_2152c8:
    // 0x2152c8: 0x1000003e  b           . + 4 + (0x3E << 2)
label_2152cc:
    if (ctx->pc == 0x2152CCu) {
        ctx->pc = 0x2152CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152C8u;
        // 0x2152cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2152D0u;
        goto label_2152d0;
    }
    ctx->pc = 0x2152C8u;
    {
        const bool branch_taken_0x2152c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2152CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152C8u;
        // 0x2152cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2152c8) {
            ctx->pc = 0x2153C4u;
            goto label_2153c4;
        }
    }
    ctx->pc = 0x2152D0u;
label_2152d0:
    // 0x2152d0: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2152d4:
    if (ctx->pc == 0x2152D4u) {
        ctx->pc = 0x2152D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152D0u;
        // 0x2152d4: 0xa7a00100  sh          $zero, 0x100($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2152D8u;
        goto label_2152d8;
    }
    ctx->pc = 0x2152D0u;
    {
        const bool branch_taken_0x2152d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2152D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152D0u;
        // 0x2152d4: 0xa7a00100  sh          $zero, 0x100($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2152d0) {
            ctx->pc = 0x2153C4u;
            goto label_2153c4;
        }
    }
    ctx->pc = 0x2152D8u;
label_2152d8:
    // 0x2152d8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2152d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2152dc:
    // 0x2152dc: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x2152dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2152e0:
    // 0x2152e0: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x2152e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2152e4:
    // 0x2152e4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2152e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_2152e8:
    // 0x2152e8: 0xae240274  sw          $a0, 0x274($s1)
    ctx->pc = 0x2152e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 4));
label_2152ec:
    // 0x2152ec: 0x244202a0  addiu       $v0, $v0, 0x2A0
    ctx->pc = 0x2152ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
label_2152f0:
    // 0x2152f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2152f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2152f4:
    // 0x2152f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2152f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2152f8:
    // 0x2152f8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2152f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2152fc:
    // 0x2152fc: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x2152fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_215300:
    // 0x215300: 0xae220280  sw          $v0, 0x280($s1)
    ctx->pc = 0x215300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 2));
label_215304:
    // 0x215304: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x215304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_215308:
    // 0x215308: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x215308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
label_21530c:
    // 0x21530c: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x21530cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
label_215310:
    // 0x215310: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215314:
    // 0x215314: 0x8c62830c  lw          $v0, -0x7CF4($v1)
    ctx->pc = 0x215314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935308)));
label_215318:
    // 0x215318: 0x8c430198  lw          $v1, 0x198($v0)
    ctx->pc = 0x215318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 408)));
label_21531c:
    // 0x21531c: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_215320:
    if (ctx->pc == 0x215320u) {
        ctx->pc = 0x215320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21531Cu;
        // 0x215320: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x215324u;
        goto label_215324;
    }
    ctx->pc = 0x21531Cu;
    {
        const bool branch_taken_0x21531c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21531Cu;
        // 0x215320: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21531c) {
            ctx->pc = 0x2153C4u;
            goto label_2153c4;
        }
    }
    ctx->pc = 0x215324u;
label_215324:
    // 0x215324: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x215324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
label_215328:
    // 0x215328: 0x3421924a  ori         $at, $at, 0x924A
    ctx->pc = 0x215328u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37450);
label_21532c:
    // 0x21532c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21532cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215330:
    // 0x215330: 0x10000024  b           . + 4 + (0x24 << 2)
label_215334:
    if (ctx->pc == 0x215334u) {
        ctx->pc = 0x215334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215330u;
        // 0x215334: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x215338u;
        goto label_215338;
    }
    ctx->pc = 0x215330u;
    {
        const bool branch_taken_0x215330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215330u;
        // 0x215334: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215330) {
            ctx->pc = 0x2153C4u;
            goto label_2153c4;
        }
    }
    ctx->pc = 0x215338u;
label_215338:
    // 0x215338: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x215338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_21533c:
    // 0x21533c: 0x8c4302a8  lw          $v1, 0x2A8($v0)
    ctx->pc = 0x21533cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
label_215340:
    // 0x215340: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_215344:
    if (ctx->pc == 0x215344u) {
        ctx->pc = 0x215344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215340u;
        // 0x215344: 0x8ec202a4  lw          $v0, 0x2A4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215348u;
        goto label_215348;
    }
    ctx->pc = 0x215340u;
    {
        const bool branch_taken_0x215340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215340u;
        // 0x215344: 0x8ec202a4  lw          $v0, 0x2A4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215340) {
            ctx->pc = 0x2153C4u;
            goto label_2153c4;
        }
    }
    ctx->pc = 0x215348u;
label_215348:
    // 0x215348: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_21534c:
    if (ctx->pc == 0x21534Cu) {
        ctx->pc = 0x21534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215348u;
        // 0x21534c: 0xae220274  sw          $v0, 0x274($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215350u;
        goto label_215350;
    }
    ctx->pc = 0x215348u;
    {
        const bool branch_taken_0x215348 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215348u;
        // 0x21534c: 0xae220274  sw          $v0, 0x274($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215348) {
            ctx->pc = 0x215358u;
            goto label_215358;
        }
    }
    ctx->pc = 0x215350u;
label_215350:
    // 0x215350: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x215350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_215354:
    // 0x215354: 0xae220274  sw          $v0, 0x274($s1)
    ctx->pc = 0x215354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 2));
label_215358:
    // 0x215358: 0x8e220274  lw          $v0, 0x274($s1)
    ctx->pc = 0x215358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_21535c:
    // 0x21535c: 0x10000019  b           . + 4 + (0x19 << 2)
label_215360:
    if (ctx->pc == 0x215360u) {
        ctx->pc = 0x215360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21535Cu;
        // 0x215360: 0xae220278  sw          $v0, 0x278($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215364u;
        goto label_215364;
    }
    ctx->pc = 0x21535Cu;
    {
        const bool branch_taken_0x21535c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21535Cu;
        // 0x215360: 0xae220278  sw          $v0, 0x278($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21535c) {
            ctx->pc = 0x2153C4u;
            goto label_2153c4;
        }
    }
    ctx->pc = 0x215364u;
label_215364:
    // 0x215364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215368:
    // 0x215368: 0x0  nop
    ctx->pc = 0x215368u;
    // NOP
label_21536c:
    // 0x21536c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21536cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_215370:
    // 0x215370: 0x1000005b  b           . + 4 + (0x5B << 2)
label_215374:
    if (ctx->pc == 0x215374u) {
        ctx->pc = 0x215374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215370u;
        // 0x215374: 0x46040002  mul.s       $f0, $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x215378u;
        goto label_215378;
    }
    ctx->pc = 0x215370u;
    {
        const bool branch_taken_0x215370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215370u;
        // 0x215374: 0x46040002  mul.s       $f0, $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215370) {
            ctx->pc = 0x2154E0u;
            goto label_2154e0;
        }
    }
    ctx->pc = 0x215378u;
label_215378:
    // 0x215378: 0x9622002c  lhu         $v0, 0x2C($s1)
    ctx->pc = 0x215378u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_21537c:
    // 0x21537c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x21537cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_215380:
    // 0x215380: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_215384:
    if (ctx->pc == 0x215384u) {
        ctx->pc = 0x215384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215380u;
        // 0x215384: 0x97a20100  lhu         $v0, 0x100($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215388u;
        goto label_215388;
    }
    ctx->pc = 0x215380u;
    {
        const bool branch_taken_0x215380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215380u;
        // 0x215384: 0x97a20100  lhu         $v0, 0x100($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215380) {
            ctx->pc = 0x215398u;
            goto label_215398;
        }
    }
    ctx->pc = 0x215388u;
label_215388:
    // 0x215388: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x215388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_21538c:
    // 0x21538c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21538cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_215390:
    // 0x215390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x215390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_215394:
    // 0x215394: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x215394u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_215398:
    // 0x215398: 0x1120000a  beqz        $t1, . + 4 + (0xA << 2)
label_21539c:
    if (ctx->pc == 0x21539Cu) {
        ctx->pc = 0x21539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215398u;
        // 0x21539c: 0x8ec202a4  lw          $v0, 0x2A4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2153A0u;
        goto label_2153a0;
    }
    ctx->pc = 0x215398u;
    {
        const bool branch_taken_0x215398 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x21539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215398u;
        // 0x21539c: 0x8ec202a4  lw          $v0, 0x2A4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215398) {
            ctx->pc = 0x2153C4u;
            goto label_2153c4;
        }
    }
    ctx->pc = 0x2153A0u;
label_2153a0:
    // 0x2153a0: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
label_2153a4:
    if (ctx->pc == 0x2153A4u) {
        ctx->pc = 0x2153A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153A0u;
        // 0x2153a4: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2153A8u;
        goto label_2153a8;
    }
    ctx->pc = 0x2153A0u;
    {
        const bool branch_taken_0x2153a0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x2153A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153A0u;
        // 0x2153a4: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153a0) {
            ctx->pc = 0x2153C8u;
            goto label_2153c8;
        }
    }
    ctx->pc = 0x2153A8u;
label_2153a8:
    // 0x2153a8: 0x91220006  lbu         $v0, 0x6($t1)
    ctx->pc = 0x2153a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
label_2153ac:
    // 0x2153ac: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2153acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_2153b0:
    // 0x2153b0: 0x24832d40  addiu       $v1, $a0, 0x2D40
    ctx->pc = 0x2153b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 11584));
label_2153b4:
    // 0x2153b4: 0xa0620006  sb          $v0, 0x6($v1)
    ctx->pc = 0x2153b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 2));
label_2153b8:
    // 0x2153b8: 0x95240002  lhu         $a0, 0x2($t1)
    ctx->pc = 0x2153b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
label_2153bc:
    // 0x2153bc: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x2153bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2153c0:
    // 0x2153c0: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x2153c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
label_2153c4:
    // 0x2153c4: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2153c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2153c8:
    // 0x2153c8: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2153c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2153cc:
    // 0x2153cc: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x2153ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2153d0:
    // 0x2153d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2153d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2153d4:
    // 0x2153d4: 0x461b0034  c.lt.s      $f0, $f27
    ctx->pc = 0x2153d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2153d8:
    // 0x2153d8: 0x0  nop
    ctx->pc = 0x2153d8u;
    // NOP
label_2153dc:
    // 0x2153dc: 0x450100cf  bc1t        . + 4 + (0xCF << 2)
label_2153e0:
    if (ctx->pc == 0x2153E0u) {
        ctx->pc = 0x2153E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153DCu;
        // 0x2153e0: 0x97a20100  lhu         $v0, 0x100($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2153E4u;
        goto label_2153e4;
    }
    ctx->pc = 0x2153DCu;
    {
        const bool branch_taken_0x2153dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2153E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153DCu;
        // 0x2153e0: 0x97a20100  lhu         $v0, 0x100($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153dc) {
            ctx->pc = 0x21571Cu;
            goto label_21571c;
        }
    }
    ctx->pc = 0x2153E4u;
label_2153e4:
    // 0x2153e4: 0x104000cd  beqz        $v0, . + 4 + (0xCD << 2)
label_2153e8:
    if (ctx->pc == 0x2153E8u) {
        ctx->pc = 0x2153ECu;
        goto label_2153ec;
    }
    ctx->pc = 0x2153E4u;
    {
        const bool branch_taken_0x2153e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2153e4) {
            ctx->pc = 0x21571Cu;
            goto label_21571c;
        }
    }
    ctx->pc = 0x2153ECu;
label_2153ec:
    // 0x2153ec: 0x105700cb  beq         $v0, $s7, . + 4 + (0xCB << 2)
label_2153f0:
    if (ctx->pc == 0x2153F0u) {
        ctx->pc = 0x2153F4u;
        goto label_2153f4;
    }
    ctx->pc = 0x2153ECu;
    {
        const bool branch_taken_0x2153ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x2153ec) {
            ctx->pc = 0x21571Cu;
            goto label_21571c;
        }
    }
    ctx->pc = 0x2153F4u;
label_2153f4:
    // 0x2153f4: 0x120000c7  beqz        $s0, . + 4 + (0xC7 << 2)
label_2153f8:
    if (ctx->pc == 0x2153F8u) {
        ctx->pc = 0x2153FCu;
        goto label_2153fc;
    }
    ctx->pc = 0x2153F4u;
    {
        const bool branch_taken_0x2153f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2153f4) {
            ctx->pc = 0x215714u;
            goto label_215714;
        }
    }
    ctx->pc = 0x2153FCu;
label_2153fc:
    // 0x2153fc: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2153fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_215400:
    // 0x215400: 0x82030006  lb          $v1, 0x6($s0)
    ctx->pc = 0x215400u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_215404:
    // 0x215404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215408:
    // 0x215408: 0x0  nop
    ctx->pc = 0x215408u;
    // NOP
label_21540c:
    // 0x21540c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21540cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_215410:
    // 0x215410: 0x106000bf  beqz        $v1, . + 4 + (0xBF << 2)
label_215414:
    if (ctx->pc == 0x215414u) {
        ctx->pc = 0x215414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215410u;
        // 0x215414: 0x46040642  mul.s       $f25, $f0, $f4 (Delay Slot)
        ctx->f[25] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x215418u;
        goto label_215418;
    }
    ctx->pc = 0x215410u;
    {
        const bool branch_taken_0x215410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215410u;
        // 0x215414: 0x46040642  mul.s       $f25, $f0, $f4 (Delay Slot)
        ctx->f[25] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215410) {
            ctx->pc = 0x215710u;
            goto label_215710;
        }
    }
    ctx->pc = 0x215418u;
label_215418:
    // 0x215418: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x215418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_21541c:
    // 0x21541c: 0x0  nop
    ctx->pc = 0x21541cu;
    // NOP
label_215420:
    // 0x215420: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x215420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_215424:
    // 0x215424: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x215424u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_215428:
    // 0x215428: 0x82030005  lb          $v1, 0x5($s0)
    ctx->pc = 0x215428u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_21542c:
    // 0x21542c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21542cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_215430:
    // 0x215430: 0x0  nop
    ctx->pc = 0x215430u;
    // NOP
label_215434:
    // 0x215434: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x215434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_215438:
    // 0x215438: 0x82040007  lb          $a0, 0x7($s0)
    ctx->pc = 0x215438u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_21543c:
    // 0x21543c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21543cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215440:
    // 0x215440: 0x0  nop
    ctx->pc = 0x215440u;
    // NOP
label_215444:
    // 0x215444: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_215448:
    // 0x215448: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x215448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_21544c:
    // 0x21544c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x21544cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_215450:
    // 0x215450: 0x0  nop
    ctx->pc = 0x215450u;
    // NOP
label_215454:
    // 0x215454: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x215454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_215458:
    // 0x215458: 0x97a70100  lhu         $a3, 0x100($sp)
    ctx->pc = 0x215458u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
label_21545c:
    // 0x21545c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x21545cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_215460:
    // 0x215460: 0x8e250274  lw          $a1, 0x274($s1)
    ctx->pc = 0x215460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_215464:
    // 0x215464: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x215464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_215468:
    // 0x215468: 0x46041d82  mul.s       $f22, $f3, $f4
    ctx->pc = 0x215468u;
    ctx->f[22] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_21546c:
    // 0x21546c: 0x460515c2  mul.s       $f23, $f2, $f5
    ctx->pc = 0x21546cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_215470:
    // 0x215470: 0x4601dd00  add.s       $f20, $f27, $f1
    ctx->pc = 0x215470u;
    ctx->f[20] = FPU_ADD_S(ctx->f[27], ctx->f[1]);
label_215474:
    // 0x215474: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_215478:
    if (ctx->pc == 0x215478u) {
        ctx->pc = 0x215478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215474u;
        // 0x215478: 0x4600f541  sub.s       $f21, $f30, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[30], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21547Cu;
        goto label_21547c;
    }
    ctx->pc = 0x215474u;
    {
        const bool branch_taken_0x215474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215474u;
        // 0x215478: 0x4600f541  sub.s       $f21, $f30, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[30], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215474) {
            ctx->pc = 0x2154CCu;
            goto label_2154cc;
        }
    }
    ctx->pc = 0x21547Cu;
label_21547c:
    // 0x21547c: 0xf41021  addu        $v0, $a3, $s4
    ctx->pc = 0x21547cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
label_215480:
    // 0x215480: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x215480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215484:
    // 0x215484: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x215484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_215488:
    // 0x215488: 0x4617ae00  add.s       $f24, $f21, $f23
    ctx->pc = 0x215488u;
    ctx->f[24] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_21548c:
    // 0x21548c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21548cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_215490:
    // 0x215490: 0x4616a680  add.s       $f26, $f20, $f22
    ctx->pc = 0x215490u;
    ctx->f[26] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_215494:
    // 0x215494: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x215494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_215498:
    // 0x215498: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x215498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21549c:
    // 0x21549c: 0x8c660060  lw          $a2, 0x60($v1)
    ctx->pc = 0x21549cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_2154a0:
    // 0x2154a0: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
label_2154a4:
    if (ctx->pc == 0x2154A4u) {
        ctx->pc = 0x2154A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154A0u;
        // 0x2154a4: 0x8c43005c  lw          $v1, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2154A8u;
        goto label_2154a8;
    }
    ctx->pc = 0x2154A0u;
    {
        const bool branch_taken_0x2154a0 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x2154A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154A0u;
        // 0x2154a4: 0x8c43005c  lw          $v1, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154a0) {
            ctx->pc = 0x2154D4u;
            goto label_2154d4;
        }
    }
    ctx->pc = 0x2154A8u;
label_2154a8:
    // 0x2154a8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2154a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2154ac:
    // 0x2154ac: 0x14470004  bne         $v0, $a3, . + 4 + (0x4 << 2)
label_2154b0:
    if (ctx->pc == 0x2154B0u) {
        ctx->pc = 0x2154B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154ACu;
        // 0x2154b0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2154B4u;
        goto label_2154b4;
    }
    ctx->pc = 0x2154ACu;
    {
        const bool branch_taken_0x2154ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x2154B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154ACu;
        // 0x2154b0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154ac) {
            ctx->pc = 0x2154C0u;
            goto label_2154c0;
        }
    }
    ctx->pc = 0x2154B4u;
label_2154b4:
    // 0x2154b4: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2154b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2154b8:
    // 0x2154b8: 0x5054ffaa  beql        $v0, $s4, . + 4 + (-0x56 << 2)
label_2154bc:
    if (ctx->pc == 0x2154BCu) {
        ctx->pc = 0x2154BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154B8u;
        // 0x2154bc: 0x84620004  lh          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2154C0u;
        goto label_2154c0;
    }
    ctx->pc = 0x2154B8u;
    {
        const bool branch_taken_0x2154b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x2154b8) {
            ctx->pc = 0x2154BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2154B8u;
            // 0x2154bc: 0x84620004  lh          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215364;
        }
    }
    ctx->pc = 0x2154C0u;
label_2154c0:
    // 0x2154c0: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2154c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2154c4:
    // 0x2154c4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2154c8:
    if (ctx->pc == 0x2154C8u) {
        ctx->pc = 0x2154C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154C4u;
        // 0x2154c8: 0x24630006  addiu       $v1, $v1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2154CCu;
        goto label_2154cc;
    }
    ctx->pc = 0x2154C4u;
    {
        const bool branch_taken_0x2154c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2154C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154C4u;
        // 0x2154c8: 0x24630006  addiu       $v1, $v1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154c4) {
            ctx->pc = 0x2154A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2154a8;
        }
    }
    ctx->pc = 0x2154CCu;
label_2154cc:
    // 0x2154cc: 0x4617ae00  add.s       $f24, $f21, $f23
    ctx->pc = 0x2154ccu;
    ctx->f[24] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_2154d0:
    // 0x2154d0: 0x4616a680  add.s       $f26, $f20, $f22
    ctx->pc = 0x2154d0u;
    ctx->f[26] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_2154d4:
    // 0x2154d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2154d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2154d8:
    // 0x2154d8: 0x0  nop
    ctx->pc = 0x2154d8u;
    // NOP
label_2154dc:
    // 0x2154dc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2154dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2154e0:
    // 0x2154e0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_2154e4:
    if (ctx->pc == 0x2154E4u) {
        ctx->pc = 0x2154E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154E0u;
        // 0x2154e4: 0x4600ce40  add.s       $f25, $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2154E8u;
        goto label_2154e8;
    }
    ctx->pc = 0x2154E0u;
    {
        const bool branch_taken_0x2154e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2154E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154E0u;
        // 0x2154e4: 0x4600ce40  add.s       $f25, $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154e0) {
            ctx->pc = 0x215504u;
            goto label_215504;
        }
    }
    ctx->pc = 0x2154E8u;
label_2154e8:
    // 0x2154e8: 0x53c50007  beql        $fp, $a1, . + 4 + (0x7 << 2)
label_2154ec:
    if (ctx->pc == 0x2154ECu) {
        ctx->pc = 0x2154ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154E8u;
        // 0x2154ec: 0x8e23027c  lw          $v1, 0x27C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2154F0u;
        goto label_2154f0;
    }
    ctx->pc = 0x2154E8u;
    {
        const bool branch_taken_0x2154e8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 5));
        if (branch_taken_0x2154e8) {
            ctx->pc = 0x2154ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2154E8u;
            // 0x2154ec: 0x8e23027c  lw          $v1, 0x27C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215508u;
            goto label_215508;
        }
    }
    ctx->pc = 0x2154F0u;
label_2154f0:
    // 0x2154f0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2154f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2154f4:
    // 0x2154f4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2154f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2154f8:
    // 0x2154f8: 0x40f809  jalr        $v0
label_2154fc:
    if (ctx->pc == 0x2154FCu) {
        ctx->pc = 0x2154FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154F8u;
        // 0x2154fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215500u;
        goto label_215500;
    }
    ctx->pc = 0x2154F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x215500u);
        ctx->pc = 0x2154FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154F8u;
        // 0x2154fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2154F8u, 0x215500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215500u;
label_215500:
    // 0x215500: 0x8e3e0274  lw          $fp, 0x274($s1)
    ctx->pc = 0x215500u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_215504:
    // 0x215504: 0x8e23027c  lw          $v1, 0x27C($s1)
    ctx->pc = 0x215504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
label_215508:
    // 0x215508: 0x8e240280  lw          $a0, 0x280($s1)
    ctx->pc = 0x215508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
label_21550c:
    // 0x21550c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x21550cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_215510:
    // 0x215510: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x215510u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_215514:
    // 0x215514: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x215514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_215518:
    // 0x215518: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x215518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21551c:
    // 0x21551c: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x21551cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_215520:
    // 0x215520: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x215520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215524:
    // 0x215524: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x215524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_215528:
    // 0x215528: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x215528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_21552c:
    // 0x21552c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x21552cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_215530:
    // 0x215530: 0x8e230280  lw          $v1, 0x280($s1)
    ctx->pc = 0x215530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
label_215534:
    // 0x215534: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x215534u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_215538:
    // 0x215538: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x215538u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_21553c:
    // 0x21553c: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x21553cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_215540:
    // 0x215540: 0xe7bc0018  swc1        $f28, 0x18($sp)
    ctx->pc = 0x215540u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_215544:
    // 0x215544: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x215544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_215548:
    // 0x215548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21554c:
    // 0x21554c: 0x0  nop
    ctx->pc = 0x21554cu;
    // NOP
label_215550:
    // 0x215550: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_215554:
    // 0x215554: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x215554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_215558:
    // 0x215558: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x215558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_21555c:
    // 0x21555c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21555cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215560:
    // 0x215560: 0x0  nop
    ctx->pc = 0x215560u;
    // NOP
label_215564:
    // 0x215564: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_215568:
    // 0x215568: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x215568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_21556c:
    // 0x21556c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x21556cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_215570:
    // 0x215570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215574:
    // 0x215574: 0x0  nop
    ctx->pc = 0x215574u;
    // NOP
label_215578:
    // 0x215578: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_21557c:
    // 0x21557c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x21557cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_215580:
    // 0x215580: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x215580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_215584:
    // 0x215584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215588:
    // 0x215588: 0x0  nop
    ctx->pc = 0x215588u;
    // NOP
label_21558c:
    // 0x21558c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21558cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_215590:
    // 0x215590: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x215590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_215594:
    // 0x215594: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x215594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_215598:
    // 0x215598: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x215598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21559c:
    // 0x21559c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x21559cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2155a0:
    // 0x2155a0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2155a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2155a4:
    // 0x2155a4: 0xe4980004  swc1        $f24, 0x4($a0)
    ctx->pc = 0x2155a4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2155a8:
    // 0x2155a8: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2155a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2155ac:
    // 0x2155ac: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x2155acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_2155b0:
    // 0x2155b0: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x2155b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2155b4:
    // 0x2155b4: 0xe49c0018  swc1        $f28, 0x18($a0)
    ctx->pc = 0x2155b4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_2155b8:
    // 0x2155b8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2155b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2155bc:
    // 0x2155bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2155bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2155c0:
    // 0x2155c0: 0x0  nop
    ctx->pc = 0x2155c0u;
    // NOP
label_2155c4:
    // 0x2155c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2155c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2155c8:
    // 0x2155c8: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2155c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_2155cc:
    // 0x2155cc: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x2155ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_2155d0:
    // 0x2155d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2155d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2155d4:
    // 0x2155d4: 0x0  nop
    ctx->pc = 0x2155d4u;
    // NOP
label_2155d8:
    // 0x2155d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2155d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2155dc:
    // 0x2155dc: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x2155dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_2155e0:
    // 0x2155e0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2155e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2155e4:
    // 0x2155e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2155e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2155e8:
    // 0x2155e8: 0x0  nop
    ctx->pc = 0x2155e8u;
    // NOP
label_2155ec:
    // 0x2155ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2155ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2155f0:
    // 0x2155f0: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x2155f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_2155f4:
    // 0x2155f4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x2155f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_2155f8:
    // 0x2155f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2155f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2155fc:
    // 0x2155fc: 0x0  nop
    ctx->pc = 0x2155fcu;
    // NOP
label_215600:
    // 0x215600: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_215604:
    // 0x215604: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x215604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_215608:
    // 0x215608: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x215608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_21560c:
    // 0x21560c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x21560cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215610:
    // 0x215610: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x215610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215614:
    // 0x215614: 0xe7ba0080  swc1        $f26, 0x80($sp)
    ctx->pc = 0x215614u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_215618:
    // 0x215618: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x215618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_21561c:
    // 0x21561c: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x21561cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_215620:
    // 0x215620: 0xe4950004  swc1        $f21, 0x4($a0)
    ctx->pc = 0x215620u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_215624:
    // 0x215624: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x215624u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_215628:
    // 0x215628: 0xe49c0018  swc1        $f28, 0x18($a0)
    ctx->pc = 0x215628u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_21562c:
    // 0x21562c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x21562cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_215630:
    // 0x215630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215634:
    // 0x215634: 0x0  nop
    ctx->pc = 0x215634u;
    // NOP
label_215638:
    // 0x215638: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_21563c:
    // 0x21563c: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x21563cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_215640:
    // 0x215640: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x215640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_215644:
    // 0x215644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215648:
    // 0x215648: 0x0  nop
    ctx->pc = 0x215648u;
    // NOP
label_21564c:
    // 0x21564c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21564cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_215650:
    // 0x215650: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x215650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_215654:
    // 0x215654: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x215654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_215658:
    // 0x215658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21565c:
    // 0x21565c: 0x0  nop
    ctx->pc = 0x21565cu;
    // NOP
label_215660:
    // 0x215660: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_215664:
    // 0x215664: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x215664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_215668:
    // 0x215668: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x215668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_21566c:
    // 0x21566c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21566cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215670:
    // 0x215670: 0x0  nop
    ctx->pc = 0x215670u;
    // NOP
label_215674:
    // 0x215674: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_215678:
    // 0x215678: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x215678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_21567c:
    // 0x21567c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x21567cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_215680:
    // 0x215680: 0x4616a040  add.s       $f1, $f20, $f22
    ctx->pc = 0x215680u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_215684:
    // 0x215684: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x215684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_215688:
    // 0x215688: 0x4617a800  add.s       $f0, $f21, $f23
    ctx->pc = 0x215688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_21568c:
    // 0x21568c: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x21568cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_215690:
    // 0x215690: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x215690u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_215694:
    // 0x215694: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x215694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_215698:
    // 0x215698: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x215698u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_21569c:
    // 0x21569c: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x21569cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2156a0:
    // 0x2156a0: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x2156a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_2156a4:
    // 0x2156a4: 0xe49c0018  swc1        $f28, 0x18($a0)
    ctx->pc = 0x2156a4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_2156a8:
    // 0x2156a8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2156a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2156ac:
    // 0x2156ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2156acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2156b0:
    // 0x2156b0: 0x0  nop
    ctx->pc = 0x2156b0u;
    // NOP
label_2156b4:
    // 0x2156b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2156b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2156b8:
    // 0x2156b8: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2156b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_2156bc:
    // 0x2156bc: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x2156bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_2156c0:
    // 0x2156c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2156c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2156c4:
    // 0x2156c4: 0x0  nop
    ctx->pc = 0x2156c4u;
    // NOP
label_2156c8:
    // 0x2156c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2156c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2156cc:
    // 0x2156cc: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x2156ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_2156d0:
    // 0x2156d0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2156d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2156d4:
    // 0x2156d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2156d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2156d8:
    // 0x2156d8: 0x0  nop
    ctx->pc = 0x2156d8u;
    // NOP
label_2156dc:
    // 0x2156dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2156dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2156e0:
    // 0x2156e0: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x2156e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_2156e4:
    // 0x2156e4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x2156e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_2156e8:
    // 0x2156e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2156e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2156ec:
    // 0x2156ec: 0x0  nop
    ctx->pc = 0x2156ecu;
    // NOP
label_2156f0:
    // 0x2156f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2156f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2156f4:
    // 0x2156f4: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x2156f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_2156f8:
    // 0x2156f8: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2156f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2156fc:
    // 0x2156fc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2156fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_215700:
    // 0x215700: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x215700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_215704:
    // 0x215704: 0x40f809  jalr        $v0
label_215708:
    if (ctx->pc == 0x215708u) {
        ctx->pc = 0x215708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215704u;
        // 0x215708: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21570Cu;
        goto label_21570c;
    }
    ctx->pc = 0x215704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21570Cu);
        ctx->pc = 0x215708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215704u;
        // 0x215708: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215704u, 0x21570Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21570Cu;
label_21570c:
    // 0x21570c: 0x0  nop
    ctx->pc = 0x21570cu;
    // NOP
label_215710:
    // 0x215710: 0x4619dec0  add.s       $f27, $f27, $f25
    ctx->pc = 0x215710u;
    ctx->f[27] = FPU_ADD_S(ctx->f[27], ctx->f[25]);
label_215714:
    // 0x215714: 0x1640feae  bnez        $s2, . + 4 + (-0x152 << 2)
label_215718:
    if (ctx->pc == 0x215718u) {
        ctx->pc = 0x215718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215714u;
        // 0x215718: 0x97b40100  lhu         $s4, 0x100($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21571Cu;
        goto label_21571c;
    }
    ctx->pc = 0x215714u;
    {
        const bool branch_taken_0x215714 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x215718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215714u;
        // 0x215718: 0x97b40100  lhu         $s4, 0x100($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215714) {
            ctx->pc = 0x2151D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2151d0;
        }
    }
    ctx->pc = 0x21571Cu;
label_21571c:
    // 0x21571c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_215720:
    if (ctx->pc == 0x215720u) {
        ctx->pc = 0x215720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21571Cu;
        // 0x215720: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215724u;
        goto label_215724;
    }
    ctx->pc = 0x21571Cu;
    {
        const bool branch_taken_0x21571c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x215720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21571Cu;
        // 0x215720: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21571c) {
            ctx->pc = 0x215730u;
            goto label_215730;
        }
    }
    ctx->pc = 0x215724u;
label_215724:
    // 0x215724: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x215724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_215728:
    // 0x215728: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x215728u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0));
label_21572c:
    // 0x21572c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x21572cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_215730:
    // 0x215730: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x215730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_215734:
    // 0x215734: 0x24700fd8  addiu       $s0, $v1, 0xFD8
    ctx->pc = 0x215734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4056));
label_215738:
    // 0x215738: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x215738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_21573c:
    // 0x21573c: 0x40f809  jalr        $v0
label_215740:
    if (ctx->pc == 0x215740u) {
        ctx->pc = 0x215740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21573Cu;
        // 0x215740: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215744u;
        goto label_215744;
    }
    ctx->pc = 0x21573Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x215744u);
        ctx->pc = 0x215740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21573Cu;
        // 0x215740: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21573Cu, 0x215744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215744u;
label_215744:
    // 0x215744: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x215744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_215748:
    // 0x215748: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x215748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21574c:
    // 0x21574c: 0x40f809  jalr        $v0
label_215750:
    if (ctx->pc == 0x215750u) {
        ctx->pc = 0x215750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21574Cu;
        // 0x215750: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215754u;
        goto label_215754;
    }
    ctx->pc = 0x21574Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x215754u);
        ctx->pc = 0x215750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21574Cu;
        // 0x215750: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21574Cu, 0x215754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215754u;
label_215754:
    // 0x215754: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x215754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_215758:
    // 0x215758: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x215758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_21575c:
    // 0x21575c: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x21575cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_215760:
    // 0x215760: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x215760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_215764:
    // 0x215764: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x215764u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_215768:
    // 0x215768: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x215768u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_21576c:
    // 0x21576c: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x21576cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_215770:
    // 0x215770: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x215770u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_215774:
    // 0x215774: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x215774u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_215778:
    // 0x215778: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x215778u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_21577c:
    // 0x21577c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x21577cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_215780:
    // 0x215780: 0xc7bf0208  lwc1        $f31, 0x208($sp)
    ctx->pc = 0x215780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_215784:
    // 0x215784: 0xc7be0200  lwc1        $f30, 0x200($sp)
    ctx->pc = 0x215784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_215788:
    // 0x215788: 0xc7bd01f8  lwc1        $f29, 0x1F8($sp)
    ctx->pc = 0x215788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_21578c:
    // 0x21578c: 0xc7bc01f0  lwc1        $f28, 0x1F0($sp)
    ctx->pc = 0x21578cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_215790:
    // 0x215790: 0xc7bb01e8  lwc1        $f27, 0x1E8($sp)
    ctx->pc = 0x215790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_215794:
    // 0x215794: 0xc7ba01e0  lwc1        $f26, 0x1E0($sp)
    ctx->pc = 0x215794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_215798:
    // 0x215798: 0xc7b901d8  lwc1        $f25, 0x1D8($sp)
    ctx->pc = 0x215798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_21579c:
    // 0x21579c: 0xc7b801d0  lwc1        $f24, 0x1D0($sp)
    ctx->pc = 0x21579cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2157a0:
    // 0x2157a0: 0xc7b701c8  lwc1        $f23, 0x1C8($sp)
    ctx->pc = 0x2157a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2157a4:
    // 0x2157a4: 0xc7b601c0  lwc1        $f22, 0x1C0($sp)
    ctx->pc = 0x2157a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2157a8:
    // 0x2157a8: 0xc7b501b8  lwc1        $f21, 0x1B8($sp)
    ctx->pc = 0x2157a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2157ac:
    // 0x2157ac: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x2157acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2157b0:
    // 0x2157b0: 0x3e00008  jr          $ra
label_2157b4:
    if (ctx->pc == 0x2157B4u) {
        ctx->pc = 0x2157B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157B0u;
        // 0x2157b4: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2157B8u;
        goto label_fallthrough_0x2157b0;
    }
    ctx->pc = 0x2157B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2157B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157B0u;
        // 0x2157b4: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2157B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2157b0:
    ctx->pc = 0x2157B8u;
}
