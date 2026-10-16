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

// Function: sub_0026C850
// Address: 0x26c850 - 0x26cc80
void sub_0026C850_0x26c850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C850_0x26c850");
#endif

    switch (ctx->pc) {
        case 0x26c880u: goto label_26c880;
        case 0x26c89cu: goto label_26c89c;
        case 0x26c8acu: goto label_26c8ac;
        case 0x26c8bcu: goto label_26c8bc;
        case 0x26c8f0u: goto label_26c8f0;
        case 0x26c908u: goto label_26c908;
        case 0x26c918u: goto label_26c918;
        case 0x26c930u: goto label_26c930;
        case 0x26c940u: goto label_26c940;
        case 0x26c974u: goto label_26c974;
        case 0x26c984u: goto label_26c984;
        case 0x26c994u: goto label_26c994;
        case 0x26c9a4u: goto label_26c9a4;
        case 0x26c9e8u: goto label_26c9e8;
        case 0x26ca04u: goto label_26ca04;
        case 0x26ca14u: goto label_26ca14;
        case 0x26ca24u: goto label_26ca24;
        case 0x26ca34u: goto label_26ca34;
        case 0x26ca44u: goto label_26ca44;
        case 0x26ca54u: goto label_26ca54;
        case 0x26caa8u: goto label_26caa8;
        case 0x26cab8u: goto label_26cab8;
        case 0x26cafcu: goto label_26cafc;
        case 0x26cb0cu: goto label_26cb0c;
        case 0x26cb1cu: goto label_26cb1c;
        case 0x26cb28u: goto label_26cb28;
        case 0x26cb5cu: goto label_26cb5c;
        case 0x26cb6cu: goto label_26cb6c;
        case 0x26cb7cu: goto label_26cb7c;
        case 0x26cb88u: goto label_26cb88;
        case 0x26cb98u: goto label_26cb98;
        case 0x26cbc0u: goto label_26cbc0;
        case 0x26cbd0u: goto label_26cbd0;
        case 0x26cbe0u: goto label_26cbe0;
        case 0x26cc1cu: goto label_26cc1c;
        case 0x26cc2cu: goto label_26cc2c;
        case 0x26cc48u: goto label_26cc48;
        default: break;
    }

    ctx->pc = 0x26c850u;

    // 0x26c850: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26c850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26c854: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x26c854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x26c858: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x26c858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x26c85c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26c85cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c860: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26c860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c864: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x26c864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x26c868: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x26c868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x26c86c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x26c86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x26c870: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x26c870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26c874: 0x3c15006b  lui         $s5, 0x6B
    ctx->pc = 0x26c874u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)107 << 16));
    // 0x26c878: 0xc09b6b4  jal         func_26DAD0
    ctx->pc = 0x26C878u;
    SET_GPR_U32(ctx, 31, 0x26C880u);
    ctx->pc = 0x26C87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C878u;
    // 0x26c87c: 0xffb30060  sd          $s3, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DAD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26DAD0u, 0x26C878u, 0x26C880u)) {
        return;
    }
    ctx->pc = 0x26C880u;
label_26c880:
    // 0x26c880: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26c880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c884: 0x8eb4cb58  lw          $s4, -0x34A8($s5)
    ctx->pc = 0x26c884u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294953816)));
    // 0x26c888: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26c888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26c88c: 0x128200f3  beq         $s4, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x26C88Cu;
    {
        const bool branch_taken_0x26c88c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C88Cu;
        // 0x26c890: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c88c) {
            ctx->pc = 0x26CC5Cu;
            goto label_26cc5c;
        }
    }
    ctx->pc = 0x26C894u;
    // 0x26c894: 0xc09ca24  jal         func_272890
    ctx->pc = 0x26C894u;
    SET_GPR_U32(ctx, 31, 0x26C89Cu);
    ctx->pc = 0x26C898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C894u;
    // 0x26c898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272890u, 0x26C894u, 0x26C89Cu)) {
        return;
    }
    ctx->pc = 0x26C89Cu;
