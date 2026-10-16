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

// Function: sub_003083D0
// Address: 0x3083d0 - 0x3085f8
void sub_003083D0_0x3083d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003083D0_0x3083d0");
#endif

    switch (ctx->pc) {
        case 0x3083d0u: goto label_3083d0;
        case 0x3083d4u: goto label_3083d4;
        case 0x3083d8u: goto label_3083d8;
        case 0x3083dcu: goto label_3083dc;
        case 0x3083e0u: goto label_3083e0;
        case 0x3083e4u: goto label_3083e4;
        case 0x3083e8u: goto label_3083e8;
        case 0x3083ecu: goto label_3083ec;
        case 0x3083f0u: goto label_3083f0;
        case 0x3083f4u: goto label_3083f4;
        case 0x3083f8u: goto label_3083f8;
        case 0x3083fcu: goto label_3083fc;
        case 0x308400u: goto label_308400;
        case 0x308404u: goto label_308404;
        case 0x308408u: goto label_308408;
        case 0x30840cu: goto label_30840c;
        case 0x308410u: goto label_308410;
        case 0x308414u: goto label_308414;
        case 0x308418u: goto label_308418;
        case 0x30841cu: goto label_30841c;
        case 0x308420u: goto label_308420;
        case 0x308424u: goto label_308424;
        case 0x308428u: goto label_308428;
        case 0x30842cu: goto label_30842c;
        case 0x308430u: goto label_308430;
        case 0x308434u: goto label_308434;
        case 0x308438u: goto label_308438;
        case 0x30843cu: goto label_30843c;
        case 0x308440u: goto label_308440;
        case 0x308444u: goto label_308444;
        case 0x308448u: goto label_308448;
        case 0x30844cu: goto label_30844c;
        case 0x308450u: goto label_308450;
        case 0x308454u: goto label_308454;
        case 0x308458u: goto label_308458;
        case 0x30845cu: goto label_30845c;
        case 0x308460u: goto label_308460;
        case 0x308464u: goto label_308464;
        case 0x308468u: goto label_308468;
        case 0x30846cu: goto label_30846c;
        case 0x308470u: goto label_308470;
        case 0x308474u: goto label_308474;
        case 0x308478u: goto label_308478;
        case 0x30847cu: goto label_30847c;
        case 0x308480u: goto label_308480;
        case 0x308484u: goto label_308484;
        case 0x308488u: goto label_308488;
        case 0x30848cu: goto label_30848c;
        case 0x308490u: goto label_308490;
        case 0x308494u: goto label_308494;
        case 0x308498u: goto label_308498;
        case 0x30849cu: goto label_30849c;
        case 0x3084a0u: goto label_3084a0;
        case 0x3084a4u: goto label_3084a4;
        case 0x3084a8u: goto label_3084a8;
        case 0x3084acu: goto label_3084ac;
        case 0x3084b0u: goto label_3084b0;
        case 0x3084b4u: goto label_3084b4;
        case 0x3084b8u: goto label_3084b8;
        case 0x3084bcu: goto label_3084bc;
        case 0x3084c0u: goto label_3084c0;
        case 0x3084c4u: goto label_3084c4;
        case 0x3084c8u: goto label_3084c8;
        case 0x3084ccu: goto label_3084cc;
        case 0x3084d0u: goto label_3084d0;
        case 0x3084d4u: goto label_3084d4;
        case 0x3084d8u: goto label_3084d8;
        case 0x3084dcu: goto label_3084dc;
        case 0x3084e0u: goto label_3084e0;
        case 0x3084e4u: goto label_3084e4;
        case 0x3084e8u: goto label_3084e8;
        case 0x3084ecu: goto label_3084ec;
        case 0x3084f0u: goto label_3084f0;
        case 0x3084f4u: goto label_3084f4;
        case 0x3084f8u: goto label_3084f8;
        case 0x3084fcu: goto label_3084fc;
        case 0x308500u: goto label_308500;
        case 0x308504u: goto label_308504;
        case 0x308508u: goto label_308508;
        case 0x30850cu: goto label_30850c;
        case 0x308510u: goto label_308510;
        case 0x308514u: goto label_308514;
        case 0x308518u: goto label_308518;
        case 0x30851cu: goto label_30851c;
        case 0x308520u: goto label_308520;
        case 0x308524u: goto label_308524;
        case 0x308528u: goto label_308528;
        case 0x30852cu: goto label_30852c;
        case 0x308530u: goto label_308530;
        case 0x308534u: goto label_308534;
        case 0x308538u: goto label_308538;
        case 0x30853cu: goto label_30853c;
        case 0x308540u: goto label_308540;
        case 0x308544u: goto label_308544;
        case 0x308548u: goto label_308548;
        case 0x30854cu: goto label_30854c;
        case 0x308550u: goto label_308550;
        case 0x308554u: goto label_308554;
        case 0x308558u: goto label_308558;
        case 0x30855cu: goto label_30855c;
        case 0x308560u: goto label_308560;
        case 0x308564u: goto label_308564;
        case 0x308568u: goto label_308568;
        case 0x30856cu: goto label_30856c;
        case 0x308570u: goto label_308570;
        case 0x308574u: goto label_308574;
        case 0x308578u: goto label_308578;
        case 0x30857cu: goto label_30857c;
        case 0x308580u: goto label_308580;
        case 0x308584u: goto label_308584;
        case 0x308588u: goto label_308588;
        case 0x30858cu: goto label_30858c;
        case 0x308590u: goto label_308590;
        case 0x308594u: goto label_308594;
        case 0x308598u: goto label_308598;
        case 0x30859cu: goto label_30859c;
        case 0x3085a0u: goto label_3085a0;
        case 0x3085a4u: goto label_3085a4;
        case 0x3085a8u: goto label_3085a8;
        case 0x3085acu: goto label_3085ac;
        case 0x3085b0u: goto label_3085b0;
        case 0x3085b4u: goto label_3085b4;
        case 0x3085b8u: goto label_3085b8;
        case 0x3085bcu: goto label_3085bc;
        case 0x3085c0u: goto label_3085c0;
        case 0x3085c4u: goto label_3085c4;
        case 0x3085c8u: goto label_3085c8;
        case 0x3085ccu: goto label_3085cc;
        case 0x3085d0u: goto label_3085d0;
        case 0x3085d4u: goto label_3085d4;
        case 0x3085d8u: goto label_3085d8;
        case 0x3085dcu: goto label_3085dc;
        case 0x3085e0u: goto label_3085e0;
        case 0x3085e4u: goto label_3085e4;
        case 0x3085e8u: goto label_3085e8;
        case 0x3085ecu: goto label_3085ec;
        case 0x3085f0u: goto label_3085f0;
        case 0x3085f4u: goto label_3085f4;
        default: break;
    }

    ctx->pc = 0x3083d0u;

