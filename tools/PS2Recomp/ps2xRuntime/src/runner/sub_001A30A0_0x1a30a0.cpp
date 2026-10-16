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

// Function: sub_001A30A0
// Address: 0x1a30a0 - 0x1a3808
void sub_001A30A0_0x1a30a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A30A0_0x1a30a0");
#endif

    switch (ctx->pc) {
        case 0x1a30a0u: goto label_1a30a0;
        case 0x1a30a4u: goto label_1a30a4;
        case 0x1a30a8u: goto label_1a30a8;
        case 0x1a30acu: goto label_1a30ac;
        case 0x1a30b0u: goto label_1a30b0;
        case 0x1a30b4u: goto label_1a30b4;
        case 0x1a30b8u: goto label_1a30b8;
        case 0x1a30bcu: goto label_1a30bc;
        case 0x1a30c0u: goto label_1a30c0;
        case 0x1a30c4u: goto label_1a30c4;
        case 0x1a30c8u: goto label_1a30c8;
        case 0x1a30ccu: goto label_1a30cc;
        case 0x1a30d0u: goto label_1a30d0;
        case 0x1a30d4u: goto label_1a30d4;
        case 0x1a30d8u: goto label_1a30d8;
        case 0x1a30dcu: goto label_1a30dc;
        case 0x1a30e0u: goto label_1a30e0;
        case 0x1a30e4u: goto label_1a30e4;
        case 0x1a30e8u: goto label_1a30e8;
        case 0x1a30ecu: goto label_1a30ec;
        case 0x1a30f0u: goto label_1a30f0;
        case 0x1a30f4u: goto label_1a30f4;
        case 0x1a30f8u: goto label_1a30f8;
        case 0x1a30fcu: goto label_1a30fc;
        case 0x1a3100u: goto label_1a3100;
        case 0x1a3104u: goto label_1a3104;
        case 0x1a3108u: goto label_1a3108;
        case 0x1a310cu: goto label_1a310c;
        case 0x1a3110u: goto label_1a3110;
        case 0x1a3114u: goto label_1a3114;
        case 0x1a3118u: goto label_1a3118;
        case 0x1a311cu: goto label_1a311c;
        case 0x1a3120u: goto label_1a3120;
        case 0x1a3124u: goto label_1a3124;
        case 0x1a3128u: goto label_1a3128;
        case 0x1a312cu: goto label_1a312c;
        case 0x1a3130u: goto label_1a3130;
        case 0x1a3134u: goto label_1a3134;
        case 0x1a3138u: goto label_1a3138;
        case 0x1a313cu: goto label_1a313c;
        case 0x1a3140u: goto label_1a3140;
        case 0x1a3144u: goto label_1a3144;
        case 0x1a3148u: goto label_1a3148;
        case 0x1a314cu: goto label_1a314c;
        case 0x1a3150u: goto label_1a3150;
        case 0x1a3154u: goto label_1a3154;
        case 0x1a3158u: goto label_1a3158;
        case 0x1a315cu: goto label_1a315c;
        case 0x1a3160u: goto label_1a3160;
        case 0x1a3164u: goto label_1a3164;
        case 0x1a3168u: goto label_1a3168;
        case 0x1a316cu: goto label_1a316c;
        case 0x1a3170u: goto label_1a3170;
        case 0x1a3174u: goto label_1a3174;
        case 0x1a3178u: goto label_1a3178;
        case 0x1a317cu: goto label_1a317c;
        case 0x1a3180u: goto label_1a3180;
        case 0x1a3184u: goto label_1a3184;
        case 0x1a3188u: goto label_1a3188;
        case 0x1a318cu: goto label_1a318c;
        case 0x1a3190u: goto label_1a3190;
        case 0x1a3194u: goto label_1a3194;
        case 0x1a3198u: goto label_1a3198;
        case 0x1a319cu: goto label_1a319c;
        case 0x1a31a0u: goto label_1a31a0;
        case 0x1a31a4u: goto label_1a31a4;
        case 0x1a31a8u: goto label_1a31a8;
        case 0x1a31acu: goto label_1a31ac;
        case 0x1a31b0u: goto label_1a31b0;
        case 0x1a31b4u: goto label_1a31b4;
        case 0x1a31b8u: goto label_1a31b8;
        case 0x1a31bcu: goto label_1a31bc;
        case 0x1a31c0u: goto label_1a31c0;
        case 0x1a31c4u: goto label_1a31c4;
        case 0x1a31c8u: goto label_1a31c8;
        case 0x1a31ccu: goto label_1a31cc;
        case 0x1a31d0u: goto label_1a31d0;
        case 0x1a31d4u: goto label_1a31d4;
        case 0x1a31d8u: goto label_1a31d8;
        case 0x1a31dcu: goto label_1a31dc;
        case 0x1a31e0u: goto label_1a31e0;
        case 0x1a31e4u: goto label_1a31e4;
        case 0x1a31e8u: goto label_1a31e8;
        case 0x1a31ecu: goto label_1a31ec;
        case 0x1a31f0u: goto label_1a31f0;
        case 0x1a31f4u: goto label_1a31f4;
        case 0x1a31f8u: goto label_1a31f8;
        case 0x1a31fcu: goto label_1a31fc;
        case 0x1a3200u: goto label_1a3200;
        case 0x1a3204u: goto label_1a3204;
        case 0x1a3208u: goto label_1a3208;
        case 0x1a320cu: goto label_1a320c;
        case 0x1a3210u: goto label_1a3210;
        case 0x1a3214u: goto label_1a3214;
        case 0x1a3218u: goto label_1a3218;
        case 0x1a321cu: goto label_1a321c;
        case 0x1a3220u: goto label_1a3220;
        case 0x1a3224u: goto label_1a3224;
        case 0x1a3228u: goto label_1a3228;
        case 0x1a322cu: goto label_1a322c;
        case 0x1a3230u: goto label_1a3230;
        case 0x1a3234u: goto label_1a3234;
        case 0x1a3238u: goto label_1a3238;
        case 0x1a323cu: goto label_1a323c;
        case 0x1a3240u: goto label_1a3240;
        case 0x1a3244u: goto label_1a3244;
        case 0x1a3248u: goto label_1a3248;
        case 0x1a324cu: goto label_1a324c;
        case 0x1a3250u: goto label_1a3250;
        case 0x1a3254u: goto label_1a3254;
        case 0x1a3258u: goto label_1a3258;
        case 0x1a325cu: goto label_1a325c;
        case 0x1a3260u: goto label_1a3260;
        case 0x1a3264u: goto label_1a3264;
        case 0x1a3268u: goto label_1a3268;
        case 0x1a326cu: goto label_1a326c;
        case 0x1a3270u: goto label_1a3270;
        case 0x1a3274u: goto label_1a3274;
        case 0x1a3278u: goto label_1a3278;
        case 0x1a327cu: goto label_1a327c;
        case 0x1a3280u: goto label_1a3280;
        case 0x1a3284u: goto label_1a3284;
        case 0x1a3288u: goto label_1a3288;
        case 0x1a328cu: goto label_1a328c;
        case 0x1a3290u: goto label_1a3290;
        case 0x1a3294u: goto label_1a3294;
        case 0x1a3298u: goto label_1a3298;
        case 0x1a329cu: goto label_1a329c;
        case 0x1a32a0u: goto label_1a32a0;
        case 0x1a32a4u: goto label_1a32a4;
        case 0x1a32a8u: goto label_1a32a8;
        case 0x1a32acu: goto label_1a32ac;
        case 0x1a32b0u: goto label_1a32b0;
        case 0x1a32b4u: goto label_1a32b4;
        case 0x1a32b8u: goto label_1a32b8;
        case 0x1a32bcu: goto label_1a32bc;
        case 0x1a32c0u: goto label_1a32c0;
        case 0x1a32c4u: goto label_1a32c4;
        case 0x1a32c8u: goto label_1a32c8;
        case 0x1a32ccu: goto label_1a32cc;
        case 0x1a32d0u: goto label_1a32d0;
        case 0x1a32d4u: goto label_1a32d4;
        case 0x1a32d8u: goto label_1a32d8;
        case 0x1a32dcu: goto label_1a32dc;
        case 0x1a32e0u: goto label_1a32e0;
        case 0x1a32e4u: goto label_1a32e4;
        case 0x1a32e8u: goto label_1a32e8;
        case 0x1a32ecu: goto label_1a32ec;
        case 0x1a32f0u: goto label_1a32f0;
        case 0x1a32f4u: goto label_1a32f4;
        case 0x1a32f8u: goto label_1a32f8;
        case 0x1a32fcu: goto label_1a32fc;
        case 0x1a3300u: goto label_1a3300;
        case 0x1a3304u: goto label_1a3304;
        case 0x1a3308u: goto label_1a3308;
        case 0x1a330cu: goto label_1a330c;
        case 0x1a3310u: goto label_1a3310;
        case 0x1a3314u: goto label_1a3314;
        case 0x1a3318u: goto label_1a3318;
        case 0x1a331cu: goto label_1a331c;
        case 0x1a3320u: goto label_1a3320;
        case 0x1a3324u: goto label_1a3324;
        case 0x1a3328u: goto label_1a3328;
        case 0x1a332cu: goto label_1a332c;
        case 0x1a3330u: goto label_1a3330;
        case 0x1a3334u: goto label_1a3334;
        case 0x1a3338u: goto label_1a3338;
        case 0x1a333cu: goto label_1a333c;
        case 0x1a3340u: goto label_1a3340;
        case 0x1a3344u: goto label_1a3344;
        case 0x1a3348u: goto label_1a3348;
        case 0x1a334cu: goto label_1a334c;
        case 0x1a3350u: goto label_1a3350;
        case 0x1a3354u: goto label_1a3354;
        case 0x1a3358u: goto label_1a3358;
        case 0x1a335cu: goto label_1a335c;
        case 0x1a3360u: goto label_1a3360;
        case 0x1a3364u: goto label_1a3364;
        case 0x1a3368u: goto label_1a3368;
        case 0x1a336cu: goto label_1a336c;
        case 0x1a3370u: goto label_1a3370;
        case 0x1a3374u: goto label_1a3374;
        case 0x1a3378u: goto label_1a3378;
        case 0x1a337cu: goto label_1a337c;
        case 0x1a3380u: goto label_1a3380;
        case 0x1a3384u: goto label_1a3384;
        case 0x1a3388u: goto label_1a3388;
        case 0x1a338cu: goto label_1a338c;
        case 0x1a3390u: goto label_1a3390;
        case 0x1a3394u: goto label_1a3394;
        case 0x1a3398u: goto label_1a3398;
        case 0x1a339cu: goto label_1a339c;
        case 0x1a33a0u: goto label_1a33a0;
        case 0x1a33a4u: goto label_1a33a4;
        case 0x1a33a8u: goto label_1a33a8;
        case 0x1a33acu: goto label_1a33ac;
        case 0x1a33b0u: goto label_1a33b0;
        case 0x1a33b4u: goto label_1a33b4;
        case 0x1a33b8u: goto label_1a33b8;
        case 0x1a33bcu: goto label_1a33bc;
        case 0x1a33c0u: goto label_1a33c0;
        case 0x1a33c4u: goto label_1a33c4;
        case 0x1a33c8u: goto label_1a33c8;
        case 0x1a33ccu: goto label_1a33cc;
        case 0x1a33d0u: goto label_1a33d0;
        case 0x1a33d4u: goto label_1a33d4;
        case 0x1a33d8u: goto label_1a33d8;
        case 0x1a33dcu: goto label_1a33dc;
        case 0x1a33e0u: goto label_1a33e0;
        case 0x1a33e4u: goto label_1a33e4;
        case 0x1a33e8u: goto label_1a33e8;
        case 0x1a33ecu: goto label_1a33ec;
        case 0x1a33f0u: goto label_1a33f0;
        case 0x1a33f4u: goto label_1a33f4;
        case 0x1a33f8u: goto label_1a33f8;
        case 0x1a33fcu: goto label_1a33fc;
        case 0x1a3400u: goto label_1a3400;
        case 0x1a3404u: goto label_1a3404;
        case 0x1a3408u: goto label_1a3408;
        case 0x1a340cu: goto label_1a340c;
        case 0x1a3410u: goto label_1a3410;
        case 0x1a3414u: goto label_1a3414;
        case 0x1a3418u: goto label_1a3418;
        case 0x1a341cu: goto label_1a341c;
        case 0x1a3420u: goto label_1a3420;
        case 0x1a3424u: goto label_1a3424;
        case 0x1a3428u: goto label_1a3428;
        case 0x1a342cu: goto label_1a342c;
        case 0x1a3430u: goto label_1a3430;
        case 0x1a3434u: goto label_1a3434;
        case 0x1a3438u: goto label_1a3438;
        case 0x1a343cu: goto label_1a343c;
        case 0x1a3440u: goto label_1a3440;
        case 0x1a3444u: goto label_1a3444;
        case 0x1a3448u: goto label_1a3448;
        case 0x1a344cu: goto label_1a344c;
        case 0x1a3450u: goto label_1a3450;
        case 0x1a3454u: goto label_1a3454;
        case 0x1a3458u: goto label_1a3458;
        case 0x1a345cu: goto label_1a345c;
        case 0x1a3460u: goto label_1a3460;
        case 0x1a3464u: goto label_1a3464;
        case 0x1a3468u: goto label_1a3468;
        case 0x1a346cu: goto label_1a346c;
        case 0x1a3470u: goto label_1a3470;
        case 0x1a3474u: goto label_1a3474;
        case 0x1a3478u: goto label_1a3478;
        case 0x1a347cu: goto label_1a347c;
        case 0x1a3480u: goto label_1a3480;
        case 0x1a3484u: goto label_1a3484;
        case 0x1a3488u: goto label_1a3488;
        case 0x1a348cu: goto label_1a348c;
        case 0x1a3490u: goto label_1a3490;
        case 0x1a3494u: goto label_1a3494;
        case 0x1a3498u: goto label_1a3498;
        case 0x1a349cu: goto label_1a349c;
        case 0x1a34a0u: goto label_1a34a0;
        case 0x1a34a4u: goto label_1a34a4;
        case 0x1a34a8u: goto label_1a34a8;
        case 0x1a34acu: goto label_1a34ac;
        case 0x1a34b0u: goto label_1a34b0;
        case 0x1a34b4u: goto label_1a34b4;
        case 0x1a34b8u: goto label_1a34b8;
        case 0x1a34bcu: goto label_1a34bc;
        case 0x1a34c0u: goto label_1a34c0;
        case 0x1a34c4u: goto label_1a34c4;
        case 0x1a34c8u: goto label_1a34c8;
        case 0x1a34ccu: goto label_1a34cc;
        case 0x1a34d0u: goto label_1a34d0;
        case 0x1a34d4u: goto label_1a34d4;
        case 0x1a34d8u: goto label_1a34d8;
        case 0x1a34dcu: goto label_1a34dc;
        case 0x1a34e0u: goto label_1a34e0;
        case 0x1a34e4u: goto label_1a34e4;
        case 0x1a34e8u: goto label_1a34e8;
        case 0x1a34ecu: goto label_1a34ec;
        case 0x1a34f0u: goto label_1a34f0;
        case 0x1a34f4u: goto label_1a34f4;
        case 0x1a34f8u: goto label_1a34f8;
        case 0x1a34fcu: goto label_1a34fc;
        case 0x1a3500u: goto label_1a3500;
        case 0x1a3504u: goto label_1a3504;
        case 0x1a3508u: goto label_1a3508;
        case 0x1a350cu: goto label_1a350c;
        case 0x1a3510u: goto label_1a3510;
        case 0x1a3514u: goto label_1a3514;
        case 0x1a3518u: goto label_1a3518;
        case 0x1a351cu: goto label_1a351c;
        case 0x1a3520u: goto label_1a3520;
        case 0x1a3524u: goto label_1a3524;
        case 0x1a3528u: goto label_1a3528;
        case 0x1a352cu: goto label_1a352c;
        case 0x1a3530u: goto label_1a3530;
        case 0x1a3534u: goto label_1a3534;
        case 0x1a3538u: goto label_1a3538;
        case 0x1a353cu: goto label_1a353c;
        case 0x1a3540u: goto label_1a3540;
        case 0x1a3544u: goto label_1a3544;
        case 0x1a3548u: goto label_1a3548;
        case 0x1a354cu: goto label_1a354c;
        case 0x1a3550u: goto label_1a3550;
        case 0x1a3554u: goto label_1a3554;
        case 0x1a3558u: goto label_1a3558;
        case 0x1a355cu: goto label_1a355c;
        case 0x1a3560u: goto label_1a3560;
        case 0x1a3564u: goto label_1a3564;
        case 0x1a3568u: goto label_1a3568;
        case 0x1a356cu: goto label_1a356c;
        case 0x1a3570u: goto label_1a3570;
        case 0x1a3574u: goto label_1a3574;
        case 0x1a3578u: goto label_1a3578;
        case 0x1a357cu: goto label_1a357c;
        case 0x1a3580u: goto label_1a3580;
        case 0x1a3584u: goto label_1a3584;
        case 0x1a3588u: goto label_1a3588;
        case 0x1a358cu: goto label_1a358c;
        case 0x1a3590u: goto label_1a3590;
        case 0x1a3594u: goto label_1a3594;
        case 0x1a3598u: goto label_1a3598;
        case 0x1a359cu: goto label_1a359c;
        case 0x1a35a0u: goto label_1a35a0;
        case 0x1a35a4u: goto label_1a35a4;
        case 0x1a35a8u: goto label_1a35a8;
        case 0x1a35acu: goto label_1a35ac;
        case 0x1a35b0u: goto label_1a35b0;
        case 0x1a35b4u: goto label_1a35b4;
        case 0x1a35b8u: goto label_1a35b8;
        case 0x1a35bcu: goto label_1a35bc;
        case 0x1a35c0u: goto label_1a35c0;
        case 0x1a35c4u: goto label_1a35c4;
        case 0x1a35c8u: goto label_1a35c8;
        case 0x1a35ccu: goto label_1a35cc;
        case 0x1a35d0u: goto label_1a35d0;
        case 0x1a35d4u: goto label_1a35d4;
        case 0x1a35d8u: goto label_1a35d8;
        case 0x1a35dcu: goto label_1a35dc;
        case 0x1a35e0u: goto label_1a35e0;
        case 0x1a35e4u: goto label_1a35e4;
        case 0x1a35e8u: goto label_1a35e8;
        case 0x1a35ecu: goto label_1a35ec;
        case 0x1a35f0u: goto label_1a35f0;
        case 0x1a35f4u: goto label_1a35f4;
        case 0x1a35f8u: goto label_1a35f8;
        case 0x1a35fcu: goto label_1a35fc;
        case 0x1a3600u: goto label_1a3600;
        case 0x1a3604u: goto label_1a3604;
        case 0x1a3608u: goto label_1a3608;
        case 0x1a360cu: goto label_1a360c;
        case 0x1a3610u: goto label_1a3610;
        case 0x1a3614u: goto label_1a3614;
        case 0x1a3618u: goto label_1a3618;
        case 0x1a361cu: goto label_1a361c;
        case 0x1a3620u: goto label_1a3620;
        case 0x1a3624u: goto label_1a3624;
        case 0x1a3628u: goto label_1a3628;
        case 0x1a362cu: goto label_1a362c;
        case 0x1a3630u: goto label_1a3630;
        case 0x1a3634u: goto label_1a3634;
        case 0x1a3638u: goto label_1a3638;
        case 0x1a363cu: goto label_1a363c;
        case 0x1a3640u: goto label_1a3640;
        case 0x1a3644u: goto label_1a3644;
        case 0x1a3648u: goto label_1a3648;
        case 0x1a364cu: goto label_1a364c;
        case 0x1a3650u: goto label_1a3650;
        case 0x1a3654u: goto label_1a3654;
        case 0x1a3658u: goto label_1a3658;
        case 0x1a365cu: goto label_1a365c;
        case 0x1a3660u: goto label_1a3660;
        case 0x1a3664u: goto label_1a3664;
        case 0x1a3668u: goto label_1a3668;
        case 0x1a366cu: goto label_1a366c;
        case 0x1a3670u: goto label_1a3670;
        case 0x1a3674u: goto label_1a3674;
        case 0x1a3678u: goto label_1a3678;
        case 0x1a367cu: goto label_1a367c;
        case 0x1a3680u: goto label_1a3680;
        case 0x1a3684u: goto label_1a3684;
        case 0x1a3688u: goto label_1a3688;
        case 0x1a368cu: goto label_1a368c;
        case 0x1a3690u: goto label_1a3690;
        case 0x1a3694u: goto label_1a3694;
        case 0x1a3698u: goto label_1a3698;
        case 0x1a369cu: goto label_1a369c;
        case 0x1a36a0u: goto label_1a36a0;
        case 0x1a36a4u: goto label_1a36a4;
        case 0x1a36a8u: goto label_1a36a8;
        case 0x1a36acu: goto label_1a36ac;
        case 0x1a36b0u: goto label_1a36b0;
        case 0x1a36b4u: goto label_1a36b4;
        case 0x1a36b8u: goto label_1a36b8;
        case 0x1a36bcu: goto label_1a36bc;
        case 0x1a36c0u: goto label_1a36c0;
        case 0x1a36c4u: goto label_1a36c4;
        case 0x1a36c8u: goto label_1a36c8;
        case 0x1a36ccu: goto label_1a36cc;
        case 0x1a36d0u: goto label_1a36d0;
        case 0x1a36d4u: goto label_1a36d4;
        case 0x1a36d8u: goto label_1a36d8;
        case 0x1a36dcu: goto label_1a36dc;
        case 0x1a36e0u: goto label_1a36e0;
        case 0x1a36e4u: goto label_1a36e4;
        case 0x1a36e8u: goto label_1a36e8;
        case 0x1a36ecu: goto label_1a36ec;
        case 0x1a36f0u: goto label_1a36f0;
        case 0x1a36f4u: goto label_1a36f4;
        case 0x1a36f8u: goto label_1a36f8;
        case 0x1a36fcu: goto label_1a36fc;
        case 0x1a3700u: goto label_1a3700;
        case 0x1a3704u: goto label_1a3704;
        case 0x1a3708u: goto label_1a3708;
        case 0x1a370cu: goto label_1a370c;
        case 0x1a3710u: goto label_1a3710;
        case 0x1a3714u: goto label_1a3714;
        case 0x1a3718u: goto label_1a3718;
        case 0x1a371cu: goto label_1a371c;
        case 0x1a3720u: goto label_1a3720;
        case 0x1a3724u: goto label_1a3724;
        case 0x1a3728u: goto label_1a3728;
        case 0x1a372cu: goto label_1a372c;
        case 0x1a3730u: goto label_1a3730;
        case 0x1a3734u: goto label_1a3734;
        case 0x1a3738u: goto label_1a3738;
        case 0x1a373cu: goto label_1a373c;
        case 0x1a3740u: goto label_1a3740;
        case 0x1a3744u: goto label_1a3744;
        case 0x1a3748u: goto label_1a3748;
        case 0x1a374cu: goto label_1a374c;
        case 0x1a3750u: goto label_1a3750;
        case 0x1a3754u: goto label_1a3754;
        case 0x1a3758u: goto label_1a3758;
        case 0x1a375cu: goto label_1a375c;
        case 0x1a3760u: goto label_1a3760;
        case 0x1a3764u: goto label_1a3764;
        case 0x1a3768u: goto label_1a3768;
        case 0x1a376cu: goto label_1a376c;
        case 0x1a3770u: goto label_1a3770;
        case 0x1a3774u: goto label_1a3774;
        case 0x1a3778u: goto label_1a3778;
        case 0x1a377cu: goto label_1a377c;
        case 0x1a3780u: goto label_1a3780;
        case 0x1a3784u: goto label_1a3784;
        case 0x1a3788u: goto label_1a3788;
        case 0x1a378cu: goto label_1a378c;
        case 0x1a3790u: goto label_1a3790;
        case 0x1a3794u: goto label_1a3794;
        case 0x1a3798u: goto label_1a3798;
        case 0x1a379cu: goto label_1a379c;
        case 0x1a37a0u: goto label_1a37a0;
        case 0x1a37a4u: goto label_1a37a4;
        case 0x1a37a8u: goto label_1a37a8;
        case 0x1a37acu: goto label_1a37ac;
        case 0x1a37b0u: goto label_1a37b0;
        case 0x1a37b4u: goto label_1a37b4;
        case 0x1a37b8u: goto label_1a37b8;
        case 0x1a37bcu: goto label_1a37bc;
        case 0x1a37c0u: goto label_1a37c0;
        case 0x1a37c4u: goto label_1a37c4;
        case 0x1a37c8u: goto label_1a37c8;
        case 0x1a37ccu: goto label_1a37cc;
        case 0x1a37d0u: goto label_1a37d0;
        case 0x1a37d4u: goto label_1a37d4;
        case 0x1a37d8u: goto label_1a37d8;
        case 0x1a37dcu: goto label_1a37dc;
        case 0x1a37e0u: goto label_1a37e0;
        case 0x1a37e4u: goto label_1a37e4;
        case 0x1a37e8u: goto label_1a37e8;
        case 0x1a37ecu: goto label_1a37ec;
        case 0x1a37f0u: goto label_1a37f0;
        case 0x1a37f4u: goto label_1a37f4;
        case 0x1a37f8u: goto label_1a37f8;
        case 0x1a37fcu: goto label_1a37fc;
        case 0x1a3800u: goto label_1a3800;
        case 0x1a3804u: goto label_1a3804;
        default: break;
    }

    ctx->pc = 0x1a30a0u;