label_26c89c:
    // 0x26c89c: 0x144000ef  bnez        $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x26C89Cu;
    {
        const bool branch_taken_0x26c89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C89Cu;
        // 0x26c8a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c89c) {
            ctx->pc = 0x26CC5Cu;
            goto label_26cc5c;
        }
    }
    ctx->pc = 0x26C8A4u;
    // 0x26c8a4: 0xc09ca24  jal         func_272890
    ctx->pc = 0x26C8A4u;
    SET_GPR_U32(ctx, 31, 0x26C8ACu);
    ctx->pc = 0x26C8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C8A4u;
    // 0x26c8a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272890u, 0x26C8A4u, 0x26C8ACu)) {
        return;
    }
    ctx->pc = 0x26C8ACu;
label_26c8ac:
    // 0x26c8ac: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x26C8ACu;
    {
        const bool branch_taken_0x26c8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8ACu;
        // 0x26c8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8ac) {
            ctx->pc = 0x26C920u;
            goto label_26c920;
        }
    }
    ctx->pc = 0x26C8B4u;
    // 0x26c8b4: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26C8B4u;
    SET_GPR_U32(ctx, 31, 0x26C8BCu);
    ctx->pc = 0x26C8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C8B4u;
    // 0x26c8b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26C8B4u, 0x26C8BCu)) {
        return;
    }
    ctx->pc = 0x26C8BCu;
label_26c8bc:
    // 0x26c8bc: 0x144000e7  bnez        $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x26C8BCu;
    {
        const bool branch_taken_0x26c8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8BCu;
        // 0x26c8c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8bc) {
            ctx->pc = 0x26CC5Cu;
            goto label_26cc5c;
        }
    }
    ctx->pc = 0x26C8C4u;
    // 0x26c8c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c8c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26c8cc: 0x2442bb30  addiu       $v0, $v0, -0x44D0
    ctx->pc = 0x26c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949680));
    // 0x26c8d0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x26c8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x26c8d4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26c8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26c8d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c8dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26c8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26c8e0: 0xffb20018  sd          $s2, 0x18($sp)
    ctx->pc = 0x26c8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 18));
    // 0x26c8e4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x26c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x26c8e8: 0x16830005  bne         $s4, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C8E8u;
    {
        const bool branch_taken_0x26c8e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x26C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8E8u;
        // 0x26c8ec: 0xffb20008  sd          $s2, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8e8) {
            ctx->pc = 0x26C900u;
            goto label_26c900;
        }
    }
    ctx->pc = 0x26C8F0u;
label_26c8f0:
    // 0x26c8f0: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x26c8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x26c8f4: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x26c8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x26c8f8: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x26C8F8u;
    {
        const bool branch_taken_0x26c8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8F8u;
        // 0x26c8fc: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8f8) {
            ctx->pc = 0x26CC34u;
            goto label_26cc34;
        }
    }
    ctx->pc = 0x26C900u;
label_26c900:
    // 0x26c900: 0xc09ca32  jal         func_2728C8
    ctx->pc = 0x26C900u;
    SET_GPR_U32(ctx, 31, 0x26C908u);
    ctx->pc = 0x26C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C900u;
    // 0x26c904: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728C8u, 0x26C900u, 0x26C908u)) {
        return;
    }
    ctx->pc = 0x26C908u;
label_26c908:
    // 0x26c908: 0x144000cb  bnez        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x26C908u;
    {
        const bool branch_taken_0x26c908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C908u;
        // 0x26c90c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c908) {
            ctx->pc = 0x26CC38u;
            goto label_26cc38;
        }
    }
    ctx->pc = 0x26C910u;
    // 0x26c910: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26C910u;
    SET_GPR_U32(ctx, 31, 0x26C918u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26C910u, 0x26C918u)) {
        return;
    }
    ctx->pc = 0x26C918u;
label_26c918:
    // 0x26c918: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x26C918u;
    {
        const bool branch_taken_0x26c918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C918u;
        // 0x26c91c: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c918) {
            ctx->pc = 0x26CC30u;
            goto label_26cc30;
        }
    }
    ctx->pc = 0x26C920u;
label_26c920:
    // 0x26c920: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26c920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c928: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26C928u;
    SET_GPR_U32(ctx, 31, 0x26C930u);
    ctx->pc = 0x26C92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C928u;
    // 0x26c92c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26C928u, 0x26C930u)) {
        return;
    }
    ctx->pc = 0x26C930u;
