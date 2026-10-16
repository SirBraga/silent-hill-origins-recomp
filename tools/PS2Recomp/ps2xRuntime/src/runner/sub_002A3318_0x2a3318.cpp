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

// Function: sub_002A3318
// Address: 0x2a3318 - 0x2a3648
void sub_002A3318_0x2a3318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3318_0x2a3318");
#endif

    switch (ctx->pc) {
        case 0x2a3318u: goto label_2a3318;
        case 0x2a331cu: goto label_2a331c;
        case 0x2a3320u: goto label_2a3320;
        case 0x2a3324u: goto label_2a3324;
        case 0x2a3328u: goto label_2a3328;
        case 0x2a332cu: goto label_2a332c;
        case 0x2a3330u: goto label_2a3330;
        case 0x2a3334u: goto label_2a3334;
        case 0x2a3338u: goto label_2a3338;
        case 0x2a333cu: goto label_2a333c;
        case 0x2a3340u: goto label_2a3340;
        case 0x2a3344u: goto label_2a3344;
        case 0x2a3348u: goto label_2a3348;
        case 0x2a334cu: goto label_2a334c;
        case 0x2a3350u: goto label_2a3350;
        case 0x2a3354u: goto label_2a3354;
        case 0x2a3358u: goto label_2a3358;
        case 0x2a335cu: goto label_2a335c;
        case 0x2a3360u: goto label_2a3360;
        case 0x2a3364u: goto label_2a3364;
        case 0x2a3368u: goto label_2a3368;
        case 0x2a336cu: goto label_2a336c;
        case 0x2a3370u: goto label_2a3370;
        case 0x2a3374u: goto label_2a3374;
        case 0x2a3378u: goto label_2a3378;
        case 0x2a337cu: goto label_2a337c;
        case 0x2a3380u: goto label_2a3380;
        case 0x2a3384u: goto label_2a3384;
        case 0x2a3388u: goto label_2a3388;
        case 0x2a338cu: goto label_2a338c;
        case 0x2a3390u: goto label_2a3390;
        case 0x2a3394u: goto label_2a3394;
        case 0x2a3398u: goto label_2a3398;
        case 0x2a339cu: goto label_2a339c;
        case 0x2a33a0u: goto label_2a33a0;
        case 0x2a33a4u: goto label_2a33a4;
        case 0x2a33a8u: goto label_2a33a8;
        case 0x2a33acu: goto label_2a33ac;
        case 0x2a33b0u: goto label_2a33b0;
        case 0x2a33b4u: goto label_2a33b4;
        case 0x2a33b8u: goto label_2a33b8;
        case 0x2a33bcu: goto label_2a33bc;
        case 0x2a33c0u: goto label_2a33c0;
        case 0x2a33c4u: goto label_2a33c4;
        case 0x2a33c8u: goto label_2a33c8;
        case 0x2a33ccu: goto label_2a33cc;
        case 0x2a33d0u: goto label_2a33d0;
        case 0x2a33d4u: goto label_2a33d4;
        case 0x2a33d8u: goto label_2a33d8;
        case 0x2a33dcu: goto label_2a33dc;
        case 0x2a33e0u: goto label_2a33e0;
        case 0x2a33e4u: goto label_2a33e4;
        case 0x2a33e8u: goto label_2a33e8;
        case 0x2a33ecu: goto label_2a33ec;
        case 0x2a33f0u: goto label_2a33f0;
        case 0x2a33f4u: goto label_2a33f4;
        case 0x2a33f8u: goto label_2a33f8;
        case 0x2a33fcu: goto label_2a33fc;
        case 0x2a3400u: goto label_2a3400;
        case 0x2a3404u: goto label_2a3404;
        case 0x2a3408u: goto label_2a3408;
        case 0x2a340cu: goto label_2a340c;
        case 0x2a3410u: goto label_2a3410;
        case 0x2a3414u: goto label_2a3414;
        case 0x2a3418u: goto label_2a3418;
        case 0x2a341cu: goto label_2a341c;
        case 0x2a3420u: goto label_2a3420;
        case 0x2a3424u: goto label_2a3424;
        case 0x2a3428u: goto label_2a3428;
        case 0x2a342cu: goto label_2a342c;
        case 0x2a3430u: goto label_2a3430;
        case 0x2a3434u: goto label_2a3434;
        case 0x2a3438u: goto label_2a3438;
        case 0x2a343cu: goto label_2a343c;
        case 0x2a3440u: goto label_2a3440;
        case 0x2a3444u: goto label_2a3444;
        case 0x2a3448u: goto label_2a3448;
        case 0x2a344cu: goto label_2a344c;
        case 0x2a3450u: goto label_2a3450;
        case 0x2a3454u: goto label_2a3454;
        case 0x2a3458u: goto label_2a3458;
        case 0x2a345cu: goto label_2a345c;
        case 0x2a3460u: goto label_2a3460;
        case 0x2a3464u: goto label_2a3464;
        case 0x2a3468u: goto label_2a3468;
        case 0x2a346cu: goto label_2a346c;
        case 0x2a3470u: goto label_2a3470;
        case 0x2a3474u: goto label_2a3474;
        case 0x2a3478u: goto label_2a3478;
        case 0x2a347cu: goto label_2a347c;
        case 0x2a3480u: goto label_2a3480;
        case 0x2a3484u: goto label_2a3484;
        case 0x2a3488u: goto label_2a3488;
        case 0x2a348cu: goto label_2a348c;
        case 0x2a3490u: goto label_2a3490;
        case 0x2a3494u: goto label_2a3494;
        case 0x2a3498u: goto label_2a3498;
        case 0x2a349cu: goto label_2a349c;
        case 0x2a34a0u: goto label_2a34a0;
        case 0x2a34a4u: goto label_2a34a4;
        case 0x2a34a8u: goto label_2a34a8;
        case 0x2a34acu: goto label_2a34ac;
        case 0x2a34b0u: goto label_2a34b0;
        case 0x2a34b4u: goto label_2a34b4;
        case 0x2a34b8u: goto label_2a34b8;
        case 0x2a34bcu: goto label_2a34bc;
        case 0x2a34c0u: goto label_2a34c0;
        case 0x2a34c4u: goto label_2a34c4;
        case 0x2a34c8u: goto label_2a34c8;
        case 0x2a34ccu: goto label_2a34cc;
        case 0x2a34d0u: goto label_2a34d0;
        case 0x2a34d4u: goto label_2a34d4;
        case 0x2a34d8u: goto label_2a34d8;
        case 0x2a34dcu: goto label_2a34dc;
        case 0x2a34e0u: goto label_2a34e0;
        case 0x2a34e4u: goto label_2a34e4;
        case 0x2a34e8u: goto label_2a34e8;
        case 0x2a34ecu: goto label_2a34ec;
        case 0x2a34f0u: goto label_2a34f0;
        case 0x2a34f4u: goto label_2a34f4;
        case 0x2a34f8u: goto label_2a34f8;
        case 0x2a34fcu: goto label_2a34fc;
        case 0x2a3500u: goto label_2a3500;
        case 0x2a3504u: goto label_2a3504;
        case 0x2a3508u: goto label_2a3508;
        case 0x2a350cu: goto label_2a350c;
        case 0x2a3510u: goto label_2a3510;
        case 0x2a3514u: goto label_2a3514;
        case 0x2a3518u: goto label_2a3518;
        case 0x2a351cu: goto label_2a351c;
        case 0x2a3520u: goto label_2a3520;
        case 0x2a3524u: goto label_2a3524;
        case 0x2a3528u: goto label_2a3528;
        case 0x2a352cu: goto label_2a352c;
        case 0x2a3530u: goto label_2a3530;
        case 0x2a3534u: goto label_2a3534;
        case 0x2a3538u: goto label_2a3538;
        case 0x2a353cu: goto label_2a353c;
        case 0x2a3540u: goto label_2a3540;
        case 0x2a3544u: goto label_2a3544;
        case 0x2a3548u: goto label_2a3548;
        case 0x2a354cu: goto label_2a354c;
        case 0x2a3550u: goto label_2a3550;
        case 0x2a3554u: goto label_2a3554;
        case 0x2a3558u: goto label_2a3558;
        case 0x2a355cu: goto label_2a355c;
        case 0x2a3560u: goto label_2a3560;
        case 0x2a3564u: goto label_2a3564;
        case 0x2a3568u: goto label_2a3568;
        case 0x2a356cu: goto label_2a356c;
        case 0x2a3570u: goto label_2a3570;
        case 0x2a3574u: goto label_2a3574;
        case 0x2a3578u: goto label_2a3578;
        case 0x2a357cu: goto label_2a357c;
        case 0x2a3580u: goto label_2a3580;
        case 0x2a3584u: goto label_2a3584;
        case 0x2a3588u: goto label_2a3588;
        case 0x2a358cu: goto label_2a358c;
        case 0x2a3590u: goto label_2a3590;
        case 0x2a3594u: goto label_2a3594;
        case 0x2a3598u: goto label_2a3598;
        case 0x2a359cu: goto label_2a359c;
        case 0x2a35a0u: goto label_2a35a0;
        case 0x2a35a4u: goto label_2a35a4;
        case 0x2a35a8u: goto label_2a35a8;
        case 0x2a35acu: goto label_2a35ac;
        case 0x2a35b0u: goto label_2a35b0;
        case 0x2a35b4u: goto label_2a35b4;
        case 0x2a35b8u: goto label_2a35b8;
        case 0x2a35bcu: goto label_2a35bc;
        case 0x2a35c0u: goto label_2a35c0;
        case 0x2a35c4u: goto label_2a35c4;
        case 0x2a35c8u: goto label_2a35c8;
        case 0x2a35ccu: goto label_2a35cc;
        case 0x2a35d0u: goto label_2a35d0;
        case 0x2a35d4u: goto label_2a35d4;
        case 0x2a35d8u: goto label_2a35d8;
        case 0x2a35dcu: goto label_2a35dc;
        case 0x2a35e0u: goto label_2a35e0;
        case 0x2a35e4u: goto label_2a35e4;
        case 0x2a35e8u: goto label_2a35e8;
        case 0x2a35ecu: goto label_2a35ec;
        case 0x2a35f0u: goto label_2a35f0;
        case 0x2a35f4u: goto label_2a35f4;
        case 0x2a35f8u: goto label_2a35f8;
        case 0x2a35fcu: goto label_2a35fc;
        case 0x2a3600u: goto label_2a3600;
        case 0x2a3604u: goto label_2a3604;
        case 0x2a3608u: goto label_2a3608;
        case 0x2a360cu: goto label_2a360c;
        case 0x2a3610u: goto label_2a3610;
        case 0x2a3614u: goto label_2a3614;
        case 0x2a3618u: goto label_2a3618;
        case 0x2a361cu: goto label_2a361c;
        case 0x2a3620u: goto label_2a3620;
        case 0x2a3624u: goto label_2a3624;
        case 0x2a3628u: goto label_2a3628;
        case 0x2a362cu: goto label_2a362c;
        case 0x2a3630u: goto label_2a3630;
        case 0x2a3634u: goto label_2a3634;
        case 0x2a3638u: goto label_2a3638;
        case 0x2a363cu: goto label_2a363c;
        case 0x2a3640u: goto label_2a3640;
        case 0x2a3644u: goto label_2a3644;
        default: break;
    }

    ctx->pc = 0x2a3318u;

