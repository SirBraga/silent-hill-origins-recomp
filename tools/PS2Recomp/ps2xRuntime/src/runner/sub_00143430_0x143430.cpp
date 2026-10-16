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

// Function: sub_00143430
// Address: 0x143430 - 0x1436f0
void sub_00143430_0x143430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143430_0x143430");
#endif

    switch (ctx->pc) {
        case 0x143430u: goto label_143430;
        case 0x143434u: goto label_143434;
        case 0x143438u: goto label_143438;
        case 0x14343cu: goto label_14343c;
        case 0x143440u: goto label_143440;
        case 0x143444u: goto label_143444;
        case 0x143448u: goto label_143448;
        case 0x14344cu: goto label_14344c;
        case 0x143450u: goto label_143450;
        case 0x143454u: goto label_143454;
        case 0x143458u: goto label_143458;
        case 0x14345cu: goto label_14345c;
        case 0x143460u: goto label_143460;
        case 0x143464u: goto label_143464;
        case 0x143468u: goto label_143468;
        case 0x14346cu: goto label_14346c;
        case 0x143470u: goto label_143470;
        case 0x143474u: goto label_143474;
        case 0x143478u: goto label_143478;
        case 0x14347cu: goto label_14347c;
        case 0x143480u: goto label_143480;
        case 0x143484u: goto label_143484;
        case 0x143488u: goto label_143488;
        case 0x14348cu: goto label_14348c;
        case 0x143490u: goto label_143490;
        case 0x143494u: goto label_143494;
        case 0x143498u: goto label_143498;
        case 0x14349cu: goto label_14349c;
        case 0x1434a0u: goto label_1434a0;
        case 0x1434a4u: goto label_1434a4;
        case 0x1434a8u: goto label_1434a8;
        case 0x1434acu: goto label_1434ac;
        case 0x1434b0u: goto label_1434b0;
        case 0x1434b4u: goto label_1434b4;
        case 0x1434b8u: goto label_1434b8;
        case 0x1434bcu: goto label_1434bc;
        case 0x1434c0u: goto label_1434c0;
        case 0x1434c4u: goto label_1434c4;
        case 0x1434c8u: goto label_1434c8;
        case 0x1434ccu: goto label_1434cc;
        case 0x1434d0u: goto label_1434d0;
        case 0x1434d4u: goto label_1434d4;
        case 0x1434d8u: goto label_1434d8;
        case 0x1434dcu: goto label_1434dc;
        case 0x1434e0u: goto label_1434e0;
        case 0x1434e4u: goto label_1434e4;
        case 0x1434e8u: goto label_1434e8;
        case 0x1434ecu: goto label_1434ec;
        case 0x1434f0u: goto label_1434f0;
        case 0x1434f4u: goto label_1434f4;
        case 0x1434f8u: goto label_1434f8;
        case 0x1434fcu: goto label_1434fc;
        case 0x143500u: goto label_143500;
        case 0x143504u: goto label_143504;
        case 0x143508u: goto label_143508;
        case 0x14350cu: goto label_14350c;
        case 0x143510u: goto label_143510;
        case 0x143514u: goto label_143514;
        case 0x143518u: goto label_143518;
        case 0x14351cu: goto label_14351c;
        case 0x143520u: goto label_143520;
        case 0x143524u: goto label_143524;
        case 0x143528u: goto label_143528;
        case 0x14352cu: goto label_14352c;
        case 0x143530u: goto label_143530;
        case 0x143534u: goto label_143534;
        case 0x143538u: goto label_143538;
        case 0x14353cu: goto label_14353c;
        case 0x143540u: goto label_143540;
        case 0x143544u: goto label_143544;
        case 0x143548u: goto label_143548;
        case 0x14354cu: goto label_14354c;
        case 0x143550u: goto label_143550;
        case 0x143554u: goto label_143554;
        case 0x143558u: goto label_143558;
        case 0x14355cu: goto label_14355c;
        case 0x143560u: goto label_143560;
        case 0x143564u: goto label_143564;
        case 0x143568u: goto label_143568;
        case 0x14356cu: goto label_14356c;
        case 0x143570u: goto label_143570;
        case 0x143574u: goto label_143574;
        case 0x143578u: goto label_143578;
        case 0x14357cu: goto label_14357c;
        case 0x143580u: goto label_143580;
        case 0x143584u: goto label_143584;
        case 0x143588u: goto label_143588;
        case 0x14358cu: goto label_14358c;
        case 0x143590u: goto label_143590;
        case 0x143594u: goto label_143594;
        case 0x143598u: goto label_143598;
        case 0x14359cu: goto label_14359c;
        case 0x1435a0u: goto label_1435a0;
        case 0x1435a4u: goto label_1435a4;
        case 0x1435a8u: goto label_1435a8;
        case 0x1435acu: goto label_1435ac;
        case 0x1435b0u: goto label_1435b0;
        case 0x1435b4u: goto label_1435b4;
        case 0x1435b8u: goto label_1435b8;
        case 0x1435bcu: goto label_1435bc;
        case 0x1435c0u: goto label_1435c0;
        case 0x1435c4u: goto label_1435c4;
        case 0x1435c8u: goto label_1435c8;
        case 0x1435ccu: goto label_1435cc;
        case 0x1435d0u: goto label_1435d0;
        case 0x1435d4u: goto label_1435d4;
        case 0x1435d8u: goto label_1435d8;
        case 0x1435dcu: goto label_1435dc;
        case 0x1435e0u: goto label_1435e0;
        case 0x1435e4u: goto label_1435e4;
        case 0x1435e8u: goto label_1435e8;
        case 0x1435ecu: goto label_1435ec;
        case 0x1435f0u: goto label_1435f0;
        case 0x1435f4u: goto label_1435f4;
        case 0x1435f8u: goto label_1435f8;
        case 0x1435fcu: goto label_1435fc;
        case 0x143600u: goto label_143600;
        case 0x143604u: goto label_143604;
        case 0x143608u: goto label_143608;
        case 0x14360cu: goto label_14360c;
        case 0x143610u: goto label_143610;
        case 0x143614u: goto label_143614;
        case 0x143618u: goto label_143618;
        case 0x14361cu: goto label_14361c;
        case 0x143620u: goto label_143620;
        case 0x143624u: goto label_143624;
        case 0x143628u: goto label_143628;
        case 0x14362cu: goto label_14362c;
        case 0x143630u: goto label_143630;
        case 0x143634u: goto label_143634;
        case 0x143638u: goto label_143638;
        case 0x14363cu: goto label_14363c;
        case 0x143640u: goto label_143640;
        case 0x143644u: goto label_143644;
        case 0x143648u: goto label_143648;
        case 0x14364cu: goto label_14364c;
        case 0x143650u: goto label_143650;
        case 0x143654u: goto label_143654;
        case 0x143658u: goto label_143658;
        case 0x14365cu: goto label_14365c;
        case 0x143660u: goto label_143660;
        case 0x143664u: goto label_143664;
        case 0x143668u: goto label_143668;
        case 0x14366cu: goto label_14366c;
        case 0x143670u: goto label_143670;
        case 0x143674u: goto label_143674;
        case 0x143678u: goto label_143678;
        case 0x14367cu: goto label_14367c;
        case 0x143680u: goto label_143680;
        case 0x143684u: goto label_143684;
        case 0x143688u: goto label_143688;
        case 0x14368cu: goto label_14368c;
        case 0x143690u: goto label_143690;
        case 0x143694u: goto label_143694;
        case 0x143698u: goto label_143698;
        case 0x14369cu: goto label_14369c;
        case 0x1436a0u: goto label_1436a0;
        case 0x1436a4u: goto label_1436a4;
        case 0x1436a8u: goto label_1436a8;
        case 0x1436acu: goto label_1436ac;
        case 0x1436b0u: goto label_1436b0;
        case 0x1436b4u: goto label_1436b4;
        case 0x1436b8u: goto label_1436b8;
        case 0x1436bcu: goto label_1436bc;
        case 0x1436c0u: goto label_1436c0;
        case 0x1436c4u: goto label_1436c4;
        case 0x1436c8u: goto label_1436c8;
        case 0x1436ccu: goto label_1436cc;
        case 0x1436d0u: goto label_1436d0;
        case 0x1436d4u: goto label_1436d4;
        case 0x1436d8u: goto label_1436d8;
        case 0x1436dcu: goto label_1436dc;
        case 0x1436e0u: goto label_1436e0;
        case 0x1436e4u: goto label_1436e4;
        case 0x1436e8u: goto label_1436e8;
        case 0x1436ecu: goto label_1436ec;
        default: break;
    }

    ctx->pc = 0x143430u;

