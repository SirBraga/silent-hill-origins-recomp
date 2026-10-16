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

// Function: sub_00211300
// Address: 0x211300 - 0x2115f0
void sub_00211300_0x211300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211300_0x211300");
#endif

    switch (ctx->pc) {
        case 0x211388u: goto label_211388;
        case 0x2113a0u: goto label_2113a0;
        case 0x2113e0u: goto label_2113e0;
        case 0x211410u: goto label_211410;
        case 0x211440u: goto label_211440;
        case 0x211468u: goto label_211468;
        case 0x2114a0u: goto label_2114a0;
        case 0x2114b8u: goto label_2114b8;
        case 0x2114d0u: goto label_2114d0;
        case 0x211540u: goto label_211540;
        case 0x211560u: goto label_211560;
        case 0x211580u: goto label_211580;
        default: break;
    }

    ctx->pc = 0x211300u;

    // 0x211300: 0x27bdf9c0  addiu       $sp, $sp, -0x640
    ctx->pc = 0x211300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965696));
    // 0x211304: 0x7fb00630  sq          $s0, 0x630($sp)
    ctx->pc = 0x211304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1584), GPR_VEC(ctx, 16));
    // 0x211308: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x211308u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21130c: 0x7fb10620  sq          $s1, 0x620($sp)
    ctx->pc = 0x21130cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1568), GPR_VEC(ctx, 17));
    // 0x211310: 0x58083  sra         $s0, $a1, 2
    ctx->pc = 0x211310u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 2));
    // 0x211314: 0x7fb20610  sq          $s2, 0x610($sp)
    ctx->pc = 0x211314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1552), GPR_VEC(ctx, 18));
    // 0x211318: 0x688c3  sra         $s1, $a2, 3
    ctx->pc = 0x211318u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 6), 3));
    // 0x21131c: 0x7fb405f0  sq          $s4, 0x5F0($sp)
    ctx->pc = 0x21131cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1520), GPR_VEC(ctx, 20));
    // 0x211320: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x211320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x211324: 0x7fb605d0  sq          $s6, 0x5D0($sp)
    ctx->pc = 0x211324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1488), GPR_VEC(ctx, 22));
    // 0x211328: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x211328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x21132c: 0x7fb705c0  sq          $s7, 0x5C0($sp)
    ctx->pc = 0x21132cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1472), GPR_VEC(ctx, 23));
    // 0x211330: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x211330u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211334: 0x7fbe05b0  sq          $fp, 0x5B0($sp)
    ctx->pc = 0x211334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1456), GPR_VEC(ctx, 30));
    // 0x211338: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x211338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x21133c: 0x7fb30600  sq          $s3, 0x600($sp)
    ctx->pc = 0x21133cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1536), GPR_VEC(ctx, 19));
    // 0x211340: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x211340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x211344: 0x7fb505e0  sq          $s5, 0x5E0($sp)
    ctx->pc = 0x211344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1504), GPR_VEC(ctx, 21));
    // 0x211348: 0x79083  sra         $s2, $a3, 2
    ctx->pc = 0x211348u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 7), 2));
    // 0x21134c: 0xffbf05a0  sd          $ra, 0x5A0($sp)
    ctx->pc = 0x21134cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1440), GPR_U64(ctx, 31));
    // 0x211350: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x211350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211354: 0x2414007f  addiu       $s4, $zero, 0x7F
    ctx->pc = 0x211354u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x211358: 0x8ec401cc  lw          $a0, 0x1CC($s6)
    ctx->pc = 0x211358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x21135c: 0xafa20584  sw          $v0, 0x584($sp)
    ctx->pc = 0x21135cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1412), GPR_U32(ctx, 2));
    // 0x211360: 0xafa30588  sw          $v1, 0x588($sp)
    ctx->pc = 0x211360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1416), GPR_U32(ctx, 3));
    // 0x211364: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x211364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x211368: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x211368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x21136c: 0x8fa50584  lw          $a1, 0x584($sp)
    ctx->pc = 0x21136cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1412)));
    // 0x211370: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x211370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x211374: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x211374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211378: 0xafa2058c  sw          $v0, 0x58C($sp)
    ctx->pc = 0x211378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1420), GPR_U32(ctx, 2));
    // 0x21137c: 0xafa40580  sw          $a0, 0x580($sp)
    ctx->pc = 0x21137cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1408), GPR_U32(ctx, 4));
    // 0x211380: 0xc084404  jal         func_211010
    ctx->pc = 0x211380u;
    SET_GPR_U32(ctx, 31, 0x211388u);
    ctx->pc = 0x211384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211380u;
    // 0x211384: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x211010u, 0x211380u, 0x211388u)) {
        return;
    }
    ctx->pc = 0x211388u;
