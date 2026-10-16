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

// Function: sub_001C2490
// Address: 0x1c2490 - 0x1c2698
void sub_001C2490_0x1c2490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2490_0x1c2490");
#endif

    switch (ctx->pc) {
        case 0x1c24d0u: goto label_1c24d0;
        case 0x1c2508u: goto label_1c2508;
        case 0x1c253cu: goto label_1c253c;
        case 0x1c2548u: goto label_1c2548;
        case 0x1c2558u: goto label_1c2558;
        case 0x1c25b0u: goto label_1c25b0;
        case 0x1c25e0u: goto label_1c25e0;
        case 0x1c2614u: goto label_1c2614;
        case 0x1c2620u: goto label_1c2620;
        case 0x1c2630u: goto label_1c2630;
        default: break;
    }

    ctx->pc = 0x1c2490u;

    // 0x1c2490: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c2490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c2494: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1c2494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1c2498: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1c2498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1c249c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c249cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24a0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1c24a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1c24a4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1c24a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1c24a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c24a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c24ac: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1c24acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1c24b0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1c24b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1c24b4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1c24b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1c24b8: 0x10a0003a  beqz        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1C24B8u;
    {
        const bool branch_taken_0x1c24b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C24BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24B8u;
        // 0x1c24bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24b8) {
            ctx->pc = 0x1C25A4u;
            goto label_1c25a4;
        }
    }
    ctx->pc = 0x1C24C0u;
    // 0x1c24c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c24c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24c4: 0x3c170034  lui         $s7, 0x34
    ctx->pc = 0x1c24c4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)52 << 16));
    // 0x1c24c8: 0x2634027c  addiu       $s4, $s1, 0x27C
    ctx->pc = 0x1c24c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 636));
    // 0x1c24cc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1c24d0:
    // 0x1c24d0: 0x14820027  bne         $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1C24D0u;
    {
        const bool branch_taken_0x1c24d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C24D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24D0u;
        // 0x1c24d4: 0x24850001  addiu       $a1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24d0) {
            ctx->pc = 0x1C2570u;
            goto label_1c2570;
        }
    }
    ctx->pc = 0x1C24D8u;
    // 0x1c24d8: 0x8e23026c  lw          $v1, 0x26C($s1)
    ctx->pc = 0x1c24d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
    // 0x1c24dc: 0x8e220270  lw          $v0, 0x270($s1)
    ctx->pc = 0x1c24dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
    // 0x1c24e0: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x1c24e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1c24e4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1c24e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c24e8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C24E8u;
    {
        const bool branch_taken_0x1c24e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24E8u;
        // 0x1c24ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24e8) {
            ctx->pc = 0x1C2564u;
            goto label_1c2564;
        }
    }
    ctx->pc = 0x1C24F0u;
    // 0x1c24f0: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x1c24f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c24f4: 0x24160018  addiu       $s6, $zero, 0x18
    ctx->pc = 0x1c24f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c24f8: 0x2633027c  addiu       $s3, $s1, 0x27C
    ctx->pc = 0x1c24f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 636));
    // 0x1c24fc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1c24fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c2500: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2500u;
    {
        const bool branch_taken_0x1c2500 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2500u;
        // 0x1c2504: 0x24150007  addiu       $s5, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2500) {
            ctx->pc = 0x1C2520u;
            goto label_1c2520;
        }
    }
    ctx->pc = 0x1C2508u;
label_1c2508:
    // 0x1c2508: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2508u;
    {
        const bool branch_taken_0x1c2508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c2508) {
            ctx->pc = 0x1C250Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2508u;
            // 0x1c250c: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2528u;
            goto label_1c2528;
        }
    }
    ctx->pc = 0x1C2510u;
    // 0x1c2510: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1c2510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c2514: 0x0  nop
    ctx->pc = 0x1c2514u;
    // NOP
    // 0x1c2518: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C2518u;
    {
        const bool branch_taken_0x1c2518 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2518u;
        // 0x1c251c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2518) {
            ctx->pc = 0x1C2508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2508;
        }
    }
    ctx->pc = 0x1C2520u;
label_1c2520:
    // 0x1c2520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2524: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1c2524u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x0u));
label_1c2528:
    // 0x1c2528: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2528u;
    {
        const bool branch_taken_0x1c2528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2528u;
        // 0x1c252c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2528) {
            ctx->pc = 0x1C2558u;
            goto label_1c2558;
        }
    }
    ctx->pc = 0x1C2530u;
    // 0x1c2530: 0x8ee48b2c  lw          $a0, -0x74D4($s7)
    ctx->pc = 0x1c2530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294937388)));
    // 0x1c2534: 0xc0640b8  jal         func_1902E0
    ctx->pc = 0x1C2534u;
    SET_GPR_U32(ctx, 31, 0x1C253Cu);
    ctx->pc = 0x1C2538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2534u;
    // 0x1c2538: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1902E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1902E0u, 0x1C2534u, 0x1C253Cu)) {
        return;
    }
    ctx->pc = 0x1C253Cu;