label_3083d0:
    // 0x3083d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3083d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3083d4:
    // 0x3083d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3083d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3083d8:
    // 0x3083d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3083d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3083dc:
    // 0x3083dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3083dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3083e0:
    // 0x3083e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3083e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3083e4:
    // 0x3083e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3083e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3083e8:
    // 0x3083e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3083e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3083ec:
    // 0x3083ec: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3083f0:
    if (ctx->pc == 0x3083F0u) {
        ctx->pc = 0x3083F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3083ECu;
        // 0x3083f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3083F4u;
        goto label_3083f4;
    }
    ctx->pc = 0x3083ECu;
    {
        const bool branch_taken_0x3083ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3083F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3083ECu;
        // 0x3083f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3083ec) {
            ctx->pc = 0x308408u;
            goto label_308408;
        }
    }
    ctx->pc = 0x3083F4u;
label_3083f4:
    // 0x3083f4: 0x1200007a  beqz        $s0, . + 4 + (0x7A << 2)
label_3083f8:
    if (ctx->pc == 0x3083F8u) {
        ctx->pc = 0x3083F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3083F4u;
        // 0x3083f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3083FCu;
        goto label_3083fc;
    }
    ctx->pc = 0x3083F4u;
    {
        const bool branch_taken_0x3083f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3083F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3083F4u;
        // 0x3083f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3083f4) {
            ctx->pc = 0x3085E0u;
            goto label_3085e0;
        }
    }
    ctx->pc = 0x3083FCu;