label_211388:
    // 0x211388: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x211388u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21138c: 0xafbd0590  sw          $sp, 0x590($sp)
    ctx->pc = 0x21138cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1424), GPR_U32(ctx, 29));
    // 0x211390: 0x27b70100  addiu       $s7, $sp, 0x100
    ctx->pc = 0x211390u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x211394: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x211394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x211398: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x211398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21139c: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x21139cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2113a0:
    // 0x2113a0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2113a0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2113a4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2113a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2113a8: 0x0  nop
    ctx->pc = 0x2113a8u;
    // NOP
    // 0x2113ac: 0x0  nop
    ctx->pc = 0x2113acu;
    // NOP
    // 0x2113b0: 0x681fffb  bgez        $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2113B0u;
    {
        const bool branch_taken_0x2113b0 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x2113B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113B0u;
        // 0x2113b4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113b0) {
            ctx->pc = 0x2113A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2113a0;
        }
    }
    ctx->pc = 0x2113B8u;
    // 0x2113b8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2113b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2113bc: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x2113bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2113c0: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x2113c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2113c4: 0xafb00594  sw          $s0, 0x594($sp)
    ctx->pc = 0x2113c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1428), GPR_U32(ctx, 16));
    // 0x2113c8: 0xafb10598  sw          $s1, 0x598($sp)
    ctx->pc = 0x2113c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1432), GPR_U32(ctx, 17));
    // 0x2113cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2113ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2113d0: 0x1bc00056  blez        $fp, . + 4 + (0x56 << 2)
    ctx->pc = 0x2113D0u;
    {
        const bool branch_taken_0x2113d0 = (GPR_S64(ctx, 30) <= 0);
        ctx->pc = 0x2113D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113D0u;
        // 0x2113d4: 0xafb2059c  sw          $s2, 0x59C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1436), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113d0) {
            ctx->pc = 0x21152Cu;
            goto label_21152c;
        }
    }
    ctx->pc = 0x2113D8u;
    // 0x2113d8: 0x8fa20590  lw          $v0, 0x590($sp)
    ctx->pc = 0x2113d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
    // 0x2113dc: 0x0  nop
    ctx->pc = 0x2113dcu;
    // NOP
label_2113e0:
    // 0x2113e0: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x2113e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    // 0x2113e4: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x2113e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2113e8: 0x90750000  lbu         $s5, 0x0($v1)
    ctx->pc = 0x2113e8u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2113ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2113ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2113f0: 0x8fa30584  lw          $v1, 0x584($sp)
    ctx->pc = 0x2113f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1412)));
    // 0x2113f4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2113f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2113f8: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x2113f8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2113fc: 0x708023  subu        $s0, $v1, $s0
    ctx->pc = 0x2113fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x211400: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x211400u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x211404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211408: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x211408u;
    SET_GPR_U32(ctx, 31, 0x211410u);
    ctx->pc = 0x21140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211408u;
    // 0x21140c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x211408u, 0x211410u)) {
        return;
    }
    ctx->pc = 0x211410u;
label_211410:
    // 0x211410: 0x8ec30088  lw          $v1, 0x88($s6)
    ctx->pc = 0x211410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    // 0x211414: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x211414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211418: 0x8fa40588  lw          $a0, 0x588($sp)
    ctx->pc = 0x211418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1416)));
    // 0x21141c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x21141cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x211420: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x211420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x211424: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x211424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211428: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x211428u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21142c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x21142cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x211430: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x211430u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211434: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x211434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211438: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x211438u;
    SET_GPR_U32(ctx, 31, 0x211440u);
    ctx->pc = 0x21143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211438u;
    // 0x21143c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x211438u, 0x211440u)) {
        return;
    }
    ctx->pc = 0x211440u;
label_211440:
    // 0x211440: 0x8ec30088  lw          $v1, 0x88($s6)
    ctx->pc = 0x211440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    // 0x211444: 0x222882d  daddu       $s1, $s1, $v0
    ctx->pc = 0x211444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x211448: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x211448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x21144c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x21144cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x211450: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x211450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211454: 0x8fa2058c  lw          $v0, 0x58C($sp)
    ctx->pc = 0x211454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
    // 0x211458: 0x439023  subu        $s2, $v0, $v1
    ctx->pc = 0x211458u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21145c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21145cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211460: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x211460u;
    SET_GPR_U32(ctx, 31, 0x211468u);
    ctx->pc = 0x211464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211460u;
    // 0x211464: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x211460u, 0x211468u)) {
        return;
    }
    ctx->pc = 0x211468u;
