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

// Function: sub_0027D2B8
// Address: 0x27d2b8 - 0x27d6b0
void sub_0027D2B8_0x27d2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D2B8_0x27d2b8");
#endif

    switch (ctx->pc) {
        case 0x27d2b8u: goto label_27d2b8;
        case 0x27d2bcu: goto label_27d2bc;
        case 0x27d2c0u: goto label_27d2c0;
        case 0x27d2c4u: goto label_27d2c4;
        case 0x27d2c8u: goto label_27d2c8;
        case 0x27d2ccu: goto label_27d2cc;
        case 0x27d2d0u: goto label_27d2d0;
        case 0x27d2d4u: goto label_27d2d4;
        case 0x27d2d8u: goto label_27d2d8;
        case 0x27d2dcu: goto label_27d2dc;
        case 0x27d2e0u: goto label_27d2e0;
        case 0x27d2e4u: goto label_27d2e4;
        case 0x27d2e8u: goto label_27d2e8;
        case 0x27d2ecu: goto label_27d2ec;
        case 0x27d2f0u: goto label_27d2f0;
        case 0x27d2f4u: goto label_27d2f4;
        case 0x27d2f8u: goto label_27d2f8;
        case 0x27d2fcu: goto label_27d2fc;
        case 0x27d300u: goto label_27d300;
        case 0x27d304u: goto label_27d304;
        case 0x27d308u: goto label_27d308;
        case 0x27d30cu: goto label_27d30c;
        case 0x27d310u: goto label_27d310;
        case 0x27d314u: goto label_27d314;
        case 0x27d318u: goto label_27d318;
        case 0x27d31cu: goto label_27d31c;
        case 0x27d320u: goto label_27d320;
        case 0x27d324u: goto label_27d324;
        case 0x27d328u: goto label_27d328;
        case 0x27d32cu: goto label_27d32c;
        case 0x27d330u: goto label_27d330;
        case 0x27d334u: goto label_27d334;
        case 0x27d338u: goto label_27d338;
        case 0x27d33cu: goto label_27d33c;
        case 0x27d340u: goto label_27d340;
        case 0x27d344u: goto label_27d344;
        case 0x27d348u: goto label_27d348;
        case 0x27d34cu: goto label_27d34c;
        case 0x27d350u: goto label_27d350;
        case 0x27d354u: goto label_27d354;
        case 0x27d358u: goto label_27d358;
        case 0x27d35cu: goto label_27d35c;
        case 0x27d360u: goto label_27d360;
        case 0x27d364u: goto label_27d364;
        case 0x27d368u: goto label_27d368;
        case 0x27d36cu: goto label_27d36c;
        case 0x27d370u: goto label_27d370;
        case 0x27d374u: goto label_27d374;
        case 0x27d378u: goto label_27d378;
        case 0x27d37cu: goto label_27d37c;
        case 0x27d380u: goto label_27d380;
        case 0x27d384u: goto label_27d384;
        case 0x27d388u: goto label_27d388;
        case 0x27d38cu: goto label_27d38c;
        case 0x27d390u: goto label_27d390;
        case 0x27d394u: goto label_27d394;
        case 0x27d398u: goto label_27d398;
        case 0x27d39cu: goto label_27d39c;
        case 0x27d3a0u: goto label_27d3a0;
        case 0x27d3a4u: goto label_27d3a4;
        case 0x27d3a8u: goto label_27d3a8;
        case 0x27d3acu: goto label_27d3ac;
        case 0x27d3b0u: goto label_27d3b0;
        case 0x27d3b4u: goto label_27d3b4;
        case 0x27d3b8u: goto label_27d3b8;
        case 0x27d3bcu: goto label_27d3bc;
        case 0x27d3c0u: goto label_27d3c0;
        case 0x27d3c4u: goto label_27d3c4;
        case 0x27d3c8u: goto label_27d3c8;
        case 0x27d3ccu: goto label_27d3cc;
        case 0x27d3d0u: goto label_27d3d0;
        case 0x27d3d4u: goto label_27d3d4;
        case 0x27d3d8u: goto label_27d3d8;
        case 0x27d3dcu: goto label_27d3dc;
        case 0x27d3e0u: goto label_27d3e0;
        case 0x27d3e4u: goto label_27d3e4;
        case 0x27d3e8u: goto label_27d3e8;
        case 0x27d3ecu: goto label_27d3ec;
        case 0x27d3f0u: goto label_27d3f0;
        case 0x27d3f4u: goto label_27d3f4;
        case 0x27d3f8u: goto label_27d3f8;
        case 0x27d3fcu: goto label_27d3fc;
        case 0x27d400u: goto label_27d400;
        case 0x27d404u: goto label_27d404;
        case 0x27d408u: goto label_27d408;
        case 0x27d40cu: goto label_27d40c;
        case 0x27d410u: goto label_27d410;
        case 0x27d414u: goto label_27d414;
        case 0x27d418u: goto label_27d418;
        case 0x27d41cu: goto label_27d41c;
        case 0x27d420u: goto label_27d420;
        case 0x27d424u: goto label_27d424;
        case 0x27d428u: goto label_27d428;
        case 0x27d42cu: goto label_27d42c;
        case 0x27d430u: goto label_27d430;
        case 0x27d434u: goto label_27d434;
        case 0x27d438u: goto label_27d438;
        case 0x27d43cu: goto label_27d43c;
        case 0x27d440u: goto label_27d440;
        case 0x27d444u: goto label_27d444;
        case 0x27d448u: goto label_27d448;
        case 0x27d44cu: goto label_27d44c;
        case 0x27d450u: goto label_27d450;
        case 0x27d454u: goto label_27d454;
        case 0x27d458u: goto label_27d458;
        case 0x27d45cu: goto label_27d45c;
        case 0x27d460u: goto label_27d460;
        case 0x27d464u: goto label_27d464;
        case 0x27d468u: goto label_27d468;
        case 0x27d46cu: goto label_27d46c;
        case 0x27d470u: goto label_27d470;
        case 0x27d474u: goto label_27d474;
        case 0x27d478u: goto label_27d478;
        case 0x27d47cu: goto label_27d47c;
        case 0x27d480u: goto label_27d480;
        case 0x27d484u: goto label_27d484;
        case 0x27d488u: goto label_27d488;
        case 0x27d48cu: goto label_27d48c;
        case 0x27d490u: goto label_27d490;
        case 0x27d494u: goto label_27d494;
        case 0x27d498u: goto label_27d498;
        case 0x27d49cu: goto label_27d49c;
        case 0x27d4a0u: goto label_27d4a0;
        case 0x27d4a4u: goto label_27d4a4;
        case 0x27d4a8u: goto label_27d4a8;
        case 0x27d4acu: goto label_27d4ac;
        case 0x27d4b0u: goto label_27d4b0;
        case 0x27d4b4u: goto label_27d4b4;
        case 0x27d4b8u: goto label_27d4b8;
        case 0x27d4bcu: goto label_27d4bc;
        case 0x27d4c0u: goto label_27d4c0;
        case 0x27d4c4u: goto label_27d4c4;
        case 0x27d4c8u: goto label_27d4c8;
        case 0x27d4ccu: goto label_27d4cc;
        case 0x27d4d0u: goto label_27d4d0;
        case 0x27d4d4u: goto label_27d4d4;
        case 0x27d4d8u: goto label_27d4d8;
        case 0x27d4dcu: goto label_27d4dc;
        case 0x27d4e0u: goto label_27d4e0;
        case 0x27d4e4u: goto label_27d4e4;
        case 0x27d4e8u: goto label_27d4e8;
        case 0x27d4ecu: goto label_27d4ec;
        case 0x27d4f0u: goto label_27d4f0;
        case 0x27d4f4u: goto label_27d4f4;
        case 0x27d4f8u: goto label_27d4f8;
        case 0x27d4fcu: goto label_27d4fc;
        case 0x27d500u: goto label_27d500;
        case 0x27d504u: goto label_27d504;
        case 0x27d508u: goto label_27d508;
        case 0x27d50cu: goto label_27d50c;
        case 0x27d510u: goto label_27d510;
        case 0x27d514u: goto label_27d514;
        case 0x27d518u: goto label_27d518;
        case 0x27d51cu: goto label_27d51c;
        case 0x27d520u: goto label_27d520;
        case 0x27d524u: goto label_27d524;
        case 0x27d528u: goto label_27d528;
        case 0x27d52cu: goto label_27d52c;
        case 0x27d530u: goto label_27d530;
        case 0x27d534u: goto label_27d534;
        case 0x27d538u: goto label_27d538;
        case 0x27d53cu: goto label_27d53c;
        case 0x27d540u: goto label_27d540;
        case 0x27d544u: goto label_27d544;
        case 0x27d548u: goto label_27d548;
        case 0x27d54cu: goto label_27d54c;
        case 0x27d550u: goto label_27d550;
        case 0x27d554u: goto label_27d554;
        case 0x27d558u: goto label_27d558;
        case 0x27d55cu: goto label_27d55c;
        case 0x27d560u: goto label_27d560;
        case 0x27d564u: goto label_27d564;
        case 0x27d568u: goto label_27d568;
        case 0x27d56cu: goto label_27d56c;
        case 0x27d570u: goto label_27d570;
        case 0x27d574u: goto label_27d574;
        case 0x27d578u: goto label_27d578;
        case 0x27d57cu: goto label_27d57c;
        case 0x27d580u: goto label_27d580;
        case 0x27d584u: goto label_27d584;
        case 0x27d588u: goto label_27d588;
        case 0x27d58cu: goto label_27d58c;
        case 0x27d590u: goto label_27d590;
        case 0x27d594u: goto label_27d594;
        case 0x27d598u: goto label_27d598;
        case 0x27d59cu: goto label_27d59c;
        case 0x27d5a0u: goto label_27d5a0;
        case 0x27d5a4u: goto label_27d5a4;
        case 0x27d5a8u: goto label_27d5a8;
        case 0x27d5acu: goto label_27d5ac;
        case 0x27d5b0u: goto label_27d5b0;
        case 0x27d5b4u: goto label_27d5b4;
        case 0x27d5b8u: goto label_27d5b8;
        case 0x27d5bcu: goto label_27d5bc;
        case 0x27d5c0u: goto label_27d5c0;
        case 0x27d5c4u: goto label_27d5c4;
        case 0x27d5c8u: goto label_27d5c8;
        case 0x27d5ccu: goto label_27d5cc;
        case 0x27d5d0u: goto label_27d5d0;
        case 0x27d5d4u: goto label_27d5d4;
        case 0x27d5d8u: goto label_27d5d8;
        case 0x27d5dcu: goto label_27d5dc;
        case 0x27d5e0u: goto label_27d5e0;
        case 0x27d5e4u: goto label_27d5e4;
        case 0x27d5e8u: goto label_27d5e8;
        case 0x27d5ecu: goto label_27d5ec;
        case 0x27d5f0u: goto label_27d5f0;
        case 0x27d5f4u: goto label_27d5f4;
        case 0x27d5f8u: goto label_27d5f8;
        case 0x27d5fcu: goto label_27d5fc;
        case 0x27d600u: goto label_27d600;
        case 0x27d604u: goto label_27d604;
        case 0x27d608u: goto label_27d608;
        case 0x27d60cu: goto label_27d60c;
        case 0x27d610u: goto label_27d610;
        case 0x27d614u: goto label_27d614;
        case 0x27d618u: goto label_27d618;
        case 0x27d61cu: goto label_27d61c;
        case 0x27d620u: goto label_27d620;
        case 0x27d624u: goto label_27d624;
        case 0x27d628u: goto label_27d628;
        case 0x27d62cu: goto label_27d62c;
        case 0x27d630u: goto label_27d630;
        case 0x27d634u: goto label_27d634;
        case 0x27d638u: goto label_27d638;
        case 0x27d63cu: goto label_27d63c;
        case 0x27d640u: goto label_27d640;
        case 0x27d644u: goto label_27d644;
        case 0x27d648u: goto label_27d648;
        case 0x27d64cu: goto label_27d64c;
        case 0x27d650u: goto label_27d650;
        case 0x27d654u: goto label_27d654;
        case 0x27d658u: goto label_27d658;
        case 0x27d65cu: goto label_27d65c;
        case 0x27d660u: goto label_27d660;
        case 0x27d664u: goto label_27d664;
        case 0x27d668u: goto label_27d668;
        case 0x27d66cu: goto label_27d66c;
        case 0x27d670u: goto label_27d670;
        case 0x27d674u: goto label_27d674;
        case 0x27d678u: goto label_27d678;
        case 0x27d67cu: goto label_27d67c;
        case 0x27d680u: goto label_27d680;
        case 0x27d684u: goto label_27d684;
        case 0x27d688u: goto label_27d688;
        case 0x27d68cu: goto label_27d68c;
        case 0x27d690u: goto label_27d690;
        case 0x27d694u: goto label_27d694;
        case 0x27d698u: goto label_27d698;
        case 0x27d69cu: goto label_27d69c;
        case 0x27d6a0u: goto label_27d6a0;
        case 0x27d6a4u: goto label_27d6a4;
        case 0x27d6a8u: goto label_27d6a8;
        case 0x27d6acu: goto label_27d6ac;
        default: break;
    }

    ctx->pc = 0x27d2b8u;

