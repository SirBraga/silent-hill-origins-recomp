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

// Function: sub_001FB278
// Address: 0x1fb278 - 0x1fb740
void sub_001FB278_0x1fb278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB278_0x1fb278");
#endif

    switch (ctx->pc) {
        case 0x1fb278u: goto label_1fb278;
        case 0x1fb27cu: goto label_1fb27c;
        case 0x1fb280u: goto label_1fb280;
        case 0x1fb284u: goto label_1fb284;
        case 0x1fb288u: goto label_1fb288;
        case 0x1fb28cu: goto label_1fb28c;
        case 0x1fb290u: goto label_1fb290;
        case 0x1fb294u: goto label_1fb294;
        case 0x1fb298u: goto label_1fb298;
        case 0x1fb29cu: goto label_1fb29c;
        case 0x1fb2a0u: goto label_1fb2a0;
        case 0x1fb2a4u: goto label_1fb2a4;
        case 0x1fb2a8u: goto label_1fb2a8;
        case 0x1fb2acu: goto label_1fb2ac;
        case 0x1fb2b0u: goto label_1fb2b0;
        case 0x1fb2b4u: goto label_1fb2b4;
        case 0x1fb2b8u: goto label_1fb2b8;
        case 0x1fb2bcu: goto label_1fb2bc;
        case 0x1fb2c0u: goto label_1fb2c0;
        case 0x1fb2c4u: goto label_1fb2c4;
        case 0x1fb2c8u: goto label_1fb2c8;
        case 0x1fb2ccu: goto label_1fb2cc;
        case 0x1fb2d0u: goto label_1fb2d0;
        case 0x1fb2d4u: goto label_1fb2d4;
        case 0x1fb2d8u: goto label_1fb2d8;
        case 0x1fb2dcu: goto label_1fb2dc;
        case 0x1fb2e0u: goto label_1fb2e0;
        case 0x1fb2e4u: goto label_1fb2e4;
        case 0x1fb2e8u: goto label_1fb2e8;
        case 0x1fb2ecu: goto label_1fb2ec;
        case 0x1fb2f0u: goto label_1fb2f0;
        case 0x1fb2f4u: goto label_1fb2f4;
        case 0x1fb2f8u: goto label_1fb2f8;
        case 0x1fb2fcu: goto label_1fb2fc;
        case 0x1fb300u: goto label_1fb300;
        case 0x1fb304u: goto label_1fb304;
        case 0x1fb308u: goto label_1fb308;
        case 0x1fb30cu: goto label_1fb30c;
        case 0x1fb310u: goto label_1fb310;
        case 0x1fb314u: goto label_1fb314;
        case 0x1fb318u: goto label_1fb318;
        case 0x1fb31cu: goto label_1fb31c;
        case 0x1fb320u: goto label_1fb320;
        case 0x1fb324u: goto label_1fb324;
        case 0x1fb328u: goto label_1fb328;
        case 0x1fb32cu: goto label_1fb32c;
        case 0x1fb330u: goto label_1fb330;
        case 0x1fb334u: goto label_1fb334;
        case 0x1fb338u: goto label_1fb338;
        case 0x1fb33cu: goto label_1fb33c;
        case 0x1fb340u: goto label_1fb340;
        case 0x1fb344u: goto label_1fb344;
        case 0x1fb348u: goto label_1fb348;
        case 0x1fb34cu: goto label_1fb34c;
        case 0x1fb350u: goto label_1fb350;
        case 0x1fb354u: goto label_1fb354;
        case 0x1fb358u: goto label_1fb358;
        case 0x1fb35cu: goto label_1fb35c;
        case 0x1fb360u: goto label_1fb360;
        case 0x1fb364u: goto label_1fb364;
        case 0x1fb368u: goto label_1fb368;
        case 0x1fb36cu: goto label_1fb36c;
        case 0x1fb370u: goto label_1fb370;
        case 0x1fb374u: goto label_1fb374;
        case 0x1fb378u: goto label_1fb378;
        case 0x1fb37cu: goto label_1fb37c;
        case 0x1fb380u: goto label_1fb380;
        case 0x1fb384u: goto label_1fb384;
        case 0x1fb388u: goto label_1fb388;
        case 0x1fb38cu: goto label_1fb38c;
        case 0x1fb390u: goto label_1fb390;
        case 0x1fb394u: goto label_1fb394;
        case 0x1fb398u: goto label_1fb398;
        case 0x1fb39cu: goto label_1fb39c;
        case 0x1fb3a0u: goto label_1fb3a0;
        case 0x1fb3a4u: goto label_1fb3a4;
        case 0x1fb3a8u: goto label_1fb3a8;
        case 0x1fb3acu: goto label_1fb3ac;
        case 0x1fb3b0u: goto label_1fb3b0;
        case 0x1fb3b4u: goto label_1fb3b4;
        case 0x1fb3b8u: goto label_1fb3b8;
        case 0x1fb3bcu: goto label_1fb3bc;
        case 0x1fb3c0u: goto label_1fb3c0;
        case 0x1fb3c4u: goto label_1fb3c4;
        case 0x1fb3c8u: goto label_1fb3c8;
        case 0x1fb3ccu: goto label_1fb3cc;
        case 0x1fb3d0u: goto label_1fb3d0;
        case 0x1fb3d4u: goto label_1fb3d4;
        case 0x1fb3d8u: goto label_1fb3d8;
        case 0x1fb3dcu: goto label_1fb3dc;
        case 0x1fb3e0u: goto label_1fb3e0;
        case 0x1fb3e4u: goto label_1fb3e4;
        case 0x1fb3e8u: goto label_1fb3e8;
        case 0x1fb3ecu: goto label_1fb3ec;
        case 0x1fb3f0u: goto label_1fb3f0;
        case 0x1fb3f4u: goto label_1fb3f4;
        case 0x1fb3f8u: goto label_1fb3f8;
        case 0x1fb3fcu: goto label_1fb3fc;
        case 0x1fb400u: goto label_1fb400;
        case 0x1fb404u: goto label_1fb404;
        case 0x1fb408u: goto label_1fb408;
        case 0x1fb40cu: goto label_1fb40c;
        case 0x1fb410u: goto label_1fb410;
        case 0x1fb414u: goto label_1fb414;
        case 0x1fb418u: goto label_1fb418;
        case 0x1fb41cu: goto label_1fb41c;
        case 0x1fb420u: goto label_1fb420;
        case 0x1fb424u: goto label_1fb424;
        case 0x1fb428u: goto label_1fb428;
        case 0x1fb42cu: goto label_1fb42c;
        case 0x1fb430u: goto label_1fb430;
        case 0x1fb434u: goto label_1fb434;
        case 0x1fb438u: goto label_1fb438;
        case 0x1fb43cu: goto label_1fb43c;
        case 0x1fb440u: goto label_1fb440;
        case 0x1fb444u: goto label_1fb444;
        case 0x1fb448u: goto label_1fb448;
        case 0x1fb44cu: goto label_1fb44c;
        case 0x1fb450u: goto label_1fb450;
        case 0x1fb454u: goto label_1fb454;
        case 0x1fb458u: goto label_1fb458;
        case 0x1fb45cu: goto label_1fb45c;
        case 0x1fb460u: goto label_1fb460;
        case 0x1fb464u: goto label_1fb464;
        case 0x1fb468u: goto label_1fb468;
        case 0x1fb46cu: goto label_1fb46c;
        case 0x1fb470u: goto label_1fb470;
        case 0x1fb474u: goto label_1fb474;
        case 0x1fb478u: goto label_1fb478;
        case 0x1fb47cu: goto label_1fb47c;
        case 0x1fb480u: goto label_1fb480;
        case 0x1fb484u: goto label_1fb484;
        case 0x1fb488u: goto label_1fb488;
        case 0x1fb48cu: goto label_1fb48c;
        case 0x1fb490u: goto label_1fb490;
        case 0x1fb494u: goto label_1fb494;
        case 0x1fb498u: goto label_1fb498;
        case 0x1fb49cu: goto label_1fb49c;
        case 0x1fb4a0u: goto label_1fb4a0;
        case 0x1fb4a4u: goto label_1fb4a4;
        case 0x1fb4a8u: goto label_1fb4a8;
        case 0x1fb4acu: goto label_1fb4ac;
        case 0x1fb4b0u: goto label_1fb4b0;
        case 0x1fb4b4u: goto label_1fb4b4;
        case 0x1fb4b8u: goto label_1fb4b8;
        case 0x1fb4bcu: goto label_1fb4bc;
        case 0x1fb4c0u: goto label_1fb4c0;
        case 0x1fb4c4u: goto label_1fb4c4;
        case 0x1fb4c8u: goto label_1fb4c8;
        case 0x1fb4ccu: goto label_1fb4cc;
        case 0x1fb4d0u: goto label_1fb4d0;
        case 0x1fb4d4u: goto label_1fb4d4;
        case 0x1fb4d8u: goto label_1fb4d8;
        case 0x1fb4dcu: goto label_1fb4dc;
        case 0x1fb4e0u: goto label_1fb4e0;
        case 0x1fb4e4u: goto label_1fb4e4;
        case 0x1fb4e8u: goto label_1fb4e8;
        case 0x1fb4ecu: goto label_1fb4ec;
        case 0x1fb4f0u: goto label_1fb4f0;
        case 0x1fb4f4u: goto label_1fb4f4;
        case 0x1fb4f8u: goto label_1fb4f8;
        case 0x1fb4fcu: goto label_1fb4fc;
        case 0x1fb500u: goto label_1fb500;
        case 0x1fb504u: goto label_1fb504;
        case 0x1fb508u: goto label_1fb508;
        case 0x1fb50cu: goto label_1fb50c;
        case 0x1fb510u: goto label_1fb510;
        case 0x1fb514u: goto label_1fb514;
        case 0x1fb518u: goto label_1fb518;
        case 0x1fb51cu: goto label_1fb51c;
        case 0x1fb520u: goto label_1fb520;
        case 0x1fb524u: goto label_1fb524;
        case 0x1fb528u: goto label_1fb528;
        case 0x1fb52cu: goto label_1fb52c;
        case 0x1fb530u: goto label_1fb530;
        case 0x1fb534u: goto label_1fb534;
        case 0x1fb538u: goto label_1fb538;
        case 0x1fb53cu: goto label_1fb53c;
        case 0x1fb540u: goto label_1fb540;
        case 0x1fb544u: goto label_1fb544;
        case 0x1fb548u: goto label_1fb548;
        case 0x1fb54cu: goto label_1fb54c;
        case 0x1fb550u: goto label_1fb550;
        case 0x1fb554u: goto label_1fb554;
        case 0x1fb558u: goto label_1fb558;
        case 0x1fb55cu: goto label_1fb55c;
        case 0x1fb560u: goto label_1fb560;
        case 0x1fb564u: goto label_1fb564;
        case 0x1fb568u: goto label_1fb568;
        case 0x1fb56cu: goto label_1fb56c;
        case 0x1fb570u: goto label_1fb570;
        case 0x1fb574u: goto label_1fb574;
        case 0x1fb578u: goto label_1fb578;
        case 0x1fb57cu: goto label_1fb57c;
        case 0x1fb580u: goto label_1fb580;
        case 0x1fb584u: goto label_1fb584;
        case 0x1fb588u: goto label_1fb588;
        case 0x1fb58cu: goto label_1fb58c;
        case 0x1fb590u: goto label_1fb590;
        case 0x1fb594u: goto label_1fb594;
        case 0x1fb598u: goto label_1fb598;
        case 0x1fb59cu: goto label_1fb59c;
        case 0x1fb5a0u: goto label_1fb5a0;
        case 0x1fb5a4u: goto label_1fb5a4;
        case 0x1fb5a8u: goto label_1fb5a8;
        case 0x1fb5acu: goto label_1fb5ac;
        case 0x1fb5b0u: goto label_1fb5b0;
        case 0x1fb5b4u: goto label_1fb5b4;
        case 0x1fb5b8u: goto label_1fb5b8;
        case 0x1fb5bcu: goto label_1fb5bc;
        case 0x1fb5c0u: goto label_1fb5c0;
        case 0x1fb5c4u: goto label_1fb5c4;
        case 0x1fb5c8u: goto label_1fb5c8;
        case 0x1fb5ccu: goto label_1fb5cc;
        case 0x1fb5d0u: goto label_1fb5d0;
        case 0x1fb5d4u: goto label_1fb5d4;
        case 0x1fb5d8u: goto label_1fb5d8;
        case 0x1fb5dcu: goto label_1fb5dc;
        case 0x1fb5e0u: goto label_1fb5e0;
        case 0x1fb5e4u: goto label_1fb5e4;
        case 0x1fb5e8u: goto label_1fb5e8;
        case 0x1fb5ecu: goto label_1fb5ec;
        case 0x1fb5f0u: goto label_1fb5f0;
        case 0x1fb5f4u: goto label_1fb5f4;
        case 0x1fb5f8u: goto label_1fb5f8;
        case 0x1fb5fcu: goto label_1fb5fc;
        case 0x1fb600u: goto label_1fb600;
        case 0x1fb604u: goto label_1fb604;
        case 0x1fb608u: goto label_1fb608;
        case 0x1fb60cu: goto label_1fb60c;
        case 0x1fb610u: goto label_1fb610;
        case 0x1fb614u: goto label_1fb614;
        case 0x1fb618u: goto label_1fb618;
        case 0x1fb61cu: goto label_1fb61c;
        case 0x1fb620u: goto label_1fb620;
        case 0x1fb624u: goto label_1fb624;
        case 0x1fb628u: goto label_1fb628;
        case 0x1fb62cu: goto label_1fb62c;
        case 0x1fb630u: goto label_1fb630;
        case 0x1fb634u: goto label_1fb634;
        case 0x1fb638u: goto label_1fb638;
        case 0x1fb63cu: goto label_1fb63c;
        case 0x1fb640u: goto label_1fb640;
        case 0x1fb644u: goto label_1fb644;
        case 0x1fb648u: goto label_1fb648;
        case 0x1fb64cu: goto label_1fb64c;
        case 0x1fb650u: goto label_1fb650;
        case 0x1fb654u: goto label_1fb654;
        case 0x1fb658u: goto label_1fb658;
        case 0x1fb65cu: goto label_1fb65c;
        case 0x1fb660u: goto label_1fb660;
        case 0x1fb664u: goto label_1fb664;
        case 0x1fb668u: goto label_1fb668;
        case 0x1fb66cu: goto label_1fb66c;
        case 0x1fb670u: goto label_1fb670;
        case 0x1fb674u: goto label_1fb674;
        case 0x1fb678u: goto label_1fb678;
        case 0x1fb67cu: goto label_1fb67c;
        case 0x1fb680u: goto label_1fb680;
        case 0x1fb684u: goto label_1fb684;
        case 0x1fb688u: goto label_1fb688;
        case 0x1fb68cu: goto label_1fb68c;
        case 0x1fb690u: goto label_1fb690;
        case 0x1fb694u: goto label_1fb694;
        case 0x1fb698u: goto label_1fb698;
        case 0x1fb69cu: goto label_1fb69c;
        case 0x1fb6a0u: goto label_1fb6a0;
        case 0x1fb6a4u: goto label_1fb6a4;
        case 0x1fb6a8u: goto label_1fb6a8;
        case 0x1fb6acu: goto label_1fb6ac;
        case 0x1fb6b0u: goto label_1fb6b0;
        case 0x1fb6b4u: goto label_1fb6b4;
        case 0x1fb6b8u: goto label_1fb6b8;
        case 0x1fb6bcu: goto label_1fb6bc;
        case 0x1fb6c0u: goto label_1fb6c0;
        case 0x1fb6c4u: goto label_1fb6c4;
        case 0x1fb6c8u: goto label_1fb6c8;
        case 0x1fb6ccu: goto label_1fb6cc;
        case 0x1fb6d0u: goto label_1fb6d0;
        case 0x1fb6d4u: goto label_1fb6d4;
        case 0x1fb6d8u: goto label_1fb6d8;
        case 0x1fb6dcu: goto label_1fb6dc;
        case 0x1fb6e0u: goto label_1fb6e0;
        case 0x1fb6e4u: goto label_1fb6e4;
        case 0x1fb6e8u: goto label_1fb6e8;
        case 0x1fb6ecu: goto label_1fb6ec;
        case 0x1fb6f0u: goto label_1fb6f0;
        case 0x1fb6f4u: goto label_1fb6f4;
        case 0x1fb6f8u: goto label_1fb6f8;
        case 0x1fb6fcu: goto label_1fb6fc;
        case 0x1fb700u: goto label_1fb700;
        case 0x1fb704u: goto label_1fb704;
        case 0x1fb708u: goto label_1fb708;
        case 0x1fb70cu: goto label_1fb70c;
        case 0x1fb710u: goto label_1fb710;
        case 0x1fb714u: goto label_1fb714;
        case 0x1fb718u: goto label_1fb718;
        case 0x1fb71cu: goto label_1fb71c;
        case 0x1fb720u: goto label_1fb720;
        case 0x1fb724u: goto label_1fb724;
        case 0x1fb728u: goto label_1fb728;
        case 0x1fb72cu: goto label_1fb72c;
        case 0x1fb730u: goto label_1fb730;
        case 0x1fb734u: goto label_1fb734;
        case 0x1fb738u: goto label_1fb738;
        case 0x1fb73cu: goto label_1fb73c;
        default: break;
    }

    ctx->pc = 0x1fb278u;

