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

// Function: sub_001E2408
// Address: 0x1e2408 - 0x1e2618
void sub_001E2408_0x1e2408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2408_0x1e2408");
#endif

    switch (ctx->pc) {
        case 0x1e2408u: goto label_1e2408;
        case 0x1e240cu: goto label_1e240c;
        case 0x1e2410u: goto label_1e2410;
        case 0x1e2414u: goto label_1e2414;
        case 0x1e2418u: goto label_1e2418;
        case 0x1e241cu: goto label_1e241c;
        case 0x1e2420u: goto label_1e2420;
        case 0x1e2424u: goto label_1e2424;
        case 0x1e2428u: goto label_1e2428;
        case 0x1e242cu: goto label_1e242c;
        case 0x1e2430u: goto label_1e2430;
        case 0x1e2434u: goto label_1e2434;
        case 0x1e2438u: goto label_1e2438;
        case 0x1e243cu: goto label_1e243c;
        case 0x1e2440u: goto label_1e2440;
        case 0x1e2444u: goto label_1e2444;
        case 0x1e2448u: goto label_1e2448;
        case 0x1e244cu: goto label_1e244c;
        case 0x1e2450u: goto label_1e2450;
        case 0x1e2454u: goto label_1e2454;
        case 0x1e2458u: goto label_1e2458;
        case 0x1e245cu: goto label_1e245c;
        case 0x1e2460u: goto label_1e2460;
        case 0x1e2464u: goto label_1e2464;
        case 0x1e2468u: goto label_1e2468;
        case 0x1e246cu: goto label_1e246c;
        case 0x1e2470u: goto label_1e2470;
        case 0x1e2474u: goto label_1e2474;
        case 0x1e2478u: goto label_1e2478;
        case 0x1e247cu: goto label_1e247c;
        case 0x1e2480u: goto label_1e2480;
        case 0x1e2484u: goto label_1e2484;
        case 0x1e2488u: goto label_1e2488;
        case 0x1e248cu: goto label_1e248c;
        case 0x1e2490u: goto label_1e2490;
        case 0x1e2494u: goto label_1e2494;
        case 0x1e2498u: goto label_1e2498;
        case 0x1e249cu: goto label_1e249c;
        case 0x1e24a0u: goto label_1e24a0;
        case 0x1e24a4u: goto label_1e24a4;
        case 0x1e24a8u: goto label_1e24a8;
        case 0x1e24acu: goto label_1e24ac;
        case 0x1e24b0u: goto label_1e24b0;
        case 0x1e24b4u: goto label_1e24b4;
        case 0x1e24b8u: goto label_1e24b8;
        case 0x1e24bcu: goto label_1e24bc;
        case 0x1e24c0u: goto label_1e24c0;
        case 0x1e24c4u: goto label_1e24c4;
        case 0x1e24c8u: goto label_1e24c8;
        case 0x1e24ccu: goto label_1e24cc;
        case 0x1e24d0u: goto label_1e24d0;
        case 0x1e24d4u: goto label_1e24d4;
        case 0x1e24d8u: goto label_1e24d8;
        case 0x1e24dcu: goto label_1e24dc;
        case 0x1e24e0u: goto label_1e24e0;
        case 0x1e24e4u: goto label_1e24e4;
        case 0x1e24e8u: goto label_1e24e8;
        case 0x1e24ecu: goto label_1e24ec;
        case 0x1e24f0u: goto label_1e24f0;
        case 0x1e24f4u: goto label_1e24f4;
        case 0x1e24f8u: goto label_1e24f8;
        case 0x1e24fcu: goto label_1e24fc;
        case 0x1e2500u: goto label_1e2500;
        case 0x1e2504u: goto label_1e2504;
        case 0x1e2508u: goto label_1e2508;
        case 0x1e250cu: goto label_1e250c;
        case 0x1e2510u: goto label_1e2510;
        case 0x1e2514u: goto label_1e2514;
        case 0x1e2518u: goto label_1e2518;
        case 0x1e251cu: goto label_1e251c;
        case 0x1e2520u: goto label_1e2520;
        case 0x1e2524u: goto label_1e2524;
        case 0x1e2528u: goto label_1e2528;
        case 0x1e252cu: goto label_1e252c;
        case 0x1e2530u: goto label_1e2530;
        case 0x1e2534u: goto label_1e2534;
        case 0x1e2538u: goto label_1e2538;
        case 0x1e253cu: goto label_1e253c;
        case 0x1e2540u: goto label_1e2540;
        case 0x1e2544u: goto label_1e2544;
        case 0x1e2548u: goto label_1e2548;
        case 0x1e254cu: goto label_1e254c;
        case 0x1e2550u: goto label_1e2550;
        case 0x1e2554u: goto label_1e2554;
        case 0x1e2558u: goto label_1e2558;
        case 0x1e255cu: goto label_1e255c;
        case 0x1e2560u: goto label_1e2560;
        case 0x1e2564u: goto label_1e2564;
        case 0x1e2568u: goto label_1e2568;
        case 0x1e256cu: goto label_1e256c;
        case 0x1e2570u: goto label_1e2570;
        case 0x1e2574u: goto label_1e2574;
        case 0x1e2578u: goto label_1e2578;
        case 0x1e257cu: goto label_1e257c;
        case 0x1e2580u: goto label_1e2580;
        case 0x1e2584u: goto label_1e2584;
        case 0x1e2588u: goto label_1e2588;
        case 0x1e258cu: goto label_1e258c;
        case 0x1e2590u: goto label_1e2590;
        case 0x1e2594u: goto label_1e2594;
        case 0x1e2598u: goto label_1e2598;
        case 0x1e259cu: goto label_1e259c;
        case 0x1e25a0u: goto label_1e25a0;
        case 0x1e25a4u: goto label_1e25a4;
        case 0x1e25a8u: goto label_1e25a8;
        case 0x1e25acu: goto label_1e25ac;
        case 0x1e25b0u: goto label_1e25b0;
        case 0x1e25b4u: goto label_1e25b4;
        case 0x1e25b8u: goto label_1e25b8;
        case 0x1e25bcu: goto label_1e25bc;
        case 0x1e25c0u: goto label_1e25c0;
        case 0x1e25c4u: goto label_1e25c4;
        case 0x1e25c8u: goto label_1e25c8;
        case 0x1e25ccu: goto label_1e25cc;
        case 0x1e25d0u: goto label_1e25d0;
        case 0x1e25d4u: goto label_1e25d4;
        case 0x1e25d8u: goto label_1e25d8;
        case 0x1e25dcu: goto label_1e25dc;
        case 0x1e25e0u: goto label_1e25e0;
        case 0x1e25e4u: goto label_1e25e4;
        case 0x1e25e8u: goto label_1e25e8;
        case 0x1e25ecu: goto label_1e25ec;
        case 0x1e25f0u: goto label_1e25f0;
        case 0x1e25f4u: goto label_1e25f4;
        case 0x1e25f8u: goto label_1e25f8;
        case 0x1e25fcu: goto label_1e25fc;
        case 0x1e2600u: goto label_1e2600;
        case 0x1e2604u: goto label_1e2604;
        case 0x1e2608u: goto label_1e2608;
        case 0x1e260cu: goto label_1e260c;
        case 0x1e2610u: goto label_1e2610;
        case 0x1e2614u: goto label_1e2614;
        default: break;
    }

    ctx->pc = 0x1e2408u;