label_3083fc:
    // 0x3083fc: 0x2e42000a  sltiu       $v0, $s2, 0xA
    ctx->pc = 0x3083fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_308400:
    // 0x308400: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_308404:
    if (ctx->pc == 0x308404u) {
        ctx->pc = 0x308404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308400u;
        // 0x308404: 0x2e420006  sltiu       $v0, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x308408u;
        goto label_308408;
    }
    ctx->pc = 0x308400u;
    {
        const bool branch_taken_0x308400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308400u;
        // 0x308404: 0x2e420006  sltiu       $v0, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308400) {
            ctx->pc = 0x308410u;
            goto label_308410;
        }
    }
    ctx->pc = 0x308408u;
label_308408:
    // 0x308408: 0x10000075  b           . + 4 + (0x75 << 2)
label_30840c:
    if (ctx->pc == 0x30840Cu) {
        ctx->pc = 0x30840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308408u;
        // 0x30840c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308410u;
        goto label_308410;
    }
    ctx->pc = 0x308408u;
    {
        const bool branch_taken_0x308408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308408u;
        // 0x30840c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308408) {
            ctx->pc = 0x3085E0u;
            goto label_3085e0;
        }
    }
    ctx->pc = 0x308410u;
label_308410:
    // 0x308410: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_308414:
    if (ctx->pc == 0x308414u) {
        ctx->pc = 0x308414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308410u;
        // 0x308414: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308418u;
        goto label_308418;
    }
    ctx->pc = 0x308410u;
    {
        const bool branch_taken_0x308410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308410u;
        // 0x308414: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308410) {
            ctx->pc = 0x308580u;
            goto label_308580;
        }
    }
    ctx->pc = 0x308418u;
label_308418:
    // 0x308418: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x308418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_30841c:
    // 0x30841c: 0x24420e10  addiu       $v0, $v0, 0xE10
    ctx->pc = 0x30841cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3600));
label_308420:
    // 0x308420: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x308420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_308424:
    // 0x308424: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x308424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_308428:
    // 0x308428: 0x800008  jr          $a0
label_30842c:
    if (ctx->pc == 0x30842Cu) {
        ctx->pc = 0x308430u;
        goto label_308430;
    }
    ctx->pc = 0x308428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x308430u: goto label_308430;
            case 0x308468u: goto label_308468;
            case 0x3084A0u: goto label_3084a0;
            case 0x3084D8u: goto label_3084d8;
            case 0x308510u: goto label_308510;
            case 0x308550u: goto label_308550;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308428u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x308430u;
label_308430:
    // 0x308430: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x308430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_308434:
    // 0x308434: 0x3c036800  lui         $v1, 0x6800
    ctx->pc = 0x308434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26624 << 16));
label_308438:
    // 0x308438: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x308438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_30843c:
    // 0x30843c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
label_308440:
    if (ctx->pc == 0x308440u) {
        ctx->pc = 0x308440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30843Cu;
        // 0x308440: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308444u;
        goto label_308444;
    }
    ctx->pc = 0x30843Cu;
    {
        const bool branch_taken_0x30843c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30843Cu;
        // 0x308440: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30843c) {
            ctx->pc = 0x308408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308408;
        }
    }
    ctx->pc = 0x308444u;
label_308444:
    // 0x308444: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x308444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_308448:
    // 0x308448: 0x8c6210b0  lw          $v0, 0x10B0($v1)
    ctx->pc = 0x308448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4272)));
