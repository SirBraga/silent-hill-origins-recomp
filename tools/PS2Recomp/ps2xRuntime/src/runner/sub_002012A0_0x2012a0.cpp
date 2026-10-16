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

// Function: sub_002012A0
// Address: 0x2012a0 - 0x201428
void sub_002012A0_0x2012a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002012A0_0x2012a0");
#endif

    switch (ctx->pc) {
        case 0x2012a0u: goto label_2012a0;
        case 0x2012a4u: goto label_2012a4;
        case 0x2012a8u: goto label_2012a8;
        case 0x2012acu: goto label_2012ac;
        case 0x2012b0u: goto label_2012b0;
        case 0x2012b4u: goto label_2012b4;
        case 0x2012b8u: goto label_2012b8;
        case 0x2012bcu: goto label_2012bc;
        case 0x2012c0u: goto label_2012c0;
        case 0x2012c4u: goto label_2012c4;
        case 0x2012c8u: goto label_2012c8;
        case 0x2012ccu: goto label_2012cc;
        case 0x2012d0u: goto label_2012d0;
        case 0x2012d4u: goto label_2012d4;
        case 0x2012d8u: goto label_2012d8;
        case 0x2012dcu: goto label_2012dc;
        case 0x2012e0u: goto label_2012e0;
        case 0x2012e4u: goto label_2012e4;
        case 0x2012e8u: goto label_2012e8;
        case 0x2012ecu: goto label_2012ec;
        case 0x2012f0u: goto label_2012f0;
        case 0x2012f4u: goto label_2012f4;
        case 0x2012f8u: goto label_2012f8;
        case 0x2012fcu: goto label_2012fc;
        case 0x201300u: goto label_201300;
        case 0x201304u: goto label_201304;
        case 0x201308u: goto label_201308;
        case 0x20130cu: goto label_20130c;
        case 0x201310u: goto label_201310;
        case 0x201314u: goto label_201314;
        case 0x201318u: goto label_201318;
        case 0x20131cu: goto label_20131c;
        case 0x201320u: goto label_201320;
        case 0x201324u: goto label_201324;
        case 0x201328u: goto label_201328;
        case 0x20132cu: goto label_20132c;
        case 0x201330u: goto label_201330;
        case 0x201334u: goto label_201334;
        case 0x201338u: goto label_201338;
        case 0x20133cu: goto label_20133c;
        case 0x201340u: goto label_201340;
        case 0x201344u: goto label_201344;
        case 0x201348u: goto label_201348;
        case 0x20134cu: goto label_20134c;
        case 0x201350u: goto label_201350;
        case 0x201354u: goto label_201354;
        case 0x201358u: goto label_201358;
        case 0x20135cu: goto label_20135c;
        case 0x201360u: goto label_201360;
        case 0x201364u: goto label_201364;
        case 0x201368u: goto label_201368;
        case 0x20136cu: goto label_20136c;
        case 0x201370u: goto label_201370;
        case 0x201374u: goto label_201374;
        case 0x201378u: goto label_201378;
        case 0x20137cu: goto label_20137c;
        case 0x201380u: goto label_201380;
        case 0x201384u: goto label_201384;
        case 0x201388u: goto label_201388;
        case 0x20138cu: goto label_20138c;
        case 0x201390u: goto label_201390;
        case 0x201394u: goto label_201394;
        case 0x201398u: goto label_201398;
        case 0x20139cu: goto label_20139c;
        case 0x2013a0u: goto label_2013a0;
        case 0x2013a4u: goto label_2013a4;
        case 0x2013a8u: goto label_2013a8;
        case 0x2013acu: goto label_2013ac;
        case 0x2013b0u: goto label_2013b0;
        case 0x2013b4u: goto label_2013b4;
        case 0x2013b8u: goto label_2013b8;
        case 0x2013bcu: goto label_2013bc;
        case 0x2013c0u: goto label_2013c0;
        case 0x2013c4u: goto label_2013c4;
        case 0x2013c8u: goto label_2013c8;
        case 0x2013ccu: goto label_2013cc;
        case 0x2013d0u: goto label_2013d0;
        case 0x2013d4u: goto label_2013d4;
        case 0x2013d8u: goto label_2013d8;
        case 0x2013dcu: goto label_2013dc;
        case 0x2013e0u: goto label_2013e0;
        case 0x2013e4u: goto label_2013e4;
        case 0x2013e8u: goto label_2013e8;
        case 0x2013ecu: goto label_2013ec;
        case 0x2013f0u: goto label_2013f0;
        case 0x2013f4u: goto label_2013f4;
        case 0x2013f8u: goto label_2013f8;
        case 0x2013fcu: goto label_2013fc;
        case 0x201400u: goto label_201400;
        case 0x201404u: goto label_201404;
        case 0x201408u: goto label_201408;
        case 0x20140cu: goto label_20140c;
        case 0x201410u: goto label_201410;
        case 0x201414u: goto label_201414;
        case 0x201418u: goto label_201418;
        case 0x20141cu: goto label_20141c;
        case 0x201420u: goto label_201420;
        case 0x201424u: goto label_201424;
        default: break;
    }

    ctx->pc = 0x2012a0u;

