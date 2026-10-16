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

// Function: sub_0013E288
// Address: 0x13e288 - 0x13e750
void sub_0013E288_0x13e288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E288_0x13e288");
#endif

    switch (ctx->pc) {
        case 0x13e288u: goto label_13e288;
        case 0x13e28cu: goto label_13e28c;
        case 0x13e290u: goto label_13e290;
        case 0x13e294u: goto label_13e294;
        case 0x13e298u: goto label_13e298;
        case 0x13e29cu: goto label_13e29c;
        case 0x13e2a0u: goto label_13e2a0;
        case 0x13e2a4u: goto label_13e2a4;
        case 0x13e2a8u: goto label_13e2a8;
        case 0x13e2acu: goto label_13e2ac;
        case 0x13e2b0u: goto label_13e2b0;
        case 0x13e2b4u: goto label_13e2b4;
        case 0x13e2b8u: goto label_13e2b8;
        case 0x13e2bcu: goto label_13e2bc;
        case 0x13e2c0u: goto label_13e2c0;
        case 0x13e2c4u: goto label_13e2c4;
        case 0x13e2c8u: goto label_13e2c8;
        case 0x13e2ccu: goto label_13e2cc;
        case 0x13e2d0u: goto label_13e2d0;
        case 0x13e2d4u: goto label_13e2d4;
        case 0x13e2d8u: goto label_13e2d8;
        case 0x13e2dcu: goto label_13e2dc;
        case 0x13e2e0u: goto label_13e2e0;
        case 0x13e2e4u: goto label_13e2e4;
        case 0x13e2e8u: goto label_13e2e8;
        case 0x13e2ecu: goto label_13e2ec;
        case 0x13e2f0u: goto label_13e2f0;
        case 0x13e2f4u: goto label_13e2f4;
        case 0x13e2f8u: goto label_13e2f8;
        case 0x13e2fcu: goto label_13e2fc;
        case 0x13e300u: goto label_13e300;
        case 0x13e304u: goto label_13e304;
        case 0x13e308u: goto label_13e308;
        case 0x13e30cu: goto label_13e30c;
        case 0x13e310u: goto label_13e310;
        case 0x13e314u: goto label_13e314;
        case 0x13e318u: goto label_13e318;
        case 0x13e31cu: goto label_13e31c;
        case 0x13e320u: goto label_13e320;
        case 0x13e324u: goto label_13e324;
        case 0x13e328u: goto label_13e328;
        case 0x13e32cu: goto label_13e32c;
        case 0x13e330u: goto label_13e330;
        case 0x13e334u: goto label_13e334;
        case 0x13e338u: goto label_13e338;
        case 0x13e33cu: goto label_13e33c;
        case 0x13e340u: goto label_13e340;
        case 0x13e344u: goto label_13e344;
        case 0x13e348u: goto label_13e348;
        case 0x13e34cu: goto label_13e34c;
        case 0x13e350u: goto label_13e350;
        case 0x13e354u: goto label_13e354;
        case 0x13e358u: goto label_13e358;
        case 0x13e35cu: goto label_13e35c;
        case 0x13e360u: goto label_13e360;
        case 0x13e364u: goto label_13e364;
        case 0x13e368u: goto label_13e368;
        case 0x13e36cu: goto label_13e36c;
        case 0x13e370u: goto label_13e370;
        case 0x13e374u: goto label_13e374;
        case 0x13e378u: goto label_13e378;
        case 0x13e37cu: goto label_13e37c;
        case 0x13e380u: goto label_13e380;
        case 0x13e384u: goto label_13e384;
        case 0x13e388u: goto label_13e388;
        case 0x13e38cu: goto label_13e38c;
        case 0x13e390u: goto label_13e390;
        case 0x13e394u: goto label_13e394;
        case 0x13e398u: goto label_13e398;
        case 0x13e39cu: goto label_13e39c;
        case 0x13e3a0u: goto label_13e3a0;
        case 0x13e3a4u: goto label_13e3a4;
        case 0x13e3a8u: goto label_13e3a8;
        case 0x13e3acu: goto label_13e3ac;
        case 0x13e3b0u: goto label_13e3b0;
        case 0x13e3b4u: goto label_13e3b4;
        case 0x13e3b8u: goto label_13e3b8;
        case 0x13e3bcu: goto label_13e3bc;
        case 0x13e3c0u: goto label_13e3c0;
        case 0x13e3c4u: goto label_13e3c4;
        case 0x13e3c8u: goto label_13e3c8;
        case 0x13e3ccu: goto label_13e3cc;
        case 0x13e3d0u: goto label_13e3d0;
        case 0x13e3d4u: goto label_13e3d4;
        case 0x13e3d8u: goto label_13e3d8;
        case 0x13e3dcu: goto label_13e3dc;
        case 0x13e3e0u: goto label_13e3e0;
        case 0x13e3e4u: goto label_13e3e4;
        case 0x13e3e8u: goto label_13e3e8;
        case 0x13e3ecu: goto label_13e3ec;
        case 0x13e3f0u: goto label_13e3f0;
        case 0x13e3f4u: goto label_13e3f4;
        case 0x13e3f8u: goto label_13e3f8;
        case 0x13e3fcu: goto label_13e3fc;
        case 0x13e400u: goto label_13e400;
        case 0x13e404u: goto label_13e404;
        case 0x13e408u: goto label_13e408;
        case 0x13e40cu: goto label_13e40c;
        case 0x13e410u: goto label_13e410;
        case 0x13e414u: goto label_13e414;
        case 0x13e418u: goto label_13e418;
        case 0x13e41cu: goto label_13e41c;
        case 0x13e420u: goto label_13e420;
        case 0x13e424u: goto label_13e424;
        case 0x13e428u: goto label_13e428;
        case 0x13e42cu: goto label_13e42c;
        case 0x13e430u: goto label_13e430;
        case 0x13e434u: goto label_13e434;
        case 0x13e438u: goto label_13e438;
        case 0x13e43cu: goto label_13e43c;
        case 0x13e440u: goto label_13e440;
        case 0x13e444u: goto label_13e444;
        case 0x13e448u: goto label_13e448;
        case 0x13e44cu: goto label_13e44c;
        case 0x13e450u: goto label_13e450;
        case 0x13e454u: goto label_13e454;
        case 0x13e458u: goto label_13e458;
        case 0x13e45cu: goto label_13e45c;
        case 0x13e460u: goto label_13e460;
        case 0x13e464u: goto label_13e464;
        case 0x13e468u: goto label_13e468;
        case 0x13e46cu: goto label_13e46c;
        case 0x13e470u: goto label_13e470;
        case 0x13e474u: goto label_13e474;
        case 0x13e478u: goto label_13e478;
        case 0x13e47cu: goto label_13e47c;
        case 0x13e480u: goto label_13e480;
        case 0x13e484u: goto label_13e484;
        case 0x13e488u: goto label_13e488;
        case 0x13e48cu: goto label_13e48c;
        case 0x13e490u: goto label_13e490;
        case 0x13e494u: goto label_13e494;
        case 0x13e498u: goto label_13e498;
        case 0x13e49cu: goto label_13e49c;
        case 0x13e4a0u: goto label_13e4a0;
        case 0x13e4a4u: goto label_13e4a4;
        case 0x13e4a8u: goto label_13e4a8;
        case 0x13e4acu: goto label_13e4ac;
        case 0x13e4b0u: goto label_13e4b0;
        case 0x13e4b4u: goto label_13e4b4;
        case 0x13e4b8u: goto label_13e4b8;
        case 0x13e4bcu: goto label_13e4bc;
        case 0x13e4c0u: goto label_13e4c0;
        case 0x13e4c4u: goto label_13e4c4;
        case 0x13e4c8u: goto label_13e4c8;
        case 0x13e4ccu: goto label_13e4cc;
        case 0x13e4d0u: goto label_13e4d0;
        case 0x13e4d4u: goto label_13e4d4;
        case 0x13e4d8u: goto label_13e4d8;
        case 0x13e4dcu: goto label_13e4dc;
        case 0x13e4e0u: goto label_13e4e0;
        case 0x13e4e4u: goto label_13e4e4;
        case 0x13e4e8u: goto label_13e4e8;
        case 0x13e4ecu: goto label_13e4ec;
        case 0x13e4f0u: goto label_13e4f0;
        case 0x13e4f4u: goto label_13e4f4;
        case 0x13e4f8u: goto label_13e4f8;
        case 0x13e4fcu: goto label_13e4fc;
        case 0x13e500u: goto label_13e500;
        case 0x13e504u: goto label_13e504;
        case 0x13e508u: goto label_13e508;
        case 0x13e50cu: goto label_13e50c;
        case 0x13e510u: goto label_13e510;
        case 0x13e514u: goto label_13e514;
        case 0x13e518u: goto label_13e518;
        case 0x13e51cu: goto label_13e51c;
        case 0x13e520u: goto label_13e520;
        case 0x13e524u: goto label_13e524;
        case 0x13e528u: goto label_13e528;
        case 0x13e52cu: goto label_13e52c;
        case 0x13e530u: goto label_13e530;
        case 0x13e534u: goto label_13e534;
        case 0x13e538u: goto label_13e538;
        case 0x13e53cu: goto label_13e53c;
        case 0x13e540u: goto label_13e540;
        case 0x13e544u: goto label_13e544;
        case 0x13e548u: goto label_13e548;
        case 0x13e54cu: goto label_13e54c;
        case 0x13e550u: goto label_13e550;
        case 0x13e554u: goto label_13e554;
        case 0x13e558u: goto label_13e558;
        case 0x13e55cu: goto label_13e55c;
        case 0x13e560u: goto label_13e560;
        case 0x13e564u: goto label_13e564;
        case 0x13e568u: goto label_13e568;
        case 0x13e56cu: goto label_13e56c;
        case 0x13e570u: goto label_13e570;
        case 0x13e574u: goto label_13e574;
        case 0x13e578u: goto label_13e578;
        case 0x13e57cu: goto label_13e57c;
        case 0x13e580u: goto label_13e580;
        case 0x13e584u: goto label_13e584;
        case 0x13e588u: goto label_13e588;
        case 0x13e58cu: goto label_13e58c;
        case 0x13e590u: goto label_13e590;
        case 0x13e594u: goto label_13e594;
        case 0x13e598u: goto label_13e598;
        case 0x13e59cu: goto label_13e59c;
        case 0x13e5a0u: goto label_13e5a0;
        case 0x13e5a4u: goto label_13e5a4;
        case 0x13e5a8u: goto label_13e5a8;
        case 0x13e5acu: goto label_13e5ac;
        case 0x13e5b0u: goto label_13e5b0;
        case 0x13e5b4u: goto label_13e5b4;
        case 0x13e5b8u: goto label_13e5b8;
        case 0x13e5bcu: goto label_13e5bc;
        case 0x13e5c0u: goto label_13e5c0;
        case 0x13e5c4u: goto label_13e5c4;
        case 0x13e5c8u: goto label_13e5c8;
        case 0x13e5ccu: goto label_13e5cc;
        case 0x13e5d0u: goto label_13e5d0;
        case 0x13e5d4u: goto label_13e5d4;
        case 0x13e5d8u: goto label_13e5d8;
        case 0x13e5dcu: goto label_13e5dc;
        case 0x13e5e0u: goto label_13e5e0;
        case 0x13e5e4u: goto label_13e5e4;
        case 0x13e5e8u: goto label_13e5e8;
        case 0x13e5ecu: goto label_13e5ec;
        case 0x13e5f0u: goto label_13e5f0;
        case 0x13e5f4u: goto label_13e5f4;
        case 0x13e5f8u: goto label_13e5f8;
        case 0x13e5fcu: goto label_13e5fc;
        case 0x13e600u: goto label_13e600;
        case 0x13e604u: goto label_13e604;
        case 0x13e608u: goto label_13e608;
        case 0x13e60cu: goto label_13e60c;
        case 0x13e610u: goto label_13e610;
        case 0x13e614u: goto label_13e614;
        case 0x13e618u: goto label_13e618;
        case 0x13e61cu: goto label_13e61c;
        case 0x13e620u: goto label_13e620;
        case 0x13e624u: goto label_13e624;
        case 0x13e628u: goto label_13e628;
        case 0x13e62cu: goto label_13e62c;
        case 0x13e630u: goto label_13e630;
        case 0x13e634u: goto label_13e634;
        case 0x13e638u: goto label_13e638;
        case 0x13e63cu: goto label_13e63c;
        case 0x13e640u: goto label_13e640;
        case 0x13e644u: goto label_13e644;
        case 0x13e648u: goto label_13e648;
        case 0x13e64cu: goto label_13e64c;
        case 0x13e650u: goto label_13e650;
        case 0x13e654u: goto label_13e654;
        case 0x13e658u: goto label_13e658;
        case 0x13e65cu: goto label_13e65c;
        case 0x13e660u: goto label_13e660;
        case 0x13e664u: goto label_13e664;
        case 0x13e668u: goto label_13e668;
        case 0x13e66cu: goto label_13e66c;
        case 0x13e670u: goto label_13e670;
        case 0x13e674u: goto label_13e674;
        case 0x13e678u: goto label_13e678;
        case 0x13e67cu: goto label_13e67c;
        case 0x13e680u: goto label_13e680;
        case 0x13e684u: goto label_13e684;
        case 0x13e688u: goto label_13e688;
        case 0x13e68cu: goto label_13e68c;
        case 0x13e690u: goto label_13e690;
        case 0x13e694u: goto label_13e694;
        case 0x13e698u: goto label_13e698;
        case 0x13e69cu: goto label_13e69c;
        case 0x13e6a0u: goto label_13e6a0;
        case 0x13e6a4u: goto label_13e6a4;
        case 0x13e6a8u: goto label_13e6a8;
        case 0x13e6acu: goto label_13e6ac;
        case 0x13e6b0u: goto label_13e6b0;
        case 0x13e6b4u: goto label_13e6b4;
        case 0x13e6b8u: goto label_13e6b8;
        case 0x13e6bcu: goto label_13e6bc;
        case 0x13e6c0u: goto label_13e6c0;
        case 0x13e6c4u: goto label_13e6c4;
        case 0x13e6c8u: goto label_13e6c8;
        case 0x13e6ccu: goto label_13e6cc;
        case 0x13e6d0u: goto label_13e6d0;
        case 0x13e6d4u: goto label_13e6d4;
        case 0x13e6d8u: goto label_13e6d8;
        case 0x13e6dcu: goto label_13e6dc;
        case 0x13e6e0u: goto label_13e6e0;
        case 0x13e6e4u: goto label_13e6e4;
        case 0x13e6e8u: goto label_13e6e8;
        case 0x13e6ecu: goto label_13e6ec;
        case 0x13e6f0u: goto label_13e6f0;
        case 0x13e6f4u: goto label_13e6f4;
        case 0x13e6f8u: goto label_13e6f8;
        case 0x13e6fcu: goto label_13e6fc;
        case 0x13e700u: goto label_13e700;
        case 0x13e704u: goto label_13e704;
        case 0x13e708u: goto label_13e708;
        case 0x13e70cu: goto label_13e70c;
        case 0x13e710u: goto label_13e710;
        case 0x13e714u: goto label_13e714;
        case 0x13e718u: goto label_13e718;
        case 0x13e71cu: goto label_13e71c;
        case 0x13e720u: goto label_13e720;
        case 0x13e724u: goto label_13e724;
        case 0x13e728u: goto label_13e728;
        case 0x13e72cu: goto label_13e72c;
        case 0x13e730u: goto label_13e730;
        case 0x13e734u: goto label_13e734;
        case 0x13e738u: goto label_13e738;
        case 0x13e73cu: goto label_13e73c;
        case 0x13e740u: goto label_13e740;
        case 0x13e744u: goto label_13e744;
        case 0x13e748u: goto label_13e748;
        case 0x13e74cu: goto label_13e74c;
        default: break;
    }

    ctx->pc = 0x13e288u;