label_26c930:
    // 0x26c930: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x26C930u;
    {
        const bool branch_taken_0x26c930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C930u;
        // 0x26c934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c930) {
            ctx->pc = 0x26CA1Cu;
            goto label_26ca1c;
        }
    }
    ctx->pc = 0x26C938u;
    // 0x26c938: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26C938u;
    SET_GPR_U32(ctx, 31, 0x26C940u);
    ctx->pc = 0x26C93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C938u;
    // 0x26c93c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26C938u, 0x26C940u)) {
        return;
    }
    ctx->pc = 0x26C940u;
label_26c940:
    // 0x26c940: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26C940u;
    {
        const bool branch_taken_0x26c940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C940u;
        // 0x26c944: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c940) {
            ctx->pc = 0x26C98Cu;
            goto label_26c98c;
        }
    }
    ctx->pc = 0x26C948u;
    // 0x26c948: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26c948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c94c: 0x2442bb30  addiu       $v0, $v0, -0x44D0
    ctx->pc = 0x26c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949680));
    // 0x26c950: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x26c950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x26c954: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26c954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26c958: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x26c958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x26c95c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26c95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26c960: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x26c960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x26c964: 0x1680ffe2  bnez        $s4, . + 4 + (-0x1E << 2)
    ctx->pc = 0x26C964u;
    {
        const bool branch_taken_0x26c964 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C964u;
        // 0x26c968: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c964) {
            ctx->pc = 0x26C8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26c8f0;
        }
    }
    ctx->pc = 0x26C96Cu;
    // 0x26c96c: 0xc09ca32  jal         func_2728C8
    ctx->pc = 0x26C96Cu;
    SET_GPR_U32(ctx, 31, 0x26C974u);
    ctx->pc = 0x26C970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C96Cu;
    // 0x26c970: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728C8u, 0x26C96Cu, 0x26C974u)) {
        return;
    }
    ctx->pc = 0x26C974u;
label_26c974:
    // 0x26c974: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x26C974u;
    {
        const bool branch_taken_0x26c974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C974u;
        // 0x26c978: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c974) {
            ctx->pc = 0x26CC38u;
            goto label_26cc38;
        }
    }
    ctx->pc = 0x26C97Cu;
    // 0x26c97c: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26C97Cu;
    SET_GPR_U32(ctx, 31, 0x26C984u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26C97Cu, 0x26C984u)) {
        return;
    }
    ctx->pc = 0x26C984u;
label_26c984:
    // 0x26c984: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x26C984u;
    {
        const bool branch_taken_0x26c984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C984u;
        // 0x26c988: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c984) {
            ctx->pc = 0x26CC30u;
            goto label_26cc30;
        }
    }
    ctx->pc = 0x26C98Cu;
label_26c98c:
    // 0x26c98c: 0xc09c9a6  jal         func_272698
    ctx->pc = 0x26C98Cu;
    SET_GPR_U32(ctx, 31, 0x26C994u);
    ctx->pc = 0x26C990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C98Cu;
    // 0x26c990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272698u, 0x26C98Cu, 0x26C994u)) {
        return;
    }
    ctx->pc = 0x26C994u;
label_26c994:
    // 0x26c994: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x26C994u;
    {
        const bool branch_taken_0x26c994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C994u;
        // 0x26c998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c994) {
            ctx->pc = 0x26CC58u;
            goto label_26cc58;
        }
    }
    ctx->pc = 0x26C99Cu;
    // 0x26c99c: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26C99Cu;
    SET_GPR_U32(ctx, 31, 0x26C9A4u);
    ctx->pc = 0x26C9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C99Cu;
    // 0x26c9a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26C99Cu, 0x26C9A4u)) {
        return;
    }
    ctx->pc = 0x26C9A4u;