label_1fb278:
    // 0x1fb278: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1fb278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1fb27c:
    // 0x1fb27c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1fb27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1fb280:
    // 0x1fb280: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fb280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1fb284:
    // 0x1fb284: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fb284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb288:
    // 0x1fb288: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1fb288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1fb28c:
    // 0x1fb28c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fb28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fb290:
    // 0x1fb290: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1fb290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1fb294:
    // 0x1fb294: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1fb294u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fb298:
    // 0x1fb298: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1fb298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_1fb29c:
    // 0x1fb29c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1fb29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_1fb2a0:
    // 0x1fb2a0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1fb2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1fb2a4:
    // 0x1fb2a4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1fb2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1fb2a8:
    // 0x1fb2a8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1fb2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1fb2ac:
    // 0x1fb2ac: 0xc07eaec  jal         func_1FABB0
label_1fb2b0:
    if (ctx->pc == 0x1FB2B0u) {
        ctx->pc = 0x1FB2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2ACu;
        // 0x1fb2b0: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB2B4u;
        goto label_1fb2b4;
    }
    ctx->pc = 0x1FB2ACu;
    SET_GPR_U32(ctx, 31, 0x1FB2B4u);
    ctx->pc = 0x1FB2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB2ACu;
    // 0x1fb2b0: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FABB0u, 0x1FB2ACu, 0x1FB2B4u)) {
        return;
    }
    ctx->pc = 0x1FB2B4u;