label_1e2408:
    // 0x1e2408: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e2408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e240c:
    // 0x1e240c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1e240cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1e2410:
    // 0x1e2410: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1e2410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1e2414:
    // 0x1e2414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e2414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2418:
    // 0x1e2418: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1e2418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1e241c:
    // 0x1e241c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e241cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1e2420:
    // 0x1e2420: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1e2420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1e2424:
    // 0x1e2424: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1e2424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_1e2428:
    // 0x1e2428: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1e2428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_1e242c:
    // 0x1e242c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1e2430:
    if (ctx->pc == 0x1E2430u) {
        ctx->pc = 0x1E2430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E242Cu;
        // 0x1e2430: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2434u;
        goto label_1e2434;
    }
    ctx->pc = 0x1E242Cu;
    {
        const bool branch_taken_0x1e242c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E242Cu;
        // 0x1e2430: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e242c) {
            ctx->pc = 0x1E243Cu;
            goto label_1e243c;
        }
    }
    ctx->pc = 0x1E2434u;
label_1e2434:
    // 0x1e2434: 0x1000006d  b           . + 4 + (0x6D << 2)
label_1e2438:
    if (ctx->pc == 0x1E2438u) {
        ctx->pc = 0x1E2438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2434u;
        // 0x1e2438: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E243Cu;
        goto label_1e243c;
    }
    ctx->pc = 0x1E2434u;
    {
        const bool branch_taken_0x1e2434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2434u;
        // 0x1e2438: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2434) {
            ctx->pc = 0x1E25ECu;
            goto label_1e25ec;
        }
    }
    ctx->pc = 0x1E243Cu;
