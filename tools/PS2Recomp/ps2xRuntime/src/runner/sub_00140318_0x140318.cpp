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

// Function: sub_00140318
// Address: 0x140318 - 0x140570
void sub_00140318_0x140318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140318_0x140318");
#endif

    switch (ctx->pc) {
        case 0x140318u: goto label_140318;
        case 0x14031cu: goto label_14031c;
        case 0x140320u: goto label_140320;
        case 0x140324u: goto label_140324;
        case 0x140328u: goto label_140328;
        case 0x14032cu: goto label_14032c;
        case 0x140330u: goto label_140330;
        case 0x140334u: goto label_140334;
        case 0x140338u: goto label_140338;
        case 0x14033cu: goto label_14033c;
        case 0x140340u: goto label_140340;
        case 0x140344u: goto label_140344;
        case 0x140348u: goto label_140348;
        case 0x14034cu: goto label_14034c;
        case 0x140350u: goto label_140350;
        case 0x140354u: goto label_140354;
        case 0x140358u: goto label_140358;
        case 0x14035cu: goto label_14035c;
        case 0x140360u: goto label_140360;
        case 0x140364u: goto label_140364;
        case 0x140368u: goto label_140368;
        case 0x14036cu: goto label_14036c;
        case 0x140370u: goto label_140370;
        case 0x140374u: goto label_140374;
        case 0x140378u: goto label_140378;
        case 0x14037cu: goto label_14037c;
        case 0x140380u: goto label_140380;
        case 0x140384u: goto label_140384;
        case 0x140388u: goto label_140388;
        case 0x14038cu: goto label_14038c;
        case 0x140390u: goto label_140390;
        case 0x140394u: goto label_140394;
        case 0x140398u: goto label_140398;
        case 0x14039cu: goto label_14039c;
        case 0x1403a0u: goto label_1403a0;
        case 0x1403a4u: goto label_1403a4;
        case 0x1403a8u: goto label_1403a8;
        case 0x1403acu: goto label_1403ac;
        case 0x1403b0u: goto label_1403b0;
        case 0x1403b4u: goto label_1403b4;
        case 0x1403b8u: goto label_1403b8;
        case 0x1403bcu: goto label_1403bc;
        case 0x1403c0u: goto label_1403c0;
        case 0x1403c4u: goto label_1403c4;
        case 0x1403c8u: goto label_1403c8;
        case 0x1403ccu: goto label_1403cc;
        case 0x1403d0u: goto label_1403d0;
        case 0x1403d4u: goto label_1403d4;
        case 0x1403d8u: goto label_1403d8;
        case 0x1403dcu: goto label_1403dc;
        case 0x1403e0u: goto label_1403e0;
        case 0x1403e4u: goto label_1403e4;
        case 0x1403e8u: goto label_1403e8;
        case 0x1403ecu: goto label_1403ec;
        case 0x1403f0u: goto label_1403f0;
        case 0x1403f4u: goto label_1403f4;
        case 0x1403f8u: goto label_1403f8;
        case 0x1403fcu: goto label_1403fc;
        case 0x140400u: goto label_140400;
        case 0x140404u: goto label_140404;
        case 0x140408u: goto label_140408;
        case 0x14040cu: goto label_14040c;
        case 0x140410u: goto label_140410;
        case 0x140414u: goto label_140414;
        case 0x140418u: goto label_140418;
        case 0x14041cu: goto label_14041c;
        case 0x140420u: goto label_140420;
        case 0x140424u: goto label_140424;
        case 0x140428u: goto label_140428;
        case 0x14042cu: goto label_14042c;
        case 0x140430u: goto label_140430;
        case 0x140434u: goto label_140434;
        case 0x140438u: goto label_140438;
        case 0x14043cu: goto label_14043c;
        case 0x140440u: goto label_140440;
        case 0x140444u: goto label_140444;
        case 0x140448u: goto label_140448;
        case 0x14044cu: goto label_14044c;
        case 0x140450u: goto label_140450;
        case 0x140454u: goto label_140454;
        case 0x140458u: goto label_140458;
        case 0x14045cu: goto label_14045c;
        case 0x140460u: goto label_140460;
        case 0x140464u: goto label_140464;
        case 0x140468u: goto label_140468;
        case 0x14046cu: goto label_14046c;
        case 0x140470u: goto label_140470;
        case 0x140474u: goto label_140474;
        case 0x140478u: goto label_140478;
        case 0x14047cu: goto label_14047c;
        case 0x140480u: goto label_140480;
        case 0x140484u: goto label_140484;
        case 0x140488u: goto label_140488;
        case 0x14048cu: goto label_14048c;
        case 0x140490u: goto label_140490;
        case 0x140494u: goto label_140494;
        case 0x140498u: goto label_140498;
        case 0x14049cu: goto label_14049c;
        case 0x1404a0u: goto label_1404a0;
        case 0x1404a4u: goto label_1404a4;
        case 0x1404a8u: goto label_1404a8;
        case 0x1404acu: goto label_1404ac;
        case 0x1404b0u: goto label_1404b0;
        case 0x1404b4u: goto label_1404b4;
        case 0x1404b8u: goto label_1404b8;
        case 0x1404bcu: goto label_1404bc;
        case 0x1404c0u: goto label_1404c0;
        case 0x1404c4u: goto label_1404c4;
        case 0x1404c8u: goto label_1404c8;
        case 0x1404ccu: goto label_1404cc;
        case 0x1404d0u: goto label_1404d0;
        case 0x1404d4u: goto label_1404d4;
        case 0x1404d8u: goto label_1404d8;
        case 0x1404dcu: goto label_1404dc;
        case 0x1404e0u: goto label_1404e0;
        case 0x1404e4u: goto label_1404e4;
        case 0x1404e8u: goto label_1404e8;
        case 0x1404ecu: goto label_1404ec;
        case 0x1404f0u: goto label_1404f0;
        case 0x1404f4u: goto label_1404f4;
        case 0x1404f8u: goto label_1404f8;
        case 0x1404fcu: goto label_1404fc;
        case 0x140500u: goto label_140500;
        case 0x140504u: goto label_140504;
        case 0x140508u: goto label_140508;
        case 0x14050cu: goto label_14050c;
        case 0x140510u: goto label_140510;
        case 0x140514u: goto label_140514;
        case 0x140518u: goto label_140518;
        case 0x14051cu: goto label_14051c;
        case 0x140520u: goto label_140520;
        case 0x140524u: goto label_140524;
        case 0x140528u: goto label_140528;
        case 0x14052cu: goto label_14052c;
        case 0x140530u: goto label_140530;
        case 0x140534u: goto label_140534;
        case 0x140538u: goto label_140538;
        case 0x14053cu: goto label_14053c;
        case 0x140540u: goto label_140540;
        case 0x140544u: goto label_140544;
        case 0x140548u: goto label_140548;
        case 0x14054cu: goto label_14054c;
        case 0x140550u: goto label_140550;
        case 0x140554u: goto label_140554;
        case 0x140558u: goto label_140558;
        case 0x14055cu: goto label_14055c;
        case 0x140560u: goto label_140560;
        case 0x140564u: goto label_140564;
        case 0x140568u: goto label_140568;
        case 0x14056cu: goto label_14056c;
        default: break;
    }

    ctx->pc = 0x140318u;

