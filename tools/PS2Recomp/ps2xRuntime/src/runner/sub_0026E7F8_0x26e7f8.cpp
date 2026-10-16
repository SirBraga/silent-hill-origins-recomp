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

// Function: sub_0026E7F8
// Address: 0x26e7f8 - 0x26ed18
void sub_0026E7F8_0x26e7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E7F8_0x26e7f8");
#endif

    switch (ctx->pc) {
        case 0x26e88cu: goto label_26e88c;
        case 0x26e8c8u: goto label_26e8c8;
        case 0x26e8dcu: goto label_26e8dc;
        case 0x26e8ecu: goto label_26e8ec;
        case 0x26e8f8u: goto label_26e8f8;
        case 0x26e914u: goto label_26e914;
        case 0x26e950u: goto label_26e950;
        case 0x26e964u: goto label_26e964;
        case 0x26e974u: goto label_26e974;
        case 0x26e980u: goto label_26e980;
        case 0x26e9a4u: goto label_26e9a4;
        case 0x26e9b8u: goto label_26e9b8;
        case 0x26e9c8u: goto label_26e9c8;
        case 0x26e9d0u: goto label_26e9d0;
        case 0x26e9dcu: goto label_26e9dc;
        case 0x26e9f0u: goto label_26e9f0;
        case 0x26e9fcu: goto label_26e9fc;
        case 0x26ea10u: goto label_26ea10;
        case 0x26ea48u: goto label_26ea48;
        case 0x26ea80u: goto label_26ea80;
        case 0x26ea90u: goto label_26ea90;
        case 0x26eaa4u: goto label_26eaa4;
        case 0x26eab4u: goto label_26eab4;
        case 0x26eac0u: goto label_26eac0;
        case 0x26eaccu: goto label_26eacc;
        case 0x26eadcu: goto label_26eadc;
        case 0x26eb10u: goto label_26eb10;
        case 0x26eb20u: goto label_26eb20;
        case 0x26eb34u: goto label_26eb34;
        case 0x26eb44u: goto label_26eb44;
        case 0x26eb50u: goto label_26eb50;
        case 0x26eb5cu: goto label_26eb5c;
        case 0x26eb70u: goto label_26eb70;
        case 0x26eb84u: goto label_26eb84;
        case 0x26eb90u: goto label_26eb90;
        case 0x26ebacu: goto label_26ebac;
        case 0x26ebd4u: goto label_26ebd4;
        case 0x26ec18u: goto label_26ec18;
        case 0x26ec24u: goto label_26ec24;
        case 0x26ec2cu: goto label_26ec2c;
        case 0x26ec40u: goto label_26ec40;
        case 0x26ec50u: goto label_26ec50;
        case 0x26ec68u: goto label_26ec68;
        case 0x26ec84u: goto label_26ec84;
        case 0x26eca8u: goto label_26eca8;
        case 0x26ecc0u: goto label_26ecc0;
        case 0x26ecd4u: goto label_26ecd4;
        default: break;
    }

    ctx->pc = 0x26e7f8u;

    // 0x26e7f8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x26e7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x26e7fc: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x26e7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x26e800: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x26e800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x26e804: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x26e804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x26e808: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x26e808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x26e80c: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x26e80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x26e810: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x26e810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x26e814: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x26e814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x26e818: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x26e818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x26e81c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x26e81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x26e820: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x26e820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x26e824: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x26e824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e828: 0x2f03f  dsra32      $fp, $v0, 0
    ctx->pc = 0x26e828u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x26e82c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x26e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x26e830: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26e830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26e834: 0x3c023fe9  lui         $v0, 0x3FE9
    ctx->pc = 0x26e834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16361 << 16));
    // 0x26e838: 0x3c38024  and         $s0, $fp, $v1
    ctx->pc = 0x26e838u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 30) & GPR_U64(ctx, 3));
    // 0x26e83c: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x26e83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x26e840: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26e840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26e844: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26E844u;
    {
        const bool branch_taken_0x26e844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E844u;
        // 0x26e848: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e844) {
            ctx->pc = 0x26E860u;
            goto label_26e860;
        }
    }
    ctx->pc = 0x26E84Cu;
    // 0x26e84c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26e84cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e850: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x26e850u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
    // 0x26e854: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x26e854u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x26e858: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x26E858u;
    {
        const bool branch_taken_0x26e858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E858u;
        // 0x26e85c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e858) {
            ctx->pc = 0x26ECE4u;
            goto label_26ece4;
        }
    }
    ctx->pc = 0x26E860u;
