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

// Function: sub_0023C2D0
// Address: 0x23c2d0 - 0x23c688
void sub_0023C2D0_0x23c2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C2D0_0x23c2d0");
#endif

    switch (ctx->pc) {
        case 0x23c2d0u: goto label_23c2d0;
        case 0x23c2d4u: goto label_23c2d4;
        case 0x23c2d8u: goto label_23c2d8;
        case 0x23c2dcu: goto label_23c2dc;
        case 0x23c2e0u: goto label_23c2e0;
        case 0x23c2e4u: goto label_23c2e4;
        case 0x23c2e8u: goto label_23c2e8;
        case 0x23c2ecu: goto label_23c2ec;
        case 0x23c2f0u: goto label_23c2f0;
        case 0x23c2f4u: goto label_23c2f4;
        case 0x23c2f8u: goto label_23c2f8;
        case 0x23c2fcu: goto label_23c2fc;
        case 0x23c300u: goto label_23c300;
        case 0x23c304u: goto label_23c304;
        case 0x23c308u: goto label_23c308;
        case 0x23c30cu: goto label_23c30c;
        case 0x23c310u: goto label_23c310;
        case 0x23c314u: goto label_23c314;
        case 0x23c318u: goto label_23c318;
        case 0x23c31cu: goto label_23c31c;
        case 0x23c320u: goto label_23c320;
        case 0x23c324u: goto label_23c324;
        case 0x23c328u: goto label_23c328;
        case 0x23c32cu: goto label_23c32c;
        case 0x23c330u: goto label_23c330;
        case 0x23c334u: goto label_23c334;
        case 0x23c338u: goto label_23c338;
        case 0x23c33cu: goto label_23c33c;
        case 0x23c340u: goto label_23c340;
        case 0x23c344u: goto label_23c344;
        case 0x23c348u: goto label_23c348;
        case 0x23c34cu: goto label_23c34c;
        case 0x23c350u: goto label_23c350;
        case 0x23c354u: goto label_23c354;
        case 0x23c358u: goto label_23c358;
        case 0x23c35cu: goto label_23c35c;
        case 0x23c360u: goto label_23c360;
        case 0x23c364u: goto label_23c364;
        case 0x23c368u: goto label_23c368;
        case 0x23c36cu: goto label_23c36c;
        case 0x23c370u: goto label_23c370;
        case 0x23c374u: goto label_23c374;
        case 0x23c378u: goto label_23c378;
        case 0x23c37cu: goto label_23c37c;
        case 0x23c380u: goto label_23c380;
        case 0x23c384u: goto label_23c384;
        case 0x23c388u: goto label_23c388;
        case 0x23c38cu: goto label_23c38c;
        case 0x23c390u: goto label_23c390;
        case 0x23c394u: goto label_23c394;
        case 0x23c398u: goto label_23c398;
        case 0x23c39cu: goto label_23c39c;
        case 0x23c3a0u: goto label_23c3a0;
        case 0x23c3a4u: goto label_23c3a4;
        case 0x23c3a8u: goto label_23c3a8;
        case 0x23c3acu: goto label_23c3ac;
        case 0x23c3b0u: goto label_23c3b0;
        case 0x23c3b4u: goto label_23c3b4;
        case 0x23c3b8u: goto label_23c3b8;
        case 0x23c3bcu: goto label_23c3bc;
        case 0x23c3c0u: goto label_23c3c0;
        case 0x23c3c4u: goto label_23c3c4;
        case 0x23c3c8u: goto label_23c3c8;
        case 0x23c3ccu: goto label_23c3cc;
        case 0x23c3d0u: goto label_23c3d0;
        case 0x23c3d4u: goto label_23c3d4;
        case 0x23c3d8u: goto label_23c3d8;
        case 0x23c3dcu: goto label_23c3dc;
        case 0x23c3e0u: goto label_23c3e0;
        case 0x23c3e4u: goto label_23c3e4;
        case 0x23c3e8u: goto label_23c3e8;
        case 0x23c3ecu: goto label_23c3ec;
        case 0x23c3f0u: goto label_23c3f0;
        case 0x23c3f4u: goto label_23c3f4;
        case 0x23c3f8u: goto label_23c3f8;
        case 0x23c3fcu: goto label_23c3fc;
        case 0x23c400u: goto label_23c400;
        case 0x23c404u: goto label_23c404;
        case 0x23c408u: goto label_23c408;
        case 0x23c40cu: goto label_23c40c;
        case 0x23c410u: goto label_23c410;
        case 0x23c414u: goto label_23c414;
        case 0x23c418u: goto label_23c418;
        case 0x23c41cu: goto label_23c41c;
        case 0x23c420u: goto label_23c420;
        case 0x23c424u: goto label_23c424;
        case 0x23c428u: goto label_23c428;
        case 0x23c42cu: goto label_23c42c;
        case 0x23c430u: goto label_23c430;
        case 0x23c434u: goto label_23c434;
        case 0x23c438u: goto label_23c438;
        case 0x23c43cu: goto label_23c43c;
        case 0x23c440u: goto label_23c440;
        case 0x23c444u: goto label_23c444;
        case 0x23c448u: goto label_23c448;
        case 0x23c44cu: goto label_23c44c;
        case 0x23c450u: goto label_23c450;
        case 0x23c454u: goto label_23c454;
        case 0x23c458u: goto label_23c458;
        case 0x23c45cu: goto label_23c45c;
        case 0x23c460u: goto label_23c460;
        case 0x23c464u: goto label_23c464;
        case 0x23c468u: goto label_23c468;
        case 0x23c46cu: goto label_23c46c;
        case 0x23c470u: goto label_23c470;
        case 0x23c474u: goto label_23c474;
        case 0x23c478u: goto label_23c478;
        case 0x23c47cu: goto label_23c47c;
        case 0x23c480u: goto label_23c480;
        case 0x23c484u: goto label_23c484;
        case 0x23c488u: goto label_23c488;
        case 0x23c48cu: goto label_23c48c;
        case 0x23c490u: goto label_23c490;
        case 0x23c494u: goto label_23c494;
        case 0x23c498u: goto label_23c498;
        case 0x23c49cu: goto label_23c49c;
        case 0x23c4a0u: goto label_23c4a0;
        case 0x23c4a4u: goto label_23c4a4;
        case 0x23c4a8u: goto label_23c4a8;
        case 0x23c4acu: goto label_23c4ac;
        case 0x23c4b0u: goto label_23c4b0;
        case 0x23c4b4u: goto label_23c4b4;
        case 0x23c4b8u: goto label_23c4b8;
        case 0x23c4bcu: goto label_23c4bc;
        case 0x23c4c0u: goto label_23c4c0;
        case 0x23c4c4u: goto label_23c4c4;
        case 0x23c4c8u: goto label_23c4c8;
        case 0x23c4ccu: goto label_23c4cc;
        case 0x23c4d0u: goto label_23c4d0;
        case 0x23c4d4u: goto label_23c4d4;
        case 0x23c4d8u: goto label_23c4d8;
        case 0x23c4dcu: goto label_23c4dc;
        case 0x23c4e0u: goto label_23c4e0;
        case 0x23c4e4u: goto label_23c4e4;
        case 0x23c4e8u: goto label_23c4e8;
        case 0x23c4ecu: goto label_23c4ec;
        case 0x23c4f0u: goto label_23c4f0;
        case 0x23c4f4u: goto label_23c4f4;
        case 0x23c4f8u: goto label_23c4f8;
        case 0x23c4fcu: goto label_23c4fc;
        case 0x23c500u: goto label_23c500;
        case 0x23c504u: goto label_23c504;
        case 0x23c508u: goto label_23c508;
        case 0x23c50cu: goto label_23c50c;
        case 0x23c510u: goto label_23c510;
        case 0x23c514u: goto label_23c514;
        case 0x23c518u: goto label_23c518;
        case 0x23c51cu: goto label_23c51c;
        case 0x23c520u: goto label_23c520;
        case 0x23c524u: goto label_23c524;
        case 0x23c528u: goto label_23c528;
        case 0x23c52cu: goto label_23c52c;
        case 0x23c530u: goto label_23c530;
        case 0x23c534u: goto label_23c534;
        case 0x23c538u: goto label_23c538;
        case 0x23c53cu: goto label_23c53c;
        case 0x23c540u: goto label_23c540;
        case 0x23c544u: goto label_23c544;
        case 0x23c548u: goto label_23c548;
        case 0x23c54cu: goto label_23c54c;
        case 0x23c550u: goto label_23c550;
        case 0x23c554u: goto label_23c554;
        case 0x23c558u: goto label_23c558;
        case 0x23c55cu: goto label_23c55c;
        case 0x23c560u: goto label_23c560;
        case 0x23c564u: goto label_23c564;
        case 0x23c568u: goto label_23c568;
        case 0x23c56cu: goto label_23c56c;
        case 0x23c570u: goto label_23c570;
        case 0x23c574u: goto label_23c574;
        case 0x23c578u: goto label_23c578;
        case 0x23c57cu: goto label_23c57c;
        case 0x23c580u: goto label_23c580;
        case 0x23c584u: goto label_23c584;
        case 0x23c588u: goto label_23c588;
        case 0x23c58cu: goto label_23c58c;
        case 0x23c590u: goto label_23c590;
        case 0x23c594u: goto label_23c594;
        case 0x23c598u: goto label_23c598;
        case 0x23c59cu: goto label_23c59c;
        case 0x23c5a0u: goto label_23c5a0;
        case 0x23c5a4u: goto label_23c5a4;
        case 0x23c5a8u: goto label_23c5a8;
        case 0x23c5acu: goto label_23c5ac;
        case 0x23c5b0u: goto label_23c5b0;
        case 0x23c5b4u: goto label_23c5b4;
        case 0x23c5b8u: goto label_23c5b8;
        case 0x23c5bcu: goto label_23c5bc;
        case 0x23c5c0u: goto label_23c5c0;
        case 0x23c5c4u: goto label_23c5c4;
        case 0x23c5c8u: goto label_23c5c8;
        case 0x23c5ccu: goto label_23c5cc;
        case 0x23c5d0u: goto label_23c5d0;
        case 0x23c5d4u: goto label_23c5d4;
        case 0x23c5d8u: goto label_23c5d8;
        case 0x23c5dcu: goto label_23c5dc;
        case 0x23c5e0u: goto label_23c5e0;
        case 0x23c5e4u: goto label_23c5e4;
        case 0x23c5e8u: goto label_23c5e8;
        case 0x23c5ecu: goto label_23c5ec;
        case 0x23c5f0u: goto label_23c5f0;
        case 0x23c5f4u: goto label_23c5f4;
        case 0x23c5f8u: goto label_23c5f8;
        case 0x23c5fcu: goto label_23c5fc;
        case 0x23c600u: goto label_23c600;
        case 0x23c604u: goto label_23c604;
        case 0x23c608u: goto label_23c608;
        case 0x23c60cu: goto label_23c60c;
        case 0x23c610u: goto label_23c610;
        case 0x23c614u: goto label_23c614;
        case 0x23c618u: goto label_23c618;
        case 0x23c61cu: goto label_23c61c;
        case 0x23c620u: goto label_23c620;
        case 0x23c624u: goto label_23c624;
        case 0x23c628u: goto label_23c628;
        case 0x23c62cu: goto label_23c62c;
        case 0x23c630u: goto label_23c630;
        case 0x23c634u: goto label_23c634;
        case 0x23c638u: goto label_23c638;
        case 0x23c63cu: goto label_23c63c;
        case 0x23c640u: goto label_23c640;
        case 0x23c644u: goto label_23c644;
        case 0x23c648u: goto label_23c648;
        case 0x23c64cu: goto label_23c64c;
        case 0x23c650u: goto label_23c650;
        case 0x23c654u: goto label_23c654;
        case 0x23c658u: goto label_23c658;
        case 0x23c65cu: goto label_23c65c;
        case 0x23c660u: goto label_23c660;
        case 0x23c664u: goto label_23c664;
        case 0x23c668u: goto label_23c668;
        case 0x23c66cu: goto label_23c66c;
        case 0x23c670u: goto label_23c670;
        case 0x23c674u: goto label_23c674;
        case 0x23c678u: goto label_23c678;
        case 0x23c67cu: goto label_23c67c;
        case 0x23c680u: goto label_23c680;
        case 0x23c684u: goto label_23c684;
        default: break;
    }

    ctx->pc = 0x23c2d0u;