label_1e243c:
    // 0x1e243c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e243cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2440:
    // 0x1e2440: 0x24021101  addiu       $v0, $zero, 0x1101
    ctx->pc = 0x1e2440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
label_1e2444:
    // 0x1e2444: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e2444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e2448:
    // 0x1e2448: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_1e244c:
    if (ctx->pc == 0x1E244Cu) {
        ctx->pc = 0x1E244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2448u;
        // 0x1e244c: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2450u;
        goto label_1e2450;
    }
    ctx->pc = 0x1E2448u;
    {
        const bool branch_taken_0x1e2448 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2448u;
        // 0x1e244c: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2448) {
            ctx->pc = 0x1E2460u;
            goto label_1e2460;
        }
    }
    ctx->pc = 0x1E2450u;
label_1e2450:
    // 0x1e2450: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1e2450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e2454:
    // 0x1e2454: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e2454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2458:
    // 0x1e2458: 0x28830001  slti        $v1, $a0, 0x1
    ctx->pc = 0x1e2458u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
label_1e245c:
    // 0x1e245c: 0x83900a  movz        $s2, $a0, $v1
    ctx->pc = 0x1e245cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4));
label_1e2460:
    // 0x1e2460: 0x24021102  addiu       $v0, $zero, 0x1102
    ctx->pc = 0x1e2460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
label_1e2464:
    // 0x1e2464: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_1e2468:
    if (ctx->pc == 0x1E2468u) {
        ctx->pc = 0x1E2468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2464u;
        // 0x1e2468: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E246Cu;
        goto label_1e246c;
    }
    ctx->pc = 0x1E2464u;
    {
        const bool branch_taken_0x1e2464 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E2468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2464u;
        // 0x1e2468: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2464) {
            ctx->pc = 0x1E2480u;
            goto label_1e2480;
        }
    }
    ctx->pc = 0x1E246Cu;
label_1e246c:
    // 0x1e246c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1e246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e2470:
    // 0x1e2470: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e2470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2474:
    // 0x1e2474: 0x28830001  slti        $v1, $a0, 0x1
    ctx->pc = 0x1e2474u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
label_1e2478:
    // 0x1e2478: 0x83900a  movz        $s2, $a0, $v1
    ctx->pc = 0x1e2478u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4));
label_1e247c:
    // 0x1e247c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e247cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1e2480:
    // 0x1e2480: 0x8c51e6d8  lw          $s1, -0x1928($v0)
    ctx->pc = 0x1e2480u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960856)));
label_1e2484:
    // 0x1e2484: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e2484u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e2488:
    // 0x1e2488: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_1e248c:
    if (ctx->pc == 0x1E248Cu) {
        ctx->pc = 0x1E2490u;
        goto label_1e2490;
    }
    ctx->pc = 0x1E2488u;
    {
        const bool branch_taken_0x1e2488 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2488) {
            ctx->pc = 0x1E24A0u;
            goto label_1e24a0;
        }
    }
    ctx->pc = 0x1E2490u;