label_2a3318:
    // 0x2a3318: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2a3318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2a331c:
    // 0x2a331c: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2a331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
label_2a3320:
    // 0x2a3320: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2a3320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_2a3324:
    // 0x2a3324: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a3324u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3328:
    // 0x2a3328: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x2a3328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
label_2a332c:
    // 0x2a332c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a332cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a3330:
    // 0x2a3330: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2a3330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_2a3334:
    // 0x2a3334: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2a3334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_2a3338:
    // 0x2a3338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a333c:
    // 0x2a333c: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x2a333cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
label_2a3340:
    // 0x2a3340: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2a3340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2a3344:
    // 0x2a3344: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2a3344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2a3348:
    // 0x2a3348: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2a334c:
    if (ctx->pc == 0x2A334Cu) {
        ctx->pc = 0x2A334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3348u;
        // 0x2a334c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3350u;
        goto label_2a3350;
    }
    ctx->pc = 0x2A3348u;
    {
        const bool branch_taken_0x2a3348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3348u;
        // 0x2a334c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3348) {
            ctx->pc = 0x2A3364u;
            goto label_2a3364;
        }
    }
    ctx->pc = 0x2A3350u;
label_2a3350:
    // 0x2a3350: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2a3350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2a3354:
    // 0x2a3354: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2a3354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2a3358:
    // 0x2a3358: 0x831026  xor         $v0, $a0, $v1
    ctx->pc = 0x2a3358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_2a335c:
    // 0x2a335c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a3360:
    if (ctx->pc == 0x2A3360u) {
        ctx->pc = 0x2A3360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A335Cu;
        // 0x2a3360: 0x2c540001  sltiu       $s4, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3364u;
        goto label_2a3364;
    }
    ctx->pc = 0x2A335Cu;
    {
        const bool branch_taken_0x2a335c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A335Cu;
        // 0x2a3360: 0x2c540001  sltiu       $s4, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a335c) {
            ctx->pc = 0x2A336Cu;
            goto label_2a336c;
        }
    }
    ctx->pc = 0x2A3364u;