label_23c2d0:
    // 0x23c2d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x23c2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_23c2d4:
    // 0x23c2d4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_23c2d8:
    // 0x23c2d8: 0x8c42416c  lw          $v0, 0x416C($v0)
    ctx->pc = 0x23c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16748)));
label_23c2dc:
    // 0x23c2dc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x23c2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_23c2e0:
    // 0x23c2e0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x23c2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_23c2e4:
    // 0x23c2e4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23c2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c2e8:
    // 0x23c2e8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x23c2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_23c2ec:
    // 0x23c2ec: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x23c2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_23c2f0:
    // 0x23c2f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23c2f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c2f4:
    // 0x23c2f4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x23c2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_23c2f8:
    // 0x23c2f8: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x23c2f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_23c2fc:
    // 0x23c2fc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x23c2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_23c300:
    // 0x23c300: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x23c300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_23c304:
    // 0x23c304: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x23c304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_23c308:
    // 0x23c308: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x23c308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_23c30c:
    // 0x23c30c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23c310:
    // 0x23c310: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x23c310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_23c314:
    // 0x23c314: 0xc08c0c4  jal         func_230310
label_23c318:
    if (ctx->pc == 0x23C318u) {
        ctx->pc = 0x23C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C314u;
        // 0x23c318: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C31Cu;
        goto label_23c31c;
    }
    ctx->pc = 0x23C314u;
    SET_GPR_U32(ctx, 31, 0x23C31Cu);
    ctx->pc = 0x23C318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C314u;
    // 0x23c318: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x23C314u, 0x23C31Cu)) {
        return;
    }
    ctx->pc = 0x23C31Cu;