label_26c9a4:
    // 0x26c9a4: 0x44100ad  bgez        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x26C9A4u;
    {
        const bool branch_taken_0x26c9a4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x26C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9A4u;
        // 0x26c9a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9a4) {
            ctx->pc = 0x26CC5Cu;
            goto label_26cc5c;
        }
    }
    ctx->pc = 0x26C9ACu;
    // 0x26c9ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26c9b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c9b4: 0x2442bb30  addiu       $v0, $v0, -0x44D0
    ctx->pc = 0x26c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949680));
    // 0x26c9b8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x26c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x26c9bc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26c9c0: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x26c9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x26c9c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26c9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26c9c8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C9C8u;
    {
        const bool branch_taken_0x26c9c8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9C8u;
        // 0x26c9cc: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9c8) {
            ctx->pc = 0x26C9D8u;
            goto label_26c9d8;
        }
    }
    ctx->pc = 0x26C9D0u;
    // 0x26c9d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26C9D0u;
    {
        const bool branch_taken_0x26c9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9D0u;
        // 0x26c9d4: 0xffb30018  sd          $s3, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9d0) {
            ctx->pc = 0x26C9ECu;
            goto label_26c9ec;
        }
    }
    ctx->pc = 0x26C9D8u;
label_26c9d8:
    // 0x26c9d8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26c9dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26c9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c9e0: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26C9E0u;
    SET_GPR_U32(ctx, 31, 0x26C9E8u);
    ctx->pc = 0x26C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C9E0u;
    // 0x26c9e4: 0xdc45cb50  ld          $a1, -0x34B0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294953808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26C9E0u, 0x26C9E8u)) {
        return;
    }
    ctx->pc = 0x26C9E8u;
label_26c9e8:
    // 0x26c9e8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x26c9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_26c9ec:
    // 0x26c9ec: 0x8ea3cb58  lw          $v1, -0x34A8($s5)
    ctx->pc = 0x26c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294953816)));
    // 0x26c9f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c9f4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C9F4u;
    {
        const bool branch_taken_0x26c9f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26c9f4) {
            ctx->pc = 0x26CA0Cu;
            goto label_26ca0c;
        }
    }
    ctx->pc = 0x26C9FCu;
    // 0x26c9fc: 0xc09ca32  jal         func_2728C8
    ctx->pc = 0x26C9FCu;
    SET_GPR_U32(ctx, 31, 0x26CA04u);
    ctx->pc = 0x26CA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C9FCu;
    // 0x26ca00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728C8u, 0x26C9FCu, 0x26CA04u)) {
        return;
    }
    ctx->pc = 0x26CA04u;
label_26ca04:
    // 0x26ca04: 0x1440008c  bnez        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x26CA04u;
    {
        const bool branch_taken_0x26ca04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA04u;
        // 0x26ca08: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca04) {
            ctx->pc = 0x26CC38u;
            goto label_26cc38;
        }
    }
    ctx->pc = 0x26CA0Cu;
label_26ca0c:
    // 0x26ca0c: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26CA0Cu;
    SET_GPR_U32(ctx, 31, 0x26CA14u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26CA0Cu, 0x26CA14u)) {
        return;
    }
    ctx->pc = 0x26CA14u;
label_26ca14:
    // 0x26ca14: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x26CA14u;
    {
        const bool branch_taken_0x26ca14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA14u;
        // 0x26ca18: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca14) {
            ctx->pc = 0x26CC30u;
            goto label_26cc30;
        }
    }
    ctx->pc = 0x26CA1Cu;
label_26ca1c:
    // 0x26ca1c: 0xc09c9a6  jal         func_272698
    ctx->pc = 0x26CA1Cu;
    SET_GPR_U32(ctx, 31, 0x26CA24u);
    ctx->pc = 0x26CA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CA1Cu;
    // 0x26ca20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272698u, 0x26CA1Cu, 0x26CA24u)) {
        return;
    }
    ctx->pc = 0x26CA24u;
label_26ca24:
    // 0x26ca24: 0x54400063  bnel        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x26CA24u;
    {
        const bool branch_taken_0x26ca24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ca24) {
            ctx->pc = 0x26CA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CA24u;
            // 0x26ca28: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CBB4u;
            goto label_26cbb4;
        }
    }
    ctx->pc = 0x26CA2Cu;
    // 0x26ca2c: 0xc09c9a6  jal         func_272698
    ctx->pc = 0x26CA2Cu;
    SET_GPR_U32(ctx, 31, 0x26CA34u);
    ctx->pc = 0x26CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CA2Cu;
    // 0x26ca30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272698u, 0x26CA2Cu, 0x26CA34u)) {
        return;
    }
    ctx->pc = 0x26CA34u;