label_27d2b8:
    // 0x27d2b8: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x27d2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_27d2bc:
    // 0x27d2bc: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x27d2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
label_27d2c0:
    // 0x27d2c0: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x27d2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_27d2c4:
    // 0x27d2c4: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x27d2c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_27d2c8:
    // 0x27d2c8: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x27d2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_27d2cc:
    // 0x27d2cc: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x27d2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_27d2d0:
    // 0x27d2d0: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x27d2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_27d2d4:
    // 0x27d2d4: 0x30d1ffff  andi        $s1, $a2, 0xFFFF
    ctx->pc = 0x27d2d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_27d2d8:
    // 0x27d2d8: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x27d2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_27d2dc:
    // 0x27d2dc: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x27d2dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_27d2e0:
    // 0x27d2e0: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x27d2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
label_27d2e4:
    // 0x27d2e4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x27d2e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_27d2e8:
    // 0x27d2e8: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x27d2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
label_27d2ec:
    // 0x27d2ec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x27d2ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27d2f0:
    // 0x27d2f0: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x27d2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
label_27d2f4:
    // 0x27d2f4: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x27d2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
label_27d2f8:
    // 0x27d2f8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x27d2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_27d2fc:
    // 0x27d2fc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_27d300:
    if (ctx->pc == 0x27D300u) {
        ctx->pc = 0x27D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D2FCu;
        // 0x27d300: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D304u;
        goto label_27d304;
    }
    ctx->pc = 0x27D2FCu;
    {
        const bool branch_taken_0x27d2fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D2FCu;
        // 0x27d300: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d2fc) {
            ctx->pc = 0x27D30Cu;
            goto label_27d30c;
        }
    }
    ctx->pc = 0x27D304u;