label_23c31c:
    // 0x23c31c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x23c31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_23c320:
    // 0x23c320: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23c320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23c324:
    // 0x23c324: 0x50b804  sllv        $s7, $s0, $v0
    ctx->pc = 0x23c324u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
label_23c328:
    // 0x23c328: 0xc08c0c4  jal         func_230310
label_23c32c:
    if (ctx->pc == 0x23C32Cu) {
        ctx->pc = 0x23C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C328u;
        // 0x23c32c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C330u;
        goto label_23c330;
    }
    ctx->pc = 0x23C328u;
    SET_GPR_U32(ctx, 31, 0x23C330u);
    ctx->pc = 0x23C32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C328u;
    // 0x23c32c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x23C328u, 0x23C330u)) {
        return;
    }
    ctx->pc = 0x23C330u;
label_23c330:
    // 0x23c330: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x23c330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_23c334:
    // 0x23c334: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23c334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23c338:
    // 0x23c338: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x23c338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_23c33c:
    // 0x23c33c: 0x50b004  sllv        $s6, $s0, $v0
    ctx->pc = 0x23c33cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
label_23c340:
    // 0x23c340: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x23c340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_23c344:
    // 0x23c344: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_23c348:
    if (ctx->pc == 0x23C348u) {
        ctx->pc = 0x23C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C344u;
        // 0x23c348: 0x3f0c3  sra         $fp, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C34Cu;
        goto label_23c34c;
    }
    ctx->pc = 0x23C344u;
    {
        const bool branch_taken_0x23c344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C344u;
        // 0x23c348: 0x3f0c3  sra         $fp, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c344) {
            ctx->pc = 0x23C360u;
            goto label_23c360;
        }
    }
    ctx->pc = 0x23C34Cu;
label_23c34c:
    // 0x23c34c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x23c34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_23c350:
    // 0x23c350: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x23c350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_23c354:
    // 0x23c354: 0x40f809  jalr        $v0
label_23c358:
    if (ctx->pc == 0x23C358u) {
        ctx->pc = 0x23C35Cu;
        goto label_23c35c;
    }
    ctx->pc = 0x23C354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23C35Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C354u, 0x23C35Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C35Cu;