label_1e2490:
    // 0x1e2490: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e2490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e2494:
    // 0x1e2494: 0x0  nop
    ctx->pc = 0x1e2494u;
    // NOP
label_1e2498:
    // 0x1e2498: 0x5450fffb  bnel        $v0, $s0, . + 4 + (-0x5 << 2)
label_1e249c:
    if (ctx->pc == 0x1E249Cu) {
        ctx->pc = 0x1E249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2498u;
        // 0x1e249c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E24A0u;
        goto label_1e24a0;
    }
    ctx->pc = 0x1E2498u;
    {
        const bool branch_taken_0x1e2498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1e2498) {
            ctx->pc = 0x1E249Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2498u;
            // 0x1e249c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2488;
        }
    }
    ctx->pc = 0x1E24A0u;
label_1e24a0:
    // 0x1e24a0: 0x1a40002d  blez        $s2, . + 4 + (0x2D << 2)
label_1e24a4:
    if (ctx->pc == 0x1E24A4u) {
        ctx->pc = 0x1E24A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24A0u;
        // 0x1e24a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E24A8u;
        goto label_1e24a8;
    }
    ctx->pc = 0x1E24A0u;
    {
        const bool branch_taken_0x1e24a0 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x1E24A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24A0u;
        // 0x1e24a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24a0) {
            ctx->pc = 0x1E2558u;
            goto label_1e2558;
        }
    }
    ctx->pc = 0x1E24A8u;
label_1e24a8:
    // 0x1e24a8: 0xc07881e  jal         func_1E2078
label_1e24ac:
    if (ctx->pc == 0x1E24ACu) {
        ctx->pc = 0x1E24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24A8u;
        // 0x1e24ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E24B0u;
        goto label_1e24b0;
    }
    ctx->pc = 0x1E24A8u;
    SET_GPR_U32(ctx, 31, 0x1E24B0u);
    ctx->pc = 0x1E24ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E24A8u;
    // 0x1e24ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E2078u, 0x1E24A8u, 0x1E24B0u)) {
        return;
    }
    ctx->pc = 0x1E24B0u;
label_1e24b0:
    // 0x1e24b0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e24b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1e24b4:
    // 0x1e24b4: 0x0  nop
    ctx->pc = 0x1e24b4u;
    // NOP
label_1e24b8:
    // 0x1e24b8: 0x1e40fffb  bgtz        $s2, . + 4 + (-0x5 << 2)
label_1e24bc:
    if (ctx->pc == 0x1E24BCu) {
        ctx->pc = 0x1E24BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24B8u;
        // 0x1e24bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E24C0u;
        goto label_1e24c0;
    }
    ctx->pc = 0x1E24B8u;
    {
        const bool branch_taken_0x1e24b8 = (GPR_S64(ctx, 18) > 0);
        ctx->pc = 0x1E24BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24B8u;
        // 0x1e24bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24b8) {
            ctx->pc = 0x1E24A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e24a8;
        }
    }
    ctx->pc = 0x1E24C0u;
label_1e24c0:
    // 0x1e24c0: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_1e24c4:
    if (ctx->pc == 0x1E24C4u) {
        ctx->pc = 0x1E24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24C0u;
        // 0x1e24c4: 0x8eb2e6d8  lw          $s2, -0x1928($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E24C8u;
        goto label_1e24c8;
    }
    ctx->pc = 0x1E24C0u;
    {
        const bool branch_taken_0x1e24c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24C0u;
        // 0x1e24c4: 0x8eb2e6d8  lw          $s2, -0x1928($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24c0) {
            ctx->pc = 0x1E2550u;
            goto label_1e2550;
        }
    }
    ctx->pc = 0x1E24C8u;
label_1e24c8:
    // 0x1e24c8: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
label_1e24cc:
    if (ctx->pc == 0x1E24CCu) {
        ctx->pc = 0x1E24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24C8u;
        // 0x1e24cc: 0xaea0e6d8  sw          $zero, -0x1928($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294960856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E24D0u;
        goto label_1e24d0;
    }
    ctx->pc = 0x1E24C8u;
    {
        const bool branch_taken_0x1e24c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24C8u;
        // 0x1e24cc: 0xaea0e6d8  sw          $zero, -0x1928($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294960856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24c8) {
            ctx->pc = 0x1E253Cu;
            goto label_1e253c;
        }
    }
    ctx->pc = 0x1E24D0u;