label_2012a0:
    // 0x2012a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2012a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2012a4:
    // 0x2012a4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2012a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2012a8:
    // 0x2012a8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2012a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2012ac:
    // 0x2012ac: 0x3c16005c  lui         $s6, 0x5C
    ctx->pc = 0x2012acu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)92 << 16));
label_2012b0:
    // 0x2012b0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2012b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_2012b4:
    // 0x2012b4: 0x3c170073  lui         $s7, 0x73
    ctx->pc = 0x2012b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)115 << 16));
label_2012b8:
    // 0x2012b8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2012b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2012bc:
    // 0x2012bc: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2012bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2012c0:
    // 0x2012c0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2012c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2012c4:
    // 0x2012c4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2012c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2012c8:
    // 0x2012c8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2012c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2012cc:
    // 0x2012cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2012ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2012d0:
    // 0x2012d0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2012d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2012d4:
    // 0x2012d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2012d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2012d8:
    // 0x2012d8: 0x8ed10168  lw          $s1, 0x168($s6)
    ctx->pc = 0x2012d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 360)));
label_2012dc:
    // 0x2012dc: 0x0  nop
    ctx->pc = 0x2012dcu;
    // NOP
label_2012e0:
    // 0x2012e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2012e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2012e4:
    // 0x2012e4: 0x3d1100a  movz        $v0, $fp, $s1
    ctx->pc = 0x2012e4u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30));
label_2012e8:
    // 0x2012e8: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_2012ec:
    if (ctx->pc == 0x2012ECu) {
        ctx->pc = 0x2012ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012E8u;
        // 0x2012ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2012F0u;
        goto label_2012f0;
    }
    ctx->pc = 0x2012E8u;
    {
        const bool branch_taken_0x2012e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2012ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012E8u;
        // 0x2012ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012e8) {
            ctx->pc = 0x201364u;
            goto label_201364;
        }
    }
    ctx->pc = 0x2012F0u;
label_2012f0:
    // 0x2012f0: 0x26f5108c  addiu       $s5, $s7, 0x108C
    ctx->pc = 0x2012f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 4236));
label_2012f4:
    // 0x2012f4: 0x3c14006a  lui         $s4, 0x6A
    ctx->pc = 0x2012f4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)106 << 16));
label_2012f8:
    // 0x2012f8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2012f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2012fc:
    // 0x2012fc: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x2012fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_201300:
    // 0x201300: 0x268538e0  addiu       $a1, $s4, 0x38E0
    ctx->pc = 0x201300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 14560));
label_201304:
    // 0x201304: 0x40f809  jalr        $v0
label_201308:
    if (ctx->pc == 0x201308u) {
        ctx->pc = 0x201308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201304u;
        // 0x201308: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20130Cu;
        goto label_20130c;
    }
    ctx->pc = 0x201304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20130Cu);
        ctx->pc = 0x201308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201304u;
        // 0x201308: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201304u, 0x20130Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20130Cu;
label_20130c:
    // 0x20130c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_201310:
    if (ctx->pc == 0x201310u) {
        ctx->pc = 0x201310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20130Cu;
        // 0x201310: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201314u;
        goto label_201314;
    }
    ctx->pc = 0x20130Cu;
    {
        const bool branch_taken_0x20130c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20130c) {
            ctx->pc = 0x201310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20130Cu;
            // 0x201310: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201354u;
            goto label_201354;
        }
    }
    ctx->pc = 0x201314u;
label_201314:
    // 0x201314: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x201314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_201318:
    // 0x201318: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_20131c:
    if (ctx->pc == 0x20131Cu) {
        ctx->pc = 0x20131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201318u;
        // 0x20131c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201320u;
        goto label_201320;
    }
    ctx->pc = 0x201318u;
    {
        const bool branch_taken_0x201318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201318) {
            ctx->pc = 0x20131Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201318u;
            // 0x20131c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201348u;
            goto label_201348;
        }
    }
    ctx->pc = 0x201320u;
label_201320:
    // 0x201320: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_201324:
    if (ctx->pc == 0x201324u) {
        ctx->pc = 0x201324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201320u;
        // 0x201324: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201328u;
        goto label_201328;
    }
    ctx->pc = 0x201320u;
    {
        const bool branch_taken_0x201320 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x201324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201320u;
        // 0x201324: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201320) {
            ctx->pc = 0x201344u;
            goto label_201344;
        }
    }
    ctx->pc = 0x201328u;