label_23c35c:
    // 0x23c35c: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x23c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_23c360:
    // 0x23c360: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x23c360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_23c364:
    // 0x23c364: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23c364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c368:
    // 0x23c368: 0x24550fc8  addiu       $s5, $v0, 0xFC8
    ctx->pc = 0x23c368u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_23c36c:
    // 0x23c36c: 0x17a182  srl         $s4, $s7, 6
    ctx->pc = 0x23c36cu;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 23), 6));
label_23c370:
    // 0x23c370: 0x2630003c  addiu       $s0, $s1, 0x3C
    ctx->pc = 0x23c370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_23c374:
    // 0x23c374: 0x0  nop
    ctx->pc = 0x23c374u;
    // NOP
label_23c378:
    // 0x23c378: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23c378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23c37c:
    // 0x23c37c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_23c380:
    if (ctx->pc == 0x23C380u) {
        ctx->pc = 0x23C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C37Cu;
        // 0x23c380: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C384u;
        goto label_23c384;
    }
    ctx->pc = 0x23C37Cu;
    {
        const bool branch_taken_0x23c37c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C37Cu;
        // 0x23c380: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c37c) {
            ctx->pc = 0x23C394u;
            goto label_23c394;
        }
    }
    ctx->pc = 0x23C384u;
label_23c384:
    // 0x23c384: 0x8ea2010c  lw          $v0, 0x10C($s5)
    ctx->pc = 0x23c384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
label_23c388:
    // 0x23c388: 0x40f809  jalr        $v0
label_23c38c:
    if (ctx->pc == 0x23C38Cu) {
        ctx->pc = 0x23C390u;
        goto label_23c390;
    }
    ctx->pc = 0x23C388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23C390u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C388u, 0x23C390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C390u;
label_23c390:
    // 0x23c390: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x23c390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_23c394:
    // 0x23c394: 0x2e420007  sltiu       $v0, $s2, 0x7
    ctx->pc = 0x23c394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_23c398:
    // 0x23c398: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_23c39c:
    if (ctx->pc == 0x23C39Cu) {
        ctx->pc = 0x23C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C398u;
        // 0x23c39c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3A0u;
        goto label_23c3a0;
    }
    ctx->pc = 0x23C398u;
    {
        const bool branch_taken_0x23c398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C398u;
        // 0x23c39c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c398) {
            ctx->pc = 0x23C378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c378;
        }
    }
    ctx->pc = 0x23C3A0u;
label_23c3a0:
    // 0x23c3a0: 0xc08c0c4  jal         func_230310
label_23c3a4:
    if (ctx->pc == 0x23C3A4u) {
        ctx->pc = 0x23C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3A0u;
        // 0x23c3a4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3A8u;
        goto label_23c3a8;
    }
    ctx->pc = 0x23C3A0u;
    SET_GPR_U32(ctx, 31, 0x23C3A8u);
    ctx->pc = 0x23C3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3A0u;
    // 0x23c3a4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x23C3A0u, 0x23C3A8u)) {
        return;
    }
    ctx->pc = 0x23C3A8u;
label_23c3a8:
    // 0x23c3a8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23c3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23c3ac:
    // 0x23c3ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23c3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23c3b0:
    // 0x23c3b0: 0xc08c0c4  jal         func_230310
label_23c3b4:
    if (ctx->pc == 0x23C3B4u) {
        ctx->pc = 0x23C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3B0u;
        // 0x23c3b4: 0x29680  sll         $s2, $v0, 26 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3B8u;
        goto label_23c3b8;
    }
    ctx->pc = 0x23C3B0u;
    SET_GPR_U32(ctx, 31, 0x23C3B8u);
    ctx->pc = 0x23C3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3B0u;
    // 0x23c3b4: 0x29680  sll         $s2, $v0, 26 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x23C3B0u, 0x23C3B8u)) {
        return;
    }
    ctx->pc = 0x23C3B8u;
label_23c3b8:
    // 0x23c3b8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_23c3bc:
    if (ctx->pc == 0x23C3BCu) {
        ctx->pc = 0x23C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3B8u;
        // 0x23c3bc: 0x21f80  sll         $v1, $v0, 30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3C0u;
        goto label_23c3c0;
    }
    ctx->pc = 0x23C3B8u;
    {
        const bool branch_taken_0x23c3b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3B8u;
        // 0x23c3bc: 0x21f80  sll         $v1, $v0, 30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c3b8) {
            ctx->pc = 0x23C3D0u;
            goto label_23c3d0;
        }
    }
    ctx->pc = 0x23C3C0u;
label_23c3c0:
    // 0x23c3c0: 0x141380  sll         $v0, $s4, 14
    ctx->pc = 0x23c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 14));
label_23c3c4:
    // 0x23c3c4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x23c3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_23c3c8:
    // 0x23c3c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_23c3cc:
    if (ctx->pc == 0x23C3CCu) {
        ctx->pc = 0x23C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3C8u;
        // 0x23c3cc: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3D0u;
        goto label_23c3d0;
    }
    ctx->pc = 0x23C3C8u;
    {
        const bool branch_taken_0x23c3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3C8u;
        // 0x23c3cc: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c3c8) {
            ctx->pc = 0x23C3D8u;
            goto label_23c3d8;
        }
    }
    ctx->pc = 0x23C3D0u;
label_23c3d0:
    // 0x23c3d0: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x23c3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_23c3d4:
    // 0x23c3d4: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x23c3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_23c3d8:
    // 0x23c3d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23c3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23c3dc:
    // 0x23c3dc: 0xc08c0c4  jal         func_230310