label_13e288:
    // 0x13e288: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x13e288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_13e28c:
    // 0x13e28c: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x13e28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_13e290:
    // 0x13e290: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x13e290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_13e294:
    // 0x13e294: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13e294u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13e298:
    // 0x13e298: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x13e298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_13e29c:
    // 0x13e29c: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x13e29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_13e2a0:
    // 0x13e2a0: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x13e2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_13e2a4:
    // 0x13e2a4: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x13e2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_13e2a8:
    // 0x13e2a8: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x13e2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_13e2ac:
    // 0x13e2ac: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x13e2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_13e2b0:
    // 0x13e2b0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x13e2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_13e2b4:
    // 0x13e2b4: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x13e2b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_13e2b8:
    // 0x13e2b8: 0x8ea201c4  lw          $v0, 0x1C4($s5)
    ctx->pc = 0x13e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 452)));
label_13e2bc:
    // 0x13e2bc: 0x54400119  bnel        $v0, $zero, . + 4 + (0x119 << 2)
label_13e2c0:
    if (ctx->pc == 0x13E2C0u) {
        ctx->pc = 0x13E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2BCu;
        // 0x13e2c0: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E2C4u;
        goto label_13e2c4;
    }
    ctx->pc = 0x13E2BCu;
    {
        const bool branch_taken_0x13e2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e2bc) {
            ctx->pc = 0x13E2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E2BCu;
            // 0x13e2c0: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E724u;
            goto label_13e724;
        }
    }
    ctx->pc = 0x13E2C4u;