label_30844c:
    // 0x30844c: 0x24a536c8  addiu       $a1, $a1, 0x36C8
    ctx->pc = 0x30844cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14024));
label_308450:
    // 0x308450: 0x40f809  jalr        $v0
label_308454:
    if (ctx->pc == 0x308454u) {
        ctx->pc = 0x308454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308450u;
        // 0x308454: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308458u;
        goto label_308458;
    }
    ctx->pc = 0x308450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308458u);
        ctx->pc = 0x308454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308450u;
        // 0x308454: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308450u, 0x308458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308458u;
label_308458:
    // 0x308458: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_30845c:
    if (ctx->pc == 0x30845Cu) {
        ctx->pc = 0x30845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308458u;
        // 0x30845c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308460u;
        goto label_308460;
    }
    ctx->pc = 0x308458u;
    {
        const bool branch_taken_0x308458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308458u;
        // 0x30845c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308458) {
            ctx->pc = 0x308580u;
            goto label_308580;
        }
    }
    ctx->pc = 0x308460u;
label_308460:
    // 0x308460: 0x10000060  b           . + 4 + (0x60 << 2)
label_308464:
    if (ctx->pc == 0x308464u) {
        ctx->pc = 0x308464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308460u;
        // 0x308464: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308468u;
        goto label_308468;
    }
    ctx->pc = 0x308460u;
    {
        const bool branch_taken_0x308460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308460u;
        // 0x308464: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308460) {
            ctx->pc = 0x3085E4u;
            goto label_3085e4;
        }
    }
    ctx->pc = 0x308468u;
label_308468:
    // 0x308468: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x308468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30846c:
    // 0x30846c: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x30846cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
label_308470:
    // 0x308470: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x308470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_308474:
    // 0x308474: 0x1040ffe4  beqz        $v0, . + 4 + (-0x1C << 2)
label_308478:
    if (ctx->pc == 0x308478u) {
        ctx->pc = 0x308478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308474u;
        // 0x308478: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30847Cu;
        goto label_30847c;
    }
    ctx->pc = 0x308474u;
    {
        const bool branch_taken_0x308474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308474u;
        // 0x308478: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308474) {
            ctx->pc = 0x308408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308408;
        }
    }
    ctx->pc = 0x30847Cu;
label_30847c:
    // 0x30847c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x30847cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_308480:
    // 0x308480: 0x8c6210b0  lw          $v0, 0x10B0($v1)
    ctx->pc = 0x308480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4272)));
label_308484:
    // 0x308484: 0x24a536c8  addiu       $a1, $a1, 0x36C8
    ctx->pc = 0x308484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14024));
label_308488:
    // 0x308488: 0x40f809  jalr        $v0
label_30848c:
    if (ctx->pc == 0x30848Cu) {
        ctx->pc = 0x30848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308488u;
        // 0x30848c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308490u;
        goto label_308490;
    }
    ctx->pc = 0x308488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308490u);
        ctx->pc = 0x30848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308488u;
        // 0x30848c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308488u, 0x308490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308490u;
label_308490:
    // 0x308490: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_308494:
    if (ctx->pc == 0x308494u) {
        ctx->pc = 0x308494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308490u;
        // 0x308494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308498u;
        goto label_308498;
    }
    ctx->pc = 0x308490u;
    {
        const bool branch_taken_0x308490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308490u;
        // 0x308494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308490) {
            ctx->pc = 0x308580u;
            goto label_308580;
        }
    }
    ctx->pc = 0x308498u;
label_308498:
    // 0x308498: 0x10000052  b           . + 4 + (0x52 << 2)
label_30849c:
    if (ctx->pc == 0x30849Cu) {
        ctx->pc = 0x30849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308498u;
        // 0x30849c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3084A0u;
        goto label_3084a0;
    }
    ctx->pc = 0x308498u;
    {
        const bool branch_taken_0x308498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308498u;
        // 0x30849c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308498) {
            ctx->pc = 0x3085E4u;
            goto label_3085e4;
        }
    }
    ctx->pc = 0x3084A0u;