label_1e24d0:
    // 0x1e24d0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1e24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_1e24d4:
    // 0x1e24d4: 0x3c140034  lui         $s4, 0x34
    ctx->pc = 0x1e24d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
label_1e24d8:
    // 0x1e24d8: 0x24560fc8  addiu       $s6, $v0, 0xFC8
    ctx->pc = 0x1e24d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_1e24dc:
    // 0x1e24dc: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x1e24dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e24e0:
    // 0x1e24e0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1e24e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e24e4:
    // 0x1e24e4: 0x0  nop
    ctx->pc = 0x1e24e4u;
    // NOP
label_1e24e8:
    // 0x1e24e8: 0x1611000f  bne         $s0, $s1, . + 4 + (0xF << 2)
label_1e24ec:
    if (ctx->pc == 0x1E24ECu) {
        ctx->pc = 0x1E24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24E8u;
        // 0x1e24ec: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E24F0u;
        goto label_1e24f0;
    }
    ctx->pc = 0x1E24E8u;
    {
        const bool branch_taken_0x1e24e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x1E24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24E8u;
        // 0x1e24ec: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24e8) {
            ctx->pc = 0x1E2528u;
            goto label_1e2528;
        }
    }
    ctx->pc = 0x1E24F0u;
label_1e24f0:
    // 0x1e24f0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e24f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e24f4:
    // 0x1e24f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e24f8:
    if (ctx->pc == 0x1E24F8u) {
        ctx->pc = 0x1E24FCu;
        goto label_1e24fc;
    }
    ctx->pc = 0x1E24F4u;
    {
        const bool branch_taken_0x1e24f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e24f4) {
            ctx->pc = 0x1E2510u;
            goto label_1e2510;
        }
    }
    ctx->pc = 0x1E24FCu;
label_1e24fc:
    // 0x1e24fc: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x1e24fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_1e2500:
    // 0x1e2500: 0x40f809  jalr        $v0
label_1e2504:
    if (ctx->pc == 0x1E2504u) {
        ctx->pc = 0x1E2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2500u;
        // 0x1e2504: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2508u;
        goto label_1e2508;
    }
    ctx->pc = 0x1E2500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E2508u);
        ctx->pc = 0x1E2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2500u;
        // 0x1e2504: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2500u, 0x1E2508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2508u;
label_1e2508:
    // 0x1e2508: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e250c:
    if (ctx->pc == 0x1E250Cu) {
        ctx->pc = 0x1E250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2508u;
        // 0x1e250c: 0x8e82e6dc  lw          $v0, -0x1924($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960860)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2510u;
        goto label_1e2510;
    }
    ctx->pc = 0x1E2508u;
    {
        const bool branch_taken_0x1e2508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2508u;
        // 0x1e250c: 0x8e82e6dc  lw          $v0, -0x1924($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2508) {
            ctx->pc = 0x1E251Cu;
            goto label_1e251c;
        }
    }
    ctx->pc = 0x1E2510u;
label_1e2510:
    // 0x1e2510: 0xc080d12  jal         func_203448
label_1e2514:
    if (ctx->pc == 0x1E2514u) {
        ctx->pc = 0x1E2514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2510u;
        // 0x1e2514: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2518u;
        goto label_1e2518;
    }
    ctx->pc = 0x1E2510u;
    SET_GPR_U32(ctx, 31, 0x1E2518u);
    ctx->pc = 0x1E2514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2510u;
    // 0x1e2514: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203448u, 0x1E2510u, 0x1E2518u)) {
        return;
    }
    ctx->pc = 0x1E2518u;
label_1e2518:
    // 0x1e2518: 0x8e82e6dc  lw          $v0, -0x1924($s4)
    ctx->pc = 0x1e2518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960860)));