label_26e860:
    // 0x26e860: 0x3c024002  lui         $v0, 0x4002
    ctx->pc = 0x26e860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16386 << 16));
    // 0x26e864: 0x3442d97b  ori         $v0, $v0, 0xD97B
    ctx->pc = 0x26e864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55675);
    // 0x26e868: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26e868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26e86c: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x26E86Cu;
    {
        const bool branch_taken_0x26e86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E86Cu;
        // 0x26e870: 0x3c024139  lui         $v0, 0x4139 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16697 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e86c) {
            ctx->pc = 0x26E98Cu;
            goto label_26e98c;
        }
    }
    ctx->pc = 0x26E874u;
    // 0x26e874: 0x1bc00023  blez        $fp, . + 4 + (0x23 << 2)
    ctx->pc = 0x26E874u;
    {
        const bool branch_taken_0x26e874 = (GPR_S64(ctx, 30) <= 0);
        if (branch_taken_0x26e874) {
            ctx->pc = 0x26E904u;
            goto label_26e904;
        }
    }
    ctx->pc = 0x26E87Cu;
    // 0x26e87c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e880: 0xdc25c3c0  ld          $a1, -0x3C40($at)
    ctx->pc = 0x26e880u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC3C0u));
    // 0x26e884: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E884u;
    SET_GPR_U32(ctx, 31, 0x26E88Cu);
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E884u, 0x26E88Cu)) {
        return;
    }
    ctx->pc = 0x26E88Cu;
label_26e88c:
    // 0x26e88c: 0x3c033ff9  lui         $v1, 0x3FF9
    ctx->pc = 0x26e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16377 << 16));
    // 0x26e890: 0x346321fb  ori         $v1, $v1, 0x21FB
    ctx->pc = 0x26e890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8699);
    // 0x26e894: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26E894u;
    {
        const bool branch_taken_0x26e894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x26E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E894u;
        // 0x26e898: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e894) {
            ctx->pc = 0x26E8B0u;
            goto label_26e8b0;
        }
    }
    ctx->pc = 0x26E89Cu;
    // 0x26e89c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e8a0: 0xdc30c3c8  ld          $s0, -0x3C38($at)
    ctx->pc = 0x26e8a0u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x6AC3C8u));
    // 0x26e8a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e8a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26E8A8u;
    {
        const bool branch_taken_0x26e8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8A8u;
        // 0x26e8ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e8a8) {
            ctx->pc = 0x26E8D4u;
            goto label_26e8d4;
        }
    }
    ctx->pc = 0x26E8B0u;
label_26e8b0:
    // 0x26e8b0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e8b4: 0xdc25c3d0  ld          $a1, -0x3C30($at)
    ctx->pc = 0x26e8b4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC3D0u));
    // 0x26e8b8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e8bc: 0xdc30c3d8  ld          $s0, -0x3C28($at)
    ctx->pc = 0x26e8bcu;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x6AC3D8u));
    // 0x26e8c0: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E8C0u;
    SET_GPR_U32(ctx, 31, 0x26E8C8u);
    ctx->pc = 0x26E8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E8C0u;
    // 0x26e8c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E8C0u, 0x26E8C8u)) {
        return;
    }
    ctx->pc = 0x26E8C8u;
label_26e8c8:
    // 0x26e8c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26e8c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e8cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26e8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e8d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26e8d4:
    // 0x26e8d4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E8D4u;
    SET_GPR_U32(ctx, 31, 0x26E8DCu);
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E8D4u, 0x26E8DCu)) {
        return;
    }
    ctx->pc = 0x26E8DCu;
label_26e8dc:
    // 0x26e8dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e8e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26e8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e8e4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E8E4u;
    SET_GPR_U32(ctx, 31, 0x26E8ECu);
    ctx->pc = 0x26E8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E8E4u;
    // 0x26e8e8: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E8E4u, 0x26E8ECu)) {
        return;
    }
    ctx->pc = 0x26E8ECu;
label_26e8ec:
    // 0x26e8ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e8f0: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E8F0u;
    SET_GPR_U32(ctx, 31, 0x26E8F8u);
    ctx->pc = 0x26E8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E8F0u;
    // 0x26e8f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E8F0u, 0x26E8F8u)) {
        return;
    }
    ctx->pc = 0x26E8F8u;