label_3084a0:
    // 0x3084a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3084a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3084a4:
    // 0x3084a4: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x3084a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
label_3084a8:
    // 0x3084a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3084a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3084ac:
    // 0x3084ac: 0x1040ffd6  beqz        $v0, . + 4 + (-0x2A << 2)
label_3084b0:
    if (ctx->pc == 0x3084B0u) {
        ctx->pc = 0x3084B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084ACu;
        // 0x3084b0: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3084B4u;
        goto label_3084b4;
    }
    ctx->pc = 0x3084ACu;
    {
        const bool branch_taken_0x3084ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3084B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084ACu;
        // 0x3084b0: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3084ac) {
            ctx->pc = 0x308408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308408;
        }
    }
    ctx->pc = 0x3084B4u;
label_3084b4:
    // 0x3084b4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x3084b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_3084b8:
    // 0x3084b8: 0x8c6210b0  lw          $v0, 0x10B0($v1)
    ctx->pc = 0x3084b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4272)));
label_3084bc:
    // 0x3084bc: 0x24a536c8  addiu       $a1, $a1, 0x36C8
    ctx->pc = 0x3084bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14024));
label_3084c0:
    // 0x3084c0: 0x40f809  jalr        $v0
label_3084c4:
    if (ctx->pc == 0x3084C4u) {
        ctx->pc = 0x3084C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084C0u;
        // 0x3084c4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3084C8u;
        goto label_3084c8;
    }
    ctx->pc = 0x3084C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3084C8u);
        ctx->pc = 0x3084C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084C0u;
        // 0x3084c4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3084C0u, 0x3084C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3084C8u;
label_3084c8:
    // 0x3084c8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_3084cc:
    if (ctx->pc == 0x3084CCu) {
        ctx->pc = 0x3084CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084C8u;
        // 0x3084cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3084D0u;
        goto label_3084d0;
    }
    ctx->pc = 0x3084C8u;
    {
        const bool branch_taken_0x3084c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3084CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084C8u;
        // 0x3084cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3084c8) {
            ctx->pc = 0x308580u;
            goto label_308580;
        }
    }
    ctx->pc = 0x3084D0u;
label_3084d0:
    // 0x3084d0: 0x10000044  b           . + 4 + (0x44 << 2)
label_3084d4:
    if (ctx->pc == 0x3084D4u) {
        ctx->pc = 0x3084D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084D0u;
        // 0x3084d4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3084D8u;
        goto label_3084d8;
    }
    ctx->pc = 0x3084D0u;
    {
        const bool branch_taken_0x3084d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3084D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084D0u;
        // 0x3084d4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3084d0) {
            ctx->pc = 0x3085E4u;
            goto label_3085e4;
        }
    }
    ctx->pc = 0x3084D8u;
label_3084d8:
    // 0x3084d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3084d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3084dc:
    // 0x3084dc: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x3084dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
label_3084e0:
    // 0x3084e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3084e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3084e4:
    // 0x3084e4: 0x1040ffc8  beqz        $v0, . + 4 + (-0x38 << 2)
label_3084e8:
    if (ctx->pc == 0x3084E8u) {
        ctx->pc = 0x3084E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084E4u;
        // 0x3084e8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3084ECu;
        goto label_3084ec;
    }
    ctx->pc = 0x3084E4u;
    {
        const bool branch_taken_0x3084e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3084E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084E4u;
        // 0x3084e8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3084e4) {
            ctx->pc = 0x308408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308408;
        }
    }
    ctx->pc = 0x3084ECu;
label_3084ec:
    // 0x3084ec: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x3084ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_3084f0:
    // 0x3084f0: 0x8c6210b0  lw          $v0, 0x10B0($v1)
    ctx->pc = 0x3084f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4272)));
label_3084f4:
    // 0x3084f4: 0x24a536c8  addiu       $a1, $a1, 0x36C8
    ctx->pc = 0x3084f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14024));