label_140318:
    // 0x140318: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x140318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_14031c:
    // 0x14031c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14031cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_140320:
    // 0x140320: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x140320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_140324:
    // 0x140324: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x140324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_140328:
    // 0x140328: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x140328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_14032c:
    // 0x14032c: 0xc04ffc6  jal         func_13FF18
label_140330:
    if (ctx->pc == 0x140330u) {
        ctx->pc = 0x140330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14032Cu;
        // 0x140330: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140334u;
        goto label_140334;
    }
    ctx->pc = 0x14032Cu;
    SET_GPR_U32(ctx, 31, 0x140334u);
    ctx->pc = 0x140330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14032Cu;
    // 0x140330: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FF18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13FF18u, 0x14032Cu, 0x140334u)) {
        return;
    }
    ctx->pc = 0x140334u;
label_140334:
    // 0x140334: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x140334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_140338:
    // 0x140338: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x140338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14033c:
    // 0x14033c: 0x8c464840  lw          $a2, 0x4840($v0)
    ctx->pc = 0x14033cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18496)));
label_140340:
    // 0x140340: 0xc07f1c0  jal         func_1FC700
label_140344:
    if (ctx->pc == 0x140344u) {
        ctx->pc = 0x140344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140340u;
        // 0x140344: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140348u;
        goto label_140348;
    }
    ctx->pc = 0x140340u;
    SET_GPR_U32(ctx, 31, 0x140348u);
    ctx->pc = 0x140344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140340u;
    // 0x140344: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x140340u, 0x140348u)) {
        return;
    }
    ctx->pc = 0x140348u;