label_1fb2b4:
    // 0x1fb2b4: 0x14400116  bnez        $v0, . + 4 + (0x116 << 2)
label_1fb2b8:
    if (ctx->pc == 0x1FB2B8u) {
        ctx->pc = 0x1FB2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2B4u;
        // 0x1fb2b8: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB2BCu;
        goto label_1fb2bc;
    }
    ctx->pc = 0x1FB2B4u;
    {
        const bool branch_taken_0x1fb2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2B4u;
        // 0x1fb2b8: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb2b4) {
            ctx->pc = 0x1FB710u;
            goto label_1fb710;
        }
    }
    ctx->pc = 0x1FB2BCu;
label_1fb2bc:
    // 0x1fb2bc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1fb2c0:
    if (ctx->pc == 0x1FB2C0u) {
        ctx->pc = 0x1FB2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2BCu;
        // 0x1fb2c0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB2C4u;
        goto label_1fb2c4;
    }
    ctx->pc = 0x1FB2BCu;
    {
        const bool branch_taken_0x1fb2bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2BCu;
        // 0x1fb2c0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb2bc) {
            ctx->pc = 0x1FB2CCu;
            goto label_1fb2cc;
        }
    }
    ctx->pc = 0x1FB2C4u;
label_1fb2c4:
    // 0x1fb2c4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1fb2c8:
    if (ctx->pc == 0x1FB2C8u) {
        ctx->pc = 0x1FB2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2C4u;
        // 0x1fb2c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB2CCu;
        goto label_1fb2cc;
    }
    ctx->pc = 0x1FB2C4u;
    {
        const bool branch_taken_0x1fb2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2C4u;
        // 0x1fb2c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb2c4) {
            ctx->pc = 0x1FB2FCu;
            goto label_1fb2fc;
        }
    }
    ctx->pc = 0x1FB2CCu;
label_1fb2cc:
    // 0x1fb2cc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fb2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fb2d0:
    // 0x1fb2d0: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1fb2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
label_1fb2d4:
    // 0x1fb2d4: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x1fb2d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
label_1fb2d8:
    // 0x1fb2d8: 0x24a5b030  addiu       $a1, $a1, -0x4FD0
    ctx->pc = 0x1fb2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946864));
label_1fb2dc:
    // 0x1fb2dc: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1fb2dcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb2e0:
    // 0x1fb2e0: 0x2508b210  addiu       $t0, $t0, -0x4DF0
    ctx->pc = 0x1fb2e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947344));
label_1fb2e4:
    // 0x1fb2e4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1fb2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fb2e8:
    // 0x1fb2e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fb2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb2ec:
    // 0x1fb2ec: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1fb2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_1fb2f0:
    // 0x1fb2f0: 0xc07ee16  jal         func_1FB858
label_1fb2f4:
    if (ctx->pc == 0x1FB2F4u) {
        ctx->pc = 0x1FB2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2F0u;
        // 0x1fb2f4: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB2F8u;
        goto label_1fb2f8;
    }
    ctx->pc = 0x1FB2F0u;
    SET_GPR_U32(ctx, 31, 0x1FB2F8u);
    ctx->pc = 0x1FB2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB2F0u;
    // 0x1fb2f4: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB858u, 0x1FB2F0u, 0x1FB2F8u)) {
        return;
    }
    ctx->pc = 0x1FB2F8u;
label_1fb2f8:
    // 0x1fb2f8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1fb2f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb2fc:
    // 0x1fb2fc: 0x5540007b  bnel        $t2, $zero, . + 4 + (0x7B << 2)
label_1fb300:
    if (ctx->pc == 0x1FB300u) {
        ctx->pc = 0x1FB300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2FCu;
        // 0x1fb300: 0x8d430004  lw          $v1, 0x4($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB304u;
        goto label_1fb304;
    }
    ctx->pc = 0x1FB2FCu;
    {
        const bool branch_taken_0x1fb2fc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb2fc) {
            ctx->pc = 0x1FB300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB2FCu;
            // 0x1fb300: 0x8d430004  lw          $v1, 0x4($t2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB4ECu;
            goto label_1fb4ec;
        }
    }
    ctx->pc = 0x1FB304u;
label_1fb304:
    // 0x1fb304: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_1fb308:
    if (ctx->pc == 0x1FB308u) {
        ctx->pc = 0x1FB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB304u;
        // 0x1fb308: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB30Cu;
        goto label_1fb30c;
    }
    ctx->pc = 0x1FB304u;
    {
        const bool branch_taken_0x1fb304 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb304) {
            ctx->pc = 0x1FB308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB304u;
            // 0x1fb308: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB314u;
            goto label_1fb314;
        }
    }
    ctx->pc = 0x1FB30Cu;
label_1fb30c:
    // 0x1fb30c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1fb310:
    if (ctx->pc == 0x1FB310u) {
        ctx->pc = 0x1FB310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB30Cu;
        // 0x1fb310: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB314u;
        goto label_1fb314;
    }
    ctx->pc = 0x1FB30Cu;
    {
        const bool branch_taken_0x1fb30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB30Cu;
        // 0x1fb310: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb30c) {
            ctx->pc = 0x1FB340u;
            goto label_1fb340;
        }
    }
    ctx->pc = 0x1FB314u;
label_1fb314:
    // 0x1fb314: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1fb314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
label_1fb318:
    // 0x1fb318: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x1fb318u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
label_1fb31c:
    // 0x1fb31c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1fb31cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb320:
    // 0x1fb320: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1fb320u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb324:
    // 0x1fb324: 0x24a5bf60  addiu       $a1, $a1, -0x40A0
    ctx->pc = 0x1fb324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950752));
label_1fb328:
    // 0x1fb328: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1fb328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fb32c:
    // 0x1fb32c: 0x2508b210  addiu       $t0, $t0, -0x4DF0
    ctx->pc = 0x1fb32cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947344));
label_1fb330:
    // 0x1fb330: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1fb330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_1fb334:
    // 0x1fb334: 0xc07ee16  jal         func_1FB858
label_1fb338:
    if (ctx->pc == 0x1FB338u) {
        ctx->pc = 0x1FB338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB334u;
        // 0x1fb338: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB33Cu;
        goto label_1fb33c;
    }
    ctx->pc = 0x1FB334u;
    SET_GPR_U32(ctx, 31, 0x1FB33Cu);
    ctx->pc = 0x1FB338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB334u;
    // 0x1fb338: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB858u, 0x1FB334u, 0x1FB33Cu)) {
        return;
    }
    ctx->pc = 0x1FB33Cu;
label_1fb33c:
    // 0x1fb33c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fb33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb340:
    // 0x1fb340: 0x120000f3  beqz        $s0, . + 4 + (0xF3 << 2)
label_1fb344:
    if (ctx->pc == 0x1FB344u) {
        ctx->pc = 0x1FB344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB340u;
        // 0x1fb344: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB348u;
        goto label_1fb348;
    }
    ctx->pc = 0x1FB340u;
    {
        const bool branch_taken_0x1fb340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB340u;
        // 0x1fb344: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb340) {
            ctx->pc = 0x1FB710u;
            goto label_1fb710;
        }
    }
    ctx->pc = 0x1FB348u;
label_1fb348:
    // 0x1fb348: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_1fb34c:
    if (ctx->pc == 0x1FB34Cu) {
        ctx->pc = 0x1FB34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB348u;
        // 0x1fb34c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB350u;
        goto label_1fb350;
    }
    ctx->pc = 0x1FB348u;
    {
        const bool branch_taken_0x1fb348 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB348u;
        // 0x1fb34c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb348) {
            ctx->pc = 0x1FB37Cu;
            goto label_1fb37c;
        }
    }
    ctx->pc = 0x1FB350u;