label_3084f8:
    // 0x3084f8: 0x40f809  jalr        $v0
label_3084fc:
    if (ctx->pc == 0x3084FCu) {
        ctx->pc = 0x3084FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084F8u;
        // 0x3084fc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308500u;
        goto label_308500;
    }
    ctx->pc = 0x3084F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308500u);
        ctx->pc = 0x3084FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084F8u;
        // 0x3084fc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3084F8u, 0x308500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308500u;
label_308500:
    // 0x308500: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_308504:
    if (ctx->pc == 0x308504u) {
        ctx->pc = 0x308504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308500u;
        // 0x308504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308508u;
        goto label_308508;
    }
    ctx->pc = 0x308500u;
    {
        const bool branch_taken_0x308500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308500u;
        // 0x308504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308500) {
            ctx->pc = 0x308580u;
            goto label_308580;
        }
    }
    ctx->pc = 0x308508u;
label_308508:
    // 0x308508: 0x10000036  b           . + 4 + (0x36 << 2)
label_30850c:
    if (ctx->pc == 0x30850Cu) {
        ctx->pc = 0x30850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308508u;
        // 0x30850c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308510u;
        goto label_308510;
    }
    ctx->pc = 0x308508u;
    {
        const bool branch_taken_0x308508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308508u;
        // 0x30850c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308508) {
            ctx->pc = 0x3085E4u;
            goto label_3085e4;
        }
    }
    ctx->pc = 0x308510u;
label_308510:
    // 0x308510: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x308510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_308514:
    // 0x308514: 0x3c026e00  lui         $v0, 0x6E00
    ctx->pc = 0x308514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
label_308518:
    // 0x308518: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x308518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_30851c:
    // 0x30851c: 0x1040ffba  beqz        $v0, . + 4 + (-0x46 << 2)
label_308520:
    if (ctx->pc == 0x308520u) {
        ctx->pc = 0x308520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30851Cu;
        // 0x308520: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        ctx->pc = 0x308524u;
        goto label_308524;
    }
    ctx->pc = 0x30851Cu;
    {
        const bool branch_taken_0x30851c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30851Cu;
        // 0x308520: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30851c) {
            ctx->pc = 0x308408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308408;
        }
    }
    ctx->pc = 0x308524u;
label_308524:
    // 0x308524: 0x1040ffb8  beqz        $v0, . + 4 + (-0x48 << 2)
label_308528:
    if (ctx->pc == 0x308528u) {
        ctx->pc = 0x308528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308524u;
        // 0x308528: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30852Cu;
        goto label_30852c;
    }
    ctx->pc = 0x308524u;
    {
        const bool branch_taken_0x308524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308524u;
        // 0x308528: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308524) {
            ctx->pc = 0x308408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308408;
        }
    }
    ctx->pc = 0x30852Cu;
label_30852c:
    // 0x30852c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x30852cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_308530:
    // 0x308530: 0x8c6210b0  lw          $v0, 0x10B0($v1)
    ctx->pc = 0x308530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4272)));
label_308534:
    // 0x308534: 0x24a536c8  addiu       $a1, $a1, 0x36C8
    ctx->pc = 0x308534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14024));
label_308538:
    // 0x308538: 0x40f809  jalr        $v0
label_30853c:
    if (ctx->pc == 0x30853Cu) {
        ctx->pc = 0x30853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308538u;
        // 0x30853c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308540u;
        goto label_308540;
    }
    ctx->pc = 0x308538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308540u);
        ctx->pc = 0x30853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308538u;
        // 0x30853c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308538u, 0x308540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308540u;
label_308540:
    // 0x308540: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_308544:
    if (ctx->pc == 0x308544u) {
        ctx->pc = 0x308544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308540u;
        // 0x308544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308548u;
        goto label_308548;
    }
    ctx->pc = 0x308540u;
    {
        const bool branch_taken_0x308540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308540u;
        // 0x308544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308540) {
            ctx->pc = 0x308580u;
            goto label_308580;
        }
    }
    ctx->pc = 0x308548u;