label_143430:
    // 0x143430: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x143430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_143434:
    // 0x143434: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x143434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_143438:
    // 0x143438: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x143438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_14343c:
    // 0x14343c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14343cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_143440:
    // 0x143440: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x143440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_143444:
    // 0x143444: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x143444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_143448:
    // 0x143448: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x143448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_14344c:
    // 0x14344c: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x14344cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_143450:
    // 0x143450: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x143450u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_143454:
    // 0x143454: 0x8e6201b8  lw          $v0, 0x1B8($s3)
    ctx->pc = 0x143454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
label_143458:
    // 0x143458: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
label_14345c:
    if (ctx->pc == 0x14345Cu) {
        ctx->pc = 0x14345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143458u;
        // 0x14345c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143460u;
        goto label_143460;
    }
    ctx->pc = 0x143458u;
    {
        const bool branch_taken_0x143458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143458u;
        // 0x14345c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143458) {
            ctx->pc = 0x1436CCu;
            goto label_1436cc;
        }
    }
    ctx->pc = 0x143460u;
label_143460:
    // 0x143460: 0x8c438480  lw          $v1, -0x7B80($v0)
    ctx->pc = 0x143460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935680)));
label_143464:
    // 0x143464: 0x10730005  beq         $v1, $s3, . + 4 + (0x5 << 2)
