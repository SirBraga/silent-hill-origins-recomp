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

// Function: sub_0021E2F8
// Address: 0x21e2f8 - 0x21e6d0
void sub_0021E2F8_0x21e2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E2F8_0x21e2f8");
#endif

    switch (ctx->pc) {
        case 0x21e2f8u: goto label_21e2f8;
        case 0x21e2fcu: goto label_21e2fc;
        case 0x21e300u: goto label_21e300;
        case 0x21e304u: goto label_21e304;
        case 0x21e308u: goto label_21e308;
        case 0x21e30cu: goto label_21e30c;
        case 0x21e310u: goto label_21e310;
        case 0x21e314u: goto label_21e314;
        case 0x21e318u: goto label_21e318;
        case 0x21e31cu: goto label_21e31c;
        case 0x21e320u: goto label_21e320;
        case 0x21e324u: goto label_21e324;
        case 0x21e328u: goto label_21e328;
        case 0x21e32cu: goto label_21e32c;
        case 0x21e330u: goto label_21e330;
        case 0x21e334u: goto label_21e334;
        case 0x21e338u: goto label_21e338;
        case 0x21e33cu: goto label_21e33c;
        case 0x21e340u: goto label_21e340;
        case 0x21e344u: goto label_21e344;
        case 0x21e348u: goto label_21e348;
        case 0x21e34cu: goto label_21e34c;
        case 0x21e350u: goto label_21e350;
        case 0x21e354u: goto label_21e354;
        case 0x21e358u: goto label_21e358;
        case 0x21e35cu: goto label_21e35c;
        case 0x21e360u: goto label_21e360;
        case 0x21e364u: goto label_21e364;
        case 0x21e368u: goto label_21e368;
        case 0x21e36cu: goto label_21e36c;
        case 0x21e370u: goto label_21e370;
        case 0x21e374u: goto label_21e374;
        case 0x21e378u: goto label_21e378;
        case 0x21e37cu: goto label_21e37c;
        case 0x21e380u: goto label_21e380;
        case 0x21e384u: goto label_21e384;
        case 0x21e388u: goto label_21e388;
        case 0x21e38cu: goto label_21e38c;
        case 0x21e390u: goto label_21e390;
        case 0x21e394u: goto label_21e394;
        case 0x21e398u: goto label_21e398;
        case 0x21e39cu: goto label_21e39c;
        case 0x21e3a0u: goto label_21e3a0;
        case 0x21e3a4u: goto label_21e3a4;
        case 0x21e3a8u: goto label_21e3a8;
        case 0x21e3acu: goto label_21e3ac;
        case 0x21e3b0u: goto label_21e3b0;
        case 0x21e3b4u: goto label_21e3b4;
        case 0x21e3b8u: goto label_21e3b8;
        case 0x21e3bcu: goto label_21e3bc;
        case 0x21e3c0u: goto label_21e3c0;
        case 0x21e3c4u: goto label_21e3c4;
        case 0x21e3c8u: goto label_21e3c8;
        case 0x21e3ccu: goto label_21e3cc;
        case 0x21e3d0u: goto label_21e3d0;
        case 0x21e3d4u: goto label_21e3d4;
        case 0x21e3d8u: goto label_21e3d8;
        case 0x21e3dcu: goto label_21e3dc;
        case 0x21e3e0u: goto label_21e3e0;
        case 0x21e3e4u: goto label_21e3e4;
        case 0x21e3e8u: goto label_21e3e8;
        case 0x21e3ecu: goto label_21e3ec;
        case 0x21e3f0u: goto label_21e3f0;
        case 0x21e3f4u: goto label_21e3f4;
        case 0x21e3f8u: goto label_21e3f8;
        case 0x21e3fcu: goto label_21e3fc;
        case 0x21e400u: goto label_21e400;
        case 0x21e404u: goto label_21e404;
        case 0x21e408u: goto label_21e408;
        case 0x21e40cu: goto label_21e40c;
        case 0x21e410u: goto label_21e410;
        case 0x21e414u: goto label_21e414;
        case 0x21e418u: goto label_21e418;
        case 0x21e41cu: goto label_21e41c;
        case 0x21e420u: goto label_21e420;
        case 0x21e424u: goto label_21e424;
        case 0x21e428u: goto label_21e428;
        case 0x21e42cu: goto label_21e42c;
        case 0x21e430u: goto label_21e430;
        case 0x21e434u: goto label_21e434;
        case 0x21e438u: goto label_21e438;
        case 0x21e43cu: goto label_21e43c;
        case 0x21e440u: goto label_21e440;
        case 0x21e444u: goto label_21e444;
        case 0x21e448u: goto label_21e448;
        case 0x21e44cu: goto label_21e44c;
        case 0x21e450u: goto label_21e450;
        case 0x21e454u: goto label_21e454;
        case 0x21e458u: goto label_21e458;
        case 0x21e45cu: goto label_21e45c;
        case 0x21e460u: goto label_21e460;
        case 0x21e464u: goto label_21e464;
        case 0x21e468u: goto label_21e468;
        case 0x21e46cu: goto label_21e46c;
        case 0x21e470u: goto label_21e470;
        case 0x21e474u: goto label_21e474;
        case 0x21e478u: goto label_21e478;
        case 0x21e47cu: goto label_21e47c;
        case 0x21e480u: goto label_21e480;
        case 0x21e484u: goto label_21e484;
        case 0x21e488u: goto label_21e488;
        case 0x21e48cu: goto label_21e48c;
        case 0x21e490u: goto label_21e490;
        case 0x21e494u: goto label_21e494;
        case 0x21e498u: goto label_21e498;
        case 0x21e49cu: goto label_21e49c;
        case 0x21e4a0u: goto label_21e4a0;
        case 0x21e4a4u: goto label_21e4a4;
        case 0x21e4a8u: goto label_21e4a8;
        case 0x21e4acu: goto label_21e4ac;
        case 0x21e4b0u: goto label_21e4b0;
        case 0x21e4b4u: goto label_21e4b4;
        case 0x21e4b8u: goto label_21e4b8;
        case 0x21e4bcu: goto label_21e4bc;
        case 0x21e4c0u: goto label_21e4c0;
        case 0x21e4c4u: goto label_21e4c4;
        case 0x21e4c8u: goto label_21e4c8;
        case 0x21e4ccu: goto label_21e4cc;
        case 0x21e4d0u: goto label_21e4d0;
        case 0x21e4d4u: goto label_21e4d4;
        case 0x21e4d8u: goto label_21e4d8;
        case 0x21e4dcu: goto label_21e4dc;
        case 0x21e4e0u: goto label_21e4e0;
        case 0x21e4e4u: goto label_21e4e4;
        case 0x21e4e8u: goto label_21e4e8;
        case 0x21e4ecu: goto label_21e4ec;
        case 0x21e4f0u: goto label_21e4f0;
        case 0x21e4f4u: goto label_21e4f4;
        case 0x21e4f8u: goto label_21e4f8;
        case 0x21e4fcu: goto label_21e4fc;
        case 0x21e500u: goto label_21e500;
        case 0x21e504u: goto label_21e504;
        case 0x21e508u: goto label_21e508;
        case 0x21e50cu: goto label_21e50c;
        case 0x21e510u: goto label_21e510;
        case 0x21e514u: goto label_21e514;
        case 0x21e518u: goto label_21e518;
        case 0x21e51cu: goto label_21e51c;
        case 0x21e520u: goto label_21e520;
        case 0x21e524u: goto label_21e524;
        case 0x21e528u: goto label_21e528;
        case 0x21e52cu: goto label_21e52c;
        case 0x21e530u: goto label_21e530;
        case 0x21e534u: goto label_21e534;
        case 0x21e538u: goto label_21e538;
        case 0x21e53cu: goto label_21e53c;
        case 0x21e540u: goto label_21e540;
        case 0x21e544u: goto label_21e544;
        case 0x21e548u: goto label_21e548;
        case 0x21e54cu: goto label_21e54c;
        case 0x21e550u: goto label_21e550;
        case 0x21e554u: goto label_21e554;
        case 0x21e558u: goto label_21e558;
        case 0x21e55cu: goto label_21e55c;
        case 0x21e560u: goto label_21e560;
        case 0x21e564u: goto label_21e564;
        case 0x21e568u: goto label_21e568;
        case 0x21e56cu: goto label_21e56c;
        case 0x21e570u: goto label_21e570;
        case 0x21e574u: goto label_21e574;
        case 0x21e578u: goto label_21e578;
        case 0x21e57cu: goto label_21e57c;
        case 0x21e580u: goto label_21e580;
        case 0x21e584u: goto label_21e584;
        case 0x21e588u: goto label_21e588;
        case 0x21e58cu: goto label_21e58c;
        case 0x21e590u: goto label_21e590;
        case 0x21e594u: goto label_21e594;
        case 0x21e598u: goto label_21e598;
        case 0x21e59cu: goto label_21e59c;
        case 0x21e5a0u: goto label_21e5a0;
        case 0x21e5a4u: goto label_21e5a4;
        case 0x21e5a8u: goto label_21e5a8;
        case 0x21e5acu: goto label_21e5ac;
        case 0x21e5b0u: goto label_21e5b0;
        case 0x21e5b4u: goto label_21e5b4;
        case 0x21e5b8u: goto label_21e5b8;
        case 0x21e5bcu: goto label_21e5bc;
        case 0x21e5c0u: goto label_21e5c0;
        case 0x21e5c4u: goto label_21e5c4;
        case 0x21e5c8u: goto label_21e5c8;
        case 0x21e5ccu: goto label_21e5cc;
        case 0x21e5d0u: goto label_21e5d0;
        case 0x21e5d4u: goto label_21e5d4;
        case 0x21e5d8u: goto label_21e5d8;
        case 0x21e5dcu: goto label_21e5dc;
        case 0x21e5e0u: goto label_21e5e0;
        case 0x21e5e4u: goto label_21e5e4;
        case 0x21e5e8u: goto label_21e5e8;
        case 0x21e5ecu: goto label_21e5ec;
        case 0x21e5f0u: goto label_21e5f0;
        case 0x21e5f4u: goto label_21e5f4;
        case 0x21e5f8u: goto label_21e5f8;
        case 0x21e5fcu: goto label_21e5fc;
        case 0x21e600u: goto label_21e600;
        case 0x21e604u: goto label_21e604;
        case 0x21e608u: goto label_21e608;
        case 0x21e60cu: goto label_21e60c;
        case 0x21e610u: goto label_21e610;
        case 0x21e614u: goto label_21e614;
        case 0x21e618u: goto label_21e618;
        case 0x21e61cu: goto label_21e61c;
        case 0x21e620u: goto label_21e620;
        case 0x21e624u: goto label_21e624;
        case 0x21e628u: goto label_21e628;
        case 0x21e62cu: goto label_21e62c;
        case 0x21e630u: goto label_21e630;
        case 0x21e634u: goto label_21e634;
        case 0x21e638u: goto label_21e638;
        case 0x21e63cu: goto label_21e63c;
        case 0x21e640u: goto label_21e640;
        case 0x21e644u: goto label_21e644;
        case 0x21e648u: goto label_21e648;
        case 0x21e64cu: goto label_21e64c;
        case 0x21e650u: goto label_21e650;
        case 0x21e654u: goto label_21e654;
        case 0x21e658u: goto label_21e658;
        case 0x21e65cu: goto label_21e65c;
        case 0x21e660u: goto label_21e660;
        case 0x21e664u: goto label_21e664;
        case 0x21e668u: goto label_21e668;
        case 0x21e66cu: goto label_21e66c;
        case 0x21e670u: goto label_21e670;
        case 0x21e674u: goto label_21e674;
        case 0x21e678u: goto label_21e678;
        case 0x21e67cu: goto label_21e67c;
        case 0x21e680u: goto label_21e680;
        case 0x21e684u: goto label_21e684;
        case 0x21e688u: goto label_21e688;
        case 0x21e68cu: goto label_21e68c;
        case 0x21e690u: goto label_21e690;
        case 0x21e694u: goto label_21e694;
        case 0x21e698u: goto label_21e698;
        case 0x21e69cu: goto label_21e69c;
        case 0x21e6a0u: goto label_21e6a0;
        case 0x21e6a4u: goto label_21e6a4;
        case 0x21e6a8u: goto label_21e6a8;
        case 0x21e6acu: goto label_21e6ac;
        case 0x21e6b0u: goto label_21e6b0;
        case 0x21e6b4u: goto label_21e6b4;
        case 0x21e6b8u: goto label_21e6b8;
        case 0x21e6bcu: goto label_21e6bc;
        case 0x21e6c0u: goto label_21e6c0;
        case 0x21e6c4u: goto label_21e6c4;
        case 0x21e6c8u: goto label_21e6c8;
        case 0x21e6ccu: goto label_21e6cc;
        default: break;
    }

    ctx->pc = 0x21e2f8u;