label_27d304:
    // 0x27d304: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x27d304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_27d308:
    // 0x27d308: 0x24500037  addiu       $s0, $v0, 0x37
    ctx->pc = 0x27d308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 55));
label_27d30c:
    // 0x27d30c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x27d30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27d310:
    // 0x27d310: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x27d310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_27d314:
    // 0x27d314: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x27d314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_27d318:
    // 0x27d318: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x27d318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27d31c:
    // 0x27d31c: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x27d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_27d320:
    // 0x27d320: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x27d320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_27d324:
    // 0x27d324: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x27d324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_27d328:
    // 0x27d328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27d32c:
    // 0x27d32c: 0x40f809  jalr        $v0
label_27d330:
    if (ctx->pc == 0x27D330u) {
        ctx->pc = 0x27D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D32Cu;
        // 0x27d330: 0x34a5002c  ori         $a1, $a1, 0x2C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D334u;
        goto label_27d334;
    }
    ctx->pc = 0x27D32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27D334u);
        ctx->pc = 0x27D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D32Cu;
        // 0x27d330: 0x34a5002c  ori         $a1, $a1, 0x2C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D32Cu, 0x27D334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27D334u;
label_27d334:
    // 0x27d334: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27d334u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d338:
    // 0x27d338: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_27d33c:
    if (ctx->pc == 0x27D33Cu) {
        ctx->pc = 0x27D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D338u;
        // 0x27d33c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D340u;
        goto label_27d340;
    }
    ctx->pc = 0x27D338u;
    {
        const bool branch_taken_0x27d338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D338u;
        // 0x27d33c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d338) {
            ctx->pc = 0x27D370u;
            goto label_27d370;
        }
    }
    ctx->pc = 0x27D340u;
label_27d340:
    // 0x27d340: 0x2402011d  addiu       $v0, $zero, 0x11D
    ctx->pc = 0x27d340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
label_27d344:
    // 0x27d344: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x27d344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_27d348:
    // 0x27d348: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x27d348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_27d34c:
    // 0x27d34c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27d34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27d350:
    // 0x27d350: 0xc092848  jal         func_24A120
label_27d354:
    if (ctx->pc == 0x27D354u) {
        ctx->pc = 0x27D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D350u;
        // 0x27d354: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D358u;
        goto label_27d358;
    }
    ctx->pc = 0x27D350u;
    SET_GPR_U32(ctx, 31, 0x27D358u);
    ctx->pc = 0x27D354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D350u;
    // 0x27d354: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x27D350u, 0x27D358u)) {
        return;
    }
    ctx->pc = 0x27D358u;
label_27d358:
    // 0x27d358: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27d358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27d35c:
    // 0x27d35c: 0xc09281a  jal         func_24A068
label_27d360:
    if (ctx->pc == 0x27D360u) {
        ctx->pc = 0x27D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D35Cu;
        // 0x27d360: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D364u;
        goto label_27d364;
    }
    ctx->pc = 0x27D35Cu;
    SET_GPR_U32(ctx, 31, 0x27D364u);
    ctx->pc = 0x27D360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D35Cu;
    // 0x27d360: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x27D35Cu, 0x27D364u)) {
        return;
    }
    ctx->pc = 0x27D364u;
label_27d364:
    // 0x27d364: 0x10000023  b           . + 4 + (0x23 << 2)
label_27d368:
    if (ctx->pc == 0x27D368u) {
        ctx->pc = 0x27D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D364u;
        // 0x27d368: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D36Cu;
        goto label_27d36c;
    }
    ctx->pc = 0x27D364u;
    {
        const bool branch_taken_0x27d364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D364u;
        // 0x27d368: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d364) {
            ctx->pc = 0x27D3F4u;
            goto label_27d3f4;
        }
    }
    ctx->pc = 0x27D36Cu;
label_27d36c:
    // 0x27d36c: 0x0  nop
    ctx->pc = 0x27d36cu;
    // NOP
label_27d370:
    // 0x27d370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d374:
    // 0x27d374: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x27d374u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_27d378:
    // 0x27d378: 0xa4b2001c  sh          $s2, 0x1C($a1)
    ctx->pc = 0x27d378u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 28), (uint16_t)GPR_U32(ctx, 18));
label_27d37c:
    // 0x27d37c: 0xa4b1001e  sh          $s1, 0x1E($a1)
    ctx->pc = 0x27d37cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 30), (uint16_t)GPR_U32(ctx, 17));
