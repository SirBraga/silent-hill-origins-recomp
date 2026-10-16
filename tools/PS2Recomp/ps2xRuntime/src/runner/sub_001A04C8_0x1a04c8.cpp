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

// Function: sub_001A04C8
// Address: 0x1a04c8 - 0x1a05e8
void sub_001A04C8_0x1a04c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A04C8_0x1a04c8");
#endif

    switch (ctx->pc) {
        case 0x1a0538u: goto label_1a0538;
        case 0x1a0554u: goto label_1a0554;
        case 0x1a0564u: goto label_1a0564;
        case 0x1a0580u: goto label_1a0580;
        default: break;
    }

    ctx->pc = 0x1a04c8u;

    // 0x1a04c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a04c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a04cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a04ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a04d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a04d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a04d4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1a04d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1a04d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a04d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a04dc: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1a04dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1a04e0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a04e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a04e4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1a04e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1a04e8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1a04e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a04ec: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1a04ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1a04f0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1a04f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1a04f4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1a04f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1a04f8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1a04f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1a04fc: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A04FCu;
    {
        const bool branch_taken_0x1a04fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04FCu;
        // 0x1a0500: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a04fc) {
            ctx->pc = 0x1A0508u;
            goto label_1a0508;
        }
    }
    ctx->pc = 0x1A0504u;
    // 0x1a0504: 0x8ea7080c  lw          $a3, 0x80C($s5)
    ctx->pc = 0x1a0504u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2060)));
label_1a0508:
    // 0x1a0508: 0x24020098  addiu       $v0, $zero, 0x98
    ctx->pc = 0x1a0508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1a050c: 0x8ea40804  lw          $a0, 0x804($s5)
    ctx->pc = 0x1a050cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2052)));
    // 0x1a0510: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x1a0510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1a0514: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a0514u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0518: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a0518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a051c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1a051cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a0520: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1a0520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1a0524: 0x18600024  blez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A0524u;
    {
        const bool branch_taken_0x1a0524 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1A0528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0524u;
        // 0x1a0528: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0524) {
            ctx->pc = 0x1A05B8u;
            goto label_1a05b8;
        }
    }
    ctx->pc = 0x1A052Cu;
    // 0x1a052c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1a052cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0530: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a0530u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0534: 0x0  nop
    ctx->pc = 0x1a0534u;
    // NOP
label_1a0538:
    // 0x1a0538: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a0538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a053c: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x1a053cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1a0540: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a0540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a0544: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x1a0544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1a0548: 0x738021  addu        $s0, $v1, $s3
    ctx->pc = 0x1a0548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1a054c: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x1A054Cu;
    SET_GPR_U32(ctx, 31, 0x1A0554u);
    ctx->pc = 0x1A0550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A054Cu;
    // 0x1a0550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x1A054Cu, 0x1A0554u)) {
        return;
    }
    ctx->pc = 0x1A0554u;
label_1a0554:
    // 0x1a0554: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0554u;
    {
        const bool branch_taken_0x1a0554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0554u;
        // 0x1a0558: 0x501023  subu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0554) {
            ctx->pc = 0x1A0564u;
            goto label_1a0564;
        }
    }
    ctx->pc = 0x1A055Cu;
    // 0x1a055c: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x1A055Cu;
    SET_GPR_U32(ctx, 31, 0x1A0564u);
    ctx->pc = 0x1A0560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A055Cu;
    // 0x1a0560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x1A055Cu, 0x1A0564u)) {
        return;
    }
    ctx->pc = 0x1A0564u;
label_1a0564:
    // 0x1a0564: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0564u;
    {
        const bool branch_taken_0x1a0564 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0564) {
            ctx->pc = 0x1A0588u;
            goto label_1a0588;
        }
    }
    ctx->pc = 0x1A056Cu;
    // 0x1a056c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1a056cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a0570: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0570u;
    {
        const bool branch_taken_0x1a0570 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0570u;
        // 0x1a0574: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0570) {
            ctx->pc = 0x1A0588u;
            goto label_1a0588;
        }
    }
    ctx->pc = 0x1A0578u;
    // 0x1a0578: 0xc0c4b78  jal         func_312DE0
    ctx->pc = 0x1A0578u;
    SET_GPR_U32(ctx, 31, 0x1A0580u);
    ctx->pc = 0x1A057Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0578u;
    // 0x1a057c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312DE0u, 0x1A0578u, 0x1A0580u)) {
        return;
    }
    ctx->pc = 0x1A0580u;
label_1a0580:
    // 0x1a0580: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0580u;
    {
        const bool branch_taken_0x1a0580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0580) {
            ctx->pc = 0x1A0584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0580u;
            // 0x1a0584: 0x8ea40804  lw          $a0, 0x804($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A059Cu;
            goto label_1a059c;
        }
    }
    ctx->pc = 0x1A0588u;
label_1a0588:
    // 0x1a0588: 0x16d70003  bne         $s6, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0588u;
    {
        const bool branch_taken_0x1a0588 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 23));
        ctx->pc = 0x1A058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0588u;
        // 0x1a058c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0588) {
            ctx->pc = 0x1A0598u;
            goto label_1a0598;
        }
    }
    ctx->pc = 0x1A0590u;
    // 0x1a0590: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A0590u;
    {
        const bool branch_taken_0x1a0590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0590u;
        // 0x1a0594: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0590) {
            ctx->pc = 0x1A05BCu;
            goto label_1a05bc;
        }
    }
    ctx->pc = 0x1A0598u;
label_1a0598:
    // 0x1a0598: 0x8ea40804  lw          $a0, 0x804($s5)
    ctx->pc = 0x1a0598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2052)));
label_1a059c:
    // 0x1a059c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a059cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a05a0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a05a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a05a4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a05a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a05a8: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1a05a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1a05ac: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1a05acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a05b0: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1A05B0u;
    {
        const bool branch_taken_0x1a05b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A05B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05B0u;
        // 0x1a05b4: 0x267300dc  addiu       $s3, $s3, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a05b0) {
            ctx->pc = 0x1A0538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0538;
        }
    }
    ctx->pc = 0x1A05B8u;
label_1a05b8:
    // 0x1a05b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a05b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a05bc:
    // 0x1a05bc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1a05bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a05c0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1a05c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a05c4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1a05c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a05c8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1a05c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a05cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a05ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a05d0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1a05d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a05d4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1a05d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a05d8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1a05d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a05dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a05dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a05e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A05E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A05E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05E0u;
        // 0x1a05e4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A05E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A05E8u;
}