label_23c3e0:
    if (ctx->pc == 0x23C3E0u) {
        ctx->pc = 0x23C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3DCu;
        // 0x23c3e0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3E4u;
        goto label_23c3e4;
    }
    ctx->pc = 0x23C3DCu;
    SET_GPR_U32(ctx, 31, 0x23C3E4u);
    ctx->pc = 0x23C3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3DCu;
    // 0x23c3e0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x23C3DCu, 0x23C3E4u)) {
        return;
    }
    ctx->pc = 0x23C3E4u;
label_23c3e4:
    // 0x23c3e4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23c3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23c3e8:
    // 0x23c3e8: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x23c3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
label_23c3ec:
    // 0x23c3ec: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x23c3ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_23c3f0:
    // 0x23c3f0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x23c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_23c3f4:
    // 0x23c3f4: 0x92620023  lbu         $v0, 0x23($s3)
    ctx->pc = 0x23c3f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
label_23c3f8:
    // 0x23c3f8: 0x3042006f  andi        $v0, $v0, 0x6F
    ctx->pc = 0x23c3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)111);
label_23c3fc:
    // 0x23c3fc: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x23c3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c400:
    // 0x23c400: 0x2c830045  sltiu       $v1, $a0, 0x45
    ctx->pc = 0x23c400u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
label_23c404:
    // 0x23c404: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
label_23c408:
    if (ctx->pc == 0x23C408u) {
        ctx->pc = 0x23C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C404u;
        // 0x23c408: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C40Cu;
        goto label_23c40c;
    }
    ctx->pc = 0x23C404u;
    {
        const bool branch_taken_0x23c404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C404u;
        // 0x23c408: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c404) {
            ctx->pc = 0x23C4E0u;
            goto label_23c4e0;
        }
    }
    ctx->pc = 0x23C40Cu;
label_23c40c:
    // 0x23c40c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23c410:
    // 0x23c410: 0x2442b160  addiu       $v0, $v0, -0x4EA0
    ctx->pc = 0x23c410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947168));
label_23c414:
    // 0x23c414: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23c414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23c418:
    // 0x23c418: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23c418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23c41c:
    // 0x23c41c: 0x800008  jr          $a0
label_23c420:
    if (ctx->pc == 0x23C420u) {
        ctx->pc = 0x23C424u;
        goto label_23c424;
    }
    ctx->pc = 0x23C41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C424u: goto label_23c424;
            case 0x23C444u: goto label_23c444;
            case 0x23C464u: goto label_23c464;
            case 0x23C478u: goto label_23c478;
            case 0x23C498u: goto label_23c498;
            case 0x23C4C0u: goto label_23c4c0;
            case 0x23C4D4u: goto label_23c4d4;
            case 0x23C4E0u: goto label_23c4e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C41Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23C424u;
label_23c424:
    // 0x23c424: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x23c424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23c428:
    // 0x23c428: 0x3c0400a0  lui         $a0, 0xA0
    ctx->pc = 0x23c428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)160 << 16));
label_23c42c:
    // 0x23c42c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x23c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_23c430:
    // 0x23c430: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23c430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_23c434:
    // 0x23c434: 0x3463002c  ori         $v1, $v1, 0x2C
    ctx->pc = 0x23c434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44);
label_23c438:
    // 0x23c438: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x23c438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_23c43c:
    // 0x23c43c: 0x10000028  b           . + 4 + (0x28 << 2)
label_23c440:
    if (ctx->pc == 0x23C440u) {
        ctx->pc = 0x23C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C43Cu;
        // 0x23c440: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C444u;
        goto label_23c444;
    }
    ctx->pc = 0x23C43Cu;
    {
        const bool branch_taken_0x23c43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C43Cu;
        // 0x23c440: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c43c) {
            ctx->pc = 0x23C4E0u;
            goto label_23c4e0;
        }
    }
    ctx->pc = 0x23C444u;
label_23c444:
    // 0x23c444: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x23c444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_23c448:
    // 0x23c448: 0x3c020050  lui         $v0, 0x50
    ctx->pc = 0x23c448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)80 << 16));
label_23c44c:
    // 0x23c44c: 0x3442002c  ori         $v0, $v0, 0x2C
    ctx->pc = 0x23c44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44);
label_23c450:
    // 0x23c450: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x23c450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23c454:
    // 0x23c454: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23c454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23c458:
    // 0x23c458: 0x3c050130  lui         $a1, 0x130
    ctx->pc = 0x23c458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)304 << 16));
label_23c45c:
    // 0x23c45c: 0x10000013  b           . + 4 + (0x13 << 2)
label_23c460:
    if (ctx->pc == 0x23C460u) {
        ctx->pc = 0x23C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C45Cu;
        // 0x23c460: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C464u;
        goto label_23c464;
    }
    ctx->pc = 0x23C45Cu;
    {
        const bool branch_taken_0x23c45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C45Cu;
        // 0x23c460: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c45c) {
            ctx->pc = 0x23C4ACu;
            goto label_23c4ac;
        }
    }
    ctx->pc = 0x23C464u;
label_23c464:
    // 0x23c464: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x23c464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23c468:
    // 0x23c468: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x23c468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_23c46c:
    // 0x23c46c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x23c46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_23c470:
    // 0x23c470: 0x1000000d  b           . + 4 + (0xD << 2)
label_23c474:
    if (ctx->pc == 0x23C474u) {
        ctx->pc = 0x23C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C470u;
        // 0x23c474: 0x3c050130  lui         $a1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)304 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C478u;
        goto label_23c478;
    }
    ctx->pc = 0x23C470u;
    {
        const bool branch_taken_0x23c470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C470u;
        // 0x23c474: 0x3c050130  lui         $a1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)304 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c470) {
            ctx->pc = 0x23C4A8u;
            goto label_23c4a8;
        }
    }
    ctx->pc = 0x23C478u;