label_26e8f8:
    // 0x26e8f8: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x26e8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x26e8fc: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x26E8FCu;
    {
        const bool branch_taken_0x26e8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8FCu;
        // 0x26e900: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e8fc) {
            ctx->pc = 0x26ECE4u;
            goto label_26ece4;
        }
    }
    ctx->pc = 0x26E904u;
label_26e904:
    // 0x26e904: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e908: 0xdc25c3e0  ld          $a1, -0x3C20($at)
    ctx->pc = 0x26e908u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC3E0u));
    // 0x26e90c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E90Cu;
    SET_GPR_U32(ctx, 31, 0x26E914u);
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E90Cu, 0x26E914u)) {
        return;
    }
    ctx->pc = 0x26E914u;
label_26e914:
    // 0x26e914: 0x3c033ff9  lui         $v1, 0x3FF9
    ctx->pc = 0x26e914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16377 << 16));
    // 0x26e918: 0x346321fb  ori         $v1, $v1, 0x21FB
    ctx->pc = 0x26e918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8699);
    // 0x26e91c: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26E91Cu;
    {
        const bool branch_taken_0x26e91c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x26E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E91Cu;
        // 0x26e920: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e91c) {
            ctx->pc = 0x26E938u;
            goto label_26e938;
        }
    }
    ctx->pc = 0x26E924u;
    // 0x26e924: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e928: 0xdc30c3e8  ld          $s0, -0x3C18($at)
    ctx->pc = 0x26e928u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x6AC3E8u));
    // 0x26e92c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e930: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26E930u;
    {
        const bool branch_taken_0x26e930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E930u;
        // 0x26e934: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e930) {
            ctx->pc = 0x26E95Cu;
            goto label_26e95c;
        }
    }
    ctx->pc = 0x26E938u;
label_26e938:
    // 0x26e938: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e93c: 0xdc25c3f0  ld          $a1, -0x3C10($at)
    ctx->pc = 0x26e93cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC3F0u));
    // 0x26e940: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e944: 0xdc30c3f8  ld          $s0, -0x3C08($at)
    ctx->pc = 0x26e944u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x6AC3F8u));
    // 0x26e948: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E948u;
    SET_GPR_U32(ctx, 31, 0x26E950u);
    ctx->pc = 0x26E94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E948u;
    // 0x26e94c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E948u, 0x26E950u)) {
        return;
    }
    ctx->pc = 0x26E950u;
label_26e950:
    // 0x26e950: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26e950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e954: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26e954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26e95c:
    // 0x26e95c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E95Cu;
    SET_GPR_U32(ctx, 31, 0x26E964u);
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E95Cu, 0x26E964u)) {
        return;
    }
    ctx->pc = 0x26E964u;
label_26e964:
    // 0x26e964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e968: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26e968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e96c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E96Cu;
    SET_GPR_U32(ctx, 31, 0x26E974u);
    ctx->pc = 0x26E970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E96Cu;
    // 0x26e970: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E96Cu, 0x26E974u)) {
        return;
    }
    ctx->pc = 0x26E974u;
label_26e974:
    // 0x26e974: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e978: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E978u;
    SET_GPR_U32(ctx, 31, 0x26E980u);
    ctx->pc = 0x26E97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E978u;
    // 0x26e97c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E978u, 0x26E980u)) {
        return;
    }
    ctx->pc = 0x26E980u;
label_26e980:
    // 0x26e980: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x26e980u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x26e984: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x26E984u;
    {
        const bool branch_taken_0x26e984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E984u;
        // 0x26e988: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e984) {
            ctx->pc = 0x26ECE4u;
            goto label_26ece4;
        }
    }
    ctx->pc = 0x26E98Cu;
label_26e98c:
    // 0x26e98c: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x26e98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x26e990: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26e990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26e994: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x26E994u;
    {
        const bool branch_taken_0x26e994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E994u;
        // 0x26e998: 0x3c027fef  lui         $v0, 0x7FEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e994) {
            ctx->pc = 0x26EBBCu;
            goto label_26ebbc;
        }
    }
    ctx->pc = 0x26E99Cu;
    // 0x26e99c: 0xc09c998  jal         func_272660
    ctx->pc = 0x26E99Cu;
    SET_GPR_U32(ctx, 31, 0x26E9A4u);
    ctx->pc = 0x272660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272660u, 0x26E99Cu, 0x26E9A4u)) {
        return;
    }
    ctx->pc = 0x26E9A4u;