label_143468:
    if (ctx->pc == 0x143468u) {
        ctx->pc = 0x143468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143464u;
        // 0x143468: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14346Cu;
        goto label_14346c;
    }
    ctx->pc = 0x143464u;
    {
        const bool branch_taken_0x143464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x143468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143464u;
        // 0x143468: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143464) {
            ctx->pc = 0x14347Cu;
            goto label_14347c;
        }
    }
    ctx->pc = 0x14346Cu;
label_14346c:
    // 0x14346c: 0xc05146c  jal         func_1451B0
label_143470:
    if (ctx->pc == 0x143470u) {
        ctx->pc = 0x143474u;
        goto label_143474;
    }
    ctx->pc = 0x14346Cu;
    SET_GPR_U32(ctx, 31, 0x143474u);
    ctx->pc = 0x1451B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1451B0u, 0x14346Cu, 0x143474u)) {
        return;
    }
    ctx->pc = 0x143474u;
label_143474:
    // 0x143474: 0x10000002  b           . + 4 + (0x2 << 2)
label_143478:
    if (ctx->pc == 0x143478u) {
        ctx->pc = 0x143478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143474u;
        // 0x143478: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14347Cu;
        goto label_14347c;
    }
    ctx->pc = 0x143474u;
    {
        const bool branch_taken_0x143474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143474u;
        // 0x143478: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143474) {
            ctx->pc = 0x143480u;
            goto label_143480;
        }
    }
    ctx->pc = 0x14347Cu;
label_14347c:
    // 0x14347c: 0xae620110  sw          $v0, 0x110($s3)
    ctx->pc = 0x14347cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
label_143480:
    // 0x143480: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x143480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_143484:
    // 0x143484: 0x8e7101b8  lw          $s1, 0x1B8($s3)
    ctx->pc = 0x143484u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
label_143488:
    // 0x143488: 0x8c648488  lw          $a0, -0x7B78($v1)
    ctx->pc = 0x143488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935688)));
label_14348c:
    // 0x14348c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14348cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_143490:
    // 0x143490: 0x8c4384b0  lw          $v1, -0x7B50($v0)
    ctx->pc = 0x143490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935728)));
label_143494:
    // 0x143494: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_143498:
    if (ctx->pc == 0x143498u) {
        ctx->pc = 0x143498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143494u;
        // 0x143498: 0x84880b  movn        $s1, $a0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14349Cu;
        goto label_14349c;
    }
    ctx->pc = 0x143494u;
    {
        const bool branch_taken_0x143494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x143498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143494u;
        // 0x143498: 0x84880b  movn        $s1, $a0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143494) {
            ctx->pc = 0x1434A4u;
            goto label_1434a4;
        }
    }
    ctx->pc = 0x14349Cu;
label_14349c:
    // 0x14349c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14349cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1434a0:
    // 0x1434a0: 0x8c51848c  lw          $s1, -0x7B74($v0)
    ctx->pc = 0x1434a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935692)));
label_1434a4:
    // 0x1434a4: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x1434a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