label_27d380:
    // 0x27d380: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x27d380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_27d384:
    // 0x27d384: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x27d384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_27d388:
    // 0x27d388: 0x6a64000f  ldl         $a0, 0xF($s3)
    ctx->pc = 0x27d388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_27d38c:
    // 0x27d38c: 0x6e640008  ldr         $a0, 0x8($s3)
    ctx->pc = 0x27d38cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_27d390:
    // 0x27d390: 0x6a660017  ldl         $a2, 0x17($s3)
    ctx->pc = 0x27d390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_27d394:
    // 0x27d394: 0x6e660010  ldr         $a2, 0x10($s3)
    ctx->pc = 0x27d394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_27d398:
    // 0x27d398: 0xb0a2000b  sdl         $v0, 0xB($a1)
    ctx->pc = 0x27d398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d39c:
    // 0x27d39c: 0xb4a20004  sdr         $v0, 0x4($a1)
    ctx->pc = 0x27d39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d3a0:
    // 0x27d3a0: 0xb0a40013  sdl         $a0, 0x13($a1)
    ctx->pc = 0x27d3a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d3a4:
    // 0x27d3a4: 0xb4a4000c  sdr         $a0, 0xC($a1)
    ctx->pc = 0x27d3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d3a8:
    // 0x27d3a8: 0xb0a6001b  sdl         $a2, 0x1B($a1)
    ctx->pc = 0x27d3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d3ac:
    // 0x27d3ac: 0xb4a60014  sdr         $a2, 0x14($a1)
    ctx->pc = 0x27d3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d3b0:
    // 0x27d3b0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_27d3b4:
    if (ctx->pc == 0x27D3B4u) {
        ctx->pc = 0x27D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3B0u;
        // 0x27d3b4: 0x24a30028  addiu       $v1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D3B8u;
        goto label_27d3b8;
    }
    ctx->pc = 0x27D3B0u;
    {
        const bool branch_taken_0x27d3b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3B0u;
        // 0x27d3b4: 0x24a30028  addiu       $v1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3b0) {
            ctx->pc = 0x27D3D8u;
            goto label_27d3d8;
        }
    }
    ctx->pc = 0x27D3B8u;
label_27d3b8:
    // 0x27d3b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_27d3bc:
    // 0x27d3bc: 0x24a30037  addiu       $v1, $a1, 0x37
    ctx->pc = 0x27d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 55));
label_27d3c0:
    // 0x27d3c0: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x27d3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_27d3c4:
    // 0x27d3c4: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x27d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_27d3c8:
    // 0x27d3c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27d3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27d3cc:
    // 0x27d3cc: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x27d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
label_27d3d0:
    // 0x27d3d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_27d3d4:
    if (ctx->pc == 0x27D3D4u) {
        ctx->pc = 0x27D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3D0u;
        // 0x27d3d4: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D3D8u;
        goto label_27d3d8;
    }
    ctx->pc = 0x27D3D0u;
    {
        const bool branch_taken_0x27d3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3D0u;
        // 0x27d3d4: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3d0) {
            ctx->pc = 0x27D3DCu;
            goto label_27d3dc;
        }
    }
    ctx->pc = 0x27D3D8u;
label_27d3d8:
    // 0x27d3d8: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x27d3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_27d3dc:
    // 0x27d3dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_27d3e0:
    // 0x27d3e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27d3e4:
    // 0x27d3e4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x27d3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_27d3e8:
    // 0x27d3e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27d3e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27d3ec:
    // 0x27d3ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27d3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27d3f0:
    // 0x27d3f0: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x27d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
label_27d3f4:
    // 0x27d3f4: 0x126000a1  beqz        $s3, . + 4 + (0xA1 << 2)
label_27d3f8:
    if (ctx->pc == 0x27D3F8u) {
        ctx->pc = 0x27D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3F4u;
        // 0x27d3f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D3FCu;
        goto label_27d3fc;
    }
    ctx->pc = 0x27D3F4u;
    {
        const bool branch_taken_0x27d3f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3F4u;
        // 0x27d3f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3f4) {
            ctx->pc = 0x27D67Cu;
            goto label_27d67c;
        }
    }
    ctx->pc = 0x27D3FCu;
label_27d3fc:
    // 0x27d3fc: 0x9662001e  lhu         $v0, 0x1E($s3)
    ctx->pc = 0x27d3fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
label_27d400:
    // 0x27d400: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
label_27d404:
    if (ctx->pc == 0x27D404u) {
        ctx->pc = 0x27D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D400u;
        // 0x27d404: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D408u;
        goto label_27d408;
    }
    ctx->pc = 0x27D400u;
    {
        const bool branch_taken_0x27d400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D400u;
        // 0x27d404: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d400) {
            ctx->pc = 0x27D5C4u;
            goto label_27d5c4;
        }
    }
    ctx->pc = 0x27D408u;
label_27d408:
    // 0x27d408: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_27d40c:
    if (ctx->pc == 0x27D40Cu) {
        ctx->pc = 0x27D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D408u;
        // 0x27d40c: 0x8e650020  lw          $a1, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D410u;
        goto label_27d410;
    }
    ctx->pc = 0x27D408u;
    {
        const bool branch_taken_0x27d408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D408u;
        // 0x27d40c: 0x8e650020  lw          $a1, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d408) {
            ctx->pc = 0x27D4E8u;
            goto label_27d4e8;
        }
    }
    ctx->pc = 0x27D410u;
label_27d410:
    // 0x27d410: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27d410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27d414:
    // 0x27d414: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x27d414u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27d418:
    // 0x27d418: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x27d418u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27d41c:
    // 0x27d41c: 0x24b2000c  addiu       $s2, $a1, 0xC
    ctx->pc = 0x27d41cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_27d420:
    // 0x27d420: 0x24b10004  addiu       $s1, $a1, 0x4
    ctx->pc = 0x27d420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_27d424:
    // 0x27d424: 0x0  nop
    ctx->pc = 0x27d424u;
    // NOP
label_27d428:
    // 0x27d428: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27d428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27d42c:
    // 0x27d42c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x27d42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27d430:
    // 0x27d430: 0xc0927be  jal         func_249EF8
label_27d434:
    if (ctx->pc == 0x27D434u) {
        ctx->pc = 0x27D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D430u;
        // 0x27d434: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D438u;
        goto label_27d438;
    }
    ctx->pc = 0x27D430u;
    SET_GPR_U32(ctx, 31, 0x27D438u);
    ctx->pc = 0x27D434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D430u;
    // 0x27d434: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27D430u, 0x27D438u)) {
        return;
    }
    ctx->pc = 0x27D438u;