label_21e2f8:
    // 0x21e2f8: 0x27bdfa30  addiu       $sp, $sp, -0x5D0
    ctx->pc = 0x21e2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965808));
label_21e2fc:
    // 0x21e2fc: 0x7fb005c0  sq          $s0, 0x5C0($sp)
    ctx->pc = 0x21e2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1472), GPR_VEC(ctx, 16));
label_21e300:
    // 0x21e300: 0x7fb105b0  sq          $s1, 0x5B0($sp)
    ctx->pc = 0x21e300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1456), GPR_VEC(ctx, 17));
label_21e304:
    // 0x21e304: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21e304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21e308:
    // 0x21e308: 0x7fb30590  sq          $s3, 0x590($sp)
    ctx->pc = 0x21e308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1424), GPR_VEC(ctx, 19));
label_21e30c:
    // 0x21e30c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x21e30cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_21e310:
    // 0x21e310: 0x7fb205a0  sq          $s2, 0x5A0($sp)
    ctx->pc = 0x21e310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1440), GPR_VEC(ctx, 18));
label_21e314:
    // 0x21e314: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21e314u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21e318:
    // 0x21e318: 0x7fb40580  sq          $s4, 0x580($sp)
    ctx->pc = 0x21e318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1408), GPR_VEC(ctx, 20));