label_1a30a0:
    // 0x1a30a0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1a30a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_1a30a4:
    // 0x1a30a4: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1a30a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_1a30a8:
    // 0x1a30a8: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1a30a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_1a30ac:
    // 0x1a30ac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a30acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a30b0:
    // 0x1a30b0: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x1a30b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1a30b4:
    // 0x1a30b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a30b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a30b8:
    // 0x1a30b8: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1a30b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_1a30bc:
    // 0x1a30bc: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1a30bcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_1a30c0:
    // 0x1a30c0: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1a30c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_1a30c4:
    // 0x1a30c4: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1a30c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_1a30c8:
    // 0x1a30c8: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1a30c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_1a30cc:
    // 0x1a30cc: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1a30ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_1a30d0:
    // 0x1a30d0: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1a30d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1a30d4:
    // 0x1a30d4: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1a30d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1a30d8:
    // 0x1a30d8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a30d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1a30dc:
    // 0x1a30dc: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x1a30dcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1a30e0:
    // 0x1a30e0: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x1a30e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1a30e4:
    // 0x1a30e4: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_1a30e8:
    if (ctx->pc == 0x1A30E8u) {
        ctx->pc = 0x1A30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30E4u;
        // 0x1a30e8: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30ECu;
        goto label_1a30ec;
    }
    ctx->pc = 0x1A30E4u;
    {
        const bool branch_taken_0x1a30e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30E4u;
        // 0x1a30e8: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a30e4) {
            ctx->pc = 0x1A3108u;
            goto label_1a3108;
        }
    }
    ctx->pc = 0x1A30ECu;