label_27d438:
    // 0x27d438: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_27d43c:
    if (ctx->pc == 0x27D43Cu) {
        ctx->pc = 0x27D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D438u;
        // 0x27d43c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D440u;
        goto label_27d440;
    }
    ctx->pc = 0x27D438u;
    {
        const bool branch_taken_0x27d438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D438u;
        // 0x27d43c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d438) {
            ctx->pc = 0x27D47Cu;
            goto label_27d47c;
        }
    }
    ctx->pc = 0x27D440u;
label_27d440:
    // 0x27d440: 0x27a500c4  addiu       $a1, $sp, 0xC4
    ctx->pc = 0x27d440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_27d444:
    // 0x27d444: 0xc0927be  jal         func_249EF8
label_27d448:
    if (ctx->pc == 0x27D448u) {
        ctx->pc = 0x27D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D444u;
        // 0x27d448: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D44Cu;
        goto label_27d44c;
    }
    ctx->pc = 0x27D444u;
    SET_GPR_U32(ctx, 31, 0x27D44Cu);
    ctx->pc = 0x27D448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D444u;
    // 0x27d448: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27D444u, 0x27D44Cu)) {
        return;
    }
    ctx->pc = 0x27D44Cu;
label_27d44c:
    // 0x27d44c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_27d450:
    if (ctx->pc == 0x27D450u) {
        ctx->pc = 0x27D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D44Cu;
        // 0x27d450: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D454u;
        goto label_27d454;
    }
    ctx->pc = 0x27D44Cu;
    {
        const bool branch_taken_0x27d44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D44Cu;
        // 0x27d450: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d44c) {
            ctx->pc = 0x27D47Cu;
            goto label_27d47c;
        }
    }
    ctx->pc = 0x27D454u;
label_27d454:
    // 0x27d454: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27d454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27d458:
    // 0x27d458: 0xc0927aa  jal         func_249EA8
label_27d45c:
    if (ctx->pc == 0x27D45Cu) {
        ctx->pc = 0x27D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D458u;
        // 0x27d45c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D460u;
        goto label_27d460;
    }
    ctx->pc = 0x27D458u;
    SET_GPR_U32(ctx, 31, 0x27D460u);
    ctx->pc = 0x27D45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D458u;
    // 0x27d45c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x27D458u, 0x27D460u)) {
        return;
    }
    ctx->pc = 0x27D460u;
label_27d460:
    // 0x27d460: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27d464:
    if (ctx->pc == 0x27D464u) {
        ctx->pc = 0x27D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D460u;
        // 0x27d464: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D468u;
        goto label_27d468;
    }
    ctx->pc = 0x27D460u;
    {
        const bool branch_taken_0x27d460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D460u;
        // 0x27d464: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d460) {
            ctx->pc = 0x27D47Cu;
            goto label_27d47c;
        }
    }
    ctx->pc = 0x27D468u;
label_27d468:
    // 0x27d468: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27d468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27d46c:
    // 0x27d46c: 0xc0927aa  jal         func_249EA8
label_27d470:
    if (ctx->pc == 0x27D470u) {
        ctx->pc = 0x27D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D46Cu;
        // 0x27d470: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D474u;
        goto label_27d474;
    }
    ctx->pc = 0x27D46Cu;
    SET_GPR_U32(ctx, 31, 0x27D474u);
    ctx->pc = 0x27D470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D46Cu;
    // 0x27d470: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x27D46Cu, 0x27D474u)) {
        return;
    }
    ctx->pc = 0x27D474u;
label_27d474:
    // 0x27d474: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_27d478:
    if (ctx->pc == 0x27D478u) {
        ctx->pc = 0x27D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D474u;
        // 0x27d478: 0x97a200c2  lhu         $v0, 0xC2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 194)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D47Cu;
        goto label_27d47c;
    }
    ctx->pc = 0x27D474u;
    {
        const bool branch_taken_0x27d474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d474) {
            ctx->pc = 0x27D478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D474u;
            // 0x27d478: 0x97a200c2  lhu         $v0, 0xC2($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 194)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D490u;
            goto label_27d490;
        }
    }
    ctx->pc = 0x27D47Cu;
label_27d47c:
    // 0x27d47c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x27d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_27d480:
    // 0x27d480: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27d480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27d484:
    // 0x27d484: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x27d484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_27d488:
    // 0x27d488: 0x10000061  b           . + 4 + (0x61 << 2)
label_27d48c:
    if (ctx->pc == 0x27D48Cu) {
        ctx->pc = 0x27D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D488u;
        // 0x27d48c: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D490u;
        goto label_27d490;
    }
    ctx->pc = 0x27D488u;
    {
        const bool branch_taken_0x27d488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D488u;
        // 0x27d48c: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d488) {
            ctx->pc = 0x27D610u;
            goto label_27d610;
        }
    }
    ctx->pc = 0x27D490u;
label_27d490:
    // 0x27d490: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x27d490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_27d494:
    // 0x27d494: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x27d494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
label_27d498:
    // 0x27d498: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x27d498u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_27d49c:
    // 0x27d49c: 0x97a200c4  lhu         $v0, 0xC4($sp)
    ctx->pc = 0x27d49cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 196)));
label_27d4a0:
    // 0x27d4a0: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x27d4a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
label_27d4a4:
    // 0x27d4a4: 0x97a300c6  lhu         $v1, 0xC6($sp)
    ctx->pc = 0x27d4a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 198)));
label_27d4a8:
    // 0x27d4a8: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x27d4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
label_27d4ac:
    // 0x27d4ac: 0x93a200c1  lbu         $v0, 0xC1($sp)
    ctx->pc = 0x27d4acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 193)));
label_27d4b0:
    // 0x27d4b0: 0x54570002  bnel        $v0, $s7, . + 4 + (0x2 << 2)
label_27d4b4:
    if (ctx->pc == 0x27D4B4u) {
        ctx->pc = 0x27D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D4B0u;
        // 0x27d4b4: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D4B8u;
        goto label_27d4b8;
    }
    ctx->pc = 0x27D4B0u;
    {
        const bool branch_taken_0x27d4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x27d4b0) {
            ctx->pc = 0x27D4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D4B0u;
            // 0x27d4b4: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D4BCu;
            goto label_27d4bc;
        }
    }
    ctx->pc = 0x27D4B8u;
label_27d4b8:
    // 0x27d4b8: 0xa2160001  sb          $s6, 0x1($s0)
    ctx->pc = 0x27d4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 22));