label_2a3364:
    // 0x2a3364: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2a3364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2a3368:
    // 0x2a3368: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2a3368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2a336c:
    // 0x2a336c: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_2a3370:
    if (ctx->pc == 0x2A3370u) {
        ctx->pc = 0x2A3370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A336Cu;
        // 0x2a3370: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3374u;
        goto label_2a3374;
    }
    ctx->pc = 0x2A336Cu;
    {
        const bool branch_taken_0x2a336c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A336Cu;
        // 0x2a3370: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a336c) {
            ctx->pc = 0x2A337Cu;
            goto label_2a337c;
        }
    }
    ctx->pc = 0x2A3374u;
label_2a3374:
    // 0x2a3374: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2a3374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a3378:
    // 0x2a3378: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a3378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a337c:
    // 0x2a337c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2a3380:
    if (ctx->pc == 0x2A3380u) {
        ctx->pc = 0x2A3384u;
        goto label_2a3384;
    }
    ctx->pc = 0x2A337Cu;
    {
        const bool branch_taken_0x2a337c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a337c) {
            ctx->pc = 0x2A3394u;
            goto label_2a3394;
        }
    }
    ctx->pc = 0x2A3384u;
label_2a3384:
    // 0x2a3384: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2a3384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a3388:
    // 0x2a3388: 0x30820800  andi        $v0, $a0, 0x800
    ctx->pc = 0x2a3388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
label_2a338c:
    // 0x2a338c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2a3390:
    if (ctx->pc == 0x2A3390u) {
        ctx->pc = 0x2A3390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A338Cu;
        // 0x2a3390: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3394u;
        goto label_2a3394;
    }
    ctx->pc = 0x2A338Cu;
    {
        const bool branch_taken_0x2a338c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a338c) {
            ctx->pc = 0x2A3390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A338Cu;
            // 0x2a3390: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A33A8u;
            goto label_2a33a8;
        }
    }
    ctx->pc = 0x2A3394u;
label_2a3394:
    // 0x2a3394: 0xc0a71c2  jal         func_29C708