label_1a30ec:
    // 0x1a30ec: 0xc6810bdc  lwc1        $f1, 0xBDC($s4)
    ctx->pc = 0x1a30ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a30f0:
    // 0x1a30f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a30f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a30f4:
    // 0x1a30f4: 0x0  nop
    ctx->pc = 0x1a30f4u;
    // NOP
label_1a30f8:
    // 0x1a30f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a30f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a30fc:
    // 0x1a30fc: 0x0  nop
    ctx->pc = 0x1a30fcu;
    // NOP
label_1a3100:
    // 0x1a3100: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1a3104:
    if (ctx->pc == 0x1A3104u) {
        ctx->pc = 0x1A3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3100u;
        // 0x1a3104: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3108u;
        goto label_1a3108;
    }
    ctx->pc = 0x1A3100u;
    {
        const bool branch_taken_0x1a3100 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3100) {
            ctx->pc = 0x1A3104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3100u;
            // 0x1a3104: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3108u;
            goto label_1a3108;
        }
    }
    ctx->pc = 0x1A3108u;
label_1a3108:
    // 0x1a3108: 0xaea00474  sw          $zero, 0x474($s5)
    ctx->pc = 0x1a3108u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1140), GPR_U32(ctx, 0));
label_1a310c:
    // 0x1a310c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1a310cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1a3110:
    // 0x1a3110: 0x8c42870c  lw          $v0, -0x78F4($v0)
    ctx->pc = 0x1a3110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
label_1a3114:
    // 0x1a3114: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1a3118:
    if (ctx->pc == 0x1A3118u) {
        ctx->pc = 0x1A3118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3114u;
        // 0x1a3118: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A311Cu;
        goto label_1a311c;
    }
    ctx->pc = 0x1A3114u;
    {
        const bool branch_taken_0x1a3114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3114u;
        // 0x1a3118: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3114) {
            ctx->pc = 0x1A3120u;
            goto label_1a3120;
        }
    }
    ctx->pc = 0x1A311Cu;
label_1a311c:
    // 0x1a311c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a311cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a3120:
    // 0x1a3120: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1a3124:
    if (ctx->pc == 0x1A3124u) {
        ctx->pc = 0x1A3128u;
        goto label_1a3128;
    }
    ctx->pc = 0x1A3120u;
    {
        const bool branch_taken_0x1a3120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3120) {
            ctx->pc = 0x1A3134u;
            goto label_1a3134;
        }
    }
    ctx->pc = 0x1A3128u;
label_1a3128:
    // 0x1a3128: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x1a3128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_1a312c:
    // 0x1a312c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1a3130:
    if (ctx->pc == 0x1A3130u) {
        ctx->pc = 0x1A3130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A312Cu;
        // 0x1a3130: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3134u;
        goto label_1a3134;
    }
    ctx->pc = 0x1A312Cu;
    {
        const bool branch_taken_0x1a312c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A312Cu;
        // 0x1a3130: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a312c) {
            ctx->pc = 0x1A3158u;
            goto label_1a3158;
        }
    }
    ctx->pc = 0x1A3134u;
label_1a3134:
    // 0x1a3134: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_1a3138:
    if (ctx->pc == 0x1A3138u) {
        ctx->pc = 0x1A3138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3134u;
        // 0x1a3138: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A313Cu;
        goto label_1a313c;
    }
    ctx->pc = 0x1A3134u;
    {
        const bool branch_taken_0x1a3134 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3134u;
        // 0x1a3138: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3134) {
            ctx->pc = 0x1A3160u;
            goto label_1a3160;
        }
    }
    ctx->pc = 0x1A313Cu;
label_1a313c:
    // 0x1a313c: 0x8e821988  lw          $v0, 0x1988($s4)
    ctx->pc = 0x1a313cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6536)));
label_1a3140:
    // 0x1a3140: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a3144:
    if (ctx->pc == 0x1A3144u) {
        ctx->pc = 0x1A3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3140u;
        // 0x1a3144: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3148u;
        goto label_1a3148;
    }
    ctx->pc = 0x1A3140u;
    {
        const bool branch_taken_0x1a3140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3140u;
        // 0x1a3144: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3140) {
            ctx->pc = 0x1A3150u;
            goto label_1a3150;
        }
    }
    ctx->pc = 0x1A3148u;
label_1a3148:
    // 0x1a3148: 0x8e82198c  lw          $v0, 0x198C($s4)
    ctx->pc = 0x1a3148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6540)));
label_1a314c:
    // 0x1a314c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1a314cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a3150:
    // 0x1a3150: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1a3154:
    if (ctx->pc == 0x1A3154u) {
        ctx->pc = 0x1A3154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3150u;
        // 0x1a3154: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3158u;
        goto label_1a3158;
    }
    ctx->pc = 0x1A3150u;
    {
        const bool branch_taken_0x1a3150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3150u;
        // 0x1a3154: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3150) {
            ctx->pc = 0x1A315Cu;
            goto label_1a315c;
        }
    }
    ctx->pc = 0x1A3158u;
label_1a3158:
    // 0x1a3158: 0xaea20474  sw          $v0, 0x474($s5)
    ctx->pc = 0x1a3158u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1140), GPR_U32(ctx, 2));
label_1a315c:
    // 0x1a315c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1a315cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1a3160:
    // 0x1a3160: 0x8c6290a4  lw          $v0, -0x6F5C($v1)
    ctx->pc = 0x1a3160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938788)));
label_1a3164:
    // 0x1a3164: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a3168:
    if (ctx->pc == 0x1A3168u) {
        ctx->pc = 0x1A3168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3164u;
        // 0x1a3168: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A316Cu;
        goto label_1a316c;
    }
    ctx->pc = 0x1A3164u;
    {
        const bool branch_taken_0x1a3164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3164u;
        // 0x1a3168: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3164) {
            ctx->pc = 0x1A318Cu;
            goto label_1a318c;
        }
    }
    ctx->pc = 0x1A316Cu;
label_1a316c:
    // 0x1a316c: 0x8ea20474  lw          $v0, 0x474($s5)
    ctx->pc = 0x1a316cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1140)));
label_1a3170:
    // 0x1a3170: 0x246390b8  addiu       $v1, $v1, -0x6F48
    ctx->pc = 0x1a3170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938808));
label_1a3174:
    // 0x1a3174: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1a3174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_1a3178:
    // 0x1a3178: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a3178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a317c:
    // 0x1a317c: 0x2484b0f0  addiu       $a0, $a0, -0x4F10
    ctx->pc = 0x1a317cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947056));
label_1a3180:
    // 0x1a3180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a3180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a3184:
    // 0x1a3184: 0xc0691c8  jal         func_1A4720
label_1a3188:
    if (ctx->pc == 0x1A3188u) {
        ctx->pc = 0x1A3188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3184u;
        // 0x1a3188: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A318Cu;
        goto label_1a318c;
    }
    ctx->pc = 0x1A3184u;
    SET_GPR_U32(ctx, 31, 0x1A318Cu);
    ctx->pc = 0x1A3188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3184u;
    // 0x1a3188: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4720u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4720u, 0x1A3184u, 0x1A318Cu)) {
        return;
    }
    ctx->pc = 0x1A318Cu;
label_1a318c:
    // 0x1a318c: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1a318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1a3190:
    // 0x1a3190: 0x1040018d  beqz        $v0, . + 4 + (0x18D << 2)
label_1a3194:
    if (ctx->pc == 0x1A3194u) {
        ctx->pc = 0x1A3194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3190u;
        // 0x1a3194: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3198u;
        goto label_1a3198;
    }
    ctx->pc = 0x1A3190u;
    {
        const bool branch_taken_0x1a3190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3190u;
        // 0x1a3194: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3190) {
            ctx->pc = 0x1A37C8u;
            goto label_1a37c8;
        }
    }
    ctx->pc = 0x1A3198u;