label_27d4bc:
    // 0x27d4bc: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x27d4bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_27d4c0:
    // 0x27d4c0: 0x54570002  bnel        $v0, $s7, . + 4 + (0x2 << 2)
label_27d4c4:
    if (ctx->pc == 0x27D4C4u) {
        ctx->pc = 0x27D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D4C0u;
        // 0x27d4c4: 0xa2000009  sb          $zero, 0x9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D4C8u;
        goto label_27d4c8;
    }
    ctx->pc = 0x27D4C0u;
    {
        const bool branch_taken_0x27d4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x27d4c0) {
            ctx->pc = 0x27D4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D4C0u;
            // 0x27d4c4: 0xa2000009  sb          $zero, 0x9($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D4CCu;
            goto label_27d4cc;
        }
    }
    ctx->pc = 0x27D4C8u;
label_27d4c8:
    // 0x27d4c8: 0xa2160009  sb          $s6, 0x9($s0)
    ctx->pc = 0x27d4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 22));
label_27d4cc:
    // 0x27d4cc: 0x9662001e  lhu         $v0, 0x1E($s3)
    ctx->pc = 0x27d4ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
label_27d4d0:
    // 0x27d4d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x27d4d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_27d4d4:
    // 0x27d4d4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x27d4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_27d4d8:
    // 0x27d4d8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x27d4d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_27d4dc:
    // 0x27d4dc: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x27d4dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27d4e0:
    // 0x27d4e0: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_27d4e4:
    if (ctx->pc == 0x27D4E4u) {
        ctx->pc = 0x27D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D4E0u;
        // 0x27d4e4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D4E8u;
        goto label_27d4e8;
    }
    ctx->pc = 0x27D4E0u;
    {
        const bool branch_taken_0x27d4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D4E0u;
        // 0x27d4e4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4e0) {
            ctx->pc = 0x27D428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d428;
        }
    }
    ctx->pc = 0x27D4E8u;
label_27d4e8:
    // 0x27d4e8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x27d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27d4ec:
    // 0x27d4ec: 0xa7a00012  sh          $zero, 0x12($sp)
    ctx->pc = 0x27d4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 0));
label_27d4f0:
    // 0x27d4f0: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x27d4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
label_27d4f4:
    // 0x27d4f4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x27d4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_27d4f8:
    // 0x27d4f8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x27d4f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d4fc:
    // 0x27d4fc: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x27d4fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27d500:
    // 0x27d500: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x27d500u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d504:
    // 0x27d504: 0x2414011d  addiu       $s4, $zero, 0x11D
    ctx->pc = 0x27d504u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
label_27d508:
    // 0x27d508: 0x27b10024  addiu       $s1, $sp, 0x24
    ctx->pc = 0x27d508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_27d50c:
    // 0x27d50c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x27d50cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_27d510:
    // 0x27d510: 0x1056001d  beq         $v0, $s6, . + 4 + (0x1D << 2)
label_27d514:
    if (ctx->pc == 0x27D514u) {
        ctx->pc = 0x27D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D510u;
        // 0x27d514: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D518u;
        goto label_27d518;
    }
    ctx->pc = 0x27D510u;
    {
        const bool branch_taken_0x27d510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x27D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D510u;
        // 0x27d514: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d510) {
            ctx->pc = 0x27D588u;
            goto label_27d588;
        }
    }
    ctx->pc = 0x27D518u;
label_27d518:
    // 0x27d518: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x27d518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_27d51c:
    // 0x27d51c: 0xc0927be  jal         func_249EF8
label_27d520:
    if (ctx->pc == 0x27D520u) {
        ctx->pc = 0x27D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D51Cu;
        // 0x27d520: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D524u;
        goto label_27d524;
    }
    ctx->pc = 0x27D51Cu;
    SET_GPR_U32(ctx, 31, 0x27D524u);
    ctx->pc = 0x27D520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D51Cu;
    // 0x27d520: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27D51Cu, 0x27D524u)) {
        return;
    }
    ctx->pc = 0x27D524u;
label_27d524:
    // 0x27d524: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_27d528:
    if (ctx->pc == 0x27D528u) {
        ctx->pc = 0x27D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D524u;
        // 0x27d528: 0x97a300ca  lhu         $v1, 0xCA($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 202)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D52Cu;
        goto label_27d52c;
    }
    ctx->pc = 0x27D524u;
    {
        const bool branch_taken_0x27d524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D524u;
        // 0x27d528: 0x97a300ca  lhu         $v1, 0xCA($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 202)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d524) {
            ctx->pc = 0x27D5ECu;
            goto label_27d5ec;
        }
    }
    ctx->pc = 0x27D52Cu;
label_27d52c:
    // 0x27d52c: 0x2c6200f0  sltiu       $v0, $v1, 0xF0
    ctx->pc = 0x27d52cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
label_27d530:
    // 0x27d530: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_27d534:
    if (ctx->pc == 0x27D534u) {
        ctx->pc = 0x27D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D530u;
        // 0x27d534: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D538u;
        goto label_27d538;
    }
    ctx->pc = 0x27D530u;
    {
        const bool branch_taken_0x27d530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d530) {
            ctx->pc = 0x27D534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D530u;
            // 0x27d534: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D570u;
            goto label_27d570;
        }
    }
    ctx->pc = 0x27D538u;
label_27d538:
    // 0x27d538: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x27d538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
label_27d53c:
    // 0x27d53c: 0xafd70000  sw          $s7, 0x0($fp)
    ctx->pc = 0x27d53cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 23));
label_27d540:
    // 0x27d540: 0x24c60fc8  addiu       $a2, $a2, 0xFC8
    ctx->pc = 0x27d540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4040));
label_27d544:
    // 0x27d544: 0x8cc2010c  lw          $v0, 0x10C($a2)
    ctx->pc = 0x27d544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 268)));
label_27d548:
    // 0x27d548: 0x40f809  jalr        $v0
label_27d54c:
    if (ctx->pc == 0x27D54Cu) {
        ctx->pc = 0x27D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D548u;
        // 0x27d54c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D550u;
        goto label_27d550;
    }
    ctx->pc = 0x27D548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27D550u);
        ctx->pc = 0x27D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D548u;
        // 0x27d54c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D548u, 0x27D550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27D550u;
label_27d550:
    // 0x27d550: 0xafb400b0  sw          $s4, 0xB0($sp)
    ctx->pc = 0x27d550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 20));
label_27d554:
    // 0x27d554: 0xc092848  jal         func_24A120