label_23c478:
    // 0x23c478: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x23c478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_23c47c:
    // 0x23c47c: 0x3c020050  lui         $v0, 0x50
    ctx->pc = 0x23c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)80 << 16));
label_23c480:
    // 0x23c480: 0x3442002c  ori         $v0, $v0, 0x2C
    ctx->pc = 0x23c480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44);
label_23c484:
    // 0x23c484: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x23c484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23c488:
    // 0x23c488: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23c488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23c48c:
    // 0x23c48c: 0x3c050140  lui         $a1, 0x140
    ctx->pc = 0x23c48cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)320 << 16));
label_23c490:
    // 0x23c490: 0x10000006  b           . + 4 + (0x6 << 2)
label_23c494:
    if (ctx->pc == 0x23C494u) {
        ctx->pc = 0x23C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C490u;
        // 0x23c494: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C498u;
        goto label_23c498;
    }
    ctx->pc = 0x23C490u;
    {
        const bool branch_taken_0x23c490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C490u;
        // 0x23c494: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c490) {
            ctx->pc = 0x23C4ACu;
            goto label_23c4ac;
        }
    }
    ctx->pc = 0x23C498u;
label_23c498:
    // 0x23c498: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x23c498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23c49c:
    // 0x23c49c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x23c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_23c4a0:
    // 0x23c4a0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x23c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_23c4a4:
    // 0x23c4a4: 0x3c050140  lui         $a1, 0x140
    ctx->pc = 0x23c4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)320 << 16));
label_23c4a8:
    // 0x23c4a8: 0x3442002c  ori         $v0, $v0, 0x2C
    ctx->pc = 0x23c4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44);
label_23c4ac:
    // 0x23c4ac: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x23c4acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_23c4b0:
    // 0x23c4b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23c4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23c4b4:
    // 0x23c4b4: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x23c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_23c4b8:
    // 0x23c4b8: 0x10000009  b           . + 4 + (0x9 << 2)
label_23c4bc:
    if (ctx->pc == 0x23C4BCu) {
        ctx->pc = 0x23C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4B8u;
        // 0x23c4bc: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4C0u;
        goto label_23c4c0;
    }
    ctx->pc = 0x23C4B8u;
    {
        const bool branch_taken_0x23c4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4B8u;
        // 0x23c4bc: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4b8) {
            ctx->pc = 0x23C4E0u;
            goto label_23c4e0;
        }
    }
    ctx->pc = 0x23C4C0u;
label_23c4c0:
    // 0x23c4c0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x23c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23c4c4:
    // 0x23c4c4: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x23c4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_23c4c8:
    // 0x23c4c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23c4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23c4cc:
    // 0x23c4cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_23c4d0:
    if (ctx->pc == 0x23C4D0u) {
        ctx->pc = 0x23C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4CCu;
        // 0x23c4d0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4D4u;
        goto label_23c4d4;
    }
    ctx->pc = 0x23C4CCu;
    {
        const bool branch_taken_0x23c4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4CCu;
        // 0x23c4d0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4cc) {
            ctx->pc = 0x23C4E0u;
            goto label_23c4e0;
        }
    }
    ctx->pc = 0x23C4D4u;
label_23c4d4:
    // 0x23c4d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x23c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_23c4d8:
    // 0x23c4d8: 0x3442002c  ori         $v0, $v0, 0x2C
    ctx->pc = 0x23c4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44);
label_23c4dc:
    // 0x23c4dc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x23c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_23c4e0:
    // 0x23c4e0: 0x2d71018  mult        $v0, $s6, $s7
    ctx->pc = 0x23c4e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_23c4e4:
    // 0x23c4e4: 0x5e1018  mult        $v0, $v0, $fp
    ctx->pc = 0x23c4e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_23c4e8:
    // 0x23c4e8: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x23c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_23c4ec:
    // 0x23c4ec: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x23c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_23c4f0:
    // 0x23c4f0: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x23c4f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
label_23c4f4:
    // 0x23c4f4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_23c4f8:
    if (ctx->pc == 0x23C4F8u) {
        ctx->pc = 0x23C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4F4u;
        // 0x23c4f8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4FCu;
        goto label_23c4fc;
    }
    ctx->pc = 0x23C4F4u;
    {
        const bool branch_taken_0x23c4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4F4u;
        // 0x23c4f8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4f4) {
            ctx->pc = 0x23C544u;
            goto label_23c544;
        }
    }
    ctx->pc = 0x23C4FCu;
label_23c4fc:
    // 0x23c4fc: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x23c4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_23c500:
    // 0x23c500: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23c500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c504:
    // 0x23c504: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x23c504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_23c508:
    // 0x23c508: 0x2467003f  addiu       $a3, $v1, 0x3F
    ctx->pc = 0x23c508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_23c50c:
    // 0x23c50c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x23c50cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_23c510:
    // 0x23c510: 0x2445001f  addiu       $a1, $v0, 0x1F
    ctx->pc = 0x23c510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
label_23c514:
    // 0x23c514: 0x87302a  slt         $a2, $a0, $a3
    ctx->pc = 0x23c514u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_23c518:
    // 0x23c518: 0x2463007e  addiu       $v1, $v1, 0x7E
    ctx->pc = 0x23c518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