label_26ca34:
    // 0x26ca34: 0x5040005f  beql        $v0, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x26CA34u;
    {
        const bool branch_taken_0x26ca34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ca34) {
            ctx->pc = 0x26CA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CA34u;
            // 0x26ca38: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CBB4u;
            goto label_26cbb4;
        }
    }
    ctx->pc = 0x26CA3Cu;
    // 0x26ca3c: 0xc09c9a6  jal         func_272698
    ctx->pc = 0x26CA3Cu;
    SET_GPR_U32(ctx, 31, 0x26CA44u);
    ctx->pc = 0x26CA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CA3Cu;
    // 0x26ca40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272698u, 0x26CA3Cu, 0x26CA44u)) {
        return;
    }
    ctx->pc = 0x26CA44u;
label_26ca44:
    // 0x26ca44: 0x5040005b  beql        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x26CA44u;
    {
        const bool branch_taken_0x26ca44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ca44) {
            ctx->pc = 0x26CA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CA44u;
            // 0x26ca48: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CBB4u;
            goto label_26cbb4;
        }
    }
    ctx->pc = 0x26CA4Cu;
    // 0x26ca4c: 0xc09ca24  jal         func_272890
    ctx->pc = 0x26CA4Cu;
    SET_GPR_U32(ctx, 31, 0x26CA54u);
    ctx->pc = 0x26CA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CA4Cu;
    // 0x26ca50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272890u, 0x26CA4Cu, 0x26CA54u)) {
        return;
    }
    ctx->pc = 0x26CA54u;
label_26ca54:
    // 0x26ca54: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26CA54u;
    {
        const bool branch_taken_0x26ca54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA54u;
        // 0x26ca58: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca54) {
            ctx->pc = 0x26CAC0u;
            goto label_26cac0;
        }
    }
    ctx->pc = 0x26CA5Cu;
    // 0x26ca5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26ca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ca60: 0x2442bb30  addiu       $v0, $v0, -0x44D0
    ctx->pc = 0x26ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949680));
    // 0x26ca64: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x26ca64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x26ca68: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26ca68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26ca6c: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x26ca6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x26ca70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26ca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26ca74: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CA74u;
    {
        const bool branch_taken_0x26ca74 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA74u;
        // 0x26ca78: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca74) {
            ctx->pc = 0x26CA84u;
            goto label_26ca84;
        }
    }
    ctx->pc = 0x26CA7Cu;
    // 0x26ca7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26CA7Cu;
    {
        const bool branch_taken_0x26ca7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA7Cu;
        // 0x26ca80: 0xffb30018  sd          $s3, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca7c) {
            ctx->pc = 0x26CA90u;
            goto label_26ca90;
        }
    }
    ctx->pc = 0x26CA84u;
label_26ca84:
    // 0x26ca84: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26ca88: 0xdc43bb38  ld          $v1, -0x44C8($v0)
    ctx->pc = 0x26ca88u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x6ABB38u));
    // 0x26ca8c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x26ca8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_26ca90:
    // 0x26ca90: 0x8ea3cb58  lw          $v1, -0x34A8($s5)
    ctx->pc = 0x26ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294953816)));
    // 0x26ca94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26ca98: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26CA98u;
    {
        const bool branch_taken_0x26ca98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ca98) {
            ctx->pc = 0x26CAB0u;
            goto label_26cab0;
        }
    }
    ctx->pc = 0x26CAA0u;
    // 0x26caa0: 0xc09ca32  jal         func_2728C8
    ctx->pc = 0x26CAA0u;
    SET_GPR_U32(ctx, 31, 0x26CAA8u);
    ctx->pc = 0x26CAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CAA0u;
    // 0x26caa4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728C8u, 0x26CAA0u, 0x26CAA8u)) {
        return;
    }
    ctx->pc = 0x26CAA8u;
label_26caa8:
    // 0x26caa8: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x26CAA8u;
    {
        const bool branch_taken_0x26caa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAA8u;
        // 0x26caac: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26caa8) {
            ctx->pc = 0x26CC38u;
            goto label_26cc38;
        }
    }
    ctx->pc = 0x26CAB0u;
label_26cab0:
    // 0x26cab0: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26CAB0u;
    SET_GPR_U32(ctx, 31, 0x26CAB8u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26CAB0u, 0x26CAB8u)) {
        return;
    }
    ctx->pc = 0x26CAB8u;