label_1434a8:
    // 0x1434a8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1434a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1434ac:
    // 0x1434ac: 0xc091fdc  jal         func_247F70
label_1434b0:
    if (ctx->pc == 0x1434B0u) {
        ctx->pc = 0x1434B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434ACu;
        // 0x1434b0: 0x26720130  addiu       $s2, $s3, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1434B4u;
        goto label_1434b4;
    }
    ctx->pc = 0x1434ACu;
    SET_GPR_U32(ctx, 31, 0x1434B4u);
    ctx->pc = 0x1434B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1434ACu;
    // 0x1434b0: 0x26720130  addiu       $s2, $s3, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247F70u, 0x1434ACu, 0x1434B4u)) {
        return;
    }
    ctx->pc = 0x1434B4u;
label_1434b4:
    // 0x1434b4: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1434b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1434b8:
    // 0x1434b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1434b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1434bc:
    // 0x1434bc: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1434bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1434c0:
    // 0x1434c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1434c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1434c4:
    // 0x1434c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1434c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1434c8:
    // 0x1434c8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1434c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1434cc:
    // 0x1434cc: 0x40f809  jalr        $v0
label_1434d0:
    if (ctx->pc == 0x1434D0u) {
        ctx->pc = 0x1434D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434CCu;
        // 0x1434d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1434D4u;
        goto label_1434d4;
    }
    ctx->pc = 0x1434CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1434D4u);
        ctx->pc = 0x1434D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434CCu;
        // 0x1434d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1434CCu, 0x1434D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1434D4u;
label_1434d4:
    // 0x1434d4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1434d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1434d8:
    // 0x1434d8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1434d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1434dc:
    // 0x1434dc: 0x40f809  jalr        $v0
label_1434e0:
    if (ctx->pc == 0x1434E0u) {
        ctx->pc = 0x1434E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434DCu;
        // 0x1434e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1434E4u;
        goto label_1434e4;
    }
    ctx->pc = 0x1434DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1434E4u);
        ctx->pc = 0x1434E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434DCu;
        // 0x1434e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1434DCu, 0x1434E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1434E4u;
label_1434e4:
    // 0x1434e4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1434e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1434e8:
    // 0x1434e8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1434e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1434ec:
    // 0x1434ec: 0x40f809  jalr        $v0
label_1434f0:
    if (ctx->pc == 0x1434F0u) {
        ctx->pc = 0x1434F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434ECu;
        // 0x1434f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1434F4u;
        goto label_1434f4;
    }
    ctx->pc = 0x1434ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1434F4u);
        ctx->pc = 0x1434F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434ECu;
        // 0x1434f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1434ECu, 0x1434F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1434F4u;
label_1434f4:
    // 0x1434f4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1434f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1434f8:
    // 0x1434f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1434f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1434fc:
    // 0x1434fc: 0x40f809  jalr        $v0
label_143500:
    if (ctx->pc == 0x143500u) {
        ctx->pc = 0x143500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434FCu;
        // 0x143500: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143504u;
        goto label_143504;
    }
    ctx->pc = 0x1434FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143504u);
        ctx->pc = 0x143500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434FCu;
        // 0x143500: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1434FCu, 0x143504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143504u;
label_143504:
    // 0x143504: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143508:
    // 0x143508: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x143508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_14350c:
    // 0x14350c: 0x40f809  jalr        $v0
label_143510:
    if (ctx->pc == 0x143510u) {
        ctx->pc = 0x143510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14350Cu;
        // 0x143510: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143514u;
        goto label_143514;
    }
    ctx->pc = 0x14350Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143514u);
        ctx->pc = 0x143510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14350Cu;
        // 0x143510: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14350Cu, 0x143514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143514u;
label_143514:
    // 0x143514: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143518:
    // 0x143518: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x143518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_14351c:
    // 0x14351c: 0x40f809  jalr        $v0
label_143520:
    if (ctx->pc == 0x143520u) {
        ctx->pc = 0x143520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14351Cu;
        // 0x143520: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143524u;
        goto label_143524;
    }
    ctx->pc = 0x14351Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143524u);
        ctx->pc = 0x143520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14351Cu;
        // 0x143520: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14351Cu, 0x143524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143524u;