label_23c51c:
    // 0x23c51c: 0x2442003e  addiu       $v0, $v0, 0x3E
    ctx->pc = 0x23c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 62));
label_23c520:
    // 0x23c520: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x23c520u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_23c524:
    // 0x23c524: 0xe6180b  movn        $v1, $a3, $a2
    ctx->pc = 0x23c524u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7));
label_23c528:
    // 0x23c528: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x23c528u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5));
label_23c52c:
    // 0x23c52c: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x23c52cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_23c530:
    // 0x23c530: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x23c530u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_23c534:
    // 0x23c534: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x23c534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_23c538:
    // 0x23c538: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x23c538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_23c53c:
    // 0x23c53c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_23c540:
    if (ctx->pc == 0x23C540u) {
        ctx->pc = 0x23C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C53Cu;
        // 0x23c540: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C544u;
        goto label_23c544;
    }
    ctx->pc = 0x23C53Cu;
    {
        const bool branch_taken_0x23c53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C53Cu;
        // 0x23c540: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c53c) {
            ctx->pc = 0x23C638u;
            goto label_23c638;
        }
    }
    ctx->pc = 0x23C544u;
label_23c544:
    // 0x23c544: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_23c548:
    if (ctx->pc == 0x23C548u) {
        ctx->pc = 0x23C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C544u;
        // 0x23c548: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C54Cu;
        goto label_23c54c;
    }
    ctx->pc = 0x23C544u;
    {
        const bool branch_taken_0x23c544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C544u;
        // 0x23c548: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c544) {
            ctx->pc = 0x23C5A4u;
            goto label_23c5a4;
        }
    }
    ctx->pc = 0x23C54Cu;
label_23c54c:
    // 0x23c54c: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x23c54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_23c550:
    // 0x23c550: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c554:
    // 0x23c554: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x23c554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_23c558:
    // 0x23c558: 0x24a6003f  addiu       $a2, $a1, 0x3F
    ctx->pc = 0x23c558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
label_23c55c:
    // 0x23c55c: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x23c55cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_23c560:
    // 0x23c560: 0x24a5007e  addiu       $a1, $a1, 0x7E
    ctx->pc = 0x23c560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 126));
label_23c564:
    // 0x23c564: 0x2487003f  addiu       $a3, $a0, 0x3F
    ctx->pc = 0x23c564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
label_23c568:
    // 0x23c568: 0xc3280b  movn        $a1, $a2, $v1
    ctx->pc = 0x23c568u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6));
label_23c56c:
    // 0x23c56c: 0x2484007e  addiu       $a0, $a0, 0x7E
    ctx->pc = 0x23c56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 126));
label_23c570:
    // 0x23c570: 0x52983  sra         $a1, $a1, 6
    ctx->pc = 0x23c570u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 6));
label_23c574:
    // 0x23c574: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x23c574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_23c578:
    // 0x23c578: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x23c578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_23c57c:
    // 0x23c57c: 0xe2200b  movn        $a0, $a3, $v0
    ctx->pc = 0x23c57cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7));
label_23c580:
    // 0x23c580: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x23c580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_23c584:
    // 0x23c584: 0xc07e4e4  jal         func_1F9390
label_23c588:
    if (ctx->pc == 0x23C588u) {
        ctx->pc = 0x23C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C584u;
        // 0x23c588: 0x42183  sra         $a0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C58Cu;
        goto label_23c58c;
    }
    ctx->pc = 0x23C584u;
    SET_GPR_U32(ctx, 31, 0x23C58Cu);
    ctx->pc = 0x23C588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C584u;
    // 0x23c588: 0x42183  sra         $a0, $a0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x23C584u, 0x23C58Cu)) {
        return;
    }
    ctx->pc = 0x23C58Cu;
label_23c58c:
    // 0x23c58c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23c58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23c590:
    // 0x23c590: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23c590u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_23c594:
    // 0x23c594: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x23c594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_23c598:
    // 0x23c598: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x23c598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_23c59c:
    // 0x23c59c: 0x10000026  b           . + 4 + (0x26 << 2)
label_23c5a0:
    if (ctx->pc == 0x23C5A0u) {
        ctx->pc = 0x23C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C59Cu;
        // 0x23c5a0: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5A4u;
        goto label_23c5a4;
    }
    ctx->pc = 0x23C59Cu;
    {
        const bool branch_taken_0x23c59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C59Cu;
        // 0x23c5a0: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c59c) {
            ctx->pc = 0x23C638u;
            goto label_23c638;
        }
    }
    ctx->pc = 0x23C5A4u;
label_23c5a4:
    // 0x23c5a4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_23c5a8:
    if (ctx->pc == 0x23C5A8u) {
        ctx->pc = 0x23C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5A4u;
        // 0x23c5a8: 0x8e650010  lw          $a1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5ACu;
        goto label_23c5ac;
    }
    ctx->pc = 0x23C5A4u;
    {
        const bool branch_taken_0x23c5a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5A4u;
        // 0x23c5a8: 0x8e650010  lw          $a1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5a4) {
            ctx->pc = 0x23C5D4u;
            goto label_23c5d4;
        }
    }
    ctx->pc = 0x23C5ACu;
label_23c5ac:
    // 0x23c5ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c5b0:
    // 0x23c5b0: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x23c5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_23c5b4:
    // 0x23c5b4: 0x24a6003f  addiu       $a2, $a1, 0x3F
    ctx->pc = 0x23c5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
label_23c5b8:
    // 0x23c5b8: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x23c5b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_23c5bc:
    // 0x23c5bc: 0x24a5007e  addiu       $a1, $a1, 0x7E
    ctx->pc = 0x23c5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 126));
