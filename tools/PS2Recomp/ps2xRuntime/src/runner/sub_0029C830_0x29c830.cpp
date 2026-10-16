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

// Function: sub_0029C830
// Address: 0x29c830 - 0x29c9d0
void sub_0029C830_0x29c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C830_0x29c830");
#endif

    switch (ctx->pc) {
        case 0x29c858u: goto label_29c858;
        case 0x29c890u: goto label_29c890;
        case 0x29c8bcu: goto label_29c8bc;
        case 0x29c8d0u: goto label_29c8d0;
        case 0x29c8ecu: goto label_29c8ec;
        case 0x29c900u: goto label_29c900;
        case 0x29c934u: goto label_29c934;
        case 0x29c968u: goto label_29c968;
        case 0x29c988u: goto label_29c988;
        default: break;
    }

    ctx->pc = 0x29c830u;

    // 0x29c830: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29c830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29c834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29c838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c83c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29c83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29c840: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29c840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29c844: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29c844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29c848: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x29c848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x29c84c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29c84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29c850: 0xc0a7194  jal         func_29C650
    ctx->pc = 0x29C850u;
    SET_GPR_U32(ctx, 31, 0x29C858u);
    ctx->pc = 0x29C854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C850u;
    // 0x29c854: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C650u, 0x29C850u, 0x29C858u)) {
        return;
    }
    ctx->pc = 0x29C858u;
label_29c858:
    // 0x29c858: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x29c858u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29c85c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29c85cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c860: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x29c860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29c864: 0x8e08002c  lw          $t0, 0x2C($s0)
    ctx->pc = 0x29c864u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x29c868: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x29c868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x29c86c: 0xe51823  subu        $v1, $a3, $a1
    ctx->pc = 0x29c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x29c870: 0x719023  subu        $s2, $v1, $s1
    ctx->pc = 0x29c870u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x29c874: 0x1043023  subu        $a2, $t0, $a0
    ctx->pc = 0x29c874u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x29c878: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x29c878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x29c87c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x29C87Cu;
    {
        const bool branch_taken_0x29c87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c87c) {
            ctx->pc = 0x29C91Cu;
            goto label_29c91c;
        }
    }
    ctx->pc = 0x29C884u;
    // 0x29c884: 0x26440064  addiu       $a0, $s2, 0x64
    ctx->pc = 0x29c884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    // 0x29c888: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x29C888u;
    SET_GPR_U32(ctx, 31, 0x29C890u);
    ctx->pc = 0x29C88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C888u;
    // 0x29c88c: 0x24150064  addiu       $s5, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x29C888u, 0x29C890u)) {
        return;
    }
    ctx->pc = 0x29C890u;
label_29c890:
    // 0x29c890: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29c890u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c894: 0x12800044  beqz        $s4, . + 4 + (0x44 << 2)
    ctx->pc = 0x29C894u;
    {
        const bool branch_taken_0x29c894 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C894u;
        // 0x29c898: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c894) {
            ctx->pc = 0x29C9A8u;
            goto label_29c9a8;
        }
    }
    ctx->pc = 0x29C89Cu;
    // 0x29c89c: 0x623000e  bgezl       $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x29C89Cu;
    {
        const bool branch_taken_0x29c89c = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x29c89c) {
            ctx->pc = 0x29C8A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C89Cu;
            // 0x29c8a0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C8D8u;
            goto label_29c8d8;
        }
    }
    ctx->pc = 0x29C8A4u;
    // 0x29c8a4: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x29c8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x29c8a8: 0x26930064  addiu       $s3, $s4, 0x64
    ctx->pc = 0x29c8a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 100));
    // 0x29c8ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c8b0: 0x113023  negu        $a2, $s1
    ctx->pc = 0x29c8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x29c8b4: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x29C8B4u;
    SET_GPR_U32(ctx, 31, 0x29C8BCu);
    ctx->pc = 0x29C8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C8B4u;
    // 0x29c8b8: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x29C8B4u, 0x29C8BCu)) {
        return;
    }
    ctx->pc = 0x29C8BCu;
label_29c8bc:
    // 0x29c8bc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x29c8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29c8c0: 0x2712023  subu        $a0, $s3, $s1
    ctx->pc = 0x29c8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x29c8c4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x29c8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29c8c8: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x29C8C8u;
    SET_GPR_U32(ctx, 31, 0x29C8D0u);
    ctx->pc = 0x29C8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C8C8u;
    // 0x29c8cc: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x29C8C8u, 0x29C8D0u)) {
        return;
    }
    ctx->pc = 0x29C8D0u;
label_29c8d0:
    // 0x29c8d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29C8D0u;
    {
        const bool branch_taken_0x29c8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8D0u;
        // 0x29c8d4: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c8d0) {
            ctx->pc = 0x29C8F0u;
            goto label_29c8f0;
        }
    }
    ctx->pc = 0x29C8D8u;