label_140348:
    // 0x140348: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x140348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14034c:
    // 0x14034c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14034cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_140350:
    // 0x140350: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_140354:
    if (ctx->pc == 0x140354u) {
        ctx->pc = 0x140354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140350u;
        // 0x140354: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140358u;
        goto label_140358;
    }
    ctx->pc = 0x140350u;
    {
        const bool branch_taken_0x140350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140350u;
        // 0x140354: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140350) {
            ctx->pc = 0x14055Cu;
            goto label_14055c;
        }
    }
    ctx->pc = 0x140358u;
label_140358:
    // 0x140358: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x140358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14035c:
    // 0x14035c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14035cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_140360:
    // 0x140360: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x140360u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_140364:
    // 0x140364: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
label_140368:
    if (ctx->pc == 0x140368u) {
        ctx->pc = 0x140368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140364u;
        // 0x140368: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14036Cu;
        goto label_14036c;
    }
    ctx->pc = 0x140364u;
    {
        const bool branch_taken_0x140364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x140368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140364u;
        // 0x140368: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140364) {
            ctx->pc = 0x14052Cu;
            goto label_14052c;
        }
    }
    ctx->pc = 0x14036Cu;
label_14036c:
    // 0x14036c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x14036cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_140370:
    // 0x140370: 0x24420aa0  addiu       $v0, $v0, 0xAA0
    ctx->pc = 0x140370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2720));
label_140374:
    // 0x140374: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x140374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_140378:
    // 0x140378: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x140378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14037c:
    // 0x14037c: 0x800008  jr          $a0
label_140380:
    if (ctx->pc == 0x140380u) {
        ctx->pc = 0x140384u;
        goto label_140384;
    }
    ctx->pc = 0x14037Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140384u: goto label_140384;
            case 0x1404A8u: goto label_1404a8;
            case 0x1404B8u: goto label_1404b8;
            case 0x1404C8u: goto label_1404c8;
            case 0x1404E8u: goto label_1404e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14037Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x140384u;
label_140384:
    // 0x140384: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x140384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_140388:
    // 0x140388: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x140388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_14038c:
    // 0x14038c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x14038cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_140390:
    // 0x140390: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x140390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_140394:
    // 0x140394: 0x34c600ff  ori         $a2, $a2, 0xFF
    ctx->pc = 0x140394u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
label_140398:
    // 0x140398: 0x8865000b  lwl         $a1, 0xB($v1)
    ctx->pc = 0x140398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
label_14039c:
    // 0x14039c: 0x98650008  lwr         $a1, 0x8($v1)
    ctx->pc = 0x14039cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
label_1403a0:
    // 0x1403a0: 0xaba50023  swl         $a1, 0x23($sp)
    ctx->pc = 0x1403a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1403a4:
    // 0x1403a4: 0xbba50020  swr         $a1, 0x20($sp)
    ctx->pc = 0x1403a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1403a8:
    // 0x1403a8: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x1403a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
label_1403ac:
    // 0x1403ac: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1403acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_1403b0:
    // 0x1403b0: 0x3c08807f  lui         $t0, 0x807F
    ctx->pc = 0x1403b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32895 << 16));
label_1403b4:
    // 0x1403b4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x1403b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_1403b8:
    // 0x1403b8: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x1403b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
label_1403bc:
    // 0x1403bc: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x1403bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
label_1403c0:
    // 0x1403c0: 0x93a40020  lbu         $a0, 0x20($sp)
    ctx->pc = 0x1403c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_1403c4:
    // 0x1403c4: 0x93a30021  lbu         $v1, 0x21($sp)
    ctx->pc = 0x1403c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 33)));