label_27d558:
    if (ctx->pc == 0x27D558u) {
        ctx->pc = 0x27D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D554u;
        // 0x27d558: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D55Cu;
        goto label_27d55c;
    }
    ctx->pc = 0x27D554u;
    SET_GPR_U32(ctx, 31, 0x27D55Cu);
    ctx->pc = 0x27D558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D554u;
    // 0x27d558: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x27D554u, 0x27D55Cu)) {
        return;
    }
    ctx->pc = 0x27D55Cu;
label_27d55c:
    // 0x27d55c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x27d55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_27d560:
    // 0x27d560: 0xc09281a  jal         func_24A068
label_27d564:
    if (ctx->pc == 0x27D564u) {
        ctx->pc = 0x27D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D560u;
        // 0x27d564: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D568u;
        goto label_27d568;
    }
    ctx->pc = 0x27D560u;
    SET_GPR_U32(ctx, 31, 0x27D568u);
    ctx->pc = 0x27D564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D560u;
    // 0x27d564: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x27D560u, 0x27D568u)) {
        return;
    }
    ctx->pc = 0x27D568u;
label_27d568:
    // 0x27d568: 0x10000044  b           . + 4 + (0x44 << 2)
label_27d56c:
    if (ctx->pc == 0x27D56Cu) {
        ctx->pc = 0x27D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D568u;
        // 0x27d56c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D570u;
        goto label_27d570;
    }
    ctx->pc = 0x27D568u;
    {
        const bool branch_taken_0x27d568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D568u;
        // 0x27d56c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d568) {
            ctx->pc = 0x27D67Cu;
            goto label_27d67c;
        }
    }
    ctx->pc = 0x27D570u;
label_27d570:
    // 0x27d570: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x27d570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_27d574:
    // 0x27d574: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x27d574u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_27d578:
    // 0x27d578: 0x97a200c8  lhu         $v0, 0xC8($sp)
    ctx->pc = 0x27d578u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 200)));
label_27d57c:
    // 0x27d57c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x27d57cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_27d580:
    // 0x27d580: 0x1000000c  b           . + 4 + (0xC << 2)
label_27d584:
    if (ctx->pc == 0x27D584u) {
        ctx->pc = 0x27D584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D580u;
        // 0x27d584: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D588u;
        goto label_27d588;
    }
    ctx->pc = 0x27D580u;
    {
        const bool branch_taken_0x27d580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D580u;
        // 0x27d584: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d580) {
            ctx->pc = 0x27D5B4u;
            goto label_27d5b4;
        }
    }
    ctx->pc = 0x27D588u;
label_27d588:
    // 0x27d588: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x27d588u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_27d58c:
    // 0x27d58c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27d58cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_27d590:
    // 0x27d590: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x27d590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_27d594:
    // 0x27d594: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27d594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_27d598:
    // 0x27d598: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x27d598u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_27d59c:
    // 0x27d59c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27d5a0:
    // 0x27d5a0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x27d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_27d5a4:
    // 0x27d5a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27d5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_27d5a8:
    // 0x27d5a8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x27d5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_27d5ac:
    // 0x27d5ac: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x27d5acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_27d5b0:
    // 0x27d5b0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x27d5b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_27d5b4:
    // 0x27d5b4: 0x5640ffd6  bnel        $s2, $zero, . + 4 + (-0x2A << 2)
label_27d5b8:
    if (ctx->pc == 0x27D5B8u) {
        ctx->pc = 0x27D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5B4u;
        // 0x27d5b8: 0x92020001  lbu         $v0, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D5BCu;
        goto label_27d5bc;
    }
    ctx->pc = 0x27D5B4u;
    {
        const bool branch_taken_0x27d5b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d5b4) {
            ctx->pc = 0x27D5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D5B4u;
            // 0x27d5b8: 0x92020001  lbu         $v0, 0x1($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d510;
        }
    }
    ctx->pc = 0x27D5BCu;
label_27d5bc:
    // 0x27d5bc: 0x10000018  b           . + 4 + (0x18 << 2)
label_27d5c0:
    if (ctx->pc == 0x27D5C0u) {
        ctx->pc = 0x27D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5BCu;
        // 0x27d5c0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D5C4u;
        goto label_27d5c4;
    }
    ctx->pc = 0x27D5BCu;
    {
        const bool branch_taken_0x27d5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5BCu;
        // 0x27d5c0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d5bc) {
            ctx->pc = 0x27D620u;
            goto label_27d620;
        }
    }
    ctx->pc = 0x27D5C4u;
label_27d5c4:
    // 0x27d5c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27d5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27d5c8:
    // 0x27d5c8: 0xc093620  jal         func_24D880
label_27d5cc:
    if (ctx->pc == 0x27D5CCu) {
        ctx->pc = 0x27D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5C8u;
        // 0x27d5cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D5D0u;
        goto label_27d5d0;
    }
    ctx->pc = 0x27D5C8u;
    SET_GPR_U32(ctx, 31, 0x27D5D0u);
    ctx->pc = 0x27D5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D5C8u;
    // 0x27d5cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D880u, 0x27D5C8u, 0x27D5D0u)) {
        return;
    }
    ctx->pc = 0x27D5D0u;
label_27d5d0:
    // 0x27d5d0: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_27d5d4:
    if (ctx->pc == 0x27D5D4u) {
        ctx->pc = 0x27D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5D0u;
        // 0x27d5d4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D5D8u;
        goto label_27d5d8;
    }
    ctx->pc = 0x27D5D0u;
    {
        const bool branch_taken_0x27d5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d5d0) {
            ctx->pc = 0x27D5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D5D0u;
            // 0x27d5d4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D620u;
            goto label_27d620;
        }
    }
    ctx->pc = 0x27D5D8u;
label_27d5d8:
    // 0x27d5d8: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x27d5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
label_27d5dc:
    // 0x27d5dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27d5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27d5e0:
    // 0x27d5e0: 0x24e30fc8  addiu       $v1, $a3, 0xFC8
    ctx->pc = 0x27d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4040));
label_27d5e4:
    // 0x27d5e4: 0x1000000a  b           . + 4 + (0xA << 2)
label_27d5e8:
    if (ctx->pc == 0x27D5E8u) {
        ctx->pc = 0x27D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5E4u;
        // 0x27d5e8: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D5ECu;
        goto label_27d5ec;
    }
    ctx->pc = 0x27D5E4u;
    {
        const bool branch_taken_0x27d5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5E4u;
        // 0x27d5e8: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d5e4) {
            ctx->pc = 0x27D610u;
            goto label_27d610;
        }
    }
    ctx->pc = 0x27D5ECu;