label_26e9a4:
    // 0x26e9a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26e9a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e9a8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e9ac: 0xdc25c400  ld          $a1, -0x3C00($at)
    ctx->pc = 0x26e9acu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC400u));
    // 0x26e9b0: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E9B0u;
    SET_GPR_U32(ctx, 31, 0x26E9B8u);
    ctx->pc = 0x26E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E9B0u;
    // 0x26e9b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E9B0u, 0x26E9B8u)) {
        return;
    }
    ctx->pc = 0x26E9B8u;
label_26e9b8:
    // 0x26e9b8: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x26e9b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x26e9bc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x26e9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x26e9c0: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E9C0u;
    SET_GPR_U32(ctx, 31, 0x26E9C8u);
    ctx->pc = 0x26E9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E9C0u;
    // 0x26e9c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E9C0u, 0x26E9C8u)) {
        return;
    }
    ctx->pc = 0x26E9C8u;
label_26e9c8:
    // 0x26e9c8: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x26E9C8u;
    SET_GPR_U32(ctx, 31, 0x26E9D0u);
    ctx->pc = 0x26E9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E9C8u;
    // 0x26e9cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x26E9C8u, 0x26E9D0u)) {
        return;
    }
    ctx->pc = 0x26E9D0u;
label_26e9d0:
    // 0x26e9d0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26e9d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e9d4: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x26E9D4u;
    SET_GPR_U32(ctx, 31, 0x26E9DCu);
    ctx->pc = 0x26E9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E9D4u;
    // 0x26e9d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x26E9D4u, 0x26E9DCu)) {
        return;
    }
    ctx->pc = 0x26E9DCu;
label_26e9dc:
    // 0x26e9dc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26e9dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e9e0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e9e4: 0xdc25c408  ld          $a1, -0x3BF8($at)
    ctx->pc = 0x26e9e4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC408u));
    // 0x26e9e8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E9E8u;
    SET_GPR_U32(ctx, 31, 0x26E9F0u);
    ctx->pc = 0x26E9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E9E8u;
    // 0x26e9ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E9E8u, 0x26E9F0u)) {
        return;
    }
    ctx->pc = 0x26E9F0u;
label_26e9f0:
    // 0x26e9f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e9f4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E9F4u;
    SET_GPR_U32(ctx, 31, 0x26E9FCu);
    ctx->pc = 0x26E9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E9F4u;
    // 0x26e9f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E9F4u, 0x26E9FCu)) {
        return;
    }
    ctx->pc = 0x26E9FCu;
label_26e9fc:
    // 0x26e9fc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26ea00: 0xdc25c410  ld          $a1, -0x3BF0($at)
    ctx->pc = 0x26ea00u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC410u));
    // 0x26ea04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26ea04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea08: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26EA08u;
    SET_GPR_U32(ctx, 31, 0x26EA10u);
    ctx->pc = 0x26EA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA08u;
    // 0x26ea0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26EA08u, 0x26EA10u)) {
        return;
    }
    ctx->pc = 0x26EA10u;
label_26ea10:
    // 0x26ea10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26ea10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea14: 0x2ac20020  slti        $v0, $s6, 0x20
    ctx->pc = 0x26ea14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x26ea18: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26EA18u;
    {
        const bool branch_taken_0x26ea18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA18u;
        // 0x26ea1c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea18) {
            ctx->pc = 0x26EA3Cu;
            goto label_26ea3c;
        }
    }
    ctx->pc = 0x26EA20u;
    // 0x26ea20: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x26ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x26ea24: 0x2442c2f0  addiu       $v0, $v0, -0x3D10
    ctx->pc = 0x26ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951664));
    // 0x26ea28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26ea2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26ea30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26ea30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26ea34: 0x1604004c  bne         $s0, $a0, . + 4 + (0x4C << 2)
    ctx->pc = 0x26EA34u;
    {
        const bool branch_taken_0x26ea34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x26EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA34u;
        // 0x26ea38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea34) {
            ctx->pc = 0x26EB68u;
            goto label_26eb68;
        }
    }
    ctx->pc = 0x26EA3Cu;
label_26ea3c:
    // 0x26ea3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ea3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea40: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26EA40u;
    SET_GPR_U32(ctx, 31, 0x26EA48u);
    ctx->pc = 0x26EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA40u;
    // 0x26ea44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26EA40u, 0x26EA48u)) {
        return;
    }
    ctx->pc = 0x26EA48u;
