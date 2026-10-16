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

// Function: sub_00196470
// Address: 0x196470 - 0x196660
void sub_00196470_0x196470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196470_0x196470");
#endif

    switch (ctx->pc) {
        case 0x1964b8u: goto label_1964b8;
        case 0x1964ccu: goto label_1964cc;
        case 0x196508u: goto label_196508;
        case 0x196520u: goto label_196520;
        case 0x196530u: goto label_196530;
        case 0x196548u: goto label_196548;
        case 0x196598u: goto label_196598;
        case 0x1965a4u: goto label_1965a4;
        case 0x1965b8u: goto label_1965b8;
        case 0x1965c8u: goto label_1965c8;
        case 0x196610u: goto label_196610;
        case 0x196630u: goto label_196630;
        case 0x196638u: goto label_196638;
        default: break;
    }

    ctx->pc = 0x196470u;

    // 0x196470: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x196470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x196474: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x196474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x196478: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x196478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x19647c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19647cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196480: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x196480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x196484: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x196484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196488: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x196488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x19648c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19648cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196490: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x196490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x196494: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x196494u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196498: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x196498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19649c: 0x24074504  addiu       $a3, $zero, 0x4504
    ctx->pc = 0x19649cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17668));
    // 0x1964a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1964a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1964a4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1964a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1964a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1964acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964b0: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x1964B0u;
    SET_GPR_U32(ctx, 31, 0x1964B8u);
    ctx->pc = 0x1964B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1964B0u;
    // 0x1964b4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x1964B0u, 0x1964B8u)) {
        return;
    }
    ctx->pc = 0x1964B8u;
label_1964b8:
    // 0x1964b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1964b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1964bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1964c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964c4: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x1964C4u;
    SET_GPR_U32(ctx, 31, 0x1964CCu);
    ctx->pc = 0x1964C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1964C4u;
    // 0x1964c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x1964C4u, 0x1964CCu)) {
        return;
    }
    ctx->pc = 0x1964CCu;
label_1964cc:
    // 0x1964cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1964ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1964d0: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x1964d0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964d4: 0x70282a  slt         $a1, $v1, $s0
    ctx->pc = 0x1964d4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1964d8: 0x2644001f  addiu       $a0, $s2, 0x1F
    ctx->pc = 0x1964d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31));
    // 0x1964dc: 0x72182a  slt         $v1, $v1, $s2
    ctx->pc = 0x1964dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1964e0: 0x26020007  addiu       $v0, $s0, 0x7
    ctx->pc = 0x1964e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x1964e4: 0x243200b  movn        $a0, $s2, $v1
    ctx->pc = 0x1964e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18));
    // 0x1964e8: 0x205100b  movn        $v0, $s0, $a1
    ctx->pc = 0x1964e8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16));
    // 0x1964ec: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x1964ecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x1964f0: 0x260c3  sra         $t4, $v0, 3
    ctx->pc = 0x1964f0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1964f4: 0x19800026  blez        $t4, . + 4 + (0x26 << 2)
    ctx->pc = 0x1964F4u;
    {
        const bool branch_taken_0x1964f4 = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x1964F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964F4u;
        // 0x1964f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964f4) {
            ctx->pc = 0x196590u;
            goto label_196590;
        }
    }
    ctx->pc = 0x1964FCu;
    // 0x1964fc: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1964fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x196500: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x196500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x196504: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196508:
    // 0x196508: 0x1880001d  blez        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x196508u;
    {
        const bool branch_taken_0x196508 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x19650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196508u;
        // 0x19650c: 0x246b0001  addiu       $t3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196508) {
            ctx->pc = 0x196580u;
            goto label_196580;
        }
    }
    ctx->pc = 0x196510u;
    // 0x196510: 0x350c0  sll         $t2, $v1, 3
    ctx->pc = 0x196510u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x196514: 0x54843  sra         $t1, $a1, 1
    ctx->pc = 0x196514u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 5), 1));
    // 0x196518: 0x67100  sll         $t6, $a2, 4
    ctx->pc = 0x196518u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x19651c: 0x0  nop
    ctx->pc = 0x19651cu;
    // NOP
label_196520:
    // 0x196520: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x196520u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196524: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x196524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x196528: 0x1431021  addu        $v0, $t2, $v1
    ctx->pc = 0x196528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x19652c: 0x0  nop
    ctx->pc = 0x19652cu;
    // NOP
label_196530:
    // 0x196530: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x196530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x196534: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x196534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x196538: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x196538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19653c: 0x6e1021  addu        $v0, $v1, $t6
    ctx->pc = 0x19653cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x196540: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x196540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x196544: 0x0  nop
    ctx->pc = 0x196544u;
    // NOP
label_196548:
    // 0x196548: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x196548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19654c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x19654cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x196550: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x196550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x196554: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x196554u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x196558: 0x4c1fffb  bgez        $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x196558u;
    {
        const bool branch_taken_0x196558 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x19655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196558u;
        // 0x19655c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196558) {
            ctx->pc = 0x196548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196548;
        }
    }
    ctx->pc = 0x196560u;
    // 0x196560: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x196560u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196564: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x196564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x196568: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x196568u;
    {
        const bool branch_taken_0x196568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196568u;
        // 0x19656c: 0x1431021  addu        $v0, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196568) {
            ctx->pc = 0x196530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196530;
        }
    }
    ctx->pc = 0x196570u;
    // 0x196570: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x196570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196574: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x196574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x196578: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x196578u;
    {
        const bool branch_taken_0x196578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196578) {
            ctx->pc = 0x19657Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196578u;
            // 0x19657c: 0x67100  sll         $t6, $a2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196520;
        }
    }
    ctx->pc = 0x196580u;