label_13e2c4:
    // 0x13e2c4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x13e2c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13e2c8:
    // 0x13e2c8: 0xc04f0fe  jal         func_13C3F8
label_13e2cc:
    if (ctx->pc == 0x13E2CCu) {
        ctx->pc = 0x13E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2C8u;
        // 0x13e2cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E2D0u;
        goto label_13e2d0;
    }
    ctx->pc = 0x13E2C8u;
    SET_GPR_U32(ctx, 31, 0x13E2D0u);
    ctx->pc = 0x13E2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E2C8u;
    // 0x13e2cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3F8u, 0x13E2C8u, 0x13E2D0u)) {
        return;
    }
    ctx->pc = 0x13E2D0u;
label_13e2d0:
    // 0x13e2d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13e2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13e2d4:
    // 0x13e2d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13e2d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13e2d8:
    // 0x13e2d8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x13e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_13e2dc:
    // 0x13e2dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13e2dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e2e0:
    // 0x13e2e0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x13e2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_13e2e4:
    // 0x13e2e4: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x13e2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_13e2e8:
    // 0x13e2e8: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x13e2e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_13e2ec:
    // 0x13e2ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13e2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_13e2f0:
    // 0x13e2f0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x13e2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_13e2f4:
    // 0x13e2f4: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x13e2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
label_13e2f8:
    // 0x13e2f8: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x13e2f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_13e2fc:
    // 0x13e2fc: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x13e2fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_13e300:
    // 0x13e300: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x13e300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_13e304:
    // 0x13e304: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x13e304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_13e308:
    // 0x13e308: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x13e308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_13e30c:
    // 0x13e30c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x13e30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_13e310:
    // 0x13e310: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x13e310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_13e314:
    // 0x13e314: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x13e314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_13e318:
    // 0x13e318: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x13e318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_13e31c:
    // 0x13e31c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x13e31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_13e320:
    // 0x13e320: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x13e320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_13e324:
    // 0x13e324: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x13e324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_13e328:
    // 0x13e328: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x13e328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_13e32c:
    // 0x13e32c: 0xb3a20097  sdl         $v0, 0x97($sp)
    ctx->pc = 0x13e32cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e330:
    // 0x13e330: 0xb7a20090  sdr         $v0, 0x90($sp)
    ctx->pc = 0x13e330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e334:
    // 0x13e334: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x13e334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_13e338:
    // 0x13e338: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x13e338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_13e33c:
    // 0x13e33c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x13e33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13e340:
    // 0x13e340: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x13e340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_13e344:
    // 0x13e344: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x13e344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_13e348:
    // 0x13e348: 0x60f809  jalr        $v1
label_13e34c:
    if (ctx->pc == 0x13E34Cu) {
        ctx->pc = 0x13E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E348u;
        // 0x13e34c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E350u;
        goto label_13e350;
    }
    ctx->pc = 0x13E348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13E350u);
        ctx->pc = 0x13E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E348u;
        // 0x13e34c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E348u, 0x13E350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E350u;
label_13e350:
    // 0x13e350: 0x8ea400c4  lw          $a0, 0xC4($s5)
    ctx->pc = 0x13e350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
label_13e354:
    // 0x13e354: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13e354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13e358:
    // 0x13e358: 0xc07794c  jal         func_1DE530
label_13e35c:
    if (ctx->pc == 0x13E35Cu) {
        ctx->pc = 0x13E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E358u;
        // 0x13e35c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E360u;
        goto label_13e360;
    }
    ctx->pc = 0x13E358u;
    SET_GPR_U32(ctx, 31, 0x13E360u);
    ctx->pc = 0x13E35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E358u;
    // 0x13e35c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE530u, 0x13E358u, 0x13E360u)) {
        return;
    }
    ctx->pc = 0x13E360u;
label_13e360:
    // 0x13e360: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x13e360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13e364:
    // 0x13e364: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x13e364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e368:
    // 0x13e368: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x13e368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13e36c:
    // 0x13e36c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x13e36cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_13e370:
    // 0x13e370: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x13e370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_13e374:
    // 0x13e374: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x13e374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e378:
    // 0x13e378: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x13e378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e37c:
    // 0x13e37c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x13e37cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_13e380:
    // 0x13e380: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13e380u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13e384:
    // 0x13e384: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13e384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_13e388:
    // 0x13e388: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13e388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13e38c:
    // 0x13e38c: 0x0  nop
    ctx->pc = 0x13e38cu;
    // NOP
label_13e390:
    // 0x13e390: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x13e390u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_13e394:
    // 0x13e394: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x13e394u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_13e398:
    // 0x13e398: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x13e398u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_13e39c:
    // 0x13e39c: 0xe6a301a0  swc1        $f3, 0x1A0($s5)
    ctx->pc = 0x13e39cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 416), bits); }
label_13e3a0:
    // 0x13e3a0: 0xe6a201a4  swc1        $f2, 0x1A4($s5)
    ctx->pc = 0x13e3a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 420), bits); }
label_13e3a4:
    // 0x13e3a4: 0xe6a101a8  swc1        $f1, 0x1A8($s5)
    ctx->pc = 0x13e3a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 424), bits); }
