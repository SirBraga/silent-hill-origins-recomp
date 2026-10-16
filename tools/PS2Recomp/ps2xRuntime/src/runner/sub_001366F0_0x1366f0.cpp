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

// Function: sub_001366F0
// Address: 0x1366f0 - 0x1368a8
void sub_001366F0_0x1366f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001366F0_0x1366f0");
#endif

    switch (ctx->pc) {
        case 0x136724u: goto label_136724;
        case 0x136734u: goto label_136734;
        case 0x136750u: goto label_136750;
        case 0x136760u: goto label_136760;
        case 0x13677cu: goto label_13677c;
        case 0x13678cu: goto label_13678c;
        case 0x1367a8u: goto label_1367a8;
        case 0x1367b8u: goto label_1367b8;
        case 0x1367e4u: goto label_1367e4;
        case 0x136808u: goto label_136808;
        case 0x13683cu: goto label_13683c;
        case 0x136858u: goto label_136858;
        case 0x13688cu: goto label_13688c;
        default: break;
    }

    ctx->pc = 0x1366f0u;

    // 0x1366f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1366f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1366f4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1366f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1366f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1366f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1366fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1366fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x136700: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x136700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136704: 0x8c4384d8  lw          $v1, -0x7B28($v0)
    ctx->pc = 0x136704u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3384D8u));
    // 0x136708: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x136708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13670c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x13670cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x136710: 0x1072002d  beq         $v1, $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x136710u;
    {
        const bool branch_taken_0x136710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x136714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136710u;
        // 0x136714: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136710) {
            ctx->pc = 0x1367C8u;
            goto label_1367c8;
        }
    }
    ctx->pc = 0x136718u;
    // 0x136718: 0x26300320  addiu       $s0, $s1, 0x320
    ctx->pc = 0x136718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
    // 0x13671c: 0xc068218  jal         func_1A0860
    ctx->pc = 0x13671Cu;
    SET_GPR_U32(ctx, 31, 0x136724u);
    ctx->pc = 0x136720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13671Cu;
    // 0x136720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x13671Cu, 0x136724u)) {
        return;
    }
    ctx->pc = 0x136724u;
label_136724:
    // 0x136724: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x136724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x136728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13672c: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x13672Cu;
    SET_GPR_U32(ctx, 31, 0x136734u);
    ctx->pc = 0x136730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13672Cu;
    // 0x136730: 0x24a5df58  addiu       $a1, $a1, -0x20A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x13672Cu, 0x136734u)) {
        return;
    }
    ctx->pc = 0x136734u;
label_136734:
    // 0x136734: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x136734u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136738: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x136738u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18));
    // 0x13673c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13673cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136740: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x136740u;
    {
        const bool branch_taken_0x136740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136740) {
            ctx->pc = 0x136744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136740u;
            // 0x136744: 0x8e221bbc  lw          $v0, 0x1BBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1367D0u;
            goto label_1367d0;
        }
    }
    ctx->pc = 0x136748u;
    // 0x136748: 0xc068218  jal         func_1A0860
    ctx->pc = 0x136748u;
    SET_GPR_U32(ctx, 31, 0x136750u);
    ctx->pc = 0x13674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136748u;
    // 0x13674c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x136748u, 0x136750u)) {
        return;
    }
    ctx->pc = 0x136750u;
label_136750:
    // 0x136750: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x136750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x136754: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136758: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x136758u;
    SET_GPR_U32(ctx, 31, 0x136760u);
    ctx->pc = 0x13675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136758u;
    // 0x13675c: 0x24a5df70  addiu       $a1, $a1, -0x2090 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x136758u, 0x136760u)) {
        return;
    }
    ctx->pc = 0x136760u;
label_136760:
    // 0x136760: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x136760u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136764: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x136764u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18));
    // 0x136768: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x136768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13676c: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x13676Cu;
    {
        const bool branch_taken_0x13676c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13676c) {
            ctx->pc = 0x136770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13676Cu;
            // 0x136770: 0x8e221bbc  lw          $v0, 0x1BBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1367D0u;
            goto label_1367d0;
        }
    }
    ctx->pc = 0x136774u;
    // 0x136774: 0xc068218  jal         func_1A0860
    ctx->pc = 0x136774u;
    SET_GPR_U32(ctx, 31, 0x13677Cu);
    ctx->pc = 0x136778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136774u;
    // 0x136778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x136774u, 0x13677Cu)) {
        return;
    }
    ctx->pc = 0x13677Cu;