label_21e31c:
    // 0x21e31c: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x21e31cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_21e320:
    // 0x21e320: 0x7fb50570  sq          $s5, 0x570($sp)
    ctx->pc = 0x21e320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 21));
label_21e324:
    // 0x21e324: 0x7fb60560  sq          $s6, 0x560($sp)
    ctx->pc = 0x21e324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 22));
label_21e328:
    // 0x21e328: 0x7fb70550  sq          $s7, 0x550($sp)
    ctx->pc = 0x21e328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 23));
label_21e32c:
    // 0x21e32c: 0x7fbe0540  sq          $fp, 0x540($sp)
    ctx->pc = 0x21e32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 30));
label_21e330:
    // 0x21e330: 0xffbf0530  sd          $ra, 0x530($sp)
    ctx->pc = 0x21e330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1328), GPR_U64(ctx, 31));
label_21e334:
    // 0x21e334: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_21e338:
    if (ctx->pc == 0x21E338u) {
        ctx->pc = 0x21E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E334u;
        // 0x21e338: 0xafa50520  sw          $a1, 0x520($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1312), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E33Cu;
        goto label_21e33c;
    }
    ctx->pc = 0x21E334u;
    {
        const bool branch_taken_0x21e334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E334u;
        // 0x21e338: 0xafa50520  sw          $a1, 0x520($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1312), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e334) {
            ctx->pc = 0x21E360u;
            goto label_21e360;
        }
    }
    ctx->pc = 0x21E33Cu;
label_21e33c:
    // 0x21e33c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x21e33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21e340:
    // 0x21e340: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x21e340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_21e344:
    // 0x21e344: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x21e344u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_21e348:
    // 0x21e348: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x21e348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21e34c:
    // 0x21e34c: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x21e34cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
label_21e350:
    // 0x21e350: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x21e350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21e354:
    // 0x21e354: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21e354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21e358:
    // 0x21e358: 0x40f809  jalr        $v0
label_21e35c:
    if (ctx->pc == 0x21E35Cu) {
        ctx->pc = 0x21E360u;
        goto label_21e360;
    }
    ctx->pc = 0x21E358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E360u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E358u, 0x21E360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E360u;
label_21e360:
    // 0x21e360: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x21e360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_21e364:
    // 0x21e364: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_21e368:
    if (ctx->pc == 0x21E368u) {
        ctx->pc = 0x21E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E364u;
        // 0x21e368: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E36Cu;
        goto label_21e36c;
    }
    ctx->pc = 0x21E364u;
    {
        const bool branch_taken_0x21e364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E364u;
        // 0x21e368: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e364) {
            ctx->pc = 0x21E378u;
            goto label_21e378;
        }
    }
    ctx->pc = 0x21E36Cu;
label_21e36c:
    // 0x21e36c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x21e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_21e370:
    // 0x21e370: 0x10000003  b           . + 4 + (0x3 << 2)
label_21e374:
    if (ctx->pc == 0x21E374u) {
        ctx->pc = 0x21E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E370u;
        // 0x21e374: 0x8c5500b4  lw          $s5, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E378u;
        goto label_21e378;
    }
    ctx->pc = 0x21E370u;
    {
        const bool branch_taken_0x21e370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E370u;
        // 0x21e374: 0x8c5500b4  lw          $s5, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e370) {
            ctx->pc = 0x21E380u;
            goto label_21e380;
        }
    }
    ctx->pc = 0x21E378u;
label_21e378:
    // 0x21e378: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x21e378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_21e37c:
    // 0x21e37c: 0x8c5500c4  lw          $s5, 0xC4($v0)
    ctx->pc = 0x21e37cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_21e380:
    // 0x21e380: 0x56a0000b  bnel        $s5, $zero, . + 4 + (0xB << 2)