label_26ea48:
    // 0x26ea48: 0x10bd03  sra         $s7, $s0, 20
    ctx->pc = 0x26ea48u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 16), 20));
    // 0x26ea4c: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x26ea4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x26ea50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26ea50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea54: 0x31d3e  dsrl32      $v1, $v1, 20
    ctx->pc = 0x26ea54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 20));
    // 0x26ea58: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x26ea58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x26ea5c: 0x2e38023  subu        $s0, $s7, $v1
    ctx->pc = 0x26ea5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x26ea60: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x26ea60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x26ea64: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x26EA64u;
    {
        const bool branch_taken_0x26ea64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ea64) {
            ctx->pc = 0x26EA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EA64u;
            // 0x26ea68: 0xde950000  ld          $s5, 0x0($s4) (Delay Slot)
            SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EB78u;
            goto label_26eb78;
        }
    }
    ctx->pc = 0x26EA6Cu;
    // 0x26ea6c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26ea6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26ea70: 0xdc25c418  ld          $a1, -0x3BE8($at)
    ctx->pc = 0x26ea70u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC418u));
    // 0x26ea74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26ea74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea78: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26EA78u;
    SET_GPR_U32(ctx, 31, 0x26EA80u);
    ctx->pc = 0x26EA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA78u;
    // 0x26ea7c: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26EA78u, 0x26EA80u)) {
        return;
    }
    ctx->pc = 0x26EA80u;
label_26ea80:
    // 0x26ea80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26ea80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ea84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea88: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26EA88u;
    SET_GPR_U32(ctx, 31, 0x26EA90u);
    ctx->pc = 0x26EA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA88u;
    // 0x26ea8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26EA88u, 0x26EA90u)) {
        return;
    }
    ctx->pc = 0x26EA90u;
label_26ea90:
    // 0x26ea90: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26ea90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26ea94: 0xdc25c420  ld          $a1, -0x3BE0($at)
    ctx->pc = 0x26ea94u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC420u));
    // 0x26ea98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26ea98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea9c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26EA9Cu;
    SET_GPR_U32(ctx, 31, 0x26EAA4u);
    ctx->pc = 0x26EAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA9Cu;
    // 0x26eaa0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26EA9Cu, 0x26EAA4u)) {
        return;
    }
    ctx->pc = 0x26EAA4u;
label_26eaa4:
    // 0x26eaa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26eaa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eaa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26eaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eaac: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26EAACu;
    SET_GPR_U32(ctx, 31, 0x26EAB4u);
    ctx->pc = 0x26EAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EAACu;
    // 0x26eab0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26EAACu, 0x26EAB4u)) {
        return;
    }
    ctx->pc = 0x26EAB4u;
label_26eab4:
    // 0x26eab4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26eab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eab8: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26EAB8u;
    SET_GPR_U32(ctx, 31, 0x26EAC0u);
    ctx->pc = 0x26EABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EAB8u;
    // 0x26eabc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26EAB8u, 0x26EAC0u)) {
        return;
    }
    ctx->pc = 0x26EAC0u;
label_26eac0:
    // 0x26eac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26eac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eac4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26EAC4u;
    SET_GPR_U32(ctx, 31, 0x26EACCu);
    ctx->pc = 0x26EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EAC4u;
    // 0x26eac8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26EAC4u, 0x26EACCu)) {
        return;
    }
    ctx->pc = 0x26EACCu;
label_26eacc:
    // 0x26eacc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26eaccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ead0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ead0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ead4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26EAD4u;
    SET_GPR_U32(ctx, 31, 0x26EADCu);
    ctx->pc = 0x26EAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EAD4u;
    // 0x26ead8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26EAD4u, 0x26EADCu)) {
        return;
    }
    ctx->pc = 0x26EADCu;
label_26eadc:
    // 0x26eadc: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x26eadcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x26eae0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26eae0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eae4: 0x31d3e  dsrl32      $v1, $v1, 20
    ctx->pc = 0x26eae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 20));
    // 0x26eae8: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x26eae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x26eaec: 0x2e38023  subu        $s0, $s7, $v1
    ctx->pc = 0x26eaecu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x26eaf0: 0x2a020032  slti        $v0, $s0, 0x32
    ctx->pc = 0x26eaf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x26eaf4: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x26EAF4u;
    {
        const bool branch_taken_0x26eaf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26eaf4) {
            ctx->pc = 0x26EAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EAF4u;
            // 0x26eaf8: 0xde950000  ld          $s5, 0x0($s4) (Delay Slot)
            SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EB78u;
            goto label_26eb78;
        }
    }
    ctx->pc = 0x26EAFCu;
    // 0x26eafc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26eafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26eb00: 0xdc25c428  ld          $a1, -0x3BD8($at)
    ctx->pc = 0x26eb00u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC428u));
    // 0x26eb04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26eb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb08: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26EB08u;
    SET_GPR_U32(ctx, 31, 0x26EB10u);
    ctx->pc = 0x26EB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB08u;
    // 0x26eb0c: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26EB08u, 0x26EB10u)) {
        return;
    }
    ctx->pc = 0x26EB10u;