label_2a3398:
    if (ctx->pc == 0x2A3398u) {
        ctx->pc = 0x2A3398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3394u;
        // 0x2a3398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A339Cu;
        goto label_2a339c;
    }
    ctx->pc = 0x2A3394u;
    SET_GPR_U32(ctx, 31, 0x2A339Cu);
    ctx->pc = 0x2A3398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3394u;
    // 0x2a3398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C708u, 0x2A3394u, 0x2A339Cu)) {
        return;
    }
    ctx->pc = 0x2A339Cu;
label_2a339c:
    // 0x2a339c: 0x144000a2  bnez        $v0, . + 4 + (0xA2 << 2)
label_2a33a0:
    if (ctx->pc == 0x2A33A0u) {
        ctx->pc = 0x2A33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A339Cu;
        // 0x2a33a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A33A4u;
        goto label_2a33a4;
    }
    ctx->pc = 0x2A339Cu;
    {
        const bool branch_taken_0x2a339c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A339Cu;
        // 0x2a33a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a339c) {
            ctx->pc = 0x2A3628u;
            goto label_2a3628;
        }
    }
    ctx->pc = 0x2A33A4u;
label_2a33a4:
    // 0x2a33a4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2a33a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2a33a8:
    // 0x2a33a8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2a33ac:
    if (ctx->pc == 0x2A33ACu) {
        ctx->pc = 0x2A33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33A8u;
        // 0x2a33ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A33B0u;
        goto label_2a33b0;
    }
    ctx->pc = 0x2A33A8u;
    {
        const bool branch_taken_0x2a33a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33A8u;
        // 0x2a33ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a33a8) {
            ctx->pc = 0x2A33D8u;
            goto label_2a33d8;
        }
    }
    ctx->pc = 0x2A33B0u;
label_2a33b0:
    // 0x2a33b0: 0xc0a7302  jal         func_29CC08
label_2a33b4:
    if (ctx->pc == 0x2A33B4u) {
        ctx->pc = 0x2A33B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33B0u;
        // 0x2a33b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A33B8u;
        goto label_2a33b8;
    }
    ctx->pc = 0x2A33B0u;
    SET_GPR_U32(ctx, 31, 0x2A33B8u);
    ctx->pc = 0x2A33B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A33B0u;
    // 0x2a33b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CC08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29CC08u, 0x2A33B0u, 0x2A33B8u)) {
        return;
    }
    ctx->pc = 0x2A33B8u;
label_2a33b8:
    // 0x2a33b8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2a33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2a33bc:
    // 0x2a33bc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2a33bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2a33c0:
    // 0x2a33c0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2a33c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2a33c4:
    // 0x2a33c4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2a33c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2a33c8:
    // 0x2a33c8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2a33c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_2a33cc:
    // 0x2a33cc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2a33ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2a33d0:
    // 0x2a33d0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2a33d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2a33d4:
    // 0x2a33d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a33d8:
    // 0x2a33d8: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_2a33dc:
    if (ctx->pc == 0x2A33DCu) {
        ctx->pc = 0x2A33DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33D8u;
        // 0x2a33dc: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A33E0u;
        goto label_2a33e0;
    }
    ctx->pc = 0x2A33D8u;
    {
        const bool branch_taken_0x2a33d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A33DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33D8u;
        // 0x2a33dc: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a33d8) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A33E0u;
label_2a33e0:
    // 0x2a33e0: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_2a33e4:
    if (ctx->pc == 0x2A33E4u) {
        ctx->pc = 0x2A33E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33E0u;
        // 0x2a33e4: 0xde050040  ld          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A33E8u;
        goto label_2a33e8;
    }
    ctx->pc = 0x2A33E0u;
    {
        const bool branch_taken_0x2a33e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a33e0) {
            ctx->pc = 0x2A33E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A33E0u;
            // 0x2a33e4: 0xde050040  ld          $a1, 0x40($s0) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3458u;
            goto label_2a3458;
        }
    }
    ctx->pc = 0x2A33E8u;
label_2a33e8:
    // 0x2a33e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a33e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a33ec:
    // 0x2a33ec: 0x5222000d  beql        $s1, $v0, . + 4 + (0xD << 2)
label_2a33f0:
    if (ctx->pc == 0x2A33F0u) {
        ctx->pc = 0x2A33F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33ECu;
        // 0x2a33f0: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A33F4u;
        goto label_2a33f4;
    }
    ctx->pc = 0x2A33ECu;
    {
        const bool branch_taken_0x2a33ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a33ec) {
            ctx->pc = 0x2A33F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A33ECu;
            // 0x2a33f0: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3424u;
            goto label_2a3424;
        }
    }
    ctx->pc = 0x2A33F4u;
label_2a33f4:
    // 0x2a33f4: 0x10000018  b           . + 4 + (0x18 << 2)
label_2a33f8:
    if (ctx->pc == 0x2A33F8u) {
        ctx->pc = 0x2A33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33F4u;
        // 0x2a33f8: 0xde050040  ld          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A33FCu;
        goto label_2a33fc;
    }
    ctx->pc = 0x2A33F4u;
    {
        const bool branch_taken_0x2a33f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33F4u;
        // 0x2a33f8: 0xde050040  ld          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a33f4) {
            ctx->pc = 0x2A3458u;
            goto label_2a3458;
        }
    }
    ctx->pc = 0x2A33FCu;