label_211468:
    // 0x211468: 0x131878  dsll        $v1, $s3, 1
    ctx->pc = 0x211468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << 1);
    // 0x21146c: 0x108178  dsll        $s0, $s0, 5
    ctx->pc = 0x21146cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 5);
    // 0x211470: 0x73182d  daddu       $v1, $v1, $s3
    ctx->pc = 0x211470u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 19));
    // 0x211474: 0x122138  dsll        $a0, $s2, 4
    ctx->pc = 0x211474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << 4);
    // 0x211478: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x211478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x21147c: 0x268d0001  addiu       $t5, $s4, 0x1
    ctx->pc = 0x21147cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x211480: 0x64730090  daddiu      $s3, $v1, 0x90
    ctx->pc = 0x211480u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)144);
    // 0x211484: 0x222882d  daddu       $s1, $s1, $v0
    ctx->pc = 0x211484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x211488: 0x64920040  daddiu      $s2, $a0, 0x40
    ctx->pc = 0x211488u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)64);
    // 0x21148c: 0x66100100  daddiu      $s0, $s0, 0x100
    ctx->pc = 0x21148cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)256);
    // 0x211490: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x211490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x211494: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x211494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211498: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x211498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21149c: 0x0  nop
    ctx->pc = 0x21149cu;
    // NOP
label_2114a0:
    // 0x2114a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2114a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2114a4: 0x660c0200  daddiu      $t4, $s0, 0x200
    ctx->pc = 0x2114a4u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)512);
    // 0x2114a8: 0x50802d  daddu       $s0, $v0, $s0
    ctx->pc = 0x2114a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2114ac: 0x246bffff  addiu       $t3, $v1, -0x1
    ctx->pc = 0x2114acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2114b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2114b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2114b4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2114b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2114b8:
    // 0x2114b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2114b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2114bc: 0x648a0120  daddiu      $t2, $a0, 0x120
    ctx->pc = 0x2114bcu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)288);
    // 0x2114c0: 0x64402d  daddu       $t0, $v1, $a0
    ctx->pc = 0x2114c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2114c4: 0x24a9ffff  addiu       $t1, $a1, -0x1
    ctx->pc = 0x2114c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2114c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2114c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2114cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2114ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2114d0:
    // 0x2114d0: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2114d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2114d4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2114d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2114d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2114D8u;
    {
        const bool branch_taken_0x2114d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2114DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114D8u;
        // 0x2114dc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2114d8) {
            ctx->pc = 0x2114E8u;
            goto label_2114e8;
        }
    }
    ctx->pc = 0x2114E0u;
    // 0x2114e0: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x2114e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x2114e4: 0xa0f50000  sb          $s5, 0x0($a3)
    ctx->pc = 0x2114e4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 21));
label_2114e8:
    // 0x2114e8: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x2114e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2114ec: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2114ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2114f0: 0x64840080  daddiu      $a0, $a0, 0x80
    ctx->pc = 0x2114f0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)128);
    // 0x2114f4: 0x4a1fff6  bgez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2114F4u;
    {
        const bool branch_taken_0x2114f4 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x2114F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114F4u;
        // 0x2114f8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2114f4) {
            ctx->pc = 0x2114D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2114d0;
        }
    }
    ctx->pc = 0x2114FCu;
    // 0x2114fc: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2114fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211500: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x211500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211504: 0x4a1ffec  bgez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x211504u;
    {
        const bool branch_taken_0x211504 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x211508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211504u;
        // 0x211508: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211504) {
            ctx->pc = 0x2114B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2114b8;
        }
    }
    ctx->pc = 0x21150Cu;
    // 0x21150c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x21150cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211510: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x211510u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211514: 0x461ffe2  bgez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x211514u;
    {
        const bool branch_taken_0x211514 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x211518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211514u;
        // 0x211518: 0x180802d  daddu       $s0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211514) {
            ctx->pc = 0x2114A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2114a0;
        }
    }
    ctx->pc = 0x21151Cu;
    // 0x21151c: 0x1a0a02d  daddu       $s4, $t5, $zero
    ctx->pc = 0x21151cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211520: 0x29e102a  slt         $v0, $s4, $fp
    ctx->pc = 0x211520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x211524: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x211524u;
    {
        const bool branch_taken_0x211524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211524u;
        // 0x211528: 0x8fa20590  lw          $v0, 0x590($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211524) {
            ctx->pc = 0x2113E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2113e0;
        }
    }
    ctx->pc = 0x21152Cu;