label_1fb350:
    // 0x1fb350: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1fb350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fb354:
    // 0x1fb354: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1fb354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
label_1fb358:
    // 0x1fb358: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x1fb358u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
label_1fb35c:
    // 0x1fb35c: 0x24a5bf60  addiu       $a1, $a1, -0x40A0
    ctx->pc = 0x1fb35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950752));
label_1fb360:
    // 0x1fb360: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1fb360u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb364:
    // 0x1fb364: 0x2508b210  addiu       $t0, $t0, -0x4DF0
    ctx->pc = 0x1fb364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947344));
label_1fb368:
    // 0x1fb368: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1fb368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fb36c:
    // 0x1fb36c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1fb36cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb370:
    // 0x1fb370: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x1fb370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_1fb374:
    // 0x1fb374: 0xc07ee16  jal         func_1FB858
label_1fb378:
    if (ctx->pc == 0x1FB378u) {
        ctx->pc = 0x1FB378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB374u;
        // 0x1fb378: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB37Cu;
        goto label_1fb37c;
    }
    ctx->pc = 0x1FB374u;
    SET_GPR_U32(ctx, 31, 0x1FB37Cu);
    ctx->pc = 0x1FB378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB374u;
    // 0x1fb378: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB858u, 0x1FB374u, 0x1FB37Cu)) {
        return;
    }
    ctx->pc = 0x1FB37Cu;
label_1fb37c:
    // 0x1fb37c: 0x504000e4  beql        $v0, $zero, . + 4 + (0xE4 << 2)
label_1fb380:
    if (ctx->pc == 0x1FB380u) {
        ctx->pc = 0x1FB380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB37Cu;
        // 0x1fb380: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB384u;
        goto label_1fb384;
    }
    ctx->pc = 0x1FB37Cu;
    {
        const bool branch_taken_0x1fb37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb37c) {
            ctx->pc = 0x1FB380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB37Cu;
            // 0x1fb380: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB710u;
            goto label_1fb710;
        }
    }
    ctx->pc = 0x1FB384u;
label_1fb384:
    // 0x1fb384: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x1fb384u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1fb388:
    // 0x1fb388: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1fb388u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1fb38c:
    // 0x1fb38c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1fb390:
    if (ctx->pc == 0x1FB390u) {
        ctx->pc = 0x1FB390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB38Cu;
        // 0x1fb390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB394u;
        goto label_1fb394;
    }
    ctx->pc = 0x1FB38Cu;
    {
        const bool branch_taken_0x1fb38c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB38Cu;
        // 0x1fb390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb38c) {
            ctx->pc = 0x1FB3C0u;
            goto label_1fb3c0;
        }
    }
    ctx->pc = 0x1FB394u;
label_1fb394:
    // 0x1fb394: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fb394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fb398:
    // 0x1fb398: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1fb398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
label_1fb39c:
    // 0x1fb39c: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x1fb39cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
label_1fb3a0:
    // 0x1fb3a0: 0x24a5bef0  addiu       $a1, $a1, -0x4110
    ctx->pc = 0x1fb3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950640));
label_1fb3a4:
    // 0x1fb3a4: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1fb3a4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb3a8:
    // 0x1fb3a8: 0x2508b210  addiu       $t0, $t0, -0x4DF0
    ctx->pc = 0x1fb3a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947344));
label_1fb3ac:
    // 0x1fb3ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1fb3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fb3b0:
    // 0x1fb3b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fb3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb3b4:
    // 0x1fb3b4: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1fb3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_1fb3b8:
    // 0x1fb3b8: 0xc07ee16  jal         func_1FB858
label_1fb3bc:
    if (ctx->pc == 0x1FB3BCu) {
        ctx->pc = 0x1FB3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB3B8u;
        // 0x1fb3bc: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB3C0u;
        goto label_1fb3c0;
    }
    ctx->pc = 0x1FB3B8u;
    SET_GPR_U32(ctx, 31, 0x1FB3C0u);
    ctx->pc = 0x1FB3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB3B8u;
    // 0x1fb3bc: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB858u, 0x1FB3B8u, 0x1FB3C0u)) {
        return;
    }
    ctx->pc = 0x1FB3C0u;
label_1fb3c0:
    // 0x1fb3c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1fb3c4:
    if (ctx->pc == 0x1FB3C4u) {
        ctx->pc = 0x1FB3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB3C0u;
        // 0x1fb3c4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB3C8u;
        goto label_1fb3c8;
    }
    ctx->pc = 0x1FB3C0u;
    {
        const bool branch_taken_0x1fb3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB3C0u;
        // 0x1fb3c4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb3c0) {
            ctx->pc = 0x1FB3D0u;
            goto label_1fb3d0;
        }
    }
    ctx->pc = 0x1FB3C8u;
label_1fb3c8:
    // 0x1fb3c8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1fb3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1fb3cc:
    // 0x1fb3cc: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x1fb3ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1fb3d0:
    // 0x1fb3d0: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_1fb3d4:
    if (ctx->pc == 0x1FB3D4u) {
        ctx->pc = 0x1FB3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB3D0u;
        // 0x1fb3d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB3D8u;
        goto label_1fb3d8;
    }
    ctx->pc = 0x1FB3D0u;
    {
        const bool branch_taken_0x1fb3d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB3D0u;
        // 0x1fb3d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb3d0) {
            ctx->pc = 0x1FB404u;
            goto label_1fb404;
        }
    }
    ctx->pc = 0x1FB3D8u;
label_1fb3d8:
    // 0x1fb3d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1fb3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fb3dc:
    // 0x1fb3dc: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1fb3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
label_1fb3e0:
    // 0x1fb3e0: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x1fb3e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
label_1fb3e4:
    // 0x1fb3e4: 0x24a5bef0  addiu       $a1, $a1, -0x4110
    ctx->pc = 0x1fb3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950640));
label_1fb3e8:
    // 0x1fb3e8: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1fb3e8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb3ec:
    // 0x1fb3ec: 0x2508b210  addiu       $t0, $t0, -0x4DF0
    ctx->pc = 0x1fb3ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947344));
label_1fb3f0:
    // 0x1fb3f0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1fb3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fb3f4:
    // 0x1fb3f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fb3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb3f8:
    // 0x1fb3f8: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x1fb3f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_1fb3fc:
    // 0x1fb3fc: 0xc07ee16  jal         func_1FB858
label_1fb400:
    if (ctx->pc == 0x1FB400u) {
        ctx->pc = 0x1FB400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB3FCu;
        // 0x1fb400: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB404u;
        goto label_1fb404;
    }
    ctx->pc = 0x1FB3FCu;
    SET_GPR_U32(ctx, 31, 0x1FB404u);
    ctx->pc = 0x1FB400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB3FCu;
    // 0x1fb400: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB858u, 0x1FB3FCu, 0x1FB404u)) {
        return;
    }
    ctx->pc = 0x1FB404u;
label_1fb404:
    // 0x1fb404: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1fb408:
    if (ctx->pc == 0x1FB408u) {
        ctx->pc = 0x1FB408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB404u;
        // 0x1fb408: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB40Cu;
        goto label_1fb40c;
    }
    ctx->pc = 0x1FB404u;
    {
        const bool branch_taken_0x1fb404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB404u;
        // 0x1fb408: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb404) {
            ctx->pc = 0x1FB414u;
            goto label_1fb414;
        }
    }
    ctx->pc = 0x1FB40Cu;
label_1fb40c:
    // 0x1fb40c: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1fb40cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1fb410:
    // 0x1fb410: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x1fb410u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1fb414:
    // 0x1fb414: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1fb414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_1fb418:
    // 0x1fb418: 0x32540001  andi        $s4, $s2, 0x1
    ctx->pc = 0x1fb418u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_1fb41c:
    // 0x1fb41c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1fb41cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1fb420:
    // 0x1fb420: 0x144000bb  bnez        $v0, . + 4 + (0xBB << 2)
label_1fb424:
    if (ctx->pc == 0x1FB424u) {
        ctx->pc = 0x1FB424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB420u;
        // 0x1fb424: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB428u;
        goto label_1fb428;
    }
    ctx->pc = 0x1FB420u;
    {
        const bool branch_taken_0x1fb420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB420u;
        // 0x1fb424: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb420) {
            ctx->pc = 0x1FB710u;
            goto label_1fb710;
        }
    }
    ctx->pc = 0x1FB428u;
label_1fb428:
    // 0x1fb428: 0x32630002  andi        $v1, $s3, 0x2
    ctx->pc = 0x1fb428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
label_1fb42c:
    // 0x1fb42c: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x1fb42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_1fb430:
    // 0x1fb430: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1fb430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1fb434:
    // 0x1fb434: 0x144000b6  bnez        $v0, . + 4 + (0xB6 << 2)