label_2a33fc:
    // 0x2a33fc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2a33fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2a3400:
    // 0x2a3400: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2a3400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a3404:
    // 0x2a3404: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2a3404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a3408:
    // 0x2a3408: 0xde050040  ld          $a1, 0x40($s0)
    ctx->pc = 0x2a3408u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_2a340c:
    // 0x2a340c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a340cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a3410:
    // 0x2a3410: 0x10a4006d  beq         $a1, $a0, . + 4 + (0x6D << 2)
label_2a3414:
    if (ctx->pc == 0x2A3414u) {
        ctx->pc = 0x2A3414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3410u;
        // 0x2a3414: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3418u;
        goto label_2a3418;
    }
    ctx->pc = 0x2A3410u;
    {
        const bool branch_taken_0x2a3410 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2A3414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3410u;
        // 0x2a3414: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3410) {
            ctx->pc = 0x2A35C8u;
            goto label_2a35c8;
        }
    }
    ctx->pc = 0x2A3418u;
label_2a3418:
    // 0x2a3418: 0x245902d  daddu       $s2, $s2, $a1
    ctx->pc = 0x2a3418u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 5));
label_2a341c:
    // 0x2a341c: 0x1000000e  b           . + 4 + (0xE << 2)
label_2a3420:
    if (ctx->pc == 0x2A3420u) {
        ctx->pc = 0x2A3420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A341Cu;
        // 0x2a3420: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3424u;
        goto label_2a3424;
    }
    ctx->pc = 0x2A341Cu;
    {
        const bool branch_taken_0x2a341c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A341Cu;
        // 0x2a3420: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a341c) {
            ctx->pc = 0x2A3458u;
            goto label_2a3458;
        }
    }
    ctx->pc = 0x2A3424u;
label_2a3424:
    // 0x2a3424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3428:
    // 0x2a3428: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2a3428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2a342c:
    // 0x2a342c: 0x40f809  jalr        $v0
label_2a3430:
    if (ctx->pc == 0x2A3430u) {
        ctx->pc = 0x2A3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A342Cu;
        // 0x2a3430: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3434u;
        goto label_2a3434;
    }
    ctx->pc = 0x2A342Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3434u);
        ctx->pc = 0x2A3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A342Cu;
        // 0x2a3430: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A342Cu, 0x2A3434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3434u;
label_2a3434:
    // 0x2a3434: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
label_2a3438:
    if (ctx->pc == 0x2A3438u) {
        ctx->pc = 0x2A3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3434u;
        // 0x2a3438: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A343Cu;
        goto label_2a343c;
    }
    ctx->pc = 0x2A3434u;
    {
        const bool branch_taken_0x2a3434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3434u;
        // 0x2a3438: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3434) {
            ctx->pc = 0x2A35C8u;
            goto label_2a35c8;
        }
    }
    ctx->pc = 0x2A343Cu;
label_2a343c:
    // 0x2a343c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2a343cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2a3440:
    // 0x2a3440: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x2a3440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_2a3444:
    // 0x2a3444: 0x14430060  bne         $v0, $v1, . + 4 + (0x60 << 2)
label_2a3448:
    if (ctx->pc == 0x2A3448u) {
        ctx->pc = 0x2A3448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3444u;
        // 0x2a3448: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A344Cu;
        goto label_2a344c;
    }
    ctx->pc = 0x2A3444u;
    {
        const bool branch_taken_0x2a3444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A3448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3444u;
        // 0x2a3448: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3444) {
            ctx->pc = 0x2A35C8u;
            goto label_2a35c8;
        }
    }
    ctx->pc = 0x2A344Cu;
label_2a344c:
    // 0x2a344c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a344cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3450:
    // 0x2a3450: 0xde050040  ld          $a1, 0x40($s0)
    ctx->pc = 0x2a3450u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_2a3454:
    // 0x2a3454: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x2a3454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
label_2a3458:
    // 0x2a3458: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a3458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a345c:
    // 0x2a345c: 0x10a2001a  beq         $a1, $v0, . + 4 + (0x1A << 2)
label_2a3460:
    if (ctx->pc == 0x2A3460u) {
        ctx->pc = 0x2A3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A345Cu;
        // 0x2a3460: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3464u;
        goto label_2a3464;
    }
    ctx->pc = 0x2A345Cu;
    {
        const bool branch_taken_0x2a345c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A345Cu;
        // 0x2a3460: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a345c) {
            ctx->pc = 0x2A34C8u;
            goto label_2a34c8;
        }
    }
    ctx->pc = 0x2A3464u;
label_2a3464:
    // 0x2a3464: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2a3464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2a3468:
    // 0x2a3468: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
label_2a346c:
    if (ctx->pc == 0x2A346Cu) {
        ctx->pc = 0x2A3470u;
        goto label_2a3470;
    }
    ctx->pc = 0x2A3468u;
    {
        const bool branch_taken_0x2a3468 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3468) {
            ctx->pc = 0x2A34C8u;
            goto label_2a34c8;
        }
    }
    ctx->pc = 0x2A3470u;