label_21e384:
    if (ctx->pc == 0x21E384u) {
        ctx->pc = 0x21E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E380u;
        // 0x21e384: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E388u;
        goto label_21e388;
    }
    ctx->pc = 0x21E380u;
    {
        const bool branch_taken_0x21e380 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e380) {
            ctx->pc = 0x21E384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E380u;
            // 0x21e384: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E3B0u;
            goto label_21e3b0;
        }
    }
    ctx->pc = 0x21E388u;
label_21e388:
    // 0x21e388: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x21e388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21e38c:
    // 0x21e38c: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x21e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_21e390:
    // 0x21e390: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x21e390u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_21e394:
    // 0x21e394: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x21e394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21e398:
    // 0x21e398: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x21e398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
label_21e39c:
    // 0x21e39c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x21e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21e3a0:
    // 0x21e3a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21e3a4:
    // 0x21e3a4: 0x40f809  jalr        $v0
label_21e3a8:
    if (ctx->pc == 0x21E3A8u) {
        ctx->pc = 0x21E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3A4u;
        // 0x21e3a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E3ACu;
        goto label_21e3ac;
    }
    ctx->pc = 0x21E3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E3ACu);
        ctx->pc = 0x21E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3A4u;
        // 0x21e3a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E3A4u, 0x21E3ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E3ACu;
label_21e3ac:
    // 0x21e3ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21e3b0:
    // 0x21e3b0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_21e3b4:
    if (ctx->pc == 0x21E3B4u) {
        ctx->pc = 0x21E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3B0u;
        // 0x21e3b4: 0x8e360000  lw          $s6, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E3B8u;
        goto label_21e3b8;
    }
    ctx->pc = 0x21E3B0u;
    {
        const bool branch_taken_0x21e3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e3b0) {
            ctx->pc = 0x21E3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E3B0u;
            // 0x21e3b4: 0x8e360000  lw          $s6, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E3D8u;
            goto label_21e3d8;
        }
    }
    ctx->pc = 0x21E3B8u;
label_21e3b8:
    // 0x21e3b8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x21e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_21e3bc:
    // 0x21e3bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e3c0:
    // 0x21e3c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21e3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e3c4:
    // 0x21e3c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21e3c8:
    // 0x21e3c8: 0x40f809  jalr        $v0
label_21e3cc:
    if (ctx->pc == 0x21E3CCu) {
        ctx->pc = 0x21E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3C8u;
        // 0x21e3cc: 0x24060620  addiu       $a2, $zero, 0x620 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E3D0u;
        goto label_21e3d0;
    }
    ctx->pc = 0x21E3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E3D0u);
        ctx->pc = 0x21E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3C8u;
        // 0x21e3cc: 0x24060620  addiu       $a2, $zero, 0x620 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1568));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E3C8u, 0x21E3D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E3D0u;
label_21e3d0:
    // 0x21e3d0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21e3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21e3d4:
    // 0x21e3d4: 0x8e360000  lw          $s6, 0x0($s1)
    ctx->pc = 0x21e3d4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21e3d8:
    // 0x21e3d8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21e3d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e3dc:
    // 0x21e3dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21e3dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e3e0:
    // 0x21e3e0: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x21e3e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21e3e4:
    // 0x21e3e4: 0xaed50118  sw          $s5, 0x118($s6)
    ctx->pc = 0x21e3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 280), GPR_U32(ctx, 21));
label_21e3e8:
    // 0x21e3e8: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x21e3e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21e3ec:
    // 0x21e3ec: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x21e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_21e3f0:
    // 0x21e3f0: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x21e3f0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21e3f4:
    // 0x21e3f4: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
label_21e3f8:
    if (ctx->pc == 0x21E3F8u) {
        ctx->pc = 0x21E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3F4u;
        // 0x21e3f8: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E3FCu;
        goto label_21e3fc;
    }
    ctx->pc = 0x21E3F4u;
    {
        const bool branch_taken_0x21e3f4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x21E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3F4u;
        // 0x21e3f8: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e3f4) {
            ctx->pc = 0x21E408u;
            goto label_21e408;
        }
    }
    ctx->pc = 0x21E3FCu;
label_21e3fc:
    // 0x21e3fc: 0x28420101  slti        $v0, $v0, 0x101
    ctx->pc = 0x21e3fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)257) ? 1 : 0);
label_21e400:
    // 0x21e400: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_21e404:
    if (ctx->pc == 0x21E404u) {
        ctx->pc = 0x21E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E400u;
        // 0x21e404: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E408u;
        goto label_21e408;
    }
    ctx->pc = 0x21E400u;
    {
        const bool branch_taken_0x21e400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e400) {
            ctx->pc = 0x21E404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E400u;
            // 0x21e404: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E424u;
            goto label_21e424;
        }
    }
    ctx->pc = 0x21E408u;
label_21e408:
    // 0x21e408: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x21e408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21e40c:
    // 0x21e40c: 0xac570014  sw          $s7, 0x14($v0)
    ctx->pc = 0x21e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 23));
label_21e410:
    // 0x21e410: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x21e410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21e414:
    // 0x21e414: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21e414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21e418:
    // 0x21e418: 0x40f809  jalr        $v0
label_21e41c:
    if (ctx->pc == 0x21E41Cu) {
        ctx->pc = 0x21E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E418u;
        // 0x21e41c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E420u;
        goto label_21e420;
    }
    ctx->pc = 0x21E418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E420u);
        ctx->pc = 0x21E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E418u;
        // 0x21e41c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E418u, 0x21E420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E420u;
label_21e420:
    // 0x21e420: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x21e420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_21e424:
    // 0x21e424: 0x264c0001  addiu       $t4, $s2, 0x1
    ctx->pc = 0x21e424u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_21e428:
    // 0x21e428: 0x12140009  beq         $s0, $s4, . + 4 + (0x9 << 2)
label_21e42c:
    if (ctx->pc == 0x21E42Cu) {
        ctx->pc = 0x21E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E428u;
        // 0x21e42c: 0x26de011c  addiu       $fp, $s6, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E430u;
        goto label_21e430;
    }
    ctx->pc = 0x21E428u;
    {
        const bool branch_taken_0x21e428 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x21E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E428u;
        // 0x21e42c: 0x26de011c  addiu       $fp, $s6, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e428) {
            ctx->pc = 0x21E450u;
            goto label_21e450;
        }
    }
    ctx->pc = 0x21E430u;