label_1e251c:
    // 0x1e251c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e251cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e2520:
    // 0x1e2520: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e2524:
    if (ctx->pc == 0x1E2524u) {
        ctx->pc = 0x1E2524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2520u;
        // 0x1e2524: 0xae90e6dc  sw          $s0, -0x1924($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294960860), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2528u;
        goto label_1e2528;
    }
    ctx->pc = 0x1E2520u;
    {
        const bool branch_taken_0x1e2520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2520u;
        // 0x1e2524: 0xae90e6dc  sw          $s0, -0x1924($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294960860), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2520) {
            ctx->pc = 0x1E2534u;
            goto label_1e2534;
        }
    }
    ctx->pc = 0x1E2528u;
label_1e2528:
    // 0x1e2528: 0x8e62e6d8  lw          $v0, -0x1928($s3)
    ctx->pc = 0x1e2528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960856)));
label_1e252c:
    // 0x1e252c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e252cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e2530:
    // 0x1e2530: 0xae70e6d8  sw          $s0, -0x1928($s3)
    ctx->pc = 0x1e2530u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294960856), GPR_U32(ctx, 16));
label_1e2534:
    // 0x1e2534: 0x1640ffec  bnez        $s2, . + 4 + (-0x14 << 2)
label_1e2538:
    if (ctx->pc == 0x1E2538u) {
        ctx->pc = 0x1E2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2534u;
        // 0x1e2538: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E253Cu;
        goto label_1e253c;
    }
    ctx->pc = 0x1E2534u;
    {
        const bool branch_taken_0x1e2534 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2534u;
        // 0x1e2538: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2534) {
            ctx->pc = 0x1E24E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e24e8;
        }
    }
    ctx->pc = 0x1E253Cu;
label_1e253c:
    // 0x1e253c: 0x8ea2e6d8  lw          $v0, -0x1928($s5)
    ctx->pc = 0x1e253cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960856)));
label_1e2540:
    // 0x1e2540: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
label_1e2544:
    if (ctx->pc == 0x1E2544u) {
        ctx->pc = 0x1E2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2540u;
        // 0x1e2544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2548u;
        goto label_1e2548;
    }
    ctx->pc = 0x1E2540u;
    {
        const bool branch_taken_0x1e2540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2540) {
            ctx->pc = 0x1E2544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2540u;
            // 0x1e2544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E25ECu;
            goto label_1e25ec;
        }
    }
    ctx->pc = 0x1E2548u;
label_1e2548:
    // 0x1e2548: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e2548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1e254c:
    // 0x1e254c: 0xac40e6e8  sw          $zero, -0x1918($v0)
    ctx->pc = 0x1e254cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960872), GPR_U32(ctx, 0));
label_1e2550:
    // 0x1e2550: 0x10000026  b           . + 4 + (0x26 << 2)
label_1e2554:
    if (ctx->pc == 0x1E2554u) {
        ctx->pc = 0x1E2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2550u;
        // 0x1e2554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2558u;
        goto label_1e2558;
    }
    ctx->pc = 0x1E2550u;
    {
        const bool branch_taken_0x1e2550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2550u;
        // 0x1e2554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2550) {
            ctx->pc = 0x1E25ECu;
            goto label_1e25ec;
        }
    }
    ctx->pc = 0x1E2558u;
label_1e2558:
    // 0x1e2558: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_1e255c:
    if (ctx->pc == 0x1E255Cu) {
        ctx->pc = 0x1E255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2558u;
        // 0x1e255c: 0x8eb2e6d8  lw          $s2, -0x1928($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2560u;
        goto label_1e2560;
    }
    ctx->pc = 0x1E2558u;
    {
        const bool branch_taken_0x1e2558 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2558u;
        // 0x1e255c: 0x8eb2e6d8  lw          $s2, -0x1928($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2558) {
            ctx->pc = 0x1E25E8u;
            goto label_1e25e8;
        }
    }
    ctx->pc = 0x1E2560u;
label_1e2560:
    // 0x1e2560: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