label_2a3470:
    // 0x2a3470: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x2a3470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_2a3474:
    // 0x2a3474: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2a3478:
    if (ctx->pc == 0x2A3478u) {
        ctx->pc = 0x2A3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3474u;
        // 0x2a3478: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A347Cu;
        goto label_2a347c;
    }
    ctx->pc = 0x2A3474u;
    {
        const bool branch_taken_0x2a3474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3474u;
        // 0x2a3478: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3474) {
            ctx->pc = 0x2A34CCu;
            goto label_2a34cc;
        }
    }
    ctx->pc = 0x2A347Cu;
label_2a347c:
    // 0x2a347c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2a347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2a3480:
    // 0x2a3480: 0x245182f  dsubu       $v1, $s2, $a1
    ctx->pc = 0x2a3480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) - GPR_U64(ctx, 5));
label_2a3484:
    // 0x2a3484: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2a3484u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2a3488:
    // 0x2a3488: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x2a3488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_2a348c:
    // 0x2a348c: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
label_2a3490:
    if (ctx->pc == 0x2A3490u) {
        ctx->pc = 0x2A3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A348Cu;
        // 0x2a3490: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3494u;
        goto label_2a3494;
    }
    ctx->pc = 0x2A348Cu;
    {
        const bool branch_taken_0x2a348c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2A3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A348Cu;
        // 0x2a3490: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a348c) {
            ctx->pc = 0x2A34C8u;
            goto label_2a34c8;
        }
    }
    ctx->pc = 0x2A3494u;
label_2a3494:
    // 0x2a3494: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2a3498:
    if (ctx->pc == 0x2A3498u) {
        ctx->pc = 0x2A3498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3494u;
        // 0x2a3498: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A349Cu;
        goto label_2a349c;
    }
    ctx->pc = 0x2A3494u;
    {
        const bool branch_taken_0x2a3494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3494u;
        // 0x2a3498: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3494) {
            ctx->pc = 0x2A34CCu;
            goto label_2a34cc;
        }
    }
    ctx->pc = 0x2A349Cu;
label_2a349c:
    // 0x2a349c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2a349cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2a34a0:
    // 0x2a34a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a34a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_2a34a4:
    // 0x2a34a4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2a34a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2a34a8:
    // 0x2a34a8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2a34a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a34ac:
    // 0x2a34ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a34acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2a34b0:
    // 0x2a34b0: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x2a34b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_2a34b4:
    // 0x2a34b4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2a34b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2a34b8:
    // 0x2a34b8: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x2a34b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_2a34bc:
    // 0x2a34bc: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x2a34bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_2a34c0:
    // 0x2a34c0: 0x10000059  b           . + 4 + (0x59 << 2)
label_2a34c4:
    if (ctx->pc == 0x2A34C4u) {
        ctx->pc = 0x2A34C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34C0u;
        // 0x2a34c4: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A34C8u;
        goto label_2a34c8;
    }
    ctx->pc = 0x2A34C0u;
    {
        const bool branch_taken_0x2a34c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A34C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34C0u;
        // 0x2a34c4: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a34c0) {
            ctx->pc = 0x2A3628u;
            goto label_2a3628;
        }
    }
    ctx->pc = 0x2A34C8u;
label_2a34c8:
    // 0x2a34c8: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x2a34c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_2a34cc:
    // 0x2a34cc: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
label_2a34d0:
    if (ctx->pc == 0x2A34D0u) {
        ctx->pc = 0x2A34D4u;
        goto label_2a34d4;
    }
    ctx->pc = 0x2A34CCu;
    {
        const bool branch_taken_0x2a34cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a34cc) {
            ctx->pc = 0x2A35C8u;
            goto label_2a35c8;
        }
    }
    ctx->pc = 0x2A34D4u;
label_2a34d4:
    // 0x2a34d4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2a34d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a34d8:
    // 0x2a34d8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2a34d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2a34dc:
    // 0x2a34dc: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x2a34dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a34e0:
    // 0x2a34e0: 0x2442824  and         $a1, $s2, $a0
    ctx->pc = 0x2a34e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
label_2a34e4:
    // 0x2a34e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a34e8:
    // 0x2a34e8: 0x245882f  dsubu       $s1, $s2, $a1
    ctx->pc = 0x2a34e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) - GPR_U64(ctx, 5));
label_2a34ec:
    // 0x2a34ec: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2a34ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2a34f0:
    // 0x2a34f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2a34f4:
    if (ctx->pc == 0x2A34F4u) {
        ctx->pc = 0x2A34F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34F0u;
        // 0x2a34f4: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A34F8u;
        goto label_2a34f8;
    }
    ctx->pc = 0x2A34F0u;
    {
        const bool branch_taken_0x2a34f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A34F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34F0u;
        // 0x2a34f4: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a34f0) {
            ctx->pc = 0x2A3500u;
            goto label_2a3500;
        }
    }
    ctx->pc = 0x2A34F8u;
label_2a34f8:
    // 0x2a34f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a34f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a34fc:
    // 0x2a34fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a34fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3500:
    // 0x2a3500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3504:
    // 0x2a3504: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x2a3504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_2a3508:
    // 0x2a3508: 0x40f809  jalr        $v0
label_2a350c:
    if (ctx->pc == 0x2A350Cu) {
        ctx->pc = 0x2A350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3508u;
        // 0x2a350c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3510u;
        goto label_2a3510;
    }
    ctx->pc = 0x2A3508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3510u);
        ctx->pc = 0x2A350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3508u;
        // 0x2a350c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3508u, 0x2A3510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3510u;