label_26eb10:
    // 0x26eb10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26eb10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26eb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb18: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26EB18u;
    SET_GPR_U32(ctx, 31, 0x26EB20u);
    ctx->pc = 0x26EB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB18u;
    // 0x26eb1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26EB18u, 0x26EB20u)) {
        return;
    }
    ctx->pc = 0x26EB20u;
label_26eb20:
    // 0x26eb20: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26eb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26eb24: 0xdc25c430  ld          $a1, -0x3BD0($at)
    ctx->pc = 0x26eb24u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC430u));
    // 0x26eb28: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26eb28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb2c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26EB2Cu;
    SET_GPR_U32(ctx, 31, 0x26EB34u);
    ctx->pc = 0x26EB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB2Cu;
    // 0x26eb30: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26EB2Cu, 0x26EB34u)) {
        return;
    }
    ctx->pc = 0x26EB34u;
label_26eb34:
    // 0x26eb34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26eb34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26eb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb3c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26EB3Cu;
    SET_GPR_U32(ctx, 31, 0x26EB44u);
    ctx->pc = 0x26EB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB3Cu;
    // 0x26eb40: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26EB3Cu, 0x26EB44u)) {
        return;
    }
    ctx->pc = 0x26EB44u;
label_26eb44:
    // 0x26eb44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26eb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb48: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26EB48u;
    SET_GPR_U32(ctx, 31, 0x26EB50u);
    ctx->pc = 0x26EB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB48u;
    // 0x26eb4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26EB48u, 0x26EB50u)) {
        return;
    }
    ctx->pc = 0x26EB50u;
label_26eb50:
    // 0x26eb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26eb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb54: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26EB54u;
    SET_GPR_U32(ctx, 31, 0x26EB5Cu);
    ctx->pc = 0x26EB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB54u;
    // 0x26eb58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26EB54u, 0x26EB5Cu)) {
        return;
    }
    ctx->pc = 0x26EB5Cu;
label_26eb5c:
    // 0x26eb5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26eb5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26eb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb64: 0x0  nop
    ctx->pc = 0x26eb64u;
    // NOP
label_26eb68:
    // 0x26eb68: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26EB68u;
    SET_GPR_U32(ctx, 31, 0x26EB70u);
    ctx->pc = 0x26EB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB68u;
    // 0x26eb6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26EB68u, 0x26EB70u)) {
        return;
    }
    ctx->pc = 0x26EB70u;
label_26eb70:
    // 0x26eb70: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x26eb70u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x26eb74: 0xde950000  ld          $s5, 0x0($s4)
    ctx->pc = 0x26eb74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 20), 0)));
label_26eb78:
    // 0x26eb78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26eb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb7c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26EB7Cu;
    SET_GPR_U32(ctx, 31, 0x26EB84u);
    ctx->pc = 0x26EB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB7Cu;
    // 0x26eb80: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26EB7Cu, 0x26EB84u)) {
        return;
    }
    ctx->pc = 0x26EB84u;
label_26eb84:
    // 0x26eb84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26eb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb88: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26EB88u;
    SET_GPR_U32(ctx, 31, 0x26EB90u);
    ctx->pc = 0x26EB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB88u;
    // 0x26eb8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26EB88u, 0x26EB90u)) {
        return;
    }
    ctx->pc = 0x26EB90u;
label_26eb90:
    // 0x26eb90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26eb90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb94: 0x7c10052  bgez        $fp, . + 4 + (0x52 << 2)
    ctx->pc = 0x26EB94u;
    {
        const bool branch_taken_0x26eb94 = (GPR_S64(ctx, 30) >= 0);
        ctx->pc = 0x26EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB94u;
        // 0x26eb98: 0xfe910008  sd          $s1, 0x8($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb94) {
            ctx->pc = 0x26ECE0u;
            goto label_26ece0;
        }
    }
    ctx->pc = 0x26EB9Cu;
    // 0x26eb9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26eb9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eba0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26eba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eba4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26EBA4u;
    SET_GPR_U32(ctx, 31, 0x26EBACu);
    ctx->pc = 0x26EBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBA4u;
    // 0x26eba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26EBA4u, 0x26EBACu)) {
        return;
    }
    ctx->pc = 0x26EBACu;