label_1fb438:
    if (ctx->pc == 0x1FB438u) {
        ctx->pc = 0x1FB438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB434u;
        // 0x1fb438: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB43Cu;
        goto label_1fb43c;
    }
    ctx->pc = 0x1FB434u;
    {
        const bool branch_taken_0x1fb434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB434u;
        // 0x1fb438: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb434) {
            ctx->pc = 0x1FB710u;
            goto label_1fb710;
        }
    }
    ctx->pc = 0x1FB43Cu;
label_1fb43c:
    // 0x1fb43c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb440:
    // 0x1fb440: 0xc07eaec  jal         func_1FABB0
label_1fb444:
    if (ctx->pc == 0x1FB444u) {
        ctx->pc = 0x1FB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB440u;
        // 0x1fb444: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB448u;
        goto label_1fb448;
    }
    ctx->pc = 0x1FB440u;
    SET_GPR_U32(ctx, 31, 0x1FB448u);
    ctx->pc = 0x1FB444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB440u;
    // 0x1fb444: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FABB0u, 0x1FB440u, 0x1FB448u)) {
        return;
    }
    ctx->pc = 0x1FB448u;
label_1fb448:
    // 0x1fb448: 0x544000b0  bnel        $v0, $zero, . + 4 + (0xB0 << 2)
label_1fb44c:
    if (ctx->pc == 0x1FB44Cu) {
        ctx->pc = 0x1FB44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB448u;
        // 0x1fb44c: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB450u;
        goto label_1fb450;
    }
    ctx->pc = 0x1FB448u;
    {
        const bool branch_taken_0x1fb448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb448) {
            ctx->pc = 0x1FB44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB448u;
            // 0x1fb44c: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB70Cu;
            goto label_1fb70c;
        }
    }
    ctx->pc = 0x1FB450u;
label_1fb450:
    // 0x1fb450: 0xc07ee42  jal         func_1FB908
label_1fb454:
    if (ctx->pc == 0x1FB454u) {
        ctx->pc = 0x1FB458u;
        goto label_1fb458;
    }
    ctx->pc = 0x1FB450u;
    SET_GPR_U32(ctx, 31, 0x1FB458u);
    ctx->pc = 0x1FB908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB908u, 0x1FB450u, 0x1FB458u)) {
        return;
    }
    ctx->pc = 0x1FB458u;
label_1fb458:
    // 0x1fb458: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fb458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb45c:
    // 0x1fb45c: 0xc07eaec  jal         func_1FABB0
label_1fb460:
    if (ctx->pc == 0x1FB460u) {
        ctx->pc = 0x1FB460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB45Cu;
        // 0x1fb460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB464u;
        goto label_1fb464;
    }
    ctx->pc = 0x1FB45Cu;
    SET_GPR_U32(ctx, 31, 0x1FB464u);
    ctx->pc = 0x1FB460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB45Cu;
    // 0x1fb460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FABB0u, 0x1FB45Cu, 0x1FB464u)) {
        return;
    }
    ctx->pc = 0x1FB464u;
label_1fb464:
    // 0x1fb464: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1fb468:
    if (ctx->pc == 0x1FB468u) {
        ctx->pc = 0x1FB46Cu;
        goto label_1fb46c;
    }
    ctx->pc = 0x1FB464u;
    {
        const bool branch_taken_0x1fb464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb464) {
            ctx->pc = 0x1FB4A4u;
            goto label_1fb4a4;
        }
    }
    ctx->pc = 0x1FB46Cu;
label_1fb46c:
    // 0x1fb46c: 0x120000a6  beqz        $s0, . + 4 + (0xA6 << 2)
label_1fb470:
    if (ctx->pc == 0x1FB470u) {
        ctx->pc = 0x1FB470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB46Cu;
        // 0x1fb470: 0x3c080020  lui         $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB474u;
        goto label_1fb474;
    }
    ctx->pc = 0x1FB46Cu;
    {
        const bool branch_taken_0x1fb46c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB46Cu;
        // 0x1fb470: 0x3c080020  lui         $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb46c) {
            ctx->pc = 0x1FB708u;
            goto label_1fb708;
        }
    }
    ctx->pc = 0x1FB474u;
label_1fb474:
    // 0x1fb474: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fb474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fb478:
    // 0x1fb478: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1fb478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
label_1fb47c:
    // 0x1fb47c: 0x24a5be10  addiu       $a1, $a1, -0x41F0
    ctx->pc = 0x1fb47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950416));
label_1fb480:
    // 0x1fb480: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1fb480u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb484:
    // 0x1fb484: 0x2508b210  addiu       $t0, $t0, -0x4DF0
    ctx->pc = 0x1fb484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947344));
label_1fb488:
    // 0x1fb488: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1fb488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fb48c:
    // 0x1fb48c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fb48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb490:
    // 0x1fb490: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1fb490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_1fb494:
    // 0x1fb494: 0xc07ee16  jal         func_1FB858
label_1fb498:
    if (ctx->pc == 0x1FB498u) {
        ctx->pc = 0x1FB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB494u;
        // 0x1fb498: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB49Cu;
        goto label_1fb49c;
    }
    ctx->pc = 0x1FB494u;
    SET_GPR_U32(ctx, 31, 0x1FB49Cu);
    ctx->pc = 0x1FB498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB494u;
    // 0x1fb498: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB858u, 0x1FB494u, 0x1FB49Cu)) {
        return;
    }
    ctx->pc = 0x1FB49Cu;
label_1fb49c:
    // 0x1fb49c: 0x5040009b  beql        $v0, $zero, . + 4 + (0x9B << 2)
label_1fb4a0:
    if (ctx->pc == 0x1FB4A0u) {
        ctx->pc = 0x1FB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB49Cu;
        // 0x1fb4a0: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB4A4u;
        goto label_1fb4a4;
    }
    ctx->pc = 0x1FB49Cu;
    {
        const bool branch_taken_0x1fb49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb49c) {
            ctx->pc = 0x1FB4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB49Cu;
            // 0x1fb4a0: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB70Cu;
            goto label_1fb70c;
        }
    }
    ctx->pc = 0x1FB4A4u;
label_1fb4a4:
    // 0x1fb4a4: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_1fb4a8:
    if (ctx->pc == 0x1FB4A8u) {
        ctx->pc = 0x1FB4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4A4u;
        // 0x1fb4a8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB4ACu;
        goto label_1fb4ac;
    }
    ctx->pc = 0x1FB4A4u;
    {
        const bool branch_taken_0x1fb4a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb4a4) {
            ctx->pc = 0x1FB4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB4A4u;
            // 0x1fb4a8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB4B4u;
            goto label_1fb4b4;
        }
    }
    ctx->pc = 0x1FB4ACu;
label_1fb4ac:
    // 0x1fb4ac: 0x1000000c  b           . + 4 + (0xC << 2)
label_1fb4b0:
    if (ctx->pc == 0x1FB4B0u) {
        ctx->pc = 0x1FB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4ACu;
        // 0x1fb4b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB4B4u;
        goto label_1fb4b4;
    }
    ctx->pc = 0x1FB4ACu;
    {
        const bool branch_taken_0x1fb4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4ACu;
        // 0x1fb4b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb4ac) {
            ctx->pc = 0x1FB4E0u;
            goto label_1fb4e0;
        }
    }
    ctx->pc = 0x1FB4B4u;
label_1fb4b4:
    // 0x1fb4b4: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1fb4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
label_1fb4b8:
    // 0x1fb4b8: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x1fb4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
label_1fb4bc:
    // 0x1fb4bc: 0x24a5b030  addiu       $a1, $a1, -0x4FD0
    ctx->pc = 0x1fb4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946864));
label_1fb4c0:
    // 0x1fb4c0: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1fb4c0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb4c4:
    // 0x1fb4c4: 0x2508b210  addiu       $t0, $t0, -0x4DF0
    ctx->pc = 0x1fb4c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947344));
label_1fb4c8:
    // 0x1fb4c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1fb4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fb4cc:
    // 0x1fb4cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fb4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb4d0:
    // 0x1fb4d0: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1fb4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_1fb4d4:
    // 0x1fb4d4: 0xc07ee16  jal         func_1FB858
label_1fb4d8:
    if (ctx->pc == 0x1FB4D8u) {
        ctx->pc = 0x1FB4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4D4u;
        // 0x1fb4d8: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB4DCu;
        goto label_1fb4dc;
    }
    ctx->pc = 0x1FB4D4u;
    SET_GPR_U32(ctx, 31, 0x1FB4DCu);
    ctx->pc = 0x1FB4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB4D4u;
    // 0x1fb4d8: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB858u, 0x1FB4D4u, 0x1FB4DCu)) {
        return;
    }
    ctx->pc = 0x1FB4DCu;