label_201328:
    // 0x201328: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x201328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_20132c:
    // 0x20132c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x20132cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_201330:
    // 0x201330: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x201330u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_201334:
    // 0x201334: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x201334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_201338:
    // 0x201338: 0x60f809  jalr        $v1
label_20133c:
    if (ctx->pc == 0x20133Cu) {
        ctx->pc = 0x20133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201338u;
        // 0x20133c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201340u;
        goto label_201340;
    }
    ctx->pc = 0x201338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201340u);
        ctx->pc = 0x20133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201338u;
        // 0x20133c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201338u, 0x201340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201340u;
label_201340:
    // 0x201340: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x201340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201344:
    // 0x201344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201348:
    // 0x201348: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_20134c:
    if (ctx->pc == 0x20134Cu) {
        ctx->pc = 0x20134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201348u;
        // 0x20134c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201350u;
        goto label_201350;
    }
    ctx->pc = 0x201348u;
    {
        const bool branch_taken_0x201348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201348) {
            ctx->pc = 0x20134Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201348u;
            // 0x20134c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201354u;
            goto label_201354;
        }
    }
    ctx->pc = 0x201350u;
label_201350:
    // 0x201350: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x201350u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201354:
    // 0x201354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201358:
    // 0x201358: 0x271100a  movz        $v0, $s3, $s1
    ctx->pc = 0x201358u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19));
label_20135c:
    // 0x20135c: 0x5040ffe8  beql        $v0, $zero, . + 4 + (-0x18 << 2)
label_201360:
    if (ctx->pc == 0x201360u) {
        ctx->pc = 0x201360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20135Cu;
        // 0x201360: 0x8ea20024  lw          $v0, 0x24($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201364u;
        goto label_201364;
    }
    ctx->pc = 0x20135Cu;
    {
        const bool branch_taken_0x20135c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20135c) {
            ctx->pc = 0x201360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20135Cu;
            // 0x201360: 0x8ea20024  lw          $v0, 0x24($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201300;
        }
    }
    ctx->pc = 0x201364u;
label_201364:
    // 0x201364: 0x1640ffde  bnez        $s2, . + 4 + (-0x22 << 2)
label_201368:
    if (ctx->pc == 0x201368u) {
        ctx->pc = 0x201368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201364u;
        // 0x201368: 0x8ed10168  lw          $s1, 0x168($s6) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20136Cu;
        goto label_20136c;
    }
    ctx->pc = 0x201364u;
    {
        const bool branch_taken_0x201364 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x201368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201364u;
        // 0x201368: 0x8ed10168  lw          $s1, 0x168($s6) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201364) {
            ctx->pc = 0x2012E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2012e0;
        }
    }
    ctx->pc = 0x20136Cu;
label_20136c:
    // 0x20136c: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_201370:
    if (ctx->pc == 0x201370u) {
        ctx->pc = 0x201370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20136Cu;
        // 0x201370: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201374u;
        goto label_201374;
    }
    ctx->pc = 0x20136Cu;
    {
        const bool branch_taken_0x20136c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x201370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20136Cu;
        // 0x201370: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20136c) {
            ctx->pc = 0x2013ECu;
            goto label_2013ec;
        }
    }
    ctx->pc = 0x201374u;
label_201374:
    // 0x201374: 0x3c14006a  lui         $s4, 0x6A
    ctx->pc = 0x201374u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)106 << 16));
label_201378:
    // 0x201378: 0x2453108c  addiu       $s3, $v0, 0x108C
    ctx->pc = 0x201378u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_20137c:
    // 0x20137c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x20137cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201380:
    // 0x201380: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x201380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_201384:
    // 0x201384: 0x0  nop
    ctx->pc = 0x201384u;
    // NOP
label_201388:
    // 0x201388: 0x268538e0  addiu       $a1, $s4, 0x38E0
    ctx->pc = 0x201388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 14560));
label_20138c:
    // 0x20138c: 0x40f809  jalr        $v0
label_201390:
    if (ctx->pc == 0x201390u) {
        ctx->pc = 0x201390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20138Cu;
        // 0x201390: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201394u;
        goto label_201394;
    }
    ctx->pc = 0x20138Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201394u);
        ctx->pc = 0x201390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20138Cu;
        // 0x201390: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20138Cu, 0x201394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201394u;