label_1a3198:
    // 0x1a3198: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1a3198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1a319c:
    // 0x1a319c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1a319cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1a31a0:
    // 0x1a31a0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1a31a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a31a4:
    // 0x1a31a4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1a31a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1a31a8:
    // 0x1a31a8: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x1a31a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a31ac:
    // 0x1a31ac: 0x26501510  addiu       $s0, $s2, 0x1510
    ctx->pc = 0x1a31acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5392));
label_1a31b0:
    // 0x1a31b0: 0x8e021280  lw          $v0, 0x1280($s0)
    ctx->pc = 0x1a31b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4736)));
label_1a31b4:
    // 0x1a31b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a31b8:
    if (ctx->pc == 0x1A31B8u) {
        ctx->pc = 0x1A31B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31B4u;
        // 0x1a31b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31BCu;
        goto label_1a31bc;
    }
    ctx->pc = 0x1A31B4u;
    {
        const bool branch_taken_0x1a31b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A31B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31B4u;
        // 0x1a31b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a31b4) {
            ctx->pc = 0x1A31CCu;
            goto label_1a31cc;
        }
    }
    ctx->pc = 0x1A31BCu;
label_1a31bc:
    // 0x1a31bc: 0x96021274  lhu         $v0, 0x1274($s0)
    ctx->pc = 0x1a31bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4724)));
label_1a31c0:
    // 0x1a31c0: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x1a31c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a31c4:
    // 0x1a31c4: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a31c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
label_1a31c8:
    // 0x1a31c8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1a31c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_1a31cc:
    // 0x1a31cc: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
label_1a31d0:
    if (ctx->pc == 0x1A31D0u) {
        ctx->pc = 0x1A31D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31CCu;
        // 0x1a31d0: 0x8e02133c  lw          $v0, 0x133C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31D4u;
        goto label_1a31d4;
    }
    ctx->pc = 0x1A31CCu;
    {
        const bool branch_taken_0x1a31cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a31cc) {
            ctx->pc = 0x1A31D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A31CCu;
            // 0x1a31d0: 0x8e02133c  lw          $v0, 0x133C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3204u;
            goto label_1a3204;
        }
    }
    ctx->pc = 0x1A31D4u;
label_1a31d4:
    // 0x1a31d4: 0x8e422d5c  lw          $v0, 0x2D5C($s2)
    ctx->pc = 0x1a31d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11612)));
label_1a31d8:
    // 0x1a31d8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1a31dc:
    if (ctx->pc == 0x1A31DCu) {
        ctx->pc = 0x1A31DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31D8u;
        // 0x1a31dc: 0x8e02133c  lw          $v0, 0x133C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31E0u;
        goto label_1a31e0;
    }
    ctx->pc = 0x1A31D8u;
    {
        const bool branch_taken_0x1a31d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a31d8) {
            ctx->pc = 0x1A31DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A31D8u;
            // 0x1a31dc: 0x8e02133c  lw          $v0, 0x133C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3204u;
            goto label_1a3204;
        }
    }
    ctx->pc = 0x1A31E0u;
label_1a31e0:
    // 0x1a31e0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1a31e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1a31e4:
    // 0x1a31e4: 0x8c6290a4  lw          $v0, -0x6F5C($v1)
    ctx->pc = 0x1a31e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938788)));
label_1a31e8:
    // 0x1a31e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a31ec:
    if (ctx->pc == 0x1A31ECu) {
        ctx->pc = 0x1A31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31E8u;
        // 0x1a31ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31F0u;
        goto label_1a31f0;
    }
    ctx->pc = 0x1A31E8u;
    {
        const bool branch_taken_0x1a31e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31E8u;
        // 0x1a31ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a31e8) {
            ctx->pc = 0x1A31FCu;
            goto label_1a31fc;
        }
    }
    ctx->pc = 0x1A31F0u;
label_1a31f0:
    // 0x1a31f0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1a31f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_1a31f4:
    // 0x1a31f4: 0xc0691c8  jal         func_1A4720
label_1a31f8:
    if (ctx->pc == 0x1A31F8u) {
        ctx->pc = 0x1A31F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31F4u;
        // 0x1a31f8: 0x2484b100  addiu       $a0, $a0, -0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31FCu;
        goto label_1a31fc;
    }
    ctx->pc = 0x1A31F4u;
    SET_GPR_U32(ctx, 31, 0x1A31FCu);
    ctx->pc = 0x1A31F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31F4u;
    // 0x1a31f8: 0x2484b100  addiu       $a0, $a0, -0x4F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4720u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4720u, 0x1A31F4u, 0x1A31FCu)) {
        return;
    }
    ctx->pc = 0x1A31FCu;
label_1a31fc:
    // 0x1a31fc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1a31fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3200:
    // 0x1a3200: 0x8e02133c  lw          $v0, 0x133C($s0)
    ctx->pc = 0x1a3200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
label_1a3204:
    // 0x1a3204: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1a3208:
    if (ctx->pc == 0x1A3208u) {
        ctx->pc = 0x1A3208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3204u;
        // 0x1a3208: 0x26450084  addiu       $a1, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A320Cu;
        goto label_1a320c;
    }
    ctx->pc = 0x1A3204u;
    {
        const bool branch_taken_0x1a3204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3204u;
        // 0x1a3208: 0x26450084  addiu       $a1, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3204) {
            ctx->pc = 0x1A3238u;
            goto label_1a3238;
        }
    }
    ctx->pc = 0x1A320Cu;
label_1a320c:
    // 0x1a320c: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x1a320cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1a3210:
    // 0x1a3210: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1a3210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1a3214:
    // 0x1a3214: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1a3214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1a3218:
    // 0x1a3218: 0x40f809  jalr        $v0
label_1a321c:
    if (ctx->pc == 0x1A321Cu) {
        ctx->pc = 0x1A321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3218u;
        // 0x1a321c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3220u;
        goto label_1a3220;
    }
    ctx->pc = 0x1A3218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3220u);
        ctx->pc = 0x1A321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3218u;
        // 0x1a321c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3218u, 0x1A3220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3220u;
label_1a3220:
    // 0x1a3220: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1a3224:
    if (ctx->pc == 0x1A3224u) {
        ctx->pc = 0x1A3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3220u;
        // 0x1a3224: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3228u;
        goto label_1a3228;
    }
    ctx->pc = 0x1A3220u;
    {
        const bool branch_taken_0x1a3220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3220) {
            ctx->pc = 0x1A3224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3220u;
            // 0x1a3224: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A323Cu;
            goto label_1a323c;
        }
    }
    ctx->pc = 0x1A3228u;
label_1a3228:
    // 0x1a3228: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1a3228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1a322c:
    // 0x1a322c: 0x8c4390b0  lw          $v1, -0x6F50($v0)
    ctx->pc = 0x1a322cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938800)));
label_1a3230:
    // 0x1a3230: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1a3234:
    if (ctx->pc == 0x1A3234u) {
        ctx->pc = 0x1A3234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3230u;
        // 0x1a3234: 0x263e0001  addiu       $fp, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3238u;
        goto label_1a3238;
    }
    ctx->pc = 0x1A3230u;
    {
        const bool branch_taken_0x1a3230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3230u;
        // 0x1a3234: 0x263e0001  addiu       $fp, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3230) {
            ctx->pc = 0x1A3240u;
            goto label_1a3240;
        }
    }
    ctx->pc = 0x1A3238u;
label_1a3238:
    // 0x1a3238: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1a3238u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a323c:
    // 0x1a323c: 0x263e0001  addiu       $fp, $s1, 0x1
    ctx->pc = 0x1a323cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a3240:
    // 0x1a3240: 0x26530040  addiu       $s3, $s2, 0x40
    ctx->pc = 0x1a3240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1a3244:
    // 0x1a3244: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1a3244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a3248:
    // 0x1a3248: 0x12e0005f  beqz        $s7, . + 4 + (0x5F << 2)
label_1a324c:
    if (ctx->pc == 0x1A324Cu) {
        ctx->pc = 0x1A324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3248u;
        // 0x1a324c: 0x27b60060  addiu       $s6, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3250u;
        goto label_1a3250;
    }
    ctx->pc = 0x1A3248u;
    {
        const bool branch_taken_0x1a3248 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3248u;
        // 0x1a324c: 0x27b60060  addiu       $s6, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3248) {
            ctx->pc = 0x1A33C8u;
            goto label_1a33c8;
        }
    }
    ctx->pc = 0x1A3250u;
label_1a3250:
    // 0x1a3250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3254:
    // 0x1a3254: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a3254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3258:
    // 0x1a3258: 0xc068706  jal         func_1A1C18
label_1a325c:
    if (ctx->pc == 0x1A325Cu) {
        ctx->pc = 0x1A325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3258u;
        // 0x1a325c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3260u;
        goto label_1a3260;
    }
    ctx->pc = 0x1A3258u;
    SET_GPR_U32(ctx, 31, 0x1A3260u);
    ctx->pc = 0x1A325Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3258u;
    // 0x1a325c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1C18u, 0x1A3258u, 0x1A3260u)) {
        return;
    }
    ctx->pc = 0x1A3260u;
label_1a3260:
    // 0x1a3260: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1a3260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1a3264:
    // 0x1a3264: 0x8c4390ac  lw          $v1, -0x6F54($v0)
    ctx->pc = 0x1a3264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938796)));
label_1a3268:
    // 0x1a3268: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_1a326c:
    if (ctx->pc == 0x1A326Cu) {
        ctx->pc = 0x1A326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3268u;
        // 0x1a326c: 0x260501e0  addiu       $a1, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3270u;
        goto label_1a3270;
    }
    ctx->pc = 0x1A3268u;
    {
        const bool branch_taken_0x1a3268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3268u;
        // 0x1a326c: 0x260501e0  addiu       $a1, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3268) {
            ctx->pc = 0x1A32C4u;
            goto label_1a32c4;
        }
    }
    ctx->pc = 0x1A3270u;
label_1a3270:
    // 0x1a3270: 0x8ca21000  lw          $v0, 0x1000($a1)
    ctx->pc = 0x1a3270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4096)));
label_1a3274:
    // 0x1a3274: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1a3278:
    if (ctx->pc == 0x1A3278u) {
        ctx->pc = 0x1A3278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3274u;
        // 0x1a3278: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A327Cu;
        goto label_1a327c;
    }
    ctx->pc = 0x1A3274u;
    {
        const bool branch_taken_0x1a3274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3274u;
        // 0x1a3278: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3274) {
            ctx->pc = 0x1A32C4u;
            goto label_1a32c4;
        }
    }
    ctx->pc = 0x1A327Cu;
label_1a327c:
    // 0x1a327c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1a327cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1a3280:
    // 0x1a3280: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a3280u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3284:
    // 0x1a3284: 0x0  nop
    ctx->pc = 0x1a3284u;
    // NOP
label_1a3288:
    // 0x1a3288: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x1a3288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1a328c:
    // 0x1a328c: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x1a328cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1a3290:
    // 0x1a3290: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x1a3290u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1a3294:
    // 0x1a3294: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x1a3294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3298:
    // 0x1a3298: 0xb7a70000  sdr         $a3, 0x0($sp)
    ctx->pc = 0x1a3298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a329c:
    // 0x1a329c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a329cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a32a0:
    // 0x1a32a0: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x1a32a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
label_1a32a4:
    // 0x1a32a4: 0xa3a00010  sb          $zero, 0x10($sp)
    ctx->pc = 0x1a32a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
label_1a32a8:
    // 0x1a32a8: 0xa3a60011  sb          $a2, 0x11($sp)
    ctx->pc = 0x1a32a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 6));
label_1a32ac:
    // 0x1a32ac: 0xa3a00012  sb          $zero, 0x12($sp)
    ctx->pc = 0x1a32acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 0));