label_26ebac:
    // 0x26ebac: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x26ebacu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x26ebb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ebb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebb4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x26EBB4u;
    {
        const bool branch_taken_0x26ebb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EBB4u;
        // 0x26ebb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ebb4) {
            ctx->pc = 0x26ECCCu;
            goto label_26eccc;
        }
    }
    ctx->pc = 0x26EBBCu;
label_26ebbc:
    // 0x26ebbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26ebbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26ebc0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26ebc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26ebc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26EBC4u;
    {
        const bool branch_taken_0x26ebc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EBC4u;
        // 0x26ebc8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ebc4) {
            ctx->pc = 0x26EBE8u;
            goto label_26ebe8;
        }
    }
    ctx->pc = 0x26EBCCu;
    // 0x26ebcc: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26EBCCu;
    SET_GPR_U32(ctx, 31, 0x26EBD4u);
    ctx->pc = 0x26EBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBCCu;
    // 0x26ebd0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26EBCCu, 0x26EBD4u)) {
        return;
    }
    ctx->pc = 0x26EBD4u;
label_26ebd4:
    // 0x26ebd4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26ebd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebd8: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x26ebd8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x26ebdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26ebdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebe0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x26EBE0u;
    {
        const bool branch_taken_0x26ebe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EBE0u;
        // 0x26ebe4: 0xfe830008  sd          $v1, 0x8($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ebe0) {
            ctx->pc = 0x26ECE4u;
            goto label_26ece4;
        }
    }
    ctx->pc = 0x26EBE8u;
label_26ebe8:
    // 0x26ebe8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26ebe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26ebec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26ebecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x26ebf0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26ebf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26ebf4: 0x102503  sra         $a0, $s0, 20
    ctx->pc = 0x26ebf4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 20));
    // 0x26ebf8: 0x2493fbea  addiu       $s3, $a0, -0x416
    ctx->pc = 0x26ebf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966250));
    // 0x26ebfc: 0x131d00  sll         $v1, $s3, 20
    ctx->pc = 0x26ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 20));
    // 0x26ec00: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x26ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x26ec04: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x26ec04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x26ec08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x26ec08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26ec0c: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x26ec0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26ec10: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x26ec10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec14: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x26ec14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ec18:
    // 0x26ec18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ec18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec1c: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x26EC1Cu;
    SET_GPR_U32(ctx, 31, 0x26EC24u);
    ctx->pc = 0x26EC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC1Cu;
    // 0x26ec20: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x26EC1Cu, 0x26EC24u)) {
        return;
    }
    ctx->pc = 0x26EC24u;
label_26ec24:
    // 0x26ec24: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x26EC24u;
    SET_GPR_U32(ctx, 31, 0x26EC2Cu);
    ctx->pc = 0x26EC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC24u;
    // 0x26ec28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x26EC24u, 0x26EC2Cu)) {
        return;
    }
    ctx->pc = 0x26EC2Cu;
label_26ec2c:
    // 0x26ec2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ec2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec30: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x26ec30u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x26ec34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26ec34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec38: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26EC38u;
    SET_GPR_U32(ctx, 31, 0x26EC40u);
    ctx->pc = 0x26EC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC38u;
    // 0x26ec3c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26EC38u, 0x26EC40u)) {
        return;
    }
    ctx->pc = 0x26EC40u;
label_26ec40:
    // 0x26ec40: 0x340582e0  ori         $a1, $zero, 0x82E0
    ctx->pc = 0x26ec40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x26ec44: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x26ec44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x26ec48: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26EC48u;
    SET_GPR_U32(ctx, 31, 0x26EC50u);
    ctx->pc = 0x26EC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC48u;
    // 0x26ec4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26EC48u, 0x26EC50u)) {
        return;
    }
    ctx->pc = 0x26EC50u;