label_27d5ec:
    // 0x27d5ec: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x27d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_27d5f0:
    // 0x27d5f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27d5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27d5f4:
    // 0x27d5f4: 0x24430fc8  addiu       $v1, $v0, 0xFC8
    ctx->pc = 0x27d5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_27d5f8:
    // 0x27d5f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_27d5fc:
    if (ctx->pc == 0x27D5FCu) {
        ctx->pc = 0x27D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5F8u;
        // 0x27d5fc: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D600u;
        goto label_27d600;
    }
    ctx->pc = 0x27D5F8u;
    {
        const bool branch_taken_0x27d5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5F8u;
        // 0x27d5fc: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d5f8) {
            ctx->pc = 0x27D610u;
            goto label_27d610;
        }
    }
    ctx->pc = 0x27D600u;
label_27d600:
    // 0x27d600: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x27d600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_27d604:
    // 0x27d604: 0x24830fc8  addiu       $v1, $a0, 0xFC8
    ctx->pc = 0x27d604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_27d608:
    // 0x27d608: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x27d608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_27d60c:
    // 0x27d60c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27d60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27d610:
    // 0x27d610: 0x40f809  jalr        $v0
label_27d614:
    if (ctx->pc == 0x27D614u) {
        ctx->pc = 0x27D618u;
        goto label_27d618;
    }
    ctx->pc = 0x27D610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27D618u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D610u, 0x27D618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27D618u;
label_27d618:
    // 0x27d618: 0x10000018  b           . + 4 + (0x18 << 2)
label_27d61c:
    if (ctx->pc == 0x27D61Cu) {
        ctx->pc = 0x27D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D618u;
        // 0x27d61c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D620u;
        goto label_27d620;
    }
    ctx->pc = 0x27D618u;
    {
        const bool branch_taken_0x27d618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D618u;
        // 0x27d61c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d618) {
            ctx->pc = 0x27D67Cu;
            goto label_27d67c;
        }
    }
    ctx->pc = 0x27D620u;
label_27d620:
    // 0x27d620: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27d620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_27d624:
    // 0x27d624: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_27d628:
    if (ctx->pc == 0x27D628u) {
        ctx->pc = 0x27D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D624u;
        // 0x27d628: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D62Cu;
        goto label_27d62c;
    }
    ctx->pc = 0x27D624u;
    {
        const bool branch_taken_0x27d624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D624u;
        // 0x27d628: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d624) {
            ctx->pc = 0x27D67Cu;
            goto label_27d67c;
        }
    }
    ctx->pc = 0x27D62Cu;
label_27d62c:
    // 0x27d62c: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x27d62cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
label_27d630:
    // 0x27d630: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_27d634:
    if (ctx->pc == 0x27D634u) {
        ctx->pc = 0x27D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D630u;
        // 0x27d634: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D638u;
        goto label_27d638;
    }
    ctx->pc = 0x27D630u;
    {
        const bool branch_taken_0x27d630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D630u;
        // 0x27d634: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d630) {
            ctx->pc = 0x27D678u;
            goto label_27d678;
        }
    }
    ctx->pc = 0x27D638u;
label_27d638:
    // 0x27d638: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27d638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d63c:
    // 0x27d63c: 0x0  nop
    ctx->pc = 0x27d63cu;
    // NOP
label_27d640:
    // 0x27d640: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27d640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27d644:
    // 0x27d644: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x27d644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_27d648:
    // 0x27d648: 0xc0927be  jal         func_249EF8
label_27d64c:
    if (ctx->pc == 0x27D64Cu) {
        ctx->pc = 0x27D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D648u;
        // 0x27d64c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D650u;
        goto label_27d650;
    }
    ctx->pc = 0x27D648u;
    SET_GPR_U32(ctx, 31, 0x27D650u);
    ctx->pc = 0x27D64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D648u;
    // 0x27d64c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27D648u, 0x27D650u)) {
        return;
    }
    ctx->pc = 0x27D650u;
label_27d650:
    // 0x27d650: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
label_27d654:
    if (ctx->pc == 0x27D654u) {
        ctx->pc = 0x27D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D650u;
        // 0x27d654: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D658u;
        goto label_27d658;
    }
    ctx->pc = 0x27D650u;
    {
        const bool branch_taken_0x27d650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D650u;
        // 0x27d654: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d650) {
            ctx->pc = 0x27D600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d600;
        }
    }
    ctx->pc = 0x27D658u;
label_27d658:
    // 0x27d658: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x27d658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_27d65c:
    // 0x27d65c: 0x97a300cc  lhu         $v1, 0xCC($sp)
    ctx->pc = 0x27d65cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 204)));
label_27d660:
    // 0x27d660: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27d660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_27d664:
    // 0x27d664: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x27d664u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_27d668:
    // 0x27d668: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x27d668u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
label_27d66c:
    // 0x27d66c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x27d66cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27d670:
    // 0x27d670: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_27d674:
    if (ctx->pc == 0x27D674u) {
        ctx->pc = 0x27D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D670u;
        // 0x27d674: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D678u;
        goto label_27d678;
    }
    ctx->pc = 0x27D670u;
    {
        const bool branch_taken_0x27d670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D670u;
        // 0x27d674: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d670) {
            ctx->pc = 0x27D640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d640;
        }
    }
    ctx->pc = 0x27D678u;
label_27d678:
    // 0x27d678: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x27d678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27d67c:
    // 0x27d67c: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x27d67cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_27d680:
    // 0x27d680: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x27d680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_27d684:
    // 0x27d684: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x27d684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_27d688:
    // 0x27d688: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x27d688u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_27d68c:
    // 0x27d68c: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x27d68cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_27d690:
    // 0x27d690: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x27d690u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_27d694:
    // 0x27d694: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x27d694u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_27d698:
    // 0x27d698: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x27d698u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_27d69c:
    // 0x27d69c: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x27d69cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_27d6a0:
    // 0x27d6a0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x27d6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_27d6a4:
    // 0x27d6a4: 0x3e00008  jr          $ra
label_27d6a8:
    if (ctx->pc == 0x27D6A8u) {
        ctx->pc = 0x27D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D6A4u;
        // 0x27d6a8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D6ACu;
        goto label_27d6ac;
    }
    ctx->pc = 0x27D6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D6A4u;
        // 0x27d6a8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D6ACu;
label_27d6ac:
    // 0x27d6ac: 0x0  nop
    ctx->pc = 0x27d6acu;
    // NOP
    ctx->pc = 0x27d6b0u;
}