label_1a32b0:
    // 0x1a32b0: 0xa3a60013  sb          $a2, 0x13($sp)
    ctx->pc = 0x1a32b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 6));
label_1a32b4:
    // 0x1a32b4: 0x8ca21000  lw          $v0, 0x1000($a1)
    ctx->pc = 0x1a32b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4096)));
label_1a32b8:
    // 0x1a32b8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1a32b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a32bc:
    // 0x1a32bc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1a32c0:
    if (ctx->pc == 0x1A32C0u) {
        ctx->pc = 0x1A32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32BCu;
        // 0x1a32c0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A32C4u;
        goto label_1a32c4;
    }
    ctx->pc = 0x1A32BCu;
    {
        const bool branch_taken_0x1a32bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32BCu;
        // 0x1a32c0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32bc) {
            ctx->pc = 0x1A3288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3288;
        }
    }
    ctx->pc = 0x1A32C4u;
label_1a32c4:
    // 0x1a32c4: 0xc04f0cc  jal         func_13C330
label_1a32c8:
    if (ctx->pc == 0x1A32C8u) {
        ctx->pc = 0x1A32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32C4u;
        // 0x1a32c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A32CCu;
        goto label_1a32cc;
    }
    ctx->pc = 0x1A32C4u;
    SET_GPR_U32(ctx, 31, 0x1A32CCu);
    ctx->pc = 0x1A32C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A32C4u;
    // 0x1a32c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A32C4u, 0x1A32CCu)) {
        return;
    }
    ctx->pc = 0x1A32CCu;
label_1a32cc:
    // 0x1a32cc: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1a32ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a32d0:
    // 0x1a32d0: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1a32d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a32d4:
    // 0x1a32d4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1a32d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a32d8:
    // 0x1a32d8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1a32d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a32dc:
    // 0x1a32dc: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1a32dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a32e0:
    // 0x1a32e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a32e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a32e4:
    // 0x1a32e4: 0xc04f0f0  jal         func_13C3C0
label_1a32e8:
    if (ctx->pc == 0x1A32E8u) {
        ctx->pc = 0x1A32E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32E4u;
        // 0x1a32e8: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A32ECu;
        goto label_1a32ec;
    }
    ctx->pc = 0x1A32E4u;
    SET_GPR_U32(ctx, 31, 0x1A32ECu);
    ctx->pc = 0x1A32E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A32E4u;
    // 0x1a32e8: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x1A32E4u, 0x1A32ECu)) {
        return;
    }
    ctx->pc = 0x1A32ECu;
label_1a32ec:
    // 0x1a32ec: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x1a32ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1a32f0:
    // 0x1a32f0: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x1a32f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1a32f4:
    // 0x1a32f4: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x1a32f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a32f8:
    // 0x1a32f8: 0xb3a80027  sdl         $t0, 0x27($sp)
    ctx->pc = 0x1a32f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a32fc:
    // 0x1a32fc: 0xb7a80020  sdr         $t0, 0x20($sp)
    ctx->pc = 0x1a32fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3300:
    // 0x1a3300: 0xafa90028  sw          $t1, 0x28($sp)
    ctx->pc = 0x1a3300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 9));
label_1a3304:
    // 0x1a3304: 0x12800030  beqz        $s4, . + 4 + (0x30 << 2)
label_1a3308:
    if (ctx->pc == 0x1A3308u) {
        ctx->pc = 0x1A330Cu;
        goto label_1a330c;
    }
    ctx->pc = 0x1A3304u;
    {
        const bool branch_taken_0x1a3304 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3304) {
            ctx->pc = 0x1A33C8u;
            goto label_1a33c8;
        }
    }
    ctx->pc = 0x1A330Cu;
label_1a330c:
    // 0x1a330c: 0xc04f0cc  jal         func_13C330
label_1a3310:
    if (ctx->pc == 0x1A3310u) {
        ctx->pc = 0x1A3310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A330Cu;
        // 0x1a3310: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3314u;
        goto label_1a3314;
    }
    ctx->pc = 0x1A330Cu;
    SET_GPR_U32(ctx, 31, 0x1A3314u);
    ctx->pc = 0x1A3310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A330Cu;
    // 0x1a3310: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A330Cu, 0x1A3314u)) {
        return;
    }
    ctx->pc = 0x1A3314u;
label_1a3314:
    // 0x1a3314: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x1a3314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a3318:
    // 0x1a3318: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x1a3318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a331c:
    // 0x1a331c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1a331cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a3320:
    // 0x1a3320: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x1a3320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3324:
    // 0x1a3324: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x1a3324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3328:
    // 0x1a3328: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x1a3328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
label_1a332c:
    // 0x1a332c: 0x8e021340  lw          $v0, 0x1340($s0)
    ctx->pc = 0x1a332cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4928)));
label_1a3330:
    // 0x1a3330: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1a3330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1a3334:
    // 0x1a3334: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a3334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1a3338:
    // 0x1a3338: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1a333c:
    if (ctx->pc == 0x1A333Cu) {
        ctx->pc = 0x1A333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3338u;
        // 0x1a333c: 0x8e620c7c  lw          $v0, 0xC7C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3340u;
        goto label_1a3340;
    }
    ctx->pc = 0x1A3338u;
    {
        const bool branch_taken_0x1a3338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3338u;
        // 0x1a333c: 0x8e620c7c  lw          $v0, 0xC7C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3338) {
            ctx->pc = 0x1A339Cu;
            goto label_1a339c;
        }
    }
    ctx->pc = 0x1A3340u;
label_1a3340:
    // 0x1a3340: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1a3344:
    if (ctx->pc == 0x1A3344u) {
        ctx->pc = 0x1A3344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3340u;
        // 0x1a3344: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3348u;
        goto label_1a3348;
    }
    ctx->pc = 0x1A3340u;
    {
        const bool branch_taken_0x1a3340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3340u;
        // 0x1a3344: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3340) {
            ctx->pc = 0x1A337Cu;
            goto label_1a337c;
        }
    }
    ctx->pc = 0x1A3348u;
label_1a3348:
    // 0x1a3348: 0xc680187c  lwc1        $f0, 0x187C($s4)
    ctx->pc = 0x1a3348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 6268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a334c:
    // 0x1a334c: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1a334cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a3350:
    // 0x1a3350: 0x0  nop
    ctx->pc = 0x1a3350u;
    // NOP
label_1a3354:
    // 0x1a3354: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1a3358:
    if (ctx->pc == 0x1A3358u) {
        ctx->pc = 0x1A3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3354u;
        // 0x1a3358: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A335Cu;
        goto label_1a335c;
    }
    ctx->pc = 0x1A3354u;
    {
        const bool branch_taken_0x1a3354 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3354u;
        // 0x1a3358: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3354) {
            ctx->pc = 0x1A3360u;
            goto label_1a3360;
        }
    }
    ctx->pc = 0x1A335Cu;
label_1a335c:
    // 0x1a335c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a335cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3360:
    // 0x1a3360: 0x8ea50474  lw          $a1, 0x474($s5)
    ctx->pc = 0x1a3360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1140)));
label_1a3364:
    // 0x1a3364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3368:
    // 0x1a3368: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a3368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a336c:
    // 0x1a336c: 0xc06856a  jal         func_1A15A8
label_1a3370:
    if (ctx->pc == 0x1A3370u) {
        ctx->pc = 0x1A3370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A336Cu;
        // 0x1a3370: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3374u;
        goto label_1a3374;
    }
    ctx->pc = 0x1A336Cu;
    SET_GPR_U32(ctx, 31, 0x1A3374u);
    ctx->pc = 0x1A3370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A336Cu;
    // 0x1a3370: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A15A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A15A8u, 0x1A336Cu, 0x1A3374u)) {
        return;
    }
    ctx->pc = 0x1A3374u;
label_1a3374:
    // 0x1a3374: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1a3378:
    if (ctx->pc == 0x1A3378u) {
        ctx->pc = 0x1A337Cu;
        goto label_1a337c;
    }
    ctx->pc = 0x1A3374u;
    {
        const bool branch_taken_0x1a3374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3374) {
            ctx->pc = 0x1A33C8u;
            goto label_1a33c8;
        }
    }
    ctx->pc = 0x1A337Cu;
label_1a337c:
    // 0x1a337c: 0xc04f0cc  jal         func_13C330
label_1a3380:
    if (ctx->pc == 0x1A3380u) {
        ctx->pc = 0x1A3380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A337Cu;
        // 0x1a3380: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3384u;
        goto label_1a3384;
    }
    ctx->pc = 0x1A337Cu;
    SET_GPR_U32(ctx, 31, 0x1A3384u);
    ctx->pc = 0x1A3380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A337Cu;
    // 0x1a3380: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A337Cu, 0x1A3384u)) {
        return;
    }
    ctx->pc = 0x1A3384u;
label_1a3384:
    // 0x1a3384: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a3384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3388:
    // 0x1a3388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a338c:
    // 0x1a338c: 0xc0685da  jal         func_1A1768
label_1a3390:
    if (ctx->pc == 0x1A3390u) {
        ctx->pc = 0x1A3390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A338Cu;
        // 0x1a3390: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3394u;
        goto label_1a3394;
    }
    ctx->pc = 0x1A338Cu;
    SET_GPR_U32(ctx, 31, 0x1A3394u);
    ctx->pc = 0x1A3390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A338Cu;
    // 0x1a3390: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1768u, 0x1A338Cu, 0x1A3394u)) {
        return;
    }
    ctx->pc = 0x1A3394u;
label_1a3394:
    // 0x1a3394: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a3398:
    if (ctx->pc == 0x1A3398u) {
        ctx->pc = 0x1A339Cu;
        goto label_1a339c;
    }
    ctx->pc = 0x1A3394u;
    {
        const bool branch_taken_0x1a3394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3394) {
            ctx->pc = 0x1A33C8u;
            goto label_1a33c8;
        }
    }
    ctx->pc = 0x1A339Cu;
label_1a339c:
    // 0x1a339c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1a33a0:
    if (ctx->pc == 0x1A33A0u) {
        ctx->pc = 0x1A33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A339Cu;
        // 0x1a33a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A33A4u;
        goto label_1a33a4;
    }
    ctx->pc = 0x1A339Cu;
    {
        const bool branch_taken_0x1a339c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A339Cu;
        // 0x1a33a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a339c) {
            ctx->pc = 0x1A33C8u;
            goto label_1a33c8;
        }
    }
    ctx->pc = 0x1A33A4u;
label_1a33a4:
    // 0x1a33a4: 0x8ea50474  lw          $a1, 0x474($s5)
    ctx->pc = 0x1a33a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1140)));
label_1a33a8:
    // 0x1a33a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a33a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a33ac:
    // 0x1a33ac: 0xc06892a  jal         func_1A24A8
label_1a33b0:
    if (ctx->pc == 0x1A33B0u) {
        ctx->pc = 0x1A33B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33ACu;
        // 0x1a33b0: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A33B4u;
        goto label_1a33b4;
    }
    ctx->pc = 0x1A33ACu;
    SET_GPR_U32(ctx, 31, 0x1A33B4u);
    ctx->pc = 0x1A33B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A33ACu;
    // 0x1a33b0: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A24A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A24A8u, 0x1A33ACu, 0x1A33B4u)) {
        return;
    }
    ctx->pc = 0x1A33B4u;
label_1a33b4:
    // 0x1a33b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a33b8:
    if (ctx->pc == 0x1A33B8u) {
        ctx->pc = 0x1A33B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33B4u;
        // 0x1a33b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A33BCu;
        goto label_1a33bc;
    }
    ctx->pc = 0x1A33B4u;
    {
        const bool branch_taken_0x1a33b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A33B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33B4u;
        // 0x1a33b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a33b4) {
            ctx->pc = 0x1A33C8u;
            goto label_1a33c8;
        }
    }
    ctx->pc = 0x1A33BCu;