label_13e3a8:
    // 0x13e3a8: 0x6aa601a7  ldl         $a2, 0x1A7($s5)
    ctx->pc = 0x13e3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_13e3ac:
    // 0x13e3ac: 0x6ea601a0  ldr         $a2, 0x1A0($s5)
    ctx->pc = 0x13e3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_13e3b0:
    // 0x13e3b0: 0x8ea201a8  lw          $v0, 0x1A8($s5)
    ctx->pc = 0x13e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 424)));
label_13e3b4:
    // 0x13e3b4: 0xb2a601b3  sdl         $a2, 0x1B3($s5)
    ctx->pc = 0x13e3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 435); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e3b8:
    // 0x13e3b8: 0xb6a601ac  sdr         $a2, 0x1AC($s5)
    ctx->pc = 0x13e3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 428); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e3bc:
    // 0x13e3bc: 0xaea201b4  sw          $v0, 0x1B4($s5)
    ctx->pc = 0x13e3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 436), GPR_U32(ctx, 2));
label_13e3c0:
    // 0x13e3c0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x13e3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_13e3c4:
    // 0x13e3c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13e3c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_13e3c8:
    // 0x13e3c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13e3c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e3cc:
    // 0x13e3cc: 0xc6a101b0  lwc1        $f1, 0x1B0($s5)
    ctx->pc = 0x13e3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e3d0:
    // 0x13e3d0: 0xc6a301a4  lwc1        $f3, 0x1A4($s5)
    ctx->pc = 0x13e3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13e3d4:
    // 0x13e3d4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x13e3d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_13e3d8:
    // 0x13e3d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13e3d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13e3dc:
    // 0x13e3dc: 0xe6a101b0  swc1        $f1, 0x1B0($s5)
    ctx->pc = 0x13e3dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 432), bits); }
label_13e3e0:
    // 0x13e3e0: 0xc6a201ac  lwc1        $f2, 0x1AC($s5)
    ctx->pc = 0x13e3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13e3e4:
    // 0x13e3e4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x13e3e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_13e3e8:
    // 0x13e3e8: 0xc6a401a0  lwc1        $f4, 0x1A0($s5)
    ctx->pc = 0x13e3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_13e3ec:
    // 0x13e3ec: 0xc6a001b4  lwc1        $f0, 0x1B4($s5)
    ctx->pc = 0x13e3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e3f0:
    // 0x13e3f0: 0xc6a301a8  lwc1        $f3, 0x1A8($s5)
    ctx->pc = 0x13e3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13e3f4:
    // 0x13e3f4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x13e3f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_13e3f8:
    // 0x13e3f8: 0xe6a101bc  swc1        $f1, 0x1BC($s5)
    ctx->pc = 0x13e3f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 444), bits); }
label_13e3fc:
    // 0x13e3fc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x13e3fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_13e400:
    // 0x13e400: 0xe6a201b8  swc1        $f2, 0x1B8($s5)
    ctx->pc = 0x13e400u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 440), bits); }
label_13e404:
    // 0x13e404: 0xe6a001c0  swc1        $f0, 0x1C0($s5)
    ctx->pc = 0x13e404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 448), bits); }
label_13e408:
    // 0x13e408: 0x26a401b8  addiu       $a0, $s5, 0x1B8
    ctx->pc = 0x13e408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 440));
label_13e40c:
    // 0x13e40c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13e40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13e410:
    // 0x13e410: 0xc093a88  jal         func_24EA20
label_13e414:
    if (ctx->pc == 0x13E414u) {
        ctx->pc = 0x13E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E410u;
        // 0x13e414: 0x26b00100  addiu       $s0, $s5, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E418u;
        goto label_13e418;
    }
    ctx->pc = 0x13E410u;
    SET_GPR_U32(ctx, 31, 0x13E418u);
    ctx->pc = 0x13E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E410u;
    // 0x13e414: 0x26b00100  addiu       $s0, $s5, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x13E410u, 0x13E418u)) {
        return;
    }
    ctx->pc = 0x13E418u;
label_13e418:
    // 0x13e418: 0x26b30160  addiu       $s3, $s5, 0x160
    ctx->pc = 0x13e418u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 352));
label_13e41c:
    // 0x13e41c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x13e41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13e420:
    // 0x13e420: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13e420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13e424:
    // 0x13e424: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x13e424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13e428:
    // 0x13e428: 0x26b200e0  addiu       $s2, $s5, 0xE0
    ctx->pc = 0x13e428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
label_13e42c:
    // 0x13e42c: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x13e42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_13e430:
    // 0x13e430: 0x26b10044  addiu       $s1, $s5, 0x44
    ctx->pc = 0x13e430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 68));
label_13e434:
    // 0x13e434: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x13e434u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_13e438:
    // 0x13e438: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x13e438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e43c:
    // 0x13e43c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x13e43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e440:
    // 0x13e440: 0x26b40140  addiu       $s4, $s5, 0x140
    ctx->pc = 0x13e440u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
label_13e444:
    // 0x13e444: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x13e444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13e448:
    // 0x13e448: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x13e448u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_13e44c:
    // 0x13e44c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x13e44cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_13e450:
    // 0x13e450: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x13e450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_13e454:
    // 0x13e454: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x13e454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_13e458:
    // 0x13e458: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x13e458u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_13e45c:
    // 0x13e45c: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x13e45cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13e460:
    // 0x13e460: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x13e460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_13e464:
    // 0x13e464: 0xe6a200e0  swc1        $f2, 0xE0($s5)
    ctx->pc = 0x13e464u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 224), bits); }
label_13e468:
    // 0x13e468: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x13e468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_13e46c:
    // 0x13e46c: 0xe6a100e4  swc1        $f1, 0xE4($s5)
    ctx->pc = 0x13e46cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 228), bits); }
label_13e470:
    // 0x13e470: 0xe6a000e8  swc1        $f0, 0xE8($s5)
    ctx->pc = 0x13e470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 232), bits); }
label_13e474:
    // 0x13e474: 0x6aa600e7  ldl         $a2, 0xE7($s5)
    ctx->pc = 0x13e474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_13e478:
    // 0x13e478: 0x6ea600e0  ldr         $a2, 0xE0($s5)
    ctx->pc = 0x13e478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_13e47c:
    // 0x13e47c: 0x8ea200e8  lw          $v0, 0xE8($s5)
    ctx->pc = 0x13e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 232)));
label_13e480:
    // 0x13e480: 0xb2a60147  sdl         $a2, 0x147($s5)
    ctx->pc = 0x13e480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e484:
    // 0x13e484: 0xb6a60140  sdr         $a2, 0x140($s5)
    ctx->pc = 0x13e484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e488:
    // 0x13e488: 0xaea20148  sw          $v0, 0x148($s5)
    ctx->pc = 0x13e488u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 328), GPR_U32(ctx, 2));
label_13e48c:
    // 0x13e48c: 0xc6a00144  lwc1        $f0, 0x144($s5)
    ctx->pc = 0x13e48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e490:
    // 0x13e490: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x13e490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_13e494:
    // 0x13e494: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x13e494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_13e498:
    // 0x13e498: 0xe6a00144  swc1        $f0, 0x144($s5)
    ctx->pc = 0x13e498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 324), bits); }
label_13e49c:
    // 0x13e49c: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x13e49cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_13e4a0:
    // 0x13e4a0: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x13e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_13e4a4:
    // 0x13e4a4: 0x40f809  jalr        $v0