label_143524:
    // 0x143524: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x143524u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_143528:
    // 0x143528: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x143528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_14352c:
    // 0x14352c: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x14352cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_143530:
    // 0x143530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_143534:
    // 0x143534: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x143534u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_143538:
    // 0x143538: 0x8e62012c  lw          $v0, 0x12C($s3)
    ctx->pc = 0x143538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
label_14353c:
    // 0x14353c: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x14353cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143540:
    // 0x143540: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x143540u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_143544:
    // 0x143544: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x143544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_143548:
    // 0x143548: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x143548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14354c:
    // 0x14354c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14354cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_143550:
    // 0x143550: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x143550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_143554:
    // 0x143554: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x143554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143558:
    // 0x143558: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x143558u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_14355c:
    // 0x14355c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x14355cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_143560:
    // 0x143560: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x143560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143564:
    // 0x143564: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x143564u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_143568:
    // 0x143568: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x143568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_14356c:
    // 0x14356c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x14356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143570:
    // 0x143570: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x143570u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_143574:
    // 0x143574: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x143574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_143578:
    // 0x143578: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x143578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14357c:
    // 0x14357c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14357cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_143580:
    // 0x143580: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x143580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_143584:
    // 0x143584: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x143584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143588:
    // 0x143588: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x143588u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_14358c:
    // 0x14358c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x14358cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_143590:
    // 0x143590: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x143590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143594:
    // 0x143594: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x143594u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_143598:
    // 0x143598: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x143598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_14359c:
    // 0x14359c: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x14359cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1435a0:
    // 0x1435a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1435a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1435a4:
    // 0x1435a4: 0xc07cc0a  jal         func_1F3028
label_1435a8:
    if (ctx->pc == 0x1435A8u) {
        ctx->pc = 0x1435A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1435A4u;
        // 0x1435a8: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1435ACu;
        goto label_1435ac;
    }
    ctx->pc = 0x1435A4u;
    SET_GPR_U32(ctx, 31, 0x1435ACu);
    ctx->pc = 0x1435A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1435A4u;
    // 0x1435a8: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3028u, 0x1435A4u, 0x1435ACu)) {
        return;
    }
    ctx->pc = 0x1435ACu;
label_1435ac:
    // 0x1435ac: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x1435acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1435b0:
    // 0x1435b0: 0x8e65012c  lw          $a1, 0x12C($s3)
    ctx->pc = 0x1435b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
label_1435b4:
    // 0x1435b4: 0xc092e7c  jal         func_24B9F0
label_1435b8:
    if (ctx->pc == 0x1435B8u) {
        ctx->pc = 0x1435B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1435B4u;
        // 0x1435b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1435BCu;
        goto label_1435bc;
    }
    ctx->pc = 0x1435B4u;
    SET_GPR_U32(ctx, 31, 0x1435BCu);
    ctx->pc = 0x1435B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1435B4u;
    // 0x1435b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x1435B4u, 0x1435BCu)) {
        return;
    }
    ctx->pc = 0x1435BCu;
label_1435bc:
    // 0x1435bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1435bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1435c0:
    // 0x1435c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1435c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1435c4:
    // 0x1435c4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1435c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_1435c8:
    // 0x1435c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1435c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1435cc:
    // 0x1435cc: 0xc66c0174  lwc1        $f12, 0x174($s3)
    ctx->pc = 0x1435ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1435d0:
    // 0x1435d0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1435d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1435d4:
    // 0x1435d4: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x1435d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1435d8:
    // 0x1435d8: 0xe7b4006c  swc1        $f20, 0x6C($sp)
    ctx->pc = 0x1435d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1435dc:
    // 0x1435dc: 0xe7b4005c  swc1        $f20, 0x5C($sp)
    ctx->pc = 0x1435dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1435e0:
    // 0x1435e0: 0xe7b4004c  swc1        $f20, 0x4C($sp)
    ctx->pc = 0x1435e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1435e4:
    // 0x1435e4: 0xe7b5007c  swc1        $f21, 0x7C($sp)
    ctx->pc = 0x1435e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_1435e8:
    // 0x1435e8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1435e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1435ec:
    // 0x1435ec: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x1435ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1435f0:
    // 0x1435f0: 0xe7b40088  swc1        $f20, 0x88($sp)
    ctx->pc = 0x1435f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1435f4:
    // 0x1435f4: 0xe7b4008c  swc1        $f20, 0x8C($sp)
    ctx->pc = 0x1435f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1435f8:
    // 0x1435f8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1435f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1435fc:
    // 0x1435fc: 0xe7b40098  swc1        $f20, 0x98($sp)
    ctx->pc = 0x1435fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_143600:
    // 0x143600: 0xe7b4009c  swc1        $f20, 0x9C($sp)
    ctx->pc = 0x143600u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_143604:
    // 0x143604: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x143604u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_143608:
    // 0x143608: 0xe7b400a4  swc1        $f20, 0xA4($sp)
    ctx->pc = 0x143608u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_14360c:
    // 0x14360c: 0xe7b400a8  swc1        $f20, 0xA8($sp)
    ctx->pc = 0x14360cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_143610:
    // 0x143610: 0xe7b500ac  swc1        $f21, 0xAC($sp)
    ctx->pc = 0x143610u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_143614:
    // 0x143614: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x143614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_143618:
    // 0x143618: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x143618u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_14361c:
    // 0x14361c: 0xc09b1a0  jal         func_26C680