label_1a33bc:
    // 0x1a33bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a33bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a33c0:
    // 0x1a33c0: 0xc0685da  jal         func_1A1768
label_1a33c4:
    if (ctx->pc == 0x1A33C4u) {
        ctx->pc = 0x1A33C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33C0u;
        // 0x1a33c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A33C8u;
        goto label_1a33c8;
    }
    ctx->pc = 0x1A33C0u;
    SET_GPR_U32(ctx, 31, 0x1A33C8u);
    ctx->pc = 0x1A33C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A33C0u;
    // 0x1a33c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1768u, 0x1A33C0u, 0x1A33C8u)) {
        return;
    }
    ctx->pc = 0x1A33C8u;
label_1a33c8:
    // 0x1a33c8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a33c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a33cc:
    // 0x1a33cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a33ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a33d0:
    // 0x1a33d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a33d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a33d4:
    // 0x1a33d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a33d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1a33d8:
    // 0x1a33d8: 0xc04f0f0  jal         func_13C3C0
label_1a33dc:
    if (ctx->pc == 0x1A33DCu) {
        ctx->pc = 0x1A33DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33D8u;
        // 0x1a33dc: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A33E0u;
        goto label_1a33e0;
    }
    ctx->pc = 0x1A33D8u;
    SET_GPR_U32(ctx, 31, 0x1A33E0u);
    ctx->pc = 0x1A33DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A33D8u;
    // 0x1a33dc: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x1A33D8u, 0x1A33E0u)) {
        return;
    }
    ctx->pc = 0x1A33E0u;
label_1a33e0:
    // 0x1a33e0: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x1a33e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1a33e4:
    // 0x1a33e4: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x1a33e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1a33e8:
    // 0x1a33e8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a33e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a33ec:
    // 0x1a33ec: 0xb3a90017  sdl         $t1, 0x17($sp)
    ctx->pc = 0x1a33ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a33f0:
    // 0x1a33f0: 0xb7a90010  sdr         $t1, 0x10($sp)
    ctx->pc = 0x1a33f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a33f4:
    // 0x1a33f4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1a33f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_1a33f8:
    // 0x1a33f8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a33f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a33fc:
    // 0x1a33fc: 0xe7b40024  swc1        $f20, 0x24($sp)
    ctx->pc = 0x1a33fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1a3400:
    // 0x1a3400: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x1a3400u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1a3404:
    // 0x1a3404: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x1a3404u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a3408:
    // 0x1a3408: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a3408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a340c:
    // 0x1a340c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1a340cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3410:
    // 0x1a3410: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a3410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1a3414:
    // 0x1a3414: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a3414u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1a3418:
    // 0x1a3418: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1a3418u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1a341c:
    // 0x1a341c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a341cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a3420:
    // 0x1a3420: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1a3420u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a3424:
    // 0x1a3424: 0x0  nop
    ctx->pc = 0x1a3424u;
    // NOP
label_1a3428:
    // 0x1a3428: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_1a342c:
    if (ctx->pc == 0x1A342Cu) {
        ctx->pc = 0x1A342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3428u;
        // 0x1a342c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3430u;
        goto label_1a3430;
    }
    ctx->pc = 0x1A3428u;
    {
        const bool branch_taken_0x1a3428 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3428u;
        // 0x1a342c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3428) {
            ctx->pc = 0x1A3464u;
            goto label_1a3464;
        }
    }
    ctx->pc = 0x1A3430u;
label_1a3430:
    // 0x1a3430: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x1a3430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a3434:
    // 0x1a3434: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x1a3434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a3438:
    // 0x1a3438: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1a3438u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a343c:
    // 0x1a343c: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1a343cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3440:
    // 0x1a3440: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1a3440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3444:
    // 0x1a3444: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1a3444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_1a3448:
    // 0x1a3448: 0x10000019  b           . + 4 + (0x19 << 2)
label_1a344c:
    if (ctx->pc == 0x1A344Cu) {
        ctx->pc = 0x1A3450u;
        goto label_1a3450;
    }
    ctx->pc = 0x1A3448u;
    {
        const bool branch_taken_0x1a3448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3448) {
            ctx->pc = 0x1A34B0u;
            goto label_1a34b0;
        }
    }
    ctx->pc = 0x1A3450u;
label_1a3450:
    // 0x1a3450: 0x0  nop
    ctx->pc = 0x1a3450u;
    // NOP
label_1a3454:
    // 0x1a3454: 0x0  nop
    ctx->pc = 0x1a3454u;
    // NOP
label_1a3458:
    // 0x1a3458: 0x4600a8c3  div.s       $f3, $f21, $f0
    ctx->pc = 0x1a3458u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
label_1a345c:
    // 0x1a345c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a3460:
    if (ctx->pc == 0x1A3460u) {
        ctx->pc = 0x1A3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A345Cu;
        // 0x1a3460: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3464u;
        goto label_1a3464;
    }
    ctx->pc = 0x1A345Cu;
    {
        const bool branch_taken_0x1a345c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A345Cu;
        // 0x1a3460: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a345c) {
            ctx->pc = 0x1A3490u;
            goto label_1a3490;
        }
    }
    ctx->pc = 0x1A3464u;
label_1a3464:
    // 0x1a3464: 0xc04642c  jal         func_1190B0
label_1a3468:
    if (ctx->pc == 0x1A3468u) {
        ctx->pc = 0x1A3468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3464u;
        // 0x1a3468: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A346Cu;
        goto label_1a346c;
    }
    ctx->pc = 0x1A3464u;
    SET_GPR_U32(ctx, 31, 0x1A346Cu);
    ctx->pc = 0x1A3468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3464u;
    // 0x1a3468: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1A3464u, 0x1A346Cu)) {
        return;
    }
    ctx->pc = 0x1A346Cu;
label_1a346c:
    // 0x1a346c: 0x0  nop
    ctx->pc = 0x1a346cu;
    // NOP
label_1a3470:
    // 0x1a3470: 0x0  nop
    ctx->pc = 0x1a3470u;
    // NOP
label_1a3474:
    // 0x1a3474: 0x46000004  c1          0x4
    ctx->pc = 0x1a3474u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_1a3478:
    // 0x1a3478: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a3478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a347c:
    // 0x1a347c: 0x0  nop
    ctx->pc = 0x1a347cu;
    // NOP
label_1a3480:
    // 0x1a3480: 0x4501fff3  bc1t        . + 4 + (-0xD << 2)
label_1a3484:
    if (ctx->pc == 0x1A3484u) {
        ctx->pc = 0x1A3484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3480u;
        // 0x1a3484: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3488u;
        goto label_1a3488;
    }
    ctx->pc = 0x1A3480u;
    {
        const bool branch_taken_0x1a3480 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3480u;
        // 0x1a3484: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3480) {
            ctx->pc = 0x1A3450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3450;
        }
    }
    ctx->pc = 0x1A3488u;
label_1a3488:
    // 0x1a3488: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a3488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a348c:
    // 0x1a348c: 0x0  nop
    ctx->pc = 0x1a348cu;
    // NOP
label_1a3490:
    // 0x1a3490: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1a3490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3494:
    // 0x1a3494: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1a3494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a3498:
    // 0x1a3498: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1a3498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1a349c:
    // 0x1a349c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1a349cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1a34a0:
    // 0x1a34a0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1a34a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1a34a4:
    // 0x1a34a4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a34a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a34a8:
    // 0x1a34a8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a34a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a34ac:
    // 0x1a34ac: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1a34acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a34b0:
    // 0x1a34b0: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1a34b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a34b4:
    // 0x1a34b4: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1a34b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a34b8:
    // 0x1a34b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a34b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1a34bc:
    // 0x1a34bc: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1a34bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a34c0:
    // 0x1a34c0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1a34c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a34c4:
    // 0x1a34c4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1a34c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1a34c8:
    // 0x1a34c8: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x1a34c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a34cc:
    // 0x1a34cc: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x1a34ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a34d0:
    // 0x1a34d0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1a34d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a34d4:
    // 0x1a34d4: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1a34d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a34d8:
    // 0x1a34d8: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1a34d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a34dc:
    // 0x1a34dc: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1a34dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_1a34e0:
    // 0x1a34e0: 0x12e0004e  beqz        $s7, . + 4 + (0x4E << 2)
label_1a34e4:
    if (ctx->pc == 0x1A34E4u) {
        ctx->pc = 0x1A34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34E0u;
        // 0x1a34e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A34E8u;
        goto label_1a34e8;
    }
    ctx->pc = 0x1A34E0u;
    {
        const bool branch_taken_0x1a34e0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34E0u;
        // 0x1a34e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34e0) {
            ctx->pc = 0x1A361Cu;
            goto label_1a361c;
        }
    }
    ctx->pc = 0x1A34E8u;
label_1a34e8:
    // 0x1a34e8: 0x8e041340  lw          $a0, 0x1340($s0)
    ctx->pc = 0x1a34e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4928)));
label_1a34ec:
    // 0x1a34ec: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
label_1a34f0:
    if (ctx->pc == 0x1A34F0u) {
        ctx->pc = 0x1A34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34ECu;
        // 0x1a34f0: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A34F4u;
        goto label_1a34f4;
    }
    ctx->pc = 0x1A34ECu;
    {
        const bool branch_taken_0x1a34ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34ECu;
        // 0x1a34f0: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34ec) {
            ctx->pc = 0x1A3548u;
            goto label_1a3548;
        }
    }
    ctx->pc = 0x1A34F4u;
label_1a34f4:
    // 0x1a34f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a34f8:
    if (ctx->pc == 0x1A34F8u) {
        ctx->pc = 0x1A34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34F4u;
        // 0x1a34f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A34FCu;
        goto label_1a34fc;
    }
    ctx->pc = 0x1A34F4u;
    {
        const bool branch_taken_0x1a34f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34F4u;
        // 0x1a34f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34f4) {
            ctx->pc = 0x1A350Cu;
            goto label_1a350c;
        }
    }
    ctx->pc = 0x1A34FCu;
label_1a34fc:
    // 0x1a34fc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1a3500:
    if (ctx->pc == 0x1A3500u) {
        ctx->pc = 0x1A3500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34FCu;
        // 0x1a3500: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3504u;
        goto label_1a3504;
    }
    ctx->pc = 0x1A34FCu;
    {
        const bool branch_taken_0x1a34fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34FCu;
        // 0x1a3500: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34fc) {
            ctx->pc = 0x1A3524u;
            goto label_1a3524;
        }
    }
    ctx->pc = 0x1A3504u;
label_1a3504:
    // 0x1a3504: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1a3508:
    if (ctx->pc == 0x1A3508u) {
        ctx->pc = 0x1A3508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3504u;
        // 0x1a3508: 0x8e02817c  lw          $v0, -0x7E84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294934908)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A350Cu;
        goto label_1a350c;
    }
    ctx->pc = 0x1A3504u;
    {
        const bool branch_taken_0x1a3504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3504u;
        // 0x1a3508: 0x8e02817c  lw          $v0, -0x7E84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294934908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3504) {
            ctx->pc = 0x1A35B4u;
            goto label_1a35b4;
        }
    }
    ctx->pc = 0x1A350Cu;
label_1a350c:
    // 0x1a350c: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
label_1a3510:
    if (ctx->pc == 0x1A3510u) {
        ctx->pc = 0x1A3510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A350Cu;
        // 0x1a3510: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3514u;
        goto label_1a3514;
    }
    ctx->pc = 0x1A350Cu;
    {
        const bool branch_taken_0x1a350c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A350Cu;
        // 0x1a3510: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a350c) {
            ctx->pc = 0x1A356Cu;
            goto label_1a356c;
        }
    }
    ctx->pc = 0x1A3514u;