label_13e4a8:
    if (ctx->pc == 0x13E4A8u) {
        ctx->pc = 0x13E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4A4u;
        // 0x13e4a8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E4ACu;
        goto label_13e4ac;
    }
    ctx->pc = 0x13E4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13E4ACu);
        ctx->pc = 0x13E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4A4u;
        // 0x13e4a8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E4A4u, 0x13E4ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E4ACu;
label_13e4ac:
    // 0x13e4ac: 0x8ea50040  lw          $a1, 0x40($s5)
    ctx->pc = 0x13e4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_13e4b0:
    // 0x13e4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e4b4:
    // 0x13e4b4: 0xc092dbc  jal         func_24B6F0
label_13e4b8:
    if (ctx->pc == 0x13E4B8u) {
        ctx->pc = 0x13E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4B4u;
        // 0x13e4b8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E4BCu;
        goto label_13e4bc;
    }
    ctx->pc = 0x13E4B4u;
    SET_GPR_U32(ctx, 31, 0x13E4BCu);
    ctx->pc = 0x13E4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E4B4u;
    // 0x13e4b8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B6F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B6F0u, 0x13E4B4u, 0x13E4BCu)) {
        return;
    }
    ctx->pc = 0x13E4BCu;
label_13e4bc:
    // 0x13e4bc: 0x6aa50107  ldl         $a1, 0x107($s5)
    ctx->pc = 0x13e4bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_13e4c0:
    // 0x13e4c0: 0x6ea50100  ldr         $a1, 0x100($s5)
    ctx->pc = 0x13e4c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_13e4c4:
    // 0x13e4c4: 0x6aa6010f  ldl         $a2, 0x10F($s5)
    ctx->pc = 0x13e4c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_13e4c8:
    // 0x13e4c8: 0x6ea60108  ldr         $a2, 0x108($s5)
    ctx->pc = 0x13e4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_13e4cc:
    // 0x13e4cc: 0x6aa20117  ldl         $v0, 0x117($s5)
    ctx->pc = 0x13e4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_13e4d0:
    // 0x13e4d0: 0x6ea20110  ldr         $v0, 0x110($s5)
    ctx->pc = 0x13e4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_13e4d4:
    // 0x13e4d4: 0x6aa3011f  ldl         $v1, 0x11F($s5)
    ctx->pc = 0x13e4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_13e4d8:
    // 0x13e4d8: 0x6ea30118  ldr         $v1, 0x118($s5)
    ctx->pc = 0x13e4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_13e4dc:
    // 0x13e4dc: 0xb2a50167  sdl         $a1, 0x167($s5)
    ctx->pc = 0x13e4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e4e0:
    // 0x13e4e0: 0xb6a50160  sdr         $a1, 0x160($s5)
    ctx->pc = 0x13e4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e4e4:
    // 0x13e4e4: 0xb2a6016f  sdl         $a2, 0x16F($s5)
    ctx->pc = 0x13e4e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 367); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e4e8:
    // 0x13e4e8: 0xb6a60168  sdr         $a2, 0x168($s5)
    ctx->pc = 0x13e4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 360); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e4ec:
    // 0x13e4ec: 0xb2a20177  sdl         $v0, 0x177($s5)
    ctx->pc = 0x13e4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e4f0:
    // 0x13e4f0: 0xb6a20170  sdr         $v0, 0x170($s5)
    ctx->pc = 0x13e4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e4f4:
    // 0x13e4f4: 0xb2a3017f  sdl         $v1, 0x17F($s5)
    ctx->pc = 0x13e4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e4f8:
    // 0x13e4f8: 0xb6a30178  sdr         $v1, 0x178($s5)
    ctx->pc = 0x13e4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e4fc:
    // 0x13e4fc: 0x6aa50127  ldl         $a1, 0x127($s5)
    ctx->pc = 0x13e4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_13e500:
    // 0x13e500: 0x6ea50120  ldr         $a1, 0x120($s5)
    ctx->pc = 0x13e500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_13e504:
    // 0x13e504: 0x6aa6012f  ldl         $a2, 0x12F($s5)
    ctx->pc = 0x13e504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_13e508:
    // 0x13e508: 0x6ea60128  ldr         $a2, 0x128($s5)
    ctx->pc = 0x13e508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_13e50c:
    // 0x13e50c: 0x6aa20137  ldl         $v0, 0x137($s5)
    ctx->pc = 0x13e50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_13e510:
    // 0x13e510: 0x6ea20130  ldr         $v0, 0x130($s5)
    ctx->pc = 0x13e510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_13e514:
    // 0x13e514: 0x6aa3013f  ldl         $v1, 0x13F($s5)
    ctx->pc = 0x13e514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_13e518:
    // 0x13e518: 0x6ea30138  ldr         $v1, 0x138($s5)
    ctx->pc = 0x13e518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_13e51c:
    // 0x13e51c: 0xb2a50187  sdl         $a1, 0x187($s5)
    ctx->pc = 0x13e51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e520:
    // 0x13e520: 0xb6a50180  sdr         $a1, 0x180($s5)
    ctx->pc = 0x13e520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e524:
    // 0x13e524: 0xb2a6018f  sdl         $a2, 0x18F($s5)
    ctx->pc = 0x13e524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e528:
    // 0x13e528: 0xb6a60188  sdr         $a2, 0x188($s5)
    ctx->pc = 0x13e528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e52c:
    // 0x13e52c: 0xb2a20197  sdl         $v0, 0x197($s5)
    ctx->pc = 0x13e52cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e530:
    // 0x13e530: 0xb6a20190  sdr         $v0, 0x190($s5)
    ctx->pc = 0x13e530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e534:
    // 0x13e534: 0xb2a3019f  sdl         $v1, 0x19F($s5)
    ctx->pc = 0x13e534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 415); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e538:
    // 0x13e538: 0xb6a30198  sdr         $v1, 0x198($s5)
    ctx->pc = 0x13e538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 408); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e53c:
    // 0x13e53c: 0x6aa501a7  ldl         $a1, 0x1A7($s5)
    ctx->pc = 0x13e53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_13e540:
    // 0x13e540: 0x6ea501a0  ldr         $a1, 0x1A0($s5)
    ctx->pc = 0x13e540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_13e544:
    // 0x13e544: 0x8ea601a8  lw          $a2, 0x1A8($s5)
    ctx->pc = 0x13e544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 424)));
label_13e548:
    // 0x13e548: 0xb2a50137  sdl         $a1, 0x137($s5)
    ctx->pc = 0x13e548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e54c:
    // 0x13e54c: 0xb6a50130  sdr         $a1, 0x130($s5)
    ctx->pc = 0x13e54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e550:
    // 0x13e550: 0xaea60138  sw          $a2, 0x138($s5)
    ctx->pc = 0x13e550u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 312), GPR_U32(ctx, 6));
label_13e554:
    // 0x13e554: 0xc092d94  jal         func_24B650
label_13e558:
    if (ctx->pc == 0x13E558u) {
        ctx->pc = 0x13E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E554u;
        // 0x13e558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E55Cu;
        goto label_13e55c;
    }
    ctx->pc = 0x13E554u;
    SET_GPR_U32(ctx, 31, 0x13E55Cu);
    ctx->pc = 0x13E558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E554u;
    // 0x13e558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x13E554u, 0x13E55Cu)) {
        return;
    }
    ctx->pc = 0x13E55Cu;
label_13e55c:
    // 0x13e55c: 0x6aa401a7  ldl         $a0, 0x1A7($s5)
    ctx->pc = 0x13e55cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_13e560:
    // 0x13e560: 0x6ea401a0  ldr         $a0, 0x1A0($s5)
    ctx->pc = 0x13e560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_13e564:
    // 0x13e564: 0x8ea501a8  lw          $a1, 0x1A8($s5)
    ctx->pc = 0x13e564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 424)));