label_23c5c0:
    // 0x23c5c0: 0x2487007f  addiu       $a3, $a0, 0x7F
    ctx->pc = 0x23c5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
label_23c5c4:
    // 0x23c5c4: 0xc3280b  movn        $a1, $a2, $v1
    ctx->pc = 0x23c5c4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6));
label_23c5c8:
    // 0x23c5c8: 0x248400fe  addiu       $a0, $a0, 0xFE
    ctx->pc = 0x23c5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 254));
label_23c5cc:
    // 0x23c5cc: 0x1000000a  b           . + 4 + (0xA << 2)
label_23c5d0:
    if (ctx->pc == 0x23C5D0u) {
        ctx->pc = 0x23C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5CCu;
        // 0x23c5d0: 0x52983  sra         $a1, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5D4u;
        goto label_23c5d4;
    }
    ctx->pc = 0x23C5CCu;
    {
        const bool branch_taken_0x23c5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5CCu;
        // 0x23c5d0: 0x52983  sra         $a1, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5cc) {
            ctx->pc = 0x23C5F8u;
            goto label_23c5f8;
        }
    }
    ctx->pc = 0x23C5D4u;
label_23c5d4:
    // 0x23c5d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c5d8:
    // 0x23c5d8: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x23c5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_23c5dc:
    // 0x23c5dc: 0x24a6007f  addiu       $a2, $a1, 0x7F
    ctx->pc = 0x23c5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
label_23c5e0:
    // 0x23c5e0: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x23c5e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_23c5e4:
    // 0x23c5e4: 0x24a500fe  addiu       $a1, $a1, 0xFE
    ctx->pc = 0x23c5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 254));
label_23c5e8:
    // 0x23c5e8: 0x2487007f  addiu       $a3, $a0, 0x7F
    ctx->pc = 0x23c5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
label_23c5ec:
    // 0x23c5ec: 0xc3280b  movn        $a1, $a2, $v1
    ctx->pc = 0x23c5ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6));
label_23c5f0:
    // 0x23c5f0: 0x248400fe  addiu       $a0, $a0, 0xFE
    ctx->pc = 0x23c5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 254));
label_23c5f4:
    // 0x23c5f4: 0x529c3  sra         $a1, $a1, 7
    ctx->pc = 0x23c5f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 7));
label_23c5f8:
    // 0x23c5f8: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x23c5f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_23c5fc:
    // 0x23c5fc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x23c5fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_23c600:
    // 0x23c600: 0xe2200b  movn        $a0, $a3, $v0
    ctx->pc = 0x23c600u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7));
label_23c604:
    // 0x23c604: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x23c604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_23c608:
    // 0x23c608: 0xc07e4e4  jal         func_1F9390
label_23c60c:
    if (ctx->pc == 0x23C60Cu) {
        ctx->pc = 0x23C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C608u;
        // 0x23c60c: 0x421c3  sra         $a0, $a0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C610u;
        goto label_23c610;
    }
    ctx->pc = 0x23C608u;
    SET_GPR_U32(ctx, 31, 0x23C610u);
    ctx->pc = 0x23C60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C608u;
    // 0x23c60c: 0x421c3  sra         $a0, $a0, 7 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x23C608u, 0x23C610u)) {
        return;
    }
    ctx->pc = 0x23C610u;
label_23c610:
    // 0x23c610: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23c610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23c614:
    // 0x23c614: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23c614u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_23c618:
    // 0x23c618: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23c618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c61c:
    // 0x23c61c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x23c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_23c620:
    // 0x23c620: 0xae24002c  sw          $a0, 0x2C($s1)
    ctx->pc = 0x23c620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 4));
label_23c624:
    // 0x23c624: 0x24430800  addiu       $v1, $v0, 0x800
    ctx->pc = 0x23c624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
label_23c628:
    // 0x23c628: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x23c628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
label_23c62c:
    // 0x23c62c: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x23c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_23c630:
    // 0x23c630: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x23c630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_23c634:
    // 0x23c634: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x23c634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_23c638:
    // 0x23c638: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x23c638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_23c63c:
    // 0x23c63c: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x23c63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_23c640:
    // 0x23c640: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x23c640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_23c644:
    // 0x23c644: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x23c644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_23c648:
    // 0x23c648: 0xa2200016  sb          $zero, 0x16($s1)
    ctx->pc = 0x23c648u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 0));
label_23c64c:
    // 0x23c64c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x23c64cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_23c650:
    // 0x23c650: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x23c650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_23c654:
    // 0x23c654: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x23c654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_23c658:
    // 0x23c658: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x23c658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_23c65c:
    // 0x23c65c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x23c65cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_23c660:
    // 0x23c660: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x23c660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_23c664:
    // 0x23c664: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x23c664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23c668:
    // 0x23c668: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x23c668u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23c66c:
    // 0x23c66c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x23c66cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23c670:
    // 0x23c670: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x23c670u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23c674:
    // 0x23c674: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x23c674u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23c678:
    // 0x23c678: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x23c678u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23c67c:
    // 0x23c67c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c680:
    // 0x23c680: 0x3e00008  jr          $ra
label_23c684:
    if (ctx->pc == 0x23C684u) {
        ctx->pc = 0x23C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C680u;
        // 0x23c684: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C688u;
        goto label_fallthrough_0x23c680;
    }
    ctx->pc = 0x23C680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C680u;
        // 0x23c684: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23c680:
    ctx->pc = 0x23C688u;
}