label_143620:
    if (ctx->pc == 0x143620u) {
        ctx->pc = 0x143620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14361Cu;
        // 0x143620: 0xe7b400bc  swc1        $f20, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x143624u;
        goto label_143624;
    }
    ctx->pc = 0x14361Cu;
    SET_GPR_U32(ctx, 31, 0x143624u);
    ctx->pc = 0x143620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14361Cu;
    // 0x143620: 0xe7b400bc  swc1        $f20, 0xBC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x14361Cu, 0x143624u)) {
        return;
    }
    ctx->pc = 0x143624u;
label_143624:
    // 0x143624: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x143624u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
label_143628:
    // 0x143628: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x143628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_14362c:
    // 0x14362c: 0xe7b500ec  swc1        $f21, 0xEC($sp)
    ctx->pc = 0x14362cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_143630:
    // 0x143630: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x143630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_143634:
    // 0x143634: 0xe7b400fc  swc1        $f20, 0xFC($sp)
    ctx->pc = 0x143634u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_143638:
    // 0x143638: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14363c:
    // 0x14363c: 0xe7b400c4  swc1        $f20, 0xC4($sp)
    ctx->pc = 0x14363cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_143640:
    // 0x143640: 0xe7b400c8  swc1        $f20, 0xC8($sp)
    ctx->pc = 0x143640u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_143644:
    // 0x143644: 0xe7b400cc  swc1        $f20, 0xCC($sp)
    ctx->pc = 0x143644u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_143648:
    // 0x143648: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x143648u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_14364c:
    // 0x14364c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x14364cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_143650:
    // 0x143650: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x143650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_143654:
    // 0x143654: 0xe7b400d8  swc1        $f20, 0xD8($sp)
    ctx->pc = 0x143654u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_143658:
    // 0x143658: 0xe7b400dc  swc1        $f20, 0xDC($sp)
    ctx->pc = 0x143658u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_14365c:
    // 0x14365c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x14365cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_143660:
    // 0x143660: 0xe7b400e4  swc1        $f20, 0xE4($sp)
    ctx->pc = 0x143660u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_143664:
    // 0x143664: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x143664u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_143668:
    // 0x143668: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x143668u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_14366c:
    // 0x14366c: 0xe7b400f4  swc1        $f20, 0xF4($sp)
    ctx->pc = 0x14366cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_143670:
    // 0x143670: 0xc0a5dfc  jal         func_2977F0
label_143674:
    if (ctx->pc == 0x143674u) {
        ctx->pc = 0x143674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143670u;
        // 0x143674: 0xe7b400f8  swc1        $f20, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x143678u;
        goto label_143678;
    }
    ctx->pc = 0x143670u;
    SET_GPR_U32(ctx, 31, 0x143678u);
    ctx->pc = 0x143674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143670u;
    // 0x143674: 0xe7b400f8  swc1        $f20, 0xF8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2977F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2977F0u, 0x143670u, 0x143678u)) {
        return;
    }
    ctx->pc = 0x143678u;
label_143678:
    // 0x143678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14367c:
    // 0x14367c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x14367cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_143680:
    // 0x143680: 0xc0a5dfc  jal         func_2977F0
label_143684:
    if (ctx->pc == 0x143684u) {
        ctx->pc = 0x143684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143680u;
        // 0x143684: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143688u;
        goto label_143688;
    }
    ctx->pc = 0x143680u;
    SET_GPR_U32(ctx, 31, 0x143688u);
    ctx->pc = 0x143684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143680u;
    // 0x143684: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2977F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2977F0u, 0x143680u, 0x143688u)) {
        return;
    }
    ctx->pc = 0x143688u;