label_308548:
    // 0x308548: 0x10000026  b           . + 4 + (0x26 << 2)
label_30854c:
    if (ctx->pc == 0x30854Cu) {
        ctx->pc = 0x30854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308548u;
        // 0x30854c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308550u;
        goto label_308550;
    }
    ctx->pc = 0x308548u;
    {
        const bool branch_taken_0x308548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308548u;
        // 0x30854c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308548) {
            ctx->pc = 0x3085E4u;
            goto label_3085e4;
        }
    }
    ctx->pc = 0x308550u;
label_308550:
    // 0x308550: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x308550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_308554:
    // 0x308554: 0x3c036e00  lui         $v1, 0x6E00
    ctx->pc = 0x308554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28160 << 16));
label_308558:
    // 0x308558: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x308558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_30855c:
    // 0x30855c: 0x1040ffaa  beqz        $v0, . + 4 + (-0x56 << 2)
label_308560:
    if (ctx->pc == 0x308560u) {
        ctx->pc = 0x308560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30855Cu;
        // 0x308560: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308564u;
        goto label_308564;
    }
    ctx->pc = 0x30855Cu;
    {
        const bool branch_taken_0x30855c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30855Cu;
        // 0x308560: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30855c) {
            ctx->pc = 0x308408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308408;
        }
    }
    ctx->pc = 0x308564u;
label_308564:
    // 0x308564: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x308564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_308568:
    // 0x308568: 0x8c6210b0  lw          $v0, 0x10B0($v1)
    ctx->pc = 0x308568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4272)));
label_30856c:
    // 0x30856c: 0x24a536c8  addiu       $a1, $a1, 0x36C8
    ctx->pc = 0x30856cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14024));
label_308570:
    // 0x308570: 0x40f809  jalr        $v0
label_308574:
    if (ctx->pc == 0x308574u) {
        ctx->pc = 0x308574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308570u;
        // 0x308574: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308578u;
        goto label_308578;
    }
    ctx->pc = 0x308570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308578u);
        ctx->pc = 0x308574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308570u;
        // 0x308574: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308570u, 0x308578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308578u;
label_308578:
    // 0x308578: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_30857c:
    if (ctx->pc == 0x30857Cu) {
        ctx->pc = 0x30857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308578u;
        // 0x30857c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308580u;
        goto label_308580;
    }
    ctx->pc = 0x308578u;
    {
        const bool branch_taken_0x308578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308578u;
        // 0x30857c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308578) {
            ctx->pc = 0x3085E0u;
            goto label_3085e0;
        }
    }
    ctx->pc = 0x308580u;
label_308580:
    // 0x308580: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x308580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_308584:
    // 0x308584: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x308584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_308588:
    // 0x308588: 0x8c6210b0  lw          $v0, 0x10B0($v1)
    ctx->pc = 0x308588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4272)));
label_30858c:
    // 0x30858c: 0x24a536c8  addiu       $a1, $a1, 0x36C8
    ctx->pc = 0x30858cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14024));
label_308590:
    // 0x308590: 0x40f809  jalr        $v0
label_308594:
    if (ctx->pc == 0x308594u) {
        ctx->pc = 0x308594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308590u;
        // 0x308594: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308598u;
        goto label_308598;
    }
    ctx->pc = 0x308590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308598u);
        ctx->pc = 0x308594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308590u;
        // 0x308594: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308590u, 0x308598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308598u;
label_308598:
    // 0x308598: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_30859c:
    if (ctx->pc == 0x30859Cu) {
        ctx->pc = 0x30859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308598u;
        // 0x30859c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3085A0u;
        goto label_3085a0;
    }
    ctx->pc = 0x308598u;
    {
        const bool branch_taken_0x308598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308598u;
        // 0x30859c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308598) {
            ctx->pc = 0x3085E0u;
            goto label_3085e0;
        }
    }
    ctx->pc = 0x3085A0u;