label_26cab8:
    // 0x26cab8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x26CAB8u;
    {
        const bool branch_taken_0x26cab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAB8u;
        // 0x26cabc: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cab8) {
            ctx->pc = 0x26CC30u;
            goto label_26cc30;
        }
    }
    ctx->pc = 0x26CAC0u;
label_26cac0:
    // 0x26cac0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26cac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26cac4: 0x2442bb30  addiu       $v0, $v0, -0x44D0
    ctx->pc = 0x26cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949680));
    // 0x26cac8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x26cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x26cacc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26caccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26cad0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x26cad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x26cad4: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x26cad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x26cad8: 0x16800019  bnez        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x26CAD8u;
    {
        const bool branch_taken_0x26cad8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAD8u;
        // 0x26cadc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cad8) {
            ctx->pc = 0x26CB40u;
            goto label_26cb40;
        }
    }
    ctx->pc = 0x26CAE0u;
    // 0x26cae0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26cae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26cae4: 0xdc22bb40  ld          $v0, -0x44C0($at)
    ctx->pc = 0x26cae4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6ABB40u));
    // 0x26cae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26cae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26caec: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x26caecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x26caf0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x26caf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x26caf4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26CAF4u;
    SET_GPR_U32(ctx, 31, 0x26CAFCu);
    ctx->pc = 0x26CAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CAF4u;
    // 0x26caf8: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26CAF4u, 0x26CAFCu)) {
        return;
    }
    ctx->pc = 0x26CAFCu;
label_26cafc:
    // 0x26cafc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26cafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26cb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb04: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26CB04u;
    SET_GPR_U32(ctx, 31, 0x26CB0Cu);
    ctx->pc = 0x26CB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB04u;
    // 0x26cb08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26CB04u, 0x26CB0Cu)) {
        return;
    }
    ctx->pc = 0x26CB0Cu;
label_26cb0c:
    // 0x26cb0c: 0x4410024  bgez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x26CB0Cu;
    {
        const bool branch_taken_0x26cb0c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x26CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB0Cu;
        // 0x26cb10: 0x8ea3cb58  lw          $v1, -0x34A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294953816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb0c) {
            ctx->pc = 0x26CBA0u;
            goto label_26cba0;
        }
    }
    ctx->pc = 0x26CB14u;
    // 0x26cb14: 0xc09ca3c  jal         func_2728F0
    ctx->pc = 0x26CB14u;
    SET_GPR_U32(ctx, 31, 0x26CB1Cu);
    ctx->pc = 0x26CB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB14u;
    // 0x26cb18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728F0u, 0x26CB14u, 0x26CB1Cu)) {
        return;
    }
    ctx->pc = 0x26CB1Cu;
label_26cb1c:
    // 0x26cb1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26cb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb20: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26CB20u;
    SET_GPR_U32(ctx, 31, 0x26CB28u);
    ctx->pc = 0x26CB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB20u;
    // 0x26cb24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26CB20u, 0x26CB28u)) {
        return;
    }
    ctx->pc = 0x26CB28u;
label_26cb28:
    // 0x26cb28: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x26CB28u;
    {
        const bool branch_taken_0x26cb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB28u;
        // 0x26cb2c: 0x8ea3cb58  lw          $v1, -0x34A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294953816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb28) {
            ctx->pc = 0x26CBA0u;
            goto label_26cba0;
        }
    }
    ctx->pc = 0x26CB30u;
    // 0x26cb30: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26cb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26cb34: 0xdc22bb48  ld          $v0, -0x44B8($at)
    ctx->pc = 0x26cb34u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6ABB48u));
    // 0x26cb38: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x26CB38u;
    {
        const bool branch_taken_0x26cb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB38u;
        // 0x26cb3c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb38) {
            ctx->pc = 0x26CBA0u;
            goto label_26cba0;
        }
    }
    ctx->pc = 0x26CB40u;
label_26cb40:
    // 0x26cb40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26cb44: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x26cb44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x26cb48: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x26cb48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x26cb4c: 0xdc51cb50  ld          $s1, -0x34B0($v0)
    ctx->pc = 0x26cb4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 2), 4294953808)));
    // 0x26cb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26cb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb54: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26CB54u;
    SET_GPR_U32(ctx, 31, 0x26CB5Cu);
    ctx->pc = 0x26CB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB54u;
    // 0x26cb58: 0xffb10018  sd          $s1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26CB54u, 0x26CB5Cu)) {
        return;
    }
    ctx->pc = 0x26CB5Cu;