label_1403c8:
    // 0x1403c8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1403c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1403cc:
    // 0x1403cc: 0x93a50022  lbu         $a1, 0x22($sp)
    ctx->pc = 0x1403ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 34)));
label_1403d0:
    // 0x1403d0: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x1403d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
label_1403d4:
    // 0x1403d4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1403d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_1403d8:
    // 0x1403d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1403d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1403dc:
    // 0x1403dc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1403dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_1403e0:
    // 0x1403e0: 0x93a30023  lbu         $v1, 0x23($sp)
    ctx->pc = 0x1403e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
label_1403e4:
    // 0x1403e4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1403e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_1403e8:
    // 0x1403e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1403e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_1403ec:
    // 0x1403ec: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x1403ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_1403f0:
    // 0x1403f0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1403f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
label_1403f4:
    // 0x1403f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1403f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1403f8:
    // 0x1403f8: 0x32e3a  dsrl        $a1, $v1, 24
    ctx->pc = 0x1403f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 24);
label_1403fc:
    // 0x1403fc: 0x3123a  dsrl        $v0, $v1, 8
    ctx->pc = 0x1403fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 8);
label_140400:
    // 0x140400: 0x3243a  dsrl        $a0, $v1, 16
    ctx->pc = 0x140400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 16);
label_140404:
    // 0x140404: 0xa3a20021  sb          $v0, 0x21($sp)
    ctx->pc = 0x140404u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 2));
label_140408:
    // 0x140408: 0xa3a40022  sb          $a0, 0x22($sp)
    ctx->pc = 0x140408u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 4));
label_14040c:
    // 0x14040c: 0xa3a50023  sb          $a1, 0x23($sp)
    ctx->pc = 0x14040cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 5));
label_140410:
    // 0x140410: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x140410u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
label_140414:
    // 0x140414: 0x8ba20023  lwl         $v0, 0x23($sp)
    ctx->pc = 0x140414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_140418:
    // 0x140418: 0x9ba20020  lwr         $v0, 0x20($sp)
    ctx->pc = 0x140418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_14041c:
    // 0x14041c: 0xaba20013  swl         $v0, 0x13($sp)
    ctx->pc = 0x14041cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_140420:
    // 0x140420: 0xbba20010  swr         $v0, 0x10($sp)
    ctx->pc = 0x140420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_140424:
    // 0x140424: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x140424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_140428:
    // 0x140428: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x140428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_14042c:
    // 0x14042c: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x14042cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
label_140430:
    // 0x140430: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x140430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_140434:
    // 0x140434: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x140434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_140438:
    // 0x140438: 0x0  nop
    ctx->pc = 0x140438u;
    // NOP
label_14043c:
    // 0x14043c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x14043cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_140440:
    // 0x140440: 0x93a40011  lbu         $a0, 0x11($sp)
    ctx->pc = 0x140440u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
label_140444:
    // 0x140444: 0x93a30012  lbu         $v1, 0x12($sp)
    ctx->pc = 0x140444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
label_140448:
    // 0x140448: 0x93a20013  lbu         $v0, 0x13($sp)
    ctx->pc = 0x140448u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
label_14044c:
    // 0x14044c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x14044cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_140450:
    // 0x140450: 0x0  nop
    ctx->pc = 0x140450u;
    // NOP
label_140454:
    // 0x140454: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x140454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_140458:
    // 0x140458: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x140458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_14045c:
    // 0x14045c: 0x0  nop
    ctx->pc = 0x14045cu;
    // NOP
label_140460:
    // 0x140460: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x140460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_140464:
    // 0x140464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_140468:
    // 0x140468: 0x0  nop
    ctx->pc = 0x140468u;
    // NOP
label_14046c:
    // 0x14046c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14046cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_140470:
    // 0x140470: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x140470u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_140474:
    // 0x140474: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x140474u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_140478:
    // 0x140478: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x140478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_14047c:
    // 0x14047c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x14047cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_140480:
    // 0x140480: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x140480u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_140484:
    // 0x140484: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x140484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_140488:
    // 0x140488: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x140488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_14048c:
    // 0x14048c: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x14048cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_140490:
    // 0x140490: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x140490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_140494:
    // 0x140494: 0xc095c4a  jal         func_257128