label_1fb4dc:
    // 0x1fb4dc: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1fb4dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb4e0:
    // 0x1fb4e0: 0x1140000d  beqz        $t2, . + 4 + (0xD << 2)
label_1fb4e4:
    if (ctx->pc == 0x1FB4E4u) {
        ctx->pc = 0x1FB4E8u;
        goto label_1fb4e8;
    }
    ctx->pc = 0x1FB4E0u;
    {
        const bool branch_taken_0x1fb4e0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb4e0) {
            ctx->pc = 0x1FB518u;
            goto label_1fb518;
        }
    }
    ctx->pc = 0x1FB4E8u;
label_1fb4e8:
    // 0x1fb4e8: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x1fb4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_1fb4ec:
    // 0x1fb4ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fb4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb4f0:
    // 0x1fb4f0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1fb4f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1fb4f4:
    // 0x1fb4f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fb4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb4f8:
    // 0x1fb4f8: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x1fb4f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_1fb4fc:
    // 0x1fb4fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fb4fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb500:
    // 0x1fb500: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1fb500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1fb504:
    // 0x1fb504: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fb504u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb508:
    // 0x1fb508: 0x40f809  jalr        $v0
label_1fb50c:
    if (ctx->pc == 0x1FB50Cu) {
        ctx->pc = 0x1FB50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB508u;
        // 0x1fb50c: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB510u;
        goto label_1fb510;
    }
    ctx->pc = 0x1FB508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FB510u);
        ctx->pc = 0x1FB50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB508u;
        // 0x1fb50c: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB508u, 0x1FB510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB510u;
label_1fb510:
    // 0x1fb510: 0x1000007e  b           . + 4 + (0x7E << 2)
label_1fb514:
    if (ctx->pc == 0x1FB514u) {
        ctx->pc = 0x1FB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB510u;
        // 0x1fb514: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB518u;
        goto label_1fb518;
    }
    ctx->pc = 0x1FB510u;
    {
        const bool branch_taken_0x1fb510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB510u;
        // 0x1fb514: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb510) {
            ctx->pc = 0x1FB70Cu;
            goto label_1fb70c;
        }
    }
    ctx->pc = 0x1FB518u;
label_1fb518:
    // 0x1fb518: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_1fb51c:
    if (ctx->pc == 0x1FB51Cu) {
        ctx->pc = 0x1FB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB518u;
        // 0x1fb51c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB520u;
        goto label_1fb520;
    }
    ctx->pc = 0x1FB518u;
    {
        const bool branch_taken_0x1fb518 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb518) {
            ctx->pc = 0x1FB51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB518u;
            // 0x1fb51c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB528u;
            goto label_1fb528;
        }
    }
    ctx->pc = 0x1FB520u;
label_1fb520:
    // 0x1fb520: 0x1000000c  b           . + 4 + (0xC << 2)
label_1fb524:
    if (ctx->pc == 0x1FB524u) {
        ctx->pc = 0x1FB524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB520u;
        // 0x1fb524: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB528u;
        goto label_1fb528;
    }
    ctx->pc = 0x1FB520u;
    {
        const bool branch_taken_0x1fb520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB520u;
        // 0x1fb524: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb520) {
            ctx->pc = 0x1FB554u;
            goto label_1fb554;
        }
    }
    ctx->pc = 0x1FB528u;
label_1fb528:
    // 0x1fb528: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1fb528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
label_1fb52c:
    // 0x1fb52c: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x1fb52cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
label_1fb530:
    // 0x1fb530: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1fb530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb534:
    // 0x1fb534: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1fb534u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb538:
    // 0x1fb538: 0x24a5bf60  addiu       $a1, $a1, -0x40A0
    ctx->pc = 0x1fb538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950752));
label_1fb53c:
    // 0x1fb53c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1fb53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fb540:
    // 0x1fb540: 0x2508b210  addiu       $t0, $t0, -0x4DF0
    ctx->pc = 0x1fb540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947344));
label_1fb544:
    // 0x1fb544: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1fb544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_1fb548:
    // 0x1fb548: 0xc07ee16  jal         func_1FB858
label_1fb54c:
    if (ctx->pc == 0x1FB54Cu) {
        ctx->pc = 0x1FB54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB548u;
        // 0x1fb54c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB550u;
        goto label_1fb550;
    }
    ctx->pc = 0x1FB548u;
    SET_GPR_U32(ctx, 31, 0x1FB550u);
    ctx->pc = 0x1FB54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB548u;
    // 0x1fb54c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB858u, 0x1FB548u, 0x1FB550u)) {
        return;
    }
    ctx->pc = 0x1FB550u;
label_1fb550:
    // 0x1fb550: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fb550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb554:
    // 0x1fb554: 0x1200006e  beqz        $s0, . + 4 + (0x6E << 2)
label_1fb558:
    if (ctx->pc == 0x1FB558u) {
        ctx->pc = 0x1FB558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB554u;
        // 0x1fb558: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB55Cu;
        goto label_1fb55c;
    }
    ctx->pc = 0x1FB554u;
    {
        const bool branch_taken_0x1fb554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB554u;
        // 0x1fb558: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb554) {
            ctx->pc = 0x1FB710u;
            goto label_1fb710;
        }
    }
    ctx->pc = 0x1FB55Cu;
label_1fb55c:
    // 0x1fb55c: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_1fb560:
    if (ctx->pc == 0x1FB560u) {
        ctx->pc = 0x1FB560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB55Cu;
        // 0x1fb560: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB564u;
        goto label_1fb564;
    }
    ctx->pc = 0x1FB55Cu;
    {
        const bool branch_taken_0x1fb55c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb55c) {
            ctx->pc = 0x1FB560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB55Cu;
            // 0x1fb560: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB56Cu;
            goto label_1fb56c;
        }
    }
    ctx->pc = 0x1FB564u;
label_1fb564:
    // 0x1fb564: 0x1000000c  b           . + 4 + (0xC << 2)
label_1fb568:
    if (ctx->pc == 0x1FB568u) {
        ctx->pc = 0x1FB568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB564u;
        // 0x1fb568: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB56Cu;
        goto label_1fb56c;
    }
    ctx->pc = 0x1FB564u;
    {
        const bool branch_taken_0x1fb564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB564u;
        // 0x1fb568: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb564) {
            ctx->pc = 0x1FB598u;
            goto label_1fb598;
        }
    }
    ctx->pc = 0x1FB56Cu;
label_1fb56c:
    // 0x1fb56c: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1fb56cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
label_1fb570:
    // 0x1fb570: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x1fb570u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
label_1fb574:
    // 0x1fb574: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1fb574u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb578:
    // 0x1fb578: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1fb578u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb57c:
    // 0x1fb57c: 0x24a5bf60  addiu       $a1, $a1, -0x40A0
    ctx->pc = 0x1fb57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950752));
label_1fb580:
    // 0x1fb580: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1fb580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fb584:
    // 0x1fb584: 0x2508b210  addiu       $t0, $t0, -0x4DF0
    ctx->pc = 0x1fb584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947344));
label_1fb588:
    // 0x1fb588: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x1fb588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_1fb58c:
    // 0x1fb58c: 0xc07ee16  jal         func_1FB858
label_1fb590:
    if (ctx->pc == 0x1FB590u) {
        ctx->pc = 0x1FB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB58Cu;
        // 0x1fb590: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB594u;
        goto label_1fb594;
    }
    ctx->pc = 0x1FB58Cu;
    SET_GPR_U32(ctx, 31, 0x1FB594u);
    ctx->pc = 0x1FB590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB58Cu;
    // 0x1fb590: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB858u, 0x1FB58Cu, 0x1FB594u)) {
        return;
    }
    ctx->pc = 0x1FB594u;
label_1fb594:
    // 0x1fb594: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fb594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb598:
    // 0x1fb598: 0x1220005c  beqz        $s1, . + 4 + (0x5C << 2)
label_1fb59c:
    if (ctx->pc == 0x1FB59Cu) {
        ctx->pc = 0x1FB59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB598u;
        // 0x1fb59c: 0x3c1e0020  lui         $fp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB5A0u;
        goto label_1fb5a0;
    }
    ctx->pc = 0x1FB598u;
    {
        const bool branch_taken_0x1fb598 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB598u;
        // 0x1fb59c: 0x3c1e0020  lui         $fp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb598) {
            ctx->pc = 0x1FB70Cu;
            goto label_1fb70c;
        }
    }
    ctx->pc = 0x1FB5A0u;
label_1fb5a0:
    // 0x1fb5a0: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x1fb5a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1fb5a4:
    // 0x1fb5a4: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x1fb5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1fb5a8:
    // 0x1fb5a8: 0x3c150020  lui         $s5, 0x20
    ctx->pc = 0x1fb5a8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32 << 16));
label_1fb5ac:
    // 0x1fb5ac: 0x10000024  b           . + 4 + (0x24 << 2)