label_13677c:
    // 0x13677c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13677cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x136780: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136784: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x136784u;
    SET_GPR_U32(ctx, 31, 0x13678Cu);
    ctx->pc = 0x136788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136784u;
    // 0x136788: 0x24a5df88  addiu       $a1, $a1, -0x2078 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x136784u, 0x13678Cu)) {
        return;
    }
    ctx->pc = 0x13678Cu;
label_13678c:
    // 0x13678c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13678cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136790: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x136790u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18));
    // 0x136794: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x136794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136798: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x136798u;
    {
        const bool branch_taken_0x136798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136798) {
            ctx->pc = 0x13679Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136798u;
            // 0x13679c: 0x8e221bbc  lw          $v0, 0x1BBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1367D0u;
            goto label_1367d0;
        }
    }
    ctx->pc = 0x1367A0u;
    // 0x1367a0: 0xc068218  jal         func_1A0860
    ctx->pc = 0x1367A0u;
    SET_GPR_U32(ctx, 31, 0x1367A8u);
    ctx->pc = 0x1367A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1367A0u;
    // 0x1367a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x1367A0u, 0x1367A8u)) {
        return;
    }
    ctx->pc = 0x1367A8u;
label_1367a8:
    // 0x1367a8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1367a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1367ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1367acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1367b0: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x1367B0u;
    SET_GPR_U32(ctx, 31, 0x1367B8u);
    ctx->pc = 0x1367B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1367B0u;
    // 0x1367b4: 0x24a5dfa0  addiu       $a1, $a1, -0x2060 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x1367B0u, 0x1367B8u)) {
        return;
    }
    ctx->pc = 0x1367B8u;
label_1367b8:
    // 0x1367b8: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x1367b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0));
    // 0x1367bc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1367bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1367c0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1367C0u;
    {
        const bool branch_taken_0x1367c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1367c0) {
            ctx->pc = 0x1367C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1367C0u;
            // 0x1367c4: 0x8e221bbc  lw          $v0, 0x1BBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1367D0u;
            goto label_1367d0;
        }
    }
    ctx->pc = 0x1367C8u;
label_1367c8:
    // 0x1367c8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1367C8u;
    {
        const bool branch_taken_0x1367c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1367CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367C8u;
        // 0x1367cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367c8) {
            ctx->pc = 0x136890u;
            goto label_136890;
        }
    }
    ctx->pc = 0x1367D0u;
label_1367d0:
    // 0x1367d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1367D0u;
    {
        const bool branch_taken_0x1367d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1367D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367D0u;
        // 0x1367d4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367d0) {
            ctx->pc = 0x1367F4u;
            goto label_1367f4;
        }
    }
    ctx->pc = 0x1367D8u;
    // 0x1367d8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1367d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1367dc: 0xc063f04  jal         func_18FC10
    ctx->pc = 0x1367DCu;
    SET_GPR_U32(ctx, 31, 0x1367E4u);
    ctx->pc = 0x1367E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1367DCu;
    // 0x1367e0: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FC10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18FC10u, 0x1367DCu, 0x1367E4u)) {
        return;
    }
    ctx->pc = 0x1367E4u;
label_1367e4:
    // 0x1367e4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1367e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1367e8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1367e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1367ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1367ECu;
    {
        const bool branch_taken_0x1367ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1367F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367ECu;
        // 0x1367f0: 0x8c6546d0  lw          $a1, 0x46D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367ec) {
            ctx->pc = 0x136814u;
            goto label_136814;
        }
    }
    ctx->pc = 0x1367F4u;