label_21e430:
    // 0x21e430: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21e430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21e434:
    // 0x21e434: 0x0  nop
    ctx->pc = 0x21e434u;
    // NOP
label_21e438:
    // 0x21e438: 0x3b11021  addu        $v0, $sp, $s1
    ctx->pc = 0x21e438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
label_21e43c:
    // 0x21e43c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x21e43cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_21e440:
    // 0x21e440: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x21e440u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
label_21e444:
    // 0x21e444: 0x0  nop
    ctx->pc = 0x21e444u;
    // NOP
label_21e448:
    // 0x21e448: 0x1603fffb  bne         $s0, $v1, . + 4 + (-0x5 << 2)
label_21e44c:
    if (ctx->pc == 0x21E44Cu) {
        ctx->pc = 0x21E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E448u;
        // 0x21e44c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E450u;
        goto label_21e450;
    }
    ctx->pc = 0x21E448u;
    {
        const bool branch_taken_0x21e448 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x21E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E448u;
        // 0x21e44c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e448) {
            ctx->pc = 0x21E438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e438;
        }
    }
    ctx->pc = 0x21E450u;
label_21e450:
    // 0x21e450: 0x180902d  daddu       $s2, $t4, $zero
    ctx->pc = 0x21e450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_21e454:
    // 0x21e454: 0x2a420011  slti        $v0, $s2, 0x11
    ctx->pc = 0x21e454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)17) ? 1 : 0);
label_21e458:
    // 0x21e458: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_21e45c:
    if (ctx->pc == 0x21E45Cu) {
        ctx->pc = 0x21E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E458u;
        // 0x21e45c: 0x2b21021  addu        $v0, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E460u;
        goto label_21e460;
    }
    ctx->pc = 0x21E458u;
    {
        const bool branch_taken_0x21e458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E458u;
        // 0x21e45c: 0x2b21021  addu        $v0, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e458) {
            ctx->pc = 0x21E3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e3f0;
        }
    }
    ctx->pc = 0x21E460u;
label_21e460:
    // 0x21e460: 0x3b11021  addu        $v0, $sp, $s1
    ctx->pc = 0x21e460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
label_21e464:
    // 0x21e464: 0xafb10524  sw          $s1, 0x524($sp)
    ctx->pc = 0x21e464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1316), GPR_U32(ctx, 17));
label_21e468:
    // 0x21e468: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x21e468u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_21e46c:
    // 0x21e46c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21e46cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e470:
    // 0x21e470: 0x83a50000  lb          $a1, 0x0($sp)
    ctx->pc = 0x21e470u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_21e474:
    // 0x21e474: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
label_21e478:
    if (ctx->pc == 0x21E478u) {
        ctx->pc = 0x21E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E474u;
        // 0x21e478: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E47Cu;
        goto label_21e47c;
    }
    ctx->pc = 0x21E474u;
    {
        const bool branch_taken_0x21e474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E474u;
        // 0x21e478: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e474) {
            ctx->pc = 0x21E508u;
            goto label_21e508;
        }
    }
    ctx->pc = 0x21E47Cu;
label_21e47c:
    // 0x21e47c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x21e47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21e480:
    // 0x21e480: 0x27b70110  addiu       $s7, $sp, 0x110
    ctx->pc = 0x21e480u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_21e484:
    // 0x21e484: 0x0  nop
    ctx->pc = 0x21e484u;
    // NOP
label_21e488:
    // 0x21e488: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x21e488u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21e48c:
    // 0x21e48c: 0x1445000c  bne         $v0, $a1, . + 4 + (0xC << 2)
label_21e490:
    if (ctx->pc == 0x21E490u) {
        ctx->pc = 0x21E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E48Cu;
        // 0x21e490: 0x24b40001  addiu       $s4, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E494u;
        goto label_21e494;
    }
    ctx->pc = 0x21E48Cu;
    {
        const bool branch_taken_0x21e48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x21E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E48Cu;
        // 0x21e490: 0x24b40001  addiu       $s4, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e48c) {
            ctx->pc = 0x21E4C0u;
            goto label_21e4c0;
        }
    }
    ctx->pc = 0x21E494u;
label_21e494:
    // 0x21e494: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x21e494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_21e498:
    // 0x21e498: 0x23d2021  addu        $a0, $s1, $sp
    ctx->pc = 0x21e498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_21e49c:
    // 0x21e49c: 0x2e21821  addu        $v1, $s7, $v0
    ctx->pc = 0x21e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_21e4a0:
    // 0x21e4a0: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x21e4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_21e4a4:
    // 0x21e4a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_21e4a8:
    // 0x21e4a8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x21e4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_21e4ac:
    // 0x21e4ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21e4acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21e4b0:
    // 0x21e4b0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x21e4b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_21e4b4:
    // 0x21e4b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21e4b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21e4b8:
    // 0x21e4b8: 0x1045fff9  beq         $v0, $a1, . + 4 + (-0x7 << 2)
label_21e4bc:
    if (ctx->pc == 0x21E4BCu) {
        ctx->pc = 0x21E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4B8u;
        // 0x21e4bc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E4C0u;
        goto label_21e4c0;
    }
    ctx->pc = 0x21E4B8u;
    {
        const bool branch_taken_0x21e4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x21E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4B8u;
        // 0x21e4bc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e4b8) {
            ctx->pc = 0x21E4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e4a0;
        }
    }
    ctx->pc = 0x21E4C0u;
label_21e4c0:
    // 0x21e4c0: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x21e4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_21e4c4:
    // 0x21e4c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21e4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e4c8:
    // 0x21e4c8: 0xa41814  dsllv       $v1, $a0, $a1
    ctx->pc = 0x21e4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (GPR_U32(ctx, 5) & 0x3F));