label_1c253c:
    // 0x1c253c: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x1c253cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c2540: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1C2540u;
    SET_GPR_U32(ctx, 31, 0x1C2548u);
    ctx->pc = 0x1C2544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2540u;
    // 0x1c2544: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1C2540u, 0x1C2548u)) {
        return;
    }
    ctx->pc = 0x1C2548u;
label_1c2548:
    // 0x1c2548: 0x8ee48b2c  lw          $a0, -0x74D4($s7)
    ctx->pc = 0x1c2548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294937388)));
    // 0x1c254c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c254cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2550: 0xc0640c6  jal         func_190318
    ctx->pc = 0x1C2550u;
    SET_GPR_U32(ctx, 31, 0x1C2558u);
    ctx->pc = 0x1C2554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2550u;
    // 0x1c2554: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190318u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190318u, 0x1C2550u, 0x1C2558u)) {
        return;
    }
    ctx->pc = 0x1C2558u;
label_1c2558:
    // 0x1c2558: 0x2761021  addu        $v0, $s3, $s6
    ctx->pc = 0x1c2558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x1c255c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C255Cu;
    {
        const bool branch_taken_0x1c255c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C255Cu;
        // 0x1c2560: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c255c) {
            ctx->pc = 0x1C258Cu;
            goto label_1c258c;
        }
    }
    ctx->pc = 0x1C2564u;
label_1c2564:
    // 0x1c2564: 0xae200294  sw          $zero, 0x294($s1)
    ctx->pc = 0x1c2564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 0));
    // 0x1c2568: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2568u;
    {
        const bool branch_taken_0x1c2568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2568u;
        // 0x1c256c: 0x24150007  addiu       $s5, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2568) {
            ctx->pc = 0x1C258Cu;
            goto label_1c258c;
        }
    }
    ctx->pc = 0x1C2570u;
label_1c2570:
    // 0x1c2570: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c2570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c2574: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c2574u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c2578: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c2578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c257c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1c257cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1c2580: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c2580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2584: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c2584u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2588: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1c2588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1c258c:
    // 0x1c258c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c258cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2590: 0x28820007  slti        $v0, $a0, 0x7
    ctx->pc = 0x1c2590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1c2594: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1C2594u;
    {
        const bool branch_taken_0x1c2594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2594u;
        // 0x1c2598: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2594) {
            ctx->pc = 0x1C24D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c24d0;
        }
    }
    ctx->pc = 0x1C259Cu;
    // 0x1c259c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1C259Cu;
    {
        const bool branch_taken_0x1c259c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C25A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C259Cu;
        // 0x1c25a0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c259c) {
            ctx->pc = 0x1C2670u;
            goto label_1c2670;
        }
    }
    ctx->pc = 0x1C25A4u;
label_1c25a4:
    // 0x1c25a4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1c25a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c25a8: 0x3c170034  lui         $s7, 0x34
    ctx->pc = 0x1c25a8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)52 << 16));
    // 0x1c25ac: 0x2634027c  addiu       $s4, $s1, 0x27C
    ctx->pc = 0x1c25acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 636));
label_1c25b0:
    // 0x1c25b0: 0x14800025  bnez        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C25B0u;
    {
        const bool branch_taken_0x1c25b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25B0u;
        // 0x1c25b4: 0x2485ffff  addiu       $a1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c25b0) {
            ctx->pc = 0x1C2648u;
            goto label_1c2648;
        }
    }
    ctx->pc = 0x1C25B8u;
    // 0x1c25b8: 0x8e22026c  lw          $v0, 0x26C($s1)
    ctx->pc = 0x1c25b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
    // 0x1c25bc: 0x2444fffd  addiu       $a0, $v0, -0x3
    ctx->pc = 0x1c25bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1c25c0: 0x480001e  bltz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C25C0u;
    {
        const bool branch_taken_0x1c25c0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1C25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25C0u;
        // 0x1c25c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c25c0) {
            ctx->pc = 0x1C263Cu;
            goto label_1c263c;
        }
    }
    ctx->pc = 0x1C25C8u;
    // 0x1c25c8: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x1c25c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c25cc: 0x2633027c  addiu       $s3, $s1, 0x27C
    ctx->pc = 0x1c25ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 636));
    // 0x1c25d0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1c25d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25d4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1c25d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c25d8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C25D8u;
    {
        const bool branch_taken_0x1c25d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25D8u;
        // 0x1c25dc: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c25d8) {
            ctx->pc = 0x1C25F8u;
            goto label_1c25f8;
        }
    }
    ctx->pc = 0x1C25E0u;