label_3085a0:
    // 0x3085a0: 0xc0c10d6  jal         func_304358
label_3085a4:
    if (ctx->pc == 0x3085A4u) {
        ctx->pc = 0x3085A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085A0u;
        // 0x3085a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3085A8u;
        goto label_3085a8;
    }
    ctx->pc = 0x3085A0u;
    SET_GPR_U32(ctx, 31, 0x3085A8u);
    ctx->pc = 0x3085A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3085A0u;
    // 0x3085a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304358u, 0x3085A0u, 0x3085A8u)) {
        return;
    }
    ctx->pc = 0x3085A8u;
label_3085a8:
    // 0x3085a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3085a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3085ac:
    // 0x3085ac: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_3085b0:
    if (ctx->pc == 0x3085B0u) {
        ctx->pc = 0x3085B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085ACu;
        // 0x3085b0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3085B4u;
        goto label_3085b4;
    }
    ctx->pc = 0x3085ACu;
    {
        const bool branch_taken_0x3085ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3085B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085ACu;
        // 0x3085b0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3085ac) {
            ctx->pc = 0x3085D4u;
            goto label_3085d4;
        }
    }
    ctx->pc = 0x3085B4u;
label_3085b4:
    // 0x3085b4: 0xc0c20da  jal         func_308368
label_3085b8:
    if (ctx->pc == 0x3085B8u) {
        ctx->pc = 0x3085B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085B4u;
        // 0x3085b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3085BCu;
        goto label_3085bc;
    }
    ctx->pc = 0x3085B4u;
    SET_GPR_U32(ctx, 31, 0x3085BCu);
    ctx->pc = 0x3085B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3085B4u;
    // 0x3085b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x308368u, 0x3085B4u, 0x3085BCu)) {
        return;
    }
    ctx->pc = 0x3085BCu;
label_3085bc:
    // 0x3085bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3085c0:
    if (ctx->pc == 0x3085C0u) {
        ctx->pc = 0x3085C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085BCu;
        // 0x3085c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3085C4u;
        goto label_3085c4;
    }
    ctx->pc = 0x3085BCu;
    {
        const bool branch_taken_0x3085bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3085C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085BCu;
        // 0x3085c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3085bc) {
            ctx->pc = 0x3085E0u;
            goto label_3085e0;
        }
    }
    ctx->pc = 0x3085C4u;
label_3085c4:
    // 0x3085c4: 0xc0c10d6  jal         func_304358
label_3085c8:
    if (ctx->pc == 0x3085C8u) {
        ctx->pc = 0x3085C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085C4u;
        // 0x3085c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3085CCu;
        goto label_3085cc;
    }
    ctx->pc = 0x3085C4u;
    SET_GPR_U32(ctx, 31, 0x3085CCu);
    ctx->pc = 0x3085C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3085C4u;
    // 0x3085c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304358u, 0x3085C4u, 0x3085CCu)) {
        return;
    }
    ctx->pc = 0x3085CCu;
label_3085cc:
    // 0x3085cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3085ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3085d0:
    // 0x3085d0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x3085d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_3085d4:
    // 0x3085d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3085d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3085d8:
    // 0x3085d8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3085d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_3085dc:
    // 0x3085dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3085dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3085e0:
    // 0x3085e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3085e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3085e4:
    // 0x3085e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3085e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3085e8:
    // 0x3085e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3085e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3085ec:
    // 0x3085ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3085ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3085f0:
    // 0x3085f0: 0x3e00008  jr          $ra
label_3085f4:
    if (ctx->pc == 0x3085F4u) {
        ctx->pc = 0x3085F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085F0u;
        // 0x3085f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3085F8u;
        goto label_fallthrough_0x3085f0;
    }
    ctx->pc = 0x3085F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3085F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085F0u;
        // 0x3085f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3085F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3085f0:
    ctx->pc = 0x3085F8u;
}