label_21152c:
    // 0x21152c: 0x8fa3059c  lw          $v1, 0x59C($sp)
    ctx->pc = 0x21152cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1436)));
    // 0x211530: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x211530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211534: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x211534u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x211538: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x211538u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21153c: 0x8fa40594  lw          $a0, 0x594($sp)
    ctx->pc = 0x21153cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1428)));
label_211540:
    // 0x211540: 0x24690001  addiu       $t1, $v1, 0x1
    ctx->pc = 0x211540u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x211544: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x211544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211548: 0x8fa30580  lw          $v1, 0x580($sp)
    ctx->pc = 0x211548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1408)));
    // 0x21154c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21154cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211550: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x211550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211554: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x211554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211558: 0x8fa30598  lw          $v1, 0x598($sp)
    ctx->pc = 0x211558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1432)));
    // 0x21155c: 0x0  nop
    ctx->pc = 0x21155cu;
    // NOP
label_211560:
    // 0x211560: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x211560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x211564: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x211564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x211568: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x211568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21156c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x21156cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x211570: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x211570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x211574: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x211574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211578: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x211578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x21157c: 0x0  nop
    ctx->pc = 0x21157cu;
    // NOP
label_211580:
    // 0x211580: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x211580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211584: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x211584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x211588: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x211588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21158c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21158cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x211590: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x211590u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x211594: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x211594u;
    {
        const bool branch_taken_0x211594 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x211598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211594u;
        // 0x211598: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211594) {
            ctx->pc = 0x211580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211580;
        }
    }
    ctx->pc = 0x21159Cu;
    // 0x21159c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x21159cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2115a0: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x2115a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2115a4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2115A4u;
    {
        const bool branch_taken_0x2115a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2115A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115A4u;
        // 0x2115a8: 0x8fa30598  lw          $v1, 0x598($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2115a4) {
            ctx->pc = 0x211560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211560;
        }
    }
    ctx->pc = 0x2115ACu;
    // 0x2115ac: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x2115acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2115b0: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x2115b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2115b4: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2115B4u;
    {
        const bool branch_taken_0x2115b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2115b4) {
            ctx->pc = 0x2115B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2115B4u;
            // 0x2115b8: 0x8fa40594  lw          $a0, 0x594($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211540;
        }
    }
    ctx->pc = 0x2115BCu;
    // 0x2115bc: 0x7bb00630  lq          $s0, 0x630($sp)
    ctx->pc = 0x2115bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x2115c0: 0x7bb10620  lq          $s1, 0x620($sp)
    ctx->pc = 0x2115c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1568)));
    // 0x2115c4: 0x7bb20610  lq          $s2, 0x610($sp)
    ctx->pc = 0x2115c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1552)));
    // 0x2115c8: 0x7bb30600  lq          $s3, 0x600($sp)
    ctx->pc = 0x2115c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1536)));
    // 0x2115cc: 0x7bb405f0  lq          $s4, 0x5F0($sp)
    ctx->pc = 0x2115ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1520)));
    // 0x2115d0: 0x7bb505e0  lq          $s5, 0x5E0($sp)
    ctx->pc = 0x2115d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1504)));
    // 0x2115d4: 0x7bb605d0  lq          $s6, 0x5D0($sp)
    ctx->pc = 0x2115d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
    // 0x2115d8: 0x7bb705c0  lq          $s7, 0x5C0($sp)
    ctx->pc = 0x2115d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1472)));
    // 0x2115dc: 0x7bbe05b0  lq          $fp, 0x5B0($sp)
    ctx->pc = 0x2115dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1456)));
    // 0x2115e0: 0xdfbf05a0  ld          $ra, 0x5A0($sp)
    ctx->pc = 0x2115e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1440)));
    // 0x2115e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2115E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2115E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115E4u;
        // 0x2115e8: 0x27bd0640  addiu       $sp, $sp, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2115E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2115ECu;
    // 0x2115ec: 0x0  nop
    ctx->pc = 0x2115ecu;
    // NOP
    ctx->pc = 0x2115f0u;
}