label_2a3510:
    // 0x2a3510: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a3510u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3514:
    // 0x2a3514: 0x6600044  bltz        $s3, . + 4 + (0x44 << 2)
label_2a3518:
    if (ctx->pc == 0x2A3518u) {
        ctx->pc = 0x2A3518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3514u;
        // 0x2a3518: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A351Cu;
        goto label_2a351c;
    }
    ctx->pc = 0x2A3514u;
    {
        const bool branch_taken_0x2a3514 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x2A3518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3514u;
        // 0x2a3518: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3514) {
            ctx->pc = 0x2A3628u;
            goto label_2a3628;
        }
    }
    ctx->pc = 0x2A351Cu;
label_2a351c:
    // 0x2a351c: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_2a3520:
    if (ctx->pc == 0x2A3520u) {
        ctx->pc = 0x2A3520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A351Cu;
        // 0x2a3520: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3524u;
        goto label_2a3524;
    }
    ctx->pc = 0x2A351Cu;
    {
        const bool branch_taken_0x2a351c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A351Cu;
        // 0x2a3520: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a351c) {
            ctx->pc = 0x2A3574u;
            goto label_2a3574;
        }
    }
    ctx->pc = 0x2A3524u;
label_2a3524:
    // 0x2a3524: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_2a3528:
    if (ctx->pc == 0x2A3528u) {
        ctx->pc = 0x2A3528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3524u;
        // 0x2a3528: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A352Cu;
        goto label_2a352c;
    }
    ctx->pc = 0x2A3524u;
    {
        const bool branch_taken_0x2a3524 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3524u;
        // 0x2a3528: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3524) {
            ctx->pc = 0x2A353Cu;
            goto label_2a353c;
        }
    }
    ctx->pc = 0x2A352Cu;
label_2a352c:
    // 0x2a352c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2a352cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a3530:
    // 0x2a3530: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2a3530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2a3534:
    // 0x2a3534: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a3538:
    if (ctx->pc == 0x2A3538u) {
        ctx->pc = 0x2A3538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3534u;
        // 0x2a3538: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A353Cu;
        goto label_2a353c;
    }
    ctx->pc = 0x2A3534u;
    {
        const bool branch_taken_0x2a3534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3534u;
        // 0x2a3538: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3534) {
            ctx->pc = 0x2A3540u;
            goto label_2a3540;
        }
    }
    ctx->pc = 0x2A353Cu;
label_2a353c:
    // 0x2a353c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a353cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a3540:
    // 0x2a3540: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x2a3540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_2a3544:
    // 0x2a3544: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2a3544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2a3548:
    // 0x2a3548: 0x40f809  jalr        $v0
label_2a354c:
    if (ctx->pc == 0x2A354Cu) {
        ctx->pc = 0x2A354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3548u;
        // 0x2a354c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3550u;
        goto label_2a3550;
    }
    ctx->pc = 0x2A3548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3550u);
        ctx->pc = 0x2A354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3548u;
        // 0x2a354c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3548u, 0x2A3550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3550u;
label_2a3550:
    // 0x2a3550: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a3550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3554:
    // 0x2a3554: 0xf1102a  slt         $v0, $a3, $s1
    ctx->pc = 0x2a3554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2a3558:
    // 0x2a3558: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2a355c:
    if (ctx->pc == 0x2A355Cu) {
        ctx->pc = 0x2A355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3558u;
        // 0x2a355c: 0x71827  nor         $v1, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3560u;
        goto label_2a3560;
    }
    ctx->pc = 0x2A3558u;
    {
        const bool branch_taken_0x2a3558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3558u;
        // 0x2a355c: 0x71827  nor         $v1, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3558) {
            ctx->pc = 0x2A3574u;
            goto label_2a3574;
        }
    }
    ctx->pc = 0x2A3560u;
label_2a3560:
    // 0x2a3560: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2a3560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a3564:
    // 0x2a3564: 0x247102f  dsubu       $v0, $s2, $a3
    ctx->pc = 0x2a3564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) - GPR_U64(ctx, 7));
label_2a3568:
    // 0x2a3568: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2a3568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a356c:
    // 0x2a356c: 0x10000016  b           . + 4 + (0x16 << 2)
label_2a3570:
    if (ctx->pc == 0x2A3570u) {
        ctx->pc = 0x2A3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A356Cu;
        // 0x2a3570: 0x43900b  movn        $s2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3574u;
        goto label_2a3574;
    }
    ctx->pc = 0x2A356Cu;
    {
        const bool branch_taken_0x2a356c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A356Cu;
        // 0x2a3570: 0x43900b  movn        $s2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a356c) {
            ctx->pc = 0x2A35C8u;
            goto label_2a35c8;
        }
    }
    ctx->pc = 0x2A3574u;
label_2a3574:
    // 0x2a3574: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a3574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a3578:
    // 0x2a3578: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2a3578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2a357c:
    // 0x2a357c: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x2a357cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2a3580:
    // 0x2a3580: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x2a3580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
label_2a3584:
    // 0x2a3584: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2a3584u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_2a3588:
    // 0x2a3588: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a3588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2a358c:
    // 0x2a358c: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x2a358cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