label_1e2564:
    if (ctx->pc == 0x1E2564u) {
        ctx->pc = 0x1E2564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2560u;
        // 0x1e2564: 0xaea0e6d8  sw          $zero, -0x1928($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294960856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2568u;
        goto label_1e2568;
    }
    ctx->pc = 0x1E2560u;
    {
        const bool branch_taken_0x1e2560 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2560u;
        // 0x1e2564: 0xaea0e6d8  sw          $zero, -0x1928($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294960856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2560) {
            ctx->pc = 0x1E25D4u;
            goto label_1e25d4;
        }
    }
    ctx->pc = 0x1E2568u;
label_1e2568:
    // 0x1e2568: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1e2568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_1e256c:
    // 0x1e256c: 0x3c140034  lui         $s4, 0x34
    ctx->pc = 0x1e256cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
label_1e2570:
    // 0x1e2570: 0x24560fc8  addiu       $s6, $v0, 0xFC8
    ctx->pc = 0x1e2570u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_1e2574:
    // 0x1e2574: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x1e2574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e2578:
    // 0x1e2578: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1e2578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e257c:
    // 0x1e257c: 0x0  nop
    ctx->pc = 0x1e257cu;
    // NOP
label_1e2580:
    // 0x1e2580: 0x1611000f  bne         $s0, $s1, . + 4 + (0xF << 2)
label_1e2584:
    if (ctx->pc == 0x1E2584u) {
        ctx->pc = 0x1E2584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2580u;
        // 0x1e2584: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2588u;
        goto label_1e2588;
    }
    ctx->pc = 0x1E2580u;
    {
        const bool branch_taken_0x1e2580 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x1E2584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2580u;
        // 0x1e2584: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2580) {
            ctx->pc = 0x1E25C0u;
            goto label_1e25c0;
        }
    }
    ctx->pc = 0x1E2588u;
label_1e2588:
    // 0x1e2588: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1e2588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e258c:
    // 0x1e258c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e2590:
    if (ctx->pc == 0x1E2590u) {
        ctx->pc = 0x1E2594u;
        goto label_1e2594;
    }
    ctx->pc = 0x1E258Cu;
    {
        const bool branch_taken_0x1e258c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e258c) {
            ctx->pc = 0x1E25A8u;
            goto label_1e25a8;
        }
    }
    ctx->pc = 0x1E2594u;
label_1e2594:
    // 0x1e2594: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x1e2594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_1e2598:
    // 0x1e2598: 0x40f809  jalr        $v0
label_1e259c:
    if (ctx->pc == 0x1E259Cu) {
        ctx->pc = 0x1E259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2598u;
        // 0x1e259c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E25A0u;
        goto label_1e25a0;
    }
    ctx->pc = 0x1E2598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E25A0u);
        ctx->pc = 0x1E259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2598u;
        // 0x1e259c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2598u, 0x1E25A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E25A0u;
label_1e25a0:
    // 0x1e25a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e25a4:
    if (ctx->pc == 0x1E25A4u) {
        ctx->pc = 0x1E25A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25A0u;
        // 0x1e25a4: 0x8e82e6dc  lw          $v0, -0x1924($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960860)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E25A8u;
        goto label_1e25a8;
    }
    ctx->pc = 0x1E25A0u;
    {
        const bool branch_taken_0x1e25a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E25A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25A0u;
        // 0x1e25a4: 0x8e82e6dc  lw          $v0, -0x1924($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e25a0) {
            ctx->pc = 0x1E25B4u;
            goto label_1e25b4;
        }
    }
    ctx->pc = 0x1E25A8u;
label_1e25a8:
    // 0x1e25a8: 0xc080d12  jal         func_203448
label_1e25ac:
    if (ctx->pc == 0x1E25ACu) {
        ctx->pc = 0x1E25ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25A8u;
        // 0x1e25ac: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E25B0u;
        goto label_1e25b0;
    }
    ctx->pc = 0x1E25A8u;
    SET_GPR_U32(ctx, 31, 0x1E25B0u);
    ctx->pc = 0x1E25ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E25A8u;
    // 0x1e25ac: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203448u, 0x1E25A8u, 0x1E25B0u)) {
        return;
    }
    ctx->pc = 0x1E25B0u;