label_29c8d8:
    // 0x29c8d8: 0x26930064  addiu       $s3, $s4, 0x64
    ctx->pc = 0x29c8d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 100));
    // 0x29c8dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c8e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29c8e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c8e4: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x29C8E4u;
    SET_GPR_U32(ctx, 31, 0x29C8ECu);
    ctx->pc = 0x29C8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C8E4u;
    // 0x29c8e8: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x29C8E4u, 0x29C8ECu)) {
        return;
    }
    ctx->pc = 0x29C8ECu;
label_29c8ec:
    // 0x29c8ec: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x29c8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_29c8f0:
    // 0x29c8f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29C8F0u;
    {
        const bool branch_taken_0x29c8f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8F0u;
        // 0x29c8f4: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c8f0) {
            ctx->pc = 0x29C904u;
            goto label_29c904;
        }
    }
    ctx->pc = 0x29C8F8u;
    // 0x29c8f8: 0xc0c5486  jal         func_315218
    ctx->pc = 0x29C8F8u;
    SET_GPR_U32(ctx, 31, 0x29C900u);
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x29C8F8u, 0x29C900u)) {
        return;
    }
    ctx->pc = 0x29C900u;
label_29c900:
    // 0x29c900: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x29c900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_29c904:
    // 0x29c904: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29c904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c908: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x29c908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x29c90c: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x29c90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
    // 0x29c910: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x29c910u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29c914: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x29C914u;
    {
        const bool branch_taken_0x29c914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C914u;
        // 0x29c918: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c914) {
            ctx->pc = 0x29C974u;
            goto label_29c974;
        }
    }
    ctx->pc = 0x29C91Cu;
label_29c91c:
    // 0x29c91c: 0x621000c  bgez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x29C91Cu;
    {
        const bool branch_taken_0x29c91c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x29C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C91Cu;
        // 0x29c920: 0xd2a823  subu        $s5, $a2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c91c) {
            ctx->pc = 0x29C950u;
            goto label_29c950;
        }
    }
    ctx->pc = 0x29C924u;
    // 0x29c924: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x29c924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x29c928: 0x1112821  addu        $a1, $t0, $s1
    ctx->pc = 0x29c928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x29c92c: 0xc0c48fe  jal         func_3123F8
    ctx->pc = 0x29C92Cu;
    SET_GPR_U32(ctx, 31, 0x29C934u);
    ctx->pc = 0x29C930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C92Cu;
    // 0x29c930: 0x113023  negu        $a2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3123F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3123F8u, 0x29C92Cu, 0x29C934u)) {
        return;
    }
    ctx->pc = 0x29C934u;
label_29c934:
    // 0x29c934: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x29c934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x29c938: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x29c938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29c93c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x29c93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29c940: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x29c940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x29c944: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x29c944u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x29c948: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29C948u;
    {
        const bool branch_taken_0x29c948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C948u;
        // 0x29c94c: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c948) {
            ctx->pc = 0x29C960u;
            goto label_29c960;
        }
    }
    ctx->pc = 0x29C950u;
label_29c950:
    // 0x29c950: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x29C950u;
    {
        const bool branch_taken_0x29c950 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x29C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C950u;
        // 0x29c954: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c950) {
            ctx->pc = 0x29C974u;
            goto label_29c974;
        }
    }
    ctx->pc = 0x29C958u;
    // 0x29c958: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x29c958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x29c95c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x29c95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_29c960:
    // 0x29c960: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x29C960u;
    SET_GPR_U32(ctx, 31, 0x29C968u);
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x29C960u, 0x29C968u)) {
        return;
    }
    ctx->pc = 0x29C968u;
label_29c968:
    // 0x29c968: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x29c968u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29c96c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x29c96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29c970: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x29c970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_29c974:
    // 0x29c974: 0x951021  addu        $v0, $a0, $s5
    ctx->pc = 0x29c974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x29c978: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x29c978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x29c97c: 0xe51823  subu        $v1, $a3, $a1
    ctx->pc = 0x29c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x29c980: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x29C980u;
    {
        const bool branch_taken_0x29c980 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C980u;
        // 0x29c984: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c980) {
            ctx->pc = 0x29C9A4u;
            goto label_29c9a4;
        }
    }
    ctx->pc = 0x29C988u;
label_29c988:
    // 0x29c988: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x29c988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x29c98c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x29c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29c990: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x29c990u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x29c994: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x29c994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29c998: 0x0  nop
    ctx->pc = 0x29c998u;
    // NOP
    // 0x29c99c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29C99Cu;
    {
        const bool branch_taken_0x29c99c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c99c) {
            ctx->pc = 0x29C988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c988;
        }
    }
    ctx->pc = 0x29C9A4u;
label_29c9a4:
    // 0x29c9a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29c9a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c9a8:
    // 0x29c9a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29c9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29c9ac: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x29c9acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29c9b0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29c9b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29c9b4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29c9b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c9b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29c9b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c9bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29c9bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c9c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c9c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x29C9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9C4u;
        // 0x29c9c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C9CCu;
    // 0x29c9cc: 0x0  nop
    ctx->pc = 0x29c9ccu;
    // NOP
    ctx->pc = 0x29c9d0u;
}