label_140498:
    if (ctx->pc == 0x140498u) {
        ctx->pc = 0x140498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140494u;
        // 0x140498: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14049Cu;
        goto label_14049c;
    }
    ctx->pc = 0x140494u;
    SET_GPR_U32(ctx, 31, 0x14049Cu);
    ctx->pc = 0x140498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140494u;
    // 0x140498: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257128u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257128u, 0x140494u, 0x14049Cu)) {
        return;
    }
    ctx->pc = 0x14049Cu;
label_14049c:
    // 0x14049c: 0x10000024  b           . + 4 + (0x24 << 2)
label_1404a0:
    if (ctx->pc == 0x1404A0u) {
        ctx->pc = 0x1404A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14049Cu;
        // 0x1404a0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1404A4u;
        goto label_1404a4;
    }
    ctx->pc = 0x14049Cu;
    {
        const bool branch_taken_0x14049c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1404A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14049Cu;
        // 0x1404a0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14049c) {
            ctx->pc = 0x140530u;
            goto label_140530;
        }
    }
    ctx->pc = 0x1404A4u;
label_1404a4:
    // 0x1404a4: 0x0  nop
    ctx->pc = 0x1404a4u;
    // NOP
label_1404a8:
    // 0x1404a8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1404a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1404ac:
    // 0x1404ac: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x1404acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_1404b0:
    // 0x1404b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1404b4:
    if (ctx->pc == 0x1404B4u) {
        ctx->pc = 0x1404B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404B0u;
        // 0x1404b4: 0x26250054  addiu       $a1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1404B8u;
        goto label_1404b8;
    }
    ctx->pc = 0x1404B0u;
    {
        const bool branch_taken_0x1404b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1404B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404B0u;
        // 0x1404b4: 0x26250054  addiu       $a1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404b0) {
            ctx->pc = 0x1404D4u;
            goto label_1404d4;
        }
    }
    ctx->pc = 0x1404B8u;
label_1404b8:
    // 0x1404b8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1404b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1404bc:
    // 0x1404bc: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x1404bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_1404c0:
    // 0x1404c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1404c4:
    if (ctx->pc == 0x1404C4u) {
        ctx->pc = 0x1404C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404C0u;
        // 0x1404c4: 0x2625005c  addiu       $a1, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1404C8u;
        goto label_1404c8;
    }
    ctx->pc = 0x1404C0u;
    {
        const bool branch_taken_0x1404c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1404C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404C0u;
        // 0x1404c4: 0x2625005c  addiu       $a1, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404c0) {
            ctx->pc = 0x1404D4u;
            goto label_1404d4;
        }
    }
    ctx->pc = 0x1404C8u;
label_1404c8:
    // 0x1404c8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1404c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1404cc:
    // 0x1404cc: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x1404ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_1404d0:
    // 0x1404d0: 0x26250064  addiu       $a1, $s1, 0x64
    ctx->pc = 0x1404d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_1404d4:
    // 0x1404d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1404d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1404d8:
    // 0x1404d8: 0xc07fcf4  jal         func_1FF3D0
label_1404dc:
    if (ctx->pc == 0x1404DCu) {
        ctx->pc = 0x1404DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404D8u;
        // 0x1404dc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1404E0u;
        goto label_1404e0;
    }
    ctx->pc = 0x1404D8u;
    SET_GPR_U32(ctx, 31, 0x1404E0u);
    ctx->pc = 0x1404DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404D8u;
    // 0x1404dc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x1404D8u, 0x1404E0u)) {
        return;
    }
    ctx->pc = 0x1404E0u;
label_1404e0:
    // 0x1404e0: 0x10000013  b           . + 4 + (0x13 << 2)
label_1404e4:
    if (ctx->pc == 0x1404E4u) {
        ctx->pc = 0x1404E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404E0u;
        // 0x1404e4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1404E8u;
        goto label_1404e8;
    }
    ctx->pc = 0x1404E0u;
    {
        const bool branch_taken_0x1404e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1404E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404E0u;
        // 0x1404e4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404e0) {
            ctx->pc = 0x140530u;
            goto label_140530;
        }
    }
    ctx->pc = 0x1404E8u;