label_13e568:
    // 0x13e568: 0xb2a40197  sdl         $a0, 0x197($s5)
    ctx->pc = 0x13e568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e56c:
    // 0x13e56c: 0xb6a40190  sdr         $a0, 0x190($s5)
    ctx->pc = 0x13e56cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e570:
    // 0x13e570: 0xaea50198  sw          $a1, 0x198($s5)
    ctx->pc = 0x13e570u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 408), GPR_U32(ctx, 5));
label_13e574:
    // 0x13e574: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13e574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13e578:
    // 0x13e578: 0xc6a200e4  lwc1        $f2, 0xE4($s5)
    ctx->pc = 0x13e578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13e57c:
    // 0x13e57c: 0xc6a10144  lwc1        $f1, 0x144($s5)
    ctx->pc = 0x13e57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e580:
    // 0x13e580: 0xc6a00194  lwc1        $f0, 0x194($s5)
    ctx->pc = 0x13e580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e584:
    // 0x13e584: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x13e584u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_13e588:
    // 0x13e588: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13e588u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13e58c:
    // 0x13e58c: 0xc092d94  jal         func_24B650
label_13e590:
    if (ctx->pc == 0x13E590u) {
        ctx->pc = 0x13E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E58Cu;
        // 0x13e590: 0xe6a00194  swc1        $f0, 0x194($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 404), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E594u;
        goto label_13e594;
    }
    ctx->pc = 0x13E58Cu;
    SET_GPR_U32(ctx, 31, 0x13E594u);
    ctx->pc = 0x13E590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E58Cu;
    // 0x13e590: 0xe6a00194  swc1        $f0, 0x194($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 404), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x13E58Cu, 0x13E594u)) {
        return;
    }
    ctx->pc = 0x13E594u;
label_13e594:
    // 0x13e594: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x13e594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_13e598:
    // 0x13e598: 0xc0b5bec  jal         func_2D6FB0
label_13e59c:
    if (ctx->pc == 0x13E59Cu) {
        ctx->pc = 0x13E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E598u;
        // 0x13e59c: 0x8c768bc4  lw          $s6, -0x743C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E5A0u;
        goto label_13e5a0;
    }
    ctx->pc = 0x13E598u;
    SET_GPR_U32(ctx, 31, 0x13E5A0u);
    ctx->pc = 0x13E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E598u;
    // 0x13e59c: 0x8c768bc4  lw          $s6, -0x743C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6FB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6FB0u, 0x13E598u, 0x13E5A0u)) {
        return;
    }
    ctx->pc = 0x13E5A0u;
label_13e5a0:
    // 0x13e5a0: 0xaea200f0  sw          $v0, 0xF0($s5)
    ctx->pc = 0x13e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 2));
label_13e5a4:
    // 0x13e5a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13e5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13e5a8:
    // 0x13e5a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e5ac:
    // 0x13e5ac: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x13e5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_13e5b0:
    // 0x13e5b0: 0xc0aa07e  jal         func_2A81F8
label_13e5b4:
    if (ctx->pc == 0x13E5B4u) {
        ctx->pc = 0x13E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5B0u;
        // 0x13e5b4: 0xaea300ec  sw          $v1, 0xEC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E5B8u;
        goto label_13e5b8;
    }
    ctx->pc = 0x13E5B0u;
    SET_GPR_U32(ctx, 31, 0x13E5B8u);
    ctx->pc = 0x13E5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E5B0u;
    // 0x13e5b4: 0xaea300ec  sw          $v1, 0xEC($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 236), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A81F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A81F8u, 0x13E5B0u, 0x13E5B8u)) {
        return;
    }
    ctx->pc = 0x13E5B8u;
label_13e5b8:
    // 0x13e5b8: 0xc0b5b70  jal         func_2D6DC0
label_13e5bc:
    if (ctx->pc == 0x13E5BCu) {
        ctx->pc = 0x13E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5B8u;
        // 0x13e5bc: 0x8ea400f0  lw          $a0, 0xF0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E5C0u;
        goto label_13e5c0;
    }
    ctx->pc = 0x13E5B8u;
    SET_GPR_U32(ctx, 31, 0x13E5C0u);
    ctx->pc = 0x13E5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E5B8u;
    // 0x13e5bc: 0x8ea400f0  lw          $a0, 0xF0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6DC0u, 0x13E5B8u, 0x13E5C0u)) {
        return;
    }
    ctx->pc = 0x13E5C0u;
label_13e5c0:
    // 0x13e5c0: 0x8ea400f0  lw          $a0, 0xF0($s5)
    ctx->pc = 0x13e5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
label_13e5c4:
    // 0x13e5c4: 0xc0b5c00  jal         func_2D7000
label_13e5c8:
    if (ctx->pc == 0x13E5C8u) {
        ctx->pc = 0x13E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5C4u;
        // 0x13e5c8: 0xaea200f4  sw          $v0, 0xF4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E5CCu;
        goto label_13e5cc;
    }
    ctx->pc = 0x13E5C4u;
    SET_GPR_U32(ctx, 31, 0x13E5CCu);
    ctx->pc = 0x13E5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E5C4u;
    // 0x13e5c8: 0xaea200f4  sw          $v0, 0xF4($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 244), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D7000u, 0x13E5C4u, 0x13E5CCu)) {
        return;
    }
    ctx->pc = 0x13E5CCu;
label_13e5cc:
    // 0x13e5cc: 0x8ea300f4  lw          $v1, 0xF4($s5)
    ctx->pc = 0x13e5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_13e5d0:
    // 0x13e5d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13e5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e5d4:
    // 0x13e5d4: 0xaea300f8  sw          $v1, 0xF8($s5)
    ctx->pc = 0x13e5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 248), GPR_U32(ctx, 3));
label_13e5d8:
    // 0x13e5d8: 0xac710028  sw          $s1, 0x28($v1)
    ctx->pc = 0x13e5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 17));
label_13e5dc:
    // 0x13e5dc: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x13e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_13e5e0:
    // 0x13e5e0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x13e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_13e5e4:
    // 0x13e5e4: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x13e5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_13e5e8:
    // 0x13e5e8: 0xc0aaf06  jal         func_2ABC18
label_13e5ec:
    if (ctx->pc == 0x13E5ECu) {
        ctx->pc = 0x13E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5E8u;
        // 0x13e5ec: 0x8ea400f4  lw          $a0, 0xF4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E5F0u;
        goto label_13e5f0;
    }
    ctx->pc = 0x13E5E8u;
    SET_GPR_U32(ctx, 31, 0x13E5F0u);
    ctx->pc = 0x13E5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E5E8u;
    // 0x13e5ec: 0x8ea400f4  lw          $a0, 0xF4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABC18u, 0x13E5E8u, 0x13E5F0u)) {
        return;
    }
    ctx->pc = 0x13E5F0u;
label_13e5f0:
    // 0x13e5f0: 0xc0b5bec  jal         func_2D6FB0
label_13e5f4:
    if (ctx->pc == 0x13E5F4u) {
        ctx->pc = 0x13E5F8u;
        goto label_13e5f8;
    }
    ctx->pc = 0x13E5F0u;
    SET_GPR_U32(ctx, 31, 0x13E5F8u);
    ctx->pc = 0x2D6FB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6FB0u, 0x13E5F0u, 0x13E5F8u)) {
        return;
    }
    ctx->pc = 0x13E5F8u;