label_1fb5b0:
    if (ctx->pc == 0x1FB5B0u) {
        ctx->pc = 0x1FB5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5ACu;
        // 0x1fb5b0: 0x3c170020  lui         $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB5B4u;
        goto label_1fb5b4;
    }
    ctx->pc = 0x1FB5ACu;
    {
        const bool branch_taken_0x1fb5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5ACu;
        // 0x1fb5b0: 0x3c170020  lui         $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb5ac) {
            ctx->pc = 0x1FB640u;
            goto label_1fb640;
        }
    }
    ctx->pc = 0x1FB5B4u;
label_1fb5b4:
    // 0x1fb5b4: 0x0  nop
    ctx->pc = 0x1fb5b4u;
    // NOP
label_1fb5b8:
    // 0x1fb5b8: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_1fb5bc:
    if (ctx->pc == 0x1FB5BCu) {
        ctx->pc = 0x1FB5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5B8u;
        // 0x1fb5bc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB5C0u;
        goto label_1fb5c0;
    }
    ctx->pc = 0x1FB5B8u;
    {
        const bool branch_taken_0x1fb5b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb5b8) {
            ctx->pc = 0x1FB5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB5B8u;
            // 0x1fb5bc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB5C8u;
            goto label_1fb5c8;
        }
    }
    ctx->pc = 0x1FB5C0u;
label_1fb5c0:
    // 0x1fb5c0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1fb5c4:
    if (ctx->pc == 0x1FB5C4u) {
        ctx->pc = 0x1FB5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5C0u;
        // 0x1fb5c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB5C8u;
        goto label_1fb5c8;
    }
    ctx->pc = 0x1FB5C0u;
    {
        const bool branch_taken_0x1fb5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5C0u;
        // 0x1fb5c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb5c0) {
            ctx->pc = 0x1FB5ECu;
            goto label_1fb5ec;
        }
    }
    ctx->pc = 0x1FB5C8u;
label_1fb5c8:
    // 0x1fb5c8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1fb5c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb5cc:
    // 0x1fb5cc: 0x26e5bf60  addiu       $a1, $s7, -0x40A0
    ctx->pc = 0x1fb5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950752));
label_1fb5d0:
    // 0x1fb5d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fb5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb5d4:
    // 0x1fb5d4: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1fb5d4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb5d8:
    // 0x1fb5d8: 0x26a8b210  addiu       $t0, $s5, -0x4DF0
    ctx->pc = 0x1fb5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947344));
label_1fb5dc:
    // 0x1fb5dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1fb5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fb5e0:
    // 0x1fb5e0: 0xc07ee16  jal         func_1FB858
label_1fb5e4:
    if (ctx->pc == 0x1FB5E4u) {
        ctx->pc = 0x1FB5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5E0u;
        // 0x1fb5e4: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB5E8u;
        goto label_1fb5e8;
    }
    ctx->pc = 0x1FB5E0u;
    SET_GPR_U32(ctx, 31, 0x1FB5E8u);
    ctx->pc = 0x1FB5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB5E0u;
    // 0x1fb5e4: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB858u, 0x1FB5E0u, 0x1FB5E8u)) {
        return;
    }
    ctx->pc = 0x1FB5E8u;
label_1fb5e8:
    // 0x1fb5e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fb5e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb5ec:
    // 0x1fb5ec: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_1fb5f0:
    if (ctx->pc == 0x1FB5F0u) {
        ctx->pc = 0x1FB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5ECu;
        // 0x1fb5f0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB5F4u;
        goto label_1fb5f4;
    }
    ctx->pc = 0x1FB5ECu;
    {
        const bool branch_taken_0x1fb5ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb5ec) {
            ctx->pc = 0x1FB5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB5ECu;
            // 0x1fb5f0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB5FCu;
            goto label_1fb5fc;
        }
    }
    ctx->pc = 0x1FB5F4u;
label_1fb5f4:
    // 0x1fb5f4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1fb5f8:
    if (ctx->pc == 0x1FB5F8u) {
        ctx->pc = 0x1FB5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5F4u;
        // 0x1fb5f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB5FCu;
        goto label_1fb5fc;
    }
    ctx->pc = 0x1FB5F4u;
    {
        const bool branch_taken_0x1fb5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5F4u;
        // 0x1fb5f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb5f4) {
            ctx->pc = 0x1FB620u;
            goto label_1fb620;
        }
    }
    ctx->pc = 0x1FB5FCu;
label_1fb5fc:
    // 0x1fb5fc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1fb5fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb600:
    // 0x1fb600: 0x26e5bf60  addiu       $a1, $s7, -0x40A0
    ctx->pc = 0x1fb600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950752));
label_1fb604:
    // 0x1fb604: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fb604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb608:
    // 0x1fb608: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1fb608u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb60c:
    // 0x1fb60c: 0x26a8b210  addiu       $t0, $s5, -0x4DF0
    ctx->pc = 0x1fb60cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947344));
label_1fb610:
    // 0x1fb610: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1fb610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fb614:
    // 0x1fb614: 0xc07ee16  jal         func_1FB858
label_1fb618:
    if (ctx->pc == 0x1FB618u) {
        ctx->pc = 0x1FB618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB614u;
        // 0x1fb618: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB61Cu;
        goto label_1fb61c;
    }
    ctx->pc = 0x1FB614u;
    SET_GPR_U32(ctx, 31, 0x1FB61Cu);
    ctx->pc = 0x1FB618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB614u;
    // 0x1fb618: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB858u, 0x1FB614u, 0x1FB61Cu)) {
        return;
    }
    ctx->pc = 0x1FB61Cu;
label_1fb61c:
    // 0x1fb61c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fb61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb620:
    // 0x1fb620: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
label_1fb624:
    if (ctx->pc == 0x1FB624u) {
        ctx->pc = 0x1FB624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB620u;
        // 0x1fb624: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB628u;
        goto label_1fb628;
    }
    ctx->pc = 0x1FB620u;
    {
        const bool branch_taken_0x1fb620 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB620u;
        // 0x1fb624: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb620) {
            ctx->pc = 0x1FB710u;
            goto label_1fb710;
        }
    }
    ctx->pc = 0x1FB628u;
label_1fb628:
    // 0x1fb628: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
label_1fb62c:
    if (ctx->pc == 0x1FB62Cu) {
        ctx->pc = 0x1FB62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB628u;
        // 0x1fb62c: 0x3a420001  xori        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB630u;
        goto label_1fb630;
    }
    ctx->pc = 0x1FB628u;
    {
        const bool branch_taken_0x1fb628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB628u;
        // 0x1fb62c: 0x3a420001  xori        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb628) {
            ctx->pc = 0x1FB70Cu;
            goto label_1fb70c;
        }
    }
    ctx->pc = 0x1FB630u;
label_1fb630:
    // 0x1fb630: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x1fb630u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1fb634:
    // 0x1fb634: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fb634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1fb638:
    // 0x1fb638: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x1fb638u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1fb63c:
    // 0x1fb63c: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x1fb63cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0));
label_1fb640:
    // 0x1fb640: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_1fb644:
    if (ctx->pc == 0x1FB644u) {
        ctx->pc = 0x1FB644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB640u;
        // 0x1fb644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB648u;
        goto label_1fb648;
    }
    ctx->pc = 0x1FB640u;
    {
        const bool branch_taken_0x1fb640 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB640u;
        // 0x1fb644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb640) {
            ctx->pc = 0x1FB66Cu;
            goto label_1fb66c;
        }
    }
    ctx->pc = 0x1FB648u;
label_1fb648:
    // 0x1fb648: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fb648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fb64c:
    // 0x1fb64c: 0x27c5bef0  addiu       $a1, $fp, -0x4110
    ctx->pc = 0x1fb64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294950640));
label_1fb650:
    // 0x1fb650: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fb650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb654:
    // 0x1fb654: 0x26a8b210  addiu       $t0, $s5, -0x4DF0
    ctx->pc = 0x1fb654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947344));
label_1fb658:
    // 0x1fb658: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1fb658u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb65c:
    // 0x1fb65c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1fb65cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb660:
    // 0x1fb660: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1fb660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fb664:
    // 0x1fb664: 0xc07ee16  jal         func_1FB858
label_1fb668:
    if (ctx->pc == 0x1FB668u) {
        ctx->pc = 0x1FB668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB664u;
        // 0x1fb668: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB66Cu;
        goto label_1fb66c;
    }
    ctx->pc = 0x1FB664u;
    SET_GPR_U32(ctx, 31, 0x1FB66Cu);
    ctx->pc = 0x1FB668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB664u;
    // 0x1fb668: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB858u, 0x1FB664u, 0x1FB66Cu)) {
        return;
    }
    ctx->pc = 0x1FB66Cu;