label_1e25b0:
    // 0x1e25b0: 0x8e82e6dc  lw          $v0, -0x1924($s4)
    ctx->pc = 0x1e25b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960860)));
label_1e25b4:
    // 0x1e25b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e25b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e25b8:
    // 0x1e25b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e25bc:
    if (ctx->pc == 0x1E25BCu) {
        ctx->pc = 0x1E25BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25B8u;
        // 0x1e25bc: 0xae90e6dc  sw          $s0, -0x1924($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294960860), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E25C0u;
        goto label_1e25c0;
    }
    ctx->pc = 0x1E25B8u;
    {
        const bool branch_taken_0x1e25b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E25BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25B8u;
        // 0x1e25bc: 0xae90e6dc  sw          $s0, -0x1924($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294960860), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e25b8) {
            ctx->pc = 0x1E25CCu;
            goto label_1e25cc;
        }
    }
    ctx->pc = 0x1E25C0u;
label_1e25c0:
    // 0x1e25c0: 0x8e62e6d8  lw          $v0, -0x1928($s3)
    ctx->pc = 0x1e25c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960856)));
label_1e25c4:
    // 0x1e25c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e25c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e25c8:
    // 0x1e25c8: 0xae70e6d8  sw          $s0, -0x1928($s3)
    ctx->pc = 0x1e25c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294960856), GPR_U32(ctx, 16));
label_1e25cc:
    // 0x1e25cc: 0x1640ffec  bnez        $s2, . + 4 + (-0x14 << 2)
label_1e25d0:
    if (ctx->pc == 0x1E25D0u) {
        ctx->pc = 0x1E25D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25CCu;
        // 0x1e25d0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E25D4u;
        goto label_1e25d4;
    }
    ctx->pc = 0x1E25CCu;
    {
        const bool branch_taken_0x1e25cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E25D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25CCu;
        // 0x1e25d0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e25cc) {
            ctx->pc = 0x1E2580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2580;
        }
    }
    ctx->pc = 0x1E25D4u;
label_1e25d4:
    // 0x1e25d4: 0x8ea2e6d8  lw          $v0, -0x1928($s5)
    ctx->pc = 0x1e25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960856)));
label_1e25d8:
    // 0x1e25d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e25dc:
    if (ctx->pc == 0x1E25DCu) {
        ctx->pc = 0x1E25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25D8u;
        // 0x1e25dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E25E0u;
        goto label_1e25e0;
    }
    ctx->pc = 0x1E25D8u;
    {
        const bool branch_taken_0x1e25d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25D8u;
        // 0x1e25dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e25d8) {
            ctx->pc = 0x1E25ECu;
            goto label_1e25ec;
        }
    }
    ctx->pc = 0x1E25E0u;
label_1e25e0:
    // 0x1e25e0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1e25e4:
    // 0x1e25e4: 0xac40e6e8  sw          $zero, -0x1918($v0)
    ctx->pc = 0x1e25e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960872), GPR_U32(ctx, 0));
label_1e25e8:
    // 0x1e25e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e25e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e25ec:
    // 0x1e25ec: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1e25ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e25f0:
    // 0x1e25f0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1e25f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e25f4:
    // 0x1e25f4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1e25f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e25f8:
    // 0x1e25f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e25f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e25fc:
    // 0x1e25fc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1e25fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e2600:
    // 0x1e2600: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1e2600u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e2604:
    // 0x1e2604: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1e2604u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2608:
    // 0x1e2608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e260c:
    // 0x1e260c: 0x3e00008  jr          $ra
label_1e2610:
    if (ctx->pc == 0x1E2610u) {
        ctx->pc = 0x1E2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E260Cu;
        // 0x1e2610: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2614u;
        goto label_1e2614;
    }
    ctx->pc = 0x1E260Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E260Cu;
        // 0x1e2610: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E260Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2614u;
label_1e2614:
    // 0x1e2614: 0x0  nop
    ctx->pc = 0x1e2614u;
    // NOP
    ctx->pc = 0x1e2618u;
}