label_13e5f8:
    // 0x13e5f8: 0xaea20150  sw          $v0, 0x150($s5)
    ctx->pc = 0x13e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 336), GPR_U32(ctx, 2));
label_13e5fc:
    // 0x13e5fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13e5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13e600:
    // 0x13e600: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13e600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e604:
    // 0x13e604: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x13e604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_13e608:
    // 0x13e608: 0xc0aa07e  jal         func_2A81F8
label_13e60c:
    if (ctx->pc == 0x13E60Cu) {
        ctx->pc = 0x13E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E608u;
        // 0x13e60c: 0xaea3014c  sw          $v1, 0x14C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E610u;
        goto label_13e610;
    }
    ctx->pc = 0x13E608u;
    SET_GPR_U32(ctx, 31, 0x13E610u);
    ctx->pc = 0x13E60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E608u;
    // 0x13e60c: 0xaea3014c  sw          $v1, 0x14C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 332), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A81F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A81F8u, 0x13E608u, 0x13E610u)) {
        return;
    }
    ctx->pc = 0x13E610u;
label_13e610:
    // 0x13e610: 0xc0b5b70  jal         func_2D6DC0
label_13e614:
    if (ctx->pc == 0x13E614u) {
        ctx->pc = 0x13E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E610u;
        // 0x13e614: 0x8ea40150  lw          $a0, 0x150($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E618u;
        goto label_13e618;
    }
    ctx->pc = 0x13E610u;
    SET_GPR_U32(ctx, 31, 0x13E618u);
    ctx->pc = 0x13E614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E610u;
    // 0x13e614: 0x8ea40150  lw          $a0, 0x150($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6DC0u, 0x13E610u, 0x13E618u)) {
        return;
    }
    ctx->pc = 0x13E618u;
label_13e618:
    // 0x13e618: 0x8ea40150  lw          $a0, 0x150($s5)
    ctx->pc = 0x13e618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
label_13e61c:
    // 0x13e61c: 0xc0b5c00  jal         func_2D7000
label_13e620:
    if (ctx->pc == 0x13E620u) {
        ctx->pc = 0x13E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E61Cu;
        // 0x13e620: 0xaea20154  sw          $v0, 0x154($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E624u;
        goto label_13e624;
    }
    ctx->pc = 0x13E61Cu;
    SET_GPR_U32(ctx, 31, 0x13E624u);
    ctx->pc = 0x13E620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E61Cu;
    // 0x13e620: 0xaea20154  sw          $v0, 0x154($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D7000u, 0x13E61Cu, 0x13E624u)) {
        return;
    }
    ctx->pc = 0x13E624u;
label_13e624:
    // 0x13e624: 0x8ea30154  lw          $v1, 0x154($s5)
    ctx->pc = 0x13e624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 340)));
label_13e628:
    // 0x13e628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13e628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e62c:
    // 0x13e62c: 0xaea30158  sw          $v1, 0x158($s5)
    ctx->pc = 0x13e62cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 344), GPR_U32(ctx, 3));
label_13e630:
    // 0x13e630: 0xac710028  sw          $s1, 0x28($v1)
    ctx->pc = 0x13e630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 17));
label_13e634:
    // 0x13e634: 0x8ea20154  lw          $v0, 0x154($s5)
    ctx->pc = 0x13e634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 340)));
label_13e638:
    // 0x13e638: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x13e638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_13e63c:
    // 0x13e63c: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x13e63cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
label_13e640:
    // 0x13e640: 0xc0aaf06  jal         func_2ABC18
label_13e644:
    if (ctx->pc == 0x13E644u) {
        ctx->pc = 0x13E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E640u;
        // 0x13e644: 0x8ea40154  lw          $a0, 0x154($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E648u;
        goto label_13e648;
    }
    ctx->pc = 0x13E640u;
    SET_GPR_U32(ctx, 31, 0x13E648u);
    ctx->pc = 0x13E644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E640u;
    // 0x13e644: 0x8ea40154  lw          $a0, 0x154($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABC18u, 0x13E640u, 0x13E648u)) {
        return;
    }
    ctx->pc = 0x13E648u;
label_13e648:
    // 0x13e648: 0x26a30004  addiu       $v1, $s5, 0x4
    ctx->pc = 0x13e648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_13e64c:
    // 0x13e64c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x13e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_13e650:
    // 0x13e650: 0x8c45007c  lw          $a1, 0x7C($v0)
    ctx->pc = 0x13e650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_13e654:
    // 0x13e654: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_13e658:
    if (ctx->pc == 0x13E658u) {
        ctx->pc = 0x13E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E654u;
        // 0x13e658: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E65Cu;
        goto label_13e65c;
    }
    ctx->pc = 0x13E654u;
    {
        const bool branch_taken_0x13e654 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E654u;
        // 0x13e658: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e654) {
            ctx->pc = 0x13E668u;
            goto label_13e668;
        }
    }
    ctx->pc = 0x13E65Cu;
label_13e65c:
    // 0x13e65c: 0x10000003  b           . + 4 + (0x3 << 2)
label_13e660:
    if (ctx->pc == 0x13E660u) {
        ctx->pc = 0x13E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E65Cu;
        // 0x13e660: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E664u;
        goto label_13e664;
    }
    ctx->pc = 0x13E65Cu;
    {
        const bool branch_taken_0x13e65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E65Cu;
        // 0x13e660: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e65c) {
            ctx->pc = 0x13E66Cu;
            goto label_13e66c;
        }
    }
    ctx->pc = 0x13E664u;
label_13e664:
    // 0x13e664: 0x0  nop
    ctx->pc = 0x13e664u;
    // NOP
label_13e668:
    // 0x13e668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13e668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e66c:
    // 0x13e66c: 0x8ea600f8  lw          $a2, 0xF8($s5)
    ctx->pc = 0x13e66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
label_13e670:
    // 0x13e670: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x13e670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13e674:
    // 0x13e674: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x13e674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e678:
    // 0x13e678: 0xc06657a  jal         func_1995E8
label_13e67c:
    if (ctx->pc == 0x13E67Cu) {
        ctx->pc = 0x13E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E678u;
        // 0x13e67c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E680u;
        goto label_13e680;
    }
    ctx->pc = 0x13E678u;
    SET_GPR_U32(ctx, 31, 0x13E680u);
    ctx->pc = 0x13E67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E678u;
    // 0x13e67c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1995E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1995E8u, 0x13E678u, 0x13E680u)) {
        return;
    }
    ctx->pc = 0x13E680u;
label_13e680:
    // 0x13e680: 0x8ea500f8  lw          $a1, 0xF8($s5)
    ctx->pc = 0x13e680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
label_13e684:
    // 0x13e684: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13e684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13e688:
    // 0x13e688: 0xc066318  jal         func_198C60
label_13e68c:
    if (ctx->pc == 0x13E68Cu) {
        ctx->pc = 0x13E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E688u;
        // 0x13e68c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E690u;
        goto label_13e690;
    }
    ctx->pc = 0x13E688u;
    SET_GPR_U32(ctx, 31, 0x13E690u);
    ctx->pc = 0x13E68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E688u;
    // 0x13e68c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198C60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x198C60u, 0x13E688u, 0x13E690u)) {
        return;
    }
    ctx->pc = 0x13E690u;
label_13e690:
    // 0x13e690: 0x8ea500f8  lw          $a1, 0xF8($s5)
    ctx->pc = 0x13e690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
label_13e694:
    // 0x13e694: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13e694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e698:
    // 0x13e698: 0xc0ab3b8  jal         func_2ACEE0