label_196580:
    // 0x196580: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x196580u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196584: 0x6c102a  slt         $v0, $v1, $t4
    ctx->pc = 0x196584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x196588: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x196588u;
    {
        const bool branch_taken_0x196588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196588u;
        // 0x19658c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196588) {
            ctx->pc = 0x196508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196508;
        }
    }
    ctx->pc = 0x196590u;
label_196590:
    // 0x196590: 0xc08a0b0  jal         func_2282C0
    ctx->pc = 0x196590u;
    SET_GPR_U32(ctx, 31, 0x196598u);
    ctx->pc = 0x196594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196590u;
    // 0x196594: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x196590u, 0x196598u)) {
        return;
    }
    ctx->pc = 0x196598u;
label_196598:
    // 0x196598: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x196598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19659c: 0xc08a130  jal         func_2284C0
    ctx->pc = 0x19659Cu;
    SET_GPR_U32(ctx, 31, 0x1965A4u);
    ctx->pc = 0x1965A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19659Cu;
    // 0x1965a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2284C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2284C0u, 0x19659Cu, 0x1965A4u)) {
        return;
    }
    ctx->pc = 0x1965A4u;
label_1965a4:
    // 0x1965a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1965a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1965a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1965acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965b0: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x1965B0u;
    SET_GPR_U32(ctx, 31, 0x1965B8u);
    ctx->pc = 0x1965B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1965B0u;
    // 0x1965b4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x1965B0u, 0x1965B8u)) {
        return;
    }
    ctx->pc = 0x1965B8u;
label_1965b8:
    // 0x1965b8: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
    ctx->pc = 0x1965B8u;
    {
        const bool branch_taken_0x1965b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1965BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965B8u;
        // 0x1965bc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1965b8) {
            ctx->pc = 0x196604u;
            goto label_196604;
        }
    }
    ctx->pc = 0x1965C0u;
    // 0x1965c0: 0x2409ff80  addiu       $t1, $zero, -0x80
    ctx->pc = 0x1965c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1965c4: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x1965c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1965c8:
    // 0x1965c8: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x1965c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1965cc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1965ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1965d0: 0x90e60001  lbu         $a2, 0x1($a3)
    ctx->pc = 0x1965d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1965d4: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x1965d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1965d8: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x1965d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1965dc: 0xc3280b  movn        $a1, $a2, $v1
    ctx->pc = 0x1965dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6));
    // 0x1965e0: 0x45202a  slt         $a0, $v0, $a1
    ctx->pc = 0x1965e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1965e4: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x1965e4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5));
    // 0x1965e8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1965e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1965ec: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x1965ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1965f0: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x1965f0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1965f4: 0x501fff4  bgez        $t0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1965F4u;
    {
        const bool branch_taken_0x1965f4 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x1965F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965F4u;
        // 0x1965f8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1965f4) {
            ctx->pc = 0x1965C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1965c8;
        }
    }
    ctx->pc = 0x1965FCu;
    // 0x1965fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1965FCu;
    {
        const bool branch_taken_0x1965fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1965fc) {
            ctx->pc = 0x196628u;
            goto label_196628;
        }
    }
    ctx->pc = 0x196604u;
label_196604:
    // 0x196604: 0x2602003f  addiu       $v0, $s0, 0x3F
    ctx->pc = 0x196604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x196608: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x196608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x19660c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x19660cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_196610:
    // 0x196610: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x196610u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x196614: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x196614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x196618: 0x0  nop
    ctx->pc = 0x196618u;
    // NOP
    // 0x19661c: 0x0  nop
    ctx->pc = 0x19661cu;
    // NOP
    // 0x196620: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x196620u;
    {
        const bool branch_taken_0x196620 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x196624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196620u;
        // 0x196624: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196620) {
            ctx->pc = 0x196610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196610;
        }
    }
    ctx->pc = 0x196628u;
label_196628:
    // 0x196628: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x196628u;
    SET_GPR_U32(ctx, 31, 0x196630u);
    ctx->pc = 0x19662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196628u;
    // 0x19662c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228340u, 0x196628u, 0x196630u)) {
        return;
    }
    ctx->pc = 0x196630u;
label_196630:
    // 0x196630: 0xc08ab50  jal         func_22AD40
    ctx->pc = 0x196630u;
    SET_GPR_U32(ctx, 31, 0x196638u);
    ctx->pc = 0x196634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196630u;
    // 0x196634: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AD40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AD40u, 0x196630u, 0x196638u)) {
        return;
    }
    ctx->pc = 0x196638u;
label_196638:
    // 0x196638: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x196638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19663c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x19663cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196640: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x196640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x196644: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x196644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196648: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x196648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19664c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x19664cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196650: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x196650u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196658: 0x3e00008  jr          $ra
    ctx->pc = 0x196658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196658u;
        // 0x19665c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196660u;
}