label_26cb5c:
    // 0x26cb5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26cb5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26cb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb64: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26CB64u;
    SET_GPR_U32(ctx, 31, 0x26CB6Cu);
    ctx->pc = 0x26CB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB64u;
    // 0x26cb68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26CB64u, 0x26CB6Cu)) {
        return;
    }
    ctx->pc = 0x26CB6Cu;
label_26cb6c:
    // 0x26cb6c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26CB6Cu;
    {
        const bool branch_taken_0x26cb6c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x26CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB6Cu;
        // 0x26cb70: 0x8ea3cb58  lw          $v1, -0x34A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294953816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb6c) {
            ctx->pc = 0x26CBA0u;
            goto label_26cba0;
        }
    }
    ctx->pc = 0x26CB74u;
    // 0x26cb74: 0xc09ca3c  jal         func_2728F0
    ctx->pc = 0x26CB74u;
    SET_GPR_U32(ctx, 31, 0x26CB7Cu);
    ctx->pc = 0x26CB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB74u;
    // 0x26cb78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728F0u, 0x26CB74u, 0x26CB7Cu)) {
        return;
    }
    ctx->pc = 0x26CB7Cu;
label_26cb7c:
    // 0x26cb7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26cb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb80: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26CB80u;
    SET_GPR_U32(ctx, 31, 0x26CB88u);
    ctx->pc = 0x26CB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB80u;
    // 0x26cb84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26CB80u, 0x26CB88u)) {
        return;
    }
    ctx->pc = 0x26CB88u;
label_26cb88:
    // 0x26cb88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26CB88u;
    {
        const bool branch_taken_0x26cb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB88u;
        // 0x26cb8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb88) {
            ctx->pc = 0x26CB9Cu;
            goto label_26cb9c;
        }
    }
    ctx->pc = 0x26CB90u;
    // 0x26cb90: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26CB90u;
    SET_GPR_U32(ctx, 31, 0x26CB98u);
    ctx->pc = 0x26CB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB90u;
    // 0x26cb94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26CB90u, 0x26CB98u)) {
        return;
    }
    ctx->pc = 0x26CB98u;
label_26cb98:
    // 0x26cb98: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x26cb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_26cb9c:
    // 0x26cb9c: 0x8ea3cb58  lw          $v1, -0x34A8($s5)
    ctx->pc = 0x26cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294953816)));
label_26cba0:
    // 0x26cba0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26cba4: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x26CBA4u;
    {
        const bool branch_taken_0x26cba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26cba4) {
            ctx->pc = 0x26CC24u;
            goto label_26cc24;
        }
    }
    ctx->pc = 0x26CBACu;
    // 0x26cbac: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x26CBACu;
    {
        const bool branch_taken_0x26cbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cbac) {
            ctx->pc = 0x26CC14u;
            goto label_26cc14;
        }
    }
    ctx->pc = 0x26CBB4u;
label_26cbb4:
    // 0x26cbb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26cbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cbb8: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26CBB8u;
    SET_GPR_U32(ctx, 31, 0x26CBC0u);
    ctx->pc = 0x26CBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CBB8u;
    // 0x26cbbc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26CBB8u, 0x26CBC0u)) {
        return;
    }
    ctx->pc = 0x26CBC0u;
label_26cbc0:
    // 0x26cbc0: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x26CBC0u;
    {
        const bool branch_taken_0x26cbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBC0u;
        // 0x26cbc4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cbc0) {
            ctx->pc = 0x26CC5Cu;
            goto label_26cc5c;
        }
    }
    ctx->pc = 0x26CBC8u;
    // 0x26cbc8: 0xc09c9a6  jal         func_272698
    ctx->pc = 0x26CBC8u;
    SET_GPR_U32(ctx, 31, 0x26CBD0u);
    ctx->pc = 0x26CBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CBC8u;
    // 0x26cbcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272698u, 0x26CBC8u, 0x26CBD0u)) {
        return;
    }
    ctx->pc = 0x26CBD0u;