label_13e69c:
    if (ctx->pc == 0x13E69Cu) {
        ctx->pc = 0x13E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E698u;
        // 0x13e69c: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E6A0u;
        goto label_13e6a0;
    }
    ctx->pc = 0x13E698u;
    SET_GPR_U32(ctx, 31, 0x13E6A0u);
    ctx->pc = 0x13E69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E698u;
    // 0x13e69c: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACEE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ACEE0u, 0x13E698u, 0x13E6A0u)) {
        return;
    }
    ctx->pc = 0x13E6A0u;
label_13e6a0:
    // 0x13e6a0: 0x8ea400f4  lw          $a0, 0xF4($s5)
    ctx->pc = 0x13e6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_13e6a4:
    // 0x13e6a4: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x13e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_13e6a8:
    // 0x13e6a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_13e6ac:
    if (ctx->pc == 0x13E6ACu) {
        ctx->pc = 0x13E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6A8u;
        // 0x13e6ac: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E6B0u;
        goto label_13e6b0;
    }
    ctx->pc = 0x13E6A8u;
    {
        const bool branch_taken_0x13e6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e6a8) {
            ctx->pc = 0x13E6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E6A8u;
            // 0x13e6ac: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E6BCu;
            goto label_13e6bc;
        }
    }
    ctx->pc = 0x13E6B0u;
label_13e6b0:
    // 0x13e6b0: 0xc0b5b00  jal         func_2D6C00
label_13e6b4:
    if (ctx->pc == 0x13E6B4u) {
        ctx->pc = 0x13E6B8u;
        goto label_13e6b8;
    }
    ctx->pc = 0x13E6B0u;
    SET_GPR_U32(ctx, 31, 0x13E6B8u);
    ctx->pc = 0x2D6C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6C00u, 0x13E6B0u, 0x13E6B8u)) {
        return;
    }
    ctx->pc = 0x13E6B8u;
label_13e6b8:
    // 0x13e6b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x13e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_13e6bc:
    // 0x13e6bc: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x13e6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_13e6c0:
    // 0x13e6c0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_13e6c4:
    if (ctx->pc == 0x13E6C4u) {
        ctx->pc = 0x13E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6C0u;
        // 0x13e6c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E6C8u;
        goto label_13e6c8;
    }
    ctx->pc = 0x13E6C0u;
    {
        const bool branch_taken_0x13e6c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6C0u;
        // 0x13e6c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e6c0) {
            ctx->pc = 0x13E6CCu;
            goto label_13e6cc;
        }
    }
    ctx->pc = 0x13E6C8u;
label_13e6c8:
    // 0x13e6c8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x13e6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13e6cc:
    // 0x13e6cc: 0x8ea60158  lw          $a2, 0x158($s5)
    ctx->pc = 0x13e6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 344)));
label_13e6d0:
    // 0x13e6d0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x13e6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13e6d4:
    // 0x13e6d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x13e6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e6d8:
    // 0x13e6d8: 0xc06657a  jal         func_1995E8
label_13e6dc:
    if (ctx->pc == 0x13E6DCu) {
        ctx->pc = 0x13E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6D8u;
        // 0x13e6dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E6E0u;
        goto label_13e6e0;
    }
    ctx->pc = 0x13E6D8u;
    SET_GPR_U32(ctx, 31, 0x13E6E0u);
    ctx->pc = 0x13E6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E6D8u;
    // 0x13e6dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1995E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1995E8u, 0x13E6D8u, 0x13E6E0u)) {
        return;
    }
    ctx->pc = 0x13E6E0u;
label_13e6e0:
    // 0x13e6e0: 0x8ea50158  lw          $a1, 0x158($s5)
    ctx->pc = 0x13e6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 344)));
label_13e6e4:
    // 0x13e6e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13e6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13e6e8:
    // 0x13e6e8: 0xc066318  jal         func_198C60
label_13e6ec:
    if (ctx->pc == 0x13E6ECu) {
        ctx->pc = 0x13E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6E8u;
        // 0x13e6ec: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E6F0u;
        goto label_13e6f0;
    }
    ctx->pc = 0x13E6E8u;
    SET_GPR_U32(ctx, 31, 0x13E6F0u);
    ctx->pc = 0x13E6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E6E8u;
    // 0x13e6ec: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198C60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x198C60u, 0x13E6E8u, 0x13E6F0u)) {
        return;
    }
    ctx->pc = 0x13E6F0u;
label_13e6f0:
    // 0x13e6f0: 0x8ea50158  lw          $a1, 0x158($s5)
    ctx->pc = 0x13e6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 344)));
label_13e6f4:
    // 0x13e6f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x13e6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_13e6f8:
    // 0x13e6f8: 0xc0ab3b8  jal         func_2ACEE0
label_13e6fc:
    if (ctx->pc == 0x13E6FCu) {
        ctx->pc = 0x13E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6F8u;
        // 0x13e6fc: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E700u;
        goto label_13e700;
    }
    ctx->pc = 0x13E6F8u;
    SET_GPR_U32(ctx, 31, 0x13E700u);
    ctx->pc = 0x13E6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E6F8u;
    // 0x13e6fc: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACEE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ACEE0u, 0x13E6F8u, 0x13E700u)) {
        return;
    }
    ctx->pc = 0x13E700u;
label_13e700:
    // 0x13e700: 0x8ea40154  lw          $a0, 0x154($s5)
    ctx->pc = 0x13e700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 340)));
label_13e704:
    // 0x13e704: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x13e704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_13e708:
    // 0x13e708: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13e70c:
    if (ctx->pc == 0x13E70Cu) {
        ctx->pc = 0x13E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E708u;
        // 0x13e70c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E710u;
        goto label_13e710;
    }
    ctx->pc = 0x13E708u;
    {
        const bool branch_taken_0x13e708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E708u;
        // 0x13e70c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e708) {
            ctx->pc = 0x13E71Cu;
            goto label_13e71c;
        }
    }
    ctx->pc = 0x13E710u;
label_13e710:
    // 0x13e710: 0xc0b5b00  jal         func_2D6C00
label_13e714:
    if (ctx->pc == 0x13E714u) {
        ctx->pc = 0x13E718u;
        goto label_13e718;
    }
    ctx->pc = 0x13E710u;
    SET_GPR_U32(ctx, 31, 0x13E718u);
    ctx->pc = 0x2D6C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6C00u, 0x13E710u, 0x13E718u)) {
        return;
    }
    ctx->pc = 0x13E718u;
label_13e718:
    // 0x13e718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e71c:
    // 0x13e71c: 0xaea201c4  sw          $v0, 0x1C4($s5)
    ctx->pc = 0x13e71cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 452), GPR_U32(ctx, 2));
label_13e720:
    // 0x13e720: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x13e720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_13e724:
    // 0x13e724: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x13e724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_13e728:
    // 0x13e728: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x13e728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_13e72c:
    // 0x13e72c: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x13e72cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_13e730:
    // 0x13e730: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x13e730u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_13e734:
    // 0x13e734: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x13e734u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_13e738:
    // 0x13e738: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x13e738u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_13e73c:
    // 0x13e73c: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x13e73cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_13e740:
    // 0x13e740: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x13e740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_13e744:
    // 0x13e744: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x13e744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13e748:
    // 0x13e748: 0x3e00008  jr          $ra
label_13e74c:
    if (ctx->pc == 0x13E74Cu) {
        ctx->pc = 0x13E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E748u;
        // 0x13e74c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E750u;
        goto label_fallthrough_0x13e748;
    }
    ctx->pc = 0x13E748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E748u;
        // 0x13e74c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13e748:
    ctx->pc = 0x13E750u;
}