label_2a3590:
    // 0x2a3590: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2a3590u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_2a3594:
    // 0x2a3594: 0x267382d  daddu       $a3, $s3, $a3
    ctx->pc = 0x2a3594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 7));
label_2a3598:
    // 0x2a3598: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2a3598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2a359c:
    // 0x2a359c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2a359cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2a35a0:
    // 0x2a35a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a35a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2a35a4:
    // 0x2a35a4: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x2a35a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_2a35a8:
    // 0x2a35a8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2a35a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a35ac:
    // 0x2a35ac: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x2a35acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
label_2a35b0:
    // 0x2a35b0: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x2a35b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
label_2a35b4:
    // 0x2a35b4: 0xfe070040  sd          $a3, 0x40($s0)
    ctx->pc = 0x2a35b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 7));
label_2a35b8:
    // 0x2a35b8: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x2a35b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
label_2a35bc:
    // 0x2a35bc: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x2a35bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
label_2a35c0:
    // 0x2a35c0: 0x10000019  b           . + 4 + (0x19 << 2)
label_2a35c4:
    if (ctx->pc == 0x2A35C4u) {
        ctx->pc = 0x2A35C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A35C0u;
        // 0x2a35c4: 0xae060010  sw          $a2, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A35C8u;
        goto label_2a35c8;
    }
    ctx->pc = 0x2A35C0u;
    {
        const bool branch_taken_0x2a35c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A35C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A35C0u;
        // 0x2a35c4: 0xae060010  sw          $a2, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a35c0) {
            ctx->pc = 0x2A3628u;
            goto label_2a3628;
        }
    }
    ctx->pc = 0x2A35C8u;
label_2a35c8:
    // 0x2a35c8: 0xc0a7556  jal         func_29D558
label_2a35cc:
    if (ctx->pc == 0x2A35CCu) {
        ctx->pc = 0x2A35CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A35C8u;
        // 0x2a35cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A35D0u;
        goto label_2a35d0;
    }
    ctx->pc = 0x2A35C8u;
    SET_GPR_U32(ctx, 31, 0x2A35D0u);
    ctx->pc = 0x2A35CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A35C8u;
    // 0x2a35cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29D558u, 0x2A35C8u, 0x2A35D0u)) {
        return;
    }
    ctx->pc = 0x2A35D0u;
label_2a35d0:
    // 0x2a35d0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2a35d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2a35d4:
    // 0x2a35d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a35d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a35d8:
    // 0x2a35d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a35d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a35dc:
    // 0x2a35dc: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x2a35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_2a35e0:
    // 0x2a35e0: 0x40f809  jalr        $v0
label_2a35e4:
    if (ctx->pc == 0x2A35E4u) {
        ctx->pc = 0x2A35E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A35E0u;
        // 0x2a35e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A35E8u;
        goto label_2a35e8;
    }
    ctx->pc = 0x2A35E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A35E8u);
        ctx->pc = 0x2A35E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A35E0u;
        // 0x2a35e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A35E0u, 0x2A35E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A35E8u;
label_2a35e8:
    // 0x2a35e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a35e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a35ec:
    // 0x2a35ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a35ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a35f0:
    // 0x2a35f0: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
label_2a35f4:
    if (ctx->pc == 0x2A35F4u) {
        ctx->pc = 0x2A35F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A35F0u;
        // 0x2a35f4: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A35F8u;
        goto label_2a35f8;
    }
    ctx->pc = 0x2A35F0u;
    {
        const bool branch_taken_0x2a35f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A35F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A35F0u;
        // 0x2a35f4: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a35f0) {
            ctx->pc = 0x2A3604u;
            goto label_2a3604;
        }
    }
    ctx->pc = 0x2A35F8u;
label_2a35f8:
    // 0x2a35f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a35f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a35fc:
    // 0x2a35fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a35fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2a3600:
    // 0x2a3600: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a3600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2a3604:
    // 0x2a3604: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2a3604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2a3608:
    // 0x2a3608: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2a3608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a360c:
    // 0x2a360c: 0xfe130040  sd          $s3, 0x40($s0)
    ctx->pc = 0x2a360cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 19));
label_2a3610:
    // 0x2a3610: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2a3610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_2a3614:
    // 0x2a3614: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2a3614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2a3618:
    // 0x2a3618: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2a3618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2a361c:
    // 0x2a361c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2a361cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_2a3620:
    // 0x2a3620: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2a3620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_2a3624:
    // 0x2a3624: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2a3624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_2a3628:
    // 0x2a3628: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2a3628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2a362c:
    // 0x2a362c: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2a362cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2a3630:
    // 0x2a3630: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x2a3630u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2a3634:
    // 0x2a3634: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2a3634u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2a3638:
    // 0x2a3638: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x2a3638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2a363c:
    // 0x2a363c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2a363cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2a3640:
    // 0x2a3640: 0x3e00008  jr          $ra
label_2a3644:
    if (ctx->pc == 0x2A3644u) {
        ctx->pc = 0x2A3644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3640u;
        // 0x2a3644: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3648u;
        goto label_fallthrough_0x2a3640;
    }
    ctx->pc = 0x2A3640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3640u;
        // 0x2a3644: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a3640:
    ctx->pc = 0x2A3648u;
}