label_201394:
    // 0x201394: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_201398:
    if (ctx->pc == 0x201398u) {
        ctx->pc = 0x201398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201394u;
        // 0x201398: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20139Cu;
        goto label_20139c;
    }
    ctx->pc = 0x201394u;
    {
        const bool branch_taken_0x201394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201394) {
            ctx->pc = 0x201398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201394u;
            // 0x201398: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2013DCu;
            goto label_2013dc;
        }
    }
    ctx->pc = 0x20139Cu;
label_20139c:
    // 0x20139c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x20139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2013a0:
    // 0x2013a0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2013a4:
    if (ctx->pc == 0x2013A4u) {
        ctx->pc = 0x2013A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013A0u;
        // 0x2013a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2013A8u;
        goto label_2013a8;
    }
    ctx->pc = 0x2013A0u;
    {
        const bool branch_taken_0x2013a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2013a0) {
            ctx->pc = 0x2013A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2013A0u;
            // 0x2013a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2013D0u;
            goto label_2013d0;
        }
    }
    ctx->pc = 0x2013A8u;
label_2013a8:
    // 0x2013a8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2013ac:
    if (ctx->pc == 0x2013ACu) {
        ctx->pc = 0x2013ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013A8u;
        // 0x2013ac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2013B0u;
        goto label_2013b0;
    }
    ctx->pc = 0x2013A8u;
    {
        const bool branch_taken_0x2013a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013A8u;
        // 0x2013ac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013a8) {
            ctx->pc = 0x2013CCu;
            goto label_2013cc;
        }
    }
    ctx->pc = 0x2013B0u;
label_2013b0:
    // 0x2013b0: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x2013b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2013b4:
    // 0x2013b4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2013b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2013b8:
    // 0x2013b8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2013b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2013bc:
    // 0x2013bc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2013bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2013c0:
    // 0x2013c0: 0x40f809  jalr        $v0
label_2013c4:
    if (ctx->pc == 0x2013C4u) {
        ctx->pc = 0x2013C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013C0u;
        // 0x2013c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2013C8u;
        goto label_2013c8;
    }
    ctx->pc = 0x2013C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2013C8u);
        ctx->pc = 0x2013C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013C0u;
        // 0x2013c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2013C0u, 0x2013C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2013C8u;
label_2013c8:
    // 0x2013c8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2013c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2013cc:
    // 0x2013cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2013ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2013d0:
    // 0x2013d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2013d4:
    if (ctx->pc == 0x2013D4u) {
        ctx->pc = 0x2013D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013D0u;
        // 0x2013d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2013D8u;
        goto label_2013d8;
    }
    ctx->pc = 0x2013D0u;
    {
        const bool branch_taken_0x2013d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2013D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013D0u;
        // 0x2013d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013d0) {
            ctx->pc = 0x2013E0u;
            goto label_2013e0;
        }
    }
    ctx->pc = 0x2013D8u;
label_2013d8:
    // 0x2013d8: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x2013d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2013dc:
    // 0x2013dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2013dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2013e0:
    // 0x2013e0: 0x251100a  movz        $v0, $s2, $s1
    ctx->pc = 0x2013e0u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18));
label_2013e4:
    // 0x2013e4: 0x5040ffe8  beql        $v0, $zero, . + 4 + (-0x18 << 2)
label_2013e8:
    if (ctx->pc == 0x2013E8u) {
        ctx->pc = 0x2013E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013E4u;
        // 0x2013e8: 0x8e620024  lw          $v0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2013ECu;
        goto label_2013ec;
    }
    ctx->pc = 0x2013E4u;
    {
        const bool branch_taken_0x2013e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2013e4) {
            ctx->pc = 0x2013E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2013E4u;
            // 0x2013e8: 0x8e620024  lw          $v0, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201388;
        }
    }
    ctx->pc = 0x2013ECu;
label_2013ec:
    // 0x2013ec: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2013ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2013f0:
    // 0x2013f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2013f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2013f4:
    // 0x2013f4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2013f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2013f8:
    // 0x2013f8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2013f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2013fc:
    // 0x2013fc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2013fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_201400:
    // 0x201400: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x201400u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_201404:
    // 0x201404: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x201404u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_201408:
    // 0x201408: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x201408u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20140c:
    // 0x20140c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x20140cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_201410:
    // 0x201410: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x201410u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_201414:
    // 0x201414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201418:
    // 0x201418: 0x3e00008  jr          $ra
label_20141c:
    if (ctx->pc == 0x20141Cu) {
        ctx->pc = 0x20141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201418u;
        // 0x20141c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201420u;
        goto label_201420;
    }
    ctx->pc = 0x201418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201418u;
        // 0x20141c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201420u;
label_201420:
    // 0x201420: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x201420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_201424:
    // 0x201424: 0x0  nop
    ctx->pc = 0x201424u;
    // NOP
    ctx->pc = 0x201428u;
}