label_143688:
    // 0x143688: 0xc07cc06  jal         func_1F3018
label_14368c:
    if (ctx->pc == 0x14368Cu) {
        ctx->pc = 0x14368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143688u;
        // 0x14368c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143690u;
        goto label_143690;
    }
    ctx->pc = 0x143688u;
    SET_GPR_U32(ctx, 31, 0x143690u);
    ctx->pc = 0x14368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143688u;
    // 0x14368c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3018u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3018u, 0x143688u, 0x143690u)) {
        return;
    }
    ctx->pc = 0x143690u;
label_143690:
    // 0x143690: 0x8e6400f0  lw          $a0, 0xF0($s3)
    ctx->pc = 0x143690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_143694:
    // 0x143694: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x143694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_143698:
    // 0x143698: 0xc097a9e  jal         func_25EA78
label_14369c:
    if (ctx->pc == 0x14369Cu) {
        ctx->pc = 0x14369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143698u;
        // 0x14369c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1436A0u;
        goto label_1436a0;
    }
    ctx->pc = 0x143698u;
    SET_GPR_U32(ctx, 31, 0x1436A0u);
    ctx->pc = 0x14369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143698u;
    // 0x14369c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EA78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EA78u, 0x143698u, 0x1436A0u)) {
        return;
    }
    ctx->pc = 0x1436A0u;
label_1436a0:
    // 0x1436a0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1436a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1436a4:
    // 0x1436a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1436a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1436a8:
    // 0x1436a8: 0xc097b28  jal         func_25ECA0
label_1436ac:
    if (ctx->pc == 0x1436ACu) {
        ctx->pc = 0x1436ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436A8u;
        // 0x1436ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1436B0u;
        goto label_1436b0;
    }
    ctx->pc = 0x1436A8u;
    SET_GPR_U32(ctx, 31, 0x1436B0u);
    ctx->pc = 0x1436ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1436A8u;
    // 0x1436ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ECA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25ECA0u, 0x1436A8u, 0x1436B0u)) {
        return;
    }
    ctx->pc = 0x1436B0u;
label_1436b0:
    // 0x1436b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1436b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1436b4:
    // 0x1436b4: 0xc07cc0a  jal         func_1F3028
label_1436b8:
    if (ctx->pc == 0x1436B8u) {
        ctx->pc = 0x1436B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436B4u;
        // 0x1436b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1436BCu;
        goto label_1436bc;
    }
    ctx->pc = 0x1436B4u;
    SET_GPR_U32(ctx, 31, 0x1436BCu);
    ctx->pc = 0x1436B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1436B4u;
    // 0x1436b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3028u, 0x1436B4u, 0x1436BCu)) {
        return;
    }
    ctx->pc = 0x1436BCu;
label_1436bc:
    // 0x1436bc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1436bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1436c0:
    // 0x1436c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1436c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1436c4:
    // 0x1436c4: 0x40f809  jalr        $v0
label_1436c8:
    if (ctx->pc == 0x1436C8u) {
        ctx->pc = 0x1436C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436C4u;
        // 0x1436c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1436CCu;
        goto label_1436cc;
    }
    ctx->pc = 0x1436C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1436CCu);
        ctx->pc = 0x1436C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436C4u;
        // 0x1436c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1436C4u, 0x1436CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1436CCu;
label_1436cc:
    // 0x1436cc: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x1436ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1436d0:
    // 0x1436d0: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1436d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1436d4:
    // 0x1436d4: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x1436d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1436d8:
    // 0x1436d8: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x1436d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1436dc:
    // 0x1436dc: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1436dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_1436e0:
    // 0x1436e0: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x1436e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1436e4:
    // 0x1436e4: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x1436e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1436e8:
    // 0x1436e8: 0x3e00008  jr          $ra
label_1436ec:
    if (ctx->pc == 0x1436ECu) {
        ctx->pc = 0x1436ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436E8u;
        // 0x1436ec: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1436F0u;
        goto label_fallthrough_0x1436e8;
    }
    ctx->pc = 0x1436E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1436ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436E8u;
        // 0x1436ec: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1436E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1436e8:
    ctx->pc = 0x1436F0u;
}