label_1fb66c:
    // 0x1fb66c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1fb670:
    if (ctx->pc == 0x1FB670u) {
        ctx->pc = 0x1FB670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB66Cu;
        // 0x1fb670: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB674u;
        goto label_1fb674;
    }
    ctx->pc = 0x1FB66Cu;
    {
        const bool branch_taken_0x1fb66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB66Cu;
        // 0x1fb670: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb66c) {
            ctx->pc = 0x1FB67Cu;
            goto label_1fb67c;
        }
    }
    ctx->pc = 0x1FB674u;
label_1fb674:
    // 0x1fb674: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1fb674u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1fb678:
    // 0x1fb678: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x1fb678u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1fb67c:
    // 0x1fb67c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_1fb680:
    if (ctx->pc == 0x1FB680u) {
        ctx->pc = 0x1FB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB67Cu;
        // 0x1fb680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB684u;
        goto label_1fb684;
    }
    ctx->pc = 0x1FB67Cu;
    {
        const bool branch_taken_0x1fb67c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB67Cu;
        // 0x1fb680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb67c) {
            ctx->pc = 0x1FB6A8u;
            goto label_1fb6a8;
        }
    }
    ctx->pc = 0x1FB684u;
label_1fb684:
    // 0x1fb684: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1fb684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fb688:
    // 0x1fb688: 0x27c5bef0  addiu       $a1, $fp, -0x4110
    ctx->pc = 0x1fb688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294950640));
label_1fb68c:
    // 0x1fb68c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fb68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb690:
    // 0x1fb690: 0x26a8b210  addiu       $t0, $s5, -0x4DF0
    ctx->pc = 0x1fb690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947344));
label_1fb694:
    // 0x1fb694: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1fb694u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb698:
    // 0x1fb698: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1fb698u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb69c:
    // 0x1fb69c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1fb69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fb6a0:
    // 0x1fb6a0: 0xc07ee16  jal         func_1FB858
label_1fb6a4:
    if (ctx->pc == 0x1FB6A4u) {
        ctx->pc = 0x1FB6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6A0u;
        // 0x1fb6a4: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB6A8u;
        goto label_1fb6a8;
    }
    ctx->pc = 0x1FB6A0u;
    SET_GPR_U32(ctx, 31, 0x1FB6A8u);
    ctx->pc = 0x1FB6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB6A0u;
    // 0x1fb6a4: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB858u, 0x1FB6A0u, 0x1FB6A8u)) {
        return;
    }
    ctx->pc = 0x1FB6A8u;
label_1fb6a8:
    // 0x1fb6a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1fb6ac:
    if (ctx->pc == 0x1FB6ACu) {
        ctx->pc = 0x1FB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6A8u;
        // 0x1fb6ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB6B0u;
        goto label_1fb6b0;
    }
    ctx->pc = 0x1FB6A8u;
    {
        const bool branch_taken_0x1fb6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6A8u;
        // 0x1fb6ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6a8) {
            ctx->pc = 0x1FB6B8u;
            goto label_1fb6b8;
        }
    }
    ctx->pc = 0x1FB6B0u;
label_1fb6b0:
    // 0x1fb6b0: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1fb6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1fb6b4:
    // 0x1fb6b4: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x1fb6b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1fb6b8:
    // 0x1fb6b8: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x1fb6b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_1fb6bc:
    // 0x1fb6bc: 0x32450001  andi        $a1, $s2, 0x1
    ctx->pc = 0x1fb6bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_1fb6c0:
    // 0x1fb6c0: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1fb6c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1fb6c4:
    // 0x1fb6c4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_1fb6c8:
    if (ctx->pc == 0x1FB6C8u) {
        ctx->pc = 0x1FB6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6C4u;
        // 0x1fb6c8: 0x32640002  andi        $a0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB6CCu;
        goto label_1fb6cc;
    }
    ctx->pc = 0x1FB6C4u;
    {
        const bool branch_taken_0x1fb6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6C4u;
        // 0x1fb6c8: 0x32640002  andi        $a0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6c4) {
            ctx->pc = 0x1FB70Cu;
            goto label_1fb70c;
        }
    }
    ctx->pc = 0x1FB6CCu;
label_1fb6cc:
    // 0x1fb6cc: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x1fb6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_1fb6d0:
    // 0x1fb6d0: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1fb6d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1fb6d4:
    // 0x1fb6d4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1fb6d8:
    if (ctx->pc == 0x1FB6D8u) {
        ctx->pc = 0x1FB6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6D4u;
        // 0x1fb6d8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB6DCu;
        goto label_1fb6dc;
    }
    ctx->pc = 0x1FB6D4u;
    {
        const bool branch_taken_0x1fb6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6D4u;
        // 0x1fb6d8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6d4) {
            ctx->pc = 0x1FB710u;
            goto label_1fb710;
        }
    }
    ctx->pc = 0x1FB6DCu;
label_1fb6dc:
    // 0x1fb6dc: 0x56800006  bnel        $s4, $zero, . + 4 + (0x6 << 2)
label_1fb6e0:
    if (ctx->pc == 0x1FB6E0u) {
        ctx->pc = 0x1FB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6DCu;
        // 0x1fb6e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB6E4u;
        goto label_1fb6e4;
    }
    ctx->pc = 0x1FB6DCu;
    {
        const bool branch_taken_0x1fb6dc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb6dc) {
            ctx->pc = 0x1FB6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB6DCu;
            // 0x1fb6e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB6F8u;
            goto label_1fb6f8;
        }
    }
    ctx->pc = 0x1FB6E4u;
label_1fb6e4:
    // 0x1fb6e4: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1fb6e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1fb6e8:
    // 0x1fb6e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1fb6ec:
    if (ctx->pc == 0x1FB6ECu) {
        ctx->pc = 0x1FB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6E8u;
        // 0x1fb6ec: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB6F0u;
        goto label_1fb6f0;
    }
    ctx->pc = 0x1FB6E8u;
    {
        const bool branch_taken_0x1fb6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6E8u;
        // 0x1fb6ec: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6e8) {
            ctx->pc = 0x1FB70Cu;
            goto label_1fb70c;
        }
    }
    ctx->pc = 0x1FB6F0u;
label_1fb6f0:
    // 0x1fb6f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1fb6f4:
    if (ctx->pc == 0x1FB6F4u) {
        ctx->pc = 0x1FB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6F0u;
        // 0x1fb6f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB6F8u;
        goto label_1fb6f8;
    }
    ctx->pc = 0x1FB6F0u;
    {
        const bool branch_taken_0x1fb6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6F0u;
        // 0x1fb6f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6f0) {
            ctx->pc = 0x1FB70Cu;
            goto label_1fb70c;
        }
    }
    ctx->pc = 0x1FB6F8u;
label_1fb6f8:
    // 0x1fb6f8: 0xc07eaec  jal         func_1FABB0
label_1fb6fc:
    if (ctx->pc == 0x1FB6FCu) {
        ctx->pc = 0x1FB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6F8u;
        // 0x1fb6fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB700u;
        goto label_1fb700;
    }
    ctx->pc = 0x1FB6F8u;
    SET_GPR_U32(ctx, 31, 0x1FB700u);
    ctx->pc = 0x1FB6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB6F8u;
    // 0x1fb6fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FABB0u, 0x1FB6F8u, 0x1FB700u)) {
        return;
    }
    ctx->pc = 0x1FB700u;
label_1fb700:
    // 0x1fb700: 0x1040ffad  beqz        $v0, . + 4 + (-0x53 << 2)
label_1fb704:
    if (ctx->pc == 0x1FB704u) {
        ctx->pc = 0x1FB708u;
        goto label_1fb708;
    }
    ctx->pc = 0x1FB700u;
    {
        const bool branch_taken_0x1fb700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb700) {
            ctx->pc = 0x1FB5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb5b8;
        }
    }
    ctx->pc = 0x1FB708u;
label_1fb708:
    // 0x1fb708: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1fb708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_1fb70c:
    // 0x1fb70c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fb70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb710:
    // 0x1fb710: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1fb710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1fb714:
    // 0x1fb714: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1fb714u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1fb718:
    // 0x1fb718: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1fb718u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1fb71c:
    // 0x1fb71c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1fb71cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1fb720:
    // 0x1fb720: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1fb720u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1fb724:
    // 0x1fb724: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1fb724u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb728:
    // 0x1fb728: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1fb728u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1fb72c:
    // 0x1fb72c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1fb72cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb730:
    // 0x1fb730: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1fb730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb734:
    // 0x1fb734: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fb734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb738:
    // 0x1fb738: 0x3e00008  jr          $ra
label_1fb73c:
    if (ctx->pc == 0x1FB73Cu) {
        ctx->pc = 0x1FB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB738u;
        // 0x1fb73c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB740u;
        goto label_fallthrough_0x1fb738;
    }
    ctx->pc = 0x1FB738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB738u;
        // 0x1fb73c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fb738:
    ctx->pc = 0x1FB740u;
}