label_26ec50:
    // 0x26ec50: 0x601fff1  bgez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x26EC50u;
    {
        const bool branch_taken_0x26ec50 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x26EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC50u;
        // 0x26ec54: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec50) {
            ctx->pc = 0x26EC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26ec18;
        }
    }
    ctx->pc = 0x26EC58u;
    // 0x26ec58: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26ec58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26ec5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26EC5Cu;
    {
        const bool branch_taken_0x26ec5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC5Cu;
        // 0x26ec60: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec5c) {
            ctx->pc = 0x26EC6Cu;
            goto label_26ec6c;
        }
    }
    ctx->pc = 0x26EC64u;
    // 0x26ec64: 0x0  nop
    ctx->pc = 0x26ec64u;
    // NOP
label_26ec68:
    // 0x26ec68: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x26ec68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26ec6c:
    // 0x26ec6c: 0x2630ffff  addiu       $s0, $s1, -0x1
    ctx->pc = 0x26ec6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x26ec70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26ec70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec74: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x26ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x26ec78: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x26ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x26ec7c: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26EC7Cu;
    SET_GPR_U32(ctx, 31, 0x26EC84u);
    ctx->pc = 0x26EC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC7Cu;
    // 0x26ec80: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26EC7Cu, 0x26EC84u)) {
        return;
    }
    ctx->pc = 0x26EC84u;
label_26ec84:
    // 0x26ec84: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x26EC84u;
    {
        const bool branch_taken_0x26ec84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC84u;
        // 0x26ec88: 0x3c09006b  lui         $t1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec84) {
            ctx->pc = 0x26EC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26ec68;
        }
    }
    ctx->pc = 0x26EC8Cu;
    // 0x26ec8c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x26ec8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec90: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26ec90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec94: 0x2529c1e8  addiu       $t1, $t1, -0x3E18
    ctx->pc = 0x26ec94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294951400));
    // 0x26ec98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26ec98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26ec9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eca0: 0xc09c2b4  jal         func_270AD0
    ctx->pc = 0x26ECA0u;
    SET_GPR_U32(ctx, 31, 0x26ECA8u);
    ctx->pc = 0x26ECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ECA0u;
    // 0x26eca4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x270AD0u, 0x26ECA0u, 0x26ECA8u)) {
        return;
    }
    ctx->pc = 0x26ECA8u;
label_26eca8:
    // 0x26eca8: 0x7c1000d  bgez        $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x26ECA8u;
    {
        const bool branch_taken_0x26eca8 = (GPR_S64(ctx, 30) >= 0);
        ctx->pc = 0x26ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ECA8u;
        // 0x26ecac: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eca8) {
            ctx->pc = 0x26ECE0u;
            goto label_26ece0;
        }
    }
    ctx->pc = 0x26ECB0u;
    // 0x26ecb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26ecb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ecb4: 0xde850000  ld          $a1, 0x0($s4)
    ctx->pc = 0x26ecb4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26ecb8: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26ECB8u;
    SET_GPR_U32(ctx, 31, 0x26ECC0u);
    ctx->pc = 0x26ECBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ECB8u;
    // 0x26ecbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26ECB8u, 0x26ECC0u)) {
        return;
    }
    ctx->pc = 0x26ECC0u;
label_26ecc0:
    // 0x26ecc0: 0xde850008  ld          $a1, 0x8($s4)
    ctx->pc = 0x26ecc0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26ecc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ecc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ecc8: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x26ecc8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_26eccc:
    // 0x26eccc: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26ECCCu;
    SET_GPR_U32(ctx, 31, 0x26ECD4u);
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26ECCCu, 0x26ECD4u)) {
        return;
    }
    ctx->pc = 0x26ECD4u;
label_26ecd4:
    // 0x26ecd4: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x26ecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x26ecd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26ECD8u;
    {
        const bool branch_taken_0x26ecd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ECD8u;
        // 0x26ecdc: 0x161023  negu        $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ecd8) {
            ctx->pc = 0x26ECE4u;
            goto label_26ece4;
        }
    }
    ctx->pc = 0x26ECE0u;
label_26ece0:
    // 0x26ece0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x26ece0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26ece4:
    // 0x26ece4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x26ece4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26ece8: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x26ece8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26ecec: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x26ececu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26ecf0: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x26ecf0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26ecf4: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x26ecf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26ecf8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x26ecf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26ecfc: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x26ecfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26ed00: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x26ed00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26ed04: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x26ed04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26ed08: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x26ed08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ed0c: 0x3e00008  jr          $ra
    ctx->pc = 0x26ED0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED0Cu;
        // 0x26ed10: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ED0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26ED14u;
    // 0x26ed14: 0x0  nop
    ctx->pc = 0x26ed14u;
    // NOP
    ctx->pc = 0x26ed18u;
}