label_21e4cc:
    // 0x21e4cc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21e4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_21e4d0:
    // 0x21e4d0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x21e4d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21e4d4:
    // 0x21e4d4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_21e4d8:
    if (ctx->pc == 0x21E4D8u) {
        ctx->pc = 0x21E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4D4u;
        // 0x21e4d8: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E4DCu;
        goto label_21e4dc;
    }
    ctx->pc = 0x21E4D4u;
    {
        const bool branch_taken_0x21e4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e4d4) {
            ctx->pc = 0x21E4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E4D4u;
            // 0x21e4d8: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E4FCu;
            goto label_21e4fc;
        }
    }
    ctx->pc = 0x21E4DCu;
label_21e4dc:
    // 0x21e4dc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x21e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21e4e0:
    // 0x21e4e0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x21e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21e4e4:
    // 0x21e4e4: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x21e4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_21e4e8:
    // 0x21e4e8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x21e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21e4ec:
    // 0x21e4ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21e4f0:
    // 0x21e4f0: 0x40f809  jalr        $v0
label_21e4f4:
    if (ctx->pc == 0x21E4F4u) {
        ctx->pc = 0x21E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4F0u;
        // 0x21e4f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E4F8u;
        goto label_21e4f8;
    }
    ctx->pc = 0x21E4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E4F8u);
        ctx->pc = 0x21E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4F0u;
        // 0x21e4f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E4F0u, 0x21E4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E4F8u;
label_21e4f8:
    // 0x21e4f8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x21e4f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21e4fc:
    // 0x21e4fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21e4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21e500:
    // 0x21e500: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_21e504:
    if (ctx->pc == 0x21E504u) {
        ctx->pc = 0x21E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E500u;
        // 0x21e504: 0x129040  sll         $s2, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E508u;
        goto label_21e508;
    }
    ctx->pc = 0x21E500u;
    {
        const bool branch_taken_0x21e500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E500u;
        // 0x21e504: 0x129040  sll         $s2, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e500) {
            ctx->pc = 0x21E488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e488;
        }
    }
    ctx->pc = 0x21E508u;
label_21e508:
    // 0x21e508: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21e508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e50c:
    // 0x21e50c: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x21e50cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_21e510:
    // 0x21e510: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x21e510u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21e514:
    // 0x21e514: 0x26c50008  addiu       $a1, $s6, 0x8
    ctx->pc = 0x21e514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_21e518:
    // 0x21e518: 0x26a60001  addiu       $a2, $s5, 0x1
    ctx->pc = 0x21e518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_21e51c:
    // 0x21e51c: 0x26c80088  addiu       $t0, $s6, 0x88
    ctx->pc = 0x21e51cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 136));
label_21e520:
    // 0x21e520: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x21e520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_21e524:
    // 0x21e524: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_21e528:
    if (ctx->pc == 0x21E528u) {
        ctx->pc = 0x21E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E524u;
        // 0x21e528: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E52Cu;
        goto label_21e52c;
    }
    ctx->pc = 0x21E524u;
    {
        const bool branch_taken_0x21e524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E524u;
        // 0x21e528: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e524) {
            ctx->pc = 0x21E55Cu;
            goto label_21e55c;
        }
    }
    ctx->pc = 0x21E52Cu;
label_21e52c:
    // 0x21e52c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x21e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_21e530:
    // 0x21e530: 0x9c430000  lwu         $v1, 0x0($v0)
    ctx->pc = 0x21e530u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21e534:
    // 0x21e534: 0x223182f  dsubu       $v1, $s1, $v1
    ctx->pc = 0x21e534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) - GPR_U64(ctx, 3));
label_21e538:
    // 0x21e538: 0xfca30090  sd          $v1, 0x90($a1)
    ctx->pc = 0x21e538u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 144), GPR_U64(ctx, 3));
label_21e53c:
    // 0x21e53c: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x21e53cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_21e540:
    // 0x21e540: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x21e540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_21e544:
    // 0x21e544: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x21e544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_21e548:
    // 0x21e548: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21e548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21e54c:
    // 0x21e54c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x21e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_21e550:
    // 0x21e550: 0x9c430000  lwu         $v1, 0x0($v0)
    ctx->pc = 0x21e550u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21e554:
    // 0x21e554: 0x10000002  b           . + 4 + (0x2 << 2)
label_21e558:
    if (ctx->pc == 0x21E558u) {
        ctx->pc = 0x21E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E554u;
        // 0x21e558: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E55Cu;
        goto label_21e55c;
    }
    ctx->pc = 0x21E554u;
    {
        const bool branch_taken_0x21e554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E554u;
        // 0x21e558: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e554) {
            ctx->pc = 0x21E560u;
            goto label_21e560;
        }
    }
    ctx->pc = 0x21E55Cu;
label_21e55c:
    // 0x21e55c: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x21e55cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
label_21e560:
    // 0x21e560: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x21e560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_21e564:
    // 0x21e564: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x21e564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_21e568:
    // 0x21e568: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_21e56c:
    if (ctx->pc == 0x21E56Cu) {
        ctx->pc = 0x21E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E568u;
        // 0x21e56c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E570u;
        goto label_21e570;
    }
    ctx->pc = 0x21E568u;
    {
        const bool branch_taken_0x21e568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E568u;
        // 0x21e56c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e568) {
            ctx->pc = 0x21E520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e520;
        }
    }
    ctx->pc = 0x21E570u;
label_21e570:
    // 0x21e570: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x21e570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_21e574:
    // 0x21e574: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21e574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_21e578:
    // 0x21e578: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x21e578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_21e57c:
    // 0x21e57c: 0xfec20088  sd          $v0, 0x88($s6)
    ctx->pc = 0x21e57cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 136), GPR_U64(ctx, 2));
label_21e580:
    // 0x21e580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21e580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e584:
    // 0x21e584: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x21e584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_21e588:
    // 0x21e588: 0xc0c493d  jal         func_3124F4
label_21e58c:
    if (ctx->pc == 0x21E58Cu) {
        ctx->pc = 0x21E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E588u;
        // 0x21e58c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E590u;
        goto label_21e590;
    }
    ctx->pc = 0x21E588u;
    SET_GPR_U32(ctx, 31, 0x21E590u);
    ctx->pc = 0x21E58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E588u;
    // 0x21e58c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x21E588u, 0x21E590u)) {
        return;
    }
    ctx->pc = 0x21E590u;