label_26cbd0:
    // 0x26cbd0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26CBD0u;
    {
        const bool branch_taken_0x26cbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBD0u;
        // 0x26cbd4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cbd0) {
            ctx->pc = 0x26CC5Cu;
            goto label_26cc5c;
        }
    }
    ctx->pc = 0x26CBD8u;
    // 0x26cbd8: 0xc09c9a6  jal         func_272698
    ctx->pc = 0x26CBD8u;
    SET_GPR_U32(ctx, 31, 0x26CBE0u);
    ctx->pc = 0x26CBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CBD8u;
    // 0x26cbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272698u, 0x26CBD8u, 0x26CBE0u)) {
        return;
    }
    ctx->pc = 0x26CBE0u;
label_26cbe0:
    // 0x26cbe0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x26CBE0u;
    {
        const bool branch_taken_0x26cbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBE0u;
        // 0x26cbe4: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cbe0) {
            ctx->pc = 0x26CC58u;
            goto label_26cc58;
        }
    }
    ctx->pc = 0x26CBE8u;
    // 0x26cbe8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26cbec: 0x2463bb30  addiu       $v1, $v1, -0x44D0
    ctx->pc = 0x26cbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949680));
    // 0x26cbf0: 0x8ea5cb58  lw          $a1, -0x34A8($s5)
    ctx->pc = 0x26cbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294953816)));
    // 0x26cbf4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x26cbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x26cbf8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26cbfc: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x26cbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x26cc00: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x26cc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x26cc04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26cc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26cc08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x26cc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x26cc0c: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26CC0Cu;
    {
        const bool branch_taken_0x26cc0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x26CC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC0Cu;
        // 0x26cc10: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc0c) {
            ctx->pc = 0x26CC24u;
            goto label_26cc24;
        }
    }
    ctx->pc = 0x26CC14u;
label_26cc14:
    // 0x26cc14: 0xc09ca32  jal         func_2728C8
    ctx->pc = 0x26CC14u;
    SET_GPR_U32(ctx, 31, 0x26CC1Cu);
    ctx->pc = 0x26CC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CC14u;
    // 0x26cc18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728C8u, 0x26CC14u, 0x26CC1Cu)) {
        return;
    }
    ctx->pc = 0x26CC1Cu;
label_26cc1c:
    // 0x26cc1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26CC1Cu;
    {
        const bool branch_taken_0x26cc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC1Cu;
        // 0x26cc20: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc1c) {
            ctx->pc = 0x26CC38u;
            goto label_26cc38;
        }
    }
    ctx->pc = 0x26CC24u;
label_26cc24:
    // 0x26cc24: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26CC24u;
    SET_GPR_U32(ctx, 31, 0x26CC2Cu);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26CC24u, 0x26CC2Cu)) {
        return;
    }
    ctx->pc = 0x26CC2Cu;
label_26cc2c:
    // 0x26cc2c: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x26cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_26cc30:
    // 0x26cc30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_26cc34:
    // 0x26cc34: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x26cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_26cc38:
    // 0x26cc38: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x26CC38u;
    {
        const bool branch_taken_0x26cc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cc38) {
            ctx->pc = 0x26CC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CC38u;
            // 0x26cc3c: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CC5Cu;
            goto label_26cc5c;
        }
    }
    ctx->pc = 0x26CC40u;
    // 0x26cc40: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26CC40u;
    SET_GPR_U32(ctx, 31, 0x26CC48u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26CC40u, 0x26CC48u)) {
        return;
    }
    ctx->pc = 0x26CC48u;
label_26cc48:
    // 0x26cc48: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x26cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26cc4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26cc50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26CC50u;
    {
        const bool branch_taken_0x26cc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC50u;
        // 0x26cc54: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc50) {
            ctx->pc = 0x26CC5Cu;
            goto label_26cc5c;
        }
    }
    ctx->pc = 0x26CC58u;
label_26cc58:
    // 0x26cc58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26cc58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26cc5c:
    // 0x26cc5c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26cc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26cc60: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x26cc60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26cc64: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x26cc64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26cc68: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x26cc68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26cc6c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x26cc6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26cc70: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x26cc70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26cc74: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x26cc74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26cc78: 0x3e00008  jr          $ra
    ctx->pc = 0x26CC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC78u;
        // 0x26cc7c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26CC80u;
}