label_1a3514:
    // 0x1a3514: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
label_1a3518:
    if (ctx->pc == 0x1A3518u) {
        ctx->pc = 0x1A3518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3514u;
        // 0x1a3518: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A351Cu;
        goto label_1a351c;
    }
    ctx->pc = 0x1A3514u;
    {
        const bool branch_taken_0x1a3514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3514u;
        // 0x1a3518: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3514) {
            ctx->pc = 0x1A3590u;
            goto label_1a3590;
        }
    }
    ctx->pc = 0x1A351Cu;
label_1a351c:
    // 0x1a351c: 0x10000025  b           . + 4 + (0x25 << 2)
label_1a3520:
    if (ctx->pc == 0x1A3520u) {
        ctx->pc = 0x1A3520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A351Cu;
        // 0x1a3520: 0x8e02817c  lw          $v0, -0x7E84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294934908)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3524u;
        goto label_1a3524;
    }
    ctx->pc = 0x1A351Cu;
    {
        const bool branch_taken_0x1a351c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A351Cu;
        // 0x1a3520: 0x8e02817c  lw          $v0, -0x7E84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294934908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a351c) {
            ctx->pc = 0x1A35B4u;
            goto label_1a35b4;
        }
    }
    ctx->pc = 0x1A3524u;
label_1a3524:
    // 0x1a3524: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a3524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a3528:
    // 0x1a3528: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a3528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a352c:
    // 0x1a352c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a352cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3530:
    // 0x1a3530: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1a3530u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1a3534:
    // 0x1a3534: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1a3534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a3538:
    // 0x1a3538: 0xc0692e8  jal         func_1A4BA0
label_1a353c:
    if (ctx->pc == 0x1A353Cu) {
        ctx->pc = 0x1A353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3538u;
        // 0x1a353c: 0x27a80070  addiu       $t0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3540u;
        goto label_1a3540;
    }
    ctx->pc = 0x1A3538u;
    SET_GPR_U32(ctx, 31, 0x1A3540u);
    ctx->pc = 0x1A353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3538u;
    // 0x1a353c: 0x27a80070  addiu       $t0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4BA0u, 0x1A3538u, 0x1A3540u)) {
        return;
    }
    ctx->pc = 0x1A3540u;
label_1a3540:
    // 0x1a3540: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1a3544:
    if (ctx->pc == 0x1A3544u) {
        ctx->pc = 0x1A3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3540u;
        // 0x1a3544: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3548u;
        goto label_1a3548;
    }
    ctx->pc = 0x1A3540u;
    {
        const bool branch_taken_0x1a3540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3540u;
        // 0x1a3544: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3540) {
            ctx->pc = 0x1A35B0u;
            goto label_1a35b0;
        }
    }
    ctx->pc = 0x1A3548u;
label_1a3548:
    // 0x1a3548: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a3548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a354c:
    // 0x1a354c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a354cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a3550:
    // 0x1a3550: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a3550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3554:
    // 0x1a3554: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1a3554u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1a3558:
    // 0x1a3558: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1a3558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a355c:
    // 0x1a355c: 0xc068e02  jal         func_1A3808
label_1a3560:
    if (ctx->pc == 0x1A3560u) {
        ctx->pc = 0x1A3560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A355Cu;
        // 0x1a3560: 0x27a80070  addiu       $t0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3564u;
        goto label_1a3564;
    }
    ctx->pc = 0x1A355Cu;
    SET_GPR_U32(ctx, 31, 0x1A3564u);
    ctx->pc = 0x1A3560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A355Cu;
    // 0x1a3560: 0x27a80070  addiu       $t0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A3808u, 0x1A355Cu, 0x1A3564u)) {
        return;
    }
    ctx->pc = 0x1A3564u;
label_1a3564:
    // 0x1a3564: 0x10000012  b           . + 4 + (0x12 << 2)
label_1a3568:
    if (ctx->pc == 0x1A3568u) {
        ctx->pc = 0x1A3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3564u;
        // 0x1a3568: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A356Cu;
        goto label_1a356c;
    }
    ctx->pc = 0x1A3564u;
    {
        const bool branch_taken_0x1a3564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3564u;
        // 0x1a3568: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3564) {
            ctx->pc = 0x1A35B0u;
            goto label_1a35b0;
        }
    }
    ctx->pc = 0x1A356Cu;
label_1a356c:
    // 0x1a356c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a356cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a3570:
    // 0x1a3570: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a3570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a3574:
    // 0x1a3574: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a3574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3578:
    // 0x1a3578: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1a3578u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1a357c:
    // 0x1a357c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1a357cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a3580:
    // 0x1a3580: 0xc068e96  jal         func_1A3A58
label_1a3584:
    if (ctx->pc == 0x1A3584u) {
        ctx->pc = 0x1A3584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3580u;
        // 0x1a3584: 0x27a80070  addiu       $t0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3588u;
        goto label_1a3588;
    }
    ctx->pc = 0x1A3580u;
    SET_GPR_U32(ctx, 31, 0x1A3588u);
    ctx->pc = 0x1A3584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3580u;
    // 0x1a3584: 0x27a80070  addiu       $t0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3A58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A3A58u, 0x1A3580u, 0x1A3588u)) {
        return;
    }
    ctx->pc = 0x1A3588u;
label_1a3588:
    // 0x1a3588: 0x10000009  b           . + 4 + (0x9 << 2)
label_1a358c:
    if (ctx->pc == 0x1A358Cu) {
        ctx->pc = 0x1A358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3588u;
        // 0x1a358c: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3590u;
        goto label_1a3590;
    }
    ctx->pc = 0x1A3588u;
    {
        const bool branch_taken_0x1a3588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3588u;
        // 0x1a358c: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3588) {
            ctx->pc = 0x1A35B0u;
            goto label_1a35b0;
        }
    }
    ctx->pc = 0x1A3590u;
label_1a3590:
    // 0x1a3590: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a3590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a3594:
    // 0x1a3594: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a3594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a3598:
    // 0x1a3598: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a3598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a359c:
    // 0x1a359c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1a359cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1a35a0:
    // 0x1a35a0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1a35a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a35a4:
    // 0x1a35a4: 0xc068ff0  jal         func_1A3FC0
label_1a35a8:
    if (ctx->pc == 0x1A35A8u) {
        ctx->pc = 0x1A35A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35A4u;
        // 0x1a35a8: 0x27a80070  addiu       $t0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A35ACu;
        goto label_1a35ac;
    }
    ctx->pc = 0x1A35A4u;
    SET_GPR_U32(ctx, 31, 0x1A35ACu);
    ctx->pc = 0x1A35A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A35A4u;
    // 0x1a35a8: 0x27a80070  addiu       $t0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A3FC0u, 0x1A35A4u, 0x1A35ACu)) {
        return;
    }
    ctx->pc = 0x1A35ACu;
label_1a35ac:
    // 0x1a35ac: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x1a35acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
label_1a35b0:
    // 0x1a35b0: 0x8e02817c  lw          $v0, -0x7E84($s0)
    ctx->pc = 0x1a35b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294934908)));
label_1a35b4:
    // 0x1a35b4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1a35b8:
    if (ctx->pc == 0x1A35B8u) {
        ctx->pc = 0x1A35B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35B4u;
        // 0x1a35b8: 0x3c110070  lui         $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A35BCu;
        goto label_1a35bc;
    }
    ctx->pc = 0x1A35B4u;
    {
        const bool branch_taken_0x1a35b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A35B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35B4u;
        // 0x1a35b8: 0x3c110070  lui         $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35b4) {
            ctx->pc = 0x1A35DCu;
            goto label_1a35dc;
        }
    }
    ctx->pc = 0x1A35BCu;
label_1a35bc:
    // 0x1a35bc: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x1a35bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_1a35c0:
    // 0x1a35c0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1a35c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_1a35c4:
    // 0x1a35c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a35c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a35c8:
    // 0x1a35c8: 0xc09b0e8  jal         func_26C3A0
label_1a35cc:
    if (ctx->pc == 0x1A35CCu) {
        ctx->pc = 0x1A35D0u;
        goto label_1a35d0;
    }
    ctx->pc = 0x1A35C8u;
    SET_GPR_U32(ctx, 31, 0x1A35D0u);
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x1A35C8u, 0x1A35D0u)) {
        return;
    }
    ctx->pc = 0x1A35D0u;
label_1a35d0:
    // 0x1a35d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a35d4:
    // 0x1a35d4: 0xe6208178  swc1        $f0, -0x7E88($s1)
    ctx->pc = 0x1a35d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294934904), bits); }
label_1a35d8:
    // 0x1a35d8: 0xae02817c  sw          $v0, -0x7E84($s0)
    ctx->pc = 0x1a35d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294934908), GPR_U32(ctx, 2));
label_1a35dc:
    // 0x1a35dc: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x1a35dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a35e0:
    // 0x1a35e0: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1a35e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a35e4:
    // 0x1a35e4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1a35e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a35e8:
    // 0x1a35e8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1a35e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a35ec:
    // 0x1a35ec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a35ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1a35f0:
    // 0x1a35f0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1a35f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a35f4:
    // 0x1a35f4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a35f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_1a35f8:
    // 0x1a35f8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1a35f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a35fc:
    // 0x1a35fc: 0xc6248178  lwc1        $f4, -0x7E88($s1)
    ctx->pc = 0x1a35fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294934904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a3600:
    // 0x1a3600: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a3600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1a3604:
    // 0x1a3604: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a3604u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1a3608:
    // 0x1a3608: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a3608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a360c:
    // 0x1a360c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1a360cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a3610:
    // 0x1a3610: 0x0  nop
    ctx->pc = 0x1a3610u;
    // NOP
label_1a3614:
    // 0x1a3614: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1a3618:
    if (ctx->pc == 0x1A3618u) {
        ctx->pc = 0x1A3618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3614u;
        // 0x1a3618: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A361Cu;
        goto label_1a361c;
    }
    ctx->pc = 0x1A3614u;
    {
        const bool branch_taken_0x1a3614 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3614) {
            ctx->pc = 0x1A3618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3614u;
            // 0x1a3618: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A361Cu;
            goto label_1a361c;
        }
    }
    ctx->pc = 0x1A361Cu;
label_1a361c:
    // 0x1a361c: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1a361cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a3620:
    // 0x1a3620: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1a3620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a3624:
    // 0x1a3624: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a3624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1a3628:
    // 0x1a3628: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x1a3628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a362c:
    // 0x1a362c: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x1a362cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3630:
    // 0x1a3630: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1a3630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_1a3634:
    // 0x1a3634: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a3638:
    // 0x1a3638: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a3638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1a363c:
    // 0x1a363c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1a363cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_1a3640:
    // 0x1a3640: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1a3640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_1a3644:
    // 0x1a3644: 0xe6d50008  swc1        $f21, 0x8($s6)
    ctx->pc = 0x1a3644u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_1a3648:
    // 0x1a3648: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1a3648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_1a364c:
    // 0x1a364c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1a364cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3650:
    // 0x1a3650: 0xc7b40054  lwc1        $f20, 0x54($sp)
    ctx->pc = 0x1a3650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a3654:
    // 0x1a3654: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a3654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1a3658:
    // 0x1a3658: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1a3658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a365c:
    // 0x1a365c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a365cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1a3660:
    // 0x1a3660: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1a3660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1a3664:
    // 0x1a3664: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a3664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a3668:
    // 0x1a3668: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1a3668u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a366c:
    // 0x1a366c: 0x0  nop
    ctx->pc = 0x1a366cu;
    // NOP