label_21e590:
    // 0x21e590: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21e590u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e594:
    // 0x21e594: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x21e594u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21e598:
    // 0x21e598: 0x2b21821  addu        $v1, $s5, $s2
    ctx->pc = 0x21e598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_21e59c:
    // 0x21e59c: 0x0  nop
    ctx->pc = 0x21e59cu;
    // NOP
label_21e5a0:
    // 0x21e5a0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x21e5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e5a4:
    // 0x21e5a4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x21e5a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_21e5a8:
    // 0x21e5a8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_21e5ac:
    if (ctx->pc == 0x21E5ACu) {
        ctx->pc = 0x21E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5A8u;
        // 0x21e5ac: 0x264c0001  addiu       $t4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5B0u;
        goto label_21e5b0;
    }
    ctx->pc = 0x21E5A8u;
    {
        const bool branch_taken_0x21e5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5A8u;
        // 0x21e5ac: 0x264c0001  addiu       $t4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5a8) {
            ctx->pc = 0x21E62Cu;
            goto label_21e62c;
        }
    }
    ctx->pc = 0x21E5B0u;
label_21e5b0:
    // 0x21e5b0: 0x60c02d  daddu       $t8, $v1, $zero
    ctx->pc = 0x21e5b0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21e5b4:
    // 0x21e5b4: 0x27af0110  addiu       $t7, $sp, 0x110
    ctx->pc = 0x21e5b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_21e5b8:
    // 0x21e5b8: 0x2f24823  subu        $t1, $s7, $s2
    ctx->pc = 0x21e5b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_21e5bc:
    // 0x21e5bc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x21e5bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e5c0:
    // 0x21e5c0: 0x3c0702d  daddu       $t6, $fp, $zero
    ctx->pc = 0x21e5c0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_21e5c4:
    // 0x21e5c4: 0x26ad0011  addiu       $t5, $s5, 0x11
    ctx->pc = 0x21e5c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 21), 17));
label_21e5c8:
    // 0x21e5c8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x21e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_21e5cc:
    // 0x21e5cc: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x21e5ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21e5d0:
    // 0x21e5d0: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x21e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
label_21e5d4:
    // 0x21e5d4: 0x1343004  sllv        $a2, $s4, $t1
    ctx->pc = 0x21e5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 9) & 0x1F));
label_21e5d8:
    // 0x21e5d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21e5dc:
    // 0x21e5dc: 0x262a0001  addiu       $t2, $s1, 0x1
    ctx->pc = 0x21e5dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21e5e0:
    // 0x21e5e0: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
label_21e5e4:
    if (ctx->pc == 0x21E5E4u) {
        ctx->pc = 0x21E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5E0u;
        // 0x21e5e4: 0x1232004  sllv        $a0, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5E8u;
        goto label_21e5e8;
    }
    ctx->pc = 0x21E5E0u;
    {
        const bool branch_taken_0x21e5e0 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x21E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5E0u;
        // 0x21e5e4: 0x1232004  sllv        $a0, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5e0) {
            ctx->pc = 0x21E618u;
            goto label_21e618;
        }
    }
    ctx->pc = 0x21E5E8u;
label_21e5e8:
    // 0x21e5e8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x21e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_21e5ec:
    // 0x21e5ec: 0x1b14021  addu        $t0, $t5, $s1
    ctx->pc = 0x21e5ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
label_21e5f0:
    // 0x21e5f0: 0x4e2821  addu        $a1, $v0, $t6
    ctx->pc = 0x21e5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
label_21e5f4:
    // 0x21e5f4: 0x26c7051c  addiu       $a3, $s6, 0x51C
    ctx->pc = 0x21e5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 1308));
label_21e5f8:
    // 0x21e5f8: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x21e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18));
label_21e5fc:
    // 0x21e5fc: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x21e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_21e600:
    // 0x21e600: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x21e600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_21e604:
    // 0x21e604: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21e604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_21e608:
    // 0x21e608: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x21e608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_21e60c:
    // 0x21e60c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x21e60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_21e610:
    // 0x21e610: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_21e614:
    if (ctx->pc == 0x21E614u) {
        ctx->pc = 0x21E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E610u;
        // 0x21e614: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E618u;
        goto label_21e618;
    }
    ctx->pc = 0x21E610u;
    {
        const bool branch_taken_0x21e610 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x21E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E610u;
        // 0x21e614: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e610) {
            ctx->pc = 0x21E5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e5f8;
        }
    }
    ctx->pc = 0x21E618u;
label_21e618:
    // 0x21e618: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x21e618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
label_21e61c:
    // 0x21e61c: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x21e61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_21e620:
    // 0x21e620: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x21e620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_21e624:
    // 0x21e624: 0x1040ffe8  beqz        $v0, . + 4 + (-0x18 << 2)
label_21e628:
    if (ctx->pc == 0x21E628u) {
        ctx->pc = 0x21E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E624u;
        // 0x21e628: 0x140882d  daddu       $s1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E62Cu;
        goto label_21e62c;
    }
    ctx->pc = 0x21E624u;
    {
        const bool branch_taken_0x21e624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E624u;
        // 0x21e628: 0x140882d  daddu       $s1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e624) {
            ctx->pc = 0x21E5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e5c8;
        }
    }
    ctx->pc = 0x21E62Cu;
label_21e62c:
    // 0x21e62c: 0x180902d  daddu       $s2, $t4, $zero
    ctx->pc = 0x21e62cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_21e630:
    // 0x21e630: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x21e630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
label_21e634:
    // 0x21e634: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
label_21e638:
    if (ctx->pc == 0x21E638u) {
        ctx->pc = 0x21E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E634u;
        // 0x21e638: 0x2b21821  addu        $v1, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E63Cu;
        goto label_21e63c;
    }
    ctx->pc = 0x21E634u;
    {
        const bool branch_taken_0x21e634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e634) {
            ctx->pc = 0x21E638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E634u;
            // 0x21e638: 0x2b21821  addu        $v1, $s5, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e5a0;
        }
    }
    ctx->pc = 0x21E63Cu;