label_1c25e0:
    // 0x1c25e0: 0x50640007  beql        $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C25E0u;
    {
        const bool branch_taken_0x1c25e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1c25e0) {
            ctx->pc = 0x1C25E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C25E0u;
            // 0x1c25e4: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2600u;
            goto label_1c2600;
        }
    }
    ctx->pc = 0x1C25E8u;
    // 0x1c25e8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1c25e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c25ec: 0x0  nop
    ctx->pc = 0x1c25ecu;
    // NOP
    // 0x1c25f0: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C25F0u;
    {
        const bool branch_taken_0x1c25f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25F0u;
        // 0x1c25f4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c25f0) {
            ctx->pc = 0x1C25E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c25e0;
        }
    }
    ctx->pc = 0x1C25F8u;
label_1c25f8:
    // 0x1c25f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c25f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25fc: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1c25fcu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x0u));
label_1c2600:
    // 0x1c2600: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2600u;
    {
        const bool branch_taken_0x1c2600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2600u;
        // 0x1c2604: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2600) {
            ctx->pc = 0x1C2630u;
            goto label_1c2630;
        }
    }
    ctx->pc = 0x1C2608u;
    // 0x1c2608: 0x8ee48b2c  lw          $a0, -0x74D4($s7)
    ctx->pc = 0x1c2608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294937388)));
    // 0x1c260c: 0xc0640b8  jal         func_1902E0
    ctx->pc = 0x1C260Cu;
    SET_GPR_U32(ctx, 31, 0x1C2614u);
    ctx->pc = 0x1C2610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C260Cu;
    // 0x1c2610: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1902E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1902E0u, 0x1C260Cu, 0x1C2614u)) {
        return;
    }
    ctx->pc = 0x1C2614u;
label_1c2614:
    // 0x1c2614: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x1c2614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c2618: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1C2618u;
    SET_GPR_U32(ctx, 31, 0x1C2620u);
    ctx->pc = 0x1C261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2618u;
    // 0x1c261c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1C2618u, 0x1C2620u)) {
        return;
    }
    ctx->pc = 0x1C2620u;
label_1c2620:
    // 0x1c2620: 0x8ee48b2c  lw          $a0, -0x74D4($s7)
    ctx->pc = 0x1c2620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294937388)));
    // 0x1c2624: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c2624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2628: 0xc0640c6  jal         func_190318
    ctx->pc = 0x1C2628u;
    SET_GPR_U32(ctx, 31, 0x1C2630u);
    ctx->pc = 0x1C262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2628u;
    // 0x1c262c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190318u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190318u, 0x1C2628u, 0x1C2630u)) {
        return;
    }
    ctx->pc = 0x1C2630u;
label_1c2630:
    // 0x1c2630: 0x2761021  addu        $v0, $s3, $s6
    ctx->pc = 0x1c2630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x1c2634: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C2634u;
    {
        const bool branch_taken_0x1c2634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2634u;
        // 0x1c2638: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2634) {
            ctx->pc = 0x1C2664u;
            goto label_1c2664;
        }
    }
    ctx->pc = 0x1C263Cu;
label_1c263c:
    // 0x1c263c: 0xae20027c  sw          $zero, 0x27C($s1)
    ctx->pc = 0x1c263cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 636), GPR_U32(ctx, 0));
    // 0x1c2640: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2640u;
    {
        const bool branch_taken_0x1c2640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2640u;
        // 0x1c2644: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2640) {
            ctx->pc = 0x1C2664u;
            goto label_1c2664;
        }
    }
    ctx->pc = 0x1C2648u;
label_1c2648:
    // 0x1c2648: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c2648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c264c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c264cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c2650: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c2650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c2654: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1c2654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1c2658: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c2658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c265c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c265cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2660: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1c2660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1c2664:
    // 0x1c2664: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c2664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2668: 0x481ffd1  bgez        $a0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1C2668u;
    {
        const bool branch_taken_0x1c2668 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1C266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2668u;
        // 0x1c266c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2668) {
            ctx->pc = 0x1C25B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c25b0;
        }
    }
    ctx->pc = 0x1C2670u;
label_1c2670:
    // 0x1c2670: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1c2670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c2674: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1c2674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c2678: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1c2678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c267c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c267cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2680: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1c2680u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2684: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1c2684u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2688: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1c2688u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c268c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c268cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2690: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2690u;
        // 0x1c2694: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2698u;
}