label_1a3670:
    // 0x1a3670: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_1a3674:
    if (ctx->pc == 0x1A3674u) {
        ctx->pc = 0x1A3674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3670u;
        // 0x1a3674: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3678u;
        goto label_1a3678;
    }
    ctx->pc = 0x1A3670u;
    {
        const bool branch_taken_0x1a3670 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3670u;
        // 0x1a3674: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3670) {
            ctx->pc = 0x1A36ACu;
            goto label_1a36ac;
        }
    }
    ctx->pc = 0x1A3678u;
label_1a3678:
    // 0x1a3678: 0x6ba60067  ldl         $a2, 0x67($sp)
    ctx->pc = 0x1a3678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a367c:
    // 0x1a367c: 0x6fa60060  ldr         $a2, 0x60($sp)
    ctx->pc = 0x1a367cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a3680:
    // 0x1a3680: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1a3680u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1a3684:
    // 0x1a3684: 0xb3a60057  sdl         $a2, 0x57($sp)
    ctx->pc = 0x1a3684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3688:
    // 0x1a3688: 0xb7a60050  sdr         $a2, 0x50($sp)
    ctx->pc = 0x1a3688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a368c:
    // 0x1a368c: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x1a368cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
label_1a3690:
    // 0x1a3690: 0x10000019  b           . + 4 + (0x19 << 2)
label_1a3694:
    if (ctx->pc == 0x1A3694u) {
        ctx->pc = 0x1A3698u;
        goto label_1a3698;
    }
    ctx->pc = 0x1A3690u;
    {
        const bool branch_taken_0x1a3690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3690) {
            ctx->pc = 0x1A36F8u;
            goto label_1a36f8;
        }
    }
    ctx->pc = 0x1A3698u;
label_1a3698:
    // 0x1a3698: 0x0  nop
    ctx->pc = 0x1a3698u;
    // NOP
label_1a369c:
    // 0x1a369c: 0x0  nop
    ctx->pc = 0x1a369cu;
    // NOP
label_1a36a0:
    // 0x1a36a0: 0x4600a8c3  div.s       $f3, $f21, $f0
    ctx->pc = 0x1a36a0u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
label_1a36a4:
    // 0x1a36a4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a36a8:
    if (ctx->pc == 0x1A36A8u) {
        ctx->pc = 0x1A36A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36A4u;
        // 0x1a36a8: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A36ACu;
        goto label_1a36ac;
    }
    ctx->pc = 0x1A36A4u;
    {
        const bool branch_taken_0x1a36a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A36A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36A4u;
        // 0x1a36a8: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36a4) {
            ctx->pc = 0x1A36D8u;
            goto label_1a36d8;
        }
    }
    ctx->pc = 0x1A36ACu;
label_1a36ac:
    // 0x1a36ac: 0xc04642c  jal         func_1190B0
label_1a36b0:
    if (ctx->pc == 0x1A36B0u) {
        ctx->pc = 0x1A36B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36ACu;
        // 0x1a36b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A36B4u;
        goto label_1a36b4;
    }
    ctx->pc = 0x1A36ACu;
    SET_GPR_U32(ctx, 31, 0x1A36B4u);
    ctx->pc = 0x1A36B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36ACu;
    // 0x1a36b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1A36ACu, 0x1A36B4u)) {
        return;
    }
    ctx->pc = 0x1A36B4u;
label_1a36b4:
    // 0x1a36b4: 0x0  nop
    ctx->pc = 0x1a36b4u;
    // NOP
label_1a36b8:
    // 0x1a36b8: 0x0  nop
    ctx->pc = 0x1a36b8u;
    // NOP
label_1a36bc:
    // 0x1a36bc: 0x46000004  c1          0x4
    ctx->pc = 0x1a36bcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_1a36c0:
    // 0x1a36c0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a36c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a36c4:
    // 0x1a36c4: 0x0  nop
    ctx->pc = 0x1a36c4u;
    // NOP
label_1a36c8:
    // 0x1a36c8: 0x4501fff3  bc1t        . + 4 + (-0xD << 2)
label_1a36cc:
    if (ctx->pc == 0x1A36CCu) {
        ctx->pc = 0x1A36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36C8u;
        // 0x1a36cc: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A36D0u;
        goto label_1a36d0;
    }
    ctx->pc = 0x1A36C8u;
    {
        const bool branch_taken_0x1a36c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36C8u;
        // 0x1a36cc: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36c8) {
            ctx->pc = 0x1A3698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3698;
        }
    }
    ctx->pc = 0x1A36D0u;
label_1a36d0:
    // 0x1a36d0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1a36d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a36d4:
    // 0x1a36d4: 0x0  nop
    ctx->pc = 0x1a36d4u;
    // NOP
label_1a36d8:
    // 0x1a36d8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1a36d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a36dc:
    // 0x1a36dc: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x1a36dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a36e0:
    // 0x1a36e0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1a36e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1a36e4:
    // 0x1a36e4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1a36e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1a36e8:
    // 0x1a36e8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1a36e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1a36ec:
    // 0x1a36ec: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1a36ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1a36f0:
    // 0x1a36f0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1a36f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1a36f4:
    // 0x1a36f4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x1a36f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1a36f8:
    // 0x1a36f8: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x1a36f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a36fc:
    // 0x1a36fc: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x1a36fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a3700:
    // 0x1a3700: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a3700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a3704:
    // 0x1a3704: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x1a3704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3708:
    // 0x1a3708: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x1a3708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a370c:
    // 0x1a370c: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x1a370cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_1a3710:
    // 0x1a3710: 0x4600b8c6  mov.s       $f3, $f23
    ctx->pc = 0x1a3710u;
    ctx->f[3] = FPU_MOV_S(ctx->f[23]);
label_1a3714:
    // 0x1a3714: 0x6ba60047  ldl         $a2, 0x47($sp)
    ctx->pc = 0x1a3714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a3718:
    // 0x1a3718: 0x6fa60040  ldr         $a2, 0x40($sp)
    ctx->pc = 0x1a3718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a371c:
    // 0x1a371c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1a371cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1a3720:
    // 0x1a3720: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1a3720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3724:
    // 0x1a3724: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1a3724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3728:
    // 0x1a3728: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1a3728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_1a372c:
    // 0x1a372c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a372cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3730:
    // 0x1a3730: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1a3730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3734:
    // 0x1a3734: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x1a3734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a3738:
    // 0x1a3738: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a3738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a373c:
    // 0x1a373c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1a373cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1a3740:
    // 0x1a3740: 0x4602b834  c.lt.s      $f23, $f2
    ctx->pc = 0x1a3740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a3744:
    // 0x1a3744: 0x0  nop
    ctx->pc = 0x1a3744u;
    // NOP
label_1a3748:
    // 0x1a3748: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1a374c:
    if (ctx->pc == 0x1A374Cu) {
        ctx->pc = 0x1A374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3748u;
        // 0x1a374c: 0x8e422aa8  lw          $v0, 0x2AA8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3750u;
        goto label_1a3750;
    }
    ctx->pc = 0x1A3748u;
    {
        const bool branch_taken_0x1a3748 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3748u;
        // 0x1a374c: 0x8e422aa8  lw          $v0, 0x2AA8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3748) {
            ctx->pc = 0x1A3758u;
            goto label_1a3758;
        }
    }
    ctx->pc = 0x1A3750u;
label_1a3750:
    // 0x1a3750: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a3754:
    // 0x1a3754: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a3754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a3758:
    // 0x1a3758: 0x0  nop
    ctx->pc = 0x1a3758u;
    // NOP
label_1a375c:
    // 0x1a375c: 0xe4430078  swc1        $f3, 0x78($v0)
    ctx->pc = 0x1a375cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
label_1a3760:
    // 0x1a3760: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x1a3760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a3764:
    // 0x1a3764: 0x8e422aa8  lw          $v0, 0x2AA8($s2)
    ctx->pc = 0x1a3764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10920)));
label_1a3768:
    // 0x1a3768: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1a3768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a376c:
    // 0x1a376c: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x1a376cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_1a3770:
    // 0x1a3770: 0x8e432aa8  lw          $v1, 0x2AA8($s2)
    ctx->pc = 0x1a3770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10920)));
label_1a3774:
    // 0x1a3774: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1a3774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a3778:
    // 0x1a3778: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1a3778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a377c:
    // 0x1a377c: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x1a377cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3780:
    // 0x1a3780: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x1a3780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3784:
    // 0x1a3784: 0x6ba70047  ldl         $a3, 0x47($sp)
    ctx->pc = 0x1a3784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1a3788:
    // 0x1a3788: 0x6fa70040  ldr         $a3, 0x40($sp)
    ctx->pc = 0x1a3788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1a378c:
    // 0x1a378c: 0xb0670043  sdl         $a3, 0x43($v1)
    ctx->pc = 0x1a378cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3790:
    // 0x1a3790: 0xb467003c  sdr         $a3, 0x3C($v1)
    ctx->pc = 0x1a3790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3794:
    // 0x1a3794: 0x8e442aa8  lw          $a0, 0x2AA8($s2)
    ctx->pc = 0x1a3794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10920)));
label_1a3798:
    // 0x1a3798: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x1a3798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a379c:
    // 0x1a379c: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x1a379cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a37a0:
    // 0x1a37a0: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x1a37a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a37a4:
    // 0x1a37a4: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x1a37a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a37a8:
    // 0x1a37a8: 0x6ba80047  ldl         $t0, 0x47($sp)
    ctx->pc = 0x1a37a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1a37ac:
    // 0x1a37ac: 0x6fa80040  ldr         $t0, 0x40($sp)
    ctx->pc = 0x1a37acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1a37b0:
    // 0x1a37b0: 0xb088004b  sdl         $t0, 0x4B($a0)
    ctx->pc = 0x1a37b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a37b4:
    // 0x1a37b4: 0xb4880044  sdr         $t0, 0x44($a0)
    ctx->pc = 0x1a37b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a37b8:
    // 0x1a37b8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1a37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1a37bc:
    // 0x1a37bc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1a37bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a37c0:
    // 0x1a37c0: 0x1440fe77  bnez        $v0, . + 4 + (-0x189 << 2)
label_1a37c4:
    if (ctx->pc == 0x1A37C4u) {
        ctx->pc = 0x1A37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37C0u;
        // 0x1a37c4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A37C8u;
        goto label_1a37c8;
    }
    ctx->pc = 0x1A37C0u;
    {
        const bool branch_taken_0x1a37c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37C0u;
        // 0x1a37c4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37c0) {
            ctx->pc = 0x1A31A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a31a0;
        }
    }
    ctx->pc = 0x1A37C8u;
label_1a37c8:
    // 0x1a37c8: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1a37c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1a37cc:
    // 0x1a37cc: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1a37ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1a37d0:
    // 0x1a37d0: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1a37d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1a37d4:
    // 0x1a37d4: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1a37d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1a37d8:
    // 0x1a37d8: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1a37d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1a37dc:
    // 0x1a37dc: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x1a37dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1a37e0:
    // 0x1a37e0: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x1a37e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a37e4:
    // 0x1a37e4: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1a37e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a37e8:
    // 0x1a37e8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1a37e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a37ec:
    // 0x1a37ec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a37ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a37f0:
    // 0x1a37f0: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x1a37f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1a37f4:
    // 0x1a37f4: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x1a37f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1a37f8:
    // 0x1a37f8: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x1a37f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a37fc:
    // 0x1a37fc: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1a37fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a3800:
    // 0x1a3800: 0x3e00008  jr          $ra
label_1a3804:
    if (ctx->pc == 0x1A3804u) {
        ctx->pc = 0x1A3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3800u;
        // 0x1a3804: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3808u;
        goto label_fallthrough_0x1a3800;
    }
    ctx->pc = 0x1A3800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3800u;
        // 0x1a3804: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a3800:
    ctx->pc = 0x1A3808u;
}