label_1367f4:
    // 0x1367f4: 0x8e221bc0  lw          $v0, 0x1BC0($s1)
    ctx->pc = 0x1367f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7104)));
    // 0x1367f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1367F8u;
    {
        const bool branch_taken_0x1367f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1367FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367F8u;
        // 0x1367fc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367f8) {
            ctx->pc = 0x136844u;
            goto label_136844;
        }
    }
    ctx->pc = 0x136800u;
    // 0x136800: 0xc063f4c  jal         func_18FD30
    ctx->pc = 0x136800u;
    SET_GPR_U32(ctx, 31, 0x136808u);
    ctx->pc = 0x136804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136800u;
    // 0x136804: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FD30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18FD30u, 0x136800u, 0x136808u)) {
        return;
    }
    ctx->pc = 0x136808u;
label_136808:
    // 0x136808: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x136808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x13680c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x13680cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x136810: 0x8c6546d8  lw          $a1, 0x46D8($v1)
    ctx->pc = 0x136810u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B46D8u));
label_136814:
    // 0x136814: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x136814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x136818: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x136818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
    // 0x13681c: 0x10a3001b  beq         $a1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x13681Cu;
    {
        const bool branch_taken_0x13681c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x136820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13681Cu;
        // 0x136820: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13681c) {
            ctx->pc = 0x13688Cu;
            goto label_13688c;
        }
    }
    ctx->pc = 0x136824u;
    // 0x136824: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x136824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x136828: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x136828u;
    {
        const bool branch_taken_0x136828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136828u;
        // 0x13682c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136828) {
            ctx->pc = 0x13688Cu;
            goto label_13688c;
        }
    }
    ctx->pc = 0x136830u;
    // 0x136830: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x136830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x136834: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x136834u;
    SET_GPR_U32(ctx, 31, 0x13683Cu);
    ctx->pc = 0x136838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136834u;
    // 0x136838: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x136834u, 0x13683Cu)) {
        return;
    }
    ctx->pc = 0x13683Cu;
label_13683c:
    // 0x13683c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13683Cu;
    {
        const bool branch_taken_0x13683c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13683Cu;
        // 0x136840: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13683c) {
            ctx->pc = 0x136890u;
            goto label_136890;
        }
    }
    ctx->pc = 0x136844u;
label_136844:
    // 0x136844: 0x8e221bc4  lw          $v0, 0x1BC4($s1)
    ctx->pc = 0x136844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7108)));
    // 0x136848: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x136848u;
    {
        const bool branch_taken_0x136848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136848u;
        // 0x13684c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136848) {
            ctx->pc = 0x13688Cu;
            goto label_13688c;
        }
    }
    ctx->pc = 0x136850u;
    // 0x136850: 0xc063f9a  jal         func_18FE68
    ctx->pc = 0x136850u;
    SET_GPR_U32(ctx, 31, 0x136858u);
    ctx->pc = 0x136854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136850u;
    // 0x136854: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FE68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18FE68u, 0x136850u, 0x136858u)) {
        return;
    }
    ctx->pc = 0x136858u;
label_136858:
    // 0x136858: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x136858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x13685c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x13685cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x136860: 0x8c6546e0  lw          $a1, 0x46E0($v1)
    ctx->pc = 0x136860u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B46E0u));
    // 0x136864: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x136864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x136868: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x136868u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x13686c: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13686Cu;
    {
        const bool branch_taken_0x13686c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x136870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13686Cu;
        // 0x136870: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13686c) {
            ctx->pc = 0x13688Cu;
            goto label_13688c;
        }
    }
    ctx->pc = 0x136874u;
    // 0x136874: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x136874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x136878: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x136878u;
    {
        const bool branch_taken_0x136878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136878u;
        // 0x13687c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136878) {
            ctx->pc = 0x13688Cu;
            goto label_13688c;
        }
    }
    ctx->pc = 0x136880u;
    // 0x136880: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x136880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x136884: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x136884u;
    SET_GPR_U32(ctx, 31, 0x13688Cu);
    ctx->pc = 0x136888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136884u;
    // 0x136888: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x136884u, 0x13688Cu)) {
        return;
    }
    ctx->pc = 0x13688Cu;
label_13688c:
    // 0x13688c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13688cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_136890:
    // 0x136890: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x136890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x136894: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x136894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136898: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x136898u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13689c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13689cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1368a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1368A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1368A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368A0u;
        // 0x1368a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1368A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1368A8u;
}