label_1404e8:
    // 0x1404e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1404e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1404ec:
    // 0x1404ec: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1404ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1404f0:
    // 0x1404f0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1404f4:
    if (ctx->pc == 0x1404F4u) {
        ctx->pc = 0x1404F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404F0u;
        // 0x1404f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1404F8u;
        goto label_1404f8;
    }
    ctx->pc = 0x1404F0u;
    {
        const bool branch_taken_0x1404f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1404F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404F0u;
        // 0x1404f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404f0) {
            ctx->pc = 0x140514u;
            goto label_140514;
        }
    }
    ctx->pc = 0x1404F8u;
label_1404f8:
    // 0x1404f8: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1404f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1404fc:
    // 0x1404fc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1404fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_140500:
    // 0x140500: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x140500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_140504:
    // 0x140504: 0x60f809  jalr        $v1
label_140508:
    if (ctx->pc == 0x140508u) {
        ctx->pc = 0x140508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140504u;
        // 0x140508: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14050Cu;
        goto label_14050c;
    }
    ctx->pc = 0x140504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14050Cu);
        ctx->pc = 0x140508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140504u;
        // 0x140508: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140504u, 0x14050Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14050Cu;
label_14050c:
    // 0x14050c: 0x10000008  b           . + 4 + (0x8 << 2)
label_140510:
    if (ctx->pc == 0x140510u) {
        ctx->pc = 0x140510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14050Cu;
        // 0x140510: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140514u;
        goto label_140514;
    }
    ctx->pc = 0x14050Cu;
    {
        const bool branch_taken_0x14050c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14050Cu;
        // 0x140510: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14050c) {
            ctx->pc = 0x140530u;
            goto label_140530;
        }
    }
    ctx->pc = 0x140514u;
label_140514:
    // 0x140514: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x140514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_140518:
    // 0x140518: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14051c:
    // 0x14051c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x14051cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_140520:
    // 0x140520: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x140520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_140524:
    // 0x140524: 0x60f809  jalr        $v1
label_140528:
    if (ctx->pc == 0x140528u) {
        ctx->pc = 0x140528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140524u;
        // 0x140528: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14052Cu;
        goto label_14052c;
    }
    ctx->pc = 0x140524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14052Cu);
        ctx->pc = 0x140528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140524u;
        // 0x140528: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140524u, 0x14052Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14052Cu;
label_14052c:
    // 0x14052c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14052cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_140530:
    // 0x140530: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x140530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_140534:
    // 0x140534: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x140534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140538:
    // 0x140538: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x140538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14053c:
    // 0x14053c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14053cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_140540:
    // 0x140540: 0xc07f0c8  jal         func_1FC320
label_140544:
    if (ctx->pc == 0x140544u) {
        ctx->pc = 0x140544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140540u;
        // 0x140544: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140548u;
        goto label_140548;
    }
    ctx->pc = 0x140540u;
    SET_GPR_U32(ctx, 31, 0x140548u);
    ctx->pc = 0x140544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140540u;
    // 0x140544: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x140540u, 0x140548u)) {
        return;
    }
    ctx->pc = 0x140548u;
label_140548:
    // 0x140548: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x140548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14054c:
    // 0x14054c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14054cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_140550:
    // 0x140550: 0x5460ff83  bnel        $v1, $zero, . + 4 + (-0x7D << 2)
label_140554:
    if (ctx->pc == 0x140554u) {
        ctx->pc = 0x140554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140550u;
        // 0x140554: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140558u;
        goto label_140558;
    }
    ctx->pc = 0x140550u;
    {
        const bool branch_taken_0x140550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140550) {
            ctx->pc = 0x140554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140550u;
            // 0x140554: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140360;
        }
    }
    ctx->pc = 0x140558u;
label_140558:
    // 0x140558: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x140558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14055c:
    // 0x14055c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14055cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_140560:
    // 0x140560: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x140560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_140564:
    // 0x140564: 0x3e00008  jr          $ra
label_140568:
    if (ctx->pc == 0x140568u) {
        ctx->pc = 0x140568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140564u;
        // 0x140568: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14056Cu;
        goto label_14056c;
    }
    ctx->pc = 0x140564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140564u;
        // 0x140568: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14056Cu;
label_14056c:
    // 0x14056c: 0x0  nop
    ctx->pc = 0x14056cu;
    // NOP
    ctx->pc = 0x140570u;
}