label_21e63c:
    // 0x21e63c: 0x8fa40520  lw          $a0, 0x520($sp)
    ctx->pc = 0x21e63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_21e640:
    // 0x21e640: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_21e644:
    if (ctx->pc == 0x21E644u) {
        ctx->pc = 0x21E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E640u;
        // 0x21e644: 0x8fa20524  lw          $v0, 0x524($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E648u;
        goto label_21e648;
    }
    ctx->pc = 0x21E640u;
    {
        const bool branch_taken_0x21e640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E640u;
        // 0x21e644: 0x8fa20524  lw          $v0, 0x524($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e640) {
            ctx->pc = 0x21E69Cu;
            goto label_21e69c;
        }
    }
    ctx->pc = 0x21E648u;
label_21e648:
    // 0x21e648: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_21e64c:
    if (ctx->pc == 0x21E64Cu) {
        ctx->pc = 0x21E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E648u;
        // 0x21e64c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E650u;
        goto label_21e650;
    }
    ctx->pc = 0x21E648u;
    {
        const bool branch_taken_0x21e648 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E648u;
        // 0x21e64c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e648) {
            ctx->pc = 0x21E69Cu;
            goto label_21e69c;
        }
    }
    ctx->pc = 0x21E650u;
label_21e650:
    // 0x21e650: 0x26b10011  addiu       $s1, $s5, 0x11
    ctx->pc = 0x21e650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 17));
label_21e654:
    // 0x21e654: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x21e654u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21e658:
    // 0x21e658: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x21e658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_21e65c:
    // 0x21e65c: 0x0  nop
    ctx->pc = 0x21e65cu;
    // NOP
label_21e660:
    // 0x21e660: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x21e660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_21e664:
    // 0x21e664: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x21e664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_21e668:
    // 0x21e668: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_21e66c:
    if (ctx->pc == 0x21E66Cu) {
        ctx->pc = 0x21E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E668u;
        // 0x21e66c: 0x8fa30524  lw          $v1, 0x524($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E670u;
        goto label_21e670;
    }
    ctx->pc = 0x21E668u;
    {
        const bool branch_taken_0x21e668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E668u;
        // 0x21e66c: 0x8fa30524  lw          $v1, 0x524($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e668) {
            ctx->pc = 0x21E68Cu;
            goto label_21e68c;
        }
    }
    ctx->pc = 0x21E670u;
label_21e670:
    // 0x21e670: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x21e670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21e674:
    // 0x21e674: 0xac520014  sw          $s2, 0x14($v0)
    ctx->pc = 0x21e674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 18));
label_21e678:
    // 0x21e678: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x21e678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21e67c:
    // 0x21e67c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21e680:
    // 0x21e680: 0x40f809  jalr        $v0
label_21e684:
    if (ctx->pc == 0x21E684u) {
        ctx->pc = 0x21E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E680u;
        // 0x21e684: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E688u;
        goto label_21e688;
    }
    ctx->pc = 0x21E680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E688u);
        ctx->pc = 0x21E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E680u;
        // 0x21e684: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E680u, 0x21E688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E688u;
label_21e688:
    // 0x21e688: 0x8fa30524  lw          $v1, 0x524($sp)
    ctx->pc = 0x21e688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1316)));
label_21e68c:
    // 0x21e68c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21e68cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21e690:
    // 0x21e690: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x21e690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21e694:
    // 0x21e694: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_21e698:
    if (ctx->pc == 0x21E698u) {
        ctx->pc = 0x21E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E694u;
        // 0x21e698: 0x2301821  addu        $v1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E69Cu;
        goto label_21e69c;
    }
    ctx->pc = 0x21E694u;
    {
        const bool branch_taken_0x21e694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E694u;
        // 0x21e698: 0x2301821  addu        $v1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e694) {
            ctx->pc = 0x21E660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e660;
        }
    }
    ctx->pc = 0x21E69Cu;
label_21e69c:
    // 0x21e69c: 0x7bb005c0  lq          $s0, 0x5C0($sp)
    ctx->pc = 0x21e69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1472)));
label_21e6a0:
    // 0x21e6a0: 0x7bb105b0  lq          $s1, 0x5B0($sp)
    ctx->pc = 0x21e6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1456)));
label_21e6a4:
    // 0x21e6a4: 0x7bb205a0  lq          $s2, 0x5A0($sp)
    ctx->pc = 0x21e6a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1440)));
label_21e6a8:
    // 0x21e6a8: 0x7bb30590  lq          $s3, 0x590($sp)
    ctx->pc = 0x21e6a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1424)));
label_21e6ac:
    // 0x21e6ac: 0x7bb40580  lq          $s4, 0x580($sp)
    ctx->pc = 0x21e6acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
label_21e6b0:
    // 0x21e6b0: 0x7bb50570  lq          $s5, 0x570($sp)
    ctx->pc = 0x21e6b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
label_21e6b4:
    // 0x21e6b4: 0x7bb60560  lq          $s6, 0x560($sp)
    ctx->pc = 0x21e6b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
label_21e6b8:
    // 0x21e6b8: 0x7bb70550  lq          $s7, 0x550($sp)
    ctx->pc = 0x21e6b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_21e6bc:
    // 0x21e6bc: 0x7bbe0540  lq          $fp, 0x540($sp)
    ctx->pc = 0x21e6bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_21e6c0:
    // 0x21e6c0: 0xdfbf0530  ld          $ra, 0x530($sp)
    ctx->pc = 0x21e6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1328)));
label_21e6c4:
    // 0x21e6c4: 0x3e00008  jr          $ra
label_21e6c8:
    if (ctx->pc == 0x21E6C8u) {
        ctx->pc = 0x21E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E6C4u;
        // 0x21e6c8: 0x27bd05d0  addiu       $sp, $sp, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E6CCu;
        goto label_21e6cc;
    }
    ctx->pc = 0x21E6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E6C4u;
        // 0x21e6c8: 0x27bd05d0  addiu       $sp, $sp, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E6CCu;
label_21e6cc:
    // 0x21e6cc: 0x0  nop
    ctx->pc = 0x21e6ccu;
    // NOP
    ctx->pc = 0x21e6d0u;
}
